/*
 * XREFs of NtGdiCreateDIBSection @ 0x1C004B100
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C004B524 (GreGetBitmapBitsSize.c)
 *     GreCreateDIBitmapReal @ 0x1C004B598 (GreCreateDIBitmapReal.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     GreGetBitmapSizeInternal @ 0x1C02A580C (GreGetBitmapSizeInternal.c)
 */

__int64 __fastcall NtGdiCreateDIBSection(
        HDC a1,
        void *a2,
        int a3,
        char *a4,
        unsigned int a5,
        unsigned int Size,
        char a7,
        __int64 a8,
        PVOID *a9)
{
  __int64 DIBitmapReal; // rsi
  unsigned int *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  NTSTATUS v17; // r15d
  ULONG v18; // ecx
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  __int64 CurrentProcess; // rax
  HANDLE v21; // rax
  void *v22; // r15
  PVOID *v23; // r8
  int v25; // [rsp+70h] [rbp-78h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-70h] BYREF
  unsigned int *v27; // [rsp+80h] [rbp-68h]
  PVOID BaseAddress; // [rsp+88h] [rbp-60h] BYREF
  PVOID v29; // [rsp+90h] [rbp-58h] BYREF
  _DWORD v30[2]; // [rsp+98h] [rbp-50h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-48h] BYREF
  unsigned int BitmapBitsSize; // [rsp+108h] [rbp+20h]

  DIBitmapReal = 0LL;
  v25 = 0;
  if ( a4 )
  {
    v13 = 0LL;
    v27 = 0LL;
    BaseAddress = 0LL;
    if ( Size - 4 <= 0x270FFFC )
    {
      v13 = (unsigned int *)AllocThreadBufferWithTag(Size, 1886221383LL, 0LL);
      v27 = v13;
      if ( v13 )
      {
        if ( &a4[Size] < a4 || (unsigned __int64)&a4[Size] > W32UserProbeAddress )
          *W32UserProbeAddress = 0;
        memmove(v13, a4, Size);
        v15 = *v13;
        if ( (unsigned int)v15 < 0x28
          || Size < (unsigned int)v15
          || Size != (unsigned int)GreGetBitmapSizeInternal(v13, a5, v15) )
        {
          FreeThreadBufferWithTag(v13, v14);
          v13 = 0LL;
          v27 = 0LL;
        }
      }
    }
    if ( v13 )
    {
      BitmapBitsSize = GreGetBitmapBitsSize(v13);
      v16 = BitmapBitsSize;
      RegionSize = BitmapBitsSize;
      if ( !BitmapBitsSize )
      {
LABEL_37:
        FreeThreadBufferWithTag(v13, v16);
        return DIBitmapReal;
      }
      if ( a2 )
      {
        v30[0] = a3 & 0xFFFF0000;
        v30[1] = 0;
        RegionSize = (unsigned __int16)a3 + (unsigned __int64)BitmapBitsSize;
        CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
        v17 = ObReferenceObjectByHandle(a2, 6u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
        if ( v17 >= 0 )
        {
          CurrentProcess = PsGetCurrentProcess();
          v17 = MmMapViewOfSection(Object, CurrentProcess, &BaseAddress, 0LL, RegionSize, v30, &RegionSize, 1, 0, 4);
          if ( v17 < 0 )
            EngSetLastError(0x57u);
          ObfDereferenceObject(Object);
          goto LABEL_22;
        }
        v18 = 87;
      }
      else
      {
        v17 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
        a3 = 0;
        if ( v17 >= 0 )
          goto LABEL_22;
        v18 = 8;
      }
      EngSetLastError(v18);
LABEL_22:
      if ( v17 >= 0 )
      {
        v29 = (char *)BaseAddress + (unsigned __int16)a3;
        v21 = MmSecureVirtualMemory(BaseAddress, RegionSize, 4u);
        v22 = v21;
        Object = v21;
        if ( v21
          && (DIBitmapReal = GreCreateDIBitmapReal(
                               a1,
                               a5,
                               Size,
                               BitmapBitsSize,
                               (__int64)a2,
                               a3,
                               (__int64)v21,
                               a7 & 4 | 2u,
                               a8,
                               0LL)) != 0 )
        {
          v23 = a9;
          if ( (unsigned __int64)a9 >= W32UserProbeAddress )
            v23 = (PVOID *)W32UserProbeAddress;
          *v23 = v29;
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
            if ( v22 )
              MmUnsecureVirtualMemory(v22);
            if ( a2 )
            {
              ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            }
            else
            {
              RegionSize = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v29, &RegionSize, 0x8000u);
            }
          }
        }
      }
      goto LABEL_37;
    }
  }
  return DIBitmapReal;
}
