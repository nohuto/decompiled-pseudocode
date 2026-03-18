/*
 * XREFs of DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C00E3A40
 * Callers:
 *     DpiPdoAddPdo @ 0x1C00E2A50 (DpiPdoAddPdo.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C00A9F00 (DxgkReleaseAdapterCoreSync.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA040 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00E25D8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00E2694 (DxgkAcquireAdapterDdiSync.c)
 *     MonitorGetMonitorEldInformation @ 0x1C00E3420 (MonitorGetMonitorEldInformation.c)
 *     DpiDxgkDdiGetChildContainerId @ 0x1C00E3CBC (DpiDxgkDdiGetChildContainerId.c)
 */

__int64 __fastcall DpiPdoGetDeviceContainerIdFromDescriptor(__int64 a1)
{
  __int64 ChildContainerId; // rbx
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  NTSTATUS v14; // eax
  _QWORD *v16; // rax
  __int64 v17; // [rsp+38h] [rbp-29h] BYREF
  int v18; // [rsp+40h] [rbp-21h]
  GUID v19; // [rsp+48h] [rbp-19h] BYREF
  GUID Source1[2]; // [rsp+58h] [rbp-9h] BYREF
  int Source2; // [rsp+78h] [rbp+17h] BYREF
  __int64 v22; // [rsp+7Ch] [rbp+1Bh]
  int v23; // [rsp+84h] [rbp+23h]

  v19 = (GUID)0LL;
  v17 = 0LL;
  v18 = 0;
  LODWORD(ChildContainerId) = -1073741637;
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
                                    *(DXGADAPTER **)(v4 + 2544),
                                    *(unsigned int *)(v3 + 504),
                                    (struct _MONITOR_PACKED_ELD_INFORMATION *)&v17,
                                    v6);
      DpiReleaseCoreSyncAccessSafe(a1, 0);
      if ( (int)ChildContainerId >= 0 )
      {
        v7 = RtlGenerateClass5Guid(&GUID_DISPLAY_CONTAINER_ID_NAMESPACE, &v17, 12LL, &v19);
        ChildContainerId = v7;
        if ( v7 < 0 )
          goto LABEL_20;
        *(_QWORD *)&Source1[1].Data1 = v17;
        *(_DWORD *)Source1[1].Data4 = v18;
        Source1[0] = v19;
LABEL_7:
        if ( *(_DWORD *)(v5 + 28) < 0x3005u || !*(_QWORD *)(v5 + 768) )
          goto LABEL_23;
        v9 = *(_QWORD *)(v4 + 2544);
        Source2 = 0;
        v22 = 0LL;
        v23 = 0;
        DxgkAcquireAdapterCoreSync(v9, 1);
        KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 104LL), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v4 + 2544), 1);
        ChildContainerId = (int)DpiDxgkDdiGetChildContainerId(
                                  v5,
                                  *(_QWORD *)(v4 + 48),
                                  *(unsigned int *)(*(_QWORD *)(v3 + 936) + 24LL),
                                  Source1);
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v4 + 2544));
        KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 104LL), 0);
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 2544), 1);
        if ( (_DWORD)ChildContainerId == -1071841279 )
        {
          if ( *(_DWORD *)(v3 + 496) != 1 )
            goto LABEL_20;
          v13 = WdLogNewEntry5_WdEvent(v8, v10, v11, v12);
          *(_QWORD *)(v13 + 24) = DpiPdoGetDeviceContainerIdFromDescriptor;
          *(_QWORD *)(v13 + 32) = a1;
          WdLogEvent5_WdEvent(v13);
          LODWORD(ChildContainerId) = 0;
          Source1[0] = v19;
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
          v14 = RtlStringFromGUID(Source1, (PUNICODE_STRING)(v3 + 960));
          ChildContainerId = v14;
          if ( v14 >= 0 )
            return (unsigned int)ChildContainerId;
        }
LABEL_20:
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v8);
        v16[3] = DpiPdoGetDeviceContainerIdFromDescriptor;
        v16[4] = *(_QWORD *)(v5 + 768);
        v16[5] = ChildContainerId;
        WdLogEvent5_WdError(v16);
      }
    }
  }
  return (unsigned int)ChildContainerId;
}
