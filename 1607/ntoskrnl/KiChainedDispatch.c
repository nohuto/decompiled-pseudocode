/*
 * XREFs of KiChainedDispatch @ 0x14015EF20
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401596F0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x14015EF20 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x14015F2D0 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165B00 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x14015EF20
 * Reason: Hex-Rays returned no pseudocode for 0x14015EF20
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015EF20: mov     rdx, rsp
 * 000000014015EF23: mov     rcx, gs:6498h
 * 000000014015EF2C: lea     rax, [rcx-6000h]
 * 000000014015EF33: cmp     rax, rsp
 * 000000014015EF36: ja      short loc_14015EF3D
 * 000000014015EF38: cmp     rsp, rcx
 * 000000014015EF3B: jb      short loc_14015EF49
 * 000000014015EF3D: cmp     cs:KiBugCheckActive, 0
 * 000000014015EF44: jnz     short loc_14015EF49
 * 000000014015EF46: mov     rsp, rcx
 * 000000014015EF49: sub     rsp, 20h
 * 000000014015EF4D: mov     [rsp+20h+var_10], rdx
 * 000000014015EF52: call    KiScanInterruptObjectList
 * 000000014015EF57: mov     rsp, [rsp+20h+var_10]
 * 000000014015EF5C: mov     rcx, rsi
 * 000000014015EF5F: call    HalPerformEndOfInterrupt_0
 * 000000014015EF64: mov     rcx, gs:20h
 * 000000014015EF6D: cmp     byte ptr [rcx+20h], 1
 * 000000014015EF71: ja      short loc_14015EFE7
 * 000000014015EF73: rdtsc
 * 000000014015EF75: shl     rdx, 20h
 * 000000014015EF79: or      rax, rdx
 * 000000014015EF7C: sub     rax, [rcx+5B38h]
 * 000000014015EF83: add     [rcx+5BF8h], rax
 * 000000014015EF8A: add     [rcx+5B38h], rax
 * 000000014015EF91: mov     r8, rax
 * 000000014015EF94: mov     rax, [rcx+8]
 * 000000014015EF98: test    byte ptr [rax+2], 32h
 * 000000014015EF9C: jz      short loc_14015EFB1
 * 000000014015EF9E: xor     edx, edx
 * 000000014015EFA0: call    KiBeginThreadAccountingPeriod
 * 000000014015EFA5: mov     rcx, gs:20h
 * 000000014015EFAE: inc     byte ptr [rcx+20h]
 * 000000014015EFB1: mov     dl, [rcx+6]
 * 000000014015EFB4: and     byte ptr [rcx+6], 0
 * 000000014015EFB8: cmp     byte ptr [rcx+7], 0
 * 000000014015EFBC: jnz     short loc_14015EFE7
 * 000000014015EFBE: test    dl, dl
 * 000000014015EFC0: jz      short loc_14015EFE7
 * 000000014015EFC2: cmp     byte ptr [rbp-57h], 2
 * 000000014015EFC6: jnb     short loc_14015EFD3
 * 000000014015EFC8: and     byte ptr [rcx+20h], 0
 * 000000014015EFCC: call    KiDpcInterruptBypass
 * 000000014015EFD1: jmp     short loc_14015EFEA
 * 000000014015EFD3: mov     ecx, 2
 * 000000014015EFD8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014015EFDE: mov     rcx, gs:20h
 * 000000014015EFE7: dec     byte ptr [rcx+20h]
 * 000000014015EFEA: movzx   ecx, byte ptr [rbp-57h]
 * 000000014015EFEE: mov     cr8, rcx
 * 000000014015EFF2: mov     rsi, [rbp+0D0h]
 * 000000014015EFF9: test    byte ptr [rbp+0F0h], 1
 * 000000014015F000: jz      loc_14015F279
 * 000000014015F006: mov     rcx, gs:188h
 * 000000014015F00F: cmp     byte ptr [rcx+0C2h], 0
 * 000000014015F016: jz      short loc_14015F031
 * 000000014015F018: mov     ecx, 1
 * 000000014015F01D: mov     cr8, rcx
 * 000000014015F021: sti
 * 000000014015F022: call    KiInitiateUserApc
 * 000000014015F027: cli
 * 000000014015F028: mov     ecx, 0
 * 000000014015F02D: mov     cr8, rcx
 * 000000014015F031: mov     rcx, gs:188h
 * 000000014015F03A: test    dword ptr [rcx], 8000000h
 * 000000014015F040: jz      short loc_14015F047
 * 000000014015F042: call    KiRestoreSetContextState
 * 000000014015F047: mov     rcx, gs:188h
 * 000000014015F050: test    dword ptr [rcx], 40010000h
 * 000000014015F056: jz      short loc_14015F06C
 * 000000014015F058: test    byte ptr [rcx+2], 1
 * 000000014015F05C: jz      short loc_14015F06C
 * 000000014015F05E: call    KiCopyCounters
 * 000000014015F063: mov     rcx, gs:188h
 * 000000014015F06C: ldmxcsr dword ptr [rbp-54h]
 * 000000014015F070: cmp     word ptr [rbp+80h], 0
 * 000000014015F078: jz      short loc_14015F07F
 * 000000014015F07A: call    KiRestoreDebugRegisterState
 * 000000014015F07F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015F083: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015F087: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015F08B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015F08F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015F093: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015F097: mov     r11, [rbp-20h]
 * 000000014015F09B: mov     r10, [rbp-28h]
 * 000000014015F09F: mov     r9, [rbp-30h]
 * 000000014015F0A3: mov     r8, [rbp-38h]
 * 000000014015F0A7: movzx   eax, word ptr gs:2EC2h
 * 000000014015F0B0: cmp     gs:2EBCh, ax
 * 000000014015F0B9: jz      short loc_14015F0CD
 * 000000014015F0BB: mov     gs:2EBCh, ax
 * 000000014015F0C4: mov     ecx, 48h ; 'H'
 * 000000014015F0C9: xor     edx, edx
 * 000000014015F0CB: wrmsr
 * 000000014015F0CD: btr     word ptr gs:2EB8h, 2
 * 000000014015F0D8: jnb     short loc_14015F0E8
 * 000000014015F0DA: mov     eax, 1
 * 000000014015F0DF: xor     edx, edx
 * 000000014015F0E1: mov     ecx, 49h ; 'I'
 * 000000014015F0E6: wrmsr
 * 000000014015F0E8: btr     word ptr gs:2EB8h, 5
 * 000000014015F0F3: jnb     loc_14015F21E
 * 000000014015F0F9: call    loc_14015F20C
 * 000000014015F0FE: add     rsp, 8
 * 000000014015F102: call    loc_14015F215
 * 000000014015F107: add     rsp, 8
 * 000000014015F10B: call    loc_14015F0FE
 * 000000014015F110: add     rsp, 8
 * 000000014015F114: call    loc_14015F107
 * 000000014015F119: add     rsp, 8
 * 000000014015F11D: call    loc_14015F110
 * 000000014015F122: add     rsp, 8
 * 000000014015F126: call    loc_14015F119
 * 000000014015F12B: add     rsp, 8
 * 000000014015F12F: call    loc_14015F122
 * 000000014015F134: add     rsp, 8
 * 000000014015F138: call    loc_14015F12B
 * 000000014015F13D: add     rsp, 8
 * 000000014015F141: call    loc_14015F134
 * 000000014015F146: add     rsp, 8
 * 000000014015F14A: call    loc_14015F13D
 * 000000014015F14F: add     rsp, 8
 * 000000014015F153: call    loc_14015F146
 * 000000014015F158: add     rsp, 8
 * 000000014015F15C: call    loc_14015F14F
 * 000000014015F161: add     rsp, 8
 * 000000014015F165: call    loc_14015F158
 * 000000014015F16A: add     rsp, 8
 * 000000014015F16E: call    loc_14015F161
 * 000000014015F173: add     rsp, 8
 * 000000014015F177: call    loc_14015F16A
 * 000000014015F17C: add     rsp, 8
 * 000000014015F180: call    loc_14015F173
 * 000000014015F185: add     rsp, 8
 * 000000014015F189: call    loc_14015F17C
 * 000000014015F18E: add     rsp, 8
 * 000000014015F192: call    loc_14015F185
 * 000000014015F197: add     rsp, 8
 * 000000014015F19B: call    loc_14015F18E
 * 000000014015F1A0: add     rsp, 8
 * 000000014015F1A4: call    loc_14015F197
 * 000000014015F1A9: add     rsp, 8
 * 000000014015F1AD: call    loc_14015F1A0
 * 000000014015F1B2: add     rsp, 8
 * 000000014015F1B6: call    loc_14015F1A9
 * 000000014015F1BB: add     rsp, 8
 * 000000014015F1BF: call    loc_14015F1B2
 * 000000014015F1C4: add     rsp, 8
 * 000000014015F1C8: call    loc_14015F1BB
 * 000000014015F1CD: add     rsp, 8
 * 000000014015F1D1: call    loc_14015F1C4
 * 000000014015F1D6: add     rsp, 8
 * 000000014015F1DA: call    loc_14015F1CD
 * 000000014015F1DF: add     rsp, 8
 * 000000014015F1E3: call    loc_14015F1D6
 * 000000014015F1E8: add     rsp, 8
 * 000000014015F1EC: call    loc_14015F1DF
 * 000000014015F1F1: add     rsp, 8
 * 000000014015F1F5: call    loc_14015F1E8
 * 000000014015F1FA: add     rsp, 8
 * 000000014015F1FE: call    loc_14015F1F1
 * 000000014015F203: add     rsp, 8
 * 000000014015F207: call    loc_14015F1FA
 * 000000014015F20C: add     rsp, 8
 * 000000014015F210: call    loc_14015F203
 * 000000014015F215: add     rsp, 8
 * 000000014015F219: mov     eax, 0DADAh
 * 000000014015F21E: test    word ptr gs:2EB8h, 40h
 * 000000014015F229: jz      short loc_14015F237
 * 000000014015F22B: xor     eax, eax
 * 000000014015F22D: xor     edx, edx
 * 000000014015F22F: mov     ecx, 1
 * 000000014015F234: div     rcx
 * 000000014015F237: mov     rdx, [rbp-40h]
 * 000000014015F23B: mov     rcx, [rbp-48h]
 * 000000014015F23F: mov     rax, [rbp-50h]
 * 000000014015F243: mov     rsp, rbp
 * 000000014015F246: mov     rbp, [rbp+0D8h]
 * 000000014015F24D: add     rsp, 0E8h
 * 000000014015F254: test    cs:KiKvaShadow, 1
 * 000000014015F25B: jz      short loc_14015F262
 * 000000014015F25D: jmp     KiKernelExit
 * 000000014015F262: test    word ptr gs:2EB8h, 80h
 * 000000014015F26D: jz      short loc_14015F274
 * 000000014015F26F: verw    [rsp-1C8h+arg_1E0]
 * 000000014015F274: swapgs
 * 000000014015F277: iretq
 * 000000014015F279: ldmxcsr dword ptr [rbp-54h]
 * 000000014015F27D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015F281: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015F285: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015F289: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015F28D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015F291: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015F295: mov     r11, [rbp-20h]
 * 000000014015F299: mov     r10, [rbp-28h]
 * 000000014015F29D: mov     r9, [rbp-30h]
 * 000000014015F2A1: mov     r8, [rbp-38h]
 * 000000014015F2A5: mov     rdx, [rbp-40h]
 * 000000014015F2A9: mov     rcx, [rbp-48h]
 * 000000014015F2AD: mov     rax, [rbp-50h]
 * 000000014015F2B1: mov     rsp, rbp
 * 000000014015F2B4: mov     rbp, [rbp+0D8h]
 * 000000014015F2BB: add     rsp, 0E8h
 * 000000014015F2C2: iretq
 */
