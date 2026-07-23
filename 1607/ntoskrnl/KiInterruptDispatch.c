/*
 * XREFs of KiInterruptDispatch @ 0x14015F800
 * Callers:
 *     <none>
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400C6FF0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt_0 @ 0x1401596F0 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x14015F4A0 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x14015F800 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140165B00 (KiDpcInterruptBypass.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x14015F800
 * Reason: Hex-Rays returned no pseudocode for 0x14015F800
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015F800: mov     rdx, rsp
 * 000000014015F803: mov     rcx, gs:6498h
 * 000000014015F80C: lea     rax, [rcx-6000h]
 * 000000014015F813: cmp     rax, rsp
 * 000000014015F816: ja      short loc_14015F81D
 * 000000014015F818: cmp     rsp, rcx
 * 000000014015F81B: jb      short loc_14015F829
 * 000000014015F81D: cmp     cs:KiBugCheckActive, 0
 * 000000014015F824: jnz     short loc_14015F829
 * 000000014015F826: mov     rsp, rcx
 * 000000014015F829: sub     rsp, 20h
 * 000000014015F82D: mov     [rsp+20h+var_10], rdx
 * 000000014015F832: call    KiInterruptSubDispatch
 * 000000014015F837: mov     rsp, [rsp+20h+var_10]
 * 000000014015F83C: mov     rcx, rsi
 * 000000014015F83F: call    HalPerformEndOfInterrupt_0
 * 000000014015F844: mov     rcx, gs:20h
 * 000000014015F84D: cmp     byte ptr [rcx+20h], 1
 * 000000014015F851: ja      short loc_14015F8C7
 * 000000014015F853: rdtsc
 * 000000014015F855: shl     rdx, 20h
 * 000000014015F859: or      rax, rdx
 * 000000014015F85C: sub     rax, [rcx+5B38h]
 * 000000014015F863: add     [rcx+5BF8h], rax
 * 000000014015F86A: add     [rcx+5B38h], rax
 * 000000014015F871: mov     r8, rax
 * 000000014015F874: mov     rax, [rcx+8]
 * 000000014015F878: test    byte ptr [rax+2], 32h
 * 000000014015F87C: jz      short loc_14015F891
 * 000000014015F87E: xor     edx, edx
 * 000000014015F880: call    KiBeginThreadAccountingPeriod
 * 000000014015F885: mov     rcx, gs:20h
 * 000000014015F88E: inc     byte ptr [rcx+20h]
 * 000000014015F891: mov     dl, [rcx+6]
 * 000000014015F894: and     byte ptr [rcx+6], 0
 * 000000014015F898: cmp     byte ptr [rcx+7], 0
 * 000000014015F89C: jnz     short loc_14015F8C7
 * 000000014015F89E: test    dl, dl
 * 000000014015F8A0: jz      short loc_14015F8C7
 * 000000014015F8A2: cmp     byte ptr [rbp-57h], 2
 * 000000014015F8A6: jnb     short loc_14015F8B3
 * 000000014015F8A8: and     byte ptr [rcx+20h], 0
 * 000000014015F8AC: call    KiDpcInterruptBypass
 * 000000014015F8B1: jmp     short loc_14015F8CA
 * 000000014015F8B3: mov     ecx, 2
 * 000000014015F8B8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014015F8BE: mov     rcx, gs:20h
 * 000000014015F8C7: dec     byte ptr [rcx+20h]
 * 000000014015F8CA: movzx   ecx, byte ptr [rbp-57h]
 * 000000014015F8CE: mov     cr8, rcx
 * 000000014015F8D2: mov     rsi, [rbp+0D0h]
 * 000000014015F8D9: test    byte ptr [rbp+0F0h], 1
 * 000000014015F8E0: jz      loc_14015FB59
 * 000000014015F8E6: mov     rcx, gs:188h
 * 000000014015F8EF: cmp     byte ptr [rcx+0C2h], 0
 * 000000014015F8F6: jz      short loc_14015F911
 * 000000014015F8F8: mov     ecx, 1
 * 000000014015F8FD: mov     cr8, rcx
 * 000000014015F901: sti
 * 000000014015F902: call    KiInitiateUserApc
 * 000000014015F907: cli
 * 000000014015F908: mov     ecx, 0
 * 000000014015F90D: mov     cr8, rcx
 * 000000014015F911: mov     rcx, gs:188h
 * 000000014015F91A: test    dword ptr [rcx], 8000000h
 * 000000014015F920: jz      short loc_14015F927
 * 000000014015F922: call    KiRestoreSetContextState
 * 000000014015F927: mov     rcx, gs:188h
 * 000000014015F930: test    dword ptr [rcx], 40010000h
 * 000000014015F936: jz      short loc_14015F94C
 * 000000014015F938: test    byte ptr [rcx+2], 1
 * 000000014015F93C: jz      short loc_14015F94C
 * 000000014015F93E: call    KiCopyCounters
 * 000000014015F943: mov     rcx, gs:188h
 * 000000014015F94C: ldmxcsr dword ptr [rbp-54h]
 * 000000014015F950: cmp     word ptr [rbp+80h], 0
 * 000000014015F958: jz      short loc_14015F95F
 * 000000014015F95A: call    KiRestoreDebugRegisterState
 * 000000014015F95F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015F963: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015F967: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015F96B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015F96F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015F973: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015F977: mov     r11, [rbp-20h]
 * 000000014015F97B: mov     r10, [rbp-28h]
 * 000000014015F97F: mov     r9, [rbp-30h]
 * 000000014015F983: mov     r8, [rbp-38h]
 * 000000014015F987: movzx   eax, word ptr gs:2EC2h
 * 000000014015F990: cmp     gs:2EBCh, ax
 * 000000014015F999: jz      short loc_14015F9AD
 * 000000014015F99B: mov     gs:2EBCh, ax
 * 000000014015F9A4: mov     ecx, 48h ; 'H'
 * 000000014015F9A9: xor     edx, edx
 * 000000014015F9AB: wrmsr
 * 000000014015F9AD: btr     word ptr gs:2EB8h, 2
 * 000000014015F9B8: jnb     short loc_14015F9C8
 * 000000014015F9BA: mov     eax, 1
 * 000000014015F9BF: xor     edx, edx
 * 000000014015F9C1: mov     ecx, 49h ; 'I'
 * 000000014015F9C6: wrmsr
 * 000000014015F9C8: btr     word ptr gs:2EB8h, 5
 * 000000014015F9D3: jnb     loc_14015FAFE
 * 000000014015F9D9: call    loc_14015FAEC
 * 000000014015F9DE: add     rsp, 8
 * 000000014015F9E2: call    loc_14015FAF5
 * 000000014015F9E7: add     rsp, 8
 * 000000014015F9EB: call    loc_14015F9DE
 * 000000014015F9F0: add     rsp, 8
 * 000000014015F9F4: call    loc_14015F9E7
 * 000000014015F9F9: add     rsp, 8
 * 000000014015F9FD: call    loc_14015F9F0
 * 000000014015FA02: add     rsp, 8
 * 000000014015FA06: call    loc_14015F9F9
 * 000000014015FA0B: add     rsp, 8
 * 000000014015FA0F: call    loc_14015FA02
 * 000000014015FA14: add     rsp, 8
 * 000000014015FA18: call    loc_14015FA0B
 * 000000014015FA1D: add     rsp, 8
 * 000000014015FA21: call    loc_14015FA14
 * 000000014015FA26: add     rsp, 8
 * 000000014015FA2A: call    loc_14015FA1D
 * 000000014015FA2F: add     rsp, 8
 * 000000014015FA33: call    loc_14015FA26
 * 000000014015FA38: add     rsp, 8
 * 000000014015FA3C: call    loc_14015FA2F
 * 000000014015FA41: add     rsp, 8
 * 000000014015FA45: call    loc_14015FA38
 * 000000014015FA4A: add     rsp, 8
 * 000000014015FA4E: call    loc_14015FA41
 * 000000014015FA53: add     rsp, 8
 * 000000014015FA57: call    loc_14015FA4A
 * 000000014015FA5C: add     rsp, 8
 * 000000014015FA60: call    loc_14015FA53
 * 000000014015FA65: add     rsp, 8
 * 000000014015FA69: call    loc_14015FA5C
 * 000000014015FA6E: add     rsp, 8
 * 000000014015FA72: call    loc_14015FA65
 * 000000014015FA77: add     rsp, 8
 * 000000014015FA7B: call    loc_14015FA6E
 * 000000014015FA80: add     rsp, 8
 * 000000014015FA84: call    loc_14015FA77
 * 000000014015FA89: add     rsp, 8
 * 000000014015FA8D: call    loc_14015FA80
 * 000000014015FA92: add     rsp, 8
 * 000000014015FA96: call    loc_14015FA89
 * 000000014015FA9B: add     rsp, 8
 * 000000014015FA9F: call    loc_14015FA92
 * 000000014015FAA4: add     rsp, 8
 * 000000014015FAA8: call    loc_14015FA9B
 * 000000014015FAAD: add     rsp, 8
 * 000000014015FAB1: call    loc_14015FAA4
 * 000000014015FAB6: add     rsp, 8
 * 000000014015FABA: call    loc_14015FAAD
 * 000000014015FABF: add     rsp, 8
 * 000000014015FAC3: call    loc_14015FAB6
 * 000000014015FAC8: add     rsp, 8
 * 000000014015FACC: call    loc_14015FABF
 * 000000014015FAD1: add     rsp, 8
 * 000000014015FAD5: call    loc_14015FAC8
 * 000000014015FADA: add     rsp, 8
 * 000000014015FADE: call    loc_14015FAD1
 * 000000014015FAE3: add     rsp, 8
 * 000000014015FAE7: call    loc_14015FADA
 * 000000014015FAEC: add     rsp, 8
 * 000000014015FAF0: call    loc_14015FAE3
 * 000000014015FAF5: add     rsp, 8
 * 000000014015FAF9: mov     eax, 0DADAh
 * 000000014015FAFE: test    word ptr gs:2EB8h, 40h
 * 000000014015FB09: jz      short loc_14015FB17
 * 000000014015FB0B: xor     eax, eax
 * 000000014015FB0D: xor     edx, edx
 * 000000014015FB0F: mov     ecx, 1
 * 000000014015FB14: div     rcx
 * 000000014015FB17: mov     rdx, [rbp-40h]
 * 000000014015FB1B: mov     rcx, [rbp-48h]
 * 000000014015FB1F: mov     rax, [rbp-50h]
 * 000000014015FB23: mov     rsp, rbp
 * 000000014015FB26: mov     rbp, [rbp+0D8h]
 * 000000014015FB2D: add     rsp, 0E8h
 * 000000014015FB34: test    cs:KiKvaShadow, 1
 * 000000014015FB3B: jz      short loc_14015FB42
 * 000000014015FB3D: jmp     KiKernelExit
 * 000000014015FB42: test    word ptr gs:2EB8h, 80h
 * 000000014015FB4D: jz      short loc_14015FB54
 * 000000014015FB4F: verw    [rsp-1C8h+arg_1E0]
 * 000000014015FB54: swapgs
 * 000000014015FB57: iretq
 * 000000014015FB59: ldmxcsr dword ptr [rbp-54h]
 * 000000014015FB5D: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014015FB61: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014015FB65: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014015FB69: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014015FB6D: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014015FB71: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014015FB75: mov     r11, [rbp-20h]
 * 000000014015FB79: mov     r10, [rbp-28h]
 * 000000014015FB7D: mov     r9, [rbp-30h]
 * 000000014015FB81: mov     r8, [rbp-38h]
 * 000000014015FB85: mov     rdx, [rbp-40h]
 * 000000014015FB89: mov     rcx, [rbp-48h]
 * 000000014015FB8D: mov     rax, [rbp-50h]
 * 000000014015FB91: mov     rsp, rbp
 * 000000014015FB94: mov     rbp, [rbp+0D8h]
 * 000000014015FB9B: add     rsp, 0E8h
 * 000000014015FBA2: iretq
 */
