/*
 * XREFs of KiUmsFastReturnToUser @ 0x1401704C0
 * Callers:
 *     KiUmsTrapEntry @ 0x1401708C0 (KiUmsTrapEntry.c)
 *     KiUmsCallEntry @ 0x140170AC0 (KiUmsCallEntry.c)
 *     KiUmsExceptionEntry @ 0x140170C80 (KiUmsExceptionEntry.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiBugCheckDispatch @ 0x14016FC00 (KiBugCheckDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1401704C0 (KiUmsFastReturnToUser.c)
 *     KiUmsExit @ 0x140170D40 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiUmsFastReturnToUser @ 0x1401704C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401704C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401704C0: sub     rsp, 28h
 * 00000001401704C4: mov     rbx, gs:188h
 * 00000001401704CD: mov     rcx, [rbx+90h]
 * 00000001401704D4: lea     rbp, [rcx+80h]
 * 00000001401704DB: mov     rax, cr8
 * 00000001401704DF: or      al, [rbx+24Ah]
 * 00000001401704E5: or      eax, [rbx+1E4h]
 * 00000001401704EB: jz      short loc_140170521
 * 00000001401704ED: mov     ecx, 4Ah ; 'J'
 * 00000001401704F2: xor     r9d, r9d
 * 00000001401704F5: mov     r8, cr8
 * 00000001401704F9: or      r8d, r8d
 * 00000001401704FC: jnz     short loc_140170512
 * 00000001401704FE: mov     ecx, 1
 * 0000000140170503: movzx   r8d, byte ptr [rbx+24Ah]
 * 000000014017050B: mov     r9d, [rbx+1E4h]
 * 0000000140170512: mov     rdx, [rbp+0E8h]
 * 0000000140170519: mov     r10, rbp
 * 000000014017051C: call    KiBugCheckDispatch
 * 0000000140170521: cli
 * 0000000140170522: mov     rcx, gs:188h
 * 000000014017052B: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140170532: jz      short loc_14017058B
 * 0000000140170534: mov     [rbp-50h], rax
 * 0000000140170538: xor     eax, eax
 * 000000014017053A: mov     [rbp-48h], rax
 * 000000014017053E: mov     [rbp-40h], rax
 * 0000000140170542: mov     [rbp-38h], rax
 * 0000000140170546: mov     [rbp-30h], rax
 * 000000014017054A: mov     [rbp-28h], rax
 * 000000014017054E: mov     [rbp-20h], rax
 * 0000000140170552: pxor    xmm0, xmm0
 * 0000000140170556: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014017055A: movaps  xmmword ptr [rbp+0], xmm0
 * 000000014017055E: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140170562: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140170566: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014017056A: movaps  xmmword ptr [rbp+40h], xmm0
 * 000000014017056E: mov     ecx, 1
 * 0000000140170573: mov     cr8, rcx
 * 0000000140170577: sti
 * 0000000140170578: call    KiInitiateUserApc
 * 000000014017057D: cli
 * 000000014017057E: mov     ecx, 0
 * 0000000140170583: mov     cr8, rcx
 * 0000000140170587: mov     rax, [rbp-50h]
 * 000000014017058B: mov     rcx, gs:188h
 * 0000000140170594: test    dword ptr [rcx], 8000000h
 * 000000014017059A: jz      short loc_1401705DB
 * 000000014017059C: mov     [rbp-50h], rax
 * 00000001401705A0: xor     eax, eax
 * 00000001401705A2: mov     [rbp-48h], rax
 * 00000001401705A6: mov     [rbp-40h], rax
 * 00000001401705AA: mov     [rbp-38h], rax
 * 00000001401705AE: mov     [rbp-30h], rax
 * 00000001401705B2: mov     [rbp-28h], rax
 * 00000001401705B6: mov     [rbp-20h], rax
 * 00000001401705BA: pxor    xmm0, xmm0
 * 00000001401705BE: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001401705C2: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001401705C6: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001401705CA: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001401705CE: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001401705D2: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001401705D6: call    KiRestoreSetContextState
 * 00000001401705DB: mov     rcx, gs:188h
 * 00000001401705E4: test    dword ptr [rcx], 40010000h
 * 00000001401705EA: jz      short loc_140170619
 * 00000001401705EC: mov     [rbp-50h], rax
 * 00000001401705F0: test    byte ptr [rcx+2], 1
 * 00000001401705F4: jz      short loc_140170604
 * 00000001401705F6: call    KiCopyCounters
 * 00000001401705FB: mov     rcx, gs:188h
 * 0000000140170604: test    byte ptr [rcx+3], 40h
 * 0000000140170608: jz      short loc_140170615
 * 000000014017060A: lea     rsp, [rbp-80h]
 * 000000014017060E: xor     ecx, ecx
 * 0000000140170610: call    KiUmsExit
 * 0000000140170615: mov     rax, [rbp-50h]
 * 0000000140170619: ldmxcsr dword ptr [rbp-54h]
 * 000000014017061D: xor     r10, r10
 * 0000000140170620: cmp     word ptr [rbp+80h], 0
 * 0000000140170628: jz      short loc_14017066B
 * 000000014017062A: mov     [rbp-50h], rax
 * 000000014017062E: call    KiRestoreDebugRegisterState
 * 0000000140170633: mov     rax, gs:188h
 * 000000014017063C: mov     rax, [rax+0B8h]
 * 0000000140170643: mov     rax, [rax+2C8h]
 * 000000014017064A: or      rax, rax
 * 000000014017064D: jz      short loc_140170667
 * 000000014017064F: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140170657: jnz     short loc_140170667
 * 0000000140170659: mov     r10, [rbp+0E8h]
 * 0000000140170660: mov     [rbp+0E8h], rax
 * 0000000140170667: mov     rax, [rbp-50h]
 * 000000014017066B: mov     [rbp-50h], rax
 * 000000014017066F: movzx   eax, word ptr gs:2EC2h
 * 0000000140170678: cmp     gs:2EBCh, ax
 * 0000000140170681: jz      short loc_140170695
 * 0000000140170683: mov     gs:2EBCh, ax
 * 000000014017068C: mov     ecx, 48h ; 'H'
 * 0000000140170691: xor     edx, edx
 * 0000000140170693: wrmsr
 * 0000000140170695: btr     word ptr gs:2EB8h, 2
 * 00000001401706A0: jnb     short loc_1401706B0
 * 00000001401706A2: mov     eax, 1
 * 00000001401706A7: xor     edx, edx
 * 00000001401706A9: mov     ecx, 49h ; 'I'
 * 00000001401706AE: wrmsr
 * 00000001401706B0: btr     word ptr gs:2EB8h, 5
 * 00000001401706BB: jnb     loc_1401707E6
 * 00000001401706C1: call    loc_1401707D4
 * 00000001401706C6: add     rsp, 8
 * 00000001401706CA: call    loc_1401707DD
 * 00000001401706CF: add     rsp, 8
 * 00000001401706D3: call    loc_1401706C6
 * 00000001401706D8: add     rsp, 8
 * 00000001401706DC: call    loc_1401706CF
 * 00000001401706E1: add     rsp, 8
 * 00000001401706E5: call    loc_1401706D8
 * 00000001401706EA: add     rsp, 8
 * 00000001401706EE: call    loc_1401706E1
 * 00000001401706F3: add     rsp, 8
 * 00000001401706F7: call    loc_1401706EA
 * 00000001401706FC: add     rsp, 8
 * 0000000140170700: call    loc_1401706F3
 * 0000000140170705: add     rsp, 8
 * 0000000140170709: call    loc_1401706FC
 * 000000014017070E: add     rsp, 8
 * 0000000140170712: call    loc_140170705
 * 0000000140170717: add     rsp, 8
 * 000000014017071B: call    loc_14017070E
 * 0000000140170720: add     rsp, 8
 * 0000000140170724: call    loc_140170717
 * 0000000140170729: add     rsp, 8
 * 000000014017072D: call    loc_140170720
 * 0000000140170732: add     rsp, 8
 * 0000000140170736: call    loc_140170729
 * 000000014017073B: add     rsp, 8
 * 000000014017073F: call    loc_140170732
 * 0000000140170744: add     rsp, 8
 * 0000000140170748: call    loc_14017073B
 * 000000014017074D: add     rsp, 8
 * 0000000140170751: call    loc_140170744
 * 0000000140170756: add     rsp, 8
 * 000000014017075A: call    loc_14017074D
 * 000000014017075F: add     rsp, 8
 * 0000000140170763: call    loc_140170756
 * 0000000140170768: add     rsp, 8
 * 000000014017076C: call    loc_14017075F
 * 0000000140170771: add     rsp, 8
 * 0000000140170775: call    loc_140170768
 * 000000014017077A: add     rsp, 8
 * 000000014017077E: call    loc_140170771
 * 0000000140170783: add     rsp, 8
 * 0000000140170787: call    loc_14017077A
 * 000000014017078C: add     rsp, 8
 * 0000000140170790: call    loc_140170783
 * 0000000140170795: add     rsp, 8
 * 0000000140170799: call    loc_14017078C
 * 000000014017079E: add     rsp, 8
 * 00000001401707A2: call    loc_140170795
 * 00000001401707A7: add     rsp, 8
 * 00000001401707AB: call    loc_14017079E
 * 00000001401707B0: add     rsp, 8
 * 00000001401707B4: call    loc_1401707A7
 * 00000001401707B9: add     rsp, 8
 * 00000001401707BD: call    loc_1401707B0
 * 00000001401707C2: add     rsp, 8
 * 00000001401707C6: call    loc_1401707B9
 * 00000001401707CB: add     rsp, 8
 * 00000001401707CF: call    loc_1401707C2
 * 00000001401707D4: add     rsp, 8
 * 00000001401707D8: call    loc_1401707CB
 * 00000001401707DD: add     rsp, 8
 * 00000001401707E1: mov     eax, 0DADAh
 * 00000001401707E6: test    word ptr gs:2EB8h, 40h
 * 00000001401707F1: jz      short loc_1401707FF
 * 00000001401707F3: xor     eax, eax
 * 00000001401707F5: xor     edx, edx
 * 00000001401707F7: mov     ecx, 1
 * 00000001401707FC: div     rcx
 * 00000001401707FF: mov     rax, [rbp-50h]
 * 0000000140170803: mov     r8, [rbp+100h]
 * 000000014017080A: mov     r9, [rbp+0D8h]
 * 0000000140170811: xor     edx, edx
 * 0000000140170813: pxor    xmm0, xmm0
 * 0000000140170817: pxor    xmm1, xmm1
 * 000000014017081B: pxor    xmm2, xmm2
 * 000000014017081F: pxor    xmm3, xmm3
 * 0000000140170823: pxor    xmm4, xmm4
 * 0000000140170827: pxor    xmm5, xmm5
 * 000000014017082B: mov     rcx, [rbp+0E8h]
 * 0000000140170832: mov     r11, [rbp+0F8h]
 * 0000000140170839: test    cs:KiKvaShadow, 1
 * 0000000140170840: jnz     KiKernelSysretExit
 * 0000000140170846: mov     rbp, r9
 * 0000000140170849: mov     rsp, r8
 * 000000014017084C: test    word ptr gs:2EB8h, 80h
 * 0000000140170857: jz      short loc_140170862
 * 0000000140170859: verw    word ptr gs:701Ch
 * 0000000140170862: swapgs
 * 0000000140170865: sysret
 */
