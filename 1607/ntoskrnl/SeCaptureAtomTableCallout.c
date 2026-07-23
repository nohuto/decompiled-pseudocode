/*
 * XREFs of SeCaptureAtomTableCallout @ 0x140074C74
 * Callers:
 *     PsConvertToGuiThread @ 0x14045BF90 (PsConvertToGuiThread.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceEffectiveToken @ 0x140411380 (PsReferenceEffectiveToken.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 */

/*
 * Hex-Rays decompilation failed for SeCaptureAtomTableCallout @ 0x140074C74
 * Reason: Hex-Rays returned no pseudocode for 0x140074C74
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140074C74: mov     rax, rsp
 * 0000000140074C77: push    rbx
 * 0000000140074C78: sub     rsp, 30h
 * 0000000140074C7C: and     qword ptr [rax+20h], 0
 * 0000000140074C81: lea     r9, [rax+10h]
 * 0000000140074C85: mov     rcx, gs:188h
 * 0000000140074C8E: lea     r8, [rax+8]
 * 0000000140074C92: and     qword ptr [rax-18h], 0
 * 0000000140074C97: lea     rdx, [rax+18h]
 * 0000000140074C9B: call    PsReferenceEffectiveToken
 * 0000000140074CA0: mov     rbx, rax
 * 0000000140074CA3: test    dword ptr [rax+0C8h], 4000h
 * 0000000140074CAD: jnz     short loc_140074CC2
 * 0000000140074CAF: mov     rcx, rax; Object
 * 0000000140074CB2: mov     edx, 746C6644h; Tag
 * 0000000140074CB7: call    ObfDereferenceObjectWithTag
 * 0000000140074CBC: add     rsp, 30h
 * 0000000140074CC0: pop     rbx
 * 0000000140074CC1: retn
 * 0000000140074CC2: mov     rax, [rax+438h]
 * 0000000140074CC9: cmp     qword ptr [rax+30h], 0
 * 0000000140074CCE: jz      short loc_140074CD5
 * 0000000140074CD0: mov     rcx, rbx
 * 0000000140074CD3: jmp     short loc_140074CB2
 * 0000000140074CD5: mov     rax, gs:188h
 * 0000000140074CDE: mov     rcx, [rax+0B8h]
 * 0000000140074CE5: mov     rax, [rcx+3B0h]
 * 0000000140074CEC: test    rax, rax
 * 0000000140074CEF: jz      short loc_140074CFB
 * 0000000140074CF1: mov     eax, [rax+1C0h]
 * 0000000140074CF7: test    al, 20h
 * 0000000140074CF9: jnz     short loc_140074CD0
 * 0000000140074CFB: xor     r9d, r9d
 * 0000000140074CFE: lea     rdx, [rsp+38h+arg_18]
 * 0000000140074D03: xor     r8d, r8d
 * 0000000140074D06: lea     ecx, [r9+2]
 * 0000000140074D0A: call    PsInvokeWin32Callout
 * 0000000140074D0F: mov     rdx, [rsp+38h+arg_18]
 * 0000000140074D14: test    rdx, rdx
 * 0000000140074D17: jz      short loc_140074CD0
 * 0000000140074D19: mov     rcx, [rbx+438h]
 * 0000000140074D20: xor     eax, eax
 * 0000000140074D22: lock cmpxchg [rcx+30h], rdx
 * 0000000140074D28: jnz     short loc_140074CD0
 * 0000000140074D2A: mov     rax, [rsp+38h+arg_18]
 * 0000000140074D2F: lock inc dword ptr [rax+4]
 * 0000000140074D33: jmp     short loc_140074CD0
 */
