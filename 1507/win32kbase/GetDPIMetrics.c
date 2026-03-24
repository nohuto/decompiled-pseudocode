/*
 * XREFs of GetDPIMetrics @ 0x1C0012920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for GetDPIMetrics @ 0x1C0012920
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012920
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012920: sub     rsp, 28h
 * 00000001C0012924: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C001292A: test    dword ptr [rax+308h], 2000h
 * 00000001C0012934: jnz     short loc_1C001294F
 * 00000001C0012936: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C001293C: test    dword ptr [rax+308h], 4000h
 * 00000001C0012946: lea     rax, gdpi96
 * 00000001C001294D: jz      short loc_1C0012956
 * 00000001C001294F: lea     rax, gdpiSystem
 * 00000001C0012956: add     rsp, 28h
 * 00000001C001295A: retn
 */
