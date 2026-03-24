/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x14015FDA0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x14015F060 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x14015FDA0 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165590 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x14015FDA0
 * Reason: Hex-Rays returned no pseudocode for 0x14015FDA0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015FDA0: mov     rdx, rsp
 * 000000014015FDA3: mov     rcx, gs:6498h
 * 000000014015FDAC: lea     rax, [rcx-6000h]
 * 000000014015FDB3: cmp     rax, rsp
 * 000000014015FDB6: ja      short loc_14015FDBD
 * 000000014015FDB8: cmp     rsp, rcx
 * 000000014015FDBB: jb      short loc_14015FDC9
 * 000000014015FDBD: cmp     cs:KiBugCheckActive, 0
 * 000000014015FDC4: jnz     short loc_14015FDC9
 * 000000014015FDC6: mov     rsp, rcx
 * 000000014015FDC9: sub     rsp, 20h
 * 000000014015FDCD: mov     [rsp+20h+var_10], rdx
 * 000000014015FDD2: call    KiInterruptSubDispatchNoLock
 * 000000014015FDD7: mov     rsp, [rsp+20h+var_10]
 * 000000014015FDDC: mov     rcx, gs:20h
 * 000000014015FDE5: cmp     byte ptr [rcx+20h], 1
 * 000000014015FDE9: ja      short loc_14015FE5F
 * 000000014015FDEB: rdtsc
 * 000000014015FDED: shl     rdx, 20h
 * 000000014015FDF1: or      rax, rdx
 * 000000014015FDF4: sub     rax, [rcx+5B38h]
 * 000000014015FDFB: add     [rcx+5BF8h], rax
 * 000000014015FE02: add     [rcx+5B38h], rax
 * 000000014015FE09: mov     r8, rax
 * 000000014015FE0C: mov     rax, [rcx+8]
 * 000000014015FE10: test    byte ptr [rax+2], 32h
 * 000000014015FE14: jz      short loc_14015FE29
 * 000000014015FE16: xor     edx, edx
 * 000000014015FE18: call    KiBeginThreadAccountingPeriod
 * 000000014015FE1D: mov     rcx, gs:20h
 * 000000014015FE26: inc     byte ptr [rcx+20h]
 * 000000014015FE29: mov     dl, [rcx+6]
 * 000000014015FE2C: and     byte ptr [rcx+6], 0
 * 000000014015FE30: cmp     byte ptr [rcx+7], 0
 * 000000014015FE34: jnz     short loc_14015FE5F
 * 000000014015FE36: test    dl, dl
 * 000000014015FE38: jz      short loc_14015FE5F
 * 000000014015FE3A: cmp     byte ptr [rbp-57h], 2
 * 000000014015FE3E: jnb     short loc_14015FE4B
 * 000000014015FE40: and     byte ptr [rcx+20h], 0
 * 000000014015FE44: call    KiDpcInterruptBypass
 * 000000014015FE49: jmp     short loc_14015FE62
 * 000000014015FE4B: mov     ecx, 2
 * 000000014015FE50: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014015FE56: mov     rcx, gs:20h
 * 000000014015FE5F: dec     byte ptr [rcx+20h]
 * 000000014015FE62: movzx   ecx, byte ptr [rbp-57h]
 * 000000014015FE66: mov     cr8, rcx
 * 000000014015FE6A: mov     rsi, [rbp+0D0h]
 * 000000014015FE71: test    byte ptr [rbp+0F0h], 1
 * 000000014015FE78: jz      loc_1401600F1
 * 000000014015FE7E: mov     rcx, gs:188h
 * 000000014015FE87: cmp     byte ptr [rcx+0C2h], 0
 * 000000014015FE8E: jz      short loc_14015FEA9
 * 000000014015FE90: mov     ecx, 1
 * 000000014015FE95: mov     cr8, rcx
 * 000000014015FE99: sti
 * 000000014015FE9A: call    KiInitiateUserApc
 * 000000014015FE9F: cli
 * 000000014015FEA0: mov     ecx, 0
 * 000000014015FEA5: mov     cr8, rcx
 * 000000014015FEA9: mov     rcx, gs:188h
 * 000000014015FEB2: test    dword ptr [rcx], 8000000h
 * 000000014015FEB8: jz      short loc_14015FEBF
 * 000000014015FEBA: call    KiRestoreSetContextState
 * 000000014015FEBF: mov     rcx, gs:188h
 * 000000014015FEC8: test    dword ptr [rcx], 40010000h
 * 000000014015FECE: jz      short loc_14015FEE4
 * 000000014015FED0: test    byte ptr [rcx+2], 1
 * 000000014015FED4: jz      short loc_14015FEE4
 * 000000014015FED6: call    KiCopyCounters
 * 000000014015FEDB: mov     rcx, gs:188h
 * 000000014015FEE4: ldmxcsr dword ptr [rbp-54h]
 * 000000014015FEE8: cmp     word ptr [rbp+80h], 0
 * 000000014015FEF0: jz      short loc_14015FEF7
 * 000000014015FEF2: call    KiRestoreDebugRegisterState
 * 000000014015FEF7: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015FEFB: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015FEFF: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015FF03: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015FF07: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015FF0B: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015FF0F: mov     r11, [rbp-20h]
 * 000000014015FF13: mov     r10, [rbp-28h]
 * 000000014015FF17: mov     r9, [rbp-30h]
 * 000000014015FF1B: mov     r8, [rbp-38h]
 * 000000014015FF1F: movzx   eax, word ptr gs:2EC2h
 * 000000014015FF28: cmp     gs:2EBCh, ax
 * 000000014015FF31: jz      short loc_14015FF45
 * 000000014015FF33: mov     gs:2EBCh, ax
 * 000000014015FF3C: mov     ecx, 48h ; 'H'
 * 000000014015FF41: xor     edx, edx
 * 000000014015FF43: wrmsr
 * 000000014015FF45: btr     word ptr gs:2EB8h, 2
 * 000000014015FF50: jnb     short loc_14015FF60
 * 000000014015FF52: mov     eax, 1
 * 000000014015FF57: xor     edx, edx
 * 000000014015FF59: mov     ecx, 49h ; 'I'
 * 000000014015FF5E: wrmsr
 * 000000014015FF60: btr     word ptr gs:2EB8h, 5
 * 000000014015FF6B: jnb     loc_140160096
 * 000000014015FF71: call    loc_140160084
 * 000000014015FF76: add     rsp, 8
 * 000000014015FF7A: call    loc_14016008D
 * 000000014015FF7F: add     rsp, 8
 * 000000014015FF83: call    loc_14015FF76
 * 000000014015FF88: add     rsp, 8
 * 000000014015FF8C: call    loc_14015FF7F
 * 000000014015FF91: add     rsp, 8
 * 000000014015FF95: call    loc_14015FF88
 * 000000014015FF9A: add     rsp, 8
 * 000000014015FF9E: call    loc_14015FF91
 * 000000014015FFA3: add     rsp, 8
 * 000000014015FFA7: call    loc_14015FF9A
 * 000000014015FFAC: add     rsp, 8
 * 000000014015FFB0: call    loc_14015FFA3
 * 000000014015FFB5: add     rsp, 8
 * 000000014015FFB9: call    loc_14015FFAC
 * 000000014015FFBE: add     rsp, 8
 * 000000014015FFC2: call    loc_14015FFB5
 * 000000014015FFC7: add     rsp, 8
 * 000000014015FFCB: call    loc_14015FFBE
 * 000000014015FFD0: add     rsp, 8
 * 000000014015FFD4: call    loc_14015FFC7
 * 000000014015FFD9: add     rsp, 8
 * 000000014015FFDD: call    loc_14015FFD0
 * 000000014015FFE2: add     rsp, 8
 * 000000014015FFE6: call    loc_14015FFD9
 * 000000014015FFEB: add     rsp, 8
 * 000000014015FFEF: call    loc_14015FFE2
 * 000000014015FFF4: add     rsp, 8
 * 000000014015FFF8: call    loc_14015FFEB
 * 000000014015FFFD: add     rsp, 8
 * 0000000140160001: call    loc_14015FFF4
 * 0000000140160006: add     rsp, 8
 * 000000014016000A: call    loc_14015FFFD
 * 000000014016000F: add     rsp, 8
 * 0000000140160013: call    loc_140160006
 * 0000000140160018: add     rsp, 8
 * 000000014016001C: call    loc_14016000F
 * 0000000140160021: add     rsp, 8
 * 0000000140160025: call    loc_140160018
 * 000000014016002A: add     rsp, 8
 * 000000014016002E: call    loc_140160021
 * 0000000140160033: add     rsp, 8
 * 0000000140160037: call    loc_14016002A
 * 000000014016003C: add     rsp, 8
 * 0000000140160040: call    loc_140160033
 * 0000000140160045: add     rsp, 8
 * 0000000140160049: call    loc_14016003C
 * 000000014016004E: add     rsp, 8
 * 0000000140160052: call    loc_140160045
 * 0000000140160057: add     rsp, 8
 * 000000014016005B: call    loc_14016004E
 * 0000000140160060: add     rsp, 8
 * 0000000140160064: call    loc_140160057
 * 0000000140160069: add     rsp, 8
 * 000000014016006D: call    loc_140160060
 * 0000000140160072: add     rsp, 8
 * 0000000140160076: call    loc_140160069
 * 000000014016007B: add     rsp, 8
 * 000000014016007F: call    loc_140160072
 * 0000000140160084: add     rsp, 8
 * 0000000140160088: call    loc_14016007B
 * 000000014016008D: add     rsp, 8
 * 0000000140160091: mov     eax, 0DADAh
 * 0000000140160096: test    word ptr gs:2EB8h, 40h
 * 00000001401600A1: jz      short loc_1401600AF
 * 00000001401600A3: xor     eax, eax
 * 00000001401600A5: xor     edx, edx
 * 00000001401600A7: mov     ecx, 1
 * 00000001401600AC: div     rcx
 * 00000001401600AF: mov     rdx, [rbp-40h]
 * 00000001401600B3: mov     rcx, [rbp-48h]
 * 00000001401600B7: mov     rax, [rbp-50h]
 * 00000001401600BB: mov     rsp, rbp
 * 00000001401600BE: mov     rbp, [rbp+0D8h]
 * 00000001401600C5: add     rsp, 0E8h
 * 00000001401600CC: test    cs:KiKvaShadow, 1
 * 00000001401600D3: jz      short loc_1401600DA
 * 00000001401600D5: jmp     KiKernelExit
 * 00000001401600DA: test    word ptr gs:2EB8h, 80h
 * 00000001401600E5: jz      short loc_1401600EC
 * 00000001401600E7: verw    [rsp-1C8h+arg_1E0]
 * 00000001401600EC: swapgs
 * 00000001401600EF: iretq
 * 00000001401600F1: ldmxcsr dword ptr [rbp-54h]
 * 00000001401600F5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401600F9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401600FD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140160101: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140160105: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140160109: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014016010D: mov     r11, [rbp-20h]
 * 0000000140160111: mov     r10, [rbp-28h]
 * 0000000140160115: mov     r9, [rbp-30h]
 * 0000000140160119: mov     r8, [rbp-38h]
 * 000000014016011D: mov     rdx, [rbp-40h]
 * 0000000140160121: mov     rcx, [rbp-48h]
 * 0000000140160125: mov     rax, [rbp-50h]
 * 0000000140160129: mov     rsp, rbp
 * 000000014016012C: mov     rbp, [rbp+0D8h]
 * 0000000140160133: add     rsp, 0E8h
 * 000000014016013A: iretq
 */
