/*
 * XREFs of PsResumeThread @ 0x1404A7714
 * Callers:
 *     NtResumeThread @ 0x1404A766C (NtResumeThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x1405EEB1C (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x1405EF9A0 (DbgkpWakeTarget.c)
 * Callees:
 *     KeResumeThread @ 0x1400E2E00 (KeResumeThread.c)
 */

__int64 __fastcall PsResumeThread(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v5; // edx
  __int64 v6; // rcx
  signed __int64 v7; // rax
  signed __int64 v9; // rtt

  v5 = KeResumeThread(a1, (__int64)a2, a3);
  if ( v5 == 1 )
  {
    v6 = *(_QWORD *)(a1 + 544);
    _m_prefetchw((const void *)(v6 + 1008));
    v7 = *(_QWORD *)(v6 + 1008);
    do
    {
      if ( !v7 )
        break;
      if ( (v7 & 1) != 0 )
        break;
      v9 = v7;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 1008), 0LL, v7);
    }
    while ( v9 != v7 );
  }
  if ( a2 )
    *a2 = v5;
  return 0LL;
}
