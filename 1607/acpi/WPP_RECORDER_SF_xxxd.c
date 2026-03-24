/*
 * XREFs of WPP_RECORDER_SF_xxxd @ 0x1C00547C8
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C009D6F4 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_xxxd @ 0x1C00547C8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00547C8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00547C8: mov     r11, rsp
 * 00000001C00547CB: mov     [r11+8], rbx
 * 00000001C00547CF: mov     [r11+10h], rsi
 * 00000001C00547D3: push    rdi
 * 00000001C00547D4: sub     rsp, 70h
 * 00000001C00547D8: mov     rdi, rcx
 * 00000001C00547DB: movzx   ebx, r9w
 * 00000001C00547DF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00547E6: mov     esi, 8
 * 00000001C00547EB: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C00547F2: jz      short loc_1C0054852
 * 00000001C00547F4: cmp     byte ptr [rcx+29h], 2
 * 00000001C00547F8: jb      short loc_1C0054852
 * 00000001C00547FA: and     qword ptr [r11-18h], 0
 * 00000001C00547FF: lea     rdx, [r11+48h]
 * 00000001C0054803: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005480A: lea     r8, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C0054811: mov     rcx, [rcx+18h]
 * 00000001C0054815: mov     qword ptr [r11-20h], 4
 * 00000001C005481D: mov     [r11-28h], rdx
 * 00000001C0054821: lea     rdx, [r11+40h]
 * 00000001C0054825: mov     [r11-30h], rsi
 * 00000001C0054829: mov     [r11-38h], rdx
 * 00000001C005482D: lea     rdx, [r11+38h]
 * 00000001C0054831: mov     [r11-40h], rsi
 * 00000001C0054835: mov     [r11-48h], rdx
 * 00000001C0054839: lea     rdx, [r11+30h]
 * 00000001C005483D: mov     [r11-50h], rsi
 * 00000001C0054841: mov     [r11-58h], rdx
 * 00000001C0054845: lea     edx, [rsi+23h]
 * 00000001C0054848: movzx   r9d, bx
 * 00000001C005484C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0054852: and     [rsp+78h+var_10], 0
 * 00000001C0054858: lea     rax, [rsp+78h+arg_40]
 * 00000001C0054860: mov     [rsp+78h+var_18], 4
 * 00000001C0054869: lea     r9, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C0054870: mov     [rsp+78h+var_20], rax
 * 00000001C0054875: mov     edx, 2
 * 00000001C005487A: mov     [rsp+78h+var_28], rsi
 * 00000001C005487F: lea     rax, [rsp+78h+arg_38]
 * 00000001C0054887: mov     [rsp+78h+var_30], rax
 * 00000001C005488C: mov     rcx, rdi
 * 00000001C005488F: mov     [rsp+78h+var_38], rsi
 * 00000001C0054894: lea     rax, [rsp+78h+arg_30]
 * 00000001C005489C: mov     [rsp+78h+var_40], rax
 * 00000001C00548A1: lea     r8d, [rdx+13h]
 * 00000001C00548A5: lea     rax, [rsp+78h+arg_28]
 * 00000001C00548AD: mov     [rsp+78h+var_48], rsi
 * 00000001C00548B2: mov     [rsp+78h+var_50], rax
 * 00000001C00548B7: mov     [rsp+78h+var_58], bx
 * 00000001C00548BC: call    cs:__imp_WppAutoLogTrace
 * 00000001C00548C2: lea     r11, [rsp+78h+var_8]
 * 00000001C00548C7: mov     rbx, [r11+10h]
 * 00000001C00548CB: mov     rsi, [r11+18h]
 * 00000001C00548CF: mov     rsp, r11
 * 00000001C00548D2: pop     rdi
 * 00000001C00548D3: retn
 */
