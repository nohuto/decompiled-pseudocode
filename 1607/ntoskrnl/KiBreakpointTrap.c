/*
 * XREFs of KiBreakpointTrap @ 0x14016A1C0
 * Callers:
 *     KiBreakpointTrapShadow @ 0x14023F180 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x14016A1C0 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x14016A1C0
 * Reason: Hex-Rays returned no pseudocode for 0x14016A1C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016A1C0: sub     rsp, 8
 * 000000014016A1C4: push    rbp
 * 000000014016A1C5: sub     rsp, 158h
 * 000000014016A1CC: lea     rbp, [rsp+80h]
 * 000000014016A1D4: mov     [rbp+0E8h+var_13D], 1
 * 000000014016A1D8: mov     [rbp+0E8h+var_138], rax
 * 000000014016A1DC: mov     [rbp+0E8h+var_130], rcx
 * 000000014016A1E0: mov     [rbp+0E8h+var_128], rdx
 * 000000014016A1E4: mov     [rbp+0E8h+var_120], r8
 * 000000014016A1E8: mov     [rbp+0E8h+var_118], r9
 * 000000014016A1EC: mov     [rbp+0E8h+var_110], r10
 * 000000014016A1F0: mov     [rbp+0E8h+var_108], r11
 * 000000014016A1F4: test    [rbp+0E8h+arg_0], 1
 * 000000014016A1FB: jnz     short loc_14016A22C
 * 000000014016A1FD: lfence
 * 000000014016A200: test    word ptr gs:2EB8h, 1
 * 000000014016A20B: jnz     short loc_14016A215
 * 000000014016A20D: lfence
 * 000000014016A210: jmp     loc_14016A451
 * 000000014016A215: movzx   eax, word ptr gs:2EBCh
 * 000000014016A21E: mov     ecx, 48h ; 'H'
 * 000000014016A223: xor     edx, edx
 * 000000014016A225: wrmsr
 * 000000014016A227: jmp     loc_14016A451
 * 000000014016A22C: test    cs:KiKvaShadow, 1
 * 000000014016A233: jnz     short loc_14016A238
 * 000000014016A235: swapgs
 * 000000014016A238: lfence
 * 000000014016A23B: mov     r10, gs:188h
 * 000000014016A244: mov     rcx, gs:188h
 * 000000014016A24D: mov     rcx, [rcx+220h]
 * 000000014016A254: mov     rcx, [rcx+7B8h]
 * 000000014016A25B: mov     gs:2EB0h, rcx
 * 000000014016A264: movzx   eax, word ptr gs:2EBEh
 * 000000014016A26D: cmp     gs:2EBCh, ax
 * 000000014016A276: jz      short loc_14016A28A
 * 000000014016A278: mov     gs:2EBCh, ax
 * 000000014016A281: mov     ecx, 48h ; 'H'
 * 000000014016A286: xor     edx, edx
 * 000000014016A288: wrmsr
 * 000000014016A28A: movzx   edx, word ptr gs:2EB8h
 * 000000014016A293: test    edx, 8
 * 000000014016A299: jz      short loc_14016A2B2
 * 000000014016A29B: mov     eax, 1
 * 000000014016A2A0: xor     edx, edx
 * 000000014016A2A2: mov     ecx, 49h ; 'I'
 * 000000014016A2A7: wrmsr
 * 000000014016A2A9: movzx   edx, word ptr gs:2EB8h
 * 000000014016A2B2: test    edx, 2
 * 000000014016A2B8: jz      loc_14016A3E3
 * 000000014016A2BE: call    loc_14016A3D1
 * 000000014016A2C3: add     rsp, 8
 * 000000014016A2C7: call    loc_14016A3DA
 * 000000014016A2CC: add     rsp, 8
 * 000000014016A2D0: call    loc_14016A2C3
 * 000000014016A2D5: add     rsp, 8
 * 000000014016A2D9: call    loc_14016A2CC
 * 000000014016A2DE: add     rsp, 8
 * 000000014016A2E2: call    loc_14016A2D5
 * 000000014016A2E7: add     rsp, 8
 * 000000014016A2EB: call    loc_14016A2DE
 * 000000014016A2F0: add     rsp, 8
 * 000000014016A2F4: call    loc_14016A2E7
 * 000000014016A2F9: add     rsp, 8
 * 000000014016A2FD: call    loc_14016A2F0
 * 000000014016A302: add     rsp, 8
 * 000000014016A306: call    loc_14016A2F9
 * 000000014016A30B: add     rsp, 8
 * 000000014016A30F: call    loc_14016A302
 * 000000014016A314: add     rsp, 8
 * 000000014016A318: call    loc_14016A30B
 * 000000014016A31D: add     rsp, 8
 * 000000014016A321: call    loc_14016A314
 * 000000014016A326: add     rsp, 8
 * 000000014016A32A: call    loc_14016A31D
 * 000000014016A32F: add     rsp, 8
 * 000000014016A333: call    loc_14016A326
 * 000000014016A338: add     rsp, 8
 * 000000014016A33C: call    loc_14016A32F
 * 000000014016A341: add     rsp, 8
 * 000000014016A345: call    loc_14016A338
 * 000000014016A34A: add     rsp, 8
 * 000000014016A34E: call    loc_14016A341
 * 000000014016A353: add     rsp, 8
 * 000000014016A357: call    loc_14016A34A
 * 000000014016A35C: add     rsp, 8
 * 000000014016A360: call    loc_14016A353
 * 000000014016A365: add     rsp, 8
 * 000000014016A369: call    loc_14016A35C
 * 000000014016A36E: add     rsp, 8
 * 000000014016A372: call    loc_14016A365
 * 000000014016A377: add     rsp, 8
 * 000000014016A37B: call    loc_14016A36E
 * 000000014016A380: add     rsp, 8
 * 000000014016A384: call    loc_14016A377
 * 000000014016A389: add     rsp, 8
 * 000000014016A38D: call    loc_14016A380
 * 000000014016A392: add     rsp, 8
 * 000000014016A396: call    loc_14016A389
 * 000000014016A39B: add     rsp, 8
 * 000000014016A39F: call    loc_14016A392
 * 000000014016A3A4: add     rsp, 8
 * 000000014016A3A8: call    loc_14016A39B
 * 000000014016A3AD: add     rsp, 8
 * 000000014016A3B1: call    loc_14016A3A4
 * 000000014016A3B6: add     rsp, 8
 * 000000014016A3BA: call    loc_14016A3AD
 * 000000014016A3BF: add     rsp, 8
 * 000000014016A3C3: call    loc_14016A3B6
 * 000000014016A3C8: add     rsp, 8
 * 000000014016A3CC: call    loc_14016A3BF
 * 000000014016A3D1: add     rsp, 8
 * 000000014016A3D5: call    loc_14016A3C8
 * 000000014016A3DA: add     rsp, 8
 * 000000014016A3DE: mov     eax, 0DADAh
 * 000000014016A3E3: test    edx, 100h
 * 000000014016A3E9: jz      short loc_14016A3F0
 * 000000014016A3EB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016A3F0: lfence
 * 000000014016A3F3: test    byte ptr [r10+3], 80h
 * 000000014016A3F8: jz      short loc_14016A43C
 * 000000014016A3FA: mov     ecx, 0C0000102h
 * 000000014016A3FF: rdmsr
 * 000000014016A401: shl     rdx, 20h
 * 000000014016A405: or      rax, rdx
 * 000000014016A408: cmp     rax, cs:MmUserProbeAddress
 * 000000014016A40F: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016A417: cmp     [r10+0F0h], rax
 * 000000014016A41E: jz      short loc_14016A43C
 * 000000014016A420: mov     rdx, [r10+1F0h]
 * 000000014016A427: bts     dword ptr [r10+74h], 8
 * 000000014016A42D: dec     word ptr [r10+1E6h]
 * 000000014016A435: mov     [rdx+80h], rax
 * 000000014016A43C: test    byte ptr [r10+3], 3
 * 000000014016A441: mov     [rbp+0E8h+var_68], 0
 * 000000014016A44A: jz      short loc_14016A451
 * 000000014016A44C: call    KiSaveDebugRegisterState
 * 000000014016A451: cld
 * 000000014016A452: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016A456: ldmxcsr dword ptr gs:180h
 * 000000014016A45F: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016A463: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016A467: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014016A46B: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014016A46F: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016A473: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016A477: test    [rbp+0E8h+arg_8], 200h
 * 000000014016A481: jz      short loc_14016A484
 * 000000014016A483: sti
 * 000000014016A484: mov     ecx, 80000003h
 * 000000014016A489: mov     edx, 1
 * 000000014016A48E: mov     r8, [rbp+0E8h]
 * 000000014016A495: dec     r8
 * 000000014016A498: mov     r9d, 0
 * 000000014016A49E: call    KiExceptionDispatch
 * 000000014016A4A3: nop
 * 000000014016A4A4: retn
 */
