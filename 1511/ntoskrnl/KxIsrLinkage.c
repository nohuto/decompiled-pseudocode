/*
 * XREFs of KxIsrLinkage @ 0x140156720
 * Callers:
 *     KxIsrLinkageShadow @ 0x1402258C0 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiBeginThreadAccountingPeriod @ 0x1400311D0 (KiBeginThreadAccountingPeriod.c)
 *     KiEndThreadAccountingPeriod @ 0x14007BD20 (KiEndThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x1400C83B0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt_0 @ 0x14014FC60 (HalPerformEndOfInterrupt_0.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KxIsrLinkage @ 0x140156720 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140158120 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x140165B40 (KiBugCheckDispatch.c)
 *     KeWakeProcessor @ 0x1401C71C8 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x14020FA34 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x140156720
 * Reason: Hex-Rays returned no pseudocode for 0x140156720
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140156720: push    rbp
 * 0000000140156721: push    rsi
 * 0000000140156722: sub     rsp, 150h
 * 0000000140156729: lea     rbp, [rsp+80h]
 * 0000000140156731: mov     [rbp+0D8h+var_12D], 0
 * 0000000140156735: mov     [rbp+0D8h+var_128], rax
 * 0000000140156739: mov     [rbp+0D8h+var_120], rcx
 * 000000014015673D: mov     [rbp+0D8h+var_118], rdx
 * 0000000140156741: mov     [rbp+0D8h+var_110], r8
 * 0000000140156745: mov     [rbp+0D8h+var_108], r9
 * 0000000140156749: mov     [rbp+0D8h+var_100], r10
 * 000000014015674D: mov     [rbp+0D8h+var_F8], r11
 * 0000000140156751: test    [rbp+0D8h+arg_8], 1
 * 0000000140156758: jnz     loc_1401568BE
 * 000000014015675E: cmp     byte ptr gs:187h, 0
 * 0000000140156767: jz      loc_140156A54
 * 000000014015676D: test    byte ptr gs:2EB0h, 1
 * 0000000140156776: jz      loc_140156A54
 * 000000014015677C: mov     ecx, 48h ; 'H'
 * 0000000140156781: mov     eax, 1
 * 0000000140156786: xor     edx, edx
 * 0000000140156788: wrmsr
 * 000000014015678A: test    byte ptr gs:2EB0h, 4
 * 0000000140156793: jnz     loc_140156A54
 * 0000000140156799: call    loc_1401568AC
 * 000000014015679E: add     rsp, 8
 * 00000001401567A2: call    loc_1401568B5
 * 00000001401567A7: add     rsp, 8
 * 00000001401567AB: call    loc_14015679E
 * 00000001401567B0: add     rsp, 8
 * 00000001401567B4: call    loc_1401567A7
 * 00000001401567B9: add     rsp, 8
 * 00000001401567BD: call    loc_1401567B0
 * 00000001401567C2: add     rsp, 8
 * 00000001401567C6: call    loc_1401567B9
 * 00000001401567CB: add     rsp, 8
 * 00000001401567CF: call    loc_1401567C2
 * 00000001401567D4: add     rsp, 8
 * 00000001401567D8: call    loc_1401567CB
 * 00000001401567DD: add     rsp, 8
 * 00000001401567E1: call    loc_1401567D4
 * 00000001401567E6: add     rsp, 8
 * 00000001401567EA: call    loc_1401567DD
 * 00000001401567EF: add     rsp, 8
 * 00000001401567F3: call    loc_1401567E6
 * 00000001401567F8: add     rsp, 8
 * 00000001401567FC: call    loc_1401567EF
 * 0000000140156801: add     rsp, 8
 * 0000000140156805: call    loc_1401567F8
 * 000000014015680A: add     rsp, 8
 * 000000014015680E: call    loc_140156801
 * 0000000140156813: add     rsp, 8
 * 0000000140156817: call    loc_14015680A
 * 000000014015681C: add     rsp, 8
 * 0000000140156820: call    loc_140156813
 * 0000000140156825: add     rsp, 8
 * 0000000140156829: call    loc_14015681C
 * 000000014015682E: add     rsp, 8
 * 0000000140156832: call    loc_140156825
 * 0000000140156837: add     rsp, 8
 * 000000014015683B: call    loc_14015682E
 * 0000000140156840: add     rsp, 8
 * 0000000140156844: call    loc_140156837
 * 0000000140156849: add     rsp, 8
 * 000000014015684D: call    loc_140156840
 * 0000000140156852: add     rsp, 8
 * 0000000140156856: call    loc_140156849
 * 000000014015685B: add     rsp, 8
 * 000000014015685F: call    loc_140156852
 * 0000000140156864: add     rsp, 8
 * 0000000140156868: call    loc_14015685B
 * 000000014015686D: add     rsp, 8
 * 0000000140156871: call    loc_140156864
 * 0000000140156876: add     rsp, 8
 * 000000014015687A: call    loc_14015686D
 * 000000014015687F: add     rsp, 8
 * 0000000140156883: call    loc_140156876
 * 0000000140156888: add     rsp, 8
 * 000000014015688C: call    loc_14015687F
 * 0000000140156891: add     rsp, 8
 * 0000000140156895: call    loc_140156888
 * 000000014015689A: add     rsp, 8
 * 000000014015689E: call    loc_140156891
 * 00000001401568A3: add     rsp, 8
 * 00000001401568A7: call    loc_14015689A
 * 00000001401568AC: add     rsp, 8
 * 00000001401568B0: call    loc_1401568A3
 * 00000001401568B5: add     rsp, 8
 * 00000001401568B9: jmp     loc_140156A54
 * 00000001401568BE: test    cs:KiKvaShadow, 1
 * 00000001401568C5: jnz     short loc_1401568CA
 * 00000001401568C7: swapgs
 * 00000001401568CA: mov     r10, gs:188h
 * 00000001401568D3: test    byte ptr gs:2EB0h, 1
 * 00000001401568DC: jz      loc_140156A3F
 * 00000001401568E2: mov     rcx, gs:188h
 * 00000001401568EB: mov     rcx, [rcx+220h]
 * 00000001401568F2: mov     rcx, [rcx+790h]
 * 00000001401568F9: mov     gs:2EA8h, rcx
 * 0000000140156902: mov     ecx, 48h ; 'H'
 * 0000000140156907: mov     eax, 1
 * 000000014015690C: xor     edx, edx
 * 000000014015690E: wrmsr
 * 0000000140156910: test    byte ptr gs:2EB0h, 4
 * 0000000140156919: jnz     loc_140156A3F
 * 000000014015691F: call    loc_140156A32
 * 0000000140156924: add     rsp, 8
 * 0000000140156928: call    loc_140156A3B
 * 000000014015692D: add     rsp, 8
 * 0000000140156931: call    loc_140156924
 * 0000000140156936: add     rsp, 8
 * 000000014015693A: call    loc_14015692D
 * 000000014015693F: add     rsp, 8
 * 0000000140156943: call    loc_140156936
 * 0000000140156948: add     rsp, 8
 * 000000014015694C: call    loc_14015693F
 * 0000000140156951: add     rsp, 8
 * 0000000140156955: call    loc_140156948
 * 000000014015695A: add     rsp, 8
 * 000000014015695E: call    loc_140156951
 * 0000000140156963: add     rsp, 8
 * 0000000140156967: call    loc_14015695A
 * 000000014015696C: add     rsp, 8
 * 0000000140156970: call    loc_140156963
 * 0000000140156975: add     rsp, 8
 * 0000000140156979: call    loc_14015696C
 * 000000014015697E: add     rsp, 8
 * 0000000140156982: call    loc_140156975
 * 0000000140156987: add     rsp, 8
 * 000000014015698B: call    loc_14015697E
 * 0000000140156990: add     rsp, 8
 * 0000000140156994: call    loc_140156987
 * 0000000140156999: add     rsp, 8
 * 000000014015699D: call    loc_140156990
 * 00000001401569A2: add     rsp, 8
 * 00000001401569A6: call    loc_140156999
 * 00000001401569AB: add     rsp, 8
 * 00000001401569AF: call    loc_1401569A2
 * 00000001401569B4: add     rsp, 8
 * 00000001401569B8: call    loc_1401569AB
 * 00000001401569BD: add     rsp, 8
 * 00000001401569C1: call    loc_1401569B4
 * 00000001401569C6: add     rsp, 8
 * 00000001401569CA: call    loc_1401569BD
 * 00000001401569CF: add     rsp, 8
 * 00000001401569D3: call    loc_1401569C6
 * 00000001401569D8: add     rsp, 8
 * 00000001401569DC: call    loc_1401569CF
 * 00000001401569E1: add     rsp, 8
 * 00000001401569E5: call    loc_1401569D8
 * 00000001401569EA: add     rsp, 8
 * 00000001401569EE: call    loc_1401569E1
 * 00000001401569F3: add     rsp, 8
 * 00000001401569F7: call    loc_1401569EA
 * 00000001401569FC: add     rsp, 8
 * 0000000140156A00: call    loc_1401569F3
 * 0000000140156A05: add     rsp, 8
 * 0000000140156A09: call    loc_1401569FC
 * 0000000140156A0E: add     rsp, 8
 * 0000000140156A12: call    loc_140156A05
 * 0000000140156A17: add     rsp, 8
 * 0000000140156A1B: call    loc_140156A0E
 * 0000000140156A20: add     rsp, 8
 * 0000000140156A24: call    loc_140156A17
 * 0000000140156A29: add     rsp, 8
 * 0000000140156A2D: call    loc_140156A20
 * 0000000140156A32: add     rsp, 8
 * 0000000140156A36: call    loc_140156A29
 * 0000000140156A3B: add     rsp, 8
 * 0000000140156A3F: test    byte ptr [r10+3], 3
 * 0000000140156A44: mov     [rbp+0D8h+var_58], 0
 * 0000000140156A4D: jz      short loc_140156A54
 * 0000000140156A4F: call    KiSaveDebugRegisterState
 * 0000000140156A54: cld
 * 0000000140156A55: lfence
 * 0000000140156A58: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140156A5C: ldmxcsr dword ptr gs:180h
 * 0000000140156A65: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140156A69: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140156A6D: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140156A71: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140156A75: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140156A79: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140156A7D: cmp     byte ptr gs:5C9Ah, 0
 * 0000000140156A86: jz      short loc_140156A8D
 * 0000000140156A88: call    KeWakeProcessor
 * 0000000140156A8D: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140156A94: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140156A9B: jnb     short loc_140156AB6
 * 0000000140156A9D: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140156AA4: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140156AAB: jb      short loc_140156AB6
 * 0000000140156AAD: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140156AB1: call    KiCheckForSListAddress
 * 0000000140156AB6: movzx   eax, byte ptr [rbp+0E0h]
 * 0000000140156ABD: mov     rsi, gs:20h
 * 0000000140156AC6: mov     rsi, [rsi+rax*8+2E00h]
 * 0000000140156ACE: inc     dword ptr gs:5C80h
 * 0000000140156AD6: test    rsi, rsi
 * 0000000140156AD9: jz      short loc_140156AE1
 * 0000000140156ADB: mov     rcx, [rsi+50h]
 * 0000000140156ADF: jmp     rcx
 * 0000000140156AE1: mov     ecx, eax
 * 0000000140156AE3: shr     ecx, 4
 * 0000000140156AE6: mov     rax, cr8
 * 0000000140156AEA: mov     cr8, rcx
 * 0000000140156AEE: mov     [rbp+0D8h+var_12F], al
 * 0000000140156AF1: mov     rcx, gs:20h
 * 0000000140156AFA: inc     byte ptr [rcx+20h]
 * 0000000140156AFD: cmp     byte ptr [rcx+20h], 1
 * 0000000140156B01: jnz     short loc_140156B53
 * 0000000140156B03: rdtsc
 * 0000000140156B05: shl     rdx, 20h
 * 0000000140156B09: or      rax, rdx
 * 0000000140156B0C: mov     r8, [rcx+8]
 * 0000000140156B10: sub     rax, [rcx+5B38h]
 * 0000000140156B17: add     [r8+48h], rax
 * 0000000140156B1B: mov     edx, [r8+50h]
 * 0000000140156B1F: add     [rcx+5B38h], rax
 * 0000000140156B26: add     rdx, rax
 * 0000000140156B29: mov     ecx, edx
 * 0000000140156B2B: shr     rdx, 20h
 * 0000000140156B2F: jz      short loc_140156B34
 * 0000000140156B31: or      ecx, 0FFFFFFFFh
 * 0000000140156B34: mov     [r8+50h], ecx
 * 0000000140156B38: test    byte ptr [r8+2], 3Eh
 * 0000000140156B3D: jz      short loc_140156B53
 * 0000000140156B3F: mov     rdx, r8
 * 0000000140156B42: mov     r8, rax
 * 0000000140156B45: mov     rcx, gs:20h
 * 0000000140156B4E: call    KiEndThreadAccountingPeriod
 * 0000000140156B53: sti
 * 0000000140156B54: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 0000000140156B5E: jz      short loc_140156B6C
 * 0000000140156B60: movzx   ecx, byte ptr [rbp+0E0h]
 * 0000000140156B67: call    PerfInfoLogUnexpectedInterrupt
 * 0000000140156B6C: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 0000000140156B73: jz      short loc_140156B94
 * 0000000140156B75: and     [rbp+0D8h+var_138], 0
 * 0000000140156B7A: xor     r9, r9
 * 0000000140156B7D: movzx   r8d, byte ptr [rbp+0E0h]
 * 0000000140156B85: mov     edx, 1
 * 0000000140156B8A: mov     ecx, 12h
 * 0000000140156B8F: call    KiBugCheckDispatch
 * 0000000140156B94: cli
 * 0000000140156B95: mov     rcx, rsi
 * 0000000140156B98: call    HalPerformEndOfInterrupt_0
 * 0000000140156B9D: mov     rcx, gs:20h
 * 0000000140156BA6: cmp     byte ptr [rcx+20h], 1
 * 0000000140156BAA: ja      short loc_140156C20
 * 0000000140156BAC: rdtsc
 * 0000000140156BAE: shl     rdx, 20h
 * 0000000140156BB2: or      rax, rdx
 * 0000000140156BB5: sub     rax, [rcx+5B38h]
 * 0000000140156BBC: add     [rcx+5BF8h], rax
 * 0000000140156BC3: add     [rcx+5B38h], rax
 * 0000000140156BCA: mov     r8, rax
 * 0000000140156BCD: mov     rax, [rcx+8]
 * 0000000140156BD1: test    byte ptr [rax+2], 32h
 * 0000000140156BD5: jz      short loc_140156BEA
 * 0000000140156BD7: xor     edx, edx
 * 0000000140156BD9: call    KiBeginThreadAccountingPeriod
 * 0000000140156BDE: mov     rcx, gs:20h
 * 0000000140156BE7: inc     byte ptr [rcx+20h]
 * 0000000140156BEA: mov     dl, [rcx+6]
 * 0000000140156BED: and     byte ptr [rcx+6], 0
 * 0000000140156BF1: cmp     byte ptr [rcx+7], 0
 * 0000000140156BF5: jnz     short loc_140156C20
 * 0000000140156BF7: test    dl, dl
 * 0000000140156BF9: jz      short loc_140156C20
 * 0000000140156BFB: cmp     [rbp+0D8h+var_12F], 2
 * 0000000140156BFF: jnb     short loc_140156C0C
 * 0000000140156C01: and     byte ptr [rcx+20h], 0
 * 0000000140156C05: call    KiDpcInterruptBypass
 * 0000000140156C0A: jmp     short loc_140156C23
 * 0000000140156C0C: mov     ecx, 2
 * 0000000140156C11: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140156C17: mov     rcx, gs:20h
 * 0000000140156C20: dec     byte ptr [rcx+20h]
 * 0000000140156C23: movzx   ecx, [rbp+0D8h+var_12F]
 * 0000000140156C27: mov     cr8, rcx
 * 0000000140156C2B: mov     rsi, [rbp+0D8h+var_8]
 * 0000000140156C32: cli
 * 0000000140156C33: test    [rbp+0D8h+arg_8], 1
 * 0000000140156C3A: jz      loc_140156D4B
 * 0000000140156C40: mov     rcx, gs:188h
 * 0000000140156C49: cmp     byte ptr [rcx+0C2h], 0
 * 0000000140156C50: jz      short loc_140156C6B
 * 0000000140156C52: mov     ecx, 1
 * 0000000140156C57: mov     cr8, rcx
 * 0000000140156C5B: sti
 * 0000000140156C5C: call    KiInitiateUserApc
 * 0000000140156C61: cli
 * 0000000140156C62: mov     ecx, 0
 * 0000000140156C67: mov     cr8, rcx
 * 0000000140156C6B: mov     rcx, gs:188h
 * 0000000140156C74: test    dword ptr [rcx], 40010000h
 * 0000000140156C7A: jz      short loc_140156C90
 * 0000000140156C7C: test    byte ptr [rcx+2], 1
 * 0000000140156C80: jz      short loc_140156C90
 * 0000000140156C82: call    KiCopyCounters
 * 0000000140156C87: mov     rcx, gs:188h
 * 0000000140156C90: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140156C94: cmp     [rbp+0D8h+var_58], 0
 * 0000000140156C9C: jz      short loc_140156CA3
 * 0000000140156C9E: call    KiRestoreDebugRegisterState
 * 0000000140156CA3: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140156CA7: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140156CAB: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140156CAF: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140156CB3: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140156CB7: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140156CBB: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140156CBF: mov     r10, [rbp+0D8h+var_100]
 * 0000000140156CC3: mov     r9, [rbp+0D8h+var_108]
 * 0000000140156CC7: mov     r8, [rbp+0D8h+var_110]
 * 0000000140156CCB: mov     rcx, gs:188h
 * 0000000140156CD4: movzx   eax, byte ptr [rcx+1]
 * 0000000140156CD8: test    eax, 1
 * 0000000140156CDD: jnz     short loc_140156D1B
 * 0000000140156CDF: xor     edx, edx
 * 0000000140156CE1: mov     ecx, 48h ; 'H'
 * 0000000140156CE6: wrmsr
 * 0000000140156CE8: mov     rax, gs:2EA8h
 * 0000000140156CF1: test    rax, rax
 * 0000000140156CF4: jz      short loc_140156D1B
 * 0000000140156CF6: mov     rcx, gs:188h
 * 0000000140156CFF: mov     rcx, [rcx+220h]
 * 0000000140156D06: cmp     rax, [rcx+790h]
 * 0000000140156D0D: jz      short loc_140156D1B
 * 0000000140156D0F: mov     eax, 1
 * 0000000140156D14: mov     ecx, 49h ; 'I'
 * 0000000140156D19: wrmsr
 * 0000000140156D1B: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140156D1F: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140156D23: mov     rax, [rbp+0D8h+var_128]
 * 0000000140156D27: mov     rsp, rbp
 * 0000000140156D2A: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140156D31: add     rsp, 0E8h
 * 0000000140156D38: test    cs:KiKvaShadow, 1
 * 0000000140156D3F: jz      short loc_140156D46
 * 0000000140156D41: jmp     KiKernelExit
 * 0000000140156D46: swapgs
 * 0000000140156D49: iretq
 * 0000000140156D4B: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140156D4F: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140156D53: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140156D57: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140156D5B: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140156D5F: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140156D63: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140156D67: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140156D6B: mov     r10, [rbp+0D8h+var_100]
 * 0000000140156D6F: mov     r9, [rbp+0D8h+var_108]
 * 0000000140156D73: mov     r8, [rbp+0D8h+var_110]
 * 0000000140156D77: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140156D7B: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140156D7F: mov     rax, [rbp+0D8h+var_128]
 * 0000000140156D83: mov     rsp, rbp
 * 0000000140156D86: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140156D8D: add     rsp, 0E8h
 * 0000000140156D94: iretq
 */
