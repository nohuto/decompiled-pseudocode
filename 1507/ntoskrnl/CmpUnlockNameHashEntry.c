/*
 * XREFs of CmpUnlockNameHashEntry @ 0x1404CC6C0
 * Callers:
 *     CmpDereferenceNameControlBlockWithLock @ 0x1404CB3D0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1404CBDC0 (CmpGetNameControlBlock.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall CmpUnlockNameHashEntry(unsigned int a1, __int64 a2)
{
  __int64 *v2; // rbx
  signed __int64 v3; // rax
  signed __int64 v4; // rcx
  __int64 v5; // rtt

  v2 = (__int64 *)((char *)CmpNameCacheTable
                 + 16
                 * (((unsigned __int16)(-30045 * (a1 ^ (a1 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (a1 ^ (a1 >> 9))) >> 9)) & 0x7FF));
  _m_prefetchw(v2);
  v3 = *v2;
  if ( (*v2 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = v3 - 16;
  else
    v4 = 0LL;
  if ( (v3 & 2) != 0 || (v5 = *v2, v5 != _InterlockedCompareExchange64(v2, v4, v3)) )
    ExfReleasePushLock(v2, a2);
  KeAbPostRelease((ULONG_PTR)v2);
}
