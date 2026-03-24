/*
 * XREFs of KiOverflowTrap @ 0x14015F640
 * Callers:
 *     KiOverflowTrapShadow @ 0x140224200 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x14015F640 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x14015F640
 * Reason: Hex-Rays returned no pseudocode for 0x14015F640
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015F640: sub     rsp, 8
 * 000000014015F644: push    rbp
 * 000000014015F645: sub     rsp, 158h
 * 000000014015F64C: lea     rbp, [rsp+80h]
 * 000000014015F654: mov     [rbp+0E8h+var_13D], 1
 * 000000014015F658: mov     [rbp+0E8h+var_138], rax
 * 000000014015F65C: mov     [rbp+0E8h+var_130], rcx
 * 000000014015F660: mov     [rbp+0E8h+var_128], rdx
 * 000000014015F664: mov     [rbp+0E8h+var_120], r8
 * 000000014015F668: mov     [rbp+0E8h+var_118], r9
 * 000000014015F66C: mov     [rbp+0E8h+var_110], r10
 * 000000014015F670: mov     [rbp+0E8h+var_108], r11
 * 000000014015F674: test    [rbp+0E8h+arg_0], 1
 * 000000014015F67B: jnz     loc_14015F7E1
 * 000000014015F681: cmp     byte ptr gs:187h, 0
 * 000000014015F68A: jz      loc_14015F9B1
 * 000000014015F690: test    byte ptr gs:2EB0h, 1
 * 000000014015F699: jz      loc_14015F9B1
 * 000000014015F69F: mov     ecx, 48h ; 'H'
 * 000000014015F6A4: mov     eax, 1
 * 000000014015F6A9: xor     edx, edx
 * 000000014015F6AB: wrmsr
 * 000000014015F6AD: test    byte ptr gs:2EB0h, 4
 * 000000014015F6B6: jnz     loc_14015F9B1
 * 000000014015F6BC: call    loc_14015F7CF
 * 000000014015F6C1: add     rsp, 8
 * 000000014015F6C5: call    loc_14015F7D8
 * 000000014015F6CA: add     rsp, 8
 * 000000014015F6CE: call    loc_14015F6C1
 * 000000014015F6D3: add     rsp, 8
 * 000000014015F6D7: call    loc_14015F6CA
 * 000000014015F6DC: add     rsp, 8
 * 000000014015F6E0: call    loc_14015F6D3
 * 000000014015F6E5: add     rsp, 8
 * 000000014015F6E9: call    loc_14015F6DC
 * 000000014015F6EE: add     rsp, 8
 * 000000014015F6F2: call    loc_14015F6E5
 * 000000014015F6F7: add     rsp, 8
 * 000000014015F6FB: call    loc_14015F6EE
 * 000000014015F700: add     rsp, 8
 * 000000014015F704: call    loc_14015F6F7
 * 000000014015F709: add     rsp, 8
 * 000000014015F70D: call    loc_14015F700
 * 000000014015F712: add     rsp, 8
 * 000000014015F716: call    loc_14015F709
 * 000000014015F71B: add     rsp, 8
 * 000000014015F71F: call    loc_14015F712
 * 000000014015F724: add     rsp, 8
 * 000000014015F728: call    loc_14015F71B
 * 000000014015F72D: add     rsp, 8
 * 000000014015F731: call    loc_14015F724
 * 000000014015F736: add     rsp, 8
 * 000000014015F73A: call    loc_14015F72D
 * 000000014015F73F: add     rsp, 8
 * 000000014015F743: call    loc_14015F736
 * 000000014015F748: add     rsp, 8
 * 000000014015F74C: call    loc_14015F73F
 * 000000014015F751: add     rsp, 8
 * 000000014015F755: call    loc_14015F748
 * 000000014015F75A: add     rsp, 8
 * 000000014015F75E: call    loc_14015F751
 * 000000014015F763: add     rsp, 8
 * 000000014015F767: call    loc_14015F75A
 * 000000014015F76C: add     rsp, 8
 * 000000014015F770: call    loc_14015F763
 * 000000014015F775: add     rsp, 8
 * 000000014015F779: call    loc_14015F76C
 * 000000014015F77E: add     rsp, 8
 * 000000014015F782: call    loc_14015F775
 * 000000014015F787: add     rsp, 8
 * 000000014015F78B: call    loc_14015F77E
 * 000000014015F790: add     rsp, 8
 * 000000014015F794: call    loc_14015F787
 * 000000014015F799: add     rsp, 8
 * 000000014015F79D: call    loc_14015F790
 * 000000014015F7A2: add     rsp, 8
 * 000000014015F7A6: call    loc_14015F799
 * 000000014015F7AB: add     rsp, 8
 * 000000014015F7AF: call    loc_14015F7A2
 * 000000014015F7B4: add     rsp, 8
 * 000000014015F7B8: call    loc_14015F7AB
 * 000000014015F7BD: add     rsp, 8
 * 000000014015F7C1: call    loc_14015F7B4
 * 000000014015F7C6: add     rsp, 8
 * 000000014015F7CA: call    loc_14015F7BD
 * 000000014015F7CF: add     rsp, 8
 * 000000014015F7D3: call    loc_14015F7C6
 * 000000014015F7D8: add     rsp, 8
 * 000000014015F7DC: jmp     loc_14015F9B1
 * 000000014015F7E1: test    cs:KiKvaShadow, 1
 * 000000014015F7E8: jnz     short loc_14015F7ED
 * 000000014015F7EA: swapgs
 * 000000014015F7ED: mov     r10, gs:188h
 * 000000014015F7F6: test    byte ptr gs:2EB0h, 1
 * 000000014015F7FF: jz      loc_14015F962
 * 000000014015F805: mov     rcx, gs:188h
 * 000000014015F80E: mov     rcx, [rcx+220h]
 * 000000014015F815: mov     rcx, [rcx+790h]
 * 000000014015F81C: mov     gs:2EA8h, rcx
 * 000000014015F825: mov     ecx, 48h ; 'H'
 * 000000014015F82A: mov     eax, 1
 * 000000014015F82F: xor     edx, edx
 * 000000014015F831: wrmsr
 * 000000014015F833: test    byte ptr gs:2EB0h, 4
 * 000000014015F83C: jnz     loc_14015F962
 * 000000014015F842: call    loc_14015F955
 * 000000014015F847: add     rsp, 8
 * 000000014015F84B: call    loc_14015F95E
 * 000000014015F850: add     rsp, 8
 * 000000014015F854: call    loc_14015F847
 * 000000014015F859: add     rsp, 8
 * 000000014015F85D: call    loc_14015F850
 * 000000014015F862: add     rsp, 8
 * 000000014015F866: call    loc_14015F859
 * 000000014015F86B: add     rsp, 8
 * 000000014015F86F: call    loc_14015F862
 * 000000014015F874: add     rsp, 8
 * 000000014015F878: call    loc_14015F86B
 * 000000014015F87D: add     rsp, 8
 * 000000014015F881: call    loc_14015F874
 * 000000014015F886: add     rsp, 8
 * 000000014015F88A: call    loc_14015F87D
 * 000000014015F88F: add     rsp, 8
 * 000000014015F893: call    loc_14015F886
 * 000000014015F898: add     rsp, 8
 * 000000014015F89C: call    loc_14015F88F
 * 000000014015F8A1: add     rsp, 8
 * 000000014015F8A5: call    loc_14015F898
 * 000000014015F8AA: add     rsp, 8
 * 000000014015F8AE: call    loc_14015F8A1
 * 000000014015F8B3: add     rsp, 8
 * 000000014015F8B7: call    loc_14015F8AA
 * 000000014015F8BC: add     rsp, 8
 * 000000014015F8C0: call    loc_14015F8B3
 * 000000014015F8C5: add     rsp, 8
 * 000000014015F8C9: call    loc_14015F8BC
 * 000000014015F8CE: add     rsp, 8
 * 000000014015F8D2: call    loc_14015F8C5
 * 000000014015F8D7: add     rsp, 8
 * 000000014015F8DB: call    loc_14015F8CE
 * 000000014015F8E0: add     rsp, 8
 * 000000014015F8E4: call    loc_14015F8D7
 * 000000014015F8E9: add     rsp, 8
 * 000000014015F8ED: call    loc_14015F8E0
 * 000000014015F8F2: add     rsp, 8
 * 000000014015F8F6: call    loc_14015F8E9
 * 000000014015F8FB: add     rsp, 8
 * 000000014015F8FF: call    loc_14015F8F2
 * 000000014015F904: add     rsp, 8
 * 000000014015F908: call    loc_14015F8FB
 * 000000014015F90D: add     rsp, 8
 * 000000014015F911: call    loc_14015F904
 * 000000014015F916: add     rsp, 8
 * 000000014015F91A: call    loc_14015F90D
 * 000000014015F91F: add     rsp, 8
 * 000000014015F923: call    loc_14015F916
 * 000000014015F928: add     rsp, 8
 * 000000014015F92C: call    loc_14015F91F
 * 000000014015F931: add     rsp, 8
 * 000000014015F935: call    loc_14015F928
 * 000000014015F93A: add     rsp, 8
 * 000000014015F93E: call    loc_14015F931
 * 000000014015F943: add     rsp, 8
 * 000000014015F947: call    loc_14015F93A
 * 000000014015F94C: add     rsp, 8
 * 000000014015F950: call    loc_14015F943
 * 000000014015F955: add     rsp, 8
 * 000000014015F959: call    loc_14015F94C
 * 000000014015F95E: add     rsp, 8
 * 000000014015F962: test    byte ptr [r10+3], 80h
 * 000000014015F967: jz      short loc_14015F99C
 * 000000014015F969: mov     ecx, 0C0000102h
 * 000000014015F96E: rdmsr
 * 000000014015F970: shl     rdx, 20h
 * 000000014015F974: or      rax, rdx
 * 000000014015F977: cmp     [r10+0F0h], rax
 * 000000014015F97E: jz      short loc_14015F99C
 * 000000014015F980: mov     rdx, [r10+1F0h]
 * 000000014015F987: bts     dword ptr [r10+74h], 8
 * 000000014015F98D: dec     word ptr [r10+1E6h]
 * 000000014015F995: mov     [rdx+80h], rax
 * 000000014015F99C: test    byte ptr [r10+3], 3
 * 000000014015F9A1: mov     [rbp+0E8h+var_68], 0
 * 000000014015F9AA: jz      short loc_14015F9B1
 * 000000014015F9AC: call    KiSaveDebugRegisterState
 * 000000014015F9B1: cld
 * 000000014015F9B2: lfence
 * 000000014015F9B5: stmxcsr [rbp+0E8h+var_13C]
 * 000000014015F9B9: ldmxcsr dword ptr gs:180h
 * 000000014015F9C2: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014015F9C6: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014015F9CA: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014015F9CE: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014015F9D2: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014015F9D6: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014015F9DA: test    [rbp+0E8h+arg_8], 200h
 * 000000014015F9E4: jz      short loc_14015F9E7
 * 000000014015F9E6: sti
 * 000000014015F9E7: mov     ecx, 0C0000095h
 * 000000014015F9EC: xor     edx, edx
 * 000000014015F9EE: mov     r8, [rbp+0E8h]
 * 000000014015F9F5: dec     r8
 * 000000014015F9F8: call    KiExceptionDispatch
 * 000000014015F9FD: nop
 * 000000014015F9FE: retn
 */
