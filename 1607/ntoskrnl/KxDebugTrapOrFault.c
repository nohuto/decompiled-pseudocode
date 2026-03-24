/*
 * XREFs of KxDebugTrapOrFault @ 0x1401694C0
 * Callers:
 *     KiDebugTrapOrFault @ 0x140169400 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x1401694C0 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x1401694C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401694C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401694C0: sub     rsp, 8
 * 00000001401694C4: push    rbp
 * 00000001401694C5: sub     rsp, 158h
 * 00000001401694CC: lea     rbp, [rsp+80h]
 * 00000001401694D4: mov     [rbp+0E8h+var_13D], 1
 * 00000001401694D8: mov     [rbp+0E8h+var_138], rax
 * 00000001401694DC: mov     [rbp+0E8h+var_130], rcx
 * 00000001401694E0: mov     [rbp+0E8h+var_128], rdx
 * 00000001401694E4: mov     [rbp+0E8h+var_120], r8
 * 00000001401694E8: mov     [rbp+0E8h+var_118], r9
 * 00000001401694EC: mov     [rbp+0E8h+var_110], r10
 * 00000001401694F0: mov     [rbp+0E8h+var_108], r11
 * 00000001401694F4: test    [rbp+0E8h+arg_0], 1
 * 00000001401694FB: jnz     short loc_14016952C
 * 00000001401694FD: lfence
 * 0000000140169500: test    word ptr gs:2EB8h, 1
 * 000000014016950B: jnz     short loc_140169515
 * 000000014016950D: lfence
 * 0000000140169510: jmp     loc_140169751
 * 0000000140169515: movzx   eax, word ptr gs:2EBCh
 * 000000014016951E: mov     ecx, 48h ; 'H'
 * 0000000140169523: xor     edx, edx
 * 0000000140169525: wrmsr
 * 0000000140169527: jmp     loc_140169751
 * 000000014016952C: test    cs:KiKvaShadow, 1
 * 0000000140169533: jnz     short loc_140169538
 * 0000000140169535: swapgs
 * 0000000140169538: lfence
 * 000000014016953B: mov     r10, gs:188h
 * 0000000140169544: mov     rcx, gs:188h
 * 000000014016954D: mov     rcx, [rcx+220h]
 * 0000000140169554: mov     rcx, [rcx+7B8h]
 * 000000014016955B: mov     gs:2EB0h, rcx
 * 0000000140169564: movzx   eax, word ptr gs:2EBEh
 * 000000014016956D: cmp     gs:2EBCh, ax
 * 0000000140169576: jz      short loc_14016958A
 * 0000000140169578: mov     gs:2EBCh, ax
 * 0000000140169581: mov     ecx, 48h ; 'H'
 * 0000000140169586: xor     edx, edx
 * 0000000140169588: wrmsr
 * 000000014016958A: movzx   edx, word ptr gs:2EB8h
 * 0000000140169593: test    edx, 8
 * 0000000140169599: jz      short loc_1401695B2
 * 000000014016959B: mov     eax, 1
 * 00000001401695A0: xor     edx, edx
 * 00000001401695A2: mov     ecx, 49h ; 'I'
 * 00000001401695A7: wrmsr
 * 00000001401695A9: movzx   edx, word ptr gs:2EB8h
 * 00000001401695B2: test    edx, 2
 * 00000001401695B8: jz      loc_1401696E3
 * 00000001401695BE: call    loc_1401696D1
 * 00000001401695C3: add     rsp, 8
 * 00000001401695C7: call    loc_1401696DA
 * 00000001401695CC: add     rsp, 8
 * 00000001401695D0: call    loc_1401695C3
 * 00000001401695D5: add     rsp, 8
 * 00000001401695D9: call    loc_1401695CC
 * 00000001401695DE: add     rsp, 8
 * 00000001401695E2: call    loc_1401695D5
 * 00000001401695E7: add     rsp, 8
 * 00000001401695EB: call    loc_1401695DE
 * 00000001401695F0: add     rsp, 8
 * 00000001401695F4: call    loc_1401695E7
 * 00000001401695F9: add     rsp, 8
 * 00000001401695FD: call    loc_1401695F0
 * 0000000140169602: add     rsp, 8
 * 0000000140169606: call    loc_1401695F9
 * 000000014016960B: add     rsp, 8
 * 000000014016960F: call    loc_140169602
 * 0000000140169614: add     rsp, 8
 * 0000000140169618: call    loc_14016960B
 * 000000014016961D: add     rsp, 8
 * 0000000140169621: call    loc_140169614
 * 0000000140169626: add     rsp, 8
 * 000000014016962A: call    loc_14016961D
 * 000000014016962F: add     rsp, 8
 * 0000000140169633: call    loc_140169626
 * 0000000140169638: add     rsp, 8
 * 000000014016963C: call    loc_14016962F
 * 0000000140169641: add     rsp, 8
 * 0000000140169645: call    loc_140169638
 * 000000014016964A: add     rsp, 8
 * 000000014016964E: call    loc_140169641
 * 0000000140169653: add     rsp, 8
 * 0000000140169657: call    loc_14016964A
 * 000000014016965C: add     rsp, 8
 * 0000000140169660: call    loc_140169653
 * 0000000140169665: add     rsp, 8
 * 0000000140169669: call    loc_14016965C
 * 000000014016966E: add     rsp, 8
 * 0000000140169672: call    loc_140169665
 * 0000000140169677: add     rsp, 8
 * 000000014016967B: call    loc_14016966E
 * 0000000140169680: add     rsp, 8
 * 0000000140169684: call    loc_140169677
 * 0000000140169689: add     rsp, 8
 * 000000014016968D: call    loc_140169680
 * 0000000140169692: add     rsp, 8
 * 0000000140169696: call    loc_140169689
 * 000000014016969B: add     rsp, 8
 * 000000014016969F: call    loc_140169692
 * 00000001401696A4: add     rsp, 8
 * 00000001401696A8: call    loc_14016969B
 * 00000001401696AD: add     rsp, 8
 * 00000001401696B1: call    loc_1401696A4
 * 00000001401696B6: add     rsp, 8
 * 00000001401696BA: call    loc_1401696AD
 * 00000001401696BF: add     rsp, 8
 * 00000001401696C3: call    loc_1401696B6
 * 00000001401696C8: add     rsp, 8
 * 00000001401696CC: call    loc_1401696BF
 * 00000001401696D1: add     rsp, 8
 * 00000001401696D5: call    loc_1401696C8
 * 00000001401696DA: add     rsp, 8
 * 00000001401696DE: mov     eax, 0DADAh
 * 00000001401696E3: test    edx, 100h
 * 00000001401696E9: jz      short loc_1401696F0
 * 00000001401696EB: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401696F0: lfence
 * 00000001401696F3: test    byte ptr [r10+3], 80h
 * 00000001401696F8: jz      short loc_14016973C
 * 00000001401696FA: mov     ecx, 0C0000102h
 * 00000001401696FF: rdmsr
 * 0000000140169701: shl     rdx, 20h
 * 0000000140169705: or      rax, rdx
 * 0000000140169708: cmp     rax, cs:MmUserProbeAddress
 * 000000014016970F: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140169717: cmp     [r10+0F0h], rax
 * 000000014016971E: jz      short loc_14016973C
 * 0000000140169720: mov     rdx, [r10+1F0h]
 * 0000000140169727: bts     dword ptr [r10+74h], 8
 * 000000014016972D: dec     word ptr [r10+1E6h]
 * 0000000140169735: mov     [rdx+80h], rax
 * 000000014016973C: test    byte ptr [r10+3], 3
 * 0000000140169741: mov     [rbp+0E8h+var_68], 0
 * 000000014016974A: jz      short loc_140169751
 * 000000014016974C: call    KiSaveDebugRegisterState
 * 0000000140169751: cld
 * 0000000140169752: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140169756: ldmxcsr dword ptr gs:180h
 * 000000014016975F: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140169763: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140169767: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014016976B: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014016976F: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140169773: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140169777: test    [rbp+0E8h+arg_8], 200h
 * 0000000140169781: jz      short loc_140169784
 * 0000000140169783: sti
 * 0000000140169784: xor     edx, edx
 * 0000000140169786: test    [rbp+0E8h+arg_8], 100h
 * 0000000140169790: jz      loc_140169853
 * 0000000140169796: test    byte ptr gs:646Ah, 2
 * 000000014016979F: jz      loc_140169853
 * 00000001401697A5: test    [rbp+0E8h+arg_0], 1
 * 00000001401697AC: jnz     short loc_140169805
 * 00000001401697AE: mov     rax, dr7
 * 00000001401697B1: test    ax, 200h
 * 00000001401697B5: jz      loc_140169853
 * 00000001401697BB: test    ax, 100h
 * 00000001401697BF: jz      loc_140169853
 * 00000001401697C5: mov     r8d, cs:KiLastBranchTOSMSR
 * 00000001401697CC: or      r8d, r8d
 * 00000001401697CF: jz      short loc_1401697D9
 * 00000001401697D1: mov     ecx, r8d
 * 00000001401697D4: rdmsr
 * 00000001401697D6: mov     r8d, eax
 * 00000001401697D9: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 00000001401697DF: add     ecx, r8d
 * 00000001401697E2: rdmsr
 * 00000001401697E4: mov     r9d, eax
 * 00000001401697E7: shl     rdx, 20h
 * 00000001401697EB: mov     ecx, cs:KiLastBranchToBaseMSR
 * 00000001401697F1: or      r9, rdx
 * 00000001401697F4: add     ecx, r8d
 * 00000001401697F7: rdmsr
 * 00000001401697F9: mov     r10d, eax
 * 00000001401697FC: shl     rdx, 20h
 * 0000000140169800: or      r10, rdx
 * 0000000140169803: jmp     short loc_14016984E
 * 0000000140169805: test    [rbp+0E8h+var_68], 200h
 * 000000014016980E: jz      short loc_140169853
 * 0000000140169810: test    [rbp+0E8h+var_68], 100h
 * 0000000140169819: jz      short loc_140169853
 * 000000014016981B: and     [rbp+0E8h+var_40], 0
 * 0000000140169823: and     [rbp+0E8h+var_48], 0
 * 000000014016982B: mov     rcx, cs:MmUserProbeAddress
 * 0000000140169832: mov     r9, [rbp+0E8h+var_50]
 * 0000000140169839: cmp     r9, rcx
 * 000000014016983C: cmovnb  r9, rcx
 * 0000000140169840: mov     r10, [rbp+0E8h+var_58]
 * 0000000140169847: cmp     r10, rcx
 * 000000014016984A: cmovnb  r10, rcx
 * 000000014016984E: mov     edx, 2
 * 0000000140169853: mov     ecx, 80000004h
 * 0000000140169858: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 0000000140169862: mov     r8, [rbp+0E8h]
 * 0000000140169869: call    KiExceptionDispatch
 * 000000014016986E: nop
 * 000000014016986F: retn
 */
