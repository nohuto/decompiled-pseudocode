/*
 * XREFs of KiOverflowTrap @ 0x14018EAC0
 * Callers:
 *     KiOverflowTrapShadow @ 0x140274200 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x14018EAC0 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x14018EAC0
 * Reason: Hex-Rays returned no pseudocode for 0x14018EAC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018EAC0: sub     rsp, 8
 * 000000014018EAC4: push    rbp
 * 000000014018EAC5: sub     rsp, 158h
 * 000000014018EACC: lea     rbp, [rsp+80h]
 * 000000014018EAD4: mov     [rbp+0E8h+var_13D], 1
 * 000000014018EAD8: mov     [rbp+0E8h+var_138], rax
 * 000000014018EADC: mov     [rbp+0E8h+var_130], rcx
 * 000000014018EAE0: mov     [rbp+0E8h+var_128], rdx
 * 000000014018EAE4: mov     [rbp+0E8h+var_120], r8
 * 000000014018EAE8: mov     [rbp+0E8h+var_118], r9
 * 000000014018EAEC: mov     [rbp+0E8h+var_110], r10
 * 000000014018EAF0: mov     [rbp+0E8h+var_108], r11
 * 000000014018EAF4: test    [rbp+0E8h+arg_0], 1
 * 000000014018EAFB: jnz     short loc_14018EB2C
 * 000000014018EAFD: lfence
 * 000000014018EB00: test    word ptr gs:2EB0h, 1
 * 000000014018EB0B: jnz     short loc_14018EB15
 * 000000014018EB0D: lfence
 * 000000014018EB10: jmp     loc_14018ED51
 * 000000014018EB15: movzx   eax, word ptr gs:2EB4h
 * 000000014018EB1E: mov     ecx, 48h ; 'H'
 * 000000014018EB23: xor     edx, edx
 * 000000014018EB25: wrmsr
 * 000000014018EB27: jmp     loc_14018ED51
 * 000000014018EB2C: test    cs:KiKvaShadow, 1
 * 000000014018EB33: jnz     short loc_14018EB38
 * 000000014018EB35: swapgs
 * 000000014018EB38: lfence
 * 000000014018EB3B: mov     r10, gs:188h
 * 000000014018EB44: mov     rcx, gs:188h
 * 000000014018EB4D: mov     rcx, [rcx+220h]
 * 000000014018EB54: mov     rcx, [rcx+7A0h]
 * 000000014018EB5B: mov     gs:2EA8h, rcx
 * 000000014018EB64: movzx   eax, word ptr gs:2EB6h
 * 000000014018EB6D: cmp     gs:2EB4h, ax
 * 000000014018EB76: jz      short loc_14018EB8A
 * 000000014018EB78: mov     gs:2EB4h, ax
 * 000000014018EB81: mov     ecx, 48h ; 'H'
 * 000000014018EB86: xor     edx, edx
 * 000000014018EB88: wrmsr
 * 000000014018EB8A: movzx   edx, word ptr gs:2EB0h
 * 000000014018EB93: test    edx, 8
 * 000000014018EB99: jz      short loc_14018EBB2
 * 000000014018EB9B: mov     eax, 1
 * 000000014018EBA0: xor     edx, edx
 * 000000014018EBA2: mov     ecx, 49h ; 'I'
 * 000000014018EBA7: wrmsr
 * 000000014018EBA9: movzx   edx, word ptr gs:2EB0h
 * 000000014018EBB2: test    edx, 2
 * 000000014018EBB8: jz      loc_14018ECE3
 * 000000014018EBBE: call    loc_14018ECD1
 * 000000014018EBC3: add     rsp, 8
 * 000000014018EBC7: call    loc_14018ECDA
 * 000000014018EBCC: add     rsp, 8
 * 000000014018EBD0: call    loc_14018EBC3
 * 000000014018EBD5: add     rsp, 8
 * 000000014018EBD9: call    loc_14018EBCC
 * 000000014018EBDE: add     rsp, 8
 * 000000014018EBE2: call    loc_14018EBD5
 * 000000014018EBE7: add     rsp, 8
 * 000000014018EBEB: call    loc_14018EBDE
 * 000000014018EBF0: add     rsp, 8
 * 000000014018EBF4: call    loc_14018EBE7
 * 000000014018EBF9: add     rsp, 8
 * 000000014018EBFD: call    loc_14018EBF0
 * 000000014018EC02: add     rsp, 8
 * 000000014018EC06: call    loc_14018EBF9
 * 000000014018EC0B: add     rsp, 8
 * 000000014018EC0F: call    loc_14018EC02
 * 000000014018EC14: add     rsp, 8
 * 000000014018EC18: call    loc_14018EC0B
 * 000000014018EC1D: add     rsp, 8
 * 000000014018EC21: call    loc_14018EC14
 * 000000014018EC26: add     rsp, 8
 * 000000014018EC2A: call    loc_14018EC1D
 * 000000014018EC2F: add     rsp, 8
 * 000000014018EC33: call    loc_14018EC26
 * 000000014018EC38: add     rsp, 8
 * 000000014018EC3C: call    loc_14018EC2F
 * 000000014018EC41: add     rsp, 8
 * 000000014018EC45: call    loc_14018EC38
 * 000000014018EC4A: add     rsp, 8
 * 000000014018EC4E: call    loc_14018EC41
 * 000000014018EC53: add     rsp, 8
 * 000000014018EC57: call    loc_14018EC4A
 * 000000014018EC5C: add     rsp, 8
 * 000000014018EC60: call    loc_14018EC53
 * 000000014018EC65: add     rsp, 8
 * 000000014018EC69: call    loc_14018EC5C
 * 000000014018EC6E: add     rsp, 8
 * 000000014018EC72: call    loc_14018EC65
 * 000000014018EC77: add     rsp, 8
 * 000000014018EC7B: call    loc_14018EC6E
 * 000000014018EC80: add     rsp, 8
 * 000000014018EC84: call    loc_14018EC77
 * 000000014018EC89: add     rsp, 8
 * 000000014018EC8D: call    loc_14018EC80
 * 000000014018EC92: add     rsp, 8
 * 000000014018EC96: call    loc_14018EC89
 * 000000014018EC9B: add     rsp, 8
 * 000000014018EC9F: call    loc_14018EC92
 * 000000014018ECA4: add     rsp, 8
 * 000000014018ECA8: call    loc_14018EC9B
 * 000000014018ECAD: add     rsp, 8
 * 000000014018ECB1: call    loc_14018ECA4
 * 000000014018ECB6: add     rsp, 8
 * 000000014018ECBA: call    loc_14018ECAD
 * 000000014018ECBF: add     rsp, 8
 * 000000014018ECC3: call    loc_14018ECB6
 * 000000014018ECC8: add     rsp, 8
 * 000000014018ECCC: call    loc_14018ECBF
 * 000000014018ECD1: add     rsp, 8
 * 000000014018ECD5: call    loc_14018ECC8
 * 000000014018ECDA: add     rsp, 8
 * 000000014018ECDE: mov     eax, 0DADAh
 * 000000014018ECE3: test    edx, 100h
 * 000000014018ECE9: jz      short loc_14018ECF0
 * 000000014018ECEB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014018ECF0: lfence
 * 000000014018ECF3: test    byte ptr [r10+3], 80h
 * 000000014018ECF8: jz      short loc_14018ED3C
 * 000000014018ECFA: mov     ecx, 0C0000102h
 * 000000014018ECFF: rdmsr
 * 000000014018ED01: shl     rdx, 20h
 * 000000014018ED05: or      rax, rdx
 * 000000014018ED08: cmp     rax, cs:MmUserProbeAddress
 * 000000014018ED0F: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018ED17: cmp     [r10+0F0h], rax
 * 000000014018ED1E: jz      short loc_14018ED3C
 * 000000014018ED20: mov     rdx, [r10+1F0h]
 * 000000014018ED27: bts     dword ptr [r10+74h], 8
 * 000000014018ED2D: dec     word ptr [r10+1E6h]
 * 000000014018ED35: mov     [rdx+80h], rax
 * 000000014018ED3C: test    byte ptr [r10+3], 3
 * 000000014018ED41: mov     [rbp+0E8h+var_68], 0
 * 000000014018ED4A: jz      short loc_14018ED51
 * 000000014018ED4C: call    KiSaveDebugRegisterState
 * 000000014018ED51: cld
 * 000000014018ED52: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018ED56: ldmxcsr dword ptr gs:180h
 * 000000014018ED5F: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018ED63: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018ED67: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018ED6B: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018ED6F: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018ED73: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018ED77: test    [rbp+0E8h+arg_8], 200h
 * 000000014018ED82: jz      short loc_14018ED85
 * 000000014018ED84: sti
 * 000000014018ED85: mov     ecx, 0C0000095h
 * 000000014018ED8A: xor     edx, edx
 * 000000014018ED8C: mov     r8, [rbp+0E8h]
 * 000000014018ED93: dec     r8
 * 000000014018ED96: call    KiExceptionDispatch
 * 000000014018ED9B: nop
 * 000000014018ED9C: retn
 */
