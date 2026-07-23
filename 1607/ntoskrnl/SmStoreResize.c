/*
 * XREFs of SmStoreResize @ 0x140697378
 * Callers:
 *     SmcStoreResize @ 0x14069ABBC (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x14015D4D0 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x14069722C (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x140697378
 * Reason: Hex-Rays returned no pseudocode for 0x140697378
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140697378: mov     [rsp-8+arg_0], rbx
 * 000000014069737D: push    rbp
 * 000000014069737E: mov     rbp, rsp
 * 0000000140697381: sub     rsp, 60h
 * 0000000140697385: xor     eax, eax
 * 0000000140697387: mov     [rbp+var_20], r8
 * 000000014069738B: mov     [rbp+SystemInformation], rax
 * 000000014069738F: mov     r10d, ecx
 * 0000000140697392: mov     [rbp+var_8], rax
 * 0000000140697396: mov     rbx, r9
 * 0000000140697399: lea     rax, [rbp+var_30]
 * 000000014069739D: mov     dword ptr [rbp+SystemInformation], 1
 * 00000001406973A4: mov     [rbp+var_10], rax
 * 00000001406973A8: mov     r9d, 18h
 * 00000001406973AE: xor     eax, eax
 * 00000001406973B0: mov     dword ptr [rbp+SystemInformation+4], 11h
 * 00000001406973B7: mov     [rbp+var_30], rax
 * 00000001406973BB: mov     ecx, eax
 * 00000001406973BD: mov     [rbp+var_28], rax
 * 00000001406973C1: and     ecx, 0FFFFFF06h
 * 00000001406973C7: or      ecx, 6
 * 00000001406973CA: mov     dword ptr [rbp+var_8], r9d
 * 00000001406973CE: cmp     [rbp+arg_20], eax
 * 00000001406973D1: mov     dword ptr [rbp+var_30+4], edx
 * 00000001406973D4: setnz   al
 * 00000001406973D7: shl     eax, 8
 * 00000001406973DA: xor     eax, ecx
 * 00000001406973DC: and     eax, 100h
 * 00000001406973E1: xor     ecx, eax
 * 00000001406973E3: mov     eax, [rbx]
 * 00000001406973E5: mov     dword ptr [rbp+var_30], ecx
 * 00000001406973E8: mov     dword ptr [rbp+var_28], eax
 * 00000001406973EB: test    r10d, r10d
 * 00000001406973EE: jnz     short loc_140697415
 * 00000001406973F0: mov     rcx, cs:DeviceObject; DeviceObject
 * 00000001406973F7: lea     rax, [rbp+arg_10]
 * 00000001406973FB: mov     [rsp+60h+var_38], rax; __int64
 * 0000000140697400: lea     r8, [rbp+var_30]
 * 0000000140697404: mov     edx, 2281CCh
 * 0000000140697409: mov     [rsp+60h+var_40], r9d; int
 * 000000014069740E: call    SmStorePhysicalRequestIssue
 * 0000000140697413: jmp     short loc_14069742B
 * 0000000140697415: cmp     r10d, 1
 * 0000000140697419: jnz     short loc_140697434
 * 000000014069741B: mov     r8d, r9d; SystemInformationLength
 * 000000014069741E: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 0000000140697422: lea     ecx, [r10+6Ch]; SystemInformationClass
 * 0000000140697426: call    ZwSetSystemInformation
 * 000000014069742B: mov     ecx, eax
 * 000000014069742D: mov     eax, dword ptr [rbp+var_28]
 * 0000000140697430: mov     [rbx], eax
 * 0000000140697432: jmp     short loc_140697439
 * 0000000140697434: mov     ecx, 0C000000Dh
 * 0000000140697439: mov     eax, ecx
 * 000000014069743B: mov     rbx, [rsp+60h+arg_0]
 * 0000000140697440: add     rsp, 60h
 * 0000000140697444: pop     rbp
 * 0000000140697445: retn
 */
