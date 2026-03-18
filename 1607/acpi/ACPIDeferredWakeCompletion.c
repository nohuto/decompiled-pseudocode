/*
 * XREFs of ACPIDeferredWakeCompletion @ 0x1C004C000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qqDqss @ 0x1C004C40C (WPP_RECORDER_SF_qqDqss.c)
 */

LONG __fastcall ACPIDeferredWakeCompletion(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 *v5; // r9
  void (__fastcall *v6)(_QWORD, __int64); // rax

  v3 = a2;
  if ( a3 < 0 )
  {
    v5 = qword_1C002C340;
    if ( a1 )
    {
      a2 = *(_QWORD *)(a1 + 8);
      if ( (a2 & 0x200000000000LL) != 0 && (a2 & 0x400000000000LL) != 0 )
        v5 = *(__int64 **)(a1 + 568);
    }
    WPP_RECORDER_SF_qqDqss(WPP_GLOBAL_Control->DeviceExtension, a2, a3, (_DWORD)v5);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 912), 0xFFFFFFFFFFFFCFFFuLL);
  }
  v6 = *(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 16LL);
  *(_BYTE *)(*(_QWORD *)(v3 + 184) + 3LL) |= 1u;
  v6(*(_QWORD *)(a1 + 720), v3);
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
