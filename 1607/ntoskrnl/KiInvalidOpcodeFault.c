/*
 * XREFs of KiInvalidOpcodeFault @ 0x14016A900
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x14023F300 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x14016A900 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x1401708C0 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140170D40 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x14016A900
 * Reason: Hex-Rays returned no pseudocode for 0x14016A900
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016A900: sub     rsp, 8
 * 000000014016A904: push    rbp
 * 000000014016A905: sub     rsp, 158h
 * 000000014016A90C: lea     rbp, [rsp+80h]
 * 000000014016A914: mov     [rbp+0E8h+var_13D], 1
 * 000000014016A918: mov     [rbp+0E8h+var_138], rax
 * 000000014016A91C: mov     [rbp+0E8h+var_130], rcx
 * 000000014016A920: mov     [rbp+0E8h+var_128], rdx
 * 000000014016A924: mov     [rbp+0E8h+var_120], r8
 * 000000014016A928: mov     [rbp+0E8h+var_118], r9
 * 000000014016A92C: mov     [rbp+0E8h+var_110], r10
 * 000000014016A930: mov     [rbp+0E8h+var_108], r11
 * 000000014016A934: test    [rbp+0E8h+arg_0], 1
 * 000000014016A93B: jnz     short loc_14016A96C
 * 000000014016A93D: lfence
 * 000000014016A940: test    word ptr gs:2EB8h, 1
 * 000000014016A94B: jnz     short loc_14016A955
 * 000000014016A94D: lfence
 * 000000014016A950: jmp     loc_14016AB91
 * 000000014016A955: movzx   eax, word ptr gs:2EBCh
 * 000000014016A95E: mov     ecx, 48h ; 'H'
 * 000000014016A963: xor     edx, edx
 * 000000014016A965: wrmsr
 * 000000014016A967: jmp     loc_14016AB91
 * 000000014016A96C: test    cs:KiKvaShadow, 1
 * 000000014016A973: jnz     short loc_14016A978
 * 000000014016A975: swapgs
 * 000000014016A978: lfence
 * 000000014016A97B: mov     r10, gs:188h
 * 000000014016A984: mov     rcx, gs:188h
 * 000000014016A98D: mov     rcx, [rcx+220h]
 * 000000014016A994: mov     rcx, [rcx+7B8h]
 * 000000014016A99B: mov     gs:2EB0h, rcx
 * 000000014016A9A4: movzx   eax, word ptr gs:2EBEh
 * 000000014016A9AD: cmp     gs:2EBCh, ax
 * 000000014016A9B6: jz      short loc_14016A9CA
 * 000000014016A9B8: mov     gs:2EBCh, ax
 * 000000014016A9C1: mov     ecx, 48h ; 'H'
 * 000000014016A9C6: xor     edx, edx
 * 000000014016A9C8: wrmsr
 * 000000014016A9CA: movzx   edx, word ptr gs:2EB8h
 * 000000014016A9D3: test    edx, 8
 * 000000014016A9D9: jz      short loc_14016A9F2
 * 000000014016A9DB: mov     eax, 1
 * 000000014016A9E0: xor     edx, edx
 * 000000014016A9E2: mov     ecx, 49h ; 'I'
 * 000000014016A9E7: wrmsr
 * 000000014016A9E9: movzx   edx, word ptr gs:2EB8h
 * 000000014016A9F2: test    edx, 2
 * 000000014016A9F8: jz      loc_14016AB23
 * 000000014016A9FE: call    loc_14016AB11
 * 000000014016AA03: add     rsp, 8
 * 000000014016AA07: call    loc_14016AB1A
 * 000000014016AA0C: add     rsp, 8
 * 000000014016AA10: call    loc_14016AA03
 * 000000014016AA15: add     rsp, 8
 * 000000014016AA19: call    loc_14016AA0C
 * 000000014016AA1E: add     rsp, 8
 * 000000014016AA22: call    loc_14016AA15
 * 000000014016AA27: add     rsp, 8
 * 000000014016AA2B: call    loc_14016AA1E
 * 000000014016AA30: add     rsp, 8
 * 000000014016AA34: call    loc_14016AA27
 * 000000014016AA39: add     rsp, 8
 * 000000014016AA3D: call    loc_14016AA30
 * 000000014016AA42: add     rsp, 8
 * 000000014016AA46: call    loc_14016AA39
 * 000000014016AA4B: add     rsp, 8
 * 000000014016AA4F: call    loc_14016AA42
 * 000000014016AA54: add     rsp, 8
 * 000000014016AA58: call    loc_14016AA4B
 * 000000014016AA5D: add     rsp, 8
 * 000000014016AA61: call    loc_14016AA54
 * 000000014016AA66: add     rsp, 8
 * 000000014016AA6A: call    loc_14016AA5D
 * 000000014016AA6F: add     rsp, 8
 * 000000014016AA73: call    loc_14016AA66
 * 000000014016AA78: add     rsp, 8
 * 000000014016AA7C: call    loc_14016AA6F
 * 000000014016AA81: add     rsp, 8
 * 000000014016AA85: call    loc_14016AA78
 * 000000014016AA8A: add     rsp, 8
 * 000000014016AA8E: call    loc_14016AA81
 * 000000014016AA93: add     rsp, 8
 * 000000014016AA97: call    loc_14016AA8A
 * 000000014016AA9C: add     rsp, 8
 * 000000014016AAA0: call    loc_14016AA93
 * 000000014016AAA5: add     rsp, 8
 * 000000014016AAA9: call    loc_14016AA9C
 * 000000014016AAAE: add     rsp, 8
 * 000000014016AAB2: call    loc_14016AAA5
 * 000000014016AAB7: add     rsp, 8
 * 000000014016AABB: call    loc_14016AAAE
 * 000000014016AAC0: add     rsp, 8
 * 000000014016AAC4: call    loc_14016AAB7
 * 000000014016AAC9: add     rsp, 8
 * 000000014016AACD: call    loc_14016AAC0
 * 000000014016AAD2: add     rsp, 8
 * 000000014016AAD6: call    loc_14016AAC9
 * 000000014016AADB: add     rsp, 8
 * 000000014016AADF: call    loc_14016AAD2
 * 000000014016AAE4: add     rsp, 8
 * 000000014016AAE8: call    loc_14016AADB
 * 000000014016AAED: add     rsp, 8
 * 000000014016AAF1: call    loc_14016AAE4
 * 000000014016AAF6: add     rsp, 8
 * 000000014016AAFA: call    loc_14016AAED
 * 000000014016AAFF: add     rsp, 8
 * 000000014016AB03: call    loc_14016AAF6
 * 000000014016AB08: add     rsp, 8
 * 000000014016AB0C: call    loc_14016AAFF
 * 000000014016AB11: add     rsp, 8
 * 000000014016AB15: call    loc_14016AB08
 * 000000014016AB1A: add     rsp, 8
 * 000000014016AB1E: mov     eax, 0DADAh
 * 000000014016AB23: test    edx, 100h
 * 000000014016AB29: jz      short loc_14016AB30
 * 000000014016AB2B: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016AB30: lfence
 * 000000014016AB33: test    byte ptr [r10+3], 80h
 * 000000014016AB38: jz      short loc_14016AB7C
 * 000000014016AB3A: mov     ecx, 0C0000102h
 * 000000014016AB3F: rdmsr
 * 000000014016AB41: shl     rdx, 20h
 * 000000014016AB45: or      rax, rdx
 * 000000014016AB48: cmp     rax, cs:MmUserProbeAddress
 * 000000014016AB4F: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016AB57: cmp     [r10+0F0h], rax
 * 000000014016AB5E: jz      short loc_14016AB7C
 * 000000014016AB60: mov     rdx, [r10+1F0h]
 * 000000014016AB67: bts     dword ptr [r10+74h], 8
 * 000000014016AB6D: dec     word ptr [r10+1E6h]
 * 000000014016AB75: mov     [rdx+80h], rax
 * 000000014016AB7C: test    byte ptr [r10+3], 3
 * 000000014016AB81: mov     [rbp+0E8h+var_68], 0
 * 000000014016AB8A: jz      short loc_14016AB91
 * 000000014016AB8C: call    KiSaveDebugRegisterState
 * 000000014016AB91: cld
 * 000000014016AB92: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016AB96: ldmxcsr dword ptr gs:180h
 * 000000014016AB9F: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016ABA3: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016ABA7: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014016ABAB: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014016ABAF: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016ABB3: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016ABB7: test    [rbp+0E8h+arg_8], 200h
 * 000000014016ABC1: jz      short loc_14016ABC4
 * 000000014016ABC3: sti
 * 000000014016ABC4: mov     r9, gs:188h
 * 000000014016ABCD: bt      dword ptr [r9+74h], 8
 * 000000014016ABD3: jnb     short loc_14016ABE3
 * 000000014016ABD5: test    [rbp+0E8h+arg_0], 1
 * 000000014016ABDC: jz      short loc_14016ABE3
 * 000000014016ABDE: call    KiUmsTrapEntry
 * 000000014016ABE3: mov     ecx, 10000002h
 * 000000014016ABE8: xor     edx, edx
 * 000000014016ABEA: mov     r8, [rbp+0E8h]
 * 000000014016ABF1: call    KiExceptionDispatch
 * 000000014016ABF6: nop
 * 000000014016ABF7: cli
 * 000000014016ABF8: test    [rbp+0E8h+arg_0], 1
 * 000000014016ABFF: jz      loc_14016AE89
 * 000000014016AC05: mov     rcx, gs:188h
 * 000000014016AC0E: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016AC15: jz      short loc_14016AC30
 * 000000014016AC17: mov     ecx, 1
 * 000000014016AC1C: mov     cr8, rcx
 * 000000014016AC20: sti
 * 000000014016AC21: call    KiInitiateUserApc
 * 000000014016AC26: cli
 * 000000014016AC27: mov     ecx, 0
 * 000000014016AC2C: mov     cr8, rcx
 * 000000014016AC30: mov     rcx, gs:188h
 * 000000014016AC39: test    dword ptr [rcx], 8000000h
 * 000000014016AC3F: jz      short loc_14016AC46
 * 000000014016AC41: call    KiRestoreSetContextState
 * 000000014016AC46: mov     rcx, gs:188h
 * 000000014016AC4F: test    dword ptr [rcx], 40010000h
 * 000000014016AC55: jz      short loc_14016AC7C
 * 000000014016AC57: test    byte ptr [rcx+2], 1
 * 000000014016AC5B: jz      short loc_14016AC6B
 * 000000014016AC5D: call    KiCopyCounters
 * 000000014016AC62: mov     rcx, gs:188h
 * 000000014016AC6B: test    byte ptr [rcx+3], 40h
 * 000000014016AC6F: jz      short loc_14016AC7C
 * 000000014016AC71: lea     rsp, [rbp-80h]
 * 000000014016AC75: mov     cl, 1
 * 000000014016AC77: call    KiUmsExit
 * 000000014016AC7C: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016AC80: cmp     [rbp+0E8h+var_68], 0
 * 000000014016AC88: jz      short loc_14016AC8F
 * 000000014016AC8A: call    KiRestoreDebugRegisterState
 * 000000014016AC8F: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016AC93: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014016AC97: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014016AC9B: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016AC9F: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016ACA3: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014016ACA7: mov     r11, [rbp+0E8h+var_108]
 * 000000014016ACAB: mov     r10, [rbp+0E8h+var_110]
 * 000000014016ACAF: mov     r9, [rbp+0E8h+var_118]
 * 000000014016ACB3: mov     r8, [rbp+0E8h+var_120]
 * 000000014016ACB7: movzx   eax, word ptr gs:2EC2h
 * 000000014016ACC0: cmp     gs:2EBCh, ax
 * 000000014016ACC9: jz      short loc_14016ACDD
 * 000000014016ACCB: mov     gs:2EBCh, ax
 * 000000014016ACD4: mov     ecx, 48h ; 'H'
 * 000000014016ACD9: xor     edx, edx
 * 000000014016ACDB: wrmsr
 * 000000014016ACDD: btr     word ptr gs:2EB8h, 2
 * 000000014016ACE8: jnb     short loc_14016ACF8
 * 000000014016ACEA: mov     eax, 1
 * 000000014016ACEF: xor     edx, edx
 * 000000014016ACF1: mov     ecx, 49h ; 'I'
 * 000000014016ACF6: wrmsr
 * 000000014016ACF8: btr     word ptr gs:2EB8h, 5
 * 000000014016AD03: jnb     loc_14016AE2E
 * 000000014016AD09: call    loc_14016AE1C
 * 000000014016AD0E: add     rsp, 8
 * 000000014016AD12: call    loc_14016AE25
 * 000000014016AD17: add     rsp, 8
 * 000000014016AD1B: call    loc_14016AD0E
 * 000000014016AD20: add     rsp, 8
 * 000000014016AD24: call    loc_14016AD17
 * 000000014016AD29: add     rsp, 8
 * 000000014016AD2D: call    loc_14016AD20
 * 000000014016AD32: add     rsp, 8
 * 000000014016AD36: call    loc_14016AD29
 * 000000014016AD3B: add     rsp, 8
 * 000000014016AD3F: call    loc_14016AD32
 * 000000014016AD44: add     rsp, 8
 * 000000014016AD48: call    loc_14016AD3B
 * 000000014016AD4D: add     rsp, 8
 * 000000014016AD51: call    loc_14016AD44
 * 000000014016AD56: add     rsp, 8
 * 000000014016AD5A: call    loc_14016AD4D
 * 000000014016AD5F: add     rsp, 8
 * 000000014016AD63: call    loc_14016AD56
 * 000000014016AD68: add     rsp, 8
 * 000000014016AD6C: call    loc_14016AD5F
 * 000000014016AD71: add     rsp, 8
 * 000000014016AD75: call    loc_14016AD68
 * 000000014016AD7A: add     rsp, 8
 * 000000014016AD7E: call    loc_14016AD71
 * 000000014016AD83: add     rsp, 8
 * 000000014016AD87: call    loc_14016AD7A
 * 000000014016AD8C: add     rsp, 8
 * 000000014016AD90: call    loc_14016AD83
 * 000000014016AD95: add     rsp, 8
 * 000000014016AD99: call    loc_14016AD8C
 * 000000014016AD9E: add     rsp, 8
 * 000000014016ADA2: call    loc_14016AD95
 * 000000014016ADA7: add     rsp, 8
 * 000000014016ADAB: call    loc_14016AD9E
 * 000000014016ADB0: add     rsp, 8
 * 000000014016ADB4: call    loc_14016ADA7
 * 000000014016ADB9: add     rsp, 8
 * 000000014016ADBD: call    loc_14016ADB0
 * 000000014016ADC2: add     rsp, 8
 * 000000014016ADC6: call    loc_14016ADB9
 * 000000014016ADCB: add     rsp, 8
 * 000000014016ADCF: call    loc_14016ADC2
 * 000000014016ADD4: add     rsp, 8
 * 000000014016ADD8: call    loc_14016ADCB
 * 000000014016ADDD: add     rsp, 8
 * 000000014016ADE1: call    loc_14016ADD4
 * 000000014016ADE6: add     rsp, 8
 * 000000014016ADEA: call    loc_14016ADDD
 * 000000014016ADEF: add     rsp, 8
 * 000000014016ADF3: call    loc_14016ADE6
 * 000000014016ADF8: add     rsp, 8
 * 000000014016ADFC: call    loc_14016ADEF
 * 000000014016AE01: add     rsp, 8
 * 000000014016AE05: call    loc_14016ADF8
 * 000000014016AE0A: add     rsp, 8
 * 000000014016AE0E: call    loc_14016AE01
 * 000000014016AE13: add     rsp, 8
 * 000000014016AE17: call    loc_14016AE0A
 * 000000014016AE1C: add     rsp, 8
 * 000000014016AE20: call    loc_14016AE13
 * 000000014016AE25: add     rsp, 8
 * 000000014016AE29: mov     eax, 0DADAh
 * 000000014016AE2E: test    word ptr gs:2EB8h, 40h
 * 000000014016AE39: jz      short loc_14016AE47
 * 000000014016AE3B: xor     eax, eax
 * 000000014016AE3D: xor     edx, edx
 * 000000014016AE3F: mov     ecx, 1
 * 000000014016AE44: div     rcx
 * 000000014016AE47: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016AE4B: mov     rcx, [rbp+0E8h+var_130]
 * 000000014016AE4F: mov     rax, [rbp+0E8h+var_138]
 * 000000014016AE53: mov     rsp, rbp
 * 000000014016AE56: mov     rbp, [rbp+0E8h+var_10]
 * 000000014016AE5D: add     rsp, 0E8h
 * 000000014016AE64: test    cs:KiKvaShadow, 1
 * 000000014016AE6B: jz      short loc_14016AE72
 * 000000014016AE6D: jmp     KiKernelExit
 * 000000014016AE72: test    word ptr gs:2EB8h, 80h
 * 000000014016AE7D: jz      short loc_14016AE84
 * 000000014016AE7F: verw    [rsp+arg_18]
 * 000000014016AE84: swapgs
 * 000000014016AE87: iretq
 * 000000014016AE89: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016AE8D: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016AE91: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014016AE95: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014016AE99: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016AE9D: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016AEA1: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014016AEA5: mov     r11, [rbp+0E8h+var_108]
 * 000000014016AEA9: mov     r10, [rbp+0E8h+var_110]
 * 000000014016AEAD: mov     r9, [rbp+0E8h+var_118]
 * 000000014016AEB1: mov     r8, [rbp+0E8h+var_120]
 * 000000014016AEB5: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016AEB9: mov     rcx, [rbp+0E8h+var_130]
 * 000000014016AEBD: mov     rax, [rbp+0E8h+var_138]
 * 000000014016AEC1: mov     rsp, rbp
 * 000000014016AEC4: mov     rbp, [rbp+0E8h+var_10]
 * 000000014016AECB: add     rsp, 0E8h
 * 000000014016AED2: iretq
 */
