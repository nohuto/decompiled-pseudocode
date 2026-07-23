/*
 * XREFs of MiReturnWsToExpansionList @ 0x14007BF2C
 * Callers:
 *     MiAllowWorkingSetExpansion @ 0x14007BEDC (MiAllowWorkingSetExpansion.c)
 *     MmInSwapProcess @ 0x140090CC4 (MmInSwapProcess.c)
 *     MiProcessWorkingSets @ 0x1400CB4E0 (MiProcessWorkingSets.c)
 *     MiEmptyTargetedWorkingSet @ 0x1401E954C (MiEmptyTargetedWorkingSet.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiReturnWsToExpansionList(__int64 a1)
{
  int *v1; // rax
  _QWORD *v2; // r9
  int v3; // r8d
  int *v4; // rcx
  __int64 result; // rax
  __int64 *v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rcx

  v1 = MiPartitionIdToPointer(*(_WORD *)(a1 + 164));
  if ( v3 )
  {
    result = (__int64)(v1 + 1564);
    v8 = v2 + 3;
    v9 = *(_QWORD *)result;
    if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result )
      __fastfail(3u);
    *v8 = v9;
    v2[4] = result;
    *(_QWORD *)(v9 + 8) = v8;
    *(_QWORD *)result = v8;
  }
  else
  {
    v4 = v1 + 1564;
    result = (__int64)(v2 + 3);
    v6 = (__int64 *)*((_QWORD *)v4 + 1);
    if ( (int *)*v6 != v4 )
      __fastfail(3u);
    *(_QWORD *)result = v4;
    v2[4] = v6;
    *v6 = result;
    *((_QWORD *)v4 + 1) = result;
  }
  v7 = v2[12];
  if ( v7 )
    return KeSignalGate(v7, 1LL);
  return result;
}
