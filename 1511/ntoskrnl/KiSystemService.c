/*
 * XREFs of KiSystemService @ 0x140164CC0
 * Callers:
 *     KiSystemServiceShadow @ 0x140224C80 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x140164CC0 (KiSystemService.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x140164CC0
 * Reason: Hex-Rays returned no pseudocode for 0x140164CC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140164CC0: test    cs:KiKvaShadow, 1
 * 0000000140164CC7: jnz     short loc_140164CCC
 * 0000000140164CC9: swapgs
 * 0000000140164CCC: mov     rcx, r10
 * 0000000140164CCF: sub     rsp, 8
 * 0000000140164CD3: push    rbp
 * 0000000140164CD4: sub     rsp, 158h
 * 0000000140164CDB: lea     rbp, [rsp+168h+var_E8]
 * 0000000140164CE3: mov     [rbp+0C0h], rbx
 * 0000000140164CEA: mov     [rbp+0C8h], rdi
 * 0000000140164CF1: mov     [rbp+0D0h], rsi
 * 0000000140164CF8: mov     [rbp-50h], rax
 * 0000000140164CFC: mov     [rbp-48h], rcx
 * 0000000140164D00: mov     [rbp-40h], rdx
 * 0000000140164D04: test    byte ptr gs:2EB0h, 1
 * 0000000140164D0D: jz      loc_140164E70
 * 0000000140164D13: mov     rcx, gs:188h
 * 0000000140164D1C: mov     rcx, [rcx+220h]
 * 0000000140164D23: mov     rcx, [rcx+790h]
 * 0000000140164D2A: mov     gs:2EA8h, rcx
 * 0000000140164D33: mov     ecx, 48h ; 'H'
 * 0000000140164D38: mov     eax, 1
 * 0000000140164D3D: xor     edx, edx
 * 0000000140164D3F: wrmsr
 * 0000000140164D41: test    byte ptr gs:2EB0h, 4
 * 0000000140164D4A: jnz     loc_140164E70
 * 0000000140164D50: call    loc_140164E63
 * 0000000140164D55: add     rsp, 8
 * 0000000140164D59: call    loc_140164E6C
 * 0000000140164D5E: add     rsp, 8
 * 0000000140164D62: call    loc_140164D55
 * 0000000140164D67: add     rsp, 8
 * 0000000140164D6B: call    loc_140164D5E
 * 0000000140164D70: add     rsp, 8
 * 0000000140164D74: call    loc_140164D67
 * 0000000140164D79: add     rsp, 8
 * 0000000140164D7D: call    loc_140164D70
 * 0000000140164D82: add     rsp, 8
 * 0000000140164D86: call    loc_140164D79
 * 0000000140164D8B: add     rsp, 8
 * 0000000140164D8F: call    loc_140164D82
 * 0000000140164D94: add     rsp, 8
 * 0000000140164D98: call    loc_140164D8B
 * 0000000140164D9D: add     rsp, 8
 * 0000000140164DA1: call    loc_140164D94
 * 0000000140164DA6: add     rsp, 8
 * 0000000140164DAA: call    loc_140164D9D
 * 0000000140164DAF: add     rsp, 8
 * 0000000140164DB3: call    loc_140164DA6
 * 0000000140164DB8: add     rsp, 8
 * 0000000140164DBC: call    loc_140164DAF
 * 0000000140164DC1: add     rsp, 8
 * 0000000140164DC5: call    loc_140164DB8
 * 0000000140164DCA: add     rsp, 8
 * 0000000140164DCE: call    loc_140164DC1
 * 0000000140164DD3: add     rsp, 8
 * 0000000140164DD7: call    loc_140164DCA
 * 0000000140164DDC: add     rsp, 8
 * 0000000140164DE0: call    loc_140164DD3
 * 0000000140164DE5: add     rsp, 8
 * 0000000140164DE9: call    loc_140164DDC
 * 0000000140164DEE: add     rsp, 8
 * 0000000140164DF2: call    loc_140164DE5
 * 0000000140164DF7: add     rsp, 8
 * 0000000140164DFB: call    loc_140164DEE
 * 0000000140164E00: add     rsp, 8
 * 0000000140164E04: call    loc_140164DF7
 * 0000000140164E09: add     rsp, 8
 * 0000000140164E0D: call    loc_140164E00
 * 0000000140164E12: add     rsp, 8
 * 0000000140164E16: call    loc_140164E09
 * 0000000140164E1B: add     rsp, 8
 * 0000000140164E1F: call    loc_140164E12
 * 0000000140164E24: add     rsp, 8
 * 0000000140164E28: call    loc_140164E1B
 * 0000000140164E2D: add     rsp, 8
 * 0000000140164E31: call    loc_140164E24
 * 0000000140164E36: add     rsp, 8
 * 0000000140164E3A: call    loc_140164E2D
 * 0000000140164E3F: add     rsp, 8
 * 0000000140164E43: call    loc_140164E36
 * 0000000140164E48: add     rsp, 8
 * 0000000140164E4C: call    loc_140164E3F
 * 0000000140164E51: add     rsp, 8
 * 0000000140164E55: call    loc_140164E48
 * 0000000140164E5A: add     rsp, 8
 * 0000000140164E5E: call    loc_140164E51
 * 0000000140164E63: add     rsp, 8
 * 0000000140164E67: call    loc_140164E5A
 * 0000000140164E6C: add     rsp, 8
 * 0000000140164E70: lfence
 * 0000000140164E73: jmp     KiSystemServiceUser
 * 0000000140164E78: retn
 */
