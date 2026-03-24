/*
 * XREFs of KiFloatingErrorFault @ 0x140162700
 * Callers:
 *     KiFloatingErrorFaultShadow @ 0x140224780 (KiFloatingErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiFloatingErrorFault @ 0x140162700 (KiFloatingErrorFault.c)
 *     KiBugCheckDispatch @ 0x140165B40 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiFloatingErrorFault @ 0x140162700
 * Reason: Hex-Rays returned no pseudocode for 0x140162700
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140162700: sub     rsp, 8
 * 0000000140162704: push    rbp
 * 0000000140162705: sub     rsp, 158h
 * 000000014016270C: lea     rbp, [rsp+80h]
 * 0000000140162714: mov     [rbp+0E8h+var_13D], 1
 * 0000000140162718: mov     [rbp+0E8h+var_138], rax
 * 000000014016271C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140162720: mov     [rbp+0E8h+var_128], rdx
 * 0000000140162724: mov     [rbp+0E8h+var_120], r8
 * 0000000140162728: mov     [rbp+0E8h+var_118], r9
 * 000000014016272C: mov     [rbp+0E8h+var_110], r10
 * 0000000140162730: mov     [rbp+0E8h+var_108], r11
 * 0000000140162734: test    [rbp+0E8h+arg_0], 1
 * 000000014016273B: jnz     loc_1401628A1
 * 0000000140162741: cmp     byte ptr gs:187h, 0
 * 000000014016274A: jz      loc_140162A71
 * 0000000140162750: test    byte ptr gs:2EB0h, 1
 * 0000000140162759: jz      loc_140162A71
 * 000000014016275F: mov     ecx, 48h ; 'H'
 * 0000000140162764: mov     eax, 1
 * 0000000140162769: xor     edx, edx
 * 000000014016276B: wrmsr
 * 000000014016276D: test    byte ptr gs:2EB0h, 4
 * 0000000140162776: jnz     loc_140162A71
 * 000000014016277C: call    loc_14016288F
 * 0000000140162781: add     rsp, 8
 * 0000000140162785: call    loc_140162898
 * 000000014016278A: add     rsp, 8
 * 000000014016278E: call    loc_140162781
 * 0000000140162793: add     rsp, 8
 * 0000000140162797: call    loc_14016278A
 * 000000014016279C: add     rsp, 8
 * 00000001401627A0: call    loc_140162793
 * 00000001401627A5: add     rsp, 8
 * 00000001401627A9: call    loc_14016279C
 * 00000001401627AE: add     rsp, 8
 * 00000001401627B2: call    loc_1401627A5
 * 00000001401627B7: add     rsp, 8
 * 00000001401627BB: call    loc_1401627AE
 * 00000001401627C0: add     rsp, 8
 * 00000001401627C4: call    loc_1401627B7
 * 00000001401627C9: add     rsp, 8
 * 00000001401627CD: call    loc_1401627C0
 * 00000001401627D2: add     rsp, 8
 * 00000001401627D6: call    loc_1401627C9
 * 00000001401627DB: add     rsp, 8
 * 00000001401627DF: call    loc_1401627D2
 * 00000001401627E4: add     rsp, 8
 * 00000001401627E8: call    loc_1401627DB
 * 00000001401627ED: add     rsp, 8
 * 00000001401627F1: call    loc_1401627E4
 * 00000001401627F6: add     rsp, 8
 * 00000001401627FA: call    loc_1401627ED
 * 00000001401627FF: add     rsp, 8
 * 0000000140162803: call    loc_1401627F6
 * 0000000140162808: add     rsp, 8
 * 000000014016280C: call    loc_1401627FF
 * 0000000140162811: add     rsp, 8
 * 0000000140162815: call    loc_140162808
 * 000000014016281A: add     rsp, 8
 * 000000014016281E: call    loc_140162811
 * 0000000140162823: add     rsp, 8
 * 0000000140162827: call    loc_14016281A
 * 000000014016282C: add     rsp, 8
 * 0000000140162830: call    loc_140162823
 * 0000000140162835: add     rsp, 8
 * 0000000140162839: call    loc_14016282C
 * 000000014016283E: add     rsp, 8
 * 0000000140162842: call    loc_140162835
 * 0000000140162847: add     rsp, 8
 * 000000014016284B: call    loc_14016283E
 * 0000000140162850: add     rsp, 8
 * 0000000140162854: call    loc_140162847
 * 0000000140162859: add     rsp, 8
 * 000000014016285D: call    loc_140162850
 * 0000000140162862: add     rsp, 8
 * 0000000140162866: call    loc_140162859
 * 000000014016286B: add     rsp, 8
 * 000000014016286F: call    loc_140162862
 * 0000000140162874: add     rsp, 8
 * 0000000140162878: call    loc_14016286B
 * 000000014016287D: add     rsp, 8
 * 0000000140162881: call    loc_140162874
 * 0000000140162886: add     rsp, 8
 * 000000014016288A: call    loc_14016287D
 * 000000014016288F: add     rsp, 8
 * 0000000140162893: call    loc_140162886
 * 0000000140162898: add     rsp, 8
 * 000000014016289C: jmp     loc_140162A71
 * 00000001401628A1: test    cs:KiKvaShadow, 1
 * 00000001401628A8: jnz     short loc_1401628AD
 * 00000001401628AA: swapgs
 * 00000001401628AD: mov     r10, gs:188h
 * 00000001401628B6: test    byte ptr gs:2EB0h, 1
 * 00000001401628BF: jz      loc_140162A22
 * 00000001401628C5: mov     rcx, gs:188h
 * 00000001401628CE: mov     rcx, [rcx+220h]
 * 00000001401628D5: mov     rcx, [rcx+790h]
 * 00000001401628DC: mov     gs:2EA8h, rcx
 * 00000001401628E5: mov     ecx, 48h ; 'H'
 * 00000001401628EA: mov     eax, 1
 * 00000001401628EF: xor     edx, edx
 * 00000001401628F1: wrmsr
 * 00000001401628F3: test    byte ptr gs:2EB0h, 4
 * 00000001401628FC: jnz     loc_140162A22
 * 0000000140162902: call    loc_140162A15
 * 0000000140162907: add     rsp, 8
 * 000000014016290B: call    loc_140162A1E
 * 0000000140162910: add     rsp, 8
 * 0000000140162914: call    loc_140162907
 * 0000000140162919: add     rsp, 8
 * 000000014016291D: call    loc_140162910
 * 0000000140162922: add     rsp, 8
 * 0000000140162926: call    loc_140162919
 * 000000014016292B: add     rsp, 8
 * 000000014016292F: call    loc_140162922
 * 0000000140162934: add     rsp, 8
 * 0000000140162938: call    loc_14016292B
 * 000000014016293D: add     rsp, 8
 * 0000000140162941: call    loc_140162934
 * 0000000140162946: add     rsp, 8
 * 000000014016294A: call    loc_14016293D
 * 000000014016294F: add     rsp, 8
 * 0000000140162953: call    loc_140162946
 * 0000000140162958: add     rsp, 8
 * 000000014016295C: call    loc_14016294F
 * 0000000140162961: add     rsp, 8
 * 0000000140162965: call    loc_140162958
 * 000000014016296A: add     rsp, 8
 * 000000014016296E: call    loc_140162961
 * 0000000140162973: add     rsp, 8
 * 0000000140162977: call    loc_14016296A
 * 000000014016297C: add     rsp, 8
 * 0000000140162980: call    loc_140162973
 * 0000000140162985: add     rsp, 8
 * 0000000140162989: call    loc_14016297C
 * 000000014016298E: add     rsp, 8
 * 0000000140162992: call    loc_140162985
 * 0000000140162997: add     rsp, 8
 * 000000014016299B: call    loc_14016298E
 * 00000001401629A0: add     rsp, 8
 * 00000001401629A4: call    loc_140162997
 * 00000001401629A9: add     rsp, 8
 * 00000001401629AD: call    loc_1401629A0
 * 00000001401629B2: add     rsp, 8
 * 00000001401629B6: call    loc_1401629A9
 * 00000001401629BB: add     rsp, 8
 * 00000001401629BF: call    loc_1401629B2
 * 00000001401629C4: add     rsp, 8
 * 00000001401629C8: call    loc_1401629BB
 * 00000001401629CD: add     rsp, 8
 * 00000001401629D1: call    loc_1401629C4
 * 00000001401629D6: add     rsp, 8
 * 00000001401629DA: call    loc_1401629CD
 * 00000001401629DF: add     rsp, 8
 * 00000001401629E3: call    loc_1401629D6
 * 00000001401629E8: add     rsp, 8
 * 00000001401629EC: call    loc_1401629DF
 * 00000001401629F1: add     rsp, 8
 * 00000001401629F5: call    loc_1401629E8
 * 00000001401629FA: add     rsp, 8
 * 00000001401629FE: call    loc_1401629F1
 * 0000000140162A03: add     rsp, 8
 * 0000000140162A07: call    loc_1401629FA
 * 0000000140162A0C: add     rsp, 8
 * 0000000140162A10: call    loc_140162A03
 * 0000000140162A15: add     rsp, 8
 * 0000000140162A19: call    loc_140162A0C
 * 0000000140162A1E: add     rsp, 8
 * 0000000140162A22: test    byte ptr [r10+3], 80h
 * 0000000140162A27: jz      short loc_140162A5C
 * 0000000140162A29: mov     ecx, 0C0000102h
 * 0000000140162A2E: rdmsr
 * 0000000140162A30: shl     rdx, 20h
 * 0000000140162A34: or      rax, rdx
 * 0000000140162A37: cmp     [r10+0F0h], rax
 * 0000000140162A3E: jz      short loc_140162A5C
 * 0000000140162A40: mov     rdx, [r10+1F0h]
 * 0000000140162A47: bts     dword ptr [r10+74h], 8
 * 0000000140162A4D: dec     word ptr [r10+1E6h]
 * 0000000140162A55: mov     [rdx+80h], rax
 * 0000000140162A5C: test    byte ptr [r10+3], 3
 * 0000000140162A61: mov     [rbp+0E8h+var_68], 0
 * 0000000140162A6A: jz      short loc_140162A71
 * 0000000140162A6C: call    KiSaveDebugRegisterState
 * 0000000140162A71: cld
 * 0000000140162A72: lfence
 * 0000000140162A75: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140162A79: ldmxcsr dword ptr gs:180h
 * 0000000140162A82: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140162A86: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140162A8A: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140162A8E: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140162A92: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140162A96: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140162A9A: test    [rbp+0E8h+arg_8], 200h
 * 0000000140162AA4: jz      short loc_140162AA7
 * 0000000140162AA6: sti
 * 0000000140162AA7: test    [rbp+0E8h+arg_0], 1
 * 0000000140162AAE: jz      short loc_140162B1E
 * 0000000140162AB0: fnstcw  [rbp+0E8h+var_8]
 * 0000000140162AB6: fnstsw  ax
 * 0000000140162AB8: mov     cx, [rbp+0E8h+var_8]
 * 0000000140162ABF: and     cx, 3Fh
 * 0000000140162AC3: not     cx
 * 0000000140162AC6: and     ax, cx
 * 0000000140162AC9: mov     ecx, 0C0000090h
 * 0000000140162ACE: xor     r9, r9
 * 0000000140162AD1: mov     edx, 1
 * 0000000140162AD6: mov     r8, [rbp+0E8h]
 * 0000000140162ADD: test    al, 1
 * 0000000140162ADF: jz      short loc_140162AEC
 * 0000000140162AE1: test    al, 40h
 * 0000000140162AE3: jz      short loc_140162B19
 * 0000000140162AE5: mov     ecx, 0C0000092h
 * 0000000140162AEA: jmp     short loc_140162B19
 * 0000000140162AEC: mov     ecx, 0C000008Eh
 * 0000000140162AF1: test    al, 4
 * 0000000140162AF3: jnz     short loc_140162B19
 * 0000000140162AF5: mov     ecx, 0C0000090h
 * 0000000140162AFA: test    al, 2
 * 0000000140162AFC: jnz     short loc_140162B19
 * 0000000140162AFE: mov     ecx, 0C0000091h
 * 0000000140162B03: test    al, 8
 * 0000000140162B05: jnz     short loc_140162B19
 * 0000000140162B07: mov     ecx, 0C0000093h
 * 0000000140162B0C: test    al, 10h
 * 0000000140162B0E: jnz     short loc_140162B19
 * 0000000140162B10: mov     ecx, 0C000008Fh
 * 0000000140162B15: test    al, 20h
 * 0000000140162B17: jz      short loc_140162B1E
 * 0000000140162B19: call    KiExceptionDispatch
 * 0000000140162B1E: mov     edx, 10h
 * 0000000140162B23: mov     r10, [rbp+0E8h]
 * 0000000140162B2A: mov     r9, cr4
 * 0000000140162B2E: mov     r8, cr0
 * 0000000140162B32: mov     ecx, 7Fh
 * 0000000140162B37: call    KiBugCheckDispatch
 */
