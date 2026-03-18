/*
 * XREFs of NtGdiStretchDIBitsInternal @ 0x1C00346D0
 * Callers:
 *     <none>
 * Callees:
 *     GreStretchDIBitsInternal @ 0x1C00348C8 (GreStretchDIBitsInternal.c)
 *     bCaptureBitmapInfo @ 0x1C00352D4 (bCaptureBitmapInfo.c)
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
        void *Src,
        int a12,
        int a13,
        int a14,
        SIZE_T Size,
        __int64 a16)
{
  HDC v16; // r10
  unsigned int v17; // ebx
  HANDLE v18; // r14
  __int64 v19; // rdi
  int v20; // esi

  v16 = a1;
  v17 = 1;
  v18 = 0LL;
  v19 = (__int64)Address;
  if ( !Address || !Src || !a14 )
  {
    v19 = 0LL;
    v20 = Size;
    goto LABEL_16;
  }
  if ( (unsigned int)bCaptureBitmapInfo(Src) )
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
  v16 = a1;
LABEL_16:
  if ( v17 )
  {
    v17 = GreStretchDIBitsInternal(v16, a5, a6, a7, a8, a9, v19, 0LL, a12, a13, a14, v20, a16);
    if ( v18 )
      MmUnsecureVirtualMemory(v18);
  }
  return v17;
}
