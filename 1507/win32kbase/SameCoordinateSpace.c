/*
 * XREFs of SameCoordinateSpace @ 0x1C0055D2C
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0055AC0 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for SameCoordinateSpace @ 0x1C0055D2C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0055D2C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0055D2C: mov     [rsp+arg_0], rbx
 * 00000001C0055D31: mov     [rsp+arg_8], rsi
 * 00000001C0055D36: push    rdi
 * 00000001C0055D37: sub     rsp, 20h
 * 00000001C0055D3B: xor     ebx, ebx
 * 00000001C0055D3D: mov     rdi, rdx
 * 00000001C0055D40: mov     rsi, rcx
 * 00000001C0055D43: test    rcx, rcx
 * 00000001C0055D46: jz      loc_1C009DEE8
 * 00000001C0055D4C: test    rdi, rdi
 * 00000001C0055D4F: jz      loc_1C009DEF6
 * 00000001C0055D55: mov     ecx, [rdi+308h]
 * 00000001C0055D5B: mov     eax, ecx
 * 00000001C0055D5D: mov     edx, [rsi+308h]
 * 00000001C0055D63: xor     eax, edx
 * 00000001C0055D65: bt      eax, 0Eh
 * 00000001C0055D69: jb      short loc_1C0055D73
 * 00000001C0055D6B: xor     ecx, edx
 * 00000001C0055D6D: bt      ecx, 0Dh
 * 00000001C0055D71: jnb     short loc_1C0055D85
 * 00000001C0055D73: mov     rsi, [rsp+28h+arg_8]
 * 00000001C0055D78: mov     eax, ebx
 * 00000001C0055D7A: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0055D7F: add     rsp, 20h
 * 00000001C0055D83: pop     rdi
 * 00000001C0055D84: retn
 * 00000001C0055D85: mov     ebx, 1
 * 00000001C0055D8A: jmp     short loc_1C0055D73
 * 00000001C009DEE8: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C009DEEE: mov     rsi, rax
 * 00000001C009DEF1: jmp     loc_1C0055D4C
 * 00000001C009DEF6: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C009DEFC: mov     rdi, rax
 * 00000001C009DEFF: jmp     loc_1C0055D55
 */
