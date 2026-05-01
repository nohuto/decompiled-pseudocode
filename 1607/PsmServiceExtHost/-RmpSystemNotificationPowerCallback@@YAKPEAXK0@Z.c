/*
 * XREFs of ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x18001AC20
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     RmpMemoryMonitorOnSystemStateChanged @ 0x18001AB20 (RmpMemoryMonitorOnSystemStateChanged.c)
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x18001ADA0 (-RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z @ 0x18002CE80 (-RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18002CF80 (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 */

__int64 __fastcall RmpSystemNotificationPowerCallback(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // ebx
  DWORD TickCount; // eax
  struct ExecutionModel::BaseResourceSet *v9; // r8
  ExecutionModel::ResourceManager *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v14; // eax
  int v16; // edx
  bool v17; // zf
  unsigned __int64 v18; // rdx
  int v19; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v22; // [rsp+60h] [rbp-38h]
  int v23; // [rsp+68h] [rbp-30h]
  int v24; // [rsp+6Ch] [rbp-2Ch]
  unsigned int *v25; // [rsp+70h] [rbp-28h]
  int v26; // [rsp+78h] [rbp-20h]
  int v27; // [rsp+7Ch] [rbp-1Ch]

  RtlEnterCriticalSection(&RmpGlobalLock);
  v5 = *((_DWORD *)a1 + 480);
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
  RmpMemoryMonitorOnSystemStateChanged((__int64)a1, *((_DWORD *)a1 + 480));
  TickCount = GetTickCount();
  RmpTelemetrySetTimer(a1, (v7 & 1) != 0 ? 3600000 : 900000, TickCount);
  v9 = (struct ExecutionModel::BaseResourceSet *)*((unsigned int *)a1 + 463);
  v10 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 418);
  if ( (_DWORD)v9 )
  {
    v16 = (v7 >> 1) & 1;
    if ( ((*((_DWORD *)a1 + 480) >> 1) & 1) != v16 )
    {
      v17 = v16 == 0;
      v18 = *((unsigned int *)a1 + 463);
      if ( v17 )
      {
        *((_QWORD *)v10 + 17) -= v9;
        if ( (*(_BYTE *)(*((_QWORD *)v10 + 15) + 1344LL) & 4) == 0 )
          ExecutionModel::ResourceManager::ReplenishIoCounterPool(v10, v18);
      }
      else
      {
        ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(v10, v18, v9);
      }
    }
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v10, 1uLL) )
  {
    v14 = *((_DWORD *)a1 + 480);
    v24 = 0;
    v27 = 0;
    v19 = v14;
    v22 = &v19;
    v25 = &v20;
    v23 = 4;
    v20 = v7;
    v26 = 4;
    TlgWrite(v11, &unk_180041749, v12, v13, 4u, &pData);
  }
  *((_DWORD *)a1 + 480) = v7;
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return 0LL;
}
