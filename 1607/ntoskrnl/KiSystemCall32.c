/*
 * XREFs of KiSystemCall32 @ 0x14016EB40
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x14016EB40 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x14016EB40
 * Reason: Hex-Rays returned no pseudocode for 0x14016EB40
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016EB40: swapgs
 * 000000014016EB43: mov     gs:10h, rsp
 * 000000014016EB4C: mov     rsp, gs:1A8h
 * 000000014016EB55: push    2Bh ; '+'
 * 000000014016EB57: push    qword ptr gs:10h
 * 000000014016EB5F: push    r11
 * 000000014016EB61: push    23h ; '#'
 * 000000014016EB63: push    rcx
 * 000000014016EB64: swapgs
 * 000000014016EB67: lfence
 * 000000014016EB6A: sub     rsp, 8
 * 000000014016EB6E: push    rbp
 * 000000014016EB6F: sub     rsp, 158h
 * 000000014016EB76: lea     rbp, [rsp+190h+var_110]
 * 000000014016EB7E: mov     byte ptr [rbp-55h], 1
 * 000000014016EB82: mov     [rbp-50h], rax
 * 000000014016EB86: mov     [rbp-48h], rcx
 * 000000014016EB8A: mov     [rbp-40h], rdx
 * 000000014016EB8E: mov     [rbp-38h], r8
 * 000000014016EB92: mov     [rbp-30h], r9
 * 000000014016EB96: mov     [rbp-28h], r10
 * 000000014016EB9A: mov     [rbp-20h], r11
 * 000000014016EB9E: test    byte ptr [rbp+0F0h], 1
 * 000000014016EBA5: jnz     short loc_14016EBD6
 * 000000014016EBA7: lfence
 * 000000014016EBAA: test    word ptr gs:2EB8h, 1
 * 000000014016EBB5: jnz     short loc_14016EBBF
 * 000000014016EBB7: lfence
 * 000000014016EBBA: jmp     loc_14016EDFB
 * 000000014016EBBF: movzx   eax, word ptr gs:2EBCh
 * 000000014016EBC8: mov     ecx, 48h ; 'H'
 * 000000014016EBCD: xor     edx, edx
 * 000000014016EBCF: wrmsr
 * 000000014016EBD1: jmp     loc_14016EDFB
 * 000000014016EBD6: test    cs:KiKvaShadow, 1
 * 000000014016EBDD: jnz     short loc_14016EBE2
 * 000000014016EBDF: swapgs
 * 000000014016EBE2: lfence
 * 000000014016EBE5: mov     r10, gs:188h
 * 000000014016EBEE: mov     rcx, gs:188h
 * 000000014016EBF7: mov     rcx, [rcx+220h]
 * 000000014016EBFE: mov     rcx, [rcx+7B8h]
 * 000000014016EC05: mov     gs:2EB0h, rcx
 * 000000014016EC0E: movzx   eax, word ptr gs:2EBEh
 * 000000014016EC17: cmp     gs:2EBCh, ax
 * 000000014016EC20: jz      short loc_14016EC34
 * 000000014016EC22: mov     gs:2EBCh, ax
 * 000000014016EC2B: mov     ecx, 48h ; 'H'
 * 000000014016EC30: xor     edx, edx
 * 000000014016EC32: wrmsr
 * 000000014016EC34: movzx   edx, word ptr gs:2EB8h
 * 000000014016EC3D: test    edx, 8
 * 000000014016EC43: jz      short loc_14016EC5C
 * 000000014016EC45: mov     eax, 1
 * 000000014016EC4A: xor     edx, edx
 * 000000014016EC4C: mov     ecx, 49h ; 'I'
 * 000000014016EC51: wrmsr
 * 000000014016EC53: movzx   edx, word ptr gs:2EB8h
 * 000000014016EC5C: test    edx, 2
 * 000000014016EC62: jz      loc_14016ED8D
 * 000000014016EC68: call    loc_14016ED7B
 * 000000014016EC6D: add     rsp, 8
 * 000000014016EC71: call    loc_14016ED84
 * 000000014016EC76: add     rsp, 8
 * 000000014016EC7A: call    loc_14016EC6D
 * 000000014016EC7F: add     rsp, 8
 * 000000014016EC83: call    loc_14016EC76
 * 000000014016EC88: add     rsp, 8
 * 000000014016EC8C: call    loc_14016EC7F
 * 000000014016EC91: add     rsp, 8
 * 000000014016EC95: call    loc_14016EC88
 * 000000014016EC9A: add     rsp, 8
 * 000000014016EC9E: call    loc_14016EC91
 * 000000014016ECA3: add     rsp, 8
 * 000000014016ECA7: call    loc_14016EC9A
 * 000000014016ECAC: add     rsp, 8
 * 000000014016ECB0: call    loc_14016ECA3
 * 000000014016ECB5: add     rsp, 8
 * 000000014016ECB9: call    loc_14016ECAC
 * 000000014016ECBE: add     rsp, 8
 * 000000014016ECC2: call    loc_14016ECB5
 * 000000014016ECC7: add     rsp, 8
 * 000000014016ECCB: call    loc_14016ECBE
 * 000000014016ECD0: add     rsp, 8
 * 000000014016ECD4: call    loc_14016ECC7
 * 000000014016ECD9: add     rsp, 8
 * 000000014016ECDD: call    loc_14016ECD0
 * 000000014016ECE2: add     rsp, 8
 * 000000014016ECE6: call    loc_14016ECD9
 * 000000014016ECEB: add     rsp, 8
 * 000000014016ECEF: call    loc_14016ECE2
 * 000000014016ECF4: add     rsp, 8
 * 000000014016ECF8: call    loc_14016ECEB
 * 000000014016ECFD: add     rsp, 8
 * 000000014016ED01: call    loc_14016ECF4
 * 000000014016ED06: add     rsp, 8
 * 000000014016ED0A: call    loc_14016ECFD
 * 000000014016ED0F: add     rsp, 8
 * 000000014016ED13: call    loc_14016ED06
 * 000000014016ED18: add     rsp, 8
 * 000000014016ED1C: call    loc_14016ED0F
 * 000000014016ED21: add     rsp, 8
 * 000000014016ED25: call    loc_14016ED18
 * 000000014016ED2A: add     rsp, 8
 * 000000014016ED2E: call    loc_14016ED21
 * 000000014016ED33: add     rsp, 8
 * 000000014016ED37: call    loc_14016ED2A
 * 000000014016ED3C: add     rsp, 8
 * 000000014016ED40: call    loc_14016ED33
 * 000000014016ED45: add     rsp, 8
 * 000000014016ED49: call    loc_14016ED3C
 * 000000014016ED4E: add     rsp, 8
 * 000000014016ED52: call    loc_14016ED45
 * 000000014016ED57: add     rsp, 8
 * 000000014016ED5B: call    loc_14016ED4E
 * 000000014016ED60: add     rsp, 8
 * 000000014016ED64: call    loc_14016ED57
 * 000000014016ED69: add     rsp, 8
 * 000000014016ED6D: call    loc_14016ED60
 * 000000014016ED72: add     rsp, 8
 * 000000014016ED76: call    loc_14016ED69
 * 000000014016ED7B: add     rsp, 8
 * 000000014016ED7F: call    loc_14016ED72
 * 000000014016ED84: add     rsp, 8
 * 000000014016ED88: mov     eax, 0DADAh
 * 000000014016ED8D: test    edx, 100h
 * 000000014016ED93: jz      short loc_14016ED9A
 * 000000014016ED95: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016ED9A: lfence
 * 000000014016ED9D: test    byte ptr [r10+3], 80h
 * 000000014016EDA2: jz      short loc_14016EDE6
 * 000000014016EDA4: mov     ecx, 0C0000102h
 * 000000014016EDA9: rdmsr
 * 000000014016EDAB: shl     rdx, 20h
 * 000000014016EDAF: or      rax, rdx
 * 000000014016EDB2: cmp     rax, cs:MmUserProbeAddress
 * 000000014016EDB9: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016EDC1: cmp     [r10+0F0h], rax
 * 000000014016EDC8: jz      short loc_14016EDE6
 * 000000014016EDCA: mov     rdx, [r10+1F0h]
 * 000000014016EDD1: bts     dword ptr [r10+74h], 8
 * 000000014016EDD7: dec     word ptr [r10+1E6h]
 * 000000014016EDDF: mov     [rdx+80h], rax
 * 000000014016EDE6: test    byte ptr [r10+3], 3
 * 000000014016EDEB: mov     word ptr [rbp+80h], 0
 * 000000014016EDF4: jz      short loc_14016EDFB
 * 000000014016EDF6: call    KiSaveDebugRegisterState
 * 000000014016EDFB: cld
 * 000000014016EDFC: stmxcsr dword ptr [rbp-54h]
 * 000000014016EE00: ldmxcsr dword ptr gs:180h
 * 000000014016EE09: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014016EE0D: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014016EE11: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014016EE15: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014016EE19: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014016EE1D: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014016EE21: test    dword ptr [rbp+0F8h], 200h
 * 000000014016EE2B: jz      short loc_14016EE2E
 * 000000014016EE2D: sti
 * 000000014016EE2E: sub     qword ptr [rbp+0E8h], 2
 * 000000014016EE36: mov     ecx, 0C000001Dh
 * 000000014016EE3B: xor     edx, edx
 * 000000014016EE3D: mov     r8, [rbp+0E8h]
 * 000000014016EE44: call    KiExceptionDispatch
 * 000000014016EE49: nop
 * 000000014016EE4A: retn
 */
