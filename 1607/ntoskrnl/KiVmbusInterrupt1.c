/*
 * XREFs of KiVmbusInterrupt1 @ 0x140164060
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x14023FE80 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14008B8E0 (KiCheckForSListAddress.c)
 *     KiEntropyQueueDpc @ 0x1400A8F04 (KiEntropyQueueDpc.c)
 *     KeWakeProcessor @ 0x1400AFC88 (KeWakeProcessor.c)
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D05F0 (KiEndThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiVmbusInterrupt1 @ 0x140164060 (KiVmbusInterrupt1.c)
 *     KiDpcInterruptBypass @ 0x140165B00 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401BABE4 (HvlRouteInterrupt.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x140164060
 * Reason: Hex-Rays returned no pseudocode for 0x140164060
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140164060: sub     rsp, 8
 * 0000000140164064: push    rbp
 * 0000000140164065: push    rsi
 * 0000000140164066: sub     rsp, 150h
 * 000000014016406D: lea     rbp, [rsp+80h]
 * 0000000140164075: mov     [rbp+0E8h+var_13D], 0
 * 0000000140164079: mov     [rbp+0E8h+var_138], rax
 * 000000014016407D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140164081: mov     [rbp+0E8h+var_128], rdx
 * 0000000140164085: mov     [rbp+0E8h+var_120], r8
 * 0000000140164089: mov     [rbp+0E8h+var_118], r9
 * 000000014016408D: mov     [rbp+0E8h+var_110], r10
 * 0000000140164091: mov     [rbp+0E8h+var_108], r11
 * 0000000140164095: test    [rbp+0E8h+arg_0], 1
 * 000000014016409C: jnz     short loc_1401640CD
 * 000000014016409E: lfence
 * 00000001401640A1: test    word ptr gs:2EB8h, 1
 * 00000001401640AC: jnz     short loc_1401640B6
 * 00000001401640AE: lfence
 * 00000001401640B1: jmp     loc_1401642A9
 * 00000001401640B6: movzx   eax, word ptr gs:2EBCh
 * 00000001401640BF: mov     ecx, 48h ; 'H'
 * 00000001401640C4: xor     edx, edx
 * 00000001401640C6: wrmsr
 * 00000001401640C8: jmp     loc_1401642A9
 * 00000001401640CD: test    cs:KiKvaShadow, 1
 * 00000001401640D4: jnz     short loc_1401640D9
 * 00000001401640D6: swapgs
 * 00000001401640D9: lfence
 * 00000001401640DC: mov     r10, gs:188h
 * 00000001401640E5: mov     rcx, gs:188h
 * 00000001401640EE: mov     rcx, [rcx+220h]
 * 00000001401640F5: mov     rcx, [rcx+7B8h]
 * 00000001401640FC: mov     gs:2EB0h, rcx
 * 0000000140164105: movzx   eax, word ptr gs:2EBEh
 * 000000014016410E: cmp     gs:2EBCh, ax
 * 0000000140164117: jz      short loc_14016412B
 * 0000000140164119: mov     gs:2EBCh, ax
 * 0000000140164122: mov     ecx, 48h ; 'H'
 * 0000000140164127: xor     edx, edx
 * 0000000140164129: wrmsr
 * 000000014016412B: movzx   edx, word ptr gs:2EB8h
 * 0000000140164134: test    edx, 8
 * 000000014016413A: jz      short loc_140164153
 * 000000014016413C: mov     eax, 1
 * 0000000140164141: xor     edx, edx
 * 0000000140164143: mov     ecx, 49h ; 'I'
 * 0000000140164148: wrmsr
 * 000000014016414A: movzx   edx, word ptr gs:2EB8h
 * 0000000140164153: test    edx, 2
 * 0000000140164159: jz      loc_140164284
 * 000000014016415F: call    loc_140164272
 * 0000000140164164: add     rsp, 8
 * 0000000140164168: call    loc_14016427B
 * 000000014016416D: add     rsp, 8
 * 0000000140164171: call    loc_140164164
 * 0000000140164176: add     rsp, 8
 * 000000014016417A: call    loc_14016416D
 * 000000014016417F: add     rsp, 8
 * 0000000140164183: call    loc_140164176
 * 0000000140164188: add     rsp, 8
 * 000000014016418C: call    loc_14016417F
 * 0000000140164191: add     rsp, 8
 * 0000000140164195: call    loc_140164188
 * 000000014016419A: add     rsp, 8
 * 000000014016419E: call    loc_140164191
 * 00000001401641A3: add     rsp, 8
 * 00000001401641A7: call    loc_14016419A
 * 00000001401641AC: add     rsp, 8
 * 00000001401641B0: call    loc_1401641A3
 * 00000001401641B5: add     rsp, 8
 * 00000001401641B9: call    loc_1401641AC
 * 00000001401641BE: add     rsp, 8
 * 00000001401641C2: call    loc_1401641B5
 * 00000001401641C7: add     rsp, 8
 * 00000001401641CB: call    loc_1401641BE
 * 00000001401641D0: add     rsp, 8
 * 00000001401641D4: call    loc_1401641C7
 * 00000001401641D9: add     rsp, 8
 * 00000001401641DD: call    loc_1401641D0
 * 00000001401641E2: add     rsp, 8
 * 00000001401641E6: call    loc_1401641D9
 * 00000001401641EB: add     rsp, 8
 * 00000001401641EF: call    loc_1401641E2
 * 00000001401641F4: add     rsp, 8
 * 00000001401641F8: call    loc_1401641EB
 * 00000001401641FD: add     rsp, 8
 * 0000000140164201: call    loc_1401641F4
 * 0000000140164206: add     rsp, 8
 * 000000014016420A: call    loc_1401641FD
 * 000000014016420F: add     rsp, 8
 * 0000000140164213: call    loc_140164206
 * 0000000140164218: add     rsp, 8
 * 000000014016421C: call    loc_14016420F
 * 0000000140164221: add     rsp, 8
 * 0000000140164225: call    loc_140164218
 * 000000014016422A: add     rsp, 8
 * 000000014016422E: call    loc_140164221
 * 0000000140164233: add     rsp, 8
 * 0000000140164237: call    loc_14016422A
 * 000000014016423C: add     rsp, 8
 * 0000000140164240: call    loc_140164233
 * 0000000140164245: add     rsp, 8
 * 0000000140164249: call    loc_14016423C
 * 000000014016424E: add     rsp, 8
 * 0000000140164252: call    loc_140164245
 * 0000000140164257: add     rsp, 8
 * 000000014016425B: call    loc_14016424E
 * 0000000140164260: add     rsp, 8
 * 0000000140164264: call    loc_140164257
 * 0000000140164269: add     rsp, 8
 * 000000014016426D: call    loc_140164260
 * 0000000140164272: add     rsp, 8
 * 0000000140164276: call    loc_140164269
 * 000000014016427B: add     rsp, 8
 * 000000014016427F: mov     eax, 0DADAh
 * 0000000140164284: test    edx, 100h
 * 000000014016428A: jz      short loc_140164291
 * 000000014016428C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140164291: lfence
 * 0000000140164294: test    byte ptr [r10+3], 3
 * 0000000140164299: mov     [rbp+0E8h+var_68], 0
 * 00000001401642A2: jz      short loc_1401642A9
 * 00000001401642A4: call    KiSaveDebugRegisterState
 * 00000001401642A9: cld
 * 00000001401642AA: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401642AE: ldmxcsr dword ptr gs:180h
 * 00000001401642B7: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401642BB: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401642BF: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401642C3: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401642C7: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401642CB: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401642CF: cmp     byte ptr gs:5C9Ah, 0
 * 00000001401642D8: jz      short loc_1401642DF
 * 00000001401642DA: call    KeWakeProcessor
 * 00000001401642DF: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401642E6: cmp     rax, [rbp+0E8h]
 * 00000001401642ED: jnb     short loc_140164308
 * 00000001401642EF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401642F6: cmp     rax, [rbp+0E8h]
 * 00000001401642FD: jb      short loc_140164308
 * 00000001401642FF: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140164303: call    KiCheckForSListAddress
 * 0000000140164308: xor     esi, esi
 * 000000014016430A: inc     dword ptr gs:5C80h
 * 0000000140164312: mov     ecx, 3
 * 0000000140164317: mov     rax, cr8
 * 000000014016431B: mov     cr8, rcx
 * 000000014016431F: mov     [rbp+0E8h+var_13F], al
 * 0000000140164322: mov     [rbp+0E8h+var_148], 0
 * 0000000140164329: mov     rcx, gs:20h
 * 0000000140164332: inc     byte ptr [rcx+20h]
 * 0000000140164335: cmp     byte ptr [rcx+20h], 1
 * 0000000140164339: jnz     loc_1401643CF
 * 000000014016433F: rdtsc
 * 0000000140164341: shl     rdx, 20h
 * 0000000140164345: or      rax, rdx
 * 0000000140164348: mov     edx, [rcx+6320h]
 * 000000014016434E: mov     r11d, edx
 * 0000000140164351: and     edx, 7FFh
 * 0000000140164357: shr     edx, 5
 * 000000014016435A: lea     r10, [rcx+rdx*4+6324h]
 * 0000000140164362: mov     edx, [r10]
 * 0000000140164365: ror     edx, 5
 * 0000000140164368: xor     edx, eax
 * 000000014016436A: mov     [r10], edx
 * 000000014016436D: add     r11d, 1
 * 0000000140164371: mov     [rcx+6320h], r11d
 * 0000000140164378: and     r11d, 3FFh
 * 000000014016437F: jnz     short loc_140164388
 * 0000000140164381: mov     [rbp+0E8h+var_148], 1
 * 0000000140164388: mov     r8, [rcx+8]
 * 000000014016438C: sub     rax, [rcx+5B38h]
 * 0000000140164393: add     [r8+48h], rax
 * 0000000140164397: mov     edx, [r8+50h]
 * 000000014016439B: add     [rcx+5B38h], rax
 * 00000001401643A2: add     rdx, rax
 * 00000001401643A5: mov     ecx, edx
 * 00000001401643A7: shr     rdx, 20h
 * 00000001401643AB: jz      short loc_1401643B0
 * 00000001401643AD: or      ecx, 0FFFFFFFFh
 * 00000001401643B0: mov     [r8+50h], ecx
 * 00000001401643B4: test    byte ptr [r8+2], 3Eh
 * 00000001401643B9: jz      short loc_1401643CF
 * 00000001401643BB: mov     rdx, r8
 * 00000001401643BE: mov     r8, rax
 * 00000001401643C1: mov     rcx, gs:20h
 * 00000001401643CA: call    KiEndThreadAccountingPeriod
 * 00000001401643CF: sti
 * 00000001401643D0: cmp     [rbp+0E8h+var_148], 0
 * 00000001401643D4: jz      short loc_1401643E4
 * 00000001401643D6: mov     rcx, gs:20h
 * 00000001401643DF: call    KiEntropyQueueDpc
 * 00000001401643E4: mov     ecx, 2
 * 00000001401643E9: call    HvlRouteInterrupt
 * 00000001401643EE: cli
 * 00000001401643EF: mov     rcx, gs:20h
 * 00000001401643F8: cmp     byte ptr [rcx+20h], 1
 * 00000001401643FC: ja      short loc_140164472
 * 00000001401643FE: rdtsc
 * 0000000140164400: shl     rdx, 20h
 * 0000000140164404: or      rax, rdx
 * 0000000140164407: sub     rax, [rcx+5B38h]
 * 000000014016440E: add     [rcx+5BF8h], rax
 * 0000000140164415: add     [rcx+5B38h], rax
 * 000000014016441C: mov     r8, rax
 * 000000014016441F: mov     rax, [rcx+8]
 * 0000000140164423: test    byte ptr [rax+2], 32h
 * 0000000140164427: jz      short loc_14016443C
 * 0000000140164429: xor     edx, edx
 * 000000014016442B: call    KiBeginThreadAccountingPeriod
 * 0000000140164430: mov     rcx, gs:20h
 * 0000000140164439: inc     byte ptr [rcx+20h]
 * 000000014016443C: mov     dl, [rcx+6]
 * 000000014016443F: and     byte ptr [rcx+6], 0
 * 0000000140164443: cmp     byte ptr [rcx+7], 0
 * 0000000140164447: jnz     short loc_140164472
 * 0000000140164449: test    dl, dl
 * 000000014016444B: jz      short loc_140164472
 * 000000014016444D: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140164451: jnb     short loc_14016445E
 * 0000000140164453: and     byte ptr [rcx+20h], 0
 * 0000000140164457: call    KiDpcInterruptBypass
 * 000000014016445C: jmp     short loc_140164475
 * 000000014016445E: mov     ecx, 2
 * 0000000140164463: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140164469: mov     rcx, gs:20h
 * 0000000140164472: dec     byte ptr [rcx+20h]
 * 0000000140164475: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140164479: mov     cr8, rcx
 * 000000014016447D: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140164484: cli
 * 0000000140164485: test    [rbp+0E8h+arg_0], 1
 * 000000014016448C: jz      loc_140164705
 * 0000000140164492: mov     rcx, gs:188h
 * 000000014016449B: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401644A2: jz      short loc_1401644BD
 * 00000001401644A4: mov     ecx, 1
 * 00000001401644A9: mov     cr8, rcx
 * 00000001401644AD: sti
 * 00000001401644AE: call    KiInitiateUserApc
 * 00000001401644B3: cli
 * 00000001401644B4: mov     ecx, 0
 * 00000001401644B9: mov     cr8, rcx
 * 00000001401644BD: mov     rcx, gs:188h
 * 00000001401644C6: test    dword ptr [rcx], 8000000h
 * 00000001401644CC: jz      short loc_1401644D3
 * 00000001401644CE: call    KiRestoreSetContextState
 * 00000001401644D3: mov     rcx, gs:188h
 * 00000001401644DC: test    dword ptr [rcx], 40010000h
 * 00000001401644E2: jz      short loc_1401644F8
 * 00000001401644E4: test    byte ptr [rcx+2], 1
 * 00000001401644E8: jz      short loc_1401644F8
 * 00000001401644EA: call    KiCopyCounters
 * 00000001401644EF: mov     rcx, gs:188h
 * 00000001401644F8: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401644FC: cmp     [rbp+0E8h+var_68], 0
 * 0000000140164504: jz      short loc_14016450B
 * 0000000140164506: call    KiRestoreDebugRegisterState
 * 000000014016450B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016450F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140164513: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140164517: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016451B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016451F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140164523: mov     r11, [rbp+0E8h+var_108]
 * 0000000140164527: mov     r10, [rbp+0E8h+var_110]
 * 000000014016452B: mov     r9, [rbp+0E8h+var_118]
 * 000000014016452F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140164533: movzx   eax, word ptr gs:2EC2h
 * 000000014016453C: cmp     gs:2EBCh, ax
 * 0000000140164545: jz      short loc_140164559
 * 0000000140164547: mov     gs:2EBCh, ax
 * 0000000140164550: mov     ecx, 48h ; 'H'
 * 0000000140164555: xor     edx, edx
 * 0000000140164557: wrmsr
 * 0000000140164559: btr     word ptr gs:2EB8h, 2
 * 0000000140164564: jnb     short loc_140164574
 * 0000000140164566: mov     eax, 1
 * 000000014016456B: xor     edx, edx
 * 000000014016456D: mov     ecx, 49h ; 'I'
 * 0000000140164572: wrmsr
 * 0000000140164574: btr     word ptr gs:2EB8h, 5
 * 000000014016457F: jnb     loc_1401646AA
 * 0000000140164585: call    loc_140164698
 * 000000014016458A: add     rsp, 8
 * 000000014016458E: call    loc_1401646A1
 * 0000000140164593: add     rsp, 8
 * 0000000140164597: call    loc_14016458A
 * 000000014016459C: add     rsp, 8
 * 00000001401645A0: call    loc_140164593
 * 00000001401645A5: add     rsp, 8
 * 00000001401645A9: call    loc_14016459C
 * 00000001401645AE: add     rsp, 8
 * 00000001401645B2: call    loc_1401645A5
 * 00000001401645B7: add     rsp, 8
 * 00000001401645BB: call    loc_1401645AE
 * 00000001401645C0: add     rsp, 8
 * 00000001401645C4: call    loc_1401645B7
 * 00000001401645C9: add     rsp, 8
 * 00000001401645CD: call    loc_1401645C0
 * 00000001401645D2: add     rsp, 8
 * 00000001401645D6: call    loc_1401645C9
 * 00000001401645DB: add     rsp, 8
 * 00000001401645DF: call    loc_1401645D2
 * 00000001401645E4: add     rsp, 8
 * 00000001401645E8: call    loc_1401645DB
 * 00000001401645ED: add     rsp, 8
 * 00000001401645F1: call    loc_1401645E4
 * 00000001401645F6: add     rsp, 8
 * 00000001401645FA: call    loc_1401645ED
 * 00000001401645FF: add     rsp, 8
 * 0000000140164603: call    loc_1401645F6
 * 0000000140164608: add     rsp, 8
 * 000000014016460C: call    loc_1401645FF
 * 0000000140164611: add     rsp, 8
 * 0000000140164615: call    loc_140164608
 * 000000014016461A: add     rsp, 8
 * 000000014016461E: call    loc_140164611
 * 0000000140164623: add     rsp, 8
 * 0000000140164627: call    loc_14016461A
 * 000000014016462C: add     rsp, 8
 * 0000000140164630: call    loc_140164623
 * 0000000140164635: add     rsp, 8
 * 0000000140164639: call    loc_14016462C
 * 000000014016463E: add     rsp, 8
 * 0000000140164642: call    loc_140164635
 * 0000000140164647: add     rsp, 8
 * 000000014016464B: call    loc_14016463E
 * 0000000140164650: add     rsp, 8
 * 0000000140164654: call    loc_140164647
 * 0000000140164659: add     rsp, 8
 * 000000014016465D: call    loc_140164650
 * 0000000140164662: add     rsp, 8
 * 0000000140164666: call    loc_140164659
 * 000000014016466B: add     rsp, 8
 * 000000014016466F: call    loc_140164662
 * 0000000140164674: add     rsp, 8
 * 0000000140164678: call    loc_14016466B
 * 000000014016467D: add     rsp, 8
 * 0000000140164681: call    loc_140164674
 * 0000000140164686: add     rsp, 8
 * 000000014016468A: call    loc_14016467D
 * 000000014016468F: add     rsp, 8
 * 0000000140164693: call    loc_140164686
 * 0000000140164698: add     rsp, 8
 * 000000014016469C: call    loc_14016468F
 * 00000001401646A1: add     rsp, 8
 * 00000001401646A5: mov     eax, 0DADAh
 * 00000001401646AA: test    word ptr gs:2EB8h, 40h
 * 00000001401646B5: jz      short loc_1401646C3
 * 00000001401646B7: xor     eax, eax
 * 00000001401646B9: xor     edx, edx
 * 00000001401646BB: mov     ecx, 1
 * 00000001401646C0: div     rcx
 * 00000001401646C3: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401646C7: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401646CB: mov     rax, [rbp+0E8h+var_138]
 * 00000001401646CF: mov     rsp, rbp
 * 00000001401646D2: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401646D9: add     rsp, 0E8h
 * 00000001401646E0: test    cs:KiKvaShadow, 1
 * 00000001401646E7: jz      short loc_1401646EE
 * 00000001401646E9: jmp     KiKernelExit
 * 00000001401646EE: test    word ptr gs:2EB8h, 80h
 * 00000001401646F9: jz      short loc_140164700
 * 00000001401646FB: verw    [rsp+arg_18]
 * 0000000140164700: swapgs
 * 0000000140164703: iretq
 * 0000000140164705: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140164709: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016470D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140164711: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140164715: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140164719: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016471D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140164721: mov     r11, [rbp+0E8h+var_108]
 * 0000000140164725: mov     r10, [rbp+0E8h+var_110]
 * 0000000140164729: mov     r9, [rbp+0E8h+var_118]
 * 000000014016472D: mov     r8, [rbp+0E8h+var_120]
 * 0000000140164731: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140164735: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140164739: mov     rax, [rbp+0E8h+var_138]
 * 000000014016473D: mov     rsp, rbp
 * 0000000140164740: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140164747: add     rsp, 0E8h
 * 000000014016474E: iretq
 */
