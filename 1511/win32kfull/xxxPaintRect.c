/*
 * XREFs of xxxPaintRect @ 0x1C00E7A28
 * Callers:
 *     xxxFillWindow @ 0x1C00E79A8 (xxxFillWindow.c)
 * Callees:
 *     FillRect @ 0x1C003C7F0 (FillRect.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     GreSetBrushOrg @ 0x1C00E7AF0 (GreSetBrushOrg.c)
 *     xxxGetControlColor @ 0x1C00E7BB4 (xxxGetControlColor.c)
 */

/*
 * Hex-Rays decompilation failed for xxxPaintRect @ 0x1C00E7A28
 * Reason: Hex-Rays returned no pseudocode for 0x1C00E7A28
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00E7A28: mov     rax, rsp
 * 00000001C00E7A2B: mov     [rax+10h], rbx
 * 00000001C00E7A2F: mov     [rax+18h], rbp
 * 00000001C00E7A33: mov     [rax+20h], rsi
 * 00000001C00E7A37: push    rdi
 * 00000001C00E7A38: sub     rsp, 20h
 * 00000001C00E7A3C: and     dword ptr [rax+8], 0
 * 00000001C00E7A40: mov     rsi, r9
 * 00000001C00E7A43: and     dword ptr [rax+0Ch], 0
 * 00000001C00E7A47: mov     rdi, r8
 * 00000001C00E7A4A: mov     rbp, rdx
 * 00000001C00E7A4D: mov     rbx, rcx
 * 00000001C00E7A50: test    rcx, rcx
 * 00000001C00E7A53: jz      loc_1C01A18BE
 * 00000001C00E7A59: mov     rcx, rbx
 * 00000001C00E7A5C: call    _GetDesktopWindow
 * 00000001C00E7A61: lea     r9, [rsp+28h+arg_0]
 * 00000001C00E7A66: mov     rcx, rdi; HDC
 * 00000001C00E7A69: cmp     rbx, rax
 * 00000001C00E7A6C: jz      loc_1C01A18DC
 * 00000001C00E7A72: mov     r8d, [rbx+84h]
 * 00000001C00E7A79: sub     r8d, [rdx+84h]
 * 00000001C00E7A80: mov     edx, [rbx+80h]
 * 00000001C00E7A86: sub     edx, [rbp+80h]
 * 00000001C00E7A8C: call    GreSetBrushOrg
 * 00000001C00E7A91: cmp     rsi, 7
 * 00000001C00E7A95: jnb     short loc_1C00E7AAF
 * 00000001C00E7A97: lea     r9d, [rsi+132h]
 * 00000001C00E7A9E: mov     r8, rdi
 * 00000001C00E7AA1: mov     rdx, rbp
 * 00000001C00E7AA4: mov     rcx, rbx
 * 00000001C00E7AA7: call    xxxGetControlColor
 * 00000001C00E7AAC: mov     rsi, rax
 * 00000001C00E7AAF: mov     rdx, [rsp+28h+arg_20]; LPCRECT
 * 00000001C00E7AB4: mov     r8, rsi; HBRUSH
 * 00000001C00E7AB7: mov     rcx, rdi; HDC
 * 00000001C00E7ABA: call    FillRect
 * 00000001C00E7ABF: mov     r8d, [rsp+28h+arg_4]
 * 00000001C00E7AC4: xor     r9d, r9d
 * 00000001C00E7AC7: mov     edx, [rsp+28h+arg_0]
 * 00000001C00E7ACB: mov     rcx, rdi; HDC
 * 00000001C00E7ACE: call    GreSetBrushOrg
 * 00000001C00E7AD3: mov     rbx, [rsp+28h+arg_8]
 * 00000001C00E7AD8: mov     eax, 1
 * 00000001C00E7ADD: mov     rbp, [rsp+28h+arg_10]
 * 00000001C00E7AE2: mov     rsi, [rsp+28h+arg_18]
 * 00000001C00E7AE7: add     rsp, 20h
 * 00000001C00E7AEB: pop     rdi
 * 00000001C00E7AEC: retn
 * 00000001C01A18BE: mov     rax, cs:__imp_gptiCurrent
 * 00000001C01A18C5: mov     rcx, [rax]
 * 00000001C01A18C8: mov     rax, [rcx+198h]
 * 00000001C01A18CF: mov     rcx, [rax+8]
 * 00000001C01A18D3: mov     rbx, [rcx+10h]
 * 00000001C01A18D7: jmp     loc_1C00E7A59
 * 00000001C01A18DC: xor     r8d, r8d
 * 00000001C01A18DF: xor     edx, edx
 * 00000001C01A18E1: jmp     loc_1C00E7A8C
 */
