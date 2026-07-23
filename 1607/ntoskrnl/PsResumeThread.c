/*
 * XREFs of PsResumeThread @ 0x1404B2870
 * Callers:
 *     NtResumeThread @ 0x1404B27C8 (NtResumeThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140618800 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x140619650 (DbgkpWakeTarget.c)
 * Callees:
 *     KeResumeThread @ 0x1400A1168 (KeResumeThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x1406A6248 (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PsResumeThread(__int64 a1, _DWORD *a2)
{
  int v4; // esi
  __int64 v5; // r8
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  v4 = KeResumeThread(a1);
  if ( v4 == 1 )
  {
    v5 = *(_QWORD *)(a1 + 544);
    _m_prefetchw((const void *)(v5 + 1008));
    v6 = *(_QWORD *)(v5 + 1008);
    do
    {
      if ( !v6 )
        break;
      if ( (v6 & 1) != 0 )
        break;
      v7 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 1008), 0LL, v6);
    }
    while ( v7 != v6 );
    if ( (*(_DWORD *)(v5 + 1740) & 0x20000000) != 0 )
      EtwTiLogSuspendResumeThread(0LL, KeGetCurrentThread(), a1, 0LL);
  }
  if ( a2 )
    *a2 = v4;
  return 0LL;
}
