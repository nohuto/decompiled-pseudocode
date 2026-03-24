/*
 * XREFs of KiDivideErrorFault @ 0x14015E300
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140224000 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x14015E300 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x14015E300
 * Reason: Hex-Rays returned no pseudocode for 0x14015E300
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015E300: sub     rsp, 8
 * 000000014015E304: push    rbp
 * 000000014015E305: sub     rsp, 158h
 * 000000014015E30C: lea     rbp, [rsp+80h]
 * 000000014015E314: mov     [rbp+0E8h+var_13D], 1
 * 000000014015E318: mov     [rbp+0E8h+var_138], rax
 * 000000014015E31C: mov     [rbp+0E8h+var_130], rcx
 * 000000014015E320: mov     [rbp+0E8h+var_128], rdx
 * 000000014015E324: mov     [rbp+0E8h+var_120], r8
 * 000000014015E328: mov     [rbp+0E8h+var_118], r9
 * 000000014015E32C: mov     [rbp+0E8h+var_110], r10
 * 000000014015E330: mov     [rbp+0E8h+var_108], r11
 * 000000014015E334: test    [rbp+0E8h+arg_0], 1
 * 000000014015E33B: jnz     loc_14015E4A1
 * 000000014015E341: cmp     byte ptr gs:187h, 0
 * 000000014015E34A: jz      loc_14015E671
 * 000000014015E350: test    byte ptr gs:2EB0h, 1
 * 000000014015E359: jz      loc_14015E671
 * 000000014015E35F: mov     ecx, 48h ; 'H'
 * 000000014015E364: mov     eax, 1
 * 000000014015E369: xor     edx, edx
 * 000000014015E36B: wrmsr
 * 000000014015E36D: test    byte ptr gs:2EB0h, 4
 * 000000014015E376: jnz     loc_14015E671
 * 000000014015E37C: call    loc_14015E48F
 * 000000014015E381: add     rsp, 8
 * 000000014015E385: call    loc_14015E498
 * 000000014015E38A: add     rsp, 8
 * 000000014015E38E: call    loc_14015E381
 * 000000014015E393: add     rsp, 8
 * 000000014015E397: call    loc_14015E38A
 * 000000014015E39C: add     rsp, 8
 * 000000014015E3A0: call    loc_14015E393
 * 000000014015E3A5: add     rsp, 8
 * 000000014015E3A9: call    loc_14015E39C
 * 000000014015E3AE: add     rsp, 8
 * 000000014015E3B2: call    loc_14015E3A5
 * 000000014015E3B7: add     rsp, 8
 * 000000014015E3BB: call    loc_14015E3AE
 * 000000014015E3C0: add     rsp, 8
 * 000000014015E3C4: call    loc_14015E3B7
 * 000000014015E3C9: add     rsp, 8
 * 000000014015E3CD: call    loc_14015E3C0
 * 000000014015E3D2: add     rsp, 8
 * 000000014015E3D6: call    loc_14015E3C9
 * 000000014015E3DB: add     rsp, 8
 * 000000014015E3DF: call    loc_14015E3D2
 * 000000014015E3E4: add     rsp, 8
 * 000000014015E3E8: call    loc_14015E3DB
 * 000000014015E3ED: add     rsp, 8
 * 000000014015E3F1: call    loc_14015E3E4
 * 000000014015E3F6: add     rsp, 8
 * 000000014015E3FA: call    loc_14015E3ED
 * 000000014015E3FF: add     rsp, 8
 * 000000014015E403: call    loc_14015E3F6
 * 000000014015E408: add     rsp, 8
 * 000000014015E40C: call    loc_14015E3FF
 * 000000014015E411: add     rsp, 8
 * 000000014015E415: call    loc_14015E408
 * 000000014015E41A: add     rsp, 8
 * 000000014015E41E: call    loc_14015E411
 * 000000014015E423: add     rsp, 8
 * 000000014015E427: call    loc_14015E41A
 * 000000014015E42C: add     rsp, 8
 * 000000014015E430: call    loc_14015E423
 * 000000014015E435: add     rsp, 8
 * 000000014015E439: call    loc_14015E42C
 * 000000014015E43E: add     rsp, 8
 * 000000014015E442: call    loc_14015E435
 * 000000014015E447: add     rsp, 8
 * 000000014015E44B: call    loc_14015E43E
 * 000000014015E450: add     rsp, 8
 * 000000014015E454: call    loc_14015E447
 * 000000014015E459: add     rsp, 8
 * 000000014015E45D: call    loc_14015E450
 * 000000014015E462: add     rsp, 8
 * 000000014015E466: call    loc_14015E459
 * 000000014015E46B: add     rsp, 8
 * 000000014015E46F: call    loc_14015E462
 * 000000014015E474: add     rsp, 8
 * 000000014015E478: call    loc_14015E46B
 * 000000014015E47D: add     rsp, 8
 * 000000014015E481: call    loc_14015E474
 * 000000014015E486: add     rsp, 8
 * 000000014015E48A: call    loc_14015E47D
 * 000000014015E48F: add     rsp, 8
 * 000000014015E493: call    loc_14015E486
 * 000000014015E498: add     rsp, 8
 * 000000014015E49C: jmp     loc_14015E671
 * 000000014015E4A1: test    cs:KiKvaShadow, 1
 * 000000014015E4A8: jnz     short loc_14015E4AD
 * 000000014015E4AA: swapgs
 * 000000014015E4AD: mov     r10, gs:188h
 * 000000014015E4B6: test    byte ptr gs:2EB0h, 1
 * 000000014015E4BF: jz      loc_14015E622
 * 000000014015E4C5: mov     rcx, gs:188h
 * 000000014015E4CE: mov     rcx, [rcx+220h]
 * 000000014015E4D5: mov     rcx, [rcx+790h]
 * 000000014015E4DC: mov     gs:2EA8h, rcx
 * 000000014015E4E5: mov     ecx, 48h ; 'H'
 * 000000014015E4EA: mov     eax, 1
 * 000000014015E4EF: xor     edx, edx
 * 000000014015E4F1: wrmsr
 * 000000014015E4F3: test    byte ptr gs:2EB0h, 4
 * 000000014015E4FC: jnz     loc_14015E622
 * 000000014015E502: call    loc_14015E615
 * 000000014015E507: add     rsp, 8
 * 000000014015E50B: call    loc_14015E61E
 * 000000014015E510: add     rsp, 8
 * 000000014015E514: call    loc_14015E507
 * 000000014015E519: add     rsp, 8
 * 000000014015E51D: call    loc_14015E510
 * 000000014015E522: add     rsp, 8
 * 000000014015E526: call    loc_14015E519
 * 000000014015E52B: add     rsp, 8
 * 000000014015E52F: call    loc_14015E522
 * 000000014015E534: add     rsp, 8
 * 000000014015E538: call    loc_14015E52B
 * 000000014015E53D: add     rsp, 8
 * 000000014015E541: call    loc_14015E534
 * 000000014015E546: add     rsp, 8
 * 000000014015E54A: call    loc_14015E53D
 * 000000014015E54F: add     rsp, 8
 * 000000014015E553: call    loc_14015E546
 * 000000014015E558: add     rsp, 8
 * 000000014015E55C: call    loc_14015E54F
 * 000000014015E561: add     rsp, 8
 * 000000014015E565: call    loc_14015E558
 * 000000014015E56A: add     rsp, 8
 * 000000014015E56E: call    loc_14015E561
 * 000000014015E573: add     rsp, 8
 * 000000014015E577: call    loc_14015E56A
 * 000000014015E57C: add     rsp, 8
 * 000000014015E580: call    loc_14015E573
 * 000000014015E585: add     rsp, 8
 * 000000014015E589: call    loc_14015E57C
 * 000000014015E58E: add     rsp, 8
 * 000000014015E592: call    loc_14015E585
 * 000000014015E597: add     rsp, 8
 * 000000014015E59B: call    loc_14015E58E
 * 000000014015E5A0: add     rsp, 8
 * 000000014015E5A4: call    loc_14015E597
 * 000000014015E5A9: add     rsp, 8
 * 000000014015E5AD: call    loc_14015E5A0
 * 000000014015E5B2: add     rsp, 8
 * 000000014015E5B6: call    loc_14015E5A9
 * 000000014015E5BB: add     rsp, 8
 * 000000014015E5BF: call    loc_14015E5B2
 * 000000014015E5C4: add     rsp, 8
 * 000000014015E5C8: call    loc_14015E5BB
 * 000000014015E5CD: add     rsp, 8
 * 000000014015E5D1: call    loc_14015E5C4
 * 000000014015E5D6: add     rsp, 8
 * 000000014015E5DA: call    loc_14015E5CD
 * 000000014015E5DF: add     rsp, 8
 * 000000014015E5E3: call    loc_14015E5D6
 * 000000014015E5E8: add     rsp, 8
 * 000000014015E5EC: call    loc_14015E5DF
 * 000000014015E5F1: add     rsp, 8
 * 000000014015E5F5: call    loc_14015E5E8
 * 000000014015E5FA: add     rsp, 8
 * 000000014015E5FE: call    loc_14015E5F1
 * 000000014015E603: add     rsp, 8
 * 000000014015E607: call    loc_14015E5FA
 * 000000014015E60C: add     rsp, 8
 * 000000014015E610: call    loc_14015E603
 * 000000014015E615: add     rsp, 8
 * 000000014015E619: call    loc_14015E60C
 * 000000014015E61E: add     rsp, 8
 * 000000014015E622: test    byte ptr [r10+3], 80h
 * 000000014015E627: jz      short loc_14015E65C
 * 000000014015E629: mov     ecx, 0C0000102h
 * 000000014015E62E: rdmsr
 * 000000014015E630: shl     rdx, 20h
 * 000000014015E634: or      rax, rdx
 * 000000014015E637: cmp     [r10+0F0h], rax
 * 000000014015E63E: jz      short loc_14015E65C
 * 000000014015E640: mov     rdx, [r10+1F0h]
 * 000000014015E647: bts     dword ptr [r10+74h], 8
 * 000000014015E64D: dec     word ptr [r10+1E6h]
 * 000000014015E655: mov     [rdx+80h], rax
 * 000000014015E65C: test    byte ptr [r10+3], 3
 * 000000014015E661: mov     [rbp+0E8h+var_68], 0
 * 000000014015E66A: jz      short loc_14015E671
 * 000000014015E66C: call    KiSaveDebugRegisterState
 * 000000014015E671: cld
 * 000000014015E672: lfence
 * 000000014015E675: stmxcsr [rbp+0E8h+var_13C]
 * 000000014015E679: ldmxcsr dword ptr gs:180h
 * 000000014015E682: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014015E686: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014015E68A: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014015E68E: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014015E692: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014015E696: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014015E69A: test    [rbp+0E8h+arg_8], 200h
 * 000000014015E6A4: jz      short loc_14015E6A7
 * 000000014015E6A6: sti
 * 000000014015E6A7: mov     ecx, 10000003h
 * 000000014015E6AC: xor     edx, edx
 * 000000014015E6AE: mov     r8, [rbp+0E8h]
 * 000000014015E6B5: call    KiExceptionDispatch
 * 000000014015E6BA: nop
 * 000000014015E6BB: retn
 */
