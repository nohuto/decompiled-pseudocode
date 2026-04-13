/*
 * XREFs of _CxxThrowException @ 0x180026510
 * Callers:
 *     sub_180002200 @ 0x180002200 (sub_180002200.c)
 *     sub_18000A968 @ 0x18000A968 (sub_18000A968.c)
 *     sub_18000B37C @ 0x18000B37C (sub_18000B37C.c)
 *     sub_180018340 @ 0x180018340 (sub_180018340.c)
 *     sub_18001865C @ 0x18001865C (sub_18001865C.c)
 *     sub_1800187A4 @ 0x1800187A4 (sub_1800187A4.c)
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x1800210C8 (-cancel_current_task@Concurrency@@YAXXZ.c)
 *     sub_1800210F0 @ 0x1800210F0 (sub_1800210F0.c)
 *     sub_18002111C @ 0x18002111C (sub_18002111C.c)
 *     sub_180026D02 @ 0x180026D02 (sub_180026D02.c)
 *     sub_1800273A7 @ 0x1800273A7 (sub_1800273A7.c)
 *     sub_1800274F1 @ 0x1800274F1 (sub_1800274F1.c)
 *     sub_1800275B0 @ 0x1800275B0 (sub_1800275B0.c)
 *     sub_1800276B0 @ 0x1800276B0 (sub_1800276B0.c)
 *     sub_18002775F @ 0x18002775F (sub_18002775F.c)
 *     sub_1800277D9 @ 0x1800277D9 (sub_1800277D9.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall __noreturn CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _CxxThrowException(pExceptionObject, pThrowInfo);
}
