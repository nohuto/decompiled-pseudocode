/*
 * XREFs of KiSystemCall64Shadow @ 0x140240EC0
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall64Shadow @ 0x140240EC0 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140240EC0
 * Reason: Hex-Rays returned no pseudocode for 0x140240EC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140240EC0: swapgs
 * 0000000140240EC3: mov     gs:7010h, rsp
 * 0000000140240ECC: mov     rsp, gs:7000h
 * 0000000140240ED5: bt      dword ptr gs:7018h, 1
 * 0000000140240EDF: jb      short loc_140240EE4
 * 0000000140240EE1: mov     cr3, rsp
 * 0000000140240EE4: mov     rsp, gs:7008h
 * 0000000140240EED: push    2Bh ; '+'
 * 0000000140240EEF: push    qword ptr gs:7010h
 * 0000000140240EF7: push    r11
 * 0000000140240EF9: push    33h ; '3'
 * 0000000140240EFB: push    rcx
 * 0000000140240EFC: mov     rcx, r10
 * 0000000140240EFF: sub     rsp, 8
 * 0000000140240F03: push    rbp
 * 0000000140240F04: sub     rsp, 158h
 * 0000000140240F0B: lea     rbp, [rsp+190h+var_110]
 * 0000000140240F13: mov     [rbp+0C0h], rbx
 * 0000000140240F1A: mov     [rbp+0C8h], rdi
 * 0000000140240F21: mov     [rbp+0D0h], rsi
 * 0000000140240F28: jmp     short loc_140240F53
 * 0000000140240F2A: mov     [rbx+90h], rsp
 * 0000000140240F31: mov     edi, eax
 * 0000000140240F33: shr     edi, 7
 * 0000000140240F36: and     edi, 20h
 * 0000000140240F39: and     eax, 0FFFh
 * 0000000140240F3E: lea     r10, KeServiceDescriptorTable
 * 0000000140240F45: lea     r11, KeServiceDescriptorTableShadow
 * 0000000140240F4C: test    dword ptr [rbx+78h], 40h
 * 0000000140240F53: mov     [rbp-50h], rax
 * 0000000140240F57: mov     [rbp-48h], rcx
 * 0000000140240F5B: mov     [rbp-40h], rdx
 * 0000000140240F5F: mov     rcx, gs:188h
 * 0000000140240F68: mov     rcx, [rcx+220h]
 * 0000000140240F6F: mov     rcx, [rcx+7B8h]
 * 0000000140240F76: mov     gs:2EB0h, rcx
 * 0000000140240F7F: movzx   eax, word ptr gs:2EBEh
 * 0000000140240F88: cmp     gs:2EBCh, ax
 * 0000000140240F91: jz      short loc_140240FA5
 * 0000000140240F93: mov     gs:2EBCh, ax
 * 0000000140240F9C: mov     ecx, 48h ; 'H'
 * 0000000140240FA1: xor     edx, edx
 * 0000000140240FA3: wrmsr
 * 0000000140240FA5: movzx   edx, word ptr gs:2EB8h
 * 0000000140240FAE: test    edx, 8
 * 0000000140240FB4: jz      short loc_140240FCD
 * 0000000140240FB6: mov     eax, 1
 * 0000000140240FBB: xor     edx, edx
 * 0000000140240FBD: mov     ecx, 49h ; 'I'
 * 0000000140240FC2: wrmsr
 * 0000000140240FC4: movzx   edx, word ptr gs:2EB8h
 * 0000000140240FCD: test    edx, 2
 * 0000000140240FD3: jz      loc_1402410FE
 * 0000000140240FD9: call    loc_1402410EC
 * 0000000140240FDE: add     rsp, 8
 * 0000000140240FE2: call    loc_1402410F5
 * 0000000140240FE7: add     rsp, 8
 * 0000000140240FEB: call    loc_140240FDE
 * 0000000140240FF0: add     rsp, 8
 * 0000000140240FF4: call    loc_140240FE7
 * 0000000140240FF9: add     rsp, 8
 * 0000000140240FFD: call    loc_140240FF0
 * 0000000140241002: add     rsp, 8
 * 0000000140241006: call    loc_140240FF9
 * 000000014024100B: add     rsp, 8
 * 000000014024100F: call    loc_140241002
 * 0000000140241014: add     rsp, 8
 * 0000000140241018: call    loc_14024100B
 * 000000014024101D: add     rsp, 8
 * 0000000140241021: call    loc_140241014
 * 0000000140241026: add     rsp, 8
 * 000000014024102A: call    loc_14024101D
 * 000000014024102F: add     rsp, 8
 * 0000000140241033: call    loc_140241026
 * 0000000140241038: add     rsp, 8
 * 000000014024103C: call    loc_14024102F
 * 0000000140241041: add     rsp, 8
 * 0000000140241045: call    loc_140241038
 * 000000014024104A: add     rsp, 8
 * 000000014024104E: call    loc_140241041
 * 0000000140241053: add     rsp, 8
 * 0000000140241057: call    loc_14024104A
 * 000000014024105C: add     rsp, 8
 * 0000000140241060: call    loc_140241053
 * 0000000140241065: add     rsp, 8
 * 0000000140241069: call    loc_14024105C
 * 000000014024106E: add     rsp, 8
 * 0000000140241072: call    loc_140241065
 * 0000000140241077: add     rsp, 8
 * 000000014024107B: call    loc_14024106E
 * 0000000140241080: add     rsp, 8
 * 0000000140241084: call    loc_140241077
 * 0000000140241089: add     rsp, 8
 * 000000014024108D: call    loc_140241080
 * 0000000140241092: add     rsp, 8
 * 0000000140241096: call    loc_140241089
 * 000000014024109B: add     rsp, 8
 * 000000014024109F: call    loc_140241092
 * 00000001402410A4: add     rsp, 8
 * 00000001402410A8: call    loc_14024109B
 * 00000001402410AD: add     rsp, 8
 * 00000001402410B1: call    loc_1402410A4
 * 00000001402410B6: add     rsp, 8
 * 00000001402410BA: call    loc_1402410AD
 * 00000001402410BF: add     rsp, 8
 * 00000001402410C3: call    loc_1402410B6
 * 00000001402410C8: add     rsp, 8
 * 00000001402410CC: call    loc_1402410BF
 * 00000001402410D1: add     rsp, 8
 * 00000001402410D5: call    loc_1402410C8
 * 00000001402410DA: add     rsp, 8
 * 00000001402410DE: call    loc_1402410D1
 * 00000001402410E3: add     rsp, 8
 * 00000001402410E7: call    loc_1402410DA
 * 00000001402410EC: add     rsp, 8
 * 00000001402410F0: call    loc_1402410E3
 * 00000001402410F5: add     rsp, 8
 * 00000001402410F9: mov     eax, 0DADAh
 * 00000001402410FE: test    edx, 100h
 * 0000000140241104: jz      short loc_14024110B
 * 0000000140241106: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014024110B: lfence
 * 000000014024110E: jmp     KiSystemServiceUser
 * 0000000140241113: retn
 */
