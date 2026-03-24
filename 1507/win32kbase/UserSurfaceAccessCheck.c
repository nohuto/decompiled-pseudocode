/*
 * XREFs of UserSurfaceAccessCheck @ 0x1C000B840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for UserSurfaceAccessCheck @ 0x1C000B840
 * Reason: Hex-Rays returned no pseudocode for 0x1C000B840
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000B840: mov     [rsp+arg_0], rbx
 * 00000001C000B845: mov     [rsp+arg_8], rsi
 * 00000001C000B84A: push    rdi
 * 00000001C000B84B: sub     rsp, 20h
 * 00000001C000B84F: mov     rsi, rcx
 * 00000001C000B852: xor     ebx, ebx
 * 00000001C000B854: mov     rcx, gs:188h
 * 00000001C000B85D: mov     edi, ebx
 * 00000001C000B85F: call    cs:__imp_PsGetThreadWin32Thread
 * 00000001C000B865: test    rax, rax
 * 00000001C000B868: jz      short loc_1C000B86D
 * 00000001C000B86A: mov     rdi, [rax]
 * 00000001C000B86D: test    rsi, rsi
 * 00000001C000B870: jz      short loc_1C000B884
 * 00000001C000B872: mov     rax, [rdi+1A0h]
 * 00000001C000B879: test    rax, rax
 * 00000001C000B87C: jz      short loc_1C000B8B0
 * 00000001C000B87E: cmp     [rax+28h], rsi
 * 00000001C000B882: jnz     short loc_1C000B8B0
 * 00000001C000B884: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C000B88A: mov     edx, 40010h
 * 00000001C000B88F: mov     ecx, [rax+0Ch]
 * 00000001C000B892: mov     eax, 1
 * 00000001C000B897: and     ecx, edx
 * 00000001C000B899: cmp     ecx, edx
 * 00000001C000B89B: cmovz   ebx, eax
 * 00000001C000B89E: mov     rsi, [rsp+28h+arg_8]
 * 00000001C000B8A3: mov     eax, ebx
 * 00000001C000B8A5: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000B8AA: add     rsp, 20h
 * 00000001C000B8AE: pop     rdi
 * 00000001C000B8AF: retn
 * 00000001C000B8B0: mov     eax, [rdi+1C0h]
 * 00000001C000B8B6: test    al, 8
 * 00000001C000B8B8: jnz     short loc_1C000B884
 * 00000001C000B8BA: mov     eax, [rdi+438h]
 * 00000001C000B8C0: test    al, 4
 * 00000001C000B8C2: jz      short loc_1C000B89E
 * 00000001C000B8C4: jmp     short loc_1C000B884
 */
