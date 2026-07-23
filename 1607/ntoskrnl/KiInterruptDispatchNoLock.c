/*
 * XREFs of KiInterruptDispatchNoLock @ 0x14015FBB0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401596F0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x14015F5D0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x14015FBB0 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165B00 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x14015FBB0
 * Reason: Hex-Rays returned no pseudocode for 0x14015FBB0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015FBB0: mov     rdx, rsp
 * 000000014015FBB3: mov     rcx, gs:6498h
 * 000000014015FBBC: lea     rax, [rcx-6000h]
 * 000000014015FBC3: cmp     rax, rsp
 * 000000014015FBC6: ja      short loc_14015FBCD
 * 000000014015FBC8: cmp     rsp, rcx
 * 000000014015FBCB: jb      short loc_14015FBD9
 * 000000014015FBCD: cmp     cs:KiBugCheckActive, 0
 * 000000014015FBD4: jnz     short loc_14015FBD9
 * 000000014015FBD6: mov     rsp, rcx
 * 000000014015FBD9: sub     rsp, 20h
 * 000000014015FBDD: mov     [rsp+20h+var_10], rdx
 * 000000014015FBE2: call    KiInterruptSubDispatchNoLock
 * 000000014015FBE7: mov     rsp, [rsp+20h+var_10]
 * 000000014015FBEC: mov     rcx, rsi
 * 000000014015FBEF: call    HalPerformEndOfInterrupt_0
 * 000000014015FBF4: mov     rcx, gs:20h
 * 000000014015FBFD: cmp     byte ptr [rcx+20h], 1
 * 000000014015FC01: ja      short loc_14015FC77
 * 000000014015FC03: rdtsc
 * 000000014015FC05: shl     rdx, 20h
 * 000000014015FC09: or      rax, rdx
 * 000000014015FC0C: sub     rax, [rcx+5B38h]
 * 000000014015FC13: add     [rcx+5BF8h], rax
 * 000000014015FC1A: add     [rcx+5B38h], rax
 * 000000014015FC21: mov     r8, rax
 * 000000014015FC24: mov     rax, [rcx+8]
 * 000000014015FC28: test    byte ptr [rax+2], 32h
 * 000000014015FC2C: jz      short loc_14015FC41
 * 000000014015FC2E: xor     edx, edx
 * 000000014015FC30: call    KiBeginThreadAccountingPeriod
 * 000000014015FC35: mov     rcx, gs:20h
 * 000000014015FC3E: inc     byte ptr [rcx+20h]
 * 000000014015FC41: mov     dl, [rcx+6]
 * 000000014015FC44: and     byte ptr [rcx+6], 0
 * 000000014015FC48: cmp     byte ptr [rcx+7], 0
 * 000000014015FC4C: jnz     short loc_14015FC77
 * 000000014015FC4E: test    dl, dl
 * 000000014015FC50: jz      short loc_14015FC77
 * 000000014015FC52: cmp     byte ptr [rbp-57h], 2
 * 000000014015FC56: jnb     short loc_14015FC63
 * 000000014015FC58: and     byte ptr [rcx+20h], 0
 * 000000014015FC5C: call    KiDpcInterruptBypass
 * 000000014015FC61: jmp     short loc_14015FC7A
 * 000000014015FC63: mov     ecx, 2
 * 000000014015FC68: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014015FC6E: mov     rcx, gs:20h
 * 000000014015FC77: dec     byte ptr [rcx+20h]
 * 000000014015FC7A: movzx   ecx, byte ptr [rbp-57h]
 * 000000014015FC7E: mov     cr8, rcx
 * 000000014015FC82: mov     rsi, [rbp+0D0h]
 * 000000014015FC89: test    byte ptr [rbp+0F0h], 1
 * 000000014015FC90: jz      loc_14015FF09
 * 000000014015FC96: mov     rcx, gs:188h
 * 000000014015FC9F: cmp     byte ptr [rcx+0C2h], 0
 * 000000014015FCA6: jz      short loc_14015FCC1
 * 000000014015FCA8: mov     ecx, 1
 * 000000014015FCAD: mov     cr8, rcx
 * 000000014015FCB1: sti
 * 000000014015FCB2: call    KiInitiateUserApc
 * 000000014015FCB7: cli
 * 000000014015FCB8: mov     ecx, 0
 * 000000014015FCBD: mov     cr8, rcx
 * 000000014015FCC1: mov     rcx, gs:188h
 * 000000014015FCCA: test    dword ptr [rcx], 8000000h
 * 000000014015FCD0: jz      short loc_14015FCD7
 * 000000014015FCD2: call    KiRestoreSetContextState
 * 000000014015FCD7: mov     rcx, gs:188h
 * 000000014015FCE0: test    dword ptr [rcx], 40010000h
 * 000000014015FCE6: jz      short loc_14015FCFC
 * 000000014015FCE8: test    byte ptr [rcx+2], 1
 * 000000014015FCEC: jz      short loc_14015FCFC
 * 000000014015FCEE: call    KiCopyCounters
 * 000000014015FCF3: mov     rcx, gs:188h
 * 000000014015FCFC: ldmxcsr dword ptr [rbp-54h]
 * 000000014015FD00: cmp     word ptr [rbp+80h], 0
 * 000000014015FD08: jz      short loc_14015FD0F
 * 000000014015FD0A: call    KiRestoreDebugRegisterState
 * 000000014015FD0F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015FD13: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015FD17: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015FD1B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015FD1F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015FD23: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015FD27: mov     r11, [rbp-20h]
 * 000000014015FD2B: mov     r10, [rbp-28h]
 * 000000014015FD2F: mov     r9, [rbp-30h]
 * 000000014015FD33: mov     r8, [rbp-38h]
 * 000000014015FD37: movzx   eax, word ptr gs:2EC2h
 * 000000014015FD40: cmp     gs:2EBCh, ax
 * 000000014015FD49: jz      short loc_14015FD5D
 * 000000014015FD4B: mov     gs:2EBCh, ax
 * 000000014015FD54: mov     ecx, 48h ; 'H'
 * 000000014015FD59: xor     edx, edx
 * 000000014015FD5B: wrmsr
 * 000000014015FD5D: btr     word ptr gs:2EB8h, 2
 * 000000014015FD68: jnb     short loc_14015FD78
 * 000000014015FD6A: mov     eax, 1
 * 000000014015FD6F: xor     edx, edx
 * 000000014015FD71: mov     ecx, 49h ; 'I'
 * 000000014015FD76: wrmsr
 * 000000014015FD78: btr     word ptr gs:2EB8h, 5
 * 000000014015FD83: jnb     loc_14015FEAE
 * 000000014015FD89: call    loc_14015FE9C
 * 000000014015FD8E: add     rsp, 8
 * 000000014015FD92: call    loc_14015FEA5
 * 000000014015FD97: add     rsp, 8
 * 000000014015FD9B: call    loc_14015FD8E
 * 000000014015FDA0: add     rsp, 8
 * 000000014015FDA4: call    loc_14015FD97
 * 000000014015FDA9: add     rsp, 8
 * 000000014015FDAD: call    loc_14015FDA0
 * 000000014015FDB2: add     rsp, 8
 * 000000014015FDB6: call    loc_14015FDA9
 * 000000014015FDBB: add     rsp, 8
 * 000000014015FDBF: call    loc_14015FDB2
 * 000000014015FDC4: add     rsp, 8
 * 000000014015FDC8: call    loc_14015FDBB
 * 000000014015FDCD: add     rsp, 8
 * 000000014015FDD1: call    loc_14015FDC4
 * 000000014015FDD6: add     rsp, 8
 * 000000014015FDDA: call    loc_14015FDCD
 * 000000014015FDDF: add     rsp, 8
 * 000000014015FDE3: call    loc_14015FDD6
 * 000000014015FDE8: add     rsp, 8
 * 000000014015FDEC: call    loc_14015FDDF
 * 000000014015FDF1: add     rsp, 8
 * 000000014015FDF5: call    loc_14015FDE8
 * 000000014015FDFA: add     rsp, 8
 * 000000014015FDFE: call    loc_14015FDF1
 * 000000014015FE03: add     rsp, 8
 * 000000014015FE07: call    loc_14015FDFA
 * 000000014015FE0C: add     rsp, 8
 * 000000014015FE10: call    loc_14015FE03
 * 000000014015FE15: add     rsp, 8
 * 000000014015FE19: call    loc_14015FE0C
 * 000000014015FE1E: add     rsp, 8
 * 000000014015FE22: call    loc_14015FE15
 * 000000014015FE27: add     rsp, 8
 * 000000014015FE2B: call    loc_14015FE1E
 * 000000014015FE30: add     rsp, 8
 * 000000014015FE34: call    loc_14015FE27
 * 000000014015FE39: add     rsp, 8
 * 000000014015FE3D: call    loc_14015FE30
 * 000000014015FE42: add     rsp, 8
 * 000000014015FE46: call    loc_14015FE39
 * 000000014015FE4B: add     rsp, 8
 * 000000014015FE4F: call    loc_14015FE42
 * 000000014015FE54: add     rsp, 8
 * 000000014015FE58: call    loc_14015FE4B
 * 000000014015FE5D: add     rsp, 8
 * 000000014015FE61: call    loc_14015FE54
 * 000000014015FE66: add     rsp, 8
 * 000000014015FE6A: call    loc_14015FE5D
 * 000000014015FE6F: add     rsp, 8
 * 000000014015FE73: call    loc_14015FE66
 * 000000014015FE78: add     rsp, 8
 * 000000014015FE7C: call    loc_14015FE6F
 * 000000014015FE81: add     rsp, 8
 * 000000014015FE85: call    loc_14015FE78
 * 000000014015FE8A: add     rsp, 8
 * 000000014015FE8E: call    loc_14015FE81
 * 000000014015FE93: add     rsp, 8
 * 000000014015FE97: call    loc_14015FE8A
 * 000000014015FE9C: add     rsp, 8
 * 000000014015FEA0: call    loc_14015FE93
 * 000000014015FEA5: add     rsp, 8
 * 000000014015FEA9: mov     eax, 0DADAh
 * 000000014015FEAE: test    word ptr gs:2EB8h, 40h
 * 000000014015FEB9: jz      short loc_14015FEC7
 * 000000014015FEBB: xor     eax, eax
 * 000000014015FEBD: xor     edx, edx
 * 000000014015FEBF: mov     ecx, 1
 * 000000014015FEC4: div     rcx
 * 000000014015FEC7: mov     rdx, [rbp-40h]
 * 000000014015FECB: mov     rcx, [rbp-48h]
 * 000000014015FECF: mov     rax, [rbp-50h]
 * 000000014015FED3: mov     rsp, rbp
 * 000000014015FED6: mov     rbp, [rbp+0D8h]
 * 000000014015FEDD: add     rsp, 0E8h
 * 000000014015FEE4: test    cs:KiKvaShadow, 1
 * 000000014015FEEB: jz      short loc_14015FEF2
 * 000000014015FEED: jmp     KiKernelExit
 * 000000014015FEF2: test    word ptr gs:2EB8h, 80h
 * 000000014015FEFD: jz      short loc_14015FF04
 * 000000014015FEFF: verw    [rsp-1C8h+arg_1E0]
 * 000000014015FF04: swapgs
 * 000000014015FF07: iretq
 * 000000014015FF09: ldmxcsr dword ptr [rbp-54h]
 * 000000014015FF0D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015FF11: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015FF15: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015FF19: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015FF1D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015FF21: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015FF25: mov     r11, [rbp-20h]
 * 000000014015FF29: mov     r10, [rbp-28h]
 * 000000014015FF2D: mov     r9, [rbp-30h]
 * 000000014015FF31: mov     r8, [rbp-38h]
 * 000000014015FF35: mov     rdx, [rbp-40h]
 * 000000014015FF39: mov     rcx, [rbp-48h]
 * 000000014015FF3D: mov     rax, [rbp-50h]
 * 000000014015FF41: mov     rsp, rbp
 * 000000014015FF44: mov     rbp, [rbp+0D8h]
 * 000000014015FF4B: add     rsp, 0E8h
 * 000000014015FF52: iretq
 */
