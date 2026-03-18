/*
 * XREFs of DpiDisableMsBddFallbackDriver @ 0x1C016B480
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00C7120 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0061DC0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0061F00 (DxgkAcquireAdapterCoreSync.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C012611C (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 */

__int64 __fastcall DpiDisableMsBddFallbackDriver(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rbx
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *v20; // rax
  __int64 v21; // rcx
  _BYTE v22[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( qword_1C0046E88 )
  {
    v3 = *(_QWORD *)(qword_1C0046E88 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 451) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 168), 1u);
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 2504), 2);
    DXGADAPTER::EnableMsBddFallback(*(DXGADAPTER **)(v3 + 2504), 0);
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 2504));
    v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 1488), 0);
    v6 = v4;
    if ( v4 < 0 )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdError(v5);
      v7[3] = DpiFdoStartAdapter;
      v7[4] = IoSetDeviceInterfaceState;
      v7[5] = v6;
      WdLogEvent5_WdError(v7);
    }
    (*(void (__fastcall **)(_QWORD, int *))(v3 + 960))(*(_QWORD *)(v3 + 48), &dword_1C0046E90);
    if ( qword_1C0046E80 == qword_1C0046E88 )
      qword_1C0046E80 = 0LL;
    dword_1C0046F30 = 2;
    v14 = *((_QWORD *)DXGGLOBAL::GetGlobal(v9, v8, v10, v11) + 113);
    if ( *(_BYTE *)v14 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v15, v16) + 24) = 178LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, *(struct DXGFASTMUTEX *const *)(v14 + 8));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
      v20 = (_BYTE *)(v14 + 16);
      v21 = 10LL;
      do
      {
        *v20 = 0;
        v20 += 48;
        --v21;
      }
      while ( v21 );
      ++*(_DWORD *)(v14 + 496);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v17, v18, v19) + 24) = 200LL;
      if ( v22[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
    }
    if ( *(_BYTE *)(v3 + 451) )
      DpiEnableD3Requests(*(_QWORD *)(v3 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    v1 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v1[4] = 0LL;
    v1[3] = DpiDisableMsBddFallbackDriver;
    v1[5] = -1073741637LL;
    WdLogEvent5_WdError(v1);
    return 3221225659LL;
  }
}
