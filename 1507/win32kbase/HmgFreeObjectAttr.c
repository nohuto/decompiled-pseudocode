/*
 * XREFs of HmgFreeObjectAttr @ 0x1C005C5F0
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000C4E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C000C820 (NtGdiCreateRectRgn.c)
 *     GreSetBrushOwner @ 0x1C00367D0 (GreSetBrushOwner.c)
 *     NtGdiDeleteObjectApp @ 0x1C00417F0 (NtGdiDeleteObjectApp.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0042D40 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C005C2F0 (bDeleteBrush.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 */

/*
 * Hex-Rays decompilation failed for HmgFreeObjectAttr @ 0x1C005C5F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C005C5F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005C5F0: mov     [rsp+arg_0], rbx
 * 00000001C005C5F5: mov     [rsp+arg_8], rsi
 * 00000001C005C5FA: push    rdi
 * 00000001C005C5FB: sub     rsp, 20h
 * 00000001C005C5FF: mov     rdi, rcx
 * 00000001C005C602: mov     rcx, gs:188h
 * 00000001C005C60B: call    W32GetThreadWin32Thread
 * 00000001C005C610: test    rdi, rdi
 * 00000001C005C613: jz      short loc_1C005C662
 * 00000001C005C615: test    rax, rax
 * 00000001C005C618: jz      short loc_1C005C662
 * 00000001C005C61A: cmp     qword ptr [rax+20h], 0
 * 00000001C005C61F: jz      short loc_1C005C672
 * 00000001C005C621: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C005C627: mov     rsi, rax
 * 00000001C005C62A: test    rax, rax
 * 00000001C005C62D: jz      short loc_1C005C662
 * 00000001C005C62F: call    GreAcquireHmgrSemaphore
 * 00000001C005C634: lea     rbx, [rsi+0D0h]
 * 00000001C005C63B: cmp     [rbx], rbx
 * 00000001C005C63E: jz      short loc_1C005C678
 * 00000001C005C640: mov     rdx, [rbx]
 * 00000001C005C643: cmp     dword ptr [rdx+10h], 0AAh
 * 00000001C005C64A: jz      short loc_1C005C678
 * 00000001C005C64C: inc     dword ptr [rdx+10h]
 * 00000001C005C64F: mov     eax, [rdx+10h]
 * 00000001C005C652: dec     eax
 * 00000001C005C654: mov     [rdx+rax*8+18h], rdi
 * 00000001C005C659: mov     [rsi+30h], rdi
 * 00000001C005C65D: call    GreReleaseHmgrSemaphore
 * 00000001C005C662: mov     rbx, [rsp+28h+arg_0]
 * 00000001C005C667: mov     rsi, [rsp+28h+arg_8]
 * 00000001C005C66C: add     rsp, 20h
 * 00000001C005C670: pop     rdi
 * 00000001C005C671: retn
 * 00000001C005C672: mov     [rax+20h], rdi
 * 00000001C005C676: jmp     short loc_1C005C662
 * 00000001C005C678: xor     r8d, r8d
 * 00000001C005C67B: mov     edx, 66616247h
 * 00000001C005C680: mov     ecx, 568h; Size
 * 00000001C005C685: call    PALLOCMEM2
 * 00000001C005C68A: mov     rdx, rax
 * 00000001C005C68D: test    rax, rax
 * 00000001C005C690: jz      short loc_1C005C65D
 * 00000001C005C692: mov     rax, [rbx]
 * 00000001C005C695: mov     [rdx], rax
 * 00000001C005C698: mov     [rdx+8], rbx
 * 00000001C005C69C: cmp     [rax+8], rbx
 * 00000001C005C6A0: jnz     FatalListEntryError_17
 * 00000001C005C6A6: mov     [rax+8], rdx
 * 00000001C005C6AA: mov     [rbx], rdx
 * 00000001C005C6AD: and     dword ptr [rdx+10h], 0
 * 00000001C005C6B1: jmp     short loc_1C005C64C
 * 00000001C009EE1A: mov     ecx, 3
 * 00000001C009EE1F: int     29h; Win8: RtlFailFast(ecx)
 */
