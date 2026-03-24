/*
 * XREFs of KiIpiInterrupt @ 0x1401655D0
 * Callers:
 *     KiIpiInterruptShadow @ 0x140240000 (KiIpiInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008C180 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x1400B1D48 (KeWakeProcessor.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140159180 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165590 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x1401655D0 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140165C30 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x1401655D0
 * Reason: Hex-Rays returned no pseudocode for 0x1401655D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401655D0: sub     rsp, 8
 * 00000001401655D4: push    rbp
 * 00000001401655D5: push    rsi
 * 00000001401655D6: sub     rsp, 150h
 * 00000001401655DD: lea     rbp, [rsp+80h]
 * 00000001401655E5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401655E9: mov     [rbp+0E8h+var_138], rax
 * 00000001401655ED: mov     [rbp+0E8h+var_130], rcx
 * 00000001401655F1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401655F5: mov     [rbp+0E8h+var_120], r8
 * 00000001401655F9: mov     [rbp+0E8h+var_118], r9
 * 00000001401655FD: mov     [rbp+0E8h+var_110], r10
 * 0000000140165601: mov     [rbp+0E8h+var_108], r11
 * 0000000140165605: test    [rbp+0E8h+arg_0], 1
 * 000000014016560C: jnz     short loc_14016563D
 * 000000014016560E: lfence
 * 0000000140165611: test    word ptr gs:2EB8h, 1
 * 000000014016561C: jnz     short loc_140165626
 * 000000014016561E: lfence
 * 0000000140165621: jmp     loc_140165819
 * 0000000140165626: movzx   eax, word ptr gs:2EBCh
 * 000000014016562F: mov     ecx, 48h ; 'H'
 * 0000000140165634: xor     edx, edx
 * 0000000140165636: wrmsr
 * 0000000140165638: jmp     loc_140165819
 * 000000014016563D: test    cs:KiKvaShadow, 1
 * 0000000140165644: jnz     short loc_140165649
 * 0000000140165646: swapgs
 * 0000000140165649: lfence
 * 000000014016564C: mov     r10, gs:188h
 * 0000000140165655: mov     rcx, gs:188h
 * 000000014016565E: mov     rcx, [rcx+220h]
 * 0000000140165665: mov     rcx, [rcx+7B8h]
 * 000000014016566C: mov     gs:2EB0h, rcx
 * 0000000140165675: movzx   eax, word ptr gs:2EBEh
 * 000000014016567E: cmp     gs:2EBCh, ax
 * 0000000140165687: jz      short loc_14016569B
 * 0000000140165689: mov     gs:2EBCh, ax
 * 0000000140165692: mov     ecx, 48h ; 'H'
 * 0000000140165697: xor     edx, edx
 * 0000000140165699: wrmsr
 * 000000014016569B: movzx   edx, word ptr gs:2EB8h
 * 00000001401656A4: test    edx, 8
 * 00000001401656AA: jz      short loc_1401656C3
 * 00000001401656AC: mov     eax, 1
 * 00000001401656B1: xor     edx, edx
 * 00000001401656B3: mov     ecx, 49h ; 'I'
 * 00000001401656B8: wrmsr
 * 00000001401656BA: movzx   edx, word ptr gs:2EB8h
 * 00000001401656C3: test    edx, 2
 * 00000001401656C9: jz      loc_1401657F4
 * 00000001401656CF: call    loc_1401657E2
 * 00000001401656D4: add     rsp, 8
 * 00000001401656D8: call    loc_1401657EB
 * 00000001401656DD: add     rsp, 8
 * 00000001401656E1: call    loc_1401656D4
 * 00000001401656E6: add     rsp, 8
 * 00000001401656EA: call    loc_1401656DD
 * 00000001401656EF: add     rsp, 8
 * 00000001401656F3: call    loc_1401656E6
 * 00000001401656F8: add     rsp, 8
 * 00000001401656FC: call    loc_1401656EF
 * 0000000140165701: add     rsp, 8
 * 0000000140165705: call    loc_1401656F8
 * 000000014016570A: add     rsp, 8
 * 000000014016570E: call    loc_140165701
 * 0000000140165713: add     rsp, 8
 * 0000000140165717: call    loc_14016570A
 * 000000014016571C: add     rsp, 8
 * 0000000140165720: call    loc_140165713
 * 0000000140165725: add     rsp, 8
 * 0000000140165729: call    loc_14016571C
 * 000000014016572E: add     rsp, 8
 * 0000000140165732: call    loc_140165725
 * 0000000140165737: add     rsp, 8
 * 000000014016573B: call    loc_14016572E
 * 0000000140165740: add     rsp, 8
 * 0000000140165744: call    loc_140165737
 * 0000000140165749: add     rsp, 8
 * 000000014016574D: call    loc_140165740
 * 0000000140165752: add     rsp, 8
 * 0000000140165756: call    loc_140165749
 * 000000014016575B: add     rsp, 8
 * 000000014016575F: call    loc_140165752
 * 0000000140165764: add     rsp, 8
 * 0000000140165768: call    loc_14016575B
 * 000000014016576D: add     rsp, 8
 * 0000000140165771: call    loc_140165764
 * 0000000140165776: add     rsp, 8
 * 000000014016577A: call    loc_14016576D
 * 000000014016577F: add     rsp, 8
 * 0000000140165783: call    loc_140165776
 * 0000000140165788: add     rsp, 8
 * 000000014016578C: call    loc_14016577F
 * 0000000140165791: add     rsp, 8
 * 0000000140165795: call    loc_140165788
 * 000000014016579A: add     rsp, 8
 * 000000014016579E: call    loc_140165791
 * 00000001401657A3: add     rsp, 8
 * 00000001401657A7: call    loc_14016579A
 * 00000001401657AC: add     rsp, 8
 * 00000001401657B0: call    loc_1401657A3
 * 00000001401657B5: add     rsp, 8
 * 00000001401657B9: call    loc_1401657AC
 * 00000001401657BE: add     rsp, 8
 * 00000001401657C2: call    loc_1401657B5
 * 00000001401657C7: add     rsp, 8
 * 00000001401657CB: call    loc_1401657BE
 * 00000001401657D0: add     rsp, 8
 * 00000001401657D4: call    loc_1401657C7
 * 00000001401657D9: add     rsp, 8
 * 00000001401657DD: call    loc_1401657D0
 * 00000001401657E2: add     rsp, 8
 * 00000001401657E6: call    loc_1401657D9
 * 00000001401657EB: add     rsp, 8
 * 00000001401657EF: mov     eax, 0DADAh
 * 00000001401657F4: test    edx, 100h
 * 00000001401657FA: jz      short loc_140165801
 * 00000001401657FC: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140165801: lfence
 * 0000000140165804: test    byte ptr [r10+3], 3
 * 0000000140165809: mov     [rbp+0E8h+var_68], 0
 * 0000000140165812: jz      short loc_140165819
 * 0000000140165814: call    KiSaveDebugRegisterState
 * 0000000140165819: cld
 * 000000014016581A: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016581E: ldmxcsr dword ptr gs:180h
 * 0000000140165827: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016582B: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016582F: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140165833: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140165837: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016583B: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016583F: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140165848: jz      short loc_14016584F
 * 000000014016584A: call    KeWakeProcessor
 * 000000014016584F: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140165856: cmp     rax, [rbp+0E8h]
 * 000000014016585D: jnb     short loc_140165878
 * 000000014016585F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140165866: cmp     rax, [rbp+0E8h]
 * 000000014016586D: jb      short loc_140165878
 * 000000014016586F: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140165873: call    KiCheckForSListAddress
 * 0000000140165878: xor     esi, esi
 * 000000014016587A: inc     dword ptr gs:5C80h
 * 0000000140165882: mov     rdx, rsp
 * 0000000140165885: mov     rcx, gs:6498h
 * 000000014016588E: lea     rax, [rcx-6000h]
 * 0000000140165895: cmp     rax, rsp
 * 0000000140165898: ja      short loc_14016589F
 * 000000014016589A: cmp     rsp, rcx
 * 000000014016589D: jb      short loc_1401658AB
 * 000000014016589F: cmp     cs:KiBugCheckActive, 0
 * 00000001401658A6: jnz     short loc_1401658AB
 * 00000001401658A8: mov     rsp, rcx
 * 00000001401658AB: sub     rsp, 20h
 * 00000001401658AF: mov     qword ptr [rsp+108h+var_F8], rdx
 * 00000001401658B4: call    KiIpiInterruptSubDispatch
 * 00000001401658B9: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 00000001401658BE: mov     rcx, rsi
 * 00000001401658C1: call    HalPerformEndOfInterrupt_0
 * 00000001401658C6: mov     rcx, gs:20h
 * 00000001401658CF: cmp     byte ptr [rcx+20h], 1
 * 00000001401658D3: ja      short loc_140165949
 * 00000001401658D5: rdtsc
 * 00000001401658D7: shl     rdx, 20h
 * 00000001401658DB: or      rax, rdx
 * 00000001401658DE: sub     rax, [rcx+5B38h]
 * 00000001401658E5: add     [rcx+5BF8h], rax
 * 00000001401658EC: add     [rcx+5B38h], rax
 * 00000001401658F3: mov     r8, rax
 * 00000001401658F6: mov     rax, [rcx+8]
 * 00000001401658FA: test    byte ptr [rax+2], 32h
 * 00000001401658FE: jz      short loc_140165913
 * 0000000140165900: xor     edx, edx
 * 0000000140165902: call    KiBeginThreadAccountingPeriod
 * 0000000140165907: mov     rcx, gs:20h
 * 0000000140165910: inc     byte ptr [rcx+20h]
 * 0000000140165913: mov     dl, [rcx+6]
 * 0000000140165916: and     byte ptr [rcx+6], 0
 * 000000014016591A: cmp     byte ptr [rcx+7], 0
 * 000000014016591E: jnz     short loc_140165949
 * 0000000140165920: test    dl, dl
 * 0000000140165922: jz      short loc_140165949
 * 0000000140165924: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140165928: jnb     short loc_140165935
 * 000000014016592A: and     byte ptr [rcx+20h], 0
 * 000000014016592E: call    KiDpcInterruptBypass
 * 0000000140165933: jmp     short loc_14016594C
 * 0000000140165935: mov     ecx, 2
 * 000000014016593A: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140165940: mov     rcx, gs:20h
 * 0000000140165949: dec     byte ptr [rcx+20h]
 * 000000014016594C: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140165950: mov     cr8, rcx
 * 0000000140165954: mov     rsi, [rbp+0E8h+var_18]
 * 000000014016595B: test    [rbp+0E8h+arg_0], 1
 * 0000000140165962: jz      loc_140165BDB
 * 0000000140165968: mov     rcx, gs:188h
 * 0000000140165971: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140165978: jz      short loc_140165993
 * 000000014016597A: mov     ecx, 1
 * 000000014016597F: mov     cr8, rcx
 * 0000000140165983: sti
 * 0000000140165984: call    KiInitiateUserApc
 * 0000000140165989: cli
 * 000000014016598A: mov     ecx, 0
 * 000000014016598F: mov     cr8, rcx
 * 0000000140165993: mov     rcx, gs:188h
 * 000000014016599C: test    dword ptr [rcx], 8000000h
 * 00000001401659A2: jz      short loc_1401659A9
 * 00000001401659A4: call    KiRestoreSetContextState
 * 00000001401659A9: mov     rcx, gs:188h
 * 00000001401659B2: test    dword ptr [rcx], 40010000h
 * 00000001401659B8: jz      short loc_1401659CE
 * 00000001401659BA: test    byte ptr [rcx+2], 1
 * 00000001401659BE: jz      short loc_1401659CE
 * 00000001401659C0: call    KiCopyCounters
 * 00000001401659C5: mov     rcx, gs:188h
 * 00000001401659CE: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401659D2: cmp     [rbp+0E8h+var_68], 0
 * 00000001401659DA: jz      short loc_1401659E1
 * 00000001401659DC: call    KiRestoreDebugRegisterState
 * 00000001401659E1: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401659E5: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401659E9: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401659ED: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401659F1: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401659F5: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401659F9: mov     r11, [rbp+0E8h+var_108]
 * 00000001401659FD: mov     r10, [rbp+0E8h+var_110]
 * 0000000140165A01: mov     r9, [rbp+0E8h+var_118]
 * 0000000140165A05: mov     r8, [rbp+0E8h+var_120]
 * 0000000140165A09: movzx   eax, word ptr gs:2EC2h
 * 0000000140165A12: cmp     gs:2EBCh, ax
 * 0000000140165A1B: jz      short loc_140165A2F
 * 0000000140165A1D: mov     gs:2EBCh, ax
 * 0000000140165A26: mov     ecx, 48h ; 'H'
 * 0000000140165A2B: xor     edx, edx
 * 0000000140165A2D: wrmsr
 * 0000000140165A2F: btr     word ptr gs:2EB8h, 2
 * 0000000140165A3A: jnb     short loc_140165A4A
 * 0000000140165A3C: mov     eax, 1
 * 0000000140165A41: xor     edx, edx
 * 0000000140165A43: mov     ecx, 49h ; 'I'
 * 0000000140165A48: wrmsr
 * 0000000140165A4A: btr     word ptr gs:2EB8h, 5
 * 0000000140165A55: jnb     loc_140165B80
 * 0000000140165A5B: call    loc_140165B6E
 * 0000000140165A60: add     rsp, 8
 * 0000000140165A64: call    loc_140165B77
 * 0000000140165A69: add     rsp, 8
 * 0000000140165A6D: call    loc_140165A60
 * 0000000140165A72: add     rsp, 8
 * 0000000140165A76: call    loc_140165A69
 * 0000000140165A7B: add     rsp, 8
 * 0000000140165A7F: call    loc_140165A72
 * 0000000140165A84: add     rsp, 8
 * 0000000140165A88: call    loc_140165A7B
 * 0000000140165A8D: add     rsp, 8
 * 0000000140165A91: call    loc_140165A84
 * 0000000140165A96: add     rsp, 8
 * 0000000140165A9A: call    loc_140165A8D
 * 0000000140165A9F: add     rsp, 8
 * 0000000140165AA3: call    loc_140165A96
 * 0000000140165AA8: add     rsp, 8
 * 0000000140165AAC: call    loc_140165A9F
 * 0000000140165AB1: add     rsp, 8
 * 0000000140165AB5: call    loc_140165AA8
 * 0000000140165ABA: add     rsp, 8
 * 0000000140165ABE: call    loc_140165AB1
 * 0000000140165AC3: add     rsp, 8
 * 0000000140165AC7: call    loc_140165ABA
 * 0000000140165ACC: add     rsp, 8
 * 0000000140165AD0: call    loc_140165AC3
 * 0000000140165AD5: add     rsp, 8
 * 0000000140165AD9: call    loc_140165ACC
 * 0000000140165ADE: add     rsp, 8
 * 0000000140165AE2: call    loc_140165AD5
 * 0000000140165AE7: add     rsp, 8
 * 0000000140165AEB: call    loc_140165ADE
 * 0000000140165AF0: add     rsp, 8
 * 0000000140165AF4: call    loc_140165AE7
 * 0000000140165AF9: add     rsp, 8
 * 0000000140165AFD: call    loc_140165AF0
 * 0000000140165B02: add     rsp, 8
 * 0000000140165B06: call    loc_140165AF9
 * 0000000140165B0B: add     rsp, 8
 * 0000000140165B0F: call    loc_140165B02
 * 0000000140165B14: add     rsp, 8
 * 0000000140165B18: call    loc_140165B0B
 * 0000000140165B1D: add     rsp, 8
 * 0000000140165B21: call    loc_140165B14
 * 0000000140165B26: add     rsp, 8
 * 0000000140165B2A: call    loc_140165B1D
 * 0000000140165B2F: add     rsp, 8
 * 0000000140165B33: call    loc_140165B26
 * 0000000140165B38: add     rsp, 8
 * 0000000140165B3C: call    loc_140165B2F
 * 0000000140165B41: add     rsp, 8
 * 0000000140165B45: call    loc_140165B38
 * 0000000140165B4A: add     rsp, 8
 * 0000000140165B4E: call    loc_140165B41
 * 0000000140165B53: add     rsp, 8
 * 0000000140165B57: call    loc_140165B4A
 * 0000000140165B5C: add     rsp, 8
 * 0000000140165B60: call    loc_140165B53
 * 0000000140165B65: add     rsp, 8
 * 0000000140165B69: call    loc_140165B5C
 * 0000000140165B6E: add     rsp, 8
 * 0000000140165B72: call    loc_140165B65
 * 0000000140165B77: add     rsp, 8
 * 0000000140165B7B: mov     eax, 0DADAh
 * 0000000140165B80: test    word ptr gs:2EB8h, 40h
 * 0000000140165B8B: jz      short loc_140165B99
 * 0000000140165B8D: xor     eax, eax
 * 0000000140165B8F: xor     edx, edx
 * 0000000140165B91: mov     ecx, 1
 * 0000000140165B96: div     rcx
 * 0000000140165B99: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140165B9D: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140165BA1: mov     rax, [rbp+0E8h+var_138]
 * 0000000140165BA5: mov     rsp, rbp
 * 0000000140165BA8: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140165BAF: add     rsp, 0E8h
 * 0000000140165BB6: test    cs:KiKvaShadow, 1
 * 0000000140165BBD: jz      short loc_140165BC4
 * 0000000140165BBF: jmp     KiKernelExit
 * 0000000140165BC4: test    word ptr gs:2EB8h, 80h
 * 0000000140165BCF: jz      short loc_140165BD6
 * 0000000140165BD1: verw    [rsp+arg_18]
 * 0000000140165BD6: swapgs
 * 0000000140165BD9: iretq
 * 0000000140165BDB: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140165BDF: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140165BE3: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140165BE7: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140165BEB: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140165BEF: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140165BF3: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140165BF7: mov     r11, [rbp+0E8h+var_108]
 * 0000000140165BFB: mov     r10, [rbp+0E8h+var_110]
 * 0000000140165BFF: mov     r9, [rbp+0E8h+var_118]
 * 0000000140165C03: mov     r8, [rbp+0E8h+var_120]
 * 0000000140165C07: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140165C0B: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140165C0F: mov     rax, [rbp+0E8h+var_138]
 * 0000000140165C13: mov     rsp, rbp
 * 0000000140165C16: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140165C1D: add     rsp, 0E8h
 * 0000000140165C24: iretq
 */
