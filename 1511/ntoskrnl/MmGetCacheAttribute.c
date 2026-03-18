/*
 * XREFs of MmGetCacheAttribute @ 0x1401D3C14
 * Callers:
 *     <none>
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MmGetCacheAttribute(__int64 a1)
{
  _DWORD *v1; // r9
  ULONG_PTR v2; // r10
  __int64 v4; // rax
  int v5; // eax

  if ( !MI_IS_PFN(a1 >> 12) )
    return 3221225793LL;
  v4 = 48 * v2 - 0x58000000000LL;
  if ( !*(_WORD *)(v4 + 32) )
    KeBugCheckEx(0x1Au, 0x1232uLL, v2, *(_BYTE *)(v4 + 34) & 7, 0LL);
  v5 = *(unsigned __int8 *)(v4 + 34) >> 6;
  switch ( v5 )
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
