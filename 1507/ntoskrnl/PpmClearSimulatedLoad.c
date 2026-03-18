/*
 * XREFs of PpmClearSimulatedLoad @ 0x14023A680
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmClearSimulatedLoad(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // ax
  __int64 v3; // rax
  unsigned __int8 v4; // dl
  unsigned int v5; // eax
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 CurrentIrql; // dl
  _PROC_PERF_LOAD *Load; // rdi
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 3) )
    return (unsigned int)-1073741811;
  v2 = *(_WORD *)a1;
  if ( !*(_WORD *)a1 && !*(_BYTE *)(a1 + 2) )
  {
    v3 = 0LL;
    goto LABEL_12;
  }
  if ( v2 >= (unsigned __int16)KiMaximumGroups || (v4 = *(_BYTE *)(a1 + 2), v4 >= 0x40u) )
  {
    v3 = 0xFFFFFFFFLL;
  }
  else
  {
    v3 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v2 + v4];
    if ( !(_DWORD)v3 )
      return (unsigned int)-1073741811;
  }
  if ( (_DWORD)v3 == -1 )
    return (unsigned int)-1073741811;
LABEL_12:
  v5 = KiProcessorIndexToNumberMappingTable[v3];
  Affinity.Reserved[1] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v5 >> 6);
  Affinity.Reserved[2] = 0;
  Affinity.Mask = 1LL << (v5 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  Load = CurrentPrcb->PowerState.Load;
  CurrentPrcb->PowerState.Load = 0LL;
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( Load )
    ExFreePoolWithTag(Load, 0x704D5050u);
  return v1;
}
