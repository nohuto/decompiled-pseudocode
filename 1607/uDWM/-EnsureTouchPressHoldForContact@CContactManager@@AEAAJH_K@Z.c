/*
 * XREFs of ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x180085F54
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180086864 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003A92C (-StopRemoveFromRootNodeAndReleaseNoNULL@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180048750 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x18008598C (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchPressHoldVisua.c)
 */

__int64 __fastcall CContactManager::EnsureTouchPressHoldForContact(CContactManager *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v7; // rbx
  CContactManager *v9; // rcx
  CContactManager *v10; // rcx
  CContactManager *v11; // rcx
  CContactManager *v12; // rcx
  int Touch; // eax
  CContactManager *v14; // rcx

  v3 = a2;
  v4 = 0;
  v5 = *((_QWORD *)this + 7);
  v7 = 112 * v3;
  if ( !*(_QWORD *)(v5 + 112 * v3 + 64) )
  {
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(this, *(struct CTouchVisual **)(v5 + v7 + 48));
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      v9,
      *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v7 + 56));
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      v10,
      *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v7 + 88));
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      v11,
      *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v7 + 64));
    CContactManager::StopRemoveFromRootNodeAndReleaseNoNULL(
      v12,
      *(struct CTouchVisual **)(*((_QWORD *)this + 7) + v7 + 96));
    *(_QWORD *)(*((_QWORD *)this + 7) + v7 + 48) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v7 + 56) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v7 + 88) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v7 + 64) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 7) + v7 + 96) = 0LL;
    *(_BYTE *)(*((_QWORD *)this + 7) + v7 + 104) = 0;
    Touch = CreateTouchVisual<CTouchPressHoldVisual>(
              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
              a3,
              (CTouchPressHoldVisual **)(v7 + *((_QWORD *)this + 7) + 64LL));
    v4 = Touch;
    if ( Touch >= 0 )
      CContactManager::AddToTouchNode(v14, a3, *(struct CVisual **)(*((_QWORD *)this + 7) + v7 + 64));
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Touch, 0x86Bu);
  }
  return v4;
}
