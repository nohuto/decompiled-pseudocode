/*
 * XREFs of SmStoreResize @ 0x140657FE8
 * Callers:
 *     SmcStoreResize @ 0x1406597BC (SmcStoreResize.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x140153840 (ZwSetSystemInformation.c)
 *     SmStorePhysicalRequestIssue @ 0x140657E9C (SmStorePhysicalRequestIssue.c)
 */

/*
 * Hex-Rays decompilation failed for SmStoreResize @ 0x140657FE8
 * Reason: Hex-Rays returned no pseudocode for 0x140657FE8
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140657FE8: mov     [rsp-8+arg_0], rbx
 * 0000000140657FED: push    rbp
 * 0000000140657FEE: mov     rbp, rsp
 * 0000000140657FF1: sub     rsp, 60h
 * 0000000140657FF5: xor     eax, eax
 * 0000000140657FF7: mov     [rbp+var_20], r8
 * 0000000140657FFB: mov     [rbp+SystemInformation], rax
 * 0000000140657FFF: mov     r10d, ecx
 * 0000000140658002: mov     [rbp+var_8], rax
 * 0000000140658006: mov     rbx, r9
 * 0000000140658009: lea     rax, [rbp+var_30]
 * 000000014065800D: mov     dword ptr [rbp+SystemInformation], 1
 * 0000000140658014: mov     [rbp+var_10], rax
 * 0000000140658018: mov     r9d, 18h
 * 000000014065801E: xor     eax, eax
 * 0000000140658020: mov     dword ptr [rbp+SystemInformation+4], 11h
 * 0000000140658027: mov     [rbp+var_30], rax
 * 000000014065802B: mov     ecx, eax
 * 000000014065802D: mov     [rbp+var_28], rax
 * 0000000140658031: and     ecx, 0FFFFFF06h
 * 0000000140658037: or      ecx, 6
 * 000000014065803A: mov     dword ptr [rbp+var_8], r9d
 * 000000014065803E: cmp     [rbp+arg_20], eax
 * 0000000140658041: mov     dword ptr [rbp+var_30+4], edx
 * 0000000140658044: setnz   al
 * 0000000140658047: shl     eax, 8
 * 000000014065804A: xor     eax, ecx
 * 000000014065804C: and     eax, 100h
 * 0000000140658051: xor     ecx, eax
 * 0000000140658053: mov     eax, [rbx]
 * 0000000140658055: mov     dword ptr [rbp+var_30], ecx
 * 0000000140658058: mov     dword ptr [rbp+var_28], eax
 * 000000014065805B: test    r10d, r10d
 * 000000014065805E: jnz     short loc_140658085
 * 0000000140658060: mov     rcx, cs:DeviceObject; DeviceObject
 * 0000000140658067: lea     rax, [rbp+arg_10]
 * 000000014065806B: mov     [rsp+60h+var_38], rax; __int64
 * 0000000140658070: lea     r8, [rbp+var_30]
 * 0000000140658074: mov     edx, 2281CCh
 * 0000000140658079: mov     [rsp+60h+var_40], r9d; int
 * 000000014065807E: call    SmStorePhysicalRequestIssue
 * 0000000140658083: jmp     short loc_14065809B
 * 0000000140658085: cmp     r10d, 1
 * 0000000140658089: jnz     short loc_1406580A4
 * 000000014065808B: mov     r8d, r9d; SystemInformationLength
 * 000000014065808E: lea     rdx, [rbp+SystemInformation]; SystemInformation
 * 0000000140658092: lea     ecx, [r10+6Ch]; SystemInformationClass
 * 0000000140658096: call    ZwSetSystemInformation
 * 000000014065809B: mov     ecx, eax
 * 000000014065809D: mov     eax, dword ptr [rbp+var_28]
 * 00000001406580A0: mov     [rbx], eax
 * 00000001406580A2: jmp     short loc_1406580A9
 * 00000001406580A4: mov     ecx, 0C000000Dh
 * 00000001406580A9: mov     eax, ecx
 * 00000001406580AB: mov     rbx, [rsp+60h+arg_0]
 * 00000001406580B0: add     rsp, 60h
 * 00000001406580B4: pop     rbp
 * 00000001406580B5: retn
 */
