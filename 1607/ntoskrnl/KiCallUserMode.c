/*
 * XREFs of KiCallUserMode @ 0x1401619B0
 * Callers:
 *     KeUserModeCallback @ 0x1404F9110 (KeUserModeCallback.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x1401619B0 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x1401619B0
 * Reason: Hex-Rays returned no pseudocode for 0x1401619B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401619B0: sub     rsp, 138h
 * 00000001401619B7: lea     rax, [rsp+138h+var_38]
 * 00000001401619BF: movaps  [rsp+138h+var_108], xmm6
 * 00000001401619C4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001401619C9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001401619CF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001401619D5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001401619DB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001401619E0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001401619E5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001401619EA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001401619EF: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001401619F4: mov     [rax-8], rbp
 * 00000001401619F8: mov     rbp, rsp
 * 00000001401619FB: mov     [rax], rbx
 * 00000001401619FE: mov     [rax+8], rdi
 * 0000000140161A02: mov     [rax+10h], rsi
 * 0000000140161A06: mov     [rax+18h], r12
 * 0000000140161A0A: mov     [rax+20h], r13
 * 0000000140161A0E: mov     [rax+28h], r14
 * 0000000140161A12: mov     [rax+30h], r15
 * 0000000140161A16: xor     r10, r10
 * 0000000140161A19: xor     r12, r12
 * 0000000140161A1C: xor     r13, r13
 * 0000000140161A1F: xor     r14, r14
 * 0000000140161A22: xor     r15, r15
 * 0000000140161A25: pxor    xmm6, xmm6
 * 0000000140161A29: pxor    xmm7, xmm7
 * 0000000140161A2D: pxor    xmm8, xmm8
 * 0000000140161A32: pxor    xmm9, xmm9
 * 0000000140161A37: pxor    xmm10, xmm10
 * 0000000140161A3C: pxor    xmm11, xmm11
 * 0000000140161A41: pxor    xmm12, xmm12
 * 0000000140161A46: pxor    xmm13, xmm13
 * 0000000140161A4B: pxor    xmm14, xmm14
 * 0000000140161A50: pxor    xmm15, xmm15
 * 0000000140161A55: mov     [rbp+0D8h], rcx
 * 0000000140161A5C: mov     [rbp+0E0h], rdx
 * 0000000140161A63: mov     rbx, gs:188h
 * 0000000140161A6C: mov     [r8+20h], rsp
 * 0000000140161A70: mov     rsi, [rbx+90h]
 * 0000000140161A77: mov     [rbp+0D0h], rsi
 * 0000000140161A7E: cli
 * 0000000140161A7F: mov     [rbx+28h], r8
 * 0000000140161A83: mov     [rbx+38h], r9
 * 0000000140161A87: test    cs:KiKvaShadow, 1
 * 0000000140161A8E: jnz     short loc_140161A9F
 * 0000000140161A90: mov     rdi, gs:8
 * 0000000140161A99: mov     [rdi+4], r8
 * 0000000140161A9D: jmp     short loc_140161AA8
 * 0000000140161A9F: mov     gs:7008h, r8
 * 0000000140161AA8: mov     ecx, cs:KeKernelStackSize
 * 0000000140161AAE: sub     r9, rcx
 * 0000000140161AB1: mov     gs:1A8h, r8
 * 0000000140161ABA: mov     [rbx+30h], r9
 * 0000000140161ABE: lea     rsp, [r8-190h]
 * 0000000140161AC5: mov     rdi, rsp
 * 0000000140161AC8: mov     ecx, 32h ; '2'
 * 0000000140161ACD: rep movsq
 * 0000000140161AD0: xor     edi, edi
 * 0000000140161AD2: cmp     byte ptr [rbx+0C2h], 0
 * 0000000140161AD9: jnz     loc_140161D29
 * 0000000140161ADF: test    dword ptr [rbx], 48010000h
 * 0000000140161AE5: jnz     loc_140161D29
 * 0000000140161AEB: lea     rbp, [rsi-110h]
 * 0000000140161AF2: ldmxcsr dword ptr [rbp-54h]
 * 0000000140161AF6: xor     esi, esi
 * 0000000140161AF8: test    byte ptr [rbx+3], 3
 * 0000000140161AFC: jnz     loc_140161CFE
 * 0000000140161B02: mov     r9, cs:KeUserCallbackDispatcher
 * 0000000140161B09: movzx   eax, word ptr gs:2EC2h
 * 0000000140161B12: cmp     gs:2EBCh, ax
 * 0000000140161B1B: jz      short loc_140161B2F
 * 0000000140161B1D: mov     gs:2EBCh, ax
 * 0000000140161B26: mov     ecx, 48h ; 'H'
 * 0000000140161B2B: xor     edx, edx
 * 0000000140161B2D: wrmsr
 * 0000000140161B2F: btr     word ptr gs:2EB8h, 2
 * 0000000140161B3A: jnb     short loc_140161B4A
 * 0000000140161B3C: mov     eax, 1
 * 0000000140161B41: xor     edx, edx
 * 0000000140161B43: mov     ecx, 49h ; 'I'
 * 0000000140161B48: wrmsr
 * 0000000140161B4A: btr     word ptr gs:2EB8h, 5
 * 0000000140161B55: jnb     loc_140161C80
 * 0000000140161B5B: call    loc_140161C6E
 * 0000000140161B60: add     rsp, 8
 * 0000000140161B64: call    loc_140161C77
 * 0000000140161B69: add     rsp, 8
 * 0000000140161B6D: call    loc_140161B60
 * 0000000140161B72: add     rsp, 8
 * 0000000140161B76: call    loc_140161B69
 * 0000000140161B7B: add     rsp, 8
 * 0000000140161B7F: call    loc_140161B72
 * 0000000140161B84: add     rsp, 8
 * 0000000140161B88: call    loc_140161B7B
 * 0000000140161B8D: add     rsp, 8
 * 0000000140161B91: call    loc_140161B84
 * 0000000140161B96: add     rsp, 8
 * 0000000140161B9A: call    loc_140161B8D
 * 0000000140161B9F: add     rsp, 8
 * 0000000140161BA3: call    loc_140161B96
 * 0000000140161BA8: add     rsp, 8
 * 0000000140161BAC: call    loc_140161B9F
 * 0000000140161BB1: add     rsp, 8
 * 0000000140161BB5: call    loc_140161BA8
 * 0000000140161BBA: add     rsp, 8
 * 0000000140161BBE: call    loc_140161BB1
 * 0000000140161BC3: add     rsp, 8
 * 0000000140161BC7: call    loc_140161BBA
 * 0000000140161BCC: add     rsp, 8
 * 0000000140161BD0: call    loc_140161BC3
 * 0000000140161BD5: add     rsp, 8
 * 0000000140161BD9: call    loc_140161BCC
 * 0000000140161BDE: add     rsp, 8
 * 0000000140161BE2: call    loc_140161BD5
 * 0000000140161BE7: add     rsp, 8
 * 0000000140161BEB: call    loc_140161BDE
 * 0000000140161BF0: add     rsp, 8
 * 0000000140161BF4: call    loc_140161BE7
 * 0000000140161BF9: add     rsp, 8
 * 0000000140161BFD: call    loc_140161BF0
 * 0000000140161C02: add     rsp, 8
 * 0000000140161C06: call    loc_140161BF9
 * 0000000140161C0B: add     rsp, 8
 * 0000000140161C0F: call    loc_140161C02
 * 0000000140161C14: add     rsp, 8
 * 0000000140161C18: call    loc_140161C0B
 * 0000000140161C1D: add     rsp, 8
 * 0000000140161C21: call    loc_140161C14
 * 0000000140161C26: add     rsp, 8
 * 0000000140161C2A: call    loc_140161C1D
 * 0000000140161C2F: add     rsp, 8
 * 0000000140161C33: call    loc_140161C26
 * 0000000140161C38: add     rsp, 8
 * 0000000140161C3C: call    loc_140161C2F
 * 0000000140161C41: add     rsp, 8
 * 0000000140161C45: call    loc_140161C38
 * 0000000140161C4A: add     rsp, 8
 * 0000000140161C4E: call    loc_140161C41
 * 0000000140161C53: add     rsp, 8
 * 0000000140161C57: call    loc_140161C4A
 * 0000000140161C5C: add     rsp, 8
 * 0000000140161C60: call    loc_140161C53
 * 0000000140161C65: add     rsp, 8
 * 0000000140161C69: call    loc_140161C5C
 * 0000000140161C6E: add     rsp, 8
 * 0000000140161C72: call    loc_140161C65
 * 0000000140161C77: add     rsp, 8
 * 0000000140161C7B: mov     eax, 0DADAh
 * 0000000140161C80: test    word ptr gs:2EB8h, 40h
 * 0000000140161C8B: jz      short loc_140161C99
 * 0000000140161C8D: xor     eax, eax
 * 0000000140161C8F: xor     edx, edx
 * 0000000140161C91: mov     ecx, 1
 * 0000000140161C96: div     rcx
 * 0000000140161C99: mov     rcx, r9
 * 0000000140161C9C: xor     eax, eax
 * 0000000140161C9E: xor     edx, edx
 * 0000000140161CA0: mov     r8, [rbp+100h]
 * 0000000140161CA7: mov     r9, [rbp+0D8h]
 * 0000000140161CAE: pxor    xmm0, xmm0
 * 0000000140161CB2: pxor    xmm1, xmm1
 * 0000000140161CB6: pxor    xmm2, xmm2
 * 0000000140161CBA: pxor    xmm3, xmm3
 * 0000000140161CBE: pxor    xmm4, xmm4
 * 0000000140161CC2: pxor    xmm5, xmm5
 * 0000000140161CC6: mov     r11, [rbp+0F8h]
 * 0000000140161CCD: xor     ebx, ebx
 * 0000000140161CCF: test    cs:KiKvaShadow, 1
 * 0000000140161CD6: jnz     KiKernelSysretExit
 * 0000000140161CDC: mov     rbp, r9
 * 0000000140161CDF: mov     rsp, r8
 * 0000000140161CE2: test    word ptr gs:2EB8h, 80h
 * 0000000140161CED: jz      short loc_140161CF8
 * 0000000140161CEF: verw    word ptr gs:701Ch
 * 0000000140161CF8: swapgs
 * 0000000140161CFB: sysret
 * 0000000140161CFE: call    KiRestoreDebugRegisterState
 * 0000000140161D03: mov     r10, cs:KeUserCallbackDispatcher
 * 0000000140161D0A: mov     r9, [rbx+0B8h]
 * 0000000140161D11: mov     r9, [r9+2C8h]
 * 0000000140161D18: or      r9, r9
 * 0000000140161D1B: jnz     loc_140161B09
 * 0000000140161D21: xchg    r9, r10
 * 0000000140161D24: jmp     loc_140161B09
 * 0000000140161D29: lea     rbp, [rsp+138h+var_B8]
 * 0000000140161D31: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140161D3A: mov     rax, cs:KeUserCallbackDispatcher
 * 0000000140161D41: mov     [rbp+0E8h], rax
 * 0000000140161D48: lea     rcx, KiSystemServiceExit
 * 0000000140161D4F: jmp     rcx
 * 0000000140161D51: retn
 */
