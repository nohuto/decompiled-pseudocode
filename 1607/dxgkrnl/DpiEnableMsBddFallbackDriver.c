/*
 * XREFs of DpiEnableMsBddFallbackDriver @ 0x1C0196380
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00EC3D0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C01950D0 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0008768 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00C1F3C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00C2074 (DxgkAcquireAdapterCoreSync.c)
 */

__int64 __fastcall DpiEnableMsBddFallbackDriver(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  void (__fastcall *v7)(__int64, int *, __int64, __int64); // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _BYTE *v27; // rax
  __int64 v28; // rcx
  _BYTE v29[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( qword_1C00570C8 )
  {
    v4 = *(_QWORD *)(qword_1C00570C8 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
    if ( *(_QWORD *)(v4 + 3688) )
    {
      v7 = *(void (__fastcall **)(__int64, int *, __int64, __int64))(v4 + 984);
      v8 = *(_QWORD *)(v4 + 48);
      *(_QWORD *)(v4 + 4960) = a1;
      LOBYTE(v6) = byte_1C0056E9C;
      LOBYTE(v5) = dword_1C0057170 == 1;
      v7(v8, dword_1C00570D0, v5, v6);
      *(_QWORD *)(v4 + 4960) = 0LL;
      byte_1C0056E9C = 0;
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3688), 2);
      v9 = *(_QWORD *)(v4 + 3688);
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v9) )
      {
        v11 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v11 + 24) = 6775LL;
        WdLogEvent5_WdAssertion(v11);
      }
      if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)v9) )
      {
        v13 = WdLogNewEntry5_WdAssertion(v12);
        *(_QWORD *)(v13 + 24) = 6777LL;
        WdLogEvent5_WdAssertion(v13);
      }
      *(_DWORD *)(v9 + 176) = 1;
      *(_BYTE *)(v9 + 180) = 0;
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3688), 2);
      v14 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v4 + 2608), 1u);
      v16 = v14;
      if ( v14 < 0 )
      {
        v17 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v17 + 24) = v16;
        WdLogEvent5_WdError(v17);
      }
      memset(dword_1C00570D0, 0, 0x20uLL);
      dword_1C00570E8 = -1;
      memset(&xmmword_1C00570F0, 0, 0x80uLL);
      qword_1C00570C0 = qword_1C00570C8;
      dword_1C0057170 = 4;
      v21 = *((_QWORD *)DXGGLOBAL::GetGlobal(v18) + 111);
      if ( *(_BYTE *)v21 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v20, v19, v22, v23) + 24) = 200LL;
      }
      else
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, *(struct DXGFASTMUTEX *const *)(v21 + 8));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
        v27 = (_BYTE *)(v21 + 16);
        v28 = 18LL;
        do
        {
          *v27 = 0;
          v27 += 48;
          --v28;
        }
        while ( v28 );
        ++*(_DWORD *)(v21 + 880);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v24, v25, v26) + 24) = 222LL;
        if ( v29[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29);
      }
    }
    if ( *(_BYTE *)(v4 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v2 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v2);
    return 3221225659LL;
  }
}
