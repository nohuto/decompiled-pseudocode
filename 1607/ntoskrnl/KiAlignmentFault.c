/*
 * XREFs of KiAlignmentFault @ 0x14016CE40
 * Callers:
 *     KiAlignmentFaultShadow @ 0x14023F800 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x14016CE40 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x14016CE40
 * Reason: Hex-Rays returned no pseudocode for 0x14016CE40
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016CE40: push    rbp
 * 000000014016CE41: sub     rsp, 158h
 * 000000014016CE48: lea     rbp, [rsp+80h]
 * 000000014016CE50: mov     [rbp+0D8h+var_12D], 1
 * 000000014016CE54: mov     [rbp+0D8h+var_128], rax
 * 000000014016CE58: mov     [rbp+0D8h+var_120], rcx
 * 000000014016CE5C: mov     [rbp+0D8h+var_118], rdx
 * 000000014016CE60: mov     [rbp+0D8h+var_110], r8
 * 000000014016CE64: mov     [rbp+0D8h+var_108], r9
 * 000000014016CE68: mov     [rbp+0D8h+var_100], r10
 * 000000014016CE6C: mov     [rbp+0D8h+var_F8], r11
 * 000000014016CE70: test    [rbp+0D8h+arg_8], 1
 * 000000014016CE77: jnz     short loc_14016CEA8
 * 000000014016CE79: lfence
 * 000000014016CE7C: test    word ptr gs:2EB8h, 1
 * 000000014016CE87: jnz     short loc_14016CE91
 * 000000014016CE89: lfence
 * 000000014016CE8C: jmp     loc_14016D0CD
 * 000000014016CE91: movzx   eax, word ptr gs:2EBCh
 * 000000014016CE9A: mov     ecx, 48h ; 'H'
 * 000000014016CE9F: xor     edx, edx
 * 000000014016CEA1: wrmsr
 * 000000014016CEA3: jmp     loc_14016D0CD
 * 000000014016CEA8: test    cs:KiKvaShadow, 1
 * 000000014016CEAF: jnz     short loc_14016CEB4
 * 000000014016CEB1: swapgs
 * 000000014016CEB4: lfence
 * 000000014016CEB7: mov     r10, gs:188h
 * 000000014016CEC0: mov     rcx, gs:188h
 * 000000014016CEC9: mov     rcx, [rcx+220h]
 * 000000014016CED0: mov     rcx, [rcx+7B8h]
 * 000000014016CED7: mov     gs:2EB0h, rcx
 * 000000014016CEE0: movzx   eax, word ptr gs:2EBEh
 * 000000014016CEE9: cmp     gs:2EBCh, ax
 * 000000014016CEF2: jz      short loc_14016CF06
 * 000000014016CEF4: mov     gs:2EBCh, ax
 * 000000014016CEFD: mov     ecx, 48h ; 'H'
 * 000000014016CF02: xor     edx, edx
 * 000000014016CF04: wrmsr
 * 000000014016CF06: movzx   edx, word ptr gs:2EB8h
 * 000000014016CF0F: test    edx, 8
 * 000000014016CF15: jz      short loc_14016CF2E
 * 000000014016CF17: mov     eax, 1
 * 000000014016CF1C: xor     edx, edx
 * 000000014016CF1E: mov     ecx, 49h ; 'I'
 * 000000014016CF23: wrmsr
 * 000000014016CF25: movzx   edx, word ptr gs:2EB8h
 * 000000014016CF2E: test    edx, 2
 * 000000014016CF34: jz      loc_14016D05F
 * 000000014016CF3A: call    loc_14016D04D
 * 000000014016CF3F: add     rsp, 8
 * 000000014016CF43: call    loc_14016D056
 * 000000014016CF48: add     rsp, 8
 * 000000014016CF4C: call    loc_14016CF3F
 * 000000014016CF51: add     rsp, 8
 * 000000014016CF55: call    loc_14016CF48
 * 000000014016CF5A: add     rsp, 8
 * 000000014016CF5E: call    loc_14016CF51
 * 000000014016CF63: add     rsp, 8
 * 000000014016CF67: call    loc_14016CF5A
 * 000000014016CF6C: add     rsp, 8
 * 000000014016CF70: call    loc_14016CF63
 * 000000014016CF75: add     rsp, 8
 * 000000014016CF79: call    loc_14016CF6C
 * 000000014016CF7E: add     rsp, 8
 * 000000014016CF82: call    loc_14016CF75
 * 000000014016CF87: add     rsp, 8
 * 000000014016CF8B: call    loc_14016CF7E
 * 000000014016CF90: add     rsp, 8
 * 000000014016CF94: call    loc_14016CF87
 * 000000014016CF99: add     rsp, 8
 * 000000014016CF9D: call    loc_14016CF90
 * 000000014016CFA2: add     rsp, 8
 * 000000014016CFA6: call    loc_14016CF99
 * 000000014016CFAB: add     rsp, 8
 * 000000014016CFAF: call    loc_14016CFA2
 * 000000014016CFB4: add     rsp, 8
 * 000000014016CFB8: call    loc_14016CFAB
 * 000000014016CFBD: add     rsp, 8
 * 000000014016CFC1: call    loc_14016CFB4
 * 000000014016CFC6: add     rsp, 8
 * 000000014016CFCA: call    loc_14016CFBD
 * 000000014016CFCF: add     rsp, 8
 * 000000014016CFD3: call    loc_14016CFC6
 * 000000014016CFD8: add     rsp, 8
 * 000000014016CFDC: call    loc_14016CFCF
 * 000000014016CFE1: add     rsp, 8
 * 000000014016CFE5: call    loc_14016CFD8
 * 000000014016CFEA: add     rsp, 8
 * 000000014016CFEE: call    loc_14016CFE1
 * 000000014016CFF3: add     rsp, 8
 * 000000014016CFF7: call    loc_14016CFEA
 * 000000014016CFFC: add     rsp, 8
 * 000000014016D000: call    loc_14016CFF3
 * 000000014016D005: add     rsp, 8
 * 000000014016D009: call    loc_14016CFFC
 * 000000014016D00E: add     rsp, 8
 * 000000014016D012: call    loc_14016D005
 * 000000014016D017: add     rsp, 8
 * 000000014016D01B: call    loc_14016D00E
 * 000000014016D020: add     rsp, 8
 * 000000014016D024: call    loc_14016D017
 * 000000014016D029: add     rsp, 8
 * 000000014016D02D: call    loc_14016D020
 * 000000014016D032: add     rsp, 8
 * 000000014016D036: call    loc_14016D029
 * 000000014016D03B: add     rsp, 8
 * 000000014016D03F: call    loc_14016D032
 * 000000014016D044: add     rsp, 8
 * 000000014016D048: call    loc_14016D03B
 * 000000014016D04D: add     rsp, 8
 * 000000014016D051: call    loc_14016D044
 * 000000014016D056: add     rsp, 8
 * 000000014016D05A: mov     eax, 0DADAh
 * 000000014016D05F: test    edx, 100h
 * 000000014016D065: jz      short loc_14016D06C
 * 000000014016D067: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016D06C: lfence
 * 000000014016D06F: test    byte ptr [r10+3], 80h
 * 000000014016D074: jz      short loc_14016D0B8
 * 000000014016D076: mov     ecx, 0C0000102h
 * 000000014016D07B: rdmsr
 * 000000014016D07D: shl     rdx, 20h
 * 000000014016D081: or      rax, rdx
 * 000000014016D084: cmp     rax, cs:MmUserProbeAddress
 * 000000014016D08B: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016D093: cmp     [r10+0F0h], rax
 * 000000014016D09A: jz      short loc_14016D0B8
 * 000000014016D09C: mov     rdx, [r10+1F0h]
 * 000000014016D0A3: bts     dword ptr [r10+74h], 8
 * 000000014016D0A9: dec     word ptr [r10+1E6h]
 * 000000014016D0B1: mov     [rdx+80h], rax
 * 000000014016D0B8: test    byte ptr [r10+3], 3
 * 000000014016D0BD: mov     [rbp+0D8h+var_58], 0
 * 000000014016D0C6: jz      short loc_14016D0CD
 * 000000014016D0C8: call    KiSaveDebugRegisterState
 * 000000014016D0CD: cld
 * 000000014016D0CE: stmxcsr [rbp+0D8h+var_12C]
 * 000000014016D0D2: ldmxcsr dword ptr gs:180h
 * 000000014016D0DB: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014016D0DF: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014016D0E3: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014016D0E7: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014016D0EB: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014016D0EF: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014016D0F3: mov     eax, [rbp+0E0h]
 * 000000014016D0F9: test    [rbp+0D8h+arg_10], 200h
 * 000000014016D103: jz      short loc_14016D106
 * 000000014016D105: sti
 * 000000014016D106: mov     ecx, 80000002h
 * 000000014016D10B: xor     edx, edx
 * 000000014016D10D: mov     r8, [rbp+0D8h+arg_0]
 * 000000014016D114: call    KiExceptionDispatch
 * 000000014016D119: nop
 * 000000014016D11A: retn
 */
