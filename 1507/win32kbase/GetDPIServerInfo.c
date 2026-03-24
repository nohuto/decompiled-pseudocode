/*
 * XREFs of GetDPIServerInfo @ 0x1C0012FC0
 * Callers:
 *     GetCharDimensions @ 0x1C0015D70 (GetCharDimensions.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for GetDPIServerInfo @ 0x1C0012FC0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012FC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012FC0: sub     rsp, 28h
 * 00000001C0012FC4: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C0012FCA: test    dword ptr [rax+308h], 2000h
 * 00000001C0012FD4: jnz     short loc_1C0012FE8
 * 00000001C0012FD6: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C0012FDC: test    dword ptr [rax+308h], 4000h
 * 00000001C0012FE6: jz      short loc_1C0012FFA
 * 00000001C0012FE8: mov     rax, cs:gpsi
 * 00000001C0012FEF: add     rax, 0FB8h
 * 00000001C0012FF5: add     rsp, 28h
 * 00000001C0012FF9: retn
 * 00000001C0012FFA: mov     rax, cs:gpsi
 * 00000001C0013001: add     rax, 1020h
 * 00000001C0013007: jmp     short loc_1C0012FF5
 */
