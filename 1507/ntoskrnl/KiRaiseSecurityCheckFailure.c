/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x140192A40
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140274B00 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x140192A40 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x140194580 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x140192A40
 * Reason: Hex-Rays returned no pseudocode for 0x140192A40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140192A40: sub     qword ptr [rsp+0], 2
 * 0000000140192A45: sub     rsp, 8
 * 0000000140192A49: push    rbp
 * 0000000140192A4A: sub     rsp, 158h
 * 0000000140192A51: lea     rbp, [rsp+80h]
 * 0000000140192A59: mov     [rbp+0E8h+var_13D], 1
 * 0000000140192A5D: mov     [rbp+0E8h+var_138], rax
 * 0000000140192A61: mov     [rbp+0E8h+var_130], rcx
 * 0000000140192A65: mov     [rbp+0E8h+var_128], rdx
 * 0000000140192A69: mov     [rbp+0E8h+var_120], r8
 * 0000000140192A6D: mov     [rbp+0E8h+var_118], r9
 * 0000000140192A71: mov     [rbp+0E8h+var_110], r10
 * 0000000140192A75: mov     [rbp+0E8h+var_108], r11
 * 0000000140192A79: test    [rbp+0E8h+arg_0], 1
 * 0000000140192A80: jnz     short loc_140192AB1
 * 0000000140192A82: lfence
 * 0000000140192A85: test    word ptr gs:2EB0h, 1
 * 0000000140192A90: jnz     short loc_140192A9A
 * 0000000140192A92: lfence
 * 0000000140192A95: jmp     loc_140192CD6
 * 0000000140192A9A: movzx   eax, word ptr gs:2EB4h
 * 0000000140192AA3: mov     ecx, 48h ; 'H'
 * 0000000140192AA8: xor     edx, edx
 * 0000000140192AAA: wrmsr
 * 0000000140192AAC: jmp     loc_140192CD6
 * 0000000140192AB1: test    cs:KiKvaShadow, 1
 * 0000000140192AB8: jnz     short loc_140192ABD
 * 0000000140192ABA: swapgs
 * 0000000140192ABD: lfence
 * 0000000140192AC0: mov     r10, gs:188h
 * 0000000140192AC9: mov     rcx, gs:188h
 * 0000000140192AD2: mov     rcx, [rcx+220h]
 * 0000000140192AD9: mov     rcx, [rcx+7A0h]
 * 0000000140192AE0: mov     gs:2EA8h, rcx
 * 0000000140192AE9: movzx   eax, word ptr gs:2EB6h
 * 0000000140192AF2: cmp     gs:2EB4h, ax
 * 0000000140192AFB: jz      short loc_140192B0F
 * 0000000140192AFD: mov     gs:2EB4h, ax
 * 0000000140192B06: mov     ecx, 48h ; 'H'
 * 0000000140192B0B: xor     edx, edx
 * 0000000140192B0D: wrmsr
 * 0000000140192B0F: movzx   edx, word ptr gs:2EB0h
 * 0000000140192B18: test    edx, 8
 * 0000000140192B1E: jz      short loc_140192B37
 * 0000000140192B20: mov     eax, 1
 * 0000000140192B25: xor     edx, edx
 * 0000000140192B27: mov     ecx, 49h ; 'I'
 * 0000000140192B2C: wrmsr
 * 0000000140192B2E: movzx   edx, word ptr gs:2EB0h
 * 0000000140192B37: test    edx, 2
 * 0000000140192B3D: jz      loc_140192C68
 * 0000000140192B43: call    loc_140192C56
 * 0000000140192B48: add     rsp, 8
 * 0000000140192B4C: call    loc_140192C5F
 * 0000000140192B51: add     rsp, 8
 * 0000000140192B55: call    loc_140192B48
 * 0000000140192B5A: add     rsp, 8
 * 0000000140192B5E: call    loc_140192B51
 * 0000000140192B63: add     rsp, 8
 * 0000000140192B67: call    loc_140192B5A
 * 0000000140192B6C: add     rsp, 8
 * 0000000140192B70: call    loc_140192B63
 * 0000000140192B75: add     rsp, 8
 * 0000000140192B79: call    loc_140192B6C
 * 0000000140192B7E: add     rsp, 8
 * 0000000140192B82: call    loc_140192B75
 * 0000000140192B87: add     rsp, 8
 * 0000000140192B8B: call    loc_140192B7E
 * 0000000140192B90: add     rsp, 8
 * 0000000140192B94: call    loc_140192B87
 * 0000000140192B99: add     rsp, 8
 * 0000000140192B9D: call    loc_140192B90
 * 0000000140192BA2: add     rsp, 8
 * 0000000140192BA6: call    loc_140192B99
 * 0000000140192BAB: add     rsp, 8
 * 0000000140192BAF: call    loc_140192BA2
 * 0000000140192BB4: add     rsp, 8
 * 0000000140192BB8: call    loc_140192BAB
 * 0000000140192BBD: add     rsp, 8
 * 0000000140192BC1: call    loc_140192BB4
 * 0000000140192BC6: add     rsp, 8
 * 0000000140192BCA: call    loc_140192BBD
 * 0000000140192BCF: add     rsp, 8
 * 0000000140192BD3: call    loc_140192BC6
 * 0000000140192BD8: add     rsp, 8
 * 0000000140192BDC: call    loc_140192BCF
 * 0000000140192BE1: add     rsp, 8
 * 0000000140192BE5: call    loc_140192BD8
 * 0000000140192BEA: add     rsp, 8
 * 0000000140192BEE: call    loc_140192BE1
 * 0000000140192BF3: add     rsp, 8
 * 0000000140192BF7: call    loc_140192BEA
 * 0000000140192BFC: add     rsp, 8
 * 0000000140192C00: call    loc_140192BF3
 * 0000000140192C05: add     rsp, 8
 * 0000000140192C09: call    loc_140192BFC
 * 0000000140192C0E: add     rsp, 8
 * 0000000140192C12: call    loc_140192C05
 * 0000000140192C17: add     rsp, 8
 * 0000000140192C1B: call    loc_140192C0E
 * 0000000140192C20: add     rsp, 8
 * 0000000140192C24: call    loc_140192C17
 * 0000000140192C29: add     rsp, 8
 * 0000000140192C2D: call    loc_140192C20
 * 0000000140192C32: add     rsp, 8
 * 0000000140192C36: call    loc_140192C29
 * 0000000140192C3B: add     rsp, 8
 * 0000000140192C3F: call    loc_140192C32
 * 0000000140192C44: add     rsp, 8
 * 0000000140192C48: call    loc_140192C3B
 * 0000000140192C4D: add     rsp, 8
 * 0000000140192C51: call    loc_140192C44
 * 0000000140192C56: add     rsp, 8
 * 0000000140192C5A: call    loc_140192C4D
 * 0000000140192C5F: add     rsp, 8
 * 0000000140192C63: mov     eax, 0DADAh
 * 0000000140192C68: test    edx, 100h
 * 0000000140192C6E: jz      short loc_140192C75
 * 0000000140192C70: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140192C75: lfence
 * 0000000140192C78: test    byte ptr [r10+3], 80h
 * 0000000140192C7D: jz      short loc_140192CC1
 * 0000000140192C7F: mov     ecx, 0C0000102h
 * 0000000140192C84: rdmsr
 * 0000000140192C86: shl     rdx, 20h
 * 0000000140192C8A: or      rax, rdx
 * 0000000140192C8D: cmp     rax, cs:MmUserProbeAddress
 * 0000000140192C94: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140192C9C: cmp     [r10+0F0h], rax
 * 0000000140192CA3: jz      short loc_140192CC1
 * 0000000140192CA5: mov     rdx, [r10+1F0h]
 * 0000000140192CAC: bts     dword ptr [r10+74h], 8
 * 0000000140192CB2: dec     word ptr [r10+1E6h]
 * 0000000140192CBA: mov     [rdx+80h], rax
 * 0000000140192CC1: test    byte ptr [r10+3], 3
 * 0000000140192CC6: mov     [rbp+0E8h+var_68], 0
 * 0000000140192CCF: jz      short loc_140192CD6
 * 0000000140192CD1: call    KiSaveDebugRegisterState
 * 0000000140192CD6: cld
 * 0000000140192CD7: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140192CDB: ldmxcsr dword ptr gs:180h
 * 0000000140192CE4: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140192CE8: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140192CEC: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140192CF0: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140192CF4: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140192CF8: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140192CFC: test    [rbp+0E8h+arg_8], 200h
 * 0000000140192D07: jz      short loc_140192D0A
 * 0000000140192D09: sti
 * 0000000140192D0A: mov     r9, [rbp+0E8h+var_130]
 * 0000000140192D0E: mov     ecx, 0C0000409h
 * 0000000140192D13: mov     edx, 1
 * 0000000140192D18: mov     r8, [rbp+0E8h]
 * 0000000140192D1F: call    KiFastFailDispatch
 * 0000000140192D24: nop
 * 0000000140192D25: retn
 */
