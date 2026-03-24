/*
 * XREFs of WPP_RECORDER_SF_DDPP @ 0x1C005411C
 * Callers:
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C0052F44 (AcpiConvertMethodArgumentsToObjData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDPP @ 0x1C005411C
 * Reason: Hex-Rays returned no pseudocode for 0x1C005411C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005411C: mov     r11, rsp
 * 00000001C005411F: mov     [r11+8], rbx
 * 00000001C0054123: mov     [r11+10h], rbp
 * 00000001C0054127: mov     [r11+18h], rsi
 * 00000001C005412B: push    rdi
 * 00000001C005412C: sub     rsp, 70h
 * 00000001C0054130: mov     ebp, 18h
 * 00000001C0054135: mov     rbx, rcx
 * 00000001C0054138: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005413F: lea     edi, [rbp-10h]
 * 00000001C0054142: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C0054149: lea     esi, [rbp-14h]
 * 00000001C005414C: jz      short loc_1C00541A8
 * 00000001C005414E: cmp     byte ptr [rcx+29h], 2
 * 00000001C0054152: jb      short loc_1C00541A8
 * 00000001C0054154: and     qword ptr [r11-18h], 0
 * 00000001C0054159: lea     rdx, [r11+48h]
 * 00000001C005415D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0054164: lea     r8, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C005416B: mov     rcx, [rcx+18h]
 * 00000001C005416F: mov     [r11-20h], rdi
 * 00000001C0054173: mov     [r11-28h], rdx
 * 00000001C0054177: lea     rdx, [r11+40h]
 * 00000001C005417B: mov     [r11-30h], rdi
 * 00000001C005417F: mov     [r11-38h], rdx
 * 00000001C0054183: lea     rdx, [r11+38h]
 * 00000001C0054187: mov     [r11-40h], rsi
 * 00000001C005418B: mov     [r11-48h], rdx
 * 00000001C005418F: lea     rdx, [r11+30h]
 * 00000001C0054193: mov     [r11-50h], rsi
 * 00000001C0054197: mov     [r11-58h], rdx
 * 00000001C005419B: lea     edx, [rbp+13h]
 * 00000001C005419E: movzx   r9d, bp
 * 00000001C00541A2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00541A8: and     [rsp+78h+var_10], 0
 * 00000001C00541AE: lea     rax, [rsp+78h+arg_40]
 * 00000001C00541B6: mov     [rsp+78h+var_18], rdi
 * 00000001C00541BB: lea     r9, WPP_04283116df513c0b4bfc015614b55db9_Traceguids
 * 00000001C00541C2: mov     [rsp+78h+var_20], rax
 * 00000001C00541C7: mov     edx, 2
 * 00000001C00541CC: mov     [rsp+78h+var_28], rdi
 * 00000001C00541D1: lea     rax, [rsp+78h+arg_38]
 * 00000001C00541D9: mov     [rsp+78h+var_30], rax
 * 00000001C00541DE: mov     rcx, rbx
 * 00000001C00541E1: mov     [rsp+78h+var_38], rsi
 * 00000001C00541E6: lea     rax, [rsp+78h+arg_30]
 * 00000001C00541EE: mov     [rsp+78h+var_40], rax
 * 00000001C00541F3: lea     r8d, [rdx+13h]
 * 00000001C00541F7: lea     rax, [rsp+78h+arg_28]
 * 00000001C00541FF: mov     [rsp+78h+var_48], rsi
 * 00000001C0054204: mov     [rsp+78h+var_50], rax
 * 00000001C0054209: mov     [rsp+78h+var_58], bp
 * 00000001C005420E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0054214: lea     r11, [rsp+78h+var_8]
 * 00000001C0054219: mov     rbx, [r11+10h]
 * 00000001C005421D: mov     rbp, [r11+18h]
 * 00000001C0054221: mov     rsi, [r11+20h]
 * 00000001C0054225: mov     rsp, r11
 * 00000001C0054228: pop     rdi
 * 00000001C0054229: retn
 */
