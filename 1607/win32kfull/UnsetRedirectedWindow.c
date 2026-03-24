/*
 * XREFs of UnsetRedirectedWindow @ 0x1C00D7B74
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 *     CleanupWindowRedirection @ 0x1C00567B0 (CleanupWindowRedirection.c)
 *     UnsetLayeredWindow @ 0x1C0066114 (UnsetLayeredWindow.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     xxxPrintWindow @ 0x1C01DE6D4 (xxxPrintWindow.c)
 * Callees:
 *     GetRedirectionBitmap @ 0x1C0053B30 (GetRedirectionBitmap.c)
 *     HintSpriteShape @ 0x1C00623A8 (HintSpriteShape.c)
 *     UnredirectDCEs @ 0x1C0063228 (UnredirectDCEs.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0063658 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00D7C3C (DeleteOldRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00D7CB8 (DeleteOrSetRedirectionBitmap.c)
 */

/*
 * Hex-Rays decompilation failed for UnsetRedirectedWindow @ 0x1C00D7B74
 * Reason: Hex-Rays returned no pseudocode for 0x1C00D7B74
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00D7B74: mov     [rsp+arg_0], rbx
 * 00000001C00D7B79: mov     [rsp+arg_8], rsi
 * 00000001C00D7B7E: push    rdi
 * 00000001C00D7B7F: sub     rsp, 20h
 * 00000001C00D7B83: mov     r10d, edx
 * 00000001C00D7B86: mov     edi, 1
 * 00000001C00D7B8B: movzx   edx, cs:atomLayer
 * 00000001C00D7B92: mov     r8d, edi
 * 00000001C00D7B95: mov     rbx, rcx
 * 00000001C00D7B98: call    _GetProp
 * 00000001C00D7B9D: mov     rsi, rax
 * 00000001C00D7BA0: mov     eax, r10d
 * 00000001C00D7BA3: not     eax
 * 00000001C00D7BA5: and     [rsi+20h], eax
 * 00000001C00D7BA8: test    dil, r10b
 * 00000001C00D7BAB: jz      short loc_1C00D7BD0
 * 00000001C00D7BAD: test    byte ptr [rbx+32h], 20h
 * 00000001C00D7BB1: jnz     short loc_1C00D7BD0
 * 00000001C00D7BB3: mov     rax, cs:__imp_gpDispInfo
 * 00000001C00D7BBA: xor     r9d, r9d
 * 00000001C00D7BBD: xor     r8d, r8d
 * 00000001C00D7BC0: mov     rdx, rbx
 * 00000001C00D7BC3: mov     rcx, [rax]
 * 00000001C00D7BC6: mov     rcx, [rcx]
 * 00000001C00D7BC9: call    HintSpriteShape
 * 00000001C00D7BCE: mov     edi, eax
 * 00000001C00D7BD0: cmp     dword ptr [rsi+20h], 0
 * 00000001C00D7BD4: jnz     short loc_1C00D7C2A
 * 00000001C00D7BD6: mov     r8d, 0B20h
 * 00000001C00D7BDC: mov     r9d, 1
 * 00000001C00D7BE2: mov     rdx, rbx
 * 00000001C00D7BE5: xor     ecx, ecx
 * 00000001C00D7BE7: call    SetOrClrWF
 * 00000001C00D7BEC: mov     rcx, rbx
 * 00000001C00D7BEF: call    DeleteOldRedirectionBitmap
 * 00000001C00D7BF4: mov     rcx, rbx
 * 00000001C00D7BF7: call    GetRedirectionBitmap
 * 00000001C00D7BFC: mov     rsi, rax
 * 00000001C00D7BFF: test    rax, rax
 * 00000001C00D7C02: jz      short loc_1C00D7C2A
 * 00000001C00D7C04: mov     rcx, rbx; struct tagWND *
 * 00000001C00D7C07: call    UnredirectDCEs
 * 00000001C00D7C0C: xor     edx, edx; HBITMAP
 * 00000001C00D7C0E: mov     rcx, rbx; struct tagWND *
 * 00000001C00D7C11: lea     r8d, [rdx+1]; int
 * 00000001C00D7C15: call    ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z; SetRedirectionBitmap(tagWND *,HBITMAP__ * const,int)
 * 00000001C00D7C1A: xor     r8d, r8d
 * 00000001C00D7C1D: mov     rdx, rsi
 * 00000001C00D7C20: mov     rcx, rbx
 * 00000001C00D7C23: mov     edi, eax
 * 00000001C00D7C25: call    DeleteOrSetRedirectionBitmap
 * 00000001C00D7C2A: mov     rbx, [rsp+28h+arg_0]
 * 00000001C00D7C2F: mov     eax, edi
 * 00000001C00D7C31: mov     rsi, [rsp+28h+arg_8]
 * 00000001C00D7C36: add     rsp, 20h
 * 00000001C00D7C3A: pop     rdi
 * 00000001C00D7C3B: retn
 */
