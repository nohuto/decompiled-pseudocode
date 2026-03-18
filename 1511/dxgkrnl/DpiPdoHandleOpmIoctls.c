/*
 * XREFs of DpiPdoHandleOpmIoctls @ 0x1C00C7CD0
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C00C3780 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX@Z @ 0x1C002ABDC (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkOpmCreateHandle @ 0x1C00C7B5C (DxgkOpmCreateHandle.c)
 *     DxgkOpmTranslateHandle @ 0x1C00C7C14 (DxgkOpmTranslateHandle.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C00C8450 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C00C84BC (DxgkReleaseAdapterOpmI2CSync.c)
 *     DpiPdoVerifyOpmParameters @ 0x1C00C8D60 (DpiPdoVerifyOpmParameters.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C00C96F0 (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00E25D8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00E2694 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C0131378 (DxgkOpmTranslateAndDestroyHandle.c)
 *     DpiPdoSqmProtectedSession @ 0x1C0175370 (DpiPdoSqmProtectedSession.c)
 */

__int64 __fastcall DpiPdoHandleOpmIoctls(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  void **v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rsi
  __int64 RenderAdapterForSession; // rbx
  __int64 v7; // rax
  int v8; // r15d
  unsigned int v9; // r13d
  int *v10; // r12
  int v11; // r15d
  int v12; // r15d
  int v13; // r15d
  int v14; // r15d
  int v15; // r15d
  int v16; // r15d
  unsigned int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // rax
  int v28; // r12d
  __int64 v29; // r14
  __int64 v30; // rcx
  unsigned int v32; // r15d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r15
  int v43; // eax
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  void *v49; // r15
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned int v55; // r15d
  _QWORD *v56; // rax
  unsigned int v57; // r15d
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _QWORD *v62; // rax
  int v63; // r15d
  int v64; // r15d
  void *v65; // r15
  unsigned int v66; // r13d
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r15
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // r15
  __int64 v75; // rax
  __int64 v76; // [rsp+30h] [rbp-49h]
  void **v77; // [rsp+38h] [rbp-41h]
  unsigned int v78; // [rsp+38h] [rbp-41h]
  int v79; // [rsp+40h] [rbp-39h]
  struct _FDO_CONTEXT *v80; // [rsp+48h] [rbp-31h]
  struct _FDO_CONTEXT *v81; // [rsp+48h] [rbp-31h]
  void *v82; // [rsp+50h] [rbp-29h] BYREF
  __int64 v83; // [rsp+58h] [rbp-21h]
  void *v84; // [rsp+60h] [rbp-19h] BYREF
  void *v85; // [rsp+68h] [rbp-11h] BYREF
  void *v86; // [rsp+70h] [rbp-9h] BYREF
  void *v87; // [rsp+78h] [rbp-1h] BYREF
  void *v88; // [rsp+80h] [rbp+7h] BYREF
  void *v89; // [rsp+88h] [rbp+Fh] BYREF
  int v90; // [rsp+E0h] [rbp+67h]
  int v92; // [rsp+F8h] [rbp+7Fh]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(void ***)(a2 + 112);
  v4 = a2;
  LODWORD(v5) = -1073741637;
  v83 = 0LL;
  v92 = 1;
  v90 = 0;
  v79 = 0;
  v76 = v2;
  RenderAdapterForSession = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  v7 = *(_QWORD *)(a2 + 184);
  v80 = (struct _FDO_CONTEXT *)RenderAdapterForSession;
  v77 = v3;
  v8 = *(_DWORD *)(v7 + 24);
  v9 = *(_DWORD *)(v7 + 8);
  v10 = *(int **)(v7 + 32);
  if ( *(_BYTE *)(RenderAdapterForSession + 1095) )
  {
    v2 = 0LL;
    AcquireMiniportListMutex();
    RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
    if ( !RenderAdapterForSession )
    {
LABEL_123:
      _InterlockedExchange64(&qword_1C0046D08, 0LL);
      KeReleaseMutex(Mutex, 0);
      goto LABEL_23;
    }
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(RenderAdapterForSession + 483) )
      DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
    v90 = 1;
    if ( v8 == 2303115 )
    {
      v79 = 1;
    }
    else
    {
      _InterlockedExchange64(&qword_1C0046D08, 0LL);
      KeReleaseMutex(Mutex, 0);
    }
    v4 = a2;
  }
  if ( !*(_QWORD *)(RenderAdapterForSession + 1728) )
  {
    v28 = v90;
    goto LABEL_22;
  }
  v11 = v8 - 2303107;
  if ( !v11 )
  {
    v9 = 4;
    LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, 4LL);
    if ( (int)v5 < 0 )
      goto LABEL_114;
    v32 = *v10;
    LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    if ( (int)v5 < 0 )
      goto LABEL_114;
    DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
    if ( v2 )
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 936) + 104LL), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544), 1LL);
    v5 = (*(int (__fastcall **)(_QWORD, _QWORD, void **))(RenderAdapterForSession + 1728))(
           *(_QWORD *)(RenderAdapterForSession + 48),
           v32,
           v77);
    DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544));
    if ( v2 )
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 936) + 104LL), 0);
    DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    v37 = (_QWORD *)WdLogNewEntry5_WdEvent(v34, v33, v35, v36);
    v37[4] = v5;
