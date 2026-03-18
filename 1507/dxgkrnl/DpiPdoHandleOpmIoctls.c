/*
 * XREFs of DpiPdoHandleOpmIoctls @ 0x1C00B2490
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1C00BA460 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX@Z @ 0x1C002AF74 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkOpmCreateHandle @ 0x1C00B231C (DxgkOpmCreateHandle.c)
 *     DxgkOpmTranslateHandle @ 0x1C00B23D4 (DxgkOpmTranslateHandle.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1C00B2C10 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1C00B2C84 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DpiPdoVerifyOpmParameters @ 0x1C00B38A0 (DpiPdoVerifyOpmParameters.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C00B43A0 (DpiMiracastFindRenderAdapterForSession.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00BBA54 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00BBBBC (DxgkReleaseAdapterDdiSync.c)
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C012ADD8 (DxgkOpmTranslateAndDestroyHandle.c)
 *     DpiPdoSqmProtectedSession @ 0x1C0170AF0 (DpiPdoSqmProtectedSession.c)
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
  __int64 v27; // r9
  _QWORD *v28; // rax
  int v29; // r12d
  __int64 v30; // r14
  __int64 v31; // rcx
  unsigned int v33; // r15d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r15
  __int64 v44; // r9
  int v45; // eax
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  void *v51; // r15
  __int64 v52; // r9
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned int v58; // r15d
  __int64 v59; // r9
  _QWORD *v60; // rax
  unsigned int v61; // r15d
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  _QWORD *v66; // rax
  int v67; // r15d
  int v68; // r15d
  void *v69; // r15
  unsigned int v70; // r13d
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r15
  __int64 v76; // r9
  __int64 v77; // rax
  int v78; // eax
  __int64 v79; // r15
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 v82; // [rsp+30h] [rbp-49h]
  void **v83; // [rsp+38h] [rbp-41h]
  unsigned int v84; // [rsp+38h] [rbp-41h]
  int v85; // [rsp+40h] [rbp-39h]
  struct _FDO_CONTEXT *v86; // [rsp+48h] [rbp-31h]
  struct _FDO_CONTEXT *v87; // [rsp+48h] [rbp-31h]
  void *v88; // [rsp+50h] [rbp-29h] BYREF
  __int64 v89; // [rsp+58h] [rbp-21h]
  void *v90; // [rsp+60h] [rbp-19h] BYREF
  void *v91; // [rsp+68h] [rbp-11h] BYREF
  void *v92; // [rsp+70h] [rbp-9h] BYREF
  void *v93; // [rsp+78h] [rbp-1h] BYREF
  void *v94; // [rsp+80h] [rbp+7h] BYREF
  void *v95; // [rsp+88h] [rbp+Fh] BYREF
  int v96; // [rsp+E0h] [rbp+67h]
  int v98; // [rsp+F8h] [rbp+7Fh]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(void ***)(a2 + 112);
  v4 = a2;
  LODWORD(v5) = -1073741637;
  v89 = 0LL;
  v98 = 1;
  v96 = 0;
  v85 = 0;
  v82 = v2;
  RenderAdapterForSession = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  v7 = *(_QWORD *)(a2 + 184);
  v86 = (struct _FDO_CONTEXT *)RenderAdapterForSession;
  v83 = v3;
  v8 = *(_DWORD *)(v7 + 24);
  v9 = *(_DWORD *)(v7 + 8);
  v10 = *(int **)(v7 + 32);
  if ( *(_BYTE *)(RenderAdapterForSession + 1062) )
  {
    v2 = 0LL;
    AcquireMiniportListMutex();
    RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
    if ( !RenderAdapterForSession )
    {
LABEL_123:
      _InterlockedExchange64(&qword_1C0046C88, 0LL);
      KeReleaseMutex((PRKMUTEX)Mutex, 0);
      goto LABEL_23;
    }
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(RenderAdapterForSession + 451) )
      DpiCheckForOutstandingD3Requests(RenderAdapterForSession);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(RenderAdapterForSession + 168), 1u);
    v96 = 1;
    if ( v8 == 2303115 )
    {
      v85 = 1;
    }
    else
    {
      _InterlockedExchange64(&qword_1C0046C88, 0LL);
      KeReleaseMutex((PRKMUTEX)Mutex, 0);
    }
    v4 = a2;
  }
  if ( !*(_QWORD *)(RenderAdapterForSession + 1688) )
  {
    v29 = v96;
    goto LABEL_22;
  }
  v11 = v8 - 2303107;
  if ( !v11 )
  {
    v9 = 4;
    LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, 4LL);
    if ( (int)v5 < 0 )
      goto LABEL_114;
    v33 = *v10;
    LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    if ( (int)v5 < 0 )
      goto LABEL_114;
    DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
    if ( v2 )
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 904) + 104LL), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504), 1LL);
    v5 = (*(int (__fastcall **)(_QWORD, _QWORD, void **))(RenderAdapterForSession + 1688))(
           *(_QWORD *)(RenderAdapterForSession + 48),
           v33,
           v83);
    DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504));
    if ( v2 )
      KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 904) + 104LL), 0);
    DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    v38 = (_QWORD *)WdLogNewEntry5_WdEvent(v35, v34, v36, v37);
    v38[4] = v5;
LABEL_31:
    v29 = v96;
    v38[3] = DpiPdoHandleOpmIoctls;
    v38[5] = *(_QWORD *)(RenderAdapterForSession + 48);
    v38[6] = v96;
    v38[7] = 0LL;
    WdLogEvent5_WdEvent(v38);
    goto LABEL_19;
  }
  v12 = v11 - 4;
  if ( !v12 )
  {
    LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, v9);
    if ( (int)v5 >= 0 )
    {
      v61 = *v10;
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (int)v5 >= 0 )
      {
        DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
        if ( v2 )
          KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 904) + 104LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504), 1LL);
        v5 = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(RenderAdapterForSession + 1696))(
               *(_QWORD *)(RenderAdapterForSession + 48),
               v61,
               v9,
               v83);
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504));
        if ( v2 )
          KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 904) + 104LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
        v66 = (_QWORD *)WdLogNewEntry5_WdEvent(v63, v62, v64, v65);
        v29 = v96;
        v66[3] = DpiPdoHandleOpmIoctls;
        v66[4] = v5;
        v66[5] = *(_QWORD *)(RenderAdapterForSession + 48);
        v66[6] = v96;
        v66[7] = 0LL;
        WdLogEvent5_WdEvent(v66);
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
          v43 = *((_QWORD *)v10 + 1);
          LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
          if ( (int)v5 >= 0 )
          {
            DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
            if ( v2 )
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 904) + 104LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504), 1LL);
            LODWORD(v5) = DxgkOpmTranslateHandle(
                            *(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 2504),
                            *(void **)v10,
                            &v93,
                            v44);
            if ( (int)v5 < 0 )
              goto LABEL_39;
            v45 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(RenderAdapterForSession + 1720))(
                    *(_QWORD *)(RenderAdapterForSession + 48),
                    v93,
                    v43);
            goto LABEL_38;
          }
          goto LABEL_114;
        }
        goto LABEL_42;
      }
      v16 = v15 - 4;
      if ( !v16 )
      {
        v98 = 0;
        v17 = -1;
        LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 4096LL);
        if ( (int)v5 < 0 )
        {
LABEL_18:
          v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
          v29 = v96;
          v28[4] = (int)v5;
          v28[3] = DpiPdoHandleOpmIoctls;
          v28[5] = *(_QWORD *)(RenderAdapterForSession + 48);
          v28[7] = v17;
          v28[6] = v96;
          WdLogEvent5_WdEvent(v28);
          v9 = 4096;
LABEL_19:
          v30 = v82;
          goto LABEL_20;
        }
        v22 = *((_QWORD *)v10 + 1);
        LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
        if ( (int)v5 >= 0 )
        {
          v17 = *(_DWORD *)(v22 + 32);
          DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
          if ( v2 )
            KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 904) + 104LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504), 1LL);
          LODWORD(v5) = DxgkOpmTranslateHandle(
                          *(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 2504),
                          *(void **)v10,
                          &v91,
                          v27);
          if ( (int)v5 >= 0 )
            LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, void **))(RenderAdapterForSession + 1728))(
                            *(_QWORD *)(RenderAdapterForSession + 48),
                            v91,
                            v22,
                            v83);
          DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504));
          if ( v2 )
            KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 904) + 104LL), 0);
          DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
          DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
          goto LABEL_18;
        }
LABEL_117:
        v29 = v96;
        goto LABEL_118;
      }
      v67 = v16 - 4;
      if ( v67 )
      {
        v68 = v67 - 4;
        if ( !v68 )
        {
          v70 = -1;
          LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 32LL, 0LL);
          if ( (int)v5 >= 0 )
          {
            v75 = *((_QWORD *)v10 + 1);
            v84 = v10[4];
            v87 = (struct _FDO_CONTEXT *)*((_QWORD *)v10 + 3);
            LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            if ( (int)v5 < 0 )
              goto LABEL_114;
            v70 = *(_DWORD *)(v75 + 16);
            DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
            if ( v2 )
              KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 904) + 104LL), Executive, 0, 0, 0LL);
            DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504), 1LL);
            LODWORD(v5) = DxgkOpmTranslateHandle(
                            *(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 2504),
                            *(void **)v10,
                            &v92,
                            v76);
            if ( (int)v5 >= 0 )
            {
              LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, _QWORD, struct _FDO_CONTEXT *))(RenderAdapterForSession + 1744))(
                              *(_QWORD *)(RenderAdapterForSession + 48),
                              v92,
                              v75,
                              v84,
                              v87);
              if ( (int)v5 >= 0 )
              {
                v77 = *(_QWORD *)(v75 + 16) - *(_QWORD *)&DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data1;
                if ( !v77 )
                  v77 = *(_QWORD *)(v75 + 24) - *(_QWORD *)DXGKMDT_OPM_SET_PROTECTION_LEVEL.Data4;
                if ( !v77 )
                {
                  v78 = *(_DWORD *)(v75 + 40);
                  *(_DWORD *)(v82 + 948) = v78;
                  if ( v78 )
                    DpiPdoSqmProtectedSession(v82, (unsigned int)v5);
                }
              }
            }
            DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504));
            if ( v2 )
              KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 904) + 104LL), 0);
            DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
            DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
          }
          v46 = (_QWORD *)WdLogNewEntry5_WdEvent(v72, v71, v73, v74);
          v29 = v96;
          v46[4] = (int)v5;
          v46[3] = DpiPdoHandleOpmIoctls;
          v46[5] = *(_QWORD *)(RenderAdapterForSession + 48);
          v46[7] = v70;
          v46[6] = v96;
          goto LABEL_43;
        }
        if ( v68 == 4 )
        {
          LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 8LL, 0LL);
          if ( (int)v5 >= 0 )
          {
            v69 = *(void **)v10;
            LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
            if ( (int)v5 >= 0 )
            {
              DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
              if ( v2 )
                KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 904) + 104LL), Executive, 0, 0, 0LL);
              DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504), 1LL);
              LODWORD(v5) = DxgkOpmTranslateAndDestroyHandle(
                              *(DXGADAPTER **)(RenderAdapterForSession + 2504),
                              v69,
                              &v90);
              if ( (int)v5 < 0 )
                goto LABEL_39;
              v45 = (*(__int64 (__fastcall **)(_QWORD, void *))(RenderAdapterForSession + 1752))(
                      *(_QWORD *)(RenderAdapterForSession + 48),
                      v90);
LABEL_38:
              LODWORD(v5) = v45;
LABEL_39:
              DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504));
              if ( v2 )
                KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 904) + 104LL), 0);
              DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
              DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
              goto LABEL_42;
            }
            goto LABEL_114;
          }
LABEL_42:
          v46 = (_QWORD *)WdLogNewEntry5_WdEvent(v40, v39, v41, v42);
          v29 = v96;
          v46[3] = DpiPdoHandleOpmIoctls;
          v46[4] = (int)v5;
          v46[5] = *(_QWORD *)(RenderAdapterForSession + 48);
          v46[6] = v96;
          v46[7] = 0LL;
LABEL_43:
          WdLogEvent5_WdEvent(v46);
          v9 = 0;
          goto LABEL_19;
        }
LABEL_114:
        v29 = v96;
        goto LABEL_115;
      }
      v98 = 0;
      v9 = 4096;
      LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 16LL, 4096LL);
      if ( (int)v5 < 0 )
        goto LABEL_54;
      v79 = *((_QWORD *)v10 + 1);
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (int)v5 < 0 )
        goto LABEL_117;
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
      if ( v2 )
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 904) + 104LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504), 1LL);
      LODWORD(v5) = DxgkOpmTranslateHandle(
                      *(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 2504),
                      *(void **)v10,
                      &v94,
                      v80);
      if ( (int)v5 < 0 )
        goto LABEL_51;
      v53 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, void **))(RenderAdapterForSession + 1736))(
              *(_QWORD *)(RenderAdapterForSession + 48),
              v94,
              v79,
              v83);
    }
    else
    {
      v9 = 16;
      LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 8LL, 16LL);
      if ( (int)v5 < 0 )
      {
LABEL_54:
        v38 = (_QWORD *)WdLogNewEntry5_WdEvent(v48, v47, v49, v50);
        v38[4] = (int)v5;
        goto LABEL_31;
      }
      v51 = *(void **)v10;
      LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
      if ( (int)v5 < 0 )
        goto LABEL_114;
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
      if ( v2 )
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 904) + 104LL), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504), 1LL);
      LODWORD(v5) = DxgkOpmTranslateHandle(*(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 2504), v51, &v95, v52);
      if ( (int)v5 < 0 )
      {
LABEL_51:
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504));
        if ( v2 )
          KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 904) + 104LL), 0);
        DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
        DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
        goto LABEL_54;
      }
      v53 = (*(__int64 (__fastcall **)(_QWORD, void *, void **))(RenderAdapterForSession + 1712))(
              *(_QWORD *)(RenderAdapterForSession + 48),
              v95,
              v83);
    }
    LODWORD(v5) = v53;
    goto LABEL_51;
  }
  v9 = 8;
  LODWORD(v5) = DpiPdoVerifyOpmParameters(v4, 4LL, 8LL);
  if ( (int)v5 < 0 )
  {
    v29 = v96;
  }
  else
  {
    v58 = *v10;
    v29 = v96;
    if ( v96 )
    {
      v30 = v82;
      LODWORD(v5) = CreateProtectedOutputIndirectDisplay(
                      (struct _FDO_CONTEXT *)RenderAdapterForSession,
                      v86,
                      v58,
                      *(_DWORD *)(v82 + 472),
                      v83);
      goto LABEL_65;
    }
    LODWORD(v5) = DpiAcquireCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
    if ( (int)v5 < 0 )
    {
LABEL_115:
      v30 = v82;
LABEL_116:
      DpiPdoSqmProtectedSession(v30, (unsigned int)v5);
LABEL_118:
      v81 = WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
      *(_QWORD *)(v81 + 32) = (int)v5;
      *(_QWORD *)(v81 + 24) = DpiPdoHandleOpmIoctls;
      WdLogEvent5_WdWarning(v81);
      goto LABEL_22;
    }
    DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
    if ( v2 )
      KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v2 + 904) + 104LL), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504), 1LL);
    LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void **))(RenderAdapterForSession + 1704))(
                    *(_QWORD *)(RenderAdapterForSession + 48),
                    *(unsigned int *)(v2 + 472),
                    v58,
                    &v88);
    if ( (int)v5 >= 0 )
    {
      LODWORD(v5) = DxgkOpmCreateHandle(*(ADAPTER_DISPLAY ***)(RenderAdapterForSession + 2504), v88, v83, v59);
      if ( (int)v5 < 0 )
        (*(void (__fastcall **)(_QWORD, void *))(RenderAdapterForSession + 1752))(
          *(_QWORD *)(RenderAdapterForSession + 48),
          v88);
    }
    DxgkReleaseAdapterDdiSync(*(_QWORD *)(RenderAdapterForSession + 2504));
    KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v2 + 904) + 104LL), 0);
    DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(RenderAdapterForSession + 2504));
    DpiReleaseCoreSyncAccessSafe(*(_QWORD *)(RenderAdapterForSession + 24), 0);
  }
  v30 = v82;
LABEL_65:
  v60 = (_QWORD *)WdLogNewEntry5_WdEvent(v55, v54, v56, v57);
  v60[4] = (int)v5;
  v60[3] = DpiPdoHandleOpmIoctls;
  v60[5] = *(_QWORD *)(RenderAdapterForSession + 48);
  v60[6] = v29;
  v60[7] = 0LL;
  WdLogEvent5_WdEvent(v60);
LABEL_20:
  if ( (int)v5 < 0 )
  {
    if ( !v98 )
      goto LABEL_118;
    goto LABEL_116;
  }
  v89 = v9;
LABEL_22:
  if ( v29 )
  {
    if ( *(_BYTE *)(RenderAdapterForSession + 451) )
      DpiEnableD3Requests(*(_QWORD *)(RenderAdapterForSession + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(RenderAdapterForSession + 168));
    KeLeaveCriticalRegion();
    if ( v85 )
      goto LABEL_123;
  }
LABEL_23:
  v31 = v89;
  *(_DWORD *)(a2 + 48) = v5;
  *(_QWORD *)(a2 + 56) = v31;
  return (unsigned int)v5;
}
