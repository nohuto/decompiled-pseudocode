/*
 * XREFs of ?RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z @ 0x180030364
 * Callers:
 *     RmpCpuSetManagerRegisterProcessWithAllocation @ 0x1800315D0 (RmpCpuSetManagerRegisterProcessWithAllocation.c)
 * Callees:
 *     ?RmpCpuSetManagerFindProcessComparator@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x1800304B4 (-RmpCpuSetManagerFindProcessComparator@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 */

struct _RM_CPU_SET_PROCESS *__fastcall RmpCpuSetManagerFindProcess(struct _RM_CPU_SET_MANAGER *a1, void *a2)
{
  DWORD ProcessId; // eax
  void *v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r11
  __int64 v9; // r10
  int v10; // r9d
  __int64 v12; // [rsp+40h] [rbp+8h]

  ProcessId = GetProcessId(a2);
  v4 = (void *)ProcessId;
  v5 = HIBYTE(ProcessId)
     + 37 * (BYTE2(ProcessId) + 37 * (BYTE1(ProcessId) + 37 * ((unsigned __int8)ProcessId + 11623883LL)));
  v6 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = -1LL << (*((_BYTE *)a1 + 44) & 0x1F);
    v9 = v8 & v5;
    if ( v7 )
      goto LABEL_5;
    v10 = *((_DWORD *)a1 + 11) >> 5;
    if ( !v10 )
      break;
    v12 = v8 & v5;
    v7 = *((_QWORD *)a1 + 6)
       + 8LL
       * ((37
         * (BYTE6(v12)
          + 37
          * (BYTE5(v12)
           + 37
           * (BYTE4(v12)
            + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v12)) & (unsigned int)(v10 - 1));
LABEL_5:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v9 == (v8 & *(_QWORD *)(v7 + 8)) )
        goto LABEL_9;
    }
    v7 = 0LL;
LABEL_9:
    if ( !v7 )
      return (struct _RM_CPU_SET_PROCESS *)v6;
    if ( RmpCpuSetManagerFindProcessComparator((struct _RTL_HASH_ENTRY *)v7, v4) )
      goto LABEL_13;
  }
  v7 = 0LL;
LABEL_13:
  if ( v7 )
    return (struct _RM_CPU_SET_PROCESS *)v7;
  return (struct _RM_CPU_SET_PROCESS *)v6;
}
