/*
 * XREFs of DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C00EE86C
 * Callers:
 *     DpiPdoAddPdo @ 0x1C00EF39C (DpiPdoAddPdo.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00C1F3C (DxgkReleaseAdapterCoreSync.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00C2074 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00DF65C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00DF68C (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C00EEAD0 (DpiDxgkDdiGetChildContainerId.c)
 *     MonitorGetMonitorEldInformation @ 0x1C00EED78 (MonitorGetMonitorEldInformation.c)
 */

__int64 __fastcall DpiPdoGetDeviceContainerIdFromDescriptor(__int64 a1)
{
  __int64 ChildContainerId; // rbx
  __int64 v3; // rsi
  __int64 v4; // r15
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  NTSTATUS v10; // eax
  __int64 v12; // rax
  __int64 v13; // [rsp+38h] [rbp-19h] BYREF
  int v14; // [rsp+40h] [rbp-11h]
  GUID v15; // [rsp+48h] [rbp-9h] BYREF
  GUID Source1[2]; // [rsp+58h] [rbp+7h] BYREF
  int Source2; // [rsp+78h] [rbp+27h] BYREF
  __int64 v18; // [rsp+7Ch] [rbp+2Bh]
  int v19; // [rsp+84h] [rbp+33h]

  v13 = 0LL;
  v15 = (GUID)0LL;
  LODWORD(ChildContainerId) = -1073741637;
  v14 = 0;
  memset(Source1, 0, sizeof(Source1));
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  v5 = *(_QWORD *)(v4 + 40);
  if ( *(_DWORD *)(v3 + 496) != 1 )
    goto LABEL_7;
  if ( !IsInternalVideoOutput(*(_DWORD *)(*(_QWORD *)(v3 + 936) + 4LL)) )
  {
    LODWORD(ChildContainerId) = DpiAcquireCoreSyncAccessSafe(a1, 0);
    if ( (int)ChildContainerId >= 0 )
    {
      LODWORD(ChildContainerId) = MonitorGetMonitorEldInformation(
                                    *(DXGADAPTER **)(v4 + 3688),
                                    *(_DWORD *)(v3 + 504),
                                    (struct _MONITOR_PACKED_ELD_INFORMATION *)&v13);
      DpiReleaseCoreSyncAccessSafe(a1, 0);
      if ( (int)ChildContainerId >= 0 )
      {
        v6 = RtlGenerateClass5Guid(&GUID_DISPLAY_CONTAINER_ID_NAMESPACE, &v13, 12LL, &v15);
        ChildContainerId = v6;
        if ( v6 < 0 )
          goto LABEL_19;
        *(_QWORD *)&Source1[1].Data1 = v13;
        *(_DWORD *)Source1[1].Data4 = v14;
        Source1[0] = v15;
LABEL_7:
        if ( *(_DWORD *)(v5 + 28) >= 0x3005u && *(_QWORD *)(v5 + 768) )
        {
          v8 = *(_QWORD *)(v4 + 3688);
          Source2 = 0;
          v18 = 0LL;
          v19 = 0;
          DxgkAcquireAdapterCoreSync(v8, 1);
          KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 104LL), Executive, 0, 0, 0LL);
          DxgkAcquireAdapterDdiSync(*(_QWORD *)(v4 + 3688), 1);
          ChildContainerId = (int)DpiDxgkDdiGetChildContainerId(
                                    v5,
                                    *(_QWORD *)(v4 + 48),
                                    *(unsigned int *)(*(_QWORD *)(v3 + 936) + 24LL),
                                    Source1);
          DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v4 + 3688));
          KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 104LL), 0);
          DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3688), 1);
          if ( (_DWORD)ChildContainerId == -1071841279 )
          {
            if ( *(_DWORD *)(v3 + 496) != 1 )
              goto LABEL_19;
            v9 = WdLogNewEntry5_WdEvent(v7);
            *(_QWORD *)(v9 + 24) = a1;
            WdLogEvent5_WdEvent(v9);
            LODWORD(ChildContainerId) = 0;
            Source1[0] = v15;
          }
          else if ( (int)ChildContainerId < 0 )
          {
            goto LABEL_19;
          }
          if ( RtlCompareMemory(Source1, &Source2, 0x10uLL) == 16 )
          {
            ChildContainerId = -1073741823LL;
            goto LABEL_19;
          }
        }
        if ( (int)ChildContainerId < 0 )
          return (unsigned int)ChildContainerId;
        v10 = RtlStringFromGUID(Source1, (PUNICODE_STRING)(v3 + 960));
        ChildContainerId = v10;
        if ( v10 >= 0 )
          return (unsigned int)ChildContainerId;
LABEL_19:
        v12 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v12 + 24) = *(_QWORD *)(v5 + 768);
        *(_QWORD *)(v12 + 32) = ChildContainerId;
        WdLogEvent5_WdError(v12);
      }
    }
  }
  return (unsigned int)ChildContainerId;
}
