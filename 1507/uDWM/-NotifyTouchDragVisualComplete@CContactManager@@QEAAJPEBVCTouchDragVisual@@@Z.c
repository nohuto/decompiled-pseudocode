/*
 * XREFs of ?NotifyTouchDragVisualComplete@CContactManager@@QEAAJPEBVCTouchDragVisual@@@Z @ 0x18007EAA0
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180085BA4 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180046DA4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047664 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x180081F14 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
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
  __int64 v12; // r9
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
      *(_BYTE *)(v6 + v7 + 104) = 1;
      *(_QWORD *)(v7 + *((_QWORD *)this + 7) + 16) = *(_QWORD *)(v7 + *((_QWORD *)this + 7) + 8);
      v8 = *((_QWORD *)this + 7);
      if ( !*(_QWORD *)(v8 + v7 + 96)
        && !*(_QWORD *)(v8 + v7 + 64)
        && (*((_BYTE *)this + 324) || *(_DWORD *)(v8 + v7 + 40)) )
      {
        if ( !*(_QWORD *)(v8 + v7 + 48) )
        {
          v9 = *((_QWORD *)a2 + 34);
          Touch = CreateTouchVisual<CDirectTouchVisual>(
                    *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v9,
                    (CTouchVisual **)(v7 + v8 + 48));
          v5 = Touch;
          if ( Touch < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Touch, 0x482u);
            goto LABEL_19;
          }
          CContactManager::AddToTouchNode(v11, v9, *(struct CVisual **)(v7 + *((_QWORD *)this + 7) + 48));
        }
        if ( *((_BYTE *)this + 324) )
          v12 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
        else
          v12 = *(unsigned int *)(v7 + *((_QWORD *)this + 7) + 40);
        CDirectTouchVisual::StartDown(
          *(_QWORD *)(v7 + *((_QWORD *)this + 7) + 48),
          v7 + *((_QWORD *)this + 7) + 8LL,
          v7 + *((_QWORD *)this + 7) + 24LL,
          v12);
      }
    }
  }
LABEL_19:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v5;
}
