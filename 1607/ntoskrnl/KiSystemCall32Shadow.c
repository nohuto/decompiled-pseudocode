/*
 * XREFs of KiSystemCall32Shadow @ 0x140240B80
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall32Shadow @ 0x140240B80 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140240B80
 * Reason: Hex-Rays returned no pseudocode for 0x140240B80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140240B80: swapgs
 * 0000000140240B83: mov     gs:7010h, rsp
 * 0000000140240B8C: mov     rsp, gs:7000h
 * 0000000140240B95: mov     cr3, rsp
 * 0000000140240B98: mov     rsp, gs:7008h
 * 0000000140240BA1: push    2Bh ; '+'
 * 0000000140240BA3: push    qword ptr gs:7010h
 * 0000000140240BAB: push    r11
 * 0000000140240BAD: push    23h ; '#'
 * 0000000140240BAF: push    rcx
 * 0000000140240BB0: sub     rsp, 8
 * 0000000140240BB4: push    rbp
 * 0000000140240BB5: sub     rsp, 158h
 * 0000000140240BBC: lea     rbp, [rsp+190h+var_110]
 * 0000000140240BC4: mov     byte ptr [rbp-55h], 1
 * 0000000140240BC8: mov     [rbp-50h], rax
 * 0000000140240BCC: mov     [rbp-48h], rcx
 * 0000000140240BD0: mov     [rbp-40h], rdx
 * 0000000140240BD4: mov     [rbp-38h], r8
 * 0000000140240BD8: mov     [rbp-30h], r9
 * 0000000140240BDC: mov     [rbp-28h], r10
 * 0000000140240BE0: mov     [rbp-20h], r11
 * 0000000140240BE4: test    byte ptr [rbp+0F0h], 1
 * 0000000140240BEB: jnz     short loc_140240C1C
 * 0000000140240BED: lfence
 * 0000000140240BF0: test    word ptr gs:2EB8h, 1
 * 0000000140240BFB: jnz     short loc_140240C05
 * 0000000140240BFD: lfence
 * 0000000140240C00: jmp     loc_140240E41
 * 0000000140240C05: movzx   eax, word ptr gs:2EBCh
 * 0000000140240C0E: mov     ecx, 48h ; 'H'
 * 0000000140240C13: xor     edx, edx
 * 0000000140240C15: wrmsr
 * 0000000140240C17: jmp     loc_140240E41
 * 0000000140240C1C: test    cs:KiKvaShadow, 1
 * 0000000140240C23: jnz     short loc_140240C28
 * 0000000140240C25: swapgs
 * 0000000140240C28: lfence
 * 0000000140240C2B: mov     r10, gs:188h
 * 0000000140240C34: mov     rcx, gs:188h
 * 0000000140240C3D: mov     rcx, [rcx+220h]
 * 0000000140240C44: mov     rcx, [rcx+7B8h]
 * 0000000140240C4B: mov     gs:2EB0h, rcx
 * 0000000140240C54: movzx   eax, word ptr gs:2EBEh
 * 0000000140240C5D: cmp     gs:2EBCh, ax
 * 0000000140240C66: jz      short loc_140240C7A
 * 0000000140240C68: mov     gs:2EBCh, ax
 * 0000000140240C71: mov     ecx, 48h ; 'H'
 * 0000000140240C76: xor     edx, edx
 * 0000000140240C78: wrmsr
 * 0000000140240C7A: movzx   edx, word ptr gs:2EB8h
 * 0000000140240C83: test    edx, 8
 * 0000000140240C89: jz      short loc_140240CA2
 * 0000000140240C8B: mov     eax, 1
 * 0000000140240C90: xor     edx, edx
 * 0000000140240C92: mov     ecx, 49h ; 'I'
 * 0000000140240C97: wrmsr
 * 0000000140240C99: movzx   edx, word ptr gs:2EB8h
 * 0000000140240CA2: test    edx, 2
 * 0000000140240CA8: jz      loc_140240DD3
 * 0000000140240CAE: call    loc_140240DC1
 * 0000000140240CB3: add     rsp, 8
 * 0000000140240CB7: call    loc_140240DCA
 * 0000000140240CBC: add     rsp, 8
 * 0000000140240CC0: call    loc_140240CB3
 * 0000000140240CC5: add     rsp, 8
 * 0000000140240CC9: call    loc_140240CBC
 * 0000000140240CCE: add     rsp, 8
 * 0000000140240CD2: call    loc_140240CC5
 * 0000000140240CD7: add     rsp, 8
 * 0000000140240CDB: call    loc_140240CCE
 * 0000000140240CE0: add     rsp, 8
 * 0000000140240CE4: call    loc_140240CD7
 * 0000000140240CE9: add     rsp, 8
 * 0000000140240CED: call    loc_140240CE0
 * 0000000140240CF2: add     rsp, 8
 * 0000000140240CF6: call    loc_140240CE9
 * 0000000140240CFB: add     rsp, 8
 * 0000000140240CFF: call    loc_140240CF2
 * 0000000140240D04: add     rsp, 8
 * 0000000140240D08: call    loc_140240CFB
 * 0000000140240D0D: add     rsp, 8
 * 0000000140240D11: call    loc_140240D04
 * 0000000140240D16: add     rsp, 8
 * 0000000140240D1A: call    loc_140240D0D
 * 0000000140240D1F: add     rsp, 8
 * 0000000140240D23: call    loc_140240D16
 * 0000000140240D28: add     rsp, 8
 * 0000000140240D2C: call    loc_140240D1F
 * 0000000140240D31: add     rsp, 8
 * 0000000140240D35: call    loc_140240D28
 * 0000000140240D3A: add     rsp, 8
 * 0000000140240D3E: call    loc_140240D31
 * 0000000140240D43: add     rsp, 8
 * 0000000140240D47: call    loc_140240D3A
 * 0000000140240D4C: add     rsp, 8
 * 0000000140240D50: call    loc_140240D43
 * 0000000140240D55: add     rsp, 8
 * 0000000140240D59: call    loc_140240D4C
 * 0000000140240D5E: add     rsp, 8
 * 0000000140240D62: call    loc_140240D55
 * 0000000140240D67: add     rsp, 8
 * 0000000140240D6B: call    loc_140240D5E
 * 0000000140240D70: add     rsp, 8
 * 0000000140240D74: call    loc_140240D67
 * 0000000140240D79: add     rsp, 8
 * 0000000140240D7D: call    loc_140240D70
 * 0000000140240D82: add     rsp, 8
 * 0000000140240D86: call    loc_140240D79
 * 0000000140240D8B: add     rsp, 8
 * 0000000140240D8F: call    loc_140240D82
 * 0000000140240D94: add     rsp, 8
 * 0000000140240D98: call    loc_140240D8B
 * 0000000140240D9D: add     rsp, 8
 * 0000000140240DA1: call    loc_140240D94
 * 0000000140240DA6: add     rsp, 8
 * 0000000140240DAA: call    loc_140240D9D
 * 0000000140240DAF: add     rsp, 8
 * 0000000140240DB3: call    loc_140240DA6
 * 0000000140240DB8: add     rsp, 8
 * 0000000140240DBC: call    loc_140240DAF
 * 0000000140240DC1: add     rsp, 8
 * 0000000140240DC5: call    loc_140240DB8
 * 0000000140240DCA: add     rsp, 8
 * 0000000140240DCE: mov     eax, 0DADAh
 * 0000000140240DD3: test    edx, 100h
 * 0000000140240DD9: jz      short loc_140240DE0
 * 0000000140240DDB: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140240DE0: lfence
 * 0000000140240DE3: test    byte ptr [r10+3], 80h
 * 0000000140240DE8: jz      short loc_140240E2C
 * 0000000140240DEA: mov     ecx, 0C0000102h
 * 0000000140240DEF: rdmsr
 * 0000000140240DF1: shl     rdx, 20h
 * 0000000140240DF5: or      rax, rdx
 * 0000000140240DF8: cmp     rax, cs:MmUserProbeAddress
 * 0000000140240DFF: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140240E07: cmp     [r10+0F0h], rax
 * 0000000140240E0E: jz      short loc_140240E2C
 * 0000000140240E10: mov     rdx, [r10+1F0h]
 * 0000000140240E17: bts     dword ptr [r10+74h], 8
 * 0000000140240E1D: dec     word ptr [r10+1E6h]
 * 0000000140240E25: mov     [rdx+80h], rax
 * 0000000140240E2C: test    byte ptr [r10+3], 3
 * 0000000140240E31: mov     word ptr [rbp+80h], 0
 * 0000000140240E3A: jz      short loc_140240E41
 * 0000000140240E3C: call    KiSaveDebugRegisterState
 * 0000000140240E41: cld
 * 0000000140240E42: stmxcsr dword ptr [rbp-54h]
 * 0000000140240E46: ldmxcsr dword ptr gs:180h
 * 0000000140240E4F: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140240E53: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140240E57: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140240E5B: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140240E5F: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140240E63: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140240E67: sub     qword ptr [rbp+0E8h], 2
 * 0000000140240E6F: and     dword ptr [rbp+0ECh], 0
 * 0000000140240E76: sti
 * 0000000140240E77: mov     ecx, 0C000001Dh
 * 0000000140240E7C: xor     edx, edx
 * 0000000140240E7E: mov     r8, [rbp+0E8h]
 * 0000000140240E85: call    KiExceptionDispatch
 * 0000000140240E8A: nop
 * 0000000140240E8B: retn
 */
