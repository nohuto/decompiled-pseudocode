/*
 * XREFs of ?MultiUserGreHmgOwnAll@@YAXK@Z @ 0x1C006CF28
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C006C400 (MultiUserNtGreCleanup.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?MultiUserGreHmgOwnAll@@YAXK@Z @ 0x1C006CF28
 * Reason: Hex-Rays returned no pseudocode for 0x1C006CF28
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C006CF28: push    rbx
 * 00000001C006CF2A: sub     rsp, 20h
 * 00000001C006CF2E: mov     r8, qword ptr cs:WPP_MAIN_CB.AlignmentRequirement
 * 00000001C006CF35: xor     ebx, ebx
 * 00000001C006CF37: mov     r10d, ecx
 * 00000001C006CF3A: test    r8, r8
 * 00000001C006CF3D: jz      short loc_1C006CF77
 * 00000001C006CF3F: mov     r9d, cs:gcMaxHmgr
 * 00000001C006CF46: lea     r11d, [rbx+1]
 * 00000001C006CF4A: mov     edx, r11d
 * 00000001C006CF4D: cmp     r9d, r11d
 * 00000001C006CF50: jbe     short loc_1C006CF6C
 * 00000001C006CF52: mov     eax, edx
 * 00000001C006CF54: lea     rcx, [rax+rax*2]
 * 00000001C006CF58: mov     al, [r8+rcx*8+0Eh]
 * 00000001C006CF5D: sub     al, r11b
 * 00000001C006CF60: cmp     al, 1Dh
 * 00000001C006CF62: jbe     short loc_1C006CF7D
 * 00000001C006CF64: add     edx, r11d
 * 00000001C006CF67: cmp     edx, r9d
 * 00000001C006CF6A: jb      short loc_1C006CF52
 * 00000001C006CF6C: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C006CF72: test    rax, rax
 * 00000001C006CF75: jnz     short loc_1C006CFA3
 * 00000001C006CF77: add     rsp, 20h
 * 00000001C006CF7B: pop     rbx
 * 00000001C006CF7C: retn
 * 00000001C006CF7D: mov     eax, [r8+rcx*8+8]
 * 00000001C006CF82: xor     eax, r10d
 * 00000001C006CF85: and     eax, r11d
 * 00000001C006CF88: xor     eax, r10d
 * 00000001C006CF8B: mov     [r8+rcx*8+8], eax
 * 00000001C006CF90: add     ebx, r11d
 * 00000001C006CF93: mov     r8, qword ptr cs:WPP_MAIN_CB.AlignmentRequirement
 * 00000001C006CF9A: mov     r9d, cs:gcMaxHmgr
 * 00000001C006CFA1: jmp     short loc_1C006CF64
 * 00000001C006CFA3: mov     [rax+3Ch], ebx
 * 00000001C006CFA6: jmp     short loc_1C006CF77
 */
