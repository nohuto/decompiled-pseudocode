/*
 * XREFs of ExpandedMonitorSpace @ 0x1C00A6530
 * Callers:
 *     <none>
 * Callees:
 *     ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z @ 0x1C0055F40 (-ExpandMonitorSpaceVertex@@YA-AUtagPOINT@@HGU1@@Z.c)
 *     MinimumMonitorDpi @ 0x1C00569C8 (MinimumMonitorDpi.c)
 */

/*
 * Hex-Rays decompilation failed for ExpandedMonitorSpace @ 0x1C00A6530
 * Reason: Hex-Rays returned no pseudocode for 0x1C00A6530
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00A6530: mov     [rsp+arg_0], rbx
 * 00000001C00A6535: mov     [rsp+arg_8], rsi
 * 00000001C00A653A: push    rdi
 * 00000001C00A653B: sub     rsp, 20h
 * 00000001C00A653F: mov     rdi, rcx
 * 00000001C00A6542: call    MinimumMonitorDpi
 * 00000001C00A6547: movzx   esi, ax
 * 00000001C00A654A: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00A6550: mov     ebx, 1
 * 00000001C00A6555: test    dword ptr [rax+308h], 2000h
 * 00000001C00A655F: jnz     short loc_1C00A6577
 * 00000001C00A6561: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00A6567: test    dword ptr [rax+308h], 4000h
 * 00000001C00A6571: jnz     short loc_1C00A6577
 * 00000001C00A6573: mov     ecx, ebx
 * 00000001C00A6575: jmp     short loc_1C00A6579
 * 00000001C00A6577: xor     ecx, ecx; int
 * 00000001C00A6579: mov     r8, cs:gpDispInfo
 * 00000001C00A6580: movzx   edx, si; unsigned __int16
 * 00000001C00A6583: mov     r8, [r8+68h]; struct tagPOINT
 * 00000001C00A6587: call    ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z; ExpandMonitorSpaceVertex(int,ushort,tagPOINT)
 * 00000001C00A658C: mov     [rdi], rax
 * 00000001C00A658F: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00A6595: test    dword ptr [rax+308h], 2000h
 * 00000001C00A659F: jnz     short loc_1C00A65B3
 * 00000001C00A65A1: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00A65A7: test    dword ptr [rax+308h], 4000h
 * 00000001C00A65B1: jz      short loc_1C00A65B5
 * 00000001C00A65B3: xor     ebx, ebx
 * 00000001C00A65B5: mov     r8, cs:gpDispInfo
 * 00000001C00A65BC: movzx   edx, si; unsigned __int16
 * 00000001C00A65BF: mov     ecx, ebx; int
 * 00000001C00A65C1: mov     r8, [r8+70h]; struct tagPOINT
 * 00000001C00A65C5: call    ?ExpandMonitorSpaceVertex@@YA?AUtagPOINT@@HGU1@@Z; ExpandMonitorSpaceVertex(int,ushort,tagPOINT)
 * 00000001C00A65CA: mov     rbx, [rsp+28h+arg_0]
 * 00000001C00A65CF: mov     rsi, [rsp+28h+arg_8]
 * 00000001C00A65D4: mov     [rdi+8], rax
 * 00000001C00A65D8: add     rsp, 20h
 * 00000001C00A65DC: pop     rdi
 * 00000001C00A65DD: retn
 */
