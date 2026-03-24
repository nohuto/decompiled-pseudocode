/*
 * XREFs of KiSegmentNotPresentFault @ 0x140161440
 * Callers:
 *     KiSegmentNotPresentFaultShadow @ 0x140224580 (KiSegmentNotPresentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiSegmentNotPresentFault @ 0x140161440 (KiSegmentNotPresentFault.c)
 *     KiBugCheckDispatch @ 0x140165B40 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSegmentNotPresentFault @ 0x140161440
 * Reason: Hex-Rays returned no pseudocode for 0x140161440
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140161440: push    rbp
 * 0000000140161441: sub     rsp, 158h
 * 0000000140161448: lea     rbp, [rsp+80h]
 * 0000000140161450: mov     [rbp+0D8h+var_12D], 1
 * 0000000140161454: mov     [rbp+0D8h+var_128], rax
 * 0000000140161458: mov     [rbp+0D8h+var_120], rcx
 * 000000014016145C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140161460: mov     [rbp+0D8h+var_110], r8
 * 0000000140161464: mov     [rbp+0D8h+var_108], r9
 * 0000000140161468: mov     [rbp+0D8h+var_100], r10
 * 000000014016146C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140161470: test    [rbp+0D8h+arg_8], 1
 * 0000000140161477: jnz     loc_1401615DD
 * 000000014016147D: cmp     byte ptr gs:187h, 0
 * 0000000140161486: jz      loc_1401617AD
 * 000000014016148C: test    byte ptr gs:2EB0h, 1
 * 0000000140161495: jz      loc_1401617AD
 * 000000014016149B: mov     ecx, 48h ; 'H'
 * 00000001401614A0: mov     eax, 1
 * 00000001401614A5: xor     edx, edx
 * 00000001401614A7: wrmsr
 * 00000001401614A9: test    byte ptr gs:2EB0h, 4
 * 00000001401614B2: jnz     loc_1401617AD
 * 00000001401614B8: call    loc_1401615CB
 * 00000001401614BD: add     rsp, 8
 * 00000001401614C1: call    loc_1401615D4
 * 00000001401614C6: add     rsp, 8
 * 00000001401614CA: call    loc_1401614BD
 * 00000001401614CF: add     rsp, 8
 * 00000001401614D3: call    loc_1401614C6
 * 00000001401614D8: add     rsp, 8
 * 00000001401614DC: call    loc_1401614CF
 * 00000001401614E1: add     rsp, 8
 * 00000001401614E5: call    loc_1401614D8
 * 00000001401614EA: add     rsp, 8
 * 00000001401614EE: call    loc_1401614E1
 * 00000001401614F3: add     rsp, 8
 * 00000001401614F7: call    loc_1401614EA
 * 00000001401614FC: add     rsp, 8
 * 0000000140161500: call    loc_1401614F3
 * 0000000140161505: add     rsp, 8
 * 0000000140161509: call    loc_1401614FC
 * 000000014016150E: add     rsp, 8
 * 0000000140161512: call    loc_140161505
 * 0000000140161517: add     rsp, 8
 * 000000014016151B: call    loc_14016150E
 * 0000000140161520: add     rsp, 8
 * 0000000140161524: call    loc_140161517
 * 0000000140161529: add     rsp, 8
 * 000000014016152D: call    loc_140161520
 * 0000000140161532: add     rsp, 8
 * 0000000140161536: call    loc_140161529
 * 000000014016153B: add     rsp, 8
 * 000000014016153F: call    loc_140161532
 * 0000000140161544: add     rsp, 8
 * 0000000140161548: call    loc_14016153B
 * 000000014016154D: add     rsp, 8
 * 0000000140161551: call    loc_140161544
 * 0000000140161556: add     rsp, 8
 * 000000014016155A: call    loc_14016154D
 * 000000014016155F: add     rsp, 8
 * 0000000140161563: call    loc_140161556
 * 0000000140161568: add     rsp, 8
 * 000000014016156C: call    loc_14016155F
 * 0000000140161571: add     rsp, 8
 * 0000000140161575: call    loc_140161568
 * 000000014016157A: add     rsp, 8
 * 000000014016157E: call    loc_140161571
 * 0000000140161583: add     rsp, 8
 * 0000000140161587: call    loc_14016157A
 * 000000014016158C: add     rsp, 8
 * 0000000140161590: call    loc_140161583
 * 0000000140161595: add     rsp, 8
 * 0000000140161599: call    loc_14016158C
 * 000000014016159E: add     rsp, 8
 * 00000001401615A2: call    loc_140161595
 * 00000001401615A7: add     rsp, 8
 * 00000001401615AB: call    loc_14016159E
 * 00000001401615B0: add     rsp, 8
 * 00000001401615B4: call    loc_1401615A7
 * 00000001401615B9: add     rsp, 8
 * 00000001401615BD: call    loc_1401615B0
 * 00000001401615C2: add     rsp, 8
 * 00000001401615C6: call    loc_1401615B9
 * 00000001401615CB: add     rsp, 8
 * 00000001401615CF: call    loc_1401615C2
 * 00000001401615D4: add     rsp, 8
 * 00000001401615D8: jmp     loc_1401617AD
 * 00000001401615DD: test    cs:KiKvaShadow, 1
 * 00000001401615E4: jnz     short loc_1401615E9
 * 00000001401615E6: swapgs
 * 00000001401615E9: mov     r10, gs:188h
 * 00000001401615F2: test    byte ptr gs:2EB0h, 1
 * 00000001401615FB: jz      loc_14016175E
 * 0000000140161601: mov     rcx, gs:188h
 * 000000014016160A: mov     rcx, [rcx+220h]
 * 0000000140161611: mov     rcx, [rcx+790h]
 * 0000000140161618: mov     gs:2EA8h, rcx
 * 0000000140161621: mov     ecx, 48h ; 'H'
 * 0000000140161626: mov     eax, 1
 * 000000014016162B: xor     edx, edx
 * 000000014016162D: wrmsr
 * 000000014016162F: test    byte ptr gs:2EB0h, 4
 * 0000000140161638: jnz     loc_14016175E
 * 000000014016163E: call    loc_140161751
 * 0000000140161643: add     rsp, 8
 * 0000000140161647: call    loc_14016175A
 * 000000014016164C: add     rsp, 8
 * 0000000140161650: call    loc_140161643
 * 0000000140161655: add     rsp, 8
 * 0000000140161659: call    loc_14016164C
 * 000000014016165E: add     rsp, 8
 * 0000000140161662: call    loc_140161655
 * 0000000140161667: add     rsp, 8
 * 000000014016166B: call    loc_14016165E
 * 0000000140161670: add     rsp, 8
 * 0000000140161674: call    loc_140161667
 * 0000000140161679: add     rsp, 8
 * 000000014016167D: call    loc_140161670
 * 0000000140161682: add     rsp, 8
 * 0000000140161686: call    loc_140161679
 * 000000014016168B: add     rsp, 8
 * 000000014016168F: call    loc_140161682
 * 0000000140161694: add     rsp, 8
 * 0000000140161698: call    loc_14016168B
 * 000000014016169D: add     rsp, 8
 * 00000001401616A1: call    loc_140161694
 * 00000001401616A6: add     rsp, 8
 * 00000001401616AA: call    loc_14016169D
 * 00000001401616AF: add     rsp, 8
 * 00000001401616B3: call    loc_1401616A6
 * 00000001401616B8: add     rsp, 8
 * 00000001401616BC: call    loc_1401616AF
 * 00000001401616C1: add     rsp, 8
 * 00000001401616C5: call    loc_1401616B8
 * 00000001401616CA: add     rsp, 8
 * 00000001401616CE: call    loc_1401616C1
 * 00000001401616D3: add     rsp, 8
 * 00000001401616D7: call    loc_1401616CA
 * 00000001401616DC: add     rsp, 8
 * 00000001401616E0: call    loc_1401616D3
 * 00000001401616E5: add     rsp, 8
 * 00000001401616E9: call    loc_1401616DC
 * 00000001401616EE: add     rsp, 8
 * 00000001401616F2: call    loc_1401616E5
 * 00000001401616F7: add     rsp, 8
 * 00000001401616FB: call    loc_1401616EE
 * 0000000140161700: add     rsp, 8
 * 0000000140161704: call    loc_1401616F7
 * 0000000140161709: add     rsp, 8
 * 000000014016170D: call    loc_140161700
 * 0000000140161712: add     rsp, 8
 * 0000000140161716: call    loc_140161709
 * 000000014016171B: add     rsp, 8
 * 000000014016171F: call    loc_140161712
 * 0000000140161724: add     rsp, 8
 * 0000000140161728: call    loc_14016171B
 * 000000014016172D: add     rsp, 8
 * 0000000140161731: call    loc_140161724
 * 0000000140161736: add     rsp, 8
 * 000000014016173A: call    loc_14016172D
 * 000000014016173F: add     rsp, 8
 * 0000000140161743: call    loc_140161736
 * 0000000140161748: add     rsp, 8
 * 000000014016174C: call    loc_14016173F
 * 0000000140161751: add     rsp, 8
 * 0000000140161755: call    loc_140161748
 * 000000014016175A: add     rsp, 8
 * 000000014016175E: test    byte ptr [r10+3], 80h
 * 0000000140161763: jz      short loc_140161798
 * 0000000140161765: mov     ecx, 0C0000102h
 * 000000014016176A: rdmsr
 * 000000014016176C: shl     rdx, 20h
 * 0000000140161770: or      rax, rdx
 * 0000000140161773: cmp     [r10+0F0h], rax
 * 000000014016177A: jz      short loc_140161798
 * 000000014016177C: mov     rdx, [r10+1F0h]
 * 0000000140161783: bts     dword ptr [r10+74h], 8
 * 0000000140161789: dec     word ptr [r10+1E6h]
 * 0000000140161791: mov     [rdx+80h], rax
 * 0000000140161798: test    byte ptr [r10+3], 3
 * 000000014016179D: mov     [rbp+0D8h+var_58], 0
 * 00000001401617A6: jz      short loc_1401617AD
 * 00000001401617A8: call    KiSaveDebugRegisterState
 * 00000001401617AD: cld
 * 00000001401617AE: lfence
 * 00000001401617B1: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401617B5: ldmxcsr dword ptr gs:180h
 * 00000001401617BE: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401617C2: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401617C6: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401617CA: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401617CE: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401617D2: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401617D6: mov     eax, [rbp+0E0h]
 * 00000001401617DC: test    [rbp+0D8h+arg_10], 200h
 * 00000001401617E6: jz      short loc_1401617E9
 * 00000001401617E8: sti
 * 00000001401617E9: mov     r8, [rbp+0D8h+arg_0]
 * 00000001401617F0: test    [rbp+0D8h+arg_8], 1
 * 00000001401617F7: jz      short loc_14016181D
 * 00000001401617F9: mov     ecx, 0C0000005h
 * 00000001401617FE: mov     edx, 2
 * 0000000140161803: mov     r9d, [rbp+0E0h]
 * 000000014016180A: or      r9d, 3
 * 000000014016180E: and     r9d, 0FFFFh
 * 0000000140161815: xor     r10, r10
 * 0000000140161818: call    KiExceptionDispatch
 * 000000014016181D: mov     r10, r8
 * 0000000140161820: mov     r9d, [rbp+0E0h]
 * 0000000140161827: mov     r8, cr0
 * 000000014016182B: mov     edx, 0Bh
 * 0000000140161830: mov     ecx, 7Fh
 * 0000000140161835: call    KiBugCheckDispatch
 */
