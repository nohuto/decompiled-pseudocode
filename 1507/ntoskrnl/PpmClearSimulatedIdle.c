/*
 * XREFs of PpmClearSimulatedIdle @ 0x140234140
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmClearSimulatedIdle(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // ax
  __int64 v3; // rax
  unsigned __int8 v4; // dl
  unsigned int v6; // eax
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 CurrentIrql; // dl
  _PPM_IDLE_STATES *IdleStates; // rcx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 3) )
    return 3221225485LL;
  v2 = *(_WORD *)a1;
  if ( *(_WORD *)a1 || *(_BYTE *)(a1 + 2) )
  {
    if ( v2 >= (unsigned __int16)KiMaximumGroups || (v4 = *(_BYTE *)(a1 + 2), v4 >= 0x40u) )
    {
      v3 = 0xFFFFFFFFLL;
    }
    else
    {
      v3 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v2 + v4];
      if ( !(_DWORD)v3 )
        return 3221225485LL;
    }
    if ( (_DWORD)v3 != -1 )
      goto LABEL_11;
    return 3221225485LL;
  }
  v3 = 0LL;
LABEL_11:
  v6 = KiProcessorIndexToNumberMappingTable[v3];
  Affinity.Reserved[1] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v6 >> 6);
  Affinity.Reserved[2] = 0;
  Affinity.Mask = 1LL << (v6 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  IdleStates = CurrentPrcb->PowerState.IdleStates;
  if ( IdleStates )
  {
    if ( IdleStates->ForceIdle )
    {
      IdleStates->ForceIdle = 0;
      IdleStates->OverrideIndex = 0;
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
