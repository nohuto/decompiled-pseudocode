/*
 * XREFs of KiInvalidOpcodeFault @ 0x14018F3C0
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x140274300 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x14018F3C0 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x140194D80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140195200 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x14018F3C0
 * Reason: Hex-Rays returned no pseudocode for 0x14018F3C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018F3C0: sub     rsp, 8
 * 000000014018F3C4: push    rbp
 * 000000014018F3C5: sub     rsp, 158h
 * 000000014018F3CC: lea     rbp, [rsp+80h]
 * 000000014018F3D4: mov     [rbp+0E8h+var_13D], 1
 * 000000014018F3D8: mov     [rbp+0E8h+var_138], rax
 * 000000014018F3DC: mov     [rbp+0E8h+var_130], rcx
 * 000000014018F3E0: mov     [rbp+0E8h+var_128], rdx
 * 000000014018F3E4: mov     [rbp+0E8h+var_120], r8
 * 000000014018F3E8: mov     [rbp+0E8h+var_118], r9
 * 000000014018F3EC: mov     [rbp+0E8h+var_110], r10
 * 000000014018F3F0: mov     [rbp+0E8h+var_108], r11
 * 000000014018F3F4: test    [rbp+0E8h+arg_0], 1
 * 000000014018F3FB: jnz     short loc_14018F42C
 * 000000014018F3FD: lfence
 * 000000014018F400: test    word ptr gs:2EB0h, 1
 * 000000014018F40B: jnz     short loc_14018F415
 * 000000014018F40D: lfence
 * 000000014018F410: jmp     loc_14018F651
 * 000000014018F415: movzx   eax, word ptr gs:2EB4h
 * 000000014018F41E: mov     ecx, 48h ; 'H'
 * 000000014018F423: xor     edx, edx
 * 000000014018F425: wrmsr
 * 000000014018F427: jmp     loc_14018F651
 * 000000014018F42C: test    cs:KiKvaShadow, 1
 * 000000014018F433: jnz     short loc_14018F438
 * 000000014018F435: swapgs
 * 000000014018F438: lfence
 * 000000014018F43B: mov     r10, gs:188h
 * 000000014018F444: mov     rcx, gs:188h
 * 000000014018F44D: mov     rcx, [rcx+220h]
 * 000000014018F454: mov     rcx, [rcx+7A0h]
 * 000000014018F45B: mov     gs:2EA8h, rcx
 * 000000014018F464: movzx   eax, word ptr gs:2EB6h
 * 000000014018F46D: cmp     gs:2EB4h, ax
 * 000000014018F476: jz      short loc_14018F48A
 * 000000014018F478: mov     gs:2EB4h, ax
 * 000000014018F481: mov     ecx, 48h ; 'H'
 * 000000014018F486: xor     edx, edx
 * 000000014018F488: wrmsr
 * 000000014018F48A: movzx   edx, word ptr gs:2EB0h
 * 000000014018F493: test    edx, 8
 * 000000014018F499: jz      short loc_14018F4B2
 * 000000014018F49B: mov     eax, 1
 * 000000014018F4A0: xor     edx, edx
 * 000000014018F4A2: mov     ecx, 49h ; 'I'
 * 000000014018F4A7: wrmsr
 * 000000014018F4A9: movzx   edx, word ptr gs:2EB0h
 * 000000014018F4B2: test    edx, 2
 * 000000014018F4B8: jz      loc_14018F5E3
 * 000000014018F4BE: call    loc_14018F5D1
 * 000000014018F4C3: add     rsp, 8
 * 000000014018F4C7: call    loc_14018F5DA
 * 000000014018F4CC: add     rsp, 8
 * 000000014018F4D0: call    loc_14018F4C3
 * 000000014018F4D5: add     rsp, 8
 * 000000014018F4D9: call    loc_14018F4CC
 * 000000014018F4DE: add     rsp, 8
 * 000000014018F4E2: call    loc_14018F4D5
 * 000000014018F4E7: add     rsp, 8
 * 000000014018F4EB: call    loc_14018F4DE
 * 000000014018F4F0: add     rsp, 8
 * 000000014018F4F4: call    loc_14018F4E7
 * 000000014018F4F9: add     rsp, 8
 * 000000014018F4FD: call    loc_14018F4F0
 * 000000014018F502: add     rsp, 8
 * 000000014018F506: call    loc_14018F4F9
 * 000000014018F50B: add     rsp, 8
 * 000000014018F50F: call    loc_14018F502
 * 000000014018F514: add     rsp, 8
 * 000000014018F518: call    loc_14018F50B
 * 000000014018F51D: add     rsp, 8
 * 000000014018F521: call    loc_14018F514
 * 000000014018F526: add     rsp, 8
 * 000000014018F52A: call    loc_14018F51D
 * 000000014018F52F: add     rsp, 8
 * 000000014018F533: call    loc_14018F526
 * 000000014018F538: add     rsp, 8
 * 000000014018F53C: call    loc_14018F52F
 * 000000014018F541: add     rsp, 8
 * 000000014018F545: call    loc_14018F538
 * 000000014018F54A: add     rsp, 8
 * 000000014018F54E: call    loc_14018F541
 * 000000014018F553: add     rsp, 8
 * 000000014018F557: call    loc_14018F54A
 * 000000014018F55C: add     rsp, 8
 * 000000014018F560: call    loc_14018F553
 * 000000014018F565: add     rsp, 8
 * 000000014018F569: call    loc_14018F55C
 * 000000014018F56E: add     rsp, 8
 * 000000014018F572: call    loc_14018F565
 * 000000014018F577: add     rsp, 8
 * 000000014018F57B: call    loc_14018F56E
 * 000000014018F580: add     rsp, 8
 * 000000014018F584: call    loc_14018F577
 * 000000014018F589: add     rsp, 8
 * 000000014018F58D: call    loc_14018F580
 * 000000014018F592: add     rsp, 8
 * 000000014018F596: call    loc_14018F589
 * 000000014018F59B: add     rsp, 8
 * 000000014018F59F: call    loc_14018F592
 * 000000014018F5A4: add     rsp, 8
 * 000000014018F5A8: call    loc_14018F59B
 * 000000014018F5AD: add     rsp, 8
 * 000000014018F5B1: call    loc_14018F5A4
 * 000000014018F5B6: add     rsp, 8
 * 000000014018F5BA: call    loc_14018F5AD
 * 000000014018F5BF: add     rsp, 8
 * 000000014018F5C3: call    loc_14018F5B6
 * 000000014018F5C8: add     rsp, 8
 * 000000014018F5CC: call    loc_14018F5BF
 * 000000014018F5D1: add     rsp, 8
 * 000000014018F5D5: call    loc_14018F5C8
 * 000000014018F5DA: add     rsp, 8
 * 000000014018F5DE: mov     eax, 0DADAh
 * 000000014018F5E3: test    edx, 100h
 * 000000014018F5E9: jz      short loc_14018F5F0
 * 000000014018F5EB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014018F5F0: lfence
 * 000000014018F5F3: test    byte ptr [r10+3], 80h
 * 000000014018F5F8: jz      short loc_14018F63C
 * 000000014018F5FA: mov     ecx, 0C0000102h
 * 000000014018F5FF: rdmsr
 * 000000014018F601: shl     rdx, 20h
 * 000000014018F605: or      rax, rdx
 * 000000014018F608: cmp     rax, cs:MmUserProbeAddress
 * 000000014018F60F: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018F617: cmp     [r10+0F0h], rax
 * 000000014018F61E: jz      short loc_14018F63C
 * 000000014018F620: mov     rdx, [r10+1F0h]
 * 000000014018F627: bts     dword ptr [r10+74h], 8
 * 000000014018F62D: dec     word ptr [r10+1E6h]
 * 000000014018F635: mov     [rdx+80h], rax
 * 000000014018F63C: test    byte ptr [r10+3], 3
 * 000000014018F641: mov     [rbp+0E8h+var_68], 0
 * 000000014018F64A: jz      short loc_14018F651
 * 000000014018F64C: call    KiSaveDebugRegisterState
 * 000000014018F651: cld
 * 000000014018F652: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018F656: ldmxcsr dword ptr gs:180h
 * 000000014018F65F: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018F663: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018F667: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018F66B: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018F66F: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018F673: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018F677: test    [rbp+0E8h+arg_8], 200h
 * 000000014018F682: jz      short loc_14018F685
 * 000000014018F684: sti
 * 000000014018F685: mov     r9, gs:188h
 * 000000014018F68E: bt      dword ptr [r9+74h], 8
 * 000000014018F694: jnb     short loc_14018F6A4
 * 000000014018F696: test    [rbp+0E8h+arg_0], 1
 * 000000014018F69D: jz      short loc_14018F6A4
 * 000000014018F69F: call    KiUmsTrapEntry
 * 000000014018F6A4: mov     ecx, 10000002h
 * 000000014018F6A9: xor     edx, edx
 * 000000014018F6AB: mov     r8, [rbp+0E8h]
 * 000000014018F6B2: call    KiExceptionDispatch
 * 000000014018F6B7: nop
 * 000000014018F6B8: cli
 * 000000014018F6B9: test    [rbp+0E8h+arg_0], 1
 * 000000014018F6C0: jz      loc_14018F934
 * 000000014018F6C6: mov     rcx, gs:188h
 * 000000014018F6CF: cmp     byte ptr [rcx+0C2h], 0
 * 000000014018F6D6: jz      short loc_14018F6F1
 * 000000014018F6D8: mov     ecx, 1
 * 000000014018F6DD: mov     cr8, rcx
 * 000000014018F6E1: sti
 * 000000014018F6E2: call    KiInitiateUserApc
 * 000000014018F6E7: cli
 * 000000014018F6E8: mov     ecx, 0
 * 000000014018F6ED: mov     cr8, rcx
 * 000000014018F6F1: mov     rcx, gs:188h
 * 000000014018F6FA: test    dword ptr [rcx], 40010000h
 * 000000014018F700: jz      short loc_14018F727
 * 000000014018F702: test    byte ptr [rcx+2], 1
 * 000000014018F706: jz      short loc_14018F716
 * 000000014018F708: call    KiCopyCounters
 * 000000014018F70D: mov     rcx, gs:188h
 * 000000014018F716: test    byte ptr [rcx+3], 40h
 * 000000014018F71A: jz      short loc_14018F727
 * 000000014018F71C: lea     rsp, [rbp-80h]
 * 000000014018F720: mov     cl, 1
 * 000000014018F722: call    KiUmsExit
 * 000000014018F727: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014018F72B: cmp     [rbp+0E8h+var_68], 0
 * 000000014018F733: jz      short loc_14018F73A
 * 000000014018F735: call    KiRestoreDebugRegisterState
 * 000000014018F73A: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018F73E: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014018F742: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018F746: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014018F74A: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018F74E: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014018F752: mov     r11, [rbp+0E8h+var_108]
 * 000000014018F756: mov     r10, [rbp+0E8h+var_110]
 * 000000014018F75A: mov     r9, [rbp+0E8h+var_118]
 * 000000014018F75E: mov     r8, [rbp+0E8h+var_120]
 * 000000014018F762: movzx   eax, word ptr gs:2EBAh
 * 000000014018F76B: cmp     gs:2EB4h, ax
 * 000000014018F774: jz      short loc_14018F788
 * 000000014018F776: mov     gs:2EB4h, ax
 * 000000014018F77F: mov     ecx, 48h ; 'H'
 * 000000014018F784: xor     edx, edx
 * 000000014018F786: wrmsr
 * 000000014018F788: btr     word ptr gs:2EB0h, 2
 * 000000014018F793: jnb     short loc_14018F7A3
 * 000000014018F795: mov     eax, 1
 * 000000014018F79A: xor     edx, edx
 * 000000014018F79C: mov     ecx, 49h ; 'I'
 * 000000014018F7A1: wrmsr
 * 000000014018F7A3: btr     word ptr gs:2EB0h, 5
 * 000000014018F7AE: jnb     loc_14018F8D9
 * 000000014018F7B4: call    loc_14018F8C7
 * 000000014018F7B9: add     rsp, 8
 * 000000014018F7BD: call    loc_14018F8D0
 * 000000014018F7C2: add     rsp, 8
 * 000000014018F7C6: call    loc_14018F7B9
 * 000000014018F7CB: add     rsp, 8
 * 000000014018F7CF: call    loc_14018F7C2
 * 000000014018F7D4: add     rsp, 8
 * 000000014018F7D8: call    loc_14018F7CB
 * 000000014018F7DD: add     rsp, 8
 * 000000014018F7E1: call    loc_14018F7D4
 * 000000014018F7E6: add     rsp, 8
 * 000000014018F7EA: call    loc_14018F7DD
 * 000000014018F7EF: add     rsp, 8
 * 000000014018F7F3: call    loc_14018F7E6
 * 000000014018F7F8: add     rsp, 8
 * 000000014018F7FC: call    loc_14018F7EF
 * 000000014018F801: add     rsp, 8
 * 000000014018F805: call    loc_14018F7F8
 * 000000014018F80A: add     rsp, 8
 * 000000014018F80E: call    loc_14018F801
 * 000000014018F813: add     rsp, 8
 * 000000014018F817: call    loc_14018F80A
 * 000000014018F81C: add     rsp, 8
 * 000000014018F820: call    loc_14018F813
 * 000000014018F825: add     rsp, 8
 * 000000014018F829: call    loc_14018F81C
 * 000000014018F82E: add     rsp, 8
 * 000000014018F832: call    loc_14018F825
 * 000000014018F837: add     rsp, 8
 * 000000014018F83B: call    loc_14018F82E
 * 000000014018F840: add     rsp, 8
 * 000000014018F844: call    loc_14018F837
 * 000000014018F849: add     rsp, 8
 * 000000014018F84D: call    loc_14018F840
 * 000000014018F852: add     rsp, 8
 * 000000014018F856: call    loc_14018F849
 * 000000014018F85B: add     rsp, 8
 * 000000014018F85F: call    loc_14018F852
 * 000000014018F864: add     rsp, 8
 * 000000014018F868: call    loc_14018F85B
 * 000000014018F86D: add     rsp, 8
 * 000000014018F871: call    loc_14018F864
 * 000000014018F876: add     rsp, 8
 * 000000014018F87A: call    loc_14018F86D
 * 000000014018F87F: add     rsp, 8
 * 000000014018F883: call    loc_14018F876
 * 000000014018F888: add     rsp, 8
 * 000000014018F88C: call    loc_14018F87F
 * 000000014018F891: add     rsp, 8
 * 000000014018F895: call    loc_14018F888
 * 000000014018F89A: add     rsp, 8
 * 000000014018F89E: call    loc_14018F891
 * 000000014018F8A3: add     rsp, 8
 * 000000014018F8A7: call    loc_14018F89A
 * 000000014018F8AC: add     rsp, 8
 * 000000014018F8B0: call    loc_14018F8A3
 * 000000014018F8B5: add     rsp, 8
 * 000000014018F8B9: call    loc_14018F8AC
 * 000000014018F8BE: add     rsp, 8
 * 000000014018F8C2: call    loc_14018F8B5
 * 000000014018F8C7: add     rsp, 8
 * 000000014018F8CB: call    loc_14018F8BE
 * 000000014018F8D0: add     rsp, 8
 * 000000014018F8D4: mov     eax, 0DADAh
 * 000000014018F8D9: test    word ptr gs:2EB0h, 40h
 * 000000014018F8E4: jz      short loc_14018F8F2
 * 000000014018F8E6: xor     eax, eax
 * 000000014018F8E8: xor     edx, edx
 * 000000014018F8EA: mov     ecx, 1
 * 000000014018F8EF: div     rcx
 * 000000014018F8F2: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018F8F6: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018F8FA: mov     rax, [rbp+0E8h+var_138]
 * 000000014018F8FE: mov     rsp, rbp
 * 000000014018F901: mov     rbp, [rbp+0E8h+var_10]
 * 000000014018F908: add     rsp, 0E8h
 * 000000014018F90F: test    cs:KiKvaShadow, 1
 * 000000014018F916: jz      short loc_14018F91D
 * 000000014018F918: jmp     KiKernelExit
 * 000000014018F91D: test    word ptr gs:2EB0h, 80h
 * 000000014018F928: jz      short loc_14018F92F
 * 000000014018F92A: verw    [rsp+arg_18]
 * 000000014018F92F: swapgs
 * 000000014018F932: iretq
 * 000000014018F934: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014018F938: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018F93C: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014018F940: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018F944: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014018F948: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018F94C: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014018F950: mov     r11, [rbp+0E8h+var_108]
 * 000000014018F954: mov     r10, [rbp+0E8h+var_110]
 * 000000014018F958: mov     r9, [rbp+0E8h+var_118]
 * 000000014018F95C: mov     r8, [rbp+0E8h+var_120]
 * 000000014018F960: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018F964: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018F968: mov     rax, [rbp+0E8h+var_138]
 * 000000014018F96C: mov     rsp, rbp
 * 000000014018F96F: mov     rbp, [rbp+0E8h+var_10]
 * 000000014018F976: add     rsp, 0E8h
 * 000000014018F97D: iretq
 */
