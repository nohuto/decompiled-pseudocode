/*
 * XREFs of NtGdiStretchDIBitsInternal @ 0x1C00998E0
 * Callers:
 *     <none>
 * Callees:
 *     GreStretchDIBitsInternal @ 0x1C0099AD8 (GreStretchDIBitsInternal.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C02A5F8C (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtGdiStretchDIBitsInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char *Address,
        struct tagBITMAPINFO *Src,
        unsigned int a12,
        int a13,
        size_t a14,
        SIZE_T Size,
        __int64 a16)
{
  HDC v16; // r10
  unsigned int v17; // ebx
  HANDLE v18; // r14
  __int64 v19; // rdi
  int v20; // esi
  __int64 v21; // r15
  __int64 v23; // [rsp+90h] [rbp-48h] BYREF

  v16 = a1;
  v23 = 0LL;
  v17 = 1;
  v18 = 0LL;
  v19 = (__int64)Address;
  if ( !Address || !Src || !(_DWORD)a14 )
  {
    v21 = 0LL;
    v19 = 0LL;
    v20 = Size;
    goto LABEL_16;
  }
  if ( (unsigned int)bCaptureBitmapInfo(Src, a12, (unsigned int)a14, (struct tagBITMAPINFO **)&v23) )
  {
    v20 = Size;
    if ( (_DWORD)Size )
    {
      if ( ((unsigned __int8)Address & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Address[(unsigned int)Size] > W32UserProbeAddress
        || &Address[(unsigned int)Size] < Address )
      {
        *W32UserProbeAddress = 0;
      }
    }
    v18 = MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
    if ( v18 )
      goto LABEL_15;
  }
  else
  {
    v20 = Size;
  }
  v17 = 0;
LABEL_15:
  v21 = v23;
  v16 = a1;
LABEL_16:
  if ( v17 )
  {
    v17 = GreStretchDIBitsInternal(v16, a5, a6, a7, a8, a9, v19, v21, a12, a13, a14, v20, a16);
    if ( v18 )
      MmUnsecureVirtualMemory(v18);
  }
  if ( v21 )
    FreeThreadBufferWithTag(v21);
  return v17;
}
