/*
 * XREFs of KiSystemCall32 @ 0x140193340
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140182C30 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x140193340 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x140194180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140195380 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x140193340
 * Reason: Hex-Rays returned no pseudocode for 0x140193340
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140193340: swapgs
 * 0000000140193343: mov     gs:10h, rsp
 * 000000014019334C: mov     rsp, gs:1A8h
 * 0000000140193355: push    2Bh ; '+'
 * 0000000140193357: push    qword ptr gs:10h
 * 000000014019335F: push    r11
 * 0000000140193361: push    23h ; '#'
 * 0000000140193363: push    rcx
 * 0000000140193364: swapgs
 * 0000000140193367: sub     rsp, 8
 * 000000014019336B: push    rbp
 * 000000014019336C: sub     rsp, 158h
 * 0000000140193373: lea     rbp, [rsp+190h+var_110]
 * 000000014019337B: mov     byte ptr [rbp-55h], 1
 * 000000014019337F: mov     [rbp-50h], rax
 * 0000000140193383: mov     [rbp-48h], rcx
 * 0000000140193387: mov     [rbp-40h], rdx
 * 000000014019338B: mov     [rbp-38h], r8
 * 000000014019338F: mov     [rbp-30h], r9
 * 0000000140193393: mov     [rbp-28h], r10
 * 0000000140193397: mov     [rbp-20h], r11
 * 000000014019339B: test    byte ptr [rbp+0F0h], 1
 * 00000001401933A2: jnz     short loc_1401933D3
 * 00000001401933A4: lfence
 * 00000001401933A7: test    word ptr gs:2EB0h, 1
 * 00000001401933B2: jnz     short loc_1401933BC
 * 00000001401933B4: lfence
 * 00000001401933B7: jmp     loc_1401935F8
 * 00000001401933BC: movzx   eax, word ptr gs:2EB4h
 * 00000001401933C5: mov     ecx, 48h ; 'H'
 * 00000001401933CA: xor     edx, edx
 * 00000001401933CC: wrmsr
 * 00000001401933CE: jmp     loc_1401935F8
 * 00000001401933D3: test    cs:KiKvaShadow, 1
 * 00000001401933DA: jnz     short loc_1401933DF
 * 00000001401933DC: swapgs
 * 00000001401933DF: lfence
 * 00000001401933E2: mov     r10, gs:188h
 * 00000001401933EB: mov     rcx, gs:188h
 * 00000001401933F4: mov     rcx, [rcx+220h]
 * 00000001401933FB: mov     rcx, [rcx+7A0h]
 * 0000000140193402: mov     gs:2EA8h, rcx
 * 000000014019340B: movzx   eax, word ptr gs:2EB6h
 * 0000000140193414: cmp     gs:2EB4h, ax
 * 000000014019341D: jz      short loc_140193431
 * 000000014019341F: mov     gs:2EB4h, ax
 * 0000000140193428: mov     ecx, 48h ; 'H'
 * 000000014019342D: xor     edx, edx
 * 000000014019342F: wrmsr
 * 0000000140193431: movzx   edx, word ptr gs:2EB0h
 * 000000014019343A: test    edx, 8
 * 0000000140193440: jz      short loc_140193459
 * 0000000140193442: mov     eax, 1
 * 0000000140193447: xor     edx, edx
 * 0000000140193449: mov     ecx, 49h ; 'I'
 * 000000014019344E: wrmsr
 * 0000000140193450: movzx   edx, word ptr gs:2EB0h
 * 0000000140193459: test    edx, 2
 * 000000014019345F: jz      loc_14019358A
 * 0000000140193465: call    loc_140193578
 * 000000014019346A: add     rsp, 8
 * 000000014019346E: call    loc_140193581
 * 0000000140193473: add     rsp, 8
 * 0000000140193477: call    loc_14019346A
 * 000000014019347C: add     rsp, 8
 * 0000000140193480: call    loc_140193473
 * 0000000140193485: add     rsp, 8
 * 0000000140193489: call    loc_14019347C
 * 000000014019348E: add     rsp, 8
 * 0000000140193492: call    loc_140193485
 * 0000000140193497: add     rsp, 8
 * 000000014019349B: call    loc_14019348E
 * 00000001401934A0: add     rsp, 8
 * 00000001401934A4: call    loc_140193497
 * 00000001401934A9: add     rsp, 8
 * 00000001401934AD: call    loc_1401934A0
 * 00000001401934B2: add     rsp, 8
 * 00000001401934B6: call    loc_1401934A9
 * 00000001401934BB: add     rsp, 8
 * 00000001401934BF: call    loc_1401934B2
 * 00000001401934C4: add     rsp, 8
 * 00000001401934C8: call    loc_1401934BB
 * 00000001401934CD: add     rsp, 8
 * 00000001401934D1: call    loc_1401934C4
 * 00000001401934D6: add     rsp, 8
 * 00000001401934DA: call    loc_1401934CD
 * 00000001401934DF: add     rsp, 8
 * 00000001401934E3: call    loc_1401934D6
 * 00000001401934E8: add     rsp, 8
 * 00000001401934EC: call    loc_1401934DF
 * 00000001401934F1: add     rsp, 8
 * 00000001401934F5: call    loc_1401934E8
 * 00000001401934FA: add     rsp, 8
 * 00000001401934FE: call    loc_1401934F1
 * 0000000140193503: add     rsp, 8
 * 0000000140193507: call    loc_1401934FA
 * 000000014019350C: add     rsp, 8
 * 0000000140193510: call    loc_140193503
 * 0000000140193515: add     rsp, 8
 * 0000000140193519: call    loc_14019350C
 * 000000014019351E: add     rsp, 8
 * 0000000140193522: call    loc_140193515
 * 0000000140193527: add     rsp, 8
 * 000000014019352B: call    loc_14019351E
 * 0000000140193530: add     rsp, 8
 * 0000000140193534: call    loc_140193527
 * 0000000140193539: add     rsp, 8
 * 000000014019353D: call    loc_140193530
 * 0000000140193542: add     rsp, 8
 * 0000000140193546: call    loc_140193539
 * 000000014019354B: add     rsp, 8
 * 000000014019354F: call    loc_140193542
 * 0000000140193554: add     rsp, 8
 * 0000000140193558: call    loc_14019354B
 * 000000014019355D: add     rsp, 8
 * 0000000140193561: call    loc_140193554
 * 0000000140193566: add     rsp, 8
 * 000000014019356A: call    loc_14019355D
 * 000000014019356F: add     rsp, 8
 * 0000000140193573: call    loc_140193566
 * 0000000140193578: add     rsp, 8
 * 000000014019357C: call    loc_14019356F
 * 0000000140193581: add     rsp, 8
 * 0000000140193585: mov     eax, 0DADAh
 * 000000014019358A: test    edx, 100h
 * 0000000140193590: jz      short loc_140193597
 * 0000000140193592: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140193597: lfence
 * 000000014019359A: test    byte ptr [r10+3], 80h
 * 000000014019359F: jz      short loc_1401935E3
 * 00000001401935A1: mov     ecx, 0C0000102h
 * 00000001401935A6: rdmsr
 * 00000001401935A8: shl     rdx, 20h
 * 00000001401935AC: or      rax, rdx
 * 00000001401935AF: cmp     rax, cs:MmUserProbeAddress
 * 00000001401935B6: cmovnb  rax, cs:MmUserProbeAddress
 * 00000001401935BE: cmp     [r10+0F0h], rax
 * 00000001401935C5: jz      short loc_1401935E3
 * 00000001401935C7: mov     rdx, [r10+1F0h]
 * 00000001401935CE: bts     dword ptr [r10+74h], 8
 * 00000001401935D4: dec     word ptr [r10+1E6h]
 * 00000001401935DC: mov     [rdx+80h], rax
 * 00000001401935E3: test    byte ptr [r10+3], 3
 * 00000001401935E8: mov     word ptr [rbp+80h], 0
 * 00000001401935F1: jz      short loc_1401935F8
 * 00000001401935F3: call    KiSaveDebugRegisterState
 * 00000001401935F8: cld
 * 00000001401935F9: stmxcsr dword ptr [rbp-54h]
 * 00000001401935FD: ldmxcsr dword ptr gs:180h
 * 0000000140193606: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014019360A: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014019360E: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140193612: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140193616: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014019361A: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014019361E: test    qword ptr [rbp+0F8h], 200h
 * 0000000140193629: jz      short loc_14019362C
 * 000000014019362B: sti
 * 000000014019362C: mov     ecx, 0C000001Dh
 * 0000000140193631: xor     edx, edx
 * 0000000140193633: mov     r8, [rbp+0E8h]
 * 000000014019363A: call    KiExceptionDispatch
 * 000000014019363F: nop
 * 0000000140193640: retn
 */
