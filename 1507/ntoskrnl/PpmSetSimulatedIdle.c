/*
 * XREFs of PpmSetSimulatedIdle @ 0x1402358FC
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmSetSimulatedIdle(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v3; // ax
  __int64 v4; // rax
  unsigned __int8 v5; // dl
  unsigned int v7; // eax
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 CurrentIrql; // dl
  _PPM_IDLE_STATES *IdleStates; // rcx
  unsigned int v11; // eax
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 7) )
    return 3221225485LL;
  v3 = *(_WORD *)(a1 + 4);
  if ( v3 || *(_BYTE *)(a1 + 6) )
  {
    if ( v3 >= (unsigned __int16)KiMaximumGroups || (v5 = *(_BYTE *)(a1 + 6), v5 >= 0x40u) )
    {
      v4 = 0xFFFFFFFFLL;
    }
    else
    {
      v4 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v3 + v5];
      if ( !(_DWORD)v4 )
        return 3221225485LL;
    }
    if ( (_DWORD)v4 != -1 )
      goto LABEL_11;
    return 3221225485LL;
  }
  v4 = 0LL;
LABEL_11:
  v7 = KiProcessorIndexToNumberMappingTable[v4];
  Affinity.Reserved[1] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v7 >> 6);
  Affinity.Reserved[2] = 0;
  Affinity.Mask = 1LL << (v7 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  IdleStates = CurrentPrcb->PowerState.IdleStates;
  if ( IdleStates )
  {
    v11 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 < IdleStates->ProcessorIdleCount )
    {
      IdleStates->ForceIdle = 1;
      IdleStates->OverrideIndex = v11;
    }
    else
    {
      v1 = -1073741811;
    }
  }
  else
  {
    v1 = -1073741637;
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v1;
}
