/*
 * XREFs of WPP_RECORDER_SF_dqqq @ 0x1C005954C
 * Callers:
 *     ACPIWorkerThread @ 0x1C0023280 (ACPIWorkerThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqqq @ 0x1C005954C
 * Reason: Hex-Rays returned no pseudocode for 0x1C005954C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005954C: mov     r11, rsp
 * 00000001C005954F: mov     [r11+8], rbx
 * 00000001C0059553: mov     [r11+10h], rbp
 * 00000001C0059557: push    rdi
 * 00000001C0059558: sub     rsp, 70h
 * 00000001C005955C: mov     rbx, rcx
 * 00000001C005955F: mov     ebp, 0Ah
 * 00000001C0059564: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005956B: lea     edi, [rbp-2]
 * 00000001C005956E: mov     eax, [rcx+2Ch]
 * 00000001C0059571: test    al, 1
 * 00000001C0059573: jz      short loc_1C00595D3
 * 00000001C0059575: cmp     byte ptr [rcx+29h], 2
 * 00000001C0059579: jb      short loc_1C00595D3
 * 00000001C005957B: and     qword ptr [r11-18h], 0
 * 00000001C0059580: lea     rdx, [r11+48h]
 * 00000001C0059584: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005958B: lea     r8, WPP_127d606e75223d5961bf193541b35584_Traceguids
 * 00000001C0059592: mov     rcx, [rcx+18h]
 * 00000001C0059596: mov     [r11-20h], rdi
 * 00000001C005959A: mov     [r11-28h], rdx
 * 00000001C005959E: lea     rdx, [r11+40h]
 * 00000001C00595A2: mov     [r11-30h], rdi
 * 00000001C00595A6: mov     [r11-38h], rdx
 * 00000001C00595AA: lea     rdx, [r11+38h]
 * 00000001C00595AE: mov     [r11-40h], rdi
 * 00000001C00595B2: mov     [r11-48h], rdx
 * 00000001C00595B6: lea     rdx, [r11+30h]
 * 00000001C00595BA: mov     qword ptr [r11-50h], 4
 * 00000001C00595C2: mov     [r11-58h], rdx
 * 00000001C00595C6: lea     edx, [rbp+21h]
 * 00000001C00595C9: movzx   r9d, bp
 * 00000001C00595CD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00595D3: and     [rsp+78h+var_10], 0
 * 00000001C00595D9: lea     rax, [rsp+78h+arg_40]
 * 00000001C00595E1: mov     [rsp+78h+var_18], rdi
 * 00000001C00595E6: lea     r9, WPP_127d606e75223d5961bf193541b35584_Traceguids
 * 00000001C00595ED: mov     [rsp+78h+var_20], rax
 * 00000001C00595F2: mov     edx, 2
 * 00000001C00595F7: mov     [rsp+78h+var_28], rdi
 * 00000001C00595FC: lea     rax, [rsp+78h+arg_38]
 * 00000001C0059604: mov     [rsp+78h+var_30], rax
 * 00000001C0059609: mov     rcx, rbx
 * 00000001C005960C: mov     [rsp+78h+var_38], rdi
 * 00000001C0059611: lea     rax, [rsp+78h+arg_30]
 * 00000001C0059619: mov     [rsp+78h+var_40], rax
 * 00000001C005961E: lea     r8d, [rdx-1]
 * 00000001C0059622: lea     rax, [rsp+78h+arg_28]
 * 00000001C005962A: mov     [rsp+78h+var_48], 4
 * 00000001C0059633: mov     [rsp+78h+var_50], rax
 * 00000001C0059638: mov     [rsp+78h+var_58], bp
 * 00000001C005963D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0059643: lea     r11, [rsp+78h+var_8]
 * 00000001C0059648: mov     rbx, [r11+10h]
 * 00000001C005964C: mov     rbp, [r11+18h]
 * 00000001C0059650: mov     rsp, r11
 * 00000001C0059653: pop     rdi
 * 00000001C0059654: retn
 */
