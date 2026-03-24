/*
 * XREFs of KiChainedDispatch @ 0x1401837D0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14017DE10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiChainedDispatch @ 0x1401837D0 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x140183B70 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1401837D0
 * Reason: Hex-Rays returned no pseudocode for 0x1401837D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401837D0: mov     rdx, rsp
 * 00000001401837D3: mov     rcx, gs:6418h
 * 00000001401837DC: lea     rax, [rcx-6000h]
 * 00000001401837E3: cmp     rax, rsp
 * 00000001401837E6: ja      short loc_1401837ED
 * 00000001401837E8: cmp     rsp, rcx
 * 00000001401837EB: jb      short loc_1401837F9
 * 00000001401837ED: cmp     cs:KiBugCheckActive, 0
 * 00000001401837F4: jnz     short loc_1401837F9
 * 00000001401837F6: mov     rsp, rcx
 * 00000001401837F9: sub     rsp, 20h
 * 00000001401837FD: mov     [rsp+20h+var_10], rdx
 * 0000000140183802: call    KiScanInterruptObjectList
 * 0000000140183807: mov     rsp, [rsp+20h+var_10]
 * 000000014018380C: mov     rcx, rsi
 * 000000014018380F: call    HalPerformEndOfInterrupt_0
 * 0000000140183814: mov     rcx, gs:20h
 * 000000014018381D: cmp     byte ptr [rcx+20h], 1
 * 0000000140183821: ja      short loc_140183897
 * 0000000140183823: rdtsc
 * 0000000140183825: shl     rdx, 20h
 * 0000000140183829: or      rax, rdx
 * 000000014018382C: sub     rax, [rcx+5B38h]
 * 0000000140183833: add     [rcx+5BF8h], rax
 * 000000014018383A: add     [rcx+5B38h], rax
 * 0000000140183841: mov     r8, rax
 * 0000000140183844: mov     rax, [rcx+8]
 * 0000000140183848: test    byte ptr [rax+2], 32h
 * 000000014018384C: jz      short loc_140183861
 * 000000014018384E: xor     edx, edx
 * 0000000140183850: call    KiBeginThreadAccountingPeriod
 * 0000000140183855: mov     rcx, gs:20h
 * 000000014018385E: inc     byte ptr [rcx+20h]
 * 0000000140183861: mov     dl, [rcx+6]
 * 0000000140183864: and     byte ptr [rcx+6], 0
 * 0000000140183868: cmp     byte ptr [rcx+7], 0
 * 000000014018386C: jnz     short loc_140183897
 * 000000014018386E: test    dl, dl
 * 0000000140183870: jz      short loc_140183897
 * 0000000140183872: cmp     byte ptr [rbp-57h], 2
 * 0000000140183876: jnb     short loc_140183883
 * 0000000140183878: and     byte ptr [rcx+20h], 0
 * 000000014018387C: call    KiDpcInterruptBypass
 * 0000000140183881: jmp     short loc_14018389A
 * 0000000140183883: mov     ecx, 2
 * 0000000140183888: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014018388E: mov     rcx, gs:20h
 * 0000000140183897: dec     byte ptr [rcx+20h]
 * 000000014018389A: movzx   ecx, byte ptr [rbp-57h]
 * 000000014018389E: mov     cr8, rcx
 * 00000001401838A2: mov     rsi, [rbp+0D0h]
 * 00000001401838A9: test    byte ptr [rbp+0F0h], 1
 * 00000001401838B0: jz      loc_140183B13
 * 00000001401838B6: mov     rcx, gs:188h
 * 00000001401838BF: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401838C6: jz      short loc_1401838E1
 * 00000001401838C8: mov     ecx, 1
 * 00000001401838CD: mov     cr8, rcx
 * 00000001401838D1: sti
 * 00000001401838D2: call    KiInitiateUserApc
 * 00000001401838D7: cli
 * 00000001401838D8: mov     ecx, 0
 * 00000001401838DD: mov     cr8, rcx
 * 00000001401838E1: mov     rcx, gs:188h
 * 00000001401838EA: test    dword ptr [rcx], 40010000h
 * 00000001401838F0: jz      short loc_140183906
 * 00000001401838F2: test    byte ptr [rcx+2], 1
 * 00000001401838F6: jz      short loc_140183906
 * 00000001401838F8: call    KiCopyCounters
 * 00000001401838FD: mov     rcx, gs:188h
 * 0000000140183906: ldmxcsr dword ptr [rbp-54h]
 * 000000014018390A: cmp     word ptr [rbp+80h], 0
 * 0000000140183912: jz      short loc_140183919
 * 0000000140183914: call    KiRestoreDebugRegisterState
 * 0000000140183919: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014018391D: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140183921: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140183925: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140183929: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014018392D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140183931: mov     r11, [rbp-20h]
 * 0000000140183935: mov     r10, [rbp-28h]
 * 0000000140183939: mov     r9, [rbp-30h]
 * 000000014018393D: mov     r8, [rbp-38h]
 * 0000000140183941: movzx   eax, word ptr gs:2EBAh
 * 000000014018394A: cmp     gs:2EB4h, ax
 * 0000000140183953: jz      short loc_140183967
 * 0000000140183955: mov     gs:2EB4h, ax
 * 000000014018395E: mov     ecx, 48h ; 'H'
 * 0000000140183963: xor     edx, edx
 * 0000000140183965: wrmsr
 * 0000000140183967: btr     word ptr gs:2EB0h, 2
 * 0000000140183972: jnb     short loc_140183982
 * 0000000140183974: mov     eax, 1
 * 0000000140183979: xor     edx, edx
 * 000000014018397B: mov     ecx, 49h ; 'I'
 * 0000000140183980: wrmsr
 * 0000000140183982: btr     word ptr gs:2EB0h, 5
 * 000000014018398D: jnb     loc_140183AB8
 * 0000000140183993: call    loc_140183AA6
 * 0000000140183998: add     rsp, 8
 * 000000014018399C: call    loc_140183AAF
 * 00000001401839A1: add     rsp, 8
 * 00000001401839A5: call    loc_140183998
 * 00000001401839AA: add     rsp, 8
 * 00000001401839AE: call    loc_1401839A1
 * 00000001401839B3: add     rsp, 8
 * 00000001401839B7: call    loc_1401839AA
 * 00000001401839BC: add     rsp, 8
 * 00000001401839C0: call    loc_1401839B3
 * 00000001401839C5: add     rsp, 8
 * 00000001401839C9: call    loc_1401839BC
 * 00000001401839CE: add     rsp, 8
 * 00000001401839D2: call    loc_1401839C5
 * 00000001401839D7: add     rsp, 8
 * 00000001401839DB: call    loc_1401839CE
 * 00000001401839E0: add     rsp, 8
 * 00000001401839E4: call    loc_1401839D7
 * 00000001401839E9: add     rsp, 8
 * 00000001401839ED: call    loc_1401839E0
 * 00000001401839F2: add     rsp, 8
 * 00000001401839F6: call    loc_1401839E9
 * 00000001401839FB: add     rsp, 8
 * 00000001401839FF: call    loc_1401839F2
 * 0000000140183A04: add     rsp, 8
 * 0000000140183A08: call    loc_1401839FB
 * 0000000140183A0D: add     rsp, 8
 * 0000000140183A11: call    loc_140183A04
 * 0000000140183A16: add     rsp, 8
 * 0000000140183A1A: call    loc_140183A0D
 * 0000000140183A1F: add     rsp, 8
 * 0000000140183A23: call    loc_140183A16
 * 0000000140183A28: add     rsp, 8
 * 0000000140183A2C: call    loc_140183A1F
 * 0000000140183A31: add     rsp, 8
 * 0000000140183A35: call    loc_140183A28
 * 0000000140183A3A: add     rsp, 8
 * 0000000140183A3E: call    loc_140183A31
 * 0000000140183A43: add     rsp, 8
 * 0000000140183A47: call    loc_140183A3A
 * 0000000140183A4C: add     rsp, 8
 * 0000000140183A50: call    loc_140183A43
 * 0000000140183A55: add     rsp, 8
 * 0000000140183A59: call    loc_140183A4C
 * 0000000140183A5E: add     rsp, 8
 * 0000000140183A62: call    loc_140183A55
 * 0000000140183A67: add     rsp, 8
 * 0000000140183A6B: call    loc_140183A5E
 * 0000000140183A70: add     rsp, 8
 * 0000000140183A74: call    loc_140183A67
 * 0000000140183A79: add     rsp, 8
 * 0000000140183A7D: call    loc_140183A70
 * 0000000140183A82: add     rsp, 8
 * 0000000140183A86: call    loc_140183A79
 * 0000000140183A8B: add     rsp, 8
 * 0000000140183A8F: call    loc_140183A82
 * 0000000140183A94: add     rsp, 8
 * 0000000140183A98: call    loc_140183A8B
 * 0000000140183A9D: add     rsp, 8
 * 0000000140183AA1: call    loc_140183A94
 * 0000000140183AA6: add     rsp, 8
 * 0000000140183AAA: call    loc_140183A9D
 * 0000000140183AAF: add     rsp, 8
 * 0000000140183AB3: mov     eax, 0DADAh
 * 0000000140183AB8: test    word ptr gs:2EB0h, 40h
 * 0000000140183AC3: jz      short loc_140183AD1
 * 0000000140183AC5: xor     eax, eax
 * 0000000140183AC7: xor     edx, edx
 * 0000000140183AC9: mov     ecx, 1
 * 0000000140183ACE: div     rcx
 * 0000000140183AD1: mov     rdx, [rbp-40h]
 * 0000000140183AD5: mov     rcx, [rbp-48h]
 * 0000000140183AD9: mov     rax, [rbp-50h]
 * 0000000140183ADD: mov     rsp, rbp
 * 0000000140183AE0: mov     rbp, [rbp+0D8h]
 * 0000000140183AE7: add     rsp, 0E8h
 * 0000000140183AEE: test    cs:KiKvaShadow, 1
 * 0000000140183AF5: jz      short loc_140183AFC
 * 0000000140183AF7: jmp     KiKernelExit
 * 0000000140183AFC: test    word ptr gs:2EB0h, 80h
 * 0000000140183B07: jz      short loc_140183B0E
 * 0000000140183B09: verw    [rsp-1C8h+arg_1E0]
 * 0000000140183B0E: swapgs
 * 0000000140183B11: iretq
 * 0000000140183B13: ldmxcsr dword ptr [rbp-54h]
 * 0000000140183B17: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140183B1B: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140183B1F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140183B23: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140183B27: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140183B2B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140183B2F: mov     r11, [rbp-20h]
 * 0000000140183B33: mov     r10, [rbp-28h]
 * 0000000140183B37: mov     r9, [rbp-30h]
 * 0000000140183B3B: mov     r8, [rbp-38h]
 * 0000000140183B3F: mov     rdx, [rbp-40h]
 * 0000000140183B43: mov     rcx, [rbp-48h]
 * 0000000140183B47: mov     rax, [rbp-50h]
 * 0000000140183B4B: mov     rsp, rbp
 * 0000000140183B4E: mov     rbp, [rbp+0D8h]
 * 0000000140183B55: add     rsp, 0E8h
 * 0000000140183B5C: iretq
 */
