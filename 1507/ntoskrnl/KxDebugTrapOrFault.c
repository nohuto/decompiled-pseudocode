/*
 * XREFs of KxDebugTrapOrFault @ 0x14018DFC0
 * Callers:
 *     KiDebugTrapOrFault @ 0x14018DF00 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x14018DFC0 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x14018DFC0
 * Reason: Hex-Rays returned no pseudocode for 0x14018DFC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018DFC0: sub     rsp, 8
 * 000000014018DFC4: push    rbp
 * 000000014018DFC5: sub     rsp, 158h
 * 000000014018DFCC: lea     rbp, [rsp+80h]
 * 000000014018DFD4: mov     [rbp+0E8h+var_13D], 1
 * 000000014018DFD8: mov     [rbp+0E8h+var_138], rax
 * 000000014018DFDC: mov     [rbp+0E8h+var_130], rcx
 * 000000014018DFE0: mov     [rbp+0E8h+var_128], rdx
 * 000000014018DFE4: mov     [rbp+0E8h+var_120], r8
 * 000000014018DFE8: mov     [rbp+0E8h+var_118], r9
 * 000000014018DFEC: mov     [rbp+0E8h+var_110], r10
 * 000000014018DFF0: mov     [rbp+0E8h+var_108], r11
 * 000000014018DFF4: test    [rbp+0E8h+arg_0], 1
 * 000000014018DFFB: jnz     short loc_14018E02C
 * 000000014018DFFD: lfence
 * 000000014018E000: test    word ptr gs:2EB0h, 1
 * 000000014018E00B: jnz     short loc_14018E015
 * 000000014018E00D: lfence
 * 000000014018E010: jmp     loc_14018E251
 * 000000014018E015: movzx   eax, word ptr gs:2EB4h
 * 000000014018E01E: mov     ecx, 48h ; 'H'
 * 000000014018E023: xor     edx, edx
 * 000000014018E025: wrmsr
 * 000000014018E027: jmp     loc_14018E251
 * 000000014018E02C: test    cs:KiKvaShadow, 1
 * 000000014018E033: jnz     short loc_14018E038
 * 000000014018E035: swapgs
 * 000000014018E038: lfence
 * 000000014018E03B: mov     r10, gs:188h
 * 000000014018E044: mov     rcx, gs:188h
 * 000000014018E04D: mov     rcx, [rcx+220h]
 * 000000014018E054: mov     rcx, [rcx+7A0h]
 * 000000014018E05B: mov     gs:2EA8h, rcx
 * 000000014018E064: movzx   eax, word ptr gs:2EB6h
 * 000000014018E06D: cmp     gs:2EB4h, ax
 * 000000014018E076: jz      short loc_14018E08A
 * 000000014018E078: mov     gs:2EB4h, ax
 * 000000014018E081: mov     ecx, 48h ; 'H'
 * 000000014018E086: xor     edx, edx
 * 000000014018E088: wrmsr
 * 000000014018E08A: movzx   edx, word ptr gs:2EB0h
 * 000000014018E093: test    edx, 8
 * 000000014018E099: jz      short loc_14018E0B2
 * 000000014018E09B: mov     eax, 1
 * 000000014018E0A0: xor     edx, edx
 * 000000014018E0A2: mov     ecx, 49h ; 'I'
 * 000000014018E0A7: wrmsr
 * 000000014018E0A9: movzx   edx, word ptr gs:2EB0h
 * 000000014018E0B2: test    edx, 2
 * 000000014018E0B8: jz      loc_14018E1E3
 * 000000014018E0BE: call    loc_14018E1D1
 * 000000014018E0C3: add     rsp, 8
 * 000000014018E0C7: call    loc_14018E1DA
 * 000000014018E0CC: add     rsp, 8
 * 000000014018E0D0: call    loc_14018E0C3
 * 000000014018E0D5: add     rsp, 8
 * 000000014018E0D9: call    loc_14018E0CC
 * 000000014018E0DE: add     rsp, 8
 * 000000014018E0E2: call    loc_14018E0D5
 * 000000014018E0E7: add     rsp, 8
 * 000000014018E0EB: call    loc_14018E0DE
 * 000000014018E0F0: add     rsp, 8
 * 000000014018E0F4: call    loc_14018E0E7
 * 000000014018E0F9: add     rsp, 8
 * 000000014018E0FD: call    loc_14018E0F0
 * 000000014018E102: add     rsp, 8
 * 000000014018E106: call    loc_14018E0F9
 * 000000014018E10B: add     rsp, 8
 * 000000014018E10F: call    loc_14018E102
 * 000000014018E114: add     rsp, 8
 * 000000014018E118: call    loc_14018E10B
 * 000000014018E11D: add     rsp, 8
 * 000000014018E121: call    loc_14018E114
 * 000000014018E126: add     rsp, 8
 * 000000014018E12A: call    loc_14018E11D
 * 000000014018E12F: add     rsp, 8
 * 000000014018E133: call    loc_14018E126
 * 000000014018E138: add     rsp, 8
 * 000000014018E13C: call    loc_14018E12F
 * 000000014018E141: add     rsp, 8
 * 000000014018E145: call    loc_14018E138
 * 000000014018E14A: add     rsp, 8
 * 000000014018E14E: call    loc_14018E141
 * 000000014018E153: add     rsp, 8
 * 000000014018E157: call    loc_14018E14A
 * 000000014018E15C: add     rsp, 8
 * 000000014018E160: call    loc_14018E153
 * 000000014018E165: add     rsp, 8
 * 000000014018E169: call    loc_14018E15C
 * 000000014018E16E: add     rsp, 8
 * 000000014018E172: call    loc_14018E165
 * 000000014018E177: add     rsp, 8
 * 000000014018E17B: call    loc_14018E16E
 * 000000014018E180: add     rsp, 8
 * 000000014018E184: call    loc_14018E177
 * 000000014018E189: add     rsp, 8
 * 000000014018E18D: call    loc_14018E180
 * 000000014018E192: add     rsp, 8
 * 000000014018E196: call    loc_14018E189
 * 000000014018E19B: add     rsp, 8
 * 000000014018E19F: call    loc_14018E192
 * 000000014018E1A4: add     rsp, 8
 * 000000014018E1A8: call    loc_14018E19B
 * 000000014018E1AD: add     rsp, 8
 * 000000014018E1B1: call    loc_14018E1A4
 * 000000014018E1B6: add     rsp, 8
 * 000000014018E1BA: call    loc_14018E1AD
 * 000000014018E1BF: add     rsp, 8
 * 000000014018E1C3: call    loc_14018E1B6
 * 000000014018E1C8: add     rsp, 8
 * 000000014018E1CC: call    loc_14018E1BF
 * 000000014018E1D1: add     rsp, 8
 * 000000014018E1D5: call    loc_14018E1C8
 * 000000014018E1DA: add     rsp, 8
 * 000000014018E1DE: mov     eax, 0DADAh
 * 000000014018E1E3: test    edx, 100h
 * 000000014018E1E9: jz      short loc_14018E1F0
 * 000000014018E1EB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014018E1F0: lfence
 * 000000014018E1F3: test    byte ptr [r10+3], 80h
 * 000000014018E1F8: jz      short loc_14018E23C
 * 000000014018E1FA: mov     ecx, 0C0000102h
 * 000000014018E1FF: rdmsr
 * 000000014018E201: shl     rdx, 20h
 * 000000014018E205: or      rax, rdx
 * 000000014018E208: cmp     rax, cs:MmUserProbeAddress
 * 000000014018E20F: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018E217: cmp     [r10+0F0h], rax
 * 000000014018E21E: jz      short loc_14018E23C
 * 000000014018E220: mov     rdx, [r10+1F0h]
 * 000000014018E227: bts     dword ptr [r10+74h], 8
 * 000000014018E22D: dec     word ptr [r10+1E6h]
 * 000000014018E235: mov     [rdx+80h], rax
 * 000000014018E23C: test    byte ptr [r10+3], 3
 * 000000014018E241: mov     [rbp+0E8h+var_68], 0
 * 000000014018E24A: jz      short loc_14018E251
 * 000000014018E24C: call    KiSaveDebugRegisterState
 * 000000014018E251: cld
 * 000000014018E252: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018E256: ldmxcsr dword ptr gs:180h
 * 000000014018E25F: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018E263: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018E267: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018E26B: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018E26F: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018E273: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018E277: test    [rbp+0E8h+arg_8], 200h
 * 000000014018E282: jz      short loc_14018E285
 * 000000014018E284: sti
 * 000000014018E285: xor     edx, edx
 * 000000014018E287: test    dword ptr [rbp+0E8h+arg_8], 100h
 * 000000014018E291: jz      loc_14018E354
 * 000000014018E297: test    byte ptr gs:63EAh, 2
 * 000000014018E2A0: jz      loc_14018E354
 * 000000014018E2A6: test    [rbp+0E8h+arg_0], 1
 * 000000014018E2AD: jnz     short loc_14018E306
 * 000000014018E2AF: mov     rax, dr7
 * 000000014018E2B2: test    ax, 200h
 * 000000014018E2B6: jz      loc_14018E354
 * 000000014018E2BC: test    ax, 100h
 * 000000014018E2C0: jz      loc_14018E354
 * 000000014018E2C6: mov     r8d, cs:KiLastBranchTOSMSR
 * 000000014018E2CD: or      r8d, r8d
 * 000000014018E2D0: jz      short loc_14018E2DA
 * 000000014018E2D2: mov     ecx, r8d
 * 000000014018E2D5: rdmsr
 * 000000014018E2D7: mov     r8d, eax
 * 000000014018E2DA: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 000000014018E2E0: add     ecx, r8d
 * 000000014018E2E3: rdmsr
 * 000000014018E2E5: mov     r9d, eax
 * 000000014018E2E8: shl     rdx, 20h
 * 000000014018E2EC: mov     ecx, cs:KiLastBranchToBaseMSR
 * 000000014018E2F2: or      r9, rdx
 * 000000014018E2F5: add     ecx, r8d
 * 000000014018E2F8: rdmsr
 * 000000014018E2FA: mov     r10d, eax
 * 000000014018E2FD: shl     rdx, 20h
 * 000000014018E301: or      r10, rdx
 * 000000014018E304: jmp     short loc_14018E34F
 * 000000014018E306: test    [rbp+0E8h+var_68], 200h
 * 000000014018E30F: jz      short loc_14018E354
 * 000000014018E311: test    [rbp+0E8h+var_68], 100h
 * 000000014018E31A: jz      short loc_14018E354
 * 000000014018E31C: and     [rbp+0E8h+var_40], 0
 * 000000014018E324: and     [rbp+0E8h+var_48], 0
 * 000000014018E32C: mov     rcx, cs:MmUserProbeAddress
 * 000000014018E333: mov     r9, [rbp+0E8h+var_50]
 * 000000014018E33A: cmp     r9, rcx
 * 000000014018E33D: cmovnb  r9, rcx
 * 000000014018E341: mov     r10, [rbp+0E8h+var_58]
 * 000000014018E348: cmp     r10, rcx
 * 000000014018E34B: cmovnb  r10, rcx
 * 000000014018E34F: mov     edx, 2
 * 000000014018E354: mov     ecx, 80000004h
 * 000000014018E359: and     dword ptr [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 000000014018E363: mov     r8, [rbp+0E8h]
 * 000000014018E36A: call    KiExceptionDispatch
 * 000000014018E36F: nop
 * 000000014018E370: retn
 */
