/*
 * XREFs of NtGdiCreateDIBSection @ 0x1C003AD80
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C003B1A0 (GreCreateDIBitmapReal.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0257E9C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C02A6BAC (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 *     ?noOverflowCJSCAN@@YAKKGGK@Z @ 0x1C02A6D24 (-noOverflowCJSCAN@@YAKKGGK@Z.c)
 */

void *__fastcall NtGdiCreateDIBSection(
        HDC a1,
        void *a2,
        int a3,
        struct tagBITMAPINFO *a4,
        unsigned int a5,
        size_t Size,
        char a7,
        __int64 a8,
        PVOID *a9)
{
  void *DIBitmapReal; // r14
  struct tagBITMAPINFO *v12; // rdi
  LONG biWidth_high; // r9d
  LONG biWidth_low; // ecx
  WORD biHeight_high; // r8
  WORD biHeight; // dx
  DWORD biSizeImage; // r12d
  DWORD biCompression; // eax
  int v19; // ecx
  NTSTATUS v20; // esi
  ULONG v21; // ecx
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  __int64 CurrentProcess; // rax
  HANDLE v24; // rax
  void *v25; // rsi
  PVOID *v26; // r8
  int v28; // [rsp+70h] [rbp-68h]
  PVOID BaseAddress; // [rsp+78h] [rbp-60h] BYREF
  struct tagBITMAPINFO *v30; // [rsp+80h] [rbp-58h] BYREF
  PVOID Object; // [rsp+88h] [rbp-50h] BYREF
  PVOID v32[9]; // [rsp+90h] [rbp-48h] BYREF
  ULONG_PTR RegionSize; // [rsp+F8h] [rbp+20h] BYREF

  DIBitmapReal = 0LL;
  Object = 0LL;
  v28 = 0;
  if ( a4 )
  {
    v30 = 0LL;
    BaseAddress = 0LL;
    bCaptureBitmapInfo(a4, a5, (unsigned int)Size, &v30);
    v12 = v30;
    if ( v30 )
    {
      if ( v30->bmiHeader.biSize == 12 )
      {
        biWidth_high = HIWORD(v30->bmiHeader.biWidth);
        biWidth_low = LOWORD(v30->bmiHeader.biWidth);
        biHeight_high = HIWORD(v30->bmiHeader.biHeight);
        biHeight = v30->bmiHeader.biHeight;
      }
      else
      {
        biCompression = v30->bmiHeader.biCompression;
        if ( biCompression > 0xA || (v19 = 1033, !_bittest(&v19, biCompression)) )
        {
          biSizeImage = v30->bmiHeader.biSizeImage;
LABEL_12:
          RegionSize = biSizeImage;
          if ( !biSizeImage )
          {
LABEL_42:
            FreeThreadBufferWithTag(v12);
            return DIBitmapReal;
          }
          if ( a2 )
          {
            v32[0] = (PVOID)(a3 & 0xFFFF0000);
            RegionSize = (unsigned __int16)a3 + (unsigned __int64)biSizeImage;
            CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
            v20 = ObReferenceObjectByHandle(a2, 6u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
            if ( v20 >= 0 )
            {
              CurrentProcess = PsGetCurrentProcess();
              v20 = MmMapViewOfSection(Object, CurrentProcess, &BaseAddress, 0LL, RegionSize, v32, &RegionSize, 1, 0, 4);
              if ( v20 < 0 )
                EngSetLastError(0x57u);
              ObfDereferenceObject(Object);
              goto LABEL_22;
            }
            v21 = 87;
          }
          else
          {
            v20 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
            a3 = 0;
            if ( v20 >= 0 )
              goto LABEL_22;
            v21 = 8;
          }
          EngSetLastError(v21);
LABEL_22:
          if ( v20 >= 0 )
          {
            v32[0] = (char *)BaseAddress + (unsigned __int16)a3;
            if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
              v24 = (HANDLE)GrepSecureVirtualMemory(BaseAddress, RegionSize, 4LL);
            else
              v24 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
            v25 = v24;
            v32[1] = v24;
            if ( v24
              && (DIBitmapReal = (void *)GreCreateDIBitmapReal(
                                           a1,
                                           a5,
                                           Size,
                                           biSizeImage,
                                           (__int64)a2,
                                           a3,
                                           (__int64)v24,
                                           a7 & 4 | 2u,
                                           a8,
                                           0LL),
                  (Object = DIBitmapReal) != 0LL) )
            {
              v26 = a9;
              if ( (unsigned __int64)a9 >= W32UserProbeAddress )
                v26 = (PVOID *)W32UserProbeAddress;
              *v26 = v32[0];
              v28 = 1;
            }
            else
            {
              EngSetLastError(0x57u);
            }
            if ( !v28 )
            {
              if ( DIBitmapReal )
              {
                bDeleteSurface(DIBitmapReal);
                DIBitmapReal = 0LL;
              }
              else
              {
                if ( v25 )
                {
                  if ( (unsigned int)EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_2316776760_59890556_FeatureDescriptorDetails) )
                    GrepUnsecureVirtualMemory(v25);
                  else
                    MmUnsecureVirtualMemory(v25);
                }
                if ( a2 )
                {
                  ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                }
                else
                {
                  RegionSize = 0LL;
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, &RegionSize, 0x8000u);
                }
              }
            }
          }
          goto LABEL_42;
        }
        biWidth_high = v30->bmiHeader.biHeight;
        if ( biWidth_high < 0 )
          biWidth_high = -biWidth_high;
        biHeight_high = v30->bmiHeader.biBitCount;
        biHeight = v30->bmiHeader.biPlanes;
        biWidth_low = v30->bmiHeader.biWidth;
      }
      biSizeImage = noOverflowCJSCAN(biWidth_low, biHeight, biHeight_high, biWidth_high);
      goto LABEL_12;
    }
  }
  return DIBitmapReal;
}
