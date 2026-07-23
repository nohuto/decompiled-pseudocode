/*
 * XREFs of CmpFileWrite @ 0x1403F4FCC
 * Callers:
 *     CmpSaveKeyByFileCopy @ 0x14060DB48 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileWrite @ 0x1403F7EE8 (CmpDoFileWrite.c)
 *     CmpDoSystemCacheWrite @ 0x140604110 (CmpDoSystemCacheWrite.c)
 */

char __fastcall CmpFileWrite(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v7; // r8

  if ( !CmpNoWrite )
  {
    if ( !a2 && (*(_BYTE *)(a1 + 124) & 4) != 0 )
      return CmpDoSystemCacheWrite(a1, a3, a4, a5, a6);
    v7 = *(_QWORD *)(a1 + 8LL * a2 + 2664);
    if ( v7 )
      return CmpDoFileWrite(a1, a2, v7, a3, a4, a5, a6);
  }
  return 1;
}
