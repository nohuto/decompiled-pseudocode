/*
 * XREFs of ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x1800384B8
 * Callers:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180064170 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800382E4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

__int64 __fastcall CDisplayManager::GetCurrentDisplaySetInternal(CDisplayManager *this, struct CDisplaySet **a2)
{
  unsigned int v2; // edi
  const GUID *v4; // r8
  const GUID *v5; // r9
  CDisplaySet *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  CDisplaySet *v9; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  CDisplaySet *v14; // [rsp+30h] [rbp-50h] BYREF
  _RTL_CRITICAL_SECTION *v15; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  GUID *v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]

  v2 = 0;
  v14 = 0LL;
  v15 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_1801EFD30 )
  {
    if ( qword_1801EFD28 )
    {
      v14 = qword_1801EFD28;
      _InterlockedIncrement((volatile signed __int32 *)qword_1801EFD28);
    }
    else
    {
      LeaveCriticalSection(&g_DisplayManager);
      v11 = CDisplayManager::DeriveCurrentDisplaySet(&g_DisplayManager, &v14, 0LL, 0);
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x163u);
        EnterCriticalSection(&g_DisplayManager);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
        v9 = v14;
LABEL_6:
        if ( v9 )
          CDisplaySet::Release(v9, v7, v8);
        return v2;
      }
      EnterCriticalSection(&g_DisplayManager);
      v6 = qword_1801EFD28;
      if ( qword_1801EFD28 )
      {
        if ( v14 )
        {
          CDisplaySet::Release(v14, v12, v13);
          v6 = qword_1801EFD28;
        }
        v14 = v6;
      }
      else
      {
        v6 = v14;
        qword_1801EFD28 = v14;
      }
      if ( !v6 )
      {
LABEL_5:
        LeaveCriticalSection(&g_DisplayManager);
        v9 = 0LL;
        *a2 = v6;
        goto LABEL_6;
      }
      _InterlockedIncrement((volatile signed __int32 *)v6);
    }
    v6 = v14;
    goto LABEL_5;
  }
  if ( hProvider > 5u
    && (qword_1801EA750 & 0x400000000000LL) != 0
    && (qword_1801EA758 & 0x400000000000LL) == qword_1801EA758 )
  {
    v19 = 0;
    v17 = &gDwmCoreTelemetryActivityId;
    v18 = 16;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801C503D, v4, v5, 3u, &pData);
  }
  v2 = -2003304442;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304442, 0x158u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v2;
}
