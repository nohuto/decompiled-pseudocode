/*
 * XREFs of SeCaptureAtomTableCallout @ 0x140074BF4
 * Callers:
 *     PsConvertToGuiThread @ 0x14045D0C0 (PsConvertToGuiThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceEffectiveToken @ 0x1404124C0 (PsReferenceEffectiveToken.c)
 *     PsInvokeWin32Callout @ 0x140429010 (PsInvokeWin32Callout.c)
 */

/*
 * Hex-Rays decompilation failed for SeCaptureAtomTableCallout @ 0x140074BF4
 * Reason: Hex-Rays returned no pseudocode for 0x140074BF4
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140074BF4: mov     rax, rsp
 * 0000000140074BF7: push    rbx
 * 0000000140074BF8: sub     rsp, 30h
 * 0000000140074BFC: and     qword ptr [rax+20h], 0
 * 0000000140074C01: lea     r9, [rax+10h]
 * 0000000140074C05: mov     rcx, gs:188h
 * 0000000140074C0E: lea     r8, [rax+8]
 * 0000000140074C12: and     qword ptr [rax-18h], 0
 * 0000000140074C17: lea     rdx, [rax+18h]
 * 0000000140074C1B: call    PsReferenceEffectiveToken
 * 0000000140074C20: mov     rbx, rax
 * 0000000140074C23: test    dword ptr [rax+0C8h], 4000h
 * 0000000140074C2D: jnz     short loc_140074C42
 * 0000000140074C2F: mov     rcx, rax; Object
 * 0000000140074C32: mov     edx, 746C6644h; Tag
 * 0000000140074C37: call    ObfDereferenceObjectWithTag
 * 0000000140074C3C: add     rsp, 30h
 * 0000000140074C40: pop     rbx
 * 0000000140074C41: retn
 * 0000000140074C42: mov     rax, [rax+438h]
 * 0000000140074C49: cmp     qword ptr [rax+30h], 0
 * 0000000140074C4E: jz      short loc_140074C55
 * 0000000140074C50: mov     rcx, rbx
 * 0000000140074C53: jmp     short loc_140074C32
 * 0000000140074C55: mov     rax, gs:188h
 * 0000000140074C5E: mov     rcx, [rax+0B8h]
 * 0000000140074C65: mov     rax, [rcx+3B0h]
 * 0000000140074C6C: test    rax, rax
 * 0000000140074C6F: jz      short loc_140074C7B
 * 0000000140074C71: mov     eax, [rax+1C0h]
 * 0000000140074C77: test    al, 20h
 * 0000000140074C79: jnz     short loc_140074C50
 * 0000000140074C7B: xor     r9d, r9d
 * 0000000140074C7E: lea     rdx, [rsp+38h+arg_18]
 * 0000000140074C83: xor     r8d, r8d
 * 0000000140074C86: lea     ecx, [r9+2]
 * 0000000140074C8A: call    PsInvokeWin32Callout
 * 0000000140074C8F: mov     rdx, [rsp+38h+arg_18]
 * 0000000140074C94: test    rdx, rdx
 * 0000000140074C97: jz      short loc_140074C50
 * 0000000140074C99: mov     rcx, [rbx+438h]
 * 0000000140074CA0: xor     eax, eax
 * 0000000140074CA2: lock cmpxchg [rcx+30h], rdx
 * 0000000140074CA8: jnz     short loc_140074C50
 * 0000000140074CAA: mov     rax, [rsp+38h+arg_18]
 * 0000000140074CAF: lock inc dword ptr [rax+4]
 * 0000000140074CB3: jmp     short loc_140074C50
 */
