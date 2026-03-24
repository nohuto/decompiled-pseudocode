/*
 * XREFs of KiInterruptDispatchNoLock @ 0x14015F640
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400C9150 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x140159180 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x14015F060 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoLock @ 0x14015F640 (KiInterruptDispatchNoLock.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165590 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoLock @ 0x14015F640
 * Reason: Hex-Rays returned no pseudocode for 0x14015F640
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015F640: mov     rdx, rsp
 * 000000014015F643: mov     rcx, gs:6498h
 * 000000014015F64C: lea     rax, [rcx-6000h]
 * 000000014015F653: cmp     rax, rsp
 * 000000014015F656: ja      short loc_14015F65D
 * 000000014015F658: cmp     rsp, rcx
 * 000000014015F65B: jb      short loc_14015F669
 * 000000014015F65D: cmp     cs:KiBugCheckActive, 0
 * 000000014015F664: jnz     short loc_14015F669
 * 000000014015F666: mov     rsp, rcx
 * 000000014015F669: sub     rsp, 20h
 * 000000014015F66D: mov     [rsp+20h+var_10], rdx
 * 000000014015F672: call    KiInterruptSubDispatchNoLock
 * 000000014015F677: mov     rsp, [rsp+20h+var_10]
 * 000000014015F67C: mov     rcx, rsi
 * 000000014015F67F: call    HalPerformEndOfInterrupt_0
 * 000000014015F684: mov     rcx, gs:20h
 * 000000014015F68D: cmp     byte ptr [rcx+20h], 1
 * 000000014015F691: ja      short loc_14015F707
 * 000000014015F693: rdtsc
 * 000000014015F695: shl     rdx, 20h
 * 000000014015F699: or      rax, rdx
 * 000000014015F69C: sub     rax, [rcx+5B38h]
 * 000000014015F6A3: add     [rcx+5BF8h], rax
 * 000000014015F6AA: add     [rcx+5B38h], rax
 * 000000014015F6B1: mov     r8, rax
 * 000000014015F6B4: mov     rax, [rcx+8]
 * 000000014015F6B8: test    byte ptr [rax+2], 32h
 * 000000014015F6BC: jz      short loc_14015F6D1
 * 000000014015F6BE: xor     edx, edx
 * 000000014015F6C0: call    KiBeginThreadAccountingPeriod
 * 000000014015F6C5: mov     rcx, gs:20h
 * 000000014015F6CE: inc     byte ptr [rcx+20h]
 * 000000014015F6D1: mov     dl, [rcx+6]
 * 000000014015F6D4: and     byte ptr [rcx+6], 0
 * 000000014015F6D8: cmp     byte ptr [rcx+7], 0
 * 000000014015F6DC: jnz     short loc_14015F707
 * 000000014015F6DE: test    dl, dl
 * 000000014015F6E0: jz      short loc_14015F707
 * 000000014015F6E2: cmp     byte ptr [rbp-57h], 2
 * 000000014015F6E6: jnb     short loc_14015F6F3
 * 000000014015F6E8: and     byte ptr [rcx+20h], 0
 * 000000014015F6EC: call    KiDpcInterruptBypass
 * 000000014015F6F1: jmp     short loc_14015F70A
 * 000000014015F6F3: mov     ecx, 2
 * 000000014015F6F8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014015F6FE: mov     rcx, gs:20h
 * 000000014015F707: dec     byte ptr [rcx+20h]
 * 000000014015F70A: movzx   ecx, byte ptr [rbp-57h]
 * 000000014015F70E: mov     cr8, rcx
 * 000000014015F712: mov     rsi, [rbp+0D0h]
 * 000000014015F719: test    byte ptr [rbp+0F0h], 1
 * 000000014015F720: jz      loc_14015F999
 * 000000014015F726: mov     rcx, gs:188h
 * 000000014015F72F: cmp     byte ptr [rcx+0C2h], 0
 * 000000014015F736: jz      short loc_14015F751
 * 000000014015F738: mov     ecx, 1
 * 000000014015F73D: mov     cr8, rcx
 * 000000014015F741: sti
 * 000000014015F742: call    KiInitiateUserApc
 * 000000014015F747: cli
 * 000000014015F748: mov     ecx, 0
 * 000000014015F74D: mov     cr8, rcx
 * 000000014015F751: mov     rcx, gs:188h
 * 000000014015F75A: test    dword ptr [rcx], 8000000h
 * 000000014015F760: jz      short loc_14015F767
 * 000000014015F762: call    KiRestoreSetContextState
 * 000000014015F767: mov     rcx, gs:188h
 * 000000014015F770: test    dword ptr [rcx], 40010000h
 * 000000014015F776: jz      short loc_14015F78C
 * 000000014015F778: test    byte ptr [rcx+2], 1
 * 000000014015F77C: jz      short loc_14015F78C
 * 000000014015F77E: call    KiCopyCounters
 * 000000014015F783: mov     rcx, gs:188h
 * 000000014015F78C: ldmxcsr dword ptr [rbp-54h]
 * 000000014015F790: cmp     word ptr [rbp+80h], 0
 * 000000014015F798: jz      short loc_14015F79F
 * 000000014015F79A: call    KiRestoreDebugRegisterState
 * 000000014015F79F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015F7A3: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015F7A7: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015F7AB: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015F7AF: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015F7B3: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015F7B7: mov     r11, [rbp-20h]
 * 000000014015F7BB: mov     r10, [rbp-28h]
 * 000000014015F7BF: mov     r9, [rbp-30h]
 * 000000014015F7C3: mov     r8, [rbp-38h]
 * 000000014015F7C7: movzx   eax, word ptr gs:2EC2h
 * 000000014015F7D0: cmp     gs:2EBCh, ax
 * 000000014015F7D9: jz      short loc_14015F7ED
 * 000000014015F7DB: mov     gs:2EBCh, ax
 * 000000014015F7E4: mov     ecx, 48h ; 'H'
 * 000000014015F7E9: xor     edx, edx
 * 000000014015F7EB: wrmsr
 * 000000014015F7ED: btr     word ptr gs:2EB8h, 2
 * 000000014015F7F8: jnb     short loc_14015F808
 * 000000014015F7FA: mov     eax, 1
 * 000000014015F7FF: xor     edx, edx
 * 000000014015F801: mov     ecx, 49h ; 'I'
 * 000000014015F806: wrmsr
 * 000000014015F808: btr     word ptr gs:2EB8h, 5
 * 000000014015F813: jnb     loc_14015F93E
 * 000000014015F819: call    loc_14015F92C
 * 000000014015F81E: add     rsp, 8
 * 000000014015F822: call    loc_14015F935
 * 000000014015F827: add     rsp, 8
 * 000000014015F82B: call    loc_14015F81E
 * 000000014015F830: add     rsp, 8
 * 000000014015F834: call    loc_14015F827
 * 000000014015F839: add     rsp, 8
 * 000000014015F83D: call    loc_14015F830
 * 000000014015F842: add     rsp, 8
 * 000000014015F846: call    loc_14015F839
 * 000000014015F84B: add     rsp, 8
 * 000000014015F84F: call    loc_14015F842
 * 000000014015F854: add     rsp, 8
 * 000000014015F858: call    loc_14015F84B
 * 000000014015F85D: add     rsp, 8
 * 000000014015F861: call    loc_14015F854
 * 000000014015F866: add     rsp, 8
 * 000000014015F86A: call    loc_14015F85D
 * 000000014015F86F: add     rsp, 8
 * 000000014015F873: call    loc_14015F866
 * 000000014015F878: add     rsp, 8
 * 000000014015F87C: call    loc_14015F86F
 * 000000014015F881: add     rsp, 8
 * 000000014015F885: call    loc_14015F878
 * 000000014015F88A: add     rsp, 8
 * 000000014015F88E: call    loc_14015F881
 * 000000014015F893: add     rsp, 8
 * 000000014015F897: call    loc_14015F88A
 * 000000014015F89C: add     rsp, 8
 * 000000014015F8A0: call    loc_14015F893
 * 000000014015F8A5: add     rsp, 8
 * 000000014015F8A9: call    loc_14015F89C
 * 000000014015F8AE: add     rsp, 8
 * 000000014015F8B2: call    loc_14015F8A5
 * 000000014015F8B7: add     rsp, 8
 * 000000014015F8BB: call    loc_14015F8AE
 * 000000014015F8C0: add     rsp, 8
 * 000000014015F8C4: call    loc_14015F8B7
 * 000000014015F8C9: add     rsp, 8
 * 000000014015F8CD: call    loc_14015F8C0
 * 000000014015F8D2: add     rsp, 8
 * 000000014015F8D6: call    loc_14015F8C9
 * 000000014015F8DB: add     rsp, 8
 * 000000014015F8DF: call    loc_14015F8D2
 * 000000014015F8E4: add     rsp, 8
 * 000000014015F8E8: call    loc_14015F8DB
 * 000000014015F8ED: add     rsp, 8
 * 000000014015F8F1: call    loc_14015F8E4
 * 000000014015F8F6: add     rsp, 8
 * 000000014015F8FA: call    loc_14015F8ED
 * 000000014015F8FF: add     rsp, 8
 * 000000014015F903: call    loc_14015F8F6
 * 000000014015F908: add     rsp, 8
 * 000000014015F90C: call    loc_14015F8FF
 * 000000014015F911: add     rsp, 8
 * 000000014015F915: call    loc_14015F908
 * 000000014015F91A: add     rsp, 8
 * 000000014015F91E: call    loc_14015F911
 * 000000014015F923: add     rsp, 8
 * 000000014015F927: call    loc_14015F91A
 * 000000014015F92C: add     rsp, 8
 * 000000014015F930: call    loc_14015F923
 * 000000014015F935: add     rsp, 8
 * 000000014015F939: mov     eax, 0DADAh
 * 000000014015F93E: test    word ptr gs:2EB8h, 40h
 * 000000014015F949: jz      short loc_14015F957
 * 000000014015F94B: xor     eax, eax
 * 000000014015F94D: xor     edx, edx
 * 000000014015F94F: mov     ecx, 1
 * 000000014015F954: div     rcx
 * 000000014015F957: mov     rdx, [rbp-40h]
 * 000000014015F95B: mov     rcx, [rbp-48h]
 * 000000014015F95F: mov     rax, [rbp-50h]
 * 000000014015F963: mov     rsp, rbp
 * 000000014015F966: mov     rbp, [rbp+0D8h]
 * 000000014015F96D: add     rsp, 0E8h
 * 000000014015F974: test    cs:KiKvaShadow, 1
 * 000000014015F97B: jz      short loc_14015F982
 * 000000014015F97D: jmp     KiKernelExit
 * 000000014015F982: test    word ptr gs:2EB8h, 80h
 * 000000014015F98D: jz      short loc_14015F994
 * 000000014015F98F: verw    [rsp-1C8h+arg_1E0]
 * 000000014015F994: swapgs
 * 000000014015F997: iretq
 * 000000014015F999: ldmxcsr dword ptr [rbp-54h]
 * 000000014015F99D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015F9A1: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015F9A5: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015F9A9: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015F9AD: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015F9B1: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015F9B5: mov     r11, [rbp-20h]
 * 000000014015F9B9: mov     r10, [rbp-28h]
 * 000000014015F9BD: mov     r9, [rbp-30h]
 * 000000014015F9C1: mov     r8, [rbp-38h]
 * 000000014015F9C5: mov     rdx, [rbp-40h]
 * 000000014015F9C9: mov     rcx, [rbp-48h]
 * 000000014015F9CD: mov     rax, [rbp-50h]
 * 000000014015F9D1: mov     rsp, rbp
 * 000000014015F9D4: mov     rbp, [rbp+0D8h]
 * 000000014015F9DB: add     rsp, 0E8h
 * 000000014015F9E2: iretq
 */
