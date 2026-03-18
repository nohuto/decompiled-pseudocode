/*
 * XREFs of PspRemoveCpuRateControl @ 0x14053CD70
 * Callers:
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeRemoveSchedulingGroup @ 0x140120EBC (KeRemoveSchedulingGroup.c)
 *     PspFreeRateControl @ 0x14053CDC8 (PspFreeRateControl.c)
 */

LONG_PTR __fastcall PspRemoveCpuRateControl(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 1000) + 44LL) = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1296), 0xFFFFFFDF);
  KeRemoveSchedulingGroup((unsigned __int16 *)(*(_QWORD *)(a1 + 1000) + 128LL));
  result = PspFreeRateControl(*(_QWORD *)(a1 + 1000), 2LL);
  *(_QWORD *)(a1 + 1000) = 0LL;
  if ( PsCpuFairShareEnabled )
  {
    result = *(_QWORD *)(a1 + 1072);
    if ( result == a1 )
    {
      v3 = *(void **)(a1 + 1104);
      if ( v3 )
      {
        result = ObfDereferenceObject(v3);
        *(_QWORD *)(a1 + 1104) = 0LL;
      }
    }
  }
  return result;
}
