/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0005338
 * Callers:
 *     KbdInitializeDataQueue @ 0x1C0001F40 (KbdInitializeDataQueue.c)
 *     KeyboardClassClose @ 0x1C0002070 (KeyboardClassClose.c)
 *     KeyboardClassCreate @ 0x1C00021A0 (KeyboardClassCreate.c)
 *     KeyboardClassRead @ 0x1C0002610 (KeyboardClassRead.c)
 *     KeyboardClassCleanup @ 0x1C0002790 (KeyboardClassCleanup.c)
 *     KeyboardClassServiceCallback @ 0x1C0002920 (KeyboardClassServiceCallback.c)
 *     KeyboardClassFlush @ 0x1C0004840 (KeyboardClassFlush.c)
 *     KeyboardClassFindMorePorts @ 0x1C000C000 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDeviceEx @ 0x1C000C540 (KeyboardAddDeviceEx.c)
 *     KbdDeterminePortsServiced @ 0x1C000C6E0 (KbdDeterminePortsServiced.c)
 *     KeyboardClassDeviceControl @ 0x1C000C7F0 (KeyboardClassDeviceControl.c)
 *     KbdCreateClassObject @ 0x1C000CAE0 (KbdCreateClassObject.c)
 *     KbdEnableDisablePort @ 0x1C000CF60 (KbdEnableDisablePort.c)
 *     KbdSendConnectRequest @ 0x1C000E4C8 (KbdSendConnectRequest.c)
 *     DriverEntry @ 0x1C000F020 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0005338
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005338
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005338: mov     [rsp+arg_0], rbx
 * 00000001C000533D: mov     [rsp+arg_8], rbp
 * 00000001C0005342: mov     [rsp+arg_10], rsi
 * 00000001C0005347: push    rdi
 * 00000001C0005348: push    r14
 * 00000001C000534A: push    r15
 * 00000001C000534C: sub     rsp, 30h
 * 00000001C0005350: mov     r14d, r8d
 * 00000001C0005353: movzx   ebp, r9w
 * 00000001C0005357: mov     edi, r8d
 * 00000001C000535A: mov     sil, dl
 * 00000001C000535D: shr     rdi, 10h
 * 00000001C0005361: mov     r15, rcx
 * 00000001C0005364: lea     ebx, [r14-1]
 * 00000001C0005368: mov     r10d, ebx
 * 00000001C000536B: and     ebx, 1Fh
 * 00000001C000536E: shr     r10, 5
 * 00000001C0005372: lea     rax, [rdi+rdi*4]
 * 00000001C0005376: and     r10d, 7FFh
 * 00000001C000537D: lea     r11, [r10+rax*4]
 * 00000001C0005381: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0005388: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000538D: bt      eax, ebx
 * 00000001C0005390: jnb     short loc_1C00053C8
 * 00000001C0005392: lea     rcx, [rdi+rdi*4]
 * 00000001C0005396: add     rcx, rcx
 * 00000001C0005399: cmp     [r10+rcx*8+29h], dl
 * 00000001C000539E: jb      short loc_1C00053C8
 * 00000001C00053A0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00053A7: lea     r8, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C00053AE: and     [rsp+48h+var_28], 0
 * 00000001C00053B4: mov     edx, 2Bh ; '+'
 * 00000001C00053B9: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00053BE: movzx   r9d, r9w
 * 00000001C00053C2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00053C8: and     [rsp+48h+var_20], 0
 * 00000001C00053CE: lea     r9, WPP_fecf80922958397349997befa54f38a2_Traceguids
 * 00000001C00053D5: mov     r8d, r14d
 * 00000001C00053D8: movzx   edx, sil
 * 00000001C00053DC: mov     rcx, r15
 * 00000001C00053DF: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C00053E4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00053EA: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00053EF: mov     rbp, [rsp+48h+arg_8]
 * 00000001C00053F4: mov     rsi, [rsp+48h+arg_10]
 * 00000001C00053F9: add     rsp, 30h
 * 00000001C00053FD: pop     r15
 * 00000001C00053FF: pop     r14
 * 00000001C0005401: pop     rdi
 * 00000001C0005402: retn
 */
