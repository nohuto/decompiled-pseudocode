/*
 * XREFs of KiSystemCall32Shadow @ 0x140225B40
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 *     KiSystemCall32Shadow @ 0x140225B40 (KiSystemCall32Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32Shadow @ 0x140225B40
 * Reason: Hex-Rays returned no pseudocode for 0x140225B40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140225B40: swapgs
 * 0000000140225B43: mov     gs:7010h, rsp
 * 0000000140225B4C: mov     rsp, gs:7000h
 * 0000000140225B55: mov     cr3, rsp
 * 0000000140225B58: mov     rsp, gs:7008h
 * 0000000140225B61: push    2Bh ; '+'
 * 0000000140225B63: push    qword ptr gs:7010h
 * 0000000140225B6B: push    r11
 * 0000000140225B6D: push    23h ; '#'
 * 0000000140225B6F: push    rcx
 * 0000000140225B70: sub     rsp, 8
 * 0000000140225B74: push    rbp
 * 0000000140225B75: sub     rsp, 158h
 * 0000000140225B7C: lea     rbp, [rsp+190h+var_110]
 * 0000000140225B84: mov     byte ptr [rbp-55h], 1
 * 0000000140225B88: mov     [rbp-50h], rax
 * 0000000140225B8C: mov     [rbp-48h], rcx
 * 0000000140225B90: mov     [rbp-40h], rdx
 * 0000000140225B94: mov     [rbp-38h], r8
 * 0000000140225B98: mov     [rbp-30h], r9
 * 0000000140225B9C: mov     [rbp-28h], r10
 * 0000000140225BA0: mov     [rbp-20h], r11
 * 0000000140225BA4: test    byte ptr [rbp+0F0h], 1
 * 0000000140225BAB: jnz     loc_140225D11
 * 0000000140225BB1: cmp     byte ptr gs:187h, 0
 * 0000000140225BBA: jz      loc_140225EE1
 * 0000000140225BC0: test    byte ptr gs:2EB0h, 1
 * 0000000140225BC9: jz      loc_140225EE1
 * 0000000140225BCF: mov     ecx, 48h ; 'H'
 * 0000000140225BD4: mov     eax, 1
 * 0000000140225BD9: xor     edx, edx
 * 0000000140225BDB: wrmsr
 * 0000000140225BDD: test    byte ptr gs:2EB0h, 4
 * 0000000140225BE6: jnz     loc_140225EE1
 * 0000000140225BEC: call    loc_140225CFF
 * 0000000140225BF1: add     rsp, 8
 * 0000000140225BF5: call    loc_140225D08
 * 0000000140225BFA: add     rsp, 8
 * 0000000140225BFE: call    loc_140225BF1
 * 0000000140225C03: add     rsp, 8
 * 0000000140225C07: call    loc_140225BFA
 * 0000000140225C0C: add     rsp, 8
 * 0000000140225C10: call    loc_140225C03
 * 0000000140225C15: add     rsp, 8
 * 0000000140225C19: call    loc_140225C0C
 * 0000000140225C1E: add     rsp, 8
 * 0000000140225C22: call    loc_140225C15
 * 0000000140225C27: add     rsp, 8
 * 0000000140225C2B: call    loc_140225C1E
 * 0000000140225C30: add     rsp, 8
 * 0000000140225C34: call    loc_140225C27
 * 0000000140225C39: add     rsp, 8
 * 0000000140225C3D: call    loc_140225C30
 * 0000000140225C42: add     rsp, 8
 * 0000000140225C46: call    loc_140225C39
 * 0000000140225C4B: add     rsp, 8
 * 0000000140225C4F: call    loc_140225C42
 * 0000000140225C54: add     rsp, 8
 * 0000000140225C58: call    loc_140225C4B
 * 0000000140225C5D: add     rsp, 8
 * 0000000140225C61: call    loc_140225C54
 * 0000000140225C66: add     rsp, 8
 * 0000000140225C6A: call    loc_140225C5D
 * 0000000140225C6F: add     rsp, 8
 * 0000000140225C73: call    loc_140225C66
 * 0000000140225C78: add     rsp, 8
 * 0000000140225C7C: call    loc_140225C6F
 * 0000000140225C81: add     rsp, 8
 * 0000000140225C85: call    loc_140225C78
 * 0000000140225C8A: add     rsp, 8
 * 0000000140225C8E: call    loc_140225C81
 * 0000000140225C93: add     rsp, 8
 * 0000000140225C97: call    loc_140225C8A
 * 0000000140225C9C: add     rsp, 8
 * 0000000140225CA0: call    loc_140225C93
 * 0000000140225CA5: add     rsp, 8
 * 0000000140225CA9: call    loc_140225C9C
 * 0000000140225CAE: add     rsp, 8
 * 0000000140225CB2: call    loc_140225CA5
 * 0000000140225CB7: add     rsp, 8
 * 0000000140225CBB: call    loc_140225CAE
 * 0000000140225CC0: add     rsp, 8
 * 0000000140225CC4: call    loc_140225CB7
 * 0000000140225CC9: add     rsp, 8
 * 0000000140225CCD: call    loc_140225CC0
 * 0000000140225CD2: add     rsp, 8
 * 0000000140225CD6: call    loc_140225CC9
 * 0000000140225CDB: add     rsp, 8
 * 0000000140225CDF: call    loc_140225CD2
 * 0000000140225CE4: add     rsp, 8
 * 0000000140225CE8: call    loc_140225CDB
 * 0000000140225CED: add     rsp, 8
 * 0000000140225CF1: call    loc_140225CE4
 * 0000000140225CF6: add     rsp, 8
 * 0000000140225CFA: call    loc_140225CED
 * 0000000140225CFF: add     rsp, 8
 * 0000000140225D03: call    loc_140225CF6
 * 0000000140225D08: add     rsp, 8
 * 0000000140225D0C: jmp     loc_140225EE1
 * 0000000140225D11: test    cs:KiKvaShadow, 1
 * 0000000140225D18: jnz     short loc_140225D1D
 * 0000000140225D1A: swapgs
 * 0000000140225D1D: mov     r10, gs:188h
 * 0000000140225D26: test    byte ptr gs:2EB0h, 1
 * 0000000140225D2F: jz      loc_140225E92
 * 0000000140225D35: mov     rcx, gs:188h
 * 0000000140225D3E: mov     rcx, [rcx+220h]
 * 0000000140225D45: mov     rcx, [rcx+790h]
 * 0000000140225D4C: mov     gs:2EA8h, rcx
 * 0000000140225D55: mov     ecx, 48h ; 'H'
 * 0000000140225D5A: mov     eax, 1
 * 0000000140225D5F: xor     edx, edx
 * 0000000140225D61: wrmsr
 * 0000000140225D63: test    byte ptr gs:2EB0h, 4
 * 0000000140225D6C: jnz     loc_140225E92
 * 0000000140225D72: call    loc_140225E85
 * 0000000140225D77: add     rsp, 8
 * 0000000140225D7B: call    loc_140225E8E
 * 0000000140225D80: add     rsp, 8
 * 0000000140225D84: call    loc_140225D77
 * 0000000140225D89: add     rsp, 8
 * 0000000140225D8D: call    loc_140225D80
 * 0000000140225D92: add     rsp, 8
 * 0000000140225D96: call    loc_140225D89
 * 0000000140225D9B: add     rsp, 8
 * 0000000140225D9F: call    loc_140225D92
 * 0000000140225DA4: add     rsp, 8
 * 0000000140225DA8: call    loc_140225D9B
 * 0000000140225DAD: add     rsp, 8
 * 0000000140225DB1: call    loc_140225DA4
 * 0000000140225DB6: add     rsp, 8
 * 0000000140225DBA: call    loc_140225DAD
 * 0000000140225DBF: add     rsp, 8
 * 0000000140225DC3: call    loc_140225DB6
 * 0000000140225DC8: add     rsp, 8
 * 0000000140225DCC: call    loc_140225DBF
 * 0000000140225DD1: add     rsp, 8
 * 0000000140225DD5: call    loc_140225DC8
 * 0000000140225DDA: add     rsp, 8
 * 0000000140225DDE: call    loc_140225DD1
 * 0000000140225DE3: add     rsp, 8
 * 0000000140225DE7: call    loc_140225DDA
 * 0000000140225DEC: add     rsp, 8
 * 0000000140225DF0: call    loc_140225DE3
 * 0000000140225DF5: add     rsp, 8
 * 0000000140225DF9: call    loc_140225DEC
 * 0000000140225DFE: add     rsp, 8
 * 0000000140225E02: call    loc_140225DF5
 * 0000000140225E07: add     rsp, 8
 * 0000000140225E0B: call    loc_140225DFE
 * 0000000140225E10: add     rsp, 8
 * 0000000140225E14: call    loc_140225E07
 * 0000000140225E19: add     rsp, 8
 * 0000000140225E1D: call    loc_140225E10
 * 0000000140225E22: add     rsp, 8
 * 0000000140225E26: call    loc_140225E19
 * 0000000140225E2B: add     rsp, 8
 * 0000000140225E2F: call    loc_140225E22
 * 0000000140225E34: add     rsp, 8
 * 0000000140225E38: call    loc_140225E2B
 * 0000000140225E3D: add     rsp, 8
 * 0000000140225E41: call    loc_140225E34
 * 0000000140225E46: add     rsp, 8
 * 0000000140225E4A: call    loc_140225E3D
 * 0000000140225E4F: add     rsp, 8
 * 0000000140225E53: call    loc_140225E46
 * 0000000140225E58: add     rsp, 8
 * 0000000140225E5C: call    loc_140225E4F
 * 0000000140225E61: add     rsp, 8
 * 0000000140225E65: call    loc_140225E58
 * 0000000140225E6A: add     rsp, 8
 * 0000000140225E6E: call    loc_140225E61
 * 0000000140225E73: add     rsp, 8
 * 0000000140225E77: call    loc_140225E6A
 * 0000000140225E7C: add     rsp, 8
 * 0000000140225E80: call    loc_140225E73
 * 0000000140225E85: add     rsp, 8
 * 0000000140225E89: call    loc_140225E7C
 * 0000000140225E8E: add     rsp, 8
 * 0000000140225E92: test    byte ptr [r10+3], 80h
 * 0000000140225E97: jz      short loc_140225ECC
 * 0000000140225E99: mov     ecx, 0C0000102h
 * 0000000140225E9E: rdmsr
 * 0000000140225EA0: shl     rdx, 20h
 * 0000000140225EA4: or      rax, rdx
 * 0000000140225EA7: cmp     [r10+0F0h], rax
 * 0000000140225EAE: jz      short loc_140225ECC
 * 0000000140225EB0: mov     rdx, [r10+1F0h]
 * 0000000140225EB7: bts     dword ptr [r10+74h], 8
 * 0000000140225EBD: dec     word ptr [r10+1E6h]
 * 0000000140225EC5: mov     [rdx+80h], rax
 * 0000000140225ECC: test    byte ptr [r10+3], 3
 * 0000000140225ED1: mov     word ptr [rbp+80h], 0
 * 0000000140225EDA: jz      short loc_140225EE1
 * 0000000140225EDC: call    KiSaveDebugRegisterState
 * 0000000140225EE1: cld
 * 0000000140225EE2: lfence
 * 0000000140225EE5: stmxcsr dword ptr [rbp-54h]
 * 0000000140225EE9: ldmxcsr dword ptr gs:180h
 * 0000000140225EF2: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140225EF6: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140225EFA: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140225EFE: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140225F02: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140225F06: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140225F0A: sub     qword ptr [rbp+0E8h], 2
 * 0000000140225F12: and     dword ptr [rbp+0ECh], 0
 * 0000000140225F19: sti
 * 0000000140225F1A: mov     ecx, 0C000001Dh
 * 0000000140225F1F: xor     edx, edx
 * 0000000140225F21: mov     r8, [rbp+0E8h]
 * 0000000140225F28: call    KiExceptionDispatch
 * 0000000140225F2D: nop
 * 0000000140225F2E: retn
 */
