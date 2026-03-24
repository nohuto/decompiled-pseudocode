/*
 * XREFs of UserScreenAccessCheck @ 0x1C000BD00
 * Callers:
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00B6210 (NtGdiDdDDICreateOutputDupl.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for UserScreenAccessCheck @ 0x1C000BD00
 * Reason: Hex-Rays returned no pseudocode for 0x1C000BD00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000BD00: mov     [rsp+arg_0], rbx
 * 00000001C000BD05: mov     [rsp+arg_8], rsi
 * 00000001C000BD0A: push    rdi
 * 00000001C000BD0B: sub     rsp, 20h
 * 00000001C000BD0F: mov     rax, cs:grpdeskRitInput
 * 00000001C000BD16: xor     ebx, ebx
 * 00000001C000BD18: mov     esi, ebx
 * 00000001C000BD1A: test    rax, rax
 * 00000001C000BD1D: jz      short loc_1C000BD23
 * 00000001C000BD1F: mov     rsi, [rax+28h]
 * 00000001C000BD23: mov     rcx, gs:188h
 * 00000001C000BD2C: mov     rdi, rbx
 * 00000001C000BD2F: call    cs:__imp_PsGetThreadWin32Thread
 * 00000001C000BD35: test    rax, rax
 * 00000001C000BD38: jz      short loc_1C000BD3D
 * 00000001C000BD3A: mov     rdi, [rax]
 * 00000001C000BD3D: test    rsi, rsi
 * 00000001C000BD40: jz      short loc_1C000BD54
 * 00000001C000BD42: mov     rax, [rdi+1A0h]
 * 00000001C000BD49: test    rax, rax
 * 00000001C000BD4C: jz      short loc_1C000BD80
 * 00000001C000BD4E: cmp     [rax+28h], rsi
 * 00000001C000BD52: jnz     short loc_1C000BD80
 * 00000001C000BD54: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C000BD5A: mov     edx, 40010h
 * 00000001C000BD5F: mov     ecx, [rax+0Ch]
 * 00000001C000BD62: mov     eax, 1
 * 00000001C000BD67: and     ecx, edx
 * 00000001C000BD69: cmp     ecx, edx
 * 00000001C000BD6B: cmovz   ebx, eax
 * 00000001C000BD6E: mov     rsi, [rsp+28h+arg_8]
 * 00000001C000BD73: mov     eax, ebx
 * 00000001C000BD75: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000BD7A: add     rsp, 20h
 * 00000001C000BD7E: pop     rdi
 * 00000001C000BD7F: retn
 * 00000001C000BD80: mov     eax, [rdi+1C0h]
 * 00000001C000BD86: test    al, 8
 * 00000001C000BD88: jnz     short loc_1C000BD54
 * 00000001C000BD8A: mov     eax, [rdi+438h]
 * 00000001C000BD90: test    al, 4
 * 00000001C000BD92: jnz     short loc_1C000BD54
 * 00000001C000BD94: jmp     short loc_1C000BD6E
 */
