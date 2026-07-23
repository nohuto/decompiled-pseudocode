/*
 * XREFs of KiUmsFastReturnToUser @ 0x1401709C0
 * Callers:
 *     KiUmsTrapEntry @ 0x140170DC0 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x140170FC0 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x140171180 (KiUmsExceptionEntry.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x140170100 (KiBugCheckDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401709C0 (KiUmsFastReturnToUser.c)
 *     KiUmsExit @ 0x140171240 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiUmsFastReturnToUser @ 0x1401709C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401709C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401709C0: sub     rsp, 28h
 * 00000001401709C4: mov     rbx, gs:188h
 * 00000001401709CD: mov     rcx, [rbx+90h]
 * 00000001401709D4: lea     rbp, [rcx+80h]
 * 00000001401709DB: mov     rax, cr8
 * 00000001401709DF: or      al, [rbx+24Ah]
 * 00000001401709E5: or      eax, [rbx+1E4h]
 * 00000001401709EB: jz      short loc_140170A21
 * 00000001401709ED: mov     ecx, 4Ah ; 'J'
 * 00000001401709F2: xor     r9d, r9d
 * 00000001401709F5: mov     r8, cr8
 * 00000001401709F9: or      r8d, r8d
 * 00000001401709FC: jnz     short loc_140170A12
 * 00000001401709FE: mov     ecx, 1
 * 0000000140170A03: movzx   r8d, byte ptr [rbx+24Ah]
 * 0000000140170A0B: mov     r9d, [rbx+1E4h]
 * 0000000140170A12: mov     rdx, [rbp+0E8h]
 * 0000000140170A19: mov     r10, rbp
 * 0000000140170A1C: call    KiBugCheckDispatch
 * 0000000140170A21: cli
 * 0000000140170A22: mov     rcx, gs:188h
 * 0000000140170A2B: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140170A32: jz      short loc_140170A8B
 * 0000000140170A34: mov     [rbp-50h], rax
 * 0000000140170A38: xor     eax, eax
 * 0000000140170A3A: mov     [rbp-48h], rax
 * 0000000140170A3E: mov     [rbp-40h], rax
 * 0000000140170A42: mov     [rbp-38h], rax
 * 0000000140170A46: mov     [rbp-30h], rax
 * 0000000140170A4A: mov     [rbp-28h], rax
 * 0000000140170A4E: mov     [rbp-20h], rax
 * 0000000140170A52: pxor    xmm0, xmm0
 * 0000000140170A56: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140170A5A: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140170A5E: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140170A62: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140170A66: movaps  xmmword ptr [rbp+30h], xmm0
 * 0000000140170A6A: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140170A6E: mov     ecx, 1
 * 0000000140170A73: mov     cr8, rcx
 * 0000000140170A77: sti
 * 0000000140170A78: call    KiInitiateUserApc
 * 0000000140170A7D: cli
 * 0000000140170A7E: mov     ecx, 0
 * 0000000140170A83: mov     cr8, rcx
 * 0000000140170A87: mov     rax, [rbp-50h]
 * 0000000140170A8B: mov     rcx, gs:188h
 * 0000000140170A94: test    dword ptr [rcx], 8000000h
 * 0000000140170A9A: jz      short loc_140170ADB
 * 0000000140170A9C: mov     [rbp-50h], rax
 * 0000000140170AA0: xor     eax, eax
 * 0000000140170AA2: mov     [rbp-48h], rax
 * 0000000140170AA6: mov     [rbp-40h], rax
 * 0000000140170AAA: mov     [rbp-38h], rax
 * 0000000140170AAE: mov     [rbp-30h], rax
 * 0000000140170AB2: mov     [rbp-28h], rax
 * 0000000140170AB6: mov     [rbp-20h], rax
 * 0000000140170ABA: pxor    xmm0, xmm0
 * 0000000140170ABE: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140170AC2: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140170AC6: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140170ACA: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140170ACE: movaps  xmmword ptr [rbp+30h], xmm0
 * 0000000140170AD2: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140170AD6: call    KiRestoreSetContextState
 * 0000000140170ADB: mov     rcx, gs:188h
 * 0000000140170AE4: test    dword ptr [rcx], 40010000h
 * 0000000140170AEA: jz      short loc_140170B19
 * 0000000140170AEC: mov     [rbp-50h], rax
 * 0000000140170AF0: test    byte ptr [rcx+2], 1
 * 0000000140170AF4: jz      short loc_140170B04
 * 0000000140170AF6: call    KiCopyCounters
 * 0000000140170AFB: mov     rcx, gs:188h
 * 0000000140170B04: test    byte ptr [rcx+3], 40h
 * 0000000140170B08: jz      short loc_140170B15
 * 0000000140170B0A: lea     rsp, [rbp-80h]
 * 0000000140170B0E: xor     ecx, ecx
 * 0000000140170B10: call    KiUmsExit
 * 0000000140170B15: mov     rax, [rbp-50h]
 * 0000000140170B19: ldmxcsr dword ptr [rbp-54h]
 * 0000000140170B1D: xor     r10, r10
 * 0000000140170B20: cmp     word ptr [rbp+80h], 0
 * 0000000140170B28: jz      short loc_140170B6B
 * 0000000140170B2A: mov     [rbp-50h], rax
 * 0000000140170B2E: call    KiRestoreDebugRegisterState
 * 0000000140170B33: mov     rax, gs:188h
 * 0000000140170B3C: mov     rax, [rax+0B8h]
 * 0000000140170B43: mov     rax, [rax+2C8h]
 * 0000000140170B4A: or      rax, rax
 * 0000000140170B4D: jz      short loc_140170B67
 * 0000000140170B4F: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140170B57: jnz     short loc_140170B67
 * 0000000140170B59: mov     r10, [rbp+0E8h]
 * 0000000140170B60: mov     [rbp+0E8h], rax
 * 0000000140170B67: mov     rax, [rbp-50h]
 * 0000000140170B6B: mov     [rbp-50h], rax
 * 0000000140170B6F: movzx   eax, word ptr gs:2EC2h
 * 0000000140170B78: cmp     gs:2EBCh, ax
 * 0000000140170B81: jz      short loc_140170B95
 * 0000000140170B83: mov     gs:2EBCh, ax
 * 0000000140170B8C: mov     ecx, 48h ; 'H'
 * 0000000140170B91: xor     edx, edx
 * 0000000140170B93: wrmsr
 * 0000000140170B95: btr     word ptr gs:2EB8h, 2
 * 0000000140170BA0: jnb     short loc_140170BB0
 * 0000000140170BA2: mov     eax, 1
 * 0000000140170BA7: xor     edx, edx
 * 0000000140170BA9: mov     ecx, 49h ; 'I'
 * 0000000140170BAE: wrmsr
 * 0000000140170BB0: btr     word ptr gs:2EB8h, 5
 * 0000000140170BBB: jnb     loc_140170CE6
 * 0000000140170BC1: call    loc_140170CD4
 * 0000000140170BC6: add     rsp, 8
 * 0000000140170BCA: call    loc_140170CDD
 * 0000000140170BCF: add     rsp, 8
 * 0000000140170BD3: call    loc_140170BC6
 * 0000000140170BD8: add     rsp, 8
 * 0000000140170BDC: call    loc_140170BCF
 * 0000000140170BE1: add     rsp, 8
 * 0000000140170BE5: call    loc_140170BD8
 * 0000000140170BEA: add     rsp, 8
 * 0000000140170BEE: call    loc_140170BE1
 * 0000000140170BF3: add     rsp, 8
 * 0000000140170BF7: call    loc_140170BEA
 * 0000000140170BFC: add     rsp, 8
 * 0000000140170C00: call    loc_140170BF3
 * 0000000140170C05: add     rsp, 8
 * 0000000140170C09: call    loc_140170BFC
 * 0000000140170C0E: add     rsp, 8
 * 0000000140170C12: call    loc_140170C05
 * 0000000140170C17: add     rsp, 8
 * 0000000140170C1B: call    loc_140170C0E
 * 0000000140170C20: add     rsp, 8
 * 0000000140170C24: call    loc_140170C17
 * 0000000140170C29: add     rsp, 8
 * 0000000140170C2D: call    loc_140170C20
 * 0000000140170C32: add     rsp, 8
 * 0000000140170C36: call    loc_140170C29
 * 0000000140170C3B: add     rsp, 8
 * 0000000140170C3F: call    loc_140170C32
 * 0000000140170C44: add     rsp, 8
 * 0000000140170C48: call    loc_140170C3B
 * 0000000140170C4D: add     rsp, 8
 * 0000000140170C51: call    loc_140170C44
 * 0000000140170C56: add     rsp, 8
 * 0000000140170C5A: call    loc_140170C4D
 * 0000000140170C5F: add     rsp, 8
 * 0000000140170C63: call    loc_140170C56
 * 0000000140170C68: add     rsp, 8
 * 0000000140170C6C: call    loc_140170C5F
 * 0000000140170C71: add     rsp, 8
 * 0000000140170C75: call    loc_140170C68
 * 0000000140170C7A: add     rsp, 8
 * 0000000140170C7E: call    loc_140170C71
 * 0000000140170C83: add     rsp, 8
 * 0000000140170C87: call    loc_140170C7A
 * 0000000140170C8C: add     rsp, 8
 * 0000000140170C90: call    loc_140170C83
 * 0000000140170C95: add     rsp, 8
 * 0000000140170C99: call    loc_140170C8C
 * 0000000140170C9E: add     rsp, 8
 * 0000000140170CA2: call    loc_140170C95
 * 0000000140170CA7: add     rsp, 8
 * 0000000140170CAB: call    loc_140170C9E
 * 0000000140170CB0: add     rsp, 8
 * 0000000140170CB4: call    loc_140170CA7
 * 0000000140170CB9: add     rsp, 8
 * 0000000140170CBD: call    loc_140170CB0
 * 0000000140170CC2: add     rsp, 8
 * 0000000140170CC6: call    loc_140170CB9
 * 0000000140170CCB: add     rsp, 8
 * 0000000140170CCF: call    loc_140170CC2
 * 0000000140170CD4: add     rsp, 8
 * 0000000140170CD8: call    loc_140170CCB
 * 0000000140170CDD: add     rsp, 8
 * 0000000140170CE1: mov     eax, 0DADAh
 * 0000000140170CE6: test    word ptr gs:2EB8h, 40h
 * 0000000140170CF1: jz      short loc_140170CFF
 * 0000000140170CF3: xor     eax, eax
 * 0000000140170CF5: xor     edx, edx
 * 0000000140170CF7: mov     ecx, 1
 * 0000000140170CFC: div     rcx
 * 0000000140170CFF: mov     rax, [rbp-50h]
 * 0000000140170D03: mov     r8, [rbp+100h]
 * 0000000140170D0A: mov     r9, [rbp+0D8h]
 * 0000000140170D11: xor     edx, edx
 * 0000000140170D13: pxor    xmm0, xmm0
 * 0000000140170D17: pxor    xmm1, xmm1
 * 0000000140170D1B: pxor    xmm2, xmm2
 * 0000000140170D1F: pxor    xmm3, xmm3
 * 0000000140170D23: pxor    xmm4, xmm4
 * 0000000140170D27: pxor    xmm5, xmm5
 * 0000000140170D2B: mov     rcx, [rbp+0E8h]
 * 0000000140170D32: mov     r11, [rbp+0F8h]
 * 0000000140170D39: test    cs:KiKvaShadow, 1
 * 0000000140170D40: jnz     KiKernelSysretExit
 * 0000000140170D46: mov     rbp, r9
 * 0000000140170D49: mov     rsp, r8
 * 0000000140170D4C: test    word ptr gs:2EB8h, 80h
 * 0000000140170D57: jz      short loc_140170D62
 * 0000000140170D59: verw    word ptr gs:701Ch
 * 0000000140170D62: swapgs
 * 0000000140170D65: sysret
 */
