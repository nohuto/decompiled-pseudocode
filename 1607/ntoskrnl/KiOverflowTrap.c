/*
 * XREFs of KiOverflowTrap @ 0x140169FC0
 * Callers:
 *     KiOverflowTrapShadow @ 0x14023F200 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x140169FC0 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x140169FC0
 * Reason: Hex-Rays returned no pseudocode for 0x140169FC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140169FC0: sub     rsp, 8
 * 0000000140169FC4: push    rbp
 * 0000000140169FC5: sub     rsp, 158h
 * 0000000140169FCC: lea     rbp, [rsp+80h]
 * 0000000140169FD4: mov     [rbp+0E8h+var_13D], 1
 * 0000000140169FD8: mov     [rbp+0E8h+var_138], rax
 * 0000000140169FDC: mov     [rbp+0E8h+var_130], rcx
 * 0000000140169FE0: mov     [rbp+0E8h+var_128], rdx
 * 0000000140169FE4: mov     [rbp+0E8h+var_120], r8
 * 0000000140169FE8: mov     [rbp+0E8h+var_118], r9
 * 0000000140169FEC: mov     [rbp+0E8h+var_110], r10
 * 0000000140169FF0: mov     [rbp+0E8h+var_108], r11
 * 0000000140169FF4: test    [rbp+0E8h+arg_0], 1
 * 0000000140169FFB: jnz     short loc_14016A02C
 * 0000000140169FFD: lfence
 * 000000014016A000: test    word ptr gs:2EB8h, 1
 * 000000014016A00B: jnz     short loc_14016A015
 * 000000014016A00D: lfence
 * 000000014016A010: jmp     loc_14016A251
 * 000000014016A015: movzx   eax, word ptr gs:2EBCh
 * 000000014016A01E: mov     ecx, 48h ; 'H'
 * 000000014016A023: xor     edx, edx
 * 000000014016A025: wrmsr
 * 000000014016A027: jmp     loc_14016A251
 * 000000014016A02C: test    cs:KiKvaShadow, 1
 * 000000014016A033: jnz     short loc_14016A038
 * 000000014016A035: swapgs
 * 000000014016A038: lfence
 * 000000014016A03B: mov     r10, gs:188h
 * 000000014016A044: mov     rcx, gs:188h
 * 000000014016A04D: mov     rcx, [rcx+220h]
 * 000000014016A054: mov     rcx, [rcx+7B8h]
 * 000000014016A05B: mov     gs:2EB0h, rcx
 * 000000014016A064: movzx   eax, word ptr gs:2EBEh
 * 000000014016A06D: cmp     gs:2EBCh, ax
 * 000000014016A076: jz      short loc_14016A08A
 * 000000014016A078: mov     gs:2EBCh, ax
 * 000000014016A081: mov     ecx, 48h ; 'H'
 * 000000014016A086: xor     edx, edx
 * 000000014016A088: wrmsr
 * 000000014016A08A: movzx   edx, word ptr gs:2EB8h
 * 000000014016A093: test    edx, 8
 * 000000014016A099: jz      short loc_14016A0B2
 * 000000014016A09B: mov     eax, 1
 * 000000014016A0A0: xor     edx, edx
 * 000000014016A0A2: mov     ecx, 49h ; 'I'
 * 000000014016A0A7: wrmsr
 * 000000014016A0A9: movzx   edx, word ptr gs:2EB8h
 * 000000014016A0B2: test    edx, 2
 * 000000014016A0B8: jz      loc_14016A1E3
 * 000000014016A0BE: call    loc_14016A1D1
 * 000000014016A0C3: add     rsp, 8
 * 000000014016A0C7: call    loc_14016A1DA
 * 000000014016A0CC: add     rsp, 8
 * 000000014016A0D0: call    loc_14016A0C3
 * 000000014016A0D5: add     rsp, 8
 * 000000014016A0D9: call    loc_14016A0CC
 * 000000014016A0DE: add     rsp, 8
 * 000000014016A0E2: call    loc_14016A0D5
 * 000000014016A0E7: add     rsp, 8
 * 000000014016A0EB: call    loc_14016A0DE
 * 000000014016A0F0: add     rsp, 8
 * 000000014016A0F4: call    loc_14016A0E7
 * 000000014016A0F9: add     rsp, 8
 * 000000014016A0FD: call    loc_14016A0F0
 * 000000014016A102: add     rsp, 8
 * 000000014016A106: call    loc_14016A0F9
 * 000000014016A10B: add     rsp, 8
 * 000000014016A10F: call    loc_14016A102
 * 000000014016A114: add     rsp, 8
 * 000000014016A118: call    loc_14016A10B
 * 000000014016A11D: add     rsp, 8
 * 000000014016A121: call    loc_14016A114
 * 000000014016A126: add     rsp, 8
 * 000000014016A12A: call    loc_14016A11D
 * 000000014016A12F: add     rsp, 8
 * 000000014016A133: call    loc_14016A126
 * 000000014016A138: add     rsp, 8
 * 000000014016A13C: call    loc_14016A12F
 * 000000014016A141: add     rsp, 8
 * 000000014016A145: call    loc_14016A138
 * 000000014016A14A: add     rsp, 8
 * 000000014016A14E: call    loc_14016A141
 * 000000014016A153: add     rsp, 8
 * 000000014016A157: call    loc_14016A14A
 * 000000014016A15C: add     rsp, 8
 * 000000014016A160: call    loc_14016A153
 * 000000014016A165: add     rsp, 8
 * 000000014016A169: call    loc_14016A15C
 * 000000014016A16E: add     rsp, 8
 * 000000014016A172: call    loc_14016A165
 * 000000014016A177: add     rsp, 8
 * 000000014016A17B: call    loc_14016A16E
 * 000000014016A180: add     rsp, 8
 * 000000014016A184: call    loc_14016A177
 * 000000014016A189: add     rsp, 8
 * 000000014016A18D: call    loc_14016A180
 * 000000014016A192: add     rsp, 8
 * 000000014016A196: call    loc_14016A189
 * 000000014016A19B: add     rsp, 8
 * 000000014016A19F: call    loc_14016A192
 * 000000014016A1A4: add     rsp, 8
 * 000000014016A1A8: call    loc_14016A19B
 * 000000014016A1AD: add     rsp, 8
 * 000000014016A1B1: call    loc_14016A1A4
 * 000000014016A1B6: add     rsp, 8
 * 000000014016A1BA: call    loc_14016A1AD
 * 000000014016A1BF: add     rsp, 8
 * 000000014016A1C3: call    loc_14016A1B6
 * 000000014016A1C8: add     rsp, 8
 * 000000014016A1CC: call    loc_14016A1BF
 * 000000014016A1D1: add     rsp, 8
 * 000000014016A1D5: call    loc_14016A1C8
 * 000000014016A1DA: add     rsp, 8
 * 000000014016A1DE: mov     eax, 0DADAh
 * 000000014016A1E3: test    edx, 100h
 * 000000014016A1E9: jz      short loc_14016A1F0
 * 000000014016A1EB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016A1F0: lfence
 * 000000014016A1F3: test    byte ptr [r10+3], 80h
 * 000000014016A1F8: jz      short loc_14016A23C
 * 000000014016A1FA: mov     ecx, 0C0000102h
 * 000000014016A1FF: rdmsr
 * 000000014016A201: shl     rdx, 20h
 * 000000014016A205: or      rax, rdx
 * 000000014016A208: cmp     rax, cs:MmUserProbeAddress
 * 000000014016A20F: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016A217: cmp     [r10+0F0h], rax
 * 000000014016A21E: jz      short loc_14016A23C
 * 000000014016A220: mov     rdx, [r10+1F0h]
 * 000000014016A227: bts     dword ptr [r10+74h], 8
 * 000000014016A22D: dec     word ptr [r10+1E6h]
 * 000000014016A235: mov     [rdx+80h], rax
 * 000000014016A23C: test    byte ptr [r10+3], 3
 * 000000014016A241: mov     [rbp+0E8h+var_68], 0
 * 000000014016A24A: jz      short loc_14016A251
 * 000000014016A24C: call    KiSaveDebugRegisterState
 * 000000014016A251: cld
 * 000000014016A252: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016A256: ldmxcsr dword ptr gs:180h
 * 000000014016A25F: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016A263: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016A267: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014016A26B: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014016A26F: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016A273: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016A277: test    [rbp+0E8h+arg_8], 200h
 * 000000014016A281: jz      short loc_14016A284
 * 000000014016A283: sti
 * 000000014016A284: mov     ecx, 0C0000095h
 * 000000014016A289: xor     edx, edx
 * 000000014016A28B: mov     r8, [rbp+0E8h]
 * 000000014016A292: dec     r8
 * 000000014016A295: call    KiExceptionDispatch
 * 000000014016A29A: nop
 * 000000014016A29B: retn
 */
