/*
 * XREFs of KiInterruptDispatchNoLockNoEtw @ 0x1401847E0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14017DE10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140183FA0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401847E0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLockNoEtw @ 0x1401847E0
 * Reason: Hex-Rays returned no pseudocode for 0x1401847E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401847E0: mov     rdx, rsp
 * 00000001401847E3: mov     rcx, gs:6418h
 * 00000001401847EC: lea     rax, [rcx-6000h]
 * 00000001401847F3: cmp     rax, rsp
 * 00000001401847F6: ja      short loc_1401847FD
 * 00000001401847F8: cmp     rsp, rcx
 * 00000001401847FB: jb      short loc_140184809
 * 00000001401847FD: cmp     cs:KiBugCheckActive, 0
 * 0000000140184804: jnz     short loc_140184809
 * 0000000140184806: mov     rsp, rcx
 * 0000000140184809: sub     rsp, 20h
 * 000000014018480D: mov     [rsp+20h+var_10], rdx
 * 0000000140184812: call    KiInterruptSubDispatchNoLockNoEtw
 * 0000000140184817: mov     rsp, [rsp+20h+var_10]
 * 000000014018481C: mov     rcx, rsi
 * 000000014018481F: call    HalPerformEndOfInterrupt_0
 * 0000000140184824: mov     rcx, gs:20h
 * 000000014018482D: cmp     byte ptr [rcx+20h], 1
 * 0000000140184831: ja      short loc_1401848A7
 * 0000000140184833: rdtsc
 * 0000000140184835: shl     rdx, 20h
 * 0000000140184839: or      rax, rdx
 * 000000014018483C: sub     rax, [rcx+5B38h]
 * 0000000140184843: add     [rcx+5BF8h], rax
 * 000000014018484A: add     [rcx+5B38h], rax
 * 0000000140184851: mov     r8, rax
 * 0000000140184854: mov     rax, [rcx+8]
 * 0000000140184858: test    byte ptr [rax+2], 32h
 * 000000014018485C: jz      short loc_140184871
 * 000000014018485E: xor     edx, edx
 * 0000000140184860: call    KiBeginThreadAccountingPeriod
 * 0000000140184865: mov     rcx, gs:20h
 * 000000014018486E: inc     byte ptr [rcx+20h]
 * 0000000140184871: mov     dl, [rcx+6]
 * 0000000140184874: and     byte ptr [rcx+6], 0
 * 0000000140184878: cmp     byte ptr [rcx+7], 0
 * 000000014018487C: jnz     short loc_1401848A7
 * 000000014018487E: test    dl, dl
 * 0000000140184880: jz      short loc_1401848A7
 * 0000000140184882: cmp     byte ptr [rbp-57h], 2
 * 0000000140184886: jnb     short loc_140184893
 * 0000000140184888: and     byte ptr [rcx+20h], 0
 * 000000014018488C: call    KiDpcInterruptBypass
 * 0000000140184891: jmp     short loc_1401848AA
 * 0000000140184893: mov     ecx, 2
 * 0000000140184898: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014018489E: mov     rcx, gs:20h
 * 00000001401848A7: dec     byte ptr [rcx+20h]
 * 00000001401848AA: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401848AE: mov     cr8, rcx
 * 00000001401848B2: mov     rsi, [rbp+0D0h]
 * 00000001401848B9: test    byte ptr [rbp+0F0h], 1
 * 00000001401848C0: jz      loc_140184B23
 * 00000001401848C6: mov     rcx, gs:188h
 * 00000001401848CF: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401848D6: jz      short loc_1401848F1
 * 00000001401848D8: mov     ecx, 1
 * 00000001401848DD: mov     cr8, rcx
 * 00000001401848E1: sti
 * 00000001401848E2: call    KiInitiateUserApc
 * 00000001401848E7: cli
 * 00000001401848E8: mov     ecx, 0
 * 00000001401848ED: mov     cr8, rcx
 * 00000001401848F1: mov     rcx, gs:188h
 * 00000001401848FA: test    dword ptr [rcx], 40010000h
 * 0000000140184900: jz      short loc_140184916
 * 0000000140184902: test    byte ptr [rcx+2], 1
 * 0000000140184906: jz      short loc_140184916
 * 0000000140184908: call    KiCopyCounters
 * 000000014018490D: mov     rcx, gs:188h
 * 0000000140184916: ldmxcsr dword ptr [rbp-54h]
 * 000000014018491A: cmp     word ptr [rbp+80h], 0
 * 0000000140184922: jz      short loc_140184929
 * 0000000140184924: call    KiRestoreDebugRegisterState
 * 0000000140184929: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014018492D: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140184931: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140184935: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140184939: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014018493D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140184941: mov     r11, [rbp-20h]
 * 0000000140184945: mov     r10, [rbp-28h]
 * 0000000140184949: mov     r9, [rbp-30h]
 * 000000014018494D: mov     r8, [rbp-38h]
 * 0000000140184951: movzx   eax, word ptr gs:2EBAh
 * 000000014018495A: cmp     gs:2EB4h, ax
 * 0000000140184963: jz      short loc_140184977
 * 0000000140184965: mov     gs:2EB4h, ax
 * 000000014018496E: mov     ecx, 48h ; 'H'
 * 0000000140184973: xor     edx, edx
 * 0000000140184975: wrmsr
 * 0000000140184977: btr     word ptr gs:2EB0h, 2
 * 0000000140184982: jnb     short loc_140184992
 * 0000000140184984: mov     eax, 1
 * 0000000140184989: xor     edx, edx
 * 000000014018498B: mov     ecx, 49h ; 'I'
 * 0000000140184990: wrmsr
 * 0000000140184992: btr     word ptr gs:2EB0h, 5
 * 000000014018499D: jnb     loc_140184AC8
 * 00000001401849A3: call    loc_140184AB6
 * 00000001401849A8: add     rsp, 8
 * 00000001401849AC: call    loc_140184ABF
 * 00000001401849B1: add     rsp, 8
 * 00000001401849B5: call    loc_1401849A8
 * 00000001401849BA: add     rsp, 8
 * 00000001401849BE: call    loc_1401849B1
 * 00000001401849C3: add     rsp, 8
 * 00000001401849C7: call    loc_1401849BA
 * 00000001401849CC: add     rsp, 8
 * 00000001401849D0: call    loc_1401849C3
 * 00000001401849D5: add     rsp, 8
 * 00000001401849D9: call    loc_1401849CC
 * 00000001401849DE: add     rsp, 8
 * 00000001401849E2: call    loc_1401849D5
 * 00000001401849E7: add     rsp, 8
 * 00000001401849EB: call    loc_1401849DE
 * 00000001401849F0: add     rsp, 8
 * 00000001401849F4: call    loc_1401849E7
 * 00000001401849F9: add     rsp, 8
 * 00000001401849FD: call    loc_1401849F0
 * 0000000140184A02: add     rsp, 8
 * 0000000140184A06: call    loc_1401849F9
 * 0000000140184A0B: add     rsp, 8
 * 0000000140184A0F: call    loc_140184A02
 * 0000000140184A14: add     rsp, 8
 * 0000000140184A18: call    loc_140184A0B
 * 0000000140184A1D: add     rsp, 8
 * 0000000140184A21: call    loc_140184A14
 * 0000000140184A26: add     rsp, 8
 * 0000000140184A2A: call    loc_140184A1D
 * 0000000140184A2F: add     rsp, 8
 * 0000000140184A33: call    loc_140184A26
 * 0000000140184A38: add     rsp, 8
 * 0000000140184A3C: call    loc_140184A2F
 * 0000000140184A41: add     rsp, 8
 * 0000000140184A45: call    loc_140184A38
 * 0000000140184A4A: add     rsp, 8
 * 0000000140184A4E: call    loc_140184A41
 * 0000000140184A53: add     rsp, 8
 * 0000000140184A57: call    loc_140184A4A
 * 0000000140184A5C: add     rsp, 8
 * 0000000140184A60: call    loc_140184A53
 * 0000000140184A65: add     rsp, 8
 * 0000000140184A69: call    loc_140184A5C
 * 0000000140184A6E: add     rsp, 8
 * 0000000140184A72: call    loc_140184A65
 * 0000000140184A77: add     rsp, 8
 * 0000000140184A7B: call    loc_140184A6E
 * 0000000140184A80: add     rsp, 8
 * 0000000140184A84: call    loc_140184A77
 * 0000000140184A89: add     rsp, 8
 * 0000000140184A8D: call    loc_140184A80
 * 0000000140184A92: add     rsp, 8
 * 0000000140184A96: call    loc_140184A89
 * 0000000140184A9B: add     rsp, 8
 * 0000000140184A9F: call    loc_140184A92
 * 0000000140184AA4: add     rsp, 8
 * 0000000140184AA8: call    loc_140184A9B
 * 0000000140184AAD: add     rsp, 8
 * 0000000140184AB1: call    loc_140184AA4
 * 0000000140184AB6: add     rsp, 8
 * 0000000140184ABA: call    loc_140184AAD
 * 0000000140184ABF: add     rsp, 8
 * 0000000140184AC3: mov     eax, 0DADAh
 * 0000000140184AC8: test    word ptr gs:2EB0h, 40h
 * 0000000140184AD3: jz      short loc_140184AE1
 * 0000000140184AD5: xor     eax, eax
 * 0000000140184AD7: xor     edx, edx
 * 0000000140184AD9: mov     ecx, 1
 * 0000000140184ADE: div     rcx
 * 0000000140184AE1: mov     rdx, [rbp-40h]
 * 0000000140184AE5: mov     rcx, [rbp-48h]
 * 0000000140184AE9: mov     rax, [rbp-50h]
 * 0000000140184AED: mov     rsp, rbp
 * 0000000140184AF0: mov     rbp, [rbp+0D8h]
 * 0000000140184AF7: add     rsp, 0E8h
 * 0000000140184AFE: test    cs:KiKvaShadow, 1
 * 0000000140184B05: jz      short loc_140184B0C
 * 0000000140184B07: jmp     KiKernelExit
 * 0000000140184B0C: test    word ptr gs:2EB0h, 80h
 * 0000000140184B17: jz      short loc_140184B1E
 * 0000000140184B19: verw    [rsp-1C8h+arg_1E0]
 * 0000000140184B1E: swapgs
 * 0000000140184B21: iretq
 * 0000000140184B23: ldmxcsr dword ptr [rbp-54h]
 * 0000000140184B27: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140184B2B: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140184B2F: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140184B33: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140184B37: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140184B3B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140184B3F: mov     r11, [rbp-20h]
 * 0000000140184B43: mov     r10, [rbp-28h]
 * 0000000140184B47: mov     r9, [rbp-30h]
 * 0000000140184B4B: mov     r8, [rbp-38h]
 * 0000000140184B4F: mov     rdx, [rbp-40h]
 * 0000000140184B53: mov     rcx, [rbp-48h]
 * 0000000140184B57: mov     rax, [rbp-50h]
 * 0000000140184B5B: mov     rsp, rbp
 * 0000000140184B5E: mov     rbp, [rbp+0D8h]
 * 0000000140184B65: add     rsp, 0E8h
 * 0000000140184B6C: iretq
 */
