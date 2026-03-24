/*
 * XREFs of KiGeneralProtectionFault @ 0x14016C040
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x14023F680 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x14016C040 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x14016C040
 * Reason: Hex-Rays returned no pseudocode for 0x14016C040
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016C040: push    rbp
 * 000000014016C041: sub     rsp, 158h
 * 000000014016C048: lea     rbp, [rsp+80h]
 * 000000014016C050: mov     [rbp+0D8h+var_12D], 1
 * 000000014016C054: mov     [rbp+0D8h+var_128], rax
 * 000000014016C058: mov     [rbp+0D8h+var_120], rcx
 * 000000014016C05C: mov     [rbp+0D8h+var_118], rdx
 * 000000014016C060: mov     [rbp+0D8h+var_110], r8
 * 000000014016C064: mov     [rbp+0D8h+var_108], r9
 * 000000014016C068: mov     [rbp+0D8h+var_100], r10
 * 000000014016C06C: mov     [rbp+0D8h+var_F8], r11
 * 000000014016C070: test    [rbp+0D8h+arg_8], 1
 * 000000014016C077: jnz     short loc_14016C0A8
 * 000000014016C079: lfence
 * 000000014016C07C: test    word ptr gs:2EB8h, 1
 * 000000014016C087: jnz     short loc_14016C091
 * 000000014016C089: lfence
 * 000000014016C08C: jmp     loc_14016C2CD
 * 000000014016C091: movzx   eax, word ptr gs:2EBCh
 * 000000014016C09A: mov     ecx, 48h ; 'H'
 * 000000014016C09F: xor     edx, edx
 * 000000014016C0A1: wrmsr
 * 000000014016C0A3: jmp     loc_14016C2CD
 * 000000014016C0A8: test    cs:KiKvaShadow, 1
 * 000000014016C0AF: jnz     short loc_14016C0B4
 * 000000014016C0B1: swapgs
 * 000000014016C0B4: lfence
 * 000000014016C0B7: mov     r10, gs:188h
 * 000000014016C0C0: mov     rcx, gs:188h
 * 000000014016C0C9: mov     rcx, [rcx+220h]
 * 000000014016C0D0: mov     rcx, [rcx+7B8h]
 * 000000014016C0D7: mov     gs:2EB0h, rcx
 * 000000014016C0E0: movzx   eax, word ptr gs:2EBEh
 * 000000014016C0E9: cmp     gs:2EBCh, ax
 * 000000014016C0F2: jz      short loc_14016C106
 * 000000014016C0F4: mov     gs:2EBCh, ax
 * 000000014016C0FD: mov     ecx, 48h ; 'H'
 * 000000014016C102: xor     edx, edx
 * 000000014016C104: wrmsr
 * 000000014016C106: movzx   edx, word ptr gs:2EB8h
 * 000000014016C10F: test    edx, 8
 * 000000014016C115: jz      short loc_14016C12E
 * 000000014016C117: mov     eax, 1
 * 000000014016C11C: xor     edx, edx
 * 000000014016C11E: mov     ecx, 49h ; 'I'
 * 000000014016C123: wrmsr
 * 000000014016C125: movzx   edx, word ptr gs:2EB8h
 * 000000014016C12E: test    edx, 2
 * 000000014016C134: jz      loc_14016C25F
 * 000000014016C13A: call    loc_14016C24D
 * 000000014016C13F: add     rsp, 8
 * 000000014016C143: call    loc_14016C256
 * 000000014016C148: add     rsp, 8
 * 000000014016C14C: call    loc_14016C13F
 * 000000014016C151: add     rsp, 8
 * 000000014016C155: call    loc_14016C148
 * 000000014016C15A: add     rsp, 8
 * 000000014016C15E: call    loc_14016C151
 * 000000014016C163: add     rsp, 8
 * 000000014016C167: call    loc_14016C15A
 * 000000014016C16C: add     rsp, 8
 * 000000014016C170: call    loc_14016C163
 * 000000014016C175: add     rsp, 8
 * 000000014016C179: call    loc_14016C16C
 * 000000014016C17E: add     rsp, 8
 * 000000014016C182: call    loc_14016C175
 * 000000014016C187: add     rsp, 8
 * 000000014016C18B: call    loc_14016C17E
 * 000000014016C190: add     rsp, 8
 * 000000014016C194: call    loc_14016C187
 * 000000014016C199: add     rsp, 8
 * 000000014016C19D: call    loc_14016C190
 * 000000014016C1A2: add     rsp, 8
 * 000000014016C1A6: call    loc_14016C199
 * 000000014016C1AB: add     rsp, 8
 * 000000014016C1AF: call    loc_14016C1A2
 * 000000014016C1B4: add     rsp, 8
 * 000000014016C1B8: call    loc_14016C1AB
 * 000000014016C1BD: add     rsp, 8
 * 000000014016C1C1: call    loc_14016C1B4
 * 000000014016C1C6: add     rsp, 8
 * 000000014016C1CA: call    loc_14016C1BD
 * 000000014016C1CF: add     rsp, 8
 * 000000014016C1D3: call    loc_14016C1C6
 * 000000014016C1D8: add     rsp, 8
 * 000000014016C1DC: call    loc_14016C1CF
 * 000000014016C1E1: add     rsp, 8
 * 000000014016C1E5: call    loc_14016C1D8
 * 000000014016C1EA: add     rsp, 8
 * 000000014016C1EE: call    loc_14016C1E1
 * 000000014016C1F3: add     rsp, 8
 * 000000014016C1F7: call    loc_14016C1EA
 * 000000014016C1FC: add     rsp, 8
 * 000000014016C200: call    loc_14016C1F3
 * 000000014016C205: add     rsp, 8
 * 000000014016C209: call    loc_14016C1FC
 * 000000014016C20E: add     rsp, 8
 * 000000014016C212: call    loc_14016C205
 * 000000014016C217: add     rsp, 8
 * 000000014016C21B: call    loc_14016C20E
 * 000000014016C220: add     rsp, 8
 * 000000014016C224: call    loc_14016C217
 * 000000014016C229: add     rsp, 8
 * 000000014016C22D: call    loc_14016C220
 * 000000014016C232: add     rsp, 8
 * 000000014016C236: call    loc_14016C229
 * 000000014016C23B: add     rsp, 8
 * 000000014016C23F: call    loc_14016C232
 * 000000014016C244: add     rsp, 8
 * 000000014016C248: call    loc_14016C23B
 * 000000014016C24D: add     rsp, 8
 * 000000014016C251: call    loc_14016C244
 * 000000014016C256: add     rsp, 8
 * 000000014016C25A: mov     eax, 0DADAh
 * 000000014016C25F: test    edx, 100h
 * 000000014016C265: jz      short loc_14016C26C
 * 000000014016C267: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016C26C: lfence
 * 000000014016C26F: test    byte ptr [r10+3], 80h
 * 000000014016C274: jz      short loc_14016C2B8
 * 000000014016C276: mov     ecx, 0C0000102h
 * 000000014016C27B: rdmsr
 * 000000014016C27D: shl     rdx, 20h
 * 000000014016C281: or      rax, rdx
 * 000000014016C284: cmp     rax, cs:MmUserProbeAddress
 * 000000014016C28B: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016C293: cmp     [r10+0F0h], rax
 * 000000014016C29A: jz      short loc_14016C2B8
 * 000000014016C29C: mov     rdx, [r10+1F0h]
 * 000000014016C2A3: bts     dword ptr [r10+74h], 8
 * 000000014016C2A9: dec     word ptr [r10+1E6h]
 * 000000014016C2B1: mov     [rdx+80h], rax
 * 000000014016C2B8: test    byte ptr [r10+3], 3
 * 000000014016C2BD: mov     [rbp+0D8h+var_58], 0
 * 000000014016C2C6: jz      short loc_14016C2CD
 * 000000014016C2C8: call    KiSaveDebugRegisterState
 * 000000014016C2CD: cld
 * 000000014016C2CE: stmxcsr [rbp+0D8h+var_12C]
 * 000000014016C2D2: ldmxcsr dword ptr gs:180h
 * 000000014016C2DB: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014016C2DF: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014016C2E3: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014016C2E7: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014016C2EB: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014016C2EF: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014016C2F3: mov     eax, [rbp+0E0h]
 * 000000014016C2F9: test    [rbp+0D8h+arg_10], 200h
 * 000000014016C303: jz      short loc_14016C306
 * 000000014016C305: sti
 * 000000014016C306: mov     ecx, 10000001h
 * 000000014016C30B: mov     edx, 2
 * 000000014016C310: mov     r9d, [rbp+0E0h]
 * 000000014016C317: and     r9d, 0FFFFh
 * 000000014016C31E: xor     r10, r10
 * 000000014016C321: mov     r8, [rbp+0D8h+arg_0]
 * 000000014016C328: call    KiExceptionDispatch
 * 000000014016C32D: nop
 * 000000014016C32E: retn
 */
