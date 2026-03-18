/*
 * XREFs of NtGdiCreateDIBSection @ 0x1C0097F20
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C0098254 (GreCreateDIBitmapReal.c)
 *     GreGetBitmapBitsSize @ 0x1C0098AFC (GreGetBitmapBitsSize.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C02A5F8C (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
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
  void *DIBitmapReal; // rsi
  struct tagBITMAPINFO *v12; // rdi
  unsigned int BitmapBitsSize; // eax
  int v14; // r13d
  NTSTATUS v15; // r15d
  HANDLE v16; // rax
  void *v17; // r15
  PVOID *v18; // r8
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 CurrentProcess; // rax
  ULONG v24; // ecx
  int v25; // [rsp+70h] [rbp-68h]
  struct tagBITMAPINFO *v26; // [rsp+78h] [rbp-60h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp-58h] BYREF
  PVOID Object; // [rsp+88h] [rbp-50h] BYREF
  PVOID v29[9]; // [rsp+90h] [rbp-48h] BYREF
  ULONG_PTR RegionSize; // [rsp+F8h] [rbp+20h] BYREF

  DIBitmapReal = 0LL;
  Object = 0LL;
  v25 = 0;
  if ( a4 )
  {
    v26 = 0LL;
    BaseAddress = 0LL;
    bCaptureBitmapInfo(a4, a5, (unsigned int)Size, &v26);
    v12 = v26;
    if ( v26 )
    {
      BitmapBitsSize = GreGetBitmapBitsSize(v26);
      v14 = BitmapBitsSize;
      RegionSize = BitmapBitsSize;
      if ( !BitmapBitsSize )
      {
LABEL_13:
        FreeThreadBufferWithTag(v12);
        return DIBitmapReal;
      }
      if ( a2 )
      {
        v29[0] = (PVOID)(a3 & 0xFFFF0000);
        RegionSize = (unsigned __int16)a3 + (unsigned __int64)BitmapBitsSize;
        CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
        v15 = ObReferenceObjectByHandle(a2, 6u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
        if ( v15 >= 0 )
        {
          CurrentProcess = PsGetCurrentProcess(v22, v21);
          v15 = MmMapViewOfSection(Object, CurrentProcess, &BaseAddress, 0LL, RegionSize, v29, &RegionSize, 1, 0, 4);
          if ( v15 < 0 )
            EngSetLastError(0x57u);
          ObfDereferenceObject(Object);
          goto LABEL_6;
        }
        v24 = 87;
      }
      else
      {
        v15 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
        a3 = 0;
        if ( v15 >= 0 )
          goto LABEL_6;
        v24 = 8;
      }
      EngSetLastError(v24);
LABEL_6:
      if ( v15 >= 0 )
      {
        v29[0] = (char *)BaseAddress + (unsigned __int16)a3;
        v16 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
        v17 = v16;
        v29[1] = v16;
        if ( v16
          && (DIBitmapReal = (void *)GreCreateDIBitmapReal(
                                       a1,
                                       a5,
                                       Size,
                                       v14,
                                       (__int64)a2,
                                       a3,
                                       (__int64)v16,
                                       a7 & 4 | 2u,
                                       a8,
                                       0LL),
              (Object = DIBitmapReal) != 0LL) )
        {
          v18 = a9;
          if ( (unsigned __int64)a9 >= W32UserProbeAddress )
            v18 = (PVOID *)W32UserProbeAddress;
          *v18 = v29[0];
          v25 = 1;
        }
        else
        {
          EngSetLastError(0x57u);
        }
        if ( !v25 )
        {
          if ( DIBitmapReal )
          {
            bDeleteSurface(DIBitmapReal);
            DIBitmapReal = 0LL;
          }
          else
          {
            if ( v17 )
              MmUnsecureVirtualMemory(v17);
            if ( a2 )
            {
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            }
            else
            {
              RegionSize = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, &RegionSize, 0x8000u);
            }
          }
        }
      }
      goto LABEL_13;
    }
  }
  return DIBitmapReal;
}
