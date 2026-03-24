/*
 * XREFs of KiCallUserMode @ 0x1401861E0
 * Callers:
 *     KeUserModeCallback @ 0x140452450 (KeUserModeCallback.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x1401861E0 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x1401861E0
 * Reason: Hex-Rays returned no pseudocode for 0x1401861E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401861E0: sub     rsp, 138h
 * 00000001401861E7: lea     rax, [rsp+138h+var_38]
 * 00000001401861EF: movaps  [rsp+138h+var_108], xmm6
 * 00000001401861F4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001401861F9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001401861FF: movaps  [rsp+138h+var_D8], xmm9
 * 0000000140186205: movaps  [rsp+138h+var_C8], xmm10
 * 000000014018620B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140186210: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140186215: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014018621A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014018621F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140186224: mov     [rax-8], rbp
 * 0000000140186228: mov     rbp, rsp
 * 000000014018622B: mov     [rax], rbx
 * 000000014018622E: mov     [rax+8], rdi
 * 0000000140186232: mov     [rax+10h], rsi
 * 0000000140186236: mov     [rax+18h], r12
 * 000000014018623A: mov     [rax+20h], r13
 * 000000014018623E: mov     [rax+28h], r14
 * 0000000140186242: mov     [rax+30h], r15
 * 0000000140186246: xor     r10, r10
 * 0000000140186249: xor     r12, r12
 * 000000014018624C: xor     r13, r13
 * 000000014018624F: xor     r14, r14
 * 0000000140186252: xor     r15, r15
 * 0000000140186255: pxor    xmm6, xmm6
 * 0000000140186259: pxor    xmm7, xmm7
 * 000000014018625D: pxor    xmm8, xmm8
 * 0000000140186262: pxor    xmm9, xmm9
 * 0000000140186267: pxor    xmm10, xmm10
 * 000000014018626C: pxor    xmm11, xmm11
 * 0000000140186271: pxor    xmm12, xmm12
 * 0000000140186276: pxor    xmm13, xmm13
 * 000000014018627B: pxor    xmm14, xmm14
 * 0000000140186280: pxor    xmm15, xmm15
 * 0000000140186285: mov     [rbp+0D8h], rcx
 * 000000014018628C: mov     [rbp+0E0h], rdx
 * 0000000140186293: mov     rbx, gs:188h
 * 000000014018629C: mov     [r8+20h], rsp
 * 00000001401862A0: mov     rsi, [rbx+90h]
 * 00000001401862A7: mov     [rbp+0D0h], rsi
 * 00000001401862AE: cli
 * 00000001401862AF: mov     [rbx+28h], r8
 * 00000001401862B3: mov     [rbx+38h], r9
 * 00000001401862B7: test    cs:KiKvaShadow, 1
 * 00000001401862BE: jnz     short loc_1401862CF
 * 00000001401862C0: mov     rdi, gs:8
 * 00000001401862C9: mov     [rdi+4], r8
 * 00000001401862CD: jmp     short loc_1401862D8
 * 00000001401862CF: mov     gs:7008h, r8
 * 00000001401862D8: mov     ecx, cs:KeKernelStackSize
 * 00000001401862DE: sub     r9, rcx
 * 00000001401862E1: mov     gs:1A8h, r8
 * 00000001401862EA: mov     [rbx+30h], r9
 * 00000001401862EE: xor     edi, edi
 * 00000001401862F0: lea     rbp, [rsi+80h]
 * 00000001401862F7: cmp     byte ptr [rbx+0C2h], 0
 * 00000001401862FE: jnz     loc_140186547
 * 0000000140186304: test    dword ptr [rbx], 40010000h
 * 000000014018630A: jnz     loc_140186547
 * 0000000140186310: ldmxcsr dword ptr [rbp-54h]
 * 0000000140186314: xor     esi, esi
 * 0000000140186316: test    byte ptr [rbx+3], 3
 * 000000014018631A: jnz     loc_14018651C
 * 0000000140186320: mov     r9, cs:KeUserCallbackDispatcher
 * 0000000140186327: movzx   eax, word ptr gs:2EBAh
 * 0000000140186330: cmp     gs:2EB4h, ax
 * 0000000140186339: jz      short loc_14018634D
 * 000000014018633B: mov     gs:2EB4h, ax
 * 0000000140186344: mov     ecx, 48h ; 'H'
 * 0000000140186349: xor     edx, edx
 * 000000014018634B: wrmsr
 * 000000014018634D: btr     word ptr gs:2EB0h, 2
 * 0000000140186358: jnb     short loc_140186368
 * 000000014018635A: mov     eax, 1
 * 000000014018635F: xor     edx, edx
 * 0000000140186361: mov     ecx, 49h ; 'I'
 * 0000000140186366: wrmsr
 * 0000000140186368: btr     word ptr gs:2EB0h, 5
 * 0000000140186373: jnb     loc_14018649E
 * 0000000140186379: call    loc_14018648C
 * 000000014018637E: add     rsp, 8
 * 0000000140186382: call    loc_140186495
 * 0000000140186387: add     rsp, 8
 * 000000014018638B: call    loc_14018637E
 * 0000000140186390: add     rsp, 8
 * 0000000140186394: call    loc_140186387
 * 0000000140186399: add     rsp, 8
 * 000000014018639D: call    loc_140186390
 * 00000001401863A2: add     rsp, 8
 * 00000001401863A6: call    loc_140186399
 * 00000001401863AB: add     rsp, 8
 * 00000001401863AF: call    loc_1401863A2
 * 00000001401863B4: add     rsp, 8
 * 00000001401863B8: call    loc_1401863AB
 * 00000001401863BD: add     rsp, 8
 * 00000001401863C1: call    loc_1401863B4
 * 00000001401863C6: add     rsp, 8
 * 00000001401863CA: call    loc_1401863BD
 * 00000001401863CF: add     rsp, 8
 * 00000001401863D3: call    loc_1401863C6
 * 00000001401863D8: add     rsp, 8
 * 00000001401863DC: call    loc_1401863CF
 * 00000001401863E1: add     rsp, 8
 * 00000001401863E5: call    loc_1401863D8
 * 00000001401863EA: add     rsp, 8
 * 00000001401863EE: call    loc_1401863E1
 * 00000001401863F3: add     rsp, 8
 * 00000001401863F7: call    loc_1401863EA
 * 00000001401863FC: add     rsp, 8
 * 0000000140186400: call    loc_1401863F3
 * 0000000140186405: add     rsp, 8
 * 0000000140186409: call    loc_1401863FC
 * 000000014018640E: add     rsp, 8
 * 0000000140186412: call    loc_140186405
 * 0000000140186417: add     rsp, 8
 * 000000014018641B: call    loc_14018640E
 * 0000000140186420: add     rsp, 8
 * 0000000140186424: call    loc_140186417
 * 0000000140186429: add     rsp, 8
 * 000000014018642D: call    loc_140186420
 * 0000000140186432: add     rsp, 8
 * 0000000140186436: call    loc_140186429
 * 000000014018643B: add     rsp, 8
 * 000000014018643F: call    loc_140186432
 * 0000000140186444: add     rsp, 8
 * 0000000140186448: call    loc_14018643B
 * 000000014018644D: add     rsp, 8
 * 0000000140186451: call    loc_140186444
 * 0000000140186456: add     rsp, 8
 * 000000014018645A: call    loc_14018644D
 * 000000014018645F: add     rsp, 8
 * 0000000140186463: call    loc_140186456
 * 0000000140186468: add     rsp, 8
 * 000000014018646C: call    loc_14018645F
 * 0000000140186471: add     rsp, 8
 * 0000000140186475: call    loc_140186468
 * 000000014018647A: add     rsp, 8
 * 000000014018647E: call    loc_140186471
 * 0000000140186483: add     rsp, 8
 * 0000000140186487: call    loc_14018647A
 * 000000014018648C: add     rsp, 8
 * 0000000140186490: call    loc_140186483
 * 0000000140186495: add     rsp, 8
 * 0000000140186499: mov     eax, 0DADAh
 * 000000014018649E: test    word ptr gs:2EB0h, 40h
 * 00000001401864A9: jz      short loc_1401864B7
 * 00000001401864AB: xor     eax, eax
 * 00000001401864AD: xor     edx, edx
 * 00000001401864AF: mov     ecx, 1
 * 00000001401864B4: div     rcx
 * 00000001401864B7: mov     rcx, r9
 * 00000001401864BA: xor     eax, eax
 * 00000001401864BC: xor     edx, edx
 * 00000001401864BE: mov     r8, [rbp+100h]
 * 00000001401864C5: mov     r9, [rbp+0D8h]
 * 00000001401864CC: pxor    xmm0, xmm0
 * 00000001401864D0: pxor    xmm1, xmm1
 * 00000001401864D4: pxor    xmm2, xmm2
 * 00000001401864D8: pxor    xmm3, xmm3
 * 00000001401864DC: pxor    xmm4, xmm4
 * 00000001401864E0: pxor    xmm5, xmm5
 * 00000001401864E4: mov     r11, [rbp+0F8h]
 * 00000001401864EB: xor     ebx, ebx
 * 00000001401864ED: test    cs:KiKvaShadow, 1
 * 00000001401864F4: jnz     KiKernelSysretExit
 * 00000001401864FA: mov     rbp, r9
 * 00000001401864FD: mov     rsp, r8
 * 0000000140186500: test    word ptr gs:2EB0h, 80h
 * 000000014018650B: jz      short loc_140186516
 * 000000014018650D: verw    word ptr gs:701Ch
 * 0000000140186516: swapgs
 * 0000000140186519: sysret
 * 000000014018651C: call    KiRestoreDebugRegisterState
 * 0000000140186521: mov     r10, cs:KeUserCallbackDispatcher
 * 0000000140186528: mov     r9, [rbx+0B8h]
 * 000000014018652F: mov     r9, [r9+2C8h]
 * 0000000140186536: or      r9, r9
 * 0000000140186539: jnz     loc_140186327
 * 000000014018653F: xchg    r9, r10
 * 0000000140186542: jmp     loc_140186327
 * 0000000140186547: lea     rsp, [r8-190h]
 * 000000014018654E: mov     rdi, rsp
 * 0000000140186551: mov     ecx, 32h ; '2'
 * 0000000140186556: rep movsq
 * 0000000140186559: lea     rbp, [rsp+138h+var_B8]
 * 0000000140186561: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 000000014018656A: mov     rax, cs:KeUserCallbackDispatcher
 * 0000000140186571: mov     [rbp+0E8h], rax
 * 0000000140186578: lea     rcx, KiSystemServiceExit
 * 000000014018657F: jmp     rcx
 * 0000000140186581: retn
 */
