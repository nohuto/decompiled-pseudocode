/*
 * XREFs of KiCallUserMode @ 0x140161440
 * Callers:
 *     KeUserModeCallback @ 0x140515D20 (KeUserModeCallback.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x140161440 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x140161440
 * Reason: Hex-Rays returned no pseudocode for 0x140161440
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140161440: sub     rsp, 138h
 * 0000000140161447: lea     rax, [rsp+138h+var_38]
 * 000000014016144F: movaps  [rsp+138h+var_108], xmm6
 * 0000000140161454: movaps  [rsp+138h+var_F8], xmm7
 * 0000000140161459: movaps  [rsp+138h+var_E8], xmm8
 * 000000014016145F: movaps  [rsp+138h+var_D8], xmm9
 * 0000000140161465: movaps  [rsp+138h+var_C8], xmm10
 * 000000014016146B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140161470: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140161475: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014016147A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014016147F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140161484: mov     [rax-8], rbp
 * 0000000140161488: mov     rbp, rsp
 * 000000014016148B: mov     [rax], rbx
 * 000000014016148E: mov     [rax+8], rdi
 * 0000000140161492: mov     [rax+10h], rsi
 * 0000000140161496: mov     [rax+18h], r12
 * 000000014016149A: mov     [rax+20h], r13
 * 000000014016149E: mov     [rax+28h], r14
 * 00000001401614A2: mov     [rax+30h], r15
 * 00000001401614A6: xor     r10, r10
 * 00000001401614A9: xor     r12, r12
 * 00000001401614AC: xor     r13, r13
 * 00000001401614AF: xor     r14, r14
 * 00000001401614B2: xor     r15, r15
 * 00000001401614B5: pxor    xmm6, xmm6
 * 00000001401614B9: pxor    xmm7, xmm7
 * 00000001401614BD: pxor    xmm8, xmm8
 * 00000001401614C2: pxor    xmm9, xmm9
 * 00000001401614C7: pxor    xmm10, xmm10
 * 00000001401614CC: pxor    xmm11, xmm11
 * 00000001401614D1: pxor    xmm12, xmm12
 * 00000001401614D6: pxor    xmm13, xmm13
 * 00000001401614DB: pxor    xmm14, xmm14
 * 00000001401614E0: pxor    xmm15, xmm15
 * 00000001401614E5: mov     [rbp+0D8h], rcx
 * 00000001401614EC: mov     [rbp+0E0h], rdx
 * 00000001401614F3: mov     rbx, gs:188h
 * 00000001401614FC: mov     [r8+20h], rsp
 * 0000000140161500: mov     rsi, [rbx+90h]
 * 0000000140161507: mov     [rbp+0D0h], rsi
 * 000000014016150E: cli
 * 000000014016150F: mov     [rbx+28h], r8
 * 0000000140161513: mov     [rbx+38h], r9
 * 0000000140161517: test    cs:KiKvaShadow, 1
 * 000000014016151E: jnz     short loc_14016152F
 * 0000000140161520: mov     rdi, gs:8
 * 0000000140161529: mov     [rdi+4], r8
 * 000000014016152D: jmp     short loc_140161538
 * 000000014016152F: mov     gs:7008h, r8
 * 0000000140161538: mov     ecx, cs:KeKernelStackSize
 * 000000014016153E: sub     r9, rcx
 * 0000000140161541: mov     gs:1A8h, r8
 * 000000014016154A: mov     [rbx+30h], r9
 * 000000014016154E: lea     rsp, [r8-190h]
 * 0000000140161555: mov     rdi, rsp
 * 0000000140161558: mov     ecx, 32h ; '2'
 * 000000014016155D: rep movsq
 * 0000000140161560: xor     edi, edi
 * 0000000140161562: cmp     byte ptr [rbx+0C2h], 0
 * 0000000140161569: jnz     loc_1401617B9
 * 000000014016156F: test    dword ptr [rbx], 48010000h
 * 0000000140161575: jnz     loc_1401617B9
 * 000000014016157B: lea     rbp, [rsi-110h]
 * 0000000140161582: ldmxcsr dword ptr [rbp-54h]
 * 0000000140161586: xor     esi, esi
 * 0000000140161588: test    byte ptr [rbx+3], 3
 * 000000014016158C: jnz     loc_14016178E
 * 0000000140161592: mov     r9, cs:KeUserCallbackDispatcher
 * 0000000140161599: movzx   eax, word ptr gs:2EC2h
 * 00000001401615A2: cmp     gs:2EBCh, ax
 * 00000001401615AB: jz      short loc_1401615BF
 * 00000001401615AD: mov     gs:2EBCh, ax
 * 00000001401615B6: mov     ecx, 48h ; 'H'
 * 00000001401615BB: xor     edx, edx
 * 00000001401615BD: wrmsr
 * 00000001401615BF: btr     word ptr gs:2EB8h, 2
 * 00000001401615CA: jnb     short loc_1401615DA
 * 00000001401615CC: mov     eax, 1
 * 00000001401615D1: xor     edx, edx
 * 00000001401615D3: mov     ecx, 49h ; 'I'
 * 00000001401615D8: wrmsr
 * 00000001401615DA: btr     word ptr gs:2EB8h, 5
 * 00000001401615E5: jnb     loc_140161710
 * 00000001401615EB: call    loc_1401616FE
 * 00000001401615F0: add     rsp, 8
 * 00000001401615F4: call    loc_140161707
 * 00000001401615F9: add     rsp, 8
 * 00000001401615FD: call    loc_1401615F0
 * 0000000140161602: add     rsp, 8
 * 0000000140161606: call    loc_1401615F9
 * 000000014016160B: add     rsp, 8
 * 000000014016160F: call    loc_140161602
 * 0000000140161614: add     rsp, 8
 * 0000000140161618: call    loc_14016160B
 * 000000014016161D: add     rsp, 8
 * 0000000140161621: call    loc_140161614
 * 0000000140161626: add     rsp, 8
 * 000000014016162A: call    loc_14016161D
 * 000000014016162F: add     rsp, 8
 * 0000000140161633: call    loc_140161626
 * 0000000140161638: add     rsp, 8
 * 000000014016163C: call    loc_14016162F
 * 0000000140161641: add     rsp, 8
 * 0000000140161645: call    loc_140161638
 * 000000014016164A: add     rsp, 8
 * 000000014016164E: call    loc_140161641
 * 0000000140161653: add     rsp, 8
 * 0000000140161657: call    loc_14016164A
 * 000000014016165C: add     rsp, 8
 * 0000000140161660: call    loc_140161653
 * 0000000140161665: add     rsp, 8
 * 0000000140161669: call    loc_14016165C
 * 000000014016166E: add     rsp, 8
 * 0000000140161672: call    loc_140161665
 * 0000000140161677: add     rsp, 8
 * 000000014016167B: call    loc_14016166E
 * 0000000140161680: add     rsp, 8
 * 0000000140161684: call    loc_140161677
 * 0000000140161689: add     rsp, 8
 * 000000014016168D: call    loc_140161680
 * 0000000140161692: add     rsp, 8
 * 0000000140161696: call    loc_140161689
 * 000000014016169B: add     rsp, 8
 * 000000014016169F: call    loc_140161692
 * 00000001401616A4: add     rsp, 8
 * 00000001401616A8: call    loc_14016169B
 * 00000001401616AD: add     rsp, 8
 * 00000001401616B1: call    loc_1401616A4
 * 00000001401616B6: add     rsp, 8
 * 00000001401616BA: call    loc_1401616AD
 * 00000001401616BF: add     rsp, 8
 * 00000001401616C3: call    loc_1401616B6
 * 00000001401616C8: add     rsp, 8
 * 00000001401616CC: call    loc_1401616BF
 * 00000001401616D1: add     rsp, 8
 * 00000001401616D5: call    loc_1401616C8
 * 00000001401616DA: add     rsp, 8
 * 00000001401616DE: call    loc_1401616D1
 * 00000001401616E3: add     rsp, 8
 * 00000001401616E7: call    loc_1401616DA
 * 00000001401616EC: add     rsp, 8
 * 00000001401616F0: call    loc_1401616E3
 * 00000001401616F5: add     rsp, 8
 * 00000001401616F9: call    loc_1401616EC
 * 00000001401616FE: add     rsp, 8
 * 0000000140161702: call    loc_1401616F5
 * 0000000140161707: add     rsp, 8
 * 000000014016170B: mov     eax, 0DADAh
 * 0000000140161710: test    word ptr gs:2EB8h, 40h
 * 000000014016171B: jz      short loc_140161729
 * 000000014016171D: xor     eax, eax
 * 000000014016171F: xor     edx, edx
 * 0000000140161721: mov     ecx, 1
 * 0000000140161726: div     rcx
 * 0000000140161729: mov     rcx, r9
 * 000000014016172C: xor     eax, eax
 * 000000014016172E: xor     edx, edx
 * 0000000140161730: mov     r8, [rbp+100h]
 * 0000000140161737: mov     r9, [rbp+0D8h]
 * 000000014016173E: pxor    xmm0, xmm0
 * 0000000140161742: pxor    xmm1, xmm1
 * 0000000140161746: pxor    xmm2, xmm2
 * 000000014016174A: pxor    xmm3, xmm3
 * 000000014016174E: pxor    xmm4, xmm4
 * 0000000140161752: pxor    xmm5, xmm5
 * 0000000140161756: mov     r11, [rbp+0F8h]
 * 000000014016175D: xor     ebx, ebx
 * 000000014016175F: test    cs:KiKvaShadow, 1
 * 0000000140161766: jnz     KiKernelSysretExit
 * 000000014016176C: mov     rbp, r9
 * 000000014016176F: mov     rsp, r8
 * 0000000140161772: test    word ptr gs:2EB8h, 80h
 * 000000014016177D: jz      short loc_140161788
 * 000000014016177F: verw    word ptr gs:701Ch
 * 0000000140161788: swapgs
 * 000000014016178B: sysret
 * 000000014016178E: call    KiRestoreDebugRegisterState
 * 0000000140161793: mov     r10, cs:KeUserCallbackDispatcher
 * 000000014016179A: mov     r9, [rbx+0B8h]
 * 00000001401617A1: mov     r9, [r9+2C8h]
 * 00000001401617A8: or      r9, r9
 * 00000001401617AB: jnz     loc_140161599
 * 00000001401617B1: xchg    r9, r10
 * 00000001401617B4: jmp     loc_140161599
 * 00000001401617B9: lea     rbp, [rsp+138h+var_B8]
 * 00000001401617C1: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001401617CA: mov     rax, cs:KeUserCallbackDispatcher
 * 00000001401617D1: mov     [rbp+0E8h], rax
 * 00000001401617D8: lea     rcx, KiSystemServiceExit
 * 00000001401617DF: jmp     rcx
 * 00000001401617E1: retn
 */
