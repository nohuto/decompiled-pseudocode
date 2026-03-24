/*
 * XREFs of KiDebugServiceTrap @ 0x140193040
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140274C00 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x140193040 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x140193040
 * Reason: Hex-Rays returned no pseudocode for 0x140193040
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140193040: inc     qword ptr [rsp+0]
 * 0000000140193044: sub     rsp, 8
 * 0000000140193048: push    rbp
 * 0000000140193049: sub     rsp, 158h
 * 0000000140193050: lea     rbp, [rsp+80h]
 * 0000000140193058: mov     [rbp+0E8h+var_13D], 1
 * 000000014019305C: mov     [rbp+0E8h+var_138], rax
 * 0000000140193060: mov     [rbp+0E8h+var_130], rcx
 * 0000000140193064: mov     [rbp+0E8h+var_128], rdx
 * 0000000140193068: mov     [rbp+0E8h+var_120], r8
 * 000000014019306C: mov     [rbp+0E8h+var_118], r9
 * 0000000140193070: mov     [rbp+0E8h+var_110], r10
 * 0000000140193074: mov     [rbp+0E8h+var_108], r11
 * 0000000140193078: test    [rbp+0E8h+arg_0], 1
 * 000000014019307F: jnz     short loc_1401930B0
 * 0000000140193081: lfence
 * 0000000140193084: test    word ptr gs:2EB0h, 1
 * 000000014019308F: jnz     short loc_140193099
 * 0000000140193091: lfence
 * 0000000140193094: jmp     loc_1401932D5
 * 0000000140193099: movzx   eax, word ptr gs:2EB4h
 * 00000001401930A2: mov     ecx, 48h ; 'H'
 * 00000001401930A7: xor     edx, edx
 * 00000001401930A9: wrmsr
 * 00000001401930AB: jmp     loc_1401932D5
 * 00000001401930B0: test    cs:KiKvaShadow, 1
 * 00000001401930B7: jnz     short loc_1401930BC
 * 00000001401930B9: swapgs
 * 00000001401930BC: lfence
 * 00000001401930BF: mov     r10, gs:188h
 * 00000001401930C8: mov     rcx, gs:188h
 * 00000001401930D1: mov     rcx, [rcx+220h]
 * 00000001401930D8: mov     rcx, [rcx+7A0h]
 * 00000001401930DF: mov     gs:2EA8h, rcx
 * 00000001401930E8: movzx   eax, word ptr gs:2EB6h
 * 00000001401930F1: cmp     gs:2EB4h, ax
 * 00000001401930FA: jz      short loc_14019310E
 * 00000001401930FC: mov     gs:2EB4h, ax
 * 0000000140193105: mov     ecx, 48h ; 'H'
 * 000000014019310A: xor     edx, edx
 * 000000014019310C: wrmsr
 * 000000014019310E: movzx   edx, word ptr gs:2EB0h
 * 0000000140193117: test    edx, 8
 * 000000014019311D: jz      short loc_140193136
 * 000000014019311F: mov     eax, 1
 * 0000000140193124: xor     edx, edx
 * 0000000140193126: mov     ecx, 49h ; 'I'
 * 000000014019312B: wrmsr
 * 000000014019312D: movzx   edx, word ptr gs:2EB0h
 * 0000000140193136: test    edx, 2
 * 000000014019313C: jz      loc_140193267
 * 0000000140193142: call    loc_140193255
 * 0000000140193147: add     rsp, 8
 * 000000014019314B: call    loc_14019325E
 * 0000000140193150: add     rsp, 8
 * 0000000140193154: call    loc_140193147
 * 0000000140193159: add     rsp, 8
 * 000000014019315D: call    loc_140193150
 * 0000000140193162: add     rsp, 8
 * 0000000140193166: call    loc_140193159
 * 000000014019316B: add     rsp, 8
 * 000000014019316F: call    loc_140193162
 * 0000000140193174: add     rsp, 8
 * 0000000140193178: call    loc_14019316B
 * 000000014019317D: add     rsp, 8
 * 0000000140193181: call    loc_140193174
 * 0000000140193186: add     rsp, 8
 * 000000014019318A: call    loc_14019317D
 * 000000014019318F: add     rsp, 8
 * 0000000140193193: call    loc_140193186
 * 0000000140193198: add     rsp, 8
 * 000000014019319C: call    loc_14019318F
 * 00000001401931A1: add     rsp, 8
 * 00000001401931A5: call    loc_140193198
 * 00000001401931AA: add     rsp, 8
 * 00000001401931AE: call    loc_1401931A1
 * 00000001401931B3: add     rsp, 8
 * 00000001401931B7: call    loc_1401931AA
 * 00000001401931BC: add     rsp, 8
 * 00000001401931C0: call    loc_1401931B3
 * 00000001401931C5: add     rsp, 8
 * 00000001401931C9: call    loc_1401931BC
 * 00000001401931CE: add     rsp, 8
 * 00000001401931D2: call    loc_1401931C5
 * 00000001401931D7: add     rsp, 8
 * 00000001401931DB: call    loc_1401931CE
 * 00000001401931E0: add     rsp, 8
 * 00000001401931E4: call    loc_1401931D7
 * 00000001401931E9: add     rsp, 8
 * 00000001401931ED: call    loc_1401931E0
 * 00000001401931F2: add     rsp, 8
 * 00000001401931F6: call    loc_1401931E9
 * 00000001401931FB: add     rsp, 8
 * 00000001401931FF: call    loc_1401931F2
 * 0000000140193204: add     rsp, 8
 * 0000000140193208: call    loc_1401931FB
 * 000000014019320D: add     rsp, 8
 * 0000000140193211: call    loc_140193204
 * 0000000140193216: add     rsp, 8
 * 000000014019321A: call    loc_14019320D
 * 000000014019321F: add     rsp, 8
 * 0000000140193223: call    loc_140193216
 * 0000000140193228: add     rsp, 8
 * 000000014019322C: call    loc_14019321F
 * 0000000140193231: add     rsp, 8
 * 0000000140193235: call    loc_140193228
 * 000000014019323A: add     rsp, 8
 * 000000014019323E: call    loc_140193231
 * 0000000140193243: add     rsp, 8
 * 0000000140193247: call    loc_14019323A
 * 000000014019324C: add     rsp, 8
 * 0000000140193250: call    loc_140193243
 * 0000000140193255: add     rsp, 8
 * 0000000140193259: call    loc_14019324C
 * 000000014019325E: add     rsp, 8
 * 0000000140193262: mov     eax, 0DADAh
 * 0000000140193267: test    edx, 100h
 * 000000014019326D: jz      short loc_140193274
 * 000000014019326F: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140193274: lfence
 * 0000000140193277: test    byte ptr [r10+3], 80h
 * 000000014019327C: jz      short loc_1401932C0
 * 000000014019327E: mov     ecx, 0C0000102h
 * 0000000140193283: rdmsr
 * 0000000140193285: shl     rdx, 20h
 * 0000000140193289: or      rax, rdx
 * 000000014019328C: cmp     rax, cs:MmUserProbeAddress
 * 0000000140193293: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014019329B: cmp     [r10+0F0h], rax
 * 00000001401932A2: jz      short loc_1401932C0
 * 00000001401932A4: mov     rdx, [r10+1F0h]
 * 00000001401932AB: bts     dword ptr [r10+74h], 8
 * 00000001401932B1: dec     word ptr [r10+1E6h]
 * 00000001401932B9: mov     [rdx+80h], rax
 * 00000001401932C0: test    byte ptr [r10+3], 3
 * 00000001401932C5: mov     [rbp+0E8h+var_68], 0
 * 00000001401932CE: jz      short loc_1401932D5
 * 00000001401932D0: call    KiSaveDebugRegisterState
 * 00000001401932D5: cld
 * 00000001401932D6: stmxcsr [rbp+0E8h+var_13C]
 * 00000001401932DA: ldmxcsr dword ptr gs:180h
 * 00000001401932E3: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001401932E7: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001401932EB: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001401932EF: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001401932F3: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001401932F7: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001401932FB: test    [rbp+0E8h+arg_8], 200h
 * 0000000140193306: jz      short loc_140193309
 * 0000000140193308: sti
 * 0000000140193309: mov     ecx, 80000003h
 * 000000014019330E: mov     edx, 1
 * 0000000140193313: mov     r9, [rbp+0E8h+var_138]
 * 0000000140193317: mov     r8, [rbp+0E8h]
 * 000000014019331E: call    KiExceptionDispatch
 * 0000000140193323: nop
 * 0000000140193324: retn
 */
