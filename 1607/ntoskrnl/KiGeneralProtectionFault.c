/*
 * XREFs of KiGeneralProtectionFault @ 0x14016C540
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x14023F680 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x14016C540 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x14016C540
 * Reason: Hex-Rays returned no pseudocode for 0x14016C540
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016C540: push    rbp
 * 000000014016C541: sub     rsp, 158h
 * 000000014016C548: lea     rbp, [rsp+80h]
 * 000000014016C550: mov     [rbp+0D8h+var_12D], 1
 * 000000014016C554: mov     [rbp+0D8h+var_128], rax
 * 000000014016C558: mov     [rbp+0D8h+var_120], rcx
 * 000000014016C55C: mov     [rbp+0D8h+var_118], rdx
 * 000000014016C560: mov     [rbp+0D8h+var_110], r8
 * 000000014016C564: mov     [rbp+0D8h+var_108], r9
 * 000000014016C568: mov     [rbp+0D8h+var_100], r10
 * 000000014016C56C: mov     [rbp+0D8h+var_F8], r11
 * 000000014016C570: test    [rbp+0D8h+arg_8], 1
 * 000000014016C577: jnz     short loc_14016C5A8
 * 000000014016C579: lfence
 * 000000014016C57C: test    word ptr gs:2EB8h, 1
 * 000000014016C587: jnz     short loc_14016C591
 * 000000014016C589: lfence
 * 000000014016C58C: jmp     loc_14016C7CD
 * 000000014016C591: movzx   eax, word ptr gs:2EBCh
 * 000000014016C59A: mov     ecx, 48h ; 'H'
 * 000000014016C59F: xor     edx, edx
 * 000000014016C5A1: wrmsr
 * 000000014016C5A3: jmp     loc_14016C7CD
 * 000000014016C5A8: test    cs:KiKvaShadow, 1
 * 000000014016C5AF: jnz     short loc_14016C5B4
 * 000000014016C5B1: swapgs
 * 000000014016C5B4: lfence
 * 000000014016C5B7: mov     r10, gs:188h
 * 000000014016C5C0: mov     rcx, gs:188h
 * 000000014016C5C9: mov     rcx, [rcx+220h]
 * 000000014016C5D0: mov     rcx, [rcx+7B8h]
 * 000000014016C5D7: mov     gs:2EB0h, rcx
 * 000000014016C5E0: movzx   eax, word ptr gs:2EBEh
 * 000000014016C5E9: cmp     gs:2EBCh, ax
 * 000000014016C5F2: jz      short loc_14016C606
 * 000000014016C5F4: mov     gs:2EBCh, ax
 * 000000014016C5FD: mov     ecx, 48h ; 'H'
 * 000000014016C602: xor     edx, edx
 * 000000014016C604: wrmsr
 * 000000014016C606: movzx   edx, word ptr gs:2EB8h
 * 000000014016C60F: test    edx, 8
 * 000000014016C615: jz      short loc_14016C62E
 * 000000014016C617: mov     eax, 1
 * 000000014016C61C: xor     edx, edx
 * 000000014016C61E: mov     ecx, 49h ; 'I'
 * 000000014016C623: wrmsr
 * 000000014016C625: movzx   edx, word ptr gs:2EB8h
 * 000000014016C62E: test    edx, 2
 * 000000014016C634: jz      loc_14016C75F
 * 000000014016C63A: call    loc_14016C74D
 * 000000014016C63F: add     rsp, 8
 * 000000014016C643: call    loc_14016C756
 * 000000014016C648: add     rsp, 8
 * 000000014016C64C: call    loc_14016C63F
 * 000000014016C651: add     rsp, 8
 * 000000014016C655: call    loc_14016C648
 * 000000014016C65A: add     rsp, 8
 * 000000014016C65E: call    loc_14016C651
 * 000000014016C663: add     rsp, 8
 * 000000014016C667: call    loc_14016C65A
 * 000000014016C66C: add     rsp, 8
 * 000000014016C670: call    loc_14016C663
 * 000000014016C675: add     rsp, 8
 * 000000014016C679: call    loc_14016C66C
 * 000000014016C67E: add     rsp, 8
 * 000000014016C682: call    loc_14016C675
 * 000000014016C687: add     rsp, 8
 * 000000014016C68B: call    loc_14016C67E
 * 000000014016C690: add     rsp, 8
 * 000000014016C694: call    loc_14016C687
 * 000000014016C699: add     rsp, 8
 * 000000014016C69D: call    loc_14016C690
 * 000000014016C6A2: add     rsp, 8
 * 000000014016C6A6: call    loc_14016C699
 * 000000014016C6AB: add     rsp, 8
 * 000000014016C6AF: call    loc_14016C6A2
 * 000000014016C6B4: add     rsp, 8
 * 000000014016C6B8: call    loc_14016C6AB
 * 000000014016C6BD: add     rsp, 8
 * 000000014016C6C1: call    loc_14016C6B4
 * 000000014016C6C6: add     rsp, 8
 * 000000014016C6CA: call    loc_14016C6BD
 * 000000014016C6CF: add     rsp, 8
 * 000000014016C6D3: call    loc_14016C6C6
 * 000000014016C6D8: add     rsp, 8
 * 000000014016C6DC: call    loc_14016C6CF
 * 000000014016C6E1: add     rsp, 8
 * 000000014016C6E5: call    loc_14016C6D8
 * 000000014016C6EA: add     rsp, 8
 * 000000014016C6EE: call    loc_14016C6E1
 * 000000014016C6F3: add     rsp, 8
 * 000000014016C6F7: call    loc_14016C6EA
 * 000000014016C6FC: add     rsp, 8
 * 000000014016C700: call    loc_14016C6F3
 * 000000014016C705: add     rsp, 8
 * 000000014016C709: call    loc_14016C6FC
 * 000000014016C70E: add     rsp, 8
 * 000000014016C712: call    loc_14016C705
 * 000000014016C717: add     rsp, 8
 * 000000014016C71B: call    loc_14016C70E
 * 000000014016C720: add     rsp, 8
 * 000000014016C724: call    loc_14016C717
 * 000000014016C729: add     rsp, 8
 * 000000014016C72D: call    loc_14016C720
 * 000000014016C732: add     rsp, 8
 * 000000014016C736: call    loc_14016C729
 * 000000014016C73B: add     rsp, 8
 * 000000014016C73F: call    loc_14016C732
 * 000000014016C744: add     rsp, 8
 * 000000014016C748: call    loc_14016C73B
 * 000000014016C74D: add     rsp, 8
 * 000000014016C751: call    loc_14016C744
 * 000000014016C756: add     rsp, 8
 * 000000014016C75A: mov     eax, 0DADAh
 * 000000014016C75F: test    edx, 100h
 * 000000014016C765: jz      short loc_14016C76C
 * 000000014016C767: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016C76C: lfence
 * 000000014016C76F: test    byte ptr [r10+3], 80h
 * 000000014016C774: jz      short loc_14016C7B8
 * 000000014016C776: mov     ecx, 0C0000102h
 * 000000014016C77B: rdmsr
 * 000000014016C77D: shl     rdx, 20h
 * 000000014016C781: or      rax, rdx
 * 000000014016C784: cmp     rax, cs:MmUserProbeAddress
 * 000000014016C78B: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016C793: cmp     [r10+0F0h], rax
 * 000000014016C79A: jz      short loc_14016C7B8
 * 000000014016C79C: mov     rdx, [r10+1F0h]
 * 000000014016C7A3: bts     dword ptr [r10+74h], 8
 * 000000014016C7A9: dec     word ptr [r10+1E6h]
 * 000000014016C7B1: mov     [rdx+80h], rax
 * 000000014016C7B8: test    byte ptr [r10+3], 3
 * 000000014016C7BD: mov     [rbp+0D8h+var_58], 0
 * 000000014016C7C6: jz      short loc_14016C7CD
 * 000000014016C7C8: call    KiSaveDebugRegisterState
 * 000000014016C7CD: cld
 * 000000014016C7CE: stmxcsr [rbp+0D8h+var_12C]
 * 000000014016C7D2: ldmxcsr dword ptr gs:180h
 * 000000014016C7DB: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014016C7DF: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014016C7E3: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014016C7E7: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014016C7EB: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014016C7EF: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014016C7F3: mov     eax, [rbp+0E0h]
 * 000000014016C7F9: test    [rbp+0D8h+arg_10], 200h
 * 000000014016C803: jz      short loc_14016C806
 * 000000014016C805: sti
 * 000000014016C806: mov     ecx, 10000001h
 * 000000014016C80B: mov     edx, 2
 * 000000014016C810: mov     r9d, [rbp+0E0h]
 * 000000014016C817: and     r9d, 0FFFFh
 * 000000014016C81E: xor     r10, r10
 * 000000014016C821: mov     r8, [rbp+0D8h+arg_0]
 * 000000014016C828: call    KiExceptionDispatch
 * 000000014016C82D: nop
 * 000000014016C82E: retn
 */
