/*
 * XREFs of ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x18003AD28
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x18003A6B0 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x18003AE2C (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

/*
 * Hex-Rays decompilation failed for ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x18003AD28
 * Reason: Hex-Rays returned no pseudocode for 0x18003AD28
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018003AD28: mov     rax, rsp
 * 000000018003AD2B: mov     [rax+8], rbx
 * 000000018003AD2F: mov     [rax+10h], rbp
 * 000000018003AD33: mov     [rax+18h], rsi
 * 000000018003AD37: mov     [rax+20h], rdi
 * 000000018003AD3B: push    r13
 * 000000018003AD3D: sub     rsp, 40h
 * 000000018003AD41: mov     rsi, r9
 * 000000018003AD44: mov     rbp, r8
 * 000000018003AD47: mov     rdi, rdx
 * 000000018003AD4A: xor     ebx, ebx
 * 000000018003AD4C: mov     rcx, qword ptr cs:WPP_GLOBAL_Control.Data1
 * 000000018003AD53: lea     r13, WPP_GLOBAL_Control
 * 000000018003AD5A: cmp     rcx, r13
 * 000000018003AD5D: jz      short loc_18003AD6F
 * 000000018003AD5F: test    byte ptr [rcx+1Ch], 10h
 * 000000018003AD63: jz      short loc_18003AD6F
 * 000000018003AD65: cmp     byte ptr [rcx+19h], 4
 * 000000018003AD69: jnb     loc_18004ACEA
 * 000000018003AD6F: mov     rcx, rdi; String2
 * 000000018003AD72: call    ?ServerEndpointIsStarted@@YA_NPEBG@Z; ServerEndpointIsStarted(ushort const *)
 * 000000018003AD77: test    al, al
 * 000000018003AD79: jnz     loc_18004AD26
 * 000000018003AD7F: mov     r9, rsi; SecurityDescriptor
 * 000000018003AD82: lea     rcx, String2; "ncalrpc"
 * 000000018003AD89: mov     r8, rdi; Endpoint
 * 000000018003AD8C: mov     edx, 0Ah; MaxCalls
 * 000000018003AD91: call    cs:__imp_RpcServerUseProtseqEpW
 * 000000018003AD97: mov     ebx, eax
 * 000000018003AD99: mov     rcx, qword ptr cs:WPP_GLOBAL_Control.Data1
 * 000000018003ADA0: cmp     rcx, r13
 * 000000018003ADA3: jz      short loc_18003ADB5
 * 000000018003ADA5: test    byte ptr [rcx+1Ch], 10h
 * 000000018003ADA9: jz      short loc_18003ADB5
 * 000000018003ADAB: cmp     byte ptr [rcx+19h], 4
 * 000000018003ADAF: jnb     loc_18004AD08
 * 000000018003ADB5: test    ebx, ebx
 * 000000018003ADB7: jnz     short loc_18003AE09
 * 000000018003ADB9: mov     [rsp+48h+var_10], rsi
 * 000000018003ADBE: lea     rax, ?AudioSrvRpcIfCallback@@YAJPEAX0@Z; AudioSrvRpcIfCallback(void *,void *)
 * 000000018003ADC5: mov     [rsp+48h+var_18], rax
 * 000000018003ADCA: mov     r9d, 21h ; '!'
 * 000000018003ADD0: and     [rsp+48h+var_20], 0
 * 000000018003ADD5: xor     r8d, r8d
 * 000000018003ADD8: xor     edx, edx
 * 000000018003ADDA: mov     [rsp+48h+var_28], 4D2h
 * 000000018003ADE2: mov     rcx, rbp
 * 000000018003ADE5: call    cs:__imp_RpcServerRegisterIf3
 * 000000018003ADEB: mov     ebx, eax
 * 000000018003ADED: mov     rcx, qword ptr cs:WPP_GLOBAL_Control.Data1
 * 000000018003ADF4: cmp     rcx, r13
 * 000000018003ADF7: jz      short loc_18003AE09
 * 000000018003ADF9: test    byte ptr [rcx+1Ch], 10h
 * 000000018003ADFD: jz      short loc_18003AE09
 * 000000018003ADFF: cmp     byte ptr [rcx+19h], 4
 * 000000018003AE03: jnb     loc_18004AD65
 * 000000018003AE09: mov     rbp, [rsp+48h+arg_8]
 * 000000018003AE0E: mov     eax, ebx
 * 000000018003AE10: mov     rbx, [rsp+48h+arg_0]
 * 000000018003AE15: mov     rsi, [rsp+48h+arg_10]
 * 000000018003AE1A: mov     rdi, [rsp+48h+arg_18]
 * 000000018003AE1F: add     rsp, 40h
 * 000000018003AE23: pop     r13
 * 000000018003AE25: retn
 * 000000018004ACEA: mov     rcx, [rcx+10h]
 * 000000018004ACEE: lea     r8, WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids
 * 000000018004ACF5: mov     edx, 18h
 * 000000018004ACFA: mov     r9, rdi
 * 000000018004ACFD: call    WPP_SF_S
 * 000000018004AD02: nop
 * 000000018004AD03: jmp     loc_18003AD6F
 * 000000018004AD08: mov     rcx, [rcx+10h]
 * 000000018004AD0C: lea     r8, WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids
 * 000000018004AD13: mov     edx, 19h
 * 000000018004AD18: mov     r9d, eax
 * 000000018004AD1B: call    WPP_SF_D
 * 000000018004AD20: nop
 * 000000018004AD21: jmp     loc_18003ADB5
 * 000000018004AD26: mov     rcx, qword ptr cs:WPP_GLOBAL_Control.Data1
 * 000000018004AD2D: cmp     rcx, r13
 * 000000018004AD30: jz      loc_18003ADB9
 * 000000018004AD36: test    byte ptr [rcx+1Ch], 10h
 * 000000018004AD3A: jz      loc_18003ADB9
 * 000000018004AD40: cmp     byte ptr [rcx+19h], 4
 * 000000018004AD44: jb      loc_18003ADB9
 * 000000018004AD4A: mov     rcx, [rcx+10h]
 * 000000018004AD4E: lea     r8, WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids
 * 000000018004AD55: mov     edx, 1Ah
 * 000000018004AD5A: call    WPP_SF_
 * 000000018004AD5F: nop
 * 000000018004AD60: jmp     loc_18003ADB5
 * 000000018004AD65: mov     rcx, [rcx+10h]
 * 000000018004AD69: lea     r8, WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids
 * 000000018004AD70: mov     edx, 1Bh
 * 000000018004AD75: mov     r9d, eax
 * 000000018004AD78: call    WPP_SF_D
 * 000000018004AD7D: nop
 * 000000018004AD7E: jmp     loc_18003AE09
 */
