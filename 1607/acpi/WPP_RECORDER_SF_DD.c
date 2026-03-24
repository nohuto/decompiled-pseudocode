/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C005422C
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C009D6F4 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C005422C
 * Reason: Hex-Rays returned no pseudocode for 0x1C005422C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005422C: mov     r11, rsp
 * 00000001C005422F: mov     [r11+8], rbx
 * 00000001C0054233: mov     [r11+10h], rsi
 * 00000001C0054237: push    rdi
 * 00000001C0054238: sub     rsp, 50h
 * 00000001C005423C: mov     rbx, rcx
 * 00000001C005423F: mov     esi, 28h ; '('
 * 00000001C0054244: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005424B: lea     edi, [rsi-24h]
 * 00000001C005424E: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C0054255: jz      short loc_1C0054299
 * 00000001C0054257: cmp     byte ptr [rcx+29h], 2
 * 00000001C005425B: jb      short loc_1C0054299
 * 00000001C005425D: and     qword ptr [r11-18h], 0
 * 00000001C0054262: lea     rdx, [r11+38h]
 * 00000001C0054266: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005426D: lea     r8, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C0054274: mov     rcx, [rcx+18h]
 * 00000001C0054278: mov     [r11-20h], rdi
 * 00000001C005427C: mov     [r11-28h], rdx
 * 00000001C0054280: lea     rdx, [r11+30h]
 * 00000001C0054284: mov     [r11-30h], rdi
 * 00000001C0054288: mov     [r11-38h], rdx
 * 00000001C005428C: lea     edx, [rsi+3]
 * 00000001C005428F: movzx   r9d, si
 * 00000001C0054293: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0054299: and     [rsp+58h+var_10], 0
 * 00000001C005429F: lea     rax, [rsp+58h+arg_30]
 * 00000001C00542A7: mov     [rsp+58h+var_18], rdi
 * 00000001C00542AC: lea     r9, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C00542B3: mov     [rsp+58h+var_20], rax
 * 00000001C00542B8: mov     edx, 2
 * 00000001C00542BD: lea     rax, [rsp+58h+arg_28]
 * 00000001C00542C5: mov     [rsp+58h+var_28], rdi
 * 00000001C00542CA: mov     [rsp+58h+var_30], rax
 * 00000001C00542CF: mov     rcx, rbx
 * 00000001C00542D2: mov     [rsp+58h+var_38], si
 * 00000001C00542D7: lea     r8d, [rdx+13h]
 * 00000001C00542DB: call    cs:__imp_WppAutoLogTrace
 * 00000001C00542E1: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00542E6: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00542EB: add     rsp, 50h
 * 00000001C00542EF: pop     rdi
 * 00000001C00542F0: retn
 */
