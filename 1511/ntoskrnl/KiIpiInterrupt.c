/*
 * XREFs of KiIpiInterrupt @ 0x14015A210
 * Callers:
 *     KiIpiInterruptShadow @ 0x140225000 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400311D0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400C83B0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14014FC60 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140158120 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x14015A210 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x14015A800 (KiIpiInterruptSubDispatch.c)
 *     KeWakeProcessor @ 0x1401C71C8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x14015A210
 * Reason: Hex-Rays returned no pseudocode for 0x14015A210
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015A210: sub     rsp, 8
 * 000000014015A214: push    rbp
 * 000000014015A215: push    rsi
 * 000000014015A216: sub     rsp, 150h
 * 000000014015A21D: lea     rbp, [rsp+80h]
 * 000000014015A225: mov     [rbp+0E8h+var_13D], 0
 * 000000014015A229: mov     [rbp+0E8h+var_138], rax
 * 000000014015A22D: mov     [rbp+0E8h+var_130], rcx
 * 000000014015A231: mov     [rbp+0E8h+var_128], rdx
 * 000000014015A235: mov     [rbp+0E8h+var_120], r8
 * 000000014015A239: mov     [rbp+0E8h+var_118], r9
 * 000000014015A23D: mov     [rbp+0E8h+var_110], r10
 * 000000014015A241: mov     [rbp+0E8h+var_108], r11
 * 000000014015A245: test    [rbp+0E8h+arg_0], 1
 * 000000014015A24C: jnz     loc_14015A3B2
 * 000000014015A252: cmp     byte ptr gs:187h, 0
 * 000000014015A25B: jz      loc_14015A548
 * 000000014015A261: test    byte ptr gs:2EB0h, 1
 * 000000014015A26A: jz      loc_14015A548
 * 000000014015A270: mov     ecx, 48h ; 'H'
 * 000000014015A275: mov     eax, 1
 * 000000014015A27A: xor     edx, edx
 * 000000014015A27C: wrmsr
 * 000000014015A27E: test    byte ptr gs:2EB0h, 4
 * 000000014015A287: jnz     loc_14015A548
 * 000000014015A28D: call    loc_14015A3A0
 * 000000014015A292: add     rsp, 8
 * 000000014015A296: call    loc_14015A3A9
 * 000000014015A29B: add     rsp, 8
 * 000000014015A29F: call    loc_14015A292
 * 000000014015A2A4: add     rsp, 8
 * 000000014015A2A8: call    loc_14015A29B
 * 000000014015A2AD: add     rsp, 8
 * 000000014015A2B1: call    loc_14015A2A4
 * 000000014015A2B6: add     rsp, 8
 * 000000014015A2BA: call    loc_14015A2AD
 * 000000014015A2BF: add     rsp, 8
 * 000000014015A2C3: call    loc_14015A2B6
 * 000000014015A2C8: add     rsp, 8
 * 000000014015A2CC: call    loc_14015A2BF
 * 000000014015A2D1: add     rsp, 8
 * 000000014015A2D5: call    loc_14015A2C8
 * 000000014015A2DA: add     rsp, 8
 * 000000014015A2DE: call    loc_14015A2D1
 * 000000014015A2E3: add     rsp, 8
 * 000000014015A2E7: call    loc_14015A2DA
 * 000000014015A2EC: add     rsp, 8
 * 000000014015A2F0: call    loc_14015A2E3
 * 000000014015A2F5: add     rsp, 8
 * 000000014015A2F9: call    loc_14015A2EC
 * 000000014015A2FE: add     rsp, 8
 * 000000014015A302: call    loc_14015A2F5
 * 000000014015A307: add     rsp, 8
 * 000000014015A30B: call    loc_14015A2FE
 * 000000014015A310: add     rsp, 8
 * 000000014015A314: call    loc_14015A307
 * 000000014015A319: add     rsp, 8
 * 000000014015A31D: call    loc_14015A310
 * 000000014015A322: add     rsp, 8
 * 000000014015A326: call    loc_14015A319
 * 000000014015A32B: add     rsp, 8
 * 000000014015A32F: call    loc_14015A322
 * 000000014015A334: add     rsp, 8
 * 000000014015A338: call    loc_14015A32B
 * 000000014015A33D: add     rsp, 8
 * 000000014015A341: call    loc_14015A334
 * 000000014015A346: add     rsp, 8
 * 000000014015A34A: call    loc_14015A33D
 * 000000014015A34F: add     rsp, 8
 * 000000014015A353: call    loc_14015A346
 * 000000014015A358: add     rsp, 8
 * 000000014015A35C: call    loc_14015A34F
 * 000000014015A361: add     rsp, 8
 * 000000014015A365: call    loc_14015A358
 * 000000014015A36A: add     rsp, 8
 * 000000014015A36E: call    loc_14015A361
 * 000000014015A373: add     rsp, 8
 * 000000014015A377: call    loc_14015A36A
 * 000000014015A37C: add     rsp, 8
 * 000000014015A380: call    loc_14015A373
 * 000000014015A385: add     rsp, 8
 * 000000014015A389: call    loc_14015A37C
 * 000000014015A38E: add     rsp, 8
 * 000000014015A392: call    loc_14015A385
 * 000000014015A397: add     rsp, 8
 * 000000014015A39B: call    loc_14015A38E
 * 000000014015A3A0: add     rsp, 8
 * 000000014015A3A4: call    loc_14015A397
 * 000000014015A3A9: add     rsp, 8
 * 000000014015A3AD: jmp     loc_14015A548
 * 000000014015A3B2: test    cs:KiKvaShadow, 1
 * 000000014015A3B9: jnz     short loc_14015A3BE
 * 000000014015A3BB: swapgs
 * 000000014015A3BE: mov     r10, gs:188h
 * 000000014015A3C7: test    byte ptr gs:2EB0h, 1
 * 000000014015A3D0: jz      loc_14015A533
 * 000000014015A3D6: mov     rcx, gs:188h
 * 000000014015A3DF: mov     rcx, [rcx+220h]
 * 000000014015A3E6: mov     rcx, [rcx+790h]
 * 000000014015A3ED: mov     gs:2EA8h, rcx
 * 000000014015A3F6: mov     ecx, 48h ; 'H'
 * 000000014015A3FB: mov     eax, 1
 * 000000014015A400: xor     edx, edx
 * 000000014015A402: wrmsr
 * 000000014015A404: test    byte ptr gs:2EB0h, 4
 * 000000014015A40D: jnz     loc_14015A533
 * 000000014015A413: call    loc_14015A526
 * 000000014015A418: add     rsp, 8
 * 000000014015A41C: call    loc_14015A52F
 * 000000014015A421: add     rsp, 8
 * 000000014015A425: call    loc_14015A418
 * 000000014015A42A: add     rsp, 8
 * 000000014015A42E: call    loc_14015A421
 * 000000014015A433: add     rsp, 8
 * 000000014015A437: call    loc_14015A42A
 * 000000014015A43C: add     rsp, 8
 * 000000014015A440: call    loc_14015A433
 * 000000014015A445: add     rsp, 8
 * 000000014015A449: call    loc_14015A43C
 * 000000014015A44E: add     rsp, 8
 * 000000014015A452: call    loc_14015A445
 * 000000014015A457: add     rsp, 8
 * 000000014015A45B: call    loc_14015A44E
 * 000000014015A460: add     rsp, 8
 * 000000014015A464: call    loc_14015A457
 * 000000014015A469: add     rsp, 8
 * 000000014015A46D: call    loc_14015A460
 * 000000014015A472: add     rsp, 8
 * 000000014015A476: call    loc_14015A469
 * 000000014015A47B: add     rsp, 8
 * 000000014015A47F: call    loc_14015A472
 * 000000014015A484: add     rsp, 8
 * 000000014015A488: call    loc_14015A47B
 * 000000014015A48D: add     rsp, 8
 * 000000014015A491: call    loc_14015A484
 * 000000014015A496: add     rsp, 8
 * 000000014015A49A: call    loc_14015A48D
 * 000000014015A49F: add     rsp, 8
 * 000000014015A4A3: call    loc_14015A496
 * 000000014015A4A8: add     rsp, 8
 * 000000014015A4AC: call    loc_14015A49F
 * 000000014015A4B1: add     rsp, 8
 * 000000014015A4B5: call    loc_14015A4A8
 * 000000014015A4BA: add     rsp, 8
 * 000000014015A4BE: call    loc_14015A4B1
 * 000000014015A4C3: add     rsp, 8
 * 000000014015A4C7: call    loc_14015A4BA
 * 000000014015A4CC: add     rsp, 8
 * 000000014015A4D0: call    loc_14015A4C3
 * 000000014015A4D5: add     rsp, 8
 * 000000014015A4D9: call    loc_14015A4CC
 * 000000014015A4DE: add     rsp, 8
 * 000000014015A4E2: call    loc_14015A4D5
 * 000000014015A4E7: add     rsp, 8
 * 000000014015A4EB: call    loc_14015A4DE
 * 000000014015A4F0: add     rsp, 8
 * 000000014015A4F4: call    loc_14015A4E7
 * 000000014015A4F9: add     rsp, 8
 * 000000014015A4FD: call    loc_14015A4F0
 * 000000014015A502: add     rsp, 8
 * 000000014015A506: call    loc_14015A4F9
 * 000000014015A50B: add     rsp, 8
 * 000000014015A50F: call    loc_14015A502
 * 000000014015A514: add     rsp, 8
 * 000000014015A518: call    loc_14015A50B
 * 000000014015A51D: add     rsp, 8
 * 000000014015A521: call    loc_14015A514
 * 000000014015A526: add     rsp, 8
 * 000000014015A52A: call    loc_14015A51D
 * 000000014015A52F: add     rsp, 8
 * 000000014015A533: test    byte ptr [r10+3], 3
 * 000000014015A538: mov     [rbp+0E8h+var_68], 0
 * 000000014015A541: jz      short loc_14015A548
 * 000000014015A543: call    KiSaveDebugRegisterState
 * 000000014015A548: cld
 * 000000014015A549: lfence
 * 000000014015A54C: stmxcsr [rbp+0E8h+var_13C]
 * 000000014015A550: ldmxcsr dword ptr gs:180h
 * 000000014015A559: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014015A55D: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014015A561: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014015A565: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014015A569: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014015A56D: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014015A571: cmp     byte ptr gs:5C9Ah, 0
 * 000000014015A57A: jz      short loc_14015A581
 * 000000014015A57C: call    KeWakeProcessor
 * 000000014015A581: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014015A588: cmp     rax, [rbp+0E8h]
 * 000000014015A58F: jnb     short loc_14015A5AA
 * 000000014015A591: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014015A598: cmp     rax, [rbp+0E8h]
 * 000000014015A59F: jb      short loc_14015A5AA
 * 000000014015A5A1: lea     rcx, [rbp+0E8h+var_168]
 * 000000014015A5A5: call    KiCheckForSListAddress
 * 000000014015A5AA: xor     esi, esi
 * 000000014015A5AC: inc     dword ptr gs:5C80h
 * 000000014015A5B4: mov     rdx, rsp
 * 000000014015A5B7: mov     rcx, gs:6418h
 * 000000014015A5C0: lea     rax, [rcx-6000h]
 * 000000014015A5C7: cmp     rax, rsp
 * 000000014015A5CA: ja      short loc_14015A5D1
 * 000000014015A5CC: cmp     rsp, rcx
 * 000000014015A5CF: jb      short loc_14015A5DD
 * 000000014015A5D1: cmp     cs:KiBugCheckActive, 0
 * 000000014015A5D8: jnz     short loc_14015A5DD
 * 000000014015A5DA: mov     rsp, rcx
 * 000000014015A5DD: sub     rsp, 20h
 * 000000014015A5E1: mov     qword ptr [rsp+108h+var_F8], rdx
 * 000000014015A5E6: call    KiIpiInterruptSubDispatch
 * 000000014015A5EB: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 000000014015A5F0: mov     rcx, rsi
 * 000000014015A5F3: call    HalPerformEndOfInterrupt_0
 * 000000014015A5F8: mov     rcx, gs:20h
 * 000000014015A601: cmp     byte ptr [rcx+20h], 1
 * 000000014015A605: ja      short loc_14015A67B
 * 000000014015A607: rdtsc
 * 000000014015A609: shl     rdx, 20h
 * 000000014015A60D: or      rax, rdx
 * 000000014015A610: sub     rax, [rcx+5B38h]
 * 000000014015A617: add     [rcx+5BF8h], rax
 * 000000014015A61E: add     [rcx+5B38h], rax
 * 000000014015A625: mov     r8, rax
 * 000000014015A628: mov     rax, [rcx+8]
 * 000000014015A62C: test    byte ptr [rax+2], 32h
 * 000000014015A630: jz      short loc_14015A645
 * 000000014015A632: xor     edx, edx
 * 000000014015A634: call    KiBeginThreadAccountingPeriod
 * 000000014015A639: mov     rcx, gs:20h
 * 000000014015A642: inc     byte ptr [rcx+20h]
 * 000000014015A645: mov     dl, [rcx+6]
 * 000000014015A648: and     byte ptr [rcx+6], 0
 * 000000014015A64C: cmp     byte ptr [rcx+7], 0
 * 000000014015A650: jnz     short loc_14015A67B
 * 000000014015A652: test    dl, dl
 * 000000014015A654: jz      short loc_14015A67B
 * 000000014015A656: cmp     [rbp+0E8h+var_13F], 2
 * 000000014015A65A: jnb     short loc_14015A667
 * 000000014015A65C: and     byte ptr [rcx+20h], 0
 * 000000014015A660: call    KiDpcInterruptBypass
 * 000000014015A665: jmp     short loc_14015A67E
 * 000000014015A667: mov     ecx, 2
 * 000000014015A66C: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014015A672: mov     rcx, gs:20h
 * 000000014015A67B: dec     byte ptr [rcx+20h]
 * 000000014015A67E: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014015A682: mov     cr8, rcx
 * 000000014015A686: mov     rsi, [rbp+0E8h+var_18]
 * 000000014015A68D: test    [rbp+0E8h+arg_0], 1
 * 000000014015A694: jz      loc_14015A7A5
 * 000000014015A69A: mov     rcx, gs:188h
 * 000000014015A6A3: cmp     byte ptr [rcx+0C2h], 0
 * 000000014015A6AA: jz      short loc_14015A6C5
 * 000000014015A6AC: mov     ecx, 1
 * 000000014015A6B1: mov     cr8, rcx
 * 000000014015A6B5: sti
 * 000000014015A6B6: call    KiInitiateUserApc
 * 000000014015A6BB: cli
 * 000000014015A6BC: mov     ecx, 0
 * 000000014015A6C1: mov     cr8, rcx
 * 000000014015A6C5: mov     rcx, gs:188h
 * 000000014015A6CE: test    dword ptr [rcx], 40010000h
 * 000000014015A6D4: jz      short loc_14015A6EA
 * 000000014015A6D6: test    byte ptr [rcx+2], 1
 * 000000014015A6DA: jz      short loc_14015A6EA
 * 000000014015A6DC: call    KiCopyCounters
 * 000000014015A6E1: mov     rcx, gs:188h
 * 000000014015A6EA: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014015A6EE: cmp     [rbp+0E8h+var_68], 0
 * 000000014015A6F6: jz      short loc_14015A6FD
 * 000000014015A6F8: call    KiRestoreDebugRegisterState
 * 000000014015A6FD: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014015A701: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014015A705: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014015A709: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014015A70D: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014015A711: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014015A715: mov     r11, [rbp+0E8h+var_108]
 * 000000014015A719: mov     r10, [rbp+0E8h+var_110]
 * 000000014015A71D: mov     r9, [rbp+0E8h+var_118]
 * 000000014015A721: mov     r8, [rbp+0E8h+var_120]
 * 000000014015A725: mov     rcx, gs:188h
 * 000000014015A72E: movzx   eax, byte ptr [rcx+1]
 * 000000014015A732: test    eax, 1
 * 000000014015A737: jnz     short loc_14015A775
 * 000000014015A739: xor     edx, edx
 * 000000014015A73B: mov     ecx, 48h ; 'H'
 * 000000014015A740: wrmsr
 * 000000014015A742: mov     rax, gs:2EA8h
 * 000000014015A74B: test    rax, rax
 * 000000014015A74E: jz      short loc_14015A775
 * 000000014015A750: mov     rcx, gs:188h
 * 000000014015A759: mov     rcx, [rcx+220h]
 * 000000014015A760: cmp     rax, [rcx+790h]
 * 000000014015A767: jz      short loc_14015A775
 * 000000014015A769: mov     eax, 1
 * 000000014015A76E: mov     ecx, 49h ; 'I'
 * 000000014015A773: wrmsr
 * 000000014015A775: mov     rdx, [rbp+0E8h+var_128]
 * 000000014015A779: mov     rcx, [rbp+0E8h+var_130]
 * 000000014015A77D: mov     rax, [rbp+0E8h+var_138]
 * 000000014015A781: mov     rsp, rbp
 * 000000014015A784: mov     rbp, [rbp+0E8h+var_10]
 * 000000014015A78B: add     rsp, 0E8h
 * 000000014015A792: test    cs:KiKvaShadow, 1
 * 000000014015A799: jz      short loc_14015A7A0
 * 000000014015A79B: jmp     KiKernelExit
 * 000000014015A7A0: swapgs
 * 000000014015A7A3: iretq
 * 000000014015A7A5: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014015A7A9: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014015A7AD: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014015A7B1: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014015A7B5: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014015A7B9: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014015A7BD: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014015A7C1: mov     r11, [rbp+0E8h+var_108]
 * 000000014015A7C5: mov     r10, [rbp+0E8h+var_110]
 * 000000014015A7C9: mov     r9, [rbp+0E8h+var_118]
 * 000000014015A7CD: mov     r8, [rbp+0E8h+var_120]
 * 000000014015A7D1: mov     rdx, [rbp+0E8h+var_128]
 * 000000014015A7D5: mov     rcx, [rbp+0E8h+var_130]
 * 000000014015A7D9: mov     rax, [rbp+0E8h+var_138]
 * 000000014015A7DD: mov     rsp, rbp
 * 000000014015A7E0: mov     rbp, [rbp+0E8h+var_10]
 * 000000014015A7E7: add     rsp, 0E8h
 * 000000014015A7EE: iretq
 */
