/*
 * XREFs of KiInterruptDispatch @ 0x1401840A0
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x140107510 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14017DE10 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140182BC0 (KiRestoreDebugRegisterState.c)
 *     KiInterruptSubDispatch @ 0x140183D40 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x1401840A0 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x1401872F0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140187950 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x140204FF0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1401840A0
 * Reason: Hex-Rays returned no pseudocode for 0x1401840A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401840A0: mov     rdx, rsp
 * 00000001401840A3: mov     rcx, gs:6418h
 * 00000001401840AC: lea     rax, [rcx-6000h]
 * 00000001401840B3: cmp     rax, rsp
 * 00000001401840B6: ja      short loc_1401840BD
 * 00000001401840B8: cmp     rsp, rcx
 * 00000001401840BB: jb      short loc_1401840C9
 * 00000001401840BD: cmp     cs:KiBugCheckActive, 0
 * 00000001401840C4: jnz     short loc_1401840C9
 * 00000001401840C6: mov     rsp, rcx
 * 00000001401840C9: sub     rsp, 20h
 * 00000001401840CD: mov     [rsp+20h+var_10], rdx
 * 00000001401840D2: call    KiInterruptSubDispatch
 * 00000001401840D7: mov     rsp, [rsp+20h+var_10]
 * 00000001401840DC: mov     rcx, rsi
 * 00000001401840DF: call    HalPerformEndOfInterrupt_0
 * 00000001401840E4: mov     rcx, gs:20h
 * 00000001401840ED: cmp     byte ptr [rcx+20h], 1
 * 00000001401840F1: ja      short loc_140184167
 * 00000001401840F3: rdtsc
 * 00000001401840F5: shl     rdx, 20h
 * 00000001401840F9: or      rax, rdx
 * 00000001401840FC: sub     rax, [rcx+5B38h]
 * 0000000140184103: add     [rcx+5BF8h], rax
 * 000000014018410A: add     [rcx+5B38h], rax
 * 0000000140184111: mov     r8, rax
 * 0000000140184114: mov     rax, [rcx+8]
 * 0000000140184118: test    byte ptr [rax+2], 32h
 * 000000014018411C: jz      short loc_140184131
 * 000000014018411E: xor     edx, edx
 * 0000000140184120: call    KiBeginThreadAccountingPeriod
 * 0000000140184125: mov     rcx, gs:20h
 * 000000014018412E: inc     byte ptr [rcx+20h]
 * 0000000140184131: mov     dl, [rcx+6]
 * 0000000140184134: and     byte ptr [rcx+6], 0
 * 0000000140184138: cmp     byte ptr [rcx+7], 0
 * 000000014018413C: jnz     short loc_140184167
 * 000000014018413E: test    dl, dl
 * 0000000140184140: jz      short loc_140184167
 * 0000000140184142: cmp     byte ptr [rbp-57h], 2
 * 0000000140184146: jnb     short loc_140184153
 * 0000000140184148: and     byte ptr [rcx+20h], 0
 * 000000014018414C: call    KiDpcInterruptBypass
 * 0000000140184151: jmp     short loc_14018416A
 * 0000000140184153: mov     ecx, 2
 * 0000000140184158: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014018415E: mov     rcx, gs:20h
 * 0000000140184167: dec     byte ptr [rcx+20h]
 * 000000014018416A: movzx   ecx, byte ptr [rbp-57h]
 * 000000014018416E: mov     cr8, rcx
 * 0000000140184172: mov     rsi, [rbp+0D0h]
 * 0000000140184179: test    byte ptr [rbp+0F0h], 1
 * 0000000140184180: jz      loc_1401843E3
 * 0000000140184186: mov     rcx, gs:188h
 * 000000014018418F: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140184196: jz      short loc_1401841B1
 * 0000000140184198: mov     ecx, 1
 * 000000014018419D: mov     cr8, rcx
 * 00000001401841A1: sti
 * 00000001401841A2: call    KiInitiateUserApc
 * 00000001401841A7: cli
 * 00000001401841A8: mov     ecx, 0
 * 00000001401841AD: mov     cr8, rcx
 * 00000001401841B1: mov     rcx, gs:188h
 * 00000001401841BA: test    dword ptr [rcx], 40010000h
 * 00000001401841C0: jz      short loc_1401841D6
 * 00000001401841C2: test    byte ptr [rcx+2], 1
 * 00000001401841C6: jz      short loc_1401841D6
 * 00000001401841C8: call    KiCopyCounters
 * 00000001401841CD: mov     rcx, gs:188h
 * 00000001401841D6: ldmxcsr dword ptr [rbp-54h]
 * 00000001401841DA: cmp     word ptr [rbp+80h], 0
 * 00000001401841E2: jz      short loc_1401841E9
 * 00000001401841E4: call    KiRestoreDebugRegisterState
 * 00000001401841E9: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401841ED: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401841F1: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401841F5: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401841F9: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401841FD: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140184201: mov     r11, [rbp-20h]
 * 0000000140184205: mov     r10, [rbp-28h]
 * 0000000140184209: mov     r9, [rbp-30h]
 * 000000014018420D: mov     r8, [rbp-38h]
 * 0000000140184211: movzx   eax, word ptr gs:2EBAh
 * 000000014018421A: cmp     gs:2EB4h, ax
 * 0000000140184223: jz      short loc_140184237
 * 0000000140184225: mov     gs:2EB4h, ax
 * 000000014018422E: mov     ecx, 48h ; 'H'
 * 0000000140184233: xor     edx, edx
 * 0000000140184235: wrmsr
 * 0000000140184237: btr     word ptr gs:2EB0h, 2
 * 0000000140184242: jnb     short loc_140184252
 * 0000000140184244: mov     eax, 1
 * 0000000140184249: xor     edx, edx
 * 000000014018424B: mov     ecx, 49h ; 'I'
 * 0000000140184250: wrmsr
 * 0000000140184252: btr     word ptr gs:2EB0h, 5
 * 000000014018425D: jnb     loc_140184388
 * 0000000140184263: call    loc_140184376
 * 0000000140184268: add     rsp, 8
 * 000000014018426C: call    loc_14018437F
 * 0000000140184271: add     rsp, 8
 * 0000000140184275: call    loc_140184268
 * 000000014018427A: add     rsp, 8
 * 000000014018427E: call    loc_140184271
 * 0000000140184283: add     rsp, 8
 * 0000000140184287: call    loc_14018427A
 * 000000014018428C: add     rsp, 8
 * 0000000140184290: call    loc_140184283
 * 0000000140184295: add     rsp, 8
 * 0000000140184299: call    loc_14018428C
 * 000000014018429E: add     rsp, 8
 * 00000001401842A2: call    loc_140184295
 * 00000001401842A7: add     rsp, 8
 * 00000001401842AB: call    loc_14018429E
 * 00000001401842B0: add     rsp, 8
 * 00000001401842B4: call    loc_1401842A7
 * 00000001401842B9: add     rsp, 8
 * 00000001401842BD: call    loc_1401842B0
 * 00000001401842C2: add     rsp, 8
 * 00000001401842C6: call    loc_1401842B9
 * 00000001401842CB: add     rsp, 8
 * 00000001401842CF: call    loc_1401842C2
 * 00000001401842D4: add     rsp, 8
 * 00000001401842D8: call    loc_1401842CB
 * 00000001401842DD: add     rsp, 8
 * 00000001401842E1: call    loc_1401842D4
 * 00000001401842E6: add     rsp, 8
 * 00000001401842EA: call    loc_1401842DD
 * 00000001401842EF: add     rsp, 8
 * 00000001401842F3: call    loc_1401842E6
 * 00000001401842F8: add     rsp, 8
 * 00000001401842FC: call    loc_1401842EF
 * 0000000140184301: add     rsp, 8
 * 0000000140184305: call    loc_1401842F8
 * 000000014018430A: add     rsp, 8
 * 000000014018430E: call    loc_140184301
 * 0000000140184313: add     rsp, 8
 * 0000000140184317: call    loc_14018430A
 * 000000014018431C: add     rsp, 8
 * 0000000140184320: call    loc_140184313
 * 0000000140184325: add     rsp, 8
 * 0000000140184329: call    loc_14018431C
 * 000000014018432E: add     rsp, 8
 * 0000000140184332: call    loc_140184325
 * 0000000140184337: add     rsp, 8
 * 000000014018433B: call    loc_14018432E
 * 0000000140184340: add     rsp, 8
 * 0000000140184344: call    loc_140184337
 * 0000000140184349: add     rsp, 8
 * 000000014018434D: call    loc_140184340
 * 0000000140184352: add     rsp, 8
 * 0000000140184356: call    loc_140184349
 * 000000014018435B: add     rsp, 8
 * 000000014018435F: call    loc_140184352
 * 0000000140184364: add     rsp, 8
 * 0000000140184368: call    loc_14018435B
 * 000000014018436D: add     rsp, 8
 * 0000000140184371: call    loc_140184364
 * 0000000140184376: add     rsp, 8
 * 000000014018437A: call    loc_14018436D
 * 000000014018437F: add     rsp, 8
 * 0000000140184383: mov     eax, 0DADAh
 * 0000000140184388: test    word ptr gs:2EB0h, 40h
 * 0000000140184393: jz      short loc_1401843A1
 * 0000000140184395: xor     eax, eax
 * 0000000140184397: xor     edx, edx
 * 0000000140184399: mov     ecx, 1
 * 000000014018439E: div     rcx
 * 00000001401843A1: mov     rdx, [rbp-40h]
 * 00000001401843A5: mov     rcx, [rbp-48h]
 * 00000001401843A9: mov     rax, [rbp-50h]
 * 00000001401843AD: mov     rsp, rbp
 * 00000001401843B0: mov     rbp, [rbp+0D8h]
 * 00000001401843B7: add     rsp, 0E8h
 * 00000001401843BE: test    cs:KiKvaShadow, 1
 * 00000001401843C5: jz      short loc_1401843CC
 * 00000001401843C7: jmp     KiKernelExit
 * 00000001401843CC: test    word ptr gs:2EB0h, 80h
 * 00000001401843D7: jz      short loc_1401843DE
 * 00000001401843D9: verw    [rsp-1C8h+arg_1E0]
 * 00000001401843DE: swapgs
 * 00000001401843E1: iretq
 * 00000001401843E3: ldmxcsr dword ptr [rbp-54h]
 * 00000001401843E7: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001401843EB: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001401843EF: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001401843F3: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001401843F7: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001401843FB: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001401843FF: mov     r11, [rbp-20h]
 * 0000000140184403: mov     r10, [rbp-28h]
 * 0000000140184407: mov     r9, [rbp-30h]
 * 000000014018440B: mov     r8, [rbp-38h]
 * 000000014018440F: mov     rdx, [rbp-40h]
 * 0000000140184413: mov     rcx, [rbp-48h]
 * 0000000140184417: mov     rax, [rbp-50h]
 * 000000014018441B: mov     rsp, rbp
 * 000000014018441E: mov     rbp, [rbp+0D8h]
 * 0000000140184425: add     rsp, 0E8h
 * 000000014018442C: iretq
 */
