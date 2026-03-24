/*
 * XREFs of KiVmbusInterrupt0 @ 0x140188090
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140274D80 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401020C0 (KiCheckForSListAddress.c)
 *     KiEndThreadAccountingPeriod @ 0x140102C70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     KiEntropyQueueDpc @ 0x140128F10 (KiEntropyQueueDpc.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiVmbusInterrupt0 @ 0x140188090 (KiVmbusInterrupt0.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     HvlRouteInterrupt @ 0x1401E563C (HvlRouteInterrupt.c)
 *     KeWakeProcessor @ 0x140203EC8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x140188090
 * Reason: Hex-Rays returned no pseudocode for 0x140188090
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140188090: sub     rsp, 8
 * 0000000140188094: push    rbp
 * 0000000140188095: push    rsi
 * 0000000140188096: sub     rsp, 150h
 * 000000014018809D: lea     rbp, [rsp+80h]
 * 00000001401880A5: mov     [rbp+0E8h+var_13D], 0
 * 00000001401880A9: mov     [rbp+0E8h+var_138], rax
 * 00000001401880AD: mov     [rbp+0E8h+var_130], rcx
 * 00000001401880B1: mov     [rbp+0E8h+var_128], rdx
 * 00000001401880B5: mov     [rbp+0E8h+var_120], r8
 * 00000001401880B9: mov     [rbp+0E8h+var_118], r9
 * 00000001401880BD: mov     [rbp+0E8h+var_110], r10
 * 00000001401880C1: mov     [rbp+0E8h+var_108], r11
 * 00000001401880C5: test    [rbp+0E8h+arg_0], 1
 * 00000001401880CC: jnz     short loc_1401880FD
 * 00000001401880CE: lfence
 * 00000001401880D1: test    word ptr gs:2EB0h, 1
 * 00000001401880DC: jnz     short loc_1401880E6
 * 00000001401880DE: lfence
 * 00000001401880E1: jmp     loc_1401882D9
 * 00000001401880E6: movzx   eax, word ptr gs:2EB4h
 * 00000001401880EF: mov     ecx, 48h ; 'H'
 * 00000001401880F4: xor     edx, edx
 * 00000001401880F6: wrmsr
 * 00000001401880F8: jmp     loc_1401882D9
 * 00000001401880FD: test    cs:KiKvaShadow, 1
 * 0000000140188104: jnz     short loc_140188109
 * 0000000140188106: swapgs
 * 0000000140188109: lfence
 * 000000014018810C: mov     r10, gs:188h
 * 0000000140188115: mov     rcx, gs:188h
 * 000000014018811E: mov     rcx, [rcx+220h]
 * 0000000140188125: mov     rcx, [rcx+7A0h]
 * 000000014018812C: mov     gs:2EA8h, rcx
 * 0000000140188135: movzx   eax, word ptr gs:2EB6h
 * 000000014018813E: cmp     gs:2EB4h, ax
 * 0000000140188147: jz      short loc_14018815B
 * 0000000140188149: mov     gs:2EB4h, ax
 * 0000000140188152: mov     ecx, 48h ; 'H'
 * 0000000140188157: xor     edx, edx
 * 0000000140188159: wrmsr
 * 000000014018815B: movzx   edx, word ptr gs:2EB0h
 * 0000000140188164: test    edx, 8
 * 000000014018816A: jz      short loc_140188183
 * 000000014018816C: mov     eax, 1
 * 0000000140188171: xor     edx, edx
 * 0000000140188173: mov     ecx, 49h ; 'I'
 * 0000000140188178: wrmsr
 * 000000014018817A: movzx   edx, word ptr gs:2EB0h
 * 0000000140188183: test    edx, 2
 * 0000000140188189: jz      loc_1401882B4
 * 000000014018818F: call    loc_1401882A2
 * 0000000140188194: add     rsp, 8
 * 0000000140188198: call    loc_1401882AB
 * 000000014018819D: add     rsp, 8
 * 00000001401881A1: call    loc_140188194
 * 00000001401881A6: add     rsp, 8
 * 00000001401881AA: call    loc_14018819D
 * 00000001401881AF: add     rsp, 8
 * 00000001401881B3: call    loc_1401881A6
 * 00000001401881B8: add     rsp, 8
 * 00000001401881BC: call    loc_1401881AF
 * 00000001401881C1: add     rsp, 8
 * 00000001401881C5: call    loc_1401881B8
 * 00000001401881CA: add     rsp, 8
 * 00000001401881CE: call    loc_1401881C1
 * 00000001401881D3: add     rsp, 8
 * 00000001401881D7: call    loc_1401881CA
 * 00000001401881DC: add     rsp, 8
 * 00000001401881E0: call    loc_1401881D3
 * 00000001401881E5: add     rsp, 8
 * 00000001401881E9: call    loc_1401881DC
 * 00000001401881EE: add     rsp, 8
 * 00000001401881F2: call    loc_1401881E5
 * 00000001401881F7: add     rsp, 8
 * 00000001401881FB: call    loc_1401881EE
 * 0000000140188200: add     rsp, 8
 * 0000000140188204: call    loc_1401881F7
 * 0000000140188209: add     rsp, 8
 * 000000014018820D: call    loc_140188200
 * 0000000140188212: add     rsp, 8
 * 0000000140188216: call    loc_140188209
 * 000000014018821B: add     rsp, 8
 * 000000014018821F: call    loc_140188212
 * 0000000140188224: add     rsp, 8
 * 0000000140188228: call    loc_14018821B
 * 000000014018822D: add     rsp, 8
 * 0000000140188231: call    loc_140188224
 * 0000000140188236: add     rsp, 8
 * 000000014018823A: call    loc_14018822D
 * 000000014018823F: add     rsp, 8
 * 0000000140188243: call    loc_140188236
 * 0000000140188248: add     rsp, 8
 * 000000014018824C: call    loc_14018823F
 * 0000000140188251: add     rsp, 8
 * 0000000140188255: call    loc_140188248
 * 000000014018825A: add     rsp, 8
 * 000000014018825E: call    loc_140188251
 * 0000000140188263: add     rsp, 8
 * 0000000140188267: call    loc_14018825A
 * 000000014018826C: add     rsp, 8
 * 0000000140188270: call    loc_140188263
 * 0000000140188275: add     rsp, 8
 * 0000000140188279: call    loc_14018826C
 * 000000014018827E: add     rsp, 8
 * 0000000140188282: call    loc_140188275
 * 0000000140188287: add     rsp, 8
 * 000000014018828B: call    loc_14018827E
 * 0000000140188290: add     rsp, 8
 * 0000000140188294: call    loc_140188287
 * 0000000140188299: add     rsp, 8
 * 000000014018829D: call    loc_140188290
 * 00000001401882A2: add     rsp, 8
 * 00000001401882A6: call    loc_140188299
 * 00000001401882AB: add     rsp, 8
 * 00000001401882AF: mov     eax, 0DADAh
 * 00000001401882B4: test    edx, 100h
 * 00000001401882BA: jz      short loc_1401882C1
 * 00000001401882BC: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001401882C1: lfence
 * 00000001401882C4: test    byte ptr [r10+3], 3
 * 00000001401882C9: mov     [rbp+0E8h+var_68], 0
 * 00000001401882D2: jz      short loc_1401882D9
 * 00000001401882D4: call    KiSaveDebugRegisterState
 * 00000001401882D9: cld
 * 00000001401882DA: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401882DE: ldmxcsr dword ptr gs:180h
 * 00000001401882E7: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401882EB: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401882EF: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401882F3: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401882F7: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401882FB: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401882FF: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140188308: jz      short loc_14018830F
 * 000000014018830A: call    KeWakeProcessor
 * 000000014018830F: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140188316: cmp     rax, [rbp+0E8h]
 * 000000014018831D: jnb     short loc_140188338
 * 000000014018831F: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140188326: cmp     rax, [rbp+0E8h]
 * 000000014018832D: jb      short loc_140188338
 * 000000014018832F: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140188333: call    KiCheckForSListAddress
 * 0000000140188338: xor     esi, esi
 * 000000014018833A: inc     dword ptr gs:5C80h
 * 0000000140188342: mov     ecx, 3
 * 0000000140188347: mov     rax, cr8
 * 000000014018834B: mov     cr8, rcx
 * 000000014018834F: mov     [rbp+0E8h+var_13F], al
 * 0000000140188352: mov     [rbp+0E8h+var_148], 0
 * 0000000140188359: mov     rcx, gs:20h
 * 0000000140188362: inc     byte ptr [rcx+20h]
 * 0000000140188365: cmp     byte ptr [rcx+20h], 1
 * 0000000140188369: jnz     loc_1401883FF
 * 000000014018836F: rdtsc
 * 0000000140188371: shl     rdx, 20h
 * 0000000140188375: or      rax, rdx
 * 0000000140188378: mov     edx, [rcx+62A0h]
 * 000000014018837E: mov     r11d, edx
 * 0000000140188381: and     edx, 7FFh
 * 0000000140188387: shr     edx, 5
 * 000000014018838A: lea     r10, [rcx+rdx*4+62A4h]
 * 0000000140188392: mov     edx, [r10]
 * 0000000140188395: ror     edx, 5
 * 0000000140188398: xor     edx, eax
 * 000000014018839A: mov     [r10], edx
 * 000000014018839D: add     r11d, 1
 * 00000001401883A1: mov     [rcx+62A0h], r11d
 * 00000001401883A8: and     r11d, 3FFh
 * 00000001401883AF: jnz     short loc_1401883B8
 * 00000001401883B1: mov     [rbp+0E8h+var_148], 1
 * 00000001401883B8: mov     r8, [rcx+8]
 * 00000001401883BC: sub     rax, [rcx+5B38h]
 * 00000001401883C3: add     [r8+48h], rax
 * 00000001401883C7: mov     edx, [r8+50h]
 * 00000001401883CB: add     [rcx+5B38h], rax
 * 00000001401883D2: add     rdx, rax
 * 00000001401883D5: mov     ecx, edx
 * 00000001401883D7: shr     rdx, 20h
 * 00000001401883DB: jz      short loc_1401883E0
 * 00000001401883DD: or      ecx, 0FFFFFFFFh
 * 00000001401883E0: mov     [r8+50h], ecx
 * 00000001401883E4: test    byte ptr [r8+2], 3Eh
 * 00000001401883E9: jz      short loc_1401883FF
 * 00000001401883EB: mov     rdx, r8
 * 00000001401883EE: mov     r8, rax
 * 00000001401883F1: mov     rcx, gs:20h
 * 00000001401883FA: call    KiEndThreadAccountingPeriod
 * 00000001401883FF: sti
 * 0000000140188400: cmp     [rbp+0E8h+var_148], 0
 * 0000000140188404: jz      short loc_140188414
 * 0000000140188406: mov     rcx, gs:20h
 * 000000014018840F: call    KiEntropyQueueDpc
 * 0000000140188414: mov     ecx, 1
 * 0000000140188419: call    HvlRouteInterrupt
 * 000000014018841E: cli
 * 000000014018841F: mov     rcx, gs:20h
 * 0000000140188428: cmp     byte ptr [rcx+20h], 1
 * 000000014018842C: ja      short loc_1401884A2
 * 000000014018842E: rdtsc
 * 0000000140188430: shl     rdx, 20h
 * 0000000140188434: or      rax, rdx
 * 0000000140188437: sub     rax, [rcx+5B38h]
 * 000000014018843E: add     [rcx+5BF8h], rax
 * 0000000140188445: add     [rcx+5B38h], rax
 * 000000014018844C: mov     r8, rax
 * 000000014018844F: mov     rax, [rcx+8]
 * 0000000140188453: test    byte ptr [rax+2], 32h
 * 0000000140188457: jz      short loc_14018846C
 * 0000000140188459: xor     edx, edx
 * 000000014018845B: call    KiBeginThreadAccountingPeriod
 * 0000000140188460: mov     rcx, gs:20h
 * 0000000140188469: inc     byte ptr [rcx+20h]
 * 000000014018846C: mov     dl, [rcx+6]
 * 000000014018846F: and     byte ptr [rcx+6], 0
 * 0000000140188473: cmp     byte ptr [rcx+7], 0
 * 0000000140188477: jnz     short loc_1401884A2
 * 0000000140188479: test    dl, dl
 * 000000014018847B: jz      short loc_1401884A2
 * 000000014018847D: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140188481: jnb     short loc_14018848E
 * 0000000140188483: and     byte ptr [rcx+20h], 0
 * 0000000140188487: call    KiDpcInterruptBypass
 * 000000014018848C: jmp     short loc_1401884A5
 * 000000014018848E: mov     ecx, 2
 * 0000000140188493: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140188499: mov     rcx, gs:20h
 * 00000001401884A2: dec     byte ptr [rcx+20h]
 * 00000001401884A5: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001401884A9: mov     cr8, rcx
 * 00000001401884AD: mov     rsi, [rbp+0E8h+var_18]
 * 00000001401884B4: cli
 * 00000001401884B5: test    [rbp+0E8h+arg_0], 1
 * 00000001401884BC: jz      loc_14018871F
 * 00000001401884C2: mov     rcx, gs:188h
 * 00000001401884CB: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401884D2: jz      short loc_1401884ED
 * 00000001401884D4: mov     ecx, 1
 * 00000001401884D9: mov     cr8, rcx
 * 00000001401884DD: sti
 * 00000001401884DE: call    KiInitiateUserApc
 * 00000001401884E3: cli
 * 00000001401884E4: mov     ecx, 0
 * 00000001401884E9: mov     cr8, rcx
 * 00000001401884ED: mov     rcx, gs:188h
 * 00000001401884F6: test    dword ptr [rcx], 40010000h
 * 00000001401884FC: jz      short loc_140188512
 * 00000001401884FE: test    byte ptr [rcx+2], 1
 * 0000000140188502: jz      short loc_140188512
 * 0000000140188504: call    KiCopyCounters
 * 0000000140188509: mov     rcx, gs:188h
 * 0000000140188512: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140188516: cmp     [rbp+0E8h+var_68], 0
 * 000000014018851E: jz      short loc_140188525
 * 0000000140188520: call    KiRestoreDebugRegisterState
 * 0000000140188525: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140188529: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014018852D: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140188531: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140188535: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140188539: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014018853D: mov     r11, [rbp+0E8h+var_108]
 * 0000000140188541: mov     r10, [rbp+0E8h+var_110]
 * 0000000140188545: mov     r9, [rbp+0E8h+var_118]
 * 0000000140188549: mov     r8, [rbp+0E8h+var_120]
 * 000000014018854D: movzx   eax, word ptr gs:2EBAh
 * 0000000140188556: cmp     gs:2EB4h, ax
 * 000000014018855F: jz      short loc_140188573
 * 0000000140188561: mov     gs:2EB4h, ax
 * 000000014018856A: mov     ecx, 48h ; 'H'
 * 000000014018856F: xor     edx, edx
 * 0000000140188571: wrmsr
 * 0000000140188573: btr     word ptr gs:2EB0h, 2
 * 000000014018857E: jnb     short loc_14018858E
 * 0000000140188580: mov     eax, 1
 * 0000000140188585: xor     edx, edx
 * 0000000140188587: mov     ecx, 49h ; 'I'
 * 000000014018858C: wrmsr
 * 000000014018858E: btr     word ptr gs:2EB0h, 5
 * 0000000140188599: jnb     loc_1401886C4
 * 000000014018859F: call    loc_1401886B2
 * 00000001401885A4: add     rsp, 8
 * 00000001401885A8: call    loc_1401886BB
 * 00000001401885AD: add     rsp, 8
 * 00000001401885B1: call    loc_1401885A4
 * 00000001401885B6: add     rsp, 8
 * 00000001401885BA: call    loc_1401885AD
 * 00000001401885BF: add     rsp, 8
 * 00000001401885C3: call    loc_1401885B6
 * 00000001401885C8: add     rsp, 8
 * 00000001401885CC: call    loc_1401885BF
 * 00000001401885D1: add     rsp, 8
 * 00000001401885D5: call    loc_1401885C8
 * 00000001401885DA: add     rsp, 8
 * 00000001401885DE: call    loc_1401885D1
 * 00000001401885E3: add     rsp, 8
 * 00000001401885E7: call    loc_1401885DA
 * 00000001401885EC: add     rsp, 8
 * 00000001401885F0: call    loc_1401885E3
 * 00000001401885F5: add     rsp, 8
 * 00000001401885F9: call    loc_1401885EC
 * 00000001401885FE: add     rsp, 8
 * 0000000140188602: call    loc_1401885F5
 * 0000000140188607: add     rsp, 8
 * 000000014018860B: call    loc_1401885FE
 * 0000000140188610: add     rsp, 8
 * 0000000140188614: call    loc_140188607
 * 0000000140188619: add     rsp, 8
 * 000000014018861D: call    loc_140188610
 * 0000000140188622: add     rsp, 8
 * 0000000140188626: call    loc_140188619
 * 000000014018862B: add     rsp, 8
 * 000000014018862F: call    loc_140188622
 * 0000000140188634: add     rsp, 8
 * 0000000140188638: call    loc_14018862B
 * 000000014018863D: add     rsp, 8
 * 0000000140188641: call    loc_140188634
 * 0000000140188646: add     rsp, 8
 * 000000014018864A: call    loc_14018863D
 * 000000014018864F: add     rsp, 8
 * 0000000140188653: call    loc_140188646
 * 0000000140188658: add     rsp, 8
 * 000000014018865C: call    loc_14018864F
 * 0000000140188661: add     rsp, 8
 * 0000000140188665: call    loc_140188658
 * 000000014018866A: add     rsp, 8
 * 000000014018866E: call    loc_140188661
 * 0000000140188673: add     rsp, 8
 * 0000000140188677: call    loc_14018866A
 * 000000014018867C: add     rsp, 8
 * 0000000140188680: call    loc_140188673
 * 0000000140188685: add     rsp, 8
 * 0000000140188689: call    loc_14018867C
 * 000000014018868E: add     rsp, 8
 * 0000000140188692: call    loc_140188685
 * 0000000140188697: add     rsp, 8
 * 000000014018869B: call    loc_14018868E
 * 00000001401886A0: add     rsp, 8
 * 00000001401886A4: call    loc_140188697
 * 00000001401886A9: add     rsp, 8
 * 00000001401886AD: call    loc_1401886A0
 * 00000001401886B2: add     rsp, 8
 * 00000001401886B6: call    loc_1401886A9
 * 00000001401886BB: add     rsp, 8
 * 00000001401886BF: mov     eax, 0DADAh
 * 00000001401886C4: test    word ptr gs:2EB0h, 40h
 * 00000001401886CF: jz      short loc_1401886DD
 * 00000001401886D1: xor     eax, eax
 * 00000001401886D3: xor     edx, edx
 * 00000001401886D5: mov     ecx, 1
 * 00000001401886DA: div     rcx
 * 00000001401886DD: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401886E1: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401886E5: mov     rax, [rbp+0E8h+var_138]
 * 00000001401886E9: mov     rsp, rbp
 * 00000001401886EC: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401886F3: add     rsp, 0E8h
 * 00000001401886FA: test    cs:KiKvaShadow, 1
 * 0000000140188701: jz      short loc_140188708
 * 0000000140188703: jmp     KiKernelExit
 * 0000000140188708: test    word ptr gs:2EB0h, 80h
 * 0000000140188713: jz      short loc_14018871A
 * 0000000140188715: verw    [rsp+arg_18]
 * 000000014018871A: swapgs
 * 000000014018871D: iretq
 * 000000014018871F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140188723: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140188727: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014018872B: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018872F: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140188733: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140188737: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014018873B: mov     r11, [rbp+0E8h+var_108]
 * 000000014018873F: mov     r10, [rbp+0E8h+var_110]
 * 0000000140188743: mov     r9, [rbp+0E8h+var_118]
 * 0000000140188747: mov     r8, [rbp+0E8h+var_120]
 * 000000014018874B: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018874F: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140188753: mov     rax, [rbp+0E8h+var_138]
 * 0000000140188757: mov     rsp, rbp
 * 000000014018875A: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140188761: add     rsp, 0E8h
 * 0000000140188768: iretq
 */
