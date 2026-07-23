/*
 * XREFs of KiSystemCall64 @ 0x14016F500
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x140162150 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x14016F500 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x140170100 (KiBugCheckDispatch.c)
 *     KiUmsCallEntry @ 0x140170FC0 (KiUmsCallEntry.c)
 *     KiUmsExit @ 0x140171240 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 *     PerfInfoLogSysCallEntry @ 0x1402275F4 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x140227660 (PerfInfoLogSysCallExit.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     PsPicoSystemCallDispatch @ 0x14068146C (PsPicoSystemCallDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x14016F500
 * Reason: Hex-Rays returned no pseudocode for 0x14016F500
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016F500: swapgs
 * 000000014016F503: mov     gs:10h, rsp
 * 000000014016F50C: mov     rsp, gs:1A8h
 * 000000014016F515: push    2Bh ; '+'
 * 000000014016F517: push    qword ptr gs:10h
 * 000000014016F51F: push    r11
 * 000000014016F521: push    33h ; '3'
 * 000000014016F523: push    rcx
 * 000000014016F524: mov     rcx, r10
 * 000000014016F527: sub     rsp, 8
 * 000000014016F52B: push    rbp
 * 000000014016F52C: sub     rsp, 158h
 * 000000014016F533: lea     rbp, [rsp+190h+var_110]
 * 000000014016F53B: mov     [rbp+0C0h], rbx
 * 000000014016F542: mov     [rbp+0C8h], rdi
 * 000000014016F549: mov     [rbp+0D0h], rsi
 * 000000014016F550: mov     [rbp-50h], rax
 * 000000014016F554: mov     [rbp-48h], rcx
 * 000000014016F558: mov     [rbp-40h], rdx
 * 000000014016F55C: mov     rcx, gs:188h
 * 000000014016F565: mov     rcx, [rcx+220h]
 * 000000014016F56C: mov     rcx, [rcx+7B8h]
 * 000000014016F573: mov     gs:2EB0h, rcx
 * 000000014016F57C: movzx   eax, word ptr gs:2EBEh
 * 000000014016F585: cmp     gs:2EBCh, ax
 * 000000014016F58E: jz      short loc_14016F5A2
 * 000000014016F590: mov     gs:2EBCh, ax
 * 000000014016F599: mov     ecx, 48h ; 'H'
 * 000000014016F59E: xor     edx, edx
 * 000000014016F5A0: wrmsr
 * 000000014016F5A2: movzx   edx, word ptr gs:2EB8h
 * 000000014016F5AB: test    edx, 8
 * 000000014016F5B1: jz      short loc_14016F5CA
 * 000000014016F5B3: mov     eax, 1
 * 000000014016F5B8: xor     edx, edx
 * 000000014016F5BA: mov     ecx, 49h ; 'I'
 * 000000014016F5BF: wrmsr
 * 000000014016F5C1: movzx   edx, word ptr gs:2EB8h
 * 000000014016F5CA: test    edx, 2
 * 000000014016F5D0: jz      loc_14016F6FB
 * 000000014016F5D6: call    loc_14016F6E9
 * 000000014016F5DB: add     rsp, 8
 * 000000014016F5DF: call    loc_14016F6F2
 * 000000014016F5E4: add     rsp, 8
 * 000000014016F5E8: call    loc_14016F5DB
 * 000000014016F5ED: add     rsp, 8
 * 000000014016F5F1: call    loc_14016F5E4
 * 000000014016F5F6: add     rsp, 8
 * 000000014016F5FA: call    loc_14016F5ED
 * 000000014016F5FF: add     rsp, 8
 * 000000014016F603: call    loc_14016F5F6
 * 000000014016F608: add     rsp, 8
 * 000000014016F60C: call    loc_14016F5FF
 * 000000014016F611: add     rsp, 8
 * 000000014016F615: call    loc_14016F608
 * 000000014016F61A: add     rsp, 8
 * 000000014016F61E: call    loc_14016F611
 * 000000014016F623: add     rsp, 8
 * 000000014016F627: call    loc_14016F61A
 * 000000014016F62C: add     rsp, 8
 * 000000014016F630: call    loc_14016F623
 * 000000014016F635: add     rsp, 8
 * 000000014016F639: call    loc_14016F62C
 * 000000014016F63E: add     rsp, 8
 * 000000014016F642: call    loc_14016F635
 * 000000014016F647: add     rsp, 8
 * 000000014016F64B: call    loc_14016F63E
 * 000000014016F650: add     rsp, 8
 * 000000014016F654: call    loc_14016F647
 * 000000014016F659: add     rsp, 8
 * 000000014016F65D: call    loc_14016F650
 * 000000014016F662: add     rsp, 8
 * 000000014016F666: call    loc_14016F659
 * 000000014016F66B: add     rsp, 8
 * 000000014016F66F: call    loc_14016F662
 * 000000014016F674: add     rsp, 8
 * 000000014016F678: call    loc_14016F66B
 * 000000014016F67D: add     rsp, 8
 * 000000014016F681: call    loc_14016F674
 * 000000014016F686: add     rsp, 8
 * 000000014016F68A: call    loc_14016F67D
 * 000000014016F68F: add     rsp, 8
 * 000000014016F693: call    loc_14016F686
 * 000000014016F698: add     rsp, 8
 * 000000014016F69C: call    loc_14016F68F
 * 000000014016F6A1: add     rsp, 8
 * 000000014016F6A5: call    loc_14016F698
 * 000000014016F6AA: add     rsp, 8
 * 000000014016F6AE: call    loc_14016F6A1
 * 000000014016F6B3: add     rsp, 8
 * 000000014016F6B7: call    loc_14016F6AA
 * 000000014016F6BC: add     rsp, 8
 * 000000014016F6C0: call    loc_14016F6B3
 * 000000014016F6C5: add     rsp, 8
 * 000000014016F6C9: call    loc_14016F6BC
 * 000000014016F6CE: add     rsp, 8
 * 000000014016F6D2: call    loc_14016F6C5
 * 000000014016F6D7: add     rsp, 8
 * 000000014016F6DB: call    loc_14016F6CE
 * 000000014016F6E0: add     rsp, 8
 * 000000014016F6E4: call    loc_14016F6D7
 * 000000014016F6E9: add     rsp, 8
 * 000000014016F6ED: call    loc_14016F6E0
 * 000000014016F6F2: add     rsp, 8
 * 000000014016F6F6: mov     eax, 0DADAh
 * 000000014016F6FB: test    edx, 100h
 * 000000014016F701: jz      short loc_14016F708
 * 000000014016F703: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016F708: lfence
 * 000000014016F70B: mov     byte ptr [rbp-55h], 2
 * 000000014016F70F: mov     rbx, gs:188h
 * 000000014016F718: prefetchw byte ptr [rbx+90h]
 * 000000014016F71F: stmxcsr dword ptr [rbp-54h]
 * 000000014016F723: ldmxcsr dword ptr gs:180h
 * 000000014016F72C: cmp     byte ptr [rbx+3], 0
 * 000000014016F730: mov     word ptr [rbp+80h], 0
 * 000000014016F739: jz      loc_14016F7E7
 * 000000014016F73F: test    byte ptr [rbx+3], 3
 * 000000014016F743: mov     [rbp-38h], r8
 * 000000014016F747: mov     [rbp-30h], r9
 * 000000014016F74B: jz      short loc_14016F752
 * 000000014016F74D: call    KiSaveDebugRegisterState
 * 000000014016F752: test    byte ptr [rbx+3], 4
 * 000000014016F756: jz      short loc_14016F786
 * 000000014016F758: mov     [rbp-20h], r10
 * 000000014016F75C: mov     [rbp-28h], r10
 * 000000014016F760: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014016F764: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014016F768: movaps  xmmword ptr [rbp+10h], xmm2
 * 000000014016F76C: movaps  xmmword ptr [rbp+20h], xmm3
 * 000000014016F770: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014016F774: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014016F778: sti
 * 000000014016F779: mov     rcx, rsp
 * 000000014016F77C: call    PsPicoSystemCallDispatch
 * 000000014016F781: jmp     KiSystemServiceExitPico
 * 000000014016F786: test    byte ptr [rbx+3], 80h
 * 000000014016F78A: jz      short loc_14016F7D4
 * 000000014016F78C: mov     ecx, 0C0000102h
 * 000000014016F791: rdmsr
 * 000000014016F793: shl     rdx, 20h
 * 000000014016F797: or      rax, rdx
 * 000000014016F79A: cmp     rax, cs:MmUserProbeAddress
 * 000000014016F7A1: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016F7A9: cmp     [rbx+0F0h], rax
 * 000000014016F7B0: jz      short loc_14016F7D4
 * 000000014016F7B2: mov     rdx, [rbx+1F0h]
 * 000000014016F7B9: bts     dword ptr [rbx+74h], 8
 * 000000014016F7BE: dec     word ptr [rbx+1E6h]
 * 000000014016F7C5: mov     [rdx+80h], rax
 * 000000014016F7CC: sti
 * 000000014016F7CD: call    KiUmsCallEntry
 * 000000014016F7D2: jmp     short loc_14016F7DF
 * 000000014016F7D4: test    byte ptr [rbx+3], 40h
 * 000000014016F7D8: jz      short loc_14016F7DF
 * 000000014016F7DA: bts     dword ptr [rbx+74h], 10h
 * 000000014016F7DF: mov     r8, [rbp-38h]
 * 000000014016F7E3: mov     r9, [rbp-30h]
 * 000000014016F7E7: mov     rax, [rbp-50h]
 * 000000014016F7EB: mov     rcx, [rbp-48h]
 * 000000014016F7EF: mov     rdx, [rbp-40h]
 * 000000014016F7F3: sti
 * 000000014016F7F4: mov     [rbx+88h], rcx
 * 000000014016F7FB: mov     [rbx+80h], eax
 * 000000014016F801: nop     word ptr [rax+rax+00000000h]
 * 000000014016F810: mov     [rbx+90h], rsp
 * 000000014016F817: mov     edi, eax
 * 000000014016F819: shr     edi, 7
 * 000000014016F81C: and     edi, 20h
 * 000000014016F81F: and     eax, 0FFFh
 * 000000014016F824: lea     r10, KeServiceDescriptorTable
 * 000000014016F82B: lea     r11, KeServiceDescriptorTableShadow
 * 000000014016F832: test    dword ptr [rbx+78h], 40h
 * 000000014016F839: jz      short loc_14016F84E
 * 000000014016F83B: test    dword ptr [rbx+78h], 80000h
 * 000000014016F842: jz      short loc_14016F84B
 * 000000014016F844: lea     r11, KeServiceDescriptorTableFilter
 * 000000014016F84B: mov     r10, r11
 * 000000014016F84E: cmp     eax, [rdi+r10+10h]
 * 000000014016F853: jnb     loc_14016FFF8
 * 000000014016F859: mov     r10, [rdi+r10]
 * 000000014016F85D: movsxd  r11, dword ptr [r10+rax*4]
 * 000000014016F861: mov     rax, r11
 * 000000014016F864: sar     r11, 4
 * 000000014016F868: add     r10, r11
 * 000000014016F86B: cmp     edi, 20h ; ' '
 * 000000014016F86E: jnz     short loc_14016F8C0
 * 000000014016F870: mov     r11, [rbx+0F0h]
 * 000000014016F877: cmp     dword ptr [r11+1740h], 0
 * 000000014016F87F: jz      short loc_14016F8C0
 * 000000014016F881: mov     [rbp-50h], rax
 * 000000014016F885: mov     [rbp-48h], rcx
 * 000000014016F889: mov     [rbp-40h], rdx
 * 000000014016F88D: mov     rbx, r8
 * 000000014016F890: mov     rdi, r9
 * 000000014016F893: mov     rsi, r10
 * 000000014016F896: mov     ecx, 7
 * 000000014016F89B: xor     edx, edx
 * 000000014016F89D: xor     r8, r8
 * 000000014016F8A0: xor     r9, r9
 * 000000014016F8A3: call    PsInvokeWin32Callout
 * 000000014016F8A8: mov     rax, [rbp-50h]
 * 000000014016F8AC: mov     rcx, [rbp-48h]
 * 000000014016F8B0: mov     rdx, [rbp-40h]
 * 000000014016F8B4: mov     r8, rbx
 * 000000014016F8B7: mov     r9, rdi
 * 000000014016F8BA: mov     r10, rsi
 * 000000014016F8BD: nop     dword ptr [rax]
 * 000000014016F8C0: and     eax, 0Fh
 * 000000014016F8C3: jz      KiSystemServiceCopyEnd
 * 000000014016F8C9: shl     eax, 3
 * 000000014016F8CC: lea     rsp, [rsp-70h]
 * 000000014016F8D1: lea     rdi, [rsp+100h+var_E8]
 * 000000014016F8D6: mov     rsi, [rbp+100h]
 * 000000014016F8DD: lea     rsi, [rsi+20h]
 * 000000014016F8E1: test    byte ptr [rbp+0F0h], 1
 * 000000014016F8E8: jz      short loc_14016F900
 * 000000014016F8EA: cmp     rsi, cs:MmUserProbeAddress
 * 000000014016F8F1: cmovnb  rsi, cs:MmUserProbeAddress
 * 000000014016F8F9: nop     dword ptr [rax+00000000h]
 * 000000014016F900: lea     r11, KiSystemServiceCopyEnd
 * 000000014016F907: sub     r11, rax
 * 000000014016F90A: jmp     r11
 * 000000014016F910: mov     rax, [rsi+70h]
 * 000000014016F914: mov     [rdi+70h], rax
 * 000000014016F918: mov     rax, [rsi+68h]
 * 000000014016F91C: mov     [rdi+68h], rax
 * 000000014016F920: mov     rax, [rsi+60h]
 * 000000014016F924: mov     [rdi+60h], rax
 * 000000014016F928: mov     rax, [rsi+58h]
 * 000000014016F92C: mov     [rdi+58h], rax
 * 000000014016F930: mov     rax, [rsi+50h]
 * 000000014016F934: mov     [rdi+50h], rax
 * 000000014016F938: mov     rax, [rsi+48h]
 * 000000014016F93C: mov     [rdi+48h], rax
 * 000000014016F940: mov     rax, [rsi+40h]
 * 000000014016F944: mov     [rdi+40h], rax
 * 000000014016F948: mov     rax, [rsi+38h]
 * 000000014016F94C: mov     [rdi+38h], rax
 * 000000014016F950: mov     rax, [rsi+30h]
 * 000000014016F954: mov     [rdi+30h], rax
 * 000000014016F958: mov     rax, [rsi+28h]
 * 000000014016F95C: mov     [rdi+28h], rax
 * 000000014016F960: mov     rax, [rsi+20h]
 * 000000014016F964: mov     [rdi+20h], rax
 * 000000014016F968: mov     rax, [rsi+18h]
 * 000000014016F96C: mov     [rdi+18h], rax
 * 000000014016F970: mov     rax, [rsi+10h]
 * 000000014016F974: mov     [rdi+10h], rax
 * 000000014016F978: mov     rax, [rsi+8]
 * 000000014016F97C: mov     [rdi+8], rax
 * 000000014016F980: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 000000014016F98A: jnz     loc_140170096
 * 000000014016F990: call    r10
 * 000000014016F993: inc     dword ptr gs:2E38h
 * 000000014016F99B: mov     rbx, [rbp+0C0h]
 * 000000014016F9A2: mov     rdi, [rbp+0C8h]
 * 000000014016F9A9: mov     rsi, [rbp+0D0h]
 * 000000014016F9B0: mov     r11, gs:188h
 * 000000014016F9B9: test    byte ptr [rbp+0F0h], 1
 * 000000014016F9C0: jz      loc_14016FD25
 * 000000014016F9C6: mov     rcx, cr8
 * 000000014016F9CA: or      cl, [r11+24Ah]
 * 000000014016F9D1: or      ecx, [r11+1E4h]
 * 000000014016F9D8: jnz     loc_140170062
 * 000000014016F9DE: cli
 * 000000014016F9DF: mov     rcx, gs:188h
 * 000000014016F9E8: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016F9EF: jz      short loc_14016FA48
 * 000000014016F9F1: mov     [rbp-50h], rax
 * 000000014016F9F5: xor     eax, eax
 * 000000014016F9F7: mov     [rbp-48h], rax
 * 000000014016F9FB: mov     [rbp-40h], rax
 * 000000014016F9FF: mov     [rbp-38h], rax
 * 000000014016FA03: mov     [rbp-30h], rax
 * 000000014016FA07: mov     [rbp-28h], rax
 * 000000014016FA0B: mov     [rbp-20h], rax
 * 000000014016FA0F: pxor    xmm0, xmm0
 * 000000014016FA13: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014016FA17: movaps  xmmword ptr [rbp+0], xmm0
 * 000000014016FA1B: movaps  xmmword ptr [rbp+10h], xmm0
 * 000000014016FA1F: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014016FA23: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014016FA27: movaps  xmmword ptr [rbp+40h], xmm0
 * 000000014016FA2B: mov     ecx, 1
 * 000000014016FA30: mov     cr8, rcx
 * 000000014016FA34: sti
 * 000000014016FA35: call    KiInitiateUserApc
 * 000000014016FA3A: cli
 * 000000014016FA3B: mov     ecx, 0
 * 000000014016FA40: mov     cr8, rcx
 * 000000014016FA44: mov     rax, [rbp-50h]
 * 000000014016FA48: mov     rcx, gs:188h
 * 000000014016FA51: test    dword ptr [rcx], 8000000h
 * 000000014016FA57: jz      short loc_14016FA98
 * 000000014016FA59: mov     [rbp-50h], rax
 * 000000014016FA5D: xor     eax, eax
 * 000000014016FA5F: mov     [rbp-48h], rax
 * 000000014016FA63: mov     [rbp-40h], rax
 * 000000014016FA67: mov     [rbp-38h], rax
 * 000000014016FA6B: mov     [rbp-30h], rax
 * 000000014016FA6F: mov     [rbp-28h], rax
 * 000000014016FA73: mov     [rbp-20h], rax
 * 000000014016FA77: pxor    xmm0, xmm0
 * 000000014016FA7B: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014016FA7F: movaps  xmmword ptr [rbp+0], xmm0
 * 000000014016FA83: movaps  xmmword ptr [rbp+10h], xmm0
 * 000000014016FA87: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014016FA8B: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014016FA8F: movaps  xmmword ptr [rbp+40h], xmm0
 * 000000014016FA93: call    KiRestoreSetContextState
 * 000000014016FA98: mov     rcx, gs:188h
 * 000000014016FAA1: test    dword ptr [rcx], 40010000h
 * 000000014016FAA7: jz      short loc_14016FAD6
 * 000000014016FAA9: mov     [rbp-50h], rax
 * 000000014016FAAD: test    byte ptr [rcx+2], 1
 * 000000014016FAB1: jz      short loc_14016FAC1
 * 000000014016FAB3: call    KiCopyCounters
 * 000000014016FAB8: mov     rcx, gs:188h
 * 000000014016FAC1: test    byte ptr [rcx+3], 40h
 * 000000014016FAC5: jz      short loc_14016FAD2
 * 000000014016FAC7: lea     rsp, [rbp-80h]
 * 000000014016FACB: xor     ecx, ecx
 * 000000014016FACD: call    KiUmsExit
 * 000000014016FAD2: mov     rax, [rbp-50h]
 * 000000014016FAD6: ldmxcsr dword ptr [rbp-54h]
 * 000000014016FADA: xor     r10, r10
 * 000000014016FADD: cmp     word ptr [rbp+80h], 0
 * 000000014016FAE5: jz      short loc_14016FB28
 * 000000014016FAE7: mov     [rbp-50h], rax
 * 000000014016FAEB: call    KiRestoreDebugRegisterState
 * 000000014016FAF0: mov     rax, gs:188h
 * 000000014016FAF9: mov     rax, [rax+0B8h]
 * 000000014016FB00: mov     rax, [rax+2C8h]
 * 000000014016FB07: or      rax, rax
 * 000000014016FB0A: jz      short loc_14016FB24
 * 000000014016FB0C: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 000000014016FB14: jnz     short loc_14016FB24
 * 000000014016FB16: mov     r10, [rbp+0E8h]
 * 000000014016FB1D: mov     [rbp+0E8h], rax
 * 000000014016FB24: mov     rax, [rbp-50h]
 * 000000014016FB28: mov     [rbp-50h], rax
 * 000000014016FB2C: movzx   eax, word ptr gs:2EC2h
 * 000000014016FB35: cmp     gs:2EBCh, ax
 * 000000014016FB3E: jz      short loc_14016FB52
 * 000000014016FB40: mov     gs:2EBCh, ax
 * 000000014016FB49: mov     ecx, 48h ; 'H'
 * 000000014016FB4E: xor     edx, edx
 * 000000014016FB50: wrmsr
 * 000000014016FB52: btr     word ptr gs:2EB8h, 2
 * 000000014016FB5D: jnb     short loc_14016FB6D
 * 000000014016FB5F: mov     eax, 1
 * 000000014016FB64: xor     edx, edx
 * 000000014016FB66: mov     ecx, 49h ; 'I'
 * 000000014016FB6B: wrmsr
 * 000000014016FB6D: btr     word ptr gs:2EB8h, 5
 * 000000014016FB78: jnb     loc_14016FCA3
 * 000000014016FB7E: call    loc_14016FC91
 * 000000014016FB83: add     rsp, 8
 * 000000014016FB87: call    loc_14016FC9A
 * 000000014016FB8C: add     rsp, 8
 * 000000014016FB90: call    loc_14016FB83
 * 000000014016FB95: add     rsp, 8
 * 000000014016FB99: call    loc_14016FB8C
 * 000000014016FB9E: add     rsp, 8
 * 000000014016FBA2: call    loc_14016FB95
 * 000000014016FBA7: add     rsp, 8
 * 000000014016FBAB: call    loc_14016FB9E
 * 000000014016FBB0: add     rsp, 8
 * 000000014016FBB4: call    loc_14016FBA7
 * 000000014016FBB9: add     rsp, 8
 * 000000014016FBBD: call    loc_14016FBB0
 * 000000014016FBC2: add     rsp, 8
 * 000000014016FBC6: call    loc_14016FBB9
 * 000000014016FBCB: add     rsp, 8
 * 000000014016FBCF: call    loc_14016FBC2
 * 000000014016FBD4: add     rsp, 8
 * 000000014016FBD8: call    loc_14016FBCB
 * 000000014016FBDD: add     rsp, 8
 * 000000014016FBE1: call    loc_14016FBD4
 * 000000014016FBE6: add     rsp, 8
 * 000000014016FBEA: call    loc_14016FBDD
 * 000000014016FBEF: add     rsp, 8
 * 000000014016FBF3: call    loc_14016FBE6
 * 000000014016FBF8: add     rsp, 8
 * 000000014016FBFC: call    loc_14016FBEF
 * 000000014016FC01: add     rsp, 8
 * 000000014016FC05: call    loc_14016FBF8
 * 000000014016FC0A: add     rsp, 8
 * 000000014016FC0E: call    loc_14016FC01
 * 000000014016FC13: add     rsp, 8
 * 000000014016FC17: call    loc_14016FC0A
 * 000000014016FC1C: add     rsp, 8
 * 000000014016FC20: call    loc_14016FC13
 * 000000014016FC25: add     rsp, 8
 * 000000014016FC29: call    loc_14016FC1C
 * 000000014016FC2E: add     rsp, 8
 * 000000014016FC32: call    loc_14016FC25
 * 000000014016FC37: add     rsp, 8
 * 000000014016FC3B: call    loc_14016FC2E
 * 000000014016FC40: add     rsp, 8
 * 000000014016FC44: call    loc_14016FC37
 * 000000014016FC49: add     rsp, 8
 * 000000014016FC4D: call    loc_14016FC40
 * 000000014016FC52: add     rsp, 8
 * 000000014016FC56: call    loc_14016FC49
 * 000000014016FC5B: add     rsp, 8
 * 000000014016FC5F: call    loc_14016FC52
 * 000000014016FC64: add     rsp, 8
 * 000000014016FC68: call    loc_14016FC5B
 * 000000014016FC6D: add     rsp, 8
 * 000000014016FC71: call    loc_14016FC64
 * 000000014016FC76: add     rsp, 8
 * 000000014016FC7A: call    loc_14016FC6D
 * 000000014016FC7F: add     rsp, 8
 * 000000014016FC83: call    loc_14016FC76
 * 000000014016FC88: add     rsp, 8
 * 000000014016FC8C: call    loc_14016FC7F
 * 000000014016FC91: add     rsp, 8
 * 000000014016FC95: call    loc_14016FC88
 * 000000014016FC9A: add     rsp, 8
 * 000000014016FC9E: mov     eax, 0DADAh
 * 000000014016FCA3: test    word ptr gs:2EB8h, 40h
 * 000000014016FCAE: jz      short loc_14016FCBC
 * 000000014016FCB0: xor     eax, eax
 * 000000014016FCB2: xor     edx, edx
 * 000000014016FCB4: mov     ecx, 1
 * 000000014016FCB9: div     rcx
 * 000000014016FCBC: mov     rax, [rbp-50h]
 * 000000014016FCC0: mov     r8, [rbp+100h]
 * 000000014016FCC7: mov     r9, [rbp+0D8h]
 * 000000014016FCCE: xor     edx, edx
 * 000000014016FCD0: pxor    xmm0, xmm0
 * 000000014016FCD4: pxor    xmm1, xmm1
 * 000000014016FCD8: pxor    xmm2, xmm2
 * 000000014016FCDC: pxor    xmm3, xmm3
 * 000000014016FCE0: pxor    xmm4, xmm4
 * 000000014016FCE4: pxor    xmm5, xmm5
 * 000000014016FCE8: mov     rcx, [rbp+0E8h]
 * 000000014016FCEF: mov     r11, [rbp+0F8h]
 * 000000014016FCF6: test    cs:KiKvaShadow, 1
 * 000000014016FCFD: jnz     KiKernelSysretExit
 * 000000014016FD03: mov     rbp, r9
 * 000000014016FD06: mov     rsp, r8
 * 000000014016FD09: test    word ptr gs:2EB8h, 80h
 * 000000014016FD14: jz      short loc_14016FD1F
 * 000000014016FD16: verw    word ptr gs:701Ch
 * 000000014016FD1F: swapgs
 * 000000014016FD22: sysret
 * 000000014016FD25: mov     rdx, [rbp+0B8h]
 * 000000014016FD2C: mov     [r11+90h], rdx
 * 000000014016FD33: mov     dl, [rbp-58h]
 * 000000014016FD36: mov     [r11+232h], dl
 * 000000014016FD3D: cli
 * 000000014016FD3E: mov     rsp, rbp
 * 000000014016FD41: mov     rbp, [rbp+0D8h]
 * 000000014016FD48: mov     rsp, [rsp+90h+arg_68]
 * 000000014016FD50: sti
 * 000000014016FD51: retn
 * 000000014016FD52: mov     r11, gs:188h
 * 000000014016FD5B: mov     rcx, cr8
 * 000000014016FD5F: or      cl, [r11+24Ah]
 * 000000014016FD66: or      ecx, [r11+1E4h]
 * 000000014016FD6D: jnz     loc_140170062
 * 000000014016FD73: cli
 * 000000014016FD74: mov     [rbp-50h], rax
 * 000000014016FD78: mov     rcx, gs:188h
 * 000000014016FD81: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016FD88: jz      short loc_14016FDA3
 * 000000014016FD8A: mov     ecx, 1
 * 000000014016FD8F: mov     cr8, rcx
 * 000000014016FD93: sti
 * 000000014016FD94: call    KiInitiateUserApc
 * 000000014016FD99: mov     ecx, 0
 * 000000014016FD9E: mov     cr8, rcx
 * 000000014016FDA2: cli
 * 000000014016FDA3: mov     rcx, gs:188h
 * 000000014016FDAC: test    dword ptr [rcx], 8000000h
 * 000000014016FDB2: jz      short loc_14016FDB9
 * 000000014016FDB4: call    KiRestoreSetContextState
 * 000000014016FDB9: mov     rcx, gs:188h
 * 000000014016FDC2: test    byte ptr [rcx+2], 1
 * 000000014016FDC6: jz      short loc_14016FDD6
 * 000000014016FDC8: call    KiCopyCounters
 * 000000014016FDCD: mov     rcx, gs:188h
 * 000000014016FDD6: cmp     word ptr [rbp+80h], 0
 * 000000014016FDDE: jz      short loc_14016FDE5
 * 000000014016FDE0: call    KiRestoreDebugRegisterState
 * 000000014016FDE5: movzx   eax, word ptr gs:2EC2h
 * 000000014016FDEE: cmp     gs:2EBCh, ax
 * 000000014016FDF7: jz      short loc_14016FE0B
 * 000000014016FDF9: mov     gs:2EBCh, ax
 * 000000014016FE02: mov     ecx, 48h ; 'H'
 * 000000014016FE07: xor     edx, edx
 * 000000014016FE09: wrmsr
 * 000000014016FE0B: btr     word ptr gs:2EB8h, 2
 * 000000014016FE16: jnb     short loc_14016FE26
 * 000000014016FE18: mov     eax, 1
 * 000000014016FE1D: xor     edx, edx
 * 000000014016FE1F: mov     ecx, 49h ; 'I'
 * 000000014016FE24: wrmsr
 * 000000014016FE26: btr     word ptr gs:2EB8h, 5
 * 000000014016FE31: jnb     loc_14016FF5C
 * 000000014016FE37: call    loc_14016FF4A
 * 000000014016FE3C: add     rsp, 8
 * 000000014016FE40: call    loc_14016FF53
 * 000000014016FE45: add     rsp, 8
 * 000000014016FE49: call    loc_14016FE3C
 * 000000014016FE4E: add     rsp, 8
 * 000000014016FE52: call    loc_14016FE45
 * 000000014016FE57: add     rsp, 8
 * 000000014016FE5B: call    loc_14016FE4E
 * 000000014016FE60: add     rsp, 8
 * 000000014016FE64: call    loc_14016FE57
 * 000000014016FE69: add     rsp, 8
 * 000000014016FE6D: call    loc_14016FE60
 * 000000014016FE72: add     rsp, 8
 * 000000014016FE76: call    loc_14016FE69
 * 000000014016FE7B: add     rsp, 8
 * 000000014016FE7F: call    loc_14016FE72
 * 000000014016FE84: add     rsp, 8
 * 000000014016FE88: call    loc_14016FE7B
 * 000000014016FE8D: add     rsp, 8
 * 000000014016FE91: call    loc_14016FE84
 * 000000014016FE96: add     rsp, 8
 * 000000014016FE9A: call    loc_14016FE8D
 * 000000014016FE9F: add     rsp, 8
 * 000000014016FEA3: call    loc_14016FE96
 * 000000014016FEA8: add     rsp, 8
 * 000000014016FEAC: call    loc_14016FE9F
 * 000000014016FEB1: add     rsp, 8
 * 000000014016FEB5: call    loc_14016FEA8
 * 000000014016FEBA: add     rsp, 8
 * 000000014016FEBE: call    loc_14016FEB1
 * 000000014016FEC3: add     rsp, 8
 * 000000014016FEC7: call    loc_14016FEBA
 * 000000014016FECC: add     rsp, 8
 * 000000014016FED0: call    loc_14016FEC3
 * 000000014016FED5: add     rsp, 8
 * 000000014016FED9: call    loc_14016FECC
 * 000000014016FEDE: add     rsp, 8
 * 000000014016FEE2: call    loc_14016FED5
 * 000000014016FEE7: add     rsp, 8
 * 000000014016FEEB: call    loc_14016FEDE
 * 000000014016FEF0: add     rsp, 8
 * 000000014016FEF4: call    loc_14016FEE7
 * 000000014016FEF9: add     rsp, 8
 * 000000014016FEFD: call    loc_14016FEF0
 * 000000014016FF02: add     rsp, 8
 * 000000014016FF06: call    loc_14016FEF9
 * 000000014016FF0B: add     rsp, 8
 * 000000014016FF0F: call    loc_14016FF02
 * 000000014016FF14: add     rsp, 8
 * 000000014016FF18: call    loc_14016FF0B
 * 000000014016FF1D: add     rsp, 8
 * 000000014016FF21: call    loc_14016FF14
 * 000000014016FF26: add     rsp, 8
 * 000000014016FF2A: call    loc_14016FF1D
 * 000000014016FF2F: add     rsp, 8
 * 000000014016FF33: call    loc_14016FF26
 * 000000014016FF38: add     rsp, 8
 * 000000014016FF3C: call    loc_14016FF2F
 * 000000014016FF41: add     rsp, 8
 * 000000014016FF45: call    loc_14016FF38
 * 000000014016FF4A: add     rsp, 8
 * 000000014016FF4E: call    loc_14016FF41
 * 000000014016FF53: add     rsp, 8
 * 000000014016FF57: mov     eax, 0DADAh
 * 000000014016FF5C: test    word ptr gs:2EB8h, 40h
 * 000000014016FF67: jz      short loc_14016FF75
 * 000000014016FF69: xor     eax, eax
 * 000000014016FF6B: xor     edx, edx
 * 000000014016FF6D: mov     ecx, 1
 * 000000014016FF72: div     rcx
 * 000000014016FF75: ldmxcsr dword ptr [rbp-54h]
 * 000000014016FF79: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014016FF7D: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014016FF81: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014016FF85: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014016FF89: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014016FF8D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014016FF91: mov     r11, [rbp-20h]
 * 000000014016FF95: mov     r10, [rbp-28h]
 * 000000014016FF99: mov     r9, [rbp-30h]
 * 000000014016FF9D: mov     r8, [rbp-38h]
 * 000000014016FFA1: mov     rdx, [rbp-40h]
 * 000000014016FFA5: mov     rcx, [rbp-48h]
 * 000000014016FFA9: mov     rax, [rbp-50h]
 * 000000014016FFAD: mov     rsi, [rbp+0D0h]
 * 000000014016FFB4: mov     rdi, [rbp+0C8h]
 * 000000014016FFBB: mov     rbx, [rbp+0C0h]
 * 000000014016FFC2: mov     rsp, rbp
 * 000000014016FFC5: mov     rbp, [rbp+0D8h]
 * 000000014016FFCC: add     rsp, 0E8h
 * 000000014016FFD3: test    cs:KiKvaShadow, 1
 * 000000014016FFDA: jz      short loc_14016FFE1
 * 000000014016FFDC: jmp     KiKernelExit
 * 000000014016FFE1: test    word ptr gs:2EB8h, 80h
 * 000000014016FFEC: jz      short loc_14016FFF3
 * 000000014016FFEE: verw    [rsp-158h+arg_170]
 * 000000014016FFF3: swapgs
 * 000000014016FFF6: iretq
 * 000000014016FFF8: cmp     edi, 20h ; ' '
 * 000000014016FFFB: jnz     short loc_140170058
 * 000000014016FFFD: mov     [rbp-80h], eax
 * 0000000140170000: mov     [rbp-78h], rcx
 * 0000000140170004: mov     [rbp-70h], rdx
 * 0000000140170008: mov     [rbp-68h], r8
 * 000000014017000C: mov     [rbp-60h], r9
 * 0000000140170010: call    KiConvertToGuiThread
 * 0000000140170015: or      eax, eax
 * 0000000140170017: mov     eax, [rbp-80h]
 * 000000014017001A: mov     rcx, [rbp-78h]
 * 000000014017001E: mov     rdx, [rbp-70h]
 * 0000000140170022: mov     r8, [rbp-68h]
 * 0000000140170026: mov     r9, [rbp-60h]
 * 000000014017002A: mov     [rbx+90h], rsp
 * 0000000140170031: jz      KiSystemServiceRepeat
 * 0000000140170037: lea     rdi, xmmword_1403AA7A0
 * 000000014017003E: mov     esi, [rdi+10h]
 * 0000000140170041: mov     rdi, [rdi]
 * 0000000140170044: cmp     eax, esi
 * 0000000140170046: jnb     short loc_140170058
 * 0000000140170048: lea     rdi, [rdi+rsi*4]
 * 000000014017004C: movsx   eax, byte ptr [rax+rdi]
 * 0000000140170050: or      eax, eax
 * 0000000140170052: jle     KiSystemServiceExit
 * 0000000140170058: mov     eax, 0C000001Ch
 * 000000014017005D: jmp     KiSystemServiceExit
 * 0000000140170062: mov     ecx, 4Ah ; 'J'
 * 0000000140170067: xor     r9d, r9d
 * 000000014017006A: mov     r8, cr8
 * 000000014017006E: or      r8d, r8d
 * 0000000140170071: jnz     short loc_140170087
 * 0000000140170073: mov     ecx, 1
 * 0000000140170078: movzx   r8d, byte ptr [r11+24Ah]
 * 0000000140170080: mov     r9d, [r11+1E4h]
 * 0000000140170087: mov     rdx, [rbp+0E8h]
 * 000000014017008E: mov     r10, rbp
 * 0000000140170091: call    KiBugCheckDispatch
 * 0000000140170096: sub     rsp, 50h
 * 000000014017009A: mov     [rsp+0E0h+var_C0], rcx
 * 000000014017009F: mov     [rsp+0E0h+var_B8], rdx
 * 00000001401700A4: mov     [rsp+0E0h+var_B0], r8
 * 00000001401700A9: mov     [rsp+0E0h+var_A8], r9
 * 00000001401700AE: mov     [rsp+0E0h+var_A0], r10
 * 00000001401700B3: mov     rcx, r10
 * 00000001401700B6: call    PerfInfoLogSysCallEntry
 * 00000001401700BB: mov     rcx, [rsp+0E0h+var_C0]
 * 00000001401700C0: mov     rdx, [rsp+0E0h+var_B8]
 * 00000001401700C5: mov     r8, [rsp+0E0h+var_B0]
 * 00000001401700CA: mov     r9, [rsp+0E0h+var_A8]
 * 00000001401700CF: mov     r10, [rsp+0E0h+var_A0]
 * 00000001401700D4: add     rsp, 50h
 * 00000001401700D8: call    r10
 * 00000001401700DB: mov     [rbp-50h], rax
 * 00000001401700DF: mov     rcx, rax
 * 00000001401700E2: call    PerfInfoLogSysCallExit
 * 00000001401700E7: mov     rax, [rbp-50h]
 * 00000001401700EB: jmp     loc_14016F993
 * 00000001401700F0: retn
 */
