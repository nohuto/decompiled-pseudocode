/*
 * XREFs of KiBoundFault @ 0x14018EDC0
 * Callers:
 *     KiBoundFaultShadow @ 0x140274280 (KiBoundFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x14018EDC0 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x140194100 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140194580 (KiFastFailDispatch.c)
 *     KiUmsTrapEntry @ 0x140194D80 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140195200 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiHandleBound @ 0x14020024C (KiHandleBound.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x14018EDC0
 * Reason: Hex-Rays returned no pseudocode for 0x14018EDC0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014018EDC0: sub     rsp, 8
 * 000000014018EDC4: push    rbp
 * 000000014018EDC5: sub     rsp, 158h
 * 000000014018EDCC: lea     rbp, [rsp+80h]
 * 000000014018EDD4: mov     [rbp+0E8h+var_13D], 1
 * 000000014018EDD8: mov     [rbp+0E8h+var_138], rax
 * 000000014018EDDC: mov     [rbp+0E8h+var_130], rcx
 * 000000014018EDE0: mov     [rbp+0E8h+var_128], rdx
 * 000000014018EDE4: mov     [rbp+0E8h+var_120], r8
 * 000000014018EDE8: mov     [rbp+0E8h+var_118], r9
 * 000000014018EDEC: mov     [rbp+0E8h+var_110], r10
 * 000000014018EDF0: mov     [rbp+0E8h+var_108], r11
 * 000000014018EDF4: test    [rbp+0E8h+arg_0], 1
 * 000000014018EDFB: jnz     short loc_14018EE2C
 * 000000014018EDFD: lfence
 * 000000014018EE00: test    word ptr gs:2EB0h, 1
 * 000000014018EE0B: jnz     short loc_14018EE15
 * 000000014018EE0D: lfence
 * 000000014018EE10: jmp     loc_14018F051
 * 000000014018EE15: movzx   eax, word ptr gs:2EB4h
 * 000000014018EE1E: mov     ecx, 48h ; 'H'
 * 000000014018EE23: xor     edx, edx
 * 000000014018EE25: wrmsr
 * 000000014018EE27: jmp     loc_14018F051
 * 000000014018EE2C: test    cs:KiKvaShadow, 1
 * 000000014018EE33: jnz     short loc_14018EE38
 * 000000014018EE35: swapgs
 * 000000014018EE38: lfence
 * 000000014018EE3B: mov     r10, gs:188h
 * 000000014018EE44: mov     rcx, gs:188h
 * 000000014018EE4D: mov     rcx, [rcx+220h]
 * 000000014018EE54: mov     rcx, [rcx+7A0h]
 * 000000014018EE5B: mov     gs:2EA8h, rcx
 * 000000014018EE64: movzx   eax, word ptr gs:2EB6h
 * 000000014018EE6D: cmp     gs:2EB4h, ax
 * 000000014018EE76: jz      short loc_14018EE8A
 * 000000014018EE78: mov     gs:2EB4h, ax
 * 000000014018EE81: mov     ecx, 48h ; 'H'
 * 000000014018EE86: xor     edx, edx
 * 000000014018EE88: wrmsr
 * 000000014018EE8A: movzx   edx, word ptr gs:2EB0h
 * 000000014018EE93: test    edx, 8
 * 000000014018EE99: jz      short loc_14018EEB2
 * 000000014018EE9B: mov     eax, 1
 * 000000014018EEA0: xor     edx, edx
 * 000000014018EEA2: mov     ecx, 49h ; 'I'
 * 000000014018EEA7: wrmsr
 * 000000014018EEA9: movzx   edx, word ptr gs:2EB0h
 * 000000014018EEB2: test    edx, 2
 * 000000014018EEB8: jz      loc_14018EFE3
 * 000000014018EEBE: call    loc_14018EFD1
 * 000000014018EEC3: add     rsp, 8
 * 000000014018EEC7: call    loc_14018EFDA
 * 000000014018EECC: add     rsp, 8
 * 000000014018EED0: call    loc_14018EEC3
 * 000000014018EED5: add     rsp, 8
 * 000000014018EED9: call    loc_14018EECC
 * 000000014018EEDE: add     rsp, 8
 * 000000014018EEE2: call    loc_14018EED5
 * 000000014018EEE7: add     rsp, 8
 * 000000014018EEEB: call    loc_14018EEDE
 * 000000014018EEF0: add     rsp, 8
 * 000000014018EEF4: call    loc_14018EEE7
 * 000000014018EEF9: add     rsp, 8
 * 000000014018EEFD: call    loc_14018EEF0
 * 000000014018EF02: add     rsp, 8
 * 000000014018EF06: call    loc_14018EEF9
 * 000000014018EF0B: add     rsp, 8
 * 000000014018EF0F: call    loc_14018EF02
 * 000000014018EF14: add     rsp, 8
 * 000000014018EF18: call    loc_14018EF0B
 * 000000014018EF1D: add     rsp, 8
 * 000000014018EF21: call    loc_14018EF14
 * 000000014018EF26: add     rsp, 8
 * 000000014018EF2A: call    loc_14018EF1D
 * 000000014018EF2F: add     rsp, 8
 * 000000014018EF33: call    loc_14018EF26
 * 000000014018EF38: add     rsp, 8
 * 000000014018EF3C: call    loc_14018EF2F
 * 000000014018EF41: add     rsp, 8
 * 000000014018EF45: call    loc_14018EF38
 * 000000014018EF4A: add     rsp, 8
 * 000000014018EF4E: call    loc_14018EF41
 * 000000014018EF53: add     rsp, 8
 * 000000014018EF57: call    loc_14018EF4A
 * 000000014018EF5C: add     rsp, 8
 * 000000014018EF60: call    loc_14018EF53
 * 000000014018EF65: add     rsp, 8
 * 000000014018EF69: call    loc_14018EF5C
 * 000000014018EF6E: add     rsp, 8
 * 000000014018EF72: call    loc_14018EF65
 * 000000014018EF77: add     rsp, 8
 * 000000014018EF7B: call    loc_14018EF6E
 * 000000014018EF80: add     rsp, 8
 * 000000014018EF84: call    loc_14018EF77
 * 000000014018EF89: add     rsp, 8
 * 000000014018EF8D: call    loc_14018EF80
 * 000000014018EF92: add     rsp, 8
 * 000000014018EF96: call    loc_14018EF89
 * 000000014018EF9B: add     rsp, 8
 * 000000014018EF9F: call    loc_14018EF92
 * 000000014018EFA4: add     rsp, 8
 * 000000014018EFA8: call    loc_14018EF9B
 * 000000014018EFAD: add     rsp, 8
 * 000000014018EFB1: call    loc_14018EFA4
 * 000000014018EFB6: add     rsp, 8
 * 000000014018EFBA: call    loc_14018EFAD
 * 000000014018EFBF: add     rsp, 8
 * 000000014018EFC3: call    loc_14018EFB6
 * 000000014018EFC8: add     rsp, 8
 * 000000014018EFCC: call    loc_14018EFBF
 * 000000014018EFD1: add     rsp, 8
 * 000000014018EFD5: call    loc_14018EFC8
 * 000000014018EFDA: add     rsp, 8
 * 000000014018EFDE: mov     eax, 0DADAh
 * 000000014018EFE3: test    edx, 100h
 * 000000014018EFE9: jz      short loc_14018EFF0
 * 000000014018EFEB: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014018EFF0: lfence
 * 000000014018EFF3: test    byte ptr [r10+3], 80h
 * 000000014018EFF8: jz      short loc_14018F03C
 * 000000014018EFFA: mov     ecx, 0C0000102h
 * 000000014018EFFF: rdmsr
 * 000000014018F001: shl     rdx, 20h
 * 000000014018F005: or      rax, rdx
 * 000000014018F008: cmp     rax, cs:MmUserProbeAddress
 * 000000014018F00F: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014018F017: cmp     [r10+0F0h], rax
 * 000000014018F01E: jz      short loc_14018F03C
 * 000000014018F020: mov     rdx, [r10+1F0h]
 * 000000014018F027: bts     dword ptr [r10+74h], 8
 * 000000014018F02D: dec     word ptr [r10+1E6h]
 * 000000014018F035: mov     [rdx+80h], rax
 * 000000014018F03C: test    byte ptr [r10+3], 3
 * 000000014018F041: mov     [rbp+0E8h+var_68], 0
 * 000000014018F04A: jz      short loc_14018F051
 * 000000014018F04C: call    KiSaveDebugRegisterState
 * 000000014018F051: cld
 * 000000014018F052: stmxcsr [rbp+0E8h+var_13C]
 * 000000014018F056: ldmxcsr dword ptr gs:180h
 * 000000014018F05F: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014018F063: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014018F067: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014018F06B: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014018F06F: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014018F073: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014018F077: test    [rbp+0E8h+arg_8], 200h
 * 000000014018F082: jz      short loc_14018F085
 * 000000014018F084: sti
 * 000000014018F085: test    [rbp+0E8h+arg_0], 1
 * 000000014018F08C: jz      short loc_14018F0E5
 * 000000014018F08E: mov     r9, gs:188h
 * 000000014018F097: bt      dword ptr [r9+74h], 8
 * 000000014018F09D: jnb     short loc_14018F0A4
 * 000000014018F09F: call    KiUmsTrapEntry
 * 000000014018F0A4: call    KiHandleBound
 * 000000014018F0A9: cmp     eax, 0
 * 000000014018F0AC: jz      short loc_14018F0E5
 * 000000014018F0AE: cmp     eax, 1
 * 000000014018F0B1: jz      short loc_14018F0F9
 * 000000014018F0B3: cmp     eax, 2
 * 000000014018F0B6: jz      short loc_14018F0C7
 * 000000014018F0B8: mov     edx, 5
 * 000000014018F0BD: mov     ecx, 7Fh
 * 000000014018F0C2: call    KiBugCheckDispatch
 * 000000014018F0C7: mov     r9, 1Ch
 * 000000014018F0CE: mov     ecx, 0C0000409h
 * 000000014018F0D3: mov     edx, 1
 * 000000014018F0D8: mov     r8, [rbp+0E8h]
 * 000000014018F0DF: call    KiFastFailDispatch
 * 000000014018F0E4: nop
 * 000000014018F0E5: mov     ecx, 0C000008Ch
 * 000000014018F0EA: xor     edx, edx
 * 000000014018F0EC: mov     r8, [rbp+0E8h]
 * 000000014018F0F3: call    KiExceptionDispatch
 * 000000014018F0F8: nop
 * 000000014018F0F9: cli
 * 000000014018F0FA: test    [rbp+0E8h+arg_0], 1
 * 000000014018F101: jz      loc_14018F375
 * 000000014018F107: mov     rcx, gs:188h
 * 000000014018F110: cmp     byte ptr [rcx+0C2h], 0
 * 000000014018F117: jz      short loc_14018F132
 * 000000014018F119: mov     ecx, 1
 * 000000014018F11E: mov     cr8, rcx
 * 000000014018F122: sti
 * 000000014018F123: call    KiInitiateUserApc
 * 000000014018F128: cli
 * 000000014018F129: mov     ecx, 0
 * 000000014018F12E: mov     cr8, rcx
 * 000000014018F132: mov     rcx, gs:188h
 * 000000014018F13B: test    dword ptr [rcx], 40010000h
 * 000000014018F141: jz      short loc_14018F168
 * 000000014018F143: test    byte ptr [rcx+2], 1
 * 000000014018F147: jz      short loc_14018F157
 * 000000014018F149: call    KiCopyCounters
 * 000000014018F14E: mov     rcx, gs:188h
 * 000000014018F157: test    byte ptr [rcx+3], 40h
 * 000000014018F15B: jz      short loc_14018F168
 * 000000014018F15D: lea     rsp, [rbp-80h]
 * 000000014018F161: mov     cl, 1
 * 000000014018F163: call    KiUmsExit
 * 000000014018F168: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014018F16C: cmp     [rbp+0E8h+var_68], 0
 * 000000014018F174: jz      short loc_14018F17B
 * 000000014018F176: call    KiRestoreDebugRegisterState
 * 000000014018F17B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018F17F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014018F183: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018F187: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014018F18B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018F18F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014018F193: mov     r11, [rbp+0E8h+var_108]
 * 000000014018F197: mov     r10, [rbp+0E8h+var_110]
 * 000000014018F19B: mov     r9, [rbp+0E8h+var_118]
 * 000000014018F19F: mov     r8, [rbp+0E8h+var_120]
 * 000000014018F1A3: movzx   eax, word ptr gs:2EBAh
 * 000000014018F1AC: cmp     gs:2EB4h, ax
 * 000000014018F1B5: jz      short loc_14018F1C9
 * 000000014018F1B7: mov     gs:2EB4h, ax
 * 000000014018F1C0: mov     ecx, 48h ; 'H'
 * 000000014018F1C5: xor     edx, edx
 * 000000014018F1C7: wrmsr
 * 000000014018F1C9: btr     word ptr gs:2EB0h, 2
 * 000000014018F1D4: jnb     short loc_14018F1E4
 * 000000014018F1D6: mov     eax, 1
 * 000000014018F1DB: xor     edx, edx
 * 000000014018F1DD: mov     ecx, 49h ; 'I'
 * 000000014018F1E2: wrmsr
 * 000000014018F1E4: btr     word ptr gs:2EB0h, 5
 * 000000014018F1EF: jnb     loc_14018F31A
 * 000000014018F1F5: call    loc_14018F308
 * 000000014018F1FA: add     rsp, 8
 * 000000014018F1FE: call    loc_14018F311
 * 000000014018F203: add     rsp, 8
 * 000000014018F207: call    loc_14018F1FA
 * 000000014018F20C: add     rsp, 8
 * 000000014018F210: call    loc_14018F203
 * 000000014018F215: add     rsp, 8
 * 000000014018F219: call    loc_14018F20C
 * 000000014018F21E: add     rsp, 8
 * 000000014018F222: call    loc_14018F215
 * 000000014018F227: add     rsp, 8
 * 000000014018F22B: call    loc_14018F21E
 * 000000014018F230: add     rsp, 8
 * 000000014018F234: call    loc_14018F227
 * 000000014018F239: add     rsp, 8
 * 000000014018F23D: call    loc_14018F230
 * 000000014018F242: add     rsp, 8
 * 000000014018F246: call    loc_14018F239
 * 000000014018F24B: add     rsp, 8
 * 000000014018F24F: call    loc_14018F242
 * 000000014018F254: add     rsp, 8
 * 000000014018F258: call    loc_14018F24B
 * 000000014018F25D: add     rsp, 8
 * 000000014018F261: call    loc_14018F254
 * 000000014018F266: add     rsp, 8
 * 000000014018F26A: call    loc_14018F25D
 * 000000014018F26F: add     rsp, 8
 * 000000014018F273: call    loc_14018F266
 * 000000014018F278: add     rsp, 8
 * 000000014018F27C: call    loc_14018F26F
 * 000000014018F281: add     rsp, 8
 * 000000014018F285: call    loc_14018F278
 * 000000014018F28A: add     rsp, 8
 * 000000014018F28E: call    loc_14018F281
 * 000000014018F293: add     rsp, 8
 * 000000014018F297: call    loc_14018F28A
 * 000000014018F29C: add     rsp, 8
 * 000000014018F2A0: call    loc_14018F293
 * 000000014018F2A5: add     rsp, 8
 * 000000014018F2A9: call    loc_14018F29C
 * 000000014018F2AE: add     rsp, 8
 * 000000014018F2B2: call    loc_14018F2A5
 * 000000014018F2B7: add     rsp, 8
 * 000000014018F2BB: call    loc_14018F2AE
 * 000000014018F2C0: add     rsp, 8
 * 000000014018F2C4: call    loc_14018F2B7
 * 000000014018F2C9: add     rsp, 8
 * 000000014018F2CD: call    loc_14018F2C0
 * 000000014018F2D2: add     rsp, 8
 * 000000014018F2D6: call    loc_14018F2C9
 * 000000014018F2DB: add     rsp, 8
 * 000000014018F2DF: call    loc_14018F2D2
 * 000000014018F2E4: add     rsp, 8
 * 000000014018F2E8: call    loc_14018F2DB
 * 000000014018F2ED: add     rsp, 8
 * 000000014018F2F1: call    loc_14018F2E4
 * 000000014018F2F6: add     rsp, 8
 * 000000014018F2FA: call    loc_14018F2ED
 * 000000014018F2FF: add     rsp, 8
 * 000000014018F303: call    loc_14018F2F6
 * 000000014018F308: add     rsp, 8
 * 000000014018F30C: call    loc_14018F2FF
 * 000000014018F311: add     rsp, 8
 * 000000014018F315: mov     eax, 0DADAh
 * 000000014018F31A: test    word ptr gs:2EB0h, 40h
 * 000000014018F325: jz      short loc_14018F333
 * 000000014018F327: xor     eax, eax
 * 000000014018F329: xor     edx, edx
 * 000000014018F32B: mov     ecx, 1
 * 000000014018F330: div     rcx
 * 000000014018F333: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018F337: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018F33B: mov     rax, [rbp+0E8h+var_138]
 * 000000014018F33F: mov     rsp, rbp
 * 000000014018F342: mov     rbp, [rbp+0E8h+var_10]
 * 000000014018F349: add     rsp, 0E8h
 * 000000014018F350: test    cs:KiKvaShadow, 1
 * 000000014018F357: jz      short loc_14018F35E
 * 000000014018F359: jmp     KiKernelExit
 * 000000014018F35E: test    word ptr gs:2EB0h, 80h
 * 000000014018F369: jz      short loc_14018F370
 * 000000014018F36B: verw    [rsp+arg_18]
 * 000000014018F370: swapgs
 * 000000014018F373: iretq
 * 000000014018F375: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014018F379: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014018F37D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014018F381: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014018F385: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014018F389: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014018F38D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014018F391: mov     r11, [rbp+0E8h+var_108]
 * 000000014018F395: mov     r10, [rbp+0E8h+var_110]
 * 000000014018F399: mov     r9, [rbp+0E8h+var_118]
 * 000000014018F39D: mov     r8, [rbp+0E8h+var_120]
 * 000000014018F3A1: mov     rdx, [rbp+0E8h+var_128]
 * 000000014018F3A5: mov     rcx, [rbp+0E8h+var_130]
 * 000000014018F3A9: mov     rax, [rbp+0E8h+var_138]
 * 000000014018F3AD: mov     rsp, rbp
 * 000000014018F3B0: mov     rbp, [rbp+0E8h+var_10]
 * 000000014018F3B7: add     rsp, 0E8h
 * 000000014018F3BE: iretq
 */
