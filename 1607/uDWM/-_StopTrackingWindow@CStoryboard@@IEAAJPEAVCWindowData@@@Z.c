/*
 * XREFs of ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800945D0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002E70 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     EtwppTemplate_q @ 0x180082940 (EtwppTemplate_q.c)
 *     ??$ForEachOwnedWindow@V_lambda_c72d64e34bc4c52fff075362be8a3231_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_c72d64e34bc4c52fff075362be8a3231_@@_N@Z @ 0x18008E320 (--$ForEachOwnedWindow@V_lambda_c72d64e34bc4c52fff075362be8a3231_@@@CTransitionVisualController@@.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x18008F4CC (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CStoryboard::_StopTrackingWindow(CStoryboard *this, struct CWindowData *a2)
{
  CStoryboard *v3; // rsi
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  CStoryboard *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = this;
  v3 = (CStoryboard *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  v4 = CTransitionVisualController::_RestoreWindowVisual(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v9 = v3;
    CTransitionVisualController::ForEachOwnedWindow<_lambda_c72d64e34bc4c52fff075362be8a3231_>(
      (__int64)a2,
      (__int64)&v9,
      1);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v4, 0xC5Bu);
  }
  if ( v5 >= 0 )
  {
    if ( dword_1800B7044
      && (unsigned __int8)(byte_1800B7048 - 1) > 2u
      && (qword_1800B7030 & 0x8000000000000001uLL) != 0
      && (qword_1800B7038 & 0x8000000000000001uLL) == qword_1800B7038 )
    {
      EtwppTemplate_q(v6, (__int64)&EtwTraceInfo_9004, (__int64)a2);
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x1498u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0x1493u);
  }
  return (unsigned int)v5;
}
