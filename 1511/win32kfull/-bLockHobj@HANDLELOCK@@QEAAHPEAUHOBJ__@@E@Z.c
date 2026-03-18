/*
 * XREFs of ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C00D3214
 * Callers:
 *     bDeleteFont @ 0x1C00D2FC0 (bDeleteFont.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C00D30D8 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 */

__int64 __fastcall HANDLELOCK::bLockHobj(HANDLELOCK *this, struct HOBJ__ *a2)
{
  __int16 v2; // edi^2
  __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned int v6; // eax

  v2 = WORD1(a2);
  if ( (unsigned int)(unsigned __int16)a2 < gcMaxHmgr )
  {
    v4 = (unsigned __int16)a2;
    HANDLELOCK::vLockHandle(
      this,
      (struct _ENTRY *)(gpentHmgr + 24LL * (unsigned __int16)a2),
      gpentHmgr,
      (unsigned __int16)a2);
    if ( *((_DWORD *)this + 2) )
    {
      v5 = *(_QWORD *)this;
      if ( *(_BYTE *)(*(_QWORD *)this + 14LL) != 10 || *(_WORD *)(v5 + 12) != v2 )
      {
        if ( (*(_BYTE *)(v5 + 15) & 0x40) != 0 )
        {
          GreReleasePushLockExclusive((char *)gpentPushLock + 8 * v4);
        }
        else
        {
          _m_prefetchw((const void *)(v5 + 8));
          v6 = *(_DWORD *)(v5 + 8) & 0xFFFFFFFE;
          *((_DWORD *)this + 3) = v6;
          _InterlockedExchange((volatile __int32 *)(v5 + 8), v6);
        }
        *((_DWORD *)this + 2) = 0;
        *(_QWORD *)this = 0LL;
        KeLeaveCriticalRegion();
      }
    }
  }
  return *((unsigned int *)this + 2);
}
