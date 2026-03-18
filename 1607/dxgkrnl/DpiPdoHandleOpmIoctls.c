/*
 * XREFs of DpiPdoHandleOpmIoctls @ 0x1C00DCC84
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C00C44D0 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_pdqqq @ 0x1C002ECC4 (Template_pdqqq.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C0031F10 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     Template_ptpjq @ 0x1C0032110 (Template_ptpjq.c)
 *     Template_ptpjqq @ 0x1C00321BC (Template_ptpjqq.c)
 *     Template_ptpq @ 0x1C0032278 (Template_ptpq.c)
 *     Template_ptpqq @ 0x1C0032304 (Template_ptpqq.c)
 *     Template_ptpqqq @ 0x1C00323A8 (Template_ptpqqq.c)
 *     Template_ptqppq @ 0x1C003245C (Template_ptqppq.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkOpmCreateHandle @ 0x1C00DCB18 (DxgkOpmCreateHandle.c)
 *     DxgkOpmTranslateHandle @ 0x1C00DCBCC (DxgkOpmTranslateHandle.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C00DD544 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C00DD5B8 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DpiPdoVerifyOpmParameters @ 0x1C00DE2EC (DpiPdoVerifyOpmParameters.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C00DF4F0 (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00DF65C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00DF68C (DxgkReleaseAdapterDdiSync.c)
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C0149E58 (DxgkOpmTranslateAndDestroyHandle.c)
 */

