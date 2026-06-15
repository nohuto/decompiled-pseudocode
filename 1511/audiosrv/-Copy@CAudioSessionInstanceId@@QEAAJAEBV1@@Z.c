/*
 * XREFs of ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180014DF0
 * Callers:
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x1800279F0 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 * Callees:
 *     ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z @ 0x180011AB4 (-Copy@CAudioEndpointId@@QEAAJAEBV1@@Z.c)
 *     ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z @ 0x180011E58 (-Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z.c)
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800183F4 (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

/*
 * Hex-Rays decompilation failed for ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180014DF0
 * Reason: Hex-Rays returned no pseudocode for 0x180014DF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180014DF0: push    rdi
 * 0000000180014DF2: sub     rsp, 30h
 * 0000000180014DF6: mov     [rsp+38h+var_18], 0FFFFFFFFFFFFFFFEh
 * 0000000180014DFF: mov     [rsp+38h+arg_8], rbx
 * 0000000180014E04: mov     [rsp+38h+arg_10], rsi
 * 0000000180014E09: mov     rdi, rdx
 * 0000000180014E0C: mov     rsi, rcx
 * 0000000180014E0F: call    ?Copy@CAudioEndpointId@@QEAAJAEBV1@@Z; CAudioEndpointId::Copy(CAudioEndpointId const &)
 * 0000000180014E14: mov     ebx, eax
 * 0000000180014E16: test    eax, eax
 * 0000000180014E18: js      loc_180052018
 * 0000000180014E1E: mov     eax, [rdi+38h]
 * 0000000180014E21: mov     [rsi+38h], eax
 * 0000000180014E24: mov     eax, [rdi+3Ch]
 * 0000000180014E27: mov     [rsi+3Ch], eax
 * 0000000180014E2A: mov     eax, [rdi+40h]
 * 0000000180014E2D: mov     [rsi+40h], eax
 * 0000000180014E30: lea     rdx, [rdi+8]; struct CAppAudioSessionId *
 * 0000000180014E34: lea     rcx, [rsi+8]; this
 * 0000000180014E38: call    ?Copy@CAppAudioSessionId@@QEAAJAEBV1@@Z; CAppAudioSessionId::Copy(CAppAudioSessionId const &)
 * 0000000180014E3D: mov     ebx, eax
 * 0000000180014E3F: test    eax, eax
 * 0000000180014E41: js      loc_180052018
 * 0000000180014E47: xor     ebx, ebx
 * 0000000180014E49: lea     rcx, [rsi+48h]
 * 0000000180014E4D: lea     rdx, [rdi+48h]
 * 0000000180014E51: call    ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z; ATL::CSimpleStringT<ushort,0>::operator=(ATL::CSimpleStringT<ushort,0> const &)
 * 0000000180014E56: nop
 * 0000000180014E57: mov     eax, ebx
 * 0000000180014E59: mov     rbx, [rsp+38h+arg_8]
 * 0000000180014E5E: mov     rsi, [rsp+38h+arg_10]
 * 0000000180014E63: add     rsp, 30h
 * 0000000180014E67: pop     rdi
 * 0000000180014E68: retn
 * 000000018005200C: mov     ebx, [rsp+38h+arg_0]
 * 0000000180052010: test    ebx, ebx
 * 0000000180052012: jns     loc_180014E57
 * 0000000180052018: lea     rax, WPP_GLOBAL_Control
 * 000000018005201F: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000180052026: cmp     rcx, rax
 * 0000000180052029: jz      loc_180014E57
 * 000000018005202F: test    byte ptr [rcx+1Ch], 40h
 * 0000000180052033: jz      loc_180014E57
 * 0000000180052039: cmp     byte ptr [rcx+19h], 2
 * 000000018005203D: jb      loc_180014E57
 * 0000000180052043: mov     edx, 19h
 * 0000000180052048: mov     r9d, ebx
 * 000000018005204B: lea     r8, WPP_c170edd1854f90c7cdf4fa9bb21811dc_Traceguids
 * 0000000180052052: mov     rcx, [rcx+10h]
 * 0000000180052056: call    WPP_SF_D
 * 000000018005205B: nop
 * 000000018005205C: jmp     loc_180014E57
 */
