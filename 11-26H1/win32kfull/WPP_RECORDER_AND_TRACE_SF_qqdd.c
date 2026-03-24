/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x140099330
 * Callers:
 *     DoTimer @ 0x1400983E4 (DoTimer.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x140099110 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qqdd @ 0x140099330
 * Reason: Hex-Rays returned no pseudocode for 0x140099330
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140099330: mov     [rsp+arg_0], rbx
 * 0000000140099335: mov     [rsp+arg_8], rbp
 * 000000014009933A: push    rdi
 * 000000014009933B: sub     rsp, 70h
 * 000000014009933F: mov     rdi, r9
 * 0000000140099342: movzx   ebx, r8b
 * 0000000140099346: mov     ebp, 1Dh
 * 000000014009934B: test    dl, dl
 * 000000014009934D: jnz     loc_1400993F5
 * 0000000140099353: test    bl, bl
 * 0000000140099355: jz      loc_1400993E2
 * 000000014009935B: mov     [rsp+78h+var_10], 0
 * 0000000140099364: lea     rax, [rsp+78h+arg_58]
 * 000000014009936C: mov     [rsp+78h+var_18], 4
 * 0000000140099375: lea     r9, WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids
 * 000000014009937C: mov     [rsp+78h+var_20], rax
 * 0000000140099381: mov     edx, 4
 * 0000000140099386: mov     [rsp+78h+var_28], 4
 * 000000014009938F: lea     rax, [rsp+78h+arg_50]
 * 0000000140099397: mov     [rsp+78h+var_30], rax
 * 000000014009939C: mov     r8d, 12h
 * 00000001400993A2: mov     [rsp+78h+var_38], 8
 * 00000001400993AB: lea     rax, [rsp+78h+arg_48]
 * 00000001400993B3: mov     [rsp+78h+var_40], rax
 * 00000001400993B8: mov     rcx, rdi
 * 00000001400993BB: lea     rax, [rsp+78h+arg_40]
 * 00000001400993C3: mov     [rsp+78h+var_48], 8
 * 00000001400993CC: mov     [rsp+78h+var_50], rax
 * 00000001400993D1: mov     word ptr [rsp+78h+var_58], bp
 * 00000001400993D6: call    cs:__imp_WppAutoLogTrace
 * 00000001400993DD: nop     dword ptr [rax+rax+00h]
 * 00000001400993E2: lea     r11, [rsp+78h+var_8]
 * 00000001400993E7: mov     rbx, [r11+10h]
 * 00000001400993EB: mov     rbp, [r11+18h]
 * 00000001400993EF: mov     rsp, r11
 * 00000001400993F2: pop     rdi
 * 00000001400993F3: retn
 * 00000001400993F5: mov     rax, cs:pfnWppTraceMessage
 * 00000001400993FC: lea     rdx, [rsp+78h+arg_58]
 * 0000000140099404: mov     [rsp+78h+var_18], 0
 * 000000014009940D: lea     r8, WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids
 * 0000000140099414: mov     [rsp+78h+var_20], 4
 * 000000014009941D: mov     r9d, ebp
 * 0000000140099420: mov     [rsp+78h+var_28], rdx
 * 0000000140099425: lea     rdx, [rsp+78h+arg_50]
 * 000000014009942D: mov     [rsp+78h+var_30], 4
 * 0000000140099436: mov     [rsp+78h+var_38], rdx
 * 000000014009943B: lea     rdx, [rsp+78h+arg_48]
 * 0000000140099443: mov     [rsp+78h+var_40], 8
 * 000000014009944C: mov     [rsp+78h+var_48], rdx
 * 0000000140099451: lea     rdx, [rsp+78h+arg_40]
 * 0000000140099459: mov     [rsp+78h+var_50], 8
 * 0000000140099462: mov     [rsp+78h+var_58], rdx
 * 0000000140099467: mov     edx, 2Bh ; '+'
 * 000000014009946C: call    _guard_dispatch_icall
 * 0000000140099471: jmp     loc_140099353
 */
