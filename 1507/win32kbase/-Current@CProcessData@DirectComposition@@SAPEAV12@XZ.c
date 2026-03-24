/*
 * XREFs of ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0024960
 * Callers:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0016018 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0024874 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C006B0DC (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0080790 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C0082120 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     NtDCompositionEnableMMCSS @ 0x1C00D3F80 (NtDCompositionEnableMMCSS.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0024960
 * Reason: Hex-Rays returned no pseudocode for 0x1C0024960
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0024960: push    rbx
 * 00000001C0024962: sub     rsp, 20h
 * 00000001C0024966: xor     ebx, ebx
 * 00000001C0024968: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C002496E: test    rax, rax
 * 00000001C0024971: jz      short loc_1C002497A
 * 00000001C0024973: mov     rbx, [rax+100h]
 * 00000001C002497A: mov     rax, rbx
 * 00000001C002497D: add     rsp, 20h
 * 00000001C0024981: pop     rbx
 * 00000001C0024982: retn
 */
