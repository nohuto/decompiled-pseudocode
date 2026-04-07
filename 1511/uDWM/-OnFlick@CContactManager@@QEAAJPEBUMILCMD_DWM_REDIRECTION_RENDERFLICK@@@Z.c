/*
 * XREFs of ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x180086290
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032890 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047510 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047564 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??$CreateTouchVisual@VCFlickVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCFlickVisual@@@Z @ 0x180084AAC (--$CreateTouchVisual@VCFlickVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCFlickVisual@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18008B704 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 */

__int64 __fastcall CContactManager::OnFlick(CContactManager *this, const struct MILCMD_DWM_REDIRECTION_RENDERFLICK *a2)
{
  unsigned int v4; // ebx
  struct CVisual **v5; // rsi
  unsigned __int64 *v6; // rdi
  CContactManager *v7; // rcx
  unsigned int v8; // edi
  int Touch; // eax
  CContactManager *v10; // rcx
  unsigned __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_DWORD *)a2 + 1) <= 0x14u )
  {
    v5 = (struct CVisual **)((char *)this + 312);
    v6 = (unsigned __int64 *)*((_QWORD *)this + 39);
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD))(*v6 + 184))(*((_QWORD *)this + 39));
      CContactManager::RemoveFromTouchNode(v7, v6[34], (struct CVisual *)v6);
      CBaseObject::Release((CBaseObject *)v6);
    }
    v8 = *((_DWORD *)this + 80);
    *v5 = 0LL;
    *((_DWORD *)this + 80) = v8 + 1;
    GetDesktopID(1LL, &v12);
    Touch = CreateTouchVisual<CFlickVisual>(
              *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
              v12,
              (CTouchVisual **)this + 39);
    v4 = Touch;
    if ( Touch >= 0 )
    {
      CContactManager::AddToTouchNode(v10, v12, *v5);
      CFlickVisual::Start(*v5, (char *)a2 + 8, *((unsigned int *)a2 + 1), v8);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Touch, 0x33Du);
    }
  }
  else
  {
    v4 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v4;
}
