/*
 * XREFs of ?UpdateDisplayState@CDisplayManager@@QEAAJ_N0PEA_NPEAW4Enum@DisplayStateComparison@@@Z @ 0x1800389C8
 * Callers:
 *     ?UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z @ 0x18003CC2C (-UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?NeedsDisplaySetUpdate@CDisplayManager@@AEAA_NXZ @ 0x180038084 (-NeedsDisplaySetUpdate@CDisplayManager@@AEAA_NXZ.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800382E4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x18016186C (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CDisplayManager::UpdateDisplayState(
        CDisplayManager *this,
        char a2,
        const GUID *a3,
        GUID *a4,
        enum DisplayStateComparison::Enum *a5)
{
  int v5; // ebx
  CDisplaySet *v6; // rdi
  char v8; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // r8
  const GUID *v16; // r8
  const GUID *v17; // r9
  int v18; // [rsp+30h] [rbp-51h] BYREF
  struct CDisplaySet *v19; // [rsp+38h] [rbp-49h] BYREF
  _RTL_CRITICAL_SECTION *v20; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  GUID *v22; // [rsp+68h] [rbp-19h]
  int v23; // [rsp+70h] [rbp-11h]
  int v24; // [rsp+74h] [rbp-Dh]
  EVENT_DATA_DESCRIPTOR v25; // [rsp+78h] [rbp-9h] BYREF
  GUID *v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+A0h] [rbp+1Fh]
  int v28; // [rsp+A4h] [rbp+23h]

  v5 = 0;
  v18 = 0;
  v6 = 0LL;
  LOBYTE(a4->Data1) = 0;
  v8 = (char)a3;
  v19 = 0LL;
  if ( qword_1801EFD30 )
  {
    if ( a2 )
    {
      _InterlockedIncrement(&dword_1801EFD4C);
      v6 = v19;
    }
    if ( CDisplayManager::NeedsDisplaySetUpdate((CDisplayManager *)&g_DisplayManager) )
    {
      v9 = CDisplayManager::DeriveCurrentDisplaySet(
             &g_DisplayManager,
             &v19,
             (enum DisplayStateComparison::Enum *)&v18,
             v8);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xECu);
        if ( dword_1801EFD38 >= 0 )
        {
          v18 = 4;
          if ( hProvider > 5u
            && (qword_1801EA750 & 0x400000000000LL) != 0
            && (qword_1801EA758 & 0x400000000000LL) == qword_1801EA758 )
          {
            v28 = 0;
            v26 = &gDwmCoreTelemetryActivityId;
            v27 = 16;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801C507D, v16, v17, 3u, &v25);
          }
        }
        v6 = v19;
        dword_1801EFD38 = v5;
      }
      else
      {
        dword_1801EFD38 = v9;
        LOBYTE(a4->Data1) = 1;
        v20 = &g_DisplayManager;
        EnterCriticalSection(&g_DisplayManager);
        if ( qword_1801EFD28 )
          CDisplaySet::Release(qword_1801EFD28, v10, v11);
        v6 = v19;
        qword_1801EFD28 = v19;
        if ( v19 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v19);
          v6 = v19;
        }
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
      }
    }
  }
  else
  {
    if ( hProvider > 5u
      && (qword_1801EA750 & 0x400000000000LL) != 0
      && (qword_1801EA758 & 0x400000000000LL) == qword_1801EA758 )
    {
      v24 = 0;
      v22 = &gDwmCoreTelemetryActivityId;
      v23 = 16;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801C507D, a3, a4, 3u, &pData);
    }
    v5 = -2003304442;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304442, 0xD5u);
  }
  if ( *(_DWORD *)a5 != 4 )
    *(_DWORD *)a5 = v18;
  if ( IsOOM(v5) )
  {
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x128u);
  }
  else if ( v5 < 0 && v5 != -2003304316 && v5 != -2003304442 && v5 != -2003304307 )
  {
    MilUnexpectedErrorWithAsimovEvent(v13, L"Could not create display set.");
  }
  if ( v6 )
    CDisplaySet::Release(v6, v12, v14);
  return (unsigned int)v5;
}
