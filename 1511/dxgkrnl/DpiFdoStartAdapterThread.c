/*
 * XREFs of DpiFdoStartAdapterThread @ 0x1C00D0EB0
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C00C6850 (DpiSessionCreateCallback.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DpiPnpEnableVga @ 0x1C00CE504 (DpiPnpEnableVga.c)
 *     DpiPnpNotifyGdi @ 0x1C00CE644 (DpiPnpNotifyGdi.c)
 *     DxgkFinishPnPTransition @ 0x1C00CE73C (DxgkFinishPnPTransition.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00CE904 (-StartPnPTransition@DXGSESSIONMGR@@QEAAJXZ.c)
 *     DpiAcquirePostDisplayInfoFromBgfx @ 0x1C00CFC00 (DpiAcquirePostDisplayInfoFromBgfx.c)
 *     DpiFdoStartAdapter @ 0x1C00D1400 (DpiFdoStartAdapter.c)
 *     DpiDisableMsBddFallbackDriver @ 0x1C016FC90 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C016FE50 (DpiEnableMsBddFallbackDriver.c)
 *     DpiLdaStartAdapterInChain @ 0x1C01745B0 (DpiLdaStartAdapterInChain.c)
 */

void __fastcall DpiFdoStartAdapterThread(_QWORD *StartContext, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS v4; // edi
  bool v5; // bp
  void *v6; // r13
  char v7; // r12
  bool v8; // si
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rcx
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // r14
  char v14; // si
  __int64 v15; // rdi
  char v16; // bp
  __int64 v17; // rdx
  bool v18; // zf
  struct _DEVICE_OBJECT *v19; // rcx
  int v20; // eax
  bool v21; // si
  __int64 v22; // rax
  _QWORD *v23; // rax
  struct _DEVICE_OBJECT *v24; // rcx
  NTSTATUS ExitStatus; // [rsp+30h] [rbp-58h]
  bool v26; // [rsp+34h] [rbp-54h]
  int started; // [rsp+38h] [rbp-50h]
  PVOID P; // [rsp+40h] [rbp-48h]
  char v29; // [rsp+90h] [rbp+8h] BYREF
  bool i; // [rsp+98h] [rbp+10h]
  char v31; // [rsp+A0h] [rbp+18h]
  bool v32; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v5 = 0;
  P = 0LL;
  v6 = 0LL;
  ExitStatus = 0;
  v26 = 0;
  v31 = 0;
  if ( StartContext )
  {
    v6 = (void *)StartContext[1];
    v7 = *(_DWORD *)StartContext & 1;
    v8 = (*(_DWORD *)StartContext & 2) != 0;
    v5 = (*(_DWORD *)StartContext & 4) != 0;
    P = StartContext;
    v26 = v5;
  }
  else
  {
    v7 = 1;
    v8 = 1;
  }
  v32 = v8;
  if ( byte_1C0046CDA )
  {
    v22 = WdLogNewEntry5_WdEvent(StartContext, a2, a3, a4);
    *(_QWORD *)(v22 + 32) = 0LL;
    *(_QWORD *)(v22 + 24) = DpiFdoStartAdapterThread;
    WdLogEvent5_WdEvent(v22);
    goto LABEL_48;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)StartContext);
  started = DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 88));
  if ( v8 )
  {
    _InterlockedCompareExchange(&dword_1C0046FB0, 5, 4);
    DpiPnpEnableVga(0, 1u, 0);
  }
  AcquireMiniportListMutex();
  v10 = qword_1C0046F08;
  if ( !qword_1C0046F08 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
    v23[4] = 0LL;
    v23[3] = DpiFdoStartAdapterThread;
    v23[5] = -1073741823LL;
    WdLogEvent5_WdError(v23);
    v10 = qword_1C0046F08;
  }
  if ( v7 )
  {
    byte_1C0046D30 = 1;
    if ( v10 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v10 + 64) + 976LL))(*(_QWORD *)(*(_QWORD *)(v10 + 64) + 48LL));
    DpiAcquirePostDisplayInfoFromBgfx(dword_1C0046F10, 1, 1);
    dword_1C0046FB0 = 1;
  }
  else
  {
    if ( !v8 )
      goto LABEL_59;
    if ( (unsigned int)(dword_1C0046FB0 - 4) <= 1 )
      DpiDisableMsBddFallbackDriver();
  }
  if ( v8 )
  {
    v11 = 0;
    goto LABEL_14;
  }
