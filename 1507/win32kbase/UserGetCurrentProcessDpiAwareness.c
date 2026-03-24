/*
 * XREFs of UserGetCurrentProcessDpiAwareness @ 0x1C000BF70
 * Callers:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00B5518 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00B5558 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for UserGetCurrentProcessDpiAwareness @ 0x1C000BF70
 * Reason: Hex-Rays returned no pseudocode for 0x1C000BF70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000BF70: push    rbx
 * 00000001C000BF72: sub     rsp, 20h
 * 00000001C000BF76: mov     rbx, rcx
 * 00000001C000BF79: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C000BF7F: test    rax, rax
 * 00000001C000BF82: jz      short loc_1C000BF98
 * 00000001C000BF84: mov     eax, [rax+308h]
 * 00000001C000BF8A: bt      eax, 0Eh
 * 00000001C000BF8E: jb      short loc_1C000BF9E
 * 00000001C000BF90: shr     eax, 0Dh
 * 00000001C000BF93: and     eax, 1
 * 00000001C000BF96: mov     [rbx], eax
 * 00000001C000BF98: add     rsp, 20h
 * 00000001C000BF9C: pop     rbx
 * 00000001C000BF9D: retn
 * 00000001C000BF9E: mov     dword ptr [rbx], 2
 * 00000001C000BFA4: jmp     short loc_1C000BF98
 */
