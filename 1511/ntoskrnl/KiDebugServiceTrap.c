/*
 * XREFs of KiDebugServiceTrap @ 0x1401648C0
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140224C00 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x1401648C0 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x1401648C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401648C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401648C0: inc     qword ptr [rsp+0]
 * 00000001401648C4: sub     rsp, 8
 * 00000001401648C8: push    rbp
 * 00000001401648C9: sub     rsp, 158h
 * 00000001401648D0: lea     rbp, [rsp+80h]
 * 00000001401648D8: mov     [rbp+0E8h+var_13D], 1
 * 00000001401648DC: mov     [rbp+0E8h+var_138], rax
 * 00000001401648E0: mov     [rbp+0E8h+var_130], rcx
 * 00000001401648E4: mov     [rbp+0E8h+var_128], rdx
 * 00000001401648E8: mov     [rbp+0E8h+var_120], r8
 * 00000001401648EC: mov     [rbp+0E8h+var_118], r9
 * 00000001401648F0: mov     [rbp+0E8h+var_110], r10
 * 00000001401648F4: mov     [rbp+0E8h+var_108], r11
 * 00000001401648F8: test    [rbp+0E8h+arg_0], 1
 * 00000001401648FF: jnz     loc_140164A65
 * 0000000140164905: cmp     byte ptr gs:187h, 0
 * 000000014016490E: jz      loc_140164C35
 * 0000000140164914: test    byte ptr gs:2EB0h, 1
 * 000000014016491D: jz      loc_140164C35
 * 0000000140164923: mov     ecx, 48h ; 'H'
 * 0000000140164928: mov     eax, 1
 * 000000014016492D: xor     edx, edx
 * 000000014016492F: wrmsr
 * 0000000140164931: test    byte ptr gs:2EB0h, 4
 * 000000014016493A: jnz     loc_140164C35
 * 0000000140164940: call    loc_140164A53
 * 0000000140164945: add     rsp, 8
 * 0000000140164949: call    loc_140164A5C
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
 * 000000014016497F: call    loc_140164972
 * 0000000140164984: add     rsp, 8
 * 0000000140164988: call    loc_14016497B
 * 000000014016498D: add     rsp, 8
 * 0000000140164991: call    loc_140164984
 * 0000000140164996: add     rsp, 8
 * 000000014016499A: call    loc_14016498D
 * 000000014016499F: add     rsp, 8
 * 00000001401649A3: call    loc_140164996
 * 00000001401649A8: add     rsp, 8
 * 00000001401649AC: call    loc_14016499F
 * 00000001401649B1: add     rsp, 8
 * 00000001401649B5: call    loc_1401649A8
 * 00000001401649BA: add     rsp, 8
 * 00000001401649BE: call    loc_1401649B1
 * 00000001401649C3: add     rsp, 8
 * 00000001401649C7: call    loc_1401649BA
 * 00000001401649CC: add     rsp, 8
 * 00000001401649D0: call    loc_1401649C3
 * 00000001401649D5: add     rsp, 8
 * 00000001401649D9: call    loc_1401649CC
 * 00000001401649DE: add     rsp, 8
 * 00000001401649E2: call    loc_1401649D5
 * 00000001401649E7: add     rsp, 8
 * 00000001401649EB: call    loc_1401649DE
 * 00000001401649F0: add     rsp, 8
 * 00000001401649F4: call    loc_1401649E7
 * 00000001401649F9: add     rsp, 8
 * 00000001401649FD: call    loc_1401649F0
 * 0000000140164A02: add     rsp, 8
 * 0000000140164A06: call    loc_1401649F9
 * 0000000140164A0B: add     rsp, 8
 * 0000000140164A0F: call    loc_140164A02
 * 0000000140164A14: add     rsp, 8
 * 0000000140164A18: call    loc_140164A0B
 * 0000000140164A1D: add     rsp, 8
 * 0000000140164A21: call    loc_140164A14
 * 0000000140164A26: add     rsp, 8
 * 0000000140164A2A: call    loc_140164A1D
 * 0000000140164A2F: add     rsp, 8
 * 0000000140164A33: call    loc_140164A26
 * 0000000140164A38: add     rsp, 8
 * 0000000140164A3C: call    loc_140164A2F
 * 0000000140164A41: add     rsp, 8
 * 0000000140164A45: call    loc_140164A38
 * 0000000140164A4A: add     rsp, 8
 * 0000000140164A4E: call    loc_140164A41
 * 0000000140164A53: add     rsp, 8
 * 0000000140164A57: call    loc_140164A4A
 * 0000000140164A5C: add     rsp, 8
 * 0000000140164A60: jmp     loc_140164C35
 * 0000000140164A65: test    cs:KiKvaShadow, 1
 * 0000000140164A6C: jnz     short loc_140164A71
 * 0000000140164A6E: swapgs
 * 0000000140164A71: mov     r10, gs:188h
 * 0000000140164A7A: test    byte ptr gs:2EB0h, 1
 * 0000000140164A83: jz      loc_140164BE6
 * 0000000140164A89: mov     rcx, gs:188h
 * 0000000140164A92: mov     rcx, [rcx+220h]
 * 0000000140164A99: mov     rcx, [rcx+790h]
 * 0000000140164AA0: mov     gs:2EA8h, rcx
 * 0000000140164AA9: mov     ecx, 48h ; 'H'
 * 0000000140164AAE: mov     eax, 1
 * 0000000140164AB3: xor     edx, edx
 * 0000000140164AB5: wrmsr
 * 0000000140164AB7: test    byte ptr gs:2EB0h, 4
 * 0000000140164AC0: jnz     loc_140164BE6
 * 0000000140164AC6: call    loc_140164BD9
 * 0000000140164ACB: add     rsp, 8
 * 0000000140164ACF: call    loc_140164BE2
 * 0000000140164AD4: add     rsp, 8
 * 0000000140164AD8: call    loc_140164ACB
 * 0000000140164ADD: add     rsp, 8
 * 0000000140164AE1: call    loc_140164AD4
 * 0000000140164AE6: add     rsp, 8
 * 0000000140164AEA: call    loc_140164ADD
 * 0000000140164AEF: add     rsp, 8
 * 0000000140164AF3: call    loc_140164AE6
 * 0000000140164AF8: add     rsp, 8
 * 0000000140164AFC: call    loc_140164AEF
 * 0000000140164B01: add     rsp, 8
 * 0000000140164B05: call    loc_140164AF8
 * 0000000140164B0A: add     rsp, 8
 * 0000000140164B0E: call    loc_140164B01
 * 0000000140164B13: add     rsp, 8
 * 0000000140164B17: call    loc_140164B0A
 * 0000000140164B1C: add     rsp, 8
 * 0000000140164B20: call    loc_140164B13
 * 0000000140164B25: add     rsp, 8
 * 0000000140164B29: call    loc_140164B1C
 * 0000000140164B2E: add     rsp, 8
 * 0000000140164B32: call    loc_140164B25
 * 0000000140164B37: add     rsp, 8
 * 0000000140164B3B: call    loc_140164B2E
 * 0000000140164B40: add     rsp, 8
 * 0000000140164B44: call    loc_140164B37
 * 0000000140164B49: add     rsp, 8
 * 0000000140164B4D: call    loc_140164B40
 * 0000000140164B52: add     rsp, 8
 * 0000000140164B56: call    loc_140164B49
 * 0000000140164B5B: add     rsp, 8
 * 0000000140164B5F: call    loc_140164B52
 * 0000000140164B64: add     rsp, 8
 * 0000000140164B68: call    loc_140164B5B
 * 0000000140164B6D: add     rsp, 8
 * 0000000140164B71: call    loc_140164B64
 * 0000000140164B76: add     rsp, 8
 * 0000000140164B7A: call    loc_140164B6D
 * 0000000140164B7F: add     rsp, 8
 * 0000000140164B83: call    loc_140164B76
 * 0000000140164B88: add     rsp, 8
 * 0000000140164B8C: call    loc_140164B7F
 * 0000000140164B91: add     rsp, 8
 * 0000000140164B95: call    loc_140164B88
 * 0000000140164B9A: add     rsp, 8
 * 0000000140164B9E: call    loc_140164B91
 * 0000000140164BA3: add     rsp, 8
 * 0000000140164BA7: call    loc_140164B9A
 * 0000000140164BAC: add     rsp, 8
 * 0000000140164BB0: call    loc_140164BA3
 * 0000000140164BB5: add     rsp, 8
 * 0000000140164BB9: call    loc_140164BAC
 * 0000000140164BBE: add     rsp, 8
 * 0000000140164BC2: call    loc_140164BB5
 * 0000000140164BC7: add     rsp, 8
 * 0000000140164BCB: call    loc_140164BBE
 * 0000000140164BD0: add     rsp, 8
 * 0000000140164BD4: call    loc_140164BC7
 * 0000000140164BD9: add     rsp, 8
 * 0000000140164BDD: call    loc_140164BD0
 * 0000000140164BE2: add     rsp, 8
 * 0000000140164BE6: test    byte ptr [r10+3], 80h
 * 0000000140164BEB: jz      short loc_140164C20
 * 0000000140164BED: mov     ecx, 0C0000102h
 * 0000000140164BF2: rdmsr
 * 0000000140164BF4: shl     rdx, 20h
 * 0000000140164BF8: or      rax, rdx
 * 0000000140164BFB: cmp     [r10+0F0h], rax
 * 0000000140164C02: jz      short loc_140164C20
 * 0000000140164C04: mov     rdx, [r10+1F0h]
 * 0000000140164C0B: bts     dword ptr [r10+74h], 8
 * 0000000140164C11: dec     word ptr [r10+1E6h]
 * 0000000140164C19: mov     [rdx+80h], rax
 * 0000000140164C20: test    byte ptr [r10+3], 3
 * 0000000140164C25: mov     [rbp+0E8h+var_68], 0
 * 0000000140164C2E: jz      short loc_140164C35
 * 0000000140164C30: call    KiSaveDebugRegisterState
 * 0000000140164C35: cld
 * 0000000140164C36: lfence
 * 0000000140164C39: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140164C3D: ldmxcsr dword ptr gs:180h
 * 0000000140164C46: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140164C4A: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140164C4E: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140164C52: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140164C56: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140164C5A: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140164C5E: test    [rbp+0E8h+arg_8], 200h
 * 0000000140164C68: jz      short loc_140164C6B
 * 0000000140164C6A: sti
 * 0000000140164C6B: mov     ecx, 80000003h
 * 0000000140164C70: mov     edx, 1
 * 0000000140164C75: mov     r9, [rbp+0E8h+var_138]
 * 0000000140164C79: mov     r8, [rbp+0E8h]
 * 0000000140164C80: call    KiExceptionDispatch
 * 0000000140164C85: nop
 * 0000000140164C86: retn
 */
