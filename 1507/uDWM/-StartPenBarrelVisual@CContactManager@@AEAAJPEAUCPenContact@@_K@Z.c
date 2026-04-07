/*
 * XREFs of ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x180081A70
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EDE8 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800807FC (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047664 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x18007D2C8 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPenBarrelKeyVisual@.c)
 *     ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x180087598 (-ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x1800875BC (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 */

__int64 __fastcall CContactManager::StartPenBarrelVisual(
        CContactManager *this,
        struct CPenContact *a2,
        unsigned __int64 a3)
{
  unsigned int v3; // edi
  CPenBarrelKeyVisual **v4; // rsi
  int Touch; // eax
  CContactManager *v8; // rcx

  v3 = 0;
  v4 = (CPenBarrelKeyVisual **)((char *)a2 + 8);
  if ( *((_QWORD *)a2 + 1) )
    goto LABEL_5;
  Touch = CreateTouchVisual<CPenBarrelKeyVisual>(
            *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4),
            a3,
            (CTouchVisual **)a2 + 1);
  v3 = Touch;
  if ( Touch >= 0 )
  {
    CPenBarrelKeyVisual::ShowBarrel(*v4, (*((_BYTE *)a2 + 24) & 0x10) != 0);
    CContactManager::AddToTouchNode(v8, a3, *v4);
LABEL_5:
    CPenBarrelKeyVisual::Start(*v4, (const struct tagPOINT *)((char *)a2 + 28), *((_DWORD *)a2 + 1), *(_DWORD *)a2);
    return v3;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, Touch, 0x84Bu);
  return v3;
}
