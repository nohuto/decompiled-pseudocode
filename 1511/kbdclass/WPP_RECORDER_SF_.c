/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0005388
 * Callers:
 *     KbdInitializeDataQueue @ 0x1C0001FD0 (KbdInitializeDataQueue.c)
 *     KeyboardClassClose @ 0x1C0002100 (KeyboardClassClose.c)
 *     KeyboardClassCreate @ 0x1C0002230 (KeyboardClassCreate.c)
 *     KeyboardClassRead @ 0x1C0002690 (KeyboardClassRead.c)
 *     KeyboardClassCleanup @ 0x1C0002810 (KeyboardClassCleanup.c)
 *     KeyboardClassServiceCallback @ 0x1C0002950 (KeyboardClassServiceCallback.c)
 *     KeyboardClassFlush @ 0x1C0004890 (KeyboardClassFlush.c)
 *     KeyboardClassFindMorePorts @ 0x1C000C000 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDeviceEx @ 0x1C000C540 (KeyboardAddDeviceEx.c)
 *     KbdDeterminePortsServiced @ 0x1C000C6E0 (KbdDeterminePortsServiced.c)
 *     KeyboardClassDeviceControl @ 0x1C000C7F0 (KeyboardClassDeviceControl.c)
 *     KbdCreateClassObject @ 0x1C000CA30 (KbdCreateClassObject.c)
 *     KbdEnableDisablePort @ 0x1C000CEB0 (KbdEnableDisablePort.c)
 *     KbdSendConnectRequest @ 0x1C000E4CC (KbdSendConnectRequest.c)
 *     DriverEntry @ 0x1C000F020 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0005388
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005388
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005388: mov     [rsp+arg_0], rbx
 * 00000001C000538D: mov     [rsp+arg_8], rbp
 * 00000001C0005392: mov     [rsp+arg_10], rsi
 * 00000001C0005397: push    rdi
 * 00000001C0005398: push    r14
 * 00000001C000539A: push    r15
 * 00000001C000539C: sub     rsp, 30h
 * 00000001C00053A0: mov     r14d, r8d
 * 00000001C00053A3: movzx   ebp, r9w
 * 00000001C00053A7: mov     edi, r8d
 * 00000001C00053AA: mov     sil, dl
 * 00000001C00053AD: shr     rdi, 10h
 * 00000001C00053B1: mov     r15, rcx
 * 00000001C00053B4: lea     ebx, [r14-1]
 * 00000001C00053B8: mov     r10d, ebx
 * 00000001C00053BB: and     ebx, 1Fh
 * 00000001C00053BE: shr     r10, 5
 * 00000001C00053C2: lea     rax, [rdi+rdi*4]
 * 00000001C00053C6: and     r10d, 7FFh
 * 00000001C00053CD: lea     r11, [r10+rax*4]
 * 00000001C00053D1: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00053D8: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00053DD: bt      eax, ebx
 * 00000001C00053E0: jnb     short loc_1C0005418
 * 00000001C00053E2: lea     rcx, [rdi+rdi*4]
 * 00000001C00053E6: add     rcx, rcx
 * 00000001C00053E9: cmp     [r10+rcx*8+29h], dl
 * 00000001C00053EE: jb      short loc_1C0005418
 * 00000001C00053F0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00053F7: lea     r8, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C00053FE: and     [rsp+48h+var_28], 0
 * 00000001C0005404: mov     edx, 2Bh ; '+'
 * 00000001C0005409: mov     rcx, [r10+rcx*8+18h]
 * 00000001C000540E: movzx   r9d, r9w
 * 00000001C0005412: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005418: and     [rsp+48h+var_20], 0
 * 00000001C000541E: lea     r9, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C0005425: mov     r8d, r14d
 * 00000001C0005428: movzx   edx, sil
 * 00000001C000542C: mov     rcx, r15
 * 00000001C000542F: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C0005434: call    cs:__imp_WppAutoLogTrace
 * 00000001C000543A: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000543F: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0005444: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0005449: add     rsp, 30h
 * 00000001C000544D: pop     r15
 * 00000001C000544F: pop     r14
 * 00000001C0005451: pop     rdi
 * 00000001C0005452: retn
 */