LABEL_59:
  v11 = 1;
LABEL_14:
  v12 = qword_1C0046CF8;
  do
  {
    v13 = v12;
    v14 = v11 == 0;
    for ( i = v11 == 0; *(_QWORD *)v13 != v12; v13 = *(_QWORD *)v13 )
    {
      if ( v5 )
      {
        if ( *(_BYTE *)(v13 + 134) )
        {
LABEL_18:
          KeWaitForSingleObject((PVOID)(v13 + 72), Executive, 0, 0, 0LL);
          v15 = *(_QWORD *)(v13 + 56);
          if ( *(_QWORD *)v15 != v15 )
          {
            v16 = v31;
            do
            {
              if ( *(_DWORD *)(v15 + 16) != 1953656900 || *(_DWORD *)(v15 + 20) != 4 )
              {
                KeEnterCriticalRegion();
                if ( *(_BYTE *)(v15 + 483) )
                  DpiCheckForOutstandingD3Requests(v15);
                ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v15 + 168), 1u);
                if ( v14 == *(_BYTE *)(v15 + 1088)
                  && *(_DWORD *)(v15 + 236) == 1
                  && !*(_BYTE *)(v15 + 232)
                  && (!v6 || v6 == *(void **)(v15 + 152)) )
                {
                  v18 = *(_DWORD *)(v15 + 504) == 0;
                  v19 = *(struct _DEVICE_OBJECT **)(v15 + 24);
                  LOBYTE(v17) = v7;
                  v29 = 0;
                  if ( v18 )
                    v20 = DpiFdoStartAdapter(v19);
                  else
                    v20 = DpiLdaStartAdapterInChain(v19, v17, &v29);
                  ExitStatus = v20;
                  if ( v20 != 1075708986 )
                  {
                    if ( v20 < 0 )
                    {
                      v24 = *(struct _DEVICE_OBJECT **)(v15 + 152);
                      *(_BYTE *)(v15 + 232) = 1;
                      IoInvalidateDeviceState(v24);
                    }
                    else
                    {
                      v16 |= v29;
                    }
                  }
                  v14 = i;
                }
                if ( *(_BYTE *)(v15 + 483) )
                  DpiEnableD3Requests(*(_QWORD *)(v15 + 24));
                ExReleaseResourceLite(*(PERESOURCE *)(v15 + 168));
                KeLeaveCriticalRegion();
              }
              v15 = *(_QWORD *)v15;
            }
            while ( *(_QWORD *)v15 != *(_QWORD *)(v13 + 56) );
            v31 = v16;
            v5 = v26;
          }
          KeReleaseMutex((PRKMUTEX)(v13 + 72), 0);
          v12 = qword_1C0046CF8;
        }
      }
      else if ( !*(_BYTE *)(v13 + 134) )
      {
        goto LABEL_18;
      }
    }
    ++v11;
  }
  while ( v11 < 2 );
  v21 = v32;
  if ( v32 && (unsigned int)(dword_1C0046FB0 - 1) <= 1 )
    DpiEnableMsBddFallbackDriver();
  _InterlockedExchange64(&qword_1C0046D08, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v31 == 1 )
  {
    DpiPnpNotifyGdi(0LL, 1u, started);
  }
  else if ( v21 )
  {
    DpiPnpEnableVga(1u, 1u, started);
  }
  else
  {
    DxgkFinishPnPTransition(0xFFFFFFFFLL);
  }
  v4 = ExitStatus;
LABEL_48:
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( P )
    ExFreePoolWithTag(P, 0x74727044u);
  if ( !v7 )
    PsTerminateSystemThread(v4);
}
