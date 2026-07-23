/*
 * XREFs of MmGetCacheAttribute @ 0x1401E4288
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MmGetCacheAttribute(unsigned __int64 a1)
{
  _DWORD *v1; // rdx
  ULONG_PTR v2; // r8
  int v4; // eax

  if ( !MiIsPfnInline(a1 >> 12) )
    return 3221225793LL;
  if ( !*(_WORD *)(48 * v2 - 0x58000000000LL + 32) )
    KeBugCheckEx(0x1Au, 0x1232uLL, v2, *(_BYTE *)(48 * v2 - 0x58000000000LL + 34) & 7, 0LL);
  v4 = *(unsigned __int8 *)(48 * v2 - 0x58000000000LL + 34) >> 6;
  switch ( v4 )
  {
    case 1:
      *v1 = 1;
      return 0LL;
    case 0:
      *v1 = 0;
      return 0LL;
    case 2:
      *v1 = 2;
      return 0LL;
  }
  return 3221225711LL;
}
