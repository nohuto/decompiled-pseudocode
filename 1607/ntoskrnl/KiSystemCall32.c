/*
 * XREFs of KiSystemCall32 @ 0x14016F040
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x14016F040 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x14016F040
 * Reason: Hex-Rays returned no pseudocode for 0x14016F040
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016F040: swapgs
 * 000000014016F043: mov     gs:10h, rsp
 * 000000014016F04C: mov     rsp, gs:1A8h
 * 000000014016F055: push    2Bh ; '+'
 * 000000014016F057: push    qword ptr gs:10h
 * 000000014016F05F: push    r11
 * 000000014016F061: push    23h ; '#'
 * 000000014016F063: push    rcx
 * 000000014016F064: swapgs
 * 000000014016F067: lfence
 * 000000014016F06A: sub     rsp, 8
 * 000000014016F06E: push    rbp
 * 000000014016F06F: sub     rsp, 158h
 * 000000014016F076: lea     rbp, [rsp+190h+var_110]
 * 000000014016F07E: mov     byte ptr [rbp-55h], 1
 * 000000014016F082: mov     [rbp-50h], rax
 * 000000014016F086: mov     [rbp-48h], rcx
 * 000000014016F08A: mov     [rbp-40h], rdx
 * 000000014016F08E: mov     [rbp-38h], r8
 * 000000014016F092: mov     [rbp-30h], r9
 * 000000014016F096: mov     [rbp-28h], r10
 * 000000014016F09A: mov     [rbp-20h], r11
 * 000000014016F09E: test    byte ptr [rbp+0F0h], 1
 * 000000014016F0A5: jnz     short loc_14016F0D6
 * 000000014016F0A7: lfence
 * 000000014016F0AA: test    word ptr gs:2EB8h, 1
 * 000000014016F0B5: jnz     short loc_14016F0BF
 * 000000014016F0B7: lfence
 * 000000014016F0BA: jmp     loc_14016F2FB
 * 000000014016F0BF: movzx   eax, word ptr gs:2EBCh
 * 000000014016F0C8: mov     ecx, 48h ; 'H'
 * 000000014016F0CD: xor     edx, edx
 * 000000014016F0CF: wrmsr
 * 000000014016F0D1: jmp     loc_14016F2FB
 * 000000014016F0D6: test    cs:KiKvaShadow, 1
 * 000000014016F0DD: jnz     short loc_14016F0E2
 * 000000014016F0DF: swapgs
 * 000000014016F0E2: lfence
 * 000000014016F0E5: mov     r10, gs:188h
 * 000000014016F0EE: mov     rcx, gs:188h
 * 000000014016F0F7: mov     rcx, [rcx+220h]
 * 000000014016F0FE: mov     rcx, [rcx+7B8h]
 * 000000014016F105: mov     gs:2EB0h, rcx
 * 000000014016F10E: movzx   eax, word ptr gs:2EBEh
 * 000000014016F117: cmp     gs:2EBCh, ax
 * 000000014016F120: jz      short loc_14016F134
 * 000000014016F122: mov     gs:2EBCh, ax
 * 000000014016F12B: mov     ecx, 48h ; 'H'
 * 000000014016F130: xor     edx, edx
 * 000000014016F132: wrmsr
 * 000000014016F134: movzx   edx, word ptr gs:2EB8h
 * 000000014016F13D: test    edx, 8
 * 000000014016F143: jz      short loc_14016F15C
 * 000000014016F145: mov     eax, 1
 * 000000014016F14A: xor     edx, edx
 * 000000014016F14C: mov     ecx, 49h ; 'I'
 * 000000014016F151: wrmsr
 * 000000014016F153: movzx   edx, word ptr gs:2EB8h
 * 000000014016F15C: test    edx, 2
 * 000000014016F162: jz      loc_14016F28D
 * 000000014016F168: call    loc_14016F27B
 * 000000014016F16D: add     rsp, 8
 * 000000014016F171: call    loc_14016F284
 * 000000014016F176: add     rsp, 8
 * 000000014016F17A: call    loc_14016F16D
 * 000000014016F17F: add     rsp, 8
 * 000000014016F183: call    loc_14016F176
 * 000000014016F188: add     rsp, 8
 * 000000014016F18C: call    loc_14016F17F
 * 000000014016F191: add     rsp, 8
 * 000000014016F195: call    loc_14016F188
 * 000000014016F19A: add     rsp, 8
 * 000000014016F19E: call    loc_14016F191
 * 000000014016F1A3: add     rsp, 8
 * 000000014016F1A7: call    loc_14016F19A
 * 000000014016F1AC: add     rsp, 8
 * 000000014016F1B0: call    loc_14016F1A3
 * 000000014016F1B5: add     rsp, 8
 * 000000014016F1B9: call    loc_14016F1AC
 * 000000014016F1BE: add     rsp, 8
 * 000000014016F1C2: call    loc_14016F1B5
 * 000000014016F1C7: add     rsp, 8
 * 000000014016F1CB: call    loc_14016F1BE
 * 000000014016F1D0: add     rsp, 8
 * 000000014016F1D4: call    loc_14016F1C7
 * 000000014016F1D9: add     rsp, 8
 * 000000014016F1DD: call    loc_14016F1D0
 * 000000014016F1E2: add     rsp, 8
 * 000000014016F1E6: call    loc_14016F1D9
 * 000000014016F1EB: add     rsp, 8
 * 000000014016F1EF: call    loc_14016F1E2
 * 000000014016F1F4: add     rsp, 8
 * 000000014016F1F8: call    loc_14016F1EB
 * 000000014016F1FD: add     rsp, 8
 * 000000014016F201: call    loc_14016F1F4
 * 000000014016F206: add     rsp, 8
 * 000000014016F20A: call    loc_14016F1FD
 * 000000014016F20F: add     rsp, 8
 * 000000014016F213: call    loc_14016F206
 * 000000014016F218: add     rsp, 8
 * 000000014016F21C: call    loc_14016F20F
 * 000000014016F221: add     rsp, 8
 * 000000014016F225: call    loc_14016F218
 * 000000014016F22A: add     rsp, 8
 * 000000014016F22E: call    loc_14016F221
 * 000000014016F233: add     rsp, 8
 * 000000014016F237: call    loc_14016F22A
 * 000000014016F23C: add     rsp, 8
 * 000000014016F240: call    loc_14016F233
 * 000000014016F245: add     rsp, 8
 * 000000014016F249: call    loc_14016F23C
 * 000000014016F24E: add     rsp, 8
 * 000000014016F252: call    loc_14016F245
 * 000000014016F257: add     rsp, 8
 * 000000014016F25B: call    loc_14016F24E
 * 000000014016F260: add     rsp, 8
 * 000000014016F264: call    loc_14016F257
 * 000000014016F269: add     rsp, 8
 * 000000014016F26D: call    loc_14016F260
 * 000000014016F272: add     rsp, 8
 * 000000014016F276: call    loc_14016F269
 * 000000014016F27B: add     rsp, 8
 * 000000014016F27F: call    loc_14016F272
 * 000000014016F284: add     rsp, 8
 * 000000014016F288: mov     eax, 0DADAh
 * 000000014016F28D: test    edx, 100h
 * 000000014016F293: jz      short loc_14016F29A
 * 000000014016F295: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016F29A: lfence
 * 000000014016F29D: test    byte ptr [r10+3], 80h
 * 000000014016F2A2: jz      short loc_14016F2E6
 * 000000014016F2A4: mov     ecx, 0C0000102h
 * 000000014016F2A9: rdmsr
 * 000000014016F2AB: shl     rdx, 20h
 * 000000014016F2AF: or      rax, rdx
 * 000000014016F2B2: cmp     rax, cs:MmUserProbeAddress
 * 000000014016F2B9: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016F2C1: cmp     [r10+0F0h], rax
 * 000000014016F2C8: jz      short loc_14016F2E6
 * 000000014016F2CA: mov     rdx, [r10+1F0h]
 * 000000014016F2D1: bts     dword ptr [r10+74h], 8
 * 000000014016F2D7: dec     word ptr [r10+1E6h]
 * 000000014016F2DF: mov     [rdx+80h], rax
 * 000000014016F2E6: test    byte ptr [r10+3], 3
 * 000000014016F2EB: mov     word ptr [rbp+80h], 0
 * 000000014016F2F4: jz      short loc_14016F2FB
 * 000000014016F2F6: call    KiSaveDebugRegisterState
 * 000000014016F2FB: cld
 * 000000014016F2FC: stmxcsr dword ptr [rbp-54h]
 * 000000014016F300: ldmxcsr dword ptr gs:180h
 * 000000014016F309: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014016F30D: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014016F311: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014016F315: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014016F319: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014016F31D: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014016F321: test    dword ptr [rbp+0F8h], 200h
 * 000000014016F32B: jz      short loc_14016F32E
 * 000000014016F32D: sti
 * 000000014016F32E: sub     qword ptr [rbp+0E8h], 2
 * 000000014016F336: mov     ecx, 0C000001Dh
 * 000000014016F33B: xor     edx, edx
 * 000000014016F33D: mov     r8, [rbp+0E8h]
 * 000000014016F344: call    KiExceptionDispatch
 * 000000014016F349: nop
 * 000000014016F34A: retn
 */
