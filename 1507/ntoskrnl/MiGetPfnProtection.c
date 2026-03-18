/*
 * XREFs of MiGetPfnProtection @ 0x14007B518
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     MmRemoveExecuteGrants @ 0x14007B234 (MmRemoveExecuteGrants.c)
 *     MiGetWorkingSetInfoEx @ 0x14014EE78 (MiGetWorkingSetInfoEx.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

__int64 __fastcall MiGetPfnProtection(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  unsigned int v3; // eax
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rbx
  _KPROCESS *Process; // rcx

  result = (*a2 >> 4) & 0x1F;
  if ( ((*a2 >> 4) & 0x1F) == 0 )
  {
    v3 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(a1 + 16);
    v5 = *(_QWORD *)(v4 + 8);
    v6 = v3;
    if ( v5 < 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.Bitmap[12] )
      {
        if ( MiLocateCloneAddress((__int64)Process, v5 | 0x8000000000000000uLL) )
          LODWORD(v6) = MmMakeProtectNotWriteCopy[v6];
      }
      return (unsigned int)v6;
    }
    else
    {
      return (unsigned int)MmMakeProtectNotWriteCopy[v3];
    }
  }
  return result;
}
