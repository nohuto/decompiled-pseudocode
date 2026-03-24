/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0004EF8
 * Callers:
 *     MouseClassClose @ 0x1C0001000 (MouseClassClose.c)
 *     MouseClassCreate @ 0x1C0001110 (MouseClassCreate.c)
 *     MouseClassCleanup @ 0x1C00012B0 (MouseClassCleanup.c)
 *     MouseClassRead @ 0x1C00013C0 (MouseClassRead.c)
 *     MouseClassServiceCallback @ 0x1C0001560 (MouseClassServiceCallback.c)
 *     MouInitializeDataQueue @ 0x1C0002580 (MouInitializeDataQueue.c)
 *     MouseClassFlush @ 0x1C0004410 (MouseClassFlush.c)
 *     MouEnableDisablePort @ 0x1C000B000 (MouEnableDisablePort.c)
 *     MouseClassFindMorePorts @ 0x1C000B120 (MouseClassFindMorePorts.c)
 *     MouseClassDeviceControl @ 0x1C000B510 (MouseClassDeviceControl.c)
 *     MouDeterminePortsServiced @ 0x1C000B670 (MouDeterminePortsServiced.c)
 *     MouSendConnectRequest @ 0x1C000B780 (MouSendConnectRequest.c)
 *     MouCreateClassObject @ 0x1C000B850 (MouCreateClassObject.c)
 *     DriverEntry @ 0x1C000E350 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A50 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0004EF8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0004EF8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0004EF8: mov     [rsp+arg_0], rbx
 * 00000001C0004EFD: mov     [rsp+arg_8], rbp
 * 00000001C0004F02: mov     [rsp+arg_10], rsi
 * 00000001C0004F07: push    rdi
 * 00000001C0004F08: push    r14
 * 00000001C0004F0A: push    r15
 * 00000001C0004F0C: sub     rsp, 30h
 * 00000001C0004F10: mov     r14d, r8d
 * 00000001C0004F13: movzx   ebp, r9w
 * 00000001C0004F17: mov     edi, r8d
 * 00000001C0004F1A: mov     sil, dl
 * 00000001C0004F1D: shr     rdi, 10h
 * 00000001C0004F21: mov     r15, rcx
 * 00000001C0004F24: lea     ebx, [r14-1]
 * 00000001C0004F28: mov     r10d, ebx
 * 00000001C0004F2B: and     ebx, 1Fh
 * 00000001C0004F2E: shr     r10, 5
 * 00000001C0004F32: lea     rax, [rdi+rdi*4]
 * 00000001C0004F36: and     r10d, 7FFh
 * 00000001C0004F3D: lea     r11, [r10+rax*4]
 * 00000001C0004F41: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0004F48: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0004F4D: bt      eax, ebx
 * 00000001C0004F50: jnb     short loc_1C0004F88
 * 00000001C0004F52: lea     rcx, [rdi+rdi*4]
 * 00000001C0004F56: add     rcx, rcx
 * 00000001C0004F59: cmp     [r10+rcx*8+29h], dl
 * 00000001C0004F5E: jb      short loc_1C0004F88
 * 00000001C0004F60: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0004F67: lea     r8, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0004F6E: and     [rsp+48h+var_28], 0
 * 00000001C0004F74: mov     edx, 2Bh ; '+'
 * 00000001C0004F79: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0004F7E: movzx   r9d, r9w
 * 00000001C0004F82: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0004F88: and     [rsp+48h+var_20], 0
 * 00000001C0004F8E: lea     r9, WPP_fe6b4cfd3d213dfbc0d9d4b45b6fc39b_Traceguids
 * 00000001C0004F95: mov     r8d, r14d
 * 00000001C0004F98: movzx   edx, sil
 * 00000001C0004F9C: mov     rcx, r15
 * 00000001C0004F9F: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C0004FA4: call    cs:__imp_WppAutoLogTrace
 * 00000001C0004FAA: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0004FAF: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0004FB4: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0004FB9: add     rsp, 30h
 * 00000001C0004FBD: pop     r15
 * 00000001C0004FBF: pop     r14
 * 00000001C0004FC1: pop     rdi
 * 00000001C0004FC2: retn
 */
