/*
 * XREFs of KiSystemCall64 @ 0x140193800
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiConvertToGuiThread @ 0x140186980 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x140193800 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x140194100 (KiBugCheckDispatch.c)
 *     KiUmsCallEntry @ 0x140194F80 (KiUmsCallEntry.c)
 *     KiUmsExit @ 0x140195200 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 *     PerfInfoLogSysCallEntry @ 0x14025EC84 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x14025ECF0 (PerfInfoLogSysCallExit.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 *     PsPicoSystemCallDispatch @ 0x1406C56C4 (PsPicoSystemCallDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x140193800
 * Reason: Hex-Rays returned no pseudocode for 0x140193800
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140193800: swapgs
 * 0000000140193803: mov     gs:10h, rsp
 * 000000014019380C: mov     rsp, gs:1A8h
 * 0000000140193815: push    2Bh ; '+'
 * 0000000140193817: push    qword ptr gs:10h
 * 000000014019381F: push    r11
 * 0000000140193821: push    33h ; '3'
 * 0000000140193823: push    rcx
 * 0000000140193824: mov     rcx, r10
 * 0000000140193827: sub     rsp, 8
 * 000000014019382B: push    rbp
 * 000000014019382C: sub     rsp, 158h
 * 0000000140193833: lea     rbp, [rsp+190h+var_110]
 * 000000014019383B: mov     [rbp+0C0h], rbx
 * 0000000140193842: mov     [rbp+0C8h], rdi
 * 0000000140193849: mov     [rbp+0D0h], rsi
 * 0000000140193850: mov     [rbp-50h], rax
 * 0000000140193854: mov     [rbp-48h], rcx
 * 0000000140193858: mov     [rbp-40h], rdx
 * 000000014019385C: mov     rcx, gs:188h
 * 0000000140193865: mov     rcx, [rcx+220h]
 * 000000014019386C: mov     rcx, [rcx+7A0h]
 * 0000000140193873: mov     gs:2EA8h, rcx
 * 000000014019387C: movzx   eax, word ptr gs:2EB6h
 * 0000000140193885: cmp     gs:2EB4h, ax
 * 000000014019388E: jz      short loc_1401938A2
 * 0000000140193890: mov     gs:2EB4h, ax
 * 0000000140193899: mov     ecx, 48h ; 'H'
 * 000000014019389E: xor     edx, edx
 * 00000001401938A0: wrmsr
 * 00000001401938A2: movzx   edx, word ptr gs:2EB0h
 * 00000001401938AB: test    edx, 8
 * 00000001401938B1: jz      short loc_1401938CA
 * 00000001401938B3: mov     eax, 1
 * 00000001401938B8: xor     edx, edx
 * 00000001401938BA: mov     ecx, 49h ; 'I'
 * 00000001401938BF: wrmsr
 * 00000001401938C1: movzx   edx, word ptr gs:2EB0h
 * 00000001401938CA: test    edx, 2
 * 00000001401938D0: jz      loc_1401939FB
 * 00000001401938D6: call    loc_1401939E9
 * 00000001401938DB: add     rsp, 8
 * 00000001401938DF: call    loc_1401939F2
 * 00000001401938E4: add     rsp, 8
 * 00000001401938E8: call    loc_1401938DB
 * 00000001401938ED: add     rsp, 8
 * 00000001401938F1: call    loc_1401938E4
 * 00000001401938F6: add     rsp, 8
 * 00000001401938FA: call    loc_1401938ED
 * 00000001401938FF: add     rsp, 8
 * 0000000140193903: call    loc_1401938F6
 * 0000000140193908: add     rsp, 8
 * 000000014019390C: call    loc_1401938FF
 * 0000000140193911: add     rsp, 8
 * 0000000140193915: call    loc_140193908
 * 000000014019391A: add     rsp, 8
 * 000000014019391E: call    loc_140193911
 * 0000000140193923: add     rsp, 8
 * 0000000140193927: call    loc_14019391A
 * 000000014019392C: add     rsp, 8
 * 0000000140193930: call    loc_140193923
 * 0000000140193935: add     rsp, 8
 * 0000000140193939: call    loc_14019392C
 * 000000014019393E: add     rsp, 8
 * 0000000140193942: call    loc_140193935
 * 0000000140193947: add     rsp, 8
 * 000000014019394B: call    loc_14019393E
 * 0000000140193950: add     rsp, 8
 * 0000000140193954: call    loc_140193947
 * 0000000140193959: add     rsp, 8
 * 000000014019395D: call    loc_140193950
 * 0000000140193962: add     rsp, 8
 * 0000000140193966: call    loc_140193959
 * 000000014019396B: add     rsp, 8
 * 000000014019396F: call    loc_140193962
 * 0000000140193974: add     rsp, 8
 * 0000000140193978: call    loc_14019396B
 * 000000014019397D: add     rsp, 8
 * 0000000140193981: call    loc_140193974
 * 0000000140193986: add     rsp, 8
 * 000000014019398A: call    loc_14019397D
 * 000000014019398F: add     rsp, 8
 * 0000000140193993: call    loc_140193986
 * 0000000140193998: add     rsp, 8
 * 000000014019399C: call    loc_14019398F
 * 00000001401939A1: add     rsp, 8
 * 00000001401939A5: call    loc_140193998
 * 00000001401939AA: add     rsp, 8
 * 00000001401939AE: call    loc_1401939A1
 * 00000001401939B3: add     rsp, 8
 * 00000001401939B7: call    loc_1401939AA
 * 00000001401939BC: add     rsp, 8
 * 00000001401939C0: call    loc_1401939B3
 * 00000001401939C5: add     rsp, 8
 * 00000001401939C9: call    loc_1401939BC
 * 00000001401939CE: add     rsp, 8
 * 00000001401939D2: call    loc_1401939C5
 * 00000001401939D7: add     rsp, 8
 * 00000001401939DB: call    loc_1401939CE
 * 00000001401939E0: add     rsp, 8
 * 00000001401939E4: call    loc_1401939D7
 * 00000001401939E9: add     rsp, 8
 * 00000001401939ED: call    loc_1401939E0
 * 00000001401939F2: add     rsp, 8
 * 00000001401939F6: mov     eax, 0DADAh
 * 00000001401939FB: test    edx, 100h
 * 0000000140193A01: jz      short loc_140193A08
 * 0000000140193A03: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140193A08: lfence
 * 0000000140193A0B: mov     byte ptr [rbp-55h], 2
 * 0000000140193A0F: mov     rbx, gs:188h
 * 0000000140193A18: prefetchw byte ptr [rbx+90h]
 * 0000000140193A1F: stmxcsr dword ptr [rbp-54h]
 * 0000000140193A23: ldmxcsr dword ptr gs:180h
 * 0000000140193A2C: cmp     byte ptr [rbx+3], 0
 * 0000000140193A30: mov     word ptr [rbp+80h], 0
 * 0000000140193A39: jz      loc_140193AC7
 * 0000000140193A3F: test    byte ptr [rbx+3], 3
 * 0000000140193A43: mov     [rbp-38h], r8
 * 0000000140193A47: mov     [rbp-30h], r9
 * 0000000140193A4B: jz      short loc_140193A52
 * 0000000140193A4D: call    KiSaveDebugRegisterState
 * 0000000140193A52: test    byte ptr [rbx+3], 4
 * 0000000140193A56: jz      short loc_140193A66
 * 0000000140193A58: sti
 * 0000000140193A59: mov     rcx, rsp
 * 0000000140193A5C: call    PsPicoSystemCallDispatch
 * 0000000140193A61: jmp     KiSystemServiceExit
 * 0000000140193A66: test    byte ptr [rbx+3], 80h
 * 0000000140193A6A: jz      short loc_140193AB4
 * 0000000140193A6C: mov     ecx, 0C0000102h
 * 0000000140193A71: rdmsr
 * 0000000140193A73: shl     rdx, 20h
 * 0000000140193A77: or      rax, rdx
 * 0000000140193A7A: cmp     rax, cs:MmUserProbeAddress
 * 0000000140193A81: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140193A89: cmp     [rbx+0F0h], rax
 * 0000000140193A90: jz      short loc_140193AB4
 * 0000000140193A92: mov     rdx, [rbx+1F0h]
 * 0000000140193A99: bts     dword ptr [rbx+74h], 8
 * 0000000140193A9E: dec     word ptr [rbx+1E6h]
 * 0000000140193AA5: mov     [rdx+80h], rax
 * 0000000140193AAC: sti
 * 0000000140193AAD: call    KiUmsCallEntry
 * 0000000140193AB2: jmp     short loc_140193ABF
 * 0000000140193AB4: test    byte ptr [rbx+3], 40h
 * 0000000140193AB8: jz      short loc_140193ABF
 * 0000000140193ABA: bts     dword ptr [rbx+74h], 10h
 * 0000000140193ABF: mov     r8, [rbp-38h]
 * 0000000140193AC3: mov     r9, [rbp-30h]
 * 0000000140193AC7: mov     rax, [rbp-50h]
 * 0000000140193ACB: mov     rcx, [rbp-48h]
 * 0000000140193ACF: mov     rdx, [rbp-40h]
 * 0000000140193AD3: sti
 * 0000000140193AD4: mov     [rbx+88h], rcx
 * 0000000140193ADB: mov     [rbx+80h], eax
 * 0000000140193AE1: nop     word ptr [rax+rax+00000000h]
 * 0000000140193AF0: mov     [rbx+90h], rsp
 * 0000000140193AF7: mov     edi, eax
 * 0000000140193AF9: shr     edi, 7
 * 0000000140193AFC: and     edi, 20h
 * 0000000140193AFF: and     eax, 0FFFh
 * 0000000140193B04: lea     r10, KeServiceDescriptorTable
 * 0000000140193B0B: lea     r11, KeServiceDescriptorTableShadow
 * 0000000140193B12: test    dword ptr [rbx+78h], 40h
 * 0000000140193B19: cmovnz  r10, r11
 * 0000000140193B1D: cmp     eax, [rdi+r10+10h]
 * 0000000140193B22: jnb     loc_140193FD2
 * 0000000140193B28: mov     r10, [rdi+r10]
 * 0000000140193B2C: movsxd  r11, dword ptr [r10+rax*4]
 * 0000000140193B30: mov     rax, r11
 * 0000000140193B33: sar     r11, 4
 * 0000000140193B37: add     r10, r11
 * 0000000140193B3A: cmp     edi, 20h ; ' '
 * 0000000140193B3D: jnz     short loc_140193B90
 * 0000000140193B3F: mov     r11, [rbx+0F0h]
 * 0000000140193B46: cmp     dword ptr [r11+1740h], 0
 * 0000000140193B4E: jz      short loc_140193B90
 * 0000000140193B50: mov     [rbp-50h], rax
 * 0000000140193B54: mov     [rbp-48h], rcx
 * 0000000140193B58: mov     [rbp-40h], rdx
 * 0000000140193B5C: mov     rbx, r8
 * 0000000140193B5F: mov     rdi, r9
 * 0000000140193B62: mov     rsi, r10
 * 0000000140193B65: mov     ecx, 7
 * 0000000140193B6A: xor     edx, edx
 * 0000000140193B6C: xor     r8, r8
 * 0000000140193B6F: xor     r9, r9
 * 0000000140193B72: call    PsInvokeWin32Callout
 * 0000000140193B77: mov     rax, [rbp-50h]
 * 0000000140193B7B: mov     rcx, [rbp-48h]
 * 0000000140193B7F: mov     rdx, [rbp-40h]
 * 0000000140193B83: mov     r8, rbx
 * 0000000140193B86: mov     r9, rdi
 * 0000000140193B89: mov     r10, rsi
 * 0000000140193B8C: nop     dword ptr [rax+00h]
 * 0000000140193B90: and     eax, 0Fh
 * 0000000140193B93: jz      KiSystemServiceCopyEnd
 * 0000000140193B99: shl     eax, 3
 * 0000000140193B9C: lea     rsp, [rsp-70h]
 * 0000000140193BA1: lea     rdi, [rsp+100h+var_E8]
 * 0000000140193BA6: mov     rsi, [rbp+100h]
 * 0000000140193BAD: lea     rsi, [rsi+20h]
 * 0000000140193BB1: test    byte ptr [rbp+0F0h], 1
 * 0000000140193BB8: jz      short loc_140193BD0
 * 0000000140193BBA: cmp     rsi, cs:MmUserProbeAddress
 * 0000000140193BC1: cmovnb  rsi, cs:MmUserProbeAddress
 * 0000000140193BC9: nop     dword ptr [rax+00000000h]
 * 0000000140193BD0: lea     r11, KiSystemServiceCopyEnd
 * 0000000140193BD7: sub     r11, rax
 * 0000000140193BDA: jmp     r11
 * 0000000140193BE0: mov     rax, [rsi+70h]
 * 0000000140193BE4: mov     [rdi+70h], rax
 * 0000000140193BE8: mov     rax, [rsi+68h]
 * 0000000140193BEC: mov     [rdi+68h], rax
 * 0000000140193BF0: mov     rax, [rsi+60h]
 * 0000000140193BF4: mov     [rdi+60h], rax
 * 0000000140193BF8: mov     rax, [rsi+58h]
 * 0000000140193BFC: mov     [rdi+58h], rax
 * 0000000140193C00: mov     rax, [rsi+50h]
 * 0000000140193C04: mov     [rdi+50h], rax
 * 0000000140193C08: mov     rax, [rsi+48h]
 * 0000000140193C0C: mov     [rdi+48h], rax
 * 0000000140193C10: mov     rax, [rsi+40h]
 * 0000000140193C14: mov     [rdi+40h], rax
 * 0000000140193C18: mov     rax, [rsi+38h]
 * 0000000140193C1C: mov     [rdi+38h], rax
 * 0000000140193C20: mov     rax, [rsi+30h]
 * 0000000140193C24: mov     [rdi+30h], rax
 * 0000000140193C28: mov     rax, [rsi+28h]
 * 0000000140193C2C: mov     [rdi+28h], rax
 * 0000000140193C30: mov     rax, [rsi+20h]
 * 0000000140193C34: mov     [rdi+20h], rax
 * 0000000140193C38: mov     rax, [rsi+18h]
 * 0000000140193C3C: mov     [rdi+18h], rax
 * 0000000140193C40: mov     rax, [rsi+10h]
 * 0000000140193C44: mov     [rdi+10h], rax
 * 0000000140193C48: mov     rax, [rsi+8]
 * 0000000140193C4C: mov     [rdi+8], rax
 * 0000000140193C50: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 0000000140193C5A: jnz     loc_140194070
 * 0000000140193C60: call    r10
 * 0000000140193C63: inc     dword ptr gs:2E38h
 * 0000000140193C6B: mov     rbx, [rbp+0C0h]
 * 0000000140193C72: mov     rdi, [rbp+0C8h]
 * 0000000140193C79: mov     rsi, [rbp+0D0h]
 * 0000000140193C80: mov     r11, gs:188h
 * 0000000140193C89: test    byte ptr [rbp+0F0h], 1
 * 0000000140193C90: jz      loc_140193FA5
 * 0000000140193C96: mov     rcx, cr8
 * 0000000140193C9A: or      cl, [r11+24Ah]
 * 0000000140193CA1: or      ecx, [r11+1E4h]
 * 0000000140193CA8: jnz     loc_14019403C
 * 0000000140193CAE: cli
 * 0000000140193CAF: mov     rcx, gs:188h
 * 0000000140193CB8: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140193CBF: jz      short loc_140193D18
 * 0000000140193CC1: mov     [rbp-50h], rax
 * 0000000140193CC5: xor     eax, eax
 * 0000000140193CC7: mov     [rbp-48h], rax
 * 0000000140193CCB: mov     [rbp-40h], rax
 * 0000000140193CCF: mov     [rbp-38h], rax
 * 0000000140193CD3: mov     [rbp-30h], rax
 * 0000000140193CD7: mov     [rbp-28h], rax
 * 0000000140193CDB: mov     [rbp-20h], rax
 * 0000000140193CDF: pxor    xmm0, xmm0
 * 0000000140193CE3: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140193CE7: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140193CEB: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140193CEF: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140193CF3: movaps  xmmword ptr [rbp+30h], xmm0
 * 0000000140193CF7: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140193CFB: mov     ecx, 1
 * 0000000140193D00: mov     cr8, rcx
 * 0000000140193D04: sti
 * 0000000140193D05: call    KiInitiateUserApc
 * 0000000140193D0A: cli
 * 0000000140193D0B: mov     ecx, 0
 * 0000000140193D10: mov     cr8, rcx
 * 0000000140193D14: mov     rax, [rbp-50h]
 * 0000000140193D18: mov     rcx, gs:188h
 * 0000000140193D21: test    dword ptr [rcx], 40010000h
 * 0000000140193D27: jz      short loc_140193D56
 * 0000000140193D29: mov     [rbp-50h], rax
 * 0000000140193D2D: test    byte ptr [rcx+2], 1
 * 0000000140193D31: jz      short loc_140193D41
 * 0000000140193D33: call    KiCopyCounters
 * 0000000140193D38: mov     rcx, gs:188h
 * 0000000140193D41: test    byte ptr [rcx+3], 40h
 * 0000000140193D45: jz      short loc_140193D52
 * 0000000140193D47: lea     rsp, [rbp-80h]
 * 0000000140193D4B: xor     ecx, ecx
 * 0000000140193D4D: call    KiUmsExit
 * 0000000140193D52: mov     rax, [rbp-50h]
 * 0000000140193D56: ldmxcsr dword ptr [rbp-54h]
 * 0000000140193D5A: xor     r10, r10
 * 0000000140193D5D: cmp     word ptr [rbp+80h], 0
 * 0000000140193D65: jz      short loc_140193DA8
 * 0000000140193D67: mov     [rbp-50h], rax
 * 0000000140193D6B: call    KiRestoreDebugRegisterState
 * 0000000140193D70: mov     rax, gs:188h
 * 0000000140193D79: mov     rax, [rax+0B8h]
 * 0000000140193D80: mov     rax, [rax+2C8h]
 * 0000000140193D87: or      rax, rax
 * 0000000140193D8A: jz      short loc_140193DA4
 * 0000000140193D8C: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140193D94: jnz     short loc_140193DA4
 * 0000000140193D96: mov     r10, [rbp+0E8h]
 * 0000000140193D9D: mov     [rbp+0E8h], rax
 * 0000000140193DA4: mov     rax, [rbp-50h]
 * 0000000140193DA8: mov     [rbp-50h], rax
 * 0000000140193DAC: movzx   eax, word ptr gs:2EBAh
 * 0000000140193DB5: cmp     gs:2EB4h, ax
 * 0000000140193DBE: jz      short loc_140193DD2
 * 0000000140193DC0: mov     gs:2EB4h, ax
 * 0000000140193DC9: mov     ecx, 48h ; 'H'
 * 0000000140193DCE: xor     edx, edx
 * 0000000140193DD0: wrmsr
 * 0000000140193DD2: btr     word ptr gs:2EB0h, 2
 * 0000000140193DDD: jnb     short loc_140193DED
 * 0000000140193DDF: mov     eax, 1
 * 0000000140193DE4: xor     edx, edx
 * 0000000140193DE6: mov     ecx, 49h ; 'I'
 * 0000000140193DEB: wrmsr
 * 0000000140193DED: btr     word ptr gs:2EB0h, 5
 * 0000000140193DF8: jnb     loc_140193F23
 * 0000000140193DFE: call    loc_140193F11
 * 0000000140193E03: add     rsp, 8
 * 0000000140193E07: call    loc_140193F1A
 * 0000000140193E0C: add     rsp, 8
 * 0000000140193E10: call    loc_140193E03
 * 0000000140193E15: add     rsp, 8
 * 0000000140193E19: call    loc_140193E0C
 * 0000000140193E1E: add     rsp, 8
 * 0000000140193E22: call    loc_140193E15
 * 0000000140193E27: add     rsp, 8
 * 0000000140193E2B: call    loc_140193E1E
 * 0000000140193E30: add     rsp, 8
 * 0000000140193E34: call    loc_140193E27
 * 0000000140193E39: add     rsp, 8
 * 0000000140193E3D: call    loc_140193E30
 * 0000000140193E42: add     rsp, 8
 * 0000000140193E46: call    loc_140193E39
 * 0000000140193E4B: add     rsp, 8
 * 0000000140193E4F: call    loc_140193E42
 * 0000000140193E54: add     rsp, 8
 * 0000000140193E58: call    loc_140193E4B
 * 0000000140193E5D: add     rsp, 8
 * 0000000140193E61: call    loc_140193E54
 * 0000000140193E66: add     rsp, 8
 * 0000000140193E6A: call    loc_140193E5D
 * 0000000140193E6F: add     rsp, 8
 * 0000000140193E73: call    loc_140193E66
 * 0000000140193E78: add     rsp, 8
 * 0000000140193E7C: call    loc_140193E6F
 * 0000000140193E81: add     rsp, 8
 * 0000000140193E85: call    loc_140193E78
 * 0000000140193E8A: add     rsp, 8
 * 0000000140193E8E: call    loc_140193E81
 * 0000000140193E93: add     rsp, 8
 * 0000000140193E97: call    loc_140193E8A
 * 0000000140193E9C: add     rsp, 8
 * 0000000140193EA0: call    loc_140193E93
 * 0000000140193EA5: add     rsp, 8
 * 0000000140193EA9: call    loc_140193E9C
 * 0000000140193EAE: add     rsp, 8
 * 0000000140193EB2: call    loc_140193EA5
 * 0000000140193EB7: add     rsp, 8
 * 0000000140193EBB: call    loc_140193EAE
 * 0000000140193EC0: add     rsp, 8
 * 0000000140193EC4: call    loc_140193EB7
 * 0000000140193EC9: add     rsp, 8
 * 0000000140193ECD: call    loc_140193EC0
 * 0000000140193ED2: add     rsp, 8
 * 0000000140193ED6: call    loc_140193EC9
 * 0000000140193EDB: add     rsp, 8
 * 0000000140193EDF: call    loc_140193ED2
 * 0000000140193EE4: add     rsp, 8
 * 0000000140193EE8: call    loc_140193EDB
 * 0000000140193EED: add     rsp, 8
 * 0000000140193EF1: call    loc_140193EE4
 * 0000000140193EF6: add     rsp, 8
 * 0000000140193EFA: call    loc_140193EED
 * 0000000140193EFF: add     rsp, 8
 * 0000000140193F03: call    loc_140193EF6
 * 0000000140193F08: add     rsp, 8
 * 0000000140193F0C: call    loc_140193EFF
 * 0000000140193F11: add     rsp, 8
 * 0000000140193F15: call    loc_140193F08
 * 0000000140193F1A: add     rsp, 8
 * 0000000140193F1E: mov     eax, 0DADAh
 * 0000000140193F23: test    word ptr gs:2EB0h, 40h
 * 0000000140193F2E: jz      short loc_140193F3C
 * 0000000140193F30: xor     eax, eax
 * 0000000140193F32: xor     edx, edx
 * 0000000140193F34: mov     ecx, 1
 * 0000000140193F39: div     rcx
 * 0000000140193F3C: mov     rax, [rbp-50h]
 * 0000000140193F40: mov     r8, [rbp+100h]
 * 0000000140193F47: mov     r9, [rbp+0D8h]
 * 0000000140193F4E: xor     edx, edx
 * 0000000140193F50: pxor    xmm0, xmm0
 * 0000000140193F54: pxor    xmm1, xmm1
 * 0000000140193F58: pxor    xmm2, xmm2
 * 0000000140193F5C: pxor    xmm3, xmm3
 * 0000000140193F60: pxor    xmm4, xmm4
 * 0000000140193F64: pxor    xmm5, xmm5
 * 0000000140193F68: mov     rcx, [rbp+0E8h]
 * 0000000140193F6F: mov     r11, [rbp+0F8h]
 * 0000000140193F76: test    cs:KiKvaShadow, 1
 * 0000000140193F7D: jnz     KiKernelSysretExit
 * 0000000140193F83: mov     rbp, r9
 * 0000000140193F86: mov     rsp, r8
 * 0000000140193F89: test    word ptr gs:2EB0h, 80h
 * 0000000140193F94: jz      short loc_140193F9F
 * 0000000140193F96: verw    word ptr gs:701Ch
 * 0000000140193F9F: swapgs
 * 0000000140193FA2: sysret
 * 0000000140193FA5: mov     rdx, [rbp+0B8h]
 * 0000000140193FAC: mov     [r11+90h], rdx
 * 0000000140193FB3: mov     dl, [rbp-58h]
 * 0000000140193FB6: mov     [r11+232h], dl
 * 0000000140193FBD: cli
 * 0000000140193FBE: mov     rsp, rbp
 * 0000000140193FC1: mov     rbp, [rbp+0D8h]
 * 0000000140193FC8: mov     rsp, [rsp+90h+arg_68]
 * 0000000140193FD0: sti
 * 0000000140193FD1: retn
 * 0000000140193FD2: cmp     edi, 20h ; ' '
 * 0000000140193FD5: jnz     short loc_140194032
 * 0000000140193FD7: mov     [rbp-80h], eax
 * 0000000140193FDA: mov     [rbp-78h], rcx
 * 0000000140193FDE: mov     [rbp-70h], rdx
 * 0000000140193FE2: mov     [rbp-68h], r8
 * 0000000140193FE6: mov     [rbp-60h], r9
 * 0000000140193FEA: call    KiConvertToGuiThread
 * 0000000140193FEF: or      eax, eax
 * 0000000140193FF1: mov     eax, [rbp-80h]
 * 0000000140193FF4: mov     rcx, [rbp-78h]
 * 0000000140193FF8: mov     rdx, [rbp-70h]
 * 0000000140193FFC: mov     r8, [rbp-68h]
 * 0000000140194000: mov     r9, [rbp-60h]
 * 0000000140194004: mov     [rbx+90h], rsp
 * 000000014019400B: jz      KiSystemServiceRepeat
 * 0000000140194011: lea     rdi, xmmword_1403D17A0
 * 0000000140194018: mov     esi, [rdi+10h]
 * 000000014019401B: mov     rdi, [rdi]
 * 000000014019401E: cmp     eax, esi
 * 0000000140194020: jnb     short loc_140194032
 * 0000000140194022: lea     rdi, [rdi+rsi*4]
 * 0000000140194026: movsx   eax, byte ptr [rax+rdi]
 * 000000014019402A: or      eax, eax
 * 000000014019402C: jle     KiSystemServiceExit
 * 0000000140194032: mov     eax, 0C000001Ch
 * 0000000140194037: jmp     KiSystemServiceExit
 * 000000014019403C: mov     ecx, 4Ah ; 'J'
 * 0000000140194041: xor     r9d, r9d
 * 0000000140194044: mov     r8, cr8
 * 0000000140194048: or      r8d, r8d
 * 000000014019404B: jnz     short loc_140194061
 * 000000014019404D: mov     ecx, 1
 * 0000000140194052: movzx   r8d, byte ptr [r11+24Ah]
 * 000000014019405A: mov     r9d, [r11+1E4h]
 * 0000000140194061: mov     rdx, [rbp+0E8h]
 * 0000000140194068: mov     r10, rbp
 * 000000014019406B: call    KiBugCheckDispatch
 * 0000000140194070: sub     rsp, 50h
 * 0000000140194074: mov     [rsp+0E0h+var_C0], rcx
 * 0000000140194079: mov     [rsp+0E0h+var_B8], rdx
 * 000000014019407E: mov     [rsp+0E0h+var_B0], r8
 * 0000000140194083: mov     [rsp+0E0h+var_A8], r9
 * 0000000140194088: mov     [rsp+0E0h+var_A0], r10
 * 000000014019408D: mov     rcx, r10
 * 0000000140194090: call    PerfInfoLogSysCallEntry
 * 0000000140194095: mov     rcx, [rsp+0E0h+var_C0]
 * 000000014019409A: mov     rdx, [rsp+0E0h+var_B8]
 * 000000014019409F: mov     r8, [rsp+0E0h+var_B0]
 * 00000001401940A4: mov     r9, [rsp+0E0h+var_A8]
 * 00000001401940A9: mov     r10, [rsp+0E0h+var_A0]
 * 00000001401940AE: add     rsp, 50h
 * 00000001401940B2: call    r10
 * 00000001401940B5: mov     [rbp-50h], rax
 * 00000001401940B9: mov     rcx, rax
 * 00000001401940BC: call    PerfInfoLogSysCallExit
 * 00000001401940C1: mov     rax, [rbp-50h]
 * 00000001401940C5: jmp     loc_140193C63
 * 00000001401940CA: retn
 */
