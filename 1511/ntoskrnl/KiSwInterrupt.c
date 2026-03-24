/*
 * XREFs of KiSwInterrupt @ 0x14015D640
 * Callers:
 *     KiSwInterruptShadow @ 0x140224A80 (KiSwInterruptShadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400311D0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400C83B0 (KiCheckForSListAddress.c)
 *     KiSwInterruptDispatch @ 0x14014DF2C (KiSwInterruptDispatch.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14014FC60 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140158120 (KiDpcInterruptBypass.c)
 *     KiSwInterrupt @ 0x14015D640 (KiSwInterrupt.c)
 *     KeWakeProcessor @ 0x1401C71C8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x14015D640
 * Reason: Hex-Rays returned no pseudocode for 0x14015D640
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014015D640: sub     rsp, 8
 * 000000014015D644: push    rbp
 * 000000014015D645: push    rsi
 * 000000014015D646: sub     rsp, 150h
 * 000000014015D64D: lea     rbp, [rsp+80h]
 * 000000014015D655: mov     [rbp+0E8h+var_13D], 0
 * 000000014015D659: mov     [rbp+0E8h+var_138], rax
 * 000000014015D65D: mov     [rbp+0E8h+var_130], rcx
 * 000000014015D661: mov     [rbp+0E8h+var_128], rdx
 * 000000014015D665: mov     [rbp+0E8h+var_120], r8
 * 000000014015D669: mov     [rbp+0E8h+var_118], r9
 * 000000014015D66D: mov     [rbp+0E8h+var_110], r10
 * 000000014015D671: mov     [rbp+0E8h+var_108], r11
 * 000000014015D675: test    [rbp+0E8h+arg_0], 1
 * 000000014015D67C: jnz     loc_14015D7E2
 * 000000014015D682: cmp     byte ptr gs:187h, 0
 * 000000014015D68B: jz      loc_14015D978
 * 000000014015D691: test    byte ptr gs:2EB0h, 1
 * 000000014015D69A: jz      loc_14015D978
 * 000000014015D6A0: mov     ecx, 48h ; 'H'
 * 000000014015D6A5: mov     eax, 1
 * 000000014015D6AA: xor     edx, edx
 * 000000014015D6AC: wrmsr
 * 000000014015D6AE: test    byte ptr gs:2EB0h, 4
 * 000000014015D6B7: jnz     loc_14015D978
 * 000000014015D6BD: call    loc_14015D7D0
 * 000000014015D6C2: add     rsp, 8
 * 000000014015D6C6: call    loc_14015D7D9
 * 000000014015D6CB: add     rsp, 8
 * 000000014015D6CF: call    loc_14015D6C2
 * 000000014015D6D4: add     rsp, 8
 * 000000014015D6D8: call    loc_14015D6CB
 * 000000014015D6DD: add     rsp, 8
 * 000000014015D6E1: call    loc_14015D6D4
 * 000000014015D6E6: add     rsp, 8
 * 000000014015D6EA: call    loc_14015D6DD
 * 000000014015D6EF: add     rsp, 8
 * 000000014015D6F3: call    loc_14015D6E6
 * 000000014015D6F8: add     rsp, 8
 * 000000014015D6FC: call    loc_14015D6EF
 * 000000014015D701: add     rsp, 8
 * 000000014015D705: call    loc_14015D6F8
 * 000000014015D70A: add     rsp, 8
 * 000000014015D70E: call    loc_14015D701
 * 000000014015D713: add     rsp, 8
 * 000000014015D717: call    loc_14015D70A
 * 000000014015D71C: add     rsp, 8
 * 000000014015D720: call    loc_14015D713
 * 000000014015D725: add     rsp, 8
 * 000000014015D729: call    loc_14015D71C
 * 000000014015D72E: add     rsp, 8
 * 000000014015D732: call    loc_14015D725
 * 000000014015D737: add     rsp, 8
 * 000000014015D73B: call    loc_14015D72E
 * 000000014015D740: add     rsp, 8
 * 000000014015D744: call    loc_14015D737
 * 000000014015D749: add     rsp, 8
 * 000000014015D74D: call    loc_14015D740
 * 000000014015D752: add     rsp, 8
 * 000000014015D756: call    loc_14015D749
 * 000000014015D75B: add     rsp, 8
 * 000000014015D75F: call    loc_14015D752
 * 000000014015D764: add     rsp, 8
 * 000000014015D768: call    loc_14015D75B
 * 000000014015D76D: add     rsp, 8
 * 000000014015D771: call    loc_14015D764
 * 000000014015D776: add     rsp, 8
 * 000000014015D77A: call    loc_14015D76D
 * 000000014015D77F: add     rsp, 8
 * 000000014015D783: call    loc_14015D776
 * 000000014015D788: add     rsp, 8
 * 000000014015D78C: call    loc_14015D77F
 * 000000014015D791: add     rsp, 8
 * 000000014015D795: call    loc_14015D788
 * 000000014015D79A: add     rsp, 8
 * 000000014015D79E: call    loc_14015D791
 * 000000014015D7A3: add     rsp, 8
 * 000000014015D7A7: call    loc_14015D79A
 * 000000014015D7AC: add     rsp, 8
 * 000000014015D7B0: call    loc_14015D7A3
 * 000000014015D7B5: add     rsp, 8
 * 000000014015D7B9: call    loc_14015D7AC
 * 000000014015D7BE: add     rsp, 8
 * 000000014015D7C2: call    loc_14015D7B5
 * 000000014015D7C7: add     rsp, 8
 * 000000014015D7CB: call    loc_14015D7BE
 * 000000014015D7D0: add     rsp, 8
 * 000000014015D7D4: call    loc_14015D7C7
 * 000000014015D7D9: add     rsp, 8
 * 000000014015D7DD: jmp     loc_14015D978
 * 000000014015D7E2: test    cs:KiKvaShadow, 1
 * 000000014015D7E9: jnz     short loc_14015D7EE
 * 000000014015D7EB: swapgs
 * 000000014015D7EE: mov     r10, gs:188h
 * 000000014015D7F7: test    byte ptr gs:2EB0h, 1
 * 000000014015D800: jz      loc_14015D963
 * 000000014015D806: mov     rcx, gs:188h
 * 000000014015D80F: mov     rcx, [rcx+220h]
 * 000000014015D816: mov     rcx, [rcx+790h]
 * 000000014015D81D: mov     gs:2EA8h, rcx
 * 000000014015D826: mov     ecx, 48h ; 'H'
 * 000000014015D82B: mov     eax, 1
 * 000000014015D830: xor     edx, edx
 * 000000014015D832: wrmsr
 * 000000014015D834: test    byte ptr gs:2EB0h, 4
 * 000000014015D83D: jnz     loc_14015D963
 * 000000014015D843: call    loc_14015D956
 * 000000014015D848: add     rsp, 8
 * 000000014015D84C: call    loc_14015D95F
 * 000000014015D851: add     rsp, 8
 * 000000014015D855: call    loc_14015D848
 * 000000014015D85A: add     rsp, 8
 * 000000014015D85E: call    loc_14015D851
 * 000000014015D863: add     rsp, 8
 * 000000014015D867: call    loc_14015D85A
 * 000000014015D86C: add     rsp, 8
 * 000000014015D870: call    loc_14015D863
 * 000000014015D875: add     rsp, 8
 * 000000014015D879: call    loc_14015D86C
 * 000000014015D87E: add     rsp, 8
 * 000000014015D882: call    loc_14015D875
 * 000000014015D887: add     rsp, 8
 * 000000014015D88B: call    loc_14015D87E
 * 000000014015D890: add     rsp, 8
 * 000000014015D894: call    loc_14015D887
 * 000000014015D899: add     rsp, 8
 * 000000014015D89D: call    loc_14015D890
 * 000000014015D8A2: add     rsp, 8
 * 000000014015D8A6: call    loc_14015D899
 * 000000014015D8AB: add     rsp, 8
 * 000000014015D8AF: call    loc_14015D8A2
 * 000000014015D8B4: add     rsp, 8
 * 000000014015D8B8: call    loc_14015D8AB
 * 000000014015D8BD: add     rsp, 8
 * 000000014015D8C1: call    loc_14015D8B4
 * 000000014015D8C6: add     rsp, 8
 * 000000014015D8CA: call    loc_14015D8BD
 * 000000014015D8CF: add     rsp, 8
 * 000000014015D8D3: call    loc_14015D8C6
 * 000000014015D8D8: add     rsp, 8
 * 000000014015D8DC: call    loc_14015D8CF
 * 000000014015D8E1: add     rsp, 8
 * 000000014015D8E5: call    loc_14015D8D8
 * 000000014015D8EA: add     rsp, 8
 * 000000014015D8EE: call    loc_14015D8E1
 * 000000014015D8F3: add     rsp, 8
 * 000000014015D8F7: call    loc_14015D8EA
 * 000000014015D8FC: add     rsp, 8
 * 000000014015D900: call    loc_14015D8F3
 * 000000014015D905: add     rsp, 8
 * 000000014015D909: call    loc_14015D8FC
 * 000000014015D90E: add     rsp, 8
 * 000000014015D912: call    loc_14015D905
 * 000000014015D917: add     rsp, 8
 * 000000014015D91B: call    loc_14015D90E
 * 000000014015D920: add     rsp, 8
 * 000000014015D924: call    loc_14015D917
 * 000000014015D929: add     rsp, 8
 * 000000014015D92D: call    loc_14015D920
 * 000000014015D932: add     rsp, 8
 * 000000014015D936: call    loc_14015D929
 * 000000014015D93B: add     rsp, 8
 * 000000014015D93F: call    loc_14015D932
 * 000000014015D944: add     rsp, 8
 * 000000014015D948: call    loc_14015D93B
 * 000000014015D94D: add     rsp, 8
 * 000000014015D951: call    loc_14015D944
 * 000000014015D956: add     rsp, 8
 * 000000014015D95A: call    loc_14015D94D
 * 000000014015D95F: add     rsp, 8
 * 000000014015D963: test    byte ptr [r10+3], 3
 * 000000014015D968: mov     [rbp+0E8h+var_68], 0
 * 000000014015D971: jz      short loc_14015D978
 * 000000014015D973: call    KiSaveDebugRegisterState
 * 000000014015D978: cld
 * 000000014015D979: lfence
 * 000000014015D97C: stmxcsr [rbp+0E8h+var_13C]
 * 000000014015D980: ldmxcsr dword ptr gs:180h
 * 000000014015D989: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014015D98D: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014015D991: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014015D995: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014015D999: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014015D99D: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014015D9A1: cmp     byte ptr gs:5C9Ah, 0
 * 000000014015D9AA: jz      short loc_14015D9B1
 * 000000014015D9AC: call    KeWakeProcessor
 * 000000014015D9B1: lea     rax, ExpInterlockedPopEntrySListResume
 * 000000014015D9B8: cmp     rax, [rbp+0E8h]
 * 000000014015D9BF: jnb     short loc_14015D9DA
 * 000000014015D9C1: lea     rax, ExpInterlockedPopEntrySListEnd
 * 000000014015D9C8: cmp     rax, [rbp+0E8h]
 * 000000014015D9CF: jb      short loc_14015D9DA
 * 000000014015D9D1: lea     rcx, [rbp+0E8h+var_168]
 * 000000014015D9D5: call    KiCheckForSListAddress
 * 000000014015D9DA: xor     esi, esi
 * 000000014015D9DC: inc     dword ptr gs:5C80h
 * 000000014015D9E4: mov     ecx, 2
 * 000000014015D9E9: mov     rax, cr8
 * 000000014015D9ED: mov     cr8, rcx
 * 000000014015D9F1: mov     [rbp+0E8h+var_13F], al
 * 000000014015D9F4: mov     rcx, gs:20h
 * 000000014015D9FD: inc     byte ptr [rcx+20h]
 * 000000014015DA00: cmp     byte ptr [rcx+20h], 1
 * 000000014015DA04: jnz     short loc_14015DA56
 * 000000014015DA06: rdtsc
 * 000000014015DA08: shl     rdx, 20h
 * 000000014015DA0C: or      rax, rdx
 * 000000014015DA0F: mov     r8, [rcx+8]
 * 000000014015DA13: sub     rax, [rcx+5B38h]
 * 000000014015DA1A: add     [r8+48h], rax
 * 000000014015DA1E: mov     edx, [r8+50h]
 * 000000014015DA22: add     [rcx+5B38h], rax
 * 000000014015DA29: add     rdx, rax
 * 000000014015DA2C: mov     ecx, edx
 * 000000014015DA2E: shr     rdx, 20h
 * 000000014015DA32: jz      short loc_14015DA37
 * 000000014015DA34: or      ecx, 0FFFFFFFFh
 * 000000014015DA37: mov     [r8+50h], ecx
 * 000000014015DA3B: test    byte ptr [r8+2], 3Eh
 * 000000014015DA40: jz      short loc_14015DA56
 * 000000014015DA42: mov     rdx, r8
 * 000000014015DA45: mov     r8, rax
 * 000000014015DA48: mov     rcx, gs:20h
 * 000000014015DA51: call    KiEndThreadAccountingPeriod
 * 000000014015DA56: sti
 * 000000014015DA57: lea     rcx, [rbp+0E8h+var_168]
 * 000000014015DA5B: call    KiSwInterruptDispatch
 * 000000014015DA60: cli
 * 000000014015DA61: mov     rcx, rsi
 * 000000014015DA64: call    HalPerformEndOfInterrupt_0
 * 000000014015DA69: mov     rcx, gs:20h
 * 000000014015DA72: cmp     byte ptr [rcx+20h], 1
 * 000000014015DA76: ja      short loc_14015DAEC
 * 000000014015DA78: rdtsc
 * 000000014015DA7A: shl     rdx, 20h
 * 000000014015DA7E: or      rax, rdx
 * 000000014015DA81: sub     rax, [rcx+5B38h]
 * 000000014015DA88: add     [rcx+5BF8h], rax
 * 000000014015DA8F: add     [rcx+5B38h], rax
 * 000000014015DA96: mov     r8, rax
 * 000000014015DA99: mov     rax, [rcx+8]
 * 000000014015DA9D: test    byte ptr [rax+2], 32h
 * 000000014015DAA1: jz      short loc_14015DAB6
 * 000000014015DAA3: xor     edx, edx
 * 000000014015DAA5: call    KiBeginThreadAccountingPeriod
 * 000000014015DAAA: mov     rcx, gs:20h
 * 000000014015DAB3: inc     byte ptr [rcx+20h]
 * 000000014015DAB6: mov     dl, [rcx+6]
 * 000000014015DAB9: and     byte ptr [rcx+6], 0
 * 000000014015DABD: cmp     byte ptr [rcx+7], 0
 * 000000014015DAC1: jnz     short loc_14015DAEC
 * 000000014015DAC3: test    dl, dl
 * 000000014015DAC5: jz      short loc_14015DAEC
 * 000000014015DAC7: cmp     [rbp+0E8h+var_13F], 2
 * 000000014015DACB: jnb     short loc_14015DAD8
 * 000000014015DACD: and     byte ptr [rcx+20h], 0
 * 000000014015DAD1: call    KiDpcInterruptBypass
 * 000000014015DAD6: jmp     short loc_14015DAEF
 * 000000014015DAD8: mov     ecx, 2
 * 000000014015DADD: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014015DAE3: mov     rcx, gs:20h
 * 000000014015DAEC: dec     byte ptr [rcx+20h]
 * 000000014015DAEF: movzx   ecx, [rbp+0E8h+var_13F]
 * 000000014015DAF3: mov     cr8, rcx
 * 000000014015DAF7: mov     rsi, [rbp+0E8h+var_18]
 * 000000014015DAFE: cli
 * 000000014015DAFF: test    [rbp+0E8h+arg_0], 1
 * 000000014015DB06: jz      loc_14015DC17
 * 000000014015DB0C: mov     rcx, gs:188h
 * 000000014015DB15: cmp     byte ptr [rcx+0C2h], 0
 * 000000014015DB1C: jz      short loc_14015DB37
 * 000000014015DB1E: mov     ecx, 1
 * 000000014015DB23: mov     cr8, rcx
 * 000000014015DB27: sti
 * 000000014015DB28: call    KiInitiateUserApc
 * 000000014015DB2D: cli
 * 000000014015DB2E: mov     ecx, 0
 * 000000014015DB33: mov     cr8, rcx
 * 000000014015DB37: mov     rcx, gs:188h
 * 000000014015DB40: test    dword ptr [rcx], 40010000h
 * 000000014015DB46: jz      short loc_14015DB5C
 * 000000014015DB48: test    byte ptr [rcx+2], 1
 * 000000014015DB4C: jz      short loc_14015DB5C
 * 000000014015DB4E: call    KiCopyCounters
 * 000000014015DB53: mov     rcx, gs:188h
 * 000000014015DB5C: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014015DB60: cmp     [rbp+0E8h+var_68], 0
 * 000000014015DB68: jz      short loc_14015DB6F
 * 000000014015DB6A: call    KiRestoreDebugRegisterState
 * 000000014015DB6F: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014015DB73: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014015DB77: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014015DB7B: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014015DB7F: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014015DB83: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014015DB87: mov     r11, [rbp+0E8h+var_108]
 * 000000014015DB8B: mov     r10, [rbp+0E8h+var_110]
 * 000000014015DB8F: mov     r9, [rbp+0E8h+var_118]
 * 000000014015DB93: mov     r8, [rbp+0E8h+var_120]
 * 000000014015DB97: mov     rcx, gs:188h
 * 000000014015DBA0: movzx   eax, byte ptr [rcx+1]
 * 000000014015DBA4: test    eax, 1
 * 000000014015DBA9: jnz     short loc_14015DBE7
 * 000000014015DBAB: xor     edx, edx
 * 000000014015DBAD: mov     ecx, 48h ; 'H'
 * 000000014015DBB2: wrmsr
 * 000000014015DBB4: mov     rax, gs:2EA8h
 * 000000014015DBBD: test    rax, rax
 * 000000014015DBC0: jz      short loc_14015DBE7
 * 000000014015DBC2: mov     rcx, gs:188h
 * 000000014015DBCB: mov     rcx, [rcx+220h]
 * 000000014015DBD2: cmp     rax, [rcx+790h]
 * 000000014015DBD9: jz      short loc_14015DBE7
 * 000000014015DBDB: mov     eax, 1
 * 000000014015DBE0: mov     ecx, 49h ; 'I'
 * 000000014015DBE5: wrmsr
 * 000000014015DBE7: mov     rdx, [rbp+0E8h+var_128]
 * 000000014015DBEB: mov     rcx, [rbp+0E8h+var_130]
 * 000000014015DBEF: mov     rax, [rbp+0E8h+var_138]
 * 000000014015DBF3: mov     rsp, rbp
 * 000000014015DBF6: mov     rbp, [rbp+0E8h+var_10]
 * 000000014015DBFD: add     rsp, 0E8h
 * 000000014015DC04: test    cs:KiKvaShadow, 1
 * 000000014015DC0B: jz      short loc_14015DC12
 * 000000014015DC0D: jmp     KiKernelExit
 * 000000014015DC12: swapgs
 * 000000014015DC15: iretq
 * 000000014015DC17: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014015DC1B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014015DC1F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014015DC23: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014015DC27: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014015DC2B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014015DC2F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014015DC33: mov     r11, [rbp+0E8h+var_108]
 * 000000014015DC37: mov     r10, [rbp+0E8h+var_110]
 * 000000014015DC3B: mov     r9, [rbp+0E8h+var_118]
 * 000000014015DC3F: mov     r8, [rbp+0E8h+var_120]
 * 000000014015DC43: mov     rdx, [rbp+0E8h+var_128]
 * 000000014015DC47: mov     rcx, [rbp+0E8h+var_130]
 * 000000014015DC4B: mov     rax, [rbp+0E8h+var_138]
 * 000000014015DC4F: mov     rsp, rbp
 * 000000014015DC52: mov     rbp, [rbp+0E8h+var_10]
 * 000000014015DC59: add     rsp, 0E8h
 * 000000014015DC60: iretq
 */
