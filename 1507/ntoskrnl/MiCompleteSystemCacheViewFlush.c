/*
 * XREFs of MiCompleteSystemCacheViewFlush @ 0x140129E24
 * Callers:
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiUpdateLinkedListInPte @ 0x1402260B8 (MiUpdateLinkedListInPte.c)
 */

signed __int64 __fastcall MiCompleteSystemCacheViewFlush(__int64 a1)
{
  __int64 PteShadow; // r9
  signed __int64 updated; // rax
  signed __int64 v3; // r9
  volatile signed __int64 *v4; // r10

  PteShadow = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int64)(a1 + 0x90482413018LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a1 + 24, *(_QWORD *)(a1 + 24));
  updated = MiUpdateLinkedListInPte(PteShadow, 0LL);
  return _InterlockedCompareExchange64(v4, updated, v3);
}
