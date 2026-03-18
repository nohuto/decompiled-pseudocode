/*
 * XREFs of DpiDisableMsBddFallbackDriver @ 0x1C016FC90
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00D0EB0 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00A9F00 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA040 (DxgkAcquireAdapterCoreSync.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C012C2FC (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 */

__int64 __fastcall DpiDisableMsBddFallbackDriver(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rbx
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *v17; // rax
  __int64 v18; // rcx
  _BYTE v19[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( qword_1C0046F08 )
  {
    v3 = *(_QWORD *)(qword_1C0046F08 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v3 + 483) )
      DpiCheckForOutstandingD3Requests(v3);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 168), 1u);
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v3 + 2544), 2);
    DXGADAPTER::EnableMsBddFallback(*(DXGADAPTER **)(v3 + 2544), 0);
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v3 + 2544), 2);
    v4 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v3 + 1528), 0);
    v6 = v4;
    if ( v4 < 0 )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdError(v5);
      v7[3] = DpiFdoStartAdapter;
      v7[4] = IoSetDeviceInterfaceState;
      v7[5] = v6;
      WdLogEvent5_WdError(v7);
    }
    (*(void (__fastcall **)(_QWORD, int *))(v3 + 992))(*(_QWORD *)(v3 + 48), dword_1C0046F10);
    if ( qword_1C0046F00 == qword_1C0046F08 )
      qword_1C0046F00 = 0LL;
    dword_1C0046FB0 = 2;
    v11 = *((_QWORD *)DXGGLOBAL::GetGlobal(v8) + 134);
    if ( *(_BYTE *)v11 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v12, v13) + 24) = 193LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, *(struct DXGFASTMUTEX *const *)(v11 + 8));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
      v17 = (_BYTE *)(v11 + 16);
      v18 = 18LL;
      do
      {
        *v17 = 0;
        v17 += 48;
        --v18;
      }
      while ( v18 );
      ++*(_DWORD *)(v11 + 880);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v14, v15, v16) + 24) = 215LL;
      if ( v19[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
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
    v1[3] = DpiDisableMsBddFallbackDriver;
    v1[5] = -1073741637LL;
    WdLogEvent5_WdError(v1);
    return 3221225659LL;
  }
}
