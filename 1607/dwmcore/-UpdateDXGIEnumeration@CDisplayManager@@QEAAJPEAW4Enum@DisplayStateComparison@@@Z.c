/*
 * XREFs of ?UpdateDXGIEnumeration@CDisplayManager@@QEAAJPEAW4Enum@DisplayStateComparison@@@Z @ 0x180038744
 * Callers:
 *     ?UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z @ 0x18003CC2C (-UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x1800365D4 (-IsUpToDate@CDXGIEnumeration@@QEBA_NXZ.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800376DC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800A936C (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z @ 0x1800B2E44 (-GetKMTDriverUpdateStatus@CDXGIAdapterLimited@@QEAAJPEAH@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoader@@CAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800B6DA4 (-CreateD3DObjects@CD3DModuleLoader@@CAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

__int64 __fastcall CDisplayManager::UpdateDXGIEnumeration(
        CDisplayManager *this,
        enum DisplayStateComparison::Enum *a2,
        __int64 a3)
{
  int v3; // r15d
  char v4; // r14
  char v6; // di
  CDisplaySet *v8; // rcx
  int v9; // ebx
  int v10; // esi
  CDXGIEnumeration *v11; // rsi
  __int64 v12; // rbx
  int KMTDriverUpdateStatus; // eax
  DWORD v14; // ecx
  int D3DObjects; // eax
  __int64 v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  unsigned int v20; // [rsp+30h] [rbp-49h] BYREF
  _RTL_CRITICAL_SECTION *v21; // [rsp+38h] [rbp-41h] BYREF
  int v22[4]; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  unsigned int *v24; // [rsp+70h] [rbp-9h]
  int v25; // [rsp+78h] [rbp-1h]
  int v26; // [rsp+7Ch] [rbp+3h]
  GUID *v27; // [rsp+80h] [rbp+7h]
  int v28; // [rsp+88h] [rbp+Fh]
  int v29; // [rsp+8Ch] [rbp+13h]
  _RTL_CRITICAL_SECTION **v30; // [rsp+90h] [rbp+17h]
  int v31; // [rsp+98h] [rbp+1Fh]
  int v32; // [rsp+9Ch] [rbp+23h]

  v20 = 0;
  v3 = 0;
  v4 = 0;
  v6 = 1;
  if ( !qword_1801EFD30 || !CDXGIEnumeration::IsUpToDate(qword_1801EFD30) )
  {
    v8 = qword_1801EFD28;
    if ( qword_1801EFD28 )
    {
      CDisplaySet::Release(qword_1801EFD28, (__int64)a2, a3);
      v8 = 0LL;
      qword_1801EFD28 = 0LL;
    }
    v3 = 4;
    CDisplaySet::LogTelemetry(v8, 0LL, 4LL);
LABEL_17:
    v9 = -2003304291;
    v20 = -2003304291;
    v10 = 0;
    while ( v9 == -2003304291 )
    {
      v14 = 10 * v10 * v10;
      if ( v14 )
        Sleep(v14);
      *(_QWORD *)v22 = &g_DisplayManager;
      EnterCriticalSection(&g_DisplayManager);
      if ( qword_1801EFD30 )
      {
        (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)qword_1801EFD30 + 8LL))(qword_1801EFD30);
        qword_1801EFD30 = 0LL;
      }
      D3DObjects = CD3DModuleLoader::CreateD3DObjects(&qword_1801EFD30);
      v9 = D3DObjects;
      if ( D3DObjects < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801AD918, 1u, D3DObjects, 0x1A9u);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(v22);
      ++v10;
      v20 = v9;
      v4 = 1;
      if ( v10 >= 10 )
      {
        if ( v9 == -2003304291 )
        {
          LODWORD(v21) = DrvQueryAdapterPopulationUniqueness(v16, &g_DisplayManager);
          if ( hProvider > 5u
            && (qword_1801EA750 & 0x400000000000LL) != 0
            && (qword_1801EA758 & 0x400000000000LL) == qword_1801EA758 )
          {
            v26 = 0;
            v29 = 0;
            v32 = 0;
            v24 = &v20;
            v27 = &gDwmCoreTelemetryActivityId;
            v30 = &v21;
            v25 = 4;
            v28 = 16;
            v31 = 4;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801C50B1, v17, v18, 5u, &pData);
          }
          v20 = -2003304442;
          goto LABEL_20;
        }
        break;
      }
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x90u);
      goto LABEL_3;
    }
LABEL_20:
    v11 = qword_1801EFD30;
    v12 = 0LL;
    for ( v22[0] = 0; (unsigned int)v12 < *((_DWORD *)v11 + 22); v12 = (unsigned int)(v12 + 1) )
    {
      KMTDriverUpdateStatus = CDXGIAdapterLimited::GetKMTDriverUpdateStatus(
                                *(CDXGIAdapterLimited **)(*((_QWORD *)v11 + 8) + 8 * v12),
                                v22);
      if ( KMTDriverUpdateStatus < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, KMTDriverUpdateStatus, 0xB9u);
      }
      else if ( v22[0] )
      {
        goto LABEL_17;
      }
    }
  }
LABEL_3:
  *(_DWORD *)a2 = v3;
  if ( v4 )
    goto LABEL_8;
  v21 = &stru_1801F0028;
  EnterCriticalSection(&stru_1801F0028);
  if ( !qword_1801F0058 || !CDXGIEnumeration::IsUpToDate(qword_1801F0058) )
    v6 = 0;
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
  if ( !v6 )
  {
LABEL_8:
    v21 = &stru_1801F0028;
    EnterCriticalSection(&stru_1801F0028);
    if ( byte_1801F0124 && qword_1801F0058 )
    {
      dword_1801F0140 = 0;
      (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)qword_1801F0058 + 8LL))(qword_1801F0058);
      qword_1801F0058 = 0LL;
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v21);
    if ( v4 && qword_1801EFD40 )
      CSurfaceManager::ResetTokenThread((HANDLE *)qword_1801EFD40);
  }
  return v20;
}
