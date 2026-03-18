/*
 * XREFs of MonitorIsMonitorVirtualModeDisabled @ 0x1C0082B20
 * Callers:
 *     IsVirtualizationDisabledForTarget @ 0x1C0082A44 (IsVirtualizationDisabledForTarget.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C33E0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorIsMonitorVirtualModeDisabled(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 v3; // r14
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *i; // rdi
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-38h] BYREF

  v3 = a2;
  if ( !a1 || a2 == -1 || !a3 )
    return 3221225485LL;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !*(_QWORD *)(a1 + 2128) )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v19);
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 2128) + 96LL);
  if ( !v6 )
  {
    v20 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v20 + 24) = a1;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  if ( &v26 == (__int64 *)-64LL )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( v6 == -168 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v22);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(v6 + 168));
  for ( i = *(__int64 **)(v6 + 128); i != (__int64 *)(v6 + 128) && i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 7) == (_DWORD)v3 )
    {
      if ( *((_DWORD *)i + 94) != 1 )
        i = (__int64 *)i[48];
      if ( i )
      {
        if ( v6 == -168 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v8);
          WdLogEvent5_WdAssertion(v23);
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 168));
        if ( *((_DWORD *)i + 94) != 1 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v12);
          WdLogEvent5_WdAssertion(v24);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)(i + 30), 1u);
        *a3 = *((_BYTE *)i + 24) >> 7;
        ExReleaseResourceLite((PERESOURCE)(i + 30));
        KeLeaveCriticalRegion();
        return 0LL;
      }
      break;
    }
  }
  v14 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v14 + 24) = v3;
  *(_QWORD *)(v14 + 32) = v6;
  if ( v6 == -168 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v25);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v6 + 168));
  v17 = WdLogNewEntry5_WdDmmEvent(v16);
  *(_QWORD *)(v17 + 24) = v3;
  *(_QWORD *)(v17 + 32) = a1;
  WdLogEvent5_WdDmmEvent(v17);
  return 3221225664LL;
}
