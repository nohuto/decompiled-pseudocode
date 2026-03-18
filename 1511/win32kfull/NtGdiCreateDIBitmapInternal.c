/*
 * XREFs of NtGdiCreateDIBitmapInternal @ 0x1C004AEE0
 * Callers:
 *     <none>
 * Callees:
 *     bCaptureBitmapInfo @ 0x1C00352D4 (bCaptureBitmapInfo.c)
 *     GreCreateDIBitmapReal @ 0x1C004B598 (GreCreateDIBitmapReal.c)
 *     GreCreateDIBitmapComp @ 0x1C014B9F0 (GreCreateDIBitmapComp.c)
 */

__int64 __fastcall NtGdiCreateDIBitmapInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char *Address,
        char *Src,
        int a7,
        int a8,
        SIZE_T Size)
{
  unsigned int *v11; // rsi
  __int64 v12; // rdi
  HANDLE v13; // r14
  char *v14; // rdx
  __int64 DIBitmapReal; // rax
  unsigned int *v17; // [rsp+78h] [rbp-50h] BYREF
  HANDLE v18; // [rsp+80h] [rbp-48h]
  unsigned int v19; // [rsp+D8h] [rbp+10h]

  v19 = a2;
  v11 = 0LL;
  v17 = 0LL;
  v12 = 1LL;
  v13 = 0LL;
  v18 = 0LL;
  if ( Src && a8 )
  {
    if ( !(unsigned int)bCaptureBitmapInfo(Src, a7, a8, &v17) )
      goto LABEL_13;
    if ( Address )
    {
      if ( (_DWORD)Size )
      {
        if ( ((unsigned __int8)Address & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = &Address[(unsigned int)Size];
        if ( (unsigned __int64)v14 > W32UserProbeAddress || v14 < Address )
          *W32UserProbeAddress = 0;
      }
      v13 = MmSecureVirtualMemory(Address, (unsigned int)Size, 2u);
      v18 = v13;
      if ( !v13 )
LABEL_13:
        v12 = 0LL;
    }
    v11 = v17;
    a2 = v19;
  }
  if ( v12 == 1 )
  {
    if ( (a4 & 2) != 0 )
      DIBitmapReal = GreCreateDIBitmapReal(a1, a7, a8, Size, 0LL, 0, 0LL, 0, 0LL, 0LL);
    else
      DIBitmapReal = GreCreateDIBitmapComp(a1, (__int64)Address, (__int64)v11, a7, a8, Size);
    v12 = DIBitmapReal;
  }
  if ( v11 )
    FreeThreadBufferWithTag(v11, a2);
  if ( v13 )
    MmUnsecureVirtualMemory(v13);
  return v12;
}
