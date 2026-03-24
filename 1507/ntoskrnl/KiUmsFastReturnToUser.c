/*
 * XREFs of KiUmsFastReturnToUser @ 0x1401949C0
 * Callers:
 *     KiUmsTrapEntry @ 0x140194D80 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x140194F80 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x140195140 (KiUmsExceptionEntry.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x140194100 (KiBugCheckDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401949C0 (KiUmsFastReturnToUser.c)
 *     KiUmsExit @ 0x140195200 (KiUmsExit.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiUmsFastReturnToUser @ 0x1401949C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401949C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401949C0: sub     rsp, 28h
 * 00000001401949C4: mov     rbx, gs:188h
 * 00000001401949CD: mov     rcx, [rbx+90h]
 * 00000001401949D4: lea     rbp, [rcx+80h]
 * 00000001401949DB: mov     rax, cr8
 * 00000001401949DF: or      al, [rbx+24Ah]
 * 00000001401949E5: or      eax, [rbx+1E4h]
 * 00000001401949EB: jz      short loc_140194A21
 * 00000001401949ED: mov     ecx, 4Ah ; 'J'
 * 00000001401949F2: xor     r9d, r9d
 * 00000001401949F5: mov     r8, cr8
 * 00000001401949F9: or      r8d, r8d
 * 00000001401949FC: jnz     short loc_140194A12
 * 00000001401949FE: mov     ecx, 1
 * 0000000140194A03: movzx   r8d, byte ptr [rbx+24Ah]
 * 0000000140194A0B: mov     r9d, [rbx+1E4h]
 * 0000000140194A12: mov     rdx, [rbp+0E8h]
 * 0000000140194A19: mov     r10, rbp
 * 0000000140194A1C: call    KiBugCheckDispatch
 * 0000000140194A21: cli
 * 0000000140194A22: mov     rcx, gs:188h
 * 0000000140194A2B: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140194A32: jz      short loc_140194A8B
 * 0000000140194A34: mov     [rbp-50h], rax
 * 0000000140194A38: xor     eax, eax
 * 0000000140194A3A: mov     [rbp-48h], rax
 * 0000000140194A3E: mov     [rbp-40h], rax
 * 0000000140194A42: mov     [rbp-38h], rax
 * 0000000140194A46: mov     [rbp-30h], rax
 * 0000000140194A4A: mov     [rbp-28h], rax
 * 0000000140194A4E: mov     [rbp-20h], rax
 * 0000000140194A52: pxor    xmm0, xmm0
 * 0000000140194A56: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140194A5A: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140194A5E: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140194A62: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140194A66: movaps  xmmword ptr [rbp+30h], xmm0
 * 0000000140194A6A: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140194A6E: mov     ecx, 1
 * 0000000140194A73: mov     cr8, rcx
 * 0000000140194A77: sti
 * 0000000140194A78: call    KiInitiateUserApc
 * 0000000140194A7D: cli
 * 0000000140194A7E: mov     ecx, 0
 * 0000000140194A83: mov     cr8, rcx
 * 0000000140194A87: mov     rax, [rbp-50h]
 * 0000000140194A8B: mov     rcx, gs:188h
 * 0000000140194A94: test    dword ptr [rcx], 40010000h
 * 0000000140194A9A: jz      short loc_140194AC9
 * 0000000140194A9C: mov     [rbp-50h], rax
 * 0000000140194AA0: test    byte ptr [rcx+2], 1
 * 0000000140194AA4: jz      short loc_140194AB4
 * 0000000140194AA6: call    KiCopyCounters
 * 0000000140194AAB: mov     rcx, gs:188h
 * 0000000140194AB4: test    byte ptr [rcx+3], 40h
 * 0000000140194AB8: jz      short loc_140194AC5
 * 0000000140194ABA: lea     rsp, [rbp-80h]
 * 0000000140194ABE: xor     ecx, ecx
 * 0000000140194AC0: call    KiUmsExit
 * 0000000140194AC5: mov     rax, [rbp-50h]
 * 0000000140194AC9: ldmxcsr dword ptr [rbp-54h]
 * 0000000140194ACD: xor     r10, r10
 * 0000000140194AD0: cmp     word ptr [rbp+80h], 0
 * 0000000140194AD8: jz      short loc_140194B1B
 * 0000000140194ADA: mov     [rbp-50h], rax
 * 0000000140194ADE: call    KiRestoreDebugRegisterState
 * 0000000140194AE3: mov     rax, gs:188h
 * 0000000140194AEC: mov     rax, [rax+0B8h]
 * 0000000140194AF3: mov     rax, [rax+2C8h]
 * 0000000140194AFA: or      rax, rax
 * 0000000140194AFD: jz      short loc_140194B17
 * 0000000140194AFF: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140194B07: jnz     short loc_140194B17
 * 0000000140194B09: mov     r10, [rbp+0E8h]
 * 0000000140194B10: mov     [rbp+0E8h], rax
 * 0000000140194B17: mov     rax, [rbp-50h]
 * 0000000140194B1B: mov     [rbp-50h], rax
 * 0000000140194B1F: movzx   eax, word ptr gs:2EBAh
 * 0000000140194B28: cmp     gs:2EB4h, ax
 * 0000000140194B31: jz      short loc_140194B45
 * 0000000140194B33: mov     gs:2EB4h, ax
 * 0000000140194B3C: mov     ecx, 48h ; 'H'
 * 0000000140194B41: xor     edx, edx
 * 0000000140194B43: wrmsr
 * 0000000140194B45: btr     word ptr gs:2EB0h, 2
 * 0000000140194B50: jnb     short loc_140194B60
 * 0000000140194B52: mov     eax, 1
 * 0000000140194B57: xor     edx, edx
 * 0000000140194B59: mov     ecx, 49h ; 'I'
 * 0000000140194B5E: wrmsr
 * 0000000140194B60: btr     word ptr gs:2EB0h, 5
 * 0000000140194B6B: jnb     loc_140194C96
 * 0000000140194B71: call    loc_140194C84
 * 0000000140194B76: add     rsp, 8
 * 0000000140194B7A: call    loc_140194C8D
 * 0000000140194B7F: add     rsp, 8
 * 0000000140194B83: call    loc_140194B76
 * 0000000140194B88: add     rsp, 8
 * 0000000140194B8C: call    loc_140194B7F
 * 0000000140194B91: add     rsp, 8
 * 0000000140194B95: call    loc_140194B88
 * 0000000140194B9A: add     rsp, 8
 * 0000000140194B9E: call    loc_140194B91
 * 0000000140194BA3: add     rsp, 8
 * 0000000140194BA7: call    loc_140194B9A
 * 0000000140194BAC: add     rsp, 8
 * 0000000140194BB0: call    loc_140194BA3
 * 0000000140194BB5: add     rsp, 8
 * 0000000140194BB9: call    loc_140194BAC
 * 0000000140194BBE: add     rsp, 8
 * 0000000140194BC2: call    loc_140194BB5
 * 0000000140194BC7: add     rsp, 8
 * 0000000140194BCB: call    loc_140194BBE
 * 0000000140194BD0: add     rsp, 8
 * 0000000140194BD4: call    loc_140194BC7
 * 0000000140194BD9: add     rsp, 8
 * 0000000140194BDD: call    loc_140194BD0
 * 0000000140194BE2: add     rsp, 8
 * 0000000140194BE6: call    loc_140194BD9
 * 0000000140194BEB: add     rsp, 8
 * 0000000140194BEF: call    loc_140194BE2
 * 0000000140194BF4: add     rsp, 8
 * 0000000140194BF8: call    loc_140194BEB
 * 0000000140194BFD: add     rsp, 8
 * 0000000140194C01: call    loc_140194BF4
 * 0000000140194C06: add     rsp, 8
 * 0000000140194C0A: call    loc_140194BFD
 * 0000000140194C0F: add     rsp, 8
 * 0000000140194C13: call    loc_140194C06
 * 0000000140194C18: add     rsp, 8
 * 0000000140194C1C: call    loc_140194C0F
 * 0000000140194C21: add     rsp, 8
 * 0000000140194C25: call    loc_140194C18
 * 0000000140194C2A: add     rsp, 8
 * 0000000140194C2E: call    loc_140194C21
 * 0000000140194C33: add     rsp, 8
 * 0000000140194C37: call    loc_140194C2A
 * 0000000140194C3C: add     rsp, 8
 * 0000000140194C40: call    loc_140194C33
 * 0000000140194C45: add     rsp, 8
 * 0000000140194C49: call    loc_140194C3C
 * 0000000140194C4E: add     rsp, 8
 * 0000000140194C52: call    loc_140194C45
 * 0000000140194C57: add     rsp, 8
 * 0000000140194C5B: call    loc_140194C4E
 * 0000000140194C60: add     rsp, 8
 * 0000000140194C64: call    loc_140194C57
 * 0000000140194C69: add     rsp, 8
 * 0000000140194C6D: call    loc_140194C60
 * 0000000140194C72: add     rsp, 8
 * 0000000140194C76: call    loc_140194C69
 * 0000000140194C7B: add     rsp, 8
 * 0000000140194C7F: call    loc_140194C72
 * 0000000140194C84: add     rsp, 8
 * 0000000140194C88: call    loc_140194C7B
 * 0000000140194C8D: add     rsp, 8
 * 0000000140194C91: mov     eax, 0DADAh
 * 0000000140194C96: test    word ptr gs:2EB0h, 40h
 * 0000000140194CA1: jz      short loc_140194CAF
 * 0000000140194CA3: xor     eax, eax
 * 0000000140194CA5: xor     edx, edx
 * 0000000140194CA7: mov     ecx, 1
 * 0000000140194CAC: div     rcx
 * 0000000140194CAF: mov     rax, [rbp-50h]
 * 0000000140194CB3: mov     r8, [rbp+100h]
 * 0000000140194CBA: mov     r9, [rbp+0D8h]
 * 0000000140194CC1: xor     edx, edx
 * 0000000140194CC3: pxor    xmm0, xmm0
 * 0000000140194CC7: pxor    xmm1, xmm1
 * 0000000140194CCB: pxor    xmm2, xmm2
 * 0000000140194CCF: pxor    xmm3, xmm3
 * 0000000140194CD3: pxor    xmm4, xmm4
 * 0000000140194CD7: pxor    xmm5, xmm5
 * 0000000140194CDB: mov     rcx, [rbp+0E8h]
 * 0000000140194CE2: mov     r11, [rbp+0F8h]
 * 0000000140194CE9: test    cs:KiKvaShadow, 1
 * 0000000140194CF0: jnz     KiKernelSysretExit
 * 0000000140194CF6: mov     rbp, r9
 * 0000000140194CF9: mov     rsp, r8
 * 0000000140194CFC: test    word ptr gs:2EB0h, 80h
 * 0000000140194D07: jz      short loc_140194D12
 * 0000000140194D09: verw    word ptr gs:701Ch
 * 0000000140194D12: swapgs
 * 0000000140194D15: sysret
 */
