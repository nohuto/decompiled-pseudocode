/*
 * XREFs of HmgFreeDcAttr @ 0x1C005A7F8
 * Callers:
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GdiThreadCallout @ 0x1C005A6A0 (GdiThreadCallout.c)
 *     bFreeDCAttributesWorker @ 0x1C00BFBF0 (bFreeDCAttributesWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 */

/*
 * Hex-Rays decompilation failed for HmgFreeDcAttr @ 0x1C005A7F8
 * Reason: Hex-Rays returned no pseudocode for 0x1C005A7F8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005A7F8: mov     [rsp+arg_0], rbx
 * 00000001C005A7FD: mov     [rsp+arg_8], rsi
 * 00000001C005A802: push    rdi
 * 00000001C005A803: sub     rsp, 20h
 * 00000001C005A807: mov     rdi, rcx
 * 00000001C005A80A: mov     rcx, gs:188h
 * 00000001C005A813: call    W32GetThreadWin32Thread
 * 00000001C005A818: test    rdi, rdi
 * 00000001C005A81B: jz      short loc_1C005A86B
 * 00000001C005A81D: test    rax, rax
 * 00000001C005A820: jz      short loc_1C005A86B
 * 00000001C005A822: cmp     qword ptr [rax+18h], 0
 * 00000001C005A827: jz      loc_1C009EC3C
 * 00000001C005A82D: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C005A833: mov     rsi, rax
 * 00000001C005A836: test    rax, rax
 * 00000001C005A839: jz      short loc_1C005A86B
 * 00000001C005A83B: call    GreAcquireHmgrSemaphore
 * 00000001C005A840: lea     rbx, [rsi+0C0h]
 * 00000001C005A847: cmp     [rbx], rbx
 * 00000001C005A84A: jz      short loc_1C005A87B
 * 00000001C005A84C: mov     rdx, [rbx]
 * 00000001C005A84F: cmp     dword ptr [rdx+10h], 9
 * 00000001C005A853: jz      short loc_1C005A87B
 * 00000001C005A855: inc     dword ptr [rdx+10h]
 * 00000001C005A858: mov     eax, [rdx+10h]
 * 00000001C005A85B: dec     eax
 * 00000001C005A85D: mov     [rdx+rax*8+18h], rdi
 * 00000001C005A862: mov     [rsi+28h], rdi
 * 00000001C005A866: call    GreReleaseHmgrSemaphore
 * 00000001C005A86B: mov     rbx, [rsp+28h+arg_0]
 * 00000001C005A870: mov     rsi, [rsp+28h+arg_8]
 * 00000001C005A875: add     rsp, 20h
 * 00000001C005A879: pop     rdi
 * 00000001C005A87A: retn
 * 00000001C005A87B: xor     r8d, r8d
 * 00000001C005A87E: mov     edx, 66636447h
 * 00000001C005A883: lea     ecx, [r8+60h]; Size
 * 00000001C005A887: call    PALLOCMEM2
 * 00000001C005A88C: mov     rdx, rax
 * 00000001C005A88F: test    rax, rax
 * 00000001C005A892: jz      short loc_1C005A866
 * 00000001C005A894: mov     rax, [rbx]
 * 00000001C005A897: mov     [rdx], rax
 * 00000001C005A89A: mov     [rdx+8], rbx
 * 00000001C005A89E: cmp     [rax+8], rbx
 * 00000001C005A8A2: jnz     loc_1C009EC45
 * 00000001C005A8A8: mov     [rax+8], rdx
 * 00000001C005A8AC: mov     [rbx], rdx
 * 00000001C005A8AF: and     dword ptr [rdx+10h], 0
 * 00000001C005A8B3: jmp     short loc_1C005A855
 * 00000001C009EC3C: mov     [rax+18h], rdi
 * 00000001C009EC40: jmp     loc_1C005A86B
 * 00000001C009EC45: mov     ecx, 3
 * 00000001C009EC4A: int     29h; Win8: RtlFailFast(ecx)
 */
