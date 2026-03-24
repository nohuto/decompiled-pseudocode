/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C00019A0
 * Callers:
 *     KeyboardAddDeviceEx @ 0x1C000C540 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000CA30 (KbdCreateClassObject.c)
 *     KbdConfiguration @ 0x1C000F420 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EA0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C00019A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00019A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00019A0: mov     [rsp+arg_0], rbx
 * 00000001C00019A5: mov     [rsp+arg_8], rbp
 * 00000001C00019AA: mov     [rsp+arg_10], rsi
 * 00000001C00019AF: mov     [rsp+arg_18], rdi
 * 00000001C00019B4: push    r12
 * 00000001C00019B6: push    r14
 * 00000001C00019B8: push    r15
 * 00000001C00019BA: sub     rsp, 40h
 * 00000001C00019BE: mov     rdi, [rsp+58h+arg_28]
 * 00000001C00019C6: lea     rbp, aNull; "<NULL>"
 * 00000001C00019CD: mov     r12, rcx
 * 00000001C00019D0: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00019D4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00019DB: movzx   r15d, r9w
 * 00000001C00019DF: movzx   r14d, dl
 * 00000001C00019E3: mov     esi, 0Eh
 * 00000001C00019E8: mov     eax, [rcx+2Ch]
 * 00000001C00019EB: test    al, 1
 * 00000001C00019ED: jnz     loc_1C0003850
 * 00000001C00019F3: test    rdi, rdi
 * 00000001C00019F6: jz      loc_1C00038D9
 * 00000001C00019FC: movzx   eax, word ptr [rdi]
 * 00000001C00019FF: test    ax, ax
 * 00000001C0001A02: jz      short loc_1C0001A20
 * 00000001C0001A04: cmp     word ptr [rdi+rbx*2+2], 0
 * 00000001C0001A0A: lea     rbx, [rbx+1]
 * 00000001C0001A0E: jnz     short loc_1C0001A04
 * 00000001C0001A10: lea     rsi, ds:2[rbx*2]
 * 00000001C0001A18: test    ax, ax
 * 00000001C0001A1B: jz      short loc_1C0001A20
 * 00000001C0001A1D: mov     rbp, rdi
 * 00000001C0001A20: mov     [rsp+58h+var_20], 0
 * 00000001C0001A29: lea     r9, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C0001A30: mov     [rsp+58h+var_28], rsi
 * 00000001C0001A35: mov     r8d, 1
 * 00000001C0001A3B: mov     [rsp+58h+var_30], rbp
 * 00000001C0001A40: mov     rcx, r12
 * 00000001C0001A43: movzx   edx, r14b
 * 00000001C0001A47: mov     word ptr [rsp+58h+var_38], r15w
 * 00000001C0001A4D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0001A53: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0001A58: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0001A5D: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0001A62: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0001A67: add     rsp, 40h
 * 00000001C0001A6B: pop     r15
 * 00000001C0001A6D: pop     r14
 * 00000001C0001A6F: pop     r12
 * 00000001C0001A71: retn
 * 00000001C0003850: cmp     [rcx+29h], r14b
 * 00000001C0003854: jb      loc_1C00019F3
 * 00000001C000385A: test    rdi, rdi
 * 00000001C000385D: jz      short loc_1C0003892
 * 00000001C000385F: movzx   r9d, word ptr [rdi]
 * 00000001C0003863: test    r9w, r9w
 * 00000001C0003867: jnz     short loc_1C000386E
 * 00000001C0003869: mov     r8, rsi
 * 00000001C000386C: jmp     short loc_1C0003885
 * 00000001C000386E: mov     rax, rbx
 * 00000001C0003871: cmp     word ptr [rdi+rax*2+2], 0
 * 00000001C0003877: lea     rax, [rax+1]
 * 00000001C000387B: jnz     short loc_1C0003871
 * 00000001C000387D: lea     r8, ds:2[rax*2]
 * 00000001C0003885: test    r9w, r9w
 * 00000001C0003889: mov     rdx, rbp
 * 00000001C000388C: cmovnz  rdx, rdi
 * 00000001C0003890: jmp     short loc_1C000389F
 * 00000001C0003892: mov     r8d, 0Ah
 * 00000001C0003898: lea     rdx, aNull_0; "NULL"
 * 00000001C000389F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00038A6: mov     rcx, [rcx+18h]
 * 00000001C00038AA: mov     [rsp+58h+var_28], 0
 * 00000001C00038B3: mov     [rsp+58h+var_30], r8
 * 00000001C00038B8: lea     r8, WPP_7aac8fc3695da443f40dbb1b21b72d84_Traceguids
 * 00000001C00038BF: mov     [rsp+58h+var_38], rdx
 * 00000001C00038C4: mov     edx, 2Bh ; '+'
 * 00000001C00038C9: movzx   r9d, r15w
 * 00000001C00038CD: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00038D3: nop
 * 00000001C00038D4: jmp     loc_1C00019F3
 * 00000001C00038D9: mov     esi, 0Ah
 * 00000001C00038DE: lea     rbp, aNull_0; "NULL"
 * 00000001C00038E5: jmp     loc_1C0001A20
 */
