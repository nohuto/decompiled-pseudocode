/*
 * XREFs of RtlpLockStack @ 0x1800023BC
 * Callers:
 *     RtlLockCurrentThread @ 0x180002270 (RtlLockCurrentThread.c)
 * Callees:
 *     NtLockVirtualMemory @ 0x1800A8430 (NtLockVirtualMemory.c)
 */

/*
 * Hex-Rays decompilation failed for RtlpLockStack @ 0x1800023BC
 * Reason: Hex-Rays returned no pseudocode for 0x1800023BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800023BC: sub     rsp, 28h
 * 00000001800023C0: mov     rdx, gs:30h
 * 00000001800023C9: mov     ecx, [rdx+1748h]
 * 00000001800023CF: mov     r8, [rdx+1478h]
 * 00000001800023D6: add     rcx, 5000h
 * 00000001800023DD: mov     r9, [rdx+8]
 * 00000001800023E1: add     r8, rcx
 * 00000001800023E4: sub     r9, r8
 * 00000001800023E7: lea     rcx, [r8-1000h]
 * 00000001800023EE: add     rcx, r9
 * 00000001800023F1: jmp     short loc_1800023FC
 * 00000001800023F3: mov     eax, [rcx]
 * 00000001800023F5: sub     rcx, 1000h
 * 00000001800023FC: cmp     rcx, r8
 * 00000001800023FF: jnb     short loc_1800023F3
 * 0000000180002401: mov     [rsp+28h+arg_8], r8
 * 0000000180002406: mov     [rsp+28h+arg_0], r9
 * 000000018000240B: mov     r9d, 1
 * 0000000180002411: lea     r8, [rsp+28h+arg_0]
 * 0000000180002416: lea     rdx, [rsp+28h+arg_8]
 * 000000018000241B: or      rcx, 0FFFFFFFFFFFFFFFFh
 * 000000018000241F: call    NtLockVirtualMemory
 * 0000000180002424: add     rsp, 28h
 * 0000000180002428: retn
 */
