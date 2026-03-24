/*
 * XREFs of SmStoreResize @ 0x1406DA3E0
 * Callers:
 *     SmcStoreResize @ 0x1406DBDB4 (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x1401821B0 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x1406DA294 (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x1406DA3E0
 * Reason: Hex-Rays returned no pseudocode for 0x1406DA3E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406DA3E0: mov     [rsp-8+arg_0], rbx
 * 00000001406DA3E5: push    rbp
 * 00000001406DA3E6: mov     rbp, rsp
 * 00000001406DA3E9: sub     rsp, 60h
 * 00000001406DA3ED: xor     eax, eax
 * 00000001406DA3EF: mov     [rbp+var_20], r8
 * 00000001406DA3F3: mov     [rbp+SystemInformation], rax
 * 00000001406DA3F7: mov     r10d, ecx
 * 00000001406DA3FA: mov     [rbp+var_8], rax
 * 00000001406DA3FE: mov     rbx, r9
 * 00000001406DA401: lea     rax, [rbp+var_30]
 * 00000001406DA405: mov     dword ptr [rbp+SystemInformation], 1
 * 00000001406DA40C: mov     [rbp+var_10], rax
 * 00000001406DA410: mov     r9d, 18h
 * 00000001406DA416: xor     eax, eax
 * 00000001406DA418: mov     dword ptr [rbp+SystemInformation+4], 11h
 * 00000001406DA41F: mov     [rbp+var_30], rax
 * 00000001406DA423: mov     ecx, eax
 * 00000001406DA425: mov     [rbp+var_28], rax
 * 00000001406DA429: and     ecx, 0FFFFFF06h
 * 00000001406DA42F: or      ecx, 6
 * 00000001406DA432: mov     dword ptr [rbp+var_8], r9d
 * 00000001406DA436: cmp     [rbp+arg_20], eax
 * 00000001406DA439: mov     dword ptr [rbp+var_30+4], edx
 * 00000001406DA43C: setnz   al
 * 00000001406DA43F: shl     eax, 8
 * 00000001406DA442: xor     eax, ecx
 * 00000001406DA444: and     eax, 100h
 * 00000001406DA449: xor     ecx, eax
 * 00000001406DA44B: mov     eax, [rbx]
 * 00000001406DA44D: mov     dword ptr [rbp+var_30], ecx
 * 00000001406DA450: mov     dword ptr [rbp+var_28], eax
 * 00000001406DA453: test    r10d, r10d
 * 00000001406DA456: jnz     short loc_1406DA47D
 * 00000001406DA458: mov     rcx, cs:DeviceObject; DeviceObject
 * 00000001406DA45F: lea     rax, [rbp+arg_10]
 * 00000001406DA463: mov     [rsp+60h+var_38], rax; __int64
 * 00000001406DA468: lea     r8, [rbp+var_30]
 * 00000001406DA46C: mov     edx, 2281CCh
 * 00000001406DA471: mov     [rsp+60h+var_40], r9d; int
 * 00000001406DA476: call    SmStorePhysicalRequestIssue
 * 00000001406DA47B: jmp     short loc_1406DA493
 * 00000001406DA47D: cmp     r10d, 1
 * 00000001406DA481: jnz     short loc_1406DA49C
 * 00000001406DA483: mov     r8d, r9d; SystemInformationLength
 * 00000001406DA486: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 00000001406DA48A: lea     ecx, [r10+6Ch]; SystemInformationClass
 * 00000001406DA48E: call    ZwSetSystemInformation
 * 00000001406DA493: mov     ecx, eax
 * 00000001406DA495: mov     eax, dword ptr [rbp+var_28]
 * 00000001406DA498: mov     [rbx], eax
 * 00000001406DA49A: jmp     short loc_1406DA4A1
 * 00000001406DA49C: mov     ecx, 0C000000Dh
 * 00000001406DA4A1: mov     eax, ecx
 * 00000001406DA4A3: mov     rbx, [rsp+60h+arg_0]
 * 00000001406DA4A8: add     rsp, 60h
 * 00000001406DA4AC: pop     rbp
 * 00000001406DA4AD: retn
 */
