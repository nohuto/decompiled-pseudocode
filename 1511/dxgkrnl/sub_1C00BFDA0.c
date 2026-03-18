/*
 * XREFs of sub_1C00BFDA0 @ 0x1C00BFDA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C00BFDA0(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, __int64, _QWORD, int),
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  return a2(a1, a3, a4, a5, a6);
}
