/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x140184B80
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiInterruptSubDispatchNoLock @ 0x140183E70 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x140184B80 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x140184B80
 * Reason: Hex-Rays returned no pseudocode for 0x140184B80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140184B80: mov     rdx, rsp
 * 0000000140184B83: mov     rcx, gs:6418h
 * 0000000140184B8C: lea     rax, [rcx-6000h]
 * 0000000140184B93: cmp     rax, rsp
 * 0000000140184B96: ja      short loc_140184B9D
 * 0000000140184B98: cmp     rsp, rcx
 * 0000000140184B9B: jb      short loc_140184BA9
 * 0000000140184B9D: cmp     cs:KiBugCheckActive, 0
 * 0000000140184BA4: jnz     short loc_140184BA9
 * 0000000140184BA6: mov     rsp, rcx
 * 0000000140184BA9: sub     rsp, 20h
 * 0000000140184BAD: mov     [rsp+20h+var_10], rdx
 * 0000000140184BB2: call    KiInterruptSubDispatchNoLock
 * 0000000140184BB7: mov     rsp, [rsp+20h+var_10]
 * 0000000140184BBC: mov     rcx, gs:20h
 * 0000000140184BC5: cmp     byte ptr [rcx+20h], 1
 * 0000000140184BC9: ja      short loc_140184C3F
 * 0000000140184BCB: rdtsc
 * 0000000140184BCD: shl     rdx, 20h
 * 0000000140184BD1: or      rax, rdx
 * 0000000140184BD4: sub     rax, [rcx+5B38h]
 * 0000000140184BDB: add     [rcx+5BF8h], rax
 * 0000000140184BE2: add     [rcx+5B38h], rax
 * 0000000140184BE9: mov     r8, rax
 * 0000000140184BEC: mov     rax, [rcx+8]
 * 0000000140184BF0: test    byte ptr [rax+2], 32h
 * 0000000140184BF4: jz      short loc_140184C09
 * 0000000140184BF6: xor     edx, edx
 * 0000000140184BF8: call    KiBeginThreadAccountingPeriod
 * 0000000140184BFD: mov     rcx, gs:20h
 * 0000000140184C06: inc     byte ptr [rcx+20h]
 * 0000000140184C09: mov     dl, [rcx+6]
 * 0000000140184C0C: and     byte ptr [rcx+6], 0
 * 0000000140184C10: cmp     byte ptr [rcx+7], 0
 * 0000000140184C14: jnz     short loc_140184C3F
 * 0000000140184C16: test    dl, dl
 * 0000000140184C18: jz      short loc_140184C3F
 * 0000000140184C1A: cmp     byte ptr [rbp-57h], 2
 * 0000000140184C1E: jnb     short loc_140184C2B
 * 0000000140184C20: and     byte ptr [rcx+20h], 0
 * 0000000140184C24: call    KiDpcInterruptBypass
 * 0000000140184C29: jmp     short loc_140184C42
 * 0000000140184C2B: mov     ecx, 2
 * 0000000140184C30: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140184C36: mov     rcx, gs:20h
 * 0000000140184C3F: dec     byte ptr [rcx+20h]
 * 0000000140184C42: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140184C46: mov     cr8, rcx
 * 0000000140184C4A: mov     rsi, [rbp+0D0h]
 * 0000000140184C51: test    byte ptr [rbp+0F0h], 1
 * 0000000140184C58: jz      loc_140184EBB
 * 0000000140184C5E: mov     rcx, gs:188h
 * 0000000140184C67: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140184C6E: jz      short loc_140184C89
 * 0000000140184C70: mov     ecx, 1
 * 0000000140184C75: mov     cr8, rcx
 * 0000000140184C79: sti
 * 0000000140184C7A: call    KiInitiateUserApc
 * 0000000140184C7F: cli
 * 0000000140184C80: mov     ecx, 0
 * 0000000140184C85: mov     cr8, rcx
 * 0000000140184C89: mov     rcx, gs:188h
 * 0000000140184C92: test    dword ptr [rcx], 40010000h
 * 0000000140184C98: jz      short loc_140184CAE
 * 0000000140184C9A: test    byte ptr [rcx+2], 1
 * 0000000140184C9E: jz      short loc_140184CAE
 * 0000000140184CA0: call    KiCopyCounters
 * 0000000140184CA5: mov     rcx, gs:188h
 * 0000000140184CAE: ldmxcsr dword ptr [rbp-54h]
 * 0000000140184CB2: cmp     word ptr [rbp+80h], 0
 * 0000000140184CBA: jz      short loc_140184CC1
 * 0000000140184CBC: call    KiRestoreDebugRegisterState
 * 0000000140184CC1: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140184CC5: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140184CC9: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140184CCD: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140184CD1: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140184CD5: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140184CD9: mov     r11, [rbp-20h]
 * 0000000140184CDD: mov     r10, [rbp-28h]
 * 0000000140184CE1: mov     r9, [rbp-30h]
 * 0000000140184CE5: mov     r8, [rbp-38h]
 * 0000000140184CE9: movzx   eax, word ptr gs:2EBAh
 * 0000000140184CF2: cmp     gs:2EB4h, ax
 * 0000000140184CFB: jz      short loc_140184D0F
 * 0000000140184CFD: mov     gs:2EB4h, ax
 * 0000000140184D06: mov     ecx, 48h ; 'H'
 * 0000000140184D0B: xor     edx, edx
 * 0000000140184D0D: wrmsr
 * 0000000140184D0F: btr     word ptr gs:2EB0h, 2
 * 0000000140184D1A: jnb     short loc_140184D2A
 * 0000000140184D1C: mov     eax, 1
 * 0000000140184D21: xor     edx, edx
 * 0000000140184D23: mov     ecx, 49h ; 'I'
 * 0000000140184D28: wrmsr
 * 0000000140184D2A: btr     word ptr gs:2EB0h, 5
 * 0000000140184D35: jnb     loc_140184E60
 * 0000000140184D3B: call    loc_140184E4E
 * 0000000140184D40: add     rsp, 8
 * 0000000140184D44: call    loc_140184E57
 * 0000000140184D49: add     rsp, 8
 * 0000000140184D4D: call    loc_140184D40
 * 0000000140184D52: add     rsp, 8
 * 0000000140184D56: call    loc_140184D49
 * 0000000140184D5B: add     rsp, 8
 * 0000000140184D5F: call    loc_140184D52
 * 0000000140184D64: add     rsp, 8
 * 0000000140184D68: call    loc_140184D5B
 * 0000000140184D6D: add     rsp, 8
 * 0000000140184D71: call    loc_140184D64
 * 0000000140184D76: add     rsp, 8
 * 0000000140184D7A: call    loc_140184D6D
 * 0000000140184D7F: add     rsp, 8
 * 0000000140184D83: call    loc_140184D76
 * 0000000140184D88: add     rsp, 8
 * 0000000140184D8C: call    loc_140184D7F
 * 0000000140184D91: add     rsp, 8
 * 0000000140184D95: call    loc_140184D88
 * 0000000140184D9A: add     rsp, 8
 * 0000000140184D9E: call    loc_140184D91
 * 0000000140184DA3: add     rsp, 8
 * 0000000140184DA7: call    loc_140184D9A
 * 0000000140184DAC: add     rsp, 8
 * 0000000140184DB0: call    loc_140184DA3
 * 0000000140184DB5: add     rsp, 8
 * 0000000140184DB9: call    loc_140184DAC
 * 0000000140184DBE: add     rsp, 8
 * 0000000140184DC2: call    loc_140184DB5
 * 0000000140184DC7: add     rsp, 8
 * 0000000140184DCB: call    loc_140184DBE
 * 0000000140184DD0: add     rsp, 8
 * 0000000140184DD4: call    loc_140184DC7
 * 0000000140184DD9: add     rsp, 8
 * 0000000140184DDD: call    loc_140184DD0
 * 0000000140184DE2: add     rsp, 8
 * 0000000140184DE6: call    loc_140184DD9
 * 0000000140184DEB: add     rsp, 8
 * 0000000140184DEF: call    loc_140184DE2
 * 0000000140184DF4: add     rsp, 8
 * 0000000140184DF8: call    loc_140184DEB
 * 0000000140184DFD: add     rsp, 8
 * 0000000140184E01: call    loc_140184DF4
 * 0000000140184E06: add     rsp, 8
 * 0000000140184E0A: call    loc_140184DFD
 * 0000000140184E0F: add     rsp, 8
 * 0000000140184E13: call    loc_140184E06
 * 0000000140184E18: add     rsp, 8
 * 0000000140184E1C: call    loc_140184E0F
 * 0000000140184E21: add     rsp, 8
 * 0000000140184E25: call    loc_140184E18
 * 0000000140184E2A: add     rsp, 8
 * 0000000140184E2E: call    loc_140184E21
 * 0000000140184E33: add     rsp, 8
 * 0000000140184E37: call    loc_140184E2A
 * 0000000140184E3C: add     rsp, 8
 * 0000000140184E40: call    loc_140184E33
 * 0000000140184E45: add     rsp, 8
 * 0000000140184E49: call    loc_140184E3C
 * 0000000140184E4E: add     rsp, 8
 * 0000000140184E52: call    loc_140184E45
 * 0000000140184E57: add     rsp, 8
 * 0000000140184E5B: mov     eax, 0DADAh
 * 0000000140184E60: test    word ptr gs:2EB0h, 40h
 * 0000000140184E6B: jz      short loc_140184E79
 * 0000000140184E6D: xor     eax, eax
 * 0000000140184E6F: xor     edx, edx
 * 0000000140184E71: mov     ecx, 1
 * 0000000140184E76: div     rcx
 * 0000000140184E79: mov     rdx, [rbp-40h]
 * 0000000140184E7D: mov     rcx, [rbp-48h]
 * 0000000140184E81: mov     rax, [rbp-50h]
 * 0000000140184E85: mov     rsp, rbp
 * 0000000140184E88: mov     rbp, [rbp+0D8h]
 * 0000000140184E8F: add     rsp, 0E8h
 * 0000000140184E96: test    cs:KiKvaShadow, 1
 * 0000000140184E9D: jz      short loc_140184EA4
 * 0000000140184E9F: jmp     KiKernelExit
 * 0000000140184EA4: test    word ptr gs:2EB0h, 80h
 * 0000000140184EAF: jz      short loc_140184EB6
 * 0000000140184EB1: verw    [rsp-1C8h+arg_1E0]
 * 0000000140184EB6: swapgs
 * 0000000140184EB9: iretq
 * 0000000140184EBB: ldmxcsr dword ptr [rbp-54h]
 * 0000000140184EBF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140184EC3: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140184EC7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140184ECB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140184ECF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140184ED3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140184ED7: mov     r11, [rbp-20h]
 * 0000000140184EDB: mov     r10, [rbp-28h]
 * 0000000140184EDF: mov     r9, [rbp-30h]
 * 0000000140184EE3: mov     r8, [rbp-38h]
 * 0000000140184EE7: mov     rdx, [rbp-40h]
 * 0000000140184EEB: mov     rcx, [rbp-48h]
 * 0000000140184EEF: mov     rax, [rbp-50h]
 * 0000000140184EF3: mov     rsp, rbp
 * 0000000140184EF6: mov     rbp, [rbp+0D8h]
 * 0000000140184EFD: add     rsp, 0E8h
 * 0000000140184F04: iretq
 */
