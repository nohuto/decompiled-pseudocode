/*
 * XREFs of KeSetEventBoostPriority @ 0x1401D3E58
 * Callers:
 *     NtSetEventBoostPriority @ 0x1406AFF8C (NtSetEventBoostPriority.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x14000C668 (KeSetEventBoostPriorityEx.c)
 */

/*
 * Hex-Rays decompilation failed for KeSetEventBoostPriority @ 0x1401D3E58
 * Reason: Hex-Rays returned no pseudocode for 0x1401D3E58
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D3E58: sub     rsp, 38h
 * 00000001401D3E5C: test    rdx, rdx
 * 00000001401D3E5F: lea     rax, [rsp+38h+arg_8]
 * 00000001401D3E64: cmovnz  rax, rdx
 * 00000001401D3E68: and     [rsp+38h+var_18], 0
 * 00000001401D3E6D: mov     rdx, rax
 * 00000001401D3E70: xor     r9d, r9d
 * 00000001401D3E73: xor     r8d, r8d
 * 00000001401D3E76: call    KeSetEventBoostPriorityEx
 * 00000001401D3E7B: add     rsp, 38h
 * 00000001401D3E7F: retn
 */
