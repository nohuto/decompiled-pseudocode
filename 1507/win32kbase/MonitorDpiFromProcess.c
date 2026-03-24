/*
 * XREFs of MonitorDpiFromProcess @ 0x1C0069C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for MonitorDpiFromProcess @ 0x1C0069C60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0069C60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0069C60: push    rbx
 * 00000001C0069C62: sub     rsp, 20h
 * 00000001C0069C66: mov     rax, rdx
 * 00000001C0069C69: mov     rbx, rcx
 * 00000001C0069C6C: test    rdx, rdx
 * 00000001C0069C6F: jz      short loc_1C0069C99
 * 00000001C0069C71: mov     edx, [rax+308h]
 * 00000001C0069C77: test    edx, 6000h
 * 00000001C0069C7D: jz      short loc_1C0069CA1
 * 00000001C0069C7F: bt      edx, 0Dh
 * 00000001C0069C83: jnb     short loc_1C0069CA8
 * 00000001C0069C85: mov     rax, cs:gpsi
 * 00000001C0069C8C: movzx   eax, word ptr [rax+1C76h]
 * 00000001C0069C93: add     rsp, 20h
 * 00000001C0069C97: pop     rbx
 * 00000001C0069C98: retn
 * 00000001C0069C99: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C0069C9F: jmp     short loc_1C0069C71
 * 00000001C0069CA1: mov     eax, 60h ; '`'
 * 00000001C0069CA6: jmp     short loc_1C0069C93
 * 00000001C0069CA8: movzx   eax, word ptr [rbx+98h]
 * 00000001C0069CAF: jmp     short loc_1C0069C93
 */
