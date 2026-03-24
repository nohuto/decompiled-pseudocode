/*
 * XREFs of KiBreakpointTrap @ 0x14015F240
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140224180 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x14015F240 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x14015F240
 * Reason: Hex-Rays returned no pseudocode for 0x14015F240
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015F240: sub     rsp, 8
 * 000000014015F244: push    rbp
 * 000000014015F245: sub     rsp, 158h
 * 000000014015F24C: lea     rbp, [rsp+80h]
 * 000000014015F254: mov     [rbp+0E8h+var_13D], 1
 * 000000014015F258: mov     [rbp+0E8h+var_138], rax
 * 000000014015F25C: mov     [rbp+0E8h+var_130], rcx
 * 000000014015F260: mov     [rbp+0E8h+var_128], rdx
 * 000000014015F264: mov     [rbp+0E8h+var_120], r8
 * 000000014015F268: mov     [rbp+0E8h+var_118], r9
 * 000000014015F26C: mov     [rbp+0E8h+var_110], r10
 * 000000014015F270: mov     [rbp+0E8h+var_108], r11
 * 000000014015F274: test    [rbp+0E8h+arg_0], 1
 * 000000014015F27B: jnz     loc_14015F3E1
 * 000000014015F281: cmp     byte ptr gs:187h, 0
 * 000000014015F28A: jz      loc_14015F5B1
 * 000000014015F290: test    byte ptr gs:2EB0h, 1
 * 000000014015F299: jz      loc_14015F5B1
 * 000000014015F29F: mov     ecx, 48h ; 'H'
 * 000000014015F2A4: mov     eax, 1
 * 000000014015F2A9: xor     edx, edx
 * 000000014015F2AB: wrmsr
 * 000000014015F2AD: test    byte ptr gs:2EB0h, 4
 * 000000014015F2B6: jnz     loc_14015F5B1
 * 000000014015F2BC: call    loc_14015F3CF
 * 000000014015F2C1: add     rsp, 8
 * 000000014015F2C5: call    loc_14015F3D8
 * 000000014015F2CA: add     rsp, 8
 * 000000014015F2CE: call    loc_14015F2C1
 * 000000014015F2D3: add     rsp, 8
 * 000000014015F2D7: call    loc_14015F2CA
 * 000000014015F2DC: add     rsp, 8
 * 000000014015F2E0: call    loc_14015F2D3
 * 000000014015F2E5: add     rsp, 8
 * 000000014015F2E9: call    loc_14015F2DC
 * 000000014015F2EE: add     rsp, 8
 * 000000014015F2F2: call    loc_14015F2E5
 * 000000014015F2F7: add     rsp, 8
 * 000000014015F2FB: call    loc_14015F2EE
 * 000000014015F300: add     rsp, 8
 * 000000014015F304: call    loc_14015F2F7
 * 000000014015F309: add     rsp, 8
 * 000000014015F30D: call    loc_14015F300
 * 000000014015F312: add     rsp, 8
 * 000000014015F316: call    loc_14015F309
 * 000000014015F31B: add     rsp, 8
 * 000000014015F31F: call    loc_14015F312
 * 000000014015F324: add     rsp, 8
 * 000000014015F328: call    loc_14015F31B
 * 000000014015F32D: add     rsp, 8
 * 000000014015F331: call    loc_14015F324
 * 000000014015F336: add     rsp, 8
 * 000000014015F33A: call    loc_14015F32D
 * 000000014015F33F: add     rsp, 8
 * 000000014015F343: call    loc_14015F336
 * 000000014015F348: add     rsp, 8
 * 000000014015F34C: call    loc_14015F33F
 * 000000014015F351: add     rsp, 8
 * 000000014015F355: call    loc_14015F348
 * 000000014015F35A: add     rsp, 8
 * 000000014015F35E: call    loc_14015F351
 * 000000014015F363: add     rsp, 8
 * 000000014015F367: call    loc_14015F35A
 * 000000014015F36C: add     rsp, 8
 * 000000014015F370: call    loc_14015F363
 * 000000014015F375: add     rsp, 8
 * 000000014015F379: call    loc_14015F36C
 * 000000014015F37E: add     rsp, 8
 * 000000014015F382: call    loc_14015F375
 * 000000014015F387: add     rsp, 8
 * 000000014015F38B: call    loc_14015F37E
 * 000000014015F390: add     rsp, 8
 * 000000014015F394: call    loc_14015F387
 * 000000014015F399: add     rsp, 8
 * 000000014015F39D: call    loc_14015F390
 * 000000014015F3A2: add     rsp, 8
 * 000000014015F3A6: call    loc_14015F399
 * 000000014015F3AB: add     rsp, 8
 * 000000014015F3AF: call    loc_14015F3A2
 * 000000014015F3B4: add     rsp, 8
 * 000000014015F3B8: call    loc_14015F3AB
 * 000000014015F3BD: add     rsp, 8
 * 000000014015F3C1: call    loc_14015F3B4
 * 000000014015F3C6: add     rsp, 8
 * 000000014015F3CA: call    loc_14015F3BD
 * 000000014015F3CF: add     rsp, 8
 * 000000014015F3D3: call    loc_14015F3C6
 * 000000014015F3D8: add     rsp, 8
 * 000000014015F3DC: jmp     loc_14015F5B1
 * 000000014015F3E1: test    cs:KiKvaShadow, 1
 * 000000014015F3E8: jnz     short loc_14015F3ED
 * 000000014015F3EA: swapgs
 * 000000014015F3ED: mov     r10, gs:188h
 * 000000014015F3F6: test    byte ptr gs:2EB0h, 1
 * 000000014015F3FF: jz      loc_14015F562
 * 000000014015F405: mov     rcx, gs:188h
 * 000000014015F40E: mov     rcx, [rcx+220h]
 * 000000014015F415: mov     rcx, [rcx+790h]
 * 000000014015F41C: mov     gs:2EA8h, rcx
 * 000000014015F425: mov     ecx, 48h ; 'H'
 * 000000014015F42A: mov     eax, 1
 * 000000014015F42F: xor     edx, edx
 * 000000014015F431: wrmsr
 * 000000014015F433: test    byte ptr gs:2EB0h, 4
 * 000000014015F43C: jnz     loc_14015F562
 * 000000014015F442: call    loc_14015F555
 * 000000014015F447: add     rsp, 8
 * 000000014015F44B: call    loc_14015F55E
 * 000000014015F450: add     rsp, 8
 * 000000014015F454: call    loc_14015F447
 * 000000014015F459: add     rsp, 8
 * 000000014015F45D: call    loc_14015F450
 * 000000014015F462: add     rsp, 8
 * 000000014015F466: call    loc_14015F459
 * 000000014015F46B: add     rsp, 8
 * 000000014015F46F: call    loc_14015F462
 * 000000014015F474: add     rsp, 8
 * 000000014015F478: call    loc_14015F46B
 * 000000014015F47D: add     rsp, 8
 * 000000014015F481: call    loc_14015F474
 * 000000014015F486: add     rsp, 8
 * 000000014015F48A: call    loc_14015F47D
 * 000000014015F48F: add     rsp, 8
 * 000000014015F493: call    loc_14015F486
 * 000000014015F498: add     rsp, 8
 * 000000014015F49C: call    loc_14015F48F
 * 000000014015F4A1: add     rsp, 8
 * 000000014015F4A5: call    loc_14015F498
 * 000000014015F4AA: add     rsp, 8
 * 000000014015F4AE: call    loc_14015F4A1
 * 000000014015F4B3: add     rsp, 8
 * 000000014015F4B7: call    loc_14015F4AA
 * 000000014015F4BC: add     rsp, 8
 * 000000014015F4C0: call    loc_14015F4B3
 * 000000014015F4C5: add     rsp, 8
 * 000000014015F4C9: call    loc_14015F4BC
 * 000000014015F4CE: add     rsp, 8
 * 000000014015F4D2: call    loc_14015F4C5
 * 000000014015F4D7: add     rsp, 8
 * 000000014015F4DB: call    loc_14015F4CE
 * 000000014015F4E0: add     rsp, 8
 * 000000014015F4E4: call    loc_14015F4D7
 * 000000014015F4E9: add     rsp, 8
 * 000000014015F4ED: call    loc_14015F4E0
 * 000000014015F4F2: add     rsp, 8
 * 000000014015F4F6: call    loc_14015F4E9
 * 000000014015F4FB: add     rsp, 8
 * 000000014015F4FF: call    loc_14015F4F2
 * 000000014015F504: add     rsp, 8
 * 000000014015F508: call    loc_14015F4FB
 * 000000014015F50D: add     rsp, 8
 * 000000014015F511: call    loc_14015F504
 * 000000014015F516: add     rsp, 8
 * 000000014015F51A: call    loc_14015F50D
 * 000000014015F51F: add     rsp, 8
 * 000000014015F523: call    loc_14015F516
 * 000000014015F528: add     rsp, 8
 * 000000014015F52C: call    loc_14015F51F
 * 000000014015F531: add     rsp, 8
 * 000000014015F535: call    loc_14015F528
 * 000000014015F53A: add     rsp, 8
 * 000000014015F53E: call    loc_14015F531
 * 000000014015F543: add     rsp, 8
 * 000000014015F547: call    loc_14015F53A
 * 000000014015F54C: add     rsp, 8
 * 000000014015F550: call    loc_14015F543
 * 000000014015F555: add     rsp, 8
 * 000000014015F559: call    loc_14015F54C
 * 000000014015F55E: add     rsp, 8
 * 000000014015F562: test    byte ptr [r10+3], 80h
 * 000000014015F567: jz      short loc_14015F59C
 * 000000014015F569: mov     ecx, 0C0000102h
 * 000000014015F56E: rdmsr
 * 000000014015F570: shl     rdx, 20h
 * 000000014015F574: or      rax, rdx
 * 000000014015F577: cmp     [r10+0F0h], rax
 * 000000014015F57E: jz      short loc_14015F59C
 * 000000014015F580: mov     rdx, [r10+1F0h]
 * 000000014015F587: bts     dword ptr [r10+74h], 8
 * 000000014015F58D: dec     word ptr [r10+1E6h]
 * 000000014015F595: mov     [rdx+80h], rax
 * 000000014015F59C: test    byte ptr [r10+3], 3
 * 000000014015F5A1: mov     [rbp+0E8h+var_68], 0
 * 000000014015F5AA: jz      short loc_14015F5B1
 * 000000014015F5AC: call    KiSaveDebugRegisterState
 * 000000014015F5B1: cld
 * 000000014015F5B2: lfence
 * 000000014015F5B5: stmxcsr [rbp+0E8h+var_13C]
 * 000000014015F5B9: ldmxcsr dword ptr gs:180h
 * 000000014015F5C2: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014015F5C6: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014015F5CA: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014015F5CE: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014015F5D2: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014015F5D6: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014015F5DA: test    [rbp+0E8h+arg_8], 200h
 * 000000014015F5E4: jz      short loc_14015F5E7
 * 000000014015F5E6: sti
 * 000000014015F5E7: mov     ecx, 80000003h
 * 000000014015F5EC: mov     edx, 1
 * 000000014015F5F1: mov     r8, [rbp+0E8h]
 * 000000014015F5F8: dec     r8
 * 000000014015F5FB: mov     r9d, 0
 * 000000014015F601: call    KiExceptionDispatch
 * 000000014015F606: nop
 * 000000014015F607: retn
 */
