/*
 * XREFs of CmpUnlockHashEntryByIndex @ 0x1403E4268
 * Callers:
 *     CmpSearchKeyControlBlockTreeEx @ 0x1401B4AC0 (CmpSearchKeyControlBlockTreeEx.c)
 *     CmpCleanUpKCBCacheTable @ 0x1403E3ED8 (CmpCleanUpKCBCacheTable.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1403E40D4 (CmpRunDownDelayDerefKCBEngine.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 __fastcall CmpUnlockHashEntryByIndex(__int64 a1, unsigned int a2)
{
  signed __int64 *v3; // rbx
  signed __int64 v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt

  v3 = (signed __int64 *)(*(_QWORD *)(a1 + 2800) + 24LL * a2);
  v4 = 0LL;
  v3[1] = 0LL;
  _m_prefetchw(v3);
  v5 = *v3;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = v5 - 16;
  if ( (v5 & 2) != 0 || (v6 = *v3, v6 != _InterlockedCompareExchange64(v3, v4, v5)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return CmpDereferenceHive(a1);
}
