/*
 * XREFs of KeSetEventBoostPriority @ 0x1401D402C
 * Callers:
 *     NtSetEventBoostPriority @ 0x1406AFE54 (NtSetEventBoostPriority.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x14000CAE8 (KeSetEventBoostPriorityEx.c)
 */

/*
 * Hex-Rays decompilation failed for KeSetEventBoostPriority @ 0x1401D402C
 * Reason: Hex-Rays returned no pseudocode for 0x1401D402C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D402C: sub     rsp, 38h
 * 00000001401D4030: test    rdx, rdx
 * 00000001401D4033: lea     rax, [rsp+38h+arg_8]
 * 00000001401D4038: cmovnz  rax, rdx
 * 00000001401D403C: and     [rsp+38h+var_18], 0
 * 00000001401D4041: mov     rdx, rax
 * 00000001401D4044: xor     r9d, r9d
 * 00000001401D4047: xor     r8d, r8d
 * 00000001401D404A: call    KeSetEventBoostPriorityEx
 * 00000001401D404F: add     rsp, 38h
 * 00000001401D4053: retn
 */
