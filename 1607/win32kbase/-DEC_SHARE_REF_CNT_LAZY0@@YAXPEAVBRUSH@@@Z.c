/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00C0210
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0027340 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C002E9E0 (GreCreateDisplayDC.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreDCSelectBrush @ 0x1C0059210 (GreDCSelectBrush.c)
 *     GreDCSelectPen @ 0x1C0059450 (GreDCSelectPen.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VBRUSH@@@@QEAAXXZ @ 0x1C00C540C (-CleanupRoutine@-$HmgShareLockResult@VBRUSH@@@@QEAAXXZ.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002A400 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002A438 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     bDeleteBrush @ 0x1C005A650 (bDeleteBrush.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY0(struct HOBJ__ **a1)
{
  struct HOBJ__ *v1; // rdi
  int v2; // ebx
  _DWORD *v3; // rax
  _DWORD *v4; // [rsp+28h] [rbp-20h] BYREF
  int v5; // [rsp+30h] [rbp-18h]

  if ( a1 )
  {
    v1 = *a1;
    if ( (unsigned __int16)DEC_SHARE_REF_CNT((unsigned int *)a1) == 1 )
    {
      v2 = 0;
      v4 = 0LL;
      v5 = 0;
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v4, v1, 16);
      if ( HANDLELOCK::bValid((HANDLELOCK *)&v4) )
      {
        v3 = (_DWORD *)*((_QWORD *)GdiHandleManager::GetEntryObject(
                                     (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                                     *v4 & 0xFFFFFF)
                       + 7);
        if ( v3 )
          v2 = *v3 & 2;
        HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
      }
      if ( v2 )
        bDeleteBrush(v1, 0LL, 0);
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
    }
  }
}
