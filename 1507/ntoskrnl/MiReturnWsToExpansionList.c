/*
 * XREFs of MiReturnWsToExpansionList @ 0x14002B690
 * Callers:
 *     MiAllowWorkingSetExpansion @ 0x14002B61C (MiAllowWorkingSetExpansion.c)
 *     MiProcessWorkingSets @ 0x140099DB0 (MiProcessWorkingSets.c)
 *     MmInSwapProcess @ 0x140110ACC (MmInSwapProcess.c)
 *     MiTrimAllSystemPagableMemory @ 0x14021B230 (MiTrimAllSystemPagableMemory.c)
 * Callees:
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 */

__int64 *__fastcall MiReturnWsToExpansionList(__int64 a1, __int64 a2)
{
  __int64 VmPartition; // rax
  _QWORD *v3; // r9
  int v4; // r8d
  __int64 v5; // rcx
  __int64 *result; // rax
  __int64 **v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rcx

  VmPartition = MiGetVmPartition(a1, a2, (unsigned int)a2, a1);
  if ( v4 )
  {
    result = (__int64 *)(VmPartition + 5264);
    v9 = v3 + 3;
    v10 = *result;
    v3[3] = *result;
    v3[4] = result;
    if ( *(__int64 **)(v10 + 8) != result )
      __fastfail(3u);
    *(_QWORD *)(v10 + 8) = v9;
    *result = (__int64)v9;
  }
  else
  {
    v5 = VmPartition + 5264;
    result = v3 + 3;
    v7 = *(__int64 ***)(v5 + 8);
    v3[3] = v5;
    v3[4] = v7;
    if ( *v7 != (__int64 *)v5 )
      __fastfail(3u);
    *v7 = result;
    *(_QWORD *)(v5 + 8) = result;
  }
  v8 = v3[1];
  if ( v8 )
    return (__int64 *)KeSignalGate(v8, 1LL);
  return result;
}
