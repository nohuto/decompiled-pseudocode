/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C005AB48
 * Callers:
 *     DestroyProcessInfo @ 0x1C0050D24 (DestroyProcessInfo.c)
 *     CleanupGDI @ 0x1C006D050 (CleanupGDI.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C0036AA0 (GreLockVisRgn.c)
 *     DestroyCacheDC @ 0x1C005B4A0 (DestroyCacheDC.c)
 */

/*
 * Hex-Rays decompilation failed for DelayedDestroyCacheDC @ 0x1C005AB48
 * Reason: Hex-Rays returned no pseudocode for 0x1C005AB48
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005AB48: mov     [rsp+arg_0], rbx
 * 00000001C005AB4D: mov     [rsp+arg_8], rbp
 * 00000001C005AB52: mov     [rsp+arg_10], rsi
 * 00000001C005AB57: push    rdi
 * 00000001C005AB58: sub     rsp, 20h
 * 00000001C005AB5C: mov     ebp, ecx
 * 00000001C005AB5E: mov     esi, 1
 * 00000001C005AB63: mov     rcx, cs:gpDispInfo
 * 00000001C005AB6A: mov     rcx, [rcx]
 * 00000001C005AB6D: call    GreLockVisRgn
 * 00000001C005AB72: mov     rdi, cs:gpDispInfo
 * 00000001C005AB79: add     rdi, 40h ; '@'
 * 00000001C005AB7D: mov     rbx, [rdi]
 * 00000001C005AB80: test    rbx, rbx
 * 00000001C005AB83: jz      short loc_1C005ABA5
 * 00000001C005AB85: mov     eax, [rbx+40h]
 * 00000001C005AB88: test    eax, eax
 * 00000001C005AB8A: js      short loc_1C005ABD3
 * 00000001C005AB8C: bt      eax, 16h
 * 00000001C005AB90: jb      short loc_1C005ABE3
 * 00000001C005AB92: cmp     rbx, [rdi]
 * 00000001C005AB95: cmovz   rdi, rbx
 * 00000001C005AB99: mov     rbx, [rdi]
 * 00000001C005AB9C: test    rbx, rbx
 * 00000001C005AB9F: jnz     short loc_1C005AB85
 * 00000001C005ABA1: test    esi, esi
 * 00000001C005ABA3: jz      short loc_1C005ABB0
 * 00000001C005ABA5: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C005ABAB: btr     dword ptr [rax+0Ch], 9
 * 00000001C005ABB0: mov     rcx, cs:gpDispInfo
 * 00000001C005ABB7: mov     rcx, [rcx]
 * 00000001C005ABBA: mov     rbx, [rsp+28h+arg_0]
 * 00000001C005ABBF: mov     rbp, [rsp+28h+arg_8]
 * 00000001C005ABC4: mov     rsi, [rsp+28h+arg_10]
 * 00000001C005ABC9: add     rsp, 20h
 * 00000001C005ABCD: pop     rdi
 * 00000001C005ABCE: jmp     GreUnlockVisRgn
 * 00000001C005ABD3: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C005ABD9: cmp     [rbx+50h], rax
 * 00000001C005ABDD: jnz     short loc_1C005AB92
 * 00000001C005ABDF: test    ebp, ebp
 * 00000001C005ABE1: jz      short loc_1C005ABF1
 * 00000001C005ABE3: mov     rdx, [rbx+8]
 * 00000001C005ABE7: mov     rcx, rdi
 * 00000001C005ABEA: call    DestroyCacheDC
 * 00000001C005ABEF: jmp     short loc_1C005AB92
 * 00000001C005ABF1: xor     esi, esi
 * 00000001C005ABF3: jmp     short loc_1C005AB92
 */
