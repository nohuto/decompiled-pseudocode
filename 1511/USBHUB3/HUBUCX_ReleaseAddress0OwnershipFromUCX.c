/*
 * XREFs of HUBUCX_ReleaseAddress0OwnershipFromUCX @ 0x1C001DBB8
 * Callers:
 *     HUBDSM_ReleasingAddressZeroOwnershipOnEnumFailure @ 0x1C0018280 (HUBDSM_ReleasingAddressZeroOwnershipOnEnumFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_ReleaseAddress0OwnershipFromUCX(_QWORD *a1)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*a1 + 416LL))(*(_QWORD *)(*a1 + 224LL), a1[3]);
}
