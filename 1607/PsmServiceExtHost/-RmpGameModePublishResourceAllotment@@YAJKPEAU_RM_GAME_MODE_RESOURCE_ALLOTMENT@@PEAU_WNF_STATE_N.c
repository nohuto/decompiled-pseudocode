/*
 * XREFs of ?RmpGameModePublishResourceAllotment@@YAJKPEAU_RM_GAME_MODE_RESOURCE_ALLOTMENT@@PEAU_WNF_STATE_NAME@@@Z @ 0x180031C20
 * Callers:
 *     ?RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z @ 0x18001D560 (-RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z.c)
 *     ?RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180031888 (-RmpGameModeApplyPoliciesToRecipient@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     RmpGameModeOnHostImportanceChanged @ 0x1800320B0 (RmpGameModeOnHostImportanceChanged.c)
 *     RmpGameModeRegisterActivityHost @ 0x180032168 (RmpGameModeRegisterActivityHost.c)
 *     RmpGameModeUnregisterActivityHost @ 0x180032224 (RmpGameModeUnregisterActivityHost.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     RmpCpuSetManagerPopulateCpuSetIdsFromAllocation @ 0x1800314A4 (RmpCpuSetManagerPopulateCpuSetIdsFromAllocation.c)
 */

__int64 __fastcall RmpGameModePublishResourceAllotment(
        int a1,
        struct _RM_GAME_MODE_RESOURCE_ALLOTMENT *a2,
        struct _WNF_STATE_NAME *a3)
{
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp-838h] BYREF
  int v9; // [rsp+34h] [rbp-834h] BYREF
  int v10; // [rsp+38h] [rbp-830h]
  _BYTE v11[2052]; // [rsp+3Ch] [rbp-82Ch] BYREF

  v6 = 12;
  memset_0(&v8, 0, 0x80CuLL);
  v10 = -1;
  if ( a1 )
  {
    v8 = 0;
    if ( (a1 & 1) != 0 )
    {
      RmpCpuSetManagerPopulateCpuSetIdsFromAllocation(*(_QWORD *)a2, &v9, (__int64)v11);
      if ( v9 )
      {
        v10 = 12;
        v6 = 4 * v9 + 12;
      }
    }
  }
  else
  {
    v8 = 259;
  }
  return RtlPublishWnfStateData(*a3, 0LL, &v8, v6, 0LL);
}
