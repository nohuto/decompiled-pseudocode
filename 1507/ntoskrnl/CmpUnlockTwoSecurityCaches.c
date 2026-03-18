/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x1404F2FA0
 * Callers:
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x140585640 (CmpSyncKeyValues.c)
 *     CmpDoBuildVirtualStack @ 0x1406584F0 (CmpDoBuildVirtualStack.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall CmpUnlockTwoSecurityCaches(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v3; // rdi
  signed __int64 v4; // rax
  signed __int64 v5; // rbx
  signed __int64 v6; // rcx

  v3 = (volatile signed __int64 *)(a1 + 2952);
  _m_prefetchw((const void *)(a1 + 2952));
  v4 = *(_QWORD *)(a1 + 2952);
  if ( a1 == a2 )
  {
    if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    {
      v5 = 0LL;
      goto LABEL_4;
    }
LABEL_7:
    v5 = v4 - 16;
    goto LABEL_4;
  }
  v5 = 0LL;
  v6 = v4 - 16;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v6 = 0LL;
  if ( (v4 & 2) != 0 || v4 != _InterlockedCompareExchange64(v3, v6, v4) )
    ExfReleasePushLock(v3, a2);
  KeAbPostRelease((ULONG_PTR)v3);
  v3 = (volatile signed __int64 *)(a2 + 2952);
  _m_prefetchw((const void *)(a2 + 2952));
  v4 = *(_QWORD *)(a2 + 2952);
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    goto LABEL_7;
LABEL_4:
  if ( (v4 & 2) != 0 || v4 != _InterlockedCompareExchange64(v3, v5, v4) )
    ExfReleasePushLock(v3, a2);
  KeAbPostRelease((ULONG_PTR)v3);
}
