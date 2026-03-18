/*
 * XREFs of ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C00D32BC
 * Callers:
 *     bDeleteFont @ 0x1C00D2FC0 (bDeleteFont.c)
 * Callees:
 *     <none>
 */

void __fastcall HANDLELOCK::vUnlock(HANDLELOCK *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax

  v2 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v2 + 15) & 0x40) != 0 )
  {
    GreReleasePushLockExclusive((char *)gpentPushLock + 8 * *((unsigned int *)this + 5));
  }
  else
  {
    _m_prefetchw((const void *)(v2 + 8));
    v3 = *(_DWORD *)(v2 + 8) & 0xFFFFFFFE;
    *((_DWORD *)this + 3) = v3;
    _InterlockedExchange((volatile __int32 *)(v2 + 8), v3);
  }
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = 0LL;
  KeLeaveCriticalRegion();
}
