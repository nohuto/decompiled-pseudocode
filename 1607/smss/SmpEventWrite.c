/*
 * XREFs of SmpEventWrite @ 0x14000677C
 * Callers:
 *     SmpInitializeKnownDlls @ 0x1400050A0 (SmpInitializeKnownDlls.c)
 *     SmpLoadDataFromRegistry @ 0x14000614C (SmpLoadDataFromRegistry.c)
 *     SmpNtSerializeBoot @ 0x140006964 (SmpNtSerializeBoot.c)
 *     SmpProcessFileRenames @ 0x140007624 (SmpProcessFileRenames.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for SmpEventWrite @ 0x14000677C
 * Reason: Hex-Rays returned no pseudocode for 0x14000677C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000677C: push    rbx
 * 000000014000677E: sub     rsp, 20h
 * 0000000140006782: mov     rbx, rcx
 * 0000000140006785: mov     rcx, cs:SmpTraceHandle; RegHandle
 * 000000014000678C: test    rcx, rcx
 * 000000014000678F: jz      short loc_1400067A2
 * 0000000140006791: mov     rdx, rbx; EventDescriptor
 * 0000000140006794: call    cs:__imp_EtwEventEnabled
 * 000000014000679A: test    al, al
 * 000000014000679C: jnz     loc_14000E74E
 * 00000001400067A2: add     rsp, 20h
 * 00000001400067A6: pop     rbx
 * 00000001400067A7: retn
 * 000000014000E74E: mov     rcx, cs:SmpTraceHandle
 * 000000014000E755: xor     r9d, r9d
 * 000000014000E758: xor     r8d, r8d
 * 000000014000E75B: mov     rdx, rbx
 * 000000014000E75E: call    cs:__imp_EtwEventWrite
 * 000000014000E764: nop
 * 000000014000E765: jmp     loc_1400067A2
 */
