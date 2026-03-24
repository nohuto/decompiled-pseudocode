/*
 * XREFs of KiXmmException @ 0x140163C40
 * Callers:
 *     KiXmmExceptionShadow @ 0x140224980 (KiXmmExceptionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiXmmException @ 0x140163C40 (KiXmmException.c)
 *     KiBugCheckDispatch @ 0x140165B40 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiXmmException @ 0x140163C40
 * Reason: Hex-Rays returned no pseudocode for 0x140163C40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140163C40: sub     rsp, 8
 * 0000000140163C44: push    rbp
 * 0000000140163C45: sub     rsp, 158h
 * 0000000140163C4C: lea     rbp, [rsp+80h]
 * 0000000140163C54: mov     [rbp+0E8h+var_13D], 1
 * 0000000140163C58: mov     [rbp+0E8h+var_138], rax
 * 0000000140163C5C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140163C60: mov     [rbp+0E8h+var_128], rdx
 * 0000000140163C64: mov     [rbp+0E8h+var_120], r8
 * 0000000140163C68: mov     [rbp+0E8h+var_118], r9
 * 0000000140163C6C: mov     [rbp+0E8h+var_110], r10
 * 0000000140163C70: mov     [rbp+0E8h+var_108], r11
 * 0000000140163C74: test    byte ptr [rbp+0E8h+arg_0], 1
 * 0000000140163C7B: jnz     loc_140163DE1
 * 0000000140163C81: cmp     byte ptr gs:187h, 0
 * 0000000140163C8A: jz      loc_140163FB1
 * 0000000140163C90: test    byte ptr gs:2EB0h, 1
 * 0000000140163C99: jz      loc_140163FB1
 * 0000000140163C9F: mov     ecx, 48h ; 'H'
 * 0000000140163CA4: mov     eax, 1
 * 0000000140163CA9: xor     edx, edx
 * 0000000140163CAB: wrmsr
 * 0000000140163CAD: test    byte ptr gs:2EB0h, 4
 * 0000000140163CB6: jnz     loc_140163FB1
 * 0000000140163CBC: call    loc_140163DCF
 * 0000000140163CC1: add     rsp, 8
 * 0000000140163CC5: call    loc_140163DD8
 * 0000000140163CCA: add     rsp, 8
 * 0000000140163CCE: call    loc_140163CC1
 * 0000000140163CD3: add     rsp, 8
 * 0000000140163CD7: call    loc_140163CCA
 * 0000000140163CDC: add     rsp, 8
 * 0000000140163CE0: call    loc_140163CD3
 * 0000000140163CE5: add     rsp, 8
 * 0000000140163CE9: call    loc_140163CDC
 * 0000000140163CEE: add     rsp, 8
 * 0000000140163CF2: call    loc_140163CE5
 * 0000000140163CF7: add     rsp, 8
 * 0000000140163CFB: call    loc_140163CEE
 * 0000000140163D00: add     rsp, 8
 * 0000000140163D04: call    loc_140163CF7
 * 0000000140163D09: add     rsp, 8
 * 0000000140163D0D: call    loc_140163D00
 * 0000000140163D12: add     rsp, 8
 * 0000000140163D16: call    loc_140163D09
 * 0000000140163D1B: add     rsp, 8
 * 0000000140163D1F: call    loc_140163D12
 * 0000000140163D24: add     rsp, 8
 * 0000000140163D28: call    loc_140163D1B
 * 0000000140163D2D: add     rsp, 8
 * 0000000140163D31: call    loc_140163D24
 * 0000000140163D36: add     rsp, 8
 * 0000000140163D3A: call    loc_140163D2D
 * 0000000140163D3F: add     rsp, 8
 * 0000000140163D43: call    loc_140163D36
 * 0000000140163D48: add     rsp, 8
 * 0000000140163D4C: call    loc_140163D3F
 * 0000000140163D51: add     rsp, 8
 * 0000000140163D55: call    loc_140163D48
 * 0000000140163D5A: add     rsp, 8
 * 0000000140163D5E: call    loc_140163D51
 * 0000000140163D63: add     rsp, 8
 * 0000000140163D67: call    loc_140163D5A
 * 0000000140163D6C: add     rsp, 8
 * 0000000140163D70: call    loc_140163D63
 * 0000000140163D75: add     rsp, 8
 * 0000000140163D79: call    loc_140163D6C
 * 0000000140163D7E: add     rsp, 8
 * 0000000140163D82: call    loc_140163D75
 * 0000000140163D87: add     rsp, 8
 * 0000000140163D8B: call    loc_140163D7E
 * 0000000140163D90: add     rsp, 8
 * 0000000140163D94: call    loc_140163D87
 * 0000000140163D99: add     rsp, 8
 * 0000000140163D9D: call    loc_140163D90
 * 0000000140163DA2: add     rsp, 8
 * 0000000140163DA6: call    loc_140163D99
 * 0000000140163DAB: add     rsp, 8
 * 0000000140163DAF: call    loc_140163DA2
 * 0000000140163DB4: add     rsp, 8
 * 0000000140163DB8: call    loc_140163DAB
 * 0000000140163DBD: add     rsp, 8
 * 0000000140163DC1: call    loc_140163DB4
 * 0000000140163DC6: add     rsp, 8
 * 0000000140163DCA: call    loc_140163DBD
 * 0000000140163DCF: add     rsp, 8
 * 0000000140163DD3: call    loc_140163DC6
 * 0000000140163DD8: add     rsp, 8
 * 0000000140163DDC: jmp     loc_140163FB1
 * 0000000140163DE1: test    cs:KiKvaShadow, 1
 * 0000000140163DE8: jnz     short loc_140163DED
 * 0000000140163DEA: swapgs
 * 0000000140163DED: mov     r10, gs:188h
 * 0000000140163DF6: test    byte ptr gs:2EB0h, 1
 * 0000000140163DFF: jz      loc_140163F62
 * 0000000140163E05: mov     rcx, gs:188h
 * 0000000140163E0E: mov     rcx, [rcx+220h]
 * 0000000140163E15: mov     rcx, [rcx+790h]
 * 0000000140163E1C: mov     gs:2EA8h, rcx
 * 0000000140163E25: mov     ecx, 48h ; 'H'
 * 0000000140163E2A: mov     eax, 1
 * 0000000140163E2F: xor     edx, edx
 * 0000000140163E31: wrmsr
 * 0000000140163E33: test    byte ptr gs:2EB0h, 4
 * 0000000140163E3C: jnz     loc_140163F62
 * 0000000140163E42: call    loc_140163F55
 * 0000000140163E47: add     rsp, 8
 * 0000000140163E4B: call    loc_140163F5E
 * 0000000140163E50: add     rsp, 8
 * 0000000140163E54: call    loc_140163E47
 * 0000000140163E59: add     rsp, 8
 * 0000000140163E5D: call    loc_140163E50
 * 0000000140163E62: add     rsp, 8
 * 0000000140163E66: call    loc_140163E59
 * 0000000140163E6B: add     rsp, 8
 * 0000000140163E6F: call    loc_140163E62
 * 0000000140163E74: add     rsp, 8
 * 0000000140163E78: call    loc_140163E6B
 * 0000000140163E7D: add     rsp, 8
 * 0000000140163E81: call    loc_140163E74
 * 0000000140163E86: add     rsp, 8
 * 0000000140163E8A: call    loc_140163E7D
 * 0000000140163E8F: add     rsp, 8
 * 0000000140163E93: call    loc_140163E86
 * 0000000140163E98: add     rsp, 8
 * 0000000140163E9C: call    loc_140163E8F
 * 0000000140163EA1: add     rsp, 8
 * 0000000140163EA5: call    loc_140163E98
 * 0000000140163EAA: add     rsp, 8
 * 0000000140163EAE: call    loc_140163EA1
 * 0000000140163EB3: add     rsp, 8
 * 0000000140163EB7: call    loc_140163EAA
 * 0000000140163EBC: add     rsp, 8
 * 0000000140163EC0: call    loc_140163EB3
 * 0000000140163EC5: add     rsp, 8
 * 0000000140163EC9: call    loc_140163EBC
 * 0000000140163ECE: add     rsp, 8
 * 0000000140163ED2: call    loc_140163EC5
 * 0000000140163ED7: add     rsp, 8
 * 0000000140163EDB: call    loc_140163ECE
 * 0000000140163EE0: add     rsp, 8
 * 0000000140163EE4: call    loc_140163ED7
 * 0000000140163EE9: add     rsp, 8
 * 0000000140163EED: call    loc_140163EE0
 * 0000000140163EF2: add     rsp, 8
 * 0000000140163EF6: call    loc_140163EE9
 * 0000000140163EFB: add     rsp, 8
 * 0000000140163EFF: call    loc_140163EF2
 * 0000000140163F04: add     rsp, 8
 * 0000000140163F08: call    loc_140163EFB
 * 0000000140163F0D: add     rsp, 8
 * 0000000140163F11: call    loc_140163F04
 * 0000000140163F16: add     rsp, 8
 * 0000000140163F1A: call    loc_140163F0D
 * 0000000140163F1F: add     rsp, 8
 * 0000000140163F23: call    loc_140163F16
 * 0000000140163F28: add     rsp, 8
 * 0000000140163F2C: call    loc_140163F1F
 * 0000000140163F31: add     rsp, 8
 * 0000000140163F35: call    loc_140163F28
 * 0000000140163F3A: add     rsp, 8
 * 0000000140163F3E: call    loc_140163F31
 * 0000000140163F43: add     rsp, 8
 * 0000000140163F47: call    loc_140163F3A
 * 0000000140163F4C: add     rsp, 8
 * 0000000140163F50: call    loc_140163F43
 * 0000000140163F55: add     rsp, 8
 * 0000000140163F59: call    loc_140163F4C
 * 0000000140163F5E: add     rsp, 8
 * 0000000140163F62: test    byte ptr [r10+3], 80h
 * 0000000140163F67: jz      short loc_140163F9C
 * 0000000140163F69: mov     ecx, 0C0000102h
 * 0000000140163F6E: rdmsr
 * 0000000140163F70: shl     rdx, 20h
 * 0000000140163F74: or      rax, rdx
 * 0000000140163F77: cmp     [r10+0F0h], rax
 * 0000000140163F7E: jz      short loc_140163F9C
 * 0000000140163F80: mov     rdx, [r10+1F0h]
 * 0000000140163F87: bts     dword ptr [r10+74h], 8
 * 0000000140163F8D: dec     word ptr [r10+1E6h]
 * 0000000140163F95: mov     [rdx+80h], rax
 * 0000000140163F9C: test    byte ptr [r10+3], 3
 * 0000000140163FA1: mov     [rbp+0E8h+var_68], 0
 * 0000000140163FAA: jz      short loc_140163FB1
 * 0000000140163FAC: call    KiSaveDebugRegisterState
 * 0000000140163FB1: cld
 * 0000000140163FB2: lfence
 * 0000000140163FB5: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140163FB9: ldmxcsr dword ptr gs:180h
 * 0000000140163FC2: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140163FC6: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140163FCA: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140163FCE: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140163FD2: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140163FD6: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140163FDA: mov     ax, word ptr [rbp+0E8h+var_13C]
 * 0000000140163FDE: test    [rbp+0E8h+arg_8], 200h
 * 0000000140163FE8: jz      short loc_140163FEB
 * 0000000140163FEA: sti
 * 0000000140163FEB: mov     cx, ax
 * 0000000140163FEE: shr     cx, 7
 * 0000000140163FF2: and     cx, 3Fh
 * 0000000140163FF6: not     cx
 * 0000000140163FF9: movzx   r10d, ax
 * 0000000140163FFD: and     ax, cx
 * 0000000140164000: mov     edx, 2
 * 0000000140164005: mov     r8, [rbp+0E8h]
 * 000000014016400C: xor     r9, r9
 * 000000014016400F: cmp     [rbp+0E8h+arg_0], 23h ; '#'
 * 0000000140164017: jz      short loc_140164054
 * 0000000140164019: mov     ecx, 0C0000090h
 * 000000014016401E: test    al, 1
 * 0000000140164020: jnz     short loc_14016404F
 * 0000000140164022: mov     ecx, 0C000008Eh
 * 0000000140164027: test    al, 4
 * 0000000140164029: jnz     short loc_14016404F
 * 000000014016402B: mov     ecx, 0C0000090h
 * 0000000140164030: test    al, 2
 * 0000000140164032: jnz     short loc_14016404F
 * 0000000140164034: mov     ecx, 0C0000091h
 * 0000000140164039: test    al, 8
 * 000000014016403B: jnz     short loc_14016404F
 * 000000014016403D: mov     ecx, 0C0000093h
 * 0000000140164042: test    al, 10h
 * 0000000140164044: jnz     short loc_14016404F
 * 0000000140164046: mov     ecx, 0C000008Fh
 * 000000014016404B: test    al, 20h
 * 000000014016404D: jz      short loc_140164076
 * 000000014016404F: call    KiExceptionDispatch
 * 0000000140164054: mov     ecx, 0C00002B5h
 * 0000000140164059: test    al, 1
 * 000000014016405B: jnz     short loc_14016404F
 * 000000014016405D: test    al, 4
 * 000000014016405F: jnz     short loc_14016404F
 * 0000000140164061: test    al, 2
 * 0000000140164063: jnz     short loc_14016404F
 * 0000000140164065: mov     ecx, 0C00002B4h
 * 000000014016406A: test    al, 8
 * 000000014016406C: jnz     short loc_14016404F
 * 000000014016406E: test    al, 10h
 * 0000000140164070: jnz     short loc_14016404F
 * 0000000140164072: test    al, 20h
 * 0000000140164074: jnz     short loc_14016404F
 * 0000000140164076: mov     r10, [rbp+0E8h]
 * 000000014016407D: mov     r9, cr4
 * 0000000140164081: mov     r8, cr0
 * 0000000140164085: mov     edx, 9
 * 000000014016408A: mov     ecx, 7Fh
 * 000000014016408F: call    KiBugCheckDispatch
 */
