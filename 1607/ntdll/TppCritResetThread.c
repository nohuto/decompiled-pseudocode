/*
 * XREFs of TppCritResetThread @ 0x1800865B4
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtSetInformationObject @ 0x1800A6F90 (NtSetInformationObject.c)
 */

/*
 * Hex-Rays decompilation failed for TppCritResetThread @ 0x1800865B4
 * Reason: Hex-Rays returned no pseudocode for 0x1800865B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800865B4: test    rcx, rcx
 * 00000001800865B7: jnz     short loc_1800865BA
 * 00000001800865B9: retn
 * 00000001800865BA: mov     [rsp+Handle], rcx
 * 00000001800865BF: push    rdi
 * 00000001800865C0: sub     rsp, 20h
 * 00000001800865C4: mov     r9d, 8
 * 00000001800865CA: lea     r8, [rsp+28h+Handle]
 * 00000001800865CF: mov     rdi, 0FFFFFFFFFFFFFFFEh
 * 00000001800865D6: mov     rcx, rdi
 * 00000001800865D9: lea     edx, [r9-3]
 * 00000001800865DD: call    NtSetInformationThread
 * 00000001800865E2: and     [rsp+28h+arg_10], 0
 * 00000001800865E7: lea     r9d, [rdi+6]
 * 00000001800865EB: lea     r8, [rsp+28h+arg_10]
 * 00000001800865F0: mov     rcx, rdi
 * 00000001800865F3: lea     edx, [rdi+14h]
 * 00000001800865F6: call    NtSetInformationThread
 * 00000001800865FB: mov     rcx, [rsp+28h+Handle]
 * 0000000180086600: lea     r9d, [rdi+4]
 * 0000000180086604: xor     eax, eax
 * 0000000180086606: lea     r8, [rsp+28h+arg_8]
 * 000000018008660B: lea     edx, [rdi+6]
 * 000000018008660E: mov     [rsp+28h+arg_8], ax
 * 0000000180086613: call    NtSetInformationObject
 * 0000000180086618: mov     rcx, [rsp+28h+Handle]; Handle
 * 000000018008661D: call    NtClose
 * 0000000180086622: and     [rsp+28h+Handle], 0
 * 0000000180086628: lea     r9d, [rdi+0Ah]
 * 000000018008662C: lea     r8, [rsp+28h+Handle]
 * 0000000180086631: mov     rcx, rdi
 * 0000000180086634: lea     edx, [rdi+7]
 * 0000000180086637: call    NtSetInformationThread
 * 000000018008663C: add     rsp, 20h
 * 0000000180086640: pop     rdi
 * 0000000180086641: retn
 */
