/*
 * XREFs of DpiEnableMsBddFallbackDriver @ 0x1C016FE50
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00D0EB0 (DpiFdoStartAdapterThread.c)
 *     DpiFdoHandleStopDevice @ 0x1C016C440 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00031D4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00A9F00 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA040 (DxgkAcquireAdapterCoreSync.c)
 */

__int64 __fastcall DpiEnableMsBddFallbackDriver(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _BYTE *v24; // rax
  __int64 v25; // rcx
  _BYTE v26[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( qword_1C0046F08 )
  {
    v3 = *(_QWORD *)(qword_1C0046F08 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 483) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 168), 1u);
    if ( *(_QWORD *)(v3 + 2544) )
    {
      LOBYTE(v5) = byte_1C0046CDB;
      LOBYTE(v4) = dword_1C0046FB0 == 1;
      (*(void (__fastcall **)(_QWORD, int *, __int64, __int64))(v3 + 984))(
        *(_QWORD *)(v3 + 48),
        dword_1C0046F10,
        v4,
        v5);
      byte_1C0046CDB = 0;
      DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 2544), 2);
      v6 = *(_QWORD *)(v3 + 2544);
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v6) )
      {
        v8 = WdLogNewEntry5_WdAssertion(v7);
        *(_QWORD *)(v8 + 24) = 20323LL;
        WdLogEvent5_WdAssertion(v8);
      }
      if ( !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)v6) )
      {
        v10 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v10 + 24) = 20325LL;
        WdLogEvent5_WdAssertion(v10);
      }
      *(_DWORD *)(v6 + 160) = 1;
      *(_BYTE *)(v6 + 164) = 0;
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 2544), 2);
      v11 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 1528), 1u);
      v13 = v11;
      if ( v11 < 0 )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
        v14[3] = DpiEnableMsBddFallbackDriver;
        v14[4] = IoSetDeviceInterfaceState;
        v14[5] = v13;
        WdLogEvent5_WdError(v14);
      }
      memset(dword_1C0046F10, 0, 0x20uLL);
      dword_1C0046F28 = -1;
      memset(&xmmword_1C0046F30, 0, 0x80uLL);
      qword_1C0046F00 = qword_1C0046F08;
      dword_1C0046FB0 = 4;
      v18 = *((_QWORD *)DXGGLOBAL::GetGlobal(v15) + 134);
      if ( *(_BYTE *)v18 )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v19, v20) + 24) = 193LL;
      }
      else
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, *(struct DXGFASTMUTEX *const *)(v18 + 8));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
        v24 = (_BYTE *)(v18 + 16);
        v25 = 18LL;
        do
        {
          *v24 = 0;
          v24 += 48;
          --v25;
        }
        while ( v25 );
        ++*(_DWORD *)(v18 + 880);
        *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v21, v22, v23) + 24) = 215LL;
        if ( v26[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
      }
    }
    if ( *(_BYTE *)(v3 + 483) )
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
