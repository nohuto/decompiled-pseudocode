/*
 * XREFs of RtlpLockStack @ 0x1800024DC
 * Callers:
 *     RtlLockCurrentThread @ 0x180002390 (RtlLockCurrentThread.c)
 * Callees:
 *     NtLockVirtualMemory @ 0x1800A7090 (NtLockVirtualMemory.c)
 */

/*
 * Hex-Rays decompilation failed for RtlpLockStack @ 0x1800024DC
 * Reason: Hex-Rays returned no pseudocode for 0x1800024DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800024DC: sub     rsp, 28h
 * 00000001800024E0: mov     rdx, gs:30h
 * 00000001800024E9: mov     ecx, [rdx+1748h]
 * 00000001800024EF: mov     r8, [rdx+1478h]
 * 00000001800024F6: add     rcx, 5000h
 * 00000001800024FD: mov     r9, [rdx+8]
 * 0000000180002501: add     r8, rcx
 * 0000000180002504: sub     r9, r8
 * 0000000180002507: lea     rcx, [r8-1000h]
 * 000000018000250E: add     rcx, r9
 * 0000000180002511: jmp     short loc_18000251C
 * 0000000180002513: mov     eax, [rcx]
 * 0000000180002515: sub     rcx, 1000h
 * 000000018000251C: cmp     rcx, r8
 * 000000018000251F: jnb     short loc_180002513
 * 0000000180002521: mov     [rsp+28h+arg_8], r8
 * 0000000180002526: mov     [rsp+28h+arg_0], r9
 * 000000018000252B: mov     r9d, 1
 * 0000000180002531: lea     r8, [rsp+28h+arg_0]
 * 0000000180002536: lea     rdx, [rsp+28h+arg_8]
 * 000000018000253B: or      rcx, 0FFFFFFFFFFFFFFFFh
 * 000000018000253F: call    NtLockVirtualMemory
 * 0000000180002544: add     rsp, 28h
 * 0000000180002548: retn
 */
