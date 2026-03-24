/*
 * XREFs of KiPageFault @ 0x140162040
 * Callers:
 *     KiPageFaultShadow @ 0x140224700 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     KiCheckForSListAddress @ 0x1400C83B0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x140154240 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401542B0 (KiSaveDebugRegisterState.c)
 *     KiInitiateUserApc @ 0x140157B20 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x140162040 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x140165B40 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140165BC0 (KiExceptionDispatch.c)
 *     KiUmsTrapEntry @ 0x1401663C0 (KiUmsTrapEntry.c)
 *     KiUmsExit @ 0x140166840 (KiUmsExit.c)
 *     KdSetOwedBreakpoints @ 0x1401C2C34 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x1401C7F7C (KiCopyCounters.c)
 *     PsWatchWorkingSet @ 0x1401F54A0 (PsWatchWorkingSet.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x140162040
 * Reason: Hex-Rays returned no pseudocode for 0x140162040
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140162040: push    rbp
 * 0000000140162041: sub     rsp, 158h
 * 0000000140162048: lea     rbp, [rsp+80h]
 * 0000000140162050: mov     [rbp+0D8h+var_12D], 1
 * 0000000140162054: mov     [rbp+0D8h+var_128], rax
 * 0000000140162058: mov     [rbp+0D8h+var_120], rcx
 * 000000014016205C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140162060: mov     [rbp+0D8h+var_110], r8
 * 0000000140162064: mov     [rbp+0D8h+var_108], r9
 * 0000000140162068: mov     [rbp+0D8h+var_100], r10
 * 000000014016206C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140162070: test    byte ptr [rbp+0D8h+arg_8], 1
 * 0000000140162077: jnz     loc_1401621DD
 * 000000014016207D: cmp     byte ptr gs:187h, 0
 * 0000000140162086: jz      loc_1401623BD
 * 000000014016208C: test    byte ptr gs:2EB0h, 1
 * 0000000140162095: jz      loc_1401623BD
 * 000000014016209B: mov     ecx, 48h ; 'H'
 * 00000001401620A0: mov     eax, 1
 * 00000001401620A5: xor     edx, edx
 * 00000001401620A7: wrmsr
 * 00000001401620A9: test    byte ptr gs:2EB0h, 4
 * 00000001401620B2: jnz     loc_1401623BD
 * 00000001401620B8: call    loc_1401621CB
 * 00000001401620BD: add     rsp, 8
 * 00000001401620C1: call    loc_1401621D4
 * 00000001401620C6: add     rsp, 8
 * 00000001401620CA: call    loc_1401620BD
 * 00000001401620CF: add     rsp, 8
 * 00000001401620D3: call    loc_1401620C6
 * 00000001401620D8: add     rsp, 8
 * 00000001401620DC: call    loc_1401620CF
 * 00000001401620E1: add     rsp, 8
 * 00000001401620E5: call    loc_1401620D8
 * 00000001401620EA: add     rsp, 8
 * 00000001401620EE: call    loc_1401620E1
 * 00000001401620F3: add     rsp, 8
 * 00000001401620F7: call    loc_1401620EA
 * 00000001401620FC: add     rsp, 8
 * 0000000140162100: call    loc_1401620F3
 * 0000000140162105: add     rsp, 8
 * 0000000140162109: call    loc_1401620FC
 * 000000014016210E: add     rsp, 8
 * 0000000140162112: call    loc_140162105
 * 0000000140162117: add     rsp, 8
 * 000000014016211B: call    loc_14016210E
 * 0000000140162120: add     rsp, 8
 * 0000000140162124: call    loc_140162117
 * 0000000140162129: add     rsp, 8
 * 000000014016212D: call    loc_140162120
 * 0000000140162132: add     rsp, 8
 * 0000000140162136: call    loc_140162129
 * 000000014016213B: add     rsp, 8
 * 000000014016213F: call    loc_140162132
 * 0000000140162144: add     rsp, 8
 * 0000000140162148: call    loc_14016213B
 * 000000014016214D: add     rsp, 8
 * 0000000140162151: call    loc_140162144
 * 0000000140162156: add     rsp, 8
 * 000000014016215A: call    loc_14016214D
 * 000000014016215F: add     rsp, 8
 * 0000000140162163: call    loc_140162156
 * 0000000140162168: add     rsp, 8
 * 000000014016216C: call    loc_14016215F
 * 0000000140162171: add     rsp, 8
 * 0000000140162175: call    loc_140162168
 * 000000014016217A: add     rsp, 8
 * 000000014016217E: call    loc_140162171
 * 0000000140162183: add     rsp, 8
 * 0000000140162187: call    loc_14016217A
 * 000000014016218C: add     rsp, 8
 * 0000000140162190: call    loc_140162183
 * 0000000140162195: add     rsp, 8
 * 0000000140162199: call    loc_14016218C
 * 000000014016219E: add     rsp, 8
 * 00000001401621A2: call    loc_140162195
 * 00000001401621A7: add     rsp, 8
 * 00000001401621AB: call    loc_14016219E
 * 00000001401621B0: add     rsp, 8
 * 00000001401621B4: call    loc_1401621A7
 * 00000001401621B9: add     rsp, 8
 * 00000001401621BD: call    loc_1401621B0
 * 00000001401621C2: add     rsp, 8
 * 00000001401621C6: call    loc_1401621B9
 * 00000001401621CB: add     rsp, 8
 * 00000001401621CF: call    loc_1401621C2
 * 00000001401621D4: add     rsp, 8
 * 00000001401621D8: jmp     loc_1401623BD
 * 00000001401621DD: test    cs:KiKvaShadow, 1
 * 00000001401621E4: jnz     short loc_1401621E9
 * 00000001401621E6: swapgs
 * 00000001401621E9: mov     r10, gs:188h
 * 00000001401621F2: test    byte ptr gs:2EB0h, 1
 * 00000001401621FB: jz      loc_14016235E
 * 0000000140162201: mov     rcx, gs:188h
 * 000000014016220A: mov     rcx, [rcx+220h]
 * 0000000140162211: mov     rcx, [rcx+790h]
 * 0000000140162218: mov     gs:2EA8h, rcx
 * 0000000140162221: mov     ecx, 48h ; 'H'
 * 0000000140162226: mov     eax, 1
 * 000000014016222B: xor     edx, edx
 * 000000014016222D: wrmsr
 * 000000014016222F: test    byte ptr gs:2EB0h, 4
 * 0000000140162238: jnz     loc_14016235E
 * 000000014016223E: call    loc_140162351
 * 0000000140162243: add     rsp, 8
 * 0000000140162247: call    loc_14016235A
 * 000000014016224C: add     rsp, 8
 * 0000000140162250: call    loc_140162243
 * 0000000140162255: add     rsp, 8
 * 0000000140162259: call    loc_14016224C
 * 000000014016225E: add     rsp, 8
 * 0000000140162262: call    loc_140162255
 * 0000000140162267: add     rsp, 8
 * 000000014016226B: call    loc_14016225E
 * 0000000140162270: add     rsp, 8
 * 0000000140162274: call    loc_140162267
 * 0000000140162279: add     rsp, 8
 * 000000014016227D: call    loc_140162270
 * 0000000140162282: add     rsp, 8
 * 0000000140162286: call    loc_140162279
 * 000000014016228B: add     rsp, 8
 * 000000014016228F: call    loc_140162282
 * 0000000140162294: add     rsp, 8
 * 0000000140162298: call    loc_14016228B
 * 000000014016229D: add     rsp, 8
 * 00000001401622A1: call    loc_140162294
 * 00000001401622A6: add     rsp, 8
 * 00000001401622AA: call    loc_14016229D
 * 00000001401622AF: add     rsp, 8
 * 00000001401622B3: call    loc_1401622A6
 * 00000001401622B8: add     rsp, 8
 * 00000001401622BC: call    loc_1401622AF
 * 00000001401622C1: add     rsp, 8
 * 00000001401622C5: call    loc_1401622B8
 * 00000001401622CA: add     rsp, 8
 * 00000001401622CE: call    loc_1401622C1
 * 00000001401622D3: add     rsp, 8
 * 00000001401622D7: call    loc_1401622CA
 * 00000001401622DC: add     rsp, 8
 * 00000001401622E0: call    loc_1401622D3
 * 00000001401622E5: add     rsp, 8
 * 00000001401622E9: call    loc_1401622DC
 * 00000001401622EE: add     rsp, 8
 * 00000001401622F2: call    loc_1401622E5
 * 00000001401622F7: add     rsp, 8
 * 00000001401622FB: call    loc_1401622EE
 * 0000000140162300: add     rsp, 8
 * 0000000140162304: call    loc_1401622F7
 * 0000000140162309: add     rsp, 8
 * 000000014016230D: call    loc_140162300
 * 0000000140162312: add     rsp, 8
 * 0000000140162316: call    loc_140162309
 * 000000014016231B: add     rsp, 8
 * 000000014016231F: call    loc_140162312
 * 0000000140162324: add     rsp, 8
 * 0000000140162328: call    loc_14016231B
 * 000000014016232D: add     rsp, 8
 * 0000000140162331: call    loc_140162324
 * 0000000140162336: add     rsp, 8
 * 000000014016233A: call    loc_14016232D
 * 000000014016233F: add     rsp, 8
 * 0000000140162343: call    loc_140162336
 * 0000000140162348: add     rsp, 8
 * 000000014016234C: call    loc_14016233F
 * 0000000140162351: add     rsp, 8
 * 0000000140162355: call    loc_140162348
 * 000000014016235A: add     rsp, 8
 * 000000014016235E: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 0000000140162366: jnz     short loc_1401623A8
 * 0000000140162368: mov     ecx, 0C0000102h
 * 000000014016236D: rdmsr
 * 000000014016236F: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 0000000140162372: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 0000000140162375: test    byte ptr [r10+3], 80h
 * 000000014016237A: jz      short loc_1401623A8
 * 000000014016237C: shl     rdx, 20h
 * 0000000140162380: or      rax, rdx
 * 0000000140162383: cmp     [r10+0F0h], rax
 * 000000014016238A: jz      short loc_1401623A8
 * 000000014016238C: mov     rdx, [r10+1F0h]
 * 0000000140162393: bts     dword ptr [r10+74h], 8
 * 0000000140162399: dec     word ptr [r10+1E6h]
 * 00000001401623A1: mov     [rdx+80h], rax
 * 00000001401623A8: test    byte ptr [r10+3], 3
 * 00000001401623AD: mov     [rbp+0D8h+var_58], 0
 * 00000001401623B6: jz      short loc_1401623BD
 * 00000001401623B8: call    KiSaveDebugRegisterState
 * 00000001401623BD: cld
 * 00000001401623BE: lfence
 * 00000001401623C1: stmxcsr [rbp+0D8h+var_12C]
 * 00000001401623C5: ldmxcsr dword ptr gs:180h
 * 00000001401623CE: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001401623D2: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001401623D6: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001401623DA: movaps  [rbp+0D8h+var_B8], xmm3
 * 00000001401623DE: movaps  [rbp+0D8h+var_A8], xmm4
 * 00000001401623E2: movaps  [rbp+0D8h+var_98], xmm5
 * 00000001401623E6: mov     eax, [rbp+0E0h]
 * 00000001401623EC: mov     rcx, cr2
 * 00000001401623EF: test    [rbp+0D8h+arg_10], 200h
 * 00000001401623F9: jz      short loc_1401623FC
 * 00000001401623FB: sti
 * 00000001401623FC: mov     r9, gs:188h
 * 0000000140162405: bt      dword ptr [r9+74h], 8
 * 000000014016240B: jnb     short loc_14016241B
 * 000000014016240D: test    byte ptr [rbp+0D8h+arg_8], 1
 * 0000000140162414: jz      short loc_14016241B
 * 0000000140162416: call    KiUmsTrapEntry
 * 000000014016241B: mov     [rbp+0D8h+var_88], rcx
 * 000000014016241F: bt      [rbp+0D8h+arg_10], 9
 * 0000000140162427: jnb     loc_14016255A
 * 000000014016242D: lea     r9, [rbp+0D8h+var_158]
 * 0000000140162431: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 0000000140162438: and     r8b, 1
 * 000000014016243C: mov     rdx, rcx; BugCheckParameter1
 * 000000014016243F: movzx   ecx, al; BugCheckParameter2
 * 0000000140162442: shr     eax, 1
 * 0000000140162444: and     eax, 9
 * 0000000140162447: mov     [rbp+0D8h+var_12E], al
 * 000000014016244A: call    MmAccessFault
 * 000000014016244F: test    eax, eax
 * 0000000140162451: jl      short loc_140162489
 * 0000000140162453: cmp     cs:PsWatchEnabled, 0
 * 000000014016245A: jz      short loc_14016246E
 * 000000014016245C: mov     r8, [rbp+0D8h+var_88]
 * 0000000140162460: mov     rdx, [rbp+0D8h+arg_0]
 * 0000000140162467: mov     ecx, eax
 * 0000000140162469: call    PsWatchWorkingSet
 * 000000014016246E: cmp     cs:KdpOweBreakpoint, 0
 * 0000000140162475: jz      loc_140162560
 * 000000014016247B: mov     rcx, [rbp+0D8h+var_88]
 * 000000014016247F: call    KdSetOwedBreakpoints
 * 0000000140162484: jmp     loc_140162560
 * 0000000140162489: test    byte ptr [rbp+0D8h+arg_8], 1
 * 0000000140162490: jz      short loc_1401624E4
 * 0000000140162492: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014016249A: jnz     short loc_1401624DA
 * 000000014016249C: mov     r9, gs:188h
 * 00000001401624A5: test    byte ptr [r9+3], 4
 * 00000001401624AA: jz      short loc_1401624B5
 * 00000001401624AC: mov     r8, [r9+798h]
 * 00000001401624B3: jmp     short loc_1401624BE
 * 00000001401624B5: mov     r8, gs:30h
 * 00000001401624BE: cmp     r8, [rbp+0D8h+var_F0]
 * 00000001401624C2: jz      short loc_1401624E4
 * 00000001401624C4: mov     ecx, 0C0000102h
 * 00000001401624C9: mov     eax, r8d
 * 00000001401624CC: shr     r8, 20h
 * 00000001401624D0: mov     edx, r8d
 * 00000001401624D3: wrmsr
 * 00000001401624D5: jmp     loc_140162560
 * 00000001401624DA: mov     rcx, [rbp+0D8h+var_88]
 * 00000001401624DE: shr     rcx, 20h
 * 00000001401624E2: jnz     short loc_140162560
 * 00000001401624E4: mov     ecx, eax
 * 00000001401624E6: mov     edx, 2
 * 00000001401624EB: cmp     ecx, 0D0000006h
 * 00000001401624F1: jz      short loc_140162534
 * 00000001401624F3: cmp     ecx, 0C0000005h
 * 00000001401624F9: jz      short loc_14016251A
 * 00000001401624FB: cmp     ecx, 80000001h
 * 0000000140162501: jz      short loc_14016251F
 * 0000000140162503: cmp     ecx, 0C00000FDh
 * 0000000140162509: jz      short loc_14016251F
 * 000000014016250B: mov     ecx, 0C0000006h
 * 0000000140162510: mov     edx, 3
 * 0000000140162515: mov     r11d, eax
 * 0000000140162518: jmp     short loc_14016251F
 * 000000014016251A: mov     ecx, 10000004h
 * 000000014016251F: mov     r10, [rbp+0D8h+var_88]
 * 0000000140162523: movzx   r9, [rbp+0D8h+var_12E]
 * 0000000140162528: mov     r8, [rbp+0D8h+arg_0]
 * 000000014016252F: call    KiExceptionDispatch
 * 0000000140162534: mov     rax, cr8
 * 0000000140162538: mov     r10, [rbp+0D8h+arg_0]
 * 000000014016253F: movzx   r9, [rbp+0D8h+var_12E]
 * 0000000140162544: and     eax, 0FFh
 * 0000000140162549: mov     r8, rax
 * 000000014016254C: mov     rdx, [rbp+0D8h+var_88]
 * 0000000140162550: mov     ecx, 0Ah
 * 0000000140162555: call    KiBugCheckDispatch
 * 000000014016255A: xor     eax, eax
 * 000000014016255C: mov     al, 0FFh
 * 000000014016255E: jmp     short loc_140162538
 * 0000000140162560: mov     rax, cr8
 * 0000000140162564: or      eax, eax
 * 0000000140162566: mov     [rbp+0D8h+var_138], eax
 * 0000000140162569: jnz     short loc_140162574
 * 000000014016256B: mov     ecx, 1
 * 0000000140162570: mov     cr8, rcx
 * 0000000140162574: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140162578: call    KiCheckForSListAddress
 * 000000014016257D: mov     ecx, [rbp+0D8h+var_138]
 * 0000000140162580: or      ecx, ecx
 * 0000000140162582: jnz     short loc_140162588
 * 0000000140162584: mov     cr8, rcx
 * 0000000140162588: cli
 * 0000000140162589: test    byte ptr [rbp+0D8h+arg_8], 1
 * 0000000140162590: jz      loc_1401626B2
 * 0000000140162596: mov     rcx, gs:188h
 * 000000014016259F: cmp     byte ptr [rcx+0C2h], 0
 * 00000001401625A6: jz      short loc_1401625C1
 * 00000001401625A8: mov     ecx, 1
 * 00000001401625AD: mov     cr8, rcx
 * 00000001401625B1: sti
 * 00000001401625B2: call    KiInitiateUserApc
 * 00000001401625B7: cli
 * 00000001401625B8: mov     ecx, 0
 * 00000001401625BD: mov     cr8, rcx
 * 00000001401625C1: mov     rcx, gs:188h
 * 00000001401625CA: test    dword ptr [rcx], 40010000h
 * 00000001401625D0: jz      short loc_1401625F7
 * 00000001401625D2: test    byte ptr [rcx+2], 1
 * 00000001401625D6: jz      short loc_1401625E6
 * 00000001401625D8: call    KiCopyCounters
 * 00000001401625DD: mov     rcx, gs:188h
 * 00000001401625E6: test    byte ptr [rcx+3], 40h
 * 00000001401625EA: jz      short loc_1401625F7
 * 00000001401625EC: lea     rsp, [rbp-80h]
 * 00000001401625F0: mov     cl, 1
 * 00000001401625F2: call    KiUmsExit
 * 00000001401625F7: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401625FB: cmp     [rbp+0D8h+var_58], 0
 * 0000000140162603: jz      short loc_14016260A
 * 0000000140162605: call    KiRestoreDebugRegisterState
 * 000000014016260A: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014016260E: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140162612: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140162616: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014016261A: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014016261E: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140162622: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140162626: mov     r10, [rbp+0D8h+var_100]
 * 000000014016262A: mov     r9, [rbp+0D8h+var_108]
 * 000000014016262E: mov     r8, [rbp+0D8h+var_110]
 * 0000000140162632: mov     rcx, gs:188h
 * 000000014016263B: movzx   eax, byte ptr [rcx+1]
 * 000000014016263F: test    eax, 1
 * 0000000140162644: jnz     short loc_140162682
 * 0000000140162646: xor     edx, edx
 * 0000000140162648: mov     ecx, 48h ; 'H'
 * 000000014016264D: wrmsr
 * 000000014016264F: mov     rax, gs:2EA8h
 * 0000000140162658: test    rax, rax
 * 000000014016265B: jz      short loc_140162682
 * 000000014016265D: mov     rcx, gs:188h
 * 0000000140162666: mov     rcx, [rcx+220h]
 * 000000014016266D: cmp     rax, [rcx+790h]
 * 0000000140162674: jz      short loc_140162682
 * 0000000140162676: mov     eax, 1
 * 000000014016267B: mov     ecx, 49h ; 'I'
 * 0000000140162680: wrmsr
 * 0000000140162682: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140162686: mov     rcx, [rbp+0D8h+var_120]
 * 000000014016268A: mov     rax, [rbp+0D8h+var_128]
 * 000000014016268E: mov     rsp, rbp
 * 0000000140162691: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140162698: add     rsp, 0E8h
 * 000000014016269F: test    cs:KiKvaShadow, 1
 * 00000001401626A6: jz      short loc_1401626AD
 * 00000001401626A8: jmp     KiKernelExit
 * 00000001401626AD: swapgs
 * 00000001401626B0: iretq
 * 00000001401626B2: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001401626B6: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001401626BA: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001401626BE: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001401626C2: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001401626C6: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001401626CA: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001401626CE: mov     r11, [rbp+0D8h+var_F8]
 * 00000001401626D2: mov     r10, [rbp+0D8h+var_100]
 * 00000001401626D6: mov     r9, [rbp+0D8h+var_108]
 * 00000001401626DA: mov     r8, [rbp+0D8h+var_110]
 * 00000001401626DE: mov     rdx, [rbp+0D8h+var_118]
 * 00000001401626E2: mov     rcx, [rbp+0D8h+var_120]
 * 00000001401626E6: mov     rax, [rbp+0D8h+var_128]
 * 00000001401626EA: mov     rsp, rbp
 * 00000001401626ED: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001401626F4: add     rsp, 0E8h
 * 00000001401626FB: iretq
 */
