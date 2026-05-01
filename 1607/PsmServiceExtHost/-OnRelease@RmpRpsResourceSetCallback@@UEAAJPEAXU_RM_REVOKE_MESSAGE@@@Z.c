/*
 * XREFs of ?OnRelease@RmpRpsResourceSetCallback@@UEAAJPEAXU_RM_REVOKE_MESSAGE@@@Z @ 0x180029090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpRpsResourceSetCallback::OnRelease(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8));
}
