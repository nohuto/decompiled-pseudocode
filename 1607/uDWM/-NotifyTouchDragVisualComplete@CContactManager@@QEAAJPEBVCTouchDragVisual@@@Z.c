/*
 * XREFs of ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x180070A2C
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18004E448 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180047F00 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180048750 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F338 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 */

__int64 __fastcall CContactManager::NotifyTouchDragVisualComplete(
        CContactManager *this,
        const struct CTouchDragVisual *a2)
{
  int v4; // r8d
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  int Touch; // eax
  CContactManager *v11; // rcx
  int v12; // r9d
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v6 = *((_QWORD *)this + 7);
    while ( *(const struct CTouchDragVisual **)(112LL * (unsigned int)v4 + v6 + 88) != a2 )
    {
      if ( (unsigned int)++v4 >= *((_DWORD *)this + 20) )
        goto LABEL_19;
    }
    if ( v4 >= 0 )
    {
      v7 = 112LL * (unsigned int)v4;
      *(_BYTE *)(v7 + v6 + 104) = 1;
      *(_QWORD *)(v7 + *((_QWORD *)this + 7) + 16) = *(_QWORD *)(v7 + *((_QWORD *)this + 7) + 8);
      v8 = *((_QWORD *)this + 7);
      if ( !*(_QWORD *)(v7 + v8 + 96)
        && !*(_QWORD *)(v7 + v8 + 64)
        && (*((_BYTE *)this + 324) || *(_DWORD *)(v7 + v8 + 40)) )
      {
        if ( !*(_QWORD *)(v7 + v8 + 48) )
        {
          v9 = *((_QWORD *)a2 + 34);
          Touch = CreateTouchVisual<CDirectTouchVisual>(
                    *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v9,
                    (CDirectTouchVisual **)(v7 + v8 + 48));
          v5 = Touch;
          if ( Touch < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Touch, 0x482u);
            goto LABEL_19;
          }
          CContactManager::AddToTouchNode(v11, v9, *(struct CVisual **)(v7 + *((_QWORD *)this + 7) + 48));
        }
        if ( *((_BYTE *)this + 324) )
          v12 = CContactManager::DWMSC_PRESENTATIONMODE;
        else
          v12 = *(_DWORD *)(v7 + *((_QWORD *)this + 7) + 40);
        CDirectTouchVisual::StartDown(
          *(_QWORD *)(v7 + *((_QWORD *)this + 7) + 48),
          (const struct tagPOINT *)(v7 + *((_QWORD *)this + 7) + 8LL),
          (const struct tagRECT *)(v7 + *((_QWORD *)this + 7) + 24LL),
          v12);
      }
    }
  }
LABEL_19:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v5;
}
