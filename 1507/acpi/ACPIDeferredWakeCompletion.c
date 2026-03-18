/*
 * XREFs of ACPIDeferredWakeCompletion @ 0x1C00394C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

LONG __fastcall ACPIDeferredWakeCompletion(__int64 a1, __int64 a2, int a3)
{
  void (__fastcall *v4)(_QWORD); // rax

  if ( a3 < 0 )
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 904), 0xFFFFFFFFFFFFCFFFuLL);
  v4 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 16LL);
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v4(*(_QWORD *)(a1 + 712));
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
