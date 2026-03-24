/*
 * XREFs of KiSystemCall64Shadow @ 0x140225FC0
 * Callers:
 *     <none>
 * Callees:
 *     KiSystemCall64Shadow @ 0x140225FC0 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140225FC0
 * Reason: Hex-Rays returned no pseudocode for 0x140225FC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140225FC0: swapgs
 * 0000000140225FC3: mov     gs:7010h, rsp
 * 0000000140225FCC: mov     rsp, gs:7000h
 * 0000000140225FD5: bt      dword ptr gs:7018h, 1
 * 0000000140225FDF: jb      short loc_140225FE4
 * 0000000140225FE1: mov     cr3, rsp
 * 0000000140225FE4: mov     rsp, gs:7008h
 * 0000000140225FED: push    2Bh ; '+'
 * 0000000140225FEF: push    qword ptr gs:7010h
 * 0000000140225FF7: push    r11
 * 0000000140225FF9: push    33h ; '3'
 * 0000000140225FFB: push    rcx
 * 0000000140225FFC: mov     rcx, r10
 * 0000000140225FFF: sub     rsp, 8
 * 0000000140226003: push    rbp
 * 0000000140226004: sub     rsp, 158h
 * 000000014022600B: lea     rbp, [rsp+190h+var_110]
 * 0000000140226013: mov     [rbp+0C0h], rbx
 * 000000014022601A: mov     [rbp+0C8h], rdi
 * 0000000140226021: mov     [rbp+0D0h], rsi
 * 0000000140226028: jmp     short loc_140226053
 * 000000014022602A: mov     [rbx+90h], rsp
 * 0000000140226031: mov     edi, eax
 * 0000000140226033: shr     edi, 7
 * 0000000140226036: and     edi, 20h
 * 0000000140226039: and     eax, 0FFFh
 * 000000014022603E: lea     r10, KeServiceDescriptorTable
 * 0000000140226045: lea     r11, KeServiceDescriptorTableShadow
 * 000000014022604C: test    dword ptr [rbx+78h], 40h
 * 0000000140226053: mov     [rbp-50h], rax
 * 0000000140226057: mov     [rbp-48h], rcx
 * 000000014022605B: mov     [rbp-40h], rdx
 * 000000014022605F: test    byte ptr gs:2EB0h, 1
 * 0000000140226068: jz      loc_1402261CB
 * 000000014022606E: mov     rcx, gs:188h
 * 0000000140226077: mov     rcx, [rcx+220h]
 * 000000014022607E: mov     rcx, [rcx+790h]
 * 0000000140226085: mov     gs:2EA8h, rcx
 * 000000014022608E: mov     ecx, 48h ; 'H'
 * 0000000140226093: mov     eax, 1
 * 0000000140226098: xor     edx, edx
 * 000000014022609A: wrmsr
 * 000000014022609C: test    byte ptr gs:2EB0h, 4
 * 00000001402260A5: jnz     loc_1402261CB
 * 00000001402260AB: call    loc_1402261BE
 * 00000001402260B0: add     rsp, 8
 * 00000001402260B4: call    loc_1402261C7
 * 00000001402260B9: add     rsp, 8
 * 00000001402260BD: call    loc_1402260B0
 * 00000001402260C2: add     rsp, 8
 * 00000001402260C6: call    loc_1402260B9
 * 00000001402260CB: add     rsp, 8
 * 00000001402260CF: call    loc_1402260C2
 * 00000001402260D4: add     rsp, 8
 * 00000001402260D8: call    loc_1402260CB
 * 00000001402260DD: add     rsp, 8
 * 00000001402260E1: call    loc_1402260D4
 * 00000001402260E6: add     rsp, 8
 * 00000001402260EA: call    loc_1402260DD
 * 00000001402260EF: add     rsp, 8
 * 00000001402260F3: call    loc_1402260E6
 * 00000001402260F8: add     rsp, 8
 * 00000001402260FC: call    loc_1402260EF
 * 0000000140226101: add     rsp, 8
 * 0000000140226105: call    loc_1402260F8
 * 000000014022610A: add     rsp, 8
 * 000000014022610E: call    loc_140226101
 * 0000000140226113: add     rsp, 8
 * 0000000140226117: call    loc_14022610A
 * 000000014022611C: add     rsp, 8
 * 0000000140226120: call    loc_140226113
 * 0000000140226125: add     rsp, 8
 * 0000000140226129: call    loc_14022611C
 * 000000014022612E: add     rsp, 8
 * 0000000140226132: call    loc_140226125
 * 0000000140226137: add     rsp, 8
 * 000000014022613B: call    loc_14022612E
 * 0000000140226140: add     rsp, 8
 * 0000000140226144: call    loc_140226137
 * 0000000140226149: add     rsp, 8
 * 000000014022614D: call    loc_140226140
 * 0000000140226152: add     rsp, 8
 * 0000000140226156: call    loc_140226149
 * 000000014022615B: add     rsp, 8
 * 000000014022615F: call    loc_140226152
 * 0000000140226164: add     rsp, 8
 * 0000000140226168: call    loc_14022615B
 * 000000014022616D: add     rsp, 8
 * 0000000140226171: call    loc_140226164
 * 0000000140226176: add     rsp, 8
 * 000000014022617A: call    loc_14022616D
 * 000000014022617F: add     rsp, 8
 * 0000000140226183: call    loc_140226176
 * 0000000140226188: add     rsp, 8
 * 000000014022618C: call    loc_14022617F
 * 0000000140226191: add     rsp, 8
 * 0000000140226195: call    loc_140226188
 * 000000014022619A: add     rsp, 8
 * 000000014022619E: call    loc_140226191
 * 00000001402261A3: add     rsp, 8
 * 00000001402261A7: call    loc_14022619A
 * 00000001402261AC: add     rsp, 8
 * 00000001402261B0: call    loc_1402261A3
 * 00000001402261B5: add     rsp, 8
 * 00000001402261B9: call    loc_1402261AC
 * 00000001402261BE: add     rsp, 8
 * 00000001402261C2: call    loc_1402261B5
 * 00000001402261C7: add     rsp, 8
 * 00000001402261CB: lfence
 * 00000001402261CE: jmp     KiSystemServiceUser
 * 00000001402261D3: retn
 */