LABEL_31:
    v28 = v90;
    v37[3] = DpiPdoHandleOpmIoctls;
    v37[5] = *(_QWORD *)(RenderAdapterForSession + 48);
    v37[6] = v90;
    v37[7] = 0LL;
    WdLogEvent5_WdEvent(v37);
    goto LABEL_19;
  }
  v12 = v11 - 4;
  if ( !v12 )
  {
    LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, v9);
    if ( (int)v5 >= 0 )
    {
      v57 = *v10;
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (int)v5 >= 0 )
      {
        DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
        if ( v2 )
          KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 936) + 104LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544), 1LL);
        v5 = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(RenderAdapterForSession + 1736))(
               *(_QWORD *)(RenderAdapterForSession + 48),
               v57,
               v9,
               v77);
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544));
        if ( v2 )
          KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 936) + 104LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
        v62 = (_QWORD *)WdLogNewEntry5_WdEvent(v59, v58, v60, v61);
        v28 = v90;
        v62[3] = DpiPdoHandleOpmIoctls;
        v62[4] = v5;
        v62[5] = *(_QWORD *)(RenderAdapterForSession + 48);
        v62[6] = v90;
        v62[7] = 0LL;
        WdLogEvent5_WdEvent(v62);
        goto LABEL_19;
      }
    }
    goto LABEL_114;
  }
  v13 = v12 - 4;
  if ( v13 )
  {
    v14 = v13 - 4;
    if ( v14 )
    {
      v15 = v14 - 4;
      if ( !v15 )
      {
        LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 0LL);
        if ( (int)v5 >= 0 )
        {
          v42 = *((_QWORD *)v10 + 1);
          LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
          if ( (int)v5 >= 0 )
          {
            DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
            if ( v2 )
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 936) + 104LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544), 1LL);
            LODWORD(v5) = DxgkOpmTranslateHandle(
                            *(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 2544),
                            *(void **)v10,
                            &v87);
            if ( (int)v5 < 0 )
              goto LABEL_39;
            v43 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(RenderAdapterForSession + 1760))(
                    *(_QWORD *)(RenderAdapterForSession + 48),
                    v87,
                    v42);
            goto LABEL_38;
          }
          goto LABEL_114;
        }
        goto LABEL_42;
      }
      v16 = v15 - 4;
      if ( !v16 )
      {
        v92 = 0;
        v17 = -1;
        LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 4096LL);
        if ( (int)v5 < 0 )
        {
LABEL_18:
          v27 = (_QWORD *)WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
          v28 = v90;
          v27[4] = (int)v5;
          v27[3] = DpiPdoHandleOpmIoctls;
          v27[5] = *(_QWORD *)(RenderAdapterForSession + 48);
          v27[7] = v17;
          v27[6] = v90;
          WdLogEvent5_WdEvent(v27);
          v9 = 4096;
LABEL_19:
          v29 = v76;
          goto LABEL_20;
        }
        v22 = *((_QWORD *)v10 + 1);
        LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
        if ( (int)v5 >= 0 )
        {
          v17 = *(_DWORD *)(v22 + 32);
          DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
          if ( v2 )
            KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 936) + 104LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544), 1LL);
          LODWORD(v5) = DxgkOpmTranslateHandle(
                          *(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 2544),
                          *(void **)v10,
                          &v85);
          if ( (int)v5 >= 0 )
            LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, void **))(RenderAdapterForSession + 1768))(
                            *(_QWORD *)(RenderAdapterForSession + 48),
                            v85,
                            v22,
                            v77);
          DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544));
          if ( v2 )
            KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 936) + 104LL), 0);
          DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
          DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
          goto LABEL_18;
        }
