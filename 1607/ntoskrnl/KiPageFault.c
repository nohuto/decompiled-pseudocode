/*
 * XREFs of KiPageFault @ 0x14016C840
 * Callers:
 *     KiPageFaultShadow @ 0x14023F700 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     KiCheckForSListAddress @ 0x14008B8E0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x14015DF00 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14015DF70 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14015EAB0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140162AD0 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x14016C840 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x140170100 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140170180 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x140170DC0 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140171240 (KiUmsExit.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401713C0 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KdSetOwedBreakpoints @ 0x1401D1B14 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x1401D6DE8 (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x14020F038 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x14016C840
 * Reason: Hex-Rays returned no pseudocode for 0x14016C840
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014016C840: push    rbp
 * 000000014016C841: sub     rsp, 158h
 * 000000014016C848: lea     rbp, [rsp+80h]
 * 000000014016C850: mov     [rbp+0D8h+var_12D], 1
 * 000000014016C854: mov     [rbp+0D8h+var_128], rax
 * 000000014016C858: mov     [rbp+0D8h+var_120], rcx
 * 000000014016C85C: mov     [rbp+0D8h+var_118], rdx
 * 000000014016C860: mov     [rbp+0D8h+var_110], r8
 * 000000014016C864: mov     [rbp+0D8h+var_108], r9
 * 000000014016C868: mov     [rbp+0D8h+var_100], r10
 * 000000014016C86C: mov     [rbp+0D8h+var_F8], r11
 * 000000014016C870: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014016C877: jnz     short loc_14016C8A8
 * 000000014016C879: lfence
 * 000000014016C87C: test    word ptr gs:2EB8h, 1
 * 000000014016C887: jnz     short loc_14016C891
 * 000000014016C889: lfence
 * 000000014016C88C: jmp     loc_14016CADD
 * 000000014016C891: movzx   eax, word ptr gs:2EBCh
 * 000000014016C89A: mov     ecx, 48h ; 'H'
 * 000000014016C89F: xor     edx, edx
 * 000000014016C8A1: wrmsr
 * 000000014016C8A3: jmp     loc_14016CADD
 * 000000014016C8A8: test    cs:KiKvaShadow, 1
 * 000000014016C8AF: jnz     short loc_14016C8B4
 * 000000014016C8B1: swapgs
 * 000000014016C8B4: lfence
 * 000000014016C8B7: mov     r10, gs:188h
 * 000000014016C8C0: mov     rcx, gs:188h
 * 000000014016C8C9: mov     rcx, [rcx+220h]
 * 000000014016C8D0: mov     rcx, [rcx+7B8h]
 * 000000014016C8D7: mov     gs:2EB0h, rcx
 * 000000014016C8E0: movzx   eax, word ptr gs:2EBEh
 * 000000014016C8E9: cmp     gs:2EBCh, ax
 * 000000014016C8F2: jz      short loc_14016C906
 * 000000014016C8F4: mov     gs:2EBCh, ax
 * 000000014016C8FD: mov     ecx, 48h ; 'H'
 * 000000014016C902: xor     edx, edx
 * 000000014016C904: wrmsr
 * 000000014016C906: movzx   edx, word ptr gs:2EB8h
 * 000000014016C90F: test    edx, 8
 * 000000014016C915: jz      short loc_14016C92E
 * 000000014016C917: mov     eax, 1
 * 000000014016C91C: xor     edx, edx
 * 000000014016C91E: mov     ecx, 49h ; 'I'
 * 000000014016C923: wrmsr
 * 000000014016C925: movzx   edx, word ptr gs:2EB8h
 * 000000014016C92E: test    edx, 2
 * 000000014016C934: jz      loc_14016CA5F
 * 000000014016C93A: call    loc_14016CA4D
 * 000000014016C93F: add     rsp, 8
 * 000000014016C943: call    loc_14016CA56
 * 000000014016C948: add     rsp, 8
 * 000000014016C94C: call    loc_14016C93F
 * 000000014016C951: add     rsp, 8
 * 000000014016C955: call    loc_14016C948
 * 000000014016C95A: add     rsp, 8
 * 000000014016C95E: call    loc_14016C951
 * 000000014016C963: add     rsp, 8
 * 000000014016C967: call    loc_14016C95A
 * 000000014016C96C: add     rsp, 8
 * 000000014016C970: call    loc_14016C963
 * 000000014016C975: add     rsp, 8
 * 000000014016C979: call    loc_14016C96C
 * 000000014016C97E: add     rsp, 8
 * 000000014016C982: call    loc_14016C975
 * 000000014016C987: add     rsp, 8
 * 000000014016C98B: call    loc_14016C97E
 * 000000014016C990: add     rsp, 8
 * 000000014016C994: call    loc_14016C987
 * 000000014016C999: add     rsp, 8
 * 000000014016C99D: call    loc_14016C990
 * 000000014016C9A2: add     rsp, 8
 * 000000014016C9A6: call    loc_14016C999
 * 000000014016C9AB: add     rsp, 8
 * 000000014016C9AF: call    loc_14016C9A2
 * 000000014016C9B4: add     rsp, 8
 * 000000014016C9B8: call    loc_14016C9AB
 * 000000014016C9BD: add     rsp, 8
 * 000000014016C9C1: call    loc_14016C9B4
 * 000000014016C9C6: add     rsp, 8
 * 000000014016C9CA: call    loc_14016C9BD
 * 000000014016C9CF: add     rsp, 8
 * 000000014016C9D3: call    loc_14016C9C6
 * 000000014016C9D8: add     rsp, 8
 * 000000014016C9DC: call    loc_14016C9CF
 * 000000014016C9E1: add     rsp, 8
 * 000000014016C9E5: call    loc_14016C9D8
 * 000000014016C9EA: add     rsp, 8
 * 000000014016C9EE: call    loc_14016C9E1
 * 000000014016C9F3: add     rsp, 8
 * 000000014016C9F7: call    loc_14016C9EA
 * 000000014016C9FC: add     rsp, 8
 * 000000014016CA00: call    loc_14016C9F3
 * 000000014016CA05: add     rsp, 8
 * 000000014016CA09: call    loc_14016C9FC
 * 000000014016CA0E: add     rsp, 8
 * 000000014016CA12: call    loc_14016CA05
 * 000000014016CA17: add     rsp, 8
 * 000000014016CA1B: call    loc_14016CA0E
 * 000000014016CA20: add     rsp, 8
 * 000000014016CA24: call    loc_14016CA17
 * 000000014016CA29: add     rsp, 8
 * 000000014016CA2D: call    loc_14016CA20
 * 000000014016CA32: add     rsp, 8
 * 000000014016CA36: call    loc_14016CA29
 * 000000014016CA3B: add     rsp, 8
 * 000000014016CA3F: call    loc_14016CA32
 * 000000014016CA44: add     rsp, 8
 * 000000014016CA48: call    loc_14016CA3B
 * 000000014016CA4D: add     rsp, 8
 * 000000014016CA51: call    loc_14016CA44
 * 000000014016CA56: add     rsp, 8
 * 000000014016CA5A: mov     eax, 0DADAh
 * 000000014016CA5F: test    edx, 100h
 * 000000014016CA65: jz      short loc_14016CA6C
 * 000000014016CA67: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014016CA6C: lfence
 * 000000014016CA6F: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014016CA77: jnz     short loc_14016CAC8
 * 000000014016CA79: mov     ecx, 0C0000102h
 * 000000014016CA7E: rdmsr
 * 000000014016CA80: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 000000014016CA83: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 000000014016CA86: test    byte ptr [r10+3], 80h
 * 000000014016CA8B: jz      short loc_14016CAC8
 * 000000014016CA8D: shl     rdx, 20h
 * 000000014016CA91: or      rax, rdx
 * 000000014016CA94: cmp     rax, cs:MmUserProbeAddress
 * 000000014016CA9B: cmovnb  rax, cs:MmUserProbeAddress
 * 000000014016CAA3: cmp     [r10+0F0h], rax
 * 000000014016CAAA: jz      short loc_14016CAC8
 * 000000014016CAAC: mov     rdx, [r10+1F0h]
 * 000000014016CAB3: bts     dword ptr [r10+74h], 8
 * 000000014016CAB9: dec     word ptr [r10+1E6h]
 * 000000014016CAC1: mov     [rdx+80h], rax
 * 000000014016CAC8: test    byte ptr [r10+3], 3
 * 000000014016CACD: mov     [rbp+0D8h+var_58], 0
 * 000000014016CAD6: jz      short loc_14016CADD
 * 000000014016CAD8: call    KiSaveDebugRegisterState
 * 000000014016CADD: cld
 * 000000014016CADE: stmxcsr [rbp+0D8h+var_12C]
 * 000000014016CAE2: ldmxcsr dword ptr gs:180h
 * 000000014016CAEB: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014016CAEF: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014016CAF3: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014016CAF7: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014016CAFB: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014016CAFF: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014016CB03: mov     eax, [rbp+0E0h]
 * 000000014016CB09: mov     rcx, cr2
 * 000000014016CB0C: test    [rbp+0D8h+arg_10], 200h
 * 000000014016CB16: jz      short loc_14016CB19
 * 000000014016CB18: sti
 * 000000014016CB19: mov     r9, gs:188h
 * 000000014016CB22: bt      dword ptr [r9+74h], 8
 * 000000014016CB28: jnb     short loc_14016CB38
 * 000000014016CB2A: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014016CB31: jz      short loc_14016CB38
 * 000000014016CB33: call    KiUmsTrapEntry
 * 000000014016CB38: mov     [rbp+0D8h+var_88], rcx
 * 000000014016CB3C: bt      [rbp+0D8h+arg_10], 9
 * 000000014016CB44: jnb     loc_14016CC77
 * 000000014016CB4A: lea     r9, [rbp+0D8h+var_158]
 * 000000014016CB4E: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 000000014016CB55: and     r8b, 1
 * 000000014016CB59: mov     rdx, rcx; ULONG_PTR
 * 000000014016CB5C: movzx   ecx, al; BugCheckParameter2
 * 000000014016CB5F: shr     eax, 1
 * 000000014016CB61: and     eax, 9
 * 000000014016CB64: mov     [rbp+0D8h+var_12E], al
 * 000000014016CB67: call    MmAccessFault
 * 000000014016CB6C: test    eax, eax
 * 000000014016CB6E: jl      short loc_14016CBA6
 * 000000014016CB70: cmp     cs:PsWatchEnabled, 0
 * 000000014016CB77: jz      short loc_14016CB8B
 * 000000014016CB79: mov     r8, [rbp+0D8h+var_88]
 * 000000014016CB7D: mov     rdx, [rbp+0D8h+arg_0]
 * 000000014016CB84: mov     ecx, eax
 * 000000014016CB86: call    PsWatchWorkingSet
 * 000000014016CB8B: cmp     cs:KdpOweBreakpoint, 0
 * 000000014016CB92: jz      loc_14016CC7D
 * 000000014016CB98: mov     rcx, [rbp+0D8h+var_88]
 * 000000014016CB9C: call    KdSetOwedBreakpoints
 * 000000014016CBA1: jmp     loc_14016CC7D
 * 000000014016CBA6: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014016CBAD: jz      short loc_14016CC01
 * 000000014016CBAF: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014016CBB7: jnz     short loc_14016CBF7
 * 000000014016CBB9: mov     r9, gs:188h
 * 000000014016CBC2: test    byte ptr [r9+3], 4
 * 000000014016CBC7: jz      short loc_14016CBD2
 * 000000014016CBC9: mov     r8, [r9+7A0h]
 * 000000014016CBD0: jmp     short loc_14016CBDB
 * 000000014016CBD2: mov     r8, gs:30h
 * 000000014016CBDB: cmp     r8, [rbp+0D8h+var_F0]
 * 000000014016CBDF: jz      short loc_14016CC01
 * 000000014016CBE1: mov     ecx, 0C0000102h
 * 000000014016CBE6: mov     eax, r8d
 * 000000014016CBE9: shr     r8, 20h
 * 000000014016CBED: mov     edx, r8d
 * 000000014016CBF0: wrmsr
 * 000000014016CBF2: jmp     loc_14016CC7D
 * 000000014016CBF7: mov     rcx, [rbp+0D8h+var_88]
 * 000000014016CBFB: shr     rcx, 20h
 * 000000014016CBFF: jnz     short loc_14016CC7D
 * 000000014016CC01: mov     ecx, eax
 * 000000014016CC03: mov     edx, 2
 * 000000014016CC08: cmp     ecx, 0D0000006h
 * 000000014016CC0E: jz      short loc_14016CC51
 * 000000014016CC10: cmp     ecx, 0C0000005h
 * 000000014016CC16: jz      short loc_14016CC37
 * 000000014016CC18: cmp     ecx, 80000001h
 * 000000014016CC1E: jz      short loc_14016CC3C
 * 000000014016CC20: cmp     ecx, 0C00000FDh
 * 000000014016CC26: jz      short loc_14016CC3C
 * 000000014016CC28: mov     ecx, 0C0000006h
 * 000000014016CC2D: mov     edx, 3
 * 000000014016CC32: mov     r11d, eax
 * 000000014016CC35: jmp     short loc_14016CC3C
 * 000000014016CC37: mov     ecx, 10000004h
 * 000000014016CC3C: mov     r10, [rbp+0D8h+var_88]
 * 000000014016CC40: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014016CC45: mov     r8, [rbp+0D8h+arg_0]
 * 000000014016CC4C: call    KiExceptionDispatch
 * 000000014016CC51: mov     rax, cr8
 * 000000014016CC55: mov     r10, [rbp+0D8h+arg_0]
 * 000000014016CC5C: movzx   r9, [rbp+0D8h+var_12E]
 * 000000014016CC61: and     eax, 0FFh
 * 000000014016CC66: mov     r8, rax
 * 000000014016CC69: mov     rdx, [rbp+0D8h+var_88]
 * 000000014016CC6D: mov     ecx, 0Ah
 * 000000014016CC72: call    KiBugCheckDispatch
 * 000000014016CC77: xor     eax, eax
 * 000000014016CC79: mov     al, 0FFh
 * 000000014016CC7B: jmp     short loc_14016CC55
 * 000000014016CC7D: mov     rax, cr8
 * 000000014016CC81: or      eax, eax
 * 000000014016CC83: mov     [rbp+0D8h+var_138], eax
 * 000000014016CC86: jnz     short loc_14016CC91
 * 000000014016CC88: mov     ecx, 1
 * 000000014016CC8D: mov     cr8, rcx
 * 000000014016CC91: lea     rcx, [rbp+0D8h+var_158]
 * 000000014016CC95: call    KiCheckForSListAddress
 * 000000014016CC9A: mov     ecx, [rbp+0D8h+var_138]
 * 000000014016CC9D: or      ecx, ecx
 * 000000014016CC9F: jnz     short loc_14016CCA5
 * 000000014016CCA1: mov     cr8, rcx
 * 000000014016CCA5: cli
 * 000000014016CCA6: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014016CCAD: jz      loc_14016CF37
 * 000000014016CCB3: mov     rcx, gs:188h
 * 000000014016CCBC: cmp     byte ptr [rcx+0C2h], 0
 * 000000014016CCC3: jz      short loc_14016CCDE
 * 000000014016CCC5: mov     ecx, 1
 * 000000014016CCCA: mov     cr8, rcx
 * 000000014016CCCE: sti
 * 000000014016CCCF: call    KiInitiateUserApc
 * 000000014016CCD4: cli
 * 000000014016CCD5: mov     ecx, 0
 * 000000014016CCDA: mov     cr8, rcx
 * 000000014016CCDE: mov     rcx, gs:188h
 * 000000014016CCE7: test    dword ptr [rcx], 8000000h
 * 000000014016CCED: jz      short loc_14016CCF4
 * 000000014016CCEF: call    KiRestoreSetContextState
 * 000000014016CCF4: mov     rcx, gs:188h
 * 000000014016CCFD: test    dword ptr [rcx], 40010000h
 * 000000014016CD03: jz      short loc_14016CD2A
 * 000000014016CD05: test    byte ptr [rcx+2], 1
 * 000000014016CD09: jz      short loc_14016CD19
 * 000000014016CD0B: call    KiCopyCounters
 * 000000014016CD10: mov     rcx, gs:188h
 * 000000014016CD19: test    byte ptr [rcx+3], 40h
 * 000000014016CD1D: jz      short loc_14016CD2A
 * 000000014016CD1F: lea     rsp, [rbp-80h]
 * 000000014016CD23: mov     cl, 1
 * 000000014016CD25: call    KiUmsExit
 * 000000014016CD2A: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014016CD2E: cmp     [rbp+0D8h+var_58], 0
 * 000000014016CD36: jz      short loc_14016CD3D
 * 000000014016CD38: call    KiRestoreDebugRegisterState
 * 000000014016CD3D: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014016CD41: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014016CD45: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014016CD49: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014016CD4D: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014016CD51: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014016CD55: mov     r11, [rbp+0D8h+var_F8]
 * 000000014016CD59: mov     r10, [rbp+0D8h+var_100]
 * 000000014016CD5D: mov     r9, [rbp+0D8h+var_108]
 * 000000014016CD61: mov     r8, [rbp+0D8h+var_110]
 * 000000014016CD65: movzx   eax, word ptr gs:2EC2h
 * 000000014016CD6E: cmp     gs:2EBCh, ax
 * 000000014016CD77: jz      short loc_14016CD8B
 * 000000014016CD79: mov     gs:2EBCh, ax
 * 000000014016CD82: mov     ecx, 48h ; 'H'
 * 000000014016CD87: xor     edx, edx
 * 000000014016CD89: wrmsr
 * 000000014016CD8B: btr     word ptr gs:2EB8h, 2
 * 000000014016CD96: jnb     short loc_14016CDA6
 * 000000014016CD98: mov     eax, 1
 * 000000014016CD9D: xor     edx, edx
 * 000000014016CD9F: mov     ecx, 49h ; 'I'
 * 000000014016CDA4: wrmsr
 * 000000014016CDA6: btr     word ptr gs:2EB8h, 5
 * 000000014016CDB1: jnb     loc_14016CEDC
 * 000000014016CDB7: call    loc_14016CECA
 * 000000014016CDBC: add     rsp, 8
 * 000000014016CDC0: call    loc_14016CED3
 * 000000014016CDC5: add     rsp, 8
 * 000000014016CDC9: call    loc_14016CDBC
 * 000000014016CDCE: add     rsp, 8
 * 000000014016CDD2: call    loc_14016CDC5
 * 000000014016CDD7: add     rsp, 8
 * 000000014016CDDB: call    loc_14016CDCE
 * 000000014016CDE0: add     rsp, 8
 * 000000014016CDE4: call    loc_14016CDD7
 * 000000014016CDE9: add     rsp, 8
 * 000000014016CDED: call    loc_14016CDE0
 * 000000014016CDF2: add     rsp, 8
 * 000000014016CDF6: call    loc_14016CDE9
 * 000000014016CDFB: add     rsp, 8
 * 000000014016CDFF: call    loc_14016CDF2
 * 000000014016CE04: add     rsp, 8
 * 000000014016CE08: call    loc_14016CDFB
 * 000000014016CE0D: add     rsp, 8
 * 000000014016CE11: call    loc_14016CE04
 * 000000014016CE16: add     rsp, 8
 * 000000014016CE1A: call    loc_14016CE0D
 * 000000014016CE1F: add     rsp, 8
 * 000000014016CE23: call    loc_14016CE16
 * 000000014016CE28: add     rsp, 8
 * 000000014016CE2C: call    loc_14016CE1F
 * 000000014016CE31: add     rsp, 8
 * 000000014016CE35: call    loc_14016CE28
 * 000000014016CE3A: add     rsp, 8
 * 000000014016CE3E: call    loc_14016CE31
 * 000000014016CE43: add     rsp, 8
 * 000000014016CE47: call    loc_14016CE3A
 * 000000014016CE4C: add     rsp, 8
 * 000000014016CE50: call    loc_14016CE43
 * 000000014016CE55: add     rsp, 8
 * 000000014016CE59: call    loc_14016CE4C
 * 000000014016CE5E: add     rsp, 8
 * 000000014016CE62: call    loc_14016CE55
 * 000000014016CE67: add     rsp, 8
 * 000000014016CE6B: call    loc_14016CE5E
 * 000000014016CE70: add     rsp, 8
 * 000000014016CE74: call    loc_14016CE67
 * 000000014016CE79: add     rsp, 8
 * 000000014016CE7D: call    loc_14016CE70
 * 000000014016CE82: add     rsp, 8
 * 000000014016CE86: call    loc_14016CE79
 * 000000014016CE8B: add     rsp, 8
 * 000000014016CE8F: call    loc_14016CE82
 * 000000014016CE94: add     rsp, 8
 * 000000014016CE98: call    loc_14016CE8B
 * 000000014016CE9D: add     rsp, 8
 * 000000014016CEA1: call    loc_14016CE94
 * 000000014016CEA6: add     rsp, 8
 * 000000014016CEAA: call    loc_14016CE9D
 * 000000014016CEAF: add     rsp, 8
 * 000000014016CEB3: call    loc_14016CEA6
 * 000000014016CEB8: add     rsp, 8
 * 000000014016CEBC: call    loc_14016CEAF
 * 000000014016CEC1: add     rsp, 8
 * 000000014016CEC5: call    loc_14016CEB8
 * 000000014016CECA: add     rsp, 8
 * 000000014016CECE: call    loc_14016CEC1
 * 000000014016CED3: add     rsp, 8
 * 000000014016CED7: mov     eax, 0DADAh
 * 000000014016CEDC: test    word ptr gs:2EB8h, 40h
 * 000000014016CEE7: jz      short loc_14016CEF5
 * 000000014016CEE9: xor     eax, eax
 * 000000014016CEEB: xor     edx, edx
 * 000000014016CEED: mov     ecx, 1
 * 000000014016CEF2: div     rcx
 * 000000014016CEF5: mov     rdx, [rbp+0D8h+var_118]
 * 000000014016CEF9: mov     rcx, [rbp+0D8h+var_120]
 * 000000014016CEFD: mov     rax, [rbp+0D8h+var_128]
 * 000000014016CF01: mov     rsp, rbp
 * 000000014016CF04: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014016CF0B: add     rsp, 0E8h
 * 000000014016CF12: test    cs:KiKvaShadow, 1
 * 000000014016CF19: jz      short loc_14016CF20
 * 000000014016CF1B: jmp     KiKernelExit
 * 000000014016CF20: test    word ptr gs:2EB8h, 80h
 * 000000014016CF2B: jz      short loc_14016CF32
 * 000000014016CF2D: verw    [rsp-10h+arg_20]
 * 000000014016CF32: swapgs
 * 000000014016CF35: iretq
 * 000000014016CF37: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014016CF3B: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014016CF3F: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014016CF43: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014016CF47: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014016CF4B: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014016CF4F: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014016CF53: mov     r11, [rbp+0D8h+var_F8]
 * 000000014016CF57: mov     r10, [rbp+0D8h+var_100]
 * 000000014016CF5B: mov     r9, [rbp+0D8h+var_108]
 * 000000014016CF5F: mov     r8, [rbp+0D8h+var_110]
 * 000000014016CF63: mov     rdx, [rbp+0D8h+var_118]
 * 000000014016CF67: mov     rcx, [rbp+0D8h+var_120]
 * 000000014016CF6B: mov     rax, [rbp+0D8h+var_128]
 * 000000014016CF6F: mov     rsp, rbp
 * 000000014016CF72: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014016CF79: add     rsp, 0E8h
 * 000000014016CF80: iretq
 */
