/*
 * XREFs of CmUnlockHiveSecurity @ 0x1404EC89C
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall CmUnlockHiveSecurity(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rbx
  signed __int64 v3; // rax
  signed __int64 v4; // rcx

  v2 = (volatile signed __int64 *)(a1 + 2952);
  _m_prefetchw((const void *)(a1 + 2952));
  v3 = *(_QWORD *)(a1 + 2952);
  if ( (v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = v3 - 16;
  else
    v4 = 0LL;
  if ( (v3 & 2) != 0 || v3 != _InterlockedCompareExchange64(v2, v4, v3) )
    ExfReleasePushLock(v2, a2);
  KeAbPostRelease((ULONG_PTR)v2);
}
