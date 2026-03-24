/*
 * XREFs of KeSetEventBoostPriority @ 0x1401C4ED8
 * Callers:
 *     NtSetEventBoostPriority @ 0x14066D138 (NtSetEventBoostPriority.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x14007CAE0 (KeSetEventBoostPriorityEx.c)
 */

/*
 * Hex-Rays decompilation failed for KeSetEventBoostPriority @ 0x1401C4ED8
 * Reason: Hex-Rays returned no pseudocode for 0x1401C4ED8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C4ED8: sub     rsp, 38h
 * 00000001401C4EDC: test    rdx, rdx
 * 00000001401C4EDF: lea     rax, [rsp+38h+arg_8]
 * 00000001401C4EE4: cmovnz  rax, rdx
 * 00000001401C4EE8: and     [rsp+38h+var_18], 0
 * 00000001401C4EED: mov     rdx, rax
 * 00000001401C4EF0: xor     r9d, r9d
 * 00000001401C4EF3: xor     r8d, r8d
 * 00000001401C4EF6: call    KeSetEventBoostPriorityEx
 * 00000001401C4EFB: add     rsp, 38h
 * 00000001401C4EFF: retn
 */
