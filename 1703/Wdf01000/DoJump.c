/*
 * XREFs of DoJump @ 0x1C00400A3
 * Callers:
 *     __guard_ss_verify_failure_rcx @ 0x1C00400AA (__guard_ss_verify_failure_rcx.c)
 *     __guard_ss_verify_failure_rdx @ 0x1C00400B0 (__guard_ss_verify_failure_rdx.c)
 *     __guard_ss_verify_failure_r8 @ 0x1C00400B6 (__guard_ss_verify_failure_r8.c)
 *     __guard_ss_verify_failure_r9 @ 0x1C00400BC (__guard_ss_verify_failure_r9.c)
 *     __guard_ss_verify_failure_r10 @ 0x1C00400C2 (__guard_ss_verify_failure_r10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 DoJump(void)
{
  return ((__int64 (*)(void))_guard_ss_verify_failure_fptr)();
}
