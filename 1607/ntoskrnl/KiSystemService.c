/*
 * XREFs of KiSystemService @ 0x14016E900
 * Callers:
 *     KiSystemServiceShadow @ 0x14023FC80 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x14016E900 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140170EC0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x14016E900
 * Reason: Hex-Rays returned no pseudocode for 0x14016E900
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016E900: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014016E906: jz      KiSystemService32User
 * 000000014016E90C: test    cs:KiKvaShadow, 1
 * 000000014016E913: jnz     short loc_14016E918
 * 000000014016E915: swapgs
 * 000000014016E918: lfence
 * 000000014016E91B: mov     rcx, r10
 * 000000014016E91E: sub     rsp, 8
 * 000000014016E922: push    rbp
 * 000000014016E923: sub     rsp, 158h
 * 000000014016E92A: lea     rbp, [rsp+168h+var_E8]
 * 000000014016E932: mov     [rbp+0C0h], rbx
 * 000000014016E939: mov     [rbp+0C8h], rdi
 * 000000014016E940: mov     [rbp+0D0h], rsi
 * 000000014016E947: mov     [rbp-50h], rax
 * 000000014016E94B: mov     [rbp-48h], rcx
 * 000000014016E94F: mov     [rbp-40h], rdx
 * 000000014016E953: mov     rcx, gs:188h
 * 000000014016E95C: mov     rcx, [rcx+220h]
 * 000000014016E963: mov     rcx, [rcx+7B8h]
 * 000000014016E96A: mov     gs:2EB0h, rcx
 * 000000014016E973: movzx   eax, word ptr gs:2EBEh
 * 000000014016E97C: cmp     gs:2EBCh, ax
 * 000000014016E985: jz      short loc_14016E999
 * 000000014016E987: mov     gs:2EBCh, ax
 * 000000014016E990: mov     ecx, 48h ; 'H'
 * 000000014016E995: xor     edx, edx
 * 000000014016E997: wrmsr
 * 000000014016E999: movzx   edx, word ptr gs:2EB8h
 * 000000014016E9A2: test    edx, 8
 * 000000014016E9A8: jz      short loc_14016E9C1
 * 000000014016E9AA: mov     eax, 1
 * 000000014016E9AF: xor     edx, edx
 * 000000014016E9B1: mov     ecx, 49h ; 'I'
 * 000000014016E9B6: wrmsr
 * 000000014016E9B8: movzx   edx, word ptr gs:2EB8h
 * 000000014016E9C1: test    edx, 2
 * 000000014016E9C7: jz      loc_14016EAF2
 * 000000014016E9CD: call    loc_14016EAE0
 * 000000014016E9D2: add     rsp, 8
 * 000000014016E9D6: call    loc_14016EAE9
 * 000000014016E9DB: add     rsp, 8
 * 000000014016E9DF: call    loc_14016E9D2
 * 000000014016E9E4: add     rsp, 8
 * 000000014016E9E8: call    loc_14016E9DB
 * 000000014016E9ED: add     rsp, 8
 * 000000014016E9F1: call    loc_14016E9E4
 * 000000014016E9F6: add     rsp, 8
 * 000000014016E9FA: call    loc_14016E9ED
 * 000000014016E9FF: add     rsp, 8
 * 000000014016EA03: call    loc_14016E9F6
 * 000000014016EA08: add     rsp, 8
 * 000000014016EA0C: call    loc_14016E9FF
 * 000000014016EA11: add     rsp, 8
 * 000000014016EA15: call    loc_14016EA08
 * 000000014016EA1A: add     rsp, 8
 * 000000014016EA1E: call    loc_14016EA11
 * 000000014016EA23: add     rsp, 8
 * 000000014016EA27: call    loc_14016EA1A
 * 000000014016EA2C: add     rsp, 8
 * 000000014016EA30: call    loc_14016EA23
 * 000000014016EA35: add     rsp, 8
 * 000000014016EA39: call    loc_14016EA2C
 * 000000014016EA3E: add     rsp, 8
 * 000000014016EA42: call    loc_14016EA35
 * 000000014016EA47: add     rsp, 8
 * 000000014016EA4B: call    loc_14016EA3E
 * 000000014016EA50: add     rsp, 8
 * 000000014016EA54: call    loc_14016EA47
 * 000000014016EA59: add     rsp, 8
 * 000000014016EA5D: call    loc_14016EA50
 * 000000014016EA62: add     rsp, 8
 * 000000014016EA66: call    loc_14016EA59
 * 000000014016EA6B: add     rsp, 8
 * 000000014016EA6F: call    loc_14016EA62
 * 000000014016EA74: add     rsp, 8
 * 000000014016EA78: call    loc_14016EA6B
 * 000000014016EA7D: add     rsp, 8
 * 000000014016EA81: call    loc_14016EA74
 * 000000014016EA86: add     rsp, 8
 * 000000014016EA8A: call    loc_14016EA7D
 * 000000014016EA8F: add     rsp, 8
 * 000000014016EA93: call    loc_14016EA86
 * 000000014016EA98: add     rsp, 8
 * 000000014016EA9C: call    loc_14016EA8F
 * 000000014016EAA1: add     rsp, 8
 * 000000014016EAA5: call    loc_14016EA98
 * 000000014016EAAA: add     rsp, 8
 * 000000014016EAAE: call    loc_14016EAA1
 * 000000014016EAB3: add     rsp, 8
 * 000000014016EAB7: call    loc_14016EAAA
 * 000000014016EABC: add     rsp, 8
 * 000000014016EAC0: call    loc_14016EAB3
 * 000000014016EAC5: add     rsp, 8
 * 000000014016EAC9: call    loc_14016EABC
 * 000000014016EACE: add     rsp, 8
 * 000000014016EAD2: call    loc_14016EAC5
 * 000000014016EAD7: add     rsp, 8
 * 000000014016EADB: call    loc_14016EACE
 * 000000014016EAE0: add     rsp, 8
 * 000000014016EAE4: call    loc_14016EAD7
 * 000000014016EAE9: add     rsp, 8
 * 000000014016EAED: mov     eax, 0DADAh
 * 000000014016EAF2: test    edx, 100h
 * 000000014016EAF8: jz      short loc_14016EAFF
 * 000000014016EAFA: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016EAFF: lfence
 * 000000014016EB02: jmp     KiSystemServiceUser
 * 000000014016EB07: retn
 */
