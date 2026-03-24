/*
 * XREFs of InitLoadResources @ 0x1C00594A8
 * Callers:
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0058B10 (-UpdateUserScreen@@YAHH@Z.c)
 *     RemoteConnect @ 0x1C0078CF0 (RemoteConnect.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C007C5BC (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     EngMulDiv @ 0x1C0056650 (EngMulDiv.c)
 */

/*
 * Hex-Rays decompilation failed for InitLoadResources @ 0x1C00594A8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00594A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00594A8: mov     [rsp+arg_0], rbx
 * 00000001C00594AD: mov     [rsp+arg_8], rbp
 * 00000001C00594B2: mov     [rsp+arg_10], rsi
 * 00000001C00594B7: push    rdi
 * 00000001C00594B8: sub     rsp, 20h
 * 00000001C00594BC: mov     rax, cs:gpsi
 * 00000001C00594C3: mov     esi, ecx
 * 00000001C00594C5: movzx   edx, word ptr [rax+1C76h]
 * 00000001C00594CC: mov     eax, 90h
 * 00000001C00594D1: lea     ebp, [rax-70h]
 * 00000001C00594D4: cmp     dx, ax
 * 00000001C00594D7: jnb     loc_1C009E9EA
 * 00000001C00594DD: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00594E3: mov     edi, 2000h
 * 00000001C00594E8: mov     ebx, 4000h
 * 00000001C00594ED: test    [rax+308h], edi
 * 00000001C00594F3: jnz     short loc_1C0059507
 * 00000001C00594F5: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00594FB: test    [rax+308h], ebx
 * 00000001C0059501: jz      loc_1C009E9C6
 * 00000001C0059507: mov     rax, cs:gpsi
 * 00000001C005950E: add     rax, 78Ch
 * 00000001C0059514: mov     [rax], ebp
 * 00000001C0059516: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C005951C: test    [rax+308h], edi
 * 00000001C0059522: jnz     short loc_1C0059536
 * 00000001C0059524: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C005952A: test    [rax+308h], ebx
 * 00000001C0059530: jz      loc_1C009E9D8
 * 00000001C0059536: mov     rax, cs:gpsi
 * 00000001C005953D: add     rax, 790h
 * 00000001C0059543: mov     [rax], ebp
 * 00000001C0059545: mov     rax, cs:gpsi
 * 00000001C005954C: mov     [rax+910h], ebp
 * 00000001C0059552: mov     rax, cs:gpsi
 * 00000001C0059559: mov     [rax+914h], ebp
 * 00000001C005955F: mov     rax, cs:gpsi
 * 00000001C0059566: mov     [rax+908h], ebp
 * 00000001C005956C: mov     rax, cs:gpsi
 * 00000001C0059573: mov     [rax+90Ch], ebp
 * 00000001C0059579: mov     ebp, 2
 * 00000001C005957E: mov     rcx, cs:gpsi
 * 00000001C0059585: lea     edi, [rbp+5Eh]
 * 00000001C0059588: mov     eax, [rcx+908h]
 * 00000001C005958E: mov     r8d, edi; c
 * 00000001C0059591: cdq
 * 00000001C0059592: idiv    ebp
 * 00000001C0059594: mov     [rcx+9A0h], eax
 * 00000001C005959A: mov     rcx, cs:gpsi
 * 00000001C00595A1: mov     eax, [rcx+90Ch]
 * 00000001C00595A7: cdq
 * 00000001C00595A8: idiv    ebp
 * 00000001C00595AA: mov     [rcx+9A4h], eax
 * 00000001C00595B0: mov     rbx, cs:gpsi
 * 00000001C00595B7: movzx   edx, word ptr [rbx+1C76h]; b
 * 00000001C00595BE: mov     ecx, [rbx+908h]; a
 * 00000001C00595C4: call    EngMulDiv
 * 00000001C00595C9: mov     [rbx+784h], eax
 * 00000001C00595CF: mov     r8d, edi; c
 * 00000001C00595D2: mov     rbx, cs:gpsi
 * 00000001C00595D9: movzx   edx, word ptr [rbx+1C76h]; b
 * 00000001C00595E0: mov     ecx, [rbx+90Ch]; a
 * 00000001C00595E6: call    EngMulDiv
 * 00000001C00595EB: mov     [rbx+788h], eax
 * 00000001C00595F1: mov     r8d, edi; c
 * 00000001C00595F4: mov     rbx, cs:gpsi
 * 00000001C00595FB: movzx   edx, word ptr [rbx+1C76h]; b
 * 00000001C0059602: mov     ecx, [rbx+9A0h]; a
 * 00000001C0059608: call    EngMulDiv
 * 00000001C005960D: mov     [rbx+81Ch], eax
 * 00000001C0059613: mov     r8d, edi; c
 * 00000001C0059616: mov     rbx, cs:gpsi
 * 00000001C005961D: movzx   edx, word ptr [rbx+1C76h]; b
 * 00000001C0059624: mov     ecx, [rbx+9A4h]; a
 * 00000001C005962A: call    EngMulDiv
 * 00000001C005962F: mov     [rbx+820h], eax
 * 00000001C0059635: lea     ecx, [rbp-1]
 * 00000001C0059638: mov     rax, cs:gpsi
 * 00000001C005963F: xor     edx, edx
 * 00000001C0059641: mov     [rax+7A0h], edx
 * 00000001C0059647: mov     rax, cs:gpsi
 * 00000001C005964E: mov     [rax+76Ch], ecx
 * 00000001C0059654: mov     rax, cs:gpsi
 * 00000001C005965B: mov     [rax+770h], ecx
 * 00000001C0059661: mov     rcx, cs:gpsi
 * 00000001C0059668: mov     eax, [rcx+76Ch]
 * 00000001C005966E: add     eax, eax
 * 00000001C0059670: mov     [rcx+80Ch], eax
 * 00000001C0059676: mov     rcx, cs:gpsi
 * 00000001C005967D: mov     eax, [rcx+770h]
 * 00000001C0059683: add     eax, eax
 * 00000001C0059685: mov     [rcx+810h], eax
 * 00000001C005968B: mov     rcx, cs:gpsi
 * 00000001C0059692: mov     eax, [rcx+80Ch]
 * 00000001C0059698: add     eax, [rcx+76Ch]
 * 00000001C005969E: mov     [rcx+774h], eax
 * 00000001C00596A4: mov     rcx, cs:gpsi
 * 00000001C00596AB: mov     eax, [rcx+810h]
 * 00000001C00596B1: add     eax, [rcx+770h]
 * 00000001C00596B7: mov     [rcx+778h], eax
 * 00000001C00596BD: test    esi, esi
 * 00000001C00596BF: jz      short loc_1C00596D6
 * 00000001C00596C1: mov     rbx, [rsp+28h+arg_0]
 * 00000001C00596C6: mov     rbp, [rsp+28h+arg_8]
 * 00000001C00596CB: mov     rsi, [rsp+28h+arg_10]
 * 00000001C00596D0: add     rsp, 20h
 * 00000001C00596D4: pop     rdi
 * 00000001C00596D5: retn
 * 00000001C00596D6: cmp     cs:gbRemoteSession, edx
 * 00000001C00596DC: jz      short loc_1C00596E6
 * 00000001C00596DE: cmp     cs:gbFirstInteractiveSession, edx
 * 00000001C00596E4: jz      short loc_1C00596C1
 * 00000001C00596E6: mov     rax, cs:gpDispInfo
 * 00000001C00596ED: mov     r8, [rax+58h]
 * 00000001C00596F1: mov     rax, cs:gpsi
 * 00000001C00596F8: mov     ecx, [r8+34h]
 * 00000001C00596FC: mov     [rax+91Ch], ecx
 * 00000001C0059702: mov     ecx, [r8+38h]
 * 00000001C0059706: mov     rdx, cs:gpsi
 * 00000001C005970D: sub     ecx, [rdx+8ECh]
 * 00000001C0059713: mov     [rdx+920h], ecx
 * 00000001C0059719: mov     eax, [r8+34h]
 * 00000001C005971D: mov     rcx, cs:gpsi
 * 00000001C0059724: cdq
 * 00000001C0059725: idiv    ebp
 * 00000001C0059727: mov     [rcx+0F70h], eax
 * 00000001C005972D: mov     eax, [r8+38h]
 * 00000001C0059731: mov     rcx, cs:gpsi
 * 00000001C0059738: cdq
 * 00000001C0059739: idiv    ebp
 * 00000001C005973B: mov     [rcx+0F74h], eax
 * 00000001C0059741: mov     rax, cs:gpDispInfo
 * 00000001C0059748: mov     r8, [rax+58h]
 * 00000001C005974C: mov     rax, cs:gpsi
 * 00000001C0059753: mov     ecx, [r8+44h]
 * 00000001C0059757: mov     [rax+0AA0h], ecx
 * 00000001C005975D: mov     rdx, cs:gpsi
 * 00000001C0059764: mov     ecx, [r8+48h]
 * 00000001C0059768: sub     ecx, [rdx+768h]
 * 00000001C005976E: mov     [rdx+0AA4h], ecx
 * 00000001C0059774: mov     eax, [r8+44h]
 * 00000001C0059778: mov     rcx, cs:gpsi
 * 00000001C005977F: cdq
 * 00000001C0059780: idiv    ebp
 * 00000001C0059782: mov     [rcx+0F78h], eax
 * 00000001C0059788: mov     eax, [r8+48h]
 * 00000001C005978C: mov     rcx, cs:gpsi
 * 00000001C0059793: cdq
 * 00000001C0059794: idiv    ebp
 * 00000001C0059796: mov     [rcx+0F7Ch], eax
 * 00000001C005979C: mov     rax, cs:gpDispInfo
 * 00000001C00597A3: mov     r8, [rax+58h]
 * 00000001C00597A7: mov     rax, cs:gpsi
 * 00000001C00597AE: mov     ecx, [r8+24h]
 * 00000001C00597B2: mov     [rax+798h], ecx
 * 00000001C00597B8: mov     rdx, cs:gpsi
 * 00000001C00597BF: mov     ecx, [r8+28h]
 * 00000001C00597C3: sub     ecx, [rdx+768h]
 * 00000001C00597C9: mov     [rdx+79Ch], ecx
 * 00000001C00597CF: mov     eax, [r8+24h]
 * 00000001C00597D3: mov     rcx, cs:gpsi
 * 00000001C00597DA: cdq
 * 00000001C00597DB: idiv    ebp
 * 00000001C00597DD: mov     [rcx+0F88h], eax
 * 00000001C00597E3: mov     eax, [r8+28h]
 * 00000001C00597E7: mov     rcx, cs:gpsi
 * 00000001C00597EE: cdq
 * 00000001C00597EF: idiv    ebp
 * 00000001C00597F1: mov     [rcx+0F8Ch], eax
 * 00000001C00597F7: jmp     loc_1C00596C1
 * 00000001C009E9C6: mov     rax, cs:gpsi
 * 00000001C009E9CD: add     rax, 910h
 * 00000001C009E9D3: jmp     loc_1C0059514
 * 00000001C009E9D8: mov     rax, cs:gpsi
 * 00000001C009E9DF: add     rax, 914h
 * 00000001C009E9E5: jmp     loc_1C0059543
 * 00000001C009E9EA: mov     eax, 0C0h
 * 00000001C009E9EF: cmp     dx, ax
 * 00000001C009E9F2: jnb     loc_1C009EA83
 * 00000001C009E9F8: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C009E9FE: mov     edi, 2000h
 * 00000001C009EA03: mov     ebx, 4000h
 * 00000001C009EA08: test    [rax+308h], edi
 * 00000001C009EA0E: jnz     short loc_1C009EA2D
 * 00000001C009EA10: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C009EA16: test    [rax+308h], ebx
 * 00000001C009EA1C: jnz     short loc_1C009EA2D
 * 00000001C009EA1E: mov     rax, cs:gpsi
 * 00000001C009EA25: add     rax, 910h
 * 00000001C009EA2B: jmp     short loc_1C009EA3A
 * 00000001C009EA2D: mov     rax, cs:gpsi
 * 00000001C009EA34: add     rax, 78Ch
 * 00000001C009EA3A: mov     dword ptr [rax], 30h ; '0'
 * 00000001C009EA40: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C009EA46: test    [rax+308h], edi
 * 00000001C009EA4C: jnz     short loc_1C009EA6B
 * 00000001C009EA4E: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C009EA54: test    [rax+308h], ebx
 * 00000001C009EA5A: jnz     short loc_1C009EA6B
 * 00000001C009EA5C: mov     rax, cs:gpsi
 * 00000001C009EA63: add     rax, 914h
 * 00000001C009EA69: jmp     short loc_1C009EA78
 * 00000001C009EA6B: mov     rax, cs:gpsi
 * 00000001C009EA72: add     rax, 790h
 * 00000001C009EA78: mov     dword ptr [rax], 30h ; '0'
 * 00000001C009EA7E: jmp     loc_1C0059545
 * 00000001C009EA83: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C009EA89: mov     edi, 2000h
 * 00000001C009EA8E: mov     ebx, 4000h
 * 00000001C009EA93: test    [rax+308h], edi
 * 00000001C009EA99: jnz     short loc_1C009EAB8
 * 00000001C009EA9B: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C009EAA1: test    [rax+308h], ebx
 * 00000001C009EAA7: jnz     short loc_1C009EAB8
 * 00000001C009EAA9: mov     rax, cs:gpsi
 * 00000001C009EAB0: add     rax, 910h
 * 00000001C009EAB6: jmp     short loc_1C009EAC5
 * 00000001C009EAB8: mov     rax, cs:gpsi
 * 00000001C009EABF: add     rax, 78Ch
 * 00000001C009EAC5: mov     dword ptr [rax], 40h ; '@'
 * 00000001C009EACB: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C009EAD1: test    [rax+308h], edi
 * 00000001C009EAD7: jnz     short loc_1C009EAF6
 * 00000001C009EAD9: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C009EADF: test    [rax+308h], ebx
 * 00000001C009EAE5: jnz     short loc_1C009EAF6
 * 00000001C009EAE7: mov     rax, cs:gpsi
 * 00000001C009EAEE: add     rax, 914h
 * 00000001C009EAF4: jmp     short loc_1C009EB03
 * 00000001C009EAF6: mov     rax, cs:gpsi
 * 00000001C009EAFD: add     rax, 790h
 * 00000001C009EB03: mov     dword ptr [rax], 40h ; '@'
 * 00000001C009EB09: jmp     loc_1C0059545
 */
