/*
 * XREFs of SetHandleFlag @ 0x1C00524A0
 * Callers:
 *     CloseProtectedHandle @ 0x1C0052440 (CloseProtectedHandle.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C00313E0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

/*
 * Hex-Rays decompilation failed for SetHandleFlag @ 0x1C00524A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00524A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00524A0: mov     rax, rsp
 * 00000001C00524A3: mov     [rax+8], rbx
 * 00000001C00524A7: mov     [rax+10h], rbp
 * 00000001C00524AB: mov     [rax+18h], rsi
 * 00000001C00524AF: mov     [rax+20h], rdi
 * 00000001C00524B3: push    r14
 * 00000001C00524B5: sub     rsp, 20h
 * 00000001C00524B9: mov     rdi, rcx
 * 00000001C00524BC: mov     ebp, r8d
 * 00000001C00524BF: mov     rcx, cs:gpHandleFlagsMutex
 * 00000001C00524C6: mov     esi, 1
 * 00000001C00524CB: shr     edi, 2
 * 00000001C00524CE: lea     eax, [rdx+rdi*2]
 * 00000001C00524D1: add     edi, eax
 * 00000001C00524D3: call    cs:__imp_ExEnterCriticalRegionAndAcquireFastMutexUnsafe
 * 00000001C00524D9: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00524DF: test    rax, rax
 * 00000001C00524E2: jz      short loc_1C0052501
 * 00000001C00524E4: lea     rbx, [rax+2B0h]
 * 00000001C00524EB: test    ebp, ebp
 * 00000001C00524ED: jz      short loc_1C005252B
 * 00000001C00524EF: cmp     edi, [rbx]
 * 00000001C00524F1: jnb     short loc_1C005253F
 * 00000001C00524F3: mov     r8d, esi; NumberToSet
 * 00000001C00524F6: mov     edx, edi; StartingIndex
 * 00000001C00524F8: mov     rcx, rbx; BitMapHeader
 * 00000001C00524FB: call    cs:__imp_RtlSetBits
 * 00000001C0052501: mov     rcx, cs:gpHandleFlagsMutex
 * 00000001C0052508: call    cs:__imp_ExReleaseFastMutexUnsafeAndLeaveCriticalRegion
 * 00000001C005250E: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0052513: mov     eax, esi
 * 00000001C0052515: mov     rsi, [rsp+28h+arg_10]
 * 00000001C005251A: mov     rbp, [rsp+28h+arg_8]
 * 00000001C005251F: mov     rdi, [rsp+28h+arg_18]
 * 00000001C0052524: add     rsp, 20h
 * 00000001C0052528: pop     r14
 * 00000001C005252A: retn
 * 00000001C005252B: cmp     edi, [rbx]
 * 00000001C005252D: jnb     short loc_1C0052501
 * 00000001C005252F: mov     r8d, esi; NumberToClear
 * 00000001C0052532: mov     edx, edi; StartingIndex
 * 00000001C0052534: mov     rcx, rbx; BitMapHeader
 * 00000001C0052537: call    cs:__imp_RtlClearBits
 * 00000001C005253D: jmp     short loc_1C0052501
 * 00000001C005253F: lea     ebp, [rdi+20h]
 * 00000001C0052542: mov     edx, 69707355h
 * 00000001C0052547: and     ebp, 0FFFFFFE0h
 * 00000001C005254A: mov     ecx, ebp
 * 00000001C005254C: shr     rcx, 3; Size
 * 00000001C0052550: call    Win32AllocPoolWithQuotaZInit
 * 00000001C0052555: mov     r14, rax
 * 00000001C0052558: test    rax, rax
 * 00000001C005255B: jz      short loc_1C0052594
 * 00000001C005255D: mov     rdx, [rbx+8]; Src
 * 00000001C0052561: test    rdx, rdx
 * 00000001C0052564: jnz     short loc_1C005257A
 * 00000001C0052566: mov     r8d, ebp; SizeOfBitMap
 * 00000001C0052569: mov     rdx, r14; BitMapBuffer
 * 00000001C005256C: mov     rcx, rbx; BitMapHeader
 * 00000001C005256F: call    cs:__imp_RtlInitializeBitMap
 * 00000001C0052575: jmp     loc_1C00524F3
 * 00000001C005257A: mov     r8d, [rbx]
 * 00000001C005257D: mov     rcx, rax; void *
 * 00000001C0052580: shr     r8, 3; Size
 * 00000001C0052584: call    memmove
 * 00000001C0052589: mov     rcx, [rbx+8]
 * 00000001C005258D: call    Win32FreePool
 * 00000001C0052592: jmp     short loc_1C0052566
 * 00000001C0052594: xor     esi, esi
 * 00000001C0052596: jmp     loc_1C0052501
 */
