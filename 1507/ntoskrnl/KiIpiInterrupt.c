/*
 * XREFs of KiIpiInterrupt @ 0x140189C20
 * Callers:
 *     KiIpiInterruptShadow @ 0x140274F80 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401020C0 (KiCheckForSListAddress.c)
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14017DE10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x140189C20 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x14018A270 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140203EC8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x140189C20
 * Reason: Hex-Rays returned no pseudocode for 0x140189C20
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140189C20: sub     rsp, 8
 * 0000000140189C24: push    rbp
 * 0000000140189C25: push    rsi
 * 0000000140189C26: sub     rsp, 150h
 * 0000000140189C2D: lea     rbp, [rsp+80h]
 * 0000000140189C35: mov     [rbp+0E8h+var_13D], 0
 * 0000000140189C39: mov     [rbp+0E8h+var_138], rax
 * 0000000140189C3D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140189C41: mov     [rbp+0E8h+var_128], rdx
 * 0000000140189C45: mov     [rbp+0E8h+var_120], r8
 * 0000000140189C49: mov     [rbp+0E8h+var_118], r9
 * 0000000140189C4D: mov     [rbp+0E8h+var_110], r10
 * 0000000140189C51: mov     [rbp+0E8h+var_108], r11
 * 0000000140189C55: test    [rbp+0E8h+arg_0], 1
 * 0000000140189C5C: jnz     short loc_140189C8D
 * 0000000140189C5E: lfence
 * 0000000140189C61: test    word ptr gs:2EB0h, 1
 * 0000000140189C6C: jnz     short loc_140189C76
 * 0000000140189C6E: lfence
 * 0000000140189C71: jmp     loc_140189E69
 * 0000000140189C76: movzx   eax, word ptr gs:2EB4h
 * 0000000140189C7F: mov     ecx, 48h ; 'H'
 * 0000000140189C84: xor     edx, edx
 * 0000000140189C86: wrmsr
 * 0000000140189C88: jmp     loc_140189E69
 * 0000000140189C8D: test    cs:KiKvaShadow, 1
 * 0000000140189C94: jnz     short loc_140189C99
 * 0000000140189C96: swapgs
 * 0000000140189C99: lfence
 * 0000000140189C9C: mov     r10, gs:188h
 * 0000000140189CA5: mov     rcx, gs:188h
 * 0000000140189CAE: mov     rcx, [rcx+220h]
 * 0000000140189CB5: mov     rcx, [rcx+7A0h]
 * 0000000140189CBC: mov     gs:2EA8h, rcx
 * 0000000140189CC5: movzx   eax, word ptr gs:2EB6h
 * 0000000140189CCE: cmp     gs:2EB4h, ax
 * 0000000140189CD7: jz      short loc_140189CEB
 * 0000000140189CD9: mov     gs:2EB4h, ax
 * 0000000140189CE2: mov     ecx, 48h ; 'H'
 * 0000000140189CE7: xor     edx, edx
 * 0000000140189CE9: wrmsr
 * 0000000140189CEB: movzx   edx, word ptr gs:2EB0h
 * 0000000140189CF4: test    edx, 8
 * 0000000140189CFA: jz      short loc_140189D13
 * 0000000140189CFC: mov     eax, 1
 * 0000000140189D01: xor     edx, edx
 * 0000000140189D03: mov     ecx, 49h ; 'I'
 * 0000000140189D08: wrmsr
 * 0000000140189D0A: movzx   edx, word ptr gs:2EB0h
 * 0000000140189D13: test    edx, 2
 * 0000000140189D19: jz      loc_140189E44
 * 0000000140189D1F: call    loc_140189E32
 * 0000000140189D24: add     rsp, 8
 * 0000000140189D28: call    loc_140189E3B
 * 0000000140189D2D: add     rsp, 8
 * 0000000140189D31: call    loc_140189D24
 * 0000000140189D36: add     rsp, 8
 * 0000000140189D3A: call    loc_140189D2D
 * 0000000140189D3F: add     rsp, 8
 * 0000000140189D43: call    loc_140189D36
 * 0000000140189D48: add     rsp, 8
 * 0000000140189D4C: call    loc_140189D3F
 * 0000000140189D51: add     rsp, 8
 * 0000000140189D55: call    loc_140189D48
 * 0000000140189D5A: add     rsp, 8
 * 0000000140189D5E: call    loc_140189D51
 * 0000000140189D63: add     rsp, 8
 * 0000000140189D67: call    loc_140189D5A
 * 0000000140189D6C: add     rsp, 8
 * 0000000140189D70: call    loc_140189D63
 * 0000000140189D75: add     rsp, 8
 * 0000000140189D79: call    loc_140189D6C
 * 0000000140189D7E: add     rsp, 8
 * 0000000140189D82: call    loc_140189D75
 * 0000000140189D87: add     rsp, 8
 * 0000000140189D8B: call    loc_140189D7E
 * 0000000140189D90: add     rsp, 8
 * 0000000140189D94: call    loc_140189D87
 * 0000000140189D99: add     rsp, 8
 * 0000000140189D9D: call    loc_140189D90
 * 0000000140189DA2: add     rsp, 8
 * 0000000140189DA6: call    loc_140189D99
 * 0000000140189DAB: add     rsp, 8
 * 0000000140189DAF: call    loc_140189DA2
 * 0000000140189DB4: add     rsp, 8
 * 0000000140189DB8: call    loc_140189DAB
 * 0000000140189DBD: add     rsp, 8
 * 0000000140189DC1: call    loc_140189DB4
 * 0000000140189DC6: add     rsp, 8
 * 0000000140189DCA: call    loc_140189DBD
 * 0000000140189DCF: add     rsp, 8
 * 0000000140189DD3: call    loc_140189DC6
 * 0000000140189DD8: add     rsp, 8
 * 0000000140189DDC: call    loc_140189DCF
 * 0000000140189DE1: add     rsp, 8
 * 0000000140189DE5: call    loc_140189DD8
 * 0000000140189DEA: add     rsp, 8
 * 0000000140189DEE: call    loc_140189DE1
 * 0000000140189DF3: add     rsp, 8
 * 0000000140189DF7: call    loc_140189DEA
 * 0000000140189DFC: add     rsp, 8
 * 0000000140189E00: call    loc_140189DF3
 * 0000000140189E05: add     rsp, 8
 * 0000000140189E09: call    loc_140189DFC
 * 0000000140189E0E: add     rsp, 8
 * 0000000140189E12: call    loc_140189E05
 * 0000000140189E17: add     rsp, 8
 * 0000000140189E1B: call    loc_140189E0E
 * 0000000140189E20: add     rsp, 8
 * 0000000140189E24: call    loc_140189E17
 * 0000000140189E29: add     rsp, 8
 * 0000000140189E2D: call    loc_140189E20
 * 0000000140189E32: add     rsp, 8
 * 0000000140189E36: call    loc_140189E29
 * 0000000140189E3B: add     rsp, 8
 * 0000000140189E3F: mov     eax, 0DADAh
 * 0000000140189E44: test    edx, 100h
 * 0000000140189E4A: jz      short loc_140189E51
 * 0000000140189E4C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140189E51: lfence
 * 0000000140189E54: test    byte ptr [r10+3], 3
 * 0000000140189E59: mov     [rbp+0E8h+var_68], 0
 * 0000000140189E62: jz      short loc_140189E69
 * 0000000140189E64: call    KiSaveDebugRegisterState
 * 0000000140189E69: cld
 * 0000000140189E6A: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140189E6E: ldmxcsr dword ptr gs:180h
 * 0000000140189E77: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140189E7B: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140189E7F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140189E83: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140189E87: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140189E8B: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140189E8F: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140189E98: jz      short loc_140189E9F
 * 0000000140189E9A: call    KeWakeProcessor
 * 0000000140189E9F: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140189EA6: cmp     rax, [rbp+0E8h]
 * 0000000140189EAD: jnb     short loc_140189EC8
 * 0000000140189EAF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140189EB6: cmp     rax, [rbp+0E8h]
 * 0000000140189EBD: jb      short loc_140189EC8
 * 0000000140189EBF: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140189EC3: call    KiCheckForSListAddress
 * 0000000140189EC8: xor     esi, esi
 * 0000000140189ECA: inc     dword ptr gs:5C80h
 * 0000000140189ED2: mov     rdx, rsp
 * 0000000140189ED5: mov     rcx, gs:6418h
 * 0000000140189EDE: lea     rax, [rcx-6000h]
 * 0000000140189EE5: cmp     rax, rsp
 * 0000000140189EE8: ja      short loc_140189EEF
 * 0000000140189EEA: cmp     rsp, rcx
 * 0000000140189EED: jb      short loc_140189EFB
 * 0000000140189EEF: cmp     cs:KiBugCheckActive, 0
 * 0000000140189EF6: jnz     short loc_140189EFB
 * 0000000140189EF8: mov     rsp, rcx
 * 0000000140189EFB: sub     rsp, 20h
 * 0000000140189EFF: mov     qword ptr [rsp+108h+var_F8], rdx
 * 0000000140189F04: call    KiIpiInterruptSubDispatch
 * 0000000140189F09: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 0000000140189F0E: mov     rcx, rsi
 * 0000000140189F11: call    HalPerformEndOfInterrupt_0
 * 0000000140189F16: mov     rcx, gs:20h
 * 0000000140189F1F: cmp     byte ptr [rcx+20h], 1
 * 0000000140189F23: ja      short loc_140189F99
 * 0000000140189F25: rdtsc
 * 0000000140189F27: shl     rdx, 20h
 * 0000000140189F2B: or      rax, rdx
 * 0000000140189F2E: sub     rax, [rcx+5B38h]
 * 0000000140189F35: add     [rcx+5BF8h], rax
 * 0000000140189F3C: add     [rcx+5B38h], rax
 * 0000000140189F43: mov     r8, rax
 * 0000000140189F46: mov     rax, [rcx+8]
 * 0000000140189F4A: test    byte ptr [rax+2], 32h
 * 0000000140189F4E: jz      short loc_140189F63
 * 0000000140189F50: xor     edx, edx
 * 0000000140189F52: call    KiBeginThreadAccountingPeriod
 * 0000000140189F57: mov     rcx, gs:20h
 * 0000000140189F60: inc     byte ptr [rcx+20h]
 * 0000000140189F63: mov     dl, [rcx+6]
 * 0000000140189F66: and     byte ptr [rcx+6], 0
 * 0000000140189F6A: cmp     byte ptr [rcx+7], 0
 * 0000000140189F6E: jnz     short loc_140189F99
 * 0000000140189F70: test    dl, dl
 * 0000000140189F72: jz      short loc_140189F99
 * 0000000140189F74: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140189F78: jnb     short loc_140189F85
 * 0000000140189F7A: and     byte ptr [rcx+20h], 0
 * 0000000140189F7E: call    KiDpcInterruptBypass
 * 0000000140189F83: jmp     short loc_140189F9C
 * 0000000140189F85: mov     ecx, 2
 * 0000000140189F8A: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140189F90: mov     rcx, gs:20h
 * 0000000140189F99: dec     byte ptr [rcx+20h]
 * 0000000140189F9C: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140189FA0: mov     cr8, rcx
 * 0000000140189FA4: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140189FAB: test    [rbp+0E8h+arg_0], 1
 * 0000000140189FB2: jz      loc_14018A215
 * 0000000140189FB8: mov     rcx, gs:188h
 * 0000000140189FC1: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140189FC8: jz      short loc_140189FE3
 * 0000000140189FCA: mov     ecx, 1
 * 0000000140189FCF: mov     cr8, rcx
 * 0000000140189FD3: sti
 * 0000000140189FD4: call    KiInitiateUserApc
 * 0000000140189FD9: cli
 * 0000000140189FDA: mov     ecx, 0
 * 0000000140189FDF: mov     cr8, rcx
 * 0000000140189FE3: mov     rcx, gs:188h
 * 0000000140189FEC: test    dword ptr [rcx], 40010000h
 * 0000000140189FF2: jz      short loc_14018A008
 * 0000000140189FF4: test    byte ptr [rcx+2], 1
 * 0000000140189FF8: jz      short loc_14018A008
 * 0000000140189FFA: call    KiCopyCounters
 * 0000000140189FFF: mov     rcx, gs:188h
 * 000000014018A008: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014018A00C: cmp     [rbp+0E8h+var_68], 0
 * 000000014018A014: jz      short loc_14018A01B
 * 000000014018A016: call    KiRestoreDebugRegisterState
 * 000000014018A01B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018A01F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014018A023: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018A027: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014018A02B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018A02F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014018A033: mov     r11, [rbp+0E8h+var_108]
 * 000000014018A037: mov     r10, [rbp+0E8h+var_110]
 * 000000014018A03B: mov     r9, [rbp+0E8h+var_118]
 * 000000014018A03F: mov     r8, [rbp+0E8h+var_120]
 * 000000014018A043: movzx   eax, word ptr gs:2EBAh
 * 000000014018A04C: cmp     gs:2EB4h, ax
 * 000000014018A055: jz      short loc_14018A069
 * 000000014018A057: mov     gs:2EB4h, ax
 * 000000014018A060: mov     ecx, 48h ; 'H'
 * 000000014018A065: xor     edx, edx
 * 000000014018A067: wrmsr
 * 000000014018A069: btr     word ptr gs:2EB0h, 2
 * 000000014018A074: jnb     short loc_14018A084
 * 000000014018A076: mov     eax, 1
 * 000000014018A07B: xor     edx, edx
 * 000000014018A07D: mov     ecx, 49h ; 'I'
 * 000000014018A082: wrmsr
 * 000000014018A084: btr     word ptr gs:2EB0h, 5
 * 000000014018A08F: jnb     loc_14018A1BA
 * 000000014018A095: call    loc_14018A1A8
 * 000000014018A09A: add     rsp, 8
 * 000000014018A09E: call    loc_14018A1B1
 * 000000014018A0A3: add     rsp, 8
 * 000000014018A0A7: call    loc_14018A09A
 * 000000014018A0AC: add     rsp, 8
 * 000000014018A0B0: call    loc_14018A0A3
 * 000000014018A0B5: add     rsp, 8
 * 000000014018A0B9: call    loc_14018A0AC
 * 000000014018A0BE: add     rsp, 8
 * 000000014018A0C2: call    loc_14018A0B5
 * 000000014018A0C7: add     rsp, 8
 * 000000014018A0CB: call    loc_14018A0BE
 * 000000014018A0D0: add     rsp, 8
 * 000000014018A0D4: call    loc_14018A0C7
 * 000000014018A0D9: add     rsp, 8
 * 000000014018A0DD: call    loc_14018A0D0
 * 000000014018A0E2: add     rsp, 8
 * 000000014018A0E6: call    loc_14018A0D9
 * 000000014018A0EB: add     rsp, 8
 * 000000014018A0EF: call    loc_14018A0E2
 * 000000014018A0F4: add     rsp, 8
 * 000000014018A0F8: call    loc_14018A0EB
 * 000000014018A0FD: add     rsp, 8
 * 000000014018A101: call    loc_14018A0F4
 * 000000014018A106: add     rsp, 8
 * 000000014018A10A: call    loc_14018A0FD
 * 000000014018A10F: add     rsp, 8
 * 000000014018A113: call    loc_14018A106
 * 000000014018A118: add     rsp, 8
 * 000000014018A11C: call    loc_14018A10F
 * 000000014018A121: add     rsp, 8
 * 000000014018A125: call    loc_14018A118
 * 000000014018A12A: add     rsp, 8
 * 000000014018A12E: call    loc_14018A121
 * 000000014018A133: add     rsp, 8
 * 000000014018A137: call    loc_14018A12A
 * 000000014018A13C: add     rsp, 8
 * 000000014018A140: call    loc_14018A133
 * 000000014018A145: add     rsp, 8
 * 000000014018A149: call    loc_14018A13C
 * 000000014018A14E: add     rsp, 8
 * 000000014018A152: call    loc_14018A145
 * 000000014018A157: add     rsp, 8
 * 000000014018A15B: call    loc_14018A14E
 * 000000014018A160: add     rsp, 8
 * 000000014018A164: call    loc_14018A157
 * 000000014018A169: add     rsp, 8
 * 000000014018A16D: call    loc_14018A160
 * 000000014018A172: add     rsp, 8
 * 000000014018A176: call    loc_14018A169
 * 000000014018A17B: add     rsp, 8
 * 000000014018A17F: call    loc_14018A172
 * 000000014018A184: add     rsp, 8
 * 000000014018A188: call    loc_14018A17B
 * 000000014018A18D: add     rsp, 8
 * 000000014018A191: call    loc_14018A184
 * 000000014018A196: add     rsp, 8
 * 000000014018A19A: call    loc_14018A18D
 * 000000014018A19F: add     rsp, 8
 * 000000014018A1A3: call    loc_14018A196
 * 000000014018A1A8: add     rsp, 8
 * 000000014018A1AC: call    loc_14018A19F
 * 000000014018A1B1: add     rsp, 8
 * 000000014018A1B5: mov     eax, 0DADAh
 * 000000014018A1BA: test    word ptr gs:2EB0h, 40h
 * 000000014018A1C5: jz      short loc_14018A1D3
 * 000000014018A1C7: xor     eax, eax
 * 000000014018A1C9: xor     edx, edx
 * 000000014018A1CB: mov     ecx, 1
 * 000000014018A1D0: div     rcx
 * 000000014018A1D3: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018A1D7: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018A1DB: mov     rax, [rbp+0E8h+var_138]
 * 000000014018A1DF: mov     rsp, rbp
 * 000000014018A1E2: mov     rbp, [rbp+0E8h+var_10]
 * 000000014018A1E9: add     rsp, 0E8h
 * 000000014018A1F0: test    cs:KiKvaShadow, 1
 * 000000014018A1F7: jz      short loc_14018A1FE
 * 000000014018A1F9: jmp     KiKernelExit
 * 000000014018A1FE: test    word ptr gs:2EB0h, 80h
 * 000000014018A209: jz      short loc_14018A210
 * 000000014018A20B: verw    [rsp+arg_18]
 * 000000014018A210: swapgs
 * 000000014018A213: iretq
 * 000000014018A215: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014018A219: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018A21D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014018A221: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018A225: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014018A229: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018A22D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014018A231: mov     r11, [rbp+0E8h+var_108]
 * 000000014018A235: mov     r10, [rbp+0E8h+var_110]
 * 000000014018A239: mov     r9, [rbp+0E8h+var_118]
 * 000000014018A23D: mov     r8, [rbp+0E8h+var_120]
 * 000000014018A241: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018A245: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018A249: mov     rax, [rbp+0E8h+var_138]
 * 000000014018A24D: mov     rsp, rbp
 * 000000014018A250: mov     rbp, [rbp+0E8h+var_10]
 * 000000014018A257: add     rsp, 0E8h
 * 000000014018A25E: iretq
 */
