/*
 * XREFs of SmStoreResize @ 0x140697294
 * Callers:
 *     SmcStoreResize @ 0x14069AAD8 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x14015CF60 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x140697148 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x140697294
 * Reason: Hex-Rays returned no pseudocode for 0x140697294
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140697294: mov     [rsp-8+arg_0], rbx
 * 0000000140697299: push    rbp
 * 000000014069729A: mov     rbp, rsp
 * 000000014069729D: sub     rsp, 60h
 * 00000001406972A1: xor     eax, eax
 * 00000001406972A3: mov     [rbp+var_20], r8
 * 00000001406972A7: mov     [rbp+SystemInformation], rax
 * 00000001406972AB: mov     r10d, ecx
 * 00000001406972AE: mov     [rbp+var_8], rax
 * 00000001406972B2: mov     rbx, r9
 * 00000001406972B5: lea     rax, [rbp+var_30]
 * 00000001406972B9: mov     dword ptr [rbp+SystemInformation], 1
 * 00000001406972C0: mov     [rbp+var_10], rax
 * 00000001406972C4: mov     r9d, 18h
 * 00000001406972CA: xor     eax, eax
 * 00000001406972CC: mov     dword ptr [rbp+SystemInformation+4], 11h
 * 00000001406972D3: mov     [rbp+var_30], rax
 * 00000001406972D7: mov     ecx, eax
 * 00000001406972D9: mov     [rbp+var_28], rax
 * 00000001406972DD: and     ecx, 0FFFFFF06h
 * 00000001406972E3: or      ecx, 6
 * 00000001406972E6: mov     dword ptr [rbp+var_8], r9d
 * 00000001406972EA: cmp     [rbp+arg_20], eax
 * 00000001406972ED: mov     dword ptr [rbp+var_30+4], edx
 * 00000001406972F0: setnz   al
 * 00000001406972F3: shl     eax, 8
 * 00000001406972F6: xor     eax, ecx
 * 00000001406972F8: and     eax, 100h
 * 00000001406972FD: xor     ecx, eax
 * 00000001406972FF: mov     eax, [rbx]
 * 0000000140697301: mov     dword ptr [rbp+var_30], ecx
 * 0000000140697304: mov     dword ptr [rbp+var_28], eax
 * 0000000140697307: test    r10d, r10d
 * 000000014069730A: jnz     short loc_140697331
 * 000000014069730C: mov     rcx, cs:DeviceObject; DeviceObject
 * 0000000140697313: lea     rax, [rbp+arg_10]
 * 0000000140697317: mov     [rsp+60h+var_38], rax; __int64
 * 000000014069731C: lea     r8, [rbp+var_30]
 * 0000000140697320: mov     edx, 2281CCh
 * 0000000140697325: mov     [rsp+60h+var_40], r9d; int
 * 000000014069732A: call    SmStorePhysicalRequestIssue
 * 000000014069732F: jmp     short loc_140697347
 * 0000000140697331: cmp     r10d, 1
 * 0000000140697335: jnz     short loc_140697350
 * 0000000140697337: mov     r8d, r9d; SystemInformationLength
 * 000000014069733A: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 000000014069733E: lea     ecx, [r10+6Ch]; SystemInformationClass
 * 0000000140697342: call    ZwSetSystemInformation
 * 0000000140697347: mov     ecx, eax
 * 0000000140697349: mov     eax, dword ptr [rbp+var_28]
 * 000000014069734C: mov     [rbx], eax
 * 000000014069734E: jmp     short loc_140697355
 * 0000000140697350: mov     ecx, 0C000000Dh
 * 0000000140697355: mov     eax, ecx
 * 0000000140697357: mov     rbx, [rsp+60h+arg_0]
 * 000000014069735C: add     rsp, 60h
 * 0000000140697360: pop     rbp
 * 0000000140697361: retn
 */
