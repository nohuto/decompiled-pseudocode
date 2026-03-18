/*
 * XREFs of ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C003C3B8
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000C4E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0042D40 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C005C2F0 (bDeleteBrush.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B2C90 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00B2D50 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C003C1F0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 */

__int64 __fastcall HANDLELOCK::bLockHobj(HANDLELOCK *this, struct HOBJ__ *a2, char a3)
{
  __int16 v4; // edi^2
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // eax

  v4 = WORD1(a2);
  if ( (unsigned __int16)a2 < (unsigned int)gcMaxHmgr )
  {
    v6 = (unsigned __int16)a2;
    HANDLELOCK::vLockHandle(
      this,
      (struct _ENTRY *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)a2),
      1,
      (unsigned __int16)a2,
      0);
    if ( *((_DWORD *)this + 2) )
    {
      v7 = *(_QWORD *)this;
      if ( *(_BYTE *)(*(_QWORD *)this + 14LL) != a3 || *(_WORD *)(v7 + 12) != v4 )
      {
        if ( (*(_BYTE *)(v7 + 15) & 0x40) != 0 )
        {
          ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v6, 0LL);
        }
        else
        {
          _m_prefetchw((const void *)(v7 + 8));
          v8 = *(_DWORD *)(v7 + 8) & 0xFFFFFFFE;
          *((_DWORD *)this + 3) = v8;
          _InterlockedExchange((volatile __int32 *)(v7 + 8), v8);
        }
        *((_DWORD *)this + 2) = 0;
        *(_QWORD *)this = 0LL;
        KeLeaveCriticalRegion();
      }
    }
  }
  return *((unsigned int *)this + 2);
}
