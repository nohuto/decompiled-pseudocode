/*
 * XREFs of ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180002040
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18001ED60 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18003233C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_RESOURCE_U.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180032EA8 (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180033070 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_R.c)
 *     ?RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180033498 (-RmpMemoryMonitorRebootIfAble@@YAXPEAU_RM_POLICY@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_.c)
 *     ?RmpMemoryMonitorRevokeAnyHost@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180033800 (-RmpMemoryMonitorRevokeAnyHost@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_S.c)
 *     ?RmpMemoryMonitorRevokeExtraActivities@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x1800339C4 (-RmpMemoryMonitorRevokeExtraActivities@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_SERVICE_GLOBALS@@_.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorWaitForEvents(HANDLE *a1, int a2, DWORD a3, enum _RM_MEMORY_MONITOR_EVENT *a4)
{
  HANDLE *v6; // rbx
  DWORD v7; // esi
  unsigned int v9; // r8d
  _BYTE *v10; // r14
  int v11; // eax
  HANDLE v12; // rcx
  __int64 v13; // rdx
  DWORD v14; // eax
  unsigned int v15; // ebx
  int v16; // ecx
  ULONG v17; // ecx
  __int16 v19; // [rsp+30h] [rbp-D0h] BYREF
  DWORD v20; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v24; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+60h] [rbp-A0h] BYREF
  void *v26; // [rsp+70h] [rbp-90h]
  int v27; // [rsp+78h] [rbp-88h]
  int v28; // [rsp+7Ch] [rbp-84h]
  unsigned int *v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  int *v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v34; // [rsp+B0h] [rbp-50h]
  int v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+BCh] [rbp-44h]
  __int16 *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  _DWORD *v39; // [rsp+D0h] [rbp-30h]
  int v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+DCh] [rbp-24h]
  DWORD *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  _DWORD v44[6]; // [rsp+F0h] [rbp-10h] BYREF
  HANDLE Handles[6]; // [rsp+108h] [rbp+8h] BYREF

  v6 = a1;
  v7 = 0;
  if ( WaitForSingleObjectEx(*a1, 0, 0) )
    *((_DWORD *)v6 + 22) &= ~1u;
  v9 = 0;
  v10 = v6 + 11;
  v11 = 1;
  do
  {
    if ( (v11 & a2) != 0 && (v9 || (*v10 & 1) == 0) )
    {
      v12 = *v6;
      v13 = v7++;
      v44[v13] = v9;
      Handles[v13] = v12;
    }
    ++v9;
    v11 = __ROL4__(v11, 1);
    ++v6;
  }
  while ( v9 < 6 );
  if ( (unsigned int)dword_18004C030 > 5 && (qword_18004C040 & 1) != 0 && (qword_18004C048 & 1) == qword_18004C048 )
  {
    v19 = v7;
    v37 = &v19;
    v40 = 4 * (unsigned __int16)v7;
    v42 = &v20;
    v38 = 2LL;
    v39 = v44;
    v41 = 0;
    v20 = a3;
    v43 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = (ULONGLONG)off_18004C038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180041F0E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18004C038;
    v34 = &unk_180041F19;
    UserData.Reserved = 2;
    v35 = 51;
    v36 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  v14 = WaitForMultipleObjectsEx(v7, Handles, 0, a3, 0);
  if ( v14 >= 0x40 )
  {
    v15 = 258;
    if ( v14 != 258 )
    {
      v15 = 0;
      *(_DWORD *)a4 = v44[0];
    }
  }
  else
  {
    v15 = 0;
    v16 = v44[v14];
    *(_DWORD *)a4 = v16;
    if ( !v16 )
      *(_DWORD *)v10 |= 1u;
  }
  if ( (unsigned int)dword_18004C030 > 5 && (qword_18004C040 & 1) != 0 && (qword_18004C048 & 1) == qword_18004C048 )
  {
    v21 = v15;
    v29 = &v21;
    v22 = *(_DWORD *)a4;
    v31 = &v22;
    v30 = 4LL;
    v32 = 4LL;
    *(_DWORD *)&v24.Level = 517;
    v25.Ptr = (ULONGLONG)off_18004C038;
    *(_DWORD *)&v24.Id = ((unsigned int)&unk_18004208A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v24.Keyword = 1LL;
    v17 = *(unsigned __int16 *)off_18004C038;
    v26 = &unk_180042095;
    v25.Size = v17;
    v25.Reserved = 2;
    v27 = 57;
    v28 = 1;
    EventWriteTransfer(RegHandle, &v24, 0LL, 0LL, 4u, &v25);
  }
  return v15;
}
