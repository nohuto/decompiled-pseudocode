/*
 * XREFs of DpiDisableMsBddFallbackDriver @ 0x1C01961C8
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C00EC3D0 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C000C484 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000EA98 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00C1F3C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00C2074 (DxgkAcquireAdapterCoreSync.c)
 *     ?EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0145560 (-EnableMsBddFallback@DXGADAPTER@@QEAAXE@Z.c)
 */

__int64 __fastcall DpiDisableMsBddFallbackDriver(__int64 a1)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  void (__fastcall *v9)(__int64, int *); // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
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

  if ( qword_1C00570C8 )
  {
    v4 = *(_QWORD *)(qword_1C00570C8 + 64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v4 + 483) )
      DpiCheckForOutstandingD3Requests(v4);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3688), 2);
    DXGADAPTER::EnableMsBddFallback(*(DXGADAPTER **)(v4 + 3688), 0);
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3688), 2);
    v5 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v4 + 2608), 0);
    v7 = v5;
    if ( v5 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v8 + 24) = v7;
      WdLogEvent5_WdError(v8);
    }
    v9 = *(void (__fastcall **)(__int64, int *))(v4 + 992);
    v10 = *(_QWORD *)(v4 + 48);
    *(_QWORD *)(v4 + 4960) = a1;
    v9(v10, dword_1C00570D0);
    *(_QWORD *)(v4 + 4960) = 0LL;
    if ( qword_1C00570C0 == qword_1C00570C8 )
      qword_1C00570C0 = 0LL;
    dword_1C0057170 = 2;
    v14 = *((_QWORD *)DXGGLOBAL::GetGlobal(v11) + 111);
    if ( *(_BYTE *)v14 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v15, v16) + 24) = 200LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, *(struct DXGFASTMUTEX *const *)(v14 + 8));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
      v20 = (_BYTE *)(v14 + 16);
      v21 = 18LL;
      do
      {
        *v20 = 0;
        v20 += 48;
        --v21;
      }
      while ( v21 );
      ++*(_DWORD *)(v14 + 880);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, v17, v18, v19) + 24) = 222LL;
      if ( v22[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
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
