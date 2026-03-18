/*
 * XREFs of CmpFileWrite @ 0x14044BD9C
 * Callers:
 *     CmpSaveKeyByFileCopy @ 0x140662794 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileWrite @ 0x14044ACA4 (CmpDoFileWrite.c)
 *     CmpDoSystemCacheWrite @ 0x14065BA18 (CmpDoSystemCacheWrite.c)
 */

char __fastcall CmpFileWrite(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5, int a6)
{
  void *v7; // r8

  if ( !CmpNoWrite )
  {
    if ( !(_DWORD)a2 && (*(_BYTE *)(a1 + 124) & 4) != 0 )
      return CmpDoSystemCacheWrite(a1, a3, a4, (_DWORD)a5, a6);
    v7 = *(void **)(a1 + 8LL * (unsigned int)a2 + 2664);
    if ( v7 )
      return CmpDoFileWrite(a1, a2, v7, a3, a4, a5, a6);
  }
  return 1;
}
