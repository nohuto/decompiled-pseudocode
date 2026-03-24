/*
 * XREFs of KiMcheckAbort @ 0x140162F00
 * Callers:
 *     KiMcheckAbortShadow @ 0x140224880 (KiMcheckAbortShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1400C83B0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiMcheckAbort @ 0x140162F00 (KiMcheckAbort.c)
 *     KxMcheckAbort @ 0x140163600 (KxMcheckAbort.c)
 *     KiBugCheckDispatch @ 0x140165B40 (KiBugCheckDispatch.c)
 *     KeWakeProcessor @ 0x1401C71C8 (KeWakeProcessor.c)
 */

/*
 * Hex-Rays decompilation failed for KiMcheckAbort @ 0x140162F00
 * Reason: Hex-Rays returned no pseudocode for 0x140162F00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140162F00: sub     rsp, 8
 * 0000000140162F04: push    rbp
 * 0000000140162F05: push    rsi
 * 0000000140162F06: sub     rsp, 150h
 * 0000000140162F0D: lea     rbp, [rsp+80h]
 * 0000000140162F15: mov     [rbp+0E8h+var_13D], 0
 * 0000000140162F19: mov     [rbp+0E8h+var_138], rax
 * 0000000140162F1D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140162F21: mov     [rbp+0E8h+var_128], rdx
 * 0000000140162F25: mov     [rbp+0E8h+var_120], r8
 * 0000000140162F29: mov     [rbp+0E8h+var_118], r9
 * 0000000140162F2D: mov     [rbp+0E8h+var_110], r10
 * 0000000140162F31: mov     [rbp+0E8h+var_108], r11
 * 0000000140162F35: test    byte ptr [rbp+0E8h+arg_0], 1
 * 0000000140162F3C: jnz     loc_1401630F1
 * 0000000140162F42: mov     ecx, 0C0000101h
 * 0000000140162F47: rdmsr
 * 0000000140162F49: mov     [rbp+0E8h+var_100], eax
 * 0000000140162F4C: mov     [rbp+0E8h+var_FC], edx
 * 0000000140162F4F: lea     rcx, KiProcessorBlock
 * 0000000140162F56: lea     rdx, KiProcessorNumberToIndexMappingTable
 * 0000000140162F5D: mov     eax, 50h ; 'P'
 * 0000000140162F62: lsl     eax, eax
 * 0000000140162F65: mov     r8d, eax
 * 0000000140162F68: and     r8d, 3FFh
 * 0000000140162F6F: shl     r8d, 6
 * 0000000140162F73: shr     eax, 0Eh
 * 0000000140162F76: or      eax, r8d
 * 0000000140162F79: mov     eax, [rdx+rax*4]
 * 0000000140162F7C: mov     rdx, [rcx+rax*8]
 * 0000000140162F80: sub     rdx, 180h
 * 0000000140162F87: mov     eax, edx
 * 0000000140162F89: shr     rdx, 20h
 * 0000000140162F8D: mov     ecx, 0C0000101h
 * 0000000140162F92: wrmsr
 * 0000000140162F94: mov     rax, cr2
 * 0000000140162F97: mov     [rbp+0E8h+var_98], rax
 * 0000000140162F9B: test    byte ptr gs:2EB0h, 1
 * 0000000140162FA4: jz      loc_14016328C
 * 0000000140162FAA: mov     ecx, 48h ; 'H'
 * 0000000140162FAF: rdmsr
 * 0000000140162FB1: mov     [rbp+0E8h+var_13E], al
 * 0000000140162FB4: mov     eax, 1
 * 0000000140162FB9: xor     edx, edx
 * 0000000140162FBB: wrmsr
 * 0000000140162FBD: test    byte ptr gs:2EB0h, 4
 * 0000000140162FC6: jnz     loc_14016328C
 * 0000000140162FCC: call    loc_1401630DF
 * 0000000140162FD1: add     rsp, 8
 * 0000000140162FD5: call    loc_1401630E8
 * 0000000140162FDA: add     rsp, 8
 * 0000000140162FDE: call    loc_140162FD1
 * 0000000140162FE3: add     rsp, 8
 * 0000000140162FE7: call    loc_140162FDA
 * 0000000140162FEC: add     rsp, 8
 * 0000000140162FF0: call    loc_140162FE3
 * 0000000140162FF5: add     rsp, 8
 * 0000000140162FF9: call    loc_140162FEC
 * 0000000140162FFE: add     rsp, 8
 * 0000000140163002: call    loc_140162FF5
 * 0000000140163007: add     rsp, 8
 * 000000014016300B: call    loc_140162FFE
 * 0000000140163010: add     rsp, 8
 * 0000000140163014: call    loc_140163007
 * 0000000140163019: add     rsp, 8
 * 000000014016301D: call    loc_140163010
 * 0000000140163022: add     rsp, 8
 * 0000000140163026: call    loc_140163019
 * 000000014016302B: add     rsp, 8
 * 000000014016302F: call    loc_140163022
 * 0000000140163034: add     rsp, 8
 * 0000000140163038: call    loc_14016302B
 * 000000014016303D: add     rsp, 8
 * 0000000140163041: call    loc_140163034
 * 0000000140163046: add     rsp, 8
 * 000000014016304A: call    loc_14016303D
 * 000000014016304F: add     rsp, 8
 * 0000000140163053: call    loc_140163046
 * 0000000140163058: add     rsp, 8
 * 000000014016305C: call    loc_14016304F
 * 0000000140163061: add     rsp, 8
 * 0000000140163065: call    loc_140163058
 * 000000014016306A: add     rsp, 8
 * 000000014016306E: call    loc_140163061
 * 0000000140163073: add     rsp, 8
 * 0000000140163077: call    loc_14016306A
 * 000000014016307C: add     rsp, 8
 * 0000000140163080: call    loc_140163073
 * 0000000140163085: add     rsp, 8
 * 0000000140163089: call    loc_14016307C
 * 000000014016308E: add     rsp, 8
 * 0000000140163092: call    loc_140163085
 * 0000000140163097: add     rsp, 8
 * 000000014016309B: call    loc_14016308E
 * 00000001401630A0: add     rsp, 8
 * 00000001401630A4: call    loc_140163097
 * 00000001401630A9: add     rsp, 8
 * 00000001401630AD: call    loc_1401630A0
 * 00000001401630B2: add     rsp, 8
 * 00000001401630B6: call    loc_1401630A9
 * 00000001401630BB: add     rsp, 8
 * 00000001401630BF: call    loc_1401630B2
 * 00000001401630C4: add     rsp, 8
 * 00000001401630C8: call    loc_1401630BB
 * 00000001401630CD: add     rsp, 8
 * 00000001401630D1: call    loc_1401630C4
 * 00000001401630D6: add     rsp, 8
 * 00000001401630DA: call    loc_1401630CD
 * 00000001401630DF: add     rsp, 8
 * 00000001401630E3: call    loc_1401630D6
 * 00000001401630E8: add     rsp, 8
 * 00000001401630EC: jmp     loc_14016328C
 * 00000001401630F1: test    cs:KiKvaShadow, 1
 * 00000001401630F8: jnz     short loc_1401630FD
 * 00000001401630FA: swapgs
 * 00000001401630FD: mov     r10, gs:188h
 * 0000000140163106: test    byte ptr gs:2EB0h, 1
 * 000000014016310F: jz      loc_140163277
 * 0000000140163115: mov     rcx, gs:188h
 * 000000014016311E: mov     rcx, [rcx+220h]
 * 0000000140163125: mov     rcx, [rcx+790h]
 * 000000014016312C: mov     gs:2EA8h, rcx
 * 0000000140163135: mov     ecx, 48h ; 'H'
 * 000000014016313A: rdmsr
 * 000000014016313C: mov     [rbp+0E8h+var_13E], al
 * 000000014016313F: mov     eax, 1
 * 0000000140163144: xor     edx, edx
 * 0000000140163146: wrmsr
 * 0000000140163148: test    byte ptr gs:2EB0h, 4
 * 0000000140163151: jnz     loc_140163277
 * 0000000140163157: call    loc_14016326A
 * 000000014016315C: add     rsp, 8
 * 0000000140163160: call    loc_140163273
 * 0000000140163165: add     rsp, 8
 * 0000000140163169: call    loc_14016315C
 * 000000014016316E: add     rsp, 8
 * 0000000140163172: call    loc_140163165
 * 0000000140163177: add     rsp, 8
 * 000000014016317B: call    loc_14016316E
 * 0000000140163180: add     rsp, 8
 * 0000000140163184: call    loc_140163177
 * 0000000140163189: add     rsp, 8
 * 000000014016318D: call    loc_140163180
 * 0000000140163192: add     rsp, 8
 * 0000000140163196: call    loc_140163189
 * 000000014016319B: add     rsp, 8
 * 000000014016319F: call    loc_140163192
 * 00000001401631A4: add     rsp, 8
 * 00000001401631A8: call    loc_14016319B
 * 00000001401631AD: add     rsp, 8
 * 00000001401631B1: call    loc_1401631A4
 * 00000001401631B6: add     rsp, 8
 * 00000001401631BA: call    loc_1401631AD
 * 00000001401631BF: add     rsp, 8
 * 00000001401631C3: call    loc_1401631B6
 * 00000001401631C8: add     rsp, 8
 * 00000001401631CC: call    loc_1401631BF
 * 00000001401631D1: add     rsp, 8
 * 00000001401631D5: call    loc_1401631C8
 * 00000001401631DA: add     rsp, 8
 * 00000001401631DE: call    loc_1401631D1
 * 00000001401631E3: add     rsp, 8
 * 00000001401631E7: call    loc_1401631DA
 * 00000001401631EC: add     rsp, 8
 * 00000001401631F0: call    loc_1401631E3
 * 00000001401631F5: add     rsp, 8
 * 00000001401631F9: call    loc_1401631EC
 * 00000001401631FE: add     rsp, 8
 * 0000000140163202: call    loc_1401631F5
 * 0000000140163207: add     rsp, 8
 * 000000014016320B: call    loc_1401631FE
 * 0000000140163210: add     rsp, 8
 * 0000000140163214: call    loc_140163207
 * 0000000140163219: add     rsp, 8
 * 000000014016321D: call    loc_140163210
 * 0000000140163222: add     rsp, 8
 * 0000000140163226: call    loc_140163219
 * 000000014016322B: add     rsp, 8
 * 000000014016322F: call    loc_140163222
 * 0000000140163234: add     rsp, 8
 * 0000000140163238: call    loc_14016322B
 * 000000014016323D: add     rsp, 8
 * 0000000140163241: call    loc_140163234
 * 0000000140163246: add     rsp, 8
 * 000000014016324A: call    loc_14016323D
 * 000000014016324F: add     rsp, 8
 * 0000000140163253: call    loc_140163246
 * 0000000140163258: add     rsp, 8
 * 000000014016325C: call    loc_14016324F
 * 0000000140163261: add     rsp, 8
 * 0000000140163265: call    loc_140163258
 * 000000014016326A: add     rsp, 8
 * 000000014016326E: call    loc_140163261
 * 0000000140163273: add     rsp, 8
 * 0000000140163277: test    byte ptr [r10+3], 3
 * 000000014016327C: mov     [rbp+0E8h+var_68], 0
 * 0000000140163285: jz      short loc_14016328C
 * 0000000140163287: call    KiSaveDebugRegisterState
 * 000000014016328C: cld
 * 000000014016328D: lfence
 * 0000000140163290: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140163294: ldmxcsr dword ptr gs:180h
 * 000000014016329D: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401632A1: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401632A5: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401632A9: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401632AD: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401632B1: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401632B5: cmp     byte ptr gs:5C9Ah, 0
 * 00000001401632BE: jz      short loc_1401632C5
 * 00000001401632C0: call    KeWakeProcessor
 * 00000001401632C5: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001401632CC: cmp     rax, [rbp+0E8h]
 * 00000001401632D3: jnb     short loc_1401632EE
 * 00000001401632D5: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001401632DC: cmp     rax, [rbp+0E8h]
 * 00000001401632E3: jb      short loc_1401632EE
 * 00000001401632E5: lea     rcx, [rbp+0E8h+var_168]
 * 00000001401632E9: call    KiCheckForSListAddress
 * 00000001401632EE: xor     esi, esi
 * 00000001401632F0: inc     dword ptr gs:5C80h
 * 00000001401632F8: mov     ecx, 0Fh
 * 00000001401632FD: mov     rax, cr8
 * 0000000140163301: mov     cr8, rcx
 * 0000000140163305: mov     [rbp+0E8h+var_13F], al
 * 0000000140163308: sti
 * 0000000140163309: test    byte ptr [rbp+0E8h+arg_0], 1
 * 0000000140163310: jnz     short loc_140163336
 * 0000000140163312: lea     rax, KiMcheckRecurseStart
 * 0000000140163319: cmp     rax, [rbp+0E8h]
 * 0000000140163320: ja      short loc_140163336
 * 0000000140163322: lea     rax, KiMcheckRecurseEnd
 * 0000000140163329: cmp     rax, [rbp+0E8h]
 * 0000000140163330: ja      KiMcheckRecurseEnd
 * 0000000140163336: lea     rcx, [rbp+0E8h+var_168]
 * 000000014016333A: sub     rsp, 10h
 * 000000014016333E: mov     r8, rsp
 * 0000000140163341: call    KxMcheckAbort
 * 0000000140163346: test    dword ptr [rsp+78h+var_78], 1
 * 000000014016334D: jz      short loc_140163370
 * 000000014016334F: mov     rcx, gs:188h
 * 0000000140163358: mov     rcx, [rcx+28h]
 * 000000014016335C: sub     rcx, 1A0h
 * 0000000140163363: movdqa  xmm0, [rsp+78h+var_78]
 * 0000000140163368: movdqa  xmmword ptr [rcx], xmm0
 * 000000014016336C: mov     [rbp+0E8h+var_13D], 1
 * 0000000140163370: add     rsp, 10h
 * 0000000140163374: xor     eax, eax
 * 0000000140163376: xor     edx, edx
 * 0000000140163378: mov     ecx, 17Ah
 * 000000014016337D: wrmsr
 * 000000014016337F: cli
 * 0000000140163380: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140163384: mov     cr8, rcx
 * 0000000140163388: mov     rsi, [rbp+0E8h+var_18]
 * 000000014016338F: cli
 * 0000000140163390: test    byte ptr [rbp+0E8h+arg_0], 1
 * 0000000140163397: jz      loc_140163546
 * 000000014016339D: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001401633A1: cmp     [rbp+0E8h+var_68], 0
 * 00000001401633A9: jz      short loc_1401633B0
 * 00000001401633AB: call    KiRestoreDebugRegisterState
 * 00000001401633B0: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001401633B4: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001401633B8: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001401633BC: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001401633C0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001401633C4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001401633C8: mov     r11, [rbp+0E8h+var_108]
 * 00000001401633CC: mov     r10, [rbp+0E8h+var_110]
 * 00000001401633D0: mov     r9, [rbp+0E8h+var_118]
 * 00000001401633D4: mov     r8, [rbp+0E8h+var_120]
 * 00000001401633D8: cmp     [rbp+0E8h+var_13D], 0
 * 00000001401633DC: jz      loc_1401634CB
 * 00000001401633E2: mov     rdx, gs:188h
 * 00000001401633EB: mov     rcx, [rdx+28h]
 * 00000001401633EF: sub     rcx, 28h ; '('
 * 00000001401633F3: mov     rax, [rbp+0E8h]
 * 00000001401633FA: mov     [rcx], rax
 * 00000001401633FD: movzx   rax, [rbp+0E8h+arg_0]
 * 0000000140163405: mov     [rcx+8], rax
 * 0000000140163409: mov     eax, [rbp+0E8h+arg_8]
 * 000000014016340F: mov     [rcx+10h], rax
 * 0000000140163413: mov     rax, [rbp+0E8h+arg_10]
 * 000000014016341A: mov     [rcx+18h], rax
 * 000000014016341E: movzx   rax, [rbp+0E8h+arg_18]
 * 0000000140163426: mov     [rcx+20h], rax
 * 000000014016342A: mov     [rbp+0E8h+arg_18], 18h
 * 0000000140163433: mov     [rbp+0E8h+arg_0], 10h
 * 000000014016343C: and     [rbp+0E8h+arg_8], 0FFFFFDFFh
 * 0000000140163446: lea     rax, KxMcheckAlternateReturn
 * 000000014016344D: test    cs:KiKvaShadow, 1
 * 0000000140163454: jz      short loc_1401634BB
 * 0000000140163456: mov     rax, gs:38h
 * 000000014016345F: mov     rdx, gs:7000h
 * 0000000140163468: btr     rdx, 3Fh ; '?'
 * 000000014016346D: mov     [rax+45F8h], rdx
 * 0000000140163474: mov     rdx, gs:18h
 * 000000014016347D: mov     [rax+45F0h], rdx
 * 0000000140163484: lea     rax, [rax+41D8h]
 * 000000014016348B: mov     rdx, [rcx]
 * 000000014016348E: mov     [rax], rdx
 * 0000000140163491: mov     rdx, [rcx+8]
 * 0000000140163495: mov     [rax+8], rdx
 * 0000000140163499: mov     rdx, [rcx+10h]
 * 000000014016349D: mov     [rax+10h], rdx
 * 00000001401634A1: mov     rdx, [rcx+18h]
 * 00000001401634A5: mov     [rax+18h], rdx
 * 00000001401634A9: mov     rdx, [rcx+20h]
 * 00000001401634AD: mov     [rax+20h], rcx
 * 00000001401634B1: mov     rcx, rax
 * 00000001401634B4: lea     rax, KxMcheckAlternateReturnShadow
 * 00000001401634BB: mov     [rbp+0E8h], rax
 * 00000001401634C2: mov     [rbp+0E8h+arg_10], rcx
 * 00000001401634C9: jmp     short loc_140163516
 * 00000001401634CB: movzx   eax, [rbp+0E8h+var_13E]
 * 00000001401634CF: test    byte ptr gs:2EB0h, 1
 * 00000001401634D8: jz      short loc_140163516
 * 00000001401634DA: xor     edx, edx
 * 00000001401634DC: mov     ecx, 48h ; 'H'
 * 00000001401634E1: wrmsr
 * 00000001401634E3: mov     rax, gs:2EA8h
 * 00000001401634EC: test    rax, rax
 * 00000001401634EF: jz      short loc_140163516
 * 00000001401634F1: mov     rcx, gs:188h
 * 00000001401634FA: mov     rcx, [rcx+220h]
 * 0000000140163501: cmp     rax, [rcx+790h]
 * 0000000140163508: jz      short loc_140163516
 * 000000014016350A: mov     eax, 1
 * 000000014016350F: mov     ecx, 49h ; 'I'
 * 0000000140163514: wrmsr
 * 0000000140163516: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016351A: mov     rcx, [rbp+0E8h+var_130]
 * 000000014016351E: mov     rax, [rbp+0E8h+var_138]
 * 0000000140163522: mov     rsp, rbp
 * 0000000140163525: mov     rbp, [rbp+0E8h+var_10]
 * 000000014016352C: add     rsp, 0E8h
 * 0000000140163533: test    cs:KiKvaShadow, 1
 * 000000014016353A: jz      short loc_140163541
 * 000000014016353C: jmp     KiKernelIstMceExit
 * 0000000140163541: swapgs
 * 0000000140163544: iretq
 * 0000000140163546: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016354A: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016354E: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140163552: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140163556: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016355A: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016355E: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140163562: movzx   eax, [rbp+0E8h+var_13E]
 * 0000000140163566: test    byte ptr gs:2EB0h, 1
 * 000000014016356F: jz      short loc_14016357A
 * 0000000140163571: xor     edx, edx
 * 0000000140163573: mov     ecx, 48h ; 'H'
 * 0000000140163578: wrmsr
 * 000000014016357A: mov     eax, [rbp+0E8h+var_100]
 * 000000014016357D: mov     edx, [rbp+0E8h+var_FC]
 * 0000000140163580: mov     ecx, 0C0000101h
 * 0000000140163585: wrmsr
 * 0000000140163587: mov     rax, [rbp+0E8h+var_98]
 * 000000014016358B: mov     cr2, rax
 * 000000014016358E: mov     r11, [rbp+0E8h+var_108]
 * 0000000140163592: mov     r10, [rbp+0E8h+var_110]
 * 0000000140163596: mov     r9, [rbp+0E8h+var_118]
 * 000000014016359A: mov     r8, [rbp+0E8h+var_120]
 * 000000014016359E: mov     rdx, [rbp+0E8h+var_128]
 * 00000001401635A2: mov     rcx, [rbp+0E8h+var_130]
 * 00000001401635A6: mov     rax, [rbp+0E8h+var_138]
 * 00000001401635AA: mov     rsp, rbp
 * 00000001401635AD: mov     rbp, [rbp+0E8h+var_10]
 * 00000001401635B4: add     rsp, 0E8h
 * 00000001401635BB: test    cs:KiKvaShadow, 1
 * 00000001401635C2: jz      short locret_1401635C9
 * 00000001401635C4: jmp     KiKernelIstMceExit
 * 00000001401635C9: iretq
 * 00000001401635CB: xor     r10, r10
 * 00000001401635CE: xor     r9, r9
 * 00000001401635D1: xor     r8, r8
 * 00000001401635D4: xor     edx, edx
 * 00000001401635D6: mov     ecx, 0FBh
 * 00000001401635DB: call    KiBugCheckDispatch
 */
