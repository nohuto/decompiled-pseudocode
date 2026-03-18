/*
 * XREFs of SmKmEtwLogStoreRundown @ 0x140540804
 * Callers:
 *     SmEtwEnableCallback @ 0x14054053C (SmEtwEnableCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     SmKmEtwLogStoreChange @ 0x140659FC8 (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14065A104 (SmKmEtwLogStoreStats.c)
 */

void __fastcall SmKmEtwLogStoreRundown(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _WORD *v3; // r14
  char v4; // bp
  unsigned int v7; // edi
  struct _EX_RUNDOWN_REF *v8; // rsi
  struct _EX_RUNDOWN_REF v9; // rdi

  v2 = 0;
  v3 = (_WORD *)(a2 + 24);
  v4 = 0;
  do
  {
    v7 = v2 | (32 * (*v3 & 0x7FF));
    v8 = (struct _EX_RUNDOWN_REF *)(a2 + 176LL * (v2 & 0x1F));
    if ( !ExAcquireRundownProtection(v8 + 1) )
      goto LABEL_3;
    if ( (v8[3].Count & 0x7FF) != v7 >> 5 )
    {
      ExReleaseRundownProtection_0(v8 + 1);
LABEL_3:
      v9.Count = 0LL;
      goto LABEL_4;
    }
    v9.Count = v8->Count;
LABEL_4:
    if ( v9.Count )
    {
      SmKmEtwLogStoreStats(a1, v9.Count);
      SmKmEtwLogStoreChange(a1, v9.Count, &SmEventStoreRundown);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (v4 & 0x1F) + a2 + 8));
    }
    ++v2;
    ++v4;
    v3 += 88;
  }
  while ( v2 < 0x20 );
}
