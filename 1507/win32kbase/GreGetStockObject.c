/*
 * XREFs of GreGetStockObject @ 0x1C00332C0
 * Callers:
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     CleanupGDI @ 0x1C006D050 (CleanupGDI.c)
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 *     bInitICM @ 0x1C0137F6C (bInitICM.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for GreGetStockObject @ 0x1C00332C0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00332C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00332C0: mov     [rsp+arg_0], rbx
 * 00000001C00332C5: push    rdi
 * 00000001C00332C6: sub     rsp, 20h
 * 00000001C00332CA: movsxd  rbx, ecx
 * 00000001C00332CD: or      edi, 0FFFFFFFFh
 * 00000001C00332D0: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00332D6: test    rax, rax
 * 00000001C00332D9: jz      short loc_1C00332ED
 * 00000001C00332DB: mov     edi, [rax+308h]
 * 00000001C00332E1: bt      edi, 0Eh
 * 00000001C00332E5: jb      short loc_1C003331F
 * 00000001C00332E7: shr     edi, 0Dh
 * 00000001C00332EA: and     edi, 1
 * 00000001C00332ED: lea     rcx, cs:1C0000000h
 * 00000001C00332F4: cmp     ebx, 11h
 * 00000001C00332F7: ja      short loc_1C0033307
 * 00000001C00332F9: mov     eax, 32400h
 * 00000001C00332FE: bt      eax, ebx
 * 00000001C0033301: jnb     short loc_1C0033307
 * 00000001C0033303: test    edi, edi
 * 00000001C0033305: jz      short loc_1C0033326
 * 00000001C0033307: cmp     ebx, 15h
 * 00000001C003330A: ja      short loc_1C0033335
 * 00000001C003330C: mov     rax, qword ptr rva WPP_MAIN_CB.DeviceQueue.20h[rcx+rbx*8]
 * 00000001C0033314: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0033319: add     rsp, 20h
 * 00000001C003331D: pop     rdi
 * 00000001C003331E: retn
 * 00000001C003331F: mov     edi, 2
 * 00000001C0033324: jmp     short loc_1C00332ED
 * 00000001C0033326: mov     rax, rva ?gahStockObjects96@@3PAPEAXA[rcx+rbx*8]; void * near * gahStockObjects96 ...
 * 00000001C003332E: test    rax, rax
 * 00000001C0033331: jz      short loc_1C0033307
 * 00000001C0033333: jmp     short loc_1C0033314
 * 00000001C0033335: xor     eax, eax
 * 00000001C0033337: jmp     short loc_1C0033314
 */
