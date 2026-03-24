/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0004C64
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C0021C44 (LinkNodeCrackPrt.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00286B8 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0080CBC (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C009DEA4 (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A92B8 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0004C64
 * Reason: Hex-Rays returned no pseudocode for 0x1C0004C64
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0004C64: mov     rax, rsp
 * 00000001C0004C67: mov     [rax+10h], rbx
 * 00000001C0004C6B: mov     [rax+18h], rbp
 * 00000001C0004C6F: mov     [rax+20h], rsi
 * 00000001C0004C73: mov     [rax+8], rcx
 * 00000001C0004C77: push    rdi
 * 00000001C0004C78: push    r12
 * 00000001C0004C7A: push    r13
 * 00000001C0004C7C: push    r14
 * 00000001C0004C7E: push    r15
 * 00000001C0004C80: sub     rsp, 40h
 * 00000001C0004C84: mov     r14, cs:WPP_GLOBAL_Control
 * 00000001C0004C8B: lea     rbp, aNull_0; "NULL"
 * 00000001C0004C92: mov     rdi, [rsp+68h+arg_28]
 * 00000001C0004C9A: mov     r15b, dl
 * 00000001C0004C9D: mov     r13d, r8d
 * 00000001C0004CA0: movzx   r12d, r9w
 * 00000001C0004CA4: mov     esi, r8d
 * 00000001C0004CA7: shr     rsi, 10h
 * 00000001C0004CAB: lea     ebx, [r13-1]
 * 00000001C0004CAF: mov     r10d, ebx
 * 00000001C0004CB2: and     ebx, 1Fh
 * 00000001C0004CB5: shr     r10, 5
 * 00000001C0004CB9: lea     rax, [rsi+rsi*4]
 * 00000001C0004CBD: and     r10d, 7FFh
 * 00000001C0004CC4: mov     edx, ebx
 * 00000001C0004CC6: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0004CCA: lea     r11, [r10+rax*4]
 * 00000001C0004CCE: mov     eax, [r14+r11*4+2Ch]
 * 00000001C0004CD3: bt      eax, edx
 * 00000001C0004CD6: jb      loc_1C003B50E
 * 00000001C0004CDC: test    rdi, rdi
 * 00000001C0004CDF: jz      loc_1C003B582
 * 00000001C0004CE5: inc     rbx
 * 00000001C0004CE8: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0004CEC: jnz     short loc_1C0004CE5
 * 00000001C0004CEE: inc     rbx
 * 00000001C0004CF1: mov     r9, [rsp+68h+arg_20]
 * 00000001C0004CF9: test    rdi, rdi
 * 00000001C0004CFC: mov     r8d, r13d
 * 00000001C0004CFF: movzx   edx, r15b
 * 00000001C0004D03: cmovnz  rbp, rdi
 * 00000001C0004D07: and     [rsp+68h+var_30], 0
 * 00000001C0004D0D: mov     [rsp+68h+var_38], rbx
 * 00000001C0004D12: mov     [rsp+68h+var_40], rbp
 * 00000001C0004D17: mov     word ptr [rsp+68h+var_48], r12w
 * 00000001C0004D1D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0004D23: lea     r11, [rsp+68h+var_28]
 * 00000001C0004D28: mov     rbx, [r11+38h]
 * 00000001C0004D2C: mov     rbp, [r11+40h]
 * 00000001C0004D30: mov     rsi, [r11+48h]
 * 00000001C0004D34: mov     rsp, r11
 * 00000001C0004D37: pop     r15
 * 00000001C0004D39: pop     r14
 * 00000001C0004D3B: pop     r13
 * 00000001C0004D3D: pop     r12
 * 00000001C0004D3F: pop     rdi
 * 00000001C0004D40: retn
 * 00000001C003B50E: lea     r10, [rsi+rsi*4]
 * 00000001C003B512: add     r10, r10
 * 00000001C003B515: cmp     [r14+r10*8+29h], r15b
 * 00000001C003B51A: jb      loc_1C0004CDC
 * 00000001C003B520: test    rdi, rdi
 * 00000001C003B523: jz      short loc_1C003B536
 * 00000001C003B525: mov     rdx, rbx
 * 00000001C003B528: inc     rdx
 * 00000001C003B52B: cmp     byte ptr [rdi+rdx], 0
 * 00000001C003B52F: jnz     short loc_1C003B528
 * 00000001C003B531: inc     rdx
 * 00000001C003B534: jmp     short loc_1C003B53B
 * 00000001C003B536: mov     edx, 5
 * 00000001C003B53B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003B542: test    rdi, rdi
 * 00000001C003B545: mov     r8, [rsp+68h+arg_20]
 * 00000001C003B54D: mov     rcx, rbp
 * 00000001C003B550: cmovnz  rcx, rdi
 * 00000001C003B554: movzx   r9d, r12w
 * 00000001C003B558: and     [rsp+68h+var_38], 0
 * 00000001C003B55E: mov     [rsp+68h+var_40], rdx
 * 00000001C003B563: mov     edx, 2Bh ; '+'
 * 00000001C003B568: mov     [rsp+68h+var_48], rcx
 * 00000001C003B56D: mov     rcx, [r14+r10*8+18h]
 * 00000001C003B572: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003B578: mov     rcx, [rsp+68h+arg_0]
 * 00000001C003B57D: jmp     loc_1C0004CDC
 * 00000001C003B582: mov     ebx, 5
 * 00000001C003B587: jmp     loc_1C0004CF1
 */
