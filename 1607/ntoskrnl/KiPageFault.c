/*
 * XREFs of KiPageFault @ 0x14016C340
 * Callers:
 *     KiPageFaultShadow @ 0x14023F700 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     KiCheckForSListAddress @ 0x14008C180 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x14016C340 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x14016FC00 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x14016FC80 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x1401708C0 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140170D40 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KdSetOwedBreakpoints @ 0x1401D1CE8 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x14020F20C (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x14016C340
 * Reason: Hex-Rays returned no pseudocode for 0x14016C340
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016C340: push    rbp
 * 000000014016C341: sub     rsp, 158h
 * 000000014016C348: lea     rbp, [rsp+80h]
 * 000000014016C350: mov     [rbp+0D8h+var_12D], 1
 * 000000014016C354: mov     [rbp+0D8h+var_128], rax
 * 000000014016C358: mov     [rbp+0D8h+var_120], rcx
 * 000000014016C35C: mov     [rbp+0D8h+var_118], rdx
 * 000000014016C360: mov     [rbp+0D8h+var_110], r8
 * 000000014016C364: mov     [rbp+0D8h+var_108], r9
 * 000000014016C368: mov     [rbp+0D8h+var_100], r10
 * 000000014016C36C: mov     [rbp+0D8h+var_F8], r11
 * 000000014016C370: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014016C377: jnz     short loc_14016C3A8
 * 000000014016C379: lfence
 * 000000014016C37C: test    word ptr gs:2EB8h, 1
 * 000000014016C387: jnz     short loc_14016C391
 * 000000014016C389: lfence
 * 000000014016C38C: jmp     loc_14016C5DD
 * 000000014016C391: movzx   eax, word ptr gs:2EBCh
 * 000000014016C39A: mov     ecx, 48h ; 'H'
 * 000000014016C39F: xor     edx, edx
 * 000000014016C3A1: wrmsr
 * 000000014016C3A3: jmp     loc_14016C5DD
 * 000000014016C3A8: test    cs:KiKvaShadow, 1
 * 000000014016C3AF: jnz     short loc_14016C3B4
 * 000000014016C3B1: swapgs
 * 000000014016C3B4: lfence
 * 000000014016C3B7: mov     r10, gs:188h
 * 000000014016C3C0: mov     rcx, gs:188h
 * 000000014016C3C9: mov     rcx, [rcx+220h]
 * 000000014016C3D0: mov     rcx, [rcx+7B8h]
 * 000000014016C3D7: mov     gs:2EB0h, rcx
 * 000000014016C3E0: movzx   eax, word ptr gs:2EBEh
 * 000000014016C3E9: cmp     gs:2EBCh, ax
 * 000000014016C3F2: jz      short loc_14016C406
 * 000000014016C3F4: mov     gs:2EBCh, ax
 * 000000014016C3FD: mov     ecx, 48h ; 'H'
 * 000000014016C402: xor     edx, edx
 * 000000014016C404: wrmsr
 * 000000014016C406: movzx   edx, word ptr gs:2EB8h
 * 000000014016C40F: test    edx, 8
 * 000000014016C415: jz      short loc_14016C42E
 * 000000014016C417: mov     eax, 1
 * 000000014016C41C: xor     edx, edx
 * 000000014016C41E: mov     ecx, 49h ; 'I'
 * 000000014016C423: wrmsr
 * 000000014016C425: movzx   edx, word ptr gs:2EB8h
 * 000000014016C42E: test    edx, 2
 * 000000014016C434: jz      loc_14016C55F
 * 000000014016C43A: call    loc_14016C54D
 * 000000014016C43F: add     rsp, 8
 * 000000014016C443: call    loc_14016C556
 * 000000014016C448: add     rsp, 8
 * 000000014016C44C: call    loc_14016C43F
 * 000000014016C451: add     rsp, 8
 * 000000014016C455: call    loc_14016C448
 * 000000014016C45A: add     rsp, 8
 * 000000014016C45E: call    loc_14016C451
 * 000000014016C463: add     rsp, 8
 * 000000014016C467: call    loc_14016C45A
 * 000000014016C46C: add     rsp, 8
 * 000000014016C470: call    loc_14016C463
 * 000000014016C475: add     rsp, 8
 * 000000014016C479: call    loc_14016C46C
 * 000000014016C47E: add     rsp, 8
 * 000000014016C482: call    loc_14016C475
 * 000000014016C487: add     rsp, 8
 * 000000014016C48B: call    loc_14016C47E
 * 000000014016C490: add     rsp, 8
 * 000000014016C494: call    loc_14016C487
 * 000000014016C499: add     rsp, 8
 * 000000014016C49D: call    loc_14016C490
 * 000000014016C4A2: add     rsp, 8
 * 000000014016C4A6: call    loc_14016C499
 * 000000014016C4AB: add     rsp, 8
 * 000000014016C4AF: call    loc_14016C4A2
 * 000000014016C4B4: add     rsp, 8
 * 000000014016C4B8: call    loc_14016C4AB
 * 000000014016C4BD: add     rsp, 8
 * 000000014016C4C1: call    loc_14016C4B4
 * 000000014016C4C6: add     rsp, 8
 * 000000014016C4CA: call    loc_14016C4BD
 * 000000014016C4CF: add     rsp, 8
 * 000000014016C4D3: call    loc_14016C4C6
 * 000000014016C4D8: add     rsp, 8
 * 000000014016C4DC: call    loc_14016C4CF
 * 000000014016C4E1: add     rsp, 8
 * 000000014016C4E5: call    loc_14016C4D8
 * 000000014016C4EA: add     rsp, 8
 * 000000014016C4EE: call    loc_14016C4E1
 * 000000014016C4F3: add     rsp, 8
 * 000000014016C4F7: call    loc_14016C4EA
 * 000000014016C4FC: add     rsp, 8
 * 000000014016C500: call    loc_14016C4F3
 * 000000014016C505: add     rsp, 8
 * 000000014016C509: call    loc_14016C4FC
 * 000000014016C50E: add     rsp, 8
 * 000000014016C512: call    loc_14016C505
 * 000000014016C517: add     rsp, 8
 * 000000014016C51B: call    loc_14016C50E
 * 000000014016C520: add     rsp, 8
 * 000000014016C524: call    loc_14016C517
 * 000000014016C529: add     rsp, 8
 * 000000014016C52D: call    loc_14016C520
 * 000000014016C532: add     rsp, 8
 * 000000014016C536: call    loc_14016C529
 * 000000014016C53B: add     rsp, 8
 * 000000014016C53F: call    loc_14016C532
 * 000000014016C544: add     rsp, 8
 * 000000014016C548: call    loc_14016C53B
 * 000000014016C54D: add     rsp, 8
 * 000000014016C551: call    loc_14016C544
 * 000000014016C556: add     rsp, 8
 * 000000014016C55A: mov     eax, 0DADAh
 * 000000014016C55F: test    edx, 100h
 * 000000014016C565: jz      short loc_14016C56C
 * 000000014016C567: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016C56C: lfence
 * 000000014016C56F: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014016C577: jnz     short loc_14016C5C8
 * 000000014016C579: mov     ecx, 0C0000102h
 * 000000014016C57E: rdmsr
 * 000000014016C580: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 000000014016C583: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 000000014016C586: test    byte ptr [r10+3], 80h
 * 000000014016C58B: jz      short loc_14016C5C8
 * 000000014016C58D: shl     rdx, 20h
 * 000000014016C591: or      rax, rdx
 * 000000014016C594: cmp     rax, cs:MmUserProbeAddress
 * 000000014016C59B: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016C5A3: cmp     [r10+0F0h], rax
 * 000000014016C5AA: jz      short loc_14016C5C8
 * 000000014016C5AC: mov     rdx, [r10+1F0h]
 * 000000014016C5B3: bts     dword ptr [r10+74h], 8
 * 000000014016C5B9: dec     word ptr [r10+1E6h]
 * 000000014016C5C1: mov     [rdx+80h], rax
 * 000000014016C5C8: test    byte ptr [r10+3], 3
 * 000000014016C5CD: mov     [rbp+0D8h+var_58], 0
 * 000000014016C5D6: jz      short loc_14016C5DD
 * 000000014016C5D8: call    KiSaveDebugRegisterState
 * 000000014016C5DD: cld
 * 000000014016C5DE: stmxcsr [rbp+0D8h+var_12C]
 * 000000014016C5E2: ldmxcsr dword ptr gs:180h
 * 000000014016C5EB: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014016C5EF: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014016C5F3: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014016C5F7: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014016C5FB: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014016C5FF: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014016C603: mov     eax, [rbp+0E0h]
 * 000000014016C609: mov     rcx, cr2
 * 000000014016C60C: test    [rbp+0D8h+arg_10], 200h
 * 000000014016C616: jz      short loc_14016C619
 * 000000014016C618: sti
 * 000000014016C619: mov     r9, gs:188h
 * 000000014016C622: bt      dword ptr [r9+74h], 8
 * 000000014016C628: jnb     short loc_14016C638
 * 000000014016C62A: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014016C631: jz      short loc_14016C638
 * 000000014016C633: call    KiUmsTrapEntry
 * 000000014016C638: mov     [rbp+0D8h+var_88], rcx
 * 000000014016C63C: bt      [rbp+0D8h+arg_10], 9
 * 000000014016C644: jnb     loc_14016C777
 * 000000014016C64A: lea     r9, [rbp+0D8h+var_158]
 * 000000014016C64E: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 000000014016C655: and     r8b, 1
 * 000000014016C659: mov     rdx, rcx; ULONG_PTR
 * 000000014016C65C: movzx   ecx, al; BugCheckParameter2
 * 000000014016C65F: shr     eax, 1
 * 000000014016C661: and     eax, 9
 * 000000014016C664: mov     [rbp+0D8h+var_12E], al
 * 000000014016C667: call    MmAccessFault
 * 000000014016C66C: test    eax, eax
 * 000000014016C66E: jl      short loc_14016C6A6
 * 000000014016C670: cmp     cs:PsWatchEnabled, 0
 * 000000014016C677: jz      short loc_14016C68B
 * 000000014016C679: mov     r8, [rbp+0D8h+var_88]
 * 000000014016C67D: mov     rdx, [rbp+0D8h+arg_0]
 * 000000014016C684: mov     ecx, eax
 * 000000014016C686: call    PsWatchWorkingSet
 * 000000014016C68B: cmp     cs:KdpOweBreakpoint, 0
 * 000000014016C692: jz      loc_14016C77D
 * 000000014016C698: mov     rcx, [rbp+0D8h+var_88]
 * 000000014016C69C: call    KdSetOwedBreakpoints
 * 000000014016C6A1: jmp     loc_14016C77D
 * 000000014016C6A6: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014016C6AD: jz      short loc_14016C701
 * 000000014016C6AF: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014016C6B7: jnz     short loc_14016C6F7
 * 000000014016C6B9: mov     r9, gs:188h
 * 000000014016C6C2: test    byte ptr [r9+3], 4
 * 000000014016C6C7: jz      short loc_14016C6D2
 * 000000014016C6C9: mov     r8, [r9+7A0h]
 * 000000014016C6D0: jmp     short loc_14016C6DB
 * 000000014016C6D2: mov     r8, gs:30h
 * 000000014016C6DB: cmp     r8, [rbp+0D8h+var_F0]
 * 000000014016C6DF: jz      short loc_14016C701
 * 000000014016C6E1: mov     ecx, 0C0000102h
 * 000000014016C6E6: mov     eax, r8d
 * 000000014016C6E9: shr     r8, 20h
 * 000000014016C6ED: mov     edx, r8d
 * 000000014016C6F0: wrmsr
 * 000000014016C6F2: jmp     loc_14016C77D
 * 000000014016C6F7: mov     rcx, [rbp+0D8h+var_88]
 * 000000014016C6FB: shr     rcx, 20h
 * 000000014016C6FF: jnz     short loc_14016C77D
 * 000000014016C701: mov     ecx, eax
 * 000000014016C703: mov     edx, 2
 * 000000014016C708: cmp     ecx, 0D0000006h
 * 000000014016C70E: jz      short loc_14016C751
 * 000000014016C710: cmp     ecx, 0C0000005h
 * 000000014016C716: jz      short loc_14016C737
 * 000000014016C718: cmp     ecx, 80000001h
 * 000000014016C71E: jz      short loc_14016C73C
 * 000000014016C720: cmp     ecx, 0C00000FDh
 * 000000014016C726: jz      short loc_14016C73C
 * 000000014016C728: mov     ecx, 0C0000006h
 * 000000014016C72D: mov     edx, 3
 * 000000014016C732: mov     r11d, eax
 * 000000014016C735: jmp     short loc_14016C73C
 * 000000014016C737: mov     ecx, 10000004h
 * 000000014016C73C: mov     r10, [rbp+0D8h+var_88]
 * 000000014016C740: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014016C745: mov     r8, [rbp+0D8h+arg_0]
 * 000000014016C74C: call    KiExceptionDispatch
 * 000000014016C751: mov     rax, cr8
 * 000000014016C755: mov     r10, [rbp+0D8h+arg_0]
 * 000000014016C75C: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014016C761: and     eax, 0FFh
 * 000000014016C766: mov     r8, rax
 * 000000014016C769: mov     rdx, [rbp+0D8h+var_88]
 * 000000014016C76D: mov     ecx, 0Ah
 * 000000014016C772: call    KiBugCheckDispatch
 * 000000014016C777: xor     eax, eax
 * 000000014016C779: mov     al, 0FFh
 * 000000014016C77B: jmp     short loc_14016C755
 * 000000014016C77D: mov     rax, cr8
 * 000000014016C781: or      eax, eax
 * 000000014016C783: mov     [rbp+0D8h+var_138], eax
 * 000000014016C786: jnz     short loc_14016C791
 * 000000014016C788: mov     ecx, 1
 * 000000014016C78D: mov     cr8, rcx
 * 000000014016C791: lea     rcx, [rbp+0D8h+var_158]
 * 000000014016C795: call    KiCheckForSListAddress
 * 000000014016C79A: mov     ecx, [rbp+0D8h+var_138]
 * 000000014016C79D: or      ecx, ecx
 * 000000014016C79F: jnz     short loc_14016C7A5
 * 000000014016C7A1: mov     cr8, rcx
 * 000000014016C7A5: cli
 * 000000014016C7A6: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014016C7AD: jz      loc_14016CA37
 * 000000014016C7B3: mov     rcx, gs:188h
 * 000000014016C7BC: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016C7C3: jz      short loc_14016C7DE
 * 000000014016C7C5: mov     ecx, 1
 * 000000014016C7CA: mov     cr8, rcx
 * 000000014016C7CE: sti
 * 000000014016C7CF: call    KiInitiateUserApc
 * 000000014016C7D4: cli
 * 000000014016C7D5: mov     ecx, 0
 * 000000014016C7DA: mov     cr8, rcx
 * 000000014016C7DE: mov     rcx, gs:188h
 * 000000014016C7E7: test    dword ptr [rcx], 8000000h
 * 000000014016C7ED: jz      short loc_14016C7F4
 * 000000014016C7EF: call    KiRestoreSetContextState
 * 000000014016C7F4: mov     rcx, gs:188h
 * 000000014016C7FD: test    dword ptr [rcx], 40010000h
 * 000000014016C803: jz      short loc_14016C82A
 * 000000014016C805: test    byte ptr [rcx+2], 1
 * 000000014016C809: jz      short loc_14016C819
 * 000000014016C80B: call    KiCopyCounters
 * 000000014016C810: mov     rcx, gs:188h
 * 000000014016C819: test    byte ptr [rcx+3], 40h
 * 000000014016C81D: jz      short loc_14016C82A
 * 000000014016C81F: lea     rsp, [rbp-80h]
 * 000000014016C823: mov     cl, 1
 * 000000014016C825: call    KiUmsExit
 * 000000014016C82A: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014016C82E: cmp     [rbp+0D8h+var_58], 0
 * 000000014016C836: jz      short loc_14016C83D
 * 000000014016C838: call    KiRestoreDebugRegisterState
 * 000000014016C83D: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014016C841: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014016C845: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014016C849: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014016C84D: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014016C851: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014016C855: mov     r11, [rbp+0D8h+var_F8]
 * 000000014016C859: mov     r10, [rbp+0D8h+var_100]
 * 000000014016C85D: mov     r9, [rbp+0D8h+var_108]
 * 000000014016C861: mov     r8, [rbp+0D8h+var_110]
 * 000000014016C865: movzx   eax, word ptr gs:2EC2h
 * 000000014016C86E: cmp     gs:2EBCh, ax
 * 000000014016C877: jz      short loc_14016C88B
 * 000000014016C879: mov     gs:2EBCh, ax
 * 000000014016C882: mov     ecx, 48h ; 'H'
 * 000000014016C887: xor     edx, edx
 * 000000014016C889: wrmsr
 * 000000014016C88B: btr     word ptr gs:2EB8h, 2
 * 000000014016C896: jnb     short loc_14016C8A6
 * 000000014016C898: mov     eax, 1
 * 000000014016C89D: xor     edx, edx
 * 000000014016C89F: mov     ecx, 49h ; 'I'
 * 000000014016C8A4: wrmsr
 * 000000014016C8A6: btr     word ptr gs:2EB8h, 5
 * 000000014016C8B1: jnb     loc_14016C9DC
 * 000000014016C8B7: call    loc_14016C9CA
 * 000000014016C8BC: add     rsp, 8
 * 000000014016C8C0: call    loc_14016C9D3
 * 000000014016C8C5: add     rsp, 8
 * 000000014016C8C9: call    loc_14016C8BC
 * 000000014016C8CE: add     rsp, 8
 * 000000014016C8D2: call    loc_14016C8C5
 * 000000014016C8D7: add     rsp, 8
 * 000000014016C8DB: call    loc_14016C8CE
 * 000000014016C8E0: add     rsp, 8
 * 000000014016C8E4: call    loc_14016C8D7
 * 000000014016C8E9: add     rsp, 8
 * 000000014016C8ED: call    loc_14016C8E0
 * 000000014016C8F2: add     rsp, 8
 * 000000014016C8F6: call    loc_14016C8E9
 * 000000014016C8FB: add     rsp, 8
 * 000000014016C8FF: call    loc_14016C8F2
 * 000000014016C904: add     rsp, 8
 * 000000014016C908: call    loc_14016C8FB
 * 000000014016C90D: add     rsp, 8
 * 000000014016C911: call    loc_14016C904
 * 000000014016C916: add     rsp, 8
 * 000000014016C91A: call    loc_14016C90D
 * 000000014016C91F: add     rsp, 8
 * 000000014016C923: call    loc_14016C916
 * 000000014016C928: add     rsp, 8
 * 000000014016C92C: call    loc_14016C91F
 * 000000014016C931: add     rsp, 8
 * 000000014016C935: call    loc_14016C928
 * 000000014016C93A: add     rsp, 8
 * 000000014016C93E: call    loc_14016C931
 * 000000014016C943: add     rsp, 8
 * 000000014016C947: call    loc_14016C93A
 * 000000014016C94C: add     rsp, 8
 * 000000014016C950: call    loc_14016C943
 * 000000014016C955: add     rsp, 8
 * 000000014016C959: call    loc_14016C94C
 * 000000014016C95E: add     rsp, 8
 * 000000014016C962: call    loc_14016C955
 * 000000014016C967: add     rsp, 8
 * 000000014016C96B: call    loc_14016C95E
 * 000000014016C970: add     rsp, 8
 * 000000014016C974: call    loc_14016C967
 * 000000014016C979: add     rsp, 8
 * 000000014016C97D: call    loc_14016C970
 * 000000014016C982: add     rsp, 8
 * 000000014016C986: call    loc_14016C979
 * 000000014016C98B: add     rsp, 8
 * 000000014016C98F: call    loc_14016C982
 * 000000014016C994: add     rsp, 8
 * 000000014016C998: call    loc_14016C98B
 * 000000014016C99D: add     rsp, 8
 * 000000014016C9A1: call    loc_14016C994
 * 000000014016C9A6: add     rsp, 8
 * 000000014016C9AA: call    loc_14016C99D
 * 000000014016C9AF: add     rsp, 8
 * 000000014016C9B3: call    loc_14016C9A6
 * 000000014016C9B8: add     rsp, 8
 * 000000014016C9BC: call    loc_14016C9AF
 * 000000014016C9C1: add     rsp, 8
 * 000000014016C9C5: call    loc_14016C9B8
 * 000000014016C9CA: add     rsp, 8
 * 000000014016C9CE: call    loc_14016C9C1
 * 000000014016C9D3: add     rsp, 8
 * 000000014016C9D7: mov     eax, 0DADAh
 * 000000014016C9DC: test    word ptr gs:2EB8h, 40h
 * 000000014016C9E7: jz      short loc_14016C9F5
 * 000000014016C9E9: xor     eax, eax
 * 000000014016C9EB: xor     edx, edx
 * 000000014016C9ED: mov     ecx, 1
 * 000000014016C9F2: div     rcx
 * 000000014016C9F5: mov     rdx, [rbp+0D8h+var_118]
 * 000000014016C9F9: mov     rcx, [rbp+0D8h+var_120]
 * 000000014016C9FD: mov     rax, [rbp+0D8h+var_128]
 * 000000014016CA01: mov     rsp, rbp
 * 000000014016CA04: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014016CA0B: add     rsp, 0E8h
 * 000000014016CA12: test    cs:KiKvaShadow, 1
 * 000000014016CA19: jz      short loc_14016CA20
 * 000000014016CA1B: jmp     KiKernelExit
 * 000000014016CA20: test    word ptr gs:2EB8h, 80h
 * 000000014016CA2B: jz      short loc_14016CA32
 * 000000014016CA2D: verw    [rsp-10h+arg_20]
 * 000000014016CA32: swapgs
 * 000000014016CA35: iretq
 * 000000014016CA37: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014016CA3B: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014016CA3F: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014016CA43: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014016CA47: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014016CA4B: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014016CA4F: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014016CA53: mov     r11, [rbp+0D8h+var_F8]
 * 000000014016CA57: mov     r10, [rbp+0D8h+var_100]
 * 000000014016CA5B: mov     r9, [rbp+0D8h+var_108]
 * 000000014016CA5F: mov     r8, [rbp+0D8h+var_110]
 * 000000014016CA63: mov     rdx, [rbp+0D8h+var_118]
 * 000000014016CA67: mov     rcx, [rbp+0D8h+var_120]
 * 000000014016CA6B: mov     rax, [rbp+0D8h+var_128]
 * 000000014016CA6F: mov     rsp, rbp
 * 000000014016CA72: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014016CA79: add     rsp, 0E8h
 * 000000014016CA80: iretq
 */
