/*
 * XREFs of KiSystemCall32 @ 0x140164E80
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x140164E80 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x140164E80
 * Reason: Hex-Rays returned no pseudocode for 0x140164E80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140164E80: swapgs
 * 0000000140164E83: mov     gs:10h, rsp
 * 0000000140164E8C: mov     rsp, gs:1A8h
 * 0000000140164E95: push    2Bh ; '+'
 * 0000000140164E97: push    qword ptr gs:10h
 * 0000000140164E9F: push    r11
 * 0000000140164EA1: push    23h ; '#'
 * 0000000140164EA3: push    rcx
 * 0000000140164EA4: swapgs
 * 0000000140164EA7: sub     rsp, 8
 * 0000000140164EAB: push    rbp
 * 0000000140164EAC: sub     rsp, 158h
 * 0000000140164EB3: lea     rbp, [rsp+190h+var_110]
 * 0000000140164EBB: mov     byte ptr [rbp-55h], 1
 * 0000000140164EBF: mov     [rbp-50h], rax
 * 0000000140164EC3: mov     [rbp-48h], rcx
 * 0000000140164EC7: mov     [rbp-40h], rdx
 * 0000000140164ECB: mov     [rbp-38h], r8
 * 0000000140164ECF: mov     [rbp-30h], r9
 * 0000000140164ED3: mov     [rbp-28h], r10
 * 0000000140164ED7: mov     [rbp-20h], r11
 * 0000000140164EDB: test    byte ptr [rbp+0F0h], 1
 * 0000000140164EE2: jnz     loc_140165048
 * 0000000140164EE8: cmp     byte ptr gs:187h, 0
 * 0000000140164EF1: jz      loc_140165218
 * 0000000140164EF7: test    byte ptr gs:2EB0h, 1
 * 0000000140164F00: jz      loc_140165218
 * 0000000140164F06: mov     ecx, 48h ; 'H'
 * 0000000140164F0B: mov     eax, 1
 * 0000000140164F10: xor     edx, edx
 * 0000000140164F12: wrmsr
 * 0000000140164F14: test    byte ptr gs:2EB0h, 4
 * 0000000140164F1D: jnz     loc_140165218
 * 0000000140164F23: call    loc_140165036
 * 0000000140164F28: add     rsp, 8
 * 0000000140164F2C: call    loc_14016503F
 * 0000000140164F31: add     rsp, 8
 * 0000000140164F35: call    loc_140164F28
 * 0000000140164F3A: add     rsp, 8
 * 0000000140164F3E: call    loc_140164F31
 * 0000000140164F43: add     rsp, 8
 * 0000000140164F47: call    loc_140164F3A
 * 0000000140164F4C: add     rsp, 8
 * 0000000140164F50: call    loc_140164F43
 * 0000000140164F55: add     rsp, 8
 * 0000000140164F59: call    loc_140164F4C
 * 0000000140164F5E: add     rsp, 8
 * 0000000140164F62: call    loc_140164F55
 * 0000000140164F67: add     rsp, 8
 * 0000000140164F6B: call    loc_140164F5E
 * 0000000140164F70: add     rsp, 8
 * 0000000140164F74: call    loc_140164F67
 * 0000000140164F79: add     rsp, 8
 * 0000000140164F7D: call    loc_140164F70
 * 0000000140164F82: add     rsp, 8
 * 0000000140164F86: call    loc_140164F79
 * 0000000140164F8B: add     rsp, 8
 * 0000000140164F8F: call    loc_140164F82
 * 0000000140164F94: add     rsp, 8
 * 0000000140164F98: call    loc_140164F8B
 * 0000000140164F9D: add     rsp, 8
 * 0000000140164FA1: call    loc_140164F94
 * 0000000140164FA6: add     rsp, 8
 * 0000000140164FAA: call    loc_140164F9D
 * 0000000140164FAF: add     rsp, 8
 * 0000000140164FB3: call    loc_140164FA6
 * 0000000140164FB8: add     rsp, 8
 * 0000000140164FBC: call    loc_140164FAF
 * 0000000140164FC1: add     rsp, 8
 * 0000000140164FC5: call    loc_140164FB8
 * 0000000140164FCA: add     rsp, 8
 * 0000000140164FCE: call    loc_140164FC1
 * 0000000140164FD3: add     rsp, 8
 * 0000000140164FD7: call    loc_140164FCA
 * 0000000140164FDC: add     rsp, 8
 * 0000000140164FE0: call    loc_140164FD3
 * 0000000140164FE5: add     rsp, 8
 * 0000000140164FE9: call    loc_140164FDC
 * 0000000140164FEE: add     rsp, 8
 * 0000000140164FF2: call    loc_140164FE5
 * 0000000140164FF7: add     rsp, 8
 * 0000000140164FFB: call    loc_140164FEE
 * 0000000140165000: add     rsp, 8
 * 0000000140165004: call    loc_140164FF7
 * 0000000140165009: add     rsp, 8
 * 000000014016500D: call    loc_140165000
 * 0000000140165012: add     rsp, 8
 * 0000000140165016: call    loc_140165009
 * 000000014016501B: add     rsp, 8
 * 000000014016501F: call    loc_140165012
 * 0000000140165024: add     rsp, 8
 * 0000000140165028: call    loc_14016501B
 * 000000014016502D: add     rsp, 8
 * 0000000140165031: call    loc_140165024
 * 0000000140165036: add     rsp, 8
 * 000000014016503A: call    loc_14016502D
 * 000000014016503F: add     rsp, 8
 * 0000000140165043: jmp     loc_140165218
 * 0000000140165048: test    cs:KiKvaShadow, 1
 * 000000014016504F: jnz     short loc_140165054
 * 0000000140165051: swapgs
 * 0000000140165054: mov     r10, gs:188h
 * 000000014016505D: test    byte ptr gs:2EB0h, 1
 * 0000000140165066: jz      loc_1401651C9
 * 000000014016506C: mov     rcx, gs:188h
 * 0000000140165075: mov     rcx, [rcx+220h]
 * 000000014016507C: mov     rcx, [rcx+790h]
 * 0000000140165083: mov     gs:2EA8h, rcx
 * 000000014016508C: mov     ecx, 48h ; 'H'
 * 0000000140165091: mov     eax, 1
 * 0000000140165096: xor     edx, edx
 * 0000000140165098: wrmsr
 * 000000014016509A: test    byte ptr gs:2EB0h, 4
 * 00000001401650A3: jnz     loc_1401651C9
 * 00000001401650A9: call    loc_1401651BC
 * 00000001401650AE: add     rsp, 8
 * 00000001401650B2: call    loc_1401651C5
 * 00000001401650B7: add     rsp, 8
 * 00000001401650BB: call    loc_1401650AE
 * 00000001401650C0: add     rsp, 8
 * 00000001401650C4: call    loc_1401650B7
 * 00000001401650C9: add     rsp, 8
 * 00000001401650CD: call    loc_1401650C0
 * 00000001401650D2: add     rsp, 8
 * 00000001401650D6: call    loc_1401650C9
 * 00000001401650DB: add     rsp, 8
 * 00000001401650DF: call    loc_1401650D2
 * 00000001401650E4: add     rsp, 8
 * 00000001401650E8: call    loc_1401650DB
 * 00000001401650ED: add     rsp, 8
 * 00000001401650F1: call    loc_1401650E4
 * 00000001401650F6: add     rsp, 8
 * 00000001401650FA: call    loc_1401650ED
 * 00000001401650FF: add     rsp, 8
 * 0000000140165103: call    loc_1401650F6
 * 0000000140165108: add     rsp, 8
 * 000000014016510C: call    loc_1401650FF
 * 0000000140165111: add     rsp, 8
 * 0000000140165115: call    loc_140165108
 * 000000014016511A: add     rsp, 8
 * 000000014016511E: call    loc_140165111
 * 0000000140165123: add     rsp, 8
 * 0000000140165127: call    loc_14016511A
 * 000000014016512C: add     rsp, 8
 * 0000000140165130: call    loc_140165123
 * 0000000140165135: add     rsp, 8
 * 0000000140165139: call    loc_14016512C
 * 000000014016513E: add     rsp, 8
 * 0000000140165142: call    loc_140165135
 * 0000000140165147: add     rsp, 8
 * 000000014016514B: call    loc_14016513E
 * 0000000140165150: add     rsp, 8
 * 0000000140165154: call    loc_140165147
 * 0000000140165159: add     rsp, 8
 * 000000014016515D: call    loc_140165150
 * 0000000140165162: add     rsp, 8
 * 0000000140165166: call    loc_140165159
 * 000000014016516B: add     rsp, 8
 * 000000014016516F: call    loc_140165162
 * 0000000140165174: add     rsp, 8
 * 0000000140165178: call    loc_14016516B
 * 000000014016517D: add     rsp, 8
 * 0000000140165181: call    loc_140165174
 * 0000000140165186: add     rsp, 8
 * 000000014016518A: call    loc_14016517D
 * 000000014016518F: add     rsp, 8
 * 0000000140165193: call    loc_140165186
 * 0000000140165198: add     rsp, 8
 * 000000014016519C: call    loc_14016518F
 * 00000001401651A1: add     rsp, 8
 * 00000001401651A5: call    loc_140165198
 * 00000001401651AA: add     rsp, 8
 * 00000001401651AE: call    loc_1401651A1
 * 00000001401651B3: add     rsp, 8
 * 00000001401651B7: call    loc_1401651AA
 * 00000001401651BC: add     rsp, 8
 * 00000001401651C0: call    loc_1401651B3
 * 00000001401651C5: add     rsp, 8
 * 00000001401651C9: test    byte ptr [r10+3], 80h
 * 00000001401651CE: jz      short loc_140165203
 * 00000001401651D0: mov     ecx, 0C0000102h
 * 00000001401651D5: rdmsr
 * 00000001401651D7: shl     rdx, 20h
 * 00000001401651DB: or      rax, rdx
 * 00000001401651DE: cmp     [r10+0F0h], rax
 * 00000001401651E5: jz      short loc_140165203
 * 00000001401651E7: mov     rdx, [r10+1F0h]
 * 00000001401651EE: bts     dword ptr [r10+74h], 8
 * 00000001401651F4: dec     word ptr [r10+1E6h]
 * 00000001401651FC: mov     [rdx+80h], rax
 * 0000000140165203: test    byte ptr [r10+3], 3
 * 0000000140165208: mov     word ptr [rbp+80h], 0
 * 0000000140165211: jz      short loc_140165218
 * 0000000140165213: call    KiSaveDebugRegisterState
 * 0000000140165218: cld
 * 0000000140165219: lfence
 * 000000014016521C: stmxcsr dword ptr [rbp-54h]
 * 0000000140165220: ldmxcsr dword ptr gs:180h
 * 0000000140165229: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014016522D: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140165231: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140165235: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140165239: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014016523D: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140165241: test    dword ptr [rbp+0F8h], 200h
 * 000000014016524B: jz      short loc_14016524E
 * 000000014016524D: sti
 * 000000014016524E: mov     ecx, 0C000001Dh
 * 0000000140165253: xor     edx, edx
 * 0000000140165255: mov     r8, [rbp+0E8h]
 * 000000014016525C: call    KiExceptionDispatch
 * 0000000140165261: nop
 * 0000000140165262: retn
 */
