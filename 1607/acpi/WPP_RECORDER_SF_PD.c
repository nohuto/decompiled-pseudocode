/*
 * XREFs of WPP_RECORDER_SF_PD @ 0x1C00542F4
 * Callers:
 *     AcpiConvertObjDataToMethodArguments @ 0x1C005314C (AcpiConvertObjDataToMethodArguments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_PD @ 0x1C00542F4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00542F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00542F4: mov     r11, rsp
 * 00000001C00542F7: mov     [r11+8], rbx
 * 00000001C00542FB: push    rbp
 * 00000001C00542FC: sub     rsp, 60h
 * 00000001C0054300: mov     rbx, rcx
 * 00000001C0054303: mov     [rsp+68h+var_18], 0C000009Ah
 * 00000001C005430B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0054312: mov     ebp, 16h
 * 00000001C0054317: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C005431E: jz      short loc_1C005436A
 * 00000001C0054320: cmp     byte ptr [rcx+29h], 2
 * 00000001C0054324: jb      short loc_1C005436A
 * 00000001C0054326: and     qword ptr [r11-28h], 0
 * 00000001C005432B: lea     rdx, [r11-18h]
 * 00000001C005432F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0054336: lea     r8, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C005433D: mov     rcx, [rcx+18h]
 * 00000001C0054341: mov     qword ptr [r11-30h], 4
 * 00000001C0054349: mov     [r11-38h], rdx
 * 00000001C005434D: lea     rdx, [r11+30h]
 * 00000001C0054351: mov     qword ptr [r11-40h], 8
 * 00000001C0054359: mov     [r11-48h], rdx
 * 00000001C005435D: lea     edx, [rbp+15h]
 * 00000001C0054360: movzx   r9d, bp
 * 00000001C0054364: call    cs:__guard_dispatch_icall_fptr
 * 00000001C005436A: and     [rsp+68h+var_20], 0
 * 00000001C0054370: lea     rax, [rsp+68h+var_18]
 * 00000001C0054375: mov     [rsp+68h+var_28], 4
 * 00000001C005437E: lea     r9, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C0054385: mov     [rsp+68h+var_30], rax
 * 00000001C005438A: mov     edx, 2
 * 00000001C005438F: lea     rax, [rsp+68h+arg_28]
 * 00000001C0054397: mov     [rsp+68h+var_38], 8
 * 00000001C00543A0: mov     [rsp+68h+var_40], rax
 * 00000001C00543A5: mov     rcx, rbx
 * 00000001C00543A8: mov     [rsp+68h+var_48], bp
 * 00000001C00543AD: lea     r8d, [rdx+13h]
 * 00000001C00543B1: call    cs:__imp_WppAutoLogTrace
 * 00000001C00543B7: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00543BC: add     rsp, 60h
 * 00000001C00543C0: pop     rbp
 * 00000001C00543C1: retn
 */
