/*
 * XREFs of ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C00F31A8
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3120 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01AEB94 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01AEF48 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00F2F60 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C00F9C40 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OpenPersistencyRegistry(MONITOR_MGR *this, ACCESS_MASK a2, void **a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r15
  __int64 v10; // rbx
  __int64 v11; // rcx
  void *v12; // r8
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  void *DeviceRegKey; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING v31; // [rsp+28h] [rbp-48h] BYREF
  _OWORD v32[2]; // [rsp+38h] [rbp-38h] BYREF
  int v33; // [rsp+58h] [rbp-18h]
  wchar_t v34; // [rsp+5Ch] [rbp-14h]

  if ( a2 != 131097 && a2 != 131078 && a2 != 983103 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a3 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v21);
  }
  v6 = *((_QWORD *)this + 1);
  DeviceRegKey = 0LL;
  if ( !*(_QWORD *)(v6 + 16) )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v22);
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( !*(_QWORD *)(v7 + 192) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v23);
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL)
                                                                           + 192LL));
  if ( !DeviceAttachmentBaseRef )
  {
    v24 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v24);
  }
  v10 = IoOpenDeviceRegistryKey(DeviceAttachmentBaseRef, 1u, a2, &DeviceRegKey);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( (int)v10 < 0 )
  {
    v29 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v29 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(v29 + 32) = v10;
    WdLogEvent5_WdError(v29);
    return (unsigned int)v10;
  }
  v12 = DeviceRegKey;
  if ( !DeviceRegKey )
  {
    v25 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v25);
    v12 = DeviceRegKey;
  }
  v33 = *(_DWORD *)L"cy";
  *a3 = 0LL;
  v34 = aMonitorpersist[18];
  v31.Buffer = (wchar_t *)v32;
  v32[0] = *(_OWORD *)L"MonitorPersistency";
  *(_DWORD *)&v31.Length = 2490404;
  v32[1] = *(_OWORD *)L"ersistency";
  v13 = DxgkOpenRegistrySubkey(a3, a2, v12, &v31);
  v10 = v13;
  if ( v13 != -1073741772 )
  {
    if ( v13 >= 0 )
    {
      if ( !*a3 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v15);
        WdLogEvent5_WdAssertion(v28);
      }
      goto LABEL_17;
    }
    goto LABEL_23;
  }
  if ( a2 == 131078 || a2 == 983103 )
  {
    v26 = DxgkCreateRegistrySubkey(a3, a2, DeviceRegKey, &v31);
    v10 = v26;
    if ( v26 >= 0 )
      goto LABEL_17;
LABEL_23:
    v27 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v27 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    *(_QWORD *)(v27 + 32) = v10;
    WdLogEvent5_WdError(v27);
    goto LABEL_17;
  }
  v18 = WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
  *(_QWORD *)(v18 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  *(_QWORD *)(v18 + 32) = -1073741772LL;
LABEL_17:
  ZwClose(DeviceRegKey);
  return (unsigned int)v10;
}
