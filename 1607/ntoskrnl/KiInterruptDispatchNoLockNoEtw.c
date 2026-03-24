/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x14015F9F0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140159180 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x14015F190 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x14015F9F0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165590 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x14015F9F0
 * Reason: Hex-Rays returned no pseudocode for 0x14015F9F0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015F9F0: mov     rdx, rsp
 * 000000014015F9F3: mov     rcx, gs:6498h
 * 000000014015F9FC: lea     rax, [rcx-6000h]
 * 000000014015FA03: cmp     rax, rsp
 * 000000014015FA06: ja      short loc_14015FA0D
 * 000000014015FA08: cmp     rsp, rcx
 * 000000014015FA0B: jb      short loc_14015FA19
 * 000000014015FA0D: cmp     cs:KiBugCheckActive, 0
 * 000000014015FA14: jnz     short loc_14015FA19
 * 000000014015FA16: mov     rsp, rcx
 * 000000014015FA19: sub     rsp, 20h
 * 000000014015FA1D: mov     [rsp+20h+var_10], rdx
 * 000000014015FA22: call    KiInterruptSubDispatchNoLockNoEtw
 * 000000014015FA27: mov     rsp, [rsp+20h+var_10]
 * 000000014015FA2C: mov     rcx, rsi
 * 000000014015FA2F: call    HalPerformEndOfInterrupt_0
 * 000000014015FA34: mov     rcx, gs:20h
 * 000000014015FA3D: cmp     byte ptr [rcx+20h], 1
 * 000000014015FA41: ja      short loc_14015FAB7
 * 000000014015FA43: rdtsc
 * 000000014015FA45: shl     rdx, 20h
 * 000000014015FA49: or      rax, rdx
 * 000000014015FA4C: sub     rax, [rcx+5B38h]
 * 000000014015FA53: add     [rcx+5BF8h], rax
 * 000000014015FA5A: add     [rcx+5B38h], rax
 * 000000014015FA61: mov     r8, rax
 * 000000014015FA64: mov     rax, [rcx+8]
 * 000000014015FA68: test    byte ptr [rax+2], 32h
 * 000000014015FA6C: jz      short loc_14015FA81
 * 000000014015FA6E: xor     edx, edx
 * 000000014015FA70: call    KiBeginThreadAccountingPeriod
 * 000000014015FA75: mov     rcx, gs:20h
 * 000000014015FA7E: inc     byte ptr [rcx+20h]
 * 000000014015FA81: mov     dl, [rcx+6]
 * 000000014015FA84: and     byte ptr [rcx+6], 0
 * 000000014015FA88: cmp     byte ptr [rcx+7], 0
 * 000000014015FA8C: jnz     short loc_14015FAB7
 * 000000014015FA8E: test    dl, dl
 * 000000014015FA90: jz      short loc_14015FAB7
 * 000000014015FA92: cmp     byte ptr [rbp-57h], 2
 * 000000014015FA96: jnb     short loc_14015FAA3
 * 000000014015FA98: and     byte ptr [rcx+20h], 0
 * 000000014015FA9C: call    KiDpcInterruptBypass
 * 000000014015FAA1: jmp     short loc_14015FABA
 * 000000014015FAA3: mov     ecx, 2
 * 000000014015FAA8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014015FAAE: mov     rcx, gs:20h
 * 000000014015FAB7: dec     byte ptr [rcx+20h]
 * 000000014015FABA: movzx   ecx, byte ptr [rbp-57h]
 * 000000014015FABE: mov     cr8, rcx
 * 000000014015FAC2: mov     rsi, [rbp+0D0h]
 * 000000014015FAC9: test    byte ptr [rbp+0F0h], 1
 * 000000014015FAD0: jz      loc_14015FD49
 * 000000014015FAD6: mov     rcx, gs:188h
 * 000000014015FADF: cmp     byte ptr [rcx+0C2h], 0
 * 000000014015FAE6: jz      short loc_14015FB01
 * 000000014015FAE8: mov     ecx, 1
 * 000000014015FAED: mov     cr8, rcx
 * 000000014015FAF1: sti
 * 000000014015FAF2: call    KiInitiateUserApc
 * 000000014015FAF7: cli
 * 000000014015FAF8: mov     ecx, 0
 * 000000014015FAFD: mov     cr8, rcx
 * 000000014015FB01: mov     rcx, gs:188h
 * 000000014015FB0A: test    dword ptr [rcx], 8000000h
 * 000000014015FB10: jz      short loc_14015FB17
 * 000000014015FB12: call    KiRestoreSetContextState
 * 000000014015FB17: mov     rcx, gs:188h
 * 000000014015FB20: test    dword ptr [rcx], 40010000h
 * 000000014015FB26: jz      short loc_14015FB3C
 * 000000014015FB28: test    byte ptr [rcx+2], 1
 * 000000014015FB2C: jz      short loc_14015FB3C
 * 000000014015FB2E: call    KiCopyCounters
 * 000000014015FB33: mov     rcx, gs:188h
 * 000000014015FB3C: ldmxcsr dword ptr [rbp-54h]
 * 000000014015FB40: cmp     word ptr [rbp+80h], 0
 * 000000014015FB48: jz      short loc_14015FB4F
 * 000000014015FB4A: call    KiRestoreDebugRegisterState
 * 000000014015FB4F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015FB53: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015FB57: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015FB5B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015FB5F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015FB63: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015FB67: mov     r11, [rbp-20h]
 * 000000014015FB6B: mov     r10, [rbp-28h]
 * 000000014015FB6F: mov     r9, [rbp-30h]
 * 000000014015FB73: mov     r8, [rbp-38h]
 * 000000014015FB77: movzx   eax, word ptr gs:2EC2h
 * 000000014015FB80: cmp     gs:2EBCh, ax
 * 000000014015FB89: jz      short loc_14015FB9D
 * 000000014015FB8B: mov     gs:2EBCh, ax
 * 000000014015FB94: mov     ecx, 48h ; 'H'
 * 000000014015FB99: xor     edx, edx
 * 000000014015FB9B: wrmsr
 * 000000014015FB9D: btr     word ptr gs:2EB8h, 2
 * 000000014015FBA8: jnb     short loc_14015FBB8
 * 000000014015FBAA: mov     eax, 1
 * 000000014015FBAF: xor     edx, edx
 * 000000014015FBB1: mov     ecx, 49h ; 'I'
 * 000000014015FBB6: wrmsr
 * 000000014015FBB8: btr     word ptr gs:2EB8h, 5
 * 000000014015FBC3: jnb     loc_14015FCEE
 * 000000014015FBC9: call    loc_14015FCDC
 * 000000014015FBCE: add     rsp, 8
 * 000000014015FBD2: call    loc_14015FCE5
 * 000000014015FBD7: add     rsp, 8
 * 000000014015FBDB: call    loc_14015FBCE
 * 000000014015FBE0: add     rsp, 8
 * 000000014015FBE4: call    loc_14015FBD7
 * 000000014015FBE9: add     rsp, 8
 * 000000014015FBED: call    loc_14015FBE0
 * 000000014015FBF2: add     rsp, 8
 * 000000014015FBF6: call    loc_14015FBE9
 * 000000014015FBFB: add     rsp, 8
 * 000000014015FBFF: call    loc_14015FBF2
 * 000000014015FC04: add     rsp, 8
 * 000000014015FC08: call    loc_14015FBFB
 * 000000014015FC0D: add     rsp, 8
 * 000000014015FC11: call    loc_14015FC04
 * 000000014015FC16: add     rsp, 8
 * 000000014015FC1A: call    loc_14015FC0D
 * 000000014015FC1F: add     rsp, 8
 * 000000014015FC23: call    loc_14015FC16
 * 000000014015FC28: add     rsp, 8
 * 000000014015FC2C: call    loc_14015FC1F
 * 000000014015FC31: add     rsp, 8
 * 000000014015FC35: call    loc_14015FC28
 * 000000014015FC3A: add     rsp, 8
 * 000000014015FC3E: call    loc_14015FC31
 * 000000014015FC43: add     rsp, 8
 * 000000014015FC47: call    loc_14015FC3A
 * 000000014015FC4C: add     rsp, 8
 * 000000014015FC50: call    loc_14015FC43
 * 000000014015FC55: add     rsp, 8
 * 000000014015FC59: call    loc_14015FC4C
 * 000000014015FC5E: add     rsp, 8
 * 000000014015FC62: call    loc_14015FC55
 * 000000014015FC67: add     rsp, 8
 * 000000014015FC6B: call    loc_14015FC5E
 * 000000014015FC70: add     rsp, 8
 * 000000014015FC74: call    loc_14015FC67
 * 000000014015FC79: add     rsp, 8
 * 000000014015FC7D: call    loc_14015FC70
 * 000000014015FC82: add     rsp, 8
 * 000000014015FC86: call    loc_14015FC79
 * 000000014015FC8B: add     rsp, 8
 * 000000014015FC8F: call    loc_14015FC82
 * 000000014015FC94: add     rsp, 8
 * 000000014015FC98: call    loc_14015FC8B
 * 000000014015FC9D: add     rsp, 8
 * 000000014015FCA1: call    loc_14015FC94
 * 000000014015FCA6: add     rsp, 8
 * 000000014015FCAA: call    loc_14015FC9D
 * 000000014015FCAF: add     rsp, 8
 * 000000014015FCB3: call    loc_14015FCA6
 * 000000014015FCB8: add     rsp, 8
 * 000000014015FCBC: call    loc_14015FCAF
 * 000000014015FCC1: add     rsp, 8
 * 000000014015FCC5: call    loc_14015FCB8
 * 000000014015FCCA: add     rsp, 8
 * 000000014015FCCE: call    loc_14015FCC1
 * 000000014015FCD3: add     rsp, 8
 * 000000014015FCD7: call    loc_14015FCCA
 * 000000014015FCDC: add     rsp, 8
 * 000000014015FCE0: call    loc_14015FCD3
 * 000000014015FCE5: add     rsp, 8
 * 000000014015FCE9: mov     eax, 0DADAh
 * 000000014015FCEE: test    word ptr gs:2EB8h, 40h
 * 000000014015FCF9: jz      short loc_14015FD07
 * 000000014015FCFB: xor     eax, eax
 * 000000014015FCFD: xor     edx, edx
 * 000000014015FCFF: mov     ecx, 1
 * 000000014015FD04: div     rcx
 * 000000014015FD07: mov     rdx, [rbp-40h]
 * 000000014015FD0B: mov     rcx, [rbp-48h]
 * 000000014015FD0F: mov     rax, [rbp-50h]
 * 000000014015FD13: mov     rsp, rbp
 * 000000014015FD16: mov     rbp, [rbp+0D8h]
 * 000000014015FD1D: add     rsp, 0E8h
 * 000000014015FD24: test    cs:KiKvaShadow, 1
 * 000000014015FD2B: jz      short loc_14015FD32
 * 000000014015FD2D: jmp     KiKernelExit
 * 000000014015FD32: test    word ptr gs:2EB8h, 80h
 * 000000014015FD3D: jz      short loc_14015FD44
 * 000000014015FD3F: verw    [rsp-1C8h+arg_1E0]
 * 000000014015FD44: swapgs
 * 000000014015FD47: iretq
 * 000000014015FD49: ldmxcsr dword ptr [rbp-54h]
 * 000000014015FD4D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015FD51: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015FD55: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015FD59: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015FD5D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015FD61: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015FD65: mov     r11, [rbp-20h]
 * 000000014015FD69: mov     r10, [rbp-28h]
 * 000000014015FD6D: mov     r9, [rbp-30h]
 * 000000014015FD71: mov     r8, [rbp-38h]
 * 000000014015FD75: mov     rdx, [rbp-40h]
 * 000000014015FD79: mov     rcx, [rbp-48h]
 * 000000014015FD7D: mov     rax, [rbp-50h]
 * 000000014015FD81: mov     rsp, rbp
 * 000000014015FD84: mov     rbp, [rbp+0D8h]
 * 000000014015FD8B: add     rsp, 0E8h
 * 000000014015FD92: iretq
 */
