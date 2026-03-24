/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C004F908
 * Callers:
 *     ValidateHandleSecure @ 0x1C004F850 (ValidateHandleSecure.c)
 * Callees:
 *     EtwTraceUIPIHandleValidationError @ 0x1C0018A0C (EtwTraceUIPIHandleValidationError.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 */

/*
 * Hex-Rays decompilation failed for ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C004F908
 * Reason: Hex-Rays returned no pseudocode for 0x1C004F908
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004F908: push    rbx
 * 00000001C004F90A: sub     rsp, 20h
 * 00000001C004F90E: mov     rbx, rcx
 * 00000001C004F911: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C004F917: mov     r11, rax
 * 00000001C004F91A: test    rax, rax
 * 00000001C004F91D: jz      loc_1C009D81E
 * 00000001C004F923: movzx   r8d, byte ptr [rbx+10h]
 * 00000001C004F928: lea     rcx, unk_1C00E9F6C
 * 00000001C004F92F: mov     eax, r8d
 * 00000001C004F932: mov     edx, 1
 * 00000001C004F937: add     rax, rax
 * 00000001C004F93A: movzx   ecx, byte ptr [rcx+rax*8]
 * 00000001C004F93E: test    cl, 2
 * 00000001C004F941: jz      short loc_1C004F991
 * 00000001C004F943: mov     r10, [rbx+8]
 * 00000001C004F947: test    r10, r10
 * 00000001C004F94A: jz      short loc_1C004F989
 * 00000001C004F94C: mov     rax, cs:gpepCSRSS
 * 00000001C004F953: cmp     [r10], rax
 * 00000001C004F956: jz      short loc_1C004F989
 * 00000001C004F958: cmp     cs:gbEnforceUIPI, 0
 * 00000001C004F95F: mov     rax, [r10+340h]
 * 00000001C004F966: mov     rcx, [r11+340h]
 * 00000001C004F96D: jz      short loc_1C004F989
 * 00000001C004F96F: cmp     ecx, eax
 * 00000001C004F971: ja      short loc_1C004F989
 * 00000001C004F973: jnz     loc_1C009D83E
 * 00000001C004F979: shr     rcx, 20h
 * 00000001C004F97D: shr     rax, 20h
 * 00000001C004F981: cmp     ecx, eax
 * 00000001C004F983: jnz     loc_1C009D828
 * 00000001C004F989: mov     eax, edx
 * 00000001C004F98B: add     rsp, 20h
 * 00000001C004F98F: pop     rbx
 * 00000001C004F990: retn
 * 00000001C004F991: test    dl, cl
 * 00000001C004F993: jz      short loc_1C004F989
 * 00000001C004F995: mov     r10, [rbx+8]
 * 00000001C004F999: test    r10, r10
 * 00000001C004F99C: jz      short loc_1C004F989
 * 00000001C004F99E: mov     r10, [r10+180h]
 * 00000001C004F9A5: jmp     short loc_1C004F947
 * 00000001C009D81E: mov     eax, 1
 * 00000001C009D823: jmp     loc_1C004F98B
 * 00000001C009D828: or      r9d, 0FFFFFFFFh
 * 00000001C009D82C: cmp     ecx, r9d
 * 00000001C009D82F: jz      loc_1C004F989
 * 00000001C009D835: cmp     eax, r9d
 * 00000001C009D838: jz      loc_1C004F989
 * 00000001C009D83E: mov     r9d, r8d
 * 00000001C009D841: mov     rdx, r10; struct tagPROCESSINFO *
 * 00000001C009D844: mov     r8, [rbx]
 * 00000001C009D847: mov     rcx, r11; struct tagPROCESSINFO *
 * 00000001C009D84A: mov     r8, [r8]
 * 00000001C009D84D: call    EtwTraceUIPIHandleValidationError
 * 00000001C009D852: mov     ecx, 5
 * 00000001C009D857: call    UserSetLastError
 * 00000001C009D85C: xor     eax, eax
 * 00000001C009D85E: jmp     loc_1C004F98B
 */