LABEL_117:
        v28 = v90;
        goto LABEL_118;
      }
      v63 = v16 - 4;
      if ( v63 )
      {
        v64 = v63 - 4;
        if ( !v64 )
        {
          v66 = -1;
          LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 32LL, 0LL);
          if ( (int)v5 >= 0 )
          {
            v71 = *((_QWORD *)v10 + 1);
            v78 = v10[4];
            v81 = (struct _FDO_CONTEXT *)*((_QWORD *)v10 + 3);
            LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            if ( (int)v5 < 0 )
              goto LABEL_114;
            v66 = *(_DWORD *)(v71 + 16);
            DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
            if ( v2 )
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 936) + 104LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544), 1LL);
            LODWORD(v5) = DxgkOpmTranslateHandle(
                            *(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 2544),
                            *(void **)v10,
                            &v86);
            if ( (int)v5 >= 0 )
            {
              LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, struct _FDO_CONTEXT *))(RenderAdapterForSession + 1784))(
                              *(_QWORD *)(RenderAdapterForSession + 48),
                              v86,
                              v71,
                              v78,
                              v81);
              if ( (int)v5 >= 0 )
              {
                v72 = *(_QWORD *)(v71 + 16) - *(_QWORD *)&DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data1;
                if ( !v72 )
                  v72 = *(_QWORD *)(v71 + 24) - *(_QWORD *)DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data4;
                if ( !v72 )
                {
                  v73 = *(_DWORD *)(v71 + 40);
                  *(_DWORD *)(v76 + 980) = v73;
                  if ( v73 )
                    DpiPdoSqmProtectedSession(v76, (unsigned int)v5);
                }
              }
            }
            DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544));
            if ( v2 )
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 936) + 104LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
            DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
          }
          v44 = (_QWORD *)WdLogNewEntry5_WdEvent(v68, v67, v69, v70);
          v28 = v90;
          v44[4] = (int)v5;
          v44[3] = DpiPdoHandleOpmIoctls;
          v44[5] = *(_QWORD *)(RenderAdapterForSession + 48);
          v44[7] = v66;
          v44[6] = v90;
          goto LABEL_43;
        }
        if ( v64 == 4 )
        {
          LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 8LL, 0LL);
          if ( (int)v5 >= 0 )
          {
            v65 = *(void **)v10;
            LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            if ( (int)v5 >= 0 )
            {
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
              if ( v2 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 936) + 104LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544), 1LL);
              LODWORD(v5) = DxgkOpmTranslateAndDestroyHandle(
                              *(DXGADAPTER **)(RenderAdapterForSession + 2544),
                              v65,
                              &v84);
              if ( (int)v5 < 0 )
                goto LABEL_39;
              v43 = (*(__int64 (__fastcall **)(_QWORD, void *))(RenderAdapterForSession + 1792))(
                      *(_QWORD *)(RenderAdapterForSession + 48),
                      v84);
LABEL_38:
              LODWORD(v5) = v43;
LABEL_39:
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544));
              if ( v2 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 936) + 104LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              goto LABEL_42;
            }
            goto LABEL_114;
          }
LABEL_42:
          v44 = (_QWORD *)WdLogNewEntry5_WdEvent(v39, v38, v40, v41);
          v28 = v90;
          v44[3] = DpiPdoHandleOpmIoctls;
          v44[4] = (int)v5;
          v44[5] = *(_QWORD *)(RenderAdapterForSession + 48);
          v44[6] = v90;
          v44[7] = 0LL;
LABEL_43:
          WdLogEvent5_WdEvent(v44);
          v9 = 0;
          goto LABEL_19;
        }
