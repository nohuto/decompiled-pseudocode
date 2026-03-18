/*
 * XREFs of HUBUCX_ReleaseAddress0OwnershipFromUCX @ 0x1C001DC64
 * Callers:
 *     HUBDSM_ReleasingAddressZeroOwnershipOnEnumFailure @ 0x1C00182D0 (HUBDSM_ReleasingAddressZeroOwnershipOnEnumFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_ReleaseAddress0OwnershipFromUCX(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*a1 + 416LL))(*(_QWORD *)(*a1 + 224LL), a1[3]);
}
