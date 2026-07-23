/*
 * XREFs of KiDivideErrorFault @ 0x140169600
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x14023F000 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x140169600 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x140169600
 * Reason: Hex-Rays returned no pseudocode for 0x140169600
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140169600: sub     rsp, 8
 * 0000000140169604: push    rbp
 * 0000000140169605: sub     rsp, 158h
 * 000000014016960C: lea     rbp, [rsp+80h]
 * 0000000140169614: mov     [rbp+0E8h+var_13D], 1
 * 0000000140169618: mov     [rbp+0E8h+var_138], rax
 * 000000014016961C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140169620: mov     [rbp+0E8h+var_128], rdx
 * 0000000140169624: mov     [rbp+0E8h+var_120], r8
 * 0000000140169628: mov     [rbp+0E8h+var_118], r9
 * 000000014016962C: mov     [rbp+0E8h+var_110], r10
 * 0000000140169630: mov     [rbp+0E8h+var_108], r11
 * 0000000140169634: test    [rbp+0E8h+arg_0], 1
 * 000000014016963B: jnz     short loc_14016966C
 * 000000014016963D: lfence
 * 0000000140169640: test    word ptr gs:2EB8h, 1
 * 000000014016964B: jnz     short loc_140169655
 * 000000014016964D: lfence
 * 0000000140169650: jmp     loc_140169891
 * 0000000140169655: movzx   eax, word ptr gs:2EBCh
 * 000000014016965E: mov     ecx, 48h ; 'H'
 * 0000000140169663: xor     edx, edx
 * 0000000140169665: wrmsr
 * 0000000140169667: jmp     loc_140169891
 * 000000014016966C: test    cs:KiKvaShadow, 1
 * 0000000140169673: jnz     short loc_140169678
 * 0000000140169675: swapgs
 * 0000000140169678: lfence
 * 000000014016967B: mov     r10, gs:188h
 * 0000000140169684: mov     rcx, gs:188h
 * 000000014016968D: mov     rcx, [rcx+220h]
 * 0000000140169694: mov     rcx, [rcx+7B8h]
 * 000000014016969B: mov     gs:2EB0h, rcx
 * 00000001401696A4: movzx   eax, word ptr gs:2EBEh
 * 00000001401696AD: cmp     gs:2EBCh, ax
 * 00000001401696B6: jz      short loc_1401696CA
 * 00000001401696B8: mov     gs:2EBCh, ax
 * 00000001401696C1: mov     ecx, 48h ; 'H'
 * 00000001401696C6: xor     edx, edx
 * 00000001401696C8: wrmsr
 * 00000001401696CA: movzx   edx, word ptr gs:2EB8h
 * 00000001401696D3: test    edx, 8
 * 00000001401696D9: jz      short loc_1401696F2
 * 00000001401696DB: mov     eax, 1
 * 00000001401696E0: xor     edx, edx
 * 00000001401696E2: mov     ecx, 49h ; 'I'
 * 00000001401696E7: wrmsr
 * 00000001401696E9: movzx   edx, word ptr gs:2EB8h
 * 00000001401696F2: test    edx, 2
 * 00000001401696F8: jz      loc_140169823
 * 00000001401696FE: call    loc_140169811
 * 0000000140169703: add     rsp, 8
 * 0000000140169707: call    loc_14016981A
 * 000000014016970C: add     rsp, 8
 * 0000000140169710: call    loc_140169703
 * 0000000140169715: add     rsp, 8
 * 0000000140169719: call    loc_14016970C
 * 000000014016971E: add     rsp, 8
 * 0000000140169722: call    loc_140169715
 * 0000000140169727: add     rsp, 8
 * 000000014016972B: call    loc_14016971E
 * 0000000140169730: add     rsp, 8
 * 0000000140169734: call    loc_140169727
 * 0000000140169739: add     rsp, 8
 * 000000014016973D: call    loc_140169730
 * 0000000140169742: add     rsp, 8
 * 0000000140169746: call    loc_140169739
 * 000000014016974B: add     rsp, 8
 * 000000014016974F: call    loc_140169742
 * 0000000140169754: add     rsp, 8
 * 0000000140169758: call    loc_14016974B
 * 000000014016975D: add     rsp, 8
 * 0000000140169761: call    loc_140169754
 * 0000000140169766: add     rsp, 8
 * 000000014016976A: call    loc_14016975D
 * 000000014016976F: add     rsp, 8
 * 0000000140169773: call    loc_140169766
 * 0000000140169778: add     rsp, 8
 * 000000014016977C: call    loc_14016976F
 * 0000000140169781: add     rsp, 8
 * 0000000140169785: call    loc_140169778
 * 000000014016978A: add     rsp, 8
 * 000000014016978E: call    loc_140169781
 * 0000000140169793: add     rsp, 8
 * 0000000140169797: call    loc_14016978A
 * 000000014016979C: add     rsp, 8
 * 00000001401697A0: call    loc_140169793
 * 00000001401697A5: add     rsp, 8
 * 00000001401697A9: call    loc_14016979C
 * 00000001401697AE: add     rsp, 8
 * 00000001401697B2: call    loc_1401697A5
 * 00000001401697B7: add     rsp, 8
 * 00000001401697BB: call    loc_1401697AE
 * 00000001401697C0: add     rsp, 8
 * 00000001401697C4: call    loc_1401697B7
 * 00000001401697C9: add     rsp, 8
 * 00000001401697CD: call    loc_1401697C0
 * 00000001401697D2: add     rsp, 8
 * 00000001401697D6: call    loc_1401697C9
 * 00000001401697DB: add     rsp, 8
 * 00000001401697DF: call    loc_1401697D2
 * 00000001401697E4: add     rsp, 8
 * 00000001401697E8: call    loc_1401697DB
 * 00000001401697ED: add     rsp, 8
 * 00000001401697F1: call    loc_1401697E4
 * 00000001401697F6: add     rsp, 8
 * 00000001401697FA: call    loc_1401697ED
 * 00000001401697FF: add     rsp, 8
 * 0000000140169803: call    loc_1401697F6
 * 0000000140169808: add     rsp, 8
 * 000000014016980C: call    loc_1401697FF
 * 0000000140169811: add     rsp, 8
 * 0000000140169815: call    loc_140169808
 * 000000014016981A: add     rsp, 8
 * 000000014016981E: mov     eax, 0DADAh
 * 0000000140169823: test    edx, 100h
 * 0000000140169829: jz      short loc_140169830
 * 000000014016982B: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140169830: lfence
 * 0000000140169833: test    byte ptr [r10+3], 80h
 * 0000000140169838: jz      short loc_14016987C
 * 000000014016983A: mov     ecx, 0C0000102h
 * 000000014016983F: rdmsr
 * 0000000140169841: shl     rdx, 20h
 * 0000000140169845: or      rax, rdx
 * 0000000140169848: cmp     rax, cs:MmUserProbeAddress
 * 000000014016984F: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140169857: cmp     [r10+0F0h], rax
 * 000000014016985E: jz      short loc_14016987C
 * 0000000140169860: mov     rdx, [r10+1F0h]
 * 0000000140169867: bts     dword ptr [r10+74h], 8
 * 000000014016986D: dec     word ptr [r10+1E6h]
 * 0000000140169875: mov     [rdx+80h], rax
 * 000000014016987C: test    byte ptr [r10+3], 3
 * 0000000140169881: mov     [rbp+0E8h+var_68], 0
 * 000000014016988A: jz      short loc_140169891
 * 000000014016988C: call    KiSaveDebugRegisterState
 * 0000000140169891: cld
 * 0000000140169892: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140169896: ldmxcsr dword ptr gs:180h
 * 000000014016989F: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401698A3: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401698A7: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401698AB: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401698AF: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401698B3: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401698B7: test    [rbp+0E8h+arg_8], 200h
 * 00000001401698C1: jz      short loc_1401698C4
 * 00000001401698C3: sti
 * 00000001401698C4: mov     ecx, 10000003h
 * 00000001401698C9: xor     edx, edx
 * 00000001401698CB: mov     r8, [rbp+0E8h]
 * 00000001401698D2: call    KiExceptionDispatch
 * 00000001401698D7: nop
 * 00000001401698D8: retn
 */
