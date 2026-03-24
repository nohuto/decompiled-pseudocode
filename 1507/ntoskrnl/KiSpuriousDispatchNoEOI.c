/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x140184F10
 * Callers:
 *     <none>
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140102C70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSpuriousDispatchNoEOI @ 0x140184F10 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x140184F10
 * Reason: Hex-Rays returned no pseudocode for 0x140184F10
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140184F10: mov     ecx, 0Fh
 * 0000000140184F15: mov     rax, cr8
 * 0000000140184F19: mov     cr8, rcx
 * 0000000140184F1D: mov     [rbp-57h], al
 * 0000000140184F20: mov     rcx, gs:20h
 * 0000000140184F29: inc     byte ptr [rcx+20h]
 * 0000000140184F2C: cmp     byte ptr [rcx+20h], 1
 * 0000000140184F30: jnz     short loc_140184F82
 * 0000000140184F32: rdtsc
 * 0000000140184F34: shl     rdx, 20h
 * 0000000140184F38: or      rax, rdx
 * 0000000140184F3B: mov     r8, [rcx+8]
 * 0000000140184F3F: sub     rax, [rcx+5B38h]
 * 0000000140184F46: add     [r8+48h], rax
 * 0000000140184F4A: mov     edx, [r8+50h]
 * 0000000140184F4E: add     [rcx+5B38h], rax
 * 0000000140184F55: add     rdx, rax
 * 0000000140184F58: mov     ecx, edx
 * 0000000140184F5A: shr     rdx, 20h
 * 0000000140184F5E: jz      short loc_140184F63
 * 0000000140184F60: or      ecx, 0FFFFFFFFh
 * 0000000140184F63: mov     [r8+50h], ecx
 * 0000000140184F67: test    byte ptr [r8+2], 3Eh
 * 0000000140184F6C: jz      short loc_140184F82
 * 0000000140184F6E: mov     rdx, r8
 * 0000000140184F71: mov     r8, rax
 * 0000000140184F74: mov     rcx, gs:20h
 * 0000000140184F7D: call    KiEndThreadAccountingPeriod
 * 0000000140184F82: sti
 * 0000000140184F83: inc     dword ptr [rsi+74h]
 * 0000000140184F86: cli
 * 0000000140184F87: mov     rcx, gs:20h
 * 0000000140184F90: cmp     byte ptr [rcx+20h], 1
 * 0000000140184F94: ja      short loc_14018500A
 * 0000000140184F96: rdtsc
 * 0000000140184F98: shl     rdx, 20h
 * 0000000140184F9C: or      rax, rdx
 * 0000000140184F9F: sub     rax, [rcx+5B38h]
 * 0000000140184FA6: add     [rcx+5BF8h], rax
 * 0000000140184FAD: add     [rcx+5B38h], rax
 * 0000000140184FB4: mov     r8, rax
 * 0000000140184FB7: mov     rax, [rcx+8]
 * 0000000140184FBB: test    byte ptr [rax+2], 32h
 * 0000000140184FBF: jz      short loc_140184FD4
 * 0000000140184FC1: xor     edx, edx
 * 0000000140184FC3: call    KiBeginThreadAccountingPeriod
 * 0000000140184FC8: mov     rcx, gs:20h
 * 0000000140184FD1: inc     byte ptr [rcx+20h]
 * 0000000140184FD4: mov     dl, [rcx+6]
 * 0000000140184FD7: and     byte ptr [rcx+6], 0
 * 0000000140184FDB: cmp     byte ptr [rcx+7], 0
 * 0000000140184FDF: jnz     short loc_14018500A
 * 0000000140184FE1: test    dl, dl
 * 0000000140184FE3: jz      short loc_14018500A
 * 0000000140184FE5: cmp     byte ptr [rbp-57h], 2
 * 0000000140184FE9: jnb     short loc_140184FF6
 * 0000000140184FEB: and     byte ptr [rcx+20h], 0
 * 0000000140184FEF: call    KiDpcInterruptBypass
 * 0000000140184FF4: jmp     short loc_14018500D
 * 0000000140184FF6: mov     ecx, 2
 * 0000000140184FFB: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140185001: mov     rcx, gs:20h
 * 000000014018500A: dec     byte ptr [rcx+20h]
 * 000000014018500D: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140185011: mov     cr8, rcx
 * 0000000140185015: mov     rsi, [rbp+0D0h]
 * 000000014018501C: cli
 * 000000014018501D: test    byte ptr [rbp+0F0h], 1
 * 0000000140185024: jz      loc_140185287
 * 000000014018502A: mov     rcx, gs:188h
 * 0000000140185033: cmp     byte ptr [rcx+0C2h], 0
 * 000000014018503A: jz      short loc_140185055
 * 000000014018503C: mov     ecx, 1
 * 0000000140185041: mov     cr8, rcx
 * 0000000140185045: sti
 * 0000000140185046: call    KiInitiateUserApc
 * 000000014018504B: cli
 * 000000014018504C: mov     ecx, 0
 * 0000000140185051: mov     cr8, rcx
 * 0000000140185055: mov     rcx, gs:188h
 * 000000014018505E: test    dword ptr [rcx], 40010000h
 * 0000000140185064: jz      short loc_14018507A
 * 0000000140185066: test    byte ptr [rcx+2], 1
 * 000000014018506A: jz      short loc_14018507A
 * 000000014018506C: call    KiCopyCounters
 * 0000000140185071: mov     rcx, gs:188h
 * 000000014018507A: ldmxcsr dword ptr [rbp-54h]
 * 000000014018507E: cmp     word ptr [rbp+80h], 0
 * 0000000140185086: jz      short loc_14018508D
 * 0000000140185088: call    KiRestoreDebugRegisterState
 * 000000014018508D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140185091: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140185095: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140185099: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014018509D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401850A1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401850A5: mov     r11, [rbp-20h]
 * 00000001401850A9: mov     r10, [rbp-28h]
 * 00000001401850AD: mov     r9, [rbp-30h]
 * 00000001401850B1: mov     r8, [rbp-38h]
 * 00000001401850B5: movzx   eax, word ptr gs:2EBAh
 * 00000001401850BE: cmp     gs:2EB4h, ax
 * 00000001401850C7: jz      short loc_1401850DB
 * 00000001401850C9: mov     gs:2EB4h, ax
 * 00000001401850D2: mov     ecx, 48h ; 'H'
 * 00000001401850D7: xor     edx, edx
 * 00000001401850D9: wrmsr
 * 00000001401850DB: btr     word ptr gs:2EB0h, 2
 * 00000001401850E6: jnb     short loc_1401850F6
 * 00000001401850E8: mov     eax, 1
 * 00000001401850ED: xor     edx, edx
 * 00000001401850EF: mov     ecx, 49h ; 'I'
 * 00000001401850F4: wrmsr
 * 00000001401850F6: btr     word ptr gs:2EB0h, 5
 * 0000000140185101: jnb     loc_14018522C
 * 0000000140185107: call    loc_14018521A
 * 000000014018510C: add     rsp, 8
 * 0000000140185110: call    loc_140185223
 * 0000000140185115: add     rsp, 8
 * 0000000140185119: call    loc_14018510C
 * 000000014018511E: add     rsp, 8
 * 0000000140185122: call    loc_140185115
 * 0000000140185127: add     rsp, 8
 * 000000014018512B: call    loc_14018511E
 * 0000000140185130: add     rsp, 8
 * 0000000140185134: call    loc_140185127
 * 0000000140185139: add     rsp, 8
 * 000000014018513D: call    loc_140185130
 * 0000000140185142: add     rsp, 8
 * 0000000140185146: call    loc_140185139
 * 000000014018514B: add     rsp, 8
 * 000000014018514F: call    loc_140185142
 * 0000000140185154: add     rsp, 8
 * 0000000140185158: call    loc_14018514B
 * 000000014018515D: add     rsp, 8
 * 0000000140185161: call    loc_140185154
 * 0000000140185166: add     rsp, 8
 * 000000014018516A: call    loc_14018515D
 * 000000014018516F: add     rsp, 8
 * 0000000140185173: call    loc_140185166
 * 0000000140185178: add     rsp, 8
 * 000000014018517C: call    loc_14018516F
 * 0000000140185181: add     rsp, 8
 * 0000000140185185: call    loc_140185178
 * 000000014018518A: add     rsp, 8
 * 000000014018518E: call    loc_140185181
 * 0000000140185193: add     rsp, 8
 * 0000000140185197: call    loc_14018518A
 * 000000014018519C: add     rsp, 8
 * 00000001401851A0: call    loc_140185193
 * 00000001401851A5: add     rsp, 8
 * 00000001401851A9: call    loc_14018519C
 * 00000001401851AE: add     rsp, 8
 * 00000001401851B2: call    loc_1401851A5
 * 00000001401851B7: add     rsp, 8
 * 00000001401851BB: call    loc_1401851AE
 * 00000001401851C0: add     rsp, 8
 * 00000001401851C4: call    loc_1401851B7
 * 00000001401851C9: add     rsp, 8
 * 00000001401851CD: call    loc_1401851C0
 * 00000001401851D2: add     rsp, 8
 * 00000001401851D6: call    loc_1401851C9
 * 00000001401851DB: add     rsp, 8
 * 00000001401851DF: call    loc_1401851D2
 * 00000001401851E4: add     rsp, 8
 * 00000001401851E8: call    loc_1401851DB
 * 00000001401851ED: add     rsp, 8
 * 00000001401851F1: call    loc_1401851E4
 * 00000001401851F6: add     rsp, 8
 * 00000001401851FA: call    loc_1401851ED
 * 00000001401851FF: add     rsp, 8
 * 0000000140185203: call    loc_1401851F6
 * 0000000140185208: add     rsp, 8
 * 000000014018520C: call    loc_1401851FF
 * 0000000140185211: add     rsp, 8
 * 0000000140185215: call    loc_140185208
 * 000000014018521A: add     rsp, 8
 * 000000014018521E: call    loc_140185211
 * 0000000140185223: add     rsp, 8
 * 0000000140185227: mov     eax, 0DADAh
 * 000000014018522C: test    word ptr gs:2EB0h, 40h
 * 0000000140185237: jz      short loc_140185245
 * 0000000140185239: xor     eax, eax
 * 000000014018523B: xor     edx, edx
 * 000000014018523D: mov     ecx, 1
 * 0000000140185242: div     rcx
 * 0000000140185245: mov     rdx, [rbp-40h]
 * 0000000140185249: mov     rcx, [rbp-48h]
 * 000000014018524D: mov     rax, [rbp-50h]
 * 0000000140185251: mov     rsp, rbp
 * 0000000140185254: mov     rbp, [rbp+0D8h]
 * 000000014018525B: add     rsp, 0E8h
 * 0000000140185262: test    cs:KiKvaShadow, 1
 * 0000000140185269: jz      short loc_140185270
 * 000000014018526B: jmp     KiKernelExit
 * 0000000140185270: test    word ptr gs:2EB0h, 80h
 * 000000014018527B: jz      short loc_140185282
 * 000000014018527D: verw    [rsp-1E8h+arg_200]
 * 0000000140185282: swapgs
 * 0000000140185285: iretq
 * 0000000140185287: ldmxcsr dword ptr [rbp-54h]
 * 000000014018528B: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014018528F: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140185293: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140185297: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014018529B: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014018529F: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401852A3: mov     r11, [rbp-20h]
 * 00000001401852A7: mov     r10, [rbp-28h]
 * 00000001401852AB: mov     r9, [rbp-30h]
 * 00000001401852AF: mov     r8, [rbp-38h]
 * 00000001401852B3: mov     rdx, [rbp-40h]
 * 00000001401852B7: mov     rcx, [rbp-48h]
 * 00000001401852BB: mov     rax, [rbp-50h]
 * 00000001401852BF: mov     rsp, rbp
 * 00000001401852C2: mov     rbp, [rbp+0D8h]
 * 00000001401852C9: add     rsp, 0E8h
 * 00000001401852D0: iretq
 */
