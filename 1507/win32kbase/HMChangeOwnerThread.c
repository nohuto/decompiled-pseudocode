/*
 * XREFs of HMChangeOwnerThread @ 0x1C00142F0
 * Callers:
 *     MarkThreadsObjects @ 0x1C004FE30 (MarkThreadsObjects.c)
 * Callees:
 *     IsFVisCountableSupported_0 @ 0x1C00028B0 (IsFVisCountableSupported_0.c)
 *     FVisCountable_0 @ 0x1C00028B8 (FVisCountable_0.c)
 *     IsGetClassPtrSupported_0 @ 0x1C00028C0 (IsGetClassPtrSupported_0.c)
 *     GetClassPtr_0 @ 0x1C00028C8 (GetClassPtr_0.c)
 *     IsDereferenceClassSupported_0 @ 0x1C00028D0 (IsDereferenceClassSupported_0.c)
 *     DereferenceClass_0 @ 0x1C00028D8 (DereferenceClass_0.c)
 *     IsReferenceClassSupported_0 @ 0x1C00028E0 (IsReferenceClassSupported_0.c)
 *     ReferenceClass_0 @ 0x1C00028E8 (ReferenceClass_0.c)
 *     LockObjectAssignment @ 0x1C0050110 (LockObjectAssignment.c)
 */

