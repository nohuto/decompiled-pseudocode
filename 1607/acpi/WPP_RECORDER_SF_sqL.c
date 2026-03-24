/*
 * XREFs of WPP_RECORDER_SF_sqL @ 0x1C004B774
 * Callers:
 *     ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C004ACE8 (ACPIIsPhase3ListEmptyOfUnblockedItems.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C008FCB0 (ACPIInternalNotifyAvailableDeviceObject.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sqL @ 0x1C004B774
 * Reason: Hex-Rays returned no pseudocode for 0x1C004B774
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004B774: mov     rax, rsp
 * 00000001C004B777: mov     [rax+10h], rbx
 * 00000001C004B77B: mov     [rax+18h], rbp
 * 00000001C004B77F: mov     [rax+20h], rsi
 * 00000001C004B783: mov     [rax+8], rcx
 * 00000001C004B787: push    rdi
 * 00000001C004B788: push    r12
 * 00000001C004B78A: push    r13
 * 00000001C004B78C: push    r14
 * 00000001C004B78E: push    r15
 * 00000001C004B790: sub     rsp, 60h
 * 00000001C004B794: mov     r14, cs:WPP_GLOBAL_Control
 * 00000001C004B79B: lea     rbp, aNull_0; "NULL"
 * 00000001C004B7A2: mov     rdi, [rsp+88h+arg_28]
 * 00000001C004B7AA: mov     r15b, dl
 * 00000001C004B7AD: mov     r13d, r8d
 * 00000001C004B7B0: movzx   r12d, r9w
 * 00000001C004B7B4: mov     esi, r8d
 * 00000001C004B7B7: shr     rsi, 10h
 * 00000001C004B7BB: lea     ebx, [r13-1]
 * 00000001C004B7BF: mov     r10d, ebx
 * 00000001C004B7C2: and     ebx, 1Fh
 * 00000001C004B7C5: shr     r10, 5
 * 00000001C004B7C9: lea     rax, [rsi+rsi*4]
 * 00000001C004B7CD: and     r10d, 7FFh
 * 00000001C004B7D4: mov     edx, ebx
 * 00000001C004B7D6: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004B7DA: lea     r11, [r10+rax*4]
 * 00000001C004B7DE: mov     eax, [r14+r11*4+2Ch]
 * 00000001C004B7E3: bt      eax, edx
 * 00000001C004B7E6: jnb     loc_1C004B88A
 * 00000001C004B7EC: lea     r10, [rsi+rsi*4]
 * 00000001C004B7F0: add     r10, r10
 * 00000001C004B7F3: cmp     [r14+r10*8+29h], r15b
 * 00000001C004B7F8: jb      loc_1C004B88A
 * 00000001C004B7FE: test    rdi, rdi
 * 00000001C004B801: jz      short loc_1C004B814
 * 00000001C004B803: mov     rdx, rbx
 * 00000001C004B806: inc     rdx
 * 00000001C004B809: cmp     byte ptr [rdi+rdx], 0
 * 00000001C004B80D: jnz     short loc_1C004B806
 * 00000001C004B80F: inc     rdx
 * 00000001C004B812: jmp     short loc_1C004B819
 * 00000001C004B814: mov     edx, 5
 * 00000001C004B819: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004B820: lea     r8, [rsp+88h+arg_38]
 * 00000001C004B828: test    rdi, rdi
 * 00000001C004B82B: movzx   r9d, r12w
 * 00000001C004B82F: mov     rcx, rbp
 * 00000001C004B832: cmovnz  rcx, rdi
 * 00000001C004B836: and     [rsp+88h+var_38], 0
 * 00000001C004B83C: mov     [rsp+88h+var_40], 4
 * 00000001C004B845: mov     [rsp+88h+var_48], r8
 * 00000001C004B84A: lea     r8, [rsp+88h+arg_30]
 * 00000001C004B852: mov     [rsp+88h+var_50], 8
 * 00000001C004B85B: mov     [rsp+88h+var_58], r8
 * 00000001C004B860: mov     r8, [rsp+88h+arg_20]
 * 00000001C004B868: mov     [rsp+88h+var_60], rdx
 * 00000001C004B86D: mov     edx, 2Bh ; '+'
 * 00000001C004B872: mov     [rsp+88h+var_68], rcx
 * 00000001C004B877: mov     rcx, [r14+r10*8+18h]
 * 00000001C004B87C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004B882: mov     rcx, [rsp+88h+arg_0]
 * 00000001C004B88A: test    rdi, rdi
 * 00000001C004B88D: jz      short loc_1C004B89D
 * 00000001C004B88F: inc     rbx
 * 00000001C004B892: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004B896: jnz     short loc_1C004B88F
 * 00000001C004B898: inc     rbx
 * 00000001C004B89B: jmp     short loc_1C004B8A2
 * 00000001C004B89D: mov     ebx, 5
 * 00000001C004B8A2: mov     r9, [rsp+88h+arg_20]
 * 00000001C004B8AA: lea     rax, [rsp+88h+arg_38]
 * 00000001C004B8B2: test    rdi, rdi
 * 00000001C004B8B5: movzx   edx, r15b
 * 00000001C004B8B9: mov     r8d, r13d
 * 00000001C004B8BC: cmovnz  rbp, rdi
 * 00000001C004B8C0: and     [rsp+88h+var_30], 0
 * 00000001C004B8C6: mov     [rsp+88h+var_38], 4
 * 00000001C004B8CF: mov     [rsp+88h+var_40], rax
 * 00000001C004B8D4: lea     rax, [rsp+88h+arg_30]
 * 00000001C004B8DC: mov     [rsp+88h+var_48], 8
 * 00000001C004B8E5: mov     [rsp+88h+var_50], rax
 * 00000001C004B8EA: mov     [rsp+88h+var_58], rbx
 * 00000001C004B8EF: mov     [rsp+88h+var_60], rbp
 * 00000001C004B8F4: mov     word ptr [rsp+88h+var_68], r12w
 * 00000001C004B8FA: call    cs:__imp_WppAutoLogTrace
 * 00000001C004B900: lea     r11, [rsp+88h+var_28]
 * 00000001C004B905: mov     rbx, [r11+38h]
 * 00000001C004B909: mov     rbp, [r11+40h]
 * 00000001C004B90D: mov     rsi, [r11+48h]
 * 00000001C004B911: mov     rsp, r11
 * 00000001C004B914: pop     r15
 * 00000001C004B916: pop     r14
 * 00000001C004B918: pop     r13
 * 00000001C004B91A: pop     r12
 * 00000001C004B91C: pop     rdi
 * 00000001C004B91D: retn
 */
