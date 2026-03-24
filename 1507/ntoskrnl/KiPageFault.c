/*
 * XREFs of KiPageFault @ 0x140190E00
 * Callers:
 *     KiPageFaultShadow @ 0x140274700 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     KiCheckForSListAddress @ 0x1401020C0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x140190E00 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x140194100 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x140194D80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140195200 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KdSetOwedBreakpoints @ 0x1401FE994 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x140243858 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x140190E00
 * Reason: Hex-Rays returned no pseudocode for 0x140190E00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140190E00: push    rbp
 * 0000000140190E01: sub     rsp, 158h
 * 0000000140190E08: lea     rbp, [rsp+80h]
 * 0000000140190E10: mov     [rbp+0D8h+var_12D], 1
 * 0000000140190E14: mov     [rbp+0D8h+var_128], rax
 * 0000000140190E18: mov     [rbp+0D8h+var_120], rcx
 * 0000000140190E1C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140190E20: mov     [rbp+0D8h+var_110], r8
 * 0000000140190E24: mov     [rbp+0D8h+var_108], r9
 * 0000000140190E28: mov     [rbp+0D8h+var_100], r10
 * 0000000140190E2C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140190E30: test    byte ptr [rbp+0D8h+arg_8], 1
 * 0000000140190E37: jnz     short loc_140190E68
 * 0000000140190E39: lfence
 * 0000000140190E3C: test    word ptr gs:2EB0h, 1
 * 0000000140190E47: jnz     short loc_140190E51
 * 0000000140190E49: lfence
 * 0000000140190E4C: jmp     loc_14019109D
 * 0000000140190E51: movzx   eax, word ptr gs:2EB4h
 * 0000000140190E5A: mov     ecx, 48h ; 'H'
 * 0000000140190E5F: xor     edx, edx
 * 0000000140190E61: wrmsr
 * 0000000140190E63: jmp     loc_14019109D
 * 0000000140190E68: test    cs:KiKvaShadow, 1
 * 0000000140190E6F: jnz     short loc_140190E74
 * 0000000140190E71: swapgs
 * 0000000140190E74: lfence
 * 0000000140190E77: mov     r10, gs:188h
 * 0000000140190E80: mov     rcx, gs:188h
 * 0000000140190E89: mov     rcx, [rcx+220h]
 * 0000000140190E90: mov     rcx, [rcx+7A0h]
 * 0000000140190E97: mov     gs:2EA8h, rcx
 * 0000000140190EA0: movzx   eax, word ptr gs:2EB6h
 * 0000000140190EA9: cmp     gs:2EB4h, ax
 * 0000000140190EB2: jz      short loc_140190EC6
 * 0000000140190EB4: mov     gs:2EB4h, ax
 * 0000000140190EBD: mov     ecx, 48h ; 'H'
 * 0000000140190EC2: xor     edx, edx
 * 0000000140190EC4: wrmsr
 * 0000000140190EC6: movzx   edx, word ptr gs:2EB0h
 * 0000000140190ECF: test    edx, 8
 * 0000000140190ED5: jz      short loc_140190EEE
 * 0000000140190ED7: mov     eax, 1
 * 0000000140190EDC: xor     edx, edx
 * 0000000140190EDE: mov     ecx, 49h ; 'I'
 * 0000000140190EE3: wrmsr
 * 0000000140190EE5: movzx   edx, word ptr gs:2EB0h
 * 0000000140190EEE: test    edx, 2
 * 0000000140190EF4: jz      loc_14019101F
 * 0000000140190EFA: call    loc_14019100D
 * 0000000140190EFF: add     rsp, 8
 * 0000000140190F03: call    loc_140191016
 * 0000000140190F08: add     rsp, 8
 * 0000000140190F0C: call    loc_140190EFF
 * 0000000140190F11: add     rsp, 8
 * 0000000140190F15: call    loc_140190F08
 * 0000000140190F1A: add     rsp, 8
 * 0000000140190F1E: call    loc_140190F11
 * 0000000140190F23: add     rsp, 8
 * 0000000140190F27: call    loc_140190F1A
 * 0000000140190F2C: add     rsp, 8
 * 0000000140190F30: call    loc_140190F23
 * 0000000140190F35: add     rsp, 8
 * 0000000140190F39: call    loc_140190F2C
 * 0000000140190F3E: add     rsp, 8
 * 0000000140190F42: call    loc_140190F35
 * 0000000140190F47: add     rsp, 8
 * 0000000140190F4B: call    loc_140190F3E
 * 0000000140190F50: add     rsp, 8
 * 0000000140190F54: call    loc_140190F47
 * 0000000140190F59: add     rsp, 8
 * 0000000140190F5D: call    loc_140190F50
 * 0000000140190F62: add     rsp, 8
 * 0000000140190F66: call    loc_140190F59
 * 0000000140190F6B: add     rsp, 8
 * 0000000140190F6F: call    loc_140190F62
 * 0000000140190F74: add     rsp, 8
 * 0000000140190F78: call    loc_140190F6B
 * 0000000140190F7D: add     rsp, 8
 * 0000000140190F81: call    loc_140190F74
 * 0000000140190F86: add     rsp, 8
 * 0000000140190F8A: call    loc_140190F7D
 * 0000000140190F8F: add     rsp, 8
 * 0000000140190F93: call    loc_140190F86
 * 0000000140190F98: add     rsp, 8
 * 0000000140190F9C: call    loc_140190F8F
 * 0000000140190FA1: add     rsp, 8
 * 0000000140190FA5: call    loc_140190F98
 * 0000000140190FAA: add     rsp, 8
 * 0000000140190FAE: call    loc_140190FA1
 * 0000000140190FB3: add     rsp, 8
 * 0000000140190FB7: call    loc_140190FAA
 * 0000000140190FBC: add     rsp, 8
 * 0000000140190FC0: call    loc_140190FB3
 * 0000000140190FC5: add     rsp, 8
 * 0000000140190FC9: call    loc_140190FBC
 * 0000000140190FCE: add     rsp, 8
 * 0000000140190FD2: call    loc_140190FC5
 * 0000000140190FD7: add     rsp, 8
 * 0000000140190FDB: call    loc_140190FCE
 * 0000000140190FE0: add     rsp, 8
 * 0000000140190FE4: call    loc_140190FD7
 * 0000000140190FE9: add     rsp, 8
 * 0000000140190FED: call    loc_140190FE0
 * 0000000140190FF2: add     rsp, 8
 * 0000000140190FF6: call    loc_140190FE9
 * 0000000140190FFB: add     rsp, 8
 * 0000000140190FFF: call    loc_140190FF2
 * 0000000140191004: add     rsp, 8
 * 0000000140191008: call    loc_140190FFB
 * 000000014019100D: add     rsp, 8
 * 0000000140191011: call    loc_140191004
 * 0000000140191016: add     rsp, 8
 * 000000014019101A: mov     eax, 0DADAh
 * 000000014019101F: test    edx, 100h
 * 0000000140191025: jz      short loc_14019102C
 * 0000000140191027: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014019102C: lfence
 * 000000014019102F: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 0000000140191037: jnz     short loc_140191088
 * 0000000140191039: mov     ecx, 0C0000102h
 * 000000014019103E: rdmsr
 * 0000000140191040: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 0000000140191043: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 0000000140191046: test    byte ptr [r10+3], 80h
 * 000000014019104B: jz      short loc_140191088
 * 000000014019104D: shl     rdx, 20h
 * 0000000140191051: or      rax, rdx
 * 0000000140191054: cmp     rax, cs:MmUserProbeAddress
 * 000000014019105B: cmovnb  rax, cs:MmUserProbeAddress
 * 0000000140191063: cmp     [r10+0F0h], rax
 * 000000014019106A: jz      short loc_140191088
 * 000000014019106C: mov     rdx, [r10+1F0h]
 * 0000000140191073: bts     dword ptr [r10+74h], 8
 * 0000000140191079: dec     word ptr [r10+1E6h]
 * 0000000140191081: mov     [rdx+80h], rax
 * 0000000140191088: test    byte ptr [r10+3], 3
 * 000000014019108D: mov     [rbp+0D8h+var_58], 0
 * 0000000140191096: jz      short loc_14019109D
 * 0000000140191098: call    KiSaveDebugRegisterState
 * 000000014019109D: cld
 * 000000014019109E: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401910A2: ldmxcsr dword ptr gs:180h
 * 00000001401910AB: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401910AF: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401910B3: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401910B7: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401910BB: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401910BF: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401910C3: mov     eax, [rbp+0E0h]
 * 00000001401910C9: mov     rcx, cr2
 * 00000001401910CC: test    [rbp+0D8h+arg_10], 200h
 * 00000001401910D7: jz      short loc_1401910DA
 * 00000001401910D9: sti
 * 00000001401910DA: mov     r9, gs:188h
 * 00000001401910E3: bt      dword ptr [r9+74h], 8
 * 00000001401910E9: jnb     short loc_1401910F9
 * 00000001401910EB: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001401910F2: jz      short loc_1401910F9
 * 00000001401910F4: call    KiUmsTrapEntry
 * 00000001401910F9: mov     [rbp+0D8h+var_88], rcx
 * 00000001401910FD: bt      dword ptr [rbp+0D8h+arg_10], 9
 * 0000000140191105: jnb     loc_140191238
 * 000000014019110B: lea     r9, [rbp+0D8h+var_158]
 * 000000014019110F: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 0000000140191116: and     r8b, 1
 * 000000014019111A: mov     rdx, rcx; ULONG_PTR
 * 000000014019111D: movzx   ecx, al; BugCheckParameter2
 * 0000000140191120: shr     eax, 1
 * 0000000140191122: and     eax, 9
 * 0000000140191125: mov     [rbp+0D8h+var_12E], al
 * 0000000140191128: call    MmAccessFault
 * 000000014019112D: test    eax, eax
 * 000000014019112F: jl      short loc_140191167
 * 0000000140191131: cmp     cs:PsWatchEnabled, 0
 * 0000000140191138: jz      short loc_14019114C
 * 000000014019113A: mov     r8, [rbp+0D8h+var_88]
 * 000000014019113E: mov     rdx, [rbp+0D8h+arg_0]
 * 0000000140191145: mov     ecx, eax
 * 0000000140191147: call    PsWatchWorkingSet
 * 000000014019114C: cmp     cs:KdpOweBreakpoint, 0
 * 0000000140191153: jz      loc_14019123E
 * 0000000140191159: mov     rcx, [rbp+0D8h+var_88]
 * 000000014019115D: call    KdSetOwedBreakpoints
 * 0000000140191162: jmp     loc_14019123E
 * 0000000140191167: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014019116E: jz      short loc_1401911C2
 * 0000000140191170: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 0000000140191178: jnz     short loc_1401911B8
 * 000000014019117A: mov     r9, gs:188h
 * 0000000140191183: test    byte ptr [r9+3], 4
 * 0000000140191188: jz      short loc_140191193
 * 000000014019118A: mov     r8, [r9+798h]
 * 0000000140191191: jmp     short loc_14019119C
 * 0000000140191193: mov     r8, gs:30h
 * 000000014019119C: cmp     r8, [rbp+0D8h+var_F0]
 * 00000001401911A0: jz      short loc_1401911C2
 * 00000001401911A2: mov     ecx, 0C0000102h
 * 00000001401911A7: mov     eax, r8d
 * 00000001401911AA: shr     r8, 20h
 * 00000001401911AE: mov     edx, r8d
 * 00000001401911B1: wrmsr
 * 00000001401911B3: jmp     loc_14019123E
 * 00000001401911B8: mov     rcx, [rbp+0D8h+var_88]
 * 00000001401911BC: shr     rcx, 20h
 * 00000001401911C0: jnz     short loc_14019123E
 * 00000001401911C2: mov     ecx, eax
 * 00000001401911C4: mov     edx, 2
 * 00000001401911C9: cmp     ecx, 0D0000006h
 * 00000001401911CF: jz      short loc_140191212
 * 00000001401911D1: cmp     ecx, 0C0000005h
 * 00000001401911D7: jz      short loc_1401911F8
 * 00000001401911D9: cmp     ecx, 80000001h
 * 00000001401911DF: jz      short loc_1401911FD
 * 00000001401911E1: cmp     ecx, 0C00000FDh
 * 00000001401911E7: jz      short loc_1401911FD
 * 00000001401911E9: mov     ecx, 0C0000006h
 * 00000001401911EE: mov     edx, 3
 * 00000001401911F3: mov     r11d, eax
 * 00000001401911F6: jmp     short loc_1401911FD
 * 00000001401911F8: mov     ecx, 10000004h
 * 00000001401911FD: mov     r10, [rbp+0D8h+var_88]
 * 0000000140191201: movzx   r9, [rbp+0D8h+var_12E]
 * 0000000140191206: mov     r8, [rbp+0D8h+arg_0]
 * 000000014019120D: call    KiExceptionDispatch
 * 0000000140191212: mov     rax, cr8
 * 0000000140191216: mov     r10, [rbp+0D8h+arg_0]
 * 000000014019121D: movzx   r9, [rbp+0D8h+var_12E]
 * 0000000140191222: and     eax, 0FFh
 * 0000000140191227: mov     r8, rax
 * 000000014019122A: mov     rdx, [rbp+0D8h+var_88]
 * 000000014019122E: mov     ecx, 0Ah
 * 0000000140191233: call    KiBugCheckDispatch
 * 0000000140191238: xor     eax, eax
 * 000000014019123A: mov     al, 0FFh
 * 000000014019123C: jmp     short loc_140191216
 * 000000014019123E: mov     rax, cr8
 * 0000000140191242: or      eax, eax
 * 0000000140191244: mov     [rbp+0D8h+var_138], eax
 * 0000000140191247: jnz     short loc_140191252
 * 0000000140191249: mov     ecx, 1
 * 000000014019124E: mov     cr8, rcx
 * 0000000140191252: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140191256: call    KiCheckForSListAddress
 * 000000014019125B: mov     ecx, [rbp+0D8h+var_138]
 * 000000014019125E: or      ecx, ecx
 * 0000000140191260: jnz     short loc_140191266
 * 0000000140191262: mov     cr8, rcx
 * 0000000140191266: cli
 * 0000000140191267: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014019126E: jz      loc_1401914E2
 * 0000000140191274: mov     rcx, gs:188h
 * 000000014019127D: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140191284: jz      short loc_14019129F
 * 0000000140191286: mov     ecx, 1
 * 000000014019128B: mov     cr8, rcx
 * 000000014019128F: sti
 * 0000000140191290: call    KiInitiateUserApc
 * 0000000140191295: cli
 * 0000000140191296: mov     ecx, 0
 * 000000014019129B: mov     cr8, rcx
 * 000000014019129F: mov     rcx, gs:188h
 * 00000001401912A8: test    dword ptr [rcx], 40010000h
 * 00000001401912AE: jz      short loc_1401912D5
 * 00000001401912B0: test    byte ptr [rcx+2], 1
 * 00000001401912B4: jz      short loc_1401912C4
 * 00000001401912B6: call    KiCopyCounters
 * 00000001401912BB: mov     rcx, gs:188h
 * 00000001401912C4: test    byte ptr [rcx+3], 40h
 * 00000001401912C8: jz      short loc_1401912D5
 * 00000001401912CA: lea     rsp, [rbp-80h]
 * 00000001401912CE: mov     cl, 1
 * 00000001401912D0: call    KiUmsExit
 * 00000001401912D5: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401912D9: cmp     [rbp+0D8h+var_58], 0
 * 00000001401912E1: jz      short loc_1401912E8
 * 00000001401912E3: call    KiRestoreDebugRegisterState
 * 00000001401912E8: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401912EC: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401912F0: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401912F4: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401912F8: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401912FC: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140191300: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140191304: mov     r10, [rbp+0D8h+var_100]
 * 0000000140191308: mov     r9, [rbp+0D8h+var_108]
 * 000000014019130C: mov     r8, [rbp+0D8h+var_110]
 * 0000000140191310: movzx   eax, word ptr gs:2EBAh
 * 0000000140191319: cmp     gs:2EB4h, ax
 * 0000000140191322: jz      short loc_140191336
 * 0000000140191324: mov     gs:2EB4h, ax
 * 000000014019132D: mov     ecx, 48h ; 'H'
 * 0000000140191332: xor     edx, edx
 * 0000000140191334: wrmsr
 * 0000000140191336: btr     word ptr gs:2EB0h, 2
 * 0000000140191341: jnb     short loc_140191351
 * 0000000140191343: mov     eax, 1
 * 0000000140191348: xor     edx, edx
 * 000000014019134A: mov     ecx, 49h ; 'I'
 * 000000014019134F: wrmsr
 * 0000000140191351: btr     word ptr gs:2EB0h, 5
 * 000000014019135C: jnb     loc_140191487
 * 0000000140191362: call    loc_140191475
 * 0000000140191367: add     rsp, 8
 * 000000014019136B: call    loc_14019147E
 * 0000000140191370: add     rsp, 8
 * 0000000140191374: call    loc_140191367
 * 0000000140191379: add     rsp, 8
 * 000000014019137D: call    loc_140191370
 * 0000000140191382: add     rsp, 8
 * 0000000140191386: call    loc_140191379
 * 000000014019138B: add     rsp, 8
 * 000000014019138F: call    loc_140191382
 * 0000000140191394: add     rsp, 8
 * 0000000140191398: call    loc_14019138B
 * 000000014019139D: add     rsp, 8
 * 00000001401913A1: call    loc_140191394
 * 00000001401913A6: add     rsp, 8
 * 00000001401913AA: call    loc_14019139D
 * 00000001401913AF: add     rsp, 8
 * 00000001401913B3: call    loc_1401913A6
 * 00000001401913B8: add     rsp, 8
 * 00000001401913BC: call    loc_1401913AF
 * 00000001401913C1: add     rsp, 8
 * 00000001401913C5: call    loc_1401913B8
 * 00000001401913CA: add     rsp, 8
 * 00000001401913CE: call    loc_1401913C1
 * 00000001401913D3: add     rsp, 8
 * 00000001401913D7: call    loc_1401913CA
 * 00000001401913DC: add     rsp, 8
 * 00000001401913E0: call    loc_1401913D3
 * 00000001401913E5: add     rsp, 8
 * 00000001401913E9: call    loc_1401913DC
 * 00000001401913EE: add     rsp, 8
 * 00000001401913F2: call    loc_1401913E5
 * 00000001401913F7: add     rsp, 8
 * 00000001401913FB: call    loc_1401913EE
 * 0000000140191400: add     rsp, 8
 * 0000000140191404: call    loc_1401913F7
 * 0000000140191409: add     rsp, 8
 * 000000014019140D: call    loc_140191400
 * 0000000140191412: add     rsp, 8
 * 0000000140191416: call    loc_140191409
 * 000000014019141B: add     rsp, 8
 * 000000014019141F: call    loc_140191412
 * 0000000140191424: add     rsp, 8
 * 0000000140191428: call    loc_14019141B
 * 000000014019142D: add     rsp, 8
 * 0000000140191431: call    loc_140191424
 * 0000000140191436: add     rsp, 8
 * 000000014019143A: call    loc_14019142D
 * 000000014019143F: add     rsp, 8
 * 0000000140191443: call    loc_140191436
 * 0000000140191448: add     rsp, 8
 * 000000014019144C: call    loc_14019143F
 * 0000000140191451: add     rsp, 8
 * 0000000140191455: call    loc_140191448
 * 000000014019145A: add     rsp, 8
 * 000000014019145E: call    loc_140191451
 * 0000000140191463: add     rsp, 8
 * 0000000140191467: call    loc_14019145A
 * 000000014019146C: add     rsp, 8
 * 0000000140191470: call    loc_140191463
 * 0000000140191475: add     rsp, 8
 * 0000000140191479: call    loc_14019146C
 * 000000014019147E: add     rsp, 8
 * 0000000140191482: mov     eax, 0DADAh
 * 0000000140191487: test    word ptr gs:2EB0h, 40h
 * 0000000140191492: jz      short loc_1401914A0
 * 0000000140191494: xor     eax, eax
 * 0000000140191496: xor     edx, edx
 * 0000000140191498: mov     ecx, 1
 * 000000014019149D: div     rcx
 * 00000001401914A0: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401914A4: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401914A8: mov     rax, [rbp+0D8h+var_128]
 * 00000001401914AC: mov     rsp, rbp
 * 00000001401914AF: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401914B6: add     rsp, 0E8h
 * 00000001401914BD: test    cs:KiKvaShadow, 1
 * 00000001401914C4: jz      short loc_1401914CB
 * 00000001401914C6: jmp     KiKernelExit
 * 00000001401914CB: test    word ptr gs:2EB0h, 80h
 * 00000001401914D6: jz      short loc_1401914DD
 * 00000001401914D8: verw    [rsp-10h+arg_20]
 * 00000001401914DD: swapgs
 * 00000001401914E0: iretq
 * 00000001401914E2: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401914E6: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401914EA: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401914EE: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401914F2: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401914F6: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401914FA: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401914FE: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140191502: mov     r10, [rbp+0D8h+var_100]
 * 0000000140191506: mov     r9, [rbp+0D8h+var_108]
 * 000000014019150A: mov     r8, [rbp+0D8h+var_110]
 * 000000014019150E: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140191512: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140191516: mov     rax, [rbp+0D8h+var_128]
 * 000000014019151A: mov     rsp, rbp
 * 000000014019151D: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140191524: add     rsp, 0E8h
 * 000000014019152B: iretq
 */
