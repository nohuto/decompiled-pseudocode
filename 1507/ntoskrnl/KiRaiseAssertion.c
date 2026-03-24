/*
 * XREFs of KiRaiseAssertion @ 0x140192D40
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140274B80 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x140192D40 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x140192D40
 * Reason: Hex-Rays returned no pseudocode for 0x140192D40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140192D40: sub     qword ptr [rsp+0], 2
 * 0000000140192D45: sub     rsp, 8
 * 0000000140192D49: push    rbp
 * 0000000140192D4A: sub     rsp, 158h
 * 0000000140192D51: lea     rbp, [rsp+80h]
 * 0000000140192D59: mov     [rbp+0E8h+var_13D], 1
 * 0000000140192D5D: mov     [rbp+0E8h+var_138], rax
 * 0000000140192D61: mov     [rbp+0E8h+var_130], rcx
 * 0000000140192D65: mov     [rbp+0E8h+var_128], rdx
 * 0000000140192D69: mov     [rbp+0E8h+var_120], r8
 * 0000000140192D6D: mov     [rbp+0E8h+var_118], r9
 * 0000000140192D71: mov     [rbp+0E8h+var_110], r10
 * 0000000140192D75: mov     [rbp+0E8h+var_108], r11
 * 0000000140192D79: test    [rbp+0E8h+arg_0], 1
 * 0000000140192D80: jnz     short loc_140192DB1
 * 0000000140192D82: lfence
 * 0000000140192D85: test    word ptr gs:2EB0h, 1
 * 0000000140192D90: jnz     short loc_140192D9A
 * 0000000140192D92: lfence
 * 0000000140192D95: jmp     loc_140192FD6
 * 0000000140192D9A: movzx   eax, word ptr gs:2EB4h
 * 0000000140192DA3: mov     ecx, 48h ; 'H'
 * 0000000140192DA8: xor     edx, edx
 * 0000000140192DAA: wrmsr
 * 0000000140192DAC: jmp     loc_140192FD6
 * 0000000140192DB1: test    cs:KiKvaShadow, 1
 * 0000000140192DB8: jnz     short loc_140192DBD
 * 0000000140192DBA: swapgs
 * 0000000140192DBD: lfence
 * 0000000140192DC0: mov     r10, gs:188h
 * 0000000140192DC9: mov     rcx, gs:188h
 * 0000000140192DD2: mov     rcx, [rcx+220h]
 * 0000000140192DD9: mov     rcx, [rcx+7A0h]
 * 0000000140192DE0: mov     gs:2EA8h, rcx
 * 0000000140192DE9: movzx   eax, word ptr gs:2EB6h
 * 0000000140192DF2: cmp     gs:2EB4h, ax
 * 0000000140192DFB: jz      short loc_140192E0F
 * 0000000140192DFD: mov     gs:2EB4h, ax
 * 0000000140192E06: mov     ecx, 48h ; 'H'
 * 0000000140192E0B: xor     edx, edx
 * 0000000140192E0D: wrmsr
 * 0000000140192E0F: movzx   edx, word ptr gs:2EB0h
 * 0000000140192E18: test    edx, 8
 * 0000000140192E1E: jz      short loc_140192E37
 * 0000000140192E20: mov     eax, 1
 * 0000000140192E25: xor     edx, edx
 * 0000000140192E27: mov     ecx, 49h ; 'I'
 * 0000000140192E2C: wrmsr
 * 0000000140192E2E: movzx   edx, word ptr gs:2EB0h
 * 0000000140192E37: test    edx, 2
 * 0000000140192E3D: jz      loc_140192F68
 * 0000000140192E43: call    loc_140192F56
 * 0000000140192E48: add     rsp, 8
 * 0000000140192E4C: call    loc_140192F5F
 * 0000000140192E51: add     rsp, 8
 * 0000000140192E55: call    loc_140192E48
 * 0000000140192E5A: add     rsp, 8
 * 0000000140192E5E: call    loc_140192E51
 * 0000000140192E63: add     rsp, 8
 * 0000000140192E67: call    loc_140192E5A
 * 0000000140192E6C: add     rsp, 8
 * 0000000140192E70: call    loc_140192E63
 * 0000000140192E75: add     rsp, 8
 * 0000000140192E79: call    loc_140192E6C
 * 0000000140192E7E: add     rsp, 8
 * 0000000140192E82: call    loc_140192E75
 * 0000000140192E87: add     rsp, 8
 * 0000000140192E8B: call    loc_140192E7E
 * 0000000140192E90: add     rsp, 8
 * 0000000140192E94: call    loc_140192E87
 * 0000000140192E99: add     rsp, 8
 * 0000000140192E9D: call    loc_140192E90
 * 0000000140192EA2: add     rsp, 8
 * 0000000140192EA6: call    loc_140192E99
 * 0000000140192EAB: add     rsp, 8
 * 0000000140192EAF: call    loc_140192EA2
 * 0000000140192EB4: add     rsp, 8
 * 0000000140192EB8: call    loc_140192EAB
 * 0000000140192EBD: add     rsp, 8
 * 0000000140192EC1: call    loc_140192EB4
 * 0000000140192EC6: add     rsp, 8
 * 0000000140192ECA: call    loc_140192EBD
 * 0000000140192ECF: add     rsp, 8
 * 0000000140192ED3: call    loc_140192EC6
 * 0000000140192ED8: add     rsp, 8
 * 0000000140192EDC: call    loc_140192ECF
 * 0000000140192EE1: add     rsp, 8
 * 0000000140192EE5: call    loc_140192ED8
 * 0000000140192EEA: add     rsp, 8
 * 0000000140192EEE: call    loc_140192EE1
 * 0000000140192EF3: add     rsp, 8
 * 0000000140192EF7: call    loc_140192EEA
 * 0000000140192EFC: add     rsp, 8
 * 0000000140192F00: call    loc_140192EF3
 * 0000000140192F05: add     rsp, 8
 * 0000000140192F09: call    loc_140192EFC
 * 0000000140192F0E: add     rsp, 8
 * 0000000140192F12: call    loc_140192F05
 * 0000000140192F17: add     rsp, 8
 * 0000000140192F1B: call    loc_140192F0E
 * 0000000140192F20: add     rsp, 8
 * 0000000140192F24: call    loc_140192F17
 * 0000000140192F29: add     rsp, 8
 * 0000000140192F2D: call    loc_140192F20
 * 0000000140192F32: add     rsp, 8
 * 0000000140192F36: call    loc_140192F29
 * 0000000140192F3B: add     rsp, 8
 * 0000000140192F3F: call    loc_140192F32
 * 0000000140192F44: add     rsp, 8
 * 0000000140192F48: call    loc_140192F3B
 * 0000000140192F4D: add     rsp, 8
 * 0000000140192F51: call    loc_140192F44
 * 0000000140192F56: add     rsp, 8
 * 0000000140192F5A: call    loc_140192F4D
 * 0000000140192F5F: add     rsp, 8
 * 0000000140192F63: mov     eax, 0DADAh
 * 0000000140192F68: test    edx, 100h
 * 0000000140192F6E: jz      short loc_140192F75
 * 0000000140192F70: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140192F75: lfence
 * 0000000140192F78: test    byte ptr [r10+3], 80h
 * 0000000140192F7D: jz      short loc_140192FC1
 * 0000000140192F7F: mov     ecx, 0C0000102h
 * 0000000140192F84: rdmsr
 * 0000000140192F86: shl     rdx, 20h
 * 0000000140192F8A: or      rax, rdx
 * 0000000140192F8D: cmp     rax, cs:MmUserProbeAddress
 * 0000000140192F94: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140192F9C: cmp     [r10+0F0h], rax
 * 0000000140192FA3: jz      short loc_140192FC1
 * 0000000140192FA5: mov     rdx, [r10+1F0h]
 * 0000000140192FAC: bts     dword ptr [r10+74h], 8
 * 0000000140192FB2: dec     word ptr [r10+1E6h]
 * 0000000140192FBA: mov     [rdx+80h], rax
 * 0000000140192FC1: test    byte ptr [r10+3], 3
 * 0000000140192FC6: mov     [rbp+0E8h+var_68], 0
 * 0000000140192FCF: jz      short loc_140192FD6
 * 0000000140192FD1: call    KiSaveDebugRegisterState
 * 0000000140192FD6: cld
 * 0000000140192FD7: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140192FDB: ldmxcsr dword ptr gs:180h
 * 0000000140192FE4: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140192FE8: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140192FEC: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140192FF0: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140192FF4: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140192FF8: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140192FFC: test    [rbp+0E8h+arg_8], 200h
 * 0000000140193007: jz      short loc_14019300A
 * 0000000140193009: sti
 * 000000014019300A: mov     ecx, 0C0000420h
 * 000000014019300F: xor     edx, edx
 * 0000000140193011: mov     r8, [rbp+0E8h]
 * 0000000140193018: call    KiExceptionDispatch
 * 000000014019301D: nop
 * 000000014019301E: retn
 */
