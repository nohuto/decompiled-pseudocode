/*
 * XREFs of ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C006CFE8
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C005B8C0 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C006CFE8
 * Reason: Hex-Rays returned no pseudocode for 0x1C006CFE8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C006CFE8: cmp     ecx, 2
 * 00000001C006CFEB: jnz     short locret_1C006D034
 * 00000001C006CFED: mov     [rsp+arg_0], rbx
 * 00000001C006CFF2: mov     [rsp+arg_8], rsi
 * 00000001C006CFF7: push    rdi
 * 00000001C006CFF8: sub     rsp, 20h
 * 00000001C006CFFC: lea     esi, [rcx-1]
 * 00000001C006CFFF: cmp     cs:gcMaxHmgr, esi
 * 00000001C006D005: jbe     short loc_1C006D025
 * 00000001C006D007: mov     eax, esi
 * 00000001C006D009: lea     rdi, [rax+rax*2]
 * 00000001C006D00D: mov     rax, qword ptr cs:WPP_MAIN_CB.AlignmentRequirement
 * 00000001C006D014: cmp     byte ptr [rax+rdi*8+0Eh], 5
 * 00000001C006D019: jz      short loc_1C006D035
 * 00000001C006D01B: inc     esi
 * 00000001C006D01D: cmp     esi, cs:gcMaxHmgr
 * 00000001C006D023: jb      short loc_1C006D007
 * 00000001C006D025: mov     rbx, [rsp+28h+arg_0]
 * 00000001C006D02A: mov     rsi, [rsp+28h+arg_8]
 * 00000001C006D02F: add     rsp, 20h
 * 00000001C006D033: pop     rdi
 * 00000001C006D034: retn
 * 00000001C006D035: mov     rdi, [rax+rdi*8]
 * 00000001C006D039: test    rdi, rdi
 * 00000001C006D03C: jz      short loc_1C006D01B
 * 00000001C006D03E: cmp     qword ptr [rdi+0F0h], 0
 * 00000001C006D046: jz      short loc_1C006D01B
 * 00000001C006D048: jmp     loc_1C0092B6A
 * 00000001C0092B6A: mov     rbx, [rdi+100h]
 * 00000001C0092B71: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C0092B77: cmp     rbx, rax
 * 00000001C0092B7A: jnz     loc_1C006D01B
 * 00000001C0092B80: and     qword ptr [rdi+100h], 0
 * 00000001C0092B88: and     qword ptr [rdi+0F8h], 0
 * 00000001C0092B90: jmp     loc_1C006D01B
 */
