/*
 * XREFs of ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C0016198
 * Callers:
 *     ValidateHwndEx @ 0x1C0033450 (ValidateHwndEx.c)
 *     ValidateHandleSecure @ 0x1C004F850 (ValidateHandleSecure.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C0016198
 * Reason: Hex-Rays returned no pseudocode for 0x1C0016198
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0016198: mov     [rsp+arg_0], rbx
 * 00000001C001619D: push    rdi
 * 00000001C001619E: sub     rsp, 20h
 * 00000001C00161A2: mov     rbx, rdx
 * 00000001C00161A5: mov     rdi, rcx
 * 00000001C00161A8: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00161AE: xor     r8d, r8d
 * 00000001C00161B1: mov     rdx, rax
 * 00000001C00161B4: test    rax, rax
 * 00000001C00161B7: jz      loc_1C0090D94
 * 00000001C00161BD: movzx   eax, byte ptr [rbx+10h]
 * 00000001C00161C1: lea     rcx, unk_1C00E9F6C
 * 00000001C00161C8: add     rax, rax
 * 00000001C00161CB: movzx   ecx, byte ptr [rcx+rax*8]
 * 00000001C00161CF: lea     eax, [r8+1]
 * 00000001C00161D3: test    cl, 2
 * 00000001C00161D6: jnz     short loc_1C001621D
 * 00000001C00161D8: test    al, cl
 * 00000001C00161DA: jz      short loc_1C0016219
 * 00000001C00161DC: mov     rcx, [rbx+8]
 * 00000001C00161E0: test    rcx, rcx
 * 00000001C00161E3: jz      short loc_1C0016219
 * 00000001C00161E5: mov     rcx, [rcx+180h]
 * 00000001C00161EC: test    rcx, rcx
 * 00000001C00161EF: jz      short loc_1C0016219
 * 00000001C00161F1: mov     rdx, [rdx+2D8h]
 * 00000001C00161F8: cmp     [rcx+2D8h], rdx
 * 00000001C00161FF: jnz     short loc_1C001620C
 * 00000001C0016201: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0016206: add     rsp, 20h
 * 00000001C001620A: pop     rdi
 * 00000001C001620B: retn
 * 00000001C001620C: mov     rcx, [rdx+38h]
 * 00000001C0016210: test    rcx, rcx
 * 00000001C0016213: jnz     loc_1C0090D9E
 * 00000001C0016219: xor     eax, eax
 * 00000001C001621B: jmp     short loc_1C0016201
 * 00000001C001621D: mov     rcx, [rbx+8]
 * 00000001C0016221: jmp     short loc_1C00161EC
 * 00000001C0090D94: mov     eax, 1
 * 00000001C0090D99: jmp     loc_1C0016201
 * 00000001C0090D9E: mov     r9d, [rdx+30h]
 * 00000001C0090DA2: test    r9d, r9d
 * 00000001C0090DA5: jz      loc_1C0016219
 * 00000001C0090DAB: cmp     [rcx], rdi
 * 00000001C0090DAE: jz      loc_1C0016201
 * 00000001C0090DB4: add     r8d, eax
 * 00000001C0090DB7: add     rcx, 8
 * 00000001C0090DBB: cmp     r8d, r9d
 * 00000001C0090DBE: jb      short loc_1C0090DAB
 * 00000001C0090DC0: jmp     loc_1C0016219
 */
