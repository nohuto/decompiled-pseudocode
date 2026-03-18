/*
 * XREFs of HUBUCX_ReleaseAddress0OwnershipFromUCX @ 0x1C001D01C
 * Callers:
 *     HUBDSM_ReleasingAddressZeroOwnershipOnEnumFailure @ 0x1C0017850 (HUBDSM_ReleasingAddressZeroOwnershipOnEnumFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_ReleaseAddress0OwnershipFromUCX(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*a1 + 400LL))(*(_QWORD *)(*a1 + 208LL), a1[3]);
}
