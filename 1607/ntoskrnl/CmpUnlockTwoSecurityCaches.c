/*
 * XREFs of CmpUnlockTwoSecurityCaches @ 0x1404CE0B4
 * Callers:
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     CmpDoBuildVirtualStack @ 0x140600C9C (CmpDoBuildVirtualStack.c)
 *     CmpSyncKeyValues @ 0x14060990C (CmpSyncKeyValues.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

unsigned __int64 __fastcall CmpUnlockTwoSecurityCaches(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v3; // rdi
  signed __int64 v4; // rax
  signed __int64 v5; // rbx
  signed __int64 v7; // rcx

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
  v7 = v4 - 16;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (v4 & 2) != 0 || v4 != _InterlockedCompareExchange64(v3, v7, v4) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  v3 = (volatile signed __int64 *)(a2 + 2952);
  _m_prefetchw((const void *)(a2 + 2952));
  v4 = *(_QWORD *)(a2 + 2952);
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    goto LABEL_7;
LABEL_4:
  if ( (v4 & 2) != 0 || v4 != _InterlockedCompareExchange64(v3, v5, v4) )
    ExfReleasePushLock(v3);
  return KeAbPostRelease((ULONG_PTR)v3);
}
