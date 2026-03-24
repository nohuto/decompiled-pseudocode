/*
 * XREFs of KiChainedDispatch @ 0x14015E9B0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140159180 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x14015E9B0 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x14015ED60 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165590 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x14015E9B0
 * Reason: Hex-Rays returned no pseudocode for 0x14015E9B0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015E9B0: mov     rdx, rsp
 * 000000014015E9B3: mov     rcx, gs:6498h
 * 000000014015E9BC: lea     rax, [rcx-6000h]
 * 000000014015E9C3: cmp     rax, rsp
 * 000000014015E9C6: ja      short loc_14015E9CD
 * 000000014015E9C8: cmp     rsp, rcx
 * 000000014015E9CB: jb      short loc_14015E9D9
 * 000000014015E9CD: cmp     cs:KiBugCheckActive, 0
 * 000000014015E9D4: jnz     short loc_14015E9D9
 * 000000014015E9D6: mov     rsp, rcx
 * 000000014015E9D9: sub     rsp, 20h
 * 000000014015E9DD: mov     [rsp+20h+var_10], rdx
 * 000000014015E9E2: call    KiScanInterruptObjectList
 * 000000014015E9E7: mov     rsp, [rsp+20h+var_10]
 * 000000014015E9EC: mov     rcx, rsi
 * 000000014015E9EF: call    HalPerformEndOfInterrupt_0
 * 000000014015E9F4: mov     rcx, gs:20h
 * 000000014015E9FD: cmp     byte ptr [rcx+20h], 1
 * 000000014015EA01: ja      short loc_14015EA77
 * 000000014015EA03: rdtsc
 * 000000014015EA05: shl     rdx, 20h
 * 000000014015EA09: or      rax, rdx
 * 000000014015EA0C: sub     rax, [rcx+5B38h]
 * 000000014015EA13: add     [rcx+5BF8h], rax
 * 000000014015EA1A: add     [rcx+5B38h], rax
 * 000000014015EA21: mov     r8, rax
 * 000000014015EA24: mov     rax, [rcx+8]
 * 000000014015EA28: test    byte ptr [rax+2], 32h
 * 000000014015EA2C: jz      short loc_14015EA41
 * 000000014015EA2E: xor     edx, edx
 * 000000014015EA30: call    KiBeginThreadAccountingPeriod
 * 000000014015EA35: mov     rcx, gs:20h
 * 000000014015EA3E: inc     byte ptr [rcx+20h]
 * 000000014015EA41: mov     dl, [rcx+6]
 * 000000014015EA44: and     byte ptr [rcx+6], 0
 * 000000014015EA48: cmp     byte ptr [rcx+7], 0
 * 000000014015EA4C: jnz     short loc_14015EA77
 * 000000014015EA4E: test    dl, dl
 * 000000014015EA50: jz      short loc_14015EA77
 * 000000014015EA52: cmp     byte ptr [rbp-57h], 2
 * 000000014015EA56: jnb     short loc_14015EA63
 * 000000014015EA58: and     byte ptr [rcx+20h], 0
 * 000000014015EA5C: call    KiDpcInterruptBypass
 * 000000014015EA61: jmp     short loc_14015EA7A
 * 000000014015EA63: mov     ecx, 2
 * 000000014015EA68: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014015EA6E: mov     rcx, gs:20h
 * 000000014015EA77: dec     byte ptr [rcx+20h]
 * 000000014015EA7A: movzx   ecx, byte ptr [rbp-57h]
 * 000000014015EA7E: mov     cr8, rcx
 * 000000014015EA82: mov     rsi, [rbp+0D0h]
 * 000000014015EA89: test    byte ptr [rbp+0F0h], 1
 * 000000014015EA90: jz      loc_14015ED09
 * 000000014015EA96: mov     rcx, gs:188h
 * 000000014015EA9F: cmp     byte ptr [rcx+0C2h], 0
 * 000000014015EAA6: jz      short loc_14015EAC1
 * 000000014015EAA8: mov     ecx, 1
 * 000000014015EAAD: mov     cr8, rcx
 * 000000014015EAB1: sti
 * 000000014015EAB2: call    KiInitiateUserApc
 * 000000014015EAB7: cli
 * 000000014015EAB8: mov     ecx, 0
 * 000000014015EABD: mov     cr8, rcx
 * 000000014015EAC1: mov     rcx, gs:188h
 * 000000014015EACA: test    dword ptr [rcx], 8000000h
 * 000000014015EAD0: jz      short loc_14015EAD7
 * 000000014015EAD2: call    KiRestoreSetContextState
 * 000000014015EAD7: mov     rcx, gs:188h
 * 000000014015EAE0: test    dword ptr [rcx], 40010000h
 * 000000014015EAE6: jz      short loc_14015EAFC
 * 000000014015EAE8: test    byte ptr [rcx+2], 1
 * 000000014015EAEC: jz      short loc_14015EAFC
 * 000000014015EAEE: call    KiCopyCounters
 * 000000014015EAF3: mov     rcx, gs:188h
 * 000000014015EAFC: ldmxcsr dword ptr [rbp-54h]
 * 000000014015EB00: cmp     word ptr [rbp+80h], 0
 * 000000014015EB08: jz      short loc_14015EB0F
 * 000000014015EB0A: call    KiRestoreDebugRegisterState
 * 000000014015EB0F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015EB13: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015EB17: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015EB1B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015EB1F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015EB23: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015EB27: mov     r11, [rbp-20h]
 * 000000014015EB2B: mov     r10, [rbp-28h]
 * 000000014015EB2F: mov     r9, [rbp-30h]
 * 000000014015EB33: mov     r8, [rbp-38h]
 * 000000014015EB37: movzx   eax, word ptr gs:2EC2h
 * 000000014015EB40: cmp     gs:2EBCh, ax
 * 000000014015EB49: jz      short loc_14015EB5D
 * 000000014015EB4B: mov     gs:2EBCh, ax
 * 000000014015EB54: mov     ecx, 48h ; 'H'
 * 000000014015EB59: xor     edx, edx
 * 000000014015EB5B: wrmsr
 * 000000014015EB5D: btr     word ptr gs:2EB8h, 2
 * 000000014015EB68: jnb     short loc_14015EB78
 * 000000014015EB6A: mov     eax, 1
 * 000000014015EB6F: xor     edx, edx
 * 000000014015EB71: mov     ecx, 49h ; 'I'
 * 000000014015EB76: wrmsr
 * 000000014015EB78: btr     word ptr gs:2EB8h, 5
 * 000000014015EB83: jnb     loc_14015ECAE
 * 000000014015EB89: call    loc_14015EC9C
 * 000000014015EB8E: add     rsp, 8
 * 000000014015EB92: call    loc_14015ECA5
 * 000000014015EB97: add     rsp, 8
 * 000000014015EB9B: call    loc_14015EB8E
 * 000000014015EBA0: add     rsp, 8
 * 000000014015EBA4: call    loc_14015EB97
 * 000000014015EBA9: add     rsp, 8
 * 000000014015EBAD: call    loc_14015EBA0
 * 000000014015EBB2: add     rsp, 8
 * 000000014015EBB6: call    loc_14015EBA9
 * 000000014015EBBB: add     rsp, 8
 * 000000014015EBBF: call    loc_14015EBB2
 * 000000014015EBC4: add     rsp, 8
 * 000000014015EBC8: call    loc_14015EBBB
 * 000000014015EBCD: add     rsp, 8
 * 000000014015EBD1: call    loc_14015EBC4
 * 000000014015EBD6: add     rsp, 8
 * 000000014015EBDA: call    loc_14015EBCD
 * 000000014015EBDF: add     rsp, 8
 * 000000014015EBE3: call    loc_14015EBD6
 * 000000014015EBE8: add     rsp, 8
 * 000000014015EBEC: call    loc_14015EBDF
 * 000000014015EBF1: add     rsp, 8
 * 000000014015EBF5: call    loc_14015EBE8
 * 000000014015EBFA: add     rsp, 8
 * 000000014015EBFE: call    loc_14015EBF1
 * 000000014015EC03: add     rsp, 8
 * 000000014015EC07: call    loc_14015EBFA
 * 000000014015EC0C: add     rsp, 8
 * 000000014015EC10: call    loc_14015EC03
 * 000000014015EC15: add     rsp, 8
 * 000000014015EC19: call    loc_14015EC0C
 * 000000014015EC1E: add     rsp, 8
 * 000000014015EC22: call    loc_14015EC15
 * 000000014015EC27: add     rsp, 8
 * 000000014015EC2B: call    loc_14015EC1E
 * 000000014015EC30: add     rsp, 8
 * 000000014015EC34: call    loc_14015EC27
 * 000000014015EC39: add     rsp, 8
 * 000000014015EC3D: call    loc_14015EC30
 * 000000014015EC42: add     rsp, 8
 * 000000014015EC46: call    loc_14015EC39
 * 000000014015EC4B: add     rsp, 8
 * 000000014015EC4F: call    loc_14015EC42
 * 000000014015EC54: add     rsp, 8
 * 000000014015EC58: call    loc_14015EC4B
 * 000000014015EC5D: add     rsp, 8
 * 000000014015EC61: call    loc_14015EC54
 * 000000014015EC66: add     rsp, 8
 * 000000014015EC6A: call    loc_14015EC5D
 * 000000014015EC6F: add     rsp, 8
 * 000000014015EC73: call    loc_14015EC66
 * 000000014015EC78: add     rsp, 8
 * 000000014015EC7C: call    loc_14015EC6F
 * 000000014015EC81: add     rsp, 8
 * 000000014015EC85: call    loc_14015EC78
 * 000000014015EC8A: add     rsp, 8
 * 000000014015EC8E: call    loc_14015EC81
 * 000000014015EC93: add     rsp, 8
 * 000000014015EC97: call    loc_14015EC8A
 * 000000014015EC9C: add     rsp, 8
 * 000000014015ECA0: call    loc_14015EC93
 * 000000014015ECA5: add     rsp, 8
 * 000000014015ECA9: mov     eax, 0DADAh
 * 000000014015ECAE: test    word ptr gs:2EB8h, 40h
 * 000000014015ECB9: jz      short loc_14015ECC7
 * 000000014015ECBB: xor     eax, eax
 * 000000014015ECBD: xor     edx, edx
 * 000000014015ECBF: mov     ecx, 1
 * 000000014015ECC4: div     rcx
 * 000000014015ECC7: mov     rdx, [rbp-40h]
 * 000000014015ECCB: mov     rcx, [rbp-48h]
 * 000000014015ECCF: mov     rax, [rbp-50h]
 * 000000014015ECD3: mov     rsp, rbp
 * 000000014015ECD6: mov     rbp, [rbp+0D8h]
 * 000000014015ECDD: add     rsp, 0E8h
 * 000000014015ECE4: test    cs:KiKvaShadow, 1
 * 000000014015ECEB: jz      short loc_14015ECF2
 * 000000014015ECED: jmp     KiKernelExit
 * 000000014015ECF2: test    word ptr gs:2EB8h, 80h
 * 000000014015ECFD: jz      short loc_14015ED04
 * 000000014015ECFF: verw    [rsp-1C8h+arg_1E0]
 * 000000014015ED04: swapgs
 * 000000014015ED07: iretq
 * 000000014015ED09: ldmxcsr dword ptr [rbp-54h]
 * 000000014015ED0D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015ED11: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015ED15: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015ED19: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015ED1D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015ED21: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015ED25: mov     r11, [rbp-20h]
 * 000000014015ED29: mov     r10, [rbp-28h]
 * 000000014015ED2D: mov     r9, [rbp-30h]
 * 000000014015ED31: mov     r8, [rbp-38h]
 * 000000014015ED35: mov     rdx, [rbp-40h]
 * 000000014015ED39: mov     rcx, [rbp-48h]
 * 000000014015ED3D: mov     rax, [rbp-50h]
 * 000000014015ED41: mov     rsp, rbp
 * 000000014015ED44: mov     rbp, [rbp+0D8h]
 * 000000014015ED4B: add     rsp, 0E8h
 * 000000014015ED52: iretq
 */
