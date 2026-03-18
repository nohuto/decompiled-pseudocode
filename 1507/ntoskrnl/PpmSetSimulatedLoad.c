/*
 * XREFs of PpmSetSimulatedLoad @ 0x14023A99C
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmSetSimulatedLoad(__int64 a1)
{
  _PROC_PERF_LOAD *Load; // rsi
  unsigned int v3; // ebx
  unsigned __int16 v4; // ax
  int v5; // edi
  unsigned __int8 v6; // dl
  _PROC_PERF_LOAD *PoolWithTag; // rax
  _PROC_PERF_LOAD *v9; // r14
  char v10; // cl
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Load = 0LL;
  if ( *(_BYTE *)(a1 + 3) )
    return (unsigned int)-1073741811;
  v4 = *(_WORD *)a1;
  if ( *(_WORD *)a1 || *(_BYTE *)(a1 + 2) )
  {
    if ( v4 >= (unsigned __int16)KiMaximumGroups || (v6 = *(_BYTE *)(a1 + 2), v6 >= 0x40u) )
    {
      v5 = -1;
    }
    else
    {
      v5 = KiProcessorNumberToIndexMappingTable[64 * v4 + v6];
      if ( !v5 )
        goto LABEL_9;
    }
    if ( v5 == -1 )
      goto LABEL_9;
  }
  else
  {
    v5 = 0;
  }
  if ( *(_BYTE *)(a1 + 4) <= 0x64u )
  {
    PoolWithTag = (_PROC_PERF_LOAD *)ExAllocatePoolWithTag(NonPagedPoolNx, 2uLL, 0x704D5050u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    PoolWithTag->BusyPercentage = *(_BYTE *)(a1 + 4);
    PoolWithTag->FrequencyPercentage = *(_BYTE *)(a1 + 5);
    *(_DWORD *)Affinity.Reserved = 0;
    Affinity.Reserved[2] = 0;
    v10 = KiProcessorIndexToNumberMappingTable[v5] & 0x3F;
    Affinity.Group = (unsigned int)KiProcessorIndexToNumberMappingTable[v5] >> 6;
    Affinity.Mask = 1LL << v10;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    Load = CurrentPrcb->PowerState.Load;
    CurrentPrcb->PowerState.Load = v9;
    __writecr8(CurrentIrql);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    v3 = 0;
    goto LABEL_10;
  }
LABEL_9:
  v3 = -1073741811;
LABEL_10:
  if ( Load )
    ExFreePoolWithTag(Load, 0x704D5050u);
  return v3;
}
