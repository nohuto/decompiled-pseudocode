/*
 * XREFs of _GetClientRect @ 0x1C00D3234
 * Callers:
 *     EtwTraceLayoutChangeStop @ 0x1C0018C20 (EtwTraceLayoutChangeStop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 */

/*
 * Hex-Rays decompilation failed for _GetClientRect @ 0x1C00D3234
 * Reason: Hex-Rays returned no pseudocode for 0x1C00D3234
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00D3234: mov     [rsp+arg_0], rsi
 * 00000001C00D3239: push    rdi
 * 00000001C00D323A: sub     rsp, 20h
 * 00000001C00D323E: test    byte ptr [rcx+37h], 20h
 * 00000001C00D3242: mov     rdi, rdx
 * 00000001C00D3245: mov     rdx, rcx
 * 00000001C00D3248: jz      short loc_1C00D3272
 * 00000001C00D324A: test    byte ptr [rcx+2Dh], 2
 * 00000001C00D324E: jnz     short loc_1C00D3272
 * 00000001C00D3250: mov     rcx, cs:gpsi
 * 00000001C00D3257: and     dword ptr [rdi], 0
 * 00000001C00D325A: and     dword ptr [rdi+4], 0
 * 00000001C00D325E: mov     eax, [rcx+83Ch]
 * 00000001C00D3264: mov     [rdi+8], eax
 * 00000001C00D3267: mov     eax, [rcx+840h]
 * 00000001C00D326D: jmp     loc_1C00D347A
 * 00000001C00D3272: movzx   eax, word ptr [rcx+42h]
 * 00000001C00D3276: and     eax, 0FFFF3FFFh
 * 00000001C00D327B: cmp     eax, 29Dh
 * 00000001C00D3280: jz      short loc_1C00D32AD
 * 00000001C00D3282: movups  xmm0, xmmword ptr [rcx+80h]
 * 00000001C00D3289: mov     ecx, [rcx+84h]
 * 00000001C00D328F: mov     eax, [rdx+80h]
 * 00000001C00D3295: neg     ecx
 * 00000001C00D3297: movdqu  xmmword ptr [rdi], xmm0
 * 00000001C00D329B: add     [rdi+0Ch], ecx
 * 00000001C00D329E: neg     eax
 * 00000001C00D32A0: add     [rdi], eax
 * 00000001C00D32A2: add     [rdi+8], eax
 * 00000001C00D32A5: add     [rdi+4], ecx
 * 00000001C00D32A8: jmp     loc_1C00D347D
 * 00000001C00D32AD: and     dword ptr [rdi+4], 0
 * 00000001C00D32B1: and     dword ptr [rdi], 0
 * 00000001C00D32B4: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00D32BA: mov     esi, 2000h
 * 00000001C00D32BF: test    [rax+308h], esi
 * 00000001C00D32C5: jnz     short loc_1C00D332A
 * 00000001C00D32C7: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00D32CD: test    dword ptr [rax+308h], 4000h
 * 00000001C00D32D7: jnz     short loc_1C00D332A
 * 00000001C00D32D9: mov     rcx, gs:188h
 * 00000001C00D32E2: call    W32GetThreadWin32Thread
 * 00000001C00D32E7: cmp     qword ptr [rax+1A0h], 0
 * 00000001C00D32EF: jz      short loc_1C00D3315
 * 00000001C00D32F1: mov     rcx, gs:188h
 * 00000001C00D32FA: call    W32GetThreadWin32Thread
 * 00000001C00D32FF: mov     rcx, [rax+1A0h]
 * 00000001C00D3306: mov     rax, [rcx+8]
 * 00000001C00D330A: mov     ecx, [rax+104h]
 * 00000001C00D3310: and     ecx, 1
 * 00000001C00D3313: jmp     short loc_1C00D3317
 * 00000001C00D3315: xor     ecx, ecx
 * 00000001C00D3317: test    ecx, ecx
 * 00000001C00D3319: jz      short loc_1C00D332A
 * 00000001C00D331B: mov     rax, cs:gpsi
 * 00000001C00D3322: add     rax, 8DCh
 * 00000001C00D3328: jmp     short loc_1C00D3396
 * 00000001C00D332A: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00D3330: test    [rax+308h], esi
 * 00000001C00D3336: jz      short loc_1C00D3389
 * 00000001C00D3338: mov     rcx, gs:188h
 * 00000001C00D3341: call    W32GetThreadWin32Thread
 * 00000001C00D3346: cmp     qword ptr [rax+1A0h], 0
 * 00000001C00D334E: jz      short loc_1C00D3374
 * 00000001C00D3350: mov     rcx, gs:188h
 * 00000001C00D3359: call    W32GetThreadWin32Thread
 * 00000001C00D335E: mov     rcx, [rax+1A0h]
 * 00000001C00D3365: mov     rax, [rcx+8]
 * 00000001C00D3369: mov     ecx, [rax+104h]
 * 00000001C00D336F: and     ecx, 1
 * 00000001C00D3372: jmp     short loc_1C00D3376
 * 00000001C00D3374: xor     ecx, ecx
 * 00000001C00D3376: test    ecx, ecx
 * 00000001C00D3378: jz      short loc_1C00D3389
 * 00000001C00D337A: mov     rax, cs:gpsi
 * 00000001C00D3381: add     rax, 0A60h
 * 00000001C00D3387: jmp     short loc_1C00D3396
 * 00000001C00D3389: mov     rax, cs:gpsi
 * 00000001C00D3390: add     rax, 758h
 * 00000001C00D3396: mov     eax, [rax]
 * 00000001C00D3398: mov     [rdi+8], eax
 * 00000001C00D339B: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00D33A1: test    [rax+308h], esi
 * 00000001C00D33A7: jnz     short loc_1C00D340C
 * 00000001C00D33A9: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00D33AF: test    dword ptr [rax+308h], 4000h
 * 00000001C00D33B9: jnz     short loc_1C00D340C
 * 00000001C00D33BB: mov     rcx, gs:188h
 * 00000001C00D33C4: call    W32GetThreadWin32Thread
 * 00000001C00D33C9: cmp     qword ptr [rax+1A0h], 0
 * 00000001C00D33D1: jz      short loc_1C00D33F7
 * 00000001C00D33D3: mov     rcx, gs:188h
 * 00000001C00D33DC: call    W32GetThreadWin32Thread
 * 00000001C00D33E1: mov     rcx, [rax+1A0h]
 * 00000001C00D33E8: mov     rax, [rcx+8]
 * 00000001C00D33EC: mov     ecx, [rax+104h]
 * 00000001C00D33F2: and     ecx, 1
 * 00000001C00D33F5: jmp     short loc_1C00D33F9
 * 00000001C00D33F7: xor     ecx, ecx
 * 00000001C00D33F9: test    ecx, ecx
 * 00000001C00D33FB: jz      short loc_1C00D340C
 * 00000001C00D33FD: mov     rax, cs:gpsi
 * 00000001C00D3404: add     rax, 8E0h
 * 00000001C00D340A: jmp     short loc_1C00D3478
 * 00000001C00D340C: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00D3412: test    [rax+308h], esi
 * 00000001C00D3418: jz      short loc_1C00D346B
 * 00000001C00D341A: mov     rcx, gs:188h
 * 00000001C00D3423: call    W32GetThreadWin32Thread
 * 00000001C00D3428: cmp     qword ptr [rax+1A0h], 0
 * 00000001C00D3430: jz      short loc_1C00D3456
 * 00000001C00D3432: mov     rcx, gs:188h
 * 00000001C00D343B: call    W32GetThreadWin32Thread
 * 00000001C00D3440: mov     rcx, [rax+1A0h]
 * 00000001C00D3447: mov     rax, [rcx+8]
 * 00000001C00D344B: mov     ecx, [rax+104h]
 * 00000001C00D3451: and     ecx, 1
 * 00000001C00D3454: jmp     short loc_1C00D3458
 * 00000001C00D3456: xor     ecx, ecx
 * 00000001C00D3458: test    ecx, ecx
 * 00000001C00D345A: jz      short loc_1C00D346B
 * 00000001C00D345C: mov     rax, cs:gpsi
 * 00000001C00D3463: add     rax, 0A64h
 * 00000001C00D3469: jmp     short loc_1C00D3478
 * 00000001C00D346B: mov     rax, cs:gpsi
 * 00000001C00D3472: add     rax, 75Ch
 * 00000001C00D3478: mov     eax, [rax]
 * 00000001C00D347A: mov     [rdi+0Ch], eax
 * 00000001C00D347D: mov     rsi, [rsp+28h+arg_0]
 * 00000001C00D3482: add     rsp, 20h
 * 00000001C00D3486: pop     rdi
 * 00000001C00D3487: retn
 */