__int64 __fastcall DpiPdoHandleOpmIoctls(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r9
  __int64 v5; // rsi
  __int64 v6; // r13
  __int64 v7; // rax
  int v8; // r12d
  void **v9; // rcx
  __int64 RenderAdapterForSession; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r15d
  int v14; // r15d
  int v15; // r15d
  int v16; // r15d
  int v17; // r15d
  int v18; // r15d
  int v19; // r15d
  void *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r15
  __int64 (__fastcall *v25)(__int64, void *, __int64, void **); // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rax
  unsigned int v29; // r13d
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  void **v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // r13d
  unsigned int v41; // r14d
  void *v42; // r15
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r13
  int v46; // eax
  _QWORD *v47; // rax
  void *v48; // r15
  __int64 v49; // rcx
  __int64 v50; // r8
  void *v51; // r15
  int v52; // eax
  _QWORD *v53; // rax
  unsigned int v54; // r15d
  int v55; // eax
  __int64 v56; // rax
  int v57; // r15d
  int v58; // r15d
  void *v59; // r15
  int v60; // eax
  const EVENT_DESCRIPTOR *v61; // rdx
  void *v62; // r15
  unsigned int v63; // r13d
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r13
  int v68; // eax
  __int64 (__fastcall *v69)(__int64, void *, __int64, _QWORD, void **); // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  _QWORD *v72; // rax
  void *v73; // r15
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r13
  int v77; // eax
  __int64 (__fastcall *v78)(__int64, void *, __int64, void **); // rax
  __int64 v79; // rcx
  const EVENT_DESCRIPTOR *v80; // rdx
  _QWORD *v81; // rax
  __int64 v82; // rax
  const EVENT_DESCRIPTOR *v83; // rdx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  void **v85; // [rsp+28h] [rbp-D8h]
  int v86; // [rsp+28h] [rbp-D8h]
  int v87; // [rsp+30h] [rbp-D0h]
  __int64 v88; // [rsp+38h] [rbp-C8h]
  int v89; // [rsp+38h] [rbp-C8h]
  __int64 v90; // [rsp+40h] [rbp-C0h]
  unsigned int v91; // [rsp+50h] [rbp-B0h]
  int v92; // [rsp+54h] [rbp-ACh]
  unsigned int v93; // [rsp+54h] [rbp-ACh]
  unsigned int v94; // [rsp+54h] [rbp-ACh]
  unsigned int v95; // [rsp+54h] [rbp-ACh]
  unsigned int v96; // [rsp+58h] [rbp-A8h]
  unsigned int v97; // [rsp+58h] [rbp-A8h]
  void **v98; // [rsp+60h] [rbp-A0h]
  void **v99; // [rsp+60h] [rbp-A0h]
  int *v100; // [rsp+68h] [rbp-98h]
  void *v101; // [rsp+70h] [rbp-90h] BYREF
  int v102; // [rsp+78h] [rbp-88h]
  void *v103; // [rsp+80h] [rbp-80h] BYREF
  __int64 v104; // [rsp+88h] [rbp-78h]
  void *v105; // [rsp+90h] [rbp-70h] BYREF
  void *v106; // [rsp+98h] [rbp-68h] BYREF
  void *v107; // [rsp+A0h] [rbp-60h] BYREF
  void *v108; // [rsp+A8h] [rbp-58h] BYREF
  void *v109; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v110; // [rsp+B8h] [rbp-48h]
  struct _FDO_CONTEXT *v111; // [rsp+C0h] [rbp-40h]
  __int128 v112; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v113; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v114; // [rsp+F0h] [rbp-10h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a2;
  v104 = a2;
  LODWORD(v5) = -1073741637;
  v102 = 0;
  v6 = 0LL;
  v92 = 1;
  v7 = *(_QWORD *)(v3 + 32);
  v8 = 0;
  v9 = *(void ***)(a2 + 112);
  v110 = v3;
  v98 = v9;
  RenderAdapterForSession = *(_QWORD *)(v7 + 64);
  v11 = *(_QWORD *)(a2 + 184);
  v111 = (struct _FDO_CONTEXT *)RenderAdapterForSession;
  v12 = *(unsigned int *)(v11 + 8);
  v13 = *(_DWORD *)(v11 + 24);
  v100 = *(int **)(v11 + 32);
  v96 = *(_DWORD *)(v11 + 8);
  if ( *(_BYTE *)(RenderAdapterForSession + 1143) )
  {
    v55 = *(_DWORD *)(RenderAdapterForSession + 1144);
    if ( v55 == 2 )
    {
      v3 = 0LL;
      AcquireMiniportListMutex();
      RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
      if ( !RenderAdapterForSession )
      {
LABEL_168:
        _InterlockedExchange64(&qword_1C0056EC8, 0LL);
        KeReleaseMutex(Mutex, 0);
        goto LABEL_35;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(RenderAdapterForSession + 483) )
        DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
      v8 = 1;
      if ( v13 == 2303115 )
      {
        v102 = 1;
      }
      else
      {
        _InterlockedExchange64(&qword_1C0056EC8, 0LL);
        KeReleaseMutex(Mutex, 0);
      }
      v12 = v96;
      v4 = v104;
    }
    else
    {
      if ( v55 != 1 )
      {
        v56 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v56 + 24) = -1073741637LL;
        WdLogEvent5_WdError(v56);
        goto LABEL_35;
      }
      v92 = 0;
    }
  }
  if ( *(_QWORD *)(RenderAdapterForSession + 2872) )
  {
    v14 = v13 - 2303107;
    if ( v14 )
    {
      v15 = v14 - 4;
      if ( v15 )
      {
        v16 = v15 - 4;
        if ( v16 )
        {
          v17 = v16 - 4;
          if ( !v17 )
          {
            v109 = 0LL;
            v6 = 16LL;
            v48 = 0LL;
            LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 8LL, 16LL);
            if ( (int)v5 >= 0 )
            {
              v51 = *(void **)v100;
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 104LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688), 1LL);
              v52 = DxgkOpmTranslateHandle(*(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 3688), v51, &v109);
              v48 = v109;
              LODWORD(v5) = v52;
              if ( v52 >= 0 )
                LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *, void **))(RenderAdapterForSession + 2896))(
                                *(_QWORD *)(RenderAdapterForSession + 48),
                                v109,
                                v98);
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              if ( v3 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 104LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              LODWORD(Timeout) = v8;
              Template_ptpq(
                v49,
                &EventOPMGetRandomNumber,
                v50,
                *(_QWORD *)(RenderAdapterForSession + 48),
                Timeout,
                v48,
                v5);
            }
            v53 = (_QWORD *)WdLogNewEntry5_WdEvent(v49);
            v53[3] = (int)v5;
            v53[4] = *(_QWORD *)(RenderAdapterForSession + 48);
            v53[5] = v8;
            v53[6] = 0LL;
            WdLogEvent5_WdEvent(v53);
            goto LABEL_33;
          }
          v18 = v17 - 4;
          if ( !v18 )
          {
            v108 = 0LL;
            v42 = 0LL;
            LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 0LL);
            if ( (int)v5 >= 0 )
            {
              v45 = *((_QWORD *)v100 + 1);
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 104LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688), 1LL);
              v46 = DxgkOpmTranslateHandle(
                      *(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 3688),
                      *(void **)v100,
                      &v108);
              v42 = v108;
              LODWORD(v5) = v46;
              if ( v46 >= 0 )
                LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(RenderAdapterForSession + 2904))(
                                *(_QWORD *)(RenderAdapterForSession + 48),
                                v108,
                                v45);
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              if ( v3 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 104LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
              goto LABEL_70;
            v61 = (const EVENT_DESCRIPTOR *)&EventOPMSetSigningKeyAndSequenceNumbers;
            goto LABEL_154;
          }
          v19 = v18 - 4;
          if ( !v19 )
          {
            v93 = -1;
            v101 = 0LL;
            v114 = 0uLL;
            v20 = 0LL;
            v91 = 4096;
            LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 4096LL);
            if ( (int)v5 >= 0 )
            {
              v24 = *((_QWORD *)v100 + 1);
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              v93 = *(_DWORD *)(v24 + 32);
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 104LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688), 1LL);
              LODWORD(v5) = DxgkOpmTranslateHandle(
                              *(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 3688),
                              *(void **)v100,
                              &v101);
              if ( (int)v5 >= 0 )
              {
                v25 = *(__int64 (__fastcall **)(__int64, void *, __int64, void **))(RenderAdapterForSession + 2912);
                v26 = *(_QWORD *)(RenderAdapterForSession + 48);
                v114 = *(_OWORD *)(v24 + 32);
                LODWORD(v5) = v25(v26, v101, v24, v98);
              }
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              if ( v3 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 104LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              v27 = *(_QWORD *)(v24 + 32) - *(_QWORD *)&DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data1;
              if ( !v27 )
                v27 = *(_QWORD *)(v24 + 40) - *(_QWORD *)DXGKMDT_OPM_GET_CONNECTOR_TYPE.Data4;
              v22 = (__int64)v98;
              if ( !v27 && *((_DWORD *)v98 + 4) >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                {
LABEL_22:
                  v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v22);
                  v28[3] = (int)v5;
                  v28[4] = *(_QWORD *)(RenderAdapterForSession + 48);
                  v28[5] = v8;
                  v28[6] = v93;
LABEL_32:
                  WdLogEvent5_WdEvent(v28);
                  v6 = v91;
                  goto LABEL_33;
                }
                v80 = (const EVENT_DESCRIPTOR *)&EventOPMGetConnectorType;
LABEL_148:
                LODWORD(Timeout) = v8;
                Template_ptpqq(
                  (__int64)v98,
                  v80,
                  v23,
                  *(_QWORD *)(RenderAdapterForSession + 48),
                  Timeout,
                  v101,
                  *((_DWORD *)v98 + 10),
                  v5);
                goto LABEL_22;
              }
              v34 = *(_QWORD *)(v24 + 32) - *(_QWORD *)&DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data1;
              if ( !v34 )
                v34 = *(_QWORD *)(v24 + 40) - *(_QWORD *)DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES.Data4;
              if ( !v34 && *((_DWORD *)v98 + 4) >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
                  goto LABEL_22;
                v80 = (const EVENT_DESCRIPTOR *)&EventOPMGetSupportedProtectionTypes;
                goto LABEL_148;
              }
              v35 = *(_QWORD *)(v24 + 32) - *(_QWORD *)&DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data1;
              if ( !v35 )
                v35 = *(_QWORD *)(v24 + 40) - *(_QWORD *)DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL.Data4;
              if ( !v35 && *(_DWORD *)(v24 + 52) >= 4u && *((_DWORD *)v98 + 4) >= 0x20u )
              {
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                {
                  LODWORD(Timeout) = v8;
                  Template_ptpqqq(
                    (__int64)v98,
                    &EventOPMGetActualProtectionLevel,
                    v23,
                    *(_QWORD *)(RenderAdapterForSession + 48),
                    Timeout,
                    v101,
                    *(_DWORD *)(v24 + 56),
                    *((_DWORD *)v98 + 10),
                    v5);
                }
                goto LABEL_22;
              }
              v20 = v101;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            {
              LODWORD(Timeout) = v8;
              Template_ptpjq(v22, v21, v23, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v20, &v114, v5);
            }
            goto LABEL_22;
          }
          v57 = v19 - 4;
          if ( v57 )
          {
            v58 = v57 - 4;
            if ( !v58 )
            {
              v106 = 0LL;
              v97 = 0;
              v112 = 0uLL;
              v62 = 0LL;
              v63 = -1;
              LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 32LL, 0LL);
              if ( (int)v5 >= 0 )
              {
                v67 = *((_QWORD *)v100 + 1);
                v97 = v100[4];
                v99 = (void **)*((_QWORD *)v100 + 3);
                LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
                if ( (int)v5 < 0 )
                  goto LABEL_157;
                v95 = *(_DWORD *)(v67 + 16);
                DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
                if ( v3 )
                  KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 104LL), Executive, 0, 0, 0LL);
                DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688), 1LL);
                v68 = DxgkOpmTranslateHandle(
                        *(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 3688),
                        *(void **)v100,
                        &v106);
                v62 = v106;
                LODWORD(v5) = v68;
                if ( v68 >= 0 )
                {
                  v69 = *(__int64 (__fastcall **)(__int64, void *, __int64, _QWORD, void **))(RenderAdapterForSession
                                                                                            + 2928);
                  v70 = *(_QWORD *)(RenderAdapterForSession + 48);
                  v112 = *(_OWORD *)(v67 + 16);
                  LODWORD(v5) = v69(v70, v106, v67, v97, v99);
                }
                DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688));
                if ( v3 )
                  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 104LL), 0);
                DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
                DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
                v71 = *(_QWORD *)(v67 + 16) - *(_QWORD *)&DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data1;
                if ( !v71 )
                  v71 = *(_QWORD *)(v67 + 24) - *(_QWORD *)DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data4;
                if ( !v71 && *(_DWORD *)(v67 + 36) >= 0x10u )
                {
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  {
                    LODWORD(Timeout) = v8;
                    Template_ptpqqq(
                      v65,
                      &EventOPMSetProtectionLevel,
                      v66,
                      *(_QWORD *)(RenderAdapterForSession + 48),
                      Timeout,
                      v62,
                      *(_DWORD *)(v67 + 40),
                      *(_DWORD *)(v67 + 44),
                      v5);
                  }
                  v72 = (_QWORD *)WdLogNewEntry5_WdEvent(v65);
                  v72[3] = (int)v5;
                  v72[4] = *(_QWORD *)(RenderAdapterForSession + 48);
                  v72[5] = v8;
                  v72[6] = *(unsigned int *)(v67 + 40);
                  WdLogEvent5_WdEvent(v72);
                }
                v63 = v95;
              }
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              {
                LODWORD(v90) = v5;
                LODWORD(v88) = v97;
                LODWORD(Timeout) = v8;
                Template_ptpjqq(v65, v64, v66, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v62, &v112, v88, v90);
              }
              v47 = (_QWORD *)WdLogNewEntry5_WdEvent(v65);
              v47[3] = (int)v5;
              v47[4] = *(_QWORD *)(RenderAdapterForSession + 48);
              v47[5] = v8;
              v47[6] = v63;
              goto LABEL_71;
            }
            if ( v58 != 4 )
              goto LABEL_157;
            v105 = 0LL;
            v42 = 0LL;
            LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 8LL, 0LL);
            if ( (int)v5 >= 0 )
            {
              v59 = *(void **)v100;
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 104LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688), 1LL);
              v60 = DxgkOpmTranslateAndDestroyHandle(*(DXGADAPTER **)(RenderAdapterForSession + 3688), v59, &v105);
              v42 = v105;
              LODWORD(v5) = v60;
              if ( v60 >= 0 )
                LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *))(RenderAdapterForSession + 2936))(
                                *(_QWORD *)(RenderAdapterForSession + 48),
                                v105);
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              if ( v3 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 104LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
            {
LABEL_70:
              v47 = (_QWORD *)WdLogNewEntry5_WdEvent(v43);
              v47[3] = (int)v5;
              v47[4] = *(_QWORD *)(RenderAdapterForSession + 48);
              v47[5] = v8;
              v47[6] = 0LL;
LABEL_71:
              WdLogEvent5_WdEvent(v47);
              v6 = 0LL;
LABEL_33:
              if ( (int)v5 >= 0 )
                goto LABEL_34;
LABEL_157:
              v82 = WdLogNewEntry5_WdWarning(v9, v12, a3, v4);
              *(_QWORD *)(v82 + 24) = (int)v5;
              WdLogEvent5_WdWarning(v82);
              v6 = 0LL;
              goto LABEL_34;
            }
            v61 = (const EVENT_DESCRIPTOR *)&EventOPMDestroyProtectedOutput;
LABEL_154:
            LODWORD(Timeout) = v8;
            Template_ptpq(v43, v61, v44, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v42, v5);
            goto LABEL_70;
          }
          v107 = 0LL;
          v113 = 0uLL;
          v73 = 0LL;
          v91 = 4096;
          LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 4096LL);
          if ( (int)v5 >= 0 )
          {
            v76 = *((_QWORD *)v100 + 1);
            LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            if ( (int)v5 < 0 )
              goto LABEL_157;
            DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
            if ( v3 )
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 104LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688), 1LL);
            v77 = DxgkOpmTranslateHandle(*(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 3688), *(void **)v100, &v107);
            v73 = v107;
            LODWORD(v5) = v77;
            if ( v77 >= 0 )
            {
              v78 = *(__int64 (__fastcall **)(__int64, void *, __int64, void **))(RenderAdapterForSession + 2920);
              v79 = *(_QWORD *)(RenderAdapterForSession + 48);
              v113 = *(_OWORD *)(v76 + 16);
              LODWORD(v5) = v78(v79, v107, v76, v98);
            }
            DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688));
            if ( v3 )
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 104LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
            DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(Timeout) = v8;
            Template_ptpjq(v38, v74, v75, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v73, &v113, v5);
          }
        }
        else
        {
          v103 = 0LL;
          v91 = 8;
          v36 = 0LL;
          LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, 8LL);
          if ( (int)v5 < 0 )
          {
            v41 = -1;
          }
          else
          {
            v40 = *v100;
            if ( *v100 == 2 && v92 )
            {
              LODWORD(v5) = -1073741198;
              v81 = (_QWORD *)WdLogNewEntry5_WdEvent(v38);
              v81[3] = -1073741198LL;
              v81[4] = *(_QWORD *)(RenderAdapterForSession + 48);
              v81[5] = v8;
              v81[6] = 0LL;
              WdLogEvent5_WdEvent(v81);
              goto LABEL_157;
            }
            v36 = v98;
            if ( v8 )
            {
              v41 = *(_DWORD *)(v110 + 504);
              LODWORD(v5) = CreateProtectedOutputIndirectDisplay(
                              (struct _FDO_CONTEXT *)RenderAdapterForSession,
                              v111,
                              v40,
                              v41,
                              v98,
                              &v103);
            }
            else
            {
              LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              if ( (int)v5 < 0 )
                goto LABEL_157;
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              if ( v3 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 104LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688), 1LL);
              v94 = *(_DWORD *)(v3 + 504);
              LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(RenderAdapterForSession + 2888))(
                              *(_QWORD *)(RenderAdapterForSession + 48),
                              v94,
                              v40,
                              &v103);
              if ( (int)v5 >= 0 )
              {
                LODWORD(v5) = DxgkOpmCreateHandle(*(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 3688), v103, v98);
                if ( (int)v5 < 0 )
                {
                  (*(void (__fastcall **)(_QWORD, void *))(RenderAdapterForSession + 2936))(
                    *(_QWORD *)(RenderAdapterForSession + 48),
                    v103);
                  if ( (_DWORD)v5 == -1073741198 )
                    LODWORD(v5) = -1073741637;
                }
              }
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 104LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              v41 = v94;
            }
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v85) = v41;
            LODWORD(Timeout) = v8;
            Template_ptqppq(v38, v37, v39, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v85, v103, *v36, v5);
          }
        }
        v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v38);
        v28[3] = (int)v5;
