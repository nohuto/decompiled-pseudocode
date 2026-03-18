/*
 * XREFs of ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002A438
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0036950 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005B950 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     HmgMarkLazyDelete @ 0x1C00768F0 (HmgMarkLazyDelete.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00C0210 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00C02E0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C002A170 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 */

__int64 __fastcall HANDLELOCK::bLockHobj(HANDLELOCK *this, struct HOBJ__ *a2, char a3)
{
  __int16 v4; // edi^2

  v4 = WORD1(a2);
  if ( *((_DWORD *)this + 2) )
    return 0LL;
  HANDLELOCK::vLockHandle(this, (unsigned __int16)a2 | ((unsigned int)a2 >> 8) & 0xFF0000, 1, 0);
  if ( *((_DWORD *)this + 2) && (*(_BYTE *)(*(_QWORD *)this + 14LL) != a3 || *(_WORD *)(*(_QWORD *)this + 12LL) != v4) )
    HANDLELOCK::vUnlock(this);
  return *((unsigned int *)this + 2);
}
