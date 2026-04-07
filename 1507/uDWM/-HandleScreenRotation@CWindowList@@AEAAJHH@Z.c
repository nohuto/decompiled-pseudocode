/*
 * XREFs of ?HandleScreenRotation@CWindowList@@AEAAJHH@Z @ 0x180078D78
 * Callers:
 *     ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x18002F780 (-ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x18008F024 (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 */

__int64 __fastcall CWindowList::HandleScreenRotation(CWindowList *this, int a2, int a3)
{
  CScreenRotation *v6; // rcx
  unsigned int v7; // edi
  CResource *v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = (CScreenRotation *)*((_QWORD *)this + 63);
  v7 = 0;
  if ( v6 && *((_QWORD *)v6 + 3) )
    CScreenRotation::UpdateAngle(v6, a2, a3);
  v8 = (CResource *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8);
  if ( v8 )
  {
    v11 = 96LL;
    v9 = CResource::Send(v8, &v11, 8u);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x51Du);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v7;
}
