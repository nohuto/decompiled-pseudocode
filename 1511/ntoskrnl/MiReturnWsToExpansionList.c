/*
 * XREFs of MiReturnWsToExpansionList @ 0x14009B428
 * Callers:
 *     MmInSwapProcess @ 0x1400356E8 (MmInSwapProcess.c)
 *     MiAllowWorkingSetExpansion @ 0x14009B3B4 (MiAllowWorkingSetExpansion.c)
 *     MiProcessWorkingSets @ 0x1400A53A0 (MiProcessWorkingSets.c)
 *     MiTrimAllSystemPagableMemory @ 0x1401D83E0 (MiTrimAllSystemPagableMemory.c)
 * Callees:
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
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

  VmPartition = MiGetVmPartition(a1, a2, (unsigned int)a2);
  if ( v4 )
  {
    result = (__int64 *)(VmPartition + 5624);
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
    v5 = VmPartition + 5624;
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
