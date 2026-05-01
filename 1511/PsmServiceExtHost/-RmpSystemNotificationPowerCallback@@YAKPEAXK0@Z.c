/*
 * XREFs of ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18001F120
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     RmpMemoryMonitorOnSystemStateChanged @ 0x18001F030 (RmpMemoryMonitorOnSystemStateChanged.c)
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_TELEMETRY_CONTEXT@@KK@Z @ 0x18001F2B0 (-RmpTelemetrySetTimer@@YAXPEAU_RM_TELEMETRY_CONTEXT@@KK@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003DC2C (-RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     ?ReturnIoCountersToCirculation@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003DE4C (-ReturnIoCountersToCirculation@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 */

__int64 __fastcall RmpSystemNotificationPowerCallback(char *a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // ebx
  DWORD TickCount; // eax
  ExecutionModel::ResourceManager *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *cData; // r9
  int v13; // eax
  int v15; // edx
  bool v16; // zf
  unsigned __int64 v17; // rdx
  unsigned int v18; // [rsp+30h] [rbp-68h] BYREF
  int v19; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v21; // [rsp+60h] [rbp-38h]
  int v22; // [rsp+68h] [rbp-30h]
  int v23; // [rsp+6Ch] [rbp-2Ch]
  unsigned int *v24; // [rsp+70h] [rbp-28h]
  int v25; // [rsp+78h] [rbp-20h]
  int v26; // [rsp+7Ch] [rbp-1Ch]

  RtlEnterCriticalSection(&RmpGlobalLock);
  v5 = *((_DWORD *)a1 + 436);
  v6 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *a3;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *a3 )
    v6 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a3[1];
  if ( v6 )
  {
    if ( *((_DWORD *)a3 + 5) )
      v7 = v5 & 0xFFFFFFFD;
    else
      v7 = v5 | 2;
  }
  else if ( *((_DWORD *)a3 + 5) )
  {
    v7 = v5 | 1;
  }
  else
  {
    v7 = v5 & 0xFFFFFFFE;
  }
  RmpMemoryMonitorOnSystemStateChanged((__int64)(a1 + 1600), *((_DWORD *)a1 + 436));
  TickCount = GetTickCount();
  RmpTelemetrySetTimer((struct _RM_TELEMETRY_CONTEXT *)(a1 + 1704), (v7 & 1) != 0 ? 3600000 : 900000, TickCount);
  v9 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 262);
  if ( v9 )
  {
    if ( *((_DWORD *)a1 + 397) )
    {
      v15 = (v7 >> 1) & 1;
      if ( ((*((_DWORD *)a1 + 436) >> 1) & 1) != v15 )
      {
        v16 = v15 == 0;
        v17 = *((unsigned int *)a1 + 397);
        if ( v16 )
          ExecutionModel::ResourceManager::ReturnIoCountersToCirculation(v9, v17);
        else
          ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(v9, v17);
      }
    }
  }
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v9, 1uLL) )
  {
    v13 = *((_DWORD *)a1 + 436);
    v23 = 0;
    v26 = 0;
    v19 = v13;
    v21 = &v19;
    v24 = &v18;
    v22 = (int)cData;
    v18 = v7;
    v25 = (int)cData;
    TlgWrite(v10, &unk_18006308C, v11, cData, (UINT32)cData, &pData);
  }
  *((_DWORD *)a1 + 436) = v7;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return 0LL;
}
