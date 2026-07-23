/*
 * XREFs of KiBoundFault @ 0x14016A7C0
 * Callers:
 *     KiBoundFaultShadow @ 0x14023F280 (KiBoundFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x14016A7C0 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x140170100 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140170580 (KiFastFailDispatch.c)
 *     KiUmsTrapEntry @ 0x140170DC0 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140171240 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiHandleBound @ 0x1401D2A04 (KiHandleBound.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x14016A7C0
 * Reason: Hex-Rays returned no pseudocode for 0x14016A7C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016A7C0: sub     rsp, 8
 * 000000014016A7C4: push    rbp
 * 000000014016A7C5: sub     rsp, 158h
 * 000000014016A7CC: lea     rbp, [rsp+80h]
 * 000000014016A7D4: mov     [rbp+0E8h+var_13D], 1
 * 000000014016A7D8: mov     [rbp+0E8h+var_138], rax
 * 000000014016A7DC: mov     [rbp+0E8h+var_130], rcx
 * 000000014016A7E0: mov     [rbp+0E8h+var_128], rdx
 * 000000014016A7E4: mov     [rbp+0E8h+var_120], r8
 * 000000014016A7E8: mov     [rbp+0E8h+var_118], r9
 * 000000014016A7EC: mov     [rbp+0E8h+var_110], r10
 * 000000014016A7F0: mov     [rbp+0E8h+var_108], r11
 * 000000014016A7F4: test    [rbp+0E8h+arg_0], 1
 * 000000014016A7FB: jnz     short loc_14016A82C
 * 000000014016A7FD: lfence
 * 000000014016A800: test    word ptr gs:2EB8h, 1
 * 000000014016A80B: jnz     short loc_14016A815
 * 000000014016A80D: lfence
 * 000000014016A810: jmp     loc_14016AA51
 * 000000014016A815: movzx   eax, word ptr gs:2EBCh
 * 000000014016A81E: mov     ecx, 48h ; 'H'
 * 000000014016A823: xor     edx, edx
 * 000000014016A825: wrmsr
 * 000000014016A827: jmp     loc_14016AA51
 * 000000014016A82C: test    cs:KiKvaShadow, 1
 * 000000014016A833: jnz     short loc_14016A838
 * 000000014016A835: swapgs
 * 000000014016A838: lfence
 * 000000014016A83B: mov     r10, gs:188h
 * 000000014016A844: mov     rcx, gs:188h
 * 000000014016A84D: mov     rcx, [rcx+220h]
 * 000000014016A854: mov     rcx, [rcx+7B8h]
 * 000000014016A85B: mov     gs:2EB0h, rcx
 * 000000014016A864: movzx   eax, word ptr gs:2EBEh
 * 000000014016A86D: cmp     gs:2EBCh, ax
 * 000000014016A876: jz      short loc_14016A88A
 * 000000014016A878: mov     gs:2EBCh, ax
 * 000000014016A881: mov     ecx, 48h ; 'H'
 * 000000014016A886: xor     edx, edx
 * 000000014016A888: wrmsr
 * 000000014016A88A: movzx   edx, word ptr gs:2EB8h
 * 000000014016A893: test    edx, 8
 * 000000014016A899: jz      short loc_14016A8B2
 * 000000014016A89B: mov     eax, 1
 * 000000014016A8A0: xor     edx, edx
 * 000000014016A8A2: mov     ecx, 49h ; 'I'
 * 000000014016A8A7: wrmsr
 * 000000014016A8A9: movzx   edx, word ptr gs:2EB8h
 * 000000014016A8B2: test    edx, 2
 * 000000014016A8B8: jz      loc_14016A9E3
 * 000000014016A8BE: call    loc_14016A9D1
 * 000000014016A8C3: add     rsp, 8
 * 000000014016A8C7: call    loc_14016A9DA
 * 000000014016A8CC: add     rsp, 8
 * 000000014016A8D0: call    loc_14016A8C3
 * 000000014016A8D5: add     rsp, 8
 * 000000014016A8D9: call    loc_14016A8CC
 * 000000014016A8DE: add     rsp, 8
 * 000000014016A8E2: call    loc_14016A8D5
 * 000000014016A8E7: add     rsp, 8
 * 000000014016A8EB: call    loc_14016A8DE
 * 000000014016A8F0: add     rsp, 8
 * 000000014016A8F4: call    loc_14016A8E7
 * 000000014016A8F9: add     rsp, 8
 * 000000014016A8FD: call    loc_14016A8F0
 * 000000014016A902: add     rsp, 8
 * 000000014016A906: call    loc_14016A8F9
 * 000000014016A90B: add     rsp, 8
 * 000000014016A90F: call    loc_14016A902
 * 000000014016A914: add     rsp, 8
 * 000000014016A918: call    loc_14016A90B
 * 000000014016A91D: add     rsp, 8
 * 000000014016A921: call    loc_14016A914
 * 000000014016A926: add     rsp, 8
 * 000000014016A92A: call    loc_14016A91D
 * 000000014016A92F: add     rsp, 8
 * 000000014016A933: call    loc_14016A926
 * 000000014016A938: add     rsp, 8
 * 000000014016A93C: call    loc_14016A92F
 * 000000014016A941: add     rsp, 8
 * 000000014016A945: call    loc_14016A938
 * 000000014016A94A: add     rsp, 8
 * 000000014016A94E: call    loc_14016A941
 * 000000014016A953: add     rsp, 8
 * 000000014016A957: call    loc_14016A94A
 * 000000014016A95C: add     rsp, 8
 * 000000014016A960: call    loc_14016A953
 * 000000014016A965: add     rsp, 8
 * 000000014016A969: call    loc_14016A95C
 * 000000014016A96E: add     rsp, 8
 * 000000014016A972: call    loc_14016A965
 * 000000014016A977: add     rsp, 8
 * 000000014016A97B: call    loc_14016A96E
 * 000000014016A980: add     rsp, 8
 * 000000014016A984: call    loc_14016A977
 * 000000014016A989: add     rsp, 8
 * 000000014016A98D: call    loc_14016A980
 * 000000014016A992: add     rsp, 8
 * 000000014016A996: call    loc_14016A989
 * 000000014016A99B: add     rsp, 8
 * 000000014016A99F: call    loc_14016A992
 * 000000014016A9A4: add     rsp, 8
 * 000000014016A9A8: call    loc_14016A99B
 * 000000014016A9AD: add     rsp, 8
 * 000000014016A9B1: call    loc_14016A9A4
 * 000000014016A9B6: add     rsp, 8
 * 000000014016A9BA: call    loc_14016A9AD
 * 000000014016A9BF: add     rsp, 8
 * 000000014016A9C3: call    loc_14016A9B6
 * 000000014016A9C8: add     rsp, 8
 * 000000014016A9CC: call    loc_14016A9BF
 * 000000014016A9D1: add     rsp, 8
 * 000000014016A9D5: call    loc_14016A9C8
 * 000000014016A9DA: add     rsp, 8
 * 000000014016A9DE: mov     eax, 0DADAh
 * 000000014016A9E3: test    edx, 100h
 * 000000014016A9E9: jz      short loc_14016A9F0
 * 000000014016A9EB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016A9F0: lfence
 * 000000014016A9F3: test    byte ptr [r10+3], 80h
 * 000000014016A9F8: jz      short loc_14016AA3C
 * 000000014016A9FA: mov     ecx, 0C0000102h
 * 000000014016A9FF: rdmsr
 * 000000014016AA01: shl     rdx, 20h
 * 000000014016AA05: or      rax, rdx
 * 000000014016AA08: cmp     rax, cs:MmUserProbeAddress
 * 000000014016AA0F: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016AA17: cmp     [r10+0F0h], rax
 * 000000014016AA1E: jz      short loc_14016AA3C
 * 000000014016AA20: mov     rdx, [r10+1F0h]
 * 000000014016AA27: bts     dword ptr [r10+74h], 8
 * 000000014016AA2D: dec     word ptr [r10+1E6h]
 * 000000014016AA35: mov     [rdx+80h], rax
 * 000000014016AA3C: test    byte ptr [r10+3], 3
 * 000000014016AA41: mov     [rbp+0E8h+var_68], 0
 * 000000014016AA4A: jz      short loc_14016AA51
 * 000000014016AA4C: call    KiSaveDebugRegisterState
 * 000000014016AA51: cld
 * 000000014016AA52: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016AA56: ldmxcsr dword ptr gs:180h
 * 000000014016AA5F: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016AA63: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016AA67: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014016AA6B: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014016AA6F: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016AA73: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016AA77: test    [rbp+0E8h+arg_8], 200h
 * 000000014016AA81: jz      short loc_14016AA84
 * 000000014016AA83: sti
 * 000000014016AA84: test    [rbp+0E8h+arg_0], 1
 * 000000014016AA8B: jz      short loc_14016AAE4
 * 000000014016AA8D: mov     r9, gs:188h
 * 000000014016AA96: bt      dword ptr [r9+74h], 8
 * 000000014016AA9C: jnb     short loc_14016AAA3
 * 000000014016AA9E: call    KiUmsTrapEntry
 * 000000014016AAA3: call    KiHandleBound
 * 000000014016AAA8: cmp     eax, 0
 * 000000014016AAAB: jz      short loc_14016AAE4
 * 000000014016AAAD: cmp     eax, 1
 * 000000014016AAB0: jz      short loc_14016AAF8
 * 000000014016AAB2: cmp     eax, 2
 * 000000014016AAB5: jz      short loc_14016AAC6
 * 000000014016AAB7: mov     edx, 5
 * 000000014016AABC: mov     ecx, 7Fh
 * 000000014016AAC1: call    KiBugCheckDispatch
 * 000000014016AAC6: mov     r9, 1Ch
 * 000000014016AACD: mov     ecx, 0C0000409h
 * 000000014016AAD2: mov     edx, 1
 * 000000014016AAD7: mov     r8, [rbp+0E8h]
 * 000000014016AADE: call    KiFastFailDispatch
 * 000000014016AAE3: nop
 * 000000014016AAE4: mov     ecx, 0C000008Ch
 * 000000014016AAE9: xor     edx, edx
 * 000000014016AAEB: mov     r8, [rbp+0E8h]
 * 000000014016AAF2: call    KiExceptionDispatch
 * 000000014016AAF7: nop
 * 000000014016AAF8: cli
 * 000000014016AAF9: test    [rbp+0E8h+arg_0], 1
 * 000000014016AB00: jz      loc_14016AD8A
 * 000000014016AB06: mov     rcx, gs:188h
 * 000000014016AB0F: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016AB16: jz      short loc_14016AB31
 * 000000014016AB18: mov     ecx, 1
 * 000000014016AB1D: mov     cr8, rcx
 * 000000014016AB21: sti
 * 000000014016AB22: call    KiInitiateUserApc
 * 000000014016AB27: cli
 * 000000014016AB28: mov     ecx, 0
 * 000000014016AB2D: mov     cr8, rcx
 * 000000014016AB31: mov     rcx, gs:188h
 * 000000014016AB3A: test    dword ptr [rcx], 8000000h
 * 000000014016AB40: jz      short loc_14016AB47
 * 000000014016AB42: call    KiRestoreSetContextState
 * 000000014016AB47: mov     rcx, gs:188h
 * 000000014016AB50: test    dword ptr [rcx], 40010000h
 * 000000014016AB56: jz      short loc_14016AB7D
 * 000000014016AB58: test    byte ptr [rcx+2], 1
 * 000000014016AB5C: jz      short loc_14016AB6C
 * 000000014016AB5E: call    KiCopyCounters
 * 000000014016AB63: mov     rcx, gs:188h
 * 000000014016AB6C: test    byte ptr [rcx+3], 40h
 * 000000014016AB70: jz      short loc_14016AB7D
 * 000000014016AB72: lea     rsp, [rbp-80h]
 * 000000014016AB76: mov     cl, 1
 * 000000014016AB78: call    KiUmsExit
 * 000000014016AB7D: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016AB81: cmp     [rbp+0E8h+var_68], 0
 * 000000014016AB89: jz      short loc_14016AB90
 * 000000014016AB8B: call    KiRestoreDebugRegisterState
 * 000000014016AB90: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016AB94: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014016AB98: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014016AB9C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016ABA0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016ABA4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014016ABA8: mov     r11, [rbp+0E8h+var_108]
 * 000000014016ABAC: mov     r10, [rbp+0E8h+var_110]
 * 000000014016ABB0: mov     r9, [rbp+0E8h+var_118]
 * 000000014016ABB4: mov     r8, [rbp+0E8h+var_120]
 * 000000014016ABB8: movzx   eax, word ptr gs:2EC2h
 * 000000014016ABC1: cmp     gs:2EBCh, ax
 * 000000014016ABCA: jz      short loc_14016ABDE
 * 000000014016ABCC: mov     gs:2EBCh, ax
 * 000000014016ABD5: mov     ecx, 48h ; 'H'
 * 000000014016ABDA: xor     edx, edx
 * 000000014016ABDC: wrmsr
 * 000000014016ABDE: btr     word ptr gs:2EB8h, 2
 * 000000014016ABE9: jnb     short loc_14016ABF9
 * 000000014016ABEB: mov     eax, 1
 * 000000014016ABF0: xor     edx, edx
 * 000000014016ABF2: mov     ecx, 49h ; 'I'
 * 000000014016ABF7: wrmsr
 * 000000014016ABF9: btr     word ptr gs:2EB8h, 5
 * 000000014016AC04: jnb     loc_14016AD2F
 * 000000014016AC0A: call    loc_14016AD1D
 * 000000014016AC0F: add     rsp, 8
 * 000000014016AC13: call    loc_14016AD26
 * 000000014016AC18: add     rsp, 8
 * 000000014016AC1C: call    loc_14016AC0F
 * 000000014016AC21: add     rsp, 8
 * 000000014016AC25: call    loc_14016AC18
 * 000000014016AC2A: add     rsp, 8
 * 000000014016AC2E: call    loc_14016AC21
 * 000000014016AC33: add     rsp, 8
 * 000000014016AC37: call    loc_14016AC2A
 * 000000014016AC3C: add     rsp, 8
 * 000000014016AC40: call    loc_14016AC33
 * 000000014016AC45: add     rsp, 8
 * 000000014016AC49: call    loc_14016AC3C
 * 000000014016AC4E: add     rsp, 8
 * 000000014016AC52: call    loc_14016AC45
 * 000000014016AC57: add     rsp, 8
 * 000000014016AC5B: call    loc_14016AC4E
 * 000000014016AC60: add     rsp, 8
 * 000000014016AC64: call    loc_14016AC57
 * 000000014016AC69: add     rsp, 8
 * 000000014016AC6D: call    loc_14016AC60
 * 000000014016AC72: add     rsp, 8
 * 000000014016AC76: call    loc_14016AC69
 * 000000014016AC7B: add     rsp, 8
 * 000000014016AC7F: call    loc_14016AC72
 * 000000014016AC84: add     rsp, 8
 * 000000014016AC88: call    loc_14016AC7B
 * 000000014016AC8D: add     rsp, 8
 * 000000014016AC91: call    loc_14016AC84
 * 000000014016AC96: add     rsp, 8
 * 000000014016AC9A: call    loc_14016AC8D
 * 000000014016AC9F: add     rsp, 8
 * 000000014016ACA3: call    loc_14016AC96
 * 000000014016ACA8: add     rsp, 8
 * 000000014016ACAC: call    loc_14016AC9F
 * 000000014016ACB1: add     rsp, 8
 * 000000014016ACB5: call    loc_14016ACA8
 * 000000014016ACBA: add     rsp, 8
 * 000000014016ACBE: call    loc_14016ACB1
 * 000000014016ACC3: add     rsp, 8
 * 000000014016ACC7: call    loc_14016ACBA
 * 000000014016ACCC: add     rsp, 8
 * 000000014016ACD0: call    loc_14016ACC3
 * 000000014016ACD5: add     rsp, 8
 * 000000014016ACD9: call    loc_14016ACCC
 * 000000014016ACDE: add     rsp, 8
 * 000000014016ACE2: call    loc_14016ACD5
 * 000000014016ACE7: add     rsp, 8
 * 000000014016ACEB: call    loc_14016ACDE
 * 000000014016ACF0: add     rsp, 8
 * 000000014016ACF4: call    loc_14016ACE7
 * 000000014016ACF9: add     rsp, 8
 * 000000014016ACFD: call    loc_14016ACF0
 * 000000014016AD02: add     rsp, 8
 * 000000014016AD06: call    loc_14016ACF9
 * 000000014016AD0B: add     rsp, 8
 * 000000014016AD0F: call    loc_14016AD02
 * 000000014016AD14: add     rsp, 8
 * 000000014016AD18: call    loc_14016AD0B
 * 000000014016AD1D: add     rsp, 8
 * 000000014016AD21: call    loc_14016AD14
 * 000000014016AD26: add     rsp, 8
 * 000000014016AD2A: mov     eax, 0DADAh
 * 000000014016AD2F: test    word ptr gs:2EB8h, 40h
 * 000000014016AD3A: jz      short loc_14016AD48
 * 000000014016AD3C: xor     eax, eax
 * 000000014016AD3E: xor     edx, edx
 * 000000014016AD40: mov     ecx, 1
 * 000000014016AD45: div     rcx
 * 000000014016AD48: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016AD4C: mov     rcx, [rbp+0E8h+var_130]
 * 000000014016AD50: mov     rax, [rbp+0E8h+var_138]
 * 000000014016AD54: mov     rsp, rbp
 * 000000014016AD57: mov     rbp, [rbp+0E8h+var_10]
 * 000000014016AD5E: add     rsp, 0E8h
 * 000000014016AD65: test    cs:KiKvaShadow, 1
 * 000000014016AD6C: jz      short loc_14016AD73
 * 000000014016AD6E: jmp     KiKernelExit
 * 000000014016AD73: test    word ptr gs:2EB8h, 80h
 * 000000014016AD7E: jz      short loc_14016AD85
 * 000000014016AD80: verw    [rsp+arg_18]
 * 000000014016AD85: swapgs
 * 000000014016AD88: iretq
 * 000000014016AD8A: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016AD8E: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016AD92: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014016AD96: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014016AD9A: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016AD9E: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016ADA2: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014016ADA6: mov     r11, [rbp+0E8h+var_108]
 * 000000014016ADAA: mov     r10, [rbp+0E8h+var_110]
 * 000000014016ADAE: mov     r9, [rbp+0E8h+var_118]
 * 000000014016ADB2: mov     r8, [rbp+0E8h+var_120]
 * 000000014016ADB6: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016ADBA: mov     rcx, [rbp+0E8h+var_130]
 * 000000014016ADBE: mov     rax, [rbp+0E8h+var_138]
 * 000000014016ADC2: mov     rsp, rbp
 * 000000014016ADC5: mov     rbp, [rbp+0E8h+var_10]
 * 000000014016ADCC: add     rsp, 0E8h
 * 000000014016ADD3: iretq
 */