LABEL_114:
        v28 = v90;
        goto LABEL_115;
      }
      v92 = 0;
      v9 = 4096;
      LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 4096LL);
      if ( (int)v5 < 0 )
        goto LABEL_54;
      v74 = *((_QWORD *)v10 + 1);
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (int)v5 < 0 )
        goto LABEL_117;
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
      if ( v2 )
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 936) + 104LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544), 1LL);
      LODWORD(v5) = DxgkOpmTranslateHandle(*(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 2544), *(void **)v10, &v88);
      if ( (int)v5 < 0 )
        goto LABEL_51;
      v50 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, void **))(RenderAdapterForSession + 1776))(
              *(_QWORD *)(RenderAdapterForSession + 48),
              v88,
              v74,
              v77);
    }
    else
    {
      v9 = 16;
      LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 8LL, 16LL);
      if ( (int)v5 < 0 )
      {
LABEL_54:
        v37 = (_QWORD *)WdLogNewEntry5_WdEvent(v46, v45, v47, v48);
        v37[4] = (int)v5;
        goto LABEL_31;
      }
      v49 = *(void **)v10;
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (int)v5 < 0 )
        goto LABEL_114;
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
      if ( v2 )
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 936) + 104LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544), 1LL);
      LODWORD(v5) = DxgkOpmTranslateHandle(*(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 2544), v49, &v89);
      if ( (int)v5 < 0 )
      {
LABEL_51:
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544));
        if ( v2 )
          KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 936) + 104LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
        goto LABEL_54;
      }
      v50 = (*(__int64 (__fastcall **)(_QWORD, void *, void **))(RenderAdapterForSession + 1752))(
              *(_QWORD *)(RenderAdapterForSession + 48),
              v89,
              v77);
    }
    LODWORD(v5) = v50;
    goto LABEL_51;
  }
  v9 = 8;
  LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, 8LL);
  if ( (int)v5 < 0 )
  {
    v28 = v90;
  }
  else
  {
    v55 = *v10;
    v28 = v90;
    if ( v90 )
    {
      v29 = v76;
      LODWORD(v5) = CreateProtectedOutputIndirectDisplay(
                      (struct _FDO_CONTEXT *)RenderAdapterForSession,
                      v80,
                      v55,
                      *(_DWORD *)(v76 + 504),
                      v77);
      goto LABEL_65;
    }
    LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    if ( (int)v5 < 0 )
    {
LABEL_115:
      v29 = v76;
LABEL_116:
      DpiPdoSqmProtectedSession(v29, (unsigned int)v5);
LABEL_118:
      v75 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      *(_QWORD *)(v75 + 32) = (int)v5;
      *(_QWORD *)(v75 + 24) = DpiPdoHandleOpmIoctls;
      WdLogEvent5_WdWarning(v75);
      goto LABEL_22;
    }
    DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
    if ( v2 )
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 936) + 104LL), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544), 1LL);
    LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(RenderAdapterForSession + 1744))(
                    *(_QWORD *)(RenderAdapterForSession + 48),
                    *(unsigned int *)(v2 + 504),
                    v55,
                    &v82);
    if ( (int)v5 >= 0 )
    {
      LODWORD(v5) = DxgkOpmCreateHandle(*(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 2544), v82, v77);
      if ( (int)v5 < 0 )
        (*(void (__fastcall **)(_QWORD, void *))(RenderAdapterForSession + 1792))(
          *(_QWORD *)(RenderAdapterForSession + 48),
          v82);
    }
    DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2544));
    KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 936) + 104LL), 0);
    DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2544));
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
  }
  v29 = v76;
LABEL_65:
  v56 = (_QWORD *)WdLogNewEntry5_WdEvent(v52, v51, v53, v54);
  v56[4] = (int)v5;
  v56[3] = DpiPdoHandleOpmIoctls;
  v56[5] = *(_QWORD *)(RenderAdapterForSession + 48);
  v56[6] = v28;
  v56[7] = 0LL;
  WdLogEvent5_WdEvent(v56);
LABEL_20:
  if ( (int)v5 < 0 )
  {
    if ( !v92 )
      goto LABEL_118;
    goto LABEL_116;
  }
  v83 = v9;
LABEL_22:
  if ( v28 )
  {
    if ( *(_BYTE *)(RenderAdapterForSession + 483) )
      DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    if ( v79 )
      goto LABEL_123;
  }
LABEL_23:
  v30 = v83;
  *(_DWORD *)(a2 + 48) = v5;
  *(_QWORD *)(a2 + 56) = v30;
  return (unsigned int)v5;
}
