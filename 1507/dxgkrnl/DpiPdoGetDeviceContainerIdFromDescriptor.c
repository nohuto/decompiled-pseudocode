/*
 * XREFs of DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C00DC890
 * Callers:
 *     DpiPdoAddPdo @ 0x1C00C75F0 (DpiPdoAddPdo.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C0061DC0 (DxgkReleaseAdapterCoreSync.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C0061F00 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00BBA54 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00BBBBC (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C00DCB0C (DpiDxgkDdiGetChildContainerId.c)
 *     MonitorGetMonitorEldInformation @ 0x1C00DCB94 (MonitorGetMonitorEldInformation.c)
 */

__int64 __fastcall DpiPdoGetDeviceContainerIdFromDescriptor(__int64 a1)
{
  __int64 ChildContainerId; // rbx
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  NTSTATUS v13; // eax
  _QWORD *v15; // rax
  __int64 v16; // [rsp+38h] [rbp-29h] BYREF
  int v17; // [rsp+40h] [rbp-21h]
  GUID v18; // [rsp+48h] [rbp-19h] BYREF
  GUID Source1[2]; // [rsp+58h] [rbp-9h] BYREF
  int Source2; // [rsp+78h] [rbp+17h] BYREF
  __int64 v21; // [rsp+7Ch] [rbp+1Bh]
  int v22; // [rsp+84h] [rbp+23h]

  v18 = (GUID)0LL;
  v16 = 0LL;
  v17 = 0;
  LODWORD(ChildContainerId) = -1073741637;
  memset(Source1, 0, sizeof(Source1));
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  v5 = *(_QWORD *)(v4 + 40);
  if ( *(_DWORD *)(v3 + 464) != 1 )
    goto LABEL_7;
  if ( !IsInternalVideoOutput(*(_DWORD *)(*(_QWORD *)(v3 + 904) + 4LL)) )
  {
    LODWORD(ChildContainerId) = DpiAcquireCoreSyncAccessSafe(a1, 0);
    if ( (int)ChildContainerId >= 0 )
    {
      LODWORD(ChildContainerId) = MonitorGetMonitorEldInformation(
                                    *(DXGADAPTER **)(v4 + 2504),
                                    *(_DWORD *)(v3 + 472),
                                    (struct _MONITOR_PACKED_ELD_INFORMATION *)&v16);
      DpiReleaseCoreSyncAccessSafe(a1, 0);
      if ( (int)ChildContainerId >= 0 )
      {
        v6 = RtlGenerateClass5Guid(&GUID_DISPLAY_CONTAINER_ID_NAMESPACE, &v16, 12LL, &v18);
        ChildContainerId = v6;
        if ( v6 < 0 )
          goto LABEL_20;
        *(_QWORD *)&Source1[1].Data1 = v16;
        *(_DWORD *)Source1[1].Data4 = v17;
        Source1[0] = v18;
LABEL_7:
        if ( *(_DWORD *)(v5 + 28) < 0x3005u || !*(_QWORD *)(v5 + 768) )
          goto LABEL_23;
        v8 = *(_QWORD *)(v4 + 2504);
        Source2 = 0;
        v21 = 0LL;
        v22 = 0;
        DxgkAcquireAdapterCoreSync(v8, 1);
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 904) + 104LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v4 + 2504), 1);
        ChildContainerId = (int)DpiDxgkDdiGetChildContainerId(
                                  v5,
                                  *(_QWORD *)(v4 + 48),
                                  *(unsigned int *)(*(_QWORD *)(v3 + 904) + 24LL),
                                  Source1);
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v4 + 2504));
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 904) + 104LL), 0);
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 2504));
        if ( (_DWORD)ChildContainerId == -1071841279 )
        {
          if ( *(_DWORD *)(v3 + 464) != 1 )
            goto LABEL_20;
          v12 = WdLogNewEntry5_WdEvent(v7, v9, v10, v11);
          *(_QWORD *)(v12 + 24) = DpiPdoGetDeviceContainerIdFromDescriptor;
          *(_QWORD *)(v12 + 32) = a1;
          WdLogEvent5_WdEvent(v12);
          LODWORD(ChildContainerId) = 0;
          Source1[0] = v18;
        }
        else if ( (int)ChildContainerId < 0 )
        {
          goto LABEL_20;
        }
        if ( RtlCompareMemory(Source1, &Source2, 0x10uLL) == 16 )
        {
          ChildContainerId = -1073741823LL;
        }
        else
        {
LABEL_23:
          if ( (int)ChildContainerId < 0 )
            return (unsigned int)ChildContainerId;
          v13 = RtlStringFromGUID(Source1, (PUNICODE_STRING)(v3 + 928));
          ChildContainerId = v13;
          if ( v13 >= 0 )
            return (unsigned int)ChildContainerId;
        }
LABEL_20:
        v15 = (_QWORD *)WdLogNewEntry5_WdError(v7);
        v15[3] = DpiPdoGetDeviceContainerIdFromDescriptor;
        v15[4] = *(_QWORD *)(v5 + 768);
        v15[5] = ChildContainerId;
        WdLogEvent5_WdError(v15);
      }
    }
  }
  return (unsigned int)ChildContainerId;
}
