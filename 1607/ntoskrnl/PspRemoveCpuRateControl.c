/*
 * XREFs of PspRemoveCpuRateControl @ 0x1404B5738
 * Callers:
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeRemoveSchedulingGroup @ 0x1400A47E8 (KeRemoveSchedulingGroup.c)
 *     PspFreeRateControl @ 0x1404B57B4 (PspFreeRateControl.c)
 */

LONG_PTR __fastcall PspRemoveCpuRateControl(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 992) + 44LL) = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1304), 0xFFFFFFDF);
  KeRemoveSchedulingGroup((unsigned __int16 *)(*(_QWORD *)(a1 + 992) + 128LL));
  result = PspFreeRateControl(*(_QWORD *)(a1 + 992), 2LL);
  *(_QWORD *)(a1 + 992) = 0LL;
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
