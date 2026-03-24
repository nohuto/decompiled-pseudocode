/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0005348
 * Callers:
 *     KbdInitializeDataQueue @ 0x1C0001F70 (KbdInitializeDataQueue.c)
 *     KeyboardClassClose @ 0x1C00020A0 (KeyboardClassClose.c)
 *     KeyboardClassCreate @ 0x1C00021D0 (KeyboardClassCreate.c)
 *     KeyboardClassRead @ 0x1C0002640 (KeyboardClassRead.c)
 *     KeyboardClassCleanup @ 0x1C00027C0 (KeyboardClassCleanup.c)
 *     KeyboardClassFlush @ 0x1C0004420 (KeyboardClassFlush.c)
 *     KeyboardClassServiceCallback @ 0x1C00049F0 (KeyboardClassServiceCallback.c)
 *     KeyboardClassFindMorePorts @ 0x1C000C000 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDeviceEx @ 0x1C000C540 (KeyboardAddDeviceEx.c)
 *     KbdDeterminePortsServiced @ 0x1C000C6E0 (KbdDeterminePortsServiced.c)
 *     KeyboardClassDeviceControl @ 0x1C000C7F0 (KeyboardClassDeviceControl.c)
 *     KbdCreateClassObject @ 0x1C000C9D0 (KbdCreateClassObject.c)
 *     KbdEnableDisablePort @ 0x1C000CE50 (KbdEnableDisablePort.c)
 *     KbdSendConnectRequest @ 0x1C000E4C0 (KbdSendConnectRequest.c)
 *     DriverEntry @ 0x1C000F020 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0005348
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005348
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005348: mov     [rsp+arg_0], rbx
 * 00000001C000534D: mov     [rsp+arg_8], rbp
 * 00000001C0005352: mov     [rsp+arg_10], rsi
 * 00000001C0005357: push    rdi
 * 00000001C0005358: push    r14
 * 00000001C000535A: push    r15
 * 00000001C000535C: sub     rsp, 30h
 * 00000001C0005360: mov     r14d, r8d
 * 00000001C0005363: movzx   ebp, r9w
 * 00000001C0005367: mov     edi, r8d
 * 00000001C000536A: mov     sil, dl
 * 00000001C000536D: shr     rdi, 10h
 * 00000001C0005371: mov     r15, rcx
 * 00000001C0005374: lea     ebx, [r14-1]
 * 00000001C0005378: mov     r10d, ebx
 * 00000001C000537B: and     ebx, 1Fh
 * 00000001C000537E: shr     r10, 5
 * 00000001C0005382: lea     rax, [rdi+rdi*4]
 * 00000001C0005386: and     r10d, 7FFh
 * 00000001C000538D: lea     r11, [r10+rax*4]
 * 00000001C0005391: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0005398: mov     eax, [r10+r11*4+2Ch]
 * 00000001C000539D: bt      eax, ebx
 * 00000001C00053A0: jnb     short loc_1C00053D8
 * 00000001C00053A2: lea     rcx, [rdi+rdi*4]
 * 00000001C00053A6: add     rcx, rcx
 * 00000001C00053A9: cmp     [r10+rcx*8+29h], dl
 * 00000001C00053AE: jb      short loc_1C00053D8
 * 00000001C00053B0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00053B7: lea     r8, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C00053BE: and     [rsp+48h+var_28], 0
 * 00000001C00053C4: mov     edx, 2Bh ; '+'
 * 00000001C00053C9: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00053CE: movzx   r9d, r9w
 * 00000001C00053D2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00053D8: and     [rsp+48h+var_20], 0
 * 00000001C00053DE: lea     r9, WPP_6ff944f7951fb8a8caac54bc3f6ce333_Traceguids
 * 00000001C00053E5: mov     r8d, r14d
 * 00000001C00053E8: movzx   edx, sil
 * 00000001C00053EC: mov     rcx, r15
 * 00000001C00053EF: mov     word ptr [rsp+48h+var_28], bp
 * 00000001C00053F4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00053FA: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00053FF: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0005404: mov     rsi, [rsp+48h+arg_10]
 * 00000001C0005409: add     rsp, 30h
 * 00000001C000540D: pop     r15
 * 00000001C000540F: pop     r14
 * 00000001C0005411: pop     rdi
 * 00000001C0005412: retn
 */
