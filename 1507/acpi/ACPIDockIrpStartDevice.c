/*
 * XREFs of ACPIDockIrpStartDevice @ 0x1C00789A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIInternalClearFlags @ 0x1C00044C8 (ACPIInternalClearFlags.c)
 *     ACPIBuildSynchronizationRequest @ 0x1C00359A0 (ACPIBuildSynchronizationRequest.c)
 */

__int64 __fastcall ACPIDockIrpStartDevice(ULONG_PTR a1, IRP *a2)
{
  int v3; // ebx
  __int64 DeviceExtension; // rax
  _DWORD *v5; // rsi
  _QWORD *v6; // rdi
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = (_DWORD *)DeviceExtension;
  v6 = *(_QWORD **)(DeviceExtension + 176);
  if ( v6 )
  {
    if ( *(_DWORD *)(DeviceExtension + 192) == 1 )
    {
      KdDisableDebugger();
      v10 = 0LL;
      v3 = ACPIGet(v6, 1262699615, 277086210, 1LL, 4, 0LL, 0LL, (__int64)&v10, 0LL);
      if ( v3 >= 0 )
      {
        v11 = 0LL;
        v3 = ACPIGet(v6, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v11, 0LL);
      }
      KdEnableDebugger();
      if ( v3 >= 0 && (*(_BYTE *)v6 & 2) != 0 )
        v3 = -1073741823;
      ACPIBuildSynchronizationRequest(
        RootDeviceExtension,
        (__int64)ACPIBuildIssueNotifyInvalidateRelations,
        RootDeviceExtension,
        v8,
        1);
      if ( v3 < 0 )
        goto LABEL_12;
      ACPIInternalClearFlags(v5, 0x400000000LL);
    }
    v5[48] = 2;
    v5[78] = 2;
LABEL_12:
    a2->IoStatus.Status = v3;
    v7 = v3;
    goto LABEL_13;
  }
  v7 = -1073741823;
  a2->IoStatus.Status = -1073741823;
LABEL_13:
  IofCompleteRequest(a2, 0);
  return v7;
}
