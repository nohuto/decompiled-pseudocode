/*
 * XREFs of ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180093E90
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180094080 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CResize@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096DA0 (-_WindowEnumCallback@CResize@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     EtwppTemplate_q @ 0x18007A68C (EtwppTemplate_q.c)
 *     ??$ForEachOwnedWindow@V_lambda_18fa56596606414006e605755cbb08b4_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_18fa56596606414006e605755cbb08b4_@@_N@Z @ 0x18008BA8C (--$ForEachOwnedWindow@V_lambda_18fa56596606414006e605755cbb08b4_@@@CTransitionVisualController@@.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x18008D49C (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
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
  v3 = (CStoryboard *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
  v4 = CTransitionVisualController::_RestoreWindowVisual(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v9 = v3;
    CTransitionVisualController::ForEachOwnedWindow<_lambda_18fa56596606414006e605755cbb08b4_>(
      (__int64)a2,
      (__int64)&v9,
      1);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v4, 0xBD2u);
  }
  if ( v5 >= 0 )
  {
    if ( dword_1800B9564
      && (unsigned __int8)(byte_1800B9568 - 1) > 2u
      && (qword_1800B9550 & 0x8000000000000001uLL) != 0
      && (qword_1800B9558 & 0x8000000000000001uLL) == qword_1800B9558 )
    {
      EtwppTemplate_q(v6, (__int64)&EtwTraceInfo_9004, (__int64)a2);
    }
    v7 = MilChannel_CommitChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x14E6u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0x14E1u);
  }
  return (unsigned int)v5;
}
