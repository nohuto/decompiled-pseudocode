/*
 * XREFs of NVMePowerSettingChangeNotification @ 0x1C000835C
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0002A40 (NVMeHwAdapterControl.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMePowerSettingChangeNotification(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  bool v4; // zf
  int *v5; // rax
  int v6; // ecx
  __int64 v7; // rax

  if ( (a1[280] & 1) != 0 )
  {
    v3 = *(_QWORD *)a2 - *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE.Data1 )
      v3 = *(_QWORD *)(a2 + 8) - *(_QWORD *)GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE.Data4;
    if ( v3 || *(_DWORD *)(a2 + 24) != 4 )
    {
      v7 = *(_QWORD *)a2 - *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT.Data1;
      if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_NVME_POWER_IDLE_TIMEOUT.Data1 )
        v7 = *(_QWORD *)(a2 + 8) - *(_QWORD *)GUID_NVME_POWER_IDLE_TIMEOUT.Data4;
      if ( !v7 && *(_DWORD *)(a2 + 24) == 4 && a1[16] == -1 )
        a1[286] = **(_DWORD **)(a2 + 16);
    }
    else
    {
      v4 = a1[283] == 1;
      v5 = *(int **)(a2 + 16);
      v6 = *v5;
      a1[285] = *v5;
      if ( !v4 && a1[20] == -1 )
        a1[284] = v6;
    }
  }
  return 1;
}