/*
 * Hex-Rays decompilation failed for HMChangeOwnerThread @ 0x1C00142F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00142F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00142F0: mov     [rsp+arg_0], rbx
 * 00000001C00142F5: mov     [rsp+arg_8], rsi
 * 00000001C00142FA: push    rdi
 * 00000001C00142FB: sub     rsp, 20h
 * 00000001C00142FF: mov     eax, [rcx]
 * 00000001C0014301: mov     rbx, rcx
 * 00000001C0014304: mov     rdi, [rcx+10h]
 * 00000001C0014308: mov     rsi, rdx
 * 00000001C001430B: movzx   r9d, ax
 * 00000001C001430F: imul    r9d, cs:dword_1C01003F0
 * 00000001C0014317: add     r9, cs:qword_1C01003E8
 * 00000001C001431E: mov     rax, [r9+8]
 * 00000001C0014322: mov     r8, [rax+180h]
 * 00000001C0014329: dec     dword ptr [r8+44h]
 * 00000001C001432D: mov     [r9+8], rdx
 * 00000001C0014331: mov     [rcx+10h], rdx
 * 00000001C0014335: mov     rax, [r9+8]
 * 00000001C0014339: mov     rcx, [rax+180h]
 * 00000001C0014340: inc     dword ptr [rcx+44h]
 * 00000001C0014343: movzx   ecx, byte ptr [r9+10h]
 * 00000001C0014348: sub     ecx, 1
 * 00000001C001434B: jz      short loc_1C0014376
 * 00000001C001434D: cmp     ecx, 4
 * 00000001C0014350: jnz     loc_1C001448C
 * 00000001C0014356: mov     eax, [rbx+40h]
 * 00000001C0014359: test    al, 1
 * 00000001C001435B: jz      loc_1C001448C
 * 00000001C0014361: mov     rdx, [rdi+1A0h]
 * 00000001C0014368: lea     rcx, [rbx+50h]
 * 00000001C001436C: call    LockObjectAssignment
 * 00000001C0014371: jmp     loc_1C001448C
 * 00000001C0014376: inc     dword ptr [rdx+30Ch]
 * 00000001C001437C: dec     dword ptr [rdi+30Ch]
 * 00000001C0014382: test    byte ptr [rbx+37h], 10h
 * 00000001C0014386: jz      short loc_1C00143A9
 * 00000001C0014388: call    IsFVisCountableSupported_0
 * 00000001C001438D: test    eax, eax
 * 00000001C001438F: js      short loc_1C00143A9
 * 00000001C0014391: mov     rcx, rbx
 * 00000001C0014394: call    FVisCountable_0
 * 00000001C0014399: test    eax, eax
 * 00000001C001439B: jz      short loc_1C00143A9
 * 00000001C001439D: inc     dword ptr [rsi+310h]
 * 00000001C00143A3: dec     dword ptr [rdi+310h]
 * 00000001C00143A9: mov     rax, [rdi+180h]
 * 00000001C00143B0: cmp     [rsi+180h], rax
 * 00000001C00143B7: jz      loc_1C001448C
 * 00000001C00143BD: call    IsGetClassPtrSupported_0
 * 00000001C00143C2: test    eax, eax
 * 00000001C00143C4: js      short loc_1C00143E9
 * 00000001C00143C6: mov     rax, [rbx+98h]
 * 00000001C00143CD: mov     r8, cs:hModuleWin
 * 00000001C00143D4: mov     rdx, [rsi+180h]
 * 00000001C00143DB: movzx   ecx, word ptr [rax+8]
 * 00000001C00143DF: call    GetClassPtr_0
 * 00000001C00143E4: mov     rsi, rax
 * 00000001C00143E7: jmp     short loc_1C00143EB
 * 00000001C00143E9: xor     esi, esi
 * 00000001C00143EB: test    rsi, rsi
 * 00000001C00143EE: jnz     short loc_1C0014444
 * 00000001C00143F0: mov     rax, [rbx+18h]
 * 00000001C00143F4: test    rax, rax
 * 00000001C00143F7: jz      short loc_1C001440E
 * 00000001C00143F9: mov     rax, [rax+18h]
 * 00000001C00143FD: mov     rcx, [rax+18h]
 * 00000001C0014401: mov     rax, [rcx+10h]
 * 00000001C0014405: mov     rsi, [rax+180h]
 * 00000001C001440C: jmp     short loc_1C0014417
 * 00000001C001440E: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C0014414: mov     rsi, rax
 * 00000001C0014417: call    IsGetClassPtrSupported_0
 * 00000001C001441C: test    eax, eax
 * 00000001C001441E: js      short loc_1C0014442
 * 00000001C0014420: mov     rax, cs:gpsi
 * 00000001C0014427: mov     rdx, rsi
 * 00000001C001442A: mov     r8, cs:hModuleWin
 * 00000001C0014431: movzx   ecx, word ptr [rax+37Eh]
 * 00000001C0014438: call    GetClassPtr_0
 * 00000001C001443D: mov     rsi, rax
 * 00000001C0014440: jmp     short loc_1C0014444
 * 00000001C0014442: xor     esi, esi
 * 00000001C0014444: call    IsDereferenceClassSupported_0
 * 00000001C0014449: test    eax, eax
 * 00000001C001444B: js      short loc_1C001445C
 * 00000001C001444D: mov     rcx, [rdi+180h]
 * 00000001C0014454: mov     rdx, rbx
 * 00000001C0014457: call    DereferenceClass_0
 * 00000001C001445C: mov     rax, [rsi]
 * 00000001C001445F: mov     [rbx+98h], rax
 * 00000001C0014466: call    IsReferenceClassSupported_0
 * 00000001C001446B: test    eax, eax
 * 00000001C001446D: js      short loc_1C001448C
 * 00000001C001446F: mov     rcx, [rbx+98h]
 * 00000001C0014476: mov     rdx, rbx
 * 00000001C0014479: call    ReferenceClass_0
 * 00000001C001447E: test    eax, eax
 * 00000001C0014480: jnz     short loc_1C001448C
 * 00000001C0014482: mov     rax, [rbx+98h]
 * 00000001C0014489: inc     dword ptr [rax+50h]
 * 00000001C001448C: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0014491: mov     rsi, [rsp+28h+arg_8]
 * 00000001C0014496: add     rsp, 20h
 * 00000001C001449A: pop     rdi
 * 00000001C001449B: retn
 */
