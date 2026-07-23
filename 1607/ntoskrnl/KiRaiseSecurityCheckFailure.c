/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x14016E500
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x14023FB00 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x14016E500 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x140170580 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x14016E500
 * Reason: Hex-Rays returned no pseudocode for 0x14016E500
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016E500: sub     qword ptr [rsp+0], 2
 * 000000014016E505: sub     rsp, 8
 * 000000014016E509: push    rbp
 * 000000014016E50A: sub     rsp, 158h
 * 000000014016E511: lea     rbp, [rsp+80h]
 * 000000014016E519: mov     [rbp+0E8h+var_13D], 1
 * 000000014016E51D: mov     [rbp+0E8h+var_138], rax
 * 000000014016E521: mov     [rbp+0E8h+var_130], rcx
 * 000000014016E525: mov     [rbp+0E8h+var_128], rdx
 * 000000014016E529: mov     [rbp+0E8h+var_120], r8
 * 000000014016E52D: mov     [rbp+0E8h+var_118], r9
 * 000000014016E531: mov     [rbp+0E8h+var_110], r10
 * 000000014016E535: mov     [rbp+0E8h+var_108], r11
 * 000000014016E539: test    [rbp+0E8h+arg_0], 1
 * 000000014016E540: jnz     short loc_14016E571
 * 000000014016E542: lfence
 * 000000014016E545: test    word ptr gs:2EB8h, 1
 * 000000014016E550: jnz     short loc_14016E55A
 * 000000014016E552: lfence
 * 000000014016E555: jmp     loc_14016E796
 * 000000014016E55A: movzx   eax, word ptr gs:2EBCh
 * 000000014016E563: mov     ecx, 48h ; 'H'
 * 000000014016E568: xor     edx, edx
 * 000000014016E56A: wrmsr
 * 000000014016E56C: jmp     loc_14016E796
 * 000000014016E571: test    cs:KiKvaShadow, 1
 * 000000014016E578: jnz     short loc_14016E57D
 * 000000014016E57A: swapgs
 * 000000014016E57D: lfence
 * 000000014016E580: mov     r10, gs:188h
 * 000000014016E589: mov     rcx, gs:188h
 * 000000014016E592: mov     rcx, [rcx+220h]
 * 000000014016E599: mov     rcx, [rcx+7B8h]
 * 000000014016E5A0: mov     gs:2EB0h, rcx
 * 000000014016E5A9: movzx   eax, word ptr gs:2EBEh
 * 000000014016E5B2: cmp     gs:2EBCh, ax
 * 000000014016E5BB: jz      short loc_14016E5CF
 * 000000014016E5BD: mov     gs:2EBCh, ax
 * 000000014016E5C6: mov     ecx, 48h ; 'H'
 * 000000014016E5CB: xor     edx, edx
 * 000000014016E5CD: wrmsr
 * 000000014016E5CF: movzx   edx, word ptr gs:2EB8h
 * 000000014016E5D8: test    edx, 8
 * 000000014016E5DE: jz      short loc_14016E5F7
 * 000000014016E5E0: mov     eax, 1
 * 000000014016E5E5: xor     edx, edx
 * 000000014016E5E7: mov     ecx, 49h ; 'I'
 * 000000014016E5EC: wrmsr
 * 000000014016E5EE: movzx   edx, word ptr gs:2EB8h
 * 000000014016E5F7: test    edx, 2
 * 000000014016E5FD: jz      loc_14016E728
 * 000000014016E603: call    loc_14016E716
 * 000000014016E608: add     rsp, 8
 * 000000014016E60C: call    loc_14016E71F
 * 000000014016E611: add     rsp, 8
 * 000000014016E615: call    loc_14016E608
 * 000000014016E61A: add     rsp, 8
 * 000000014016E61E: call    loc_14016E611
 * 000000014016E623: add     rsp, 8
 * 000000014016E627: call    loc_14016E61A
 * 000000014016E62C: add     rsp, 8
 * 000000014016E630: call    loc_14016E623
 * 000000014016E635: add     rsp, 8
 * 000000014016E639: call    loc_14016E62C
 * 000000014016E63E: add     rsp, 8
 * 000000014016E642: call    loc_14016E635
 * 000000014016E647: add     rsp, 8
 * 000000014016E64B: call    loc_14016E63E
 * 000000014016E650: add     rsp, 8
 * 000000014016E654: call    loc_14016E647
 * 000000014016E659: add     rsp, 8
 * 000000014016E65D: call    loc_14016E650
 * 000000014016E662: add     rsp, 8
 * 000000014016E666: call    loc_14016E659
 * 000000014016E66B: add     rsp, 8
 * 000000014016E66F: call    loc_14016E662
 * 000000014016E674: add     rsp, 8
 * 000000014016E678: call    loc_14016E66B
 * 000000014016E67D: add     rsp, 8
 * 000000014016E681: call    loc_14016E674
 * 000000014016E686: add     rsp, 8
 * 000000014016E68A: call    loc_14016E67D
 * 000000014016E68F: add     rsp, 8
 * 000000014016E693: call    loc_14016E686
 * 000000014016E698: add     rsp, 8
 * 000000014016E69C: call    loc_14016E68F
 * 000000014016E6A1: add     rsp, 8
 * 000000014016E6A5: call    loc_14016E698
 * 000000014016E6AA: add     rsp, 8
 * 000000014016E6AE: call    loc_14016E6A1
 * 000000014016E6B3: add     rsp, 8
 * 000000014016E6B7: call    loc_14016E6AA
 * 000000014016E6BC: add     rsp, 8
 * 000000014016E6C0: call    loc_14016E6B3
 * 000000014016E6C5: add     rsp, 8
 * 000000014016E6C9: call    loc_14016E6BC
 * 000000014016E6CE: add     rsp, 8
 * 000000014016E6D2: call    loc_14016E6C5
 * 000000014016E6D7: add     rsp, 8
 * 000000014016E6DB: call    loc_14016E6CE
 * 000000014016E6E0: add     rsp, 8
 * 000000014016E6E4: call    loc_14016E6D7
 * 000000014016E6E9: add     rsp, 8
 * 000000014016E6ED: call    loc_14016E6E0
 * 000000014016E6F2: add     rsp, 8
 * 000000014016E6F6: call    loc_14016E6E9
 * 000000014016E6FB: add     rsp, 8
 * 000000014016E6FF: call    loc_14016E6F2
 * 000000014016E704: add     rsp, 8
 * 000000014016E708: call    loc_14016E6FB
 * 000000014016E70D: add     rsp, 8
 * 000000014016E711: call    loc_14016E704
 * 000000014016E716: add     rsp, 8
 * 000000014016E71A: call    loc_14016E70D
 * 000000014016E71F: add     rsp, 8
 * 000000014016E723: mov     eax, 0DADAh
 * 000000014016E728: test    edx, 100h
 * 000000014016E72E: jz      short loc_14016E735
 * 000000014016E730: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016E735: lfence
 * 000000014016E738: test    byte ptr [r10+3], 80h
 * 000000014016E73D: jz      short loc_14016E781
 * 000000014016E73F: mov     ecx, 0C0000102h
 * 000000014016E744: rdmsr
 * 000000014016E746: shl     rdx, 20h
 * 000000014016E74A: or      rax, rdx
 * 000000014016E74D: cmp     rax, cs:MmUserProbeAddress
 * 000000014016E754: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016E75C: cmp     [r10+0F0h], rax
 * 000000014016E763: jz      short loc_14016E781
 * 000000014016E765: mov     rdx, [r10+1F0h]
 * 000000014016E76C: bts     dword ptr [r10+74h], 8
 * 000000014016E772: dec     word ptr [r10+1E6h]
 * 000000014016E77A: mov     [rdx+80h], rax
 * 000000014016E781: test    byte ptr [r10+3], 3
 * 000000014016E786: mov     [rbp+0E8h+var_68], 0
 * 000000014016E78F: jz      short loc_14016E796
 * 000000014016E791: call    KiSaveDebugRegisterState
 * 000000014016E796: cld
 * 000000014016E797: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016E79B: ldmxcsr dword ptr gs:180h
 * 000000014016E7A4: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016E7A8: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016E7AC: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014016E7B0: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014016E7B4: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016E7B8: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016E7BC: test    [rbp+0E8h+arg_8], 200h
 * 000000014016E7C6: jz      short loc_14016E7C9
 * 000000014016E7C8: sti
 * 000000014016E7C9: mov     r9, [rbp+0E8h+var_130]
 * 000000014016E7CD: mov     ecx, 0C0000409h
 * 000000014016E7D2: mov     edx, 1
 * 000000014016E7D7: mov     r8, [rbp+0E8h]
 * 000000014016E7DE: call    KiFastFailDispatch
 * 000000014016E7E3: nop
 * 000000014016E7E4: retn
 */
