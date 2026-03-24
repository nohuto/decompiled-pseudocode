/*
 * XREFs of HmgAllocateObjectAttr @ 0x1C000C97C
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000C4E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C000C820 (NtGdiCreateRectRgn.c)
 *     GreSetBrushOwner @ 0x1C00367D0 (GreSetBrushOwner.c)
 * Callees:
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C000CAC8 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00B2E04 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 */

/*
 * Hex-Rays decompilation failed for HmgAllocateObjectAttr @ 0x1C000C97C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C97C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C97C: mov     [rsp+arg_8], rbx
 * 00000001C000C981: mov     [rsp+arg_10], rsi
 * 00000001C000C986: push    rdi
 * 00000001C000C987: sub     rsp, 20h
 * 00000001C000C98B: mov     rcx, gs:188h
 * 00000001C000C994: call    W32GetThreadWin32Thread
 * 00000001C000C999: xor     esi, esi
 * 00000001C000C99B: mov     rcx, [rax+20h]
 * 00000001C000C99F: test    rcx, rcx
 * 00000001C000C9A2: jnz     loc_1C000CA7F
 * 00000001C000C9A8: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C000C9AE: mov     rbx, rax
 * 00000001C000C9B1: call    GreAcquireHmgrSemaphore
 * 00000001C000C9B6: cmp     [rbx+30h], rsi
 * 00000001C000C9BA: jz      short loc_1C000CA02
 * 00000001C000C9BC: mov     rcx, [rbx+30h]
 * 00000001C000C9C0: test    rcx, rcx
 * 00000001C000C9C3: jz      short loc_1C000C9EA
 * 00000001C000C9C5: lea     rdi, [rbx+0D0h]
 * 00000001C000C9CC: mov     rsi, rcx
 * 00000001C000C9CF: mov     rax, [rdi]
 * 00000001C000C9D2: add     dword ptr [rax+10h], 0FFFFFFFFh
 * 00000001C000C9D6: mov     ecx, [rax+10h]
 * 00000001C000C9D9: jz      loc_1C000CA8C
 * 00000001C000C9DF: dec     ecx
 * 00000001C000C9E1: mov     rcx, [rax+rcx*8+18h]
 * 00000001C000C9E6: mov     [rbx+30h], rcx
 * 00000001C000C9EA: call    GreReleaseHmgrSemaphore
 * 00000001C000C9EF: mov     rax, rsi
 * 00000001C000C9F2: mov     rbx, [rsp+28h+arg_8]
 * 00000001C000C9F7: mov     rsi, [rsp+28h+arg_10]
 * 00000001C000C9FC: add     rsp, 20h
 * 00000001C000CA00: pop     rdi
 * 00000001C000CA01: retn
 * 00000001C000CA02: lea     rcx, [rsp+28h+arg_0]; void **
 * 00000001C000CA07: call    ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z; HmgAllocateSecureUserMemory(void * *)
 * 00000001C000CA0C: mov     rdi, rax
 * 00000001C000CA0F: test    rax, rax
 * 00000001C000CA12: jz      short loc_1C000C9BC
 * 00000001C000CA14: xor     r8d, r8d
 * 00000001C000CA17: mov     edx, 66616247h
 * 00000001C000CA1C: mov     ecx, 568h; Size
 * 00000001C000CA21: call    PALLOCMEM2
 * 00000001C000CA26: test    rax, rax
 * 00000001C000CA29: jz      loc_1C008F4C2
 * 00000001C000CA2F: lea     rcx, [rbx+0D0h]
 * 00000001C000CA36: mov     rdx, [rcx]
 * 00000001C000CA39: mov     [rax], rdx
 * 00000001C000CA3C: mov     [rax+8], rcx
 * 00000001C000CA40: cmp     [rdx+8], rcx
 * 00000001C000CA44: jnz     loc_1C008F4DB
 * 00000001C000CA4A: mov     [rdx+8], rax
 * 00000001C000CA4E: mov     edx, 0AAh
 * 00000001C000CA53: mov     [rcx], rax
 * 00000001C000CA56: lea     rcx, [rax+18h]
 * 00000001C000CA5A: mov     [rax+10h], edx
 * 00000001C000CA5D: lea     rax, [rdi+0FD8h]
 * 00000001C000CA64: mov     [rbx+30h], rax
 * 00000001C000CA68: mov     [rcx], rdi
 * 00000001C000CA6B: add     rdi, 18h
 * 00000001C000CA6F: lea     rcx, [rcx+8]
 * 00000001C000CA73: sub     rdx, 1
 * 00000001C000CA77: jz      loc_1C000C9BC
 * 00000001C000CA7D: jmp     short loc_1C000CA68
 * 00000001C000CA7F: and     qword ptr [rax+20h], 0
 * 00000001C000CA84: mov     rsi, rcx
 * 00000001C000CA87: jmp     loc_1C000C9EF
 * 00000001C000CA8C: mov     rdx, [rax]
 * 00000001C000CA8F: mov     rcx, [rax+8]
 * 00000001C000CA93: cmp     [rdx+8], rax
 * 00000001C000CA97: jnz     short loc_1C000CAC0
 * 00000001C000CA99: cmp     [rcx], rax
 * 00000001C000CA9C: jnz     short loc_1C000CAC0
 * 00000001C000CA9E: mov     [rcx], rdx
 * 00000001C000CAA1: mov     [rdx+8], rcx
 * 00000001C000CAA5: mov     rcx, rax
 * 00000001C000CAA8: call    Win32FreePool
 * 00000001C000CAAD: cmp     [rdi], rdi
 * 00000001C000CAB0: jnz     loc_1C008F4E2
 * 00000001C000CAB6: and     qword ptr [rbx+30h], 0
 * 00000001C000CABB: jmp     loc_1C000C9EA
 * 00000001C000CAC0: mov     ecx, 3
 * 00000001C000CAC5: int     29h; Win8: RtlFailFast(ecx)
 * 00000001C008F4C2: mov     rdx, [rsp+28h+arg_0]; void *
 * 00000001C008F4C7: mov     rcx, rdi; void *
 * 00000001C008F4CA: call    ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z; HmgFreeAllocateSecureUserMemory(void *,void *)
 * 00000001C008F4CF: call    GreReleaseHmgrSemaphore
 * 00000001C008F4D4: xor     eax, eax
 * 00000001C008F4D6: jmp     loc_1C000C9F2
 * 00000001C008F4DB: mov     ecx, 3
 * 00000001C008F4E0: int     29h; Win8: RtlFailFast(ecx)
 * 00000001C008F4E2: mov     rcx, [rdi]
 * 00000001C008F4E5: mov     eax, [rcx+10h]
 * 00000001C008F4E8: dec     eax
 * 00000001C008F4EA: mov     rcx, [rcx+rax*8+18h]
 * 00000001C008F4EF: jmp     loc_1C000C9E6
 */
