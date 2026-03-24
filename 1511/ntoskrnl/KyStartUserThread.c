/*
 * XREFs of KyStartUserThread @ 0x14015B010
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x14015B010 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x14015B3A0 (KxStartUserThread.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x14015B010
 * Reason: Hex-Rays returned no pseudocode for 0x14015B010
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015B010: sub     rsp, 8
 * 000000014015B014: push    rbp
 * 000000014015B015: sub     rsp, 158h
 * 000000014015B01C: lea     rbp, [rsp+80h]
 * 000000014015B024: mov     [rbp+0E8h+var_13D], 1
 * 000000014015B028: mov     [rbp+0E8h+var_138], rax
 * 000000014015B02C: mov     [rbp+0E8h+var_130], rcx
 * 000000014015B030: mov     [rbp+0E8h+var_128], rdx
 * 000000014015B034: mov     [rbp+0E8h+var_120], r8
 * 000000014015B038: mov     [rbp+0E8h+var_118], r9
 * 000000014015B03C: mov     [rbp+0E8h+var_110], r10
 * 000000014015B040: mov     [rbp+0E8h+var_108], r11
 * 000000014015B044: test    [rbp+0E8h+arg_0], 1
 * 000000014015B04B: jnz     loc_14015B1B1
 * 000000014015B051: cmp     byte ptr gs:187h, 0
 * 000000014015B05A: jz      loc_14015B347
 * 000000014015B060: test    byte ptr gs:2EB0h, 1
 * 000000014015B069: jz      loc_14015B347
 * 000000014015B06F: mov     ecx, 48h ; 'H'
 * 000000014015B074: mov     eax, 1
 * 000000014015B079: xor     edx, edx
 * 000000014015B07B: wrmsr
 * 000000014015B07D: test    byte ptr gs:2EB0h, 4
 * 000000014015B086: jnz     loc_14015B347
 * 000000014015B08C: call    loc_14015B19F
 * 000000014015B091: add     rsp, 8
 * 000000014015B095: call    loc_14015B1A8
 * 000000014015B09A: add     rsp, 8
 * 000000014015B09E: call    loc_14015B091
 * 000000014015B0A3: add     rsp, 8
 * 000000014015B0A7: call    loc_14015B09A
 * 000000014015B0AC: add     rsp, 8
 * 000000014015B0B0: call    loc_14015B0A3
 * 000000014015B0B5: add     rsp, 8
 * 000000014015B0B9: call    loc_14015B0AC
 * 000000014015B0BE: add     rsp, 8
 * 000000014015B0C2: call    loc_14015B0B5
 * 000000014015B0C7: add     rsp, 8
 * 000000014015B0CB: call    loc_14015B0BE
 * 000000014015B0D0: add     rsp, 8
 * 000000014015B0D4: call    loc_14015B0C7
 * 000000014015B0D9: add     rsp, 8
 * 000000014015B0DD: call    loc_14015B0D0
 * 000000014015B0E2: add     rsp, 8
 * 000000014015B0E6: call    loc_14015B0D9
 * 000000014015B0EB: add     rsp, 8
 * 000000014015B0EF: call    loc_14015B0E2
 * 000000014015B0F4: add     rsp, 8
 * 000000014015B0F8: call    loc_14015B0EB
 * 000000014015B0FD: add     rsp, 8
 * 000000014015B101: call    loc_14015B0F4
 * 000000014015B106: add     rsp, 8
 * 000000014015B10A: call    loc_14015B0FD
 * 000000014015B10F: add     rsp, 8
 * 000000014015B113: call    loc_14015B106
 * 000000014015B118: add     rsp, 8
 * 000000014015B11C: call    loc_14015B10F
 * 000000014015B121: add     rsp, 8
 * 000000014015B125: call    loc_14015B118
 * 000000014015B12A: add     rsp, 8
 * 000000014015B12E: call    loc_14015B121
 * 000000014015B133: add     rsp, 8
 * 000000014015B137: call    loc_14015B12A
 * 000000014015B13C: add     rsp, 8
 * 000000014015B140: call    loc_14015B133
 * 000000014015B145: add     rsp, 8
 * 000000014015B149: call    loc_14015B13C
 * 000000014015B14E: add     rsp, 8
 * 000000014015B152: call    loc_14015B145
 * 000000014015B157: add     rsp, 8
 * 000000014015B15B: call    loc_14015B14E
 * 000000014015B160: add     rsp, 8
 * 000000014015B164: call    loc_14015B157
 * 000000014015B169: add     rsp, 8
 * 000000014015B16D: call    loc_14015B160
 * 000000014015B172: add     rsp, 8
 * 000000014015B176: call    loc_14015B169
 * 000000014015B17B: add     rsp, 8
 * 000000014015B17F: call    loc_14015B172
 * 000000014015B184: add     rsp, 8
 * 000000014015B188: call    loc_14015B17B
 * 000000014015B18D: add     rsp, 8
 * 000000014015B191: call    loc_14015B184
 * 000000014015B196: add     rsp, 8
 * 000000014015B19A: call    loc_14015B18D
 * 000000014015B19F: add     rsp, 8
 * 000000014015B1A3: call    loc_14015B196
 * 000000014015B1A8: add     rsp, 8
 * 000000014015B1AC: jmp     loc_14015B347
 * 000000014015B1B1: test    cs:KiKvaShadow, 1
 * 000000014015B1B8: jnz     short loc_14015B1BD
 * 000000014015B1BA: swapgs
 * 000000014015B1BD: mov     r10, gs:188h
 * 000000014015B1C6: test    byte ptr gs:2EB0h, 1
 * 000000014015B1CF: jz      loc_14015B332
 * 000000014015B1D5: mov     rcx, gs:188h
 * 000000014015B1DE: mov     rcx, [rcx+220h]
 * 000000014015B1E5: mov     rcx, [rcx+790h]
 * 000000014015B1EC: mov     gs:2EA8h, rcx
 * 000000014015B1F5: mov     ecx, 48h ; 'H'
 * 000000014015B1FA: mov     eax, 1
 * 000000014015B1FF: xor     edx, edx
 * 000000014015B201: wrmsr
 * 000000014015B203: test    byte ptr gs:2EB0h, 4
 * 000000014015B20C: jnz     loc_14015B332
 * 000000014015B212: call    loc_14015B325
 * 000000014015B217: add     rsp, 8
 * 000000014015B21B: call    loc_14015B32E
 * 000000014015B220: add     rsp, 8
 * 000000014015B224: call    loc_14015B217
 * 000000014015B229: add     rsp, 8
 * 000000014015B22D: call    loc_14015B220
 * 000000014015B232: add     rsp, 8
 * 000000014015B236: call    loc_14015B229
 * 000000014015B23B: add     rsp, 8
 * 000000014015B23F: call    loc_14015B232
 * 000000014015B244: add     rsp, 8
 * 000000014015B248: call    loc_14015B23B
 * 000000014015B24D: add     rsp, 8
 * 000000014015B251: call    loc_14015B244
 * 000000014015B256: add     rsp, 8
 * 000000014015B25A: call    loc_14015B24D
 * 000000014015B25F: add     rsp, 8
 * 000000014015B263: call    loc_14015B256
 * 000000014015B268: add     rsp, 8
 * 000000014015B26C: call    loc_14015B25F
 * 000000014015B271: add     rsp, 8
 * 000000014015B275: call    loc_14015B268
 * 000000014015B27A: add     rsp, 8
 * 000000014015B27E: call    loc_14015B271
 * 000000014015B283: add     rsp, 8
 * 000000014015B287: call    loc_14015B27A
 * 000000014015B28C: add     rsp, 8
 * 000000014015B290: call    loc_14015B283
 * 000000014015B295: add     rsp, 8
 * 000000014015B299: call    loc_14015B28C
 * 000000014015B29E: add     rsp, 8
 * 000000014015B2A2: call    loc_14015B295
 * 000000014015B2A7: add     rsp, 8
 * 000000014015B2AB: call    loc_14015B29E
 * 000000014015B2B0: add     rsp, 8
 * 000000014015B2B4: call    loc_14015B2A7
 * 000000014015B2B9: add     rsp, 8
 * 000000014015B2BD: call    loc_14015B2B0
 * 000000014015B2C2: add     rsp, 8
 * 000000014015B2C6: call    loc_14015B2B9
 * 000000014015B2CB: add     rsp, 8
 * 000000014015B2CF: call    loc_14015B2C2
 * 000000014015B2D4: add     rsp, 8
 * 000000014015B2D8: call    loc_14015B2CB
 * 000000014015B2DD: add     rsp, 8
 * 000000014015B2E1: call    loc_14015B2D4
 * 000000014015B2E6: add     rsp, 8
 * 000000014015B2EA: call    loc_14015B2DD
 * 000000014015B2EF: add     rsp, 8
 * 000000014015B2F3: call    loc_14015B2E6
 * 000000014015B2F8: add     rsp, 8
 * 000000014015B2FC: call    loc_14015B2EF
 * 000000014015B301: add     rsp, 8
 * 000000014015B305: call    loc_14015B2F8
 * 000000014015B30A: add     rsp, 8
 * 000000014015B30E: call    loc_14015B301
 * 000000014015B313: add     rsp, 8
 * 000000014015B317: call    loc_14015B30A
 * 000000014015B31C: add     rsp, 8
 * 000000014015B320: call    loc_14015B313
 * 000000014015B325: add     rsp, 8
 * 000000014015B329: call    loc_14015B31C
 * 000000014015B32E: add     rsp, 8
 * 000000014015B332: test    byte ptr [r10+3], 3
 * 000000014015B337: mov     [rbp+0E8h+var_68], 0
 * 000000014015B340: jz      short loc_14015B347
 * 000000014015B342: call    KiSaveDebugRegisterState
 * 000000014015B347: cld
 * 000000014015B348: lfence
 * 000000014015B34B: stmxcsr [rbp+0E8h+var_13C]
 * 000000014015B34F: ldmxcsr dword ptr gs:180h
 * 000000014015B358: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014015B35C: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014015B360: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014015B364: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014015B368: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014015B36C: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014015B370: test    [rbp+0E8h+arg_8], 200h
 * 000000014015B37A: jz      short loc_14015B37D
 * 000000014015B37C: sti
 * 000000014015B37D: call    KxStartUserThread
 * 000000014015B382: nop     word ptr [rax+rax+00000000h]
 * 000000014015B390: nop
 * 000000014015B391: retn
 */
