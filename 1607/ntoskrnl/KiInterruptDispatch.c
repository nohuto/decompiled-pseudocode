/*
 * XREFs of KiInterruptDispatch @ 0x14015F290
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140159180 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x14015EF30 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x14015F290 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165590 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x14015F290
 * Reason: Hex-Rays returned no pseudocode for 0x14015F290
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015F290: mov     rdx, rsp
 * 000000014015F293: mov     rcx, gs:6498h
 * 000000014015F29C: lea     rax, [rcx-6000h]
 * 000000014015F2A3: cmp     rax, rsp
 * 000000014015F2A6: ja      short loc_14015F2AD
 * 000000014015F2A8: cmp     rsp, rcx
 * 000000014015F2AB: jb      short loc_14015F2B9
 * 000000014015F2AD: cmp     cs:KiBugCheckActive, 0
 * 000000014015F2B4: jnz     short loc_14015F2B9
 * 000000014015F2B6: mov     rsp, rcx
 * 000000014015F2B9: sub     rsp, 20h
 * 000000014015F2BD: mov     [rsp+20h+var_10], rdx
 * 000000014015F2C2: call    KiInterruptSubDispatch
 * 000000014015F2C7: mov     rsp, [rsp+20h+var_10]
 * 000000014015F2CC: mov     rcx, rsi
 * 000000014015F2CF: call    HalPerformEndOfInterrupt_0
 * 000000014015F2D4: mov     rcx, gs:20h
 * 000000014015F2DD: cmp     byte ptr [rcx+20h], 1
 * 000000014015F2E1: ja      short loc_14015F357
 * 000000014015F2E3: rdtsc
 * 000000014015F2E5: shl     rdx, 20h
 * 000000014015F2E9: or      rax, rdx
 * 000000014015F2EC: sub     rax, [rcx+5B38h]
 * 000000014015F2F3: add     [rcx+5BF8h], rax
 * 000000014015F2FA: add     [rcx+5B38h], rax
 * 000000014015F301: mov     r8, rax
 * 000000014015F304: mov     rax, [rcx+8]
 * 000000014015F308: test    byte ptr [rax+2], 32h
 * 000000014015F30C: jz      short loc_14015F321
 * 000000014015F30E: xor     edx, edx
 * 000000014015F310: call    KiBeginThreadAccountingPeriod
 * 000000014015F315: mov     rcx, gs:20h
 * 000000014015F31E: inc     byte ptr [rcx+20h]
 * 000000014015F321: mov     dl, [rcx+6]
 * 000000014015F324: and     byte ptr [rcx+6], 0
 * 000000014015F328: cmp     byte ptr [rcx+7], 0
 * 000000014015F32C: jnz     short loc_14015F357
 * 000000014015F32E: test    dl, dl
 * 000000014015F330: jz      short loc_14015F357
 * 000000014015F332: cmp     byte ptr [rbp-57h], 2
 * 000000014015F336: jnb     short loc_14015F343
 * 000000014015F338: and     byte ptr [rcx+20h], 0
 * 000000014015F33C: call    KiDpcInterruptBypass
 * 000000014015F341: jmp     short loc_14015F35A
 * 000000014015F343: mov     ecx, 2
 * 000000014015F348: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014015F34E: mov     rcx, gs:20h
 * 000000014015F357: dec     byte ptr [rcx+20h]
 * 000000014015F35A: movzx   ecx, byte ptr [rbp-57h]
 * 000000014015F35E: mov     cr8, rcx
 * 000000014015F362: mov     rsi, [rbp+0D0h]
 * 000000014015F369: test    byte ptr [rbp+0F0h], 1
 * 000000014015F370: jz      loc_14015F5E9
 * 000000014015F376: mov     rcx, gs:188h
 * 000000014015F37F: cmp     byte ptr [rcx+0C2h], 0
 * 000000014015F386: jz      short loc_14015F3A1
 * 000000014015F388: mov     ecx, 1
 * 000000014015F38D: mov     cr8, rcx
 * 000000014015F391: sti
 * 000000014015F392: call    KiInitiateUserApc
 * 000000014015F397: cli
 * 000000014015F398: mov     ecx, 0
 * 000000014015F39D: mov     cr8, rcx
 * 000000014015F3A1: mov     rcx, gs:188h
 * 000000014015F3AA: test    dword ptr [rcx], 8000000h
 * 000000014015F3B0: jz      short loc_14015F3B7
 * 000000014015F3B2: call    KiRestoreSetContextState
 * 000000014015F3B7: mov     rcx, gs:188h
 * 000000014015F3C0: test    dword ptr [rcx], 40010000h
 * 000000014015F3C6: jz      short loc_14015F3DC
 * 000000014015F3C8: test    byte ptr [rcx+2], 1
 * 000000014015F3CC: jz      short loc_14015F3DC
 * 000000014015F3CE: call    KiCopyCounters
 * 000000014015F3D3: mov     rcx, gs:188h
 * 000000014015F3DC: ldmxcsr dword ptr [rbp-54h]
 * 000000014015F3E0: cmp     word ptr [rbp+80h], 0
 * 000000014015F3E8: jz      short loc_14015F3EF
 * 000000014015F3EA: call    KiRestoreDebugRegisterState
 * 000000014015F3EF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015F3F3: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015F3F7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015F3FB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015F3FF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015F403: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015F407: mov     r11, [rbp-20h]
 * 000000014015F40B: mov     r10, [rbp-28h]
 * 000000014015F40F: mov     r9, [rbp-30h]
 * 000000014015F413: mov     r8, [rbp-38h]
 * 000000014015F417: movzx   eax, word ptr gs:2EC2h
 * 000000014015F420: cmp     gs:2EBCh, ax
 * 000000014015F429: jz      short loc_14015F43D
 * 000000014015F42B: mov     gs:2EBCh, ax
 * 000000014015F434: mov     ecx, 48h ; 'H'
 * 000000014015F439: xor     edx, edx
 * 000000014015F43B: wrmsr
 * 000000014015F43D: btr     word ptr gs:2EB8h, 2
 * 000000014015F448: jnb     short loc_14015F458
 * 000000014015F44A: mov     eax, 1
 * 000000014015F44F: xor     edx, edx
 * 000000014015F451: mov     ecx, 49h ; 'I'
 * 000000014015F456: wrmsr
 * 000000014015F458: btr     word ptr gs:2EB8h, 5
 * 000000014015F463: jnb     loc_14015F58E
 * 000000014015F469: call    loc_14015F57C
 * 000000014015F46E: add     rsp, 8
 * 000000014015F472: call    loc_14015F585
 * 000000014015F477: add     rsp, 8
 * 000000014015F47B: call    loc_14015F46E
 * 000000014015F480: add     rsp, 8
 * 000000014015F484: call    loc_14015F477
 * 000000014015F489: add     rsp, 8
 * 000000014015F48D: call    loc_14015F480
 * 000000014015F492: add     rsp, 8
 * 000000014015F496: call    loc_14015F489
 * 000000014015F49B: add     rsp, 8
 * 000000014015F49F: call    loc_14015F492
 * 000000014015F4A4: add     rsp, 8
 * 000000014015F4A8: call    loc_14015F49B
 * 000000014015F4AD: add     rsp, 8
 * 000000014015F4B1: call    loc_14015F4A4
 * 000000014015F4B6: add     rsp, 8
 * 000000014015F4BA: call    loc_14015F4AD
 * 000000014015F4BF: add     rsp, 8
 * 000000014015F4C3: call    loc_14015F4B6
 * 000000014015F4C8: add     rsp, 8
 * 000000014015F4CC: call    loc_14015F4BF
 * 000000014015F4D1: add     rsp, 8
 * 000000014015F4D5: call    loc_14015F4C8
 * 000000014015F4DA: add     rsp, 8
 * 000000014015F4DE: call    loc_14015F4D1
 * 000000014015F4E3: add     rsp, 8
 * 000000014015F4E7: call    loc_14015F4DA
 * 000000014015F4EC: add     rsp, 8
 * 000000014015F4F0: call    loc_14015F4E3
 * 000000014015F4F5: add     rsp, 8
 * 000000014015F4F9: call    loc_14015F4EC
 * 000000014015F4FE: add     rsp, 8
 * 000000014015F502: call    loc_14015F4F5
 * 000000014015F507: add     rsp, 8
 * 000000014015F50B: call    loc_14015F4FE
 * 000000014015F510: add     rsp, 8
 * 000000014015F514: call    loc_14015F507
 * 000000014015F519: add     rsp, 8
 * 000000014015F51D: call    loc_14015F510
 * 000000014015F522: add     rsp, 8
 * 000000014015F526: call    loc_14015F519
 * 000000014015F52B: add     rsp, 8
 * 000000014015F52F: call    loc_14015F522
 * 000000014015F534: add     rsp, 8
 * 000000014015F538: call    loc_14015F52B
 * 000000014015F53D: add     rsp, 8
 * 000000014015F541: call    loc_14015F534
 * 000000014015F546: add     rsp, 8
 * 000000014015F54A: call    loc_14015F53D
 * 000000014015F54F: add     rsp, 8
 * 000000014015F553: call    loc_14015F546
 * 000000014015F558: add     rsp, 8
 * 000000014015F55C: call    loc_14015F54F
 * 000000014015F561: add     rsp, 8
 * 000000014015F565: call    loc_14015F558
 * 000000014015F56A: add     rsp, 8
 * 000000014015F56E: call    loc_14015F561
 * 000000014015F573: add     rsp, 8
 * 000000014015F577: call    loc_14015F56A
 * 000000014015F57C: add     rsp, 8
 * 000000014015F580: call    loc_14015F573
 * 000000014015F585: add     rsp, 8
 * 000000014015F589: mov     eax, 0DADAh
 * 000000014015F58E: test    word ptr gs:2EB8h, 40h
 * 000000014015F599: jz      short loc_14015F5A7
 * 000000014015F59B: xor     eax, eax
 * 000000014015F59D: xor     edx, edx
 * 000000014015F59F: mov     ecx, 1
 * 000000014015F5A4: div     rcx
 * 000000014015F5A7: mov     rdx, [rbp-40h]
 * 000000014015F5AB: mov     rcx, [rbp-48h]
 * 000000014015F5AF: mov     rax, [rbp-50h]
 * 000000014015F5B3: mov     rsp, rbp
 * 000000014015F5B6: mov     rbp, [rbp+0D8h]
 * 000000014015F5BD: add     rsp, 0E8h
 * 000000014015F5C4: test    cs:KiKvaShadow, 1
 * 000000014015F5CB: jz      short loc_14015F5D2
 * 000000014015F5CD: jmp     KiKernelExit
 * 000000014015F5D2: test    word ptr gs:2EB8h, 80h
 * 000000014015F5DD: jz      short loc_14015F5E4
 * 000000014015F5DF: verw    [rsp-1C8h+arg_1E0]
 * 000000014015F5E4: swapgs
 * 000000014015F5E7: iretq
 * 000000014015F5E9: ldmxcsr dword ptr [rbp-54h]
 * 000000014015F5ED: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015F5F1: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015F5F5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015F5F9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015F5FD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015F601: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015F605: mov     r11, [rbp-20h]
 * 000000014015F609: mov     r10, [rbp-28h]
 * 000000014015F60D: mov     r9, [rbp-30h]
 * 000000014015F611: mov     r8, [rbp-38h]
 * 000000014015F615: mov     rdx, [rbp-40h]
 * 000000014015F619: mov     rcx, [rbp-48h]
 * 000000014015F61D: mov     rax, [rbp-50h]
 * 000000014015F621: mov     rsp, rbp
 * 000000014015F624: mov     rbp, [rbp+0D8h]
 * 000000014015F62B: add     rsp, 0E8h
 * 000000014015F632: iretq
 */
