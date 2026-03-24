/*
 * XREFs of MultiUserCleanupDCs @ 0x1C006D6C4
 * Callers:
 *     DrvCleanupAndDestroyMDEV @ 0x1C006D598 (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005BEBC (-vCleanupDCs@@YAXK@Z.c)
 */

/*
 * Hex-Rays decompilation failed for MultiUserCleanupDCs @ 0x1C006D6C4
 * Reason: Hex-Rays returned no pseudocode for 0x1C006D6C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C006D6C4: mov     [rsp+arg_0], rbx
 * 00000001C006D6C9: push    rdi
 * 00000001C006D6CA: sub     rsp, 20h
 * 00000001C006D6CE: call    cs:__imp_PsGetCurrentProcessId
 * 00000001C006D6D4: mov     r8, qword ptr cs:WPP_MAIN_CB.AlignmentRequirement
 * 00000001C006D6DB: xor     edi, edi
 * 00000001C006D6DD: mov     rbx, rax
 * 00000001C006D6E0: and     ebx, 0FFFFFFFCh
 * 00000001C006D6E3: test    r8, r8
 * 00000001C006D6E6: jz      short loc_1C006D725
 * 00000001C006D6E8: mov     r9d, cs:gcMaxHmgr
 * 00000001C006D6EF: lea     r11d, [rdi+1]
 * 00000001C006D6F3: mov     ecx, r11d
 * 00000001C006D6F6: cmp     r9d, r11d
 * 00000001C006D6F9: jbe     short loc_1C006D710
 * 00000001C006D6FB: mov     eax, ecx
 * 00000001C006D6FD: lea     r10, [rax+rax*2]
 * 00000001C006D701: cmp     [r8+r10*8+0Eh], r11b
 * 00000001C006D706: jz      short loc_1C006D730
 * 00000001C006D708: add     ecx, r11d
 * 00000001C006D70B: cmp     ecx, r9d
 * 00000001C006D70E: jb      short loc_1C006D6FB
 * 00000001C006D710: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C006D716: test    rax, rax
 * 00000001C006D719: jz      short loc_1C006D71E
 * 00000001C006D71B: add     [rax+3Ch], edi
 * 00000001C006D71E: mov     ecx, ebx; unsigned int
 * 00000001C006D720: call    ?vCleanupDCs@@YAXK@Z; vCleanupDCs(ulong)
 * 00000001C006D725: mov     rbx, [rsp+28h+arg_0]
 * 00000001C006D72A: add     rsp, 20h
 * 00000001C006D72E: pop     rdi
 * 00000001C006D72F: retn
 * 00000001C006D730: mov     edx, [r8+r10*8+8]
 * 00000001C006D735: mov     eax, edx
 * 00000001C006D737: and     eax, 0FFFFFFFEh
 * 00000001C006D73A: cmp     eax, ebx
 * 00000001C006D73C: jz      short loc_1C006D708
 * 00000001C006D73E: jmp     loc_1C0092C32
 * 00000001C0092C32: xor     edx, ebx
 * 00000001C0092C34: and     edx, r11d
 * 00000001C0092C37: xor     edx, ebx
 * 00000001C0092C39: mov     [r8+r10*8+8], edx
 * 00000001C0092C3E: add     edi, r11d
 * 00000001C0092C41: mov     r8, qword ptr cs:WPP_MAIN_CB.AlignmentRequirement
 * 00000001C0092C48: mov     r9d, cs:gcMaxHmgr
 * 00000001C0092C4F: jmp     loc_1C006D708
 */
