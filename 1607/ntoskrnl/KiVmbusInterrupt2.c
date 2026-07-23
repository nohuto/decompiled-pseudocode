/*
 * XREFs of KiVmbusInterrupt2 @ 0x140164760
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x14023FF00 (KiVmbusInterrupt2Shadow.c)
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
 *     KiVmbusInterrupt2 @ 0x140164760 (KiVmbusInterrupt2.c)
 *     KiDpcInterruptBypass @ 0x140165B00 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401BABE4 (HvlRouteInterrupt.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x140164760
 * Reason: Hex-Rays returned no pseudocode for 0x140164760
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140164760: sub     rsp, 8
 * 0000000140164764: push    rbp
 * 0000000140164765: push    rsi
 * 0000000140164766: sub     rsp, 150h
 * 000000014016476D: lea     rbp, [rsp+80h]
 * 0000000140164775: mov     [rbp+0E8h+var_13D], 0
 * 0000000140164779: mov     [rbp+0E8h+var_138], rax
 * 000000014016477D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140164781: mov     [rbp+0E8h+var_128], rdx
 * 0000000140164785: mov     [rbp+0E8h+var_120], r8
 * 0000000140164789: mov     [rbp+0E8h+var_118], r9
 * 000000014016478D: mov     [rbp+0E8h+var_110], r10
 * 0000000140164791: mov     [rbp+0E8h+var_108], r11
 * 0000000140164795: test    [rbp+0E8h+arg_0], 1
 * 000000014016479C: jnz     short loc_1401647CD
 * 000000014016479E: lfence
 * 00000001401647A1: test    word ptr gs:2EB8h, 1
 * 00000001401647AC: jnz     short loc_1401647B6
 * 00000001401647AE: lfence
 * 00000001401647B1: jmp     loc_1401649A9
 * 00000001401647B6: movzx   eax, word ptr gs:2EBCh
 * 00000001401647BF: mov     ecx, 48h ; 'H'
 * 00000001401647C4: xor     edx, edx
 * 00000001401647C6: wrmsr
 * 00000001401647C8: jmp     loc_1401649A9
 * 00000001401647CD: test    cs:KiKvaShadow, 1
 * 00000001401647D4: jnz     short loc_1401647D9
 * 00000001401647D6: swapgs
 * 00000001401647D9: lfence
 * 00000001401647DC: mov     r10, gs:188h
 * 00000001401647E5: mov     rcx, gs:188h
 * 00000001401647EE: mov     rcx, [rcx+220h]
 * 00000001401647F5: mov     rcx, [rcx+7B8h]
 * 00000001401647FC: mov     gs:2EB0h, rcx
 * 0000000140164805: movzx   eax, word ptr gs:2EBEh
 * 000000014016480E: cmp     gs:2EBCh, ax
 * 0000000140164817: jz      short loc_14016482B
 * 0000000140164819: mov     gs:2EBCh, ax
 * 0000000140164822: mov     ecx, 48h ; 'H'
 * 0000000140164827: xor     edx, edx
 * 0000000140164829: wrmsr
 * 000000014016482B: movzx   edx, word ptr gs:2EB8h
 * 0000000140164834: test    edx, 8
 * 000000014016483A: jz      short loc_140164853
 * 000000014016483C: mov     eax, 1
 * 0000000140164841: xor     edx, edx
 * 0000000140164843: mov     ecx, 49h ; 'I'
 * 0000000140164848: wrmsr
 * 000000014016484A: movzx   edx, word ptr gs:2EB8h
 * 0000000140164853: test    edx, 2
 * 0000000140164859: jz      loc_140164984
 * 000000014016485F: call    loc_140164972
 * 0000000140164864: add     rsp, 8
 * 0000000140164868: call    loc_14016497B
 * 000000014016486D: add     rsp, 8
 * 0000000140164871: call    loc_140164864
 * 0000000140164876: add     rsp, 8
 * 000000014016487A: call    loc_14016486D
 * 000000014016487F: add     rsp, 8
 * 0000000140164883: call    loc_140164876
 * 0000000140164888: add     rsp, 8
 * 000000014016488C: call    loc_14016487F
 * 0000000140164891: add     rsp, 8
 * 0000000140164895: call    loc_140164888
 * 000000014016489A: add     rsp, 8
 * 000000014016489E: call    loc_140164891
 * 00000001401648A3: add     rsp, 8
 * 00000001401648A7: call    loc_14016489A
 * 00000001401648AC: add     rsp, 8
 * 00000001401648B0: call    loc_1401648A3
 * 00000001401648B5: add     rsp, 8
 * 00000001401648B9: call    loc_1401648AC
 * 00000001401648BE: add     rsp, 8
 * 00000001401648C2: call    loc_1401648B5
 * 00000001401648C7: add     rsp, 8
 * 00000001401648CB: call    loc_1401648BE
 * 00000001401648D0: add     rsp, 8
 * 00000001401648D4: call    loc_1401648C7
 * 00000001401648D9: add     rsp, 8
 * 00000001401648DD: call    loc_1401648D0
 * 00000001401648E2: add     rsp, 8
 * 00000001401648E6: call    loc_1401648D9
 * 00000001401648EB: add     rsp, 8
 * 00000001401648EF: call    loc_1401648E2
 * 00000001401648F4: add     rsp, 8
 * 00000001401648F8: call    loc_1401648EB
 * 00000001401648FD: add     rsp, 8
 * 0000000140164901: call    loc_1401648F4
 * 0000000140164906: add     rsp, 8
 * 000000014016490A: call    loc_1401648FD
 * 000000014016490F: add     rsp, 8
 * 0000000140164913: call    loc_140164906
 * 0000000140164918: add     rsp, 8
 * 000000014016491C: call    loc_14016490F
 * 0000000140164921: add     rsp, 8
 * 0000000140164925: call    loc_140164918
 * 000000014016492A: add     rsp, 8
 * 000000014016492E: call    loc_140164921
 * 0000000140164933: add     rsp, 8
 * 0000000140164937: call    loc_14016492A
 * 000000014016493C: add     rsp, 8
 * 0000000140164940: call    loc_140164933
 * 0000000140164945: add     rsp, 8
 * 0000000140164949: call    loc_14016493C
 * 000000014016494E: add     rsp, 8
 * 0000000140164952: call    loc_140164945
 * 0000000140164957: add     rsp, 8
 * 000000014016495B: call    loc_14016494E
 * 0000000140164960: add     rsp, 8
 * 0000000140164964: call    loc_140164957
 * 0000000140164969: add     rsp, 8
 * 000000014016496D: call    loc_140164960
 * 0000000140164972: add     rsp, 8
 * 0000000140164976: call    loc_140164969
 * 000000014016497B: add     rsp, 8
 * 000000014016497F: mov     eax, 0DADAh
 * 0000000140164984: test    edx, 100h
 * 000000014016498A: jz      short loc_140164991
 * 000000014016498C: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140164991: lfence
 * 0000000140164994: test    byte ptr [r10+3], 3
 * 0000000140164999: mov     [rbp+0E8h+var_68], 0
 * 00000001401649A2: jz      short loc_1401649A9
 * 00000001401649A4: call    KiSaveDebugRegisterState
 * 00000001401649A9: cld
 * 00000001401649AA: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401649AE: ldmxcsr dword ptr gs:180h
 * 00000001401649B7: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401649BB: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401649BF: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401649C3: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401649C7: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401649CB: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401649CF: cmp     byte ptr gs:5C9Ah, 0
 * 00000001401649D8: jz      short loc_1401649DF
 * 00000001401649DA: call    KeWakeProcessor
 * 00000001401649DF: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401649E6: cmp     rax, [rbp+0E8h]
 * 00000001401649ED: jnb     short loc_140164A08
 * 00000001401649EF: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401649F6: cmp     rax, [rbp+0E8h]
 * 00000001401649FD: jb      short loc_140164A08
 * 00000001401649FF: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140164A03: call    KiCheckForSListAddress
 * 0000000140164A08: xor     esi, esi
 * 0000000140164A0A: inc     dword ptr gs:5C80h
 * 0000000140164A12: mov     ecx, 3
 * 0000000140164A17: mov     rax, cr8
 * 0000000140164A1B: mov     cr8, rcx
 * 0000000140164A1F: mov     [rbp+0E8h+var_13F], al
 * 0000000140164A22: mov     [rbp+0E8h+var_148], 0
 * 0000000140164A29: mov     rcx, gs:20h
 * 0000000140164A32: inc     byte ptr [rcx+20h]
 * 0000000140164A35: cmp     byte ptr [rcx+20h], 1
 * 0000000140164A39: jnz     loc_140164ACF
 * 0000000140164A3F: rdtsc
 * 0000000140164A41: shl     rdx, 20h
 * 0000000140164A45: or      rax, rdx
 * 0000000140164A48: mov     edx, [rcx+6320h]
 * 0000000140164A4E: mov     r11d, edx
 * 0000000140164A51: and     edx, 7FFh
 * 0000000140164A57: shr     edx, 5
 * 0000000140164A5A: lea     r10, [rcx+rdx*4+6324h]
 * 0000000140164A62: mov     edx, [r10]
 * 0000000140164A65: ror     edx, 5
 * 0000000140164A68: xor     edx, eax
 * 0000000140164A6A: mov     [r10], edx
 * 0000000140164A6D: add     r11d, 1
 * 0000000140164A71: mov     [rcx+6320h], r11d
 * 0000000140164A78: and     r11d, 3FFh
 * 0000000140164A7F: jnz     short loc_140164A88
 * 0000000140164A81: mov     [rbp+0E8h+var_148], 1
 * 0000000140164A88: mov     r8, [rcx+8]
 * 0000000140164A8C: sub     rax, [rcx+5B38h]
 * 0000000140164A93: add     [r8+48h], rax
 * 0000000140164A97: mov     edx, [r8+50h]
 * 0000000140164A9B: add     [rcx+5B38h], rax
 * 0000000140164AA2: add     rdx, rax
 * 0000000140164AA5: mov     ecx, edx
 * 0000000140164AA7: shr     rdx, 20h
 * 0000000140164AAB: jz      short loc_140164AB0
 * 0000000140164AAD: or      ecx, 0FFFFFFFFh
 * 0000000140164AB0: mov     [r8+50h], ecx
 * 0000000140164AB4: test    byte ptr [r8+2], 3Eh
 * 0000000140164AB9: jz      short loc_140164ACF
 * 0000000140164ABB: mov     rdx, r8
 * 0000000140164ABE: mov     r8, rax
 * 0000000140164AC1: mov     rcx, gs:20h
 * 0000000140164ACA: call    KiEndThreadAccountingPeriod
 * 0000000140164ACF: sti
 * 0000000140164AD0: cmp     [rbp+0E8h+var_148], 0
 * 0000000140164AD4: jz      short loc_140164AE4
 * 0000000140164AD6: mov     rcx, gs:20h
 * 0000000140164ADF: call    KiEntropyQueueDpc
 * 0000000140164AE4: mov     ecx, 3
 * 0000000140164AE9: call    HvlRouteInterrupt
 * 0000000140164AEE: cli
 * 0000000140164AEF: mov     rcx, gs:20h
 * 0000000140164AF8: cmp     byte ptr [rcx+20h], 1
 * 0000000140164AFC: ja      short loc_140164B72
 * 0000000140164AFE: rdtsc
 * 0000000140164B00: shl     rdx, 20h
 * 0000000140164B04: or      rax, rdx
 * 0000000140164B07: sub     rax, [rcx+5B38h]
 * 0000000140164B0E: add     [rcx+5BF8h], rax
 * 0000000140164B15: add     [rcx+5B38h], rax
 * 0000000140164B1C: mov     r8, rax
 * 0000000140164B1F: mov     rax, [rcx+8]
 * 0000000140164B23: test    byte ptr [rax+2], 32h
 * 0000000140164B27: jz      short loc_140164B3C
 * 0000000140164B29: xor     edx, edx
 * 0000000140164B2B: call    KiBeginThreadAccountingPeriod
 * 0000000140164B30: mov     rcx, gs:20h
 * 0000000140164B39: inc     byte ptr [rcx+20h]
 * 0000000140164B3C: mov     dl, [rcx+6]
 * 0000000140164B3F: and     byte ptr [rcx+6], 0
 * 0000000140164B43: cmp     byte ptr [rcx+7], 0
 * 0000000140164B47: jnz     short loc_140164B72
 * 0000000140164B49: test    dl, dl
 * 0000000140164B4B: jz      short loc_140164B72
 * 0000000140164B4D: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140164B51: jnb     short loc_140164B5E
 * 0000000140164B53: and     byte ptr [rcx+20h], 0
 * 0000000140164B57: call    KiDpcInterruptBypass
 * 0000000140164B5C: jmp     short loc_140164B75
 * 0000000140164B5E: mov     ecx, 2
 * 0000000140164B63: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140164B69: mov     rcx, gs:20h
 * 0000000140164B72: dec     byte ptr [rcx+20h]
 * 0000000140164B75: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140164B79: mov     cr8, rcx
 * 0000000140164B7D: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140164B84: cli
 * 0000000140164B85: test    [rbp+0E8h+arg_0], 1
 * 0000000140164B8C: jz      loc_140164E05
 * 0000000140164B92: mov     rcx, gs:188h
 * 0000000140164B9B: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140164BA2: jz      short loc_140164BBD
 * 0000000140164BA4: mov     ecx, 1
 * 0000000140164BA9: mov     cr8, rcx
 * 0000000140164BAD: sti
 * 0000000140164BAE: call    KiInitiateUserApc
 * 0000000140164BB3: cli
 * 0000000140164BB4: mov     ecx, 0
 * 0000000140164BB9: mov     cr8, rcx
 * 0000000140164BBD: mov     rcx, gs:188h
 * 0000000140164BC6: test    dword ptr [rcx], 8000000h
 * 0000000140164BCC: jz      short loc_140164BD3
 * 0000000140164BCE: call    KiRestoreSetContextState
 * 0000000140164BD3: mov     rcx, gs:188h
 * 0000000140164BDC: test    dword ptr [rcx], 40010000h
 * 0000000140164BE2: jz      short loc_140164BF8
 * 0000000140164BE4: test    byte ptr [rcx+2], 1
 * 0000000140164BE8: jz      short loc_140164BF8
 * 0000000140164BEA: call    KiCopyCounters
 * 0000000140164BEF: mov     rcx, gs:188h
 * 0000000140164BF8: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140164BFC: cmp     [rbp+0E8h+var_68], 0
 * 0000000140164C04: jz      short loc_140164C0B
 * 0000000140164C06: call    KiRestoreDebugRegisterState
 * 0000000140164C0B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140164C0F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140164C13: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140164C17: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140164C1B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140164C1F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140164C23: mov     r11, [rbp+0E8h+var_108]
 * 0000000140164C27: mov     r10, [rbp+0E8h+var_110]
 * 0000000140164C2B: mov     r9, [rbp+0E8h+var_118]
 * 0000000140164C2F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140164C33: movzx   eax, word ptr gs:2EC2h
 * 0000000140164C3C: cmp     gs:2EBCh, ax
 * 0000000140164C45: jz      short loc_140164C59
 * 0000000140164C47: mov     gs:2EBCh, ax
 * 0000000140164C50: mov     ecx, 48h ; 'H'
 * 0000000140164C55: xor     edx, edx
 * 0000000140164C57: wrmsr
 * 0000000140164C59: btr     word ptr gs:2EB8h, 2
 * 0000000140164C64: jnb     short loc_140164C74
 * 0000000140164C66: mov     eax, 1
 * 0000000140164C6B: xor     edx, edx
 * 0000000140164C6D: mov     ecx, 49h ; 'I'
 * 0000000140164C72: wrmsr
 * 0000000140164C74: btr     word ptr gs:2EB8h, 5
 * 0000000140164C7F: jnb     loc_140164DAA
 * 0000000140164C85: call    loc_140164D98
 * 0000000140164C8A: add     rsp, 8
 * 0000000140164C8E: call    loc_140164DA1
 * 0000000140164C93: add     rsp, 8
 * 0000000140164C97: call    loc_140164C8A
 * 0000000140164C9C: add     rsp, 8
 * 0000000140164CA0: call    loc_140164C93
 * 0000000140164CA5: add     rsp, 8
 * 0000000140164CA9: call    loc_140164C9C
 * 0000000140164CAE: add     rsp, 8
 * 0000000140164CB2: call    loc_140164CA5
 * 0000000140164CB7: add     rsp, 8
 * 0000000140164CBB: call    loc_140164CAE
 * 0000000140164CC0: add     rsp, 8
 * 0000000140164CC4: call    loc_140164CB7
 * 0000000140164CC9: add     rsp, 8
 * 0000000140164CCD: call    loc_140164CC0
 * 0000000140164CD2: add     rsp, 8
 * 0000000140164CD6: call    loc_140164CC9
 * 0000000140164CDB: add     rsp, 8
 * 0000000140164CDF: call    loc_140164CD2
 * 0000000140164CE4: add     rsp, 8
 * 0000000140164CE8: call    loc_140164CDB
 * 0000000140164CED: add     rsp, 8
 * 0000000140164CF1: call    loc_140164CE4
 * 0000000140164CF6: add     rsp, 8
 * 0000000140164CFA: call    loc_140164CED
 * 0000000140164CFF: add     rsp, 8
 * 0000000140164D03: call    loc_140164CF6
 * 0000000140164D08: add     rsp, 8
 * 0000000140164D0C: call    loc_140164CFF
 * 0000000140164D11: add     rsp, 8
 * 0000000140164D15: call    loc_140164D08
 * 0000000140164D1A: add     rsp, 8
 * 0000000140164D1E: call    loc_140164D11
 * 0000000140164D23: add     rsp, 8
 * 0000000140164D27: call    loc_140164D1A
 * 0000000140164D2C: add     rsp, 8
 * 0000000140164D30: call    loc_140164D23
 * 0000000140164D35: add     rsp, 8
 * 0000000140164D39: call    loc_140164D2C
 * 0000000140164D3E: add     rsp, 8
 * 0000000140164D42: call    loc_140164D35
 * 0000000140164D47: add     rsp, 8
 * 0000000140164D4B: call    loc_140164D3E
 * 0000000140164D50: add     rsp, 8
 * 0000000140164D54: call    loc_140164D47
 * 0000000140164D59: add     rsp, 8
 * 0000000140164D5D: call    loc_140164D50
 * 0000000140164D62: add     rsp, 8
 * 0000000140164D66: call    loc_140164D59
 * 0000000140164D6B: add     rsp, 8
 * 0000000140164D6F: call    loc_140164D62
 * 0000000140164D74: add     rsp, 8
 * 0000000140164D78: call    loc_140164D6B
 * 0000000140164D7D: add     rsp, 8
 * 0000000140164D81: call    loc_140164D74
 * 0000000140164D86: add     rsp, 8
 * 0000000140164D8A: call    loc_140164D7D
 * 0000000140164D8F: add     rsp, 8
 * 0000000140164D93: call    loc_140164D86
 * 0000000140164D98: add     rsp, 8
 * 0000000140164D9C: call    loc_140164D8F
 * 0000000140164DA1: add     rsp, 8
 * 0000000140164DA5: mov     eax, 0DADAh
 * 0000000140164DAA: test    word ptr gs:2EB8h, 40h
 * 0000000140164DB5: jz      short loc_140164DC3
 * 0000000140164DB7: xor     eax, eax
 * 0000000140164DB9: xor     edx, edx
 * 0000000140164DBB: mov     ecx, 1
 * 0000000140164DC0: div     rcx
 * 0000000140164DC3: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140164DC7: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140164DCB: mov     rax, [rbp+0E8h+var_138]
 * 0000000140164DCF: mov     rsp, rbp
 * 0000000140164DD2: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140164DD9: add     rsp, 0E8h
 * 0000000140164DE0: test    cs:KiKvaShadow, 1
 * 0000000140164DE7: jz      short loc_140164DEE
 * 0000000140164DE9: jmp     KiKernelExit
 * 0000000140164DEE: test    word ptr gs:2EB8h, 80h
 * 0000000140164DF9: jz      short loc_140164E00
 * 0000000140164DFB: verw    [rsp+arg_18]
 * 0000000140164E00: swapgs
 * 0000000140164E03: iretq
 * 0000000140164E05: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140164E09: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140164E0D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140164E11: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140164E15: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140164E19: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140164E1D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140164E21: mov     r11, [rbp+0E8h+var_108]
 * 0000000140164E25: mov     r10, [rbp+0E8h+var_110]
 * 0000000140164E29: mov     r9, [rbp+0E8h+var_118]
 * 0000000140164E2D: mov     r8, [rbp+0E8h+var_120]
 * 0000000140164E31: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140164E35: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140164E39: mov     rax, [rbp+0E8h+var_138]
 * 0000000140164E3D: mov     rsp, rbp
 * 0000000140164E40: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140164E47: add     rsp, 0E8h
 * 0000000140164E4E: iretq
 */
