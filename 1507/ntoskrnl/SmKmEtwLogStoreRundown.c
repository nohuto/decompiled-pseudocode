/*
 * XREFs of SmKmEtwLogStoreRundown @ 0x1405B5E50
 * Callers:
 *     SmEtwEnableCallback @ 0x1405B5B3C (SmEtwEnableCallback.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     SmKmEtwLogStoreChange @ 0x1406DC70C (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x1406DC848 (SmKmEtwLogStoreStats.c)
 */

void __fastcall SmKmEtwLogStoreRundown(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  _WORD *v3; // r15
  char v4; // bp
  unsigned int v7; // esi
  __int64 v8; // r14
  struct _EX_RUNDOWN_REF *v9; // rbx
  unsigned __int64 v10; // rtt
  __int64 v11; // rbx
  unsigned __int64 v12; // rtt
  struct _EX_RUNDOWN_REF *v13; // rcx
  unsigned __int64 v14; // rtt

  v2 = 0;
  v3 = (_WORD *)(a2 + 24);
  v4 = 0;
  do
  {
    v7 = v2 | (32 * (*v3 & 0x7FF));
    v8 = 176LL * (v2 & 0x1F);
    v9 = (struct _EX_RUNDOWN_REF *)(v8 + a2);
    _m_prefetchw((const void *)(v8 + a2 + 8));
    v10 = *(_QWORD *)(v8 + a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + a2 + 8), v10 + 2, v10)
      && !ExfAcquireRundownProtection(v9 + 1) )
    {
      goto LABEL_4;
    }
    if ( (*(_WORD *)(v8 + a2 + 24) & 0x7FF) != v7 >> 5 )
    {
      _m_prefetchw(&v9[1]);
      v12 = v9[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&v9[1], v12 - 2, v12) )
        ExfReleaseRundownProtection(v9 + 1);
LABEL_4:
      v11 = 0LL;
      goto LABEL_5;
    }
    v11 = *(_QWORD *)(v8 + a2);
LABEL_5:
    if ( v11 )
    {
      SmKmEtwLogStoreStats(a1, v11);
      SmKmEtwLogStoreChange(a1, v11, &SmEventStoreRundown);
      v13 = (struct _EX_RUNDOWN_REF *)(176LL * (v4 & 0x1F) + a2 + 8);
      _m_prefetchw(v13);
      v14 = v13->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v13, v14 - 2, v14) )
        ExfReleaseRundownProtection(v13);
    }
    ++v2;
    ++v4;
    v3 += 88;
  }
  while ( v2 < 0x20 );
}
