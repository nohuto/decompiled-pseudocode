/*
 * XREFs of ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18001BDB0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18000DE40 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x18001BF38 (-RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z @ 0x18002B71C (-RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18002B810 (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 */

__int64 __fastcall RmpSystemNotificationPowerCallback(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // ebx
  DWORD TickCount; // eax
  struct ExecutionModel::BaseResourceSet *v10; // r8
  ExecutionModel::ResourceManager *v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  int v15; // eax
  int v17; // edx
  bool v18; // zf
  unsigned __int64 v19; // rdx
  unsigned int v20; // [rsp+38h] [rbp-19h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-15h]
  int v22; // [rsp+40h] [rbp-11h] BYREF
  unsigned int v23; // [rsp+44h] [rbp-Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v25; // [rsp+68h] [rbp+17h]
  int v26; // [rsp+70h] [rbp+1Fh]
  int v27; // [rsp+74h] [rbp+23h]
  unsigned int *v28; // [rsp+78h] [rbp+27h]
  int v29; // [rsp+80h] [rbp+2Fh]
  int v30; // [rsp+84h] [rbp+33h]

  RtlEnterCriticalSection(&RmpGlobalLock);
  v6 = *((_DWORD *)a1 + 156);
  v7 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *a3;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *a3 )
    v7 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a3[1];
  if ( v7 )
  {
    if ( *((_DWORD *)a3 + 5) )
      v8 = v6 & 0xFFFFFFFD;
    else
      v8 = v6 | 2;
  }
  else if ( *((_DWORD *)a3 + 5) )
  {
    v8 = v6 | 1;
  }
  else
  {
    v8 = v6 & 0xFFFFFFFE;
  }
  v20 = *((_DWORD *)a1 + 156);
  v21 = v8;
  RmpPartitionTableActOnActivePartitions(
    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312),
    v5,
    (__int64 (__fastcall *)(struct _RM_PARTITION *, void *))RmpMemoryMonitorInstanceOnSystemStateChanged,
    &v20);
  TickCount = GetTickCount();
  RmpTelemetrySetTimer(a1, (v8 & 1) != 0 ? 3600000 : 900000, TickCount);
  v10 = (struct ExecutionModel::BaseResourceSet *)*((unsigned int *)a1 + 131);
  v11 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 191);
  if ( (_DWORD)v10 )
  {
    v17 = (v21 >> 1) & 1;
    if ( ((v20 >> 1) & 1) != v17 )
    {
      v18 = v17 == 0;
      v19 = *((unsigned int *)a1 + 131);
      if ( v18 )
      {
        *((_QWORD *)v11 + 15) -= v10;
        if ( (*(_BYTE *)(*((_QWORD *)v11 + 13) + 1344LL) & 4) == 0 )
          ExecutionModel::ResourceManager::ReplenishIoCounterPool(v11, v19);
      }
      else
      {
        ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(v11, v19, v10);
      }
    }
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v11, 1uLL) )
  {
    v15 = *((_DWORD *)a1 + 156);
    v27 = 0;
    v30 = 0;
    v22 = v15;
    v25 = &v22;
    v28 = &v23;
    v26 = 4;
    v23 = v8;
    v29 = 4;
    TlgWrite(v12, &unk_180042411, v13, v14, 4u, &pData);
  }
  *((_DWORD *)a1 + 156) = v8;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return 0LL;
}
