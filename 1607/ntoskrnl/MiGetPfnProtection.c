/*
 * XREFs of MiGetPfnProtection @ 0x1400B8AB0
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MmRemoveExecuteGrants @ 0x1400B88A0 (MmRemoveExecuteGrants.c)
 *     MiGetWorkingSetInfoEx @ 0x14010F4B0 (MiGetWorkingSetInfoEx.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x1400BDB00 (MiLocateCloneAddress.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F25B8 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

__int64 __fastcall MiGetPfnProtection(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  int v3; // eax
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r9
  _KPROCESS *Process; // rcx

  result = (*a2 >> 4) & 0x1F;
  if ( ((*a2 >> 4) & 0x1F) == 0 )
  {
    v3 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(a1 + 16);
    v5 = *(_QWORD *)(v4 + 8);
    LODWORD(v6) = v3;
    if ( v5 < 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.Bitmap[12] )
      {
        if ( MiLocateCloneAddress(Process, v5 | 0x8000000000000000uLL) )
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
