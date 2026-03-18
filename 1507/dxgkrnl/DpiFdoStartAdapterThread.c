/*
 * XREFs of DpiFdoStartAdapterThread @ 0x1C00C7120
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C00D81A0 (DpiSessionCreateCallback.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 *     DxgkFinishPnPTransition @ 0x1C00D808C (DxgkFinishPnPTransition.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00D83B4 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00DBCF0 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiPnpEnableVga @ 0x1C00DEED0 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x1C00DF200 (DpiPnpNotifyGdi.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C016B480 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C016B640 (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStartAdapterInChain @ 0x1C016FD80 (DpiLdaStartAdapterInChain.c)
 */

void __fastcall DpiFdoStartAdapterThread(__int64 StartContext, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS v4; // r12d
  bool v5; // di
  char v6; // r15
  bool v7; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebp
  __int64 v12; // rax
  char v13; // di
  __int64 v14; // rsi
  struct _KMUTANT *v15; // r13
  __int64 v16; // rbx
  char v17; // r13
  __int64 v18; // rdx
  bool v19; // zf
  struct _DEVICE_OBJECT *v20; // rcx
  int v21; // eax
  bool v22; // di
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  struct _DEVICE_OBJECT *v27; // rcx
  unsigned int started; // [rsp+30h] [rbp-58h]
  char v29; // [rsp+90h] [rbp+8h] BYREF
  char v30; // [rsp+98h] [rbp+10h]
  bool i; // [rsp+A0h] [rbp+18h]
  bool v32; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v30 = 0;
  v5 = (StartContext & 2) != 0;
  v6 = StartContext & 1;
  v7 = (StartContext & 4) != 0;
  v32 = v5;
  if ( byte_1C0046C5A )
  {
    v25 = WdLogNewEntry5_WdEvent(StartContext, a2, a3, a4);
    *(_QWORD *)(v25 + 24) = DpiFdoStartAdapterThread;
    *(_QWORD *)(v25 + 32) = 0LL;
    WdLogEvent5_WdEvent(v25);
    goto LABEL_41;
  }
  Global = DXGGLOBAL::GetGlobal(StartContext, a2, a3, a4);
  started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 70));
  if ( v5 )
  {
    _InterlockedCompareExchange(&dword_1C0046F30, 5, 4);
    LOBYTE(v9) = 1;
    DpiPnpEnableVga(0LL, v9, 0LL);
  }
  AcquireMiniportListMutex();
  v10 = qword_1C0046E88;
  byte_1C0046C93 = 0;
  if ( !qword_1C0046E88 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
    v26[3] = DpiFdoStartAdapterThread;
    v26[4] = 0LL;
    v26[5] = -1073741823LL;
    WdLogEvent5_WdError(v26);
    v10 = qword_1C0046E88;
  }
  if ( v6 )
  {
    byte_1C0046CB0 = 1;
    if ( v10 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v10 + 64) + 944LL))(*(_QWORD *)(*(_QWORD *)(v10 + 64) + 48LL));
    DpiAcquirePostDisplayInfoFromBgfx(&dword_1C0046E90);
    dword_1C0046F30 = 1;
    goto LABEL_10;
  }
  if ( v5 )
  {
    if ( (unsigned int)(dword_1C0046F30 - 4) <= 1 )
      DpiDisableMsBddFallbackDriver();
LABEL_10:
    v11 = 0;
    if ( v5 )
      goto LABEL_11;
  }
  v11 = 1;
LABEL_11:
  v12 = qword_1C0046C78;
  v13 = 0;
  do
  {
    v14 = v12;
    for ( i = v11 == 0; *(_QWORD *)v14 != v12; v14 = *(_QWORD *)v14 )
    {
      if ( !v7 || *(_BYTE *)(v14 + 134) )
      {
        v15 = (struct _KMUTANT *)(v14 + 72);
        KeWaitForSingleObject((PVOID)(v14 + 72), Executive, 0, 0, 0LL);
        v16 = *(_QWORD *)(v14 + 56);
        if ( *(_QWORD *)v16 != v16 )
        {
          v17 = i;
          do
          {
            if ( *(_DWORD *)(v16 + 16) != 1953656900 || *(_DWORD *)(v16 + 20) != 4 )
            {
              KeEnterCriticalRegion();
              if ( *(_BYTE *)(v16 + 451) )
                DpiCheckForOutstandingD3Requests(v16);
              ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v16 + 168), 1u);
              if ( v17 == *(_BYTE *)(v16 + 1056) && *(_DWORD *)(v16 + 236) == 1 && !*(_BYTE *)(v16 + 232) )
              {
                v19 = *(_DWORD *)(v16 + 472) == 0;
                v20 = *(struct _DEVICE_OBJECT **)(v16 + 24);
                LOBYTE(v18) = v6;
                v29 = 0;
                v21 = v19 ? DpiFdoStartAdapter(v20, v6, (__int64)&v29) : DpiLdaStartAdapterInChain(v20, v18, &v29);
                v4 = v21;
                if ( v21 != 1075708986 )
                {
                  if ( v21 < 0 )
                  {
                    v27 = *(struct _DEVICE_OBJECT **)(v16 + 152);
                    *(_BYTE *)(v16 + 232) = 1;
                    IoInvalidateDeviceState(v27);
                  }
                  else
                  {
                    v13 |= v29;
                  }
                }
              }
              if ( *(_BYTE *)(v16 + 451) )
                DpiEnableD3Requests(*(_QWORD *)(v16 + 24));
              ExReleaseResourceLite(*(PERESOURCE *)(v16 + 168));
              KeLeaveCriticalRegion();
            }
            v16 = *(_QWORD *)v16;
          }
          while ( *(_QWORD *)v16 != *(_QWORD *)(v14 + 56) );
          v30 = v13;
          v15 = (struct _KMUTANT *)(v14 + 72);
        }
        KeReleaseMutex(v15, 0);
        v12 = qword_1C0046C78;
      }
    }
    ++v11;
  }
  while ( v11 < 2 );
  v22 = v32;
  if ( v32 && (unsigned int)(dword_1C0046F30 - 1) <= 1 )
    DpiEnableMsBddFallbackDriver();
  _InterlockedExchange64(&qword_1C0046C88, 0LL);
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  if ( v30 == 1 )
  {
    LOBYTE(v23) = 1;
    DpiPnpNotifyGdi(0LL, v23, started);
  }
  else if ( v22 )
  {
    LOBYTE(v23) = 1;
    LOBYTE(v24) = 1;
    DpiPnpEnableVga(v24, v23, started);
  }
  else
  {
    DxgkFinishPnPTransition(0xFFFFFFFF);
  }
LABEL_41:
  if ( !v6 )
    PsTerminateSystemThread(v4);
}
