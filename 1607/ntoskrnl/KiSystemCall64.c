/*
 * XREFs of KiSystemCall64 @ 0x14016F000
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14015D990 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DA00 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015E540 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x140161BE0 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x140162560 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x14016F000 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x14016FC00 (KiBugCheckDispatch.c)
 *     KiUmsCallEntry @ 0x140170AC0 (KiUmsCallEntry.c)
 *     KiUmsExit @ 0x140170D40 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6FBC (KiCopyCounters.c)
 *     PerfInfoLogSysCallEntry @ 0x1402277C8 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x140227834 (PerfInfoLogSysCallExit.c)
 *     PsInvokeWin32Callout @ 0x140429010 (PsInvokeWin32Callout.c)
 *     PsPicoSystemCallDispatch @ 0x140681388 (PsPicoSystemCallDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x14016F000
 * Reason: Hex-Rays returned no pseudocode for 0x14016F000
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016F000: swapgs
 * 000000014016F003: mov     gs:10h, rsp
 * 000000014016F00C: mov     rsp, gs:1A8h
 * 000000014016F015: push    2Bh ; '+'
 * 000000014016F017: push    qword ptr gs:10h
 * 000000014016F01F: push    r11
 * 000000014016F021: push    33h ; '3'
 * 000000014016F023: push    rcx
 * 000000014016F024: mov     rcx, r10
 * 000000014016F027: sub     rsp, 8
 * 000000014016F02B: push    rbp
 * 000000014016F02C: sub     rsp, 158h
 * 000000014016F033: lea     rbp, [rsp+190h+var_110]
 * 000000014016F03B: mov     [rbp+0C0h], rbx
 * 000000014016F042: mov     [rbp+0C8h], rdi
 * 000000014016F049: mov     [rbp+0D0h], rsi
 * 000000014016F050: mov     [rbp-50h], rax
 * 000000014016F054: mov     [rbp-48h], rcx
 * 000000014016F058: mov     [rbp-40h], rdx
 * 000000014016F05C: mov     rcx, gs:188h
 * 000000014016F065: mov     rcx, [rcx+220h]
 * 000000014016F06C: mov     rcx, [rcx+7B8h]
 * 000000014016F073: mov     gs:2EB0h, rcx
 * 000000014016F07C: movzx   eax, word ptr gs:2EBEh
 * 000000014016F085: cmp     gs:2EBCh, ax
 * 000000014016F08E: jz      short loc_14016F0A2
 * 000000014016F090: mov     gs:2EBCh, ax
 * 000000014016F099: mov     ecx, 48h ; 'H'
 * 000000014016F09E: xor     edx, edx
 * 000000014016F0A0: wrmsr
 * 000000014016F0A2: movzx   edx, word ptr gs:2EB8h
 * 000000014016F0AB: test    edx, 8
 * 000000014016F0B1: jz      short loc_14016F0CA
 * 000000014016F0B3: mov     eax, 1
 * 000000014016F0B8: xor     edx, edx
 * 000000014016F0BA: mov     ecx, 49h ; 'I'
 * 000000014016F0BF: wrmsr
 * 000000014016F0C1: movzx   edx, word ptr gs:2EB8h
 * 000000014016F0CA: test    edx, 2
 * 000000014016F0D0: jz      loc_14016F1FB
 * 000000014016F0D6: call    loc_14016F1E9
 * 000000014016F0DB: add     rsp, 8
 * 000000014016F0DF: call    loc_14016F1F2
 * 000000014016F0E4: add     rsp, 8
 * 000000014016F0E8: call    loc_14016F0DB
 * 000000014016F0ED: add     rsp, 8
 * 000000014016F0F1: call    loc_14016F0E4
 * 000000014016F0F6: add     rsp, 8
 * 000000014016F0FA: call    loc_14016F0ED
 * 000000014016F0FF: add     rsp, 8
 * 000000014016F103: call    loc_14016F0F6
 * 000000014016F108: add     rsp, 8
 * 000000014016F10C: call    loc_14016F0FF
 * 000000014016F111: add     rsp, 8
 * 000000014016F115: call    loc_14016F108
 * 000000014016F11A: add     rsp, 8
 * 000000014016F11E: call    loc_14016F111
 * 000000014016F123: add     rsp, 8
 * 000000014016F127: call    loc_14016F11A
 * 000000014016F12C: add     rsp, 8
 * 000000014016F130: call    loc_14016F123
 * 000000014016F135: add     rsp, 8
 * 000000014016F139: call    loc_14016F12C
 * 000000014016F13E: add     rsp, 8
 * 000000014016F142: call    loc_14016F135
 * 000000014016F147: add     rsp, 8
 * 000000014016F14B: call    loc_14016F13E
 * 000000014016F150: add     rsp, 8
 * 000000014016F154: call    loc_14016F147
 * 000000014016F159: add     rsp, 8
 * 000000014016F15D: call    loc_14016F150
 * 000000014016F162: add     rsp, 8
 * 000000014016F166: call    loc_14016F159
 * 000000014016F16B: add     rsp, 8
 * 000000014016F16F: call    loc_14016F162
 * 000000014016F174: add     rsp, 8
 * 000000014016F178: call    loc_14016F16B
 * 000000014016F17D: add     rsp, 8
 * 000000014016F181: call    loc_14016F174
 * 000000014016F186: add     rsp, 8
 * 000000014016F18A: call    loc_14016F17D
 * 000000014016F18F: add     rsp, 8
 * 000000014016F193: call    loc_14016F186
 * 000000014016F198: add     rsp, 8
 * 000000014016F19C: call    loc_14016F18F
 * 000000014016F1A1: add     rsp, 8
 * 000000014016F1A5: call    loc_14016F198
 * 000000014016F1AA: add     rsp, 8
 * 000000014016F1AE: call    loc_14016F1A1
 * 000000014016F1B3: add     rsp, 8
 * 000000014016F1B7: call    loc_14016F1AA
 * 000000014016F1BC: add     rsp, 8
 * 000000014016F1C0: call    loc_14016F1B3
 * 000000014016F1C5: add     rsp, 8
 * 000000014016F1C9: call    loc_14016F1BC
 * 000000014016F1CE: add     rsp, 8
 * 000000014016F1D2: call    loc_14016F1C5
 * 000000014016F1D7: add     rsp, 8
 * 000000014016F1DB: call    loc_14016F1CE
 * 000000014016F1E0: add     rsp, 8
 * 000000014016F1E4: call    loc_14016F1D7
 * 000000014016F1E9: add     rsp, 8
 * 000000014016F1ED: call    loc_14016F1E0
 * 000000014016F1F2: add     rsp, 8
 * 000000014016F1F6: mov     eax, 0DADAh
 * 000000014016F1FB: test    edx, 100h
 * 000000014016F201: jz      short loc_14016F208
 * 000000014016F203: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016F208: lfence
 * 000000014016F20B: mov     byte ptr [rbp-55h], 2
 * 000000014016F20F: mov     rbx, gs:188h
 * 000000014016F218: prefetchw byte ptr [rbx+90h]
 * 000000014016F21F: stmxcsr dword ptr [rbp-54h]
 * 000000014016F223: ldmxcsr dword ptr gs:180h
 * 000000014016F22C: cmp     byte ptr [rbx+3], 0
 * 000000014016F230: mov     word ptr [rbp+80h], 0
 * 000000014016F239: jz      loc_14016F2E7
 * 000000014016F23F: test    byte ptr [rbx+3], 3
 * 000000014016F243: mov     [rbp-38h], r8
 * 000000014016F247: mov     [rbp-30h], r9
 * 000000014016F24B: jz      short loc_14016F252
 * 000000014016F24D: call    KiSaveDebugRegisterState
 * 000000014016F252: test    byte ptr [rbx+3], 4
 * 000000014016F256: jz      short loc_14016F286
 * 000000014016F258: mov     [rbp-20h], r10
 * 000000014016F25C: mov     [rbp-28h], r10
 * 000000014016F260: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014016F264: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014016F268: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014016F26C: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014016F270: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014016F274: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014016F278: sti
 * 000000014016F279: mov     rcx, rsp
 * 000000014016F27C: call    PsPicoSystemCallDispatch
 * 000000014016F281: jmp     KiSystemServiceExitPico
 * 000000014016F286: test    byte ptr [rbx+3], 80h
 * 000000014016F28A: jz      short loc_14016F2D4
 * 000000014016F28C: mov     ecx, 0C0000102h
 * 000000014016F291: rdmsr
 * 000000014016F293: shl     rdx, 20h
 * 000000014016F297: or      rax, rdx
 * 000000014016F29A: cmp     rax, cs:MmUserProbeAddress
 * 000000014016F2A1: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016F2A9: cmp     [rbx+0F0h], rax
 * 000000014016F2B0: jz      short loc_14016F2D4
 * 000000014016F2B2: mov     rdx, [rbx+1F0h]
 * 000000014016F2B9: bts     dword ptr [rbx+74h], 8
 * 000000014016F2BE: dec     word ptr [rbx+1E6h]
 * 000000014016F2C5: mov     [rdx+80h], rax
 * 000000014016F2CC: sti
 * 000000014016F2CD: call    KiUmsCallEntry
 * 000000014016F2D2: jmp     short loc_14016F2DF
 * 000000014016F2D4: test    byte ptr [rbx+3], 40h
 * 000000014016F2D8: jz      short loc_14016F2DF
 * 000000014016F2DA: bts     dword ptr [rbx+74h], 10h
 * 000000014016F2DF: mov     r8, [rbp-38h]
 * 000000014016F2E3: mov     r9, [rbp-30h]
 * 000000014016F2E7: mov     rax, [rbp-50h]
 * 000000014016F2EB: mov     rcx, [rbp-48h]
 * 000000014016F2EF: mov     rdx, [rbp-40h]
 * 000000014016F2F3: sti
 * 000000014016F2F4: mov     [rbx+88h], rcx
 * 000000014016F2FB: mov     [rbx+80h], eax
 * 000000014016F301: nop     word ptr [rax+rax+00000000h]
 * 000000014016F310: mov     [rbx+90h], rsp
 * 000000014016F317: mov     edi, eax
 * 000000014016F319: shr     edi, 7
 * 000000014016F31C: and     edi, 20h
 * 000000014016F31F: and     eax, 0FFFh
 * 000000014016F324: lea     r10, KeServiceDescriptorTable
 * 000000014016F32B: lea     r11, KeServiceDescriptorTableShadow
 * 000000014016F332: test    dword ptr [rbx+78h], 40h
 * 000000014016F339: jz      short loc_14016F34E
 * 000000014016F33B: test    dword ptr [rbx+78h], 80000h
 * 000000014016F342: jz      short loc_14016F34B
 * 000000014016F344: lea     r11, KeServiceDescriptorTableFilter
 * 000000014016F34B: mov     r10, r11
 * 000000014016F34E: cmp     eax, [rdi+r10+10h]
 * 000000014016F353: jnb     loc_14016FAF8
 * 000000014016F359: mov     r10, [rdi+r10]
 * 000000014016F35D: movsxd  r11, dword ptr [r10+rax*4]
 * 000000014016F361: mov     rax, r11
 * 000000014016F364: sar     r11, 4
 * 000000014016F368: add     r10, r11
 * 000000014016F36B: cmp     edi, 20h ; ' '
 * 000000014016F36E: jnz     short loc_14016F3C0
 * 000000014016F370: mov     r11, [rbx+0F0h]
 * 000000014016F377: cmp     dword ptr [r11+1740h], 0
 * 000000014016F37F: jz      short loc_14016F3C0
 * 000000014016F381: mov     [rbp-50h], rax
 * 000000014016F385: mov     [rbp-48h], rcx
 * 000000014016F389: mov     [rbp-40h], rdx
 * 000000014016F38D: mov     rbx, r8
 * 000000014016F390: mov     rdi, r9
 * 000000014016F393: mov     rsi, r10
 * 000000014016F396: mov     ecx, 7
 * 000000014016F39B: xor     edx, edx
 * 000000014016F39D: xor     r8, r8
 * 000000014016F3A0: xor     r9, r9
 * 000000014016F3A3: call    PsInvokeWin32Callout
 * 000000014016F3A8: mov     rax, [rbp-50h]
 * 000000014016F3AC: mov     rcx, [rbp-48h]
 * 000000014016F3B0: mov     rdx, [rbp-40h]
 * 000000014016F3B4: mov     r8, rbx
 * 000000014016F3B7: mov     r9, rdi
 * 000000014016F3BA: mov     r10, rsi
 * 000000014016F3BD: nop     dword ptr [rax]
 * 000000014016F3C0: and     eax, 0Fh
 * 000000014016F3C3: jz      KiSystemServiceCopyEnd
 * 000000014016F3C9: shl     eax, 3
 * 000000014016F3CC: lea     rsp, [rsp-70h]
 * 000000014016F3D1: lea     rdi, [rsp+100h+var_E8]
 * 000000014016F3D6: mov     rsi, [rbp+100h]
 * 000000014016F3DD: lea     rsi, [rsi+20h]
 * 000000014016F3E1: test    byte ptr [rbp+0F0h], 1
 * 000000014016F3E8: jz      short loc_14016F400
 * 000000014016F3EA: cmp     rsi, cs:MmUserProbeAddress
 * 000000014016F3F1: cmovnb  rsi, cs:MmUserProbeAddress
 * 000000014016F3F9: nop     dword ptr [rax+00000000h]
 * 000000014016F400: lea     r11, KiSystemServiceCopyEnd
 * 000000014016F407: sub     r11, rax
 * 000000014016F40A: jmp     r11
 * 000000014016F410: mov     rax, [rsi+70h]
 * 000000014016F414: mov     [rdi+70h], rax
 * 000000014016F418: mov     rax, [rsi+68h]
 * 000000014016F41C: mov     [rdi+68h], rax
 * 000000014016F420: mov     rax, [rsi+60h]
 * 000000014016F424: mov     [rdi+60h], rax
 * 000000014016F428: mov     rax, [rsi+58h]
 * 000000014016F42C: mov     [rdi+58h], rax
 * 000000014016F430: mov     rax, [rsi+50h]
 * 000000014016F434: mov     [rdi+50h], rax
 * 000000014016F438: mov     rax, [rsi+48h]
 * 000000014016F43C: mov     [rdi+48h], rax
 * 000000014016F440: mov     rax, [rsi+40h]
 * 000000014016F444: mov     [rdi+40h], rax
 * 000000014016F448: mov     rax, [rsi+38h]
 * 000000014016F44C: mov     [rdi+38h], rax
 * 000000014016F450: mov     rax, [rsi+30h]
 * 000000014016F454: mov     [rdi+30h], rax
 * 000000014016F458: mov     rax, [rsi+28h]
 * 000000014016F45C: mov     [rdi+28h], rax
 * 000000014016F460: mov     rax, [rsi+20h]
 * 000000014016F464: mov     [rdi+20h], rax
 * 000000014016F468: mov     rax, [rsi+18h]
 * 000000014016F46C: mov     [rdi+18h], rax
 * 000000014016F470: mov     rax, [rsi+10h]
 * 000000014016F474: mov     [rdi+10h], rax
 * 000000014016F478: mov     rax, [rsi+8]
 * 000000014016F47C: mov     [rdi+8], rax
 * 000000014016F480: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 000000014016F48A: jnz     loc_14016FB96
 * 000000014016F490: call    r10
 * 000000014016F493: inc     dword ptr gs:2E38h
 * 000000014016F49B: mov     rbx, [rbp+0C0h]
 * 000000014016F4A2: mov     rdi, [rbp+0C8h]
 * 000000014016F4A9: mov     rsi, [rbp+0D0h]
 * 000000014016F4B0: mov     r11, gs:188h
 * 000000014016F4B9: test    byte ptr [rbp+0F0h], 1
 * 000000014016F4C0: jz      loc_14016F825
 * 000000014016F4C6: mov     rcx, cr8
 * 000000014016F4CA: or      cl, [r11+24Ah]
 * 000000014016F4D1: or      ecx, [r11+1E4h]
 * 000000014016F4D8: jnz     loc_14016FB62
 * 000000014016F4DE: cli
 * 000000014016F4DF: mov     rcx, gs:188h
 * 000000014016F4E8: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016F4EF: jz      short loc_14016F548
 * 000000014016F4F1: mov     [rbp-50h], rax
 * 000000014016F4F5: xor     eax, eax
 * 000000014016F4F7: mov     [rbp-48h], rax
 * 000000014016F4FB: mov     [rbp-40h], rax
 * 000000014016F4FF: mov     [rbp-38h], rax
 * 000000014016F503: mov     [rbp-30h], rax
 * 000000014016F507: mov     [rbp-28h], rax
 * 000000014016F50B: mov     [rbp-20h], rax
 * 000000014016F50F: pxor    xmm0, xmm0
 * 000000014016F513: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014016F517: movaps  xmmword ptr [rbp+0], xmm0
 * 000000014016F51B: movaps  xmmword ptr [rbp+10h], xmm0
 * 000000014016F51F: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014016F523: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014016F527: movaps  xmmword ptr [rbp+40h], xmm0
 * 000000014016F52B: mov     ecx, 1
 * 000000014016F530: mov     cr8, rcx
 * 000000014016F534: sti
 * 000000014016F535: call    KiInitiateUserApc
 * 000000014016F53A: cli
 * 000000014016F53B: mov     ecx, 0
 * 000000014016F540: mov     cr8, rcx
 * 000000014016F544: mov     rax, [rbp-50h]
 * 000000014016F548: mov     rcx, gs:188h
 * 000000014016F551: test    dword ptr [rcx], 8000000h
 * 000000014016F557: jz      short loc_14016F598
 * 000000014016F559: mov     [rbp-50h], rax
 * 000000014016F55D: xor     eax, eax
 * 000000014016F55F: mov     [rbp-48h], rax
 * 000000014016F563: mov     [rbp-40h], rax
 * 000000014016F567: mov     [rbp-38h], rax
 * 000000014016F56B: mov     [rbp-30h], rax
 * 000000014016F56F: mov     [rbp-28h], rax
 * 000000014016F573: mov     [rbp-20h], rax
 * 000000014016F577: pxor    xmm0, xmm0
 * 000000014016F57B: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014016F57F: movaps  xmmword ptr [rbp+0], xmm0
 * 000000014016F583: movaps  xmmword ptr [rbp+10h], xmm0
 * 000000014016F587: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014016F58B: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014016F58F: movaps  xmmword ptr [rbp+40h], xmm0
 * 000000014016F593: call    KiRestoreSetContextState
 * 000000014016F598: mov     rcx, gs:188h
 * 000000014016F5A1: test    dword ptr [rcx], 40010000h
 * 000000014016F5A7: jz      short loc_14016F5D6
 * 000000014016F5A9: mov     [rbp-50h], rax
 * 000000014016F5AD: test    byte ptr [rcx+2], 1
 * 000000014016F5B1: jz      short loc_14016F5C1
 * 000000014016F5B3: call    KiCopyCounters
 * 000000014016F5B8: mov     rcx, gs:188h
 * 000000014016F5C1: test    byte ptr [rcx+3], 40h
 * 000000014016F5C5: jz      short loc_14016F5D2
 * 000000014016F5C7: lea     rsp, [rbp-80h]
 * 000000014016F5CB: xor     ecx, ecx
 * 000000014016F5CD: call    KiUmsExit
 * 000000014016F5D2: mov     rax, [rbp-50h]
 * 000000014016F5D6: ldmxcsr dword ptr [rbp-54h]
 * 000000014016F5DA: xor     r10, r10
 * 000000014016F5DD: cmp     word ptr [rbp+80h], 0
 * 000000014016F5E5: jz      short loc_14016F628
 * 000000014016F5E7: mov     [rbp-50h], rax
 * 000000014016F5EB: call    KiRestoreDebugRegisterState
 * 000000014016F5F0: mov     rax, gs:188h
 * 000000014016F5F9: mov     rax, [rax+0B8h]
 * 000000014016F600: mov     rax, [rax+2C8h]
 * 000000014016F607: or      rax, rax
 * 000000014016F60A: jz      short loc_14016F624
 * 000000014016F60C: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 000000014016F614: jnz     short loc_14016F624
 * 000000014016F616: mov     r10, [rbp+0E8h]
 * 000000014016F61D: mov     [rbp+0E8h], rax
 * 000000014016F624: mov     rax, [rbp-50h]
 * 000000014016F628: mov     [rbp-50h], rax
 * 000000014016F62C: movzx   eax, word ptr gs:2EC2h
 * 000000014016F635: cmp     gs:2EBCh, ax
 * 000000014016F63E: jz      short loc_14016F652
 * 000000014016F640: mov     gs:2EBCh, ax
 * 000000014016F649: mov     ecx, 48h ; 'H'
 * 000000014016F64E: xor     edx, edx
 * 000000014016F650: wrmsr
 * 000000014016F652: btr     word ptr gs:2EB8h, 2
 * 000000014016F65D: jnb     short loc_14016F66D
 * 000000014016F65F: mov     eax, 1
 * 000000014016F664: xor     edx, edx
 * 000000014016F666: mov     ecx, 49h ; 'I'
 * 000000014016F66B: wrmsr
 * 000000014016F66D: btr     word ptr gs:2EB8h, 5
 * 000000014016F678: jnb     loc_14016F7A3
 * 000000014016F67E: call    loc_14016F791
 * 000000014016F683: add     rsp, 8
 * 000000014016F687: call    loc_14016F79A
 * 000000014016F68C: add     rsp, 8
 * 000000014016F690: call    loc_14016F683
 * 000000014016F695: add     rsp, 8
 * 000000014016F699: call    loc_14016F68C
 * 000000014016F69E: add     rsp, 8
 * 000000014016F6A2: call    loc_14016F695
 * 000000014016F6A7: add     rsp, 8
 * 000000014016F6AB: call    loc_14016F69E
 * 000000014016F6B0: add     rsp, 8
 * 000000014016F6B4: call    loc_14016F6A7
 * 000000014016F6B9: add     rsp, 8
 * 000000014016F6BD: call    loc_14016F6B0
 * 000000014016F6C2: add     rsp, 8
 * 000000014016F6C6: call    loc_14016F6B9
 * 000000014016F6CB: add     rsp, 8
 * 000000014016F6CF: call    loc_14016F6C2
 * 000000014016F6D4: add     rsp, 8
 * 000000014016F6D8: call    loc_14016F6CB
 * 000000014016F6DD: add     rsp, 8
 * 000000014016F6E1: call    loc_14016F6D4
 * 000000014016F6E6: add     rsp, 8
 * 000000014016F6EA: call    loc_14016F6DD
 * 000000014016F6EF: add     rsp, 8
 * 000000014016F6F3: call    loc_14016F6E6
 * 000000014016F6F8: add     rsp, 8
 * 000000014016F6FC: call    loc_14016F6EF
 * 000000014016F701: add     rsp, 8
 * 000000014016F705: call    loc_14016F6F8
 * 000000014016F70A: add     rsp, 8
 * 000000014016F70E: call    loc_14016F701
 * 000000014016F713: add     rsp, 8
 * 000000014016F717: call    loc_14016F70A
 * 000000014016F71C: add     rsp, 8
 * 000000014016F720: call    loc_14016F713
 * 000000014016F725: add     rsp, 8
 * 000000014016F729: call    loc_14016F71C
 * 000000014016F72E: add     rsp, 8
 * 000000014016F732: call    loc_14016F725
 * 000000014016F737: add     rsp, 8
 * 000000014016F73B: call    loc_14016F72E
 * 000000014016F740: add     rsp, 8
 * 000000014016F744: call    loc_14016F737
 * 000000014016F749: add     rsp, 8
 * 000000014016F74D: call    loc_14016F740
 * 000000014016F752: add     rsp, 8
 * 000000014016F756: call    loc_14016F749
 * 000000014016F75B: add     rsp, 8
 * 000000014016F75F: call    loc_14016F752
 * 000000014016F764: add     rsp, 8
 * 000000014016F768: call    loc_14016F75B
 * 000000014016F76D: add     rsp, 8
 * 000000014016F771: call    loc_14016F764
 * 000000014016F776: add     rsp, 8
 * 000000014016F77A: call    loc_14016F76D
 * 000000014016F77F: add     rsp, 8
 * 000000014016F783: call    loc_14016F776
 * 000000014016F788: add     rsp, 8
 * 000000014016F78C: call    loc_14016F77F
 * 000000014016F791: add     rsp, 8
 * 000000014016F795: call    loc_14016F788
 * 000000014016F79A: add     rsp, 8
 * 000000014016F79E: mov     eax, 0DADAh
 * 000000014016F7A3: test    word ptr gs:2EB8h, 40h
 * 000000014016F7AE: jz      short loc_14016F7BC
 * 000000014016F7B0: xor     eax, eax
 * 000000014016F7B2: xor     edx, edx
 * 000000014016F7B4: mov     ecx, 1
 * 000000014016F7B9: div     rcx
 * 000000014016F7BC: mov     rax, [rbp-50h]
 * 000000014016F7C0: mov     r8, [rbp+100h]
 * 000000014016F7C7: mov     r9, [rbp+0D8h]
 * 000000014016F7CE: xor     edx, edx
 * 000000014016F7D0: pxor    xmm0, xmm0
 * 000000014016F7D4: pxor    xmm1, xmm1
 * 000000014016F7D8: pxor    xmm2, xmm2
 * 000000014016F7DC: pxor    xmm3, xmm3
 * 000000014016F7E0: pxor    xmm4, xmm4
 * 000000014016F7E4: pxor    xmm5, xmm5
 * 000000014016F7E8: mov     rcx, [rbp+0E8h]
 * 000000014016F7EF: mov     r11, [rbp+0F8h]
 * 000000014016F7F6: test    cs:KiKvaShadow, 1
 * 000000014016F7FD: jnz     KiKernelSysretExit
 * 000000014016F803: mov     rbp, r9
 * 000000014016F806: mov     rsp, r8
 * 000000014016F809: test    word ptr gs:2EB8h, 80h
 * 000000014016F814: jz      short loc_14016F81F
 * 000000014016F816: verw    word ptr gs:701Ch
 * 000000014016F81F: swapgs
 * 000000014016F822: sysret
 * 000000014016F825: mov     rdx, [rbp+0B8h]
 * 000000014016F82C: mov     [r11+90h], rdx
 * 000000014016F833: mov     dl, [rbp-58h]
 * 000000014016F836: mov     [r11+232h], dl
 * 000000014016F83D: cli
 * 000000014016F83E: mov     rsp, rbp
 * 000000014016F841: mov     rbp, [rbp+0D8h]
 * 000000014016F848: mov     rsp, [rsp+90h+arg_68]
 * 000000014016F850: sti
 * 000000014016F851: retn
 * 000000014016F852: mov     r11, gs:188h
 * 000000014016F85B: mov     rcx, cr8
 * 000000014016F85F: or      cl, [r11+24Ah]
 * 000000014016F866: or      ecx, [r11+1E4h]
 * 000000014016F86D: jnz     loc_14016FB62
 * 000000014016F873: cli
 * 000000014016F874: mov     [rbp-50h], rax
 * 000000014016F878: mov     rcx, gs:188h
 * 000000014016F881: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016F888: jz      short loc_14016F8A3
 * 000000014016F88A: mov     ecx, 1
 * 000000014016F88F: mov     cr8, rcx
 * 000000014016F893: sti
 * 000000014016F894: call    KiInitiateUserApc
 * 000000014016F899: mov     ecx, 0
 * 000000014016F89E: mov     cr8, rcx
 * 000000014016F8A2: cli
 * 000000014016F8A3: mov     rcx, gs:188h
 * 000000014016F8AC: test    dword ptr [rcx], 8000000h
 * 000000014016F8B2: jz      short loc_14016F8B9
 * 000000014016F8B4: call    KiRestoreSetContextState
 * 000000014016F8B9: mov     rcx, gs:188h
 * 000000014016F8C2: test    byte ptr [rcx+2], 1
 * 000000014016F8C6: jz      short loc_14016F8D6
 * 000000014016F8C8: call    KiCopyCounters
 * 000000014016F8CD: mov     rcx, gs:188h
 * 000000014016F8D6: cmp     word ptr [rbp+80h], 0
 * 000000014016F8DE: jz      short loc_14016F8E5
 * 000000014016F8E0: call    KiRestoreDebugRegisterState
 * 000000014016F8E5: movzx   eax, word ptr gs:2EC2h
 * 000000014016F8EE: cmp     gs:2EBCh, ax
 * 000000014016F8F7: jz      short loc_14016F90B
 * 000000014016F8F9: mov     gs:2EBCh, ax
 * 000000014016F902: mov     ecx, 48h ; 'H'
 * 000000014016F907: xor     edx, edx
 * 000000014016F909: wrmsr
 * 000000014016F90B: btr     word ptr gs:2EB8h, 2
 * 000000014016F916: jnb     short loc_14016F926
 * 000000014016F918: mov     eax, 1
 * 000000014016F91D: xor     edx, edx
 * 000000014016F91F: mov     ecx, 49h ; 'I'
 * 000000014016F924: wrmsr
 * 000000014016F926: btr     word ptr gs:2EB8h, 5
 * 000000014016F931: jnb     loc_14016FA5C
 * 000000014016F937: call    loc_14016FA4A
 * 000000014016F93C: add     rsp, 8
 * 000000014016F940: call    loc_14016FA53
 * 000000014016F945: add     rsp, 8
 * 000000014016F949: call    loc_14016F93C
 * 000000014016F94E: add     rsp, 8
 * 000000014016F952: call    loc_14016F945
 * 000000014016F957: add     rsp, 8
 * 000000014016F95B: call    loc_14016F94E
 * 000000014016F960: add     rsp, 8
 * 000000014016F964: call    loc_14016F957
 * 000000014016F969: add     rsp, 8
 * 000000014016F96D: call    loc_14016F960
 * 000000014016F972: add     rsp, 8
 * 000000014016F976: call    loc_14016F969
 * 000000014016F97B: add     rsp, 8
 * 000000014016F97F: call    loc_14016F972
 * 000000014016F984: add     rsp, 8
 * 000000014016F988: call    loc_14016F97B
 * 000000014016F98D: add     rsp, 8
 * 000000014016F991: call    loc_14016F984
 * 000000014016F996: add     rsp, 8
 * 000000014016F99A: call    loc_14016F98D
 * 000000014016F99F: add     rsp, 8
 * 000000014016F9A3: call    loc_14016F996
 * 000000014016F9A8: add     rsp, 8
 * 000000014016F9AC: call    loc_14016F99F
 * 000000014016F9B1: add     rsp, 8
 * 000000014016F9B5: call    loc_14016F9A8
 * 000000014016F9BA: add     rsp, 8
 * 000000014016F9BE: call    loc_14016F9B1
 * 000000014016F9C3: add     rsp, 8
 * 000000014016F9C7: call    loc_14016F9BA
 * 000000014016F9CC: add     rsp, 8
 * 000000014016F9D0: call    loc_14016F9C3
 * 000000014016F9D5: add     rsp, 8
 * 000000014016F9D9: call    loc_14016F9CC
 * 000000014016F9DE: add     rsp, 8
 * 000000014016F9E2: call    loc_14016F9D5
 * 000000014016F9E7: add     rsp, 8
 * 000000014016F9EB: call    loc_14016F9DE
 * 000000014016F9F0: add     rsp, 8
 * 000000014016F9F4: call    loc_14016F9E7
 * 000000014016F9F9: add     rsp, 8
 * 000000014016F9FD: call    loc_14016F9F0
 * 000000014016FA02: add     rsp, 8
 * 000000014016FA06: call    loc_14016F9F9
 * 000000014016FA0B: add     rsp, 8
 * 000000014016FA0F: call    loc_14016FA02
 * 000000014016FA14: add     rsp, 8
 * 000000014016FA18: call    loc_14016FA0B
 * 000000014016FA1D: add     rsp, 8
 * 000000014016FA21: call    loc_14016FA14
 * 000000014016FA26: add     rsp, 8
 * 000000014016FA2A: call    loc_14016FA1D
 * 000000014016FA2F: add     rsp, 8
 * 000000014016FA33: call    loc_14016FA26
 * 000000014016FA38: add     rsp, 8
 * 000000014016FA3C: call    loc_14016FA2F
 * 000000014016FA41: add     rsp, 8
 * 000000014016FA45: call    loc_14016FA38
 * 000000014016FA4A: add     rsp, 8
 * 000000014016FA4E: call    loc_14016FA41
 * 000000014016FA53: add     rsp, 8
 * 000000014016FA57: mov     eax, 0DADAh
 * 000000014016FA5C: test    word ptr gs:2EB8h, 40h
 * 000000014016FA67: jz      short loc_14016FA75
 * 000000014016FA69: xor     eax, eax
 * 000000014016FA6B: xor     edx, edx
 * 000000014016FA6D: mov     ecx, 1
 * 000000014016FA72: div     rcx
 * 000000014016FA75: ldmxcsr dword ptr [rbp-54h]
 * 000000014016FA79: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014016FA7D: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014016FA81: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014016FA85: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014016FA89: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014016FA8D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014016FA91: mov     r11, [rbp-20h]
 * 000000014016FA95: mov     r10, [rbp-28h]
 * 000000014016FA99: mov     r9, [rbp-30h]
 * 000000014016FA9D: mov     r8, [rbp-38h]
 * 000000014016FAA1: mov     rdx, [rbp-40h]
 * 000000014016FAA5: mov     rcx, [rbp-48h]
 * 000000014016FAA9: mov     rax, [rbp-50h]
 * 000000014016FAAD: mov     rsi, [rbp+0D0h]
 * 000000014016FAB4: mov     rdi, [rbp+0C8h]
 * 000000014016FABB: mov     rbx, [rbp+0C0h]
 * 000000014016FAC2: mov     rsp, rbp
 * 000000014016FAC5: mov     rbp, [rbp+0D8h]
 * 000000014016FACC: add     rsp, 0E8h
 * 000000014016FAD3: test    cs:KiKvaShadow, 1
 * 000000014016FADA: jz      short loc_14016FAE1
 * 000000014016FADC: jmp     KiKernelExit
 * 000000014016FAE1: test    word ptr gs:2EB8h, 80h
 * 000000014016FAEC: jz      short loc_14016FAF3
 * 000000014016FAEE: verw    [rsp-158h+arg_170]
 * 000000014016FAF3: swapgs
 * 000000014016FAF6: iretq
 * 000000014016FAF8: cmp     edi, 20h ; ' '
 * 000000014016FAFB: jnz     short loc_14016FB58
 * 000000014016FAFD: mov     [rbp-80h], eax
 * 000000014016FB00: mov     [rbp-78h], rcx
 * 000000014016FB04: mov     [rbp-70h], rdx
 * 000000014016FB08: mov     [rbp-68h], r8
 * 000000014016FB0C: mov     [rbp-60h], r9
 * 000000014016FB10: call    KiConvertToGuiThread
 * 000000014016FB15: or      eax, eax
 * 000000014016FB17: mov     eax, [rbp-80h]
 * 000000014016FB1A: mov     rcx, [rbp-78h]
 * 000000014016FB1E: mov     rdx, [rbp-70h]
 * 000000014016FB22: mov     r8, [rbp-68h]
 * 000000014016FB26: mov     r9, [rbp-60h]
 * 000000014016FB2A: mov     [rbx+90h], rsp
 * 000000014016FB31: jz      KiSystemServiceRepeat
 * 000000014016FB37: lea     rdi, xmmword_1403AA7A0
 * 000000014016FB3E: mov     esi, [rdi+10h]
 * 000000014016FB41: mov     rdi, [rdi]
 * 000000014016FB44: cmp     eax, esi
 * 000000014016FB46: jnb     short loc_14016FB58
 * 000000014016FB48: lea     rdi, [rdi+rsi*4]
 * 000000014016FB4C: movsx   eax, byte ptr [rax+rdi]
 * 000000014016FB50: or      eax, eax
 * 000000014016FB52: jle     KiSystemServiceExit
 * 000000014016FB58: mov     eax, 0C000001Ch
 * 000000014016FB5D: jmp     KiSystemServiceExit
 * 000000014016FB62: mov     ecx, 4Ah ; 'J'
 * 000000014016FB67: xor     r9d, r9d
 * 000000014016FB6A: mov     r8, cr8
 * 000000014016FB6E: or      r8d, r8d
 * 000000014016FB71: jnz     short loc_14016FB87
 * 000000014016FB73: mov     ecx, 1
 * 000000014016FB78: movzx   r8d, byte ptr [r11+24Ah]
 * 000000014016FB80: mov     r9d, [r11+1E4h]
 * 000000014016FB87: mov     rdx, [rbp+0E8h]
 * 000000014016FB8E: mov     r10, rbp
 * 000000014016FB91: call    KiBugCheckDispatch
 * 000000014016FB96: sub     rsp, 50h
 * 000000014016FB9A: mov     [rsp+0E0h+var_C0], rcx
 * 000000014016FB9F: mov     [rsp+0E0h+var_B8], rdx
 * 000000014016FBA4: mov     [rsp+0E0h+var_B0], r8
 * 000000014016FBA9: mov     [rsp+0E0h+var_A8], r9
 * 000000014016FBAE: mov     [rsp+0E0h+var_A0], r10
 * 000000014016FBB3: mov     rcx, r10
 * 000000014016FBB6: call    PerfInfoLogSysCallEntry
 * 000000014016FBBB: mov     rcx, [rsp+0E0h+var_C0]
 * 000000014016FBC0: mov     rdx, [rsp+0E0h+var_B8]
 * 000000014016FBC5: mov     r8, [rsp+0E0h+var_B0]
 * 000000014016FBCA: mov     r9, [rsp+0E0h+var_A8]
 * 000000014016FBCF: mov     r10, [rsp+0E0h+var_A0]
 * 000000014016FBD4: add     rsp, 50h
 * 000000014016FBD8: call    r10
 * 000000014016FBDB: mov     [rbp-50h], rax
 * 000000014016FBDF: mov     rcx, rax
 * 000000014016FBE2: call    PerfInfoLogSysCallExit
 * 000000014016FBE7: mov     rax, [rbp-50h]
 * 000000014016FBEB: jmp     loc_14016F493
 * 000000014016FBF0: retn
 */