LABEL_31:
        v28[4] = *(_QWORD *)(RenderAdapterForSession + 48);
        v28[5] = v8;
        v28[6] = 0LL;
        goto LABEL_32;
      }
      v91 = v12;
      LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, (unsigned int)v12);
      if ( (int)v5 < 0 )
        goto LABEL_157;
      v54 = *v100;
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (int)v5 < 0 )
        goto LABEL_157;
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
      if ( v3 )
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 104LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688), 1LL);
      v5 = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(RenderAdapterForSession + 2880))(
             *(_QWORD *)(RenderAdapterForSession + 48),
             v54,
             v96,
             v98);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688));
      if ( v3 )
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 104LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
      {
LABEL_30:
        v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v30);
        v28[3] = v5;
        goto LABEL_31;
      }
      v89 = v5;
      v83 = (const EVENT_DESCRIPTOR *)&EventOpmGetCertificate;
      v87 = v96;
      v86 = v54;
    }
    else
    {
      v91 = 4;
      LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, 4LL);
      if ( (int)v5 < 0 )
        goto LABEL_157;
      v29 = *v100;
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (int)v5 < 0 )
        goto LABEL_157;
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
      if ( v3 )
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 104LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688), 1LL);
      v5 = (*(int (__fastcall **)(_QWORD, _QWORD, void **))(RenderAdapterForSession + 2872))(
             *(_QWORD *)(RenderAdapterForSession + 48),
             v29,
             v98);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 3688));
      if ( v3 )
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 104LL), 0);
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 3688));
      DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) == 0 )
        goto LABEL_30;
      v83 = (const EVENT_DESCRIPTOR *)&EventOpmGetCertificateSize;
      v89 = v5;
      v87 = *(_DWORD *)v98;
      v86 = v29;
    }
    LODWORD(Timeout) = v8;
    Template_pdqqq(v30, v83, v31, *(_QWORD *)(RenderAdapterForSession + 48), Timeout, v86, v87, v89);
    goto LABEL_30;
  }
LABEL_34:
  if ( v8 )
  {
    if ( *(_BYTE *)(RenderAdapterForSession + 483) )
      DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    if ( v102 )
      goto LABEL_168;
  }
LABEL_35:
  v32 = v104;
  *(_DWORD *)(v104 + 48) = v5;
  *(_QWORD *)(v32 + 56) = v6;
  return (unsigned int)v5;
}
