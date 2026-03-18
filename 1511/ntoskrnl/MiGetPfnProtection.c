/*
 * XREFs of MiGetPfnProtection @ 0x1400BB6C0
 * Callers:
 *     MiGetPageProtection @ 0x14005F320 (MiGetPageProtection.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     MmRemoveExecuteGrants @ 0x1400BB4A8 (MmRemoveExecuteGrants.c)
 *     MiGetWorkingSetInfoEx @ 0x1401DF5F4 (MiGetWorkingSetInfoEx.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiGetPfnProtection(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned int v4; // r8d
  _KPROCESS *Process; // rcx

  result = (*a2 >> 4) & 0x1F;
  if ( ((*a2 >> 4) & 0x1F) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v4 = (*(_DWORD *)(a1 + 16) >> 5) & 0x1F;
    if ( v3 >= 0 )
    {
      return (unsigned int)MmMakeProtectNotWriteCopy[v4];
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.Bitmap[12] )
      {
        if ( MiLocateCloneAddress((__int64)Process, v3 | 0x8000000000000000uLL) )
          return (unsigned int)MmMakeProtectNotWriteCopy[v4];
      }
      return v4;
    }
  }
  return result;
}
