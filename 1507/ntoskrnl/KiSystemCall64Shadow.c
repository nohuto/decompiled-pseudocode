/*
 * XREFs of KiSystemCall64Shadow @ 0x140275E40
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall64Shadow @ 0x140275E40 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140275E40
 * Reason: Hex-Rays returned no pseudocode for 0x140275E40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140275E40: swapgs
 * 0000000140275E43: mov     gs:7010h, rsp
 * 0000000140275E4C: mov     rsp, gs:7000h
 * 0000000140275E55: bt      dword ptr gs:7018h, 1
 * 0000000140275E5F: jb      short loc_140275E64
 * 0000000140275E61: mov     cr3, rsp
 * 0000000140275E64: mov     rsp, gs:7008h
 * 0000000140275E6D: push    2Bh ; '+'
 * 0000000140275E6F: push    qword ptr gs:7010h
 * 0000000140275E77: push    r11
 * 0000000140275E79: push    33h ; '3'
 * 0000000140275E7B: push    rcx
 * 0000000140275E7C: mov     rcx, r10
 * 0000000140275E7F: sub     rsp, 8
 * 0000000140275E83: push    rbp
 * 0000000140275E84: sub     rsp, 158h
 * 0000000140275E8B: lea     rbp, [rsp+190h+var_110]
 * 0000000140275E93: mov     [rbp+0C0h], rbx
 * 0000000140275E9A: mov     [rbp+0C8h], rdi
 * 0000000140275EA1: mov     [rbp+0D0h], rsi
 * 0000000140275EA8: jmp     short loc_140275ED3
 * 0000000140275EAA: mov     [rbx+90h], rsp
 * 0000000140275EB1: mov     edi, eax
 * 0000000140275EB3: shr     edi, 7
 * 0000000140275EB6: and     edi, 20h
 * 0000000140275EB9: and     eax, 0FFFh
 * 0000000140275EBE: lea     r10, KeServiceDescriptorTable
 * 0000000140275EC5: lea     r11, KeServiceDescriptorTableShadow
 * 0000000140275ECC: test    dword ptr [rbx+78h], 40h
 * 0000000140275ED3: mov     [rbp-50h], rax
 * 0000000140275ED7: mov     [rbp-48h], rcx
 * 0000000140275EDB: mov     [rbp-40h], rdx
 * 0000000140275EDF: mov     rcx, gs:188h
 * 0000000140275EE8: mov     rcx, [rcx+220h]
 * 0000000140275EEF: mov     rcx, [rcx+7A0h]
 * 0000000140275EF6: mov     gs:2EA8h, rcx
 * 0000000140275EFF: movzx   eax, word ptr gs:2EB6h
 * 0000000140275F08: cmp     gs:2EB4h, ax
 * 0000000140275F11: jz      short loc_140275F25
 * 0000000140275F13: mov     gs:2EB4h, ax
 * 0000000140275F1C: mov     ecx, 48h ; 'H'
 * 0000000140275F21: xor     edx, edx
 * 0000000140275F23: wrmsr
 * 0000000140275F25: movzx   edx, word ptr gs:2EB0h
 * 0000000140275F2E: test    edx, 8
 * 0000000140275F34: jz      short loc_140275F4D
 * 0000000140275F36: mov     eax, 1
 * 0000000140275F3B: xor     edx, edx
 * 0000000140275F3D: mov     ecx, 49h ; 'I'
 * 0000000140275F42: wrmsr
 * 0000000140275F44: movzx   edx, word ptr gs:2EB0h
 * 0000000140275F4D: test    edx, 2
 * 0000000140275F53: jz      loc_14027607E
 * 0000000140275F59: call    loc_14027606C
 * 0000000140275F5E: add     rsp, 8
 * 0000000140275F62: call    loc_140276075
 * 0000000140275F67: add     rsp, 8
 * 0000000140275F6B: call    loc_140275F5E
 * 0000000140275F70: add     rsp, 8
 * 0000000140275F74: call    loc_140275F67
 * 0000000140275F79: add     rsp, 8
 * 0000000140275F7D: call    loc_140275F70
 * 0000000140275F82: add     rsp, 8
 * 0000000140275F86: call    loc_140275F79
 * 0000000140275F8B: add     rsp, 8
 * 0000000140275F8F: call    loc_140275F82
 * 0000000140275F94: add     rsp, 8
 * 0000000140275F98: call    loc_140275F8B
 * 0000000140275F9D: add     rsp, 8
 * 0000000140275FA1: call    loc_140275F94
 * 0000000140275FA6: add     rsp, 8
 * 0000000140275FAA: call    loc_140275F9D
 * 0000000140275FAF: add     rsp, 8
 * 0000000140275FB3: call    loc_140275FA6
 * 0000000140275FB8: add     rsp, 8
 * 0000000140275FBC: call    loc_140275FAF
 * 0000000140275FC1: add     rsp, 8
 * 0000000140275FC5: call    loc_140275FB8
 * 0000000140275FCA: add     rsp, 8
 * 0000000140275FCE: call    loc_140275FC1
 * 0000000140275FD3: add     rsp, 8
 * 0000000140275FD7: call    loc_140275FCA
 * 0000000140275FDC: add     rsp, 8
 * 0000000140275FE0: call    loc_140275FD3
 * 0000000140275FE5: add     rsp, 8
 * 0000000140275FE9: call    loc_140275FDC
 * 0000000140275FEE: add     rsp, 8
 * 0000000140275FF2: call    loc_140275FE5
 * 0000000140275FF7: add     rsp, 8
 * 0000000140275FFB: call    loc_140275FEE
 * 0000000140276000: add     rsp, 8
 * 0000000140276004: call    loc_140275FF7
 * 0000000140276009: add     rsp, 8
 * 000000014027600D: call    loc_140276000
 * 0000000140276012: add     rsp, 8
 * 0000000140276016: call    loc_140276009
 * 000000014027601B: add     rsp, 8
 * 000000014027601F: call    loc_140276012
 * 0000000140276024: add     rsp, 8
 * 0000000140276028: call    loc_14027601B
 * 000000014027602D: add     rsp, 8
 * 0000000140276031: call    loc_140276024
 * 0000000140276036: add     rsp, 8
 * 000000014027603A: call    loc_14027602D
 * 000000014027603F: add     rsp, 8
 * 0000000140276043: call    loc_140276036
 * 0000000140276048: add     rsp, 8
 * 000000014027604C: call    loc_14027603F
 * 0000000140276051: add     rsp, 8
 * 0000000140276055: call    loc_140276048
 * 000000014027605A: add     rsp, 8
 * 000000014027605E: call    loc_140276051
 * 0000000140276063: add     rsp, 8
 * 0000000140276067: call    loc_14027605A
 * 000000014027606C: add     rsp, 8
 * 0000000140276070: call    loc_140276063
 * 0000000140276075: add     rsp, 8
 * 0000000140276079: mov     eax, 0DADAh
 * 000000014027607E: test    edx, 100h
 * 0000000140276084: jz      short loc_14027608B
 * 0000000140276086: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014027608B: lfence
 * 000000014027608E: lfence
 * 0000000140276091: jmp     KiSystemServiceUser
 * 0000000140276096: retn
 */
