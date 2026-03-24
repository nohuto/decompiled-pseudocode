/*
 * XREFs of KiRaiseAssertion @ 0x14016E300
 * Callers:
 *     KiRaiseAssertionShadow @ 0x14023FB80 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x14016E300 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x14016E300
 * Reason: Hex-Rays returned no pseudocode for 0x14016E300
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016E300: sub     qword ptr [rsp+0], 2
 * 000000014016E305: sub     rsp, 8
 * 000000014016E309: push    rbp
 * 000000014016E30A: sub     rsp, 158h
 * 000000014016E311: lea     rbp, [rsp+80h]
 * 000000014016E319: mov     [rbp+0E8h+var_13D], 1
 * 000000014016E31D: mov     [rbp+0E8h+var_138], rax
 * 000000014016E321: mov     [rbp+0E8h+var_130], rcx
 * 000000014016E325: mov     [rbp+0E8h+var_128], rdx
 * 000000014016E329: mov     [rbp+0E8h+var_120], r8
 * 000000014016E32D: mov     [rbp+0E8h+var_118], r9
 * 000000014016E331: mov     [rbp+0E8h+var_110], r10
 * 000000014016E335: mov     [rbp+0E8h+var_108], r11
 * 000000014016E339: test    [rbp+0E8h+arg_0], 1
 * 000000014016E340: jnz     short loc_14016E371
 * 000000014016E342: lfence
 * 000000014016E345: test    word ptr gs:2EB8h, 1
 * 000000014016E350: jnz     short loc_14016E35A
 * 000000014016E352: lfence
 * 000000014016E355: jmp     loc_14016E596
 * 000000014016E35A: movzx   eax, word ptr gs:2EBCh
 * 000000014016E363: mov     ecx, 48h ; 'H'
 * 000000014016E368: xor     edx, edx
 * 000000014016E36A: wrmsr
 * 000000014016E36C: jmp     loc_14016E596
 * 000000014016E371: test    cs:KiKvaShadow, 1
 * 000000014016E378: jnz     short loc_14016E37D
 * 000000014016E37A: swapgs
 * 000000014016E37D: lfence
 * 000000014016E380: mov     r10, gs:188h
 * 000000014016E389: mov     rcx, gs:188h
 * 000000014016E392: mov     rcx, [rcx+220h]
 * 000000014016E399: mov     rcx, [rcx+7B8h]
 * 000000014016E3A0: mov     gs:2EB0h, rcx
 * 000000014016E3A9: movzx   eax, word ptr gs:2EBEh
 * 000000014016E3B2: cmp     gs:2EBCh, ax
 * 000000014016E3BB: jz      short loc_14016E3CF
 * 000000014016E3BD: mov     gs:2EBCh, ax
 * 000000014016E3C6: mov     ecx, 48h ; 'H'
 * 000000014016E3CB: xor     edx, edx
 * 000000014016E3CD: wrmsr
 * 000000014016E3CF: movzx   edx, word ptr gs:2EB8h
 * 000000014016E3D8: test    edx, 8
 * 000000014016E3DE: jz      short loc_14016E3F7
 * 000000014016E3E0: mov     eax, 1
 * 000000014016E3E5: xor     edx, edx
 * 000000014016E3E7: mov     ecx, 49h ; 'I'
 * 000000014016E3EC: wrmsr
 * 000000014016E3EE: movzx   edx, word ptr gs:2EB8h
 * 000000014016E3F7: test    edx, 2
 * 000000014016E3FD: jz      loc_14016E528
 * 000000014016E403: call    loc_14016E516
 * 000000014016E408: add     rsp, 8
 * 000000014016E40C: call    loc_14016E51F
 * 000000014016E411: add     rsp, 8
 * 000000014016E415: call    loc_14016E408
 * 000000014016E41A: add     rsp, 8
 * 000000014016E41E: call    loc_14016E411
 * 000000014016E423: add     rsp, 8
 * 000000014016E427: call    loc_14016E41A
 * 000000014016E42C: add     rsp, 8
 * 000000014016E430: call    loc_14016E423
 * 000000014016E435: add     rsp, 8
 * 000000014016E439: call    loc_14016E42C
 * 000000014016E43E: add     rsp, 8
 * 000000014016E442: call    loc_14016E435
 * 000000014016E447: add     rsp, 8
 * 000000014016E44B: call    loc_14016E43E
 * 000000014016E450: add     rsp, 8
 * 000000014016E454: call    loc_14016E447
 * 000000014016E459: add     rsp, 8
 * 000000014016E45D: call    loc_14016E450
 * 000000014016E462: add     rsp, 8
 * 000000014016E466: call    loc_14016E459
 * 000000014016E46B: add     rsp, 8
 * 000000014016E46F: call    loc_14016E462
 * 000000014016E474: add     rsp, 8
 * 000000014016E478: call    loc_14016E46B
 * 000000014016E47D: add     rsp, 8
 * 000000014016E481: call    loc_14016E474
 * 000000014016E486: add     rsp, 8
 * 000000014016E48A: call    loc_14016E47D
 * 000000014016E48F: add     rsp, 8
 * 000000014016E493: call    loc_14016E486
 * 000000014016E498: add     rsp, 8
 * 000000014016E49C: call    loc_14016E48F
 * 000000014016E4A1: add     rsp, 8
 * 000000014016E4A5: call    loc_14016E498
 * 000000014016E4AA: add     rsp, 8
 * 000000014016E4AE: call    loc_14016E4A1
 * 000000014016E4B3: add     rsp, 8
 * 000000014016E4B7: call    loc_14016E4AA
 * 000000014016E4BC: add     rsp, 8
 * 000000014016E4C0: call    loc_14016E4B3
 * 000000014016E4C5: add     rsp, 8
 * 000000014016E4C9: call    loc_14016E4BC
 * 000000014016E4CE: add     rsp, 8
 * 000000014016E4D2: call    loc_14016E4C5
 * 000000014016E4D7: add     rsp, 8
 * 000000014016E4DB: call    loc_14016E4CE
 * 000000014016E4E0: add     rsp, 8
 * 000000014016E4E4: call    loc_14016E4D7
 * 000000014016E4E9: add     rsp, 8
 * 000000014016E4ED: call    loc_14016E4E0
 * 000000014016E4F2: add     rsp, 8
 * 000000014016E4F6: call    loc_14016E4E9
 * 000000014016E4FB: add     rsp, 8
 * 000000014016E4FF: call    loc_14016E4F2
 * 000000014016E504: add     rsp, 8
 * 000000014016E508: call    loc_14016E4FB
 * 000000014016E50D: add     rsp, 8
 * 000000014016E511: call    loc_14016E504
 * 000000014016E516: add     rsp, 8
 * 000000014016E51A: call    loc_14016E50D
 * 000000014016E51F: add     rsp, 8
 * 000000014016E523: mov     eax, 0DADAh
 * 000000014016E528: test    edx, 100h
 * 000000014016E52E: jz      short loc_14016E535
 * 000000014016E530: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016E535: lfence
 * 000000014016E538: test    byte ptr [r10+3], 80h
 * 000000014016E53D: jz      short loc_14016E581
 * 000000014016E53F: mov     ecx, 0C0000102h
 * 000000014016E544: rdmsr
 * 000000014016E546: shl     rdx, 20h
 * 000000014016E54A: or      rax, rdx
 * 000000014016E54D: cmp     rax, cs:MmUserProbeAddress
 * 000000014016E554: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016E55C: cmp     [r10+0F0h], rax
 * 000000014016E563: jz      short loc_14016E581
 * 000000014016E565: mov     rdx, [r10+1F0h]
 * 000000014016E56C: bts     dword ptr [r10+74h], 8
 * 000000014016E572: dec     word ptr [r10+1E6h]
 * 000000014016E57A: mov     [rdx+80h], rax
 * 000000014016E581: test    byte ptr [r10+3], 3
 * 000000014016E586: mov     [rbp+0E8h+var_68], 0
 * 000000014016E58F: jz      short loc_14016E596
 * 000000014016E591: call    KiSaveDebugRegisterState
 * 000000014016E596: cld
 * 000000014016E597: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016E59B: ldmxcsr dword ptr gs:180h
 * 000000014016E5A4: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016E5A8: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016E5AC: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014016E5B0: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014016E5B4: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016E5B8: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016E5BC: test    [rbp+0E8h+arg_8], 200h
 * 000000014016E5C6: jz      short loc_14016E5C9
 * 000000014016E5C8: sti
 * 000000014016E5C9: mov     ecx, 0C0000420h
 * 000000014016E5CE: xor     edx, edx
 * 000000014016E5D0: mov     r8, [rbp+0E8h]
 * 000000014016E5D7: call    KiExceptionDispatch
 * 000000014016E5DC: nop
 * 000000014016E5DD: retn
 */
