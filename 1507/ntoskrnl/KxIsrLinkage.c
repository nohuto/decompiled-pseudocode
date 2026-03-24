/*
 * XREFs of KxIsrLinkage @ 0x140185AF0
 * Callers:
 *     KxIsrLinkageShadow @ 0x140275840 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401020C0 (KiCheckForSListAddress.c)
 *     KiEndThreadAccountingPeriod @ 0x140102C70 (KiEndThreadAccountingPeriod.c)
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14017DE10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KxIsrLinkage @ 0x140185AF0 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x140194100 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KeWakeProcessor @ 0x140203EC8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x14025ED5C (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x140185AF0
 * Reason: Hex-Rays returned no pseudocode for 0x140185AF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140185AF0: push    rbp
 * 0000000140185AF1: push    rsi
 * 0000000140185AF2: sub     rsp, 150h
 * 0000000140185AF9: lea     rbp, [rsp+80h]
 * 0000000140185B01: mov     [rbp+0D8h+var_12D], 0
 * 0000000140185B05: mov     [rbp+0D8h+var_128], rax
 * 0000000140185B09: mov     [rbp+0D8h+var_120], rcx
 * 0000000140185B0D: mov     [rbp+0D8h+var_118], rdx
 * 0000000140185B11: mov     [rbp+0D8h+var_110], r8
 * 0000000140185B15: mov     [rbp+0D8h+var_108], r9
 * 0000000140185B19: mov     [rbp+0D8h+var_100], r10
 * 0000000140185B1D: mov     [rbp+0D8h+var_F8], r11
 * 0000000140185B21: test    [rbp+0D8h+arg_8], 1
 * 0000000140185B28: jnz     short loc_140185B59
 * 0000000140185B2A: lfence
 * 0000000140185B2D: test    word ptr gs:2EB0h, 1
 * 0000000140185B38: jnz     short loc_140185B42
 * 0000000140185B3A: lfence
 * 0000000140185B3D: jmp     loc_140185D35
 * 0000000140185B42: movzx   eax, word ptr gs:2EB4h
 * 0000000140185B4B: mov     ecx, 48h ; 'H'
 * 0000000140185B50: xor     edx, edx
 * 0000000140185B52: wrmsr
 * 0000000140185B54: jmp     loc_140185D35
 * 0000000140185B59: test    cs:KiKvaShadow, 1
 * 0000000140185B60: jnz     short loc_140185B65
 * 0000000140185B62: swapgs
 * 0000000140185B65: lfence
 * 0000000140185B68: mov     r10, gs:188h
 * 0000000140185B71: mov     rcx, gs:188h
 * 0000000140185B7A: mov     rcx, [rcx+220h]
 * 0000000140185B81: mov     rcx, [rcx+7A0h]
 * 0000000140185B88: mov     gs:2EA8h, rcx
 * 0000000140185B91: movzx   eax, word ptr gs:2EB6h
 * 0000000140185B9A: cmp     gs:2EB4h, ax
 * 0000000140185BA3: jz      short loc_140185BB7
 * 0000000140185BA5: mov     gs:2EB4h, ax
 * 0000000140185BAE: mov     ecx, 48h ; 'H'
 * 0000000140185BB3: xor     edx, edx
 * 0000000140185BB5: wrmsr
 * 0000000140185BB7: movzx   edx, word ptr gs:2EB0h
 * 0000000140185BC0: test    edx, 8
 * 0000000140185BC6: jz      short loc_140185BDF
 * 0000000140185BC8: mov     eax, 1
 * 0000000140185BCD: xor     edx, edx
 * 0000000140185BCF: mov     ecx, 49h ; 'I'
 * 0000000140185BD4: wrmsr
 * 0000000140185BD6: movzx   edx, word ptr gs:2EB0h
 * 0000000140185BDF: test    edx, 2
 * 0000000140185BE5: jz      loc_140185D10
 * 0000000140185BEB: call    loc_140185CFE
 * 0000000140185BF0: add     rsp, 8
 * 0000000140185BF4: call    loc_140185D07
 * 0000000140185BF9: add     rsp, 8
 * 0000000140185BFD: call    loc_140185BF0
 * 0000000140185C02: add     rsp, 8
 * 0000000140185C06: call    loc_140185BF9
 * 0000000140185C0B: add     rsp, 8
 * 0000000140185C0F: call    loc_140185C02
 * 0000000140185C14: add     rsp, 8
 * 0000000140185C18: call    loc_140185C0B
 * 0000000140185C1D: add     rsp, 8
 * 0000000140185C21: call    loc_140185C14
 * 0000000140185C26: add     rsp, 8
 * 0000000140185C2A: call    loc_140185C1D
 * 0000000140185C2F: add     rsp, 8
 * 0000000140185C33: call    loc_140185C26
 * 0000000140185C38: add     rsp, 8
 * 0000000140185C3C: call    loc_140185C2F
 * 0000000140185C41: add     rsp, 8
 * 0000000140185C45: call    loc_140185C38
 * 0000000140185C4A: add     rsp, 8
 * 0000000140185C4E: call    loc_140185C41
 * 0000000140185C53: add     rsp, 8
 * 0000000140185C57: call    loc_140185C4A
 * 0000000140185C5C: add     rsp, 8
 * 0000000140185C60: call    loc_140185C53
 * 0000000140185C65: add     rsp, 8
 * 0000000140185C69: call    loc_140185C5C
 * 0000000140185C6E: add     rsp, 8
 * 0000000140185C72: call    loc_140185C65
 * 0000000140185C77: add     rsp, 8
 * 0000000140185C7B: call    loc_140185C6E
 * 0000000140185C80: add     rsp, 8
 * 0000000140185C84: call    loc_140185C77
 * 0000000140185C89: add     rsp, 8
 * 0000000140185C8D: call    loc_140185C80
 * 0000000140185C92: add     rsp, 8
 * 0000000140185C96: call    loc_140185C89
 * 0000000140185C9B: add     rsp, 8
 * 0000000140185C9F: call    loc_140185C92
 * 0000000140185CA4: add     rsp, 8
 * 0000000140185CA8: call    loc_140185C9B
 * 0000000140185CAD: add     rsp, 8
 * 0000000140185CB1: call    loc_140185CA4
 * 0000000140185CB6: add     rsp, 8
 * 0000000140185CBA: call    loc_140185CAD
 * 0000000140185CBF: add     rsp, 8
 * 0000000140185CC3: call    loc_140185CB6
 * 0000000140185CC8: add     rsp, 8
 * 0000000140185CCC: call    loc_140185CBF
 * 0000000140185CD1: add     rsp, 8
 * 0000000140185CD5: call    loc_140185CC8
 * 0000000140185CDA: add     rsp, 8
 * 0000000140185CDE: call    loc_140185CD1
 * 0000000140185CE3: add     rsp, 8
 * 0000000140185CE7: call    loc_140185CDA
 * 0000000140185CEC: add     rsp, 8
 * 0000000140185CF0: call    loc_140185CE3
 * 0000000140185CF5: add     rsp, 8
 * 0000000140185CF9: call    loc_140185CEC
 * 0000000140185CFE: add     rsp, 8
 * 0000000140185D02: call    loc_140185CF5
 * 0000000140185D07: add     rsp, 8
 * 0000000140185D0B: mov     eax, 0DADAh
 * 0000000140185D10: test    edx, 100h
 * 0000000140185D16: jz      short loc_140185D1D
 * 0000000140185D18: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140185D1D: lfence
 * 0000000140185D20: test    byte ptr [r10+3], 3
 * 0000000140185D25: mov     [rbp+0D8h+var_58], 0
 * 0000000140185D2E: jz      short loc_140185D35
 * 0000000140185D30: call    KiSaveDebugRegisterState
 * 0000000140185D35: cld
 * 0000000140185D36: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140185D3A: ldmxcsr dword ptr gs:180h
 * 0000000140185D43: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140185D47: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140185D4B: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140185D4F: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140185D53: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140185D57: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140185D5B: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140185D64: jz      short loc_140185D6B
 * 0000000140185D66: call    KeWakeProcessor
 * 0000000140185D6B: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140185D72: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140185D79: jnb     short loc_140185D94
 * 0000000140185D7B: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140185D82: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140185D89: jb      short loc_140185D94
 * 0000000140185D8B: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140185D8F: call    KiCheckForSListAddress
 * 0000000140185D94: movzx   eax, byte ptr [rbp+0E0h]
 * 0000000140185D9B: mov     rsi, gs:20h
 * 0000000140185DA4: mov     rsi, [rsi+rax*8+2E00h]
 * 0000000140185DAC: inc     dword ptr gs:5C80h
 * 0000000140185DB4: test    rsi, rsi
 * 0000000140185DB7: jz      short loc_140185DBF
 * 0000000140185DB9: mov     rcx, [rsi+50h]
 * 0000000140185DBD: jmp     rcx
 * 0000000140185DBF: mov     ecx, eax
 * 0000000140185DC1: shr     ecx, 4
 * 0000000140185DC4: mov     rax, cr8
 * 0000000140185DC8: mov     cr8, rcx
 * 0000000140185DCC: mov     [rbp+0D8h+var_12F], al
 * 0000000140185DCF: mov     rcx, gs:20h
 * 0000000140185DD8: inc     byte ptr [rcx+20h]
 * 0000000140185DDB: cmp     byte ptr [rcx+20h], 1
 * 0000000140185DDF: jnz     short loc_140185E31
 * 0000000140185DE1: rdtsc
 * 0000000140185DE3: shl     rdx, 20h
 * 0000000140185DE7: or      rax, rdx
 * 0000000140185DEA: mov     r8, [rcx+8]
 * 0000000140185DEE: sub     rax, [rcx+5B38h]
 * 0000000140185DF5: add     [r8+48h], rax
 * 0000000140185DF9: mov     edx, [r8+50h]
 * 0000000140185DFD: add     [rcx+5B38h], rax
 * 0000000140185E04: add     rdx, rax
 * 0000000140185E07: mov     ecx, edx
 * 0000000140185E09: shr     rdx, 20h
 * 0000000140185E0D: jz      short loc_140185E12
 * 0000000140185E0F: or      ecx, 0FFFFFFFFh
 * 0000000140185E12: mov     [r8+50h], ecx
 * 0000000140185E16: test    byte ptr [r8+2], 3Eh
 * 0000000140185E1B: jz      short loc_140185E31
 * 0000000140185E1D: mov     rdx, r8
 * 0000000140185E20: mov     r8, rax
 * 0000000140185E23: mov     rcx, gs:20h
 * 0000000140185E2C: call    KiEndThreadAccountingPeriod
 * 0000000140185E31: sti
 * 0000000140185E32: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 0000000140185E3C: jz      short loc_140185E4A
 * 0000000140185E3E: movzx   ecx, byte ptr [rbp+0E0h]
 * 0000000140185E45: call    PerfInfoLogUnexpectedInterrupt
 * 0000000140185E4A: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 0000000140185E51: jz      short loc_140185E72
 * 0000000140185E53: and     [rbp+0D8h+var_138], 0
 * 0000000140185E58: xor     r9, r9
 * 0000000140185E5B: movzx   r8d, byte ptr [rbp+0E0h]
 * 0000000140185E63: mov     edx, 1
 * 0000000140185E68: mov     ecx, 12h
 * 0000000140185E6D: call    KiBugCheckDispatch
 * 0000000140185E72: cli
 * 0000000140185E73: mov     rcx, rsi
 * 0000000140185E76: call    HalPerformEndOfInterrupt_0
 * 0000000140185E7B: mov     rcx, gs:20h
 * 0000000140185E84: cmp     byte ptr [rcx+20h], 1
 * 0000000140185E88: ja      short loc_140185EFE
 * 0000000140185E8A: rdtsc
 * 0000000140185E8C: shl     rdx, 20h
 * 0000000140185E90: or      rax, rdx
 * 0000000140185E93: sub     rax, [rcx+5B38h]
 * 0000000140185E9A: add     [rcx+5BF8h], rax
 * 0000000140185EA1: add     [rcx+5B38h], rax
 * 0000000140185EA8: mov     r8, rax
 * 0000000140185EAB: mov     rax, [rcx+8]
 * 0000000140185EAF: test    byte ptr [rax+2], 32h
 * 0000000140185EB3: jz      short loc_140185EC8
 * 0000000140185EB5: xor     edx, edx
 * 0000000140185EB7: call    KiBeginThreadAccountingPeriod
 * 0000000140185EBC: mov     rcx, gs:20h
 * 0000000140185EC5: inc     byte ptr [rcx+20h]
 * 0000000140185EC8: mov     dl, [rcx+6]
 * 0000000140185ECB: and     byte ptr [rcx+6], 0
 * 0000000140185ECF: cmp     byte ptr [rcx+7], 0
 * 0000000140185ED3: jnz     short loc_140185EFE
 * 0000000140185ED5: test    dl, dl
 * 0000000140185ED7: jz      short loc_140185EFE
 * 0000000140185ED9: cmp     [rbp+0D8h+var_12F], 2
 * 0000000140185EDD: jnb     short loc_140185EEA
 * 0000000140185EDF: and     byte ptr [rcx+20h], 0
 * 0000000140185EE3: call    KiDpcInterruptBypass
 * 0000000140185EE8: jmp     short loc_140185F01
 * 0000000140185EEA: mov     ecx, 2
 * 0000000140185EEF: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140185EF5: mov     rcx, gs:20h
 * 0000000140185EFE: dec     byte ptr [rcx+20h]
 * 0000000140185F01: movzx   ecx, [rbp+0D8h+var_12F]
 * 0000000140185F05: mov     cr8, rcx
 * 0000000140185F09: mov     rsi, [rbp+0D8h+var_8]
 * 0000000140185F10: cli
 * 0000000140185F11: test    [rbp+0D8h+arg_8], 1
 * 0000000140185F18: jz      loc_14018617B
 * 0000000140185F1E: mov     rcx, gs:188h
 * 0000000140185F27: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140185F2E: jz      short loc_140185F49
 * 0000000140185F30: mov     ecx, 1
 * 0000000140185F35: mov     cr8, rcx
 * 0000000140185F39: sti
 * 0000000140185F3A: call    KiInitiateUserApc
 * 0000000140185F3F: cli
 * 0000000140185F40: mov     ecx, 0
 * 0000000140185F45: mov     cr8, rcx
 * 0000000140185F49: mov     rcx, gs:188h
 * 0000000140185F52: test    dword ptr [rcx], 40010000h
 * 0000000140185F58: jz      short loc_140185F6E
 * 0000000140185F5A: test    byte ptr [rcx+2], 1
 * 0000000140185F5E: jz      short loc_140185F6E
 * 0000000140185F60: call    KiCopyCounters
 * 0000000140185F65: mov     rcx, gs:188h
 * 0000000140185F6E: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140185F72: cmp     [rbp+0D8h+var_58], 0
 * 0000000140185F7A: jz      short loc_140185F81
 * 0000000140185F7C: call    KiRestoreDebugRegisterState
 * 0000000140185F81: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140185F85: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140185F89: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140185F8D: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140185F91: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140185F95: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140185F99: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140185F9D: mov     r10, [rbp+0D8h+var_100]
 * 0000000140185FA1: mov     r9, [rbp+0D8h+var_108]
 * 0000000140185FA5: mov     r8, [rbp+0D8h+var_110]
 * 0000000140185FA9: movzx   eax, word ptr gs:2EBAh
 * 0000000140185FB2: cmp     gs:2EB4h, ax
 * 0000000140185FBB: jz      short loc_140185FCF
 * 0000000140185FBD: mov     gs:2EB4h, ax
 * 0000000140185FC6: mov     ecx, 48h ; 'H'
 * 0000000140185FCB: xor     edx, edx
 * 0000000140185FCD: wrmsr
 * 0000000140185FCF: btr     word ptr gs:2EB0h, 2
 * 0000000140185FDA: jnb     short loc_140185FEA
 * 0000000140185FDC: mov     eax, 1
 * 0000000140185FE1: xor     edx, edx
 * 0000000140185FE3: mov     ecx, 49h ; 'I'
 * 0000000140185FE8: wrmsr
 * 0000000140185FEA: btr     word ptr gs:2EB0h, 5
 * 0000000140185FF5: jnb     loc_140186120
 * 0000000140185FFB: call    loc_14018610E
 * 0000000140186000: add     rsp, 8
 * 0000000140186004: call    loc_140186117
 * 0000000140186009: add     rsp, 8
 * 000000014018600D: call    loc_140186000
 * 0000000140186012: add     rsp, 8
 * 0000000140186016: call    loc_140186009
 * 000000014018601B: add     rsp, 8
 * 000000014018601F: call    loc_140186012
 * 0000000140186024: add     rsp, 8
 * 0000000140186028: call    loc_14018601B
 * 000000014018602D: add     rsp, 8
 * 0000000140186031: call    loc_140186024
 * 0000000140186036: add     rsp, 8
 * 000000014018603A: call    loc_14018602D
 * 000000014018603F: add     rsp, 8
 * 0000000140186043: call    loc_140186036
 * 0000000140186048: add     rsp, 8
 * 000000014018604C: call    loc_14018603F
 * 0000000140186051: add     rsp, 8
 * 0000000140186055: call    loc_140186048
 * 000000014018605A: add     rsp, 8
 * 000000014018605E: call    loc_140186051
 * 0000000140186063: add     rsp, 8
 * 0000000140186067: call    loc_14018605A
 * 000000014018606C: add     rsp, 8
 * 0000000140186070: call    loc_140186063
 * 0000000140186075: add     rsp, 8
 * 0000000140186079: call    loc_14018606C
 * 000000014018607E: add     rsp, 8
 * 0000000140186082: call    loc_140186075
 * 0000000140186087: add     rsp, 8
 * 000000014018608B: call    loc_14018607E
 * 0000000140186090: add     rsp, 8
 * 0000000140186094: call    loc_140186087
 * 0000000140186099: add     rsp, 8
 * 000000014018609D: call    loc_140186090
 * 00000001401860A2: add     rsp, 8
 * 00000001401860A6: call    loc_140186099
 * 00000001401860AB: add     rsp, 8
 * 00000001401860AF: call    loc_1401860A2
 * 00000001401860B4: add     rsp, 8
 * 00000001401860B8: call    loc_1401860AB
 * 00000001401860BD: add     rsp, 8
 * 00000001401860C1: call    loc_1401860B4
 * 00000001401860C6: add     rsp, 8
 * 00000001401860CA: call    loc_1401860BD
 * 00000001401860CF: add     rsp, 8
 * 00000001401860D3: call    loc_1401860C6
 * 00000001401860D8: add     rsp, 8
 * 00000001401860DC: call    loc_1401860CF
 * 00000001401860E1: add     rsp, 8
 * 00000001401860E5: call    loc_1401860D8
 * 00000001401860EA: add     rsp, 8
 * 00000001401860EE: call    loc_1401860E1
 * 00000001401860F3: add     rsp, 8
 * 00000001401860F7: call    loc_1401860EA
 * 00000001401860FC: add     rsp, 8
 * 0000000140186100: call    loc_1401860F3
 * 0000000140186105: add     rsp, 8
 * 0000000140186109: call    loc_1401860FC
 * 000000014018610E: add     rsp, 8
 * 0000000140186112: call    loc_140186105
 * 0000000140186117: add     rsp, 8
 * 000000014018611B: mov     eax, 0DADAh
 * 0000000140186120: test    word ptr gs:2EB0h, 40h
 * 000000014018612B: jz      short loc_140186139
 * 000000014018612D: xor     eax, eax
 * 000000014018612F: xor     edx, edx
 * 0000000140186131: mov     ecx, 1
 * 0000000140186136: div     rcx
 * 0000000140186139: mov     rdx, [rbp+0D8h+var_118]
 * 000000014018613D: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140186141: mov     rax, [rbp+0D8h+var_128]
 * 0000000140186145: mov     rsp, rbp
 * 0000000140186148: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014018614F: add     rsp, 0E8h
 * 0000000140186156: test    cs:KiKvaShadow, 1
 * 000000014018615D: jz      short loc_140186164
 * 000000014018615F: jmp     KiKernelExit
 * 0000000140186164: test    word ptr gs:2EB0h, 80h
 * 000000014018616F: jz      short loc_140186176
 * 0000000140186171: verw    [rsp-10h+arg_20]
 * 0000000140186176: swapgs
 * 0000000140186179: iretq
 * 000000014018617B: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014018617F: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140186183: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140186187: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014018618B: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014018618F: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140186193: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140186197: mov     r11, [rbp+0D8h+var_F8]
 * 000000014018619B: mov     r10, [rbp+0D8h+var_100]
 * 000000014018619F: mov     r9, [rbp+0D8h+var_108]
 * 00000001401861A3: mov     r8, [rbp+0D8h+var_110]
 * 00000001401861A7: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401861AB: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401861AF: mov     rax, [rbp+0D8h+var_128]
 * 00000001401861B3: mov     rsp, rbp
 * 00000001401861B6: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401861BD: add     rsp, 0E8h
 * 00000001401861C4: iretq
 */
