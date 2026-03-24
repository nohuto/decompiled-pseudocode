/*
 * XREFs of KiDivideErrorFault @ 0x140169100
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x14023F000 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x140169100 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x140169100
 * Reason: Hex-Rays returned no pseudocode for 0x140169100
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140169100: sub     rsp, 8
 * 0000000140169104: push    rbp
 * 0000000140169105: sub     rsp, 158h
 * 000000014016910C: lea     rbp, [rsp+80h]
 * 0000000140169114: mov     [rbp+0E8h+var_13D], 1
 * 0000000140169118: mov     [rbp+0E8h+var_138], rax
 * 000000014016911C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140169120: mov     [rbp+0E8h+var_128], rdx
 * 0000000140169124: mov     [rbp+0E8h+var_120], r8
 * 0000000140169128: mov     [rbp+0E8h+var_118], r9
 * 000000014016912C: mov     [rbp+0E8h+var_110], r10
 * 0000000140169130: mov     [rbp+0E8h+var_108], r11
 * 0000000140169134: test    [rbp+0E8h+arg_0], 1
 * 000000014016913B: jnz     short loc_14016916C
 * 000000014016913D: lfence
 * 0000000140169140: test    word ptr gs:2EB8h, 1
 * 000000014016914B: jnz     short loc_140169155
 * 000000014016914D: lfence
 * 0000000140169150: jmp     loc_140169391
 * 0000000140169155: movzx   eax, word ptr gs:2EBCh
 * 000000014016915E: mov     ecx, 48h ; 'H'
 * 0000000140169163: xor     edx, edx
 * 0000000140169165: wrmsr
 * 0000000140169167: jmp     loc_140169391
 * 000000014016916C: test    cs:KiKvaShadow, 1
 * 0000000140169173: jnz     short loc_140169178
 * 0000000140169175: swapgs
 * 0000000140169178: lfence
 * 000000014016917B: mov     r10, gs:188h
 * 0000000140169184: mov     rcx, gs:188h
 * 000000014016918D: mov     rcx, [rcx+220h]
 * 0000000140169194: mov     rcx, [rcx+7B8h]
 * 000000014016919B: mov     gs:2EB0h, rcx
 * 00000001401691A4: movzx   eax, word ptr gs:2EBEh
 * 00000001401691AD: cmp     gs:2EBCh, ax
 * 00000001401691B6: jz      short loc_1401691CA
 * 00000001401691B8: mov     gs:2EBCh, ax
 * 00000001401691C1: mov     ecx, 48h ; 'H'
 * 00000001401691C6: xor     edx, edx
 * 00000001401691C8: wrmsr
 * 00000001401691CA: movzx   edx, word ptr gs:2EB8h
 * 00000001401691D3: test    edx, 8
 * 00000001401691D9: jz      short loc_1401691F2
 * 00000001401691DB: mov     eax, 1
 * 00000001401691E0: xor     edx, edx
 * 00000001401691E2: mov     ecx, 49h ; 'I'
 * 00000001401691E7: wrmsr
 * 00000001401691E9: movzx   edx, word ptr gs:2EB8h
 * 00000001401691F2: test    edx, 2
 * 00000001401691F8: jz      loc_140169323
 * 00000001401691FE: call    loc_140169311
 * 0000000140169203: add     rsp, 8
 * 0000000140169207: call    loc_14016931A
 * 000000014016920C: add     rsp, 8
 * 0000000140169210: call    loc_140169203
 * 0000000140169215: add     rsp, 8
 * 0000000140169219: call    loc_14016920C
 * 000000014016921E: add     rsp, 8
 * 0000000140169222: call    loc_140169215
 * 0000000140169227: add     rsp, 8
 * 000000014016922B: call    loc_14016921E
 * 0000000140169230: add     rsp, 8
 * 0000000140169234: call    loc_140169227
 * 0000000140169239: add     rsp, 8
 * 000000014016923D: call    loc_140169230
 * 0000000140169242: add     rsp, 8
 * 0000000140169246: call    loc_140169239
 * 000000014016924B: add     rsp, 8
 * 000000014016924F: call    loc_140169242
 * 0000000140169254: add     rsp, 8
 * 0000000140169258: call    loc_14016924B
 * 000000014016925D: add     rsp, 8
 * 0000000140169261: call    loc_140169254
 * 0000000140169266: add     rsp, 8
 * 000000014016926A: call    loc_14016925D
 * 000000014016926F: add     rsp, 8
 * 0000000140169273: call    loc_140169266
 * 0000000140169278: add     rsp, 8
 * 000000014016927C: call    loc_14016926F
 * 0000000140169281: add     rsp, 8
 * 0000000140169285: call    loc_140169278
 * 000000014016928A: add     rsp, 8
 * 000000014016928E: call    loc_140169281
 * 0000000140169293: add     rsp, 8
 * 0000000140169297: call    loc_14016928A
 * 000000014016929C: add     rsp, 8
 * 00000001401692A0: call    loc_140169293
 * 00000001401692A5: add     rsp, 8
 * 00000001401692A9: call    loc_14016929C
 * 00000001401692AE: add     rsp, 8
 * 00000001401692B2: call    loc_1401692A5
 * 00000001401692B7: add     rsp, 8
 * 00000001401692BB: call    loc_1401692AE
 * 00000001401692C0: add     rsp, 8
 * 00000001401692C4: call    loc_1401692B7
 * 00000001401692C9: add     rsp, 8
 * 00000001401692CD: call    loc_1401692C0
 * 00000001401692D2: add     rsp, 8
 * 00000001401692D6: call    loc_1401692C9
 * 00000001401692DB: add     rsp, 8
 * 00000001401692DF: call    loc_1401692D2
 * 00000001401692E4: add     rsp, 8
 * 00000001401692E8: call    loc_1401692DB
 * 00000001401692ED: add     rsp, 8
 * 00000001401692F1: call    loc_1401692E4
 * 00000001401692F6: add     rsp, 8
 * 00000001401692FA: call    loc_1401692ED
 * 00000001401692FF: add     rsp, 8
 * 0000000140169303: call    loc_1401692F6
 * 0000000140169308: add     rsp, 8
 * 000000014016930C: call    loc_1401692FF
 * 0000000140169311: add     rsp, 8
 * 0000000140169315: call    loc_140169308
 * 000000014016931A: add     rsp, 8
 * 000000014016931E: mov     eax, 0DADAh
 * 0000000140169323: test    edx, 100h
 * 0000000140169329: jz      short loc_140169330
 * 000000014016932B: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140169330: lfence
 * 0000000140169333: test    byte ptr [r10+3], 80h
 * 0000000140169338: jz      short loc_14016937C
 * 000000014016933A: mov     ecx, 0C0000102h
 * 000000014016933F: rdmsr
 * 0000000140169341: shl     rdx, 20h
 * 0000000140169345: or      rax, rdx
 * 0000000140169348: cmp     rax, cs:MmUserProbeAddress
 * 000000014016934F: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140169357: cmp     [r10+0F0h], rax
 * 000000014016935E: jz      short loc_14016937C
 * 0000000140169360: mov     rdx, [r10+1F0h]
 * 0000000140169367: bts     dword ptr [r10+74h], 8
 * 000000014016936D: dec     word ptr [r10+1E6h]
 * 0000000140169375: mov     [rdx+80h], rax
 * 000000014016937C: test    byte ptr [r10+3], 3
 * 0000000140169381: mov     [rbp+0E8h+var_68], 0
 * 000000014016938A: jz      short loc_140169391
 * 000000014016938C: call    KiSaveDebugRegisterState
 * 0000000140169391: cld
 * 0000000140169392: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140169396: ldmxcsr dword ptr gs:180h
 * 000000014016939F: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401693A3: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401693A7: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401693AB: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401693AF: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401693B3: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401693B7: test    [rbp+0E8h+arg_8], 200h
 * 00000001401693C1: jz      short loc_1401693C4
 * 00000001401693C3: sti
 * 00000001401693C4: mov     ecx, 10000003h
 * 00000001401693C9: xor     edx, edx
 * 00000001401693CB: mov     r8, [rbp+0E8h]
 * 00000001401693D2: call    KiExceptionDispatch
 * 00000001401693D7: nop
 * 00000001401693D8: retn
 */
