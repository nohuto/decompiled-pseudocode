/*
 * XREFs of KiStackFault @ 0x14016C240
 * Callers:
 *     KiStackFaultShadow @ 0x14023F600 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x14016C240 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x14016C240
 * Reason: Hex-Rays returned no pseudocode for 0x14016C240
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016C240: push    rbp
 * 000000014016C241: sub     rsp, 158h
 * 000000014016C248: lea     rbp, [rsp+80h]
 * 000000014016C250: mov     [rbp+0D8h+var_12D], 1
 * 000000014016C254: mov     [rbp+0D8h+var_128], rax
 * 000000014016C258: mov     [rbp+0D8h+var_120], rcx
 * 000000014016C25C: mov     [rbp+0D8h+var_118], rdx
 * 000000014016C260: mov     [rbp+0D8h+var_110], r8
 * 000000014016C264: mov     [rbp+0D8h+var_108], r9
 * 000000014016C268: mov     [rbp+0D8h+var_100], r10
 * 000000014016C26C: mov     [rbp+0D8h+var_F8], r11
 * 000000014016C270: test    [rbp+0D8h+arg_8], 1
 * 000000014016C277: jnz     short loc_14016C2A8
 * 000000014016C279: lfence
 * 000000014016C27C: test    word ptr gs:2EB8h, 1
 * 000000014016C287: jnz     short loc_14016C291
 * 000000014016C289: lfence
 * 000000014016C28C: jmp     loc_14016C4CD
 * 000000014016C291: movzx   eax, word ptr gs:2EBCh
 * 000000014016C29A: mov     ecx, 48h ; 'H'
 * 000000014016C29F: xor     edx, edx
 * 000000014016C2A1: wrmsr
 * 000000014016C2A3: jmp     loc_14016C4CD
 * 000000014016C2A8: test    cs:KiKvaShadow, 1
 * 000000014016C2AF: jnz     short loc_14016C2B4
 * 000000014016C2B1: swapgs
 * 000000014016C2B4: lfence
 * 000000014016C2B7: mov     r10, gs:188h
 * 000000014016C2C0: mov     rcx, gs:188h
 * 000000014016C2C9: mov     rcx, [rcx+220h]
 * 000000014016C2D0: mov     rcx, [rcx+7B8h]
 * 000000014016C2D7: mov     gs:2EB0h, rcx
 * 000000014016C2E0: movzx   eax, word ptr gs:2EBEh
 * 000000014016C2E9: cmp     gs:2EBCh, ax
 * 000000014016C2F2: jz      short loc_14016C306
 * 000000014016C2F4: mov     gs:2EBCh, ax
 * 000000014016C2FD: mov     ecx, 48h ; 'H'
 * 000000014016C302: xor     edx, edx
 * 000000014016C304: wrmsr
 * 000000014016C306: movzx   edx, word ptr gs:2EB8h
 * 000000014016C30F: test    edx, 8
 * 000000014016C315: jz      short loc_14016C32E
 * 000000014016C317: mov     eax, 1
 * 000000014016C31C: xor     edx, edx
 * 000000014016C31E: mov     ecx, 49h ; 'I'
 * 000000014016C323: wrmsr
 * 000000014016C325: movzx   edx, word ptr gs:2EB8h
 * 000000014016C32E: test    edx, 2
 * 000000014016C334: jz      loc_14016C45F
 * 000000014016C33A: call    loc_14016C44D
 * 000000014016C33F: add     rsp, 8
 * 000000014016C343: call    loc_14016C456
 * 000000014016C348: add     rsp, 8
 * 000000014016C34C: call    loc_14016C33F
 * 000000014016C351: add     rsp, 8
 * 000000014016C355: call    loc_14016C348
 * 000000014016C35A: add     rsp, 8
 * 000000014016C35E: call    loc_14016C351
 * 000000014016C363: add     rsp, 8
 * 000000014016C367: call    loc_14016C35A
 * 000000014016C36C: add     rsp, 8
 * 000000014016C370: call    loc_14016C363
 * 000000014016C375: add     rsp, 8
 * 000000014016C379: call    loc_14016C36C
 * 000000014016C37E: add     rsp, 8
 * 000000014016C382: call    loc_14016C375
 * 000000014016C387: add     rsp, 8
 * 000000014016C38B: call    loc_14016C37E
 * 000000014016C390: add     rsp, 8
 * 000000014016C394: call    loc_14016C387
 * 000000014016C399: add     rsp, 8
 * 000000014016C39D: call    loc_14016C390
 * 000000014016C3A2: add     rsp, 8
 * 000000014016C3A6: call    loc_14016C399
 * 000000014016C3AB: add     rsp, 8
 * 000000014016C3AF: call    loc_14016C3A2
 * 000000014016C3B4: add     rsp, 8
 * 000000014016C3B8: call    loc_14016C3AB
 * 000000014016C3BD: add     rsp, 8
 * 000000014016C3C1: call    loc_14016C3B4
 * 000000014016C3C6: add     rsp, 8
 * 000000014016C3CA: call    loc_14016C3BD
 * 000000014016C3CF: add     rsp, 8
 * 000000014016C3D3: call    loc_14016C3C6
 * 000000014016C3D8: add     rsp, 8
 * 000000014016C3DC: call    loc_14016C3CF
 * 000000014016C3E1: add     rsp, 8
 * 000000014016C3E5: call    loc_14016C3D8
 * 000000014016C3EA: add     rsp, 8
 * 000000014016C3EE: call    loc_14016C3E1
 * 000000014016C3F3: add     rsp, 8
 * 000000014016C3F7: call    loc_14016C3EA
 * 000000014016C3FC: add     rsp, 8
 * 000000014016C400: call    loc_14016C3F3
 * 000000014016C405: add     rsp, 8
 * 000000014016C409: call    loc_14016C3FC
 * 000000014016C40E: add     rsp, 8
 * 000000014016C412: call    loc_14016C405
 * 000000014016C417: add     rsp, 8
 * 000000014016C41B: call    loc_14016C40E
 * 000000014016C420: add     rsp, 8
 * 000000014016C424: call    loc_14016C417
 * 000000014016C429: add     rsp, 8
 * 000000014016C42D: call    loc_14016C420
 * 000000014016C432: add     rsp, 8
 * 000000014016C436: call    loc_14016C429
 * 000000014016C43B: add     rsp, 8
 * 000000014016C43F: call    loc_14016C432
 * 000000014016C444: add     rsp, 8
 * 000000014016C448: call    loc_14016C43B
 * 000000014016C44D: add     rsp, 8
 * 000000014016C451: call    loc_14016C444
 * 000000014016C456: add     rsp, 8
 * 000000014016C45A: mov     eax, 0DADAh
 * 000000014016C45F: test    edx, 100h
 * 000000014016C465: jz      short loc_14016C46C
 * 000000014016C467: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016C46C: lfence
 * 000000014016C46F: test    byte ptr [r10+3], 80h
 * 000000014016C474: jz      short loc_14016C4B8
 * 000000014016C476: mov     ecx, 0C0000102h
 * 000000014016C47B: rdmsr
 * 000000014016C47D: shl     rdx, 20h
 * 000000014016C481: or      rax, rdx
 * 000000014016C484: cmp     rax, cs:MmUserProbeAddress
 * 000000014016C48B: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016C493: cmp     [r10+0F0h], rax
 * 000000014016C49A: jz      short loc_14016C4B8
 * 000000014016C49C: mov     rdx, [r10+1F0h]
 * 000000014016C4A3: bts     dword ptr [r10+74h], 8
 * 000000014016C4A9: dec     word ptr [r10+1E6h]
 * 000000014016C4B1: mov     [rdx+80h], rax
 * 000000014016C4B8: test    byte ptr [r10+3], 3
 * 000000014016C4BD: mov     [rbp+0D8h+var_58], 0
 * 000000014016C4C6: jz      short loc_14016C4CD
 * 000000014016C4C8: call    KiSaveDebugRegisterState
 * 000000014016C4CD: cld
 * 000000014016C4CE: stmxcsr [rbp+0D8h+var_12C]
 * 000000014016C4D2: ldmxcsr dword ptr gs:180h
 * 000000014016C4DB: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014016C4DF: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014016C4E3: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014016C4E7: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014016C4EB: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014016C4EF: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014016C4F3: mov     eax, [rbp+0E0h]
 * 000000014016C4F9: test    [rbp+0D8h+arg_10], 200h
 * 000000014016C503: jz      short loc_14016C506
 * 000000014016C505: sti
 * 000000014016C506: mov     ecx, 0C0000005h
 * 000000014016C50B: mov     edx, 2
 * 000000014016C510: mov     r8, [rbp+0D8h+arg_0]
 * 000000014016C517: mov     r9d, [rbp+0E0h]
 * 000000014016C51E: or      r9d, 3
 * 000000014016C522: and     r9d, 0FFFFh
 * 000000014016C529: test    [rbp+0D8h+arg_8], 1
 * 000000014016C530: jnz     short loc_14016C536
 * 000000014016C532: or      r9, 0FFFFFFFFFFFFFFFFh
 * 000000014016C536: xor     r10, r10
 * 000000014016C539: call    KiExceptionDispatch
 * 000000014016C53E: nop
 * 000000014016C53F: retn
 */
