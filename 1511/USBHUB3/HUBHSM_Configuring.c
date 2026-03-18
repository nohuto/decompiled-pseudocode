/*
 * XREFs of HUBHSM_Configuring @ 0x1C00071F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHSM_Configuring(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 960) + 552LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 224LL),
    *(_QWORD *)(a1 + 960) + 152LL);
  return 1000LL;
}
