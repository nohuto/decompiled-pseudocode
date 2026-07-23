/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x1401606C0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x1400D05F0 (KiEndThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401606C0 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165B00 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x1401606C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401606C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401606C0: mov     ecx, 0Fh
 * 00000001401606C5: mov     rax, cr8
 * 00000001401606C9: mov     cr8, rcx
 * 00000001401606CD: mov     [rbp-57h], al
 * 00000001401606D0: mov     rcx, gs:20h
 * 00000001401606D9: inc     byte ptr [rcx+20h]
 * 00000001401606DC: cmp     byte ptr [rcx+20h], 1
 * 00000001401606E0: jnz     short loc_140160732
 * 00000001401606E2: rdtsc
 * 00000001401606E4: shl     rdx, 20h
 * 00000001401606E8: or      rax, rdx
 * 00000001401606EB: mov     r8, [rcx+8]
 * 00000001401606EF: sub     rax, [rcx+5B38h]
 * 00000001401606F6: add     [r8+48h], rax
 * 00000001401606FA: mov     edx, [r8+50h]
 * 00000001401606FE: add     [rcx+5B38h], rax
 * 0000000140160705: add     rdx, rax
 * 0000000140160708: mov     ecx, edx
 * 000000014016070A: shr     rdx, 20h
 * 000000014016070E: jz      short loc_140160713
 * 0000000140160710: or      ecx, 0FFFFFFFFh
 * 0000000140160713: mov     [r8+50h], ecx
 * 0000000140160717: test    byte ptr [r8+2], 3Eh
 * 000000014016071C: jz      short loc_140160732
 * 000000014016071E: mov     rdx, r8
 * 0000000140160721: mov     r8, rax
 * 0000000140160724: mov     rcx, gs:20h
 * 000000014016072D: call    KiEndThreadAccountingPeriod
 * 0000000140160732: sti
 * 0000000140160733: inc     dword ptr [rsi+74h]
 * 0000000140160736: cli
 * 0000000140160737: mov     rcx, gs:20h
 * 0000000140160740: cmp     byte ptr [rcx+20h], 1
 * 0000000140160744: ja      short loc_1401607BA
 * 0000000140160746: rdtsc
 * 0000000140160748: shl     rdx, 20h
 * 000000014016074C: or      rax, rdx
 * 000000014016074F: sub     rax, [rcx+5B38h]
 * 0000000140160756: add     [rcx+5BF8h], rax
 * 000000014016075D: add     [rcx+5B38h], rax
 * 0000000140160764: mov     r8, rax
 * 0000000140160767: mov     rax, [rcx+8]
 * 000000014016076B: test    byte ptr [rax+2], 32h
 * 000000014016076F: jz      short loc_140160784
 * 0000000140160771: xor     edx, edx
 * 0000000140160773: call    KiBeginThreadAccountingPeriod
 * 0000000140160778: mov     rcx, gs:20h
 * 0000000140160781: inc     byte ptr [rcx+20h]
 * 0000000140160784: mov     dl, [rcx+6]
 * 0000000140160787: and     byte ptr [rcx+6], 0
 * 000000014016078B: cmp     byte ptr [rcx+7], 0
 * 000000014016078F: jnz     short loc_1401607BA
 * 0000000140160791: test    dl, dl
 * 0000000140160793: jz      short loc_1401607BA
 * 0000000140160795: cmp     byte ptr [rbp-57h], 2
 * 0000000140160799: jnb     short loc_1401607A6
 * 000000014016079B: and     byte ptr [rcx+20h], 0
 * 000000014016079F: call    KiDpcInterruptBypass
 * 00000001401607A4: jmp     short loc_1401607BD
 * 00000001401607A6: mov     ecx, 2
 * 00000001401607AB: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001401607B1: mov     rcx, gs:20h
 * 00000001401607BA: dec     byte ptr [rcx+20h]
 * 00000001401607BD: movzx   ecx, byte ptr [rbp-57h]
 * 00000001401607C1: mov     cr8, rcx
 * 00000001401607C5: mov     rsi, [rbp+0D0h]
 * 00000001401607CC: cli
 * 00000001401607CD: test    byte ptr [rbp+0F0h], 1
 * 00000001401607D4: jz      loc_140160A4D
 * 00000001401607DA: mov     rcx, gs:188h
 * 00000001401607E3: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401607EA: jz      short loc_140160805
 * 00000001401607EC: mov     ecx, 1
 * 00000001401607F1: mov     cr8, rcx
 * 00000001401607F5: sti
 * 00000001401607F6: call    KiInitiateUserApc
 * 00000001401607FB: cli
 * 00000001401607FC: mov     ecx, 0
 * 0000000140160801: mov     cr8, rcx
 * 0000000140160805: mov     rcx, gs:188h
 * 000000014016080E: test    dword ptr [rcx], 8000000h
 * 0000000140160814: jz      short loc_14016081B
 * 0000000140160816: call    KiRestoreSetContextState
 * 000000014016081B: mov     rcx, gs:188h
 * 0000000140160824: test    dword ptr [rcx], 40010000h
 * 000000014016082A: jz      short loc_140160840
 * 000000014016082C: test    byte ptr [rcx+2], 1
 * 0000000140160830: jz      short loc_140160840
 * 0000000140160832: call    KiCopyCounters
 * 0000000140160837: mov     rcx, gs:188h
 * 0000000140160840: ldmxcsr dword ptr [rbp-54h]
 * 0000000140160844: cmp     word ptr [rbp+80h], 0
 * 000000014016084C: jz      short loc_140160853
 * 000000014016084E: call    KiRestoreDebugRegisterState
 * 0000000140160853: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140160857: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014016085B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014016085F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140160863: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140160867: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014016086B: mov     r11, [rbp-20h]
 * 000000014016086F: mov     r10, [rbp-28h]
 * 0000000140160873: mov     r9, [rbp-30h]
 * 0000000140160877: mov     r8, [rbp-38h]
 * 000000014016087B: movzx   eax, word ptr gs:2EC2h
 * 0000000140160884: cmp     gs:2EBCh, ax
 * 000000014016088D: jz      short loc_1401608A1
 * 000000014016088F: mov     gs:2EBCh, ax
 * 0000000140160898: mov     ecx, 48h ; 'H'
 * 000000014016089D: xor     edx, edx
 * 000000014016089F: wrmsr
 * 00000001401608A1: btr     word ptr gs:2EB8h, 2
 * 00000001401608AC: jnb     short loc_1401608BC
 * 00000001401608AE: mov     eax, 1
 * 00000001401608B3: xor     edx, edx
 * 00000001401608B5: mov     ecx, 49h ; 'I'
 * 00000001401608BA: wrmsr
 * 00000001401608BC: btr     word ptr gs:2EB8h, 5
 * 00000001401608C7: jnb     loc_1401609F2
 * 00000001401608CD: call    loc_1401609E0
 * 00000001401608D2: add     rsp, 8
 * 00000001401608D6: call    loc_1401609E9
 * 00000001401608DB: add     rsp, 8
 * 00000001401608DF: call    loc_1401608D2
 * 00000001401608E4: add     rsp, 8
 * 00000001401608E8: call    loc_1401608DB
 * 00000001401608ED: add     rsp, 8
 * 00000001401608F1: call    loc_1401608E4
 * 00000001401608F6: add     rsp, 8
 * 00000001401608FA: call    loc_1401608ED
 * 00000001401608FF: add     rsp, 8
 * 0000000140160903: call    loc_1401608F6
 * 0000000140160908: add     rsp, 8
 * 000000014016090C: call    loc_1401608FF
 * 0000000140160911: add     rsp, 8
 * 0000000140160915: call    loc_140160908
 * 000000014016091A: add     rsp, 8
 * 000000014016091E: call    loc_140160911
 * 0000000140160923: add     rsp, 8
 * 0000000140160927: call    loc_14016091A
 * 000000014016092C: add     rsp, 8
 * 0000000140160930: call    loc_140160923
 * 0000000140160935: add     rsp, 8
 * 0000000140160939: call    loc_14016092C
 * 000000014016093E: add     rsp, 8
 * 0000000140160942: call    loc_140160935
 * 0000000140160947: add     rsp, 8
 * 000000014016094B: call    loc_14016093E
 * 0000000140160950: add     rsp, 8
 * 0000000140160954: call    loc_140160947
 * 0000000140160959: add     rsp, 8
 * 000000014016095D: call    loc_140160950
 * 0000000140160962: add     rsp, 8
 * 0000000140160966: call    loc_140160959
 * 000000014016096B: add     rsp, 8
 * 000000014016096F: call    loc_140160962
 * 0000000140160974: add     rsp, 8
 * 0000000140160978: call    loc_14016096B
 * 000000014016097D: add     rsp, 8
 * 0000000140160981: call    loc_140160974
 * 0000000140160986: add     rsp, 8
 * 000000014016098A: call    loc_14016097D
 * 000000014016098F: add     rsp, 8
 * 0000000140160993: call    loc_140160986
 * 0000000140160998: add     rsp, 8
 * 000000014016099C: call    loc_14016098F
 * 00000001401609A1: add     rsp, 8
 * 00000001401609A5: call    loc_140160998
 * 00000001401609AA: add     rsp, 8
 * 00000001401609AE: call    loc_1401609A1
 * 00000001401609B3: add     rsp, 8
 * 00000001401609B7: call    loc_1401609AA
 * 00000001401609BC: add     rsp, 8
 * 00000001401609C0: call    loc_1401609B3
 * 00000001401609C5: add     rsp, 8
 * 00000001401609C9: call    loc_1401609BC
 * 00000001401609CE: add     rsp, 8
 * 00000001401609D2: call    loc_1401609C5
 * 00000001401609D7: add     rsp, 8
 * 00000001401609DB: call    loc_1401609CE
 * 00000001401609E0: add     rsp, 8
 * 00000001401609E4: call    loc_1401609D7
 * 00000001401609E9: add     rsp, 8
 * 00000001401609ED: mov     eax, 0DADAh
 * 00000001401609F2: test    word ptr gs:2EB8h, 40h
 * 00000001401609FD: jz      short loc_140160A0B
 * 00000001401609FF: xor     eax, eax
 * 0000000140160A01: xor     edx, edx
 * 0000000140160A03: mov     ecx, 1
 * 0000000140160A08: div     rcx
 * 0000000140160A0B: mov     rdx, [rbp-40h]
 * 0000000140160A0F: mov     rcx, [rbp-48h]
 * 0000000140160A13: mov     rax, [rbp-50h]
 * 0000000140160A17: mov     rsp, rbp
 * 0000000140160A1A: mov     rbp, [rbp+0D8h]
 * 0000000140160A21: add     rsp, 0E8h
 * 0000000140160A28: test    cs:KiKvaShadow, 1
 * 0000000140160A2F: jz      short loc_140160A36
 * 0000000140160A31: jmp     KiKernelExit
 * 0000000140160A36: test    word ptr gs:2EB8h, 80h
 * 0000000140160A41: jz      short loc_140160A48
 * 0000000140160A43: verw    [rsp-1E8h+arg_200]
 * 0000000140160A48: swapgs
 * 0000000140160A4B: iretq
 * 0000000140160A4D: ldmxcsr dword ptr [rbp-54h]
 * 0000000140160A51: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140160A55: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140160A59: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140160A5D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140160A61: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140160A65: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140160A69: mov     r11, [rbp-20h]
 * 0000000140160A6D: mov     r10, [rbp-28h]
 * 0000000140160A71: mov     r9, [rbp-30h]
 * 0000000140160A75: mov     r8, [rbp-38h]
 * 0000000140160A79: mov     rdx, [rbp-40h]
 * 0000000140160A7D: mov     rcx, [rbp-48h]
 * 0000000140160A81: mov     rax, [rbp-50h]
 * 0000000140160A85: mov     rsp, rbp
 * 0000000140160A88: mov     rbp, [rbp+0D8h]
 * 0000000140160A8F: add     rsp, 0E8h
 * 0000000140160A96: iretq
 */
