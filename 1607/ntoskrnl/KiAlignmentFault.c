/*
 * XREFs of KiAlignmentFault @ 0x14016D340
 * Callers:
 *     KiAlignmentFaultShadow @ 0x14023F800 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x14016D340 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x14016D340
 * Reason: Hex-Rays returned no pseudocode for 0x14016D340
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016D340: push    rbp
 * 000000014016D341: sub     rsp, 158h
 * 000000014016D348: lea     rbp, [rsp+80h]
 * 000000014016D350: mov     [rbp+0D8h+var_12D], 1
 * 000000014016D354: mov     [rbp+0D8h+var_128], rax
 * 000000014016D358: mov     [rbp+0D8h+var_120], rcx
 * 000000014016D35C: mov     [rbp+0D8h+var_118], rdx
 * 000000014016D360: mov     [rbp+0D8h+var_110], r8
 * 000000014016D364: mov     [rbp+0D8h+var_108], r9
 * 000000014016D368: mov     [rbp+0D8h+var_100], r10
 * 000000014016D36C: mov     [rbp+0D8h+var_F8], r11
 * 000000014016D370: test    [rbp+0D8h+arg_8], 1
 * 000000014016D377: jnz     short loc_14016D3A8
 * 000000014016D379: lfence
 * 000000014016D37C: test    word ptr gs:2EB8h, 1
 * 000000014016D387: jnz     short loc_14016D391
 * 000000014016D389: lfence
 * 000000014016D38C: jmp     loc_14016D5CD
 * 000000014016D391: movzx   eax, word ptr gs:2EBCh
 * 000000014016D39A: mov     ecx, 48h ; 'H'
 * 000000014016D39F: xor     edx, edx
 * 000000014016D3A1: wrmsr
 * 000000014016D3A3: jmp     loc_14016D5CD
 * 000000014016D3A8: test    cs:KiKvaShadow, 1
 * 000000014016D3AF: jnz     short loc_14016D3B4
 * 000000014016D3B1: swapgs
 * 000000014016D3B4: lfence
 * 000000014016D3B7: mov     r10, gs:188h
 * 000000014016D3C0: mov     rcx, gs:188h
 * 000000014016D3C9: mov     rcx, [rcx+220h]
 * 000000014016D3D0: mov     rcx, [rcx+7B8h]
 * 000000014016D3D7: mov     gs:2EB0h, rcx
 * 000000014016D3E0: movzx   eax, word ptr gs:2EBEh
 * 000000014016D3E9: cmp     gs:2EBCh, ax
 * 000000014016D3F2: jz      short loc_14016D406
 * 000000014016D3F4: mov     gs:2EBCh, ax
 * 000000014016D3FD: mov     ecx, 48h ; 'H'
 * 000000014016D402: xor     edx, edx
 * 000000014016D404: wrmsr
 * 000000014016D406: movzx   edx, word ptr gs:2EB8h
 * 000000014016D40F: test    edx, 8
 * 000000014016D415: jz      short loc_14016D42E
 * 000000014016D417: mov     eax, 1
 * 000000014016D41C: xor     edx, edx
 * 000000014016D41E: mov     ecx, 49h ; 'I'
 * 000000014016D423: wrmsr
 * 000000014016D425: movzx   edx, word ptr gs:2EB8h
 * 000000014016D42E: test    edx, 2
 * 000000014016D434: jz      loc_14016D55F
 * 000000014016D43A: call    loc_14016D54D
 * 000000014016D43F: add     rsp, 8
 * 000000014016D443: call    loc_14016D556
 * 000000014016D448: add     rsp, 8
 * 000000014016D44C: call    loc_14016D43F
 * 000000014016D451: add     rsp, 8
 * 000000014016D455: call    loc_14016D448
 * 000000014016D45A: add     rsp, 8
 * 000000014016D45E: call    loc_14016D451
 * 000000014016D463: add     rsp, 8
 * 000000014016D467: call    loc_14016D45A
 * 000000014016D46C: add     rsp, 8
 * 000000014016D470: call    loc_14016D463
 * 000000014016D475: add     rsp, 8
 * 000000014016D479: call    loc_14016D46C
 * 000000014016D47E: add     rsp, 8
 * 000000014016D482: call    loc_14016D475
 * 000000014016D487: add     rsp, 8
 * 000000014016D48B: call    loc_14016D47E
 * 000000014016D490: add     rsp, 8
 * 000000014016D494: call    loc_14016D487
 * 000000014016D499: add     rsp, 8
 * 000000014016D49D: call    loc_14016D490
 * 000000014016D4A2: add     rsp, 8
 * 000000014016D4A6: call    loc_14016D499
 * 000000014016D4AB: add     rsp, 8
 * 000000014016D4AF: call    loc_14016D4A2
 * 000000014016D4B4: add     rsp, 8
 * 000000014016D4B8: call    loc_14016D4AB
 * 000000014016D4BD: add     rsp, 8
 * 000000014016D4C1: call    loc_14016D4B4
 * 000000014016D4C6: add     rsp, 8
 * 000000014016D4CA: call    loc_14016D4BD
 * 000000014016D4CF: add     rsp, 8
 * 000000014016D4D3: call    loc_14016D4C6
 * 000000014016D4D8: add     rsp, 8
 * 000000014016D4DC: call    loc_14016D4CF
 * 000000014016D4E1: add     rsp, 8
 * 000000014016D4E5: call    loc_14016D4D8
 * 000000014016D4EA: add     rsp, 8
 * 000000014016D4EE: call    loc_14016D4E1
 * 000000014016D4F3: add     rsp, 8
 * 000000014016D4F7: call    loc_14016D4EA
 * 000000014016D4FC: add     rsp, 8
 * 000000014016D500: call    loc_14016D4F3
 * 000000014016D505: add     rsp, 8
 * 000000014016D509: call    loc_14016D4FC
 * 000000014016D50E: add     rsp, 8
 * 000000014016D512: call    loc_14016D505
 * 000000014016D517: add     rsp, 8
 * 000000014016D51B: call    loc_14016D50E
 * 000000014016D520: add     rsp, 8
 * 000000014016D524: call    loc_14016D517
 * 000000014016D529: add     rsp, 8
 * 000000014016D52D: call    loc_14016D520
 * 000000014016D532: add     rsp, 8
 * 000000014016D536: call    loc_14016D529
 * 000000014016D53B: add     rsp, 8
 * 000000014016D53F: call    loc_14016D532
 * 000000014016D544: add     rsp, 8
 * 000000014016D548: call    loc_14016D53B
 * 000000014016D54D: add     rsp, 8
 * 000000014016D551: call    loc_14016D544
 * 000000014016D556: add     rsp, 8
 * 000000014016D55A: mov     eax, 0DADAh
 * 000000014016D55F: test    edx, 100h
 * 000000014016D565: jz      short loc_14016D56C
 * 000000014016D567: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016D56C: lfence
 * 000000014016D56F: test    byte ptr [r10+3], 80h
 * 000000014016D574: jz      short loc_14016D5B8
 * 000000014016D576: mov     ecx, 0C0000102h
 * 000000014016D57B: rdmsr
 * 000000014016D57D: shl     rdx, 20h
 * 000000014016D581: or      rax, rdx
 * 000000014016D584: cmp     rax, cs:MmUserProbeAddress
 * 000000014016D58B: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016D593: cmp     [r10+0F0h], rax
 * 000000014016D59A: jz      short loc_14016D5B8
 * 000000014016D59C: mov     rdx, [r10+1F0h]
 * 000000014016D5A3: bts     dword ptr [r10+74h], 8
 * 000000014016D5A9: dec     word ptr [r10+1E6h]
 * 000000014016D5B1: mov     [rdx+80h], rax
 * 000000014016D5B8: test    byte ptr [r10+3], 3
 * 000000014016D5BD: mov     [rbp+0D8h+var_58], 0
 * 000000014016D5C6: jz      short loc_14016D5CD
 * 000000014016D5C8: call    KiSaveDebugRegisterState
 * 000000014016D5CD: cld
 * 000000014016D5CE: stmxcsr [rbp+0D8h+var_12C]
 * 000000014016D5D2: ldmxcsr dword ptr gs:180h
 * 000000014016D5DB: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014016D5DF: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014016D5E3: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014016D5E7: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014016D5EB: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014016D5EF: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014016D5F3: mov     eax, [rbp+0E0h]
 * 000000014016D5F9: test    [rbp+0D8h+arg_10], 200h
 * 000000014016D603: jz      short loc_14016D606
 * 000000014016D605: sti
 * 000000014016D606: mov     ecx, 80000002h
 * 000000014016D60B: xor     edx, edx
 * 000000014016D60D: mov     r8, [rbp+0D8h+arg_0]
 * 000000014016D614: call    KiExceptionDispatch
 * 000000014016D619: nop
 * 000000014016D61A: retn
 */
