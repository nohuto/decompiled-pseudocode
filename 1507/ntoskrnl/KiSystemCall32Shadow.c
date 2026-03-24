/*
 * XREFs of KiSystemCall32Shadow @ 0x140275B00
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall32Shadow @ 0x140275B00 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140275B00
 * Reason: Hex-Rays returned no pseudocode for 0x140275B00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140275B00: swapgs
 * 0000000140275B03: mov     gs:7010h, rsp
 * 0000000140275B0C: mov     rsp, gs:7000h
 * 0000000140275B15: mov     cr3, rsp
 * 0000000140275B18: mov     rsp, gs:7008h
 * 0000000140275B21: push    2Bh ; '+'
 * 0000000140275B23: push    qword ptr gs:7010h
 * 0000000140275B2B: push    r11
 * 0000000140275B2D: push    23h ; '#'
 * 0000000140275B2F: push    rcx
 * 0000000140275B30: sub     rsp, 8
 * 0000000140275B34: push    rbp
 * 0000000140275B35: sub     rsp, 158h
 * 0000000140275B3C: lea     rbp, [rsp+190h+var_110]
 * 0000000140275B44: mov     byte ptr [rbp-55h], 1
 * 0000000140275B48: mov     [rbp-50h], rax
 * 0000000140275B4C: mov     [rbp-48h], rcx
 * 0000000140275B50: mov     [rbp-40h], rdx
 * 0000000140275B54: mov     [rbp-38h], r8
 * 0000000140275B58: mov     [rbp-30h], r9
 * 0000000140275B5C: mov     [rbp-28h], r10
 * 0000000140275B60: mov     [rbp-20h], r11
 * 0000000140275B64: test    byte ptr [rbp+0F0h], 1
 * 0000000140275B6B: jnz     short loc_140275B9C
 * 0000000140275B6D: lfence
 * 0000000140275B70: test    word ptr gs:2EB0h, 1
 * 0000000140275B7B: jnz     short loc_140275B85
 * 0000000140275B7D: lfence
 * 0000000140275B80: jmp     loc_140275DC1
 * 0000000140275B85: movzx   eax, word ptr gs:2EB4h
 * 0000000140275B8E: mov     ecx, 48h ; 'H'
 * 0000000140275B93: xor     edx, edx
 * 0000000140275B95: wrmsr
 * 0000000140275B97: jmp     loc_140275DC1
 * 0000000140275B9C: test    cs:KiKvaShadow, 1
 * 0000000140275BA3: jnz     short loc_140275BA8
 * 0000000140275BA5: swapgs
 * 0000000140275BA8: lfence
 * 0000000140275BAB: mov     r10, gs:188h
 * 0000000140275BB4: mov     rcx, gs:188h
 * 0000000140275BBD: mov     rcx, [rcx+220h]
 * 0000000140275BC4: mov     rcx, [rcx+7A0h]
 * 0000000140275BCB: mov     gs:2EA8h, rcx
 * 0000000140275BD4: movzx   eax, word ptr gs:2EB6h
 * 0000000140275BDD: cmp     gs:2EB4h, ax
 * 0000000140275BE6: jz      short loc_140275BFA
 * 0000000140275BE8: mov     gs:2EB4h, ax
 * 0000000140275BF1: mov     ecx, 48h ; 'H'
 * 0000000140275BF6: xor     edx, edx
 * 0000000140275BF8: wrmsr
 * 0000000140275BFA: movzx   edx, word ptr gs:2EB0h
 * 0000000140275C03: test    edx, 8
 * 0000000140275C09: jz      short loc_140275C22
 * 0000000140275C0B: mov     eax, 1
 * 0000000140275C10: xor     edx, edx
 * 0000000140275C12: mov     ecx, 49h ; 'I'
 * 0000000140275C17: wrmsr
 * 0000000140275C19: movzx   edx, word ptr gs:2EB0h
 * 0000000140275C22: test    edx, 2
 * 0000000140275C28: jz      loc_140275D53
 * 0000000140275C2E: call    loc_140275D41
 * 0000000140275C33: add     rsp, 8
 * 0000000140275C37: call    loc_140275D4A
 * 0000000140275C3C: add     rsp, 8
 * 0000000140275C40: call    loc_140275C33
 * 0000000140275C45: add     rsp, 8
 * 0000000140275C49: call    loc_140275C3C
 * 0000000140275C4E: add     rsp, 8
 * 0000000140275C52: call    loc_140275C45
 * 0000000140275C57: add     rsp, 8
 * 0000000140275C5B: call    loc_140275C4E
 * 0000000140275C60: add     rsp, 8
 * 0000000140275C64: call    loc_140275C57
 * 0000000140275C69: add     rsp, 8
 * 0000000140275C6D: call    loc_140275C60
 * 0000000140275C72: add     rsp, 8
 * 0000000140275C76: call    loc_140275C69
 * 0000000140275C7B: add     rsp, 8
 * 0000000140275C7F: call    loc_140275C72
 * 0000000140275C84: add     rsp, 8
 * 0000000140275C88: call    loc_140275C7B
 * 0000000140275C8D: add     rsp, 8
 * 0000000140275C91: call    loc_140275C84
 * 0000000140275C96: add     rsp, 8
 * 0000000140275C9A: call    loc_140275C8D
 * 0000000140275C9F: add     rsp, 8
 * 0000000140275CA3: call    loc_140275C96
 * 0000000140275CA8: add     rsp, 8
 * 0000000140275CAC: call    loc_140275C9F
 * 0000000140275CB1: add     rsp, 8
 * 0000000140275CB5: call    loc_140275CA8
 * 0000000140275CBA: add     rsp, 8
 * 0000000140275CBE: call    loc_140275CB1
 * 0000000140275CC3: add     rsp, 8
 * 0000000140275CC7: call    loc_140275CBA
 * 0000000140275CCC: add     rsp, 8
 * 0000000140275CD0: call    loc_140275CC3
 * 0000000140275CD5: add     rsp, 8
 * 0000000140275CD9: call    loc_140275CCC
 * 0000000140275CDE: add     rsp, 8
 * 0000000140275CE2: call    loc_140275CD5
 * 0000000140275CE7: add     rsp, 8
 * 0000000140275CEB: call    loc_140275CDE
 * 0000000140275CF0: add     rsp, 8
 * 0000000140275CF4: call    loc_140275CE7
 * 0000000140275CF9: add     rsp, 8
 * 0000000140275CFD: call    loc_140275CF0
 * 0000000140275D02: add     rsp, 8
 * 0000000140275D06: call    loc_140275CF9
 * 0000000140275D0B: add     rsp, 8
 * 0000000140275D0F: call    loc_140275D02
 * 0000000140275D14: add     rsp, 8
 * 0000000140275D18: call    loc_140275D0B
 * 0000000140275D1D: add     rsp, 8
 * 0000000140275D21: call    loc_140275D14
 * 0000000140275D26: add     rsp, 8
 * 0000000140275D2A: call    loc_140275D1D
 * 0000000140275D2F: add     rsp, 8
 * 0000000140275D33: call    loc_140275D26
 * 0000000140275D38: add     rsp, 8
 * 0000000140275D3C: call    loc_140275D2F
 * 0000000140275D41: add     rsp, 8
 * 0000000140275D45: call    loc_140275D38
 * 0000000140275D4A: add     rsp, 8
 * 0000000140275D4E: mov     eax, 0DADAh
 * 0000000140275D53: test    edx, 100h
 * 0000000140275D59: jz      short loc_140275D60
 * 0000000140275D5B: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140275D60: lfence
 * 0000000140275D63: test    byte ptr [r10+3], 80h
 * 0000000140275D68: jz      short loc_140275DAC
 * 0000000140275D6A: mov     ecx, 0C0000102h
 * 0000000140275D6F: rdmsr
 * 0000000140275D71: shl     rdx, 20h
 * 0000000140275D75: or      rax, rdx
 * 0000000140275D78: cmp     rax, cs:MmUserProbeAddress
 * 0000000140275D7F: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140275D87: cmp     [r10+0F0h], rax
 * 0000000140275D8E: jz      short loc_140275DAC
 * 0000000140275D90: mov     rdx, [r10+1F0h]
 * 0000000140275D97: bts     dword ptr [r10+74h], 8
 * 0000000140275D9D: dec     word ptr [r10+1E6h]
 * 0000000140275DA5: mov     [rdx+80h], rax
 * 0000000140275DAC: test    byte ptr [r10+3], 3
 * 0000000140275DB1: mov     word ptr [rbp+80h], 0
 * 0000000140275DBA: jz      short loc_140275DC1
 * 0000000140275DBC: call    KiSaveDebugRegisterState
 * 0000000140275DC1: cld
 * 0000000140275DC2: stmxcsr dword ptr [rbp-54h]
 * 0000000140275DC6: ldmxcsr dword ptr gs:180h
 * 0000000140275DCF: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140275DD3: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140275DD7: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140275DDB: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140275DDF: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140275DE3: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140275DE7: sub     qword ptr [rbp+0E8h], 2
 * 0000000140275DEF: and     dword ptr [rbp+0ECh], 0
 * 0000000140275DF6: sti
 * 0000000140275DF7: mov     ecx, 0C000001Dh
 * 0000000140275DFC: xor     edx, edx
 * 0000000140275DFE: mov     r8, [rbp+0E8h]
 * 0000000140275E05: call    KiExceptionDispatch
 * 0000000140275E0A: nop
 * 0000000140275E0B: retn
 */
