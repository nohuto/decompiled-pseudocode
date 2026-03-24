/*
 * XREFs of KiNmiInterruptStart @ 0x14015EB40
 * Callers:
 *     KiNmiInterruptShadow @ 0x140224100 (KiNmiInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1400C83B0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiNmiInterruptStart @ 0x14015EB40 (KiNmiInterruptStart.c)
 *     KxNmiInterrupt @ 0x14015F140 (KxNmiInterrupt.c)
 *     KiBugCheckDispatch @ 0x140165B40 (KiBugCheckDispatch.c)
 *     KeWakeProcessor @ 0x1401C71C8 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiNmiInterruptStart @ 0x14015EB40
 * Reason: Hex-Rays returned no pseudocode for 0x14015EB40
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015EB40: sub     rsp, 8
 * 000000014015EB44: push    rbp
 * 000000014015EB45: push    rsi
 * 000000014015EB46: sub     rsp, 150h
 * 000000014015EB4D: lea     rbp, [rsp+80h]
 * 000000014015EB55: mov     [rbp+0E8h+var_13D], 0
 * 000000014015EB59: mov     [rbp+0E8h+var_138], rax
 * 000000014015EB5D: mov     [rbp+0E8h+var_130], rcx
 * 000000014015EB61: mov     [rbp+0E8h+var_128], rdx
 * 000000014015EB65: mov     [rbp+0E8h+var_120], r8
 * 000000014015EB69: mov     [rbp+0E8h+var_118], r9
 * 000000014015EB6D: mov     [rbp+0E8h+var_110], r10
 * 000000014015EB71: mov     [rbp+0E8h+var_108], r11
 * 000000014015EB75: test    [rbp+0E8h+arg_0], 1
 * 000000014015EB7C: jnz     loc_14015ED31
 * 000000014015EB82: mov     ecx, 0C0000101h
 * 000000014015EB87: rdmsr
 * 000000014015EB89: mov     [rbp+0E8h+var_100], eax
 * 000000014015EB8C: mov     [rbp+0E8h+var_FC], edx
 * 000000014015EB8F: lea     rcx, KiProcessorBlock
 * 000000014015EB96: lea     rdx, KiProcessorNumberToIndexMappingTable
 * 000000014015EB9D: mov     eax, 50h ; 'P'
 * 000000014015EBA2: lsl     eax, eax
 * 000000014015EBA5: mov     r8d, eax
 * 000000014015EBA8: and     r8d, 3FFh
 * 000000014015EBAF: shl     r8d, 6
 * 000000014015EBB3: shr     eax, 0Eh
 * 000000014015EBB6: or      eax, r8d
 * 000000014015EBB9: mov     eax, [rdx+rax*4]
 * 000000014015EBBC: mov     rdx, [rcx+rax*8]
 * 000000014015EBC0: sub     rdx, 180h
 * 000000014015EBC7: mov     eax, edx
 * 000000014015EBC9: shr     rdx, 20h
 * 000000014015EBCD: mov     ecx, 0C0000101h
 * 000000014015EBD2: wrmsr
 * 000000014015EBD4: mov     rax, cr2
 * 000000014015EBD7: mov     [rbp+0E8h+var_98], rax
 * 000000014015EBDB: test    byte ptr gs:2EB0h, 1
 * 000000014015EBE4: jz      loc_14015EECC
 * 000000014015EBEA: mov     ecx, 48h ; 'H'
 * 000000014015EBEF: rdmsr
 * 000000014015EBF1: mov     [rbp+0E8h+var_13E], al
 * 000000014015EBF4: mov     eax, 1
 * 000000014015EBF9: xor     edx, edx
 * 000000014015EBFB: wrmsr
 * 000000014015EBFD: test    byte ptr gs:2EB0h, 4
 * 000000014015EC06: jnz     loc_14015EECC
 * 000000014015EC0C: call    loc_14015ED1F
 * 000000014015EC11: add     rsp, 8
 * 000000014015EC15: call    loc_14015ED28
 * 000000014015EC1A: add     rsp, 8
 * 000000014015EC1E: call    loc_14015EC11
 * 000000014015EC23: add     rsp, 8
 * 000000014015EC27: call    loc_14015EC1A
 * 000000014015EC2C: add     rsp, 8
 * 000000014015EC30: call    loc_14015EC23
 * 000000014015EC35: add     rsp, 8
 * 000000014015EC39: call    loc_14015EC2C
 * 000000014015EC3E: add     rsp, 8
 * 000000014015EC42: call    loc_14015EC35
 * 000000014015EC47: add     rsp, 8
 * 000000014015EC4B: call    loc_14015EC3E
 * 000000014015EC50: add     rsp, 8
 * 000000014015EC54: call    loc_14015EC47
 * 000000014015EC59: add     rsp, 8
 * 000000014015EC5D: call    loc_14015EC50
 * 000000014015EC62: add     rsp, 8
 * 000000014015EC66: call    loc_14015EC59
 * 000000014015EC6B: add     rsp, 8
 * 000000014015EC6F: call    loc_14015EC62
 * 000000014015EC74: add     rsp, 8
 * 000000014015EC78: call    loc_14015EC6B
 * 000000014015EC7D: add     rsp, 8
 * 000000014015EC81: call    loc_14015EC74
 * 000000014015EC86: add     rsp, 8
 * 000000014015EC8A: call    loc_14015EC7D
 * 000000014015EC8F: add     rsp, 8
 * 000000014015EC93: call    loc_14015EC86
 * 000000014015EC98: add     rsp, 8
 * 000000014015EC9C: call    loc_14015EC8F
 * 000000014015ECA1: add     rsp, 8
 * 000000014015ECA5: call    loc_14015EC98
 * 000000014015ECAA: add     rsp, 8
 * 000000014015ECAE: call    loc_14015ECA1
 * 000000014015ECB3: add     rsp, 8
 * 000000014015ECB7: call    loc_14015ECAA
 * 000000014015ECBC: add     rsp, 8
 * 000000014015ECC0: call    loc_14015ECB3
 * 000000014015ECC5: add     rsp, 8
 * 000000014015ECC9: call    loc_14015ECBC
 * 000000014015ECCE: add     rsp, 8
 * 000000014015ECD2: call    loc_14015ECC5
 * 000000014015ECD7: add     rsp, 8
 * 000000014015ECDB: call    loc_14015ECCE
 * 000000014015ECE0: add     rsp, 8
 * 000000014015ECE4: call    loc_14015ECD7
 * 000000014015ECE9: add     rsp, 8
 * 000000014015ECED: call    loc_14015ECE0
 * 000000014015ECF2: add     rsp, 8
 * 000000014015ECF6: call    loc_14015ECE9
 * 000000014015ECFB: add     rsp, 8
 * 000000014015ECFF: call    loc_14015ECF2
 * 000000014015ED04: add     rsp, 8
 * 000000014015ED08: call    loc_14015ECFB
 * 000000014015ED0D: add     rsp, 8
 * 000000014015ED11: call    loc_14015ED04
 * 000000014015ED16: add     rsp, 8
 * 000000014015ED1A: call    loc_14015ED0D
 * 000000014015ED1F: add     rsp, 8
 * 000000014015ED23: call    loc_14015ED16
 * 000000014015ED28: add     rsp, 8
 * 000000014015ED2C: jmp     loc_14015EECC
 * 000000014015ED31: test    cs:KiKvaShadow, 1
 * 000000014015ED38: jnz     short loc_14015ED3D
 * 000000014015ED3A: swapgs
 * 000000014015ED3D: mov     r10, gs:188h
 * 000000014015ED46: test    byte ptr gs:2EB0h, 1
 * 000000014015ED4F: jz      loc_14015EEB7
 * 000000014015ED55: mov     rcx, gs:188h
 * 000000014015ED5E: mov     rcx, [rcx+220h]
 * 000000014015ED65: mov     rcx, [rcx+790h]
 * 000000014015ED6C: mov     gs:2EA8h, rcx
 * 000000014015ED75: mov     ecx, 48h ; 'H'
 * 000000014015ED7A: rdmsr
 * 000000014015ED7C: mov     [rbp+0E8h+var_13E], al
 * 000000014015ED7F: mov     eax, 1
 * 000000014015ED84: xor     edx, edx
 * 000000014015ED86: wrmsr
 * 000000014015ED88: test    byte ptr gs:2EB0h, 4
 * 000000014015ED91: jnz     loc_14015EEB7
 * 000000014015ED97: call    loc_14015EEAA
 * 000000014015ED9C: add     rsp, 8
 * 000000014015EDA0: call    loc_14015EEB3
 * 000000014015EDA5: add     rsp, 8
 * 000000014015EDA9: call    loc_14015ED9C
 * 000000014015EDAE: add     rsp, 8
 * 000000014015EDB2: call    loc_14015EDA5
 * 000000014015EDB7: add     rsp, 8
 * 000000014015EDBB: call    loc_14015EDAE
 * 000000014015EDC0: add     rsp, 8
 * 000000014015EDC4: call    loc_14015EDB7
 * 000000014015EDC9: add     rsp, 8
 * 000000014015EDCD: call    loc_14015EDC0
 * 000000014015EDD2: add     rsp, 8
 * 000000014015EDD6: call    loc_14015EDC9
 * 000000014015EDDB: add     rsp, 8
 * 000000014015EDDF: call    loc_14015EDD2
 * 000000014015EDE4: add     rsp, 8
 * 000000014015EDE8: call    loc_14015EDDB
 * 000000014015EDED: add     rsp, 8
 * 000000014015EDF1: call    loc_14015EDE4
 * 000000014015EDF6: add     rsp, 8
 * 000000014015EDFA: call    loc_14015EDED
 * 000000014015EDFF: add     rsp, 8
 * 000000014015EE03: call    loc_14015EDF6
 * 000000014015EE08: add     rsp, 8
 * 000000014015EE0C: call    loc_14015EDFF
 * 000000014015EE11: add     rsp, 8
 * 000000014015EE15: call    loc_14015EE08
 * 000000014015EE1A: add     rsp, 8
 * 000000014015EE1E: call    loc_14015EE11
 * 000000014015EE23: add     rsp, 8
 * 000000014015EE27: call    loc_14015EE1A
 * 000000014015EE2C: add     rsp, 8
 * 000000014015EE30: call    loc_14015EE23
 * 000000014015EE35: add     rsp, 8
 * 000000014015EE39: call    loc_14015EE2C
 * 000000014015EE3E: add     rsp, 8
 * 000000014015EE42: call    loc_14015EE35
 * 000000014015EE47: add     rsp, 8
 * 000000014015EE4B: call    loc_14015EE3E
 * 000000014015EE50: add     rsp, 8
 * 000000014015EE54: call    loc_14015EE47
 * 000000014015EE59: add     rsp, 8
 * 000000014015EE5D: call    loc_14015EE50
 * 000000014015EE62: add     rsp, 8
 * 000000014015EE66: call    loc_14015EE59
 * 000000014015EE6B: add     rsp, 8
 * 000000014015EE6F: call    loc_14015EE62
 * 000000014015EE74: add     rsp, 8
 * 000000014015EE78: call    loc_14015EE6B
 * 000000014015EE7D: add     rsp, 8
 * 000000014015EE81: call    loc_14015EE74
 * 000000014015EE86: add     rsp, 8
 * 000000014015EE8A: call    loc_14015EE7D
 * 000000014015EE8F: add     rsp, 8
 * 000000014015EE93: call    loc_14015EE86
 * 000000014015EE98: add     rsp, 8
 * 000000014015EE9C: call    loc_14015EE8F
 * 000000014015EEA1: add     rsp, 8
 * 000000014015EEA5: call    loc_14015EE98
 * 000000014015EEAA: add     rsp, 8
 * 000000014015EEAE: call    loc_14015EEA1
 * 000000014015EEB3: add     rsp, 8
 * 000000014015EEB7: test    byte ptr [r10+3], 3
 * 000000014015EEBC: mov     [rbp+0E8h+var_68], 0
 * 000000014015EEC5: jz      short loc_14015EECC
 * 000000014015EEC7: call    KiSaveDebugRegisterState
 * 000000014015EECC: cld
 * 000000014015EECD: lfence
 * 000000014015EED0: stmxcsr [rbp+0E8h+var_13C]
 * 000000014015EED4: ldmxcsr dword ptr gs:180h
 * 000000014015EEDD: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014015EEE1: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014015EEE5: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014015EEE9: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014015EEED: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014015EEF1: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014015EEF5: cmp     byte ptr gs:5C9Ah, 0
 * 000000014015EEFE: jz      short loc_14015EF05
 * 000000014015EF00: call    KeWakeProcessor
 * 000000014015EF05: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014015EF0C: cmp     rax, [rbp+0E8h]
 * 000000014015EF13: jnb     short loc_14015EF2E
 * 000000014015EF15: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014015EF1C: cmp     rax, [rbp+0E8h]
 * 000000014015EF23: jb      short loc_14015EF2E
 * 000000014015EF25: lea     rcx, [rbp+0E8h+var_168]
 * 000000014015EF29: call    KiCheckForSListAddress
 * 000000014015EF2E: xor     esi, esi
 * 000000014015EF30: inc     dword ptr gs:5C80h
 * 000000014015EF38: mov     ecx, 0Fh
 * 000000014015EF3D: mov     rax, cr8
 * 000000014015EF41: mov     cr8, rcx
 * 000000014015EF45: mov     [rbp+0E8h+var_13F], al
 * 000000014015EF48: bts     word ptr gs:59E6h, 0
 * 000000014015EF53: jb      KiNmiInterruptEnd
 * 000000014015EF59: test    [rbp+0E8h+arg_0], 1
 * 000000014015EF60: jnz     short loc_14015EF86
 * 000000014015EF62: lea     rax, KiNmiInterruptStart
 * 000000014015EF69: cmp     rax, [rbp+0E8h]
 * 000000014015EF70: ja      short loc_14015EF86
 * 000000014015EF72: lea     rax, KiNmiInterruptEnd
 * 000000014015EF79: cmp     rax, [rbp+0E8h]
 * 000000014015EF80: ja      KiNmiInterruptEnd
 * 000000014015EF86: lea     rax, KiNmiInterruptShadow
 * 000000014015EF8D: cmp     rax, [rbp+0E8h]
 * 000000014015EF94: ja      short loc_14015EFAA
 * 000000014015EF96: lea     rax, KiNmiInterruptShadowEnd
 * 000000014015EF9D: cmp     rax, [rbp+0E8h]
 * 000000014015EFA4: ja      KiNmiInterruptEnd
 * 000000014015EFAA: call    KxNmiInterrupt
 * 000000014015EFAF: and     byte ptr gs:59E6h, 0
 * 000000014015EFB8: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014015EFBC: mov     cr8, rcx
 * 000000014015EFC0: mov     rsi, [rbp+0E8h+var_18]
 * 000000014015EFC7: test    [rbp+0E8h+arg_0], 1
 * 000000014015EFCE: jz      loc_14015F08A
 * 000000014015EFD4: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014015EFD8: cmp     [rbp+0E8h+var_68], 0
 * 000000014015EFE0: jz      short loc_14015EFE7
 * 000000014015EFE2: call    KiRestoreDebugRegisterState
 * 000000014015EFE7: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014015EFEB: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014015EFEF: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014015EFF3: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014015EFF7: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014015EFFB: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014015EFFF: mov     r11, [rbp+0E8h+var_108]
 * 000000014015F003: mov     r10, [rbp+0E8h+var_110]
 * 000000014015F007: mov     r9, [rbp+0E8h+var_118]
 * 000000014015F00B: mov     r8, [rbp+0E8h+var_120]
 * 000000014015F00F: movzx   eax, [rbp+0E8h+var_13E]
 * 000000014015F013: test    byte ptr gs:2EB0h, 1
 * 000000014015F01C: jz      short loc_14015F05A
 * 000000014015F01E: xor     edx, edx
 * 000000014015F020: mov     ecx, 48h ; 'H'
 * 000000014015F025: wrmsr
 * 000000014015F027: mov     rax, gs:2EA8h
 * 000000014015F030: test    rax, rax
 * 000000014015F033: jz      short loc_14015F05A
 * 000000014015F035: mov     rcx, gs:188h
 * 000000014015F03E: mov     rcx, [rcx+220h]
 * 000000014015F045: cmp     rax, [rcx+790h]
 * 000000014015F04C: jz      short loc_14015F05A
 * 000000014015F04E: mov     eax, 1
 * 000000014015F053: mov     ecx, 49h ; 'I'
 * 000000014015F058: wrmsr
 * 000000014015F05A: mov     rdx, [rbp+0E8h+var_128]
 * 000000014015F05E: mov     rcx, [rbp+0E8h+var_130]
 * 000000014015F062: mov     rax, [rbp+0E8h+var_138]
 * 000000014015F066: mov     rsp, rbp
 * 000000014015F069: mov     rbp, [rbp+0E8h+var_10]
 * 000000014015F070: add     rsp, 0E8h
 * 000000014015F077: test    cs:KiKvaShadow, 1
 * 000000014015F07E: jz      short loc_14015F085
 * 000000014015F080: jmp     KiKernelIstExit
 * 000000014015F085: swapgs
 * 000000014015F088: iretq
 * 000000014015F08A: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014015F08E: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014015F092: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014015F096: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014015F09A: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014015F09E: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014015F0A2: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014015F0A6: movzx   eax, [rbp+0E8h+var_13E]
 * 000000014015F0AA: test    byte ptr gs:2EB0h, 1
 * 000000014015F0B3: jz      short loc_14015F0BE
 * 000000014015F0B5: xor     edx, edx
 * 000000014015F0B7: mov     ecx, 48h ; 'H'
 * 000000014015F0BC: wrmsr
 * 000000014015F0BE: mov     eax, [rbp+0E8h+var_100]
 * 000000014015F0C1: mov     edx, [rbp+0E8h+var_FC]
 * 000000014015F0C4: mov     ecx, 0C0000101h
 * 000000014015F0C9: wrmsr
 * 000000014015F0CB: mov     rax, [rbp+0E8h+var_98]
 * 000000014015F0CF: mov     cr2, rax
 * 000000014015F0D2: mov     r11, [rbp+0E8h+var_108]
 * 000000014015F0D6: mov     r10, [rbp+0E8h+var_110]
 * 000000014015F0DA: mov     r9, [rbp+0E8h+var_118]
 * 000000014015F0DE: mov     r8, [rbp+0E8h+var_120]
 * 000000014015F0E2: mov     rdx, [rbp+0E8h+var_128]
 * 000000014015F0E6: mov     rcx, [rbp+0E8h+var_130]
 * 000000014015F0EA: mov     rax, [rbp+0E8h+var_138]
 * 000000014015F0EE: mov     rsp, rbp
 * 000000014015F0F1: mov     rbp, [rbp+0E8h+var_10]
 * 000000014015F0F8: add     rsp, 0E8h
 * 000000014015F0FF: test    cs:KiKvaShadow, 1
 * 000000014015F106: jz      short locret_14015F10D
 * 000000014015F108: jmp     KiKernelIstExit
 * 000000014015F10D: iretq
 * 000000014015F10F: xor     r10, r10
 * 000000014015F112: xor     r9, r9
 * 000000014015F115: xor     r8, r8
 * 000000014015F118: xor     edx, edx
 * 000000014015F11A: mov     ecx, 111h
 * 000000014015F11F: call    KiBugCheckDispatch
 */
