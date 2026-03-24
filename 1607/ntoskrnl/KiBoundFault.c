/*
 * XREFs of KiBoundFault @ 0x14016A2C0
 * Callers:
 *     KiBoundFaultShadow @ 0x14023F280 (KiBoundFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x14016A2C0 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x14016FC00 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140170080 (KiFastFailDispatch.c)
 *     KiUmsTrapEntry @ 0x1401708C0 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140170D40 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiHandleBound @ 0x1401D2BD8 (KiHandleBound.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x14016A2C0
 * Reason: Hex-Rays returned no pseudocode for 0x14016A2C0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016A2C0: sub     rsp, 8
 * 000000014016A2C4: push    rbp
 * 000000014016A2C5: sub     rsp, 158h
 * 000000014016A2CC: lea     rbp, [rsp+80h]
 * 000000014016A2D4: mov     [rbp+0E8h+var_13D], 1
 * 000000014016A2D8: mov     [rbp+0E8h+var_138], rax
 * 000000014016A2DC: mov     [rbp+0E8h+var_130], rcx
 * 000000014016A2E0: mov     [rbp+0E8h+var_128], rdx
 * 000000014016A2E4: mov     [rbp+0E8h+var_120], r8
 * 000000014016A2E8: mov     [rbp+0E8h+var_118], r9
 * 000000014016A2EC: mov     [rbp+0E8h+var_110], r10
 * 000000014016A2F0: mov     [rbp+0E8h+var_108], r11
 * 000000014016A2F4: test    [rbp+0E8h+arg_0], 1
 * 000000014016A2FB: jnz     short loc_14016A32C
 * 000000014016A2FD: lfence
 * 000000014016A300: test    word ptr gs:2EB8h, 1
 * 000000014016A30B: jnz     short loc_14016A315
 * 000000014016A30D: lfence
 * 000000014016A310: jmp     loc_14016A551
 * 000000014016A315: movzx   eax, word ptr gs:2EBCh
 * 000000014016A31E: mov     ecx, 48h ; 'H'
 * 000000014016A323: xor     edx, edx
 * 000000014016A325: wrmsr
 * 000000014016A327: jmp     loc_14016A551
 * 000000014016A32C: test    cs:KiKvaShadow, 1
 * 000000014016A333: jnz     short loc_14016A338
 * 000000014016A335: swapgs
 * 000000014016A338: lfence
 * 000000014016A33B: mov     r10, gs:188h
 * 000000014016A344: mov     rcx, gs:188h
 * 000000014016A34D: mov     rcx, [rcx+220h]
 * 000000014016A354: mov     rcx, [rcx+7B8h]
 * 000000014016A35B: mov     gs:2EB0h, rcx
 * 000000014016A364: movzx   eax, word ptr gs:2EBEh
 * 000000014016A36D: cmp     gs:2EBCh, ax
 * 000000014016A376: jz      short loc_14016A38A
 * 000000014016A378: mov     gs:2EBCh, ax
 * 000000014016A381: mov     ecx, 48h ; 'H'
 * 000000014016A386: xor     edx, edx
 * 000000014016A388: wrmsr
 * 000000014016A38A: movzx   edx, word ptr gs:2EB8h
 * 000000014016A393: test    edx, 8
 * 000000014016A399: jz      short loc_14016A3B2
 * 000000014016A39B: mov     eax, 1
 * 000000014016A3A0: xor     edx, edx
 * 000000014016A3A2: mov     ecx, 49h ; 'I'
 * 000000014016A3A7: wrmsr
 * 000000014016A3A9: movzx   edx, word ptr gs:2EB8h
 * 000000014016A3B2: test    edx, 2
 * 000000014016A3B8: jz      loc_14016A4E3
 * 000000014016A3BE: call    loc_14016A4D1
 * 000000014016A3C3: add     rsp, 8
 * 000000014016A3C7: call    loc_14016A4DA
 * 000000014016A3CC: add     rsp, 8
 * 000000014016A3D0: call    loc_14016A3C3
 * 000000014016A3D5: add     rsp, 8
 * 000000014016A3D9: call    loc_14016A3CC
 * 000000014016A3DE: add     rsp, 8
 * 000000014016A3E2: call    loc_14016A3D5
 * 000000014016A3E7: add     rsp, 8
 * 000000014016A3EB: call    loc_14016A3DE
 * 000000014016A3F0: add     rsp, 8
 * 000000014016A3F4: call    loc_14016A3E7
 * 000000014016A3F9: add     rsp, 8
 * 000000014016A3FD: call    loc_14016A3F0
 * 000000014016A402: add     rsp, 8
 * 000000014016A406: call    loc_14016A3F9
 * 000000014016A40B: add     rsp, 8
 * 000000014016A40F: call    loc_14016A402
 * 000000014016A414: add     rsp, 8
 * 000000014016A418: call    loc_14016A40B
 * 000000014016A41D: add     rsp, 8
 * 000000014016A421: call    loc_14016A414
 * 000000014016A426: add     rsp, 8
 * 000000014016A42A: call    loc_14016A41D
 * 000000014016A42F: add     rsp, 8
 * 000000014016A433: call    loc_14016A426
 * 000000014016A438: add     rsp, 8
 * 000000014016A43C: call    loc_14016A42F
 * 000000014016A441: add     rsp, 8
 * 000000014016A445: call    loc_14016A438
 * 000000014016A44A: add     rsp, 8
 * 000000014016A44E: call    loc_14016A441
 * 000000014016A453: add     rsp, 8
 * 000000014016A457: call    loc_14016A44A
 * 000000014016A45C: add     rsp, 8
 * 000000014016A460: call    loc_14016A453
 * 000000014016A465: add     rsp, 8
 * 000000014016A469: call    loc_14016A45C
 * 000000014016A46E: add     rsp, 8
 * 000000014016A472: call    loc_14016A465
 * 000000014016A477: add     rsp, 8
 * 000000014016A47B: call    loc_14016A46E
 * 000000014016A480: add     rsp, 8
 * 000000014016A484: call    loc_14016A477
 * 000000014016A489: add     rsp, 8
 * 000000014016A48D: call    loc_14016A480
 * 000000014016A492: add     rsp, 8
 * 000000014016A496: call    loc_14016A489
 * 000000014016A49B: add     rsp, 8
 * 000000014016A49F: call    loc_14016A492
 * 000000014016A4A4: add     rsp, 8
 * 000000014016A4A8: call    loc_14016A49B
 * 000000014016A4AD: add     rsp, 8
 * 000000014016A4B1: call    loc_14016A4A4
 * 000000014016A4B6: add     rsp, 8
 * 000000014016A4BA: call    loc_14016A4AD
 * 000000014016A4BF: add     rsp, 8
 * 000000014016A4C3: call    loc_14016A4B6
 * 000000014016A4C8: add     rsp, 8
 * 000000014016A4CC: call    loc_14016A4BF
 * 000000014016A4D1: add     rsp, 8
 * 000000014016A4D5: call    loc_14016A4C8
 * 000000014016A4DA: add     rsp, 8
 * 000000014016A4DE: mov     eax, 0DADAh
 * 000000014016A4E3: test    edx, 100h
 * 000000014016A4E9: jz      short loc_14016A4F0
 * 000000014016A4EB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016A4F0: lfence
 * 000000014016A4F3: test    byte ptr [r10+3], 80h
 * 000000014016A4F8: jz      short loc_14016A53C
 * 000000014016A4FA: mov     ecx, 0C0000102h
 * 000000014016A4FF: rdmsr
 * 000000014016A501: shl     rdx, 20h
 * 000000014016A505: or      rax, rdx
 * 000000014016A508: cmp     rax, cs:MmUserProbeAddress
 * 000000014016A50F: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016A517: cmp     [r10+0F0h], rax
 * 000000014016A51E: jz      short loc_14016A53C
 * 000000014016A520: mov     rdx, [r10+1F0h]
 * 000000014016A527: bts     dword ptr [r10+74h], 8
 * 000000014016A52D: dec     word ptr [r10+1E6h]
 * 000000014016A535: mov     [rdx+80h], rax
 * 000000014016A53C: test    byte ptr [r10+3], 3
 * 000000014016A541: mov     [rbp+0E8h+var_68], 0
 * 000000014016A54A: jz      short loc_14016A551
 * 000000014016A54C: call    KiSaveDebugRegisterState
 * 000000014016A551: cld
 * 000000014016A552: stmxcsr [rbp+0E8h+var_13C]
 * 000000014016A556: ldmxcsr dword ptr gs:180h
 * 000000014016A55F: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014016A563: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014016A567: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014016A56B: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014016A56F: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014016A573: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014016A577: test    [rbp+0E8h+arg_8], 200h
 * 000000014016A581: jz      short loc_14016A584
 * 000000014016A583: sti
 * 000000014016A584: test    [rbp+0E8h+arg_0], 1
 * 000000014016A58B: jz      short loc_14016A5E4
 * 000000014016A58D: mov     r9, gs:188h
 * 000000014016A596: bt      dword ptr [r9+74h], 8
 * 000000014016A59C: jnb     short loc_14016A5A3
 * 000000014016A59E: call    KiUmsTrapEntry
 * 000000014016A5A3: call    KiHandleBound
 * 000000014016A5A8: cmp     eax, 0
 * 000000014016A5AB: jz      short loc_14016A5E4
 * 000000014016A5AD: cmp     eax, 1
 * 000000014016A5B0: jz      short loc_14016A5F8
 * 000000014016A5B2: cmp     eax, 2
 * 000000014016A5B5: jz      short loc_14016A5C6
 * 000000014016A5B7: mov     edx, 5
 * 000000014016A5BC: mov     ecx, 7Fh
 * 000000014016A5C1: call    KiBugCheckDispatch
 * 000000014016A5C6: mov     r9, 1Ch
 * 000000014016A5CD: mov     ecx, 0C0000409h
 * 000000014016A5D2: mov     edx, 1
 * 000000014016A5D7: mov     r8, [rbp+0E8h]
 * 000000014016A5DE: call    KiFastFailDispatch
 * 000000014016A5E3: nop
 * 000000014016A5E4: mov     ecx, 0C000008Ch
 * 000000014016A5E9: xor     edx, edx
 * 000000014016A5EB: mov     r8, [rbp+0E8h]
 * 000000014016A5F2: call    KiExceptionDispatch
 * 000000014016A5F7: nop
 * 000000014016A5F8: cli
 * 000000014016A5F9: test    [rbp+0E8h+arg_0], 1
 * 000000014016A600: jz      loc_14016A88A
 * 000000014016A606: mov     rcx, gs:188h
 * 000000014016A60F: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016A616: jz      short loc_14016A631
 * 000000014016A618: mov     ecx, 1
 * 000000014016A61D: mov     cr8, rcx
 * 000000014016A621: sti
 * 000000014016A622: call    KiInitiateUserApc
 * 000000014016A627: cli
 * 000000014016A628: mov     ecx, 0
 * 000000014016A62D: mov     cr8, rcx
 * 000000014016A631: mov     rcx, gs:188h
 * 000000014016A63A: test    dword ptr [rcx], 8000000h
 * 000000014016A640: jz      short loc_14016A647
 * 000000014016A642: call    KiRestoreSetContextState
 * 000000014016A647: mov     rcx, gs:188h
 * 000000014016A650: test    dword ptr [rcx], 40010000h
 * 000000014016A656: jz      short loc_14016A67D
 * 000000014016A658: test    byte ptr [rcx+2], 1
 * 000000014016A65C: jz      short loc_14016A66C
 * 000000014016A65E: call    KiCopyCounters
 * 000000014016A663: mov     rcx, gs:188h
 * 000000014016A66C: test    byte ptr [rcx+3], 40h
 * 000000014016A670: jz      short loc_14016A67D
 * 000000014016A672: lea     rsp, [rbp-80h]
 * 000000014016A676: mov     cl, 1
 * 000000014016A678: call    KiUmsExit
 * 000000014016A67D: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016A681: cmp     [rbp+0E8h+var_68], 0
 * 000000014016A689: jz      short loc_14016A690
 * 000000014016A68B: call    KiRestoreDebugRegisterState
 * 000000014016A690: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016A694: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014016A698: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014016A69C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016A6A0: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016A6A4: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014016A6A8: mov     r11, [rbp+0E8h+var_108]
 * 000000014016A6AC: mov     r10, [rbp+0E8h+var_110]
 * 000000014016A6B0: mov     r9, [rbp+0E8h+var_118]
 * 000000014016A6B4: mov     r8, [rbp+0E8h+var_120]
 * 000000014016A6B8: movzx   eax, word ptr gs:2EC2h
 * 000000014016A6C1: cmp     gs:2EBCh, ax
 * 000000014016A6CA: jz      short loc_14016A6DE
 * 000000014016A6CC: mov     gs:2EBCh, ax
 * 000000014016A6D5: mov     ecx, 48h ; 'H'
 * 000000014016A6DA: xor     edx, edx
 * 000000014016A6DC: wrmsr
 * 000000014016A6DE: btr     word ptr gs:2EB8h, 2
 * 000000014016A6E9: jnb     short loc_14016A6F9
 * 000000014016A6EB: mov     eax, 1
 * 000000014016A6F0: xor     edx, edx
 * 000000014016A6F2: mov     ecx, 49h ; 'I'
 * 000000014016A6F7: wrmsr
 * 000000014016A6F9: btr     word ptr gs:2EB8h, 5
 * 000000014016A704: jnb     loc_14016A82F
 * 000000014016A70A: call    loc_14016A81D
 * 000000014016A70F: add     rsp, 8
 * 000000014016A713: call    loc_14016A826
 * 000000014016A718: add     rsp, 8
 * 000000014016A71C: call    loc_14016A70F
 * 000000014016A721: add     rsp, 8
 * 000000014016A725: call    loc_14016A718
 * 000000014016A72A: add     rsp, 8
 * 000000014016A72E: call    loc_14016A721
 * 000000014016A733: add     rsp, 8
 * 000000014016A737: call    loc_14016A72A
 * 000000014016A73C: add     rsp, 8
 * 000000014016A740: call    loc_14016A733
 * 000000014016A745: add     rsp, 8
 * 000000014016A749: call    loc_14016A73C
 * 000000014016A74E: add     rsp, 8
 * 000000014016A752: call    loc_14016A745
 * 000000014016A757: add     rsp, 8
 * 000000014016A75B: call    loc_14016A74E
 * 000000014016A760: add     rsp, 8
 * 000000014016A764: call    loc_14016A757
 * 000000014016A769: add     rsp, 8
 * 000000014016A76D: call    loc_14016A760
 * 000000014016A772: add     rsp, 8
 * 000000014016A776: call    loc_14016A769
 * 000000014016A77B: add     rsp, 8
 * 000000014016A77F: call    loc_14016A772
 * 000000014016A784: add     rsp, 8
 * 000000014016A788: call    loc_14016A77B
 * 000000014016A78D: add     rsp, 8
 * 000000014016A791: call    loc_14016A784
 * 000000014016A796: add     rsp, 8
 * 000000014016A79A: call    loc_14016A78D
 * 000000014016A79F: add     rsp, 8
 * 000000014016A7A3: call    loc_14016A796
 * 000000014016A7A8: add     rsp, 8
 * 000000014016A7AC: call    loc_14016A79F
 * 000000014016A7B1: add     rsp, 8
 * 000000014016A7B5: call    loc_14016A7A8
 * 000000014016A7BA: add     rsp, 8
 * 000000014016A7BE: call    loc_14016A7B1
 * 000000014016A7C3: add     rsp, 8
 * 000000014016A7C7: call    loc_14016A7BA
 * 000000014016A7CC: add     rsp, 8
 * 000000014016A7D0: call    loc_14016A7C3
 * 000000014016A7D5: add     rsp, 8
 * 000000014016A7D9: call    loc_14016A7CC
 * 000000014016A7DE: add     rsp, 8
 * 000000014016A7E2: call    loc_14016A7D5
 * 000000014016A7E7: add     rsp, 8
 * 000000014016A7EB: call    loc_14016A7DE
 * 000000014016A7F0: add     rsp, 8
 * 000000014016A7F4: call    loc_14016A7E7
 * 000000014016A7F9: add     rsp, 8
 * 000000014016A7FD: call    loc_14016A7F0
 * 000000014016A802: add     rsp, 8
 * 000000014016A806: call    loc_14016A7F9
 * 000000014016A80B: add     rsp, 8
 * 000000014016A80F: call    loc_14016A802
 * 000000014016A814: add     rsp, 8
 * 000000014016A818: call    loc_14016A80B
 * 000000014016A81D: add     rsp, 8
 * 000000014016A821: call    loc_14016A814
 * 000000014016A826: add     rsp, 8
 * 000000014016A82A: mov     eax, 0DADAh
 * 000000014016A82F: test    word ptr gs:2EB8h, 40h
 * 000000014016A83A: jz      short loc_14016A848
 * 000000014016A83C: xor     eax, eax
 * 000000014016A83E: xor     edx, edx
 * 000000014016A840: mov     ecx, 1
 * 000000014016A845: div     rcx
 * 000000014016A848: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016A84C: mov     rcx, [rbp+0E8h+var_130]
 * 000000014016A850: mov     rax, [rbp+0E8h+var_138]
 * 000000014016A854: mov     rsp, rbp
 * 000000014016A857: mov     rbp, [rbp+0E8h+var_10]
 * 000000014016A85E: add     rsp, 0E8h
 * 000000014016A865: test    cs:KiKvaShadow, 1
 * 000000014016A86C: jz      short loc_14016A873
 * 000000014016A86E: jmp     KiKernelExit
 * 000000014016A873: test    word ptr gs:2EB8h, 80h
 * 000000014016A87E: jz      short loc_14016A885
 * 000000014016A880: verw    [rsp+arg_18]
 * 000000014016A885: swapgs
 * 000000014016A888: iretq
 * 000000014016A88A: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014016A88E: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014016A892: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014016A896: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014016A89A: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014016A89E: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014016A8A2: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014016A8A6: mov     r11, [rbp+0E8h+var_108]
 * 000000014016A8AA: mov     r10, [rbp+0E8h+var_110]
 * 000000014016A8AE: mov     r9, [rbp+0E8h+var_118]
 * 000000014016A8B2: mov     r8, [rbp+0E8h+var_120]
 * 000000014016A8B6: mov     rdx, [rbp+0E8h+var_128]
 * 000000014016A8BA: mov     rcx, [rbp+0E8h+var_130]
 * 000000014016A8BE: mov     rax, [rbp+0E8h+var_138]
 * 000000014016A8C2: mov     rsp, rbp
 * 000000014016A8C5: mov     rbp, [rbp+0E8h+var_10]
 * 000000014016A8CC: add     rsp, 0E8h
 * 000000014016A8D3: iretq
 */
