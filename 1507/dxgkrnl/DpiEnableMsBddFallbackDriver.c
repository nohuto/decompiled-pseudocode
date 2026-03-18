/*
 * XREFs of DpiEnableMsBddFallbackDriver @ 0x1C016B640
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00C7120 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C0167D70 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000268C (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0061DC0 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0061F00 (DxgkAcquireAdapterCoreSync.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DpiEnableMsBddFallbackDriver(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdi
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  _BYTE *v33; // rax
  __int64 v34; // rcx
  _BYTE v35[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( qword_1C0046E88 )
  {
    v3 = *(_QWORD *)(qword_1C0046E88 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 451) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 168), 1u);
    if ( *(_QWORD *)(v3 + 2504) )
    {
      LOBYTE(v5) = byte_1C0046C5B;
      LOBYTE(v4) = dword_1C0046F30 == 1;
      (*(void (__fastcall **)(_QWORD, int *, __int64, __int64))(v3 + 952))(
        *(_QWORD *)(v3 + 48),
        &dword_1C0046E90,
        v4,
        v5);
      byte_1C0046C5B = 0;
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 2504), 2);
      v6 = *(_QWORD *)(v3 + 2504);
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v6) )
      {
        v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
        *(_QWORD *)(v11 + 24) = 19867LL;
        WdLogEvent5_WdAssertion(v11);
      }
      if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)v6) )
      {
        v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
        *(_QWORD *)(v16 + 24) = 19869LL;
        WdLogEvent5_WdAssertion(v16);
      }
      *(_DWORD *)(v6 + 160) = 1;
      *(_BYTE *)(v6 + 164) = 0;
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 2504));
      v17 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 1488), 1u);
      v19 = v17;
      if ( v17 < 0 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v18);
        v20[3] = DpiEnableMsBddFallbackDriver;
        v20[4] = IoSetDeviceInterfaceState;
        v20[5] = v19;
        WdLogEvent5_WdError(v20);
      }
      memset(&dword_1C0046E90, 0, 0x20uLL);
      dword_1C0046EA8 = -1;
      memset(&xmmword_1C0046EB0, 0, 0x80uLL);
      qword_1C0046E80 = qword_1C0046E88;
      dword_1C0046F30 = 4;
      v27 = *((_QWORD *)DXGGLOBAL::GetGlobal(v22, v21, v23, v24) + 113);
      if ( *(_BYTE *)v27 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v26, v25, v28, v29) + 24) = 178LL;
      }
      else
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v35, *(struct DXGFASTMUTEX *const *)(v27 + 8));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
        v33 = (_BYTE *)(v27 + 16);
        v34 = 10LL;
        do
        {
          *v33 = 0;
          v33 += 48;
          --v34;
        }
        while ( v34 );
        ++*(_DWORD *)(v27 + 496);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v30, v31, v32) + 24) = 200LL;
        if ( v35[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
      }
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
    v1[3] = DpiEnableMsBddFallbackDriver;
    v1[5] = -1073741637LL;
    WdLogEvent5_WdError(v1);
    return 3221225659LL;
  }
}
