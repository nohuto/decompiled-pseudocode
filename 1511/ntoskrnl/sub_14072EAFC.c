/*
 * XREFs of sub_14072EAFC @ 0x14072EAFC
 * Callers:
 *     KiVerifyXcpt15 @ 0x14072D2A0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x14072DA40 (KiFilterFiberContext.c)
 * Callees:
 *     RtlCaptureImageExceptionValues @ 0x14001A844 (RtlCaptureImageExceptionValues.c)
 *     KeInitializeTimer @ 0x14002BFFC (KeInitializeTimer.c)
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     ExSetTimer @ 0x1400345B0 (ExSetTimer.c)
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     ExProtectPool @ 0x140077FD0 (ExProtectPool.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     ExQueryPoolBlockSize @ 0x1400C8470 (ExQueryPoolBlockSize.c)
 *     RtlpConvertFunctionEntry @ 0x1400DD150 (RtlpConvertFunctionEntry.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400DD890 (RtlSectionTableFromVirtualAddress.c)
 *     MmSetPageProtection @ 0x1400EBB14 (MmSetPageProtection.c)
 *     RtlLookupFunctionTable @ 0x1400F1248 (RtlLookupFunctionTable.c)
 *     RtlPcToFileHeader @ 0x1400F1B5C (RtlPcToFileHeader.c)
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     ExAllocateTimer @ 0x14012541C (ExAllocateTimer.c)
 *     RtlpSameFunction @ 0x1401348A0 (RtlpSameFunction.c)
 *     MmQueryApiSetSchema @ 0x1401429C8 (MmQueryApiSetSchema.c)
 *     KeComputeParallelSha256StateSize @ 0x140142AE8 (KeComputeParallelSha256StateSize.c)
 *     sub_14014F138 @ 0x14014F138 (sub_14014F138.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     HvlIsHypercallOverlayLocked @ 0x1401AE3A4 (HvlIsHypercallOverlayLocked.c)
 *     KeKvaShadowingActive @ 0x1401CA5E0 (KeKvaShadowingActive.c)
 *     KeQueryErrataCodePage @ 0x1401CA5E8 (KeQueryErrataCodePage.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     sub_1402347EC @ 0x1402347EC (sub_1402347EC.c)
 *     sub_140236718 @ 0x140236718 (sub_140236718.c)
 *     $$b7 @ 0x140236F74 ($$b7.c)
 *     $$e6 @ 0x1402379D8 ($$e6.c)
 *     KiGetGdtIdt @ 0x140237BC0 (KiGetGdtIdt.c)
 *     SdbpCheckDll @ 0x140237C10 (SdbpCheckDll.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePool @ 0x140239B08 (ExFreePool.c)
 *     MmImageSectionPagable @ 0x1403CF324 (MmImageSectionPagable.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     PsEnumProcessThreads @ 0x140500CC0 (PsEnumProcessThreads.c)
 *     xHalSetSystemInformation @ 0x14054F598 (xHalSetSystemInformation.c)
 *     sub_14072DC88 @ 0x14072DC88 (sub_14072DC88.c)
 *     sub_1407424FC @ 0x1407424FC (sub_1407424FC.c)
 *     sub_140742B9C @ 0x140742B9C (sub_140742B9C.c)
 *     KiSwInterruptPresent @ 0x14074F4AC (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x140772304 (MmStrongCodeGuaranteesEnforced.c)
 *     SeMinTcbLowering @ 0x1407723E0 (SeMinTcbLowering.c)
 *     KiGetHalExtensionList @ 0x140772578 (KiGetHalExtensionList.c)
 *     KiConnectSwInterrupt @ 0x1407842BC (KiConnectSwInterrupt.c)
 *     KiGetHalExtensionModuleFromLinks @ 0x1407842C8 (KiGetHalExtensionModuleFromLinks.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14072EAFC @ 0x14072EAFC
 * Reason: Hex-Rays returned no pseudocode for 0x14072EAFC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014072EAFC: mov     rax, rsp
 * 000000014072EAFF: mov     [rax+20h], r9
 * 000000014072EB03: mov     [rax+18h], r8d
 * 000000014072EB07: mov     [rax+10h], edx
 * 000000014072EB0A: mov     [rax+8], ecx
 * 000000014072EB0D: push    rbp
 * 000000014072EB0E: push    rbx
 * 000000014072EB0F: push    rsi
 * 000000014072EB10: push    rdi
 * 000000014072EB11: push    r12
 * 000000014072EB13: push    r13
 * 000000014072EB15: push    r14
 * 000000014072EB17: push    r15
 * 000000014072EB19: lea     rbp, [rax-1918h]
 * 000000014072EB20: sub     rsp, 19D8h
 * 000000014072EB27: mov     rax, r9
 * 000000014072EB2A: mov     esi, edx
 * 000000014072EB2C: cli
 * 000000014072EB2D: xor     ecx, ecx
 * 000000014072EB2F: cmp     byte ptr cs:KdDebuggerNotPresent, cl
 * 000000014072EB35: jnz     short loc_14072EB39
 * 000000014072EB37: jmp     short loc_14072EB37
 * 000000014072EB39: sti
 * 000000014072EB3A: mov     r14d, 5
 * 000000014072EB40: mov     [rbp+1910h+var_1650], r14
 * 000000014072EB47: lea     r12d, [r14-1]
 * 000000014072EB4B: test    rax, rax
 * 000000014072EB4E: jnz     short loc_14072EB6C
 * 000000014072EB50: lea     eax, [rdx-3]
 * 000000014072EB53: test    eax, 0FFFFFFFDh
 * 000000014072EB58: jnz     short loc_14072EB64
 * 000000014072EB5A: xor     eax, eax
 * 000000014072EB5C: mov     esi, eax
 * 000000014072EB5E: mov     [rbp+1910h+arg_8], eax
 * 000000014072EB64: mov     eax, [rbp+1910h+arg_20]
 * 000000014072EB6A: jmp     short loc_14072EB8E
 * 000000014072EB6C: cmp     edx, r14d
 * 000000014072EB6F: ja      short loc_14072EB7B
 * 000000014072EB71: mov     eax, 29h ; ')'
 * 000000014072EB76: bt      eax, edx
 * 000000014072EB79: jb      short loc_14072EB85
 * 000000014072EB7B: xor     eax, eax
 * 000000014072EB7D: mov     esi, eax
 * 000000014072EB7F: mov     [rbp+1910h+arg_8], eax
 * 000000014072EB85: mov     eax, [rbp+1910h+arg_20]
 * 000000014072EB8B: or      eax, r12d
 * 000000014072EB8E: mov     [rbp+1910h+var_18DC], eax
 * 000000014072EB91: cli
 * 000000014072EB92: xor     eax, eax
 * 000000014072EB94: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014072EB9A: jnz     short loc_14072EB9E
 * 000000014072EB9C: jmp     short loc_14072EB9C
 * 000000014072EB9E: sti
 * 000000014072EB9F: mov     r9, cs:KiInitData; BugCheckParameter3
 * 000000014072EBA6: cmp     r9, 0Bh
 * 000000014072EBAA: jnz     loc_14074219E
 * 000000014072EBB0: mov     ebx, eax
 * 000000014072EBB2: lea     rcx, __ts_z
 * 000000014072EBB9: lea     rax, __ts_81
 * 000000014072EBC0: jmp     short loc_14072EBC7
 * 000000014072EBC2: add     ebx, [rax]
 * 000000014072EBC4: add     rax, r12
 * 000000014072EBC7: cmp     rax, rcx
 * 000000014072EBCA: jnz     short loc_14072EBC2
 * 000000014072EBCC: xor     eax, eax
 * 000000014072EBCE: lea     rcx, __ps_z
 * 000000014072EBD5: mov     edx, eax
 * 000000014072EBD7: lea     rax, __ps_0
 * 000000014072EBDE: jmp     short loc_14072EBE5
 * 000000014072EBE0: add     edx, [rax]
 * 000000014072EBE2: add     rax, r12
 * 000000014072EBE5: cmp     rax, rcx
 * 000000014072EBE8: jnz     short loc_14072EBE0
 * 000000014072EBEA: cmp     ebx, edx
 * 000000014072EBEC: jnz     loc_1407421C7
 * 000000014072EBF2: lea     rbx, FsRtlUninitializeSmallMcb
 * 000000014072EBF9: mov     rcx, rbx; PcValue
 * 000000014072EBFC: lea     rdx, [rbp+1910h+BaseOfImage]; BaseOfImage
 * 000000014072EC03: call    RtlPcToFileHeader
 * 000000014072EC08: test    rax, rax
 * 000000014072EC0B: jz      loc_140731C01
 * 000000014072EC11: mov     rcx, [rbp+1910h+BaseOfImage]; BaseAddress
 * 000000014072EC18: call    RtlImageNtHeader
 * 000000014072EC1D: test    rax, rax
 * 000000014072EC20: jz      loc_140731C01
 * 000000014072EC26: mov     rdx, [rbp+1910h+BaseOfImage]; BaseOfImage
 * 000000014072EC2D: mov     r8d, ebx
 * 000000014072EC30: sub     r8d, edx; VirtualAddress
 * 000000014072EC33: mov     rcx, rax; NtHeaders
 * 000000014072EC36: call    RtlSectionTableFromVirtualAddress
 * 000000014072EC3B: test    rax, rax
 * 000000014072EC3E: jz      loc_140731C01
 * 000000014072EC44: mov     ecx, [rax+0Ch]
 * 000000014072EC47: add     rcx, [rbp+1910h+BaseOfImage]
 * 000000014072EC4E: mov     edi, [rax+8]
 * 000000014072EC51: sub     ebx, ecx
 * 000000014072EC53: mov     [rsp+1A10h+var_19B8], rbx
 * 000000014072EC58: mov     [rsp+1A10h+Src], rcx
 * 000000014072EC5D: mov     dword ptr [rbp+1910h+Size], edi
 * 000000014072EC60: cli
 * 000000014072EC61: xor     eax, eax
 * 000000014072EC63: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014072EC69: jnz     short loc_14072EC6D
 * 000000014072EC6B: jmp     short loc_14072EC6B
 * 000000014072EC6D: sti
 * 000000014072EC6E: lea     rax, sub_14023706C
 * 000000014072EC75: lea     rdx, RtlLookupFunctionEntryEx
 * 000000014072EC7C: sub     eax, ecx
 * 000000014072EC7E: sub     edx, ecx
 * 000000014072EC80: mov     [rbp+1910h+var_1968], rax
 * 000000014072EC84: mov     [rbp+1910h+var_1990], rdx
 * 000000014072EC88: cmp     edx, 7FFFFFFFh
 * 000000014072EC8E: ja      loc_1407421F0
 * 000000014072EC94: xor     eax, eax
 * 000000014072EC96: mov     ebx, eax
 * 000000014072EC98: call    MmStrongCodeGuaranteesEnforced
 * 000000014072EC9D: mov     r15d, 1
 * 000000014072ECA3: test    eax, eax
 * 000000014072ECA5: jz      short loc_14072ECB2
 * 000000014072ECA7: call    sub_140742B9C
 * 000000014072ECAC: test    eax, eax
 * 000000014072ECAE: cmovnz  ebx, r15d
 * 000000014072ECB2: cmp     esi, 7
 * 000000014072ECB5: mov     rdi, 7010008004002001h
 * 000000014072ECBF: mov     r8, 0CCCCCCCCCCCCCCCDh
 * 000000014072ECC9: cmovz   ebx, r15d
 * 000000014072ECCD: mov     dword ptr [rbp+1910h+var_1980], ebx
 * 000000014072ECD0: cmp     esi, 3
 * 000000014072ECD3: jnz     short loc_14072ED1D
 * 000000014072ECD5: rdtsc
 * 000000014072ECD7: shl     rdx, 20h
 * 000000014072ECDB: or      rax, rdx
 * 000000014072ECDE: mov     rcx, rax
 * 000000014072ECE1: mov     rdx, rax
 * 000000014072ECE4: ror     rcx, 3
 * 000000014072ECE8: mov     rax, rdi
 * 000000014072ECEB: xor     rdx, rcx
 * 000000014072ECEE: mul     rdx
 * 000000014072ECF1: mov     rcx, rdx
 * 000000014072ECF4: mov     [rbp+1910h+var_13C0], rdx
 * 000000014072ECFB: xor     rcx, rax
 * 000000014072ECFE: mov     rax, r8
 * 000000014072ED01: mul     rcx
 * 000000014072ED04: shr     rdx, 3
 * 000000014072ED08: lea     rax, [rdx+rdx*4]
 * 000000014072ED0C: add     rax, rax
 * 000000014072ED0F: sub     rcx, rax
 * 000000014072ED12: cmp     rcx, r14
 * 000000014072ED15: jnb     short loc_14072ED1D
 * 000000014072ED17: mov     [rsp+78h], esi
 * 000000014072ED1B: jmp     short loc_14072ED90
 * 000000014072ED1D: rdtsc
 * 000000014072ED1F: shl     rdx, 20h
 * 000000014072ED23: or      rax, rdx
 * 000000014072ED26: mov     rcx, rax
 * 000000014072ED29: mov     rdx, rax
 * 000000014072ED2C: ror     rcx, 3
 * 000000014072ED30: mov     rax, rdi
 * 000000014072ED33: xor     rdx, rcx
 * 000000014072ED36: mul     rdx
 * 000000014072ED39: mov     rcx, rdx
 * 000000014072ED3C: mov     [rbp+1910h+var_1640], rdx
 * 000000014072ED43: xor     rcx, rax
 * 000000014072ED46: mov     rax, r8
 * 000000014072ED49: mul     rcx
 * 000000014072ED4C: shr     rdx, 3
 * 000000014072ED50: lea     rax, [rdx+rdx*4]
 * 000000014072ED54: add     rax, rax
 * 000000014072ED57: sub     rcx, rax
 * 000000014072ED5A: cmp     rcx, 2
 * 000000014072ED5E: jnb     short loc_14072ED94
 * 000000014072ED60: rdtsc
 * 000000014072ED62: shl     rdx, 20h
 * 000000014072ED66: or      rax, rdx
 * 000000014072ED69: mov     rcx, rax
 * 000000014072ED6C: mov     rdx, rax
 * 000000014072ED6F: mov     rax, rdi
 * 000000014072ED72: ror     rcx, 3
 * 000000014072ED76: xor     rdx, rcx
 * 000000014072ED79: mul     rdx
 * 000000014072ED7C: mov     rdi, rax
 * 000000014072ED7F: mov     [rbp+1910h+var_11A0], rdx
 * 000000014072ED86: xor     edi, edx
 * 000000014072ED88: and     edi, r15d
 * 000000014072ED8B: mov     [rsp+78h], rdi
 * 000000014072ED90: xor     eax, eax
 * 000000014072ED92: jmp     short loc_14072ED9A
 * 000000014072ED94: xor     eax, eax
 * 000000014072ED96: mov     [rsp+78h], eax
 * 000000014072ED9A: cli
 * 000000014072ED9B: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014072EDA1: jnz     short loc_14072EDA5
 * 000000014072EDA3: jmp     short loc_14072EDA3
 * 000000014072EDA5: sti
 * 000000014072EDA6: test    ebx, ebx
 * 000000014072EDA8: jz      short loc_14072EDC2
 * 000000014072EDAA: mov     [rsp+78h], eax
 * 000000014072EDAE: lea     eax, [rsi-3]
 * 000000014072EDB1: cmp     eax, r15d
 * 000000014072EDB4: mov     eax, 0
 * 000000014072EDB9: cmovbe  esi, eax
 * 000000014072EDBC: mov     [rbp+1910h+arg_8], esi
 * 000000014072EDC2: mov     rax, cs:off_1402D2648
 * 000000014072EDC9: lea     rcx, [rbp+1910h+var_CF8]; void *
 * 000000014072EDD0: xor     edx, edx; Val
 * 000000014072EDD2: mov     cs:qword_1402C7270, rax
 * 000000014072EDD9: lea     r8d, [rdx+20h]; Size
 * 000000014072EDDD: call    memset
 * 000000014072EDE2: mov     r13d, [rbp+1910h+var_CE8]
 * 000000014072EDE9: xor     eax, eax
 * 000000014072EDEB: mov     esi, [rbp+1910h+var_CE0]
 * 000000014072EDF1: mov     r15d, eax
 * 000000014072EDF4: mov     [rbp+1910h+var_CF8], rax
 * 000000014072EDFB: mov     r14, 0AAAAAAAAAAAAAAABh
 * 000000014072EE05: mov     dword ptr [rbp+1910h+var_1958], eax
 * 000000014072EE08: mov     [rsp+1A10h+var_19A8], rax
 * 000000014072EE0D: lea     rax, cs:140000000h
 * 000000014072EE14: mov     dword ptr [rbp+1910h+var_1950], r13d
 * 000000014072EE18: mov     rdi, rva qword_1402C7270[rax+r15*8]
 * 000000014072EE20: lea     r8, [rbp+1910h+var_16E4]
 * 000000014072EE27: mov     rcx, rdi
 * 000000014072EE2A: lea     rdx, [rbp+1910h+var_B28]
 * 000000014072EE31: call    RtlLookupFunctionTable
 * 000000014072EE36: mov     [rbp+1910h+var_B30], rax
 * 000000014072EE3D: mov     rbx, rax
 * 000000014072EE40: test    rax, rax
 * 000000014072EE43: jz      short loc_14072EE8F
 * 000000014072EE45: mov     ecx, [rbp+1910h+var_16E4]
 * 000000014072EE4B: mov     rax, r14
 * 000000014072EE4E: mov     r14, [rbp+1910h+var_B28]
 * 000000014072EE55: mul     rcx
 * 000000014072EE58: lea     rax, [rbp+1910h+var_1630]
 * 000000014072EE5F: mov     [rbp+1910h+var_B38], rdi
 * 000000014072EE66: shr     rdx, 3
 * 000000014072EE6A: mov     ecx, edx
 * 000000014072EE6C: mov     [rbp+1910h+var_16E4], edx
 * 000000014072EE72: mov     [rbp+1910h+var_B18], rax
 * 000000014072EE79: mov     [rsp+1A10h+var_19D0], r14
 * 000000014072EE7E: lea     rdx, [rcx+rcx*2]
 * 000000014072EE82: lea     rcx, [rbx+rdx*4]
 * 000000014072EE86: mov     [rbp+1910h+var_B20], rcx
 * 000000014072EE8D: jmp     short loc_14072EE94
 * 000000014072EE8F: mov     r14, [rsp+1A10h+var_19D0]
 * 000000014072EE94: test    rbx, rbx
 * 000000014072EE97: jz      loc_14072F2F1
 * 000000014072EE9D: cmp     rbx, [rbp+1910h+var_B20]
 * 000000014072EEA4: jz      loc_14072F2F1
 * 000000014072EEAA: mov     rdx, [rbp+1910h+var_B28]
 * 000000014072EEB1: mov     rcx, rbx
 * 000000014072EEB4: mov     rdi, rbx
 * 000000014072EEB7: call    RtlpConvertFunctionEntry
 * 000000014072EEBC: mov     r8, [rbp+1910h+var_B38]
 * 000000014072EEC3: mov     rcx, rax
 * 000000014072EEC6: mov     rdx, [rbp+1910h+var_B28]
 * 000000014072EECD: call    RtlpSameFunction
 * 000000014072EED2: mov     rbx, [rbp+1910h+var_B30]
 * 000000014072EED9: add     rbx, 0Ch
 * 000000014072EEDD: mov     [rbp+1910h+var_B30], rbx
 * 000000014072EEE4: test    rax, rax
 * 000000014072EEE7: jz      short loc_14072EE9D
 * 000000014072EEE9: mov     rax, [rbp+1910h+var_B18]
 * 000000014072EEF0: mov     [rax], rdi
 * 000000014072EEF3: mov     rax, [rbp+1910h+var_1630]
 * 000000014072EEFA: mov     ecx, [rax]
 * 000000014072EEFC: mov     edx, [rax+4]
 * 000000014072EEFF: sub     edx, ecx
 * 000000014072EF01: add     [rbp+1910h+var_CDC], edx
 * 000000014072EF07: inc     esi
 * 000000014072EF09: lea     rax, [r14+rcx]
 * 000000014072EF0D: mov     dword ptr [rbp+1910h+NtHeaders], esi
 * 000000014072EF10: mov     r14, rax
 * 000000014072EF13: mov     ecx, edx
 * 000000014072EF15: and     r14, 0FFFFFFFFFFFFF000h
 * 000000014072EF1C: add     rcx, rax
 * 000000014072EF1F: mov     [rsp+1A10h+var_19A0], rcx
 * 000000014072EF24: xor     eax, eax
 * 000000014072EF26: mov     esi, eax
 * 000000014072EF28: mov     edi, eax
 * 000000014072EF2A: xor     r13d, r13d
 * 000000014072EF2D: mov     rcx, r14
 * 000000014072EF30: mov     eax, edi
 * 000000014072EF32: test    edi, edi
 * 000000014072EF34: jz      short loc_14072EF62
 * 000000014072EF36: sub     eax, 1
 * 000000014072EF39: jz      short loc_14072EF50
 * 000000014072EF3B: cmp     eax, 1
 * 000000014072EF3E: jz      short loc_14072EF48
 * 000000014072EF40: call    MiGetPteAddress
 * 000000014072EF45: mov     rcx, rax
 * 000000014072EF48: call    MiGetPteAddress
 * 000000014072EF4D: mov     rcx, rax
 * 000000014072EF50: call    MiGetPteAddress
 * 000000014072EF55: mov     rcx, rax
 * 000000014072EF58: call    MiGetPteAddress
 * 000000014072EF5D: mov     rbx, rax
 * 000000014072EF60: jmp     short loc_14072EF7D
 * 000000014072EF62: call    MiGetPteAddress
 * 000000014072EF67: mov     rcx, rax
 * 000000014072EF6A: mov     rbx, rax
 * 000000014072EF6D: call    MiGetPteAddress
 * 000000014072EF72: mov     cl, [rax]
 * 000000014072EF74: shr     cl, 7
 * 000000014072EF77: test    cl, cl
 * 000000014072EF79: cmovnz  rbx, r13
 * 000000014072EF7D: test    rbx, rbx
 * 000000014072EF80: jz      short loc_14072EF95
 * 000000014072EF82: mov     eax, esi
 * 000000014072EF84: mov     [rbp+rax*8+1910h+var_A20], rbx
 * 000000014072EF8C: mov     ebx, 1
 * 000000014072EF91: add     esi, ebx
 * 000000014072EF93: jmp     short loc_14072EF9A
 * 000000014072EF95: mov     ebx, 1
 * 000000014072EF9A: add     edi, ebx
 * 000000014072EF9C: cmp     edi, r12d
 * 000000014072EF9F: jb      short loc_14072EF2D
 * 000000014072EFA1: mov     r13d, dword ptr [rbp+1910h+var_1950]
 * 000000014072EFA5: test    esi, esi
 * 000000014072EFA7: jz      loc_14072F2CA
 * 000000014072EFAD: dec     esi
 * 000000014072EFAF: xor     eax, eax
 * 000000014072EFB1: mov     edx, eax
 * 000000014072EFB3: mov     r12, [rbp+rsi*8+1910h+var_A20]
 * 000000014072EFBB: cmp     [rbp+1910h+var_CE4], eax
 * 000000014072EFC1: jbe     short loc_14072EFDC
 * 000000014072EFC3: mov     rax, [rbp+1910h+P]
 * 000000014072EFCA: mov     ecx, edx
 * 000000014072EFCC: cmp     r12, [rax+rcx*8]
 * 000000014072EFD0: jz      short loc_14072EFDC
 * 000000014072EFD2: add     edx, ebx
 * 000000014072EFD4: cmp     edx, [rbp+1910h+var_CE4]
 * 000000014072EFDA: jb      short loc_14072EFC3
 * 000000014072EFDC: mov     eax, [rbp+1910h+var_CE4]
 * 000000014072EFE2: cmp     edx, eax
 * 000000014072EFE4: jnz     loc_14072F2BE
 * 000000014072EFEA: cmp     eax, r13d
 * 000000014072EFED: jnz     loc_14072F2A0
 * 000000014072EFF3: lea     r13d, ds:40h[r13*2]
 * 000000014072EFFB: mov     dword ptr [rbp+1910h+var_1950], r13d
 * 000000014072EFFF: rdtsc
 * 000000014072F001: shl     rdx, 20h
 * 000000014072F005: mov     rbx, 7010008004002001h
 * 000000014072F00F: or      rax, rdx
 * 000000014072F012: mov     rcx, rax
 * 000000014072F015: mov     rdx, rax
 * 000000014072F018: ror     rcx, 3
 * 000000014072F01C: mov     rax, rbx
 * 000000014072F01F: xor     rdx, rcx
 * 000000014072F022: mul     rdx
 * 000000014072F025: mov     rcx, rdx
 * 000000014072F028: mov     [rbp+1910h+var_1360], rdx
 * 000000014072F02F: xor     rcx, rax
 * 000000014072F032: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014072F03C: mul     rcx
 * 000000014072F03F: shr     rdx, 1
 * 000000014072F042: imul    rax, rdx, 0Bh
 * 000000014072F046: sub     rcx, rax
 * 000000014072F049: mov     eax, 5
 * 000000014072F04E: cmp     ecx, eax
 * 000000014072F050: ja      loc_14072F101
 * 000000014072F056: jz      loc_14072F0E9
 * 000000014072F05C: test    ecx, ecx
 * 000000014072F05E: jz      short loc_14072F0D1
 * 000000014072F060: sub     ecx, 1
 * 000000014072F063: jz      short loc_14072F0BA
 * 000000014072F065: sub     ecx, 1
 * 000000014072F068: jz      short loc_14072F0A2
 * 000000014072F06A: cmp     ecx, 1
 * 000000014072F06D: jz      short loc_14072F087
 * 000000014072F06F: mov     [rbp+1910h+var_1720], 67076494h
 * 000000014072F079: mov     edi, [rbp+1910h+var_1720]
 * 000000014072F07F: rol     edi, 4
 * 000000014072F082: jmp     loc_14072F20E
 * 000000014072F087: mov     [rbp+1910h+var_1718], 0A8223938h
 * 000000014072F091: mov     edi, [rbp+1910h+var_1718]
 * 000000014072F097: xor     edi, 3
 * 000000014072F09A: ror     edi, 0Fh
 * 000000014072F09D: jmp     loc_14072F20E
 * 000000014072F0A2: mov     [rbp+1910h+var_1710], 85B5910Dh
 * 000000014072F0AC: mov     edi, [rbp+1910h+var_1710]
 * 000000014072F0B2: ror     edi, 2
 * 000000014072F0B5: jmp     loc_14072F20E
 * 000000014072F0BA: mov     [rbp+1910h+var_1708], 0B2AD31A1h
 * 000000014072F0C4: mov     edi, [rbp+1910h+var_1708]
 * 000000014072F0CA: rol     edi, 1
 * 000000014072F0CC: jmp     loc_14072F20E
 * 000000014072F0D1: mov     [rbp+1910h+var_1700], 0D098D0D8h
 * 000000014072F0DB: mov     edi, [rbp+1910h+var_1700]
 * 000000014072F0E1: ror     edi, 6
 * 000000014072F0E4: jmp     loc_14072F20E
 * 000000014072F0E9: mov     [rbp+1910h+var_16F8], 288C49EDh
 * 000000014072F0F3: mov     edi, [rbp+1910h+var_16F8]
 * 000000014072F0F9: ror     edi, 5
 * 000000014072F0FC: jmp     loc_14072F20E
 * 000000014072F101: mov     edx, 6
 * 000000014072F106: sub     ecx, edx
 * 000000014072F108: jz      loc_14072F1F9
 * 000000014072F10E: sub     ecx, 1
 * 000000014072F111: jz      loc_14072F1E4
 * 000000014072F117: sub     ecx, 1
 * 000000014072F11A: jz      loc_14072F1CF
 * 000000014072F120: cmp     ecx, 1
 * 000000014072F123: jz      loc_14072F1B7
 * 000000014072F129: rdtsc
 * 000000014072F12B: shl     rdx, 20h
 * 000000014072F12F: mov     r8d, 4EC4EC4Fh
 * 000000014072F135: or      rax, rdx
 * 000000014072F138: mov     rcx, rax
 * 000000014072F13B: mov     rdx, rax
 * 000000014072F13E: mov     rax, rbx
 * 000000014072F141: ror     rcx, 3
 * 000000014072F145: xor     rdx, rcx
 * 000000014072F148: mul     rdx
 * 000000014072F14B: mov     rdi, rax
 * 000000014072F14E: mov     [rbp+1910h+var_1010], rdx
 * 000000014072F155: xor     edi, edx
 * 000000014072F157: mov     eax, r8d
 * 000000014072F15A: mul     edi
 * 000000014072F15C: mov     ebx, edi
 * 000000014072F15E: mov     eax, r8d
 * 000000014072F161: shr     edx, 3
 * 000000014072F164: imul    ecx, edx, 1Ah
 * 000000014072F167: shr     edi, 5
 * 000000014072F16A: mul     edi
 * 000000014072F16C: sub     ebx, ecx
 * 000000014072F16E: mov     ecx, edi
 * 000000014072F170: add     ebx, 61h ; 'a'
 * 000000014072F173: shr     edx, 3
 * 000000014072F176: imul    eax, edx, 1Ah
 * 000000014072F179: shl     ebx, 8
 * 000000014072F17C: shr     edi, 5
 * 000000014072F17F: sub     ecx, eax
 * 000000014072F181: mov     eax, r8d
 * 000000014072F184: mul     edi
 * 000000014072F186: add     ecx, 41h ; 'A'
 * 000000014072F189: or      ecx, ebx
 * 000000014072F18B: shr     edx, 3
 * 000000014072F18E: imul    eax, edx, 1Ah
 * 000000014072F191: mov     ebx, edi
 * 000000014072F193: shr     edi, 5
 * 000000014072F196: shl     ecx, 8
 * 000000014072F199: sub     ebx, eax
 * 000000014072F19B: mov     eax, r8d
 * 000000014072F19E: mul     edi
 * 000000014072F1A0: add     ebx, 61h ; 'a'
 * 000000014072F1A3: shr     edx, 3
 * 000000014072F1A6: or      ebx, ecx
 * 000000014072F1A8: imul    eax, edx, 1Ah
 * 000000014072F1AB: shl     ebx, 8
 * 000000014072F1AE: sub     edi, eax
 * 000000014072F1B0: add     edi, 41h ; 'A'
 * 000000014072F1B3: or      edi, ebx
 * 000000014072F1B5: jmp     short loc_14072F20E
 * 000000014072F1B7: mov     [rbp+1910h+var_16F0], 0B0869E85h
 * 000000014072F1C1: mov     edi, [rbp+1910h+var_16F0]
 * 000000014072F1C7: xor     edi, 9
 * 000000014072F1CA: ror     edi, 21h
 * 000000014072F1CD: jmp     short loc_14072F20E
 * 000000014072F1CF: mov     [rbp+1910h+var_16E8], 64664142h
 * 000000014072F1D9: mov     edi, [rbp+1910h+var_16E8]
 * 000000014072F1DF: ror     edi, 8
 * 000000014072F1E2: jmp     short loc_14072F20E
 * 000000014072F1E4: mov     [rbp+1910h+var_16E0], 82C6A6D8h
 * 000000014072F1EE: mov     edi, [rbp+1910h+var_16E0]
 * 000000014072F1F4: rol     edi, 7
 * 000000014072F1F7: jmp     short loc_14072F20E
 * 000000014072F1F9: mov     [rbp+1910h+var_171C], 4E574672h
 * 000000014072F203: mov     edi, [rbp+1910h+var_171C]
 * 000000014072F209: xor     edi, edx
 * 000000014072F20B: ror     edi, 18h
 * 000000014072F20E: mov     edx, r13d
 * 000000014072F211: mov     r8d, edi; Tag
 * 000000014072F214: shl     rdx, 3; NumberOfBytes
 * 000000014072F218: mov     ecx, 200h; PoolType
 * 000000014072F21D: call    ExAllocatePoolWithTag
 * 000000014072F222: mov     r15, rax
 * 000000014072F225: xor     eax, eax
 * 000000014072F227: test    r15, r15
 * 000000014072F22A: jz      loc_140731C01
 * 000000014072F230: mov     rdx, [rbp+1910h+P]
 * 000000014072F237: test    rdx, rdx
 * 000000014072F23A: jz      short loc_14072F28D
 * 000000014072F23C: mov     ecx, [rbp+1910h+var_CE4]
 * 000000014072F242: lea     r8d, [rax+1]
 * 000000014072F246: shl     ecx, 3
 * 000000014072F249: mov     rbx, r15
 * 000000014072F24C: cmp     ecx, 8
 * 000000014072F24F: jb      short loc_14072F26D
 * 000000014072F251: mov     edi, ecx
 * 000000014072F253: shr     rdi, 3
 * 000000014072F257: mov     rax, [rdx]
 * 000000014072F25A: add     ecx, 0FFFFFFF8h
 * 000000014072F25D: mov     [rbx], rax
 * 000000014072F260: add     rdx, 8
 * 000000014072F264: add     rbx, 8
 * 000000014072F268: sub     rdi, r8
 * 000000014072F26B: jnz     short loc_14072F257
 * 000000014072F26D: test    ecx, ecx
 * 000000014072F26F: jz      short loc_14072F281
 * 000000014072F271: sub     rbx, rdx
 * 000000014072F274: mov     al, [rdx]
 * 000000014072F276: mov     [rdx+rbx], al
 * 000000014072F279: add     rdx, r8
 * 000000014072F27C: add     ecx, 0FFFFFFFFh
 * 000000014072F27F: jnz     short loc_14072F274
 * 000000014072F281: mov     rcx, [rbp+1910h+P]; P
 * 000000014072F288: call    ExFreePool
 * 000000014072F28D: mov     [rbp+1910h+P], r15
 * 000000014072F294: mov     ebx, 1
 * 000000014072F299: mov     [rbp+1910h+var_CE8], r13d
 * 000000014072F2A0: mov     ecx, [rbp+1910h+var_CE4]
 * 000000014072F2A6: mov     rax, [rbp+1910h+P]
 * 000000014072F2AD: add     [rbp+1910h+var_CE4], ebx
 * 000000014072F2B3: add     [rbp+1910h+var_CDC], 10h
 * 000000014072F2BA: mov     [rax+rcx*8], r12
 * 000000014072F2BE: test    esi, esi
 * 000000014072F2C0: jnz     loc_14072EFAD
 * 000000014072F2C6: lea     r12d, [rsi+4]
 * 000000014072F2CA: add     r14, 1000h
 * 000000014072F2D1: cmp     r14, [rsp+1A10h+var_19A0]
 * 000000014072F2D6: jb      loc_14072EF24
 * 000000014072F2DC: mov     esi, dword ptr [rbp+1910h+NtHeaders]
 * 000000014072F2DF: mov     rbx, [rbp+1910h+var_B30]
 * 000000014072F2E6: mov     [rbp+1910h+var_CE0], esi
 * 000000014072F2EC: jmp     loc_14072EE8F
 * 000000014072F2F1: mov     r14d, dword ptr [rbp+1910h+var_1958]
 * 000000014072F2F5: lea     rax, cs:140000000h
 * 000000014072F2FC: mov     r15, [rsp+1A10h+var_19A8]
 * 000000014072F301: mov     r8d, 1
 * 000000014072F307: add     r14d, r8d
 * 000000014072F30A: add     r15, r8
 * 000000014072F30D: mov     dword ptr [rbp+1910h+var_1958], r14d
 * 000000014072F311: cmp     r14d, 9
 * 000000014072F315: mov     r14, 0AAAAAAAAAAAAAAABh
 * 000000014072F31F: mov     [rsp+1A10h+var_19A8], r15
 * 000000014072F324: jb      loc_14072EE18
 * 000000014072F32A: add     [rbp+1910h+var_CDC], 8
 * 000000014072F331: lea     rax, off_1402D2648
 * 000000014072F338: and     rax, 0FFFFFFFFFFFFF000h
 * 000000014072F33E: lea     r12d, [rsi+1]
 * 000000014072F342: mov     [rsp+1A10h+var_19A0], rax
 * 000000014072F347: mov     r15, rax
 * 000000014072F34A: mov     dword ptr [rbp+1910h+NtHeaders], r12d
 * 000000014072F34E: xor     eax, eax
 * 000000014072F350: mov     esi, eax
 * 000000014072F352: mov     edi, eax
 * 000000014072F354: xor     r13d, r13d
 * 000000014072F357: mov     rcx, r15
 * 000000014072F35A: mov     eax, edi
 * 000000014072F35C: test    edi, edi
 * 000000014072F35E: jz      short loc_14072F38C
 * 000000014072F360: sub     eax, 1
 * 000000014072F363: jz      short loc_14072F37A
 * 000000014072F365: cmp     eax, 1
 * 000000014072F368: jz      short loc_14072F372
 * 000000014072F36A: call    MiGetPteAddress
 * 000000014072F36F: mov     rcx, rax
 * 000000014072F372: call    MiGetPteAddress
 * 000000014072F377: mov     rcx, rax
 * 000000014072F37A: call    MiGetPteAddress
 * 000000014072F37F: mov     rcx, rax
 * 000000014072F382: call    MiGetPteAddress
 * 000000014072F387: mov     rbx, rax
 * 000000014072F38A: jmp     short loc_14072F3A7
 * 000000014072F38C: call    MiGetPteAddress
 * 000000014072F391: mov     rcx, rax
 * 000000014072F394: mov     rbx, rax
 * 000000014072F397: call    MiGetPteAddress
 * 000000014072F39C: mov     cl, [rax]
 * 000000014072F39E: shr     cl, 7
 * 000000014072F3A1: test    cl, cl
 * 000000014072F3A3: cmovnz  rbx, r13
 * 000000014072F3A7: mov     r8d, 1
 * 000000014072F3AD: test    rbx, rbx
 * 000000014072F3B0: jz      short loc_14072F3BF
 * 000000014072F3B2: mov     eax, esi
 * 000000014072F3B4: add     esi, r8d
 * 000000014072F3B7: mov     [rbp+rax*8+1910h+var_AC0], rbx
 * 000000014072F3BF: add     edi, r8d
 * 000000014072F3C2: cmp     edi, 4
 * 000000014072F3C5: jb      short loc_14072F357
 * 000000014072F3C7: mov     r12d, dword ptr [rbp+1910h+NtHeaders]
 * 000000014072F3CB: mov     r13d, dword ptr [rbp+1910h+var_1950]
 * 000000014072F3CF: jmp     loc_14072F6D0
 * 000000014072F3D4: dec     esi
 * 000000014072F3D6: xor     eax, eax
 * 000000014072F3D8: mov     edx, eax
 * 000000014072F3DA: mov     rbx, [rbp+rsi*8+1910h+var_AC0]
 * 000000014072F3E2: mov     [rsp+1A10h+var_19D0], rbx
 * 000000014072F3E7: cmp     [rbp+1910h+var_CE4], eax
 * 000000014072F3ED: jbe     short loc_14072F409
 * 000000014072F3EF: mov     rax, [rbp+1910h+P]
 * 000000014072F3F6: mov     ecx, edx
 * 000000014072F3F8: cmp     rbx, [rax+rcx*8]
 * 000000014072F3FC: jz      short loc_14072F409
 * 000000014072F3FE: add     edx, r8d
 * 000000014072F401: cmp     edx, [rbp+1910h+var_CE4]
 * 000000014072F407: jb      short loc_14072F3EF
 * 000000014072F409: mov     eax, [rbp+1910h+var_CE4]
 * 000000014072F40F: cmp     edx, eax
 * 000000014072F411: jnz     loc_14072F6D0
 * 000000014072F417: cmp     eax, r13d
 * 000000014072F41A: jnz     loc_14072F6B1
 * 000000014072F420: lea     r13d, ds:40h[r13*2]
 * 000000014072F428: mov     dword ptr [rbp+1910h+var_1950], r13d
 * 000000014072F42C: rdtsc
 * 000000014072F42E: shl     rdx, 20h
 * 000000014072F432: mov     rbx, 7010008004002001h
 * 000000014072F43C: or      rax, rdx
 * 000000014072F43F: mov     rcx, rax
 * 000000014072F442: mov     rdx, rax
 * 000000014072F445: ror     rcx, 3
 * 000000014072F449: mov     rax, rbx
 * 000000014072F44C: xor     rdx, rcx
 * 000000014072F44F: mul     rdx
 * 000000014072F452: mov     rcx, rdx
 * 000000014072F455: mov     [rbp+1910h+var_16B0], rdx
 * 000000014072F45C: xor     rcx, rax
 * 000000014072F45F: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014072F469: mul     rcx
 * 000000014072F46C: shr     rdx, 1
 * 000000014072F46F: imul    rax, rdx, 0Bh
 * 000000014072F473: sub     rcx, rax
 * 000000014072F476: mov     eax, 5
 * 000000014072F47B: cmp     ecx, eax
 * 000000014072F47D: ja      loc_14072F518
 * 000000014072F483: jz      short loc_14072F500
 * 000000014072F485: test    ecx, ecx
 * 000000014072F487: jz      short loc_14072F4EE
 * 000000014072F489: sub     ecx, 1
 * 000000014072F48C: jz      short loc_14072F4D7
 * 000000014072F48E: sub     ecx, 1
 * 000000014072F491: jz      short loc_14072F4C5
 * 000000014072F493: cmp     ecx, 1
 * 000000014072F496: jz      short loc_14072F4AA
 * 000000014072F498: mov     [rbp+1910h+var_192C], 67076494h
 * 000000014072F49F: mov     edi, [rbp+1910h+var_192C]
 * 000000014072F4A2: rol     edi, 4
 * 000000014072F4A5: jmp     loc_14072F619
 * 000000014072F4AA: mov     [rbp+1910h+var_17FC], 0A8223938h
 * 000000014072F4B4: mov     edi, [rbp+1910h+var_17FC]
 * 000000014072F4BA: xor     edi, 3
 * 000000014072F4BD: ror     edi, 0Fh
 * 000000014072F4C0: jmp     loc_14072F619
 * 000000014072F4C5: mov     [rbp+1910h+var_1924], 85B5910Dh
 * 000000014072F4CC: mov     edi, [rbp+1910h+var_1924]
 * 000000014072F4CF: ror     edi, 2
 * 000000014072F4D2: jmp     loc_14072F619
 * 000000014072F4D7: mov     [rbp+1910h+var_1764], 0B2AD31A1h
 * 000000014072F4E1: mov     edi, [rbp+1910h+var_1764]
 * 000000014072F4E7: rol     edi, 1
 * 000000014072F4E9: jmp     loc_14072F619
 * 000000014072F4EE: mov     [rbp+1910h+var_191C], 0D098D0D8h
 * 000000014072F4F5: mov     edi, [rbp+1910h+var_191C]
 * 000000014072F4F8: ror     edi, 6
 * 000000014072F4FB: jmp     loc_14072F619
 * 000000014072F500: mov     [rbp+1910h+var_17F4], 288C49EDh
 * 000000014072F50A: mov     edi, [rbp+1910h+var_17F4]
 * 000000014072F510: ror     edi, 5
 * 000000014072F513: jmp     loc_14072F619
 * 000000014072F518: mov     edx, 6
 * 000000014072F51D: sub     ecx, edx
 * 000000014072F51F: jz      loc_14072F604
 * 000000014072F525: sub     ecx, 1
 * 000000014072F528: jz      loc_14072F5F5
 * 000000014072F52E: sub     ecx, 1
 * 000000014072F531: jz      loc_14072F5E0
 * 000000014072F537: cmp     ecx, 1
 * 000000014072F53A: jz      loc_14072F5CE
 * 000000014072F540: rdtsc
 * 000000014072F542: shl     rdx, 20h
 * 000000014072F546: mov     r8d, 4EC4EC4Fh
 * 000000014072F54C: or      rax, rdx
 * 000000014072F54F: mov     rcx, rax
 * 000000014072F552: mov     rdx, rax
 * 000000014072F555: mov     rax, rbx
 * 000000014072F558: ror     rcx, 3
 * 000000014072F55C: xor     rdx, rcx
 * 000000014072F55F: mul     rdx
 * 000000014072F562: mov     rdi, rax
 * 000000014072F565: mov     [rbp+1910h+var_1038], rdx
 * 000000014072F56C: xor     edi, edx
 * 000000014072F56E: mov     eax, r8d
 * 000000014072F571: mul     edi
 * 000000014072F573: mov     ebx, edi
 * 000000014072F575: mov     eax, r8d
 * 000000014072F578: shr     edx, 3
 * 000000014072F57B: imul    ecx, edx, 1Ah
 * 000000014072F57E: shr     edi, 5
 * 000000014072F581: mul     edi
 * 000000014072F583: sub     ebx, ecx
 * 000000014072F585: mov     ecx, edi
 * 000000014072F587: add     ebx, 61h ; 'a'
 * 000000014072F58A: shr     edx, 3
 * 000000014072F58D: imul    eax, edx, 1Ah
 * 000000014072F590: shl     ebx, 8
 * 000000014072F593: shr     edi, 5
 * 000000014072F596: sub     ecx, eax
 * 000000014072F598: mov     eax, r8d
 * 000000014072F59B: mul     edi
 * 000000014072F59D: add     ecx, 41h ; 'A'
 * 000000014072F5A0: or      ecx, ebx
 * 000000014072F5A2: shr     edx, 3
 * 000000014072F5A5: imul    eax, edx, 1Ah
 * 000000014072F5A8: mov     ebx, edi
 * 000000014072F5AA: shr     edi, 5
 * 000000014072F5AD: shl     ecx, 8
 * 000000014072F5B0: sub     ebx, eax
 * 000000014072F5B2: mov     eax, r8d
 * 000000014072F5B5: mul     edi
 * 000000014072F5B7: add     ebx, 61h ; 'a'
 * 000000014072F5BA: shr     edx, 3
 * 000000014072F5BD: or      ebx, ecx
 * 000000014072F5BF: imul    eax, edx, 1Ah
 * 000000014072F5C2: shl     ebx, 8
 * 000000014072F5C5: sub     edi, eax
 * 000000014072F5C7: add     edi, 41h ; 'A'
 * 000000014072F5CA: or      edi, ebx
 * 000000014072F5CC: jmp     short loc_14072F619
 * 000000014072F5CE: mov     [rbp+1910h+var_1914], 0B0869E85h
 * 000000014072F5D5: mov     edi, [rbp+1910h+var_1914]
 * 000000014072F5D8: xor     edi, 9
 * 000000014072F5DB: ror     edi, 21h
 * 000000014072F5DE: jmp     short loc_14072F619
 * 000000014072F5E0: mov     [rbp+1910h+var_16F4], 64664142h
 * 000000014072F5EA: mov     edi, [rbp+1910h+var_16F4]
 * 000000014072F5F0: ror     edi, 8
 * 000000014072F5F3: jmp     short loc_14072F619
 * 000000014072F5F5: mov     [rbp+1910h+var_190C], 82C6A6D8h
 * 000000014072F5FC: mov     edi, [rbp+1910h+var_190C]
 * 000000014072F5FF: rol     edi, 7
 * 000000014072F602: jmp     short loc_14072F619
 * 000000014072F604: mov     [rbp+1910h+var_17EC], 4E574672h
 * 000000014072F60E: mov     edi, [rbp+1910h+var_17EC]
 * 000000014072F614: xor     edi, edx
 * 000000014072F616: ror     edi, 18h
 * 000000014072F619: mov     edx, r13d
 * 000000014072F61C: mov     r8d, edi; Tag
 * 000000014072F61F: shl     rdx, 3; NumberOfBytes
 * 000000014072F623: mov     ecx, 200h; PoolType
 * 000000014072F628: call    ExAllocatePoolWithTag
 * 000000014072F62D: mov     r14, rax
 * 000000014072F630: xor     eax, eax
 * 000000014072F632: test    r14, r14
 * 000000014072F635: jz      loc_140731C01
 * 000000014072F63B: mov     rdx, [rbp+1910h+P]
 * 000000014072F642: test    rdx, rdx
 * 000000014072F645: jz      short loc_14072F698
 * 000000014072F647: mov     ecx, [rbp+1910h+var_CE4]
 * 000000014072F64D: lea     r8d, [rax+1]
 * 000000014072F651: shl     ecx, 3
 * 000000014072F654: mov     rbx, r14
 * 000000014072F657: cmp     ecx, 8
 * 000000014072F65A: jb      short loc_14072F678
 * 000000014072F65C: mov     edi, ecx
 * 000000014072F65E: shr     rdi, 3
 * 000000014072F662: mov     rax, [rdx]
 * 000000014072F665: add     ecx, 0FFFFFFF8h
 * 000000014072F668: mov     [rbx], rax
 * 000000014072F66B: add     rdx, 8
 * 000000014072F66F: add     rbx, 8
 * 000000014072F673: sub     rdi, r8
 * 000000014072F676: jnz     short loc_14072F662
 * 000000014072F678: test    ecx, ecx
 * 000000014072F67A: jz      short loc_14072F68C
 * 000000014072F67C: sub     rbx, rdx
 * 000000014072F67F: mov     al, [rdx]
 * 000000014072F681: mov     [rbx+rdx], al
 * 000000014072F684: add     rdx, r8
 * 000000014072F687: add     ecx, 0FFFFFFFFh
 * 000000014072F68A: jnz     short loc_14072F67F
 * 000000014072F68C: mov     rcx, [rbp+1910h+P]; P
 * 000000014072F693: call    ExFreePool
 * 000000014072F698: mov     rbx, [rsp+1A10h+var_19D0]
 * 000000014072F69D: mov     r8d, 1
 * 000000014072F6A3: mov     [rbp+1910h+P], r14
 * 000000014072F6AA: mov     [rbp+1910h+var_CE8], r13d
 * 000000014072F6B1: mov     ecx, [rbp+1910h+var_CE4]
 * 000000014072F6B7: mov     rax, [rbp+1910h+P]
 * 000000014072F6BE: add     [rbp+1910h+var_CE4], r8d
 * 000000014072F6C5: add     [rbp+1910h+var_CDC], 10h
 * 000000014072F6CC: mov     [rax+rcx*8], rbx
 * 000000014072F6D0: test    esi, esi
 * 000000014072F6D2: jnz     loc_14072F3D4
 * 000000014072F6D8: add     r15, 1000h
 * 000000014072F6DF: lea     rax, unk_1402D2650
 * 000000014072F6E6: cmp     r15, rax
 * 000000014072F6E9: jb      loc_14072F34E
 * 000000014072F6EF: mov     ecx, [rbp+1910h+var_CDC]
 * 000000014072F6F5: mov     [rbp+1910h+var_CE0], r12d
 * 000000014072F6FC: add     ecx, 8
 * 000000014072F6FF: shl     r12d, 4
 * 000000014072F703: add     ecx, r12d
 * 000000014072F706: cli
 * 000000014072F707: xor     eax, eax
 * 000000014072F709: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014072F70F: jnz     short loc_14072F713
 * 000000014072F711: jmp     short loc_14072F711
 * 000000014072F713: sti
 * 000000014072F714: mov     r12d, dword ptr [rbp+1910h+var_1980]
 * 000000014072F718: test    r12d, r12d
 * 000000014072F71B: jz      short loc_14072F722
 * 000000014072F71D: mov     ecx, eax
 * 000000014072F71F: mov     dword ptr [rbp+1910h+Size], eax
 * 000000014072F722: mov     r13d, dword ptr [rbp+1910h+Size]
 * 000000014072F726: lea     eax, [rcx+750h]
 * 000000014072F72C: add     r13d, eax
 * 000000014072F72F: mov     dword ptr [rbp+1910h+NtHeaders], eax
 * 000000014072F732: mov     dword ptr [rbp+1910h+var_1950], r13d
 * 000000014072F736: rdtsc
 * 000000014072F738: shl     rdx, 20h
 * 000000014072F73C: mov     r8, 7010008004002001h
 * 000000014072F746: or      rax, rdx
 * 000000014072F749: mov     r9d, 7FFh
 * 000000014072F74F: mov     rcx, rax
 * 000000014072F752: mov     rdx, rax
 * 000000014072F755: ror     rcx, 3
 * 000000014072F759: mov     rax, r8
 * 000000014072F75C: xor     rdx, rcx
 * 000000014072F75F: mul     rdx
 * 000000014072F762: mov     [rbp+1910h+var_16A0], rdx
 * 000000014072F769: xor     rdx, rax
 * 000000014072F76C: and     edx, r9d
 * 000000014072F76F: lea     r15d, [rdx+80000h]
 * 000000014072F776: add     r15d, r13d
 * 000000014072F779: rdtsc
 * 000000014072F77B: shl     rdx, 20h
 * 000000014072F77F: or      rax, rdx
 * 000000014072F782: mov     rcx, rax
 * 000000014072F785: mov     rdx, rax
 * 000000014072F788: ror     rcx, 3
 * 000000014072F78C: mov     rax, r8
 * 000000014072F78F: xor     rdx, rcx
 * 000000014072F792: mul     rdx
 * 000000014072F795: mov     rcx, rdx
 * 000000014072F798: mov     [rbp+1910h+var_11D0], rdx
 * 000000014072F79F: xor     rcx, rax
 * 000000014072F7A2: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014072F7AC: mul     rcx
 * 000000014072F7AF: shr     rdx, 1
 * 000000014072F7B2: imul    rax, rdx, 0Bh
 * 000000014072F7B6: sub     rcx, rax
 * 000000014072F7B9: mov     eax, 5
 * 000000014072F7BE: cmp     ecx, eax
 * 000000014072F7C0: ja      loc_14072F85B
 * 000000014072F7C6: jz      short loc_14072F843
 * 000000014072F7C8: test    ecx, ecx
 * 000000014072F7CA: jz      short loc_14072F831
 * 000000014072F7CC: sub     ecx, 1
 * 000000014072F7CF: jz      short loc_14072F81A
 * 000000014072F7D1: sub     ecx, 1
 * 000000014072F7D4: jz      short loc_14072F808
 * 000000014072F7D6: cmp     ecx, 1
 * 000000014072F7D9: jz      short loc_14072F7ED
 * 000000014072F7DB: mov     [rbp+1910h+var_1904], 67076494h
 * 000000014072F7E2: mov     edi, [rbp+1910h+var_1904]
 * 000000014072F7E5: rol     edi, 4
 * 000000014072F7E8: jmp     loc_14072F95C
 * 000000014072F7ED: mov     [rbp+1910h+var_175C], 0A8223938h
 * 000000014072F7F7: mov     edi, [rbp+1910h+var_175C]
 * 000000014072F7FD: xor     edi, 3
 * 000000014072F800: ror     edi, 0Fh
 * 000000014072F803: jmp     loc_14072F95C
 * 000000014072F808: mov     [rbp+1910h+var_18FC], 85B5910Dh
 * 000000014072F80F: mov     edi, [rbp+1910h+var_18FC]
 * 000000014072F812: ror     edi, 2
 * 000000014072F815: jmp     loc_14072F95C
 * 000000014072F81A: mov     [rbp+1910h+var_17E4], 0B2AD31A1h
 * 000000014072F824: mov     edi, [rbp+1910h+var_17E4]
 * 000000014072F82A: rol     edi, 1
 * 000000014072F82C: jmp     loc_14072F95C
 * 000000014072F831: mov     [rbp+1910h+var_18F4], 0D098D0D8h
 * 000000014072F838: mov     edi, [rbp+1910h+var_18F4]
 * 000000014072F83B: ror     edi, 6
 * 000000014072F83E: jmp     loc_14072F95C
 * 000000014072F843: mov     [rbp+1910h+var_1714], 288C49EDh
 * 000000014072F84D: mov     edi, [rbp+1910h+var_1714]
 * 000000014072F853: ror     edi, 5
 * 000000014072F856: jmp     loc_14072F95C
 * 000000014072F85B: mov     edx, 6
 * 000000014072F860: sub     ecx, edx
 * 000000014072F862: jz      loc_14072F947
 * 000000014072F868: sub     ecx, 1
 * 000000014072F86B: jz      loc_14072F938
 * 000000014072F871: sub     ecx, 1
 * 000000014072F874: jz      loc_14072F923
 * 000000014072F87A: cmp     ecx, 1
 * 000000014072F87D: jz      loc_14072F911
 * 000000014072F883: rdtsc
 * 000000014072F885: shl     rdx, 20h
 * 000000014072F889: mov     r10d, 4EC4EC4Fh
 * 000000014072F88F: or      rax, rdx
 * 000000014072F892: mov     rcx, rax
 * 000000014072F895: mov     rdx, rax
 * 000000014072F898: ror     rcx, 3
 * 000000014072F89C: mov     rax, r8
 * 000000014072F89F: xor     rdx, rcx
 * 000000014072F8A2: mul     rdx
 * 000000014072F8A5: mov     rdi, rax
 * 000000014072F8A8: mov     [rbp+1910h+var_1690], rdx
 * 000000014072F8AF: xor     edi, edx
 * 000000014072F8B1: mov     eax, r10d
 * 000000014072F8B4: mul     edi
 * 000000014072F8B6: mov     ebx, edi
 * 000000014072F8B8: mov     eax, r10d
 * 000000014072F8BB: shr     edx, 3
 * 000000014072F8BE: imul    ecx, edx, 1Ah
 * 000000014072F8C1: shr     edi, 5
 * 000000014072F8C4: mul     edi
 * 000000014072F8C6: sub     ebx, ecx
 * 000000014072F8C8: mov     ecx, edi
 * 000000014072F8CA: add     ebx, 61h ; 'a'
 * 000000014072F8CD: shr     edx, 3
 * 000000014072F8D0: imul    eax, edx, 1Ah
 * 000000014072F8D3: shl     ebx, 8
 * 000000014072F8D6: shr     edi, 5
 * 000000014072F8D9: sub     ecx, eax
 * 000000014072F8DB: mov     eax, r10d
 * 000000014072F8DE: mul     edi
 * 000000014072F8E0: add     ecx, 41h ; 'A'
 * 000000014072F8E3: or      ecx, ebx
 * 000000014072F8E5: shr     edx, 3
 * 000000014072F8E8: imul    eax, edx, 1Ah
 * 000000014072F8EB: mov     ebx, edi
 * 000000014072F8ED: shr     edi, 5
 * 000000014072F8F0: shl     ecx, 8
 * 000000014072F8F3: sub     ebx, eax
 * 000000014072F8F5: mov     eax, r10d
 * 000000014072F8F8: mul     edi
 * 000000014072F8FA: add     ebx, 61h ; 'a'
 * 000000014072F8FD: shr     edx, 3
 * 000000014072F900: or      ebx, ecx
 * 000000014072F902: imul    eax, edx, 1Ah
 * 000000014072F905: shl     ebx, 8
 * 000000014072F908: sub     edi, eax
 * 000000014072F90A: add     edi, 41h ; 'A'
 * 000000014072F90D: or      edi, ebx
 * 000000014072F90F: jmp     short loc_14072F95C
 * 000000014072F911: mov     [rbp+1910h+var_18EC], 0B0869E85h
 * 000000014072F918: mov     edi, [rbp+1910h+var_18EC]
 * 000000014072F91B: xor     edi, 9
 * 000000014072F91E: ror     edi, 21h
 * 000000014072F921: jmp     short loc_14072F95C
 * 000000014072F923: mov     [rbp+1910h+var_17DC], 64664142h
 * 000000014072F92D: mov     edi, [rbp+1910h+var_17DC]
 * 000000014072F933: ror     edi, 8
 * 000000014072F936: jmp     short loc_14072F95C
 * 000000014072F938: mov     [rbp+1910h+var_18E4], 82C6A6D8h
 * 000000014072F93F: mov     edi, [rbp+1910h+var_18E4]
 * 000000014072F942: rol     edi, 7
 * 000000014072F945: jmp     short loc_14072F95C
 * 000000014072F947: mov     [rbp+1910h+var_1754], 4E574672h
 * 000000014072F951: mov     edi, [rbp+1910h+var_1754]
 * 000000014072F957: xor     edi, edx
 * 000000014072F959: ror     edi, 18h
 * 000000014072F95C: rdtsc
 * 000000014072F95E: shl     rdx, 20h
 * 000000014072F962: or      rax, rdx
 * 000000014072F965: mov     rcx, rax
 * 000000014072F968: mov     rdx, rax
 * 000000014072F96B: ror     rcx, 3
 * 000000014072F96F: mov     rax, r8
 * 000000014072F972: xor     rdx, rcx
 * 000000014072F975: mul     rdx
 * 000000014072F978: mov     rsi, rax
 * 000000014072F97B: mov     [rbp+1910h+var_1028], rdx
 * 000000014072F982: xor     esi, edx
 * 000000014072F984: and     esi, r9d
 * 000000014072F987: rdtsc
 * 000000014072F989: shl     rdx, 20h
 * 000000014072F98D: or      rax, rdx
 * 000000014072F990: mov     rcx, rax
 * 000000014072F993: mov     rdx, rax
 * 000000014072F996: ror     rcx, 3
 * 000000014072F99A: mov     rax, r8
 * 000000014072F99D: xor     rdx, rcx
 * 000000014072F9A0: mov     r8d, edi; Tag
 * 000000014072F9A3: mul     rdx
 * 000000014072F9A6: lea     ecx, [rsi+1]
 * 000000014072F9A9: mov     [rbp+1910h+var_1680], rdx
 * 000000014072F9B0: xor     rax, rdx
 * 000000014072F9B3: xor     edx, edx
 * 000000014072F9B5: div     rcx
 * 000000014072F9B8: xor     ecx, ecx; PoolType
 * 000000014072F9BA: mov     r14, rdx
 * 000000014072F9BD: lea     edx, [rsi+r15]; NumberOfBytes
 * 000000014072F9C1: call    ExAllocatePoolWithTag
 * 000000014072F9C6: mov     r9, rax
 * 000000014072F9C9: xor     eax, eax
 * 000000014072F9CB: test    r9, r9
 * 000000014072F9CE: jz      loc_140731C01
 * 000000014072F9D4: lea     r10d, [rax+1]
 * 000000014072F9D8: mov     edi, r14d
 * 000000014072F9DB: mov     rbx, r9
 * 000000014072F9DE: mov     r11, 7010008004002001h
 * 000000014072F9E8: cmp     r14d, 8
 * 000000014072F9EC: jb      short loc_14072FA2A
 * 000000014072F9EE: mov     r8d, r14d
 * 000000014072F9F1: shr     r8, 3
 * 000000014072F9F5: rdtsc
 * 000000014072F9F7: shl     rdx, 20h
 * 000000014072F9FB: add     edi, 0FFFFFFF8h
 * 000000014072F9FE: or      rax, rdx
 * 000000014072FA01: mov     rcx, rax
 * 000000014072FA04: mov     rdx, rax
 * 000000014072FA07: ror     rcx, 3
 * 000000014072FA0B: mov     rax, r11
 * 000000014072FA0E: xor     rdx, rcx
 * 000000014072FA11: mul     rdx
 * 000000014072FA14: mov     [rbp+1910h+var_11C0], rdx
 * 000000014072FA1B: xor     rdx, rax
 * 000000014072FA1E: mov     [rbx], rdx
 * 000000014072FA21: add     rbx, 8
 * 000000014072FA25: sub     r8, r10
 * 000000014072FA28: jnz     short loc_14072F9F5
 * 000000014072FA2A: test    edi, edi
 * 000000014072FA2C: jz      short loc_14072FA62
 * 000000014072FA2E: rdtsc
 * 000000014072FA30: shl     rdx, 20h
 * 000000014072FA34: or      rax, rdx
 * 000000014072FA37: mov     rcx, rax
 * 000000014072FA3A: mov     rdx, rax
 * 000000014072FA3D: ror     rcx, 3
 * 000000014072FA41: mov     rax, r11
 * 000000014072FA44: xor     rdx, rcx
 * 000000014072FA47: mul     rdx
 * 000000014072FA4A: mov     [rbp+1910h+var_1670], rdx
 * 000000014072FA51: xor     rdx, rax
 * 000000014072FA54: mov     [rbx], dl
 * 000000014072FA56: add     rbx, r10
 * 000000014072FA59: shr     rdx, 8
 * 000000014072FA5D: add     edi, 0FFFFFFFFh
 * 000000014072FA60: jnz     short loc_14072FA54
 * 000000014072FA62: mov     ebx, r15d
 * 000000014072FA65: sub     esi, r14d
 * 000000014072FA68: add     rbx, r9
 * 000000014072FA6B: mov     r8d, r14d
 * 000000014072FA6E: add     rbx, r8
 * 000000014072FA71: cmp     esi, 8
 * 000000014072FA74: jb      short loc_14072FAB1
 * 000000014072FA76: mov     edi, esi
 * 000000014072FA78: shr     rdi, 3
 * 000000014072FA7C: rdtsc
 * 000000014072FA7E: shl     rdx, 20h
 * 000000014072FA82: add     esi, 0FFFFFFF8h
 * 000000014072FA85: or      rax, rdx
 * 000000014072FA88: mov     rcx, rax
 * 000000014072FA8B: mov     rdx, rax
 * 000000014072FA8E: ror     rcx, 3
 * 000000014072FA92: mov     rax, r11
 * 000000014072FA95: xor     rdx, rcx
 * 000000014072FA98: mul     rdx
 * 000000014072FA9B: mov     [rbp+1910h+var_1018], rdx
 * 000000014072FAA2: xor     rdx, rax
 * 000000014072FAA5: mov     [rbx], rdx
 * 000000014072FAA8: add     rbx, 8
 * 000000014072FAAC: sub     rdi, r10
 * 000000014072FAAF: jnz     short loc_14072FA7C
 * 000000014072FAB1: xor     eax, eax
 * 000000014072FAB3: test    esi, esi
 * 000000014072FAB5: jz      short loc_14072FAED
 * 000000014072FAB7: rdtsc
 * 000000014072FAB9: shl     rdx, 20h
 * 000000014072FABD: or      rax, rdx
 * 000000014072FAC0: mov     rcx, rax
 * 000000014072FAC3: mov     rdx, rax
 * 000000014072FAC6: ror     rcx, 3
 * 000000014072FACA: mov     rax, r11
 * 000000014072FACD: xor     rdx, rcx
 * 000000014072FAD0: mul     rdx
 * 000000014072FAD3: mov     [rbp+1910h+var_1660], rdx
 * 000000014072FADA: xor     rdx, rax
 * 000000014072FADD: mov     [rbx], dl
 * 000000014072FADF: add     rbx, r10
 * 000000014072FAE2: shr     rdx, 8
 * 000000014072FAE6: add     esi, 0FFFFFFFFh
 * 000000014072FAE9: jnz     short loc_14072FADD
 * 000000014072FAEB: xor     eax, eax
 * 000000014072FAED: lea     r14, [r9+r8]
 * 000000014072FAF1: mov     [rbp+1910h+var_11B0], r9
 * 000000014072FAF8: mov     [rsp+1A10h+var_19D0], r14
 * 000000014072FAFD: test    r14, r14
 * 000000014072FB00: jz      loc_140731C01
 * 000000014072FB06: lea     ebx, [r13+80000h]
 * 000000014072FB0D: xor     edx, edx; Val
 * 000000014072FB0F: mov     r8d, ebx; Size
 * 000000014072FB12: mov     rcx, r14; void *
 * 000000014072FB15: mov     dword ptr [rbp+1910h+var_1958], ebx
 * 000000014072FB18: call    memset
 * 000000014072FB1D: cli
 * 000000014072FB1E: xor     eax, eax
 * 000000014072FB20: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014072FB26: jnz     short loc_14072FB2A
 * 000000014072FB28: jmp     short loc_14072FB28
 * 000000014072FB2A: sti
 * 000000014072FB2B: test    r12d, r12d
 * 000000014072FB2E: mov     ecx, 10000000h
 * 000000014072FB33: setnz   al
 * 000000014072FB36: shl     eax, 1Ch
 * 000000014072FB39: xor     eax, [r14+690h]
 * 000000014072FB40: and     eax, ecx
 * 000000014072FB42: xor     eax, [r14+690h]
 * 000000014072FB49: mov     [r14+690h], eax
 * 000000014072FB50: test    ecx, eax
 * 000000014072FB52: jz      short loc_14072FB5F
 * 000000014072FB54: bts     eax, 1Bh
 * 000000014072FB58: mov     [r14+690h], eax
 * 000000014072FB5F: xor     eax, eax
 * 000000014072FB61: test    r12d, r12d
 * 000000014072FB64: jnz     loc_14073057C
 * 000000014072FB6A: mov     rax, cs:off_1402D2648
 * 000000014072FB71: lea     r8d, [r12+20h]; Size
 * 000000014072FB76: xor     edx, edx; Val
 * 000000014072FB78: mov     cs:qword_1402C7270, rax
 * 000000014072FB7F: lea     rcx, [rbp+1910h+var_B58]; void *
 * 000000014072FB86: lea     rsi, [r14+750h]
 * 000000014072FB8D: call    memset
 * 000000014072FB92: mov     r12d, [rbp+1910h+var_B48]
 * 000000014072FB99: xor     eax, eax
 * 000000014072FB9B: mov     r13d, [rbp+1910h+var_B40]
 * 000000014072FBA2: mov     r15d, eax
 * 000000014072FBA5: mov     dword ptr [rbp+1910h+var_1980], eax
 * 000000014072FBA8: mov     [rsp+1A10h+var_19C0], rax
 * 000000014072FBAD: mov     [rbp+1910h+var_B58], rsi
 * 000000014072FBB4: mov     dword ptr [rsp+1A10h+var_19A8], r12d
 * 000000014072FBB9: lea     rax, cs:140000000h
 * 000000014072FBC0: mov     rdi, rva qword_1402C7270[rax+r15*8]
 * 000000014072FBC8: lea     r8, [rbp+1910h+var_17D4]
 * 000000014072FBCF: mov     rcx, rdi
 * 000000014072FBD2: lea     rdx, [rbp+1910h+var_9C0]
 * 000000014072FBD9: call    RtlLookupFunctionTable
 * 000000014072FBDE: mov     [rbp+1910h+var_9C8], rax
 * 000000014072FBE5: mov     rbx, rax
 * 000000014072FBE8: test    rax, rax
 * 000000014072FBEB: jz      short loc_14072FC3E
 * 000000014072FBED: mov     ecx, [rbp+1910h+var_17D4]
 * 000000014072FBF3: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014072FBFD: mov     r15, [rbp+1910h+var_9C0]
 * 000000014072FC04: mul     rcx
 * 000000014072FC07: lea     rax, [rbp+1910h+var_1008]
 * 000000014072FC0E: mov     [rbp+1910h+var_9D0], rdi
 * 000000014072FC15: shr     rdx, 3
 * 000000014072FC19: mov     ecx, edx
 * 000000014072FC1B: mov     [rbp+1910h+var_17D4], edx
 * 000000014072FC21: mov     [rbp+1910h+var_9B0], rax
 * 000000014072FC28: mov     [rsp+1A10h+var_19B0], r15
 * 000000014072FC2D: lea     rdx, [rcx+rcx*2]
 * 000000014072FC31: lea     rcx, [rbx+rdx*4]
 * 000000014072FC35: mov     [rbp+1910h+var_9B8], rcx
 * 000000014072FC3C: jmp     short loc_14072FC43
 * 000000014072FC3E: mov     r15, [rsp+1A10h+var_19B0]
 * 000000014072FC43: test    rbx, rbx
 * 000000014072FC46: jz      loc_14073009E
 * 000000014072FC4C: cmp     rbx, [rbp+1910h+var_9B8]
 * 000000014072FC53: jz      loc_14073009E
 * 000000014072FC59: mov     rdx, [rbp+1910h+var_9C0]
 * 000000014072FC60: mov     rcx, rbx
 * 000000014072FC63: mov     rdi, rbx
 * 000000014072FC66: call    RtlpConvertFunctionEntry
 * 000000014072FC6B: mov     r8, [rbp+1910h+var_9D0]
 * 000000014072FC72: mov     rcx, rax
 * 000000014072FC75: mov     rdx, [rbp+1910h+var_9C0]
 * 000000014072FC7C: call    RtlpSameFunction
 * 000000014072FC81: mov     rbx, [rbp+1910h+var_9C8]
 * 000000014072FC88: add     rbx, 0Ch
 * 000000014072FC8C: mov     [rbp+1910h+var_9C8], rbx
 * 000000014072FC93: test    rax, rax
 * 000000014072FC96: jz      short loc_14072FC4C
 * 000000014072FC98: mov     rax, [rbp+1910h+var_9B0]
 * 000000014072FC9F: mov     [rax], rdi
 * 000000014072FCA2: mov     rax, [rbp+1910h+var_1008]
 * 000000014072FCA9: mov     ecx, [rax]
 * 000000014072FCAB: mov     edx, [rax+4]
 * 000000014072FCAE: sub     edx, ecx
 * 000000014072FCB0: add     rcx, r15
 * 000000014072FCB3: test    rsi, rsi
 * 000000014072FCB6: jz      short loc_14072FCC7
 * 000000014072FCB8: mov     eax, r13d
 * 000000014072FCBB: add     rax, rax
 * 000000014072FCBE: mov     [rsi+rax*8+10h], edx
 * 000000014072FCC2: mov     [rsi+rax*8+8], rcx
 * 000000014072FCC7: add     [rbp+1910h+var_B3C], edx
 * 000000014072FCCD: mov     r15, rcx
 * 000000014072FCD0: and     r15, 0FFFFFFFFFFFFF000h
 * 000000014072FCD7: mov     eax, edx
 * 000000014072FCD9: inc     r13d
 * 000000014072FCDC: add     rax, rcx
 * 000000014072FCDF: mov     [rbp+1910h+var_1940], rax
 * 000000014072FCE3: xor     eax, eax
 * 000000014072FCE5: mov     esi, eax
 * 000000014072FCE7: mov     edi, eax
 * 000000014072FCE9: xor     r12d, r12d
 * 000000014072FCEC: mov     rcx, r15
 * 000000014072FCEF: mov     eax, edi
 * 000000014072FCF1: test    edi, edi
 * 000000014072FCF3: jz      short loc_14072FD21
 * 000000014072FCF5: sub     eax, 1
 * 000000014072FCF8: jz      short loc_14072FD0F
 * 000000014072FCFA: cmp     eax, 1
 * 000000014072FCFD: jz      short loc_14072FD07
 * 000000014072FCFF: call    MiGetPteAddress
 * 000000014072FD04: mov     rcx, rax
 * 000000014072FD07: call    MiGetPteAddress
 * 000000014072FD0C: mov     rcx, rax
 * 000000014072FD0F: call    MiGetPteAddress
 * 000000014072FD14: mov     rcx, rax
 * 000000014072FD17: call    MiGetPteAddress
 * 000000014072FD1C: mov     rbx, rax
 * 000000014072FD1F: jmp     short loc_14072FD3C
 * 000000014072FD21: call    MiGetPteAddress
 * 000000014072FD26: mov     rcx, rax
 * 000000014072FD29: mov     rbx, rax
 * 000000014072FD2C: call    MiGetPteAddress
 * 000000014072FD31: mov     cl, [rax]
 * 000000014072FD33: shr     cl, 7
 * 000000014072FD36: test    cl, cl
 * 000000014072FD38: cmovnz  rbx, r12
 * 000000014072FD3C: mov     r8d, 1
 * 000000014072FD42: test    rbx, rbx
 * 000000014072FD45: jz      short loc_14072FD54
 * 000000014072FD47: mov     eax, esi
 * 000000014072FD49: add     esi, r8d
 * 000000014072FD4C: mov     [rbp+rax*8+1910h+var_A70], rbx
 * 000000014072FD54: add     edi, r8d
 * 000000014072FD57: cmp     edi, 4
 * 000000014072FD5A: jb      short loc_14072FCEC
 * 000000014072FD5C: mov     r14, [rsp+1A10h+var_19D0]
 * 000000014072FD61: mov     r12d, dword ptr [rsp+1A10h+var_19A8]
 * 000000014072FD66: jmp     loc_14073006B
 * 000000014072FD6B: dec     esi
 * 000000014072FD6D: xor     eax, eax
 * 000000014072FD6F: mov     edx, eax
 * 000000014072FD71: mov     rbx, [rbp+rsi*8+1910h+var_A70]
 * 000000014072FD79: mov     [rbp+1910h+Timer], rbx
 * 000000014072FD7D: cmp     [rbp+1910h+var_B44], eax
 * 000000014072FD83: jbe     short loc_14072FD9F
 * 000000014072FD85: mov     rax, [rbp+1910h+var_B50]
 * 000000014072FD8C: mov     ecx, edx
 * 000000014072FD8E: cmp     rbx, [rax+rcx*8]
 * 000000014072FD92: jz      short loc_14072FD9F
 * 000000014072FD94: add     edx, r8d
 * 000000014072FD97: cmp     edx, [rbp+1910h+var_B44]
 * 000000014072FD9D: jb      short loc_14072FD85
 * 000000014072FD9F: mov     eax, [rbp+1910h+var_B44]
 * 000000014072FDA5: cmp     edx, eax
 * 000000014072FDA7: jnz     loc_14073006B
 * 000000014072FDAD: cmp     eax, r12d
 * 000000014072FDB0: jnz     loc_14073004C
 * 000000014072FDB6: lea     r12d, ds:40h[r12*2]
 * 000000014072FDBE: mov     dword ptr [rsp+1A10h+var_19A8], r12d
 * 000000014072FDC3: rdtsc
 * 000000014072FDC5: shl     rdx, 20h
 * 000000014072FDC9: mov     rbx, 7010008004002001h
 * 000000014072FDD3: or      rax, rdx
 * 000000014072FDD6: mov     rcx, rax
 * 000000014072FDD9: mov     rdx, rax
 * 000000014072FDDC: ror     rcx, 3
 * 000000014072FDE0: mov     rax, rbx
 * 000000014072FDE3: xor     rdx, rcx
 * 000000014072FDE6: mul     rdx
 * 000000014072FDE9: mov     rcx, rdx
 * 000000014072FDEC: mov     [rbp+1910h+var_FF8], rdx
 * 000000014072FDF3: xor     rcx, rax
 * 000000014072FDF6: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014072FE00: mul     rcx
 * 000000014072FE03: shr     rdx, 1
 * 000000014072FE06: imul    rax, rdx, 0Bh
 * 000000014072FE0A: sub     rcx, rax
 * 000000014072FE0D: mov     eax, 5
 * 000000014072FE12: cmp     ecx, eax
 * 000000014072FE14: ja      loc_14072FEAF
 * 000000014072FE1A: jz      short loc_14072FE97
 * 000000014072FE1C: test    ecx, ecx
 * 000000014072FE1E: jz      short loc_14072FE85
 * 000000014072FE20: sub     ecx, 1
 * 000000014072FE23: jz      short loc_14072FE6E
 * 000000014072FE25: sub     ecx, 1
 * 000000014072FE28: jz      short loc_14072FE5C
 * 000000014072FE2A: cmp     ecx, 1
 * 000000014072FE2D: jz      short loc_14072FE41
 * 000000014072FE2F: mov     [rbp+1910h+var_18D4], 67076494h
 * 000000014072FE36: mov     edi, [rbp+1910h+var_18D4]
 * 000000014072FE39: rol     edi, 4
 * 000000014072FE3C: jmp     loc_14072FFB0
 * 000000014072FE41: mov     [rbp+1910h+var_16D0], 0A8223938h
 * 000000014072FE4B: mov     edi, [rbp+1910h+var_16D0]
 * 000000014072FE51: xor     edi, 3
 * 000000014072FE54: ror     edi, 0Fh
 * 000000014072FE57: jmp     loc_14072FFB0
 * 000000014072FE5C: mov     [rbp+1910h+var_18CC], 85B5910Dh
 * 000000014072FE63: mov     edi, [rbp+1910h+var_18CC]
 * 000000014072FE66: ror     edi, 2
 * 000000014072FE69: jmp     loc_14072FFB0
 * 000000014072FE6E: mov     [rbp+1910h+var_17CC], 0B2AD31A1h
 * 000000014072FE78: mov     edi, [rbp+1910h+var_17CC]
 * 000000014072FE7E: rol     edi, 1
 * 000000014072FE80: jmp     loc_14072FFB0
 * 000000014072FE85: mov     [rbp+1910h+var_18C4], 0D098D0D8h
 * 000000014072FE8C: mov     edi, [rbp+1910h+var_18C4]
 * 000000014072FE8F: ror     edi, 6
 * 000000014072FE92: jmp     loc_14072FFB0
 * 000000014072FE97: mov     [rbp+1910h+var_174C], 288C49EDh
 * 000000014072FEA1: mov     edi, [rbp+1910h+var_174C]
 * 000000014072FEA7: ror     edi, 5
 * 000000014072FEAA: jmp     loc_14072FFB0
 * 000000014072FEAF: mov     edx, 6
 * 000000014072FEB4: sub     ecx, edx
 * 000000014072FEB6: jz      loc_14072FF9B
 * 000000014072FEBC: sub     ecx, 1
 * 000000014072FEBF: jz      loc_14072FF8C
 * 000000014072FEC5: sub     ecx, 1
 * 000000014072FEC8: jz      loc_14072FF77
 * 000000014072FECE: cmp     ecx, 1
 * 000000014072FED1: jz      loc_14072FF65
 * 000000014072FED7: rdtsc
 * 000000014072FED9: shl     rdx, 20h
 * 000000014072FEDD: mov     r8d, 4EC4EC4Fh
 * 000000014072FEE3: or      rax, rdx
 * 000000014072FEE6: mov     rcx, rax
 * 000000014072FEE9: mov     rdx, rax
 * 000000014072FEEC: mov     rax, rbx
 * 000000014072FEEF: ror     rcx, 3
 * 000000014072FEF3: xor     rdx, rcx
 * 000000014072FEF6: mul     rdx
 * 000000014072FEF9: mov     rdi, rax
 * 000000014072FEFC: mov     [rbp+1910h+var_1620], rdx
 * 000000014072FF03: xor     edi, edx
 * 000000014072FF05: mov     eax, r8d
 * 000000014072FF08: mul     edi
 * 000000014072FF0A: mov     ebx, edi
 * 000000014072FF0C: mov     eax, r8d
 * 000000014072FF0F: shr     edx, 3
 * 000000014072FF12: imul    ecx, edx, 1Ah
 * 000000014072FF15: shr     edi, 5
 * 000000014072FF18: mul     edi
 * 000000014072FF1A: sub     ebx, ecx
 * 000000014072FF1C: mov     ecx, edi
 * 000000014072FF1E: add     ebx, 61h ; 'a'
 * 000000014072FF21: shr     edx, 3
 * 000000014072FF24: imul    eax, edx, 1Ah
 * 000000014072FF27: shl     ebx, 8
 * 000000014072FF2A: shr     edi, 5
 * 000000014072FF2D: sub     ecx, eax
 * 000000014072FF2F: mov     eax, r8d
 * 000000014072FF32: mul     edi
 * 000000014072FF34: add     ecx, 41h ; 'A'
 * 000000014072FF37: or      ecx, ebx
 * 000000014072FF39: shr     edx, 3
 * 000000014072FF3C: imul    eax, edx, 1Ah
 * 000000014072FF3F: mov     ebx, edi
 * 000000014072FF41: shr     edi, 5
 * 000000014072FF44: shl     ecx, 8
 * 000000014072FF47: sub     ebx, eax
 * 000000014072FF49: mov     eax, r8d
 * 000000014072FF4C: mul     edi
 * 000000014072FF4E: add     ebx, 61h ; 'a'
 * 000000014072FF51: shr     edx, 3
 * 000000014072FF54: or      ebx, ecx
 * 000000014072FF56: imul    eax, edx, 1Ah
 * 000000014072FF59: shl     ebx, 8
 * 000000014072FF5C: sub     edi, eax
 * 000000014072FF5E: add     edi, 41h ; 'A'
 * 000000014072FF61: or      edi, ebx
 * 000000014072FF63: jmp     short loc_14072FFB0
 * 000000014072FF65: mov     [rbp+1910h+var_18BC], 0B0869E85h
 * 000000014072FF6C: mov     edi, [rbp+1910h+var_18BC]
 * 000000014072FF6F: xor     edi, 9
 * 000000014072FF72: ror     edi, 21h
 * 000000014072FF75: jmp     short loc_14072FFB0
 * 000000014072FF77: mov     [rbp+1910h+var_17C4], 64664142h
 * 000000014072FF81: mov     edi, [rbp+1910h+var_17C4]
 * 000000014072FF87: ror     edi, 8
 * 000000014072FF8A: jmp     short loc_14072FFB0
 * 000000014072FF8C: mov     [rbp+1910h+var_18B4], 82C6A6D8h
 * 000000014072FF93: mov     edi, [rbp+1910h+var_18B4]
 * 000000014072FF96: rol     edi, 7
 * 000000014072FF99: jmp     short loc_14072FFB0
 * 000000014072FF9B: mov     [rbp+1910h+var_170C], 4E574672h
 * 000000014072FFA5: mov     edi, [rbp+1910h+var_170C]
 * 000000014072FFAB: xor     edi, edx
 * 000000014072FFAD: ror     edi, 18h
 * 000000014072FFB0: mov     edx, r12d
 * 000000014072FFB3: mov     r8d, edi; Tag
 * 000000014072FFB6: shl     rdx, 3; NumberOfBytes
 * 000000014072FFBA: mov     ecx, 200h; PoolType
 * 000000014072FFBF: call    ExAllocatePoolWithTag
 * 000000014072FFC4: mov     r12, rax
 * 000000014072FFC7: xor     eax, eax
 * 000000014072FFC9: test    r12, r12
 * 000000014072FFCC: jz      loc_140731C01
 * 000000014072FFD2: mov     rdx, [rbp+1910h+var_B50]
 * 000000014072FFD9: test    rdx, rdx
 * 000000014072FFDC: jz      short loc_14073002F
 * 000000014072FFDE: mov     ecx, [rbp+1910h+var_B44]
 * 000000014072FFE4: lea     r8d, [rax+1]
 * 000000014072FFE8: shl     ecx, 3
 * 000000014072FFEB: mov     rbx, r12
 * 000000014072FFEE: cmp     ecx, 8
 * 000000014072FFF1: jb      short loc_14073000F
 * 000000014072FFF3: mov     edi, ecx
 * 000000014072FFF5: shr     rdi, 3
 * 000000014072FFF9: mov     rax, [rdx]
 * 000000014072FFFC: add     ecx, 0FFFFFFF8h
 * 000000014072FFFF: mov     [rbx], rax
 * 0000000140730002: add     rdx, 8
 * 0000000140730006: add     rbx, 8
 * 000000014073000A: sub     rdi, r8
 * 000000014073000D: jnz     short loc_14072FFF9
 * 000000014073000F: test    ecx, ecx
 * 0000000140730011: jz      short loc_140730023
 * 0000000140730013: sub     rbx, rdx
 * 0000000140730016: mov     al, [rdx]
 * 0000000140730018: mov     [rdx+rbx], al
 * 000000014073001B: add     rdx, r8
 * 000000014073001E: add     ecx, 0FFFFFFFFh
 * 0000000140730021: jnz     short loc_140730016
 * 0000000140730023: mov     rcx, [rbp+1910h+var_B50]; P
 * 000000014073002A: call    ExFreePool
 * 000000014073002F: mov     rbx, [rbp+1910h+Timer]
 * 0000000140730033: mov     r8d, 1
 * 0000000140730039: mov     [rbp+1910h+var_B50], r12
 * 0000000140730040: mov     r12d, dword ptr [rsp+1A10h+var_19A8]
 * 0000000140730045: mov     [rbp+1910h+var_B48], r12d
 * 000000014073004C: mov     ecx, [rbp+1910h+var_B44]
 * 0000000140730052: mov     rax, [rbp+1910h+var_B50]
 * 0000000140730059: add     [rbp+1910h+var_B44], r8d
 * 0000000140730060: add     [rbp+1910h+var_B3C], 10h
 * 0000000140730067: mov     [rax+rcx*8], rbx
 * 000000014073006B: test    esi, esi
 * 000000014073006D: jnz     loc_14072FD6B
 * 0000000140730073: add     r15, 1000h
 * 000000014073007A: cmp     r15, [rbp+1910h+var_1940]
 * 000000014073007E: jb      loc_14072FCE3
 * 0000000140730084: mov     rbx, [rbp+1910h+var_9C8]
 * 000000014073008B: lea     rsi, [r14+750h]
 * 0000000140730092: mov     [rbp+1910h+var_B40], r13d
 * 0000000140730099: jmp     loc_14072FC3E
 * 000000014073009E: mov     eax, dword ptr [rbp+1910h+var_1980]
 * 00000001407300A1: mov     r10d, 1
 * 00000001407300A7: mov     r15, [rsp+1A10h+var_19C0]
 * 00000001407300AC: add     eax, r10d
 * 00000001407300AF: add     r15, r10
 * 00000001407300B2: mov     dword ptr [rbp+1910h+var_1980], eax
 * 00000001407300B5: mov     [rsp+1A10h+var_19C0], r15
 * 00000001407300BA: cmp     eax, 9
 * 00000001407300BD: jb      loc_14072FBB9
 * 00000001407300C3: xor     eax, eax
 * 00000001407300C5: test    rsi, rsi
 * 00000001407300C8: jz      short loc_1407300E6
 * 00000001407300CA: mov     eax, r13d
 * 00000001407300CD: lea     rcx, off_1402D2648
 * 00000001407300D4: add     rax, rax
 * 00000001407300D7: mov     dword ptr [rsi+rax*8+10h], 8
 * 00000001407300DF: mov     [rsi+rax*8+8], rcx
 * 00000001407300E4: xor     eax, eax
 * 00000001407300E6: inc     r13d
 * 00000001407300E9: add     [rbp+1910h+var_B3C], 8
 * 00000001407300F0: mov     dword ptr [rbp+1910h+var_1980], r13d
 * 00000001407300F4: mov     r15, [rsp+1A10h+var_19A0]
 * 00000001407300F9: mov     esi, eax
 * 00000001407300FB: mov     edi, eax
 * 00000001407300FD: xor     r13d, r13d
 * 0000000140730100: mov     rcx, r15
 * 0000000140730103: mov     eax, edi
 * 0000000140730105: test    edi, edi
 * 0000000140730107: jz      short loc_140730135
 * 0000000140730109: sub     eax, 1
 * 000000014073010C: jz      short loc_140730123
 * 000000014073010E: cmp     eax, 1
 * 0000000140730111: jz      short loc_14073011B
 * 0000000140730113: call    MiGetPteAddress
 * 0000000140730118: mov     rcx, rax
 * 000000014073011B: call    MiGetPteAddress
 * 0000000140730120: mov     rcx, rax
 * 0000000140730123: call    MiGetPteAddress
 * 0000000140730128: mov     rcx, rax
 * 000000014073012B: call    MiGetPteAddress
 * 0000000140730130: mov     rbx, rax
 * 0000000140730133: jmp     short loc_140730150
 * 0000000140730135: call    MiGetPteAddress
 * 000000014073013A: mov     rcx, rax
 * 000000014073013D: mov     rbx, rax
 * 0000000140730140: call    MiGetPteAddress
 * 0000000140730145: mov     cl, [rax]
 * 0000000140730147: shr     cl, 7
 * 000000014073014A: test    cl, cl
 * 000000014073014C: cmovnz  rbx, r13
 * 0000000140730150: mov     r10d, 1
 * 0000000140730156: test    rbx, rbx
 * 0000000140730159: jz      short loc_140730168
 * 000000014073015B: mov     eax, esi
 * 000000014073015D: add     esi, r10d
 * 0000000140730160: mov     [rbp+rax*8+1910h+var_9F8], rbx
 * 0000000140730168: add     edi, r10d
 * 000000014073016B: cmp     edi, 4
 * 000000014073016E: jb      short loc_140730100
 * 0000000140730170: mov     r14, [rsp+1A10h+var_19D0]
 * 0000000140730175: mov     r15d, dword ptr [rsp+1A10h+var_19A8]
 * 000000014073017A: mov     r13d, dword ptr [rbp+1910h+var_1980]
 * 000000014073017E: jmp     loc_140730481
 * 0000000140730183: dec     esi
 * 0000000140730185: xor     eax, eax
 * 0000000140730187: mov     edx, eax
 * 0000000140730189: mov     r12, [rbp+rsi*8+1910h+var_9F8]
 * 0000000140730191: cmp     [rbp+1910h+var_B44], eax
 * 0000000140730197: jbe     short loc_1407301B3
 * 0000000140730199: mov     rax, [rbp+1910h+var_B50]
 * 00000001407301A0: mov     ecx, edx
 * 00000001407301A2: cmp     r12, [rax+rcx*8]
 * 00000001407301A6: jz      short loc_1407301B3
 * 00000001407301A8: add     edx, r10d
 * 00000001407301AB: cmp     edx, [rbp+1910h+var_B44]
 * 00000001407301B1: jb      short loc_140730199
 * 00000001407301B3: mov     eax, [rbp+1910h+var_B44]
 * 00000001407301B9: cmp     edx, eax
 * 00000001407301BB: jnz     loc_140730481
 * 00000001407301C1: cmp     eax, r15d
 * 00000001407301C4: jnz     loc_140730462
 * 00000001407301CA: lea     r15d, ds:40h[r15*2]
 * 00000001407301D2: mov     dword ptr [rsp+1A10h+var_19A8], r15d
 * 00000001407301D7: rdtsc
 * 00000001407301D9: shl     rdx, 20h
 * 00000001407301DD: mov     rbx, 7010008004002001h
 * 00000001407301E7: or      rax, rdx
 * 00000001407301EA: mov     rcx, rax
 * 00000001407301ED: mov     rdx, rax
 * 00000001407301F0: ror     rcx, 3
 * 00000001407301F4: mov     rax, rbx
 * 00000001407301F7: xor     rdx, rcx
 * 00000001407301FA: mul     rdx
 * 00000001407301FD: mov     rcx, rdx
 * 0000000140730200: mov     [rbp+1910h+var_1190], rdx
 * 0000000140730207: xor     rcx, rax
 * 000000014073020A: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140730214: mul     rcx
 * 0000000140730217: shr     rdx, 1
 * 000000014073021A: imul    rax, rdx, 0Bh
 * 000000014073021E: sub     rcx, rax
 * 0000000140730221: mov     eax, 5
 * 0000000140730226: cmp     ecx, eax
 * 0000000140730228: ja      loc_1407302C3
 * 000000014073022E: jz      short loc_1407302AB
 * 0000000140730230: test    ecx, ecx
 * 0000000140730232: jz      short loc_140730299
 * 0000000140730234: sub     ecx, 1
 * 0000000140730237: jz      short loc_140730282
 * 0000000140730239: sub     ecx, 1
 * 000000014073023C: jz      short loc_140730270
 * 000000014073023E: cmp     ecx, 1
 * 0000000140730241: jz      short loc_140730255
 * 0000000140730243: mov     [rbp+1910h+var_18AC], 67076494h
 * 000000014073024A: mov     edi, [rbp+1910h+var_18AC]
 * 000000014073024D: rol     edi, 4
 * 0000000140730250: jmp     loc_1407303CA
 * 0000000140730255: mov     [rbp+1910h+var_17BC], 0A8223938h
 * 000000014073025F: mov     edi, [rbp+1910h+var_17BC]
 * 0000000140730265: xor     edi, 3
 * 0000000140730268: ror     edi, 0Fh
 * 000000014073026B: jmp     loc_1407303CA
 * 0000000140730270: mov     [rbp+1910h+var_18A4], 85B5910Dh
 * 0000000140730277: mov     edi, [rbp+1910h+var_18A4]
 * 000000014073027A: ror     edi, 2
 * 000000014073027D: jmp     loc_1407303CA
 * 0000000140730282: mov     [rbp+1910h+var_1744], 0B2AD31A1h
 * 000000014073028C: mov     edi, [rbp+1910h+var_1744]
 * 0000000140730292: rol     edi, 1
 * 0000000140730294: jmp     loc_1407303CA
 * 0000000140730299: mov     [rbp+1910h+var_189C], 0D098D0D8h
 * 00000001407302A0: mov     edi, [rbp+1910h+var_189C]
 * 00000001407302A3: ror     edi, 6
 * 00000001407302A6: jmp     loc_1407303CA
 * 00000001407302AB: mov     [rbp+1910h+var_17B4], 288C49EDh
 * 00000001407302B5: mov     edi, [rbp+1910h+var_17B4]
 * 00000001407302BB: ror     edi, 5
 * 00000001407302BE: jmp     loc_1407303CA
 * 00000001407302C3: mov     edx, 6
 * 00000001407302C8: sub     ecx, edx
 * 00000001407302CA: jz      loc_1407303B5
 * 00000001407302D0: sub     ecx, 1
 * 00000001407302D3: jz      loc_1407303A0
 * 00000001407302D9: sub     ecx, 1
 * 00000001407302DC: jz      loc_14073038B
 * 00000001407302E2: cmp     ecx, 1
 * 00000001407302E5: jz      loc_140730379
 * 00000001407302EB: rdtsc
 * 00000001407302ED: shl     rdx, 20h
 * 00000001407302F1: mov     r8d, 4EC4EC4Fh
 * 00000001407302F7: or      rax, rdx
 * 00000001407302FA: mov     rcx, rax
 * 00000001407302FD: mov     rdx, rax
 * 0000000140730300: mov     rax, rbx
 * 0000000140730303: ror     rcx, 3
 * 0000000140730307: xor     rdx, rcx
 * 000000014073030A: mul     rdx
 * 000000014073030D: mov     rdi, rax
 * 0000000140730310: mov     [rbp+1910h+var_1610], rdx
 * 0000000140730317: xor     edi, edx
 * 0000000140730319: mov     eax, r8d
 * 000000014073031C: mul     edi
 * 000000014073031E: mov     ebx, edi
 * 0000000140730320: mov     eax, r8d
 * 0000000140730323: shr     edx, 3
 * 0000000140730326: imul    ecx, edx, 1Ah
 * 0000000140730329: shr     edi, 5
 * 000000014073032C: mul     edi
 * 000000014073032E: sub     ebx, ecx
 * 0000000140730330: mov     ecx, edi
 * 0000000140730332: add     ebx, 61h ; 'a'
 * 0000000140730335: shr     edx, 3
 * 0000000140730338: imul    eax, edx, 1Ah
 * 000000014073033B: shl     ebx, 8
 * 000000014073033E: shr     edi, 5
 * 0000000140730341: sub     ecx, eax
 * 0000000140730343: mov     eax, r8d
 * 0000000140730346: mul     edi
 * 0000000140730348: add     ecx, 41h ; 'A'
 * 000000014073034B: or      ecx, ebx
 * 000000014073034D: shr     edx, 3
 * 0000000140730350: imul    eax, edx, 1Ah
 * 0000000140730353: mov     ebx, edi
 * 0000000140730355: shr     edi, 5
 * 0000000140730358: shl     ecx, 8
 * 000000014073035B: sub     ebx, eax
 * 000000014073035D: mov     eax, r8d
 * 0000000140730360: mul     edi
 * 0000000140730362: add     ebx, 61h ; 'a'
 * 0000000140730365: shr     edx, 3
 * 0000000140730368: or      ebx, ecx
 * 000000014073036A: imul    eax, edx, 1Ah
 * 000000014073036D: shl     ebx, 8
 * 0000000140730370: sub     edi, eax
 * 0000000140730372: add     edi, 41h ; 'A'
 * 0000000140730375: or      edi, ebx
 * 0000000140730377: jmp     short loc_1407303CA
 * 0000000140730379: mov     [rbp+1910h+var_1894], 0B0869E85h
 * 0000000140730380: mov     edi, [rbp+1910h+var_1894]
 * 0000000140730383: xor     edi, 9
 * 0000000140730386: ror     edi, 21h
 * 0000000140730389: jmp     short loc_1407303CA
 * 000000014073038B: mov     [rbp+1910h+var_16EC], 64664142h
 * 0000000140730395: mov     edi, [rbp+1910h+var_16EC]
 * 000000014073039B: ror     edi, 8
 * 000000014073039E: jmp     short loc_1407303CA
 * 00000001407303A0: mov     [rbp+1910h+var_188C], 82C6A6D8h
 * 00000001407303AA: mov     edi, [rbp+1910h+var_188C]
 * 00000001407303B0: rol     edi, 7
 * 00000001407303B3: jmp     short loc_1407303CA
 * 00000001407303B5: mov     [rbp+1910h+var_17AC], 4E574672h
 * 00000001407303BF: mov     edi, [rbp+1910h+var_17AC]
 * 00000001407303C5: xor     edi, edx
 * 00000001407303C7: ror     edi, 18h
 * 00000001407303CA: mov     edx, r15d
 * 00000001407303CD: mov     r8d, edi; Tag
 * 00000001407303D0: shl     rdx, 3; NumberOfBytes
 * 00000001407303D4: mov     ecx, 200h; PoolType
 * 00000001407303D9: call    ExAllocatePoolWithTag
 * 00000001407303DE: mov     r15, rax
 * 00000001407303E1: xor     eax, eax
 * 00000001407303E3: test    r15, r15
 * 00000001407303E6: jz      loc_140731C01
 * 00000001407303EC: mov     rdx, [rbp+1910h+var_B50]
 * 00000001407303F3: test    rdx, rdx
 * 00000001407303F6: jz      short loc_140730449
 * 00000001407303F8: mov     ecx, [rbp+1910h+var_B44]
 * 00000001407303FE: lea     r8d, [rax+1]
 * 0000000140730402: shl     ecx, 3
 * 0000000140730405: mov     rbx, r15
 * 0000000140730408: cmp     ecx, 8
 * 000000014073040B: jb      short loc_140730429
 * 000000014073040D: mov     edi, ecx
 * 000000014073040F: shr     rdi, 3
 * 0000000140730413: mov     rax, [rdx]
 * 0000000140730416: add     ecx, 0FFFFFFF8h
 * 0000000140730419: mov     [rbx], rax
 * 000000014073041C: add     rdx, 8
 * 0000000140730420: add     rbx, 8
 * 0000000140730424: sub     rdi, r8
 * 0000000140730427: jnz     short loc_140730413
 * 0000000140730429: test    ecx, ecx
 * 000000014073042B: jz      short loc_14073043D
 * 000000014073042D: sub     rbx, rdx
 * 0000000140730430: mov     al, [rdx]
 * 0000000140730432: mov     [rbx+rdx], al
 * 0000000140730435: add     rdx, r8
 * 0000000140730438: add     ecx, 0FFFFFFFFh
 * 000000014073043B: jnz     short loc_140730430
 * 000000014073043D: mov     rcx, [rbp+1910h+var_B50]; P
 * 0000000140730444: call    ExFreePool
 * 0000000140730449: mov     [rbp+1910h+var_B50], r15
 * 0000000140730450: mov     r10d, 1
 * 0000000140730456: mov     r15d, dword ptr [rsp+1A10h+var_19A8]
 * 000000014073045B: mov     [rbp+1910h+var_B48], r15d
 * 0000000140730462: mov     ecx, [rbp+1910h+var_B44]
 * 0000000140730468: mov     rax, [rbp+1910h+var_B50]
 * 000000014073046F: add     [rbp+1910h+var_B44], r10d
 * 0000000140730476: add     [rbp+1910h+var_B3C], 10h
 * 000000014073047D: mov     [rax+rcx*8], r12
 * 0000000140730481: test    esi, esi
 * 0000000140730483: jnz     loc_140730183
 * 0000000140730489: mov     rax, [rsp+1A10h+var_19A0]
 * 000000014073048E: lea     rcx, unk_1402D2650
 * 0000000140730495: add     rax, 1000h
 * 000000014073049B: mov     [rsp+1A10h+var_19A0], rax
 * 00000001407304A0: cmp     rax, rcx
 * 00000001407304A3: jnb     short loc_1407304AC
 * 00000001407304A5: xor     eax, eax
 * 00000001407304A7: jmp     loc_1407300F4
 * 00000001407304AC: lea     r11, [r14+750h]
 * 00000001407304B3: mov     [rbp+1910h+var_B40], r13d
 * 00000001407304BA: xor     eax, eax
 * 00000001407304BC: test    r11, r11
 * 00000001407304BF: jz      loc_140730575
 * 00000001407304C5: mov     eax, [rbp+1910h+var_B44]
 * 00000001407304CB: lea     rdx, [r11+8]
 * 00000001407304CF: mov     r8, r13
 * 00000001407304D2: mov     [r11+4], eax
 * 00000001407304D6: shl     r8, 4
 * 00000001407304DA: add     r8, rdx
 * 00000001407304DD: mov     rdi, r8
 * 00000001407304E0: test    eax, eax
 * 00000001407304E2: jz      short loc_140730507
 * 00000001407304E4: mov     rcx, [rbp+1910h+var_B50]
 * 00000001407304EB: mov     ebx, eax
 * 00000001407304ED: mov     rax, [rcx]
 * 00000001407304F0: lea     rcx, [rcx+8]
 * 00000001407304F4: mov     [rdi], rax
 * 00000001407304F7: mov     rax, [rax]
 * 00000001407304FA: mov     [rdi+8], rax
 * 00000001407304FE: add     rdi, 10h
 * 0000000140730502: sub     rbx, r10
 * 0000000140730505: jnz     short loc_1407304ED
 * 0000000140730507: cmp     rdx, r8
 * 000000014073050A: jnb     short loc_140730570
 * 000000014073050C: xor     r14d, r14d
 * 000000014073050F: mov     ebx, [rdx+8]
 * 0000000140730512: mov     r9, rdi
 * 0000000140730515: mov     rcx, [rdx]
 * 0000000140730518: cmp     ebx, 8
 * 000000014073051B: jb      short loc_140730547
 * 000000014073051D: mov     r10d, ebx
 * 0000000140730520: mov     r14d, 1
 * 0000000140730526: shr     r10, 3
 * 000000014073052A: mov     rax, [rcx]
 * 000000014073052D: add     ebx, 0FFFFFFF8h
 * 0000000140730530: mov     [r9], rax
 * 0000000140730533: add     rcx, 8
 * 0000000140730537: add     r9, 8
 * 000000014073053B: sub     r10, r14
 * 000000014073053E: jnz     short loc_14073052A
 * 0000000140730540: xor     r14d, r14d
 * 0000000140730543: lea     r10d, [r14+1]
 * 0000000140730547: test    ebx, ebx
 * 0000000140730549: jz      short loc_14073055C
 * 000000014073054B: sub     r9, rcx
 * 000000014073054E: mov     al, [rcx]
 * 0000000140730550: mov     [r9+rcx], al
 * 0000000140730554: add     rcx, r10
 * 0000000140730557: add     ebx, 0FFFFFFFFh
 * 000000014073055A: jnz     short loc_14073054E
 * 000000014073055C: mov     eax, [rdx+8]
 * 000000014073055F: add     rdx, 10h
 * 0000000140730563: add     rdi, rax
 * 0000000140730566: cmp     rdx, r8
 * 0000000140730569: jb      short loc_14073050F
 * 000000014073056B: mov     r14, [rsp+1A10h+var_19D0]
 * 0000000140730570: mov     [r11], r13d
 * 0000000140730573: xor     eax, eax
 * 0000000140730575: mov     r13d, dword ptr [rbp+1910h+var_1950]
 * 0000000140730579: mov     ebx, dword ptr [rbp+1910h+var_1958]
 * 000000014073057C: cli
 * 000000014073057D: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140730583: jnz     short loc_140730587
 * 0000000140730585: jmp     short loc_140730585
 * 0000000140730587: sti
 * 0000000140730588: mov     [r14+554h], r13d
 * 000000014073058F: mov     edx, 80h
 * 0000000140730594: mov     [r14+714h], ebx
 * 000000014073059B: mov     rax, [rbp+1910h+var_11B0]
 * 00000001407305A2: mov     [r14+538h], rax
 * 00000001407305A9: mov     rax, [rsp+78h]
 * 00000001407305AE: lea     rcx, [rdx+r14]
 * 00000001407305B2: mov     [r14+634h], eax
 * 00000001407305B9: lea     rax, CmpAppendDllSection
 * 00000001407305C0: movups  xmm0, xmmword ptr [rax]
 * 00000001407305C3: movups  xmmword ptr [r14], xmm0
 * 00000001407305C7: movups  xmm1, xmmword ptr [rax+10h]
 * 00000001407305CB: movups  xmmword ptr [r14+10h], xmm1
 * 00000001407305D0: movups  xmm0, xmmword ptr [rax+20h]
 * 00000001407305D4: movups  xmmword ptr [r14+20h], xmm0
 * 00000001407305D9: movups  xmm1, xmmword ptr [rax+30h]
 * 00000001407305DD: movups  xmmword ptr [r14+30h], xmm1
 * 00000001407305E2: movups  xmm0, xmmword ptr [rax+40h]
 * 00000001407305E6: movups  xmmword ptr [r14+40h], xmm0
 * 00000001407305EB: movups  xmm1, xmmword ptr [rax+50h]
 * 00000001407305EF: movups  xmmword ptr [r14+50h], xmm1
 * 00000001407305F4: movups  xmm0, xmmword ptr [rax+60h]
 * 00000001407305F8: movups  xmmword ptr [r14+60h], xmm0
 * 00000001407305FD: movups  xmm0, xmmword ptr [rax+70h]
 * 0000000140730601: add     rax, rdx
 * 0000000140730604: movups  xmmword ptr [rcx-10h], xmm0
 * 0000000140730608: movups  xmm1, xmmword ptr [rax]
 * 000000014073060B: movups  xmmword ptr [rcx], xmm1
 * 000000014073060E: movups  xmm0, xmmword ptr [rax+10h]
 * 0000000140730612: movups  xmmword ptr [rcx+10h], xmm0
 * 0000000140730616: movups  xmm1, xmmword ptr [rax+20h]
 * 000000014073061A: movups  xmmword ptr [rcx+20h], xmm1
 * 000000014073061E: movups  xmm0, xmmword ptr [rax+30h]
 * 0000000140730622: movups  xmmword ptr [rcx+30h], xmm0
 * 0000000140730626: mov     eax, [rax+40h]
 * 0000000140730629: mov     [rcx+40h], eax
 * 000000014073062C: mov     ecx, dword ptr [rbp+1910h+NtHeaders]
 * 000000014073062F: mov     rax, [rsp+1A10h+var_19B8]
 * 0000000140730634: add     eax, ecx
 * 0000000140730636: mov     [r14+560h], eax
 * 000000014073063D: mov     rax, [rbp+1910h+var_1968]
 * 0000000140730641: add     eax, ecx
 * 0000000140730643: mov     [r14+558h], eax
 * 000000014073064A: mov     rax, [rbp+1910h+var_1990]
 * 000000014073064E: add     eax, ecx
 * 0000000140730650: mov     [r14+55Ch], eax
 * 0000000140730657: cli
 * 0000000140730658: xor     eax, eax
 * 000000014073065A: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140730660: jnz     short loc_140730664
 * 0000000140730662: jmp     short loc_140730662
 * 0000000140730664: sti
 * 0000000140730665: lea     rax, ExAcquireResourceSharedLite
 * 000000014073066C: mov     [r14+0E0h], rax
 * 0000000140730673: lea     rax, ExAcquireResourceExclusiveLite
 * 000000014073067A: mov     [r14+0E8h], rax
 * 0000000140730681: lea     rax, ExAllocatePoolWithTag
 * 0000000140730688: mov     [r14+0F0h], rax
 * 000000014073068F: lea     rax, ExFreePool
 * 0000000140730696: mov     [r14+0F8h], rax
 * 000000014073069D: lea     rax, ExMapHandleToPointer
 * 00000001407306A4: mov     [r14+100h], rax
 * 00000001407306AB: lea     rax, ExQueueWorkItem
 * 00000001407306B2: mov     [r14+108h], rax
 * 00000001407306B9: lea     rax, ExReleaseResourceLite
 * 00000001407306C0: mov     [r14+110h], rax
 * 00000001407306C7: lea     rax, ExUnlockHandleTableEntry
 * 00000001407306CE: mov     [r14+118h], rax
 * 00000001407306D5: lea     rax, ExAcquirePushLockExclusiveEx
 * 00000001407306DC: mov     [r14+120h], rax
 * 00000001407306E3: lea     rax, ExReleasePushLockExclusiveEx
 * 00000001407306EA: mov     [r14+128h], rax
 * 00000001407306F1: lea     rax, ExAcquirePushLockSharedEx
 * 00000001407306F8: mov     [r14+130h], rax
 * 00000001407306FF: lea     rax, ExReleasePushLockSharedEx
 * 0000000140730706: mov     [r14+138h], rax
 * 000000014073070D: lea     rax, KeAcquireInStackQueuedSpinLockAtDpcLevel
 * 0000000140730714: mov     [r14+140h], rax
 * 000000014073071B: lea     rax, ExAcquireSpinLockSharedAtDpcLevel
 * 0000000140730722: mov     [r14+148h], rax
 * 0000000140730729: lea     rax, KeBugCheckEx
 * 0000000140730730: mov     [r14+150h], rax
 * 0000000140730737: lea     rax, KeDelayExecutionThread
 * 000000014073073E: mov     [r14+158h], rax
 * 0000000140730745: lea     rax, KeEnterCriticalRegionThread
 * 000000014073074C: mov     [r14+160h], rax
 * 0000000140730753: lea     rax, KeLeaveCriticalRegion
 * 000000014073075A: mov     [r14+168h], rax
 * 0000000140730761: lea     rax, KeEnterGuardedRegion
 * 0000000140730768: mov     [r14+170h], rax
 * 000000014073076F: lea     rax, KeLeaveGuardedRegion
 * 0000000140730776: mov     [r14+178h], rax
 * 000000014073077D: lea     rax, KeReleaseInStackQueuedSpinLockFromDpcLevel
 * 0000000140730784: mov     [r14+180h], rax
 * 000000014073078B: lea     rax, ExReleaseSpinLockSharedFromDpcLevel
 * 0000000140730792: mov     [r14+188h], rax
 * 0000000140730799: lea     rax, KeRevertToUserAffinityThread
 * 00000001407307A0: mov     [r14+190h], rax
 * 00000001407307A7: lea     rax, KeSetSystemGroupAffinityThread
 * 00000001407307AE: mov     [r14+1A0h], rax
 * 00000001407307B5: lea     rax, KeProcessorGroupAffinity
 * 00000001407307BC: mov     [r14+198h], rax
 * 00000001407307C3: lea     rax, KeSetCoalescableTimer
 * 00000001407307CA: mov     [r14+1A8h], rax
 * 00000001407307D1: lea     rax, RtlImageNtHeader
 * 00000001407307D8: mov     [r14+1C8h], rax
 * 00000001407307DF: lea     rax, RtlSectionTableFromVirtualAddress
 * 00000001407307E6: mov     [r14+1E0h], rax
 * 00000001407307ED: lea     rax, RtlLookupFunctionTable
 * 00000001407307F4: mov     [r14+1D0h], rax
 * 00000001407307FB: lea     rax, RtlPcToFileHeader
 * 0000000140730802: mov     [r14+1D8h], rax
 * 0000000140730809: lea     rax, ObfDereferenceObject
 * 0000000140730810: mov     [r14+1B0h], rax
 * 0000000140730817: lea     rax, ObReferenceObjectByName
 * 000000014073081E: mov     [r14+1B8h], rax
 * 0000000140730825: lea     rax, RtlImageDirectoryEntryToData
 * 000000014073082C: mov     [r14+1C0h], rax
 * 0000000140730833: lea     rax, DbgPrint
 * 000000014073083A: mov     [r14+1E8h], rax
 * 0000000140730841: lea     rax, MmAllocateIndependentPages
 * 0000000140730848: mov     [r14+1F0h], rax
 * 000000014073084F: lea     rax, MmFreeIndependentPages
 * 0000000140730856: mov     [r14+1F8h], rax
 * 000000014073085D: lea     rax, MmSetPageProtection
 * 0000000140730864: mov     [r14+200h], rax
 * 000000014073086B: lea     rax, RtlLookupFunctionEntry
 * 0000000140730872: mov     [r14+228h], rax
 * 0000000140730879: lea     rax, KeAcquireSpinLockRaiseToDpc
 * 0000000140730880: mov     [r14+230h], rax
 * 0000000140730887: lea     rax, KeReleaseSpinLock
 * 000000014073088E: mov     [r14+238h], rax
 * 0000000140730895: lea     rax, MmGetSessionById
 * 000000014073089C: mov     [r14+240h], rax
 * 00000001407308A3: lea     rax, MmGetNextSession
 * 00000001407308AA: mov     [r14+248h], rax
 * 00000001407308B1: lea     rax, MmQuitNextSession
 * 00000001407308B8: mov     [r14+250h], rax
 * 00000001407308BF: lea     rax, MmAttachSession
 * 00000001407308C6: mov     [r14+258h], rax
 * 00000001407308CD: lea     rax, MmDetachSession
 * 00000001407308D4: mov     [r14+260h], rax
 * 00000001407308DB: lea     rax, MmGetSessionIdEx
 * 00000001407308E2: mov     [r14+268h], rax
 * 00000001407308E9: lea     rax, MmIsSessionAddress
 * 00000001407308F0: mov     [r14+270h], rax
 * 00000001407308F7: lea     rax, KeInsertQueueApc
 * 00000001407308FE: mov     [r14+278h], rax
 * 0000000140730905: lea     rax, KeWaitForSingleObject
 * 000000014073090C: mov     [r14+280h], rax
 * 0000000140730913: lea     rax, ExReferenceCallBackBlock
 * 000000014073091A: mov     [r14+290h], rax
 * 0000000140730921: lea     rax, ExGetCallBackBlockRoutine
 * 0000000140730928: mov     [r14+298h], rax
 * 000000014073092F: lea     rax, ExDereferenceCallBackBlock
 * 0000000140730936: mov     [r14+2A0h], rax
 * 000000014073093D: lea     rax, sub_14014DF14
 * 0000000140730944: mov     [r14+2A8h], rax
 * 000000014073094B: lea     rax, PspEnumerateCallback
 * 0000000140730952: mov     [r14+2B0h], rax
 * 0000000140730959: lea     rax, CmpEnumerateCallback
 * 0000000140730960: mov     [r14+2B8h], rax
 * 0000000140730967: lea     rax, DbgEnumerateCallback
 * 000000014073096E: mov     [r14+2C0h], rax
 * 0000000140730975: lea     rax, ExpEnumerateCallback
 * 000000014073097C: mov     [r14+2C8h], rax
 * 0000000140730983: lea     rax, ExpGetNextCallback
 * 000000014073098A: mov     [r14+2D0h], rax
 * 0000000140730991: lea     rax, PopPoCoalescinCallback
 * 0000000140730998: mov     [r14+2D8h], rax
 * 000000014073099F: lea     rax, KiSchedulerApcTerminate
 * 00000001407309A6: mov     [r14+2E0h], rax
 * 00000001407309AD: lea     rax, KiSchedulerApc
 * 00000001407309B4: mov     [r14+2E8h], rax
 * 00000001407309BB: lea     rax, PopPoCoalescinCallback
 * 00000001407309C2: mov     [r14+2F0h], rax
 * 00000001407309C9: lea     rax, sub_14014ECE8
 * 00000001407309D0: mov     [r14+2F8h], rax
 * 00000001407309D7: lea     rax, MmAllocatePagesForMdlEx
 * 00000001407309DE: mov     [r14+300h], rax
 * 00000001407309E5: lea     rax, MmAllocateMappingAddress
 * 00000001407309EC: mov     [r14+308h], rax
 * 00000001407309F3: lea     rax, MmMapLockedPagesWithReservedMapping
 * 00000001407309FA: mov     [r14+310h], rax
 * 0000000140730A01: lea     rax, MmUnmapReservedMapping
 * 0000000140730A08: mov     [r14+318h], rax
 * 0000000140730A0F: lea     rax, sub_14014EFB8
 * 0000000140730A16: mov     [r14+320h], rax
 * 0000000140730A1D: lea     rax, sub_14014F020
 * 0000000140730A24: mov     [r14+328h], rax
 * 0000000140730A2B: lea     rax, MmAcquireLoadLock
 * 0000000140730A32: mov     [r14+330h], rax
 * 0000000140730A39: lea     rax, MmReleaseLoadLock
 * 0000000140730A40: mov     [r14+338h], rax
 * 0000000140730A47: lea     rax, KeEnumerateQueueApc
 * 0000000140730A4E: mov     [r14+340h], rax
 * 0000000140730A55: lea     rax, KeIsApcRunningThread
 * 0000000140730A5C: mov     [r14+348h], rax
 * 0000000140730A63: lea     rax, $$111
 * 0000000140730A6A: mov     [r14+350h], rax
 * 0000000140730A71: lea     rax, PsAcquireProcessExitSynchronization
 * 0000000140730A78: mov     [r14+358h], rax
 * 0000000140730A7F: lea     rax, PsReleaseProcessExitSynchronization
 * 0000000140730A86: mov     [r14+360h], rax
 * 0000000140730A8D: lea     rax, PsGetNextProcess
 * 0000000140730A94: mov     [r14+368h], rax
 * 0000000140730A9B: lea     rax, MmIsSessionLeaderProcess
 * 0000000140730AA2: mov     [r14+370h], rax
 * 0000000140730AA9: lea     rax, PsInvokeWin32Callout
 * 0000000140730AB0: mov     [r14+378h], rax
 * 0000000140730AB7: lea     rax, MmEnumerateAddressSpaceAndReferenceImages
 * 0000000140730ABE: mov     [r14+380h], rax
 * 0000000140730AC5: lea     rax, PsGetProcessProtection
 * 0000000140730ACC: mov     [r14+388h], rax
 * 0000000140730AD3: mov     rbx, [rbp+1910h+arg_18]
 * 0000000140730ADA: lea     rax, PsGetProcessSignatureLevel
 * 0000000140730AE1: mov     [r14+390h], rax
 * 0000000140730AE8: lea     rax, PsGetProcessSectionBaseAddress
 * 0000000140730AEF: mov     [r14+398h], rax
 * 0000000140730AF6: lea     rax, SeCompareSigningLevels
 * 0000000140730AFD: mov     [r14+3A0h], rax
 * 0000000140730B04: lea     rax, RtlIsMultiSessionSku
 * 0000000140730B0B: mov     [r14+3D0h], rax
 * 0000000140730B12: lea     rax, KeComputeSha256
 * 0000000140730B19: mov     [r14+3A8h], rax
 * 0000000140730B20: lea     rax, KeComputeParallelSha256
 * 0000000140730B27: mov     [r14+3B0h], rax
 * 0000000140730B2E: lea     rax, KeSetEvent
 * 0000000140730B35: mov     [r14+3B8h], rax
 * 0000000140730B3C: lea     rax, qword_1402D4870
 * 0000000140730B43: mov     [r14+668h], rax
 * 0000000140730B4A: test    rbx, rbx
 * 0000000140730B4D: jz      short loc_140730B5A
 * 0000000140730B4F: mov     rax, [rbx+8]
 * 0000000140730B53: mov     [r14+288h], rax
 * 0000000140730B5A: lea     rax, RtlpConvertFunctionEntry
 * 0000000140730B61: mov     [r14+3C0h], rax
 * 0000000140730B68: lea     rax, RtlpLookupPrimaryFunctionEntry
 * 0000000140730B6F: mov     [r14+3C8h], rax
 * 0000000140730B76: lea     rax, KiGetInterruptObjectAddress
 * 0000000140730B7D: mov     [r14+3D8h], rax
 * 0000000140730B84: cli
 * 0000000140730B85: xor     eax, eax
 * 0000000140730B87: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140730B8D: jnz     short loc_140730B91
 * 0000000140730B8F: jmp     short loc_140730B8F
 * 0000000140730B91: sti
 * 0000000140730B92: mov     [r14+664h], r13d
 * 0000000140730B99: cli
 * 0000000140730B9A: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140730BA0: jnz     short loc_140730BA4
 * 0000000140730BA2: jmp     short loc_140730BA2
 * 0000000140730BA4: sti
 * 0000000140730BA5: cli
 * 0000000140730BA6: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140730BAC: jnz     short loc_140730BB0
 * 0000000140730BAE: jmp     short loc_140730BAE
 * 0000000140730BB0: sti
 * 0000000140730BB1: rdtsc
 * 0000000140730BB3: shl     rdx, 20h
 * 0000000140730BB7: mov     rsi, 7010008004002001h
 * 0000000140730BC1: or      rax, rdx
 * 0000000140730BC4: mov     r15d, 4
 * 0000000140730BCA: mov     rcx, rax
 * 0000000140730BCD: mov     rdx, rax
 * 0000000140730BD0: ror     rcx, 3
 * 0000000140730BD4: mov     rax, rsi
 * 0000000140730BD7: xor     rdx, rcx
 * 0000000140730BDA: mul     rdx
 * 0000000140730BDD: mov     rcx, rdx
 * 0000000140730BE0: mov     [rbp+1910h+var_FE8], rdx
 * 0000000140730BE7: xor     rcx, rax
 * 0000000140730BEA: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140730BF4: mul     rcx
 * 0000000140730BF7: shr     rdx, 3
 * 0000000140730BFB: lea     rax, [rdx+rdx*4]
 * 0000000140730BFF: add     rax, rax
 * 0000000140730C02: sub     rcx, rax
 * 0000000140730C05: cmp     rcx, 3
 * 0000000140730C09: jnb     short loc_140730C68
 * 0000000140730C0B: mov     [r14+638h], r15d
 * 0000000140730C12: rdtsc
 * 0000000140730C14: shl     rdx, 20h
 * 0000000140730C18: or      rax, rdx
 * 0000000140730C1B: mov     rcx, rax
 * 0000000140730C1E: mov     rdx, rax
 * 0000000140730C21: ror     rcx, 3
 * 0000000140730C25: mov     rax, rsi
 * 0000000140730C28: xor     rdx, rcx
 * 0000000140730C2B: mul     rdx
 * 0000000140730C2E: mov     rcx, rdx
 * 0000000140730C31: mov     [rbp+1910h+var_1600], rdx
 * 0000000140730C38: xor     rcx, rax
 * 0000000140730C3B: mov     rax, 2492492492492493h
 * 0000000140730C45: mul     rcx
 * 0000000140730C48: mov     rax, rcx
 * 0000000140730C4B: sub     rax, rdx
 * 0000000140730C4E: shr     rax, 1
 * 0000000140730C51: add     rax, rdx
 * 0000000140730C54: shr     rax, 2
 * 0000000140730C58: imul    rax, 7
 * 0000000140730C5C: sub     rcx, rax
 * 0000000140730C5F: mov     [r14+638h], ecx
 * 0000000140730C66: jmp     short loc_140730C71
 * 0000000140730C68: xor     eax, eax
 * 0000000140730C6A: mov     [r14+638h], eax
 * 0000000140730C71: mov     rax, cs:qword_1407174D0
 * 0000000140730C78: cmp     rax, 1Fh
 * 0000000140730C7C: ja      loc_14074221B
 * 0000000140730C82: shl     eax, 0Ah
 * 0000000140730C85: xor     eax, [r14+690h]
 * 0000000140730C8C: and     eax, 7C00h
 * 0000000140730C91: xor     [r14+690h], eax
 * 0000000140730C98: xor     eax, eax
 * 0000000140730C9A: mov     [r14+570h], rax
 * 0000000140730CA1: mov     rax, cs:VfExcludeSections
 * 0000000140730CA8: mov     [r14+640h], rax
 * 0000000140730CAF: mov     rax, cs:off_1402D4110; "PAGESPEC"
 * 0000000140730CB6: mov     [r14+648h], rax
 * 0000000140730CBD: mov     rax, cs:off_1402D4118; "INIT"
 * 0000000140730CC4: mov     [r14+650h], rax
 * 0000000140730CCB: mov     rax, cs:off_1402D4120; "PAGEKD"
 * 0000000140730CD2: mov     [r14+658h], rax
 * 0000000140730CD9: rdtsc
 * 0000000140730CDB: shl     rdx, 20h
 * 0000000140730CDF: or      rax, rdx
 * 0000000140730CE2: mov     rcx, rax
 * 0000000140730CE5: mov     rdx, rax
 * 0000000140730CE8: ror     rcx, 3
 * 0000000140730CEC: mov     rax, rsi
 * 0000000140730CEF: xor     rdx, rcx
 * 0000000140730CF2: mul     rdx
 * 0000000140730CF5: mov     rcx, rdx
 * 0000000140730CF8: mov     [rbp+1910h+var_1180], rdx
 * 0000000140730CFF: xor     rcx, rax
 * 0000000140730D02: mov     rax, 624DD2F1A9FBE77h
 * 0000000140730D0C: mul     rcx
 * 0000000140730D0F: mov     rax, rcx
 * 0000000140730D12: sub     rax, rdx
 * 0000000140730D15: shr     rax, 1
 * 0000000140730D18: add     rax, rdx
 * 0000000140730D1B: shr     rax, 9
 * 0000000140730D1F: imul    rax, 3E8h
 * 0000000140730D26: sub     rcx, rax
 * 0000000140730D29: cmp     rcx, 3
 * 0000000140730D2D: jnb     short loc_140730D36
 * 0000000140730D2F: or      [r14+694h], r15d
 * 0000000140730D36: xor     ecx, ecx
 * 0000000140730D38: call    KeGetPrcb
 * 0000000140730D3D: mov     [r14+530h], rax
 * 0000000140730D44: cli
 * 0000000140730D45: xor     eax, eax
 * 0000000140730D47: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140730D4D: jnz     short loc_140730D51
 * 0000000140730D4F: jmp     short loc_140730D4F
 * 0000000140730D51: sti
 * 0000000140730D52: xor     edx, edx
 * 0000000140730D54: lea     rdi, KiIsrThunkShadow
 * 0000000140730D5B: mov     eax, 140000h
 * 0000000140730D60: div     [rbp+1910h+arg_10]
 * 0000000140730D66: mov     [r14+59Ch], eax
 * 0000000140730D6D: mov     rax, cs:PsInitialSystemProcess
 * 0000000140730D74: mov     [r14+3F8h], rax
 * 0000000140730D7B: mov     rax, cs:KiWaitAlways
 * 0000000140730D82: mov     [r14+400h], rax
 * 0000000140730D89: lea     rax, KiEntropyTimingRoutine
 * 0000000140730D90: mov     [r14+408h], rax
 * 0000000140730D97: lea     rax, KiProcessListHead
 * 0000000140730D9E: mov     [r14+410h], rax
 * 0000000140730DA5: lea     rax, KiProcessListLock
 * 0000000140730DAC: mov     [r14+418h], rax
 * 0000000140730DB3: mov     rax, cs:ObpTypeObjectType
 * 0000000140730DBA: mov     [r14+420h], rax
 * 0000000140730DC1: mov     rax, cs:IoDriverObjectType
 * 0000000140730DC8: mov     [r14+428h], rax
 * 0000000140730DCF: lea     rax, PsActiveProcessHead
 * 0000000140730DD6: mov     [r14+430h], rax
 * 0000000140730DDD: lea     rax, PsInvertedFunctionTable
 * 0000000140730DE4: mov     [r14+438h], rax
 * 0000000140730DEB: lea     rax, PsLoadedModuleList
 * 0000000140730DF2: mov     [r14+440h], rax
 * 0000000140730DF9: lea     rax, PsLoadedModuleResource
 * 0000000140730E00: mov     [r14+448h], rax
 * 0000000140730E07: lea     rax, PsLoadedModuleSpinLock
 * 0000000140730E0E: mov     [r14+450h], rax
 * 0000000140730E15: lea     rax, PspActiveProcessLock
 * 0000000140730E1C: mov     [r14+458h], rax
 * 0000000140730E23: lea     rax, PspCidTable
 * 0000000140730E2A: mov     [r14+460h], rax
 * 0000000140730E31: lea     rax, ExpUuidLock
 * 0000000140730E38: mov     [r14+468h], rax
 * 0000000140730E3F: lea     rax, AlpcpPortListLock
 * 0000000140730E46: mov     [r14+470h], rax
 * 0000000140730E4D: lea     rax, KeServiceDescriptorTable
 * 0000000140730E54: mov     [r14+478h], rax
 * 0000000140730E5B: lea     rax, KeServiceDescriptorTableShadow
 * 0000000140730E62: mov     [r14+480h], rax
 * 0000000140730E69: lea     rax, VfThunksExtended
 * 0000000140730E70: mov     [r14+488h], rax
 * 0000000140730E77: lea     rax, PsWin32CallBack
 * 0000000140730E7E: mov     [r14+490h], rax
 * 0000000140730E85: lea     rax, qword_1402D4850
 * 0000000140730E8C: mov     [r14+498h], rax
 * 0000000140730E93: lea     rax, KiTableInformation
 * 0000000140730E9A: mov     [r14+4A0h], rax
 * 0000000140730EA1: lea     rax, HandleTableListHead
 * 0000000140730EA8: mov     [r14+4A8h], rax
 * 0000000140730EAF: lea     rax, HandleTableListLock
 * 0000000140730EB6: mov     [r14+4B0h], rax
 * 0000000140730EBD: mov     rax, cs:ObpKernelHandleTable
 * 0000000140730EC4: mov     [r14+4B8h], rax
 * 0000000140730ECB: mov     rax, 0FFFFF78000000000h
 * 0000000140730ED5: mov     [r14+4C0h], rax
 * 0000000140730EDC: mov     rax, cs:KiWaitNever
 * 0000000140730EE3: mov     [r14+4C8h], rax
 * 0000000140730EEA: lea     rax, SeProtectedMapping
 * 0000000140730EF1: mov     [r14+4D0h], rax
 * 0000000140730EF8: lea     rax, CcPeriodicEvent
 * 0000000140730EFF: mov     [r14+4E0h], rax
 * 0000000140730F06: lea     rax, KiInterruptThunk
 * 0000000140730F0D: mov     [r14+4D8h], rax
 * 0000000140730F14: lea     rax, KxUnexpectedInterrupt0
 * 0000000140730F1B: mov     cl, cs:KiKvaShadow
 * 0000000140730F21: test    cl, cl
 * 0000000140730F23: cmovnz  rax, rdi
 * 0000000140730F27: mov     [r14+4E8h], rax
 * 0000000140730F2E: cli
 * 0000000140730F2F: xor     eax, eax
 * 0000000140730F31: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140730F37: jnz     short loc_140730F3B
 * 0000000140730F39: jmp     short loc_140730F39
 * 0000000140730F3B: sti
 * 0000000140730F3C: mov     [r14+578h], r13d
 * 0000000140730F43: rdtsc
 * 0000000140730F45: shl     rdx, 20h
 * 0000000140730F49: mov     r12d, 5
 * 0000000140730F4F: or      rax, rdx
 * 0000000140730F52: mov     rcx, rax
 * 0000000140730F55: mov     rdx, rax
 * 0000000140730F58: ror     rcx, 3
 * 0000000140730F5C: mov     rax, rsi
 * 0000000140730F5F: xor     rdx, rcx
 * 0000000140730F62: mul     rdx
 * 0000000140730F65: mov     rcx, rdx
 * 0000000140730F68: mov     [rbp+1910h+var_15F0], rdx
 * 0000000140730F6F: xor     rcx, rax
 * 0000000140730F72: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140730F7C: mul     rcx
 * 0000000140730F7F: shr     rdx, 1
 * 0000000140730F82: imul    rax, rdx, 0Bh
 * 0000000140730F86: sub     rcx, rax
 * 0000000140730F89: cmp     ecx, r12d
 * 0000000140730F8C: ja      loc_14073103D
 * 0000000140730F92: jz      loc_140731025
 * 0000000140730F98: test    ecx, ecx
 * 0000000140730F9A: jz      short loc_14073100D
 * 0000000140730F9C: sub     ecx, 1
 * 0000000140730F9F: jz      short loc_140730FF6
 * 0000000140730FA1: sub     ecx, 1
 * 0000000140730FA4: jz      short loc_140730FDE
 * 0000000140730FA6: cmp     ecx, 1
 * 0000000140730FA9: jz      short loc_140730FC3
 * 0000000140730FAB: mov     [rbp+1910h+var_173C], 67076494h
 * 0000000140730FB5: mov     edi, [rbp+1910h+var_173C]
 * 0000000140730FBB: rol     edi, 4
 * 0000000140730FBE: jmp     loc_14073114E
 * 0000000140730FC3: mov     [rbp+1910h+var_187C], 0A8223938h
 * 0000000140730FCD: mov     edi, [rbp+1910h+var_187C]
 * 0000000140730FD3: xor     edi, 3
 * 0000000140730FD6: ror     edi, 0Fh
 * 0000000140730FD9: jmp     loc_14073114E
 * 0000000140730FDE: mov     [rbp+1910h+var_17A4], 85B5910Dh
 * 0000000140730FE8: mov     edi, [rbp+1910h+var_17A4]
 * 0000000140730FEE: ror     edi, 2
 * 0000000140730FF1: jmp     loc_14073114E
 * 0000000140730FF6: mov     [rbp+1910h+var_1874], 0B2AD31A1h
 * 0000000140731000: mov     edi, [rbp+1910h+var_1874]
 * 0000000140731006: rol     edi, 1
 * 0000000140731008: jmp     loc_14073114E
 * 000000014073100D: mov     [rbp+1910h+var_1704], 0D098D0D8h
 * 0000000140731017: mov     edi, [rbp+1910h+var_1704]
 * 000000014073101D: ror     edi, 6
 * 0000000140731020: jmp     loc_14073114E
 * 0000000140731025: mov     [rbp+1910h+var_186C], 288C49EDh
 * 000000014073102F: mov     edi, [rbp+1910h+var_186C]
 * 0000000140731035: ror     edi, 5
 * 0000000140731038: jmp     loc_14073114E
 * 000000014073103D: sub     ecx, 6
 * 0000000140731040: jz      loc_140731138
 * 0000000140731046: sub     ecx, 1
 * 0000000140731049: jz      loc_140731123
 * 000000014073104F: sub     ecx, 1
 * 0000000140731052: jz      loc_14073110E
 * 0000000140731058: cmp     ecx, 1
 * 000000014073105B: jz      loc_1407310F6
 * 0000000140731061: rdtsc
 * 0000000140731063: shl     rdx, 20h
 * 0000000140731067: mov     r8d, 4EC4EC4Fh
 * 000000014073106D: or      rax, rdx
 * 0000000140731070: mov     rcx, rax
 * 0000000140731073: mov     rdx, rax
 * 0000000140731076: ror     rcx, 3
 * 000000014073107A: mov     rax, rsi
 * 000000014073107D: xor     rdx, rcx
 * 0000000140731080: mul     rdx
 * 0000000140731083: mov     rdi, rax
 * 0000000140731086: mov     [rbp+1910h+var_FD8], rdx
 * 000000014073108D: xor     edi, edx
 * 000000014073108F: mov     eax, r8d
 * 0000000140731092: mul     edi
 * 0000000140731094: mov     ebx, edi
 * 0000000140731096: mov     eax, r8d
 * 0000000140731099: shr     edx, 3
 * 000000014073109C: imul    ecx, edx, 1Ah
 * 000000014073109F: shr     edi, 5
 * 00000001407310A2: mul     edi
 * 00000001407310A4: sub     ebx, ecx
 * 00000001407310A6: mov     ecx, edi
 * 00000001407310A8: add     ebx, 61h ; 'a'
 * 00000001407310AB: shr     edx, 3
 * 00000001407310AE: shl     ebx, 8
 * 00000001407310B1: imul    eax, edx, 1Ah
 * 00000001407310B4: shr     edi, 5
 * 00000001407310B7: sub     ecx, eax
 * 00000001407310B9: mov     eax, r8d
 * 00000001407310BC: mul     edi
 * 00000001407310BE: add     ecx, 41h ; 'A'
 * 00000001407310C1: or      ecx, ebx
 * 00000001407310C3: shr     edx, 3
 * 00000001407310C6: mov     ebx, edi
 * 00000001407310C8: imul    eax, edx, 1Ah
 * 00000001407310CB: shr     edi, 5
 * 00000001407310CE: shl     ecx, 8
 * 00000001407310D1: sub     ebx, eax
 * 00000001407310D3: mov     eax, r8d
 * 00000001407310D6: mul     edi
 * 00000001407310D8: add     ebx, 61h ; 'a'
 * 00000001407310DB: or      ebx, ecx
 * 00000001407310DD: shr     edx, 3
 * 00000001407310E0: imul    eax, edx, 1Ah
 * 00000001407310E3: shl     ebx, 8
 * 00000001407310E6: sub     edi, eax
 * 00000001407310E8: add     edi, 41h ; 'A'
 * 00000001407310EB: or      edi, ebx
 * 00000001407310ED: mov     rbx, [rbp+1910h+arg_18]
 * 00000001407310F4: jmp     short loc_14073114E
 * 00000001407310F6: mov     [rbp+1910h+var_179C], 0B0869E85h
 * 0000000140731100: mov     edi, [rbp+1910h+var_179C]
 * 0000000140731106: xor     edi, 9
 * 0000000140731109: ror     edi, 21h
 * 000000014073110C: jmp     short loc_14073114E
 * 000000014073110E: mov     [rbp+1910h+var_1864], 64664142h
 * 0000000140731118: mov     edi, [rbp+1910h+var_1864]
 * 000000014073111E: ror     edi, 8
 * 0000000140731121: jmp     short loc_14073114E
 * 0000000140731123: mov     [rbp+1910h+var_1734], 82C6A6D8h
 * 000000014073112D: mov     edi, [rbp+1910h+var_1734]
 * 0000000140731133: rol     edi, 7
 * 0000000140731136: jmp     short loc_14073114E
 * 0000000140731138: mov     [rbp+1910h+var_185C], 4E574672h
 * 0000000140731142: mov     edi, [rbp+1910h+var_185C]
 * 0000000140731148: xor     edi, 6
 * 000000014073114B: ror     edi, 18h
 * 000000014073114E: mov     [r14+580h], edi
 * 0000000140731155: rdtsc
 * 0000000140731157: shl     rdx, 20h
 * 000000014073115B: mov     edi, 1
 * 0000000140731160: or      rax, rdx
 * 0000000140731163: mov     rcx, rax
 * 0000000140731166: mov     rdx, rax
 * 0000000140731169: ror     rcx, 3
 * 000000014073116D: mov     rax, rsi
 * 0000000140731170: xor     rdx, rcx
 * 0000000140731173: mul     rdx
 * 0000000140731176: mov     rcx, rdx
 * 0000000140731179: mov     [rbp+1910h+var_15E0], rdx
 * 0000000140731180: xor     rcx, rax
 * 0000000140731183: mov     rax, 410410410410411h
 * 000000014073118D: mul     rcx
 * 0000000140731190: mov     rax, rcx
 * 0000000140731193: sub     rax, rdx
 * 0000000140731196: shr     rax, 1
 * 0000000140731199: add     rax, rdx
 * 000000014073119C: shr     rax, 5
 * 00000001407311A0: imul    rax, 3Fh ; '?'
 * 00000001407311A4: sub     rcx, rax
 * 00000001407311A7: add     ecx, edi
 * 00000001407311A9: mov     [r14+584h], ecx
 * 00000001407311B0: rdtsc
 * 00000001407311B2: shl     rdx, 20h
 * 00000001407311B6: xor     r9d, r9d
 * 00000001407311B9: or      rax, rdx
 * 00000001407311BC: mov     rcx, rax
 * 00000001407311BF: mov     rdx, rax
 * 00000001407311C2: ror     rcx, 3
 * 00000001407311C6: mov     rax, rsi
 * 00000001407311C9: xor     rdx, rcx
 * 00000001407311CC: mov     ecx, 2BCh
 * 00000001407311D1: mul     rdx
 * 00000001407311D4: sub     ecx, r13d
 * 00000001407311D7: mov     [rbp+1910h+var_1170], rdx
 * 00000001407311DE: xor     rdx, rax
 * 00000001407311E1: mov     eax, 80000000h
 * 00000001407311E6: mov     [r14+588h], rdx
 * 00000001407311ED: and     rdx, rax
 * 00000001407311F0: mov     eax, 2D4h
 * 00000001407311F5: sub     eax, r13d
 * 00000001407311F8: test    rdx, rdx
 * 00000001407311FB: cmovnz  ecx, eax
 * 00000001407311FE: mov     eax, 0BC2A27DBh
 * 0000000140731203: add     ecx, [r14+664h]
 * 000000014073120A: xor     ecx, eax
 * 000000014073120C: mov     [r14+664h], ecx
 * 0000000140731213: rdtsc
 * 0000000140731215: shl     rdx, 20h
 * 0000000140731219: mov     r8, 0CCCCCCCCCCCCCCCDh
 * 0000000140731223: or      rax, rdx
 * 0000000140731226: mov     rcx, rax
 * 0000000140731229: mov     rdx, rax
 * 000000014073122C: ror     rcx, 3
 * 0000000140731230: mov     rax, rsi
 * 0000000140731233: xor     rdx, rcx
 * 0000000140731236: mul     rdx
 * 0000000140731239: mov     rcx, rdx
 * 000000014073123C: mov     [rbp+1910h+var_15D0], rdx
 * 0000000140731243: xor     rcx, rax
 * 0000000140731246: mov     rax, r8
 * 0000000140731249: mul     rcx
 * 000000014073124C: shr     rdx, 3
 * 0000000140731250: lea     rax, [rdx+rdx*4]
 * 0000000140731254: add     rax, rax
 * 0000000140731257: sub     rcx, rax
 * 000000014073125A: cmp     rcx, 3
 * 000000014073125E: jnb     short loc_140731268
 * 0000000140731260: or      dword ptr [r14+690h], 8
 * 0000000140731268: rdtsc
 * 000000014073126A: shl     rdx, 20h
 * 000000014073126E: or      rax, rdx
 * 0000000140731271: mov     rcx, rax
 * 0000000140731274: mov     rdx, rax
 * 0000000140731277: ror     rcx, 3
 * 000000014073127B: mov     rax, rsi
 * 000000014073127E: xor     rdx, rcx
 * 0000000140731281: mul     rdx
 * 0000000140731284: mov     rcx, rdx
 * 0000000140731287: mov     [rbp+1910h+var_FC8], rdx
 * 000000014073128E: xor     rcx, rax
 * 0000000140731291: mov     rax, r8
 * 0000000140731294: mul     rcx
 * 0000000140731297: shr     rdx, 3
 * 000000014073129B: lea     rax, [rdx+rdx*4]
 * 000000014073129F: add     rax, rax
 * 00000001407312A2: sub     rcx, rax
 * 00000001407312A5: cmp     rcx, 3
 * 00000001407312A9: jnb     short loc_1407312B4
 * 00000001407312AB: bts     dword ptr [r14+690h], 1Ah
 * 00000001407312B4: rdtsc
 * 00000001407312B6: shl     rdx, 20h
 * 00000001407312BA: or      rax, rdx
 * 00000001407312BD: mov     rcx, rax
 * 00000001407312C0: mov     rdx, rax
 * 00000001407312C3: ror     rcx, 3
 * 00000001407312C7: mov     rax, rsi
 * 00000001407312CA: xor     rdx, rcx
 * 00000001407312CD: mul     rdx
 * 00000001407312D0: mov     rcx, rdx
 * 00000001407312D3: mov     [rbp+1910h+var_15C0], rdx
 * 00000001407312DA: xor     rcx, rax
 * 00000001407312DD: mov     rax, r8
 * 00000001407312E0: mul     rcx
 * 00000001407312E3: shr     rdx, 3
 * 00000001407312E7: lea     rax, [rdx+rdx*4]
 * 00000001407312EB: add     rax, rax
 * 00000001407312EE: sub     rcx, rax
 * 00000001407312F1: cmp     rcx, rdi
 * 00000001407312F4: jnb     short loc_1407312FF
 * 00000001407312F6: bts     dword ptr [r14+690h], 0Fh
 * 00000001407312FF: rdtsc
 * 0000000140731301: shl     rdx, 20h
 * 0000000140731305: or      rax, rdx
 * 0000000140731308: mov     rcx, rax
 * 000000014073130B: mov     rdx, rax
 * 000000014073130E: ror     rcx, 3
 * 0000000140731312: mov     rax, rsi
 * 0000000140731315: xor     rdx, rcx
 * 0000000140731318: mul     rdx
 * 000000014073131B: mov     rcx, rdx
 * 000000014073131E: mov     [rbp+1910h+var_1160], rdx
 * 0000000140731325: xor     rcx, rax
 * 0000000140731328: mov     rax, r8
 * 000000014073132B: mul     rcx
 * 000000014073132E: shr     rdx, 3
 * 0000000140731332: lea     rax, [rdx+rdx*4]
 * 0000000140731336: add     rax, rax
 * 0000000140731339: sub     rcx, rax
 * 000000014073133C: cmp     rcx, 3
 * 0000000140731340: jnb     short loc_14073134B
 * 0000000140731342: bts     dword ptr [r14+690h], 16h
 * 000000014073134B: cli
 * 000000014073134C: xor     eax, eax
 * 000000014073134E: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140731354: jnz     short loc_140731358
 * 0000000140731356: jmp     short loc_140731356
 * 0000000140731358: sti
 * 0000000140731359: rdtsc
 * 000000014073135B: shl     rdx, 20h
 * 000000014073135F: or      rax, rdx
 * 0000000140731362: mov     rcx, rax
 * 0000000140731365: mov     rdx, rax
 * 0000000140731368: ror     rcx, 3
 * 000000014073136C: mov     rax, rsi
 * 000000014073136F: xor     rdx, rcx
 * 0000000140731372: mul     rdx
 * 0000000140731375: mov     rcx, rdx
 * 0000000140731378: mov     [rbp+1910h+var_15B0], rdx
 * 000000014073137F: xor     rcx, rax
 * 0000000140731382: mov     rax, r8
 * 0000000140731385: mul     rcx
 * 0000000140731388: shr     rdx, 3
 * 000000014073138C: lea     rax, [rdx+rdx*4]
 * 0000000140731390: add     rax, rax
 * 0000000140731393: sub     rcx, rax
 * 0000000140731396: cmp     rcx, rdi
 * 0000000140731399: jnb     short loc_1407313A4
 * 000000014073139B: bts     dword ptr [r14+690h], 1Bh
 * 00000001407313A4: rdtsc
 * 00000001407313A6: shl     rdx, 20h
 * 00000001407313AA: or      rax, rdx
 * 00000001407313AD: mov     rcx, rax
 * 00000001407313B0: mov     rdx, rax
 * 00000001407313B3: ror     rcx, 3
 * 00000001407313B7: mov     rax, rsi
 * 00000001407313BA: xor     rdx, rcx
 * 00000001407313BD: mul     rdx
 * 00000001407313C0: mov     rcx, rdx
 * 00000001407313C3: mov     [rbp+1910h+var_FB8], rdx
 * 00000001407313CA: xor     rcx, rax
 * 00000001407313CD: mov     rax, r8
 * 00000001407313D0: mul     rcx
 * 00000001407313D3: shr     rdx, 3
 * 00000001407313D7: lea     rax, [rdx+rdx*4]
 * 00000001407313DB: add     rax, rax
 * 00000001407313DE: sub     rcx, rax
 * 00000001407313E1: cmp     rcx, 3
 * 00000001407313E5: jnb     short loc_1407313F0
 * 00000001407313E7: bts     dword ptr [r14+690h], 17h
 * 00000001407313F0: mov     esi, [rbp+1910h+var_18DC]
 * 00000001407313F3: test    rbx, rbx
 * 00000001407313F6: mov     ebx, [rbp+1910h+arg_8]
 * 00000001407313FC: jz      short loc_140731459
 * 00000001407313FE: test    dil, sil
 * 0000000140731401: jz      short loc_140731459
 * 0000000140731403: cmp     ebx, r15d
 * 0000000140731406: jz      short loc_140731459
 * 0000000140731408: rdtsc
 * 000000014073140A: shl     rdx, 20h
 * 000000014073140E: or      rax, rdx
 * 0000000140731411: mov     rcx, rax
 * 0000000140731414: mov     rdx, rax
 * 0000000140731417: ror     rcx, 3
 * 000000014073141B: mov     rax, 7010008004002001h
 * 0000000140731425: xor     rdx, rcx
 * 0000000140731428: mul     rdx
 * 000000014073142B: mov     rcx, rdx
 * 000000014073142E: mov     [rbp+1910h+var_15A0], rdx
 * 0000000140731435: xor     rcx, rax
 * 0000000140731438: mov     rax, r8
 * 000000014073143B: mul     rcx
 * 000000014073143E: shr     rdx, 3
 * 0000000140731442: lea     rax, [rdx+rdx*4]
 * 0000000140731446: add     rax, rax
 * 0000000140731449: sub     rcx, rax
 * 000000014073144C: cmp     rcx, 6
 * 0000000140731450: jnb     short loc_140731459
 * 0000000140731452: or      [r14+694h], edi
 * 0000000140731459: call    qword ptr [r14+3D0h]
 * 0000000140731460: mov     r13d, 2
 * 0000000140731466: test    al, al
 * 0000000140731468: jz      short loc_140731471
 * 000000014073146A: or      [r14+694h], r13d
 * 0000000140731471: cmp     ebx, 7
 * 0000000140731474: jnz     short loc_140731496
 * 0000000140731476: mov     eax, [r14+690h]
 * 000000014073147D: btr     eax, 1Ah
 * 0000000140731481: bts     eax, 1Eh
 * 0000000140731485: mov     [r14+690h], eax
 * 000000014073148C: lea     eax, [rbx-6]
 * 000000014073148F: mov     [r14+660h], eax
 * 0000000140731496: call    KiSwInterruptPresent
 * 000000014073149B: test    eax, eax
 * 000000014073149D: js      short loc_1407314AB
 * 000000014073149F: mov     eax, 80000000h
 * 00000001407314A4: or      [r14+690h], eax
 * 00000001407314AB: call    KeComputeParallelSha256StateSize
 * 00000001407314B0: mov     [r14+748h], rax
 * 00000001407314B7: rdtsc
 * 00000001407314B9: shl     rdx, 20h
 * 00000001407314BD: mov     rdi, 7010008004002001h
 * 00000001407314C7: or      rax, rdx
 * 00000001407314CA: mov     rcx, rax
 * 00000001407314CD: mov     rdx, rax
 * 00000001407314D0: ror     rcx, 3
 * 00000001407314D4: mov     rax, rdi
 * 00000001407314D7: xor     rdx, rcx
 * 00000001407314DA: mul     rdx
 * 00000001407314DD: mov     rcx, rdx
 * 00000001407314E0: mov     [rbp+1910h+var_1150], rdx
 * 00000001407314E7: xor     rcx, rax
 * 00000001407314EA: mov     rax, 2E8BA2E8BA2E8BA3h
 * 00000001407314F4: mul     rcx
 * 00000001407314F7: shr     rdx, 1
 * 00000001407314FA: imul    rax, rdx, 0Bh
 * 00000001407314FE: sub     rcx, rax
 * 0000000140731501: cmp     ecx, r12d
 * 0000000140731504: ja      loc_1407315B5
 * 000000014073150A: jz      loc_14073159D
 * 0000000140731510: test    ecx, ecx
 * 0000000140731512: jz      short loc_140731585
 * 0000000140731514: sub     ecx, 1
 * 0000000140731517: jz      short loc_14073156E
 * 0000000140731519: sub     ecx, 1
 * 000000014073151C: jz      short loc_140731556
 * 000000014073151E: cmp     ecx, 1
 * 0000000140731521: jz      short loc_14073153B
 * 0000000140731523: mov     [rbp+1910h+var_1794], 67076494h
 * 000000014073152D: mov     edi, [rbp+1910h+var_1794]
 * 0000000140731533: rol     edi, 4
 * 0000000140731536: jmp     loc_1407316C5
 * 000000014073153B: mov     [rbp+1910h+var_1854], 0A8223938h
 * 0000000140731545: mov     edi, [rbp+1910h+var_1854]
 * 000000014073154B: xor     edi, 3
 * 000000014073154E: ror     edi, 0Fh
 * 0000000140731551: jmp     loc_1407316C5
 * 0000000140731556: mov     [rbp+1910h+var_16DC], 85B5910Dh
 * 0000000140731560: mov     edi, [rbp+1910h+var_16DC]
 * 0000000140731566: ror     edi, 2
 * 0000000140731569: jmp     loc_1407316C5
 * 000000014073156E: mov     [rbp+1910h+var_184C], 0B2AD31A1h
 * 0000000140731578: mov     edi, [rbp+1910h+var_184C]
 * 000000014073157E: rol     edi, 1
 * 0000000140731580: jmp     loc_1407316C5
 * 0000000140731585: mov     [rbp+1910h+var_178C], 0D098D0D8h
 * 000000014073158F: mov     edi, [rbp+1910h+var_178C]
 * 0000000140731595: ror     edi, 6
 * 0000000140731598: jmp     loc_1407316C5
 * 000000014073159D: mov     [rbp+1910h+var_1844], 288C49EDh
 * 00000001407315A7: mov     edi, [rbp+1910h+var_1844]
 * 00000001407315AD: ror     edi, 5
 * 00000001407315B0: jmp     loc_1407316C5
 * 00000001407315B5: sub     ecx, 6
 * 00000001407315B8: jz      loc_1407316AF
 * 00000001407315BE: sub     ecx, 1
 * 00000001407315C1: jz      loc_14073169A
 * 00000001407315C7: sub     ecx, 1
 * 00000001407315CA: jz      loc_140731685
 * 00000001407315D0: cmp     ecx, 1
 * 00000001407315D3: jz      loc_14073166D
 * 00000001407315D9: rdtsc
 * 00000001407315DB: shl     rdx, 20h
 * 00000001407315DF: mov     r8d, 4EC4EC4Fh
 * 00000001407315E5: or      rax, rdx
 * 00000001407315E8: mov     rcx, rax
 * 00000001407315EB: mov     rdx, rax
 * 00000001407315EE: mov     rax, rdi
 * 00000001407315F1: ror     rcx, 3
 * 00000001407315F5: xor     rdx, rcx
 * 00000001407315F8: mul     rdx
 * 00000001407315FB: mov     rdi, rax
 * 00000001407315FE: mov     [rbp+1910h+var_1590], rdx
 * 0000000140731605: xor     edi, edx
 * 0000000140731607: mov     eax, r8d
 * 000000014073160A: mul     edi
 * 000000014073160C: mov     ebx, edi
 * 000000014073160E: mov     eax, r8d
 * 0000000140731611: shr     edx, 3
 * 0000000140731614: imul    ecx, edx, 1Ah
 * 0000000140731617: shr     edi, 5
 * 000000014073161A: mul     edi
 * 000000014073161C: sub     ebx, ecx
 * 000000014073161E: mov     ecx, edi
 * 0000000140731620: add     ebx, 61h ; 'a'
 * 0000000140731623: shr     edx, 3
 * 0000000140731626: shl     ebx, 8
 * 0000000140731629: imul    eax, edx, 1Ah
 * 000000014073162C: shr     edi, 5
 * 000000014073162F: sub     ecx, eax
 * 0000000140731631: mov     eax, r8d
 * 0000000140731634: mul     edi
 * 0000000140731636: add     ecx, 41h ; 'A'
 * 0000000140731639: or      ecx, ebx
 * 000000014073163B: shr     edx, 3
 * 000000014073163E: imul    eax, edx, 1Ah
 * 0000000140731641: mov     ebx, edi
 * 0000000140731643: shr     edi, 5
 * 0000000140731646: shl     ecx, 8
 * 0000000140731649: sub     ebx, eax
 * 000000014073164B: mov     eax, r8d
 * 000000014073164E: mul     edi
 * 0000000140731650: add     ebx, 61h ; 'a'
 * 0000000140731653: or      ebx, ecx
 * 0000000140731655: shr     edx, 3
 * 0000000140731658: imul    eax, edx, 1Ah
 * 000000014073165B: shl     ebx, 8
 * 000000014073165E: sub     edi, eax
 * 0000000140731660: add     edi, 41h ; 'A'
 * 0000000140731663: or      edi, ebx
 * 0000000140731665: mov     ebx, [rbp+1910h+arg_8]
 * 000000014073166B: jmp     short loc_1407316C5
 * 000000014073166D: mov     [rbp+1910h+var_172C], 0B0869E85h
 * 0000000140731677: mov     edi, [rbp+1910h+var_172C]
 * 000000014073167D: xor     edi, 9
 * 0000000140731680: ror     edi, 21h
 * 0000000140731683: jmp     short loc_1407316C5
 * 0000000140731685: mov     [rbp+1910h+var_183C], 64664142h
 * 000000014073168F: mov     edi, [rbp+1910h+var_183C]
 * 0000000140731695: ror     edi, 8
 * 0000000140731698: jmp     short loc_1407316C5
 * 000000014073169A: mov     [rbp+1910h+var_1784], 82C6A6D8h
 * 00000001407316A4: mov     edi, [rbp+1910h+var_1784]
 * 00000001407316AA: rol     edi, 7
 * 00000001407316AD: jmp     short loc_1407316C5
 * 00000001407316AF: mov     [rbp+1910h+var_1834], 4E574672h
 * 00000001407316B9: mov     edi, [rbp+1910h+var_1834]
 * 00000001407316BF: xor     edi, 6
 * 00000001407316C2: ror     edi, 18h
 * 00000001407316C5: mov     rdx, [r14+748h]
 * 00000001407316CC: mov     r8d, edi
 * 00000001407316CF: mov     ecx, 200h
 * 00000001407316D4: call    qword ptr [r14+0F0h]
 * 00000001407316DB: xor     ecx, ecx
 * 00000001407316DD: mov     [r14+740h], rax
 * 00000001407316E4: test    rax, rax
 * 00000001407316E7: jz      loc_140731C01
 * 00000001407316ED: mov     [r14+5A8h], ebx
 * 00000001407316F4: cli
 * 00000001407316F5: xor     eax, eax
 * 00000001407316F7: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 00000001407316FD: jnz     short loc_140731701
 * 00000001407316FF: jmp     short loc_1407316FF
 * 0000000140731701: sti
 * 0000000140731702: mov     eax, 80000008h
 * 0000000140731707: cpuid
 * 0000000140731709: mov     [rbp+1910h+var_D40], eax
 * 000000014073170F: shr     eax, 8
 * 0000000140731712: mov     [rbp+1910h+var_D38], ecx
 * 0000000140731718: mov     ecx, 3Fh ; '?'
 * 000000014073171D: mov     [rbp+1910h+var_D3C], ebx
 * 0000000140731723: mov     [rbp+1910h+var_D34], edx
 * 0000000140731729: mov     [r14+630h], al
 * 0000000140731730: cmp     al, cl
 * 0000000140731732: ja      loc_140742245
 * 0000000140731738: mov     r12d, esi
 * 000000014073173B: lea     rdi, cs:140000000h
 * 0000000140731742: and     r12d, 1
 * 0000000140731746: mov     dword ptr [rsp+1A10h+var_19A8], r12d
 * 000000014073174B: jz      loc_1407318D8
 * 0000000140731751: lea     rbx, qword_1402D4880
 * 0000000140731758: mov     esi, ebx
 * 000000014073175A: and     esi, ecx
 * 000000014073175C: mov     rcx, rdi; BaseAddress
 * 000000014073175F: call    RtlImageNtHeader
 * 0000000140731764: lea     r8, [rbp+1910h+var_182C]
 * 000000014073176B: mov     rcx, rdi
 * 000000014073176E: lea     rdx, [rbp+1910h+var_B08]
 * 0000000140731775: call    RtlCaptureImageExceptionValues
 * 000000014073177A: mov     ecx, [rbp+1910h+var_182C]
 * 0000000140731780: lea     r14, cs:140000000h
 * 0000000140731787: mov     r8, [rbp+1910h+var_B08]
 * 000000014073178E: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140731798: mul     rcx
 * 000000014073179B: mov     [rbp+1910h+var_B00], rdi
 * 00000001407317A2: shr     rdx, 3
 * 00000001407317A6: mov     eax, edx
 * 00000001407317A8: xor     r12d, r12d
 * 00000001407317AB: mov     [rbp+1910h+var_182C], edx
 * 00000001407317B1: lea     rax, [rax+rax*2]
 * 00000001407317B5: lea     rcx, [r8+rax*4]
 * 00000001407317B9: lea     rax, [rbp+1910h+var_FA8]
 * 00000001407317C0: mov     [rbp+1910h+var_AF8], rcx
 * 00000001407317C7: mov     [rbp+1910h+var_AF0], rax
 * 00000001407317CE: test    r8, r8
 * 00000001407317D1: jz      loc_140731881
 * 00000001407317D7: cmp     r8, rcx
 * 00000001407317DA: jz      loc_140731881
 * 00000001407317E0: mov     rdx, rdi
 * 00000001407317E3: mov     rcx, r8
 * 00000001407317E6: call    RtlpConvertFunctionEntry
 * 00000001407317EB: mov     rcx, [rbp+1910h+var_AF0]
 * 00000001407317F2: mov     [rcx], rax
 * 00000001407317F5: mov     rax, [rbp+1910h+var_FA8]
 * 00000001407317FC: mov     r8, [rbp+1910h+var_B08]
 * 0000000140731803: add     r8, 0Ch
 * 0000000140731807: mov     [rbp+1910h+var_B08], r8
 * 000000014073180E: mov     ecx, [rax]
 * 0000000140731810: mov     edx, [rax+4]
 * 0000000140731813: sub     edx, ecx
 * 0000000140731815: lea     rdi, [r14+rcx]
 * 0000000140731819: mov     ecx, edx
 * 000000014073181B: add     rcx, rdi
 * 000000014073181E: mov     rax, rdi
 * 0000000140731821: cmp     rdi, rcx
 * 0000000140731824: jnb     short loc_140731832
 * 0000000140731826: prefetchnta byte ptr [rax]
 * 0000000140731829: add     rax, 40h ; '@'
 * 000000014073182D: cmp     rax, rcx
 * 0000000140731830: jb      short loc_140731826
 * 0000000140731832: mov     r9d, 1
 * 0000000140731838: cmp     edx, 8
 * 000000014073183B: jb      short loc_140731857
 * 000000014073183D: mov     eax, edx
 * 000000014073183F: shr     rax, 3
 * 0000000140731843: xor     rbx, [rdi]
 * 0000000140731846: mov     ecx, esi
 * 0000000140731848: rol     rbx, cl
 * 000000014073184B: add     rdi, 8
 * 000000014073184F: add     edx, 0FFFFFFF8h
 * 0000000140731852: sub     rax, r9
 * 0000000140731855: jnz     short loc_140731843
 * 0000000140731857: test    edx, edx
 * 0000000140731859: jz      short loc_14073186E
 * 000000014073185B: movzx   eax, byte ptr [rdi]
 * 000000014073185E: mov     ecx, esi
 * 0000000140731860: xor     rbx, rax
 * 0000000140731863: add     rdi, r9
 * 0000000140731866: rol     rbx, cl
 * 0000000140731869: add     edx, 0FFFFFFFFh
 * 000000014073186C: jnz     short loc_14073185B
 * 000000014073186E: mov     rcx, [rbp+1910h+var_AF8]
 * 0000000140731875: mov     rdi, [rbp+1910h+var_B00]
 * 000000014073187C: jmp     loc_1407317CE
 * 0000000140731881: cmp     rbx, cs:qword_1402D4880
 * 0000000140731888: mov     eax, r12d
 * 000000014073188B: mov     r14, [rsp+1A10h+var_19D0]
 * 0000000140731890: mov     ecx, 40000h
 * 0000000140731895: mov     r12d, dword ptr [rsp+1A10h+var_19A8]
 * 000000014073189A: setnz   al
 * 000000014073189D: shl     eax, 12h
 * 00000001407318A0: xor     eax, [r14+690h]
 * 00000001407318A7: and     eax, ecx
 * 00000001407318A9: xor     eax, [r14+690h]
 * 00000001407318B0: mov     [r14+690h], eax
 * 00000001407318B7: test    ecx, eax
 * 00000001407318B9: jz      short loc_1407318D8
 * 00000001407318BB: xor     eax, eax
 * 00000001407318BD: cmp     [r14+608h], eax
 * 00000001407318C4: jnz     short loc_1407318D8
 * 00000001407318C6: mov     rax, [r14+498h]
 * 00000001407318CD: xor     rbx, cs:qword_1402D4880
 * 00000001407318D4: mov     [rax+18h], rbx
 * 00000001407318D8: rdtsc
 * 00000001407318DA: shl     rdx, 20h
 * 00000001407318DE: mov     rsi, 7010008004002001h
 * 00000001407318E8: or      rax, rdx
 * 00000001407318EB: mov     rdi, 0CCCCCCCCCCCCCCCDh
 * 00000001407318F5: mov     rcx, rax
 * 00000001407318F8: mov     rdx, rax
 * 00000001407318FB: ror     rcx, 3
 * 00000001407318FF: mov     rax, rsi
 * 0000000140731902: xor     rdx, rcx
 * 0000000140731905: mul     rdx
 * 0000000140731908: mov     rcx, rdx
 * 000000014073190B: mov     [rbp+1910h+var_1580], rdx
 * 0000000140731912: xor     rcx, rax
 * 0000000140731915: mov     rax, rdi
 * 0000000140731918: mul     rcx
 * 000000014073191B: shr     rdx, 3
 * 000000014073191F: lea     rax, [rdx+rdx*4]
 * 0000000140731923: add     rax, rax
 * 0000000140731926: sub     rcx, rax
 * 0000000140731929: cmp     rcx, r13
 * 000000014073192C: jnb     loc_140731B1E
 * 0000000140731932: cmp     [rbp+1910h+arg_8], 3
 * 0000000140731939: jz      loc_140731B1E
 * 000000014073193F: mov     r8d, [r14+580h]
 * 0000000140731946: rdtsc
 * 0000000140731948: shl     rdx, 20h
 * 000000014073194C: or      rax, rdx
 * 000000014073194F: mov     rcx, rax
 * 0000000140731952: mov     rdx, rax
 * 0000000140731955: ror     rcx, 3
 * 0000000140731959: mov     rax, rsi
 * 000000014073195C: xor     rdx, rcx
 * 000000014073195F: mul     rdx
 * 0000000140731962: mov     rdi, rax
 * 0000000140731965: mov     [rbp+1910h+var_1140], rdx
 * 000000014073196C: xor     edi, edx
 * 000000014073196E: and     edi, 7FFh
 * 0000000140731974: rdtsc
 * 0000000140731976: shl     rdx, 20h
 * 000000014073197A: or      rax, rdx
 * 000000014073197D: mov     rcx, rax
 * 0000000140731980: mov     rdx, rax
 * 0000000140731983: ror     rcx, 3
 * 0000000140731987: mov     rax, rsi
 * 000000014073198A: xor     rdx, rcx
 * 000000014073198D: lea     ecx, [rdi+1]
 * 0000000140731990: mul     rdx
 * 0000000140731993: mov     [rbp+1910h+var_1570], rdx
 * 000000014073199A: xor     rax, rdx
 * 000000014073199D: xor     edx, edx
 * 000000014073199F: div     rcx
 * 00000001407319A2: mov     ecx, 200h
 * 00000001407319A7: mov     rsi, rdx
 * 00000001407319AA: lea     edx, [rdi+28h]
 * 00000001407319AD: call    qword ptr [r14+0F0h]
 * 00000001407319B4: mov     r10, rax
 * 00000001407319B7: xor     eax, eax
 * 00000001407319B9: lea     r11d, [rax+1]
 * 00000001407319BD: test    r10, r10
 * 00000001407319C0: jnz     short loc_1407319D1
 * 00000001407319C2: add     [r14+710h], r11d
 * 00000001407319C9: mov     r9d, eax
 * 00000001407319CC: jmp     loc_140731AFA
 * 00000001407319D1: mov     r8d, esi
 * 00000001407319D4: mov     rbx, r10
 * 00000001407319D7: cmp     esi, 8
 * 00000001407319DA: jb      short loc_140731A28
 * 00000001407319DC: mov     r9d, esi
 * 00000001407319DF: mov     r12, 7010008004002001h
 * 00000001407319E9: shr     r9, 3
 * 00000001407319ED: rdtsc
 * 00000001407319EF: shl     rdx, 20h
 * 00000001407319F3: add     r8d, 0FFFFFFF8h
 * 00000001407319F7: or      rax, rdx
 * 00000001407319FA: mov     rcx, rax
 * 00000001407319FD: mov     rdx, rax
 * 0000000140731A00: ror     rcx, 3
 * 0000000140731A04: mov     rax, r12
 * 0000000140731A07: xor     rdx, rcx
 * 0000000140731A0A: mul     rdx
 * 0000000140731A0D: mov     [rbp+1910h+var_F98], rdx
 * 0000000140731A14: xor     rdx, rax
 * 0000000140731A17: mov     [rbx], rdx
 * 0000000140731A1A: add     rbx, 8
 * 0000000140731A1E: sub     r9, r11
 * 0000000140731A21: jnz     short loc_1407319ED
 * 0000000140731A23: mov     r12d, dword ptr [rsp+1A10h+var_19A8]
 * 0000000140731A28: test    r8d, r8d
 * 0000000140731A2B: jz      short loc_140731A69
 * 0000000140731A2D: rdtsc
 * 0000000140731A2F: shl     rdx, 20h
 * 0000000140731A33: or      rax, rdx
 * 0000000140731A36: mov     rcx, rax
 * 0000000140731A39: mov     rdx, rax
 * 0000000140731A3C: ror     rcx, 3
 * 0000000140731A40: mov     rax, 7010008004002001h
 * 0000000140731A4A: xor     rdx, rcx
 * 0000000140731A4D: mul     rdx
 * 0000000140731A50: mov     [rbp+1910h+var_1560], rdx
 * 0000000140731A57: xor     rdx, rax
 * 0000000140731A5A: mov     [rbx], dl
 * 0000000140731A5C: add     rbx, r11
 * 0000000140731A5F: shr     rdx, 8
 * 0000000140731A63: add     r8d, 0FFFFFFFFh
 * 0000000140731A67: jnz     short loc_140731A5A
 * 0000000140731A69: mov     r9d, esi
 * 0000000140731A6C: sub     edi, esi
 * 0000000140731A6E: add     r9, r10
 * 0000000140731A71: mov     r10, 7010008004002001h
 * 0000000140731A7B: lea     rbx, [r9+28h]
 * 0000000140731A7F: cmp     edi, 8
 * 0000000140731A82: jb      short loc_140731AC0
 * 0000000140731A84: mov     r8d, edi
 * 0000000140731A87: shr     r8, 3
 * 0000000140731A8B: rdtsc
 * 0000000140731A8D: shl     rdx, 20h
 * 0000000140731A91: add     edi, 0FFFFFFF8h
 * 0000000140731A94: or      rax, rdx
 * 0000000140731A97: mov     rcx, rax
 * 0000000140731A9A: mov     rdx, rax
 * 0000000140731A9D: ror     rcx, 3
 * 0000000140731AA1: mov     rax, r10
 * 0000000140731AA4: xor     rdx, rcx
 * 0000000140731AA7: mul     rdx
 * 0000000140731AAA: mov     [rbp+1910h+var_1130], rdx
 * 0000000140731AB1: xor     rdx, rax
 * 0000000140731AB4: mov     [rbx], rdx
 * 0000000140731AB7: add     rbx, 8
 * 0000000140731ABB: sub     r8, r11
 * 0000000140731ABE: jnz     short loc_140731A8B
 * 0000000140731AC0: test    edi, edi
 * 0000000140731AC2: jz      short loc_140731AF8
 * 0000000140731AC4: rdtsc
 * 0000000140731AC6: shl     rdx, 20h
 * 0000000140731ACA: or      rax, rdx
 * 0000000140731ACD: mov     rcx, rax
 * 0000000140731AD0: mov     rdx, rax
 * 0000000140731AD3: ror     rcx, 3
 * 0000000140731AD7: mov     rax, r10
 * 0000000140731ADA: xor     rdx, rcx
 * 0000000140731ADD: mul     rdx
 * 0000000140731AE0: mov     [rbp+1910h+var_1550], rdx
 * 0000000140731AE7: xor     rdx, rax
 * 0000000140731AEA: mov     [rbx], dl
 * 0000000140731AEC: add     rbx, r11
 * 0000000140731AEF: shr     rdx, 8
 * 0000000140731AF3: add     edi, 0FFFFFFFFh
 * 0000000140731AF6: jnz     short loc_140731AEA
 * 0000000140731AF8: xor     eax, eax
 * 0000000140731AFA: mov     [r14+700h], r9
 * 0000000140731B01: test    r9, r9
 * 0000000140731B04: jz      loc_140731C01
 * 0000000140731B0A: mov     rsi, 7010008004002001h
 * 0000000140731B14: mov     rdi, 0CCCCCCCCCCCCCCCDh
 * 0000000140731B1E: rdtsc
 * 0000000140731B20: shl     rdx, 20h
 * 0000000140731B24: or      rax, rdx
 * 0000000140731B27: mov     rcx, rax
 * 0000000140731B2A: mov     rdx, rax
 * 0000000140731B2D: ror     rcx, 3
 * 0000000140731B31: mov     rax, rsi
 * 0000000140731B34: xor     rdx, rcx
 * 0000000140731B37: mul     rdx
 * 0000000140731B3A: mov     rcx, rdx
 * 0000000140731B3D: mov     [rbp+1910h+var_F88], rdx
 * 0000000140731B44: xor     rcx, rax
 * 0000000140731B47: mov     rax, rdi
 * 0000000140731B4A: mul     rcx
 * 0000000140731B4D: shr     rdx, 3
 * 0000000140731B51: lea     rax, [rdx+rdx*4]
 * 0000000140731B55: add     rax, rax
 * 0000000140731B58: sub     rcx, rax
 * 0000000140731B5B: cmp     rcx, r13
 * 0000000140731B5E: jnb     loc_140731E65
 * 0000000140731B64: test    dword ptr [r14+690h], 40000000h
 * 0000000140731B6F: jnz     loc_140731E65
 * 0000000140731B75: mov     r8d, [r14+580h]
 * 0000000140731B7C: rdtsc
 * 0000000140731B7E: shl     rdx, 20h
 * 0000000140731B82: or      rax, rdx
 * 0000000140731B85: mov     rcx, rax
 * 0000000140731B88: mov     rdx, rax
 * 0000000140731B8B: ror     rcx, 3
 * 0000000140731B8F: mov     rax, rsi
 * 0000000140731B92: xor     rdx, rcx
 * 0000000140731B95: mul     rdx
 * 0000000140731B98: mov     rdi, rax
 * 0000000140731B9B: mov     [rbp+1910h+var_1540], rdx
 * 0000000140731BA2: xor     edi, edx
 * 0000000140731BA4: and     edi, 7FFh
 * 0000000140731BAA: rdtsc
 * 0000000140731BAC: shl     rdx, 20h
 * 0000000140731BB0: or      rax, rdx
 * 0000000140731BB3: mov     rcx, rax
 * 0000000140731BB6: mov     rdx, rax
 * 0000000140731BB9: ror     rcx, 3
 * 0000000140731BBD: mov     rax, rsi
 * 0000000140731BC0: xor     rdx, rcx
 * 0000000140731BC3: lea     ecx, [rdi+1]
 * 0000000140731BC6: mul     rdx
 * 0000000140731BC9: mov     [rbp+1910h+var_1120], rdx
 * 0000000140731BD0: xor     rax, rdx
 * 0000000140731BD3: xor     edx, edx
 * 0000000140731BD5: div     rcx
 * 0000000140731BD8: mov     ecx, 200h
 * 0000000140731BDD: mov     rsi, rdx
 * 0000000140731BE0: lea     edx, [rdi+202h]
 * 0000000140731BE6: call    qword ptr [r14+0F0h]
 * 0000000140731BED: mov     r10, rax
 * 0000000140731BF0: test    rax, rax
 * 0000000140731BF3: jnz     short loc_140731C17
 * 0000000140731BF5: mov     eax, 1
 * 0000000140731BFA: add     [r14+710h], eax
 * 0000000140731C01: xor     al, al
 * 0000000140731C03: add     rsp, 19D8h
 * 0000000140731C0A: pop     r15
 * 0000000140731C0C: pop     r14
 * 0000000140731C0E: pop     r13
 * 0000000140731C10: pop     r12
 * 0000000140731C12: pop     rdi
 * 0000000140731C13: pop     rsi
 * 0000000140731C14: pop     rbx
 * 0000000140731C15: pop     rbp
 * 0000000140731C16: retn
 * 0000000140731C17: mov     r8d, esi
 * 0000000140731C1A: mov     rbx, r10
 * 0000000140731C1D: mov     r11d, 1
 * 0000000140731C23: cmp     esi, 8
 * 0000000140731C26: jb      short loc_140731C74
 * 0000000140731C28: mov     r9d, esi
 * 0000000140731C2B: mov     r12, 7010008004002001h
 * 0000000140731C35: shr     r9, 3
 * 0000000140731C39: rdtsc
 * 0000000140731C3B: shl     rdx, 20h
 * 0000000140731C3F: add     r8d, 0FFFFFFF8h
 * 0000000140731C43: or      rax, rdx
 * 0000000140731C46: mov     rcx, rax
 * 0000000140731C49: mov     rdx, rax
 * 0000000140731C4C: ror     rcx, 3
 * 0000000140731C50: mov     rax, r12
 * 0000000140731C53: xor     rdx, rcx
 * 0000000140731C56: mul     rdx
 * 0000000140731C59: mov     [rbp+1910h+var_1530], rdx
 * 0000000140731C60: xor     rdx, rax
 * 0000000140731C63: mov     [rbx], rdx
 * 0000000140731C66: add     rbx, 8
 * 0000000140731C6A: sub     r9, r11
 * 0000000140731C6D: jnz     short loc_140731C39
 * 0000000140731C6F: mov     r12d, dword ptr [rsp+1A10h+var_19A8]
 * 0000000140731C74: test    r8d, r8d
 * 0000000140731C77: jz      short loc_140731CB5
 * 0000000140731C79: rdtsc
 * 0000000140731C7B: shl     rdx, 20h
 * 0000000140731C7F: or      rax, rdx
 * 0000000140731C82: mov     rcx, rax
 * 0000000140731C85: mov     rdx, rax
 * 0000000140731C88: ror     rcx, 3
 * 0000000140731C8C: mov     rax, 7010008004002001h
 * 0000000140731C96: xor     rdx, rcx
 * 0000000140731C99: mul     rdx
 * 0000000140731C9C: mov     [rbp+1910h+var_F78], rdx
 * 0000000140731CA3: xor     rdx, rax
 * 0000000140731CA6: mov     [rbx], dl
 * 0000000140731CA8: add     rbx, r11
 * 0000000140731CAB: shr     rdx, 8
 * 0000000140731CAF: add     r8d, 0FFFFFFFFh
 * 0000000140731CB3: jnz     short loc_140731CA6
 * 0000000140731CB5: mov     r8d, esi
 * 0000000140731CB8: sub     edi, esi
 * 0000000140731CBA: add     r8, r10
 * 0000000140731CBD: mov     rsi, 7010008004002001h
 * 0000000140731CC7: lea     rbx, [r8+202h]
 * 0000000140731CCE: cmp     edi, 8
 * 0000000140731CD1: jb      short loc_140731D0F
 * 0000000140731CD3: mov     r9d, edi
 * 0000000140731CD6: shr     r9, 3
 * 0000000140731CDA: rdtsc
 * 0000000140731CDC: shl     rdx, 20h
 * 0000000140731CE0: add     edi, 0FFFFFFF8h
 * 0000000140731CE3: or      rax, rdx
 * 0000000140731CE6: mov     rcx, rax
 * 0000000140731CE9: mov     rdx, rax
 * 0000000140731CEC: ror     rcx, 3
 * 0000000140731CF0: mov     rax, rsi
 * 0000000140731CF3: xor     rdx, rcx
 * 0000000140731CF6: mul     rdx
 * 0000000140731CF9: mov     [rbp+1910h+var_1520], rdx
 * 0000000140731D00: xor     rdx, rax
 * 0000000140731D03: mov     [rbx], rdx
 * 0000000140731D06: add     rbx, 8
 * 0000000140731D0A: sub     r9, r11
 * 0000000140731D0D: jnz     short loc_140731CDA
 * 0000000140731D0F: xor     eax, eax
 * 0000000140731D11: test    edi, edi
 * 0000000140731D13: jz      short loc_140731D4B
 * 0000000140731D15: rdtsc
 * 0000000140731D17: shl     rdx, 20h
 * 0000000140731D1B: or      rax, rdx
 * 0000000140731D1E: mov     rcx, rax
 * 0000000140731D21: mov     rdx, rax
 * 0000000140731D24: ror     rcx, 3
 * 0000000140731D28: mov     rax, rsi
 * 0000000140731D2B: xor     rdx, rcx
 * 0000000140731D2E: mul     rdx
 * 0000000140731D31: mov     [rbp+1910h+var_1110], rdx
 * 0000000140731D38: xor     rdx, rax
 * 0000000140731D3B: mov     [rbx], dl
 * 0000000140731D3D: add     rbx, r11
 * 0000000140731D40: shr     rdx, 8
 * 0000000140731D44: add     edi, 0FFFFFFFFh
 * 0000000140731D47: jnz     short loc_140731D3B
 * 0000000140731D49: xor     eax, eax
 * 0000000140731D4B: test    r8, r8
 * 0000000140731D4E: jz      loc_140731C01
 * 0000000140731D54: rdtsc
 * 0000000140731D56: shl     rdx, 20h
 * 0000000140731D5A: lea     rbx, [r8+2]
 * 0000000140731D5E: or      rax, rdx
 * 0000000140731D61: mov     rcx, rax
 * 0000000140731D64: mov     rdx, rax
 * 0000000140731D67: ror     rcx, 3
 * 0000000140731D6B: mov     rax, rsi
 * 0000000140731D6E: xor     rdx, rcx
 * 0000000140731D71: mov     rcx, rbx
 * 0000000140731D74: mul     rdx
 * 0000000140731D77: mov     [rbp+1910h+var_1510], rdx
 * 0000000140731D7E: xor     rdx, rax
 * 0000000140731D81: mov     [rbp+1910h+var_F68], rdx
 * 0000000140731D88: xor     eax, eax
 * 0000000140731D8A: mov     edx, 100h
 * 0000000140731D8F: mov     [rcx], al
 * 0000000140731D91: add     eax, r11d
 * 0000000140731D94: add     rcx, r11
 * 0000000140731D97: cmp     eax, edx
 * 0000000140731D99: jb      short loc_140731D8F
 * 0000000140731D9B: xor     eax, eax
 * 0000000140731D9D: mov     r10, rdx
 * 0000000140731DA0: mov     r9b, al
 * 0000000140731DA3: lea     rdi, [rax-2]
 * 0000000140731DA7: sub     rdi, r8
 * 0000000140731DAA: mov     dl, [rbx]
 * 0000000140731DAC: lea     rax, [rdi+rbx]
 * 0000000140731DB0: and     eax, 7
 * 0000000140731DB3: mov     cl, byte ptr [rbp+rax+1910h+var_F68]
 * 0000000140731DBA: add     cl, dl
 * 0000000140731DBC: add     r9b, cl
 * 0000000140731DBF: movzx   ecx, r9b
 * 0000000140731DC3: mov     al, [rcx+r8+2]
 * 0000000140731DC8: mov     [rcx+r8+2], dl
 * 0000000140731DCD: mov     [rbx], al
 * 0000000140731DCF: add     rbx, r11
 * 0000000140731DD2: sub     r10, r11
 * 0000000140731DD5: jnz     short loc_140731DAA
 * 0000000140731DD7: mov     edi, 100h
 * 0000000140731DDC: lea     rbx, [r8+102h]
 * 0000000140731DE3: lea     r9d, [r10+20h]
 * 0000000140731DE7: rdtsc
 * 0000000140731DE9: shl     rdx, 20h
 * 0000000140731DED: add     edi, 0FFFFFFF8h
 * 0000000140731DF0: or      rax, rdx
 * 0000000140731DF3: mov     rcx, rax
 * 0000000140731DF6: mov     rdx, rax
 * 0000000140731DF9: ror     rcx, 3
 * 0000000140731DFD: mov     rax, rsi
 * 0000000140731E00: xor     rdx, rcx
 * 0000000140731E03: mul     rdx
 * 0000000140731E06: mov     [rbp+1910h+var_1500], rdx
 * 0000000140731E0D: xor     rdx, rax
 * 0000000140731E10: mov     [rbx], rdx
 * 0000000140731E13: add     rbx, 8
 * 0000000140731E17: sub     r9, r11
 * 0000000140731E1A: jnz     short loc_140731DE7
 * 0000000140731E1C: test    edi, edi
 * 0000000140731E1E: jz      short loc_140731E54
 * 0000000140731E20: rdtsc
 * 0000000140731E22: shl     rdx, 20h
 * 0000000140731E26: or      rax, rdx
 * 0000000140731E29: mov     rcx, rax
 * 0000000140731E2C: mov     rdx, rax
 * 0000000140731E2F: ror     rcx, 3
 * 0000000140731E33: mov     rax, rsi
 * 0000000140731E36: xor     rdx, rcx
 * 0000000140731E39: mul     rdx
 * 0000000140731E3C: mov     [rbp+1910h+var_1100], rdx
 * 0000000140731E43: xor     rdx, rax
 * 0000000140731E46: mov     [rbx], dl
 * 0000000140731E48: add     rbx, r11
 * 0000000140731E4B: shr     rdx, 8
 * 0000000140731E4F: add     edi, 0FFFFFFFFh
 * 0000000140731E52: jnz     short loc_140731E46
 * 0000000140731E54: mov     [r14+728h], r8
 * 0000000140731E5B: mov     rdi, 0CCCCCCCCCCCCCCCDh
 * 0000000140731E65: cli
 * 0000000140731E66: xor     eax, eax
 * 0000000140731E68: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140731E6E: jnz     short loc_140731E72
 * 0000000140731E70: jmp     short loc_140731E70
 * 0000000140731E72: sti
 * 0000000140731E73: rdtsc
 * 0000000140731E75: shl     rdx, 20h
 * 0000000140731E79: or      rax, rdx
 * 0000000140731E7C: mov     rcx, rax
 * 0000000140731E7F: mov     rdx, rax
 * 0000000140731E82: ror     rcx, 3
 * 0000000140731E86: mov     rax, rsi
 * 0000000140731E89: xor     rdx, rcx
 * 0000000140731E8C: mul     rdx
 * 0000000140731E8F: mov     rbx, rax
 * 0000000140731E92: mov     [rbp+1910h+var_14F0], rdx
 * 0000000140731E99: xor     rbx, rdx
 * 0000000140731E9C: mov     rax, rdi
 * 0000000140731E9F: mul     rbx
 * 0000000140731EA2: shr     rdx, 3
 * 0000000140731EA6: lea     rcx, [rdx+rdx*4]
 * 0000000140731EAA: add     rcx, rcx
 * 0000000140731EAD: sub     rbx, rcx
 * 0000000140731EB0: cmp     rbx, 5
 * 0000000140731EB4: jnb     short loc_140731EBF
 * 0000000140731EB6: bts     dword ptr [r14+690h], 18h
 * 0000000140731EBF: cli
 * 0000000140731EC0: xor     eax, eax
 * 0000000140731EC2: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140731EC8: jnz     short loc_140731ECC
 * 0000000140731ECA: jmp     short loc_140731ECA
 * 0000000140731ECC: sti
 * 0000000140731ECD: mov     r8d, [r14+580h]
 * 0000000140731ED4: rdtsc
 * 0000000140731ED6: shl     rdx, 20h
 * 0000000140731EDA: or      rax, rdx
 * 0000000140731EDD: mov     rcx, rax
 * 0000000140731EE0: mov     rdx, rax
 * 0000000140731EE3: ror     rcx, 3
 * 0000000140731EE7: mov     rax, rsi
 * 0000000140731EEA: xor     rdx, rcx
 * 0000000140731EED: mul     rdx
 * 0000000140731EF0: mov     rdi, rax
 * 0000000140731EF3: mov     [rbp+1910h+var_F58], rdx
 * 0000000140731EFA: xor     edi, edx
 * 0000000140731EFC: and     edi, 7FFh
 * 0000000140731F02: rdtsc
 * 0000000140731F04: shl     rdx, 20h
 * 0000000140731F08: or      rax, rdx
 * 0000000140731F0B: mov     rcx, rax
 * 0000000140731F0E: mov     rdx, rax
 * 0000000140731F11: ror     rcx, 3
 * 0000000140731F15: mov     rax, rsi
 * 0000000140731F18: xor     rdx, rcx
 * 0000000140731F1B: lea     ecx, [rdi+1]
 * 0000000140731F1E: mul     rdx
 * 0000000140731F21: mov     [rbp+1910h+var_14E0], rdx
 * 0000000140731F28: xor     rax, rdx
 * 0000000140731F2B: xor     edx, edx
 * 0000000140731F2D: div     rcx
 * 0000000140731F30: mov     ecx, 200h
 * 0000000140731F35: mov     rsi, rdx
 * 0000000140731F38: lea     edx, [rdi+88h]
 * 0000000140731F3E: call    qword ptr [r14+0F0h]
 * 0000000140731F45: mov     r10, rax
 * 0000000140731F48: test    rax, rax
 * 0000000140731F4B: jz      loc_140731BF5
 * 0000000140731F51: mov     r8d, esi
 * 0000000140731F54: mov     rbx, rax
 * 0000000140731F57: mov     r11d, 1
 * 0000000140731F5D: cmp     esi, 8
 * 0000000140731F60: jb      short loc_140731FAE
 * 0000000140731F62: mov     r9d, esi
 * 0000000140731F65: mov     r12, 7010008004002001h
 * 0000000140731F6F: shr     r9, 3
 * 0000000140731F73: rdtsc
 * 0000000140731F75: shl     rdx, 20h
 * 0000000140731F79: add     r8d, 0FFFFFFF8h
 * 0000000140731F7D: or      rax, rdx
 * 0000000140731F80: mov     rcx, rax
 * 0000000140731F83: mov     rdx, rax
 * 0000000140731F86: ror     rcx, 3
 * 0000000140731F8A: mov     rax, r12
 * 0000000140731F8D: xor     rdx, rcx
 * 0000000140731F90: mul     rdx
 * 0000000140731F93: mov     [rbp+1910h+var_10F0], rdx
 * 0000000140731F9A: xor     rdx, rax
 * 0000000140731F9D: mov     [rbx], rdx
 * 0000000140731FA0: add     rbx, 8
 * 0000000140731FA4: sub     r9, r11
 * 0000000140731FA7: jnz     short loc_140731F73
 * 0000000140731FA9: mov     r12d, dword ptr [rsp+1A10h+var_19A8]
 * 0000000140731FAE: mov     r9, 7010008004002001h
 * 0000000140731FB8: test    r8d, r8d
 * 0000000140731FBB: jz      short loc_140731FF2
 * 0000000140731FBD: rdtsc
 * 0000000140731FBF: shl     rdx, 20h
 * 0000000140731FC3: or      rax, rdx
 * 0000000140731FC6: mov     rcx, rax
 * 0000000140731FC9: mov     rdx, rax
 * 0000000140731FCC: ror     rcx, 3
 * 0000000140731FD0: mov     rax, r9
 * 0000000140731FD3: xor     rdx, rcx
 * 0000000140731FD6: mul     rdx
 * 0000000140731FD9: mov     [rbp+1910h+var_14D0], rdx
 * 0000000140731FE0: xor     rdx, rax
 * 0000000140731FE3: mov     [rbx], dl
 * 0000000140731FE5: add     rbx, r11
 * 0000000140731FE8: shr     rdx, 8
 * 0000000140731FEC: add     r8d, 0FFFFFFFFh
 * 0000000140731FF0: jnz     short loc_140731FE3
 * 0000000140731FF2: mov     r8d, esi
 * 0000000140731FF5: sub     edi, esi
 * 0000000140731FF7: add     r8, r10
 * 0000000140731FFA: mov     [rbp+1910h+Timer], r8
 * 0000000140731FFE: lea     rbx, [r8+88h]
 * 0000000140732005: cmp     edi, 8
 * 0000000140732008: jb      short loc_14073204A
 * 000000014073200A: mov     r8d, edi
 * 000000014073200D: shr     r8, 3
 * 0000000140732011: rdtsc
 * 0000000140732013: shl     rdx, 20h
 * 0000000140732017: add     edi, 0FFFFFFF8h
 * 000000014073201A: or      rax, rdx
 * 000000014073201D: mov     rcx, rax
 * 0000000140732020: mov     rdx, rax
 * 0000000140732023: ror     rcx, 3
 * 0000000140732027: mov     rax, r9
 * 000000014073202A: xor     rdx, rcx
 * 000000014073202D: mul     rdx
 * 0000000140732030: mov     [rbp+1910h+var_F48], rdx
 * 0000000140732037: xor     rdx, rax
 * 000000014073203A: mov     [rbx], rdx
 * 000000014073203D: add     rbx, 8
 * 0000000140732041: sub     r8, r11
 * 0000000140732044: jnz     short loc_140732011
 * 0000000140732046: mov     r8, [rbp+1910h+Timer]
 * 000000014073204A: xor     eax, eax
 * 000000014073204C: test    edi, edi
 * 000000014073204E: jz      short loc_140732086
 * 0000000140732050: rdtsc
 * 0000000140732052: shl     rdx, 20h
 * 0000000140732056: or      rax, rdx
 * 0000000140732059: mov     rcx, rax
 * 000000014073205C: mov     rdx, rax
 * 000000014073205F: ror     rcx, 3
 * 0000000140732063: mov     rax, r9
 * 0000000140732066: xor     rdx, rcx
 * 0000000140732069: mul     rdx
 * 000000014073206C: mov     [rbp+1910h+var_14C0], rdx
 * 0000000140732073: xor     rdx, rax
 * 0000000140732076: mov     [rbx], dl
 * 0000000140732078: add     rbx, r11
 * 000000014073207B: shr     rdx, 8
 * 000000014073207F: add     edi, 0FFFFFFFFh
 * 0000000140732082: jnz     short loc_140732076
 * 0000000140732084: xor     eax, eax
 * 0000000140732086: test    r8, r8
 * 0000000140732089: jz      loc_140731C01
 * 000000014073208F: mov     [r14+4F8h], r8
 * 0000000140732096: cli
 * 0000000140732097: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014073209D: jnz     short loc_1407320A1
 * 000000014073209F: jmp     short loc_14073209F
 * 00000001407320A1: sti
 * 00000001407320A2: rdtsc
 * 00000001407320A4: shl     rdx, 20h
 * 00000001407320A8: or      rax, rdx
 * 00000001407320AB: mov     rcx, rax
 * 00000001407320AE: mov     rdx, rax
 * 00000001407320B1: ror     rcx, 3
 * 00000001407320B5: mov     rax, r9
 * 00000001407320B8: xor     rdx, rcx
 * 00000001407320BB: mul     rdx
 * 00000001407320BE: mov     rcx, rdx
 * 00000001407320C1: mov     [rbp+1910h+var_10E0], rdx
 * 00000001407320C8: xor     rcx, rax
 * 00000001407320CB: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 00000001407320D5: mul     rcx
 * 00000001407320D8: shr     rdx, 3
 * 00000001407320DC: lea     rax, [rdx+rdx*4]
 * 00000001407320E0: add     rax, rax
 * 00000001407320E3: sub     rcx, rax
 * 00000001407320E6: cmp     rcx, 3
 * 00000001407320EA: jnb     loc_1407322AD
 * 00000001407320F0: mov     r8d, [r14+580h]
 * 00000001407320F7: rdtsc
 * 00000001407320F9: shl     rdx, 20h
 * 00000001407320FD: or      rax, rdx
 * 0000000140732100: mov     rcx, rax
 * 0000000140732103: mov     rdx, rax
 * 0000000140732106: ror     rcx, 3
 * 000000014073210A: mov     rax, r9
 * 000000014073210D: xor     rdx, rcx
 * 0000000140732110: mul     rdx
 * 0000000140732113: mov     rdi, rax
 * 0000000140732116: mov     [rbp+1910h+var_14B0], rdx
 * 000000014073211D: xor     edi, edx
 * 000000014073211F: and     edi, 7FFh
 * 0000000140732125: rdtsc
 * 0000000140732127: shl     rdx, 20h
 * 000000014073212B: or      rax, rdx
 * 000000014073212E: mov     rcx, rax
 * 0000000140732131: mov     rdx, rax
 * 0000000140732134: ror     rcx, 3
 * 0000000140732138: mov     rax, r9
 * 000000014073213B: xor     rdx, rcx
 * 000000014073213E: lea     ecx, [rdi+1]
 * 0000000140732141: mul     rdx
 * 0000000140732144: mov     [rbp+1910h+var_F38], rdx
 * 000000014073214B: xor     rax, rdx
 * 000000014073214E: xor     edx, edx
 * 0000000140732150: div     rcx
 * 0000000140732153: mov     ecx, 200h
 * 0000000140732158: mov     rsi, rdx
 * 000000014073215B: lea     edx, [rdi+48h]
 * 000000014073215E: call    qword ptr [r14+0F0h]
 * 0000000140732165: mov     r10, rax
 * 0000000140732168: test    rax, rax
 * 000000014073216B: jz      loc_140731BF5
 * 0000000140732171: mov     r8d, esi
 * 0000000140732174: mov     rbx, rax
 * 0000000140732177: mov     r11d, 1
 * 000000014073217D: cmp     esi, 8
 * 0000000140732180: jb      short loc_1407321CE
 * 0000000140732182: mov     r9d, esi
 * 0000000140732185: mov     r12, 7010008004002001h
 * 000000014073218F: shr     r9, 3
 * 0000000140732193: rdtsc
 * 0000000140732195: shl     rdx, 20h
 * 0000000140732199: add     r8d, 0FFFFFFF8h
 * 000000014073219D: or      rax, rdx
 * 00000001407321A0: mov     rcx, rax
 * 00000001407321A3: mov     rdx, rax
 * 00000001407321A6: ror     rcx, 3
 * 00000001407321AA: mov     rax, r12
 * 00000001407321AD: xor     rdx, rcx
 * 00000001407321B0: mul     rdx
 * 00000001407321B3: mov     [rbp+1910h+var_14A0], rdx
 * 00000001407321BA: xor     rdx, rax
 * 00000001407321BD: mov     [rbx], rdx
 * 00000001407321C0: add     rbx, 8
 * 00000001407321C4: sub     r9, r11
 * 00000001407321C7: jnz     short loc_140732193
 * 00000001407321C9: mov     r12d, dword ptr [rsp+1A10h+var_19A8]
 * 00000001407321CE: mov     r9, 7010008004002001h
 * 00000001407321D8: test    r8d, r8d
 * 00000001407321DB: jz      short loc_140732212
 * 00000001407321DD: rdtsc
 * 00000001407321DF: shl     rdx, 20h
 * 00000001407321E3: or      rax, rdx
 * 00000001407321E6: mov     rcx, rax
 * 00000001407321E9: mov     rdx, rax
 * 00000001407321EC: ror     rcx, 3
 * 00000001407321F0: mov     rax, r9
 * 00000001407321F3: xor     rdx, rcx
 * 00000001407321F6: mul     rdx
 * 00000001407321F9: mov     [rbp+1910h+var_16C0], rdx
 * 0000000140732200: xor     rdx, rax
 * 0000000140732203: mov     [rbx], dl
 * 0000000140732205: add     rbx, r11
 * 0000000140732208: shr     rdx, 8
 * 000000014073220C: add     r8d, 0FFFFFFFFh
 * 0000000140732210: jnz     short loc_140732203
 * 0000000140732212: mov     r8d, esi
 * 0000000140732215: sub     edi, esi
 * 0000000140732217: add     r8, r10
 * 000000014073221A: mov     [rbp+1910h+var_1940], r8
 * 000000014073221E: lea     rbx, [r8+48h]
 * 0000000140732222: cmp     edi, 8
 * 0000000140732225: jb      short loc_140732267
 * 0000000140732227: mov     r8d, edi
 * 000000014073222A: shr     r8, 3
 * 000000014073222E: rdtsc
 * 0000000140732230: shl     rdx, 20h
 * 0000000140732234: add     edi, 0FFFFFFF8h
 * 0000000140732237: or      rax, rdx
 * 000000014073223A: mov     rcx, rax
 * 000000014073223D: mov     rdx, rax
 * 0000000140732240: ror     rcx, 3
 * 0000000140732244: mov     rax, r9
 * 0000000140732247: xor     rdx, rcx
 * 000000014073224A: mul     rdx
 * 000000014073224D: mov     [rbp+1910h+var_1490], rdx
 * 0000000140732254: xor     rdx, rax
 * 0000000140732257: mov     [rbx], rdx
 * 000000014073225A: add     rbx, 8
 * 000000014073225E: sub     r8, r11
 * 0000000140732261: jnz     short loc_14073222E
 * 0000000140732263: mov     r8, [rbp+1910h+var_1940]
 * 0000000140732267: xor     eax, eax
 * 0000000140732269: test    edi, edi
 * 000000014073226B: jz      short loc_1407322A3
 * 000000014073226D: rdtsc
 * 000000014073226F: shl     rdx, 20h
 * 0000000140732273: or      rax, rdx
 * 0000000140732276: mov     rcx, rax
 * 0000000140732279: mov     rdx, rax
 * 000000014073227C: ror     rcx, 3
 * 0000000140732280: mov     rax, r9
 * 0000000140732283: xor     rdx, rcx
 * 0000000140732286: mul     rdx
 * 0000000140732289: mov     [rbp+1910h+var_F28], rdx
 * 0000000140732290: xor     rdx, rax
 * 0000000140732293: mov     [rbx], dl
 * 0000000140732295: add     rbx, r11
 * 0000000140732298: shr     rdx, 8
 * 000000014073229C: add     edi, 0FFFFFFFFh
 * 000000014073229F: jnz     short loc_140732293
 * 00000001407322A1: xor     eax, eax
 * 00000001407322A3: test    r8, r8
 * 00000001407322A6: jnz     short loc_1407322B5
 * 00000001407322A8: jmp     loc_140731C01
 * 00000001407322AD: add     r8, 40h ; '@'
 * 00000001407322B1: mov     [rbp+1910h+var_1940], r8
 * 00000001407322B5: mov     eax, [rbp+1910h+arg_8]
 * 00000001407322BB: mov     [r14+500h], r8
 * 00000001407322C2: cmp     eax, r15d
 * 00000001407322C5: jnz     loc_140732512
 * 00000001407322CB: mov     r8d, [r14+580h]
 * 00000001407322D2: rdtsc
 * 00000001407322D4: shl     rdx, 20h
 * 00000001407322D8: or      rax, rdx
 * 00000001407322DB: mov     rcx, rax
 * 00000001407322DE: mov     rdx, rax
 * 00000001407322E1: ror     rcx, 3
 * 00000001407322E5: mov     rax, r9
 * 00000001407322E8: xor     rdx, rcx
 * 00000001407322EB: mul     rdx
 * 00000001407322EE: mov     rdi, rax
 * 00000001407322F1: mov     [rbp+1910h+var_1480], rdx
 * 00000001407322F8: xor     edi, edx
 * 00000001407322FA: and     edi, 7FFh
 * 0000000140732300: rdtsc
 * 0000000140732302: shl     rdx, 20h
 * 0000000140732306: or      rax, rdx
 * 0000000140732309: mov     rcx, rax
 * 000000014073230C: mov     rdx, rax
 * 000000014073230F: ror     rcx, 3
 * 0000000140732313: mov     rax, r9
 * 0000000140732316: xor     rdx, rcx
 * 0000000140732319: lea     ecx, [rdi+1]
 * 000000014073231C: mul     rdx
 * 000000014073231F: mov     [rbp+1910h+var_10C0], rdx
 * 0000000140732326: xor     rax, rdx
 * 0000000140732329: xor     edx, edx
 * 000000014073232B: div     rcx
 * 000000014073232E: mov     ecx, 200h
 * 0000000140732333: mov     rsi, rdx
 * 0000000140732336: lea     edx, [rdi+58h]
 * 0000000140732339: call    qword ptr [r14+0F0h]
 * 0000000140732340: mov     r10, rax
 * 0000000140732343: test    rax, rax
 * 0000000140732346: jz      loc_140731BF5
 * 000000014073234C: mov     r8d, esi
 * 000000014073234F: mov     rbx, rax
 * 0000000140732352: mov     r11d, 1
 * 0000000140732358: cmp     esi, 8
 * 000000014073235B: jb      short loc_1407323A9
 * 000000014073235D: mov     r9d, esi
 * 0000000140732360: mov     r12, 7010008004002001h
 * 000000014073236A: shr     r9, 3
 * 000000014073236E: rdtsc
 * 0000000140732370: shl     rdx, 20h
 * 0000000140732374: add     r8d, 0FFFFFFF8h
 * 0000000140732378: or      rax, rdx
 * 000000014073237B: mov     rcx, rax
 * 000000014073237E: mov     rdx, rax
 * 0000000140732381: ror     rcx, 3
 * 0000000140732385: mov     rax, r12
 * 0000000140732388: xor     rdx, rcx
 * 000000014073238B: mul     rdx
 * 000000014073238E: mov     [rbp+1910h+var_1470], rdx
 * 0000000140732395: xor     rdx, rax
 * 0000000140732398: mov     [rbx], rdx
 * 000000014073239B: add     rbx, 8
 * 000000014073239F: sub     r9, r11
 * 00000001407323A2: jnz     short loc_14073236E
 * 00000001407323A4: mov     r12d, dword ptr [rsp+1A10h+var_19A8]
 * 00000001407323A9: test    r8d, r8d
 * 00000001407323AC: jz      short loc_1407323EA
 * 00000001407323AE: rdtsc
 * 00000001407323B0: shl     rdx, 20h
 * 00000001407323B4: or      rax, rdx
 * 00000001407323B7: mov     rcx, rax
 * 00000001407323BA: mov     rdx, rax
 * 00000001407323BD: ror     rcx, 3
 * 00000001407323C1: mov     rax, 7010008004002001h
 * 00000001407323CB: xor     rdx, rcx
 * 00000001407323CE: mul     rdx
 * 00000001407323D1: mov     [rbp+1910h+var_F18], rdx
 * 00000001407323D8: xor     rdx, rax
 * 00000001407323DB: mov     [rbx], dl
 * 00000001407323DD: add     rbx, r11
 * 00000001407323E0: shr     rdx, 8
 * 00000001407323E4: add     r8d, 0FFFFFFFFh
 * 00000001407323E8: jnz     short loc_1407323DB
 * 00000001407323EA: mov     r9d, esi
 * 00000001407323ED: sub     edi, esi
 * 00000001407323EF: add     r9, r10
 * 00000001407323F2: mov     r10, 7010008004002001h
 * 00000001407323FC: lea     rbx, [r9+58h]
 * 0000000140732400: cmp     edi, 8
 * 0000000140732403: jb      short loc_140732441
 * 0000000140732405: mov     r8d, edi
 * 0000000140732408: shr     r8, 3
 * 000000014073240C: rdtsc
 * 000000014073240E: shl     rdx, 20h
 * 0000000140732412: add     edi, 0FFFFFFF8h
 * 0000000140732415: or      rax, rdx
 * 0000000140732418: mov     rcx, rax
 * 000000014073241B: mov     rdx, rax
 * 000000014073241E: ror     rcx, 3
 * 0000000140732422: mov     rax, r10
 * 0000000140732425: xor     rdx, rcx
 * 0000000140732428: mul     rdx
 * 000000014073242B: mov     [rbp+1910h+var_1460], rdx
 * 0000000140732432: xor     rdx, rax
 * 0000000140732435: mov     [rbx], rdx
 * 0000000140732438: add     rbx, 8
 * 000000014073243C: sub     r8, r11
 * 000000014073243F: jnz     short loc_14073240C
 * 0000000140732441: xor     eax, eax
 * 0000000140732443: test    edi, edi
 * 0000000140732445: jz      short loc_14073247D
 * 0000000140732447: rdtsc
 * 0000000140732449: shl     rdx, 20h
 * 000000014073244D: or      rax, rdx
 * 0000000140732450: mov     rcx, rax
 * 0000000140732453: mov     rdx, rax
 * 0000000140732456: ror     rcx, 3
 * 000000014073245A: mov     rax, r10
 * 000000014073245D: xor     rdx, rcx
 * 0000000140732460: mul     rdx
 * 0000000140732463: mov     [rbp+1910h+var_10B0], rdx
 * 000000014073246A: xor     rdx, rax
 * 000000014073246D: mov     [rbx], dl
 * 000000014073246F: add     rbx, r11
 * 0000000140732472: shr     rdx, 8
 * 0000000140732476: add     edi, 0FFFFFFFFh
 * 0000000140732479: jnz     short loc_14073246D
 * 000000014073247B: xor     eax, eax
 * 000000014073247D: test    r9, r9
 * 0000000140732480: jz      loc_140731C01
 * 0000000140732486: mov     [r14+6E0h], r9
 * 000000014073248D: or      dword ptr [r14+690h], 8
 * 0000000140732495: rdtsc
 * 0000000140732497: shl     rdx, 20h
 * 000000014073249B: mov     r8, r14
 * 000000014073249E: or      rax, rdx
 * 00000001407324A1: mov     rcx, rax
 * 00000001407324A4: mov     rdx, rax
 * 00000001407324A7: ror     rcx, 3
 * 00000001407324AB: mov     rax, r10
 * 00000001407324AE: xor     rdx, rcx
 * 00000001407324B1: mul     rdx
 * 00000001407324B4: mov     [rbp+1910h+var_1450], rdx
 * 00000001407324BB: xor     rdx, rax
 * 00000001407324BE: and     rdx, r11
 * 00000001407324C1: mov     [r14+698h], rdx
 * 00000001407324C8: lea     rdx, sub_140742B34
 * 00000001407324CF: mov     rax, gs:188h
 * 00000001407324D8: mov     rcx, [rax+0B8h]
 * 00000001407324DF: call    PsEnumProcessThreads
 * 00000001407324E4: cmp     [r14+698h], r13
 * 00000001407324EB: jb      loc_140731C01
 * 00000001407324F1: lea     rax, KiDispatchCallout
 * 00000001407324F8: mov     [r14+6E8h], rax
 * 00000001407324FF: lea     rax, PopPoCoalescinCallback
 * 0000000140732506: mov     [r14+6F0h], rax
 * 000000014073250D: jmp     loc_14073277A
 * 0000000140732512: cmp     eax, 5
 * 0000000140732515: jnz     loc_14073277A
 * 000000014073251B: mov     r8d, [r14+580h]
 * 0000000140732522: rdtsc
 * 0000000140732524: shl     rdx, 20h
 * 0000000140732528: or      rax, rdx
 * 000000014073252B: mov     rcx, rax
 * 000000014073252E: mov     rdx, rax
 * 0000000140732531: ror     rcx, 3
 * 0000000140732535: mov     rax, r9
 * 0000000140732538: xor     rdx, rcx
 * 000000014073253B: mul     rdx
 * 000000014073253E: mov     rdi, rax
 * 0000000140732541: mov     [rbp+1910h+var_F08], rdx
 * 0000000140732548: xor     edi, edx
 * 000000014073254A: and     edi, 7FFh
 * 0000000140732550: rdtsc
 * 0000000140732552: shl     rdx, 20h
 * 0000000140732556: or      rax, rdx
 * 0000000140732559: mov     rcx, rax
 * 000000014073255C: mov     rdx, rax
 * 000000014073255F: ror     rcx, 3
 * 0000000140732563: mov     rax, r9
 * 0000000140732566: xor     rdx, rcx
 * 0000000140732569: lea     ecx, [rdi+1]
 * 000000014073256C: mul     rdx
 * 000000014073256F: mov     [rbp+1910h+var_1440], rdx
 * 0000000140732576: xor     rax, rdx
 * 0000000140732579: xor     edx, edx
 * 000000014073257B: div     rcx
 * 000000014073257E: mov     ecx, 200h
 * 0000000140732583: mov     rsi, rdx
 * 0000000140732586: lea     edx, [rdi+50h]
 * 0000000140732589: call    qword ptr [r14+0F0h]
 * 0000000140732590: mov     r10, rax
 * 0000000140732593: xor     eax, eax
 * 0000000140732595: lea     r11d, [rax+1]
 * 0000000140732599: test    r10, r10
 * 000000014073259C: jnz     short loc_1407325AD
 * 000000014073259E: add     [r14+710h], r11d
 * 00000001407325A5: mov     r9d, eax
 * 00000001407325A8: jmp     loc_1407326D6
 * 00000001407325AD: mov     r8d, esi
 * 00000001407325B0: mov     rbx, r10
 * 00000001407325B3: cmp     esi, 8
 * 00000001407325B6: jb      short loc_140732604
 * 00000001407325B8: mov     r9d, esi
 * 00000001407325BB: mov     r12, 7010008004002001h
 * 00000001407325C5: shr     r9, 3
 * 00000001407325C9: rdtsc
 * 00000001407325CB: shl     rdx, 20h
 * 00000001407325CF: add     r8d, 0FFFFFFF8h
 * 00000001407325D3: or      rax, rdx
 * 00000001407325D6: mov     rcx, rax
 * 00000001407325D9: mov     rdx, rax
 * 00000001407325DC: ror     rcx, 3
 * 00000001407325E0: mov     rax, r12
 * 00000001407325E3: xor     rdx, rcx
 * 00000001407325E6: mul     rdx
 * 00000001407325E9: mov     [rbp+1910h+var_10A0], rdx
 * 00000001407325F0: xor     rdx, rax
 * 00000001407325F3: mov     [rbx], rdx
 * 00000001407325F6: add     rbx, 8
 * 00000001407325FA: sub     r9, r11
 * 00000001407325FD: jnz     short loc_1407325C9
 * 00000001407325FF: mov     r12d, dword ptr [rsp+1A10h+var_19A8]
 * 0000000140732604: test    r8d, r8d
 * 0000000140732607: jz      short loc_140732645
 * 0000000140732609: rdtsc
 * 000000014073260B: shl     rdx, 20h
 * 000000014073260F: or      rax, rdx
 * 0000000140732612: mov     rcx, rax
 * 0000000140732615: mov     rdx, rax
 * 0000000140732618: ror     rcx, 3
 * 000000014073261C: mov     rax, 7010008004002001h
 * 0000000140732626: xor     rdx, rcx
 * 0000000140732629: mul     rdx
 * 000000014073262C: mov     [rbp+1910h+var_1430], rdx
 * 0000000140732633: xor     rdx, rax
 * 0000000140732636: mov     [rbx], dl
 * 0000000140732638: add     rbx, r11
 * 000000014073263B: shr     rdx, 8
 * 000000014073263F: add     r8d, 0FFFFFFFFh
 * 0000000140732643: jnz     short loc_140732636
 * 0000000140732645: mov     r9d, esi
 * 0000000140732648: sub     edi, esi
 * 000000014073264A: add     r9, r10
 * 000000014073264D: mov     r10, 7010008004002001h
 * 0000000140732657: lea     rbx, [r9+50h]
 * 000000014073265B: cmp     edi, 8
 * 000000014073265E: jb      short loc_14073269C
 * 0000000140732660: mov     r8d, edi
 * 0000000140732663: shr     r8, 3
 * 0000000140732667: rdtsc
 * 0000000140732669: shl     rdx, 20h
 * 000000014073266D: add     edi, 0FFFFFFF8h
 * 0000000140732670: or      rax, rdx
 * 0000000140732673: mov     rcx, rax
 * 0000000140732676: mov     rdx, rax
 * 0000000140732679: ror     rcx, 3
 * 000000014073267D: mov     rax, r10
 * 0000000140732680: xor     rdx, rcx
 * 0000000140732683: mul     rdx
 * 0000000140732686: mov     [rbp+1910h+var_EF8], rdx
 * 000000014073268D: xor     rdx, rax
 * 0000000140732690: mov     [rbx], rdx
 * 0000000140732693: add     rbx, 8
 * 0000000140732697: sub     r8, r11
 * 000000014073269A: jnz     short loc_140732667
 * 000000014073269C: test    edi, edi
 * 000000014073269E: jz      short loc_1407326D4
 * 00000001407326A0: rdtsc
 * 00000001407326A2: shl     rdx, 20h
 * 00000001407326A6: or      rax, rdx
 * 00000001407326A9: mov     rcx, rax
 * 00000001407326AC: mov     rdx, rax
 * 00000001407326AF: ror     rcx, 3
 * 00000001407326B3: mov     rax, r10
 * 00000001407326B6: xor     rdx, rcx
 * 00000001407326B9: mul     rdx
 * 00000001407326BC: mov     [rbp+1910h+var_1420], rdx
 * 00000001407326C3: xor     rdx, rax
 * 00000001407326C6: mov     [rbx], dl
 * 00000001407326C8: add     rbx, r11
 * 00000001407326CB: shr     rdx, 8
 * 00000001407326CF: add     edi, 0FFFFFFFFh
 * 00000001407326D2: jnz     short loc_1407326C6
 * 00000001407326D4: xor     eax, eax
 * 00000001407326D6: mov     [r14+698h], r9
 * 00000001407326DD: test    r9, r9
 * 00000001407326E0: jz      loc_140731C01
 * 00000001407326E6: mov     rbx, [rbp+1910h+arg_18]
 * 00000001407326ED: lea     rcx, KiHardwareTriggerLock; SpinLock
 * 00000001407326F4: mov     [r9], eax
 * 00000001407326F7: mov     rdi, [r14+698h]
 * 00000001407326FE: mov     rbx, [rbx+18h]
 * 0000000140732702: movups  xmm0, xmmword ptr [rbx]
 * 0000000140732705: movups  xmmword ptr [rdi+8], xmm0
 * 0000000140732709: movups  xmm1, xmmword ptr [rbx+10h]
 * 000000014073270D: movups  xmmword ptr [rdi+18h], xmm1
 * 0000000140732711: movups  xmm0, xmmword ptr [rbx+20h]
 * 0000000140732715: movups  xmmword ptr [rdi+28h], xmm0
 * 0000000140732719: movups  xmm1, xmmword ptr [rbx+30h]
 * 000000014073271D: movups  xmmword ptr [rdi+38h], xmm1
 * 0000000140732721: call    KeAcquireSpinLockRaiseToDpc
 * 0000000140732726: lea     rdx, sub_14014EEE0
 * 000000014073272D: xchg    rdx, [rbx+18h]
 * 0000000140732731: mov     dl, al; NewIrql
 * 0000000140732733: mov     [rbx+20h], rdi
 * 0000000140732737: lea     rcx, KiHardwareTriggerLock; SpinLock
 * 000000014073273E: call    KeReleaseSpinLock
 * 0000000140732743: mov     rax, [r14+698h]
 * 000000014073274A: movups  xmm0, xmmword ptr [rax+8]
 * 000000014073274E: movups  xmmword ptr [r14+6A0h], xmm0
 * 0000000140732756: movups  xmm1, xmmword ptr [rax+18h]
 * 000000014073275A: movups  xmmword ptr [r14+6B0h], xmm1
 * 0000000140732762: movups  xmm0, xmmword ptr [rax+28h]
 * 0000000140732766: movups  xmmword ptr [r14+6C0h], xmm0
 * 000000014073276E: movups  xmm1, xmmword ptr [rax+38h]
 * 0000000140732772: movups  xmmword ptr [r14+6D0h], xmm1
 * 000000014073277A: rdtsc
 * 000000014073277C: shl     rdx, 20h
 * 0000000140732780: mov     r9, 7010008004002001h
 * 000000014073278A: or      rax, rdx
 * 000000014073278D: mov     rdi, 0CCCCCCCCCCCCCCCDh
 * 0000000140732797: mov     rcx, rax
 * 000000014073279A: mov     rdx, rax
 * 000000014073279D: ror     rcx, 3
 * 00000001407327A1: mov     rax, r9
 * 00000001407327A4: xor     rdx, rcx
 * 00000001407327A7: mul     rdx
 * 00000001407327AA: mov     rbx, rax
 * 00000001407327AD: mov     [rbp+1910h+var_1090], rdx
 * 00000001407327B4: xor     rbx, rdx
 * 00000001407327B7: mov     rax, rdi
 * 00000001407327BA: mul     rbx
 * 00000001407327BD: mov     eax, 1
 * 00000001407327C2: shr     rdx, 3
 * 00000001407327C6: lea     rcx, [rdx+rdx*4]
 * 00000001407327CA: add     rcx, rcx
 * 00000001407327CD: sub     rbx, rcx
 * 00000001407327D0: cmp     rbx, rax
 * 00000001407327D3: jnb     short loc_1407327DC
 * 00000001407327D5: or      [r14+690h], r13d
 * 00000001407327DC: cli
 * 00000001407327DD: xor     eax, eax
 * 00000001407327DF: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 00000001407327E5: jnz     short loc_1407327E9
 * 00000001407327E7: jmp     short loc_1407327E7
 * 00000001407327E9: sti
 * 00000001407327EA: rdtsc
 * 00000001407327EC: shl     rdx, 20h
 * 00000001407327F0: or      rax, rdx
 * 00000001407327F3: mov     rcx, rax
 * 00000001407327F6: mov     rdx, rax
 * 00000001407327F9: ror     rcx, 3
 * 00000001407327FD: mov     rax, r9
 * 0000000140732800: xor     rdx, rcx
 * 0000000140732803: mul     rdx
 * 0000000140732806: mov     rcx, rdx
 * 0000000140732809: mov     [rbp+1910h+var_1410], rdx
 * 0000000140732810: xor     rcx, rax
 * 0000000140732813: mov     rax, rdi
 * 0000000140732816: mul     rcx
 * 0000000140732819: shr     rdx, 3
 * 000000014073281D: lea     rax, [rdx+rdx*4]
 * 0000000140732821: add     rax, rax
 * 0000000140732824: sub     rcx, rax
 * 0000000140732827: cmp     rcx, 7
 * 000000014073282B: jnb     short loc_140732845
 * 000000014073282D: mov     eax, [r14+690h]
 * 0000000140732834: bt      eax, 1Eh
 * 0000000140732838: jb      short loc_140732845
 * 000000014073283A: bts     eax, 7
 * 000000014073283E: mov     [r14+690h], eax
 * 0000000140732845: cli
 * 0000000140732846: xor     eax, eax
 * 0000000140732848: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014073284E: jnz     short loc_140732852
 * 0000000140732850: jmp     short loc_140732850
 * 0000000140732852: sti
 * 0000000140732853: rdtsc
 * 0000000140732855: shl     rdx, 20h
 * 0000000140732859: mov     rsi, 0FFFFFFFFB8797400h
 * 0000000140732860: or      rax, rdx
 * 0000000140732863: mov     rcx, rax
 * 0000000140732866: mov     rdx, rax
 * 0000000140732869: ror     rcx, 3
 * 000000014073286D: mov     rax, r9
 * 0000000140732870: xor     rdx, rcx
 * 0000000140732873: mul     rdx
 * 0000000140732876: mov     rcx, rdx
 * 0000000140732879: mov     [rbp+1910h+var_EE8], rdx
 * 0000000140732880: xor     rcx, rax
 * 0000000140732883: mov     rax, rdi
 * 0000000140732886: mul     rcx
 * 0000000140732889: shr     rdx, 3
 * 000000014073288D: lea     rax, [rdx+rdx*4]
 * 0000000140732891: add     rax, rax
 * 0000000140732894: sub     rcx, rax
 * 0000000140732897: cmp     rcx, 7
 * 000000014073289B: jnb     loc_140732B41
 * 00000001407328A1: rdtsc
 * 00000001407328A3: shl     rdx, 20h
 * 00000001407328A7: or      rax, rdx
 * 00000001407328AA: mov     rcx, rax
 * 00000001407328AD: mov     rdx, rax
 * 00000001407328B0: ror     rcx, 3
 * 00000001407328B4: mov     rax, r9
 * 00000001407328B7: xor     rdx, rcx
 * 00000001407328BA: mul     rdx
 * 00000001407328BD: mov     rcx, rdx
 * 00000001407328C0: mov     [rbp+1910h+var_1400], rdx
 * 00000001407328C7: xor     rcx, rax
 * 00000001407328CA: mov     rax, rdi
 * 00000001407328CD: mul     rcx
 * 00000001407328D0: shr     rdx, 3
 * 00000001407328D4: lea     rax, [rdx+rdx*4]
 * 00000001407328D8: add     rax, rax
 * 00000001407328DB: sub     rcx, rax
 * 00000001407328DE: cmp     rcx, 7
 * 00000001407328E2: jnb     loc_140732ABD
 * 00000001407328E8: mov     r8d, [r14+580h]
 * 00000001407328EF: rdtsc
 * 00000001407328F1: shl     rdx, 20h
 * 00000001407328F5: or      rax, rdx
 * 00000001407328F8: mov     rcx, rax
 * 00000001407328FB: mov     rdx, rax
 * 00000001407328FE: ror     rcx, 3
 * 0000000140732902: mov     rax, r9
 * 0000000140732905: xor     rdx, rcx
 * 0000000140732908: mul     rdx
 * 000000014073290B: mov     rdi, rax
 * 000000014073290E: mov     [rbp+1910h+var_1080], rdx
 * 0000000140732915: xor     edi, edx
 * 0000000140732917: and     edi, 7FFh
 * 000000014073291D: rdtsc
 * 000000014073291F: shl     rdx, 20h
 * 0000000140732923: or      rax, rdx
 * 0000000140732926: mov     rcx, rax
 * 0000000140732929: mov     rdx, rax
 * 000000014073292C: ror     rcx, 3
 * 0000000140732930: mov     rax, r9
 * 0000000140732933: xor     rdx, rcx
 * 0000000140732936: lea     ecx, [rdi+1]
 * 0000000140732939: mul     rdx
 * 000000014073293C: mov     [rbp+1910h+var_13F0], rdx
 * 0000000140732943: xor     rax, rdx
 * 0000000140732946: xor     edx, edx
 * 0000000140732948: div     rcx
 * 000000014073294B: mov     ecx, 200h
 * 0000000140732950: mov     r15, rdx
 * 0000000140732953: lea     edx, [rdi+18h]
 * 0000000140732956: call    qword ptr [r14+0F0h]
 * 000000014073295D: mov     r10, rax
 * 0000000140732960: test    rax, rax
 * 0000000140732963: jz      loc_140731BF5
 * 0000000140732969: mov     r8d, r15d
 * 000000014073296C: mov     rbx, rax
 * 000000014073296F: mov     r11d, 1
 * 0000000140732975: cmp     r15d, 8
 * 0000000140732979: jb      short loc_1407329C7
 * 000000014073297B: mov     r9d, r15d
 * 000000014073297E: mov     r12, 7010008004002001h
 * 0000000140732988: shr     r9, 3
 * 000000014073298C: rdtsc
 * 000000014073298E: shl     rdx, 20h
 * 0000000140732992: add     r8d, 0FFFFFFF8h
 * 0000000140732996: or      rax, rdx
 * 0000000140732999: mov     rcx, rax
 * 000000014073299C: mov     rdx, rax
 * 000000014073299F: ror     rcx, 3
 * 00000001407329A3: mov     rax, r12
 * 00000001407329A6: xor     rdx, rcx
 * 00000001407329A9: mul     rdx
 * 00000001407329AC: mov     [rbp+1910h+var_ED8], rdx
 * 00000001407329B3: xor     rdx, rax
 * 00000001407329B6: mov     [rbx], rdx
 * 00000001407329B9: add     rbx, 8
 * 00000001407329BD: sub     r9, r11
 * 00000001407329C0: jnz     short loc_14073298C
 * 00000001407329C2: mov     r12d, dword ptr [rsp+1A10h+var_19A8]
 * 00000001407329C7: mov     r9, 7010008004002001h
 * 00000001407329D1: test    r8d, r8d
 * 00000001407329D4: jz      short loc_140732A0B
 * 00000001407329D6: rdtsc
 * 00000001407329D8: shl     rdx, 20h
 * 00000001407329DC: or      rax, rdx
 * 00000001407329DF: mov     rcx, rax
 * 00000001407329E2: mov     rdx, rax
 * 00000001407329E5: ror     rcx, 3
 * 00000001407329E9: mov     rax, r9
 * 00000001407329EC: xor     rdx, rcx
 * 00000001407329EF: mul     rdx
 * 00000001407329F2: mov     [rbp+1910h+var_13E0], rdx
 * 00000001407329F9: xor     rdx, rax
 * 00000001407329FC: mov     [rbx], dl
 * 00000001407329FE: add     rbx, r11
 * 0000000140732A01: shr     rdx, 8
 * 0000000140732A05: add     r8d, 0FFFFFFFFh
 * 0000000140732A09: jnz     short loc_1407329FC
 * 0000000140732A0B: sub     edi, r15d
 * 0000000140732A0E: mov     r15d, r15d
 * 0000000140732A11: add     r15, r10
 * 0000000140732A14: lea     rbx, [r15+18h]
 * 0000000140732A18: cmp     edi, 8
 * 0000000140732A1B: jb      short loc_140732A59
 * 0000000140732A1D: mov     r8d, edi
 * 0000000140732A20: shr     r8, 3
 * 0000000140732A24: rdtsc
 * 0000000140732A26: shl     rdx, 20h
 * 0000000140732A2A: add     edi, 0FFFFFFF8h
 * 0000000140732A2D: or      rax, rdx
 * 0000000140732A30: mov     rcx, rax
 * 0000000140732A33: mov     rdx, rax
 * 0000000140732A36: ror     rcx, 3
 * 0000000140732A3A: mov     rax, r9
 * 0000000140732A3D: xor     rdx, rcx
 * 0000000140732A40: mul     rdx
 * 0000000140732A43: mov     [rbp+1910h+var_1070], rdx
 * 0000000140732A4A: xor     rdx, rax
 * 0000000140732A4D: mov     [rbx], rdx
 * 0000000140732A50: add     rbx, 8
 * 0000000140732A54: sub     r8, r11
 * 0000000140732A57: jnz     short loc_140732A24
 * 0000000140732A59: xor     eax, eax
 * 0000000140732A5B: test    edi, edi
 * 0000000140732A5D: jz      short loc_140732A95
 * 0000000140732A5F: rdtsc
 * 0000000140732A61: shl     rdx, 20h
 * 0000000140732A65: or      rax, rdx
 * 0000000140732A68: mov     rcx, rax
 * 0000000140732A6B: mov     rdx, rax
 * 0000000140732A6E: ror     rcx, 3
 * 0000000140732A72: mov     rax, r9
 * 0000000140732A75: xor     rdx, rcx
 * 0000000140732A78: mul     rdx
 * 0000000140732A7B: mov     [rbp+1910h+var_13D0], rdx
 * 0000000140732A82: xor     rdx, rax
 * 0000000140732A85: mov     [rbx], dl
 * 0000000140732A87: add     rbx, r11
 * 0000000140732A8A: shr     rdx, 8
 * 0000000140732A8E: add     edi, 0FFFFFFFFh
 * 0000000140732A91: jnz     short loc_140732A85
 * 0000000140732A93: xor     eax, eax
 * 0000000140732A95: test    r15, r15
 * 0000000140732A98: jz      loc_140731C01
 * 0000000140732A9E: xor     r8d, r8d; State
 * 0000000140732AA1: xor     edx, edx; Type
 * 0000000140732AA3: mov     rcx, r15; Event
 * 0000000140732AA6: call    KeInitializeEvent
 * 0000000140732AAB: mov     [r14+6F8h], r15
 * 0000000140732AB2: mov     r15d, 4
 * 0000000140732AB8: jmp     loc_140732B41
 * 0000000140732ABD: xor     edx, edx
 * 0000000140732ABF: xor     ecx, ecx
 * 0000000140732AC1: lea     r8d, [rdx+8]
 * 0000000140732AC5: call    ExAllocateTimer
 * 0000000140732ACA: mov     rbx, rax
 * 0000000140732ACD: xor     eax, eax
 * 0000000140732ACF: test    rbx, rbx
 * 0000000140732AD2: jz      loc_140731C01
 * 0000000140732AD8: mov     [r14+6F8h], rbx
 * 0000000140732ADF: rdtsc
 * 0000000140732AE1: shl     rdx, 20h
 * 0000000140732AE5: xor     r9d, r9d
 * 0000000140732AE8: or      rax, rdx
 * 0000000140732AEB: mov     rcx, rax
 * 0000000140732AEE: mov     rdx, rax
 * 0000000140732AF1: ror     rcx, 3
 * 0000000140732AF5: mov     rax, 7010008004002001h
 * 0000000140732AFF: xor     rdx, rcx
 * 0000000140732B02: mul     rdx
 * 0000000140732B05: mov     rcx, rdx
 * 0000000140732B08: mov     [rbp+1910h+var_EC8], rdx
 * 0000000140732B0F: xor     rcx, rax
 * 0000000140732B12: mov     rax, 0ABCC77118461CEFDh
 * 0000000140732B1C: mul     rcx
 * 0000000140732B1F: shr     rdx, 1Ah
 * 0000000140732B23: imul    rax, rdx, 5F5E100h
 * 0000000140732B2A: mov     rdx, rsi
 * 0000000140732B2D: sub     rcx, rax
 * 0000000140732B30: sub     rdx, rcx
 * 0000000140732B33: mov     rcx, rbx; BugCheckParameter1
 * 0000000140732B36: mov     r8, rdx
 * 0000000140732B39: neg     r8
 * 0000000140732B3C: call    ExSetTimer
 * 0000000140732B41: mov     ecx, dword ptr [rbp+1910h+NtHeaders]
 * 0000000140732B44: mov     r8d, dword ptr [rbp+1910h+Size]; Size
 * 0000000140732B48: add     rcx, r14; void *
 * 0000000140732B4B: mov     rdx, [rsp+1A10h+Src]; Src
 * 0000000140732B50: call    memmove
 * 0000000140732B55: cli
 * 0000000140732B56: xor     eax, eax
 * 0000000140732B58: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140732B5E: jnz     short loc_140732B62
 * 0000000140732B60: jmp     short loc_140732B60
 * 0000000140732B62: sti
 * 0000000140732B63: lea     rbx, cs:140000000h
 * 0000000140732B6A: mov     rcx, rbx; BaseAddress
 * 0000000140732B6D: mov     [r14+5F0h], rbx
 * 0000000140732B74: call    RtlImageNtHeader
 * 0000000140732B79: mov     [r14+600h], rax
 * 0000000140732B80: mov     ecx, [rax+50h]
 * 0000000140732B83: add     rcx, rbx
 * 0000000140732B86: mov     [r14+5F8h], rcx
 * 0000000140732B8D: mov     eax, cs:dword_1407174C0
 * 0000000140732B93: mov     [r14+5ECh], eax
 * 0000000140732B9A: mov     r9, cs:qword_1407174C8; BugCheckParameter3
 * 0000000140732BA1: cmp     r9d, 8
 * 0000000140732BA5: jnz     loc_14074226D
 * 0000000140732BAB: mov     eax, 0CF48h
 * 0000000140732BB0: mov     [r14+5E0h], ax
 * 0000000140732BB8: mov     rax, gs:18h
 * 0000000140732BC1: mov     rcx, [rax+38h]
 * 0000000140732BC5: movups  xmm0, xmmword ptr [rcx+10h]
 * 0000000140732BC9: movdqu  xmmword ptr [r14+5B0h], xmm0
 * 0000000140732BD2: movups  xmm1, xmmword ptr [rcx+20h]
 * 0000000140732BD6: movdqu  xmmword ptr [r14+5C0h], xmm1
 * 0000000140732BDF: movups  xmm0, xmmword ptr [rcx+120h]
 * 0000000140732BE6: movdqu  xmmword ptr [r14+5D0h], xmm0
 * 0000000140732BEF: call    KeKvaShadowingActive
 * 0000000140732BF4: mov     r15d, 1
 * 0000000140732BFA: test    eax, eax
 * 0000000140732BFC: jz      short loc_140732C05
 * 0000000140732BFE: or      [r14+5E4h], r15d
 * 0000000140732C05: test    dword ptr [r14+690h], 10000000h
 * 0000000140732C10: jnz     short loc_140732C22
 * 0000000140732C12: mov     ecx, [r14+55Ch]
 * 0000000140732C19: mov     eax, ecx
 * 0000000140732C1B: neg     eax
 * 0000000140732C1D: mov     [rcx+r14+0Bh], eax
 * 0000000140732C22: mov     eax, [r14+690h]
 * 0000000140732C29: mov     r9d, 80000000h
 * 0000000140732C2F: test    r9d, eax
 * 0000000140732C32: jz      short loc_140732C3F
 * 0000000140732C34: bts     eax, 1Bh
 * 0000000140732C38: mov     [r14+690h], eax
 * 0000000140732C3F: mov     eax, cs:KeNumberProcessors_0
 * 0000000140732C45: cmp     eax, r15d
 * 0000000140732C48: jnz     short loc_140732C52
 * 0000000140732C4A: or      dword ptr [r14+690h], 40h
 * 0000000140732C52: mov     eax, [r14+664h]
 * 0000000140732C59: mov     ecx, 0BC2A27DBh
 * 0000000140732C5E: xor     rax, rcx
 * 0000000140732C61: mov     rcx, 88000000000h
 * 0000000140732C6B: sub     rax, rcx
 * 0000000140732C6E: mov     al, [rax]
 * 0000000140732C70: test    r13b, al
 * 0000000140732C73: jz      short loc_140732C80
 * 0000000140732C75: add     dword ptr [r14+554h], 1000h
 * 0000000140732C80: cmp     dword ptr [r14+5A8h], 7
 * 0000000140732C88: mov     [rbp+1910h+var_16D8], r14
 * 0000000140732C8F: jz      loc_1407335A7
 * 0000000140732C95: lea     rax, ExQueueWorkItem
 * 0000000140732C9C: xor     edx, edx; Val
 * 0000000140732C9E: mov     [rbp+1910h+PcValue], rax
 * 0000000140732CA5: lea     rcx, [rbp+1910h+var_8C8]; void *
 * 0000000140732CAC: lea     rax, ExpWorkerThread
 * 0000000140732CB3: mov     [rbp+1910h+var_8E8], rax
 * 0000000140732CBA: lea     rax, KiDebugTrapOrFault
 * 0000000140732CC1: mov     [rbp+1910h+var_8E0], rax
 * 0000000140732CC8: lea     r8d, [rdx+78h]; Size
 * 0000000140732CCC: lea     rax, KiExceptionDispatch
 * 0000000140732CD3: mov     [rbp+1910h+var_8D8], rax
 * 0000000140732CDA: lea     rax, KiDispatchException
 * 0000000140732CE1: mov     [rbp+1910h+var_8D0], rax
 * 0000000140732CE8: call    memset
 * 0000000140732CED: lea     rax, RtlDispatchException
 * 0000000140732CF4: mov     [rbp+1910h+var_850], rax
 * 0000000140732CFB: lea     rax, KeContextToKframes
 * 0000000140732D02: mov     [rbp+1910h+var_848], rax
 * 0000000140732D09: xor     eax, eax
 * 0000000140732D0B: mov     [rbp+1910h+var_840], rax
 * 0000000140732D12: mov     [rbp+1910h+var_838], rax
 * 0000000140732D19: lea     rax, sub_14014ECE8
 * 0000000140732D20: mov     [rbp+1910h+var_830], rax
 * 0000000140732D27: lea     rax, KeAcquireSpinLockRaiseToDpc
 * 0000000140732D2E: mov     [rbp+1910h+var_828], rax
 * 0000000140732D35: lea     rax, KeReleaseSpinLock
 * 0000000140732D3C: mov     [rbp+1910h+var_820], rax
 * 0000000140732D43: lea     rax, KeProcessorGroupAffinity
 * 0000000140732D4A: mov     [rbp+1910h+var_818], rax
 * 0000000140732D51: lea     rax, KeSetSystemGroupAffinityThread
 * 0000000140732D58: mov     [rbp+1910h+var_810], rax
 * 0000000140732D5F: lea     rax, KeRevertToUserAffinityThread
 * 0000000140732D66: mov     [rbp+1910h+var_808], rax
 * 0000000140732D6D: lea     rax, MmGetSessionIdEx
 * 0000000140732D74: mov     [rbp+1910h+var_800], rax
 * 0000000140732D7B: lea     rax, sub_140217EA0
 * 0000000140732D82: mov     [rbp+1910h+var_7F8], rax
 * 0000000140732D89: lea     rax, sub_14014DF14
 * 0000000140732D90: mov     [rbp+1910h+var_7F0], rax
 * 0000000140732D97: lea     rax, memmove
 * 0000000140732D9E: mov     [rbp+1910h+var_7E8], rax
 * 0000000140732DA5: lea     rax, qword_14014EF88
 * 0000000140732DAC: mov     [rbp+1910h+var_7E0], rax
 * 0000000140732DB3: lea     rax, KiCommitThreadWait
 * 0000000140732DBA: mov     [rbp+1910h+var_7D8], rax
 * 0000000140732DC1: lea     rax, KeDelayExecutionThread
 * 0000000140732DC8: mov     [rbp+1910h+var_7D0], rax
 * 0000000140732DCF: lea     rax, KeWaitForSingleObject
 * 0000000140732DD6: mov     [rbp+1910h+var_7C8], rax
 * 0000000140732DDD: lea     rax, KeRemovePriQueue
 * 0000000140732DE4: mov     [rbp+1910h+var_7C0], rax
 * 0000000140732DEB: lea     rax, KiAttemptFastRemovePriQueue
 * 0000000140732DF2: mov     [rbp+1910h+var_7B8], rax
 * 0000000140732DF9: lea     rax, KiExitThreadWait
 * 0000000140732E00: mov     [rbp+1910h+var_7B0], rax
 * 0000000140732E07: lea     rax, EtwTraceThreadWorkItem
 * 0000000140732E0E: mov     [rbp+1910h+var_7A8], rax
 * 0000000140732E15: lea     rax, ExIsSafeWorkItem
 * 0000000140732E1C: mov     [rbp+1910h+var_7A0], rax
 * 0000000140732E23: xor     eax, eax
 * 0000000140732E25: mov     dword ptr [rbp+1910h+NtHeaders], eax
 * 0000000140732E28: mov     r13d, eax
 * 0000000140732E2B: mov     dword ptr [rbp+1910h+var_1950], eax
 * 0000000140732E2E: mov     edi, eax
 * 0000000140732E30: mov     [rsp+1A10h+var_19B0], rax
 * 0000000140732E35: mov     r12, [rbp+rdi*8+1910h+PcValue]
 * 0000000140732E3D: test    r12, r12
 * 0000000140732E40: jz      loc_1407333DF
 * 0000000140732E46: lea     rdx, [rbp+1910h+BaseAddress]; BaseOfImage
 * 0000000140732E4D: mov     rcx, r12; PcValue
 * 0000000140732E50: call    RtlPcToFileHeader
 * 0000000140732E55: mov     rcx, [rbp+1910h+BaseAddress]; BaseAddress
 * 0000000140732E5C: call    RtlImageNtHeader
 * 0000000140732E61: mov     rdx, [rbp+1910h+BaseAddress]
 * 0000000140732E68: mov     r8d, r12d
 * 0000000140732E6B: sub     r8d, edx
 * 0000000140732E6E: mov     rcx, rax
 * 0000000140732E71: call    qword ptr [r14+1E0h]
 * 0000000140732E78: mov     rcx, rax
 * 0000000140732E7B: xor     eax, eax
 * 0000000140732E7D: test    rcx, rcx
 * 0000000140732E80: jz      short loc_140732EC1
 * 0000000140732E82: cmp     dword ptr [rcx], 54494E49h
 * 0000000140732E88: jnz     short loc_140732EA5
 * 0000000140732E8A: cmp     dword ptr [rcx+4], 4742444Bh
 * 0000000140732E91: jnz     short loc_140732EA5
 * 0000000140732E93: test    dword ptr [r14+690h], 10000000h
 * 0000000140732E9E: jnz     short loc_140732EC1
 * 0000000140732EA0: jmp     loc_14074228F
 * 0000000140732EA5: test    dword ptr [rcx+24h], 2000000h
 * 0000000140732EAC: jnz     loc_14074228F
 * 0000000140732EB2: call    MmImageSectionPagable
 * 0000000140732EB7: test    eax, eax
 * 0000000140732EB9: jnz     loc_14074228F
 * 0000000140732EBF: xor     eax, eax
 * 0000000140732EC1: lea     r8, [rbp+1910h+var_1824]
 * 0000000140732EC8: mov     dword ptr [rbp+1910h+var_1958], eax
 * 0000000140732ECB: lea     rdx, [rbp+1910h+var_AD8]
 * 0000000140732ED2: mov     rcx, r12
 * 0000000140732ED5: call    RtlLookupFunctionTable
 * 0000000140732EDA: mov     rbx, rax
 * 0000000140732EDD: mov     [rbp+1910h+var_AE0], rax
 * 0000000140732EE4: xor     eax, eax
 * 0000000140732EE6: test    rbx, rbx
 * 0000000140732EE9: jz      short loc_140732F3E
 * 0000000140732EEB: mov     ecx, [rbp+1910h+var_1824]
 * 0000000140732EF1: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140732EFB: mul     rcx
 * 0000000140732EFE: lea     rax, [rbp+1910h+var_13B0]
 * 0000000140732F05: mov     [rbp+1910h+var_AE8], r12
 * 0000000140732F0C: shr     rdx, 3
 * 0000000140732F10: mov     ecx, edx
 * 0000000140732F12: mov     [rbp+1910h+var_AC8], rax
 * 0000000140732F19: mov     rax, [rbp+1910h+var_AD8]
 * 0000000140732F20: mov     [rbp+1910h+var_1824], edx
 * 0000000140732F26: lea     rdx, [rcx+rcx*2]
 * 0000000140732F2A: mov     [rbp+1910h+BaseAddress], rax
 * 0000000140732F31: lea     rcx, [rbx+rdx*4]
 * 0000000140732F35: xor     eax, eax
 * 0000000140732F37: mov     [rbp+1910h+var_AD0], rcx
 * 0000000140732F3E: mov     r13d, 0FFFFFFF8h
 * 0000000140732F44: test    rbx, rbx
 * 0000000140732F47: jz      short loc_140732F9E
 * 0000000140732F49: cmp     rbx, [rbp+1910h+var_AD0]
 * 0000000140732F50: jz      short loc_140732F9E
 * 0000000140732F52: mov     rdx, [rbp+1910h+var_AD8]
 * 0000000140732F59: mov     rcx, rbx
 * 0000000140732F5C: mov     rdi, rbx
 * 0000000140732F5F: call    RtlpConvertFunctionEntry
 * 0000000140732F64: mov     r8, [rbp+1910h+var_AE8]
 * 0000000140732F6B: mov     rcx, rax
 * 0000000140732F6E: mov     rdx, [rbp+1910h+var_AD8]
 * 0000000140732F75: call    RtlpSameFunction
 * 0000000140732F7A: mov     rbx, [rbp+1910h+var_AE0]
 * 0000000140732F81: add     rbx, 0Ch
 * 0000000140732F85: mov     [rbp+1910h+var_AE0], rbx
 * 0000000140732F8C: test    rax, rax
 * 0000000140732F8F: jnz     loc_140733039
 * 0000000140732F95: cmp     rbx, [rbp+1910h+var_AD0]
 * 0000000140732F9C: jnz     short loc_140732F52
 * 0000000140732F9E: cmp     dword ptr [rbp+1910h+var_1958], eax
 * 0000000140732FA1: jnz     loc_1407333D4
 * 0000000140732FA7: mov     r15d, [r14+554h]
 * 0000000140732FAE: mov     r8d, [r14+634h]
 * 0000000140732FB5: lea     eax, [r15+30h]
 * 0000000140732FB9: cmp     eax, [r14+714h]
 * 0000000140732FC0: jbe     loc_1407332F2
 * 0000000140732FC6: mov     edx, eax
 * 0000000140732FC8: mov     rcx, r14
 * 0000000140732FCB: call    sub_140236718
 * 0000000140732FD0: mov     rbx, rax
 * 0000000140732FD3: xor     eax, eax
 * 0000000140732FD5: test    rbx, rbx
 * 0000000140732FD8: jz      loc_140731C01
 * 0000000140732FDE: mov     edx, [r14+690h]
 * 0000000140732FE5: test    dl, 4
 * 0000000140732FE8: jnz     loc_1407332E9
 * 0000000140732FEE: mov     eax, [r14+554h]
 * 0000000140732FF5: and     edx, 20000000h
 * 0000000140732FFB: mov     rdi, [r14+538h]
 * 0000000140733002: neg     edx
 * 0000000140733004: mov     r9d, 1
 * 000000014073300A: sbb     edx, edx
 * 000000014073300C: and     edx, [r14+634h]
 * 0000000140733013: cmp     eax, 8
 * 0000000140733016: jb      loc_140733286
 * 000000014073301C: mov     ecx, eax
 * 000000014073301E: shr     rcx, 3
 * 0000000140733022: xor     r8d, r8d
 * 0000000140733025: mov     [r14], r8
 * 0000000140733028: add     eax, r13d
 * 000000014073302B: add     r14, 8
 * 000000014073302F: sub     rcx, r9
 * 0000000140733032: jnz     short loc_140733025
 * 0000000140733034: jmp     loc_140733289
 * 0000000140733039: mov     rax, [rbp+1910h+var_AC8]
 * 0000000140733040: mov     [rax], rdi
 * 0000000140733043: cli
 * 0000000140733044: xor     eax, eax
 * 0000000140733046: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014073304C: jz      loc_140733494
 * 0000000140733052: sti
 * 0000000140733053: mov     rax, [rbp+1910h+var_13B0]
 * 000000014073305A: mov     r13d, [r14+554h]
 * 0000000140733061: mov     r8d, [r14+634h]
 * 0000000140733068: mov     dword ptr [rbp+1910h+var_1958], r15d
 * 000000014073306C: mov     ecx, [rax]
 * 000000014073306E: mov     r15d, [rax+4]
 * 0000000140733072: mov     edi, ecx
 * 0000000140733074: add     rdi, [rbp+1910h+BaseAddress]
 * 000000014073307B: lea     eax, [r13+30h]
 * 000000014073307F: sub     r15d, ecx
 * 0000000140733082: cmp     eax, [r14+714h]
 * 0000000140733089: jbe     loc_140733168
 * 000000014073308F: mov     edx, eax
 * 0000000140733091: mov     rcx, r14
 * 0000000140733094: call    sub_140236718
 * 0000000140733099: mov     rbx, rax
 * 000000014073309C: xor     eax, eax
 * 000000014073309E: test    rbx, rbx
 * 00000001407330A1: jz      loc_140731C01
 * 00000001407330A7: mov     edx, [r14+690h]
 * 00000001407330AE: test    dl, 4
 * 00000001407330B1: jnz     loc_14073315F
 * 00000001407330B7: mov     eax, [r14+554h]
 * 00000001407330BE: and     edx, 20000000h
 * 00000001407330C4: mov     r9, [r14+538h]
 * 00000001407330CB: neg     edx
 * 00000001407330CD: mov     r10d, 1
 * 00000001407330D3: sbb     r8d, r8d
 * 00000001407330D6: and     r8d, [r14+634h]
 * 00000001407330DD: cmp     eax, 8
 * 00000001407330E0: jb      short loc_1407330FB
 * 00000001407330E2: mov     ecx, eax
 * 00000001407330E4: shr     rcx, 3
 * 00000001407330E8: xor     edx, edx
 * 00000001407330EA: mov     [r14], rdx
 * 00000001407330ED: add     eax, 0FFFFFFF8h
 * 00000001407330F0: add     r14, 8
 * 00000001407330F4: sub     rcx, r10
 * 00000001407330F7: jnz     short loc_1407330EA
 * 00000001407330F9: jmp     short loc_1407330FD
 * 00000001407330FB: xor     edx, edx
 * 00000001407330FD: test    eax, eax
 * 00000001407330FF: jz      short loc_14073310C
 * 0000000140733101: mov     [r14], dl
 * 0000000140733104: add     r14, r10
 * 0000000140733107: add     eax, 0FFFFFFFFh
 * 000000014073310A: jnz     short loc_140733101
 * 000000014073310C: mov     r14d, [rbx+634h]
 * 0000000140733113: mov     [rbx+634h], r8d
 * 000000014073311A: cmp     r8d, 3
 * 000000014073311E: jz      short loc_14073314F
 * 0000000140733120: mov     eax, [rbx+690h]
 * 0000000140733126: mov     ecx, edx
 * 0000000140733128: and     eax, 10000000h
 * 000000014073312D: cmovz   ecx, r8d
 * 0000000140733131: test    ecx, ecx
 * 0000000140733133: jz      short loc_140733144
 * 0000000140733135: lea     rcx, [r9-8]
 * 0000000140733139: mov     rdx, [rcx]
 * 000000014073313C: call    qword ptr [rbx+1F8h]
 * 0000000140733142: jmp     short loc_140733158
 * 0000000140733144: mov     rcx, r9
 * 0000000140733147: call    qword ptr [rbx+0F8h]
 * 000000014073314D: jmp     short loc_140733158
 * 000000014073314F: mov     rcx, r9
 * 0000000140733152: call    qword ptr [rbx+320h]
 * 0000000140733158: mov     [rbx+634h], r14d
 * 000000014073315F: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 0000000140733166: jmp     short loc_140733172
 * 0000000140733168: mov     rbx, r14
 * 000000014073316B: mov     [r14+554h], eax
 * 0000000140733172: lea     r8, [rbx+r13]
 * 0000000140733176: mov     r14d, 1
 * 000000014073317C: add     [rbx+57Ch], r14d
 * 0000000140733183: mov     rax, r8
 * 0000000140733186: mov     [rbp+1910h+var_EB8], r8
 * 000000014073318D: xor     r9d, r9d
 * 0000000140733190: mov     r13d, 0FFFFFFF8h
 * 0000000140733196: lea     ecx, [r14+2Fh]
 * 000000014073319A: lea     edx, [rcx-2Ah]
 * 000000014073319D: mov     [rax], r9
 * 00000001407331A0: add     ecx, r13d
 * 00000001407331A3: add     rax, 8
 * 00000001407331A7: sub     rdx, r14
 * 00000001407331AA: jnz     short loc_14073319D
 * 00000001407331AC: test    ecx, ecx
 * 00000001407331AE: jz      short loc_1407331BB
 * 00000001407331B0: mov     [rax], r9b
 * 00000001407331B3: add     rax, r14
 * 00000001407331B6: add     ecx, 0FFFFFFFFh
 * 00000001407331B9: jnz     short loc_1407331B0
 * 00000001407331BB: xor     eax, eax
 * 00000001407331BD: mov     ecx, r15d
 * 00000001407331C0: mov     [r8], eax
 * 00000001407331C3: add     rcx, rdi
 * 00000001407331C6: mov     [r8+8], rdi
 * 00000001407331CA: mov     rax, rdi
 * 00000001407331CD: mov     [r8+10h], r15d
 * 00000001407331D1: add     [rbx+598h], r15d
 * 00000001407331D8: mov     r11d, [rbx+584h]
 * 00000001407331DF: mov     rdx, [rbx+588h]
 * 00000001407331E6: cmp     rdi, rcx
 * 00000001407331E9: jnb     short loc_1407331F7
 * 00000001407331EB: prefetchnta byte ptr [rax]
 * 00000001407331EE: add     rax, 40h ; '@'
 * 00000001407331F2: cmp     rax, rcx
 * 00000001407331F5: jb      short loc_1407331EB
 * 00000001407331F7: mov     r9d, r15d
 * 00000001407331FA: cmp     r15d, 8
 * 00000001407331FE: jb      short loc_14073321C
 * 0000000140733200: mov     r10d, r15d
 * 0000000140733203: shr     r10, 3
 * 0000000140733207: xor     rdx, [rdi]
 * 000000014073320A: mov     ecx, r11d
 * 000000014073320D: rol     rdx, cl
 * 0000000140733210: add     rdi, 8
 * 0000000140733214: add     r9d, r13d
 * 0000000140733217: sub     r10, r14
 * 000000014073321A: jnz     short loc_140733207
 * 000000014073321C: test    r9d, r9d
 * 000000014073321F: jz      short loc_140733236
 * 0000000140733221: movzx   eax, byte ptr [rdi]
 * 0000000140733224: mov     ecx, r11d
 * 0000000140733227: xor     rdx, rax
 * 000000014073322A: add     rdi, r14
 * 000000014073322D: rol     rdx, cl
 * 0000000140733230: add     r9d, 0FFFFFFFFh
 * 0000000140733234: jnz     short loc_140733221
 * 0000000140733236: mov     rax, rdx
 * 0000000140733239: jmp     short loc_14073323D
 * 000000014073323B: xor     edx, eax
 * 000000014073323D: shr     rax, 1Fh
 * 0000000140733241: test    rax, rax
 * 0000000140733244: jnz     short loc_14073323B
 * 0000000140733246: btr     edx, 1Fh
 * 000000014073324A: mov     [r8+14h], edx
 * 000000014073324E: mov     rax, [rbp+1910h+var_EB8]
 * 0000000140733255: mov     [rbp+1910h+var_13A0], rax
 * 000000014073325C: add     [rbx+598h], r15d
 * 0000000140733263: mov     r15, r14
 * 0000000140733266: mov     rax, [rbp+1910h+var_13A0]
 * 000000014073326D: mov     r14, rbx
 * 0000000140733270: add     dword ptr [rbp+1910h+NtHeaders], r15d
 * 0000000140733274: mov     [rax+18h], r15d
 * 0000000140733278: xor     eax, eax
 * 000000014073327A: mov     rbx, [rbp+1910h+var_AE0]
 * 0000000140733281: jmp     loc_140732F44
 * 0000000140733286: xor     r8d, r8d
 * 0000000140733289: test    eax, eax
 * 000000014073328B: jz      short loc_140733298
 * 000000014073328D: mov     [r14], r8b
 * 0000000140733290: add     r14, r9
 * 0000000140733293: add     eax, 0FFFFFFFFh
 * 0000000140733296: jnz     short loc_14073328D
 * 0000000140733298: mov     r14d, [rbx+634h]
 * 000000014073329F: mov     [rbx+634h], edx
 * 00000001407332A5: cmp     edx, 3
 * 00000001407332A8: jz      short loc_1407332D9
 * 00000001407332AA: mov     eax, [rbx+690h]
 * 00000001407332B0: mov     ecx, r8d
 * 00000001407332B3: and     eax, 10000000h
 * 00000001407332B8: cmovz   ecx, edx
 * 00000001407332BB: test    ecx, ecx
 * 00000001407332BD: jz      short loc_1407332CE
 * 00000001407332BF: lea     rcx, [rdi-8]
 * 00000001407332C3: mov     rdx, [rcx]
 * 00000001407332C6: call    qword ptr [rbx+1F8h]
 * 00000001407332CC: jmp     short loc_1407332E2
 * 00000001407332CE: mov     rcx, rdi
 * 00000001407332D1: call    qword ptr [rbx+0F8h]
 * 00000001407332D7: jmp     short loc_1407332E2
 * 00000001407332D9: mov     rcx, rdi
 * 00000001407332DC: call    qword ptr [rbx+320h]
 * 00000001407332E2: mov     [rbx+634h], r14d
 * 00000001407332E9: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 00000001407332F0: jmp     short loc_1407332FC
 * 00000001407332F2: mov     rbx, r14
 * 00000001407332F5: mov     [r14+554h], eax
 * 00000001407332FC: mov     r10d, 1
 * 0000000140733302: lea     rdi, [rbx+r15]
 * 0000000140733306: add     [rbx+57Ch], r10d
 * 000000014073330D: mov     rax, rdi
 * 0000000140733310: mov     [rbp+1910h+var_1050], rdi
 * 0000000140733317: xor     r8d, r8d
 * 000000014073331A: lea     ecx, [r10+2Fh]
 * 000000014073331E: lea     edx, [rcx-2Ah]
 * 0000000140733321: mov     [rax], r8
 * 0000000140733324: add     ecx, r13d
 * 0000000140733327: add     rax, 8
 * 000000014073332B: sub     rdx, r10
 * 000000014073332E: jnz     short loc_140733321
 * 0000000140733330: test    ecx, ecx
 * 0000000140733332: jz      short loc_14073333F
 * 0000000140733334: mov     [rax], r8b
 * 0000000140733337: add     rax, r10
 * 000000014073333A: add     ecx, 0FFFFFFFFh
 * 000000014073333D: jnz     short loc_140733334
 * 000000014073333F: xor     eax, eax
 * 0000000140733341: lea     rcx, [r12+4]
 * 0000000140733346: mov     [rdi], eax
 * 0000000140733348: mov     [rdi+8], r12
 * 000000014073334C: lea     r15d, [rax+4]
 * 0000000140733350: mov     rax, r12
 * 0000000140733353: mov     [rdi+10h], r15d
 * 0000000140733357: add     [rbx+598h], r15d
 * 000000014073335E: mov     r9d, [rbx+584h]
 * 0000000140733365: mov     rdx, [rbx+588h]
 * 000000014073336C: cmp     r12, rcx
 * 000000014073336F: jnb     short loc_14073337D
 * 0000000140733371: prefetchnta byte ptr [rax]
 * 0000000140733374: add     rax, 40h ; '@'
 * 0000000140733378: cmp     rax, rcx
 * 000000014073337B: jb      short loc_140733371
 * 000000014073337D: mov     r8d, r15d
 * 0000000140733380: movzx   eax, byte ptr [r12]
 * 0000000140733385: mov     ecx, r9d
 * 0000000140733388: xor     rdx, rax
 * 000000014073338B: add     r12, r10
 * 000000014073338E: rol     rdx, cl
 * 0000000140733391: add     r8d, 0FFFFFFFFh
 * 0000000140733395: jnz     short loc_140733380
 * 0000000140733397: mov     rax, rdx
 * 000000014073339A: jmp     short loc_14073339E
 * 000000014073339C: xor     edx, eax
 * 000000014073339E: shr     rax, 1Fh
 * 00000001407333A2: test    rax, rax
 * 00000001407333A5: jnz     short loc_14073339C
 * 00000001407333A7: btr     edx, 1Fh
 * 00000001407333AB: mov     r14, rbx
 * 00000001407333AE: mov     [rdi+14h], edx
 * 00000001407333B1: mov     rax, [rbp+1910h+var_1050]
 * 00000001407333B8: mov     [rbp+1910h+var_1390], rax
 * 00000001407333BF: add     [rbx+598h], r15d
 * 00000001407333C6: mov     r15, r10
 * 00000001407333C9: mov     rax, [rbp+1910h+var_1390]
 * 00000001407333D0: mov     [rax+18h], r15d
 * 00000001407333D4: mov     rdi, [rsp+1A10h+var_19B0]
 * 00000001407333D9: xor     eax, eax
 * 00000001407333DB: mov     r13d, dword ptr [rbp+1910h+var_1950]
 * 00000001407333DF: add     r13d, r15d
 * 00000001407333E2: add     rdi, r15
 * 00000001407333E5: mov     dword ptr [rbp+1910h+var_1950], r13d
 * 00000001407333E9: mov     [rsp+1A10h+var_19B0], rdi
 * 00000001407333EE: cmp     r13d, 2Bh ; '+'
 * 00000001407333F2: jb      loc_140732E35
 * 00000001407333F8: test    dword ptr [r14+690h], 40000000h
 * 0000000140733403: jnz     loc_140733592
 * 0000000140733409: mov     r15d, [r14+554h]
 * 0000000140733410: mov     r8d, [r14+634h]
 * 0000000140733417: lea     eax, [r15+30h]
 * 000000014073341B: cmp     eax, [r14+714h]
 * 0000000140733422: jbe     loc_140733502
 * 0000000140733428: mov     edx, eax
 * 000000014073342A: mov     rcx, r14
 * 000000014073342D: call    sub_140236718
 * 0000000140733432: mov     rbx, rax
 * 0000000140733435: xor     eax, eax
 * 0000000140733437: test    rbx, rbx
 * 000000014073343A: jz      loc_140731C01
 * 0000000140733440: mov     edx, [r14+690h]
 * 0000000140733447: test    dl, 4
 * 000000014073344A: jnz     loc_1407334F9
 * 0000000140733450: mov     eax, [r14+554h]
 * 0000000140733457: and     edx, 20000000h
 * 000000014073345D: mov     rdi, [r14+538h]
 * 0000000140733464: neg     edx
 * 0000000140733466: mov     r9d, 1
 * 000000014073346C: sbb     edx, edx
 * 000000014073346E: and     edx, [r14+634h]
 * 0000000140733475: cmp     eax, 8
 * 0000000140733478: jb      short loc_140733496
 * 000000014073347A: mov     ecx, eax
 * 000000014073347C: shr     rcx, 3
 * 0000000140733480: xor     r8d, r8d
 * 0000000140733483: mov     [r14], r8
 * 0000000140733486: add     eax, 0FFFFFFF8h
 * 0000000140733489: add     r14, 8
 * 000000014073348D: sub     rcx, r9
 * 0000000140733490: jnz     short loc_140733483
 * 0000000140733492: jmp     short loc_140733499
 * 0000000140733494: jmp     short loc_140733494
 * 0000000140733496: xor     r8d, r8d
 * 0000000140733499: test    eax, eax
 * 000000014073349B: jz      short loc_1407334A8
 * 000000014073349D: mov     [r14], r8b
 * 00000001407334A0: add     r14, r9
 * 00000001407334A3: add     eax, 0FFFFFFFFh
 * 00000001407334A6: jnz     short loc_14073349D
 * 00000001407334A8: mov     r14d, [rbx+634h]
 * 00000001407334AF: mov     [rbx+634h], edx
 * 00000001407334B5: cmp     edx, 3
 * 00000001407334B8: jz      short loc_1407334E9
 * 00000001407334BA: mov     eax, [rbx+690h]
 * 00000001407334C0: mov     ecx, r8d
 * 00000001407334C3: and     eax, 10000000h
 * 00000001407334C8: cmovz   ecx, edx
 * 00000001407334CB: test    ecx, ecx
 * 00000001407334CD: jz      short loc_1407334DE
 * 00000001407334CF: lea     rcx, [rdi-8]
 * 00000001407334D3: mov     rdx, [rcx]
 * 00000001407334D6: call    qword ptr [rbx+1F8h]
 * 00000001407334DC: jmp     short loc_1407334F2
 * 00000001407334DE: mov     rcx, rdi
 * 00000001407334E1: call    qword ptr [rbx+0F8h]
 * 00000001407334E7: jmp     short loc_1407334F2
 * 00000001407334E9: mov     rcx, rdi
 * 00000001407334EC: call    qword ptr [rbx+320h]
 * 00000001407334F2: mov     [rbx+634h], r14d
 * 00000001407334F9: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 0000000140733500: jmp     short loc_14073350C
 * 0000000140733502: mov     rbx, r14
 * 0000000140733505: mov     [r14+554h], eax
 * 000000014073350C: mov     eax, 1
 * 0000000140733511: lea     rcx, [rbx+r15]
 * 0000000140733515: add     [rbx+57Ch], eax
 * 000000014073351B: mov     [rbp+1910h+var_F80], rcx
 * 0000000140733522: xor     r8d, r8d
 * 0000000140733525: lea     edx, [rax+2Fh]
 * 0000000140733528: mov     rax, rcx
 * 000000014073352B: lea     edi, [rdx-2Ah]
 * 000000014073352E: lea     r15d, [rdx-2Fh]
 * 0000000140733532: mov     [rax], r8
 * 0000000140733535: add     edx, 0FFFFFFF8h
 * 0000000140733538: add     rax, 8
 * 000000014073353C: sub     rdi, r15
 * 000000014073353F: jnz     short loc_140733532
 * 0000000140733541: test    edx, edx
 * 0000000140733543: jz      short loc_140733550
 * 0000000140733545: mov     [rax], r8b
 * 0000000140733548: add     rax, r15
 * 000000014073354B: add     edx, 0FFFFFFFFh
 * 000000014073354E: jnz     short loc_140733545
 * 0000000140733550: xor     eax, eax
 * 0000000140733552: mov     [rcx], eax
 * 0000000140733554: mov     [rcx+8], rax
 * 0000000140733558: mov     [rcx+10h], eax
 * 000000014073355B: mov     rdx, [rbx+588h]
 * 0000000140733562: mov     rax, rdx
 * 0000000140733565: jmp     short loc_140733569
 * 0000000140733567: xor     edx, eax
 * 0000000140733569: shr     rax, 1Fh
 * 000000014073356D: test    rax, rax
 * 0000000140733570: jnz     short loc_140733567
 * 0000000140733572: btr     edx, 1Fh
 * 0000000140733576: mov     r14, rbx
 * 0000000140733579: mov     [rcx+14h], edx
 * 000000014073357C: mov     rax, [rbp+1910h+var_F80]
 * 0000000140733583: mov     [rbp+1910h+var_1380], rax
 * 000000014073358A: sub     eax, ebx
 * 000000014073358C: mov     [rbx+720h], eax
 * 0000000140733592: mov     eax, dword ptr [rbp+1910h+NtHeaders]
 * 0000000140733595: mov     r9d, 80000000h
 * 000000014073359B: mov     r12d, dword ptr [rsp+1A10h+var_19A8]
 * 00000001407335A0: mov     [r14+550h], eax
 * 00000001407335A7: xor     eax, eax
 * 00000001407335A9: mov     [rbp+1910h+var_16D8], r14
 * 00000001407335B0: test    r14, r14
 * 00000001407335B3: jz      loc_140731C01
 * 00000001407335B9: mov     ebx, [r14+690h]
 * 00000001407335C0: mov     r13d, eax
 * 00000001407335C3: mov     dword ptr [rsp+1A10h+var_19A8], eax
 * 00000001407335C7: bt      ebx, 1Eh
 * 00000001407335CB: jb      loc_1407336DA
 * 00000001407335D1: test    r12d, r12d
 * 00000001407335D4: jnz     loc_1407336DA
 * 00000001407335DA: rdtsc
 * 00000001407335DC: shl     rdx, 20h
 * 00000001407335E0: mov     rdi, 7010008004002001h
 * 00000001407335EA: or      rax, rdx
 * 00000001407335ED: mov     r8, 0CCCCCCCCCCCCCCCDh
 * 00000001407335F7: mov     rcx, rax
 * 00000001407335FA: mov     rdx, rax
 * 00000001407335FD: ror     rcx, 3
 * 0000000140733601: mov     rax, rdi
 * 0000000140733604: xor     rdx, rcx
 * 0000000140733607: mul     rdx
 * 000000014073360A: mov     rcx, rdx
 * 000000014073360D: mov     [rbp+1910h+var_1040], rdx
 * 0000000140733614: xor     rcx, rax
 * 0000000140733617: mov     rax, r8
 * 000000014073361A: mul     rcx
 * 000000014073361D: shr     rdx, 3
 * 0000000140733621: lea     rax, [rdx+rdx*4]
 * 0000000140733625: add     rax, rax
 * 0000000140733628: sub     rcx, rax
 * 000000014073362B: cmp     rcx, r15
 * 000000014073362E: jnb     loc_1407336D8
 * 0000000140733634: mov     r13d, r15d
 * 0000000140733637: mov     dword ptr [rsp+1A10h+var_19A8], r15d
 * 000000014073363C: rdtsc
 * 000000014073363E: shl     rdx, 20h
 * 0000000140733642: or      rax, rdx
 * 0000000140733645: mov     rcx, rax
 * 0000000140733648: mov     rdx, rax
 * 000000014073364B: ror     rcx, 3
 * 000000014073364F: mov     rax, rdi
 * 0000000140733652: xor     rdx, rcx
 * 0000000140733655: mul     rdx
 * 0000000140733658: mov     rcx, rdx
 * 000000014073365B: mov     [rbp+1910h+var_1370], rdx
 * 0000000140733662: xor     rcx, rax
 * 0000000140733665: mov     rax, r8
 * 0000000140733668: mul     rcx
 * 000000014073366B: shr     rdx, 3
 * 000000014073366F: lea     rax, [rdx+rdx*4]
 * 0000000140733673: add     rax, rax
 * 0000000140733676: sub     rcx, rax
 * 0000000140733679: cmp     rcx, 3
 * 000000014073367D: jnb     short loc_1407336D8
 * 000000014073367F: bts     ebx, 10h
 * 0000000140733683: mov     [r14+690h], ebx
 * 000000014073368A: rdtsc
 * 000000014073368C: shl     rdx, 20h
 * 0000000140733690: or      rax, rdx
 * 0000000140733693: mov     rcx, rax
 * 0000000140733696: mov     rdx, rax
 * 0000000140733699: ror     rcx, 3
 * 000000014073369D: mov     rax, rdi
 * 00000001407336A0: xor     rdx, rcx
 * 00000001407336A3: mul     rdx
 * 00000001407336A6: mov     rcx, rdx
 * 00000001407336A9: mov     [rbp+1910h+var_ED0], rdx
 * 00000001407336B0: xor     rcx, rax
 * 00000001407336B3: mov     rax, r8
 * 00000001407336B6: mul     rcx
 * 00000001407336B9: shr     rdx, 3
 * 00000001407336BD: lea     rax, [rdx+rdx*4]
 * 00000001407336C1: add     rax, rax
 * 00000001407336C4: sub     rcx, rax
 * 00000001407336C7: cmp     rcx, 3
 * 00000001407336CB: jnb     short loc_1407336D8
 * 00000001407336CD: bts     ebx, 14h
 * 00000001407336D1: mov     [r14+690h], ebx
 * 00000001407336D8: xor     eax, eax
 * 00000001407336DA: cli
 * 00000001407336DB: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 00000001407336E1: jnz     short loc_1407336E5
 * 00000001407336E3: jmp     short loc_1407336E3
 * 00000001407336E5: sti
 * 00000001407336E6: mov     dword ptr [rbp+1910h+NtHeaders], eax
 * 00000001407336E9: mov     dword ptr [rbp+1910h+var_1950], 0C0000225h
 * 00000001407336F0: mov     eax, eax
 * 00000001407336F2: lea     rcx, [rax+rax*2]
 * 00000001407336F6: lea     rax, cs:140000000h
 * 00000001407336FD: lea     rdi, rva qword_140789120[rax]
 * 0000000140733704: lea     rdi, [rdi+rcx*8]
 * 0000000140733708: mov     eax, [rdi+10h]
 * 000000014073370B: and     eax, 0E0000000h
 * 0000000140733710: cmp     eax, r9d
 * 0000000140733713: jz      short loc_140733720
 * 0000000140733715: xor     eax, eax
 * 0000000140733717: test    r13d, r13d
 * 000000014073371A: jnz     loc_1407373D6
 * 0000000140733720: mov     rax, [rdi+8]
 * 0000000140733724: xor     edx, edx
 * 0000000140733726: test    rax, rax
 * 0000000140733729: jnz     short loc_14073373F
 * 000000014073372B: lea     rax, cs:140000000h
 * 0000000140733732: mov     r15, rax
 * 0000000140733735: mov     [rsp+1A10h+var_19B0], rax
 * 000000014073373A: jmp     loc_1407337E7
 * 000000014073373F: cmp     rax, r15
 * 0000000140733742: jnz     short loc_140733755
 * 0000000140733744: mov     r15, cs:PsHalImageBase
 * 000000014073374B: mov     [rsp+1A10h+var_19B0], r15
 * 0000000140733750: jmp     loc_1407337DC
 * 0000000140733755: mov     rcx, gs:188h
 * 000000014073375E: xor     eax, eax
 * 0000000140733760: mov     r14, [rbp+1910h+var_16D8]
 * 0000000140733767: mov     r15d, eax
 * 000000014073376A: mov     [rsp+1A10h+var_19B0], rax
 * 000000014073376F: call    qword ptr [r14+160h]
 * 0000000140733776: mov     rcx, [r14+448h]
 * 000000014073377D: lea     r12d, [r15+1]
 * 0000000140733781: mov     dl, r12b
 * 0000000140733784: call    qword ptr [r14+0E0h]
 * 000000014073378B: mov     rbx, qword ptr cs:PsLoadedModuleList
 * 0000000140733792: jmp     short loc_1407337AA
 * 0000000140733794: lea     rdx, [rbx+58h]; String2
 * 0000000140733798: mov     r8b, r12b; CaseInSensitive
 * 000000014073379B: mov     rcx, rdi; String1
 * 000000014073379E: call    RtlEqualUnicodeString
 * 00000001407337A3: test    al, al
 * 00000001407337A5: jnz     short loc_1407337B8
 * 00000001407337A7: mov     rbx, [rbx]
 * 00000001407337AA: lea     rax, PsLoadedModuleList
 * 00000001407337B1: cmp     rbx, rax
 * 00000001407337B4: jnz     short loc_140733794
 * 00000001407337B6: jmp     short loc_1407337C1
 * 00000001407337B8: mov     r15, [rbx+30h]
 * 00000001407337BC: mov     [rsp+1A10h+var_19B0], r15
 * 00000001407337C1: mov     rcx, [r14+448h]
 * 00000001407337C8: call    qword ptr [r14+110h]
 * 00000001407337CF: call    qword ptr [r14+168h]
 * 00000001407337D6: mov     r9d, 80000000h
 * 00000001407337DC: test    r15, r15
 * 00000001407337DF: jz      loc_1407373B4
 * 00000001407337E5: xor     edx, edx
 * 00000001407337E7: mov     ecx, [rdi+10h]
 * 00000001407337EA: mov     ebx, edx
 * 00000001407337EC: mov     al, cl
 * 00000001407337EE: mov     edi, 1
 * 00000001407337F3: and     al, dil
 * 00000001407337F6: cmovnz  ebx, edi
 * 00000001407337F9: xor     eax, eax
 * 00000001407337FB: mov     dword ptr [rbp+1910h+var_1958], ebx
 * 00000001407337FE: test    cl, 2
 * 0000000140733801: jz      loc_140735791
 * 0000000140733807: test    r13d, r13d
 * 000000014073380A: jnz     loc_140735791
 * 0000000140733810: lea     r8, [rbp+1910h+var_181C]
 * 0000000140733817: mov     [rsp+1A10h+var_19C0], r14
 * 000000014073381C: lea     rdx, [rbp+1910h+var_1030]
 * 0000000140733823: mov     [rbp+1910h+var_16C8], r14
 * 000000014073382A: mov     rcx, r15
 * 000000014073382D: mov     r13, r14
 * 0000000140733830: call    qword ptr [r14+1D0h]
 * 0000000140733837: mov     r11, rax
 * 000000014073383A: mov     [rsp+1A10h+var_19A0], rax
 * 000000014073383F: xor     eax, eax
 * 0000000140733841: test    r11, r11
 * 0000000140733844: jz      loc_140731C01
 * 000000014073384A: mov     r15, [rbp+1910h+var_1030]
 * 0000000140733851: lea     rcx, [rbp+1910h+var_E48]
 * 0000000140733858: mov     r12d, [rbp+1910h+var_181C]
 * 000000014073385F: lea     edx, [rdi+3]
 * 0000000140733862: mov     [rsp+1A10h+var_19D0], r15
 * 0000000140733867: mov     [rbp+1910h+var_E50], rax
 * 000000014073386E: mov     [rcx], al
 * 0000000140733870: add     rcx, rdi
 * 0000000140733873: add     edx, 0FFFFFFFFh
 * 0000000140733876: jnz     short loc_14073386E
 * 0000000140733878: mov     r10d, eax
 * 000000014073387B: cmp     [r14+57Ch], eax
 * 0000000140733882: jbe     loc_140733A52
 * 0000000140733888: mov     ecx, [rbp+1910h+var_E48]
 * 000000014073388E: mov     edx, dword ptr [rbp+1910h+var_E50+4]
 * 0000000140733894: mov     edi, dword ptr [rbp+1910h+var_E50]
 * 000000014073389A: mov     rax, [r14+730h]
 * 00000001407338A1: mov     r9, r14
 * 00000001407338A4: test    rax, rax
 * 00000001407338A7: cmovnz  r9, rax
 * 00000001407338AB: xor     eax, eax
 * 00000001407338AD: mov     r8d, eax
 * 00000001407338B0: mov     ebx, [r9+578h]
 * 00000001407338B7: add     rbx, r9
 * 00000001407338BA: test    edi, edi
 * 00000001407338BC: jz      short loc_1407338CB
 * 00000001407338BE: cmp     edx, r10d
 * 00000001407338C1: ja      short loc_1407338CB
 * 00000001407338C3: mov     ebx, ecx
 * 00000001407338C5: mov     r8d, edx
 * 00000001407338C8: add     rbx, r9
 * 00000001407338CB: cmp     r8d, r10d
 * 00000001407338CE: jz      loc_1407339F3
 * 00000001407338D4: mov     eax, r10d
 * 00000001407338D7: mov     r15d, 2
 * 00000001407338DD: sub     eax, r8d
 * 00000001407338E0: mov     r11, 0AAAAAAAAAAAAAAABh
 * 00000001407338EA: mov     edi, eax
 * 00000001407338EC: add     r8d, eax
 * 00000001407338EF: mov     ecx, [rbx]
 * 00000001407338F1: cmp     ecx, 11h
 * 00000001407338F4: jg      short loc_140733963
 * 00000001407338F6: jz      loc_1407339D1
 * 00000001407338FC: sub     ecx, 1
 * 00000001407338FF: jz      short loc_14073394D
 * 0000000140733901: sub     ecx, 6
 * 0000000140733904: jz      short loc_14073393C
 * 0000000140733906: sub     ecx, 1
 * 0000000140733909: jz      short loc_14073392D
 * 000000014073390B: sub     ecx, r15d
 * 000000014073390E: jz      short loc_14073391F
 * 0000000140733910: cmp     ecx, r15d
 * 0000000140733913: jz      short loc_14073394D
 * 0000000140733915: mov     eax, 30h ; '0'
 * 000000014073391A: jmp     loc_1407339D6
 * 000000014073391F: mov     eax, [rbx+1Ch]
 * 0000000140733922: add     eax, 3
 * 0000000140733925: shl     eax, 4
 * 0000000140733928: jmp     loc_1407339D6
 * 000000014073392D: movzx   eax, word ptr [rbx+20h]
 * 0000000140733931: add     eax, 37h ; '7'
 * 0000000140733934: and     eax, 0FFFFFFF8h
 * 0000000140733937: jmp     loc_1407339D6
 * 000000014073393C: mov     eax, [rbx+18h]
 * 000000014073393F: add     eax, r15d
 * 0000000140733942: lea     eax, [rax+rax*2]
 * 0000000140733945: shl     eax, 3
 * 0000000140733948: jmp     loc_1407339D6
 * 000000014073394D: mov     ecx, [rbx+10h]
 * 0000000140733950: mov     rax, r11
 * 0000000140733953: mul     rcx
 * 0000000140733956: shr     rdx, 3
 * 000000014073395A: lea     eax, ds:30h[rdx*4]
 * 0000000140733961: jmp     short loc_1407339D6
 * 0000000140733963: cmp     ecx, 13h
 * 0000000140733966: jz      short loc_1407339D1
 * 0000000140733968: cmp     ecx, 1Ch
 * 000000014073396B: jz      short loc_1407339C8
 * 000000014073396D: cmp     ecx, 1Eh
 * 0000000140733970: jz      short loc_1407339A4
 * 0000000140733972: lea     eax, [rcx-21h]
 * 0000000140733975: mov     ecx, 1
 * 000000014073397A: cmp     eax, ecx
 * 000000014073397C: ja      short loc_140733915
 * 000000014073397E: mov     ecx, [rbx+20h]
 * 0000000140733981: mov     edx, [rbx+28h]
 * 0000000140733984: and     ecx, 0FFFh
 * 000000014073398A: add     rdx, 0FFFh
 * 0000000140733991: add     rdx, rcx
 * 0000000140733994: shr     rdx, 0Ch
 * 0000000140733998: lea     eax, [rdx+rdx*4]
 * 000000014073399B: lea     eax, ds:30h[rax*4]
 * 00000001407339A2: jmp     short loc_1407339D6
 * 00000001407339A4: mov     ecx, [rbx+24h]
 * 00000001407339A7: mov     rax, r11
 * 00000001407339AA: dec     ecx
 * 00000001407339AC: mul     rcx
 * 00000001407339AF: movzx   eax, word ptr [rbx+28h]
 * 00000001407339B3: shr     rdx, 3
 * 00000001407339B7: add     edx, 7
 * 00000001407339BA: and     edx, 0FFFFFFF8h
 * 00000001407339BD: add     eax, r15d
 * 00000001407339C0: lea     eax, [rax+rax*2]
 * 00000001407339C3: lea     eax, [rdx+rax*8]
 * 00000001407339C6: jmp     short loc_1407339D6
 * 00000001407339C8: movzx   eax, word ptr [rbx+28h]
 * 00000001407339CC: jmp     loc_140733931
 * 00000001407339D1: mov     eax, 38h ; '8'
 * 00000001407339D6: add     rbx, rax
 * 00000001407339D9: mov     eax, 1
 * 00000001407339DE: sub     rdi, rax
 * 00000001407339E1: jnz     loc_1407338EF
 * 00000001407339E7: mov     r11, [rsp+1A10h+var_19A0]
 * 00000001407339EC: mov     r15, [rsp+1A10h+var_19D0]
 * 00000001407339F1: jmp     short loc_1407339F8
 * 00000001407339F3: mov     eax, 1
 * 00000001407339F8: mov     edx, r8d
 * 00000001407339FB: mov     dword ptr [rbp+1910h+var_E50], eax
 * 0000000140733A01: mov     ecx, ebx
 * 0000000140733A03: mov     dword ptr [rbp+1910h+var_E50+4], edx
 * 0000000140733A09: sub     ecx, r9d
 * 0000000140733A0C: mov     edi, eax
 * 0000000140733A0E: mov     [rbp+1910h+var_E48], ecx
 * 0000000140733A14: mov     r8d, 1
 * 0000000140733A1A: mov     eax, [rbx]
 * 0000000140733A1C: cmp     eax, r8d
 * 0000000140733A1F: jz      short loc_140733A26
 * 0000000140733A21: cmp     eax, 0Ch
 * 0000000140733A24: jnz     short loc_140733A32
 * 0000000140733A26: cmp     [rbx+8], r11
 * 0000000140733A2A: jnz     short loc_140733A32
 * 0000000140733A2C: cmp     [rbx+10h], r12d
 * 0000000140733A30: jz      short loc_140733A55
 * 0000000140733A32: add     eax, 0FFFFFFDFh
 * 0000000140733A35: cmp     eax, r8d
 * 0000000140733A38: ja      short loc_140733A40
 * 0000000140733A3A: cmp     [rbx+20h], r15
 * 0000000140733A3E: jz      short loc_140733A55
 * 0000000140733A40: add     r10d, r8d
 * 0000000140733A43: cmp     r10d, [r14+57Ch]
 * 0000000140733A4A: jb      loc_14073389A
 * 0000000140733A50: xor     eax, eax
 * 0000000140733A52: mov     rbx, rax
 * 0000000140733A55: test    rbx, rbx
 * 0000000140733A58: jnz     loc_14073578A
 * 0000000140733A5E: mov     rcx, [rsp+1A10h+var_19B0]
 * 0000000140733A63: lea     r8, [rbp+1910h+var_1774]
 * 0000000140733A6A: lea     rdx, [rbp+1910h+BugCheckParameter2]
 * 0000000140733A71: call    qword ptr [r14+1D0h]
 * 0000000140733A78: mov     r12, rax
 * 0000000140733A7B: mov     [rsp+1A10h+var_19A0], rax
 * 0000000140733A80: xor     eax, eax
 * 0000000140733A82: test    r12, r12
 * 0000000140733A85: jnz     short loc_140733A97
 * 0000000140733A87: mov     ecx, 0C000007Bh
 * 0000000140733A8C: mov     r12d, 80000000h
 * 0000000140733A92: jmp     loc_140735775
 * 0000000140733A97: mov     r15d, [rbp+1910h+var_1774]
 * 0000000140733A9E: mov     ecx, 4
 * 0000000140733AA3: mov     r11, [rbp+1910h+BugCheckParameter2]
 * 0000000140733AAA: xor     edx, edx
 * 0000000140733AAC: mov     [rbp+1910h+var_E70], rax
 * 0000000140733AB3: lea     rax, [rbp+1910h+var_E68]
 * 0000000140733ABA: mov     dword ptr [rbp+1910h+var_1980], r15d
 * 0000000140733ABE: lea     r8d, [rcx-3]
 * 0000000140733AC2: mov     [rsp+1A10h+var_19D0], r11
 * 0000000140733AC7: mov     [rax], dl
 * 0000000140733AC9: add     rax, r8
 * 0000000140733ACC: add     ecx, 0FFFFFFFFh
 * 0000000140733ACF: jnz     short loc_140733AC7
 * 0000000140733AD1: xor     eax, eax
 * 0000000140733AD3: mov     r10d, eax
 * 0000000140733AD6: cmp     [r14+57Ch], eax
 * 0000000140733ADD: jbe     loc_140733CB8
 * 0000000140733AE3: mov     ecx, [rbp+1910h+var_E68]
 * 0000000140733AE9: mov     edx, dword ptr [rbp+1910h+var_E70+4]
 * 0000000140733AEF: mov     edi, dword ptr [rbp+1910h+var_E70]
 * 0000000140733AF5: mov     rax, [r14+730h]
 * 0000000140733AFC: mov     r9, r14
 * 0000000140733AFF: test    rax, rax
 * 0000000140733B02: cmovnz  r9, rax
 * 0000000140733B06: xor     eax, eax
 * 0000000140733B08: mov     [rsp+78h], r9
 * 0000000140733B0D: mov     r8d, eax
 * 0000000140733B10: mov     ebx, [r9+578h]
 * 0000000140733B17: add     rbx, r9
 * 0000000140733B1A: test    edi, edi
 * 0000000140733B1C: jz      short loc_140733B2B
 * 0000000140733B1E: cmp     edx, r10d
 * 0000000140733B21: ja      short loc_140733B2B
 * 0000000140733B23: mov     ebx, ecx
 * 0000000140733B25: mov     r8d, edx
 * 0000000140733B28: add     rbx, r9
 * 0000000140733B2B: cmp     r8d, r10d
 * 0000000140733B2E: jz      loc_140733C59
 * 0000000140733B34: mov     eax, r10d
 * 0000000140733B37: mov     esi, 2
 * 0000000140733B3C: sub     eax, r8d
 * 0000000140733B3F: mov     r9, 0AAAAAAAAAAAAAAABh
 * 0000000140733B49: mov     edi, eax
 * 0000000140733B4B: add     r8d, eax
 * 0000000140733B4E: mov     ecx, [rbx]
 * 0000000140733B50: cmp     ecx, 11h
 * 0000000140733B53: jg      short loc_140733BBF
 * 0000000140733B55: jz      loc_140733C2E
 * 0000000140733B5B: sub     ecx, 1
 * 0000000140733B5E: jz      short loc_140733BA9
 * 0000000140733B60: sub     ecx, 6
 * 0000000140733B63: jz      short loc_140733B99
 * 0000000140733B65: sub     ecx, 1
 * 0000000140733B68: jz      short loc_140733B8A
 * 0000000140733B6A: sub     ecx, esi
 * 0000000140733B6C: jz      short loc_140733B7C
 * 0000000140733B6E: cmp     ecx, esi
 * 0000000140733B70: jz      short loc_140733BA9
 * 0000000140733B72: mov     eax, 30h ; '0'
 * 0000000140733B77: jmp     loc_140733C33
 * 0000000140733B7C: mov     eax, [rbx+1Ch]
 * 0000000140733B7F: add     eax, 3
 * 0000000140733B82: shl     eax, 4
 * 0000000140733B85: jmp     loc_140733C33
 * 0000000140733B8A: movzx   eax, word ptr [rbx+20h]
 * 0000000140733B8E: add     eax, 37h ; '7'
 * 0000000140733B91: and     eax, 0FFFFFFF8h
 * 0000000140733B94: jmp     loc_140733C33
 * 0000000140733B99: mov     eax, [rbx+18h]
 * 0000000140733B9C: add     eax, esi
 * 0000000140733B9E: lea     eax, [rax+rax*2]
 * 0000000140733BA1: shl     eax, 3
 * 0000000140733BA4: jmp     loc_140733C33
 * 0000000140733BA9: mov     ecx, [rbx+10h]
 * 0000000140733BAC: mov     rax, r9
 * 0000000140733BAF: mul     rcx
 * 0000000140733BB2: shr     rdx, 3
 * 0000000140733BB6: lea     eax, ds:30h[rdx*4]
 * 0000000140733BBD: jmp     short loc_140733C33
 * 0000000140733BBF: cmp     ecx, 13h
 * 0000000140733BC2: jz      short loc_140733C2E
 * 0000000140733BC4: cmp     ecx, 1Ch
 * 0000000140733BC7: jz      short loc_140733C25
 * 0000000140733BC9: cmp     ecx, 1Eh
 * 0000000140733BCC: jz      short loc_140733C02
 * 0000000140733BCE: lea     eax, [rcx-21h]
 * 0000000140733BD1: mov     r11d, 1
 * 0000000140733BD7: cmp     eax, r11d
 * 0000000140733BDA: ja      short loc_140733B72
 * 0000000140733BDC: mov     ecx, [rbx+20h]
 * 0000000140733BDF: mov     edx, [rbx+28h]
 * 0000000140733BE2: and     ecx, 0FFFh
 * 0000000140733BE8: add     rdx, 0FFFh
 * 0000000140733BEF: add     rdx, rcx
 * 0000000140733BF2: shr     rdx, 0Ch
 * 0000000140733BF6: lea     eax, [rdx+rdx*4]
 * 0000000140733BF9: lea     eax, ds:30h[rax*4]
 * 0000000140733C00: jmp     short loc_140733C33
 * 0000000140733C02: mov     ecx, [rbx+24h]
 * 0000000140733C05: mov     rax, r9
 * 0000000140733C08: dec     ecx
 * 0000000140733C0A: mul     rcx
 * 0000000140733C0D: movzx   eax, word ptr [rbx+28h]
 * 0000000140733C11: shr     rdx, 3
 * 0000000140733C15: add     edx, 7
 * 0000000140733C18: and     edx, 0FFFFFFF8h
 * 0000000140733C1B: add     eax, esi
 * 0000000140733C1D: lea     eax, [rax+rax*2]
 * 0000000140733C20: lea     eax, [rdx+rax*8]
 * 0000000140733C23: jmp     short loc_140733C33
 * 0000000140733C25: movzx   eax, word ptr [rbx+28h]
 * 0000000140733C29: jmp     loc_140733B8E
 * 0000000140733C2E: mov     eax, 38h ; '8'
 * 0000000140733C33: add     rbx, rax
 * 0000000140733C36: mov     eax, 1
 * 0000000140733C3B: sub     rdi, rax
 * 0000000140733C3E: jnz     loc_140733B4E
 * 0000000140733C44: mov     r9, [rsp+78h]
 * 0000000140733C49: mov     r11, [rsp+1A10h+var_19D0]
 * 0000000140733C4E: mov     r15d, dword ptr [rbp+1910h+var_1980]
 * 0000000140733C52: mov     r12, [rsp+1A10h+var_19A0]
 * 0000000140733C57: jmp     short loc_140733C5E
 * 0000000140733C59: mov     eax, 1
 * 0000000140733C5E: mov     edx, r8d
 * 0000000140733C61: mov     dword ptr [rbp+1910h+var_E70], eax
 * 0000000140733C67: mov     ecx, ebx
 * 0000000140733C69: mov     dword ptr [rbp+1910h+var_E70+4], edx
 * 0000000140733C6F: sub     ecx, r9d
 * 0000000140733C72: mov     edi, eax
 * 0000000140733C74: mov     [rbp+1910h+var_E68], ecx
 * 0000000140733C7A: mov     r8d, 1
 * 0000000140733C80: mov     eax, [rbx]
 * 0000000140733C82: cmp     eax, r8d
 * 0000000140733C85: jz      short loc_140733C8C
 * 0000000140733C87: cmp     eax, 0Ch
 * 0000000140733C8A: jnz     short loc_140733C98
 * 0000000140733C8C: cmp     [rbx+8], r12
 * 0000000140733C90: jnz     short loc_140733C98
 * 0000000140733C92: cmp     [rbx+10h], r15d
 * 0000000140733C96: jz      short loc_140733CBB
 * 0000000140733C98: add     eax, 0FFFFFFDFh
 * 0000000140733C9B: cmp     eax, r8d
 * 0000000140733C9E: ja      short loc_140733CA6
 * 0000000140733CA0: cmp     [rbx+20h], r11
 * 0000000140733CA4: jz      short loc_140733CBB
 * 0000000140733CA6: add     r10d, r8d
 * 0000000140733CA9: cmp     r10d, [r14+57Ch]
 * 0000000140733CB0: jb      loc_140733AF5
 * 0000000140733CB6: xor     eax, eax
 * 0000000140733CB8: mov     rbx, rax
 * 0000000140733CBB: mov     [rbp+1910h+var_F70], rbx
 * 0000000140733CC2: test    rbx, rbx
 * 0000000140733CC5: jnz     loc_1407356C4
 * 0000000140733CCB: mov     rcx, [rsp+1A10h+var_19B0]
 * 0000000140733CD0: call    qword ptr [r14+270h]
 * 0000000140733CD7: mov     ebx, [rbp+1910h+var_1774]
 * 0000000140733CDD: mov     edi, eax
 * 0000000140733CDF: mov     dword ptr [rbp+1910h+var_1980], eax
 * 0000000140733CE2: mov     eax, dword ptr [rbp+1910h+var_1958]
 * 0000000140733CE5: mov     dword ptr [rsp+1A10h+var_19B8], ebx
 * 0000000140733CE9: test    al, 2
 * 0000000140733CEB: jz      short loc_140733CF5
 * 0000000140733CED: test    edi, edi
 * 0000000140733CEF: jz      loc_1407356C4
 * 0000000140733CF5: test    dword ptr [r14+690h], 40000000h
 * 0000000140733D00: jz      short loc_140733D26
 * 0000000140733D02: mov     rdx, [rbp+1910h+BugCheckParameter2]
 * 0000000140733D09: lea     rcx, [rbp+1910h+var_16C8]
 * 0000000140733D10: mov     r8d, eax
 * 0000000140733D13: call    sub_14072DC88
 * 0000000140733D18: mov     r13, [rbp+1910h+var_16C8]
 * 0000000140733D1F: mov     ecx, eax
 * 0000000140733D21: jmp     loc_14073569E
 * 0000000140733D26: mov     rax, [rbp+1910h+BugCheckParameter2]
 * 0000000140733D2D: mov     rcx, rax
 * 0000000140733D30: mov     [rsp+1A10h+var_19D0], rax
 * 0000000140733D35: call    qword ptr [r14+1C8h]
 * 0000000140733D3C: xor     r10d, r10d
 * 0000000140733D3F: mov     [rsp+78h], rax
 * 0000000140733D44: test    rax, rax
 * 0000000140733D47: jz      loc_140735699
 * 0000000140733D4D: mov     r15d, [r14+554h]
 * 0000000140733D54: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140733D5E: mov     r8d, [r14+634h]
 * 0000000140733D65: mov     r13, rbx
 * 0000000140733D68: mul     rbx
 * 0000000140733D6B: mov     rax, rdx
 * 0000000140733D6E: shr     rax, 3
 * 0000000140733D72: mov     ecx, eax
 * 0000000140733D74: mov     [rbp+1910h+var_1990], rax
 * 0000000140733D78: shl     ecx, 2
 * 0000000140733D7B: mov     eax, edi
 * 0000000140733D7D: neg     eax
 * 0000000140733D7F: mov     dword ptr [rbp+1910h+Size], ecx
 * 0000000140733D82: lea     edi, [r10+1]
 * 0000000140733D86: sbb     r12d, r12d
 * 0000000140733D89: and     r12d, 0Bh
 * 0000000140733D8D: lea     eax, [rcx+30h]
 * 0000000140733D90: add     r12d, edi
 * 0000000140733D93: add     eax, r15d
 * 0000000140733D96: cmp     eax, [r14+714h]
 * 0000000140733D9D: jbe     loc_140733E89
 * 0000000140733DA3: mov     edx, eax
 * 0000000140733DA5: mov     rcx, r14
 * 0000000140733DA8: call    sub_140236718
 * 0000000140733DAD: mov     r9, rax
 * 0000000140733DB0: mov     [rbp+1910h+var_1968], rax
 * 0000000140733DB4: xor     eax, eax
 * 0000000140733DB6: test    r9, r9
 * 0000000140733DB9: jz      loc_140734F02
 * 0000000140733DBF: mov     ebx, [r14+690h]
 * 0000000140733DC6: test    bl, 4
 * 0000000140733DC9: jnz     loc_140733E79
 * 0000000140733DCF: mov     edx, [r14+554h]
 * 0000000140733DD6: and     ebx, 20000000h
 * 0000000140733DDC: mov     r8, [r14+538h]
 * 0000000140733DE3: neg     ebx
 * 0000000140733DE5: sbb     ebx, ebx
 * 0000000140733DE7: and     ebx, [r14+634h]
 * 0000000140733DEE: cmp     edx, 8
 * 0000000140733DF1: jb      short loc_140733E0A
 * 0000000140733DF3: mov     eax, edx
 * 0000000140733DF5: shr     rax, 3
 * 0000000140733DF9: xor     ecx, ecx
 * 0000000140733DFB: mov     [r14], rcx
 * 0000000140733DFE: add     edx, 0FFFFFFF8h
 * 0000000140733E01: add     r14, 8
 * 0000000140733E05: sub     rax, rdi
 * 0000000140733E08: jnz     short loc_140733DFB
 * 0000000140733E0A: test    edx, edx
 * 0000000140733E0C: jz      short loc_140733E19
 * 0000000140733E0E: mov     [r14], al
 * 0000000140733E11: add     r14, rdi
 * 0000000140733E14: add     edx, 0FFFFFFFFh
 * 0000000140733E17: jnz     short loc_140733E0E
 * 0000000140733E19: mov     edi, [r9+634h]
 * 0000000140733E20: mov     [r9+634h], ebx
 * 0000000140733E27: cmp     ebx, 3
 * 0000000140733E2A: jz      short loc_140733E5F
 * 0000000140733E2C: mov     eax, [r9+690h]
 * 0000000140733E33: xor     edx, edx
 * 0000000140733E35: and     eax, 10000000h
 * 0000000140733E3A: mov     ecx, edx
 * 0000000140733E3C: cmovz   ecx, ebx
 * 0000000140733E3F: test    ecx, ecx
 * 0000000140733E41: jz      short loc_140733E53
 * 0000000140733E43: lea     rcx, [r8-8]
 * 0000000140733E47: mov     rdx, [rcx]
 * 0000000140733E4A: call    qword ptr [r9+1F8h]
 * 0000000140733E51: jmp     short loc_140733E69
 * 0000000140733E53: mov     rcx, r8
 * 0000000140733E56: call    qword ptr [r9+0F8h]
 * 0000000140733E5D: jmp     short loc_140733E69
 * 0000000140733E5F: mov     rcx, r8
 * 0000000140733E62: call    qword ptr [r9+320h]
 * 0000000140733E69: mov     r9, [rbp+1910h+var_1968]
 * 0000000140733E6D: mov     [r9+634h], edi
 * 0000000140733E74: mov     edi, 1
 * 0000000140733E79: and     dword ptr [r9+690h], 0FFFFFFFBh
 * 0000000140733E81: mov     ebx, r13d
 * 0000000140733E84: xor     r10d, r10d
 * 0000000140733E87: jmp     short loc_140733E97
 * 0000000140733E89: mov     r9, r14
 * 0000000140733E8C: mov     [rbp+1910h+var_1968], r14
 * 0000000140733E90: mov     [r14+554h], eax
 * 0000000140733E97: add     [r9+57Ch], edi
 * 0000000140733E9E: lea     r14, [r9+r15]
 * 0000000140733EA2: mov     ecx, 30h ; '0'
 * 0000000140733EA7: mov     [rbp+1910h+var_1340], r14
 * 0000000140733EAE: mov     rax, r14
 * 0000000140733EB1: lea     edx, [rcx-2Ah]
 * 0000000140733EB4: mov     [rax], r10
 * 0000000140733EB7: add     ecx, 0FFFFFFF8h
 * 0000000140733EBA: add     rax, 8
 * 0000000140733EBE: sub     rdx, rdi
 * 0000000140733EC1: jnz     short loc_140733EB4
 * 0000000140733EC3: test    ecx, ecx
 * 0000000140733EC5: jz      short loc_140733ED2
 * 0000000140733EC7: mov     [rax], r10b
 * 0000000140733ECA: add     rax, rdi
 * 0000000140733ECD: add     ecx, 0FFFFFFFFh
 * 0000000140733ED0: jnz     short loc_140733EC7
 * 0000000140733ED2: mov     r15, [rsp+1A10h+var_19A0]
 * 0000000140733ED7: mov     eax, 20h ; ' '
 * 0000000140733EDC: mov     [r14], r12d
 * 0000000140733EDF: cmp     r12d, eax
 * 0000000140733EE2: mov     r12, [rbp+1910h+var_1968]
 * 0000000140733EE6: mov     [r14+8], r15
 * 0000000140733EEA: jnz     short loc_140733F02
 * 0000000140733EEC: test    ebx, ebx
 * 0000000140733EEE: jz      short loc_140733F02
 * 0000000140733EF0: lea     r9, [r14+18h]
 * 0000000140733EF4: mov     r8d, ebx
 * 0000000140733EF7: mov     rdx, r15
 * 0000000140733EFA: mov     rcx, r12
 * 0000000140733EFD: call    sub_14014F138
 * 0000000140733F02: mov     [r14+10h], ebx
 * 0000000140733F06: lea     rcx, [r15+r13]
 * 0000000140733F0A: add     [r12+598h], ebx
 * 0000000140733F12: mov     rdi, r15
 * 0000000140733F15: mov     r8d, [r12+584h]
 * 0000000140733F1D: mov     rax, r15
 * 0000000140733F20: mov     rdx, [r12+588h]
 * 0000000140733F28: cmp     r15, rcx
 * 0000000140733F2B: jnb     short loc_140733F39
 * 0000000140733F2D: prefetchnta byte ptr [rax]
 * 0000000140733F30: add     rax, 40h ; '@'
 * 0000000140733F34: cmp     rax, rcx
 * 0000000140733F37: jb      short loc_140733F2D
 * 0000000140733F39: mov     r9d, r13d
 * 0000000140733F3C: mov     r13d, 1
 * 0000000140733F42: cmp     r9d, 8
 * 0000000140733F46: jb      short loc_140733F64
 * 0000000140733F48: mov     eax, r9d
 * 0000000140733F4B: shr     rax, 3
 * 0000000140733F4F: xor     rdx, [rdi]
 * 0000000140733F52: mov     ecx, r8d
 * 0000000140733F55: rol     rdx, cl
 * 0000000140733F58: add     rdi, 8
 * 0000000140733F5C: add     ebx, 0FFFFFFF8h
 * 0000000140733F5F: sub     rax, r13
 * 0000000140733F62: jnz     short loc_140733F4F
 * 0000000140733F64: test    ebx, ebx
 * 0000000140733F66: jz      short loc_140733F7C
 * 0000000140733F68: movzx   eax, byte ptr [rdi]
 * 0000000140733F6B: mov     ecx, r8d
 * 0000000140733F6E: xor     rdx, rax
 * 0000000140733F71: add     rdi, r13
 * 0000000140733F74: rol     rdx, cl
 * 0000000140733F77: add     ebx, 0FFFFFFFFh
 * 0000000140733F7A: jnz     short loc_140733F68
 * 0000000140733F7C: mov     rax, rdx
 * 0000000140733F7F: jmp     short loc_140733F83
 * 0000000140733F81: xor     edx, eax
 * 0000000140733F83: shr     rax, 1Fh
 * 0000000140733F87: test    rax, rax
 * 0000000140733F8A: jnz     short loc_140733F81
 * 0000000140733F8C: btr     edx, 1Fh
 * 0000000140733F90: mov     edi, 0C0000225h
 * 0000000140733F95: mov     [r14+14h], edx
 * 0000000140733F99: mov     rax, [rbp+1910h+var_1340]
 * 0000000140733FA0: mov     [rbp+1910h+var_1020], rax
 * 0000000140733FA7: add     [r12+598h], r9d
 * 0000000140733FAF: mov     rbx, [r12+438h]
 * 0000000140733FB7: mov     r14, [rbp+1910h+var_1020]
 * 0000000140733FBE: add     rbx, 10h
 * 0000000140733FC2: mov     rcx, [r12+450h]
 * 0000000140733FCA: mov     r15, cr8
 * 0000000140733FCE: mov     eax, 0Fh
 * 0000000140733FD3: mov     cr8, rax
 * 0000000140733FD7: call    qword ptr [r12+148h]
 * 0000000140733FDF: mov     rax, [r12+438h]
 * 0000000140733FE7: mov     ecx, [rax]
 * 0000000140733FE9: lea     rax, [rcx+rcx*2]
 * 0000000140733FED: lea     rcx, [rbx+rax*8]
 * 0000000140733FF1: mov     rax, [rsp+1A10h+var_19D0]
 * 0000000140733FF6: cmp     [rbx+8], rax
 * 0000000140733FFA: jz      short loc_140734007
 * 0000000140733FFC: add     rbx, 18h
 * 0000000140734000: cmp     rbx, rcx
 * 0000000140734003: jnb     short loc_14073401E
 * 0000000140734005: jmp     short loc_140733FF6
 * 0000000140734007: movups  xmm0, xmmword ptr [rbx]
 * 000000014073400A: xor     eax, eax
 * 000000014073400C: mov     edi, eax
 * 000000014073400E: movups  xmmword ptr [r14+18h], xmm0
 * 0000000140734013: movsd   xmm1, qword ptr [rbx+10h]
 * 0000000140734018: movsd   qword ptr [r14+28h], xmm1
 * 000000014073401E: mov     rcx, [r12+450h]
 * 0000000140734026: call    qword ptr [r12+188h]
 * 000000014073402E: movzx   eax, r15b
 * 0000000140734032: mov     cr8, rax
 * 0000000140734036: test    edi, edi
 * 0000000140734038: jns     short loc_140734076
 * 000000014073403A: mov     rax, [rbp+1910h+var_1020]
 * 0000000140734041: mov     ecx, 18h
 * 0000000140734046: add     rax, rcx
 * 0000000140734049: xor     ebx, ebx
 * 000000014073404B: lea     edx, [rcx-15h]
 * 000000014073404E: mov     [rax], rbx
 * 0000000140734051: add     ecx, 0FFFFFFF8h
 * 0000000140734054: add     rax, 8
 * 0000000140734058: sub     rdx, r13
 * 000000014073405B: jnz     short loc_14073404E
 * 000000014073405D: test    ecx, ecx
 * 000000014073405F: jz      short loc_14073406B
 * 0000000140734061: mov     [rax], bl
 * 0000000140734063: add     rax, r13
 * 0000000140734066: add     ecx, 0FFFFFFFFh
 * 0000000140734069: jnz     short loc_140734061
 * 000000014073406B: mov     rax, [rbp+1910h+var_1020]
 * 0000000140734072: mov     [rax+18h], r13
 * 0000000140734076: mov     rdi, [rbp+1910h+var_1020]
 * 000000014073407D: mov     edx, dword ptr [rbp+1910h+Size]
 * 0000000140734080: add     rdi, 30h ; '0'
 * 0000000140734084: mov     [rbp+1910h+var_1968], rdi
 * 0000000140734088: mov     rax, rdi
 * 000000014073408B: cmp     edx, 8
 * 000000014073408E: jb      short loc_1407340A9
 * 0000000140734090: mov     ecx, edx
 * 0000000140734092: shr     rcx, 3
 * 0000000140734096: mov     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
 * 000000014073409D: add     edx, 0FFFFFFF8h
 * 00000001407340A0: add     rax, 8
 * 00000001407340A4: sub     rcx, r13
 * 00000001407340A7: jnz     short loc_140734096
 * 00000001407340A9: test    edx, edx
 * 00000001407340AB: jz      short loc_1407340B8
 * 00000001407340AD: mov     byte ptr [rax], 0FFh
 * 00000001407340B0: add     rax, r13
 * 00000001407340B3: add     edx, 0FFFFFFFFh
 * 00000001407340B6: jnz     short loc_1407340AD
 * 00000001407340B8: mov     rdx, [rsp+1A10h+var_19A0]
 * 00000001407340BD: or      r13d, 0FFFFFFFFh
 * 00000001407340C1: mov     eax, dword ptr [rbp+1910h+var_1990]
 * 00000001407340C4: mov     r15, rdx
 * 00000001407340C7: mov     r8d, [rdx]
 * 00000001407340CA: lea     rcx, [rax+rax*2]
 * 00000001407340CE: lea     rax, [rdx+rcx*4]
 * 00000001407340D2: mov     rdx, [rsp+1A10h+var_19D0]
 * 00000001407340D7: mov     rcx, [rsp+78h]
 * 00000001407340DC: mov     [rbp+1910h+var_1990], rax
 * 00000001407340E0: xor     eax, eax
 * 00000001407340E2: mov     ebx, eax
 * 00000001407340E4: mov     dword ptr [rbp+1910h+Size], eax
 * 00000001407340E7: call    qword ptr [r12+1E0h]
 * 00000001407340EF: mov     r10, rax
 * 00000001407340F2: xor     eax, eax
 * 00000001407340F4: test    r10, r10
 * 00000001407340F7: jz      loc_140735694
 * 00000001407340FD: test    dword ptr [r10+24h], 2000000h
 * 0000000140734105: mov     r14d, eax
 * 0000000140734108: jnz     loc_140734315
 * 000000014073410E: mov     ecx, [r10]
 * 0000000140734111: cmp     ecx, 54494E49h
 * 0000000140734117: jnz     short loc_140734127
 * 0000000140734119: cmp     dword ptr [r10+4], 4742444Bh
 * 0000000140734121: jz      loc_140734315
 * 0000000140734127: cmp     ecx, 45474150h
 * 000000014073412D: jnz     short loc_14073415E
 * 000000014073412F: movzx   eax, word ptr [r10+4]
 * 0000000140734134: mov     edx, 7777h
 * 0000000140734139: cmp     ax, dx
 * 000000014073413C: jz      loc_140734315
 * 0000000140734142: mov     edx, 7277h
 * 0000000140734147: cmp     ax, dx
 * 000000014073414A: jz      loc_140734315
 * 0000000140734150: mov     edx, 7877h
 * 0000000140734155: cmp     ax, dx
 * 0000000140734158: jz      loc_140734315
 * 000000014073415E: cmp     ecx, 41525245h
 * 0000000140734164: jnz     short loc_140734176
 * 0000000140734166: mov     eax, 4154h
 * 000000014073416B: cmp     [r10+4], ax
 * 0000000140734170: jz      loc_140734315
 * 0000000140734176: mov     rax, [r12+648h]
 * 000000014073417E: mov     r8d, 7
 * 0000000140734184: mov     rbx, [r12+640h]
 * 000000014073418C: mov     rdi, r10
 * 000000014073418F: mov     [rbp+1910h+var_BF0], rax
 * 0000000140734196: sub     rdi, rbx
 * 0000000140734199: mov     rax, [r12+650h]
 * 00000001407341A1: or      r11d, 0FFFFFFFFh
 * 00000001407341A5: mov     [rbp+1910h+var_BE8], rax
 * 00000001407341AC: lea     r9d, [r8-6]
 * 00000001407341B0: mov     rax, [r12+658h]
 * 00000001407341B8: mov     [rbp+1910h+var_BE0], rax
 * 00000001407341BF: mov     [rbp+1910h+var_BF8], rbx
 * 00000001407341C6: movzx   edx, byte ptr [rbx+rdi]
 * 00000001407341CA: movzx   eax, byte ptr [rbx]
 * 00000001407341CD: add     rbx, r9
 * 00000001407341D0: cmp     rdx, rax
 * 00000001407341D3: jnz     short loc_1407341DF
 * 00000001407341D5: add     r8d, r11d
 * 00000001407341D8: jnz     short loc_1407341C6
 * 00000001407341DA: jmp     loc_140734276
 * 00000001407341DF: mov     rdi, [rbp+1910h+var_BF0]
 * 00000001407341E6: mov     ebx, 8
 * 00000001407341EB: mov     r8, r10
 * 00000001407341EE: mov     rcx, [r8]
 * 00000001407341F1: add     r8, 8
 * 00000001407341F5: mov     rax, [rdi]
 * 00000001407341F8: add     rdi, 8
 * 00000001407341FC: cmp     rcx, rax
 * 00000001407341FF: jnz     short loc_140734226
 * 0000000140734201: add     ebx, 0FFFFFFF8h
 * 0000000140734204: cmp     ebx, 8
 * 0000000140734207: jnb     short loc_1407341EE
 * 0000000140734209: test    ebx, ebx
 * 000000014073420B: jz      short loc_140734276
 * 000000014073420D: movzx   edx, byte ptr [r8]
 * 0000000140734211: add     r8, r9
 * 0000000140734214: movzx   eax, byte ptr [rdi]
 * 0000000140734217: add     rdi, r9
 * 000000014073421A: cmp     rdx, rax
 * 000000014073421D: jnz     short loc_140734226
 * 000000014073421F: add     ebx, r11d
 * 0000000140734222: jnz     short loc_14073420D
 * 0000000140734224: jmp     short loc_140734276
 * 0000000140734226: mov     rbx, [rbp+1910h+var_BE8]
 * 000000014073422D: mov     rdi, r10
 * 0000000140734230: sub     rdi, rbx
 * 0000000140734233: mov     r8d, 4
 * 0000000140734239: movzx   edx, byte ptr [rbx+rdi]
 * 000000014073423D: movzx   eax, byte ptr [rbx]
 * 0000000140734240: add     rbx, r9
 * 0000000140734243: cmp     rdx, rax
 * 0000000140734246: jnz     short loc_14073424F
 * 0000000140734248: add     r8d, r11d
 * 000000014073424B: jnz     short loc_140734239
 * 000000014073424D: jmp     short loc_140734276
 * 000000014073424F: mov     rbx, [rbp+1910h+var_BE0]
 * 0000000140734256: mov     rdi, r10
 * 0000000140734259: sub     rdi, rbx
 * 000000014073425C: mov     r8d, 6
 * 0000000140734262: movzx   edx, byte ptr [rbx+rdi]
 * 0000000140734266: movzx   eax, byte ptr [rbx]
 * 0000000140734269: add     rbx, r9
 * 000000014073426C: cmp     rdx, rax
 * 000000014073426F: jnz     short loc_140734279
 * 0000000140734271: add     r8d, r11d
 * 0000000140734274: jnz     short loc_140734262
 * 0000000140734276: mov     r14d, r9d
 * 0000000140734279: mov     ebx, dword ptr [rbp+1910h+Size]
 * 000000014073427C: mov     eax, [r10+24h]
 * 0000000140734280: mov     ecx, 80000000h
 * 0000000140734285: and     eax, ecx
 * 0000000140734287: xor     ecx, ecx
 * 0000000140734289: test    eax, eax
 * 000000014073428B: cmovnz  r14d, r9d
 * 000000014073428F: test    r14d, r14d
 * 0000000140734292: jz      short loc_1407342BA
 * 0000000140734294: cmp     dword ptr [r10], 54494E49h
 * 000000014073429B: jnz     short loc_1407342BA
 * 000000014073429D: cmp     dword ptr [r10+4], 4742444Bh
 * 00000001407342A5: jnz     short loc_1407342BA
 * 00000001407342A7: mov     eax, [r12+690h]
 * 00000001407342AF: and     eax, 10000000h
 * 00000001407342B4: mov     eax, ecx
 * 00000001407342B6: cmovnz  r14d, eax
 * 00000001407342BA: mov     ecx, [r10+8]
 * 00000001407342BE: mov     r8d, 1
 * 00000001407342C4: cmp     [r10+10h], ecx
 * 00000001407342C8: mov     r11d, [r10+0Ch]
 * 00000001407342CC: cmova   ecx, [r10+10h]
 * 00000001407342D1: mov     r9, [rsp+1A10h+var_19D0]
 * 00000001407342D6: add     r11d, ecx
 * 00000001407342D9: mov     eax, [r15+8]
 * 00000001407342DD: test    r8b, al
 * 00000001407342E0: jnz     short loc_1407342F1
 * 00000001407342E2: cmp     eax, r13d
 * 00000001407342E5: cmovb   r13d, eax
 * 00000001407342E9: cmp     eax, ebx
 * 00000001407342EB: cmova   ebx, eax
 * 00000001407342EE: mov     dword ptr [rbp+1910h+Size], ebx
 * 00000001407342F1: mov     eax, [r15]
 * 00000001407342F4: mov     edx, [r15+4]
 * 00000001407342F8: sub     edx, eax
 * 00000001407342FA: lea     rdi, [r9+rax]
 * 00000001407342FE: xor     eax, eax
 * 0000000140734300: test    r14d, r14d
 * 0000000140734303: jz      short loc_140734323
 * 0000000140734305: mov     rdi, [rbp+1910h+var_1968]
 * 0000000140734309: mov     ecx, 80000000h
 * 000000014073430E: mov     [rdi], ecx
 * 0000000140734310: jmp     loc_1407343B7
 * 0000000140734315: mov     r9d, 1
 * 000000014073431B: mov     r14d, r9d
 * 000000014073431E: jmp     loc_14073427C
 * 0000000140734323: add     [r12+598h], edx
 * 000000014073432B: mov     rax, rdi
 * 000000014073432E: mov     r9d, [r12+584h]
 * 0000000140734336: mov     rbx, [r12+588h]
 * 000000014073433E: mov     ecx, edx
 * 0000000140734340: add     rcx, rdi
 * 0000000140734343: cmp     rdi, rcx
 * 0000000140734346: jnb     short loc_140734354
 * 0000000140734348: prefetchnta byte ptr [rax]
 * 000000014073434B: add     rax, 40h ; '@'
 * 000000014073434F: cmp     rax, rcx
 * 0000000140734352: jb      short loc_140734348
 * 0000000140734354: cmp     edx, 8
 * 0000000140734357: jb      short loc_140734380
 * 0000000140734359: mov     r8d, edx
 * 000000014073435C: mov     esi, 1
 * 0000000140734361: shr     r8, 3
 * 0000000140734365: xor     rbx, [rdi]
 * 0000000140734368: mov     ecx, r9d
 * 000000014073436B: rol     rbx, cl
 * 000000014073436E: add     rdi, 8
 * 0000000140734372: add     edx, 0FFFFFFF8h
 * 0000000140734375: sub     r8, rsi
 * 0000000140734378: jnz     short loc_140734365
 * 000000014073437A: mov     r8d, 1
 * 0000000140734380: test    edx, edx
 * 0000000140734382: jz      short loc_140734398
 * 0000000140734384: movzx   eax, byte ptr [rdi]
 * 0000000140734387: mov     ecx, r9d
 * 000000014073438A: xor     rbx, rax
 * 000000014073438D: add     rdi, r8
 * 0000000140734390: rol     rbx, cl
 * 0000000140734393: add     edx, 0FFFFFFFFh
 * 0000000140734396: jnz     short loc_140734384
 * 0000000140734398: mov     rax, rbx
 * 000000014073439B: jmp     short loc_14073439F
 * 000000014073439D: xor     ebx, eax
 * 000000014073439F: shr     rax, 1Fh
 * 00000001407343A3: test    rax, rax
 * 00000001407343A6: jnz     short loc_14073439D
 * 00000001407343A8: mov     rdi, [rbp+1910h+var_1968]
 * 00000001407343AC: btr     ebx, 1Fh
 * 00000001407343B0: mov     r9, [rsp+1A10h+var_19D0]
 * 00000001407343B5: mov     [rdi], ebx
 * 00000001407343B7: add     r15, 0Ch
 * 00000001407343BB: cmp     r15, [rbp+1910h+var_1990]
 * 00000001407343BF: jz      short loc_140734418
 * 00000001407343C1: mov     eax, [r10+0Ch]
 * 00000001407343C5: add     rdi, 4
 * 00000001407343C9: mov     [rbp+1910h+var_1968], rdi
 * 00000001407343CD: cmp     [r15], eax
 * 00000001407343D0: jb      short loc_1407343E8
 * 00000001407343D2: mov     ecx, [r15+4]
 * 00000001407343D6: mov     ebx, dword ptr [rbp+1910h+Size]
 * 00000001407343D9: add     rcx, r9
 * 00000001407343DC: mov     eax, r11d
 * 00000001407343DF: cmp     rcx, rax
 * 00000001407343E2: jbe     loc_1407342D9
 * 00000001407343E8: mov     r8d, [r15]
 * 00000001407343EB: mov     rdx, r9
 * 00000001407343EE: mov     rcx, [rsp+78h]
 * 00000001407343F3: call    qword ptr [r12+1E0h]
 * 00000001407343FB: mov     ebx, dword ptr [rbp+1910h+Size]
 * 00000001407343FE: mov     r10, rax
 * 0000000140734401: xor     eax, eax
 * 0000000140734403: test    r10, r10
 * 0000000140734406: jnz     loc_1407340FD
 * 000000014073440C: mov     r13, [rbp+1910h+var_16C8]
 * 0000000140734413: jmp     loc_140735699
 * 0000000140734418: mov     edx, dword ptr [rbp+1910h+Size]
 * 000000014073441B: cmp     r13d, 0FFFFFFFFh
 * 000000014073441F: jnz     short loc_140734428
 * 0000000140734421: test    edx, edx
 * 0000000140734423: jnz     short loc_140734428
 * 0000000140734425: mov     r13d, eax
 * 0000000140734428: mov     rcx, [rbp+1910h+BugCheckParameter2]
 * 000000014073442F: lea     r9, [rbp+1910h+var_1774]
 * 0000000140734436: sub     edx, r13d
 * 0000000140734439: mov     eax, r13d
 * 000000014073443C: xor     r8d, r8d
 * 000000014073443F: mov     [rbp+1910h+var_D80], edx
 * 0000000140734445: add     rax, rcx
 * 0000000140734448: mov     [rbp+1910h+var_16C8], r12
 * 000000014073444F: mov     [rbp+1910h+var_C78], rax
 * 0000000140734456: lea     ebx, [r8+1]
 * 000000014073445A: mov     dl, bl
 * 000000014073445C: call    qword ptr [r12+1C0h]
 * 0000000140734464: mov     rcx, rax
 * 0000000140734467: mov     [rbp+1910h+var_C70], rax
 * 000000014073446E: neg     rcx
 * 0000000140734471: lea     r8d, [rbx+0Bh]
 * 0000000140734475: mov     rcx, [rbp+1910h+BugCheckParameter2]
 * 000000014073447C: lea     r9, [rbp+1910h+var_1774]
 * 0000000140734483: sbb     edx, edx
 * 0000000140734485: and     edx, [rbp+1910h+var_1774]
 * 000000014073448B: mov     [rbp+1910h+var_1774], edx
 * 0000000140734491: mov     [rbp+1910h+var_D7C], edx
 * 0000000140734497: mov     dl, bl
 * 0000000140734499: call    qword ptr [r12+1C0h]
 * 00000001407344A1: mov     rdx, rax
 * 00000001407344A4: mov     [rsp+1A10h+var_19C0], rax
 * 00000001407344A9: neg     rax
 * 00000001407344AC: mov     [rbp+1910h+var_C68], rdx
 * 00000001407344B3: lea     r8d, [rbx+9]
 * 00000001407344B7: mov     dl, bl
 * 00000001407344B9: sbb     ecx, ecx
 * 00000001407344BB: lea     r9, [rbp+1910h+var_1774]
 * 00000001407344C2: and     ecx, [rbp+1910h+var_1774]
 * 00000001407344C8: mov     dword ptr [rbp+1910h+Size], ecx
 * 00000001407344CB: mov     [rbp+1910h+var_1774], ecx
 * 00000001407344D1: mov     [rbp+1910h+var_D78], ecx
 * 00000001407344D7: mov     rcx, [rbp+1910h+BugCheckParameter2]
 * 00000001407344DE: call    qword ptr [r12+1C0h]
 * 00000001407344E6: mov     rcx, rax
 * 00000001407344E9: mov     [rbp+1910h+var_C60], rax
 * 00000001407344F0: mov     eax, dword ptr [rbp+1910h+var_1980]
 * 00000001407344F3: neg     rcx
 * 00000001407344F6: sbb     edx, edx
 * 00000001407344F8: and     edx, [rbp+1910h+var_1774]
 * 00000001407344FE: mov     [rbp+1910h+var_1774], edx
 * 0000000140734504: neg     eax
 * 0000000140734506: mov     r15d, [r12+554h]
 * 000000014073450E: mov     r8d, [r12+634h]
 * 0000000140734516: sbb     ecx, ecx
 * 0000000140734518: and     ecx, 0Bh
 * 000000014073451B: mov     [rbp+1910h+var_D74], edx
 * 0000000140734521: mov     dword ptr [rsp+1A10h+Src], ecx
 * 0000000140734525: lea     eax, [r15+0C0h]
 * 000000014073452C: cmp     eax, [r12+714h]
 * 0000000140734534: jbe     loc_14073462A
 * 000000014073453A: mov     edx, eax
 * 000000014073453C: mov     rcx, r12
 * 000000014073453F: call    sub_140236718
 * 0000000140734544: mov     r14, rax
 * 0000000140734547: test    rax, rax
 * 000000014073454A: jz      loc_140734616
 * 0000000140734550: mov     edx, [r12+690h]
 * 0000000140734558: test    dl, 4
 * 000000014073455B: jnz     loc_14073460C
 * 0000000140734561: mov     eax, [r12+554h]
 * 0000000140734569: and     edx, 20000000h
 * 000000014073456F: mov     rdi, [r12+538h]
 * 0000000140734577: neg     edx
 * 0000000140734579: sbb     edx, edx
 * 000000014073457B: and     edx, [r12+634h]
 * 0000000140734583: cmp     eax, 8
 * 0000000140734586: jb      short loc_1407345A3
 * 0000000140734588: mov     ecx, eax
 * 000000014073458A: shr     rcx, 3
 * 000000014073458E: xor     r8d, r8d
 * 0000000140734591: mov     [r12], r8
 * 0000000140734595: add     eax, 0FFFFFFF8h
 * 0000000140734598: add     r12, 8
 * 000000014073459C: sub     rcx, rbx
 * 000000014073459F: jnz     short loc_140734591
 * 00000001407345A1: jmp     short loc_1407345A6
 * 00000001407345A3: xor     r8d, r8d
 * 00000001407345A6: test    eax, eax
 * 00000001407345A8: jz      short loc_1407345B6
 * 00000001407345AA: mov     [r12], r8b
 * 00000001407345AE: add     r12, rbx
 * 00000001407345B1: add     eax, 0FFFFFFFFh
 * 00000001407345B4: jnz     short loc_1407345AA
 * 00000001407345B6: mov     ebx, [r14+634h]
 * 00000001407345BD: mov     [r14+634h], edx
 * 00000001407345C4: cmp     edx, 3
 * 00000001407345C7: jz      short loc_1407345FB
 * 00000001407345C9: mov     eax, [r14+690h]
 * 00000001407345D0: mov     ecx, r8d
 * 00000001407345D3: and     eax, 10000000h
 * 00000001407345D8: cmovz   ecx, edx
 * 00000001407345DB: test    ecx, ecx
 * 00000001407345DD: jz      short loc_1407345EF
 * 00000001407345DF: lea     rcx, [rdi-8]
 * 00000001407345E3: mov     rdx, [rcx]
 * 00000001407345E6: call    qword ptr [r14+1F8h]
 * 00000001407345ED: jmp     short loc_140734605
 * 00000001407345EF: mov     rcx, rdi
 * 00000001407345F2: call    qword ptr [r14+0F8h]
 * 00000001407345F9: jmp     short loc_140734605
 * 00000001407345FB: mov     rcx, rdi
 * 00000001407345FE: call    qword ptr [r14+320h]
 * 0000000140734605: mov     [r14+634h], ebx
 * 000000014073460C: and     dword ptr [r14+690h], 0FFFFFFFBh
 * 0000000140734614: jmp     short loc_140734635
 * 0000000140734616: mov     ecx, 0C000009Ah
 * 000000014073461B: mov     [rbp+1910h+var_16D8], r12
 * 0000000140734622: mov     r14, r12
 * 0000000140734625: jmp     loc_140733A8C
 * 000000014073462A: mov     r14, r12
 * 000000014073462D: mov     [r12+554h], eax
 * 0000000140734635: mov     esi, dword ptr [rsp+1A10h+Src]
 * 0000000140734639: lea     r12, [r14+r15]
 * 000000014073463D: mov     edi, 4
 * 0000000140734642: lea     rbx, [rbp+1910h+var_C78]
 * 0000000140734649: add     [r14+57Ch], edi
 * 0000000140734650: lea     r9, [rbp+1910h+var_D80]
 * 0000000140734657: mov     [rbp+1910h+var_1330], r12
 * 000000014073465E: mov     r10d, edi
 * 0000000140734661: mov     [rbp+1910h+var_F70], r12
 * 0000000140734668: xor     r8d, r8d
 * 000000014073466B: lea     r11d, [rdi-3]
 * 000000014073466F: mov     [rsp+1A10h+var_19D0], rbx
 * 0000000140734674: mov     [rsp+78h], r9
 * 0000000140734679: mov     [rbp+1910h+var_1990], rdi
 * 000000014073467D: mov     r13d, [r9]
 * 0000000140734680: mov     ecx, 30h ; '0'
 * 0000000140734685: mov     r15, [rbx]
 * 0000000140734688: mov     rax, r12
 * 000000014073468B: lea     edx, [rcx-2Ah]
 * 000000014073468E: mov     [rax], r8
 * 0000000140734691: add     ecx, 0FFFFFFF8h
 * 0000000140734694: add     rax, 8
 * 0000000140734698: sub     rdx, r11
 * 000000014073469B: jnz     short loc_14073468E
 * 000000014073469D: test    ecx, ecx
 * 000000014073469F: jz      short loc_1407346AC
 * 00000001407346A1: mov     [rax], r8b
 * 00000001407346A4: add     rax, r11
 * 00000001407346A7: add     ecx, 0FFFFFFFFh
 * 00000001407346AA: jnz     short loc_1407346A1
 * 00000001407346AC: mov     eax, 20h ; ' '
 * 00000001407346B1: mov     [r12], esi
 * 00000001407346B5: mov     [r12+8], r15
 * 00000001407346BA: cmp     esi, eax
 * 00000001407346BC: jnz     short loc_1407346E5
 * 00000001407346BE: test    r13d, r13d
 * 00000001407346C1: jz      short loc_1407346E5
 * 00000001407346C3: lea     r9, [r12+18h]
 * 00000001407346C8: mov     r8d, r13d
 * 00000001407346CB: mov     rdx, r15
 * 00000001407346CE: mov     rcx, r14
 * 00000001407346D1: call    sub_14014F138
 * 00000001407346D6: mov     r9, [rsp+78h]
 * 00000001407346DB: mov     r11d, 1
 * 00000001407346E1: mov     r10, [rbp+1910h+var_1990]
 * 00000001407346E5: mov     [r12+10h], r13d
 * 00000001407346EA: lea     rcx, [r15+r13]
 * 00000001407346EE: add     [r14+598h], r13d
 * 00000001407346F5: mov     rax, r15
 * 00000001407346F8: mov     r8d, [r14+584h]
 * 00000001407346FF: mov     rdx, [r14+588h]
 * 0000000140734706: cmp     r15, rcx
 * 0000000140734709: jnb     short loc_140734717
 * 000000014073470B: prefetchnta byte ptr [rax]
 * 000000014073470E: add     rax, 40h ; '@'
 * 0000000140734712: cmp     rax, rcx
 * 0000000140734715: jb      short loc_14073470B
 * 0000000140734717: mov     edi, r13d
 * 000000014073471A: cmp     r13d, 8
 * 000000014073471E: jb      short loc_140734741
 * 0000000140734720: mov     rbx, r13
 * 0000000140734723: shr     rbx, 3
 * 0000000140734727: xor     rdx, [r15]
 * 000000014073472A: mov     ecx, r8d
 * 000000014073472D: rol     rdx, cl
 * 0000000140734730: add     r15, 8
 * 0000000140734734: add     edi, 0FFFFFFF8h
 * 0000000140734737: sub     rbx, r11
 * 000000014073473A: jnz     short loc_140734727
 * 000000014073473C: mov     rbx, [rsp+1A10h+var_19D0]
 * 0000000140734741: test    edi, edi
 * 0000000140734743: jz      short loc_14073475A
 * 0000000140734745: movzx   eax, byte ptr [r15]
 * 0000000140734749: mov     ecx, r8d
 * 000000014073474C: xor     rdx, rax
 * 000000014073474F: add     r15, r11
 * 0000000140734752: rol     rdx, cl
 * 0000000140734755: add     edi, 0FFFFFFFFh
 * 0000000140734758: jnz     short loc_140734745
 * 000000014073475A: mov     rax, rdx
 * 000000014073475D: shr     rax, 1Fh
 * 0000000140734761: xor     r8d, r8d
 * 0000000140734764: jmp     short loc_14073476C
 * 0000000140734766: xor     edx, eax
 * 0000000140734768: shr     rax, 1Fh
 * 000000014073476C: test    rax, rax
 * 000000014073476F: jnz     short loc_140734766
 * 0000000140734771: btr     edx, 1Fh
 * 0000000140734775: lea     edi, [rax+4]
 * 0000000140734778: mov     [r12+14h], edx
 * 000000014073477D: add     r9, rdi
 * 0000000140734780: add     [r14+598h], r13d
 * 0000000140734787: add     rbx, 8
 * 000000014073478B: mov     r12, [rbp+1910h+var_1330]
 * 0000000140734792: add     r12, 30h ; '0'
 * 0000000140734796: mov     [rsp+78h], r9
 * 000000014073479B: sub     r10, r11
 * 000000014073479E: mov     [rbp+1910h+var_1330], r12
 * 00000001407347A5: mov     [rbp+1910h+var_1990], r10
 * 00000001407347A9: mov     [rsp+1A10h+var_19D0], rbx
 * 00000001407347AE: jnz     loc_14073467D
 * 00000001407347B4: mov     r12d, dword ptr [rbp+1910h+var_1958]
 * 00000001407347B8: mov     rcx, [rbp+1910h+var_F70]
 * 00000001407347BF: and     r12d, r11d
 * 00000001407347C2: mov     eax, dword ptr [rbp+1910h+var_1980]
 * 00000001407347C5: add     rcx, 60h ; '`'
 * 00000001407347C9: neg     eax
 * 00000001407347CB: mov     [rbp+1910h+var_16C8], r14
 * 00000001407347D2: mov     [rbp+1910h+var_F10], rcx
 * 00000001407347D9: sbb     r15d, r15d
 * 00000001407347DC: neg     r15d
 * 00000001407347DF: add     r15d, 0Dh
 * 00000001407347E3: test    rcx, rcx
 * 00000001407347E6: jnz     loc_140734A16
 * 00000001407347EC: mov     r13d, [r14+554h]
 * 00000001407347F3: mov     r8d, [r14+634h]
 * 00000001407347FA: lea     eax, [r13+30h]
 * 00000001407347FE: cmp     eax, [r14+714h]
 * 0000000140734805: jbe     loc_1407348F5
 * 000000014073480B: mov     edx, eax
 * 000000014073480D: mov     rcx, r14
 * 0000000140734810: call    sub_140236718
 * 0000000140734815: mov     rbx, rax
 * 0000000140734818: test    rax, rax
 * 000000014073481B: jz      loc_1407348E4
 * 0000000140734821: mov     edx, [r14+690h]
 * 0000000140734828: test    dil, dl
 * 000000014073482B: jnz     loc_1407348D5
 * 0000000140734831: mov     eax, [r14+554h]
 * 0000000140734838: and     edx, 20000000h
 * 000000014073483E: mov     r8, [r14+538h]
 * 0000000140734845: neg     edx
 * 0000000140734847: mov     edi, 1
 * 000000014073484C: sbb     edx, edx
 * 000000014073484E: and     edx, [r14+634h]
 * 0000000140734855: cmp     eax, 8
 * 0000000140734858: jb      short loc_140734874
 * 000000014073485A: mov     ecx, eax
 * 000000014073485C: shr     rcx, 3
 * 0000000140734860: xor     r9d, r9d
 * 0000000140734863: mov     [r14], r9
 * 0000000140734866: add     eax, 0FFFFFFF8h
 * 0000000140734869: add     r14, 8
 * 000000014073486D: sub     rcx, rdi
 * 0000000140734870: jnz     short loc_140734863
 * 0000000140734872: jmp     short loc_140734877
 * 0000000140734874: xor     r9d, r9d
 * 0000000140734877: test    eax, eax
 * 0000000140734879: jz      short loc_140734886
 * 000000014073487B: mov     [r14], r9b
 * 000000014073487E: add     r14, rdi
 * 0000000140734881: add     eax, 0FFFFFFFFh
 * 0000000140734884: jnz     short loc_14073487B
 * 0000000140734886: mov     edi, [rbx+634h]
 * 000000014073488C: mov     [rbx+634h], edx
 * 0000000140734892: cmp     edx, 3
 * 0000000140734895: jz      short loc_1407348C6
 * 0000000140734897: mov     eax, [rbx+690h]
 * 000000014073489D: mov     ecx, r9d
 * 00000001407348A0: and     eax, 10000000h
 * 00000001407348A5: cmovz   ecx, edx
 * 00000001407348A8: test    ecx, ecx
 * 00000001407348AA: jz      short loc_1407348BB
 * 00000001407348AC: lea     rcx, [r8-8]
 * 00000001407348B0: mov     rdx, [rcx]
 * 00000001407348B3: call    qword ptr [rbx+1F8h]
 * 00000001407348B9: jmp     short loc_1407348CF
 * 00000001407348BB: mov     rcx, r8
 * 00000001407348BE: call    qword ptr [rbx+0F8h]
 * 00000001407348C4: jmp     short loc_1407348CF
 * 00000001407348C6: mov     rcx, r8
 * 00000001407348C9: call    qword ptr [rbx+320h]
 * 00000001407348CF: mov     [rbx+634h], edi
 * 00000001407348D5: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 00000001407348DC: mov     r11d, 1
 * 00000001407348E2: jmp     short loc_1407348FF
 * 00000001407348E4: mov     ecx, 0C000009Ah
 * 00000001407348E9: mov     [rbp+1910h+var_16D8], r14
 * 00000001407348F0: jmp     loc_140733A8C
 * 00000001407348F5: mov     rbx, r14
 * 00000001407348F8: mov     [r14+554h], eax
 * 00000001407348FF: add     [rbx+57Ch], r11d
 * 0000000140734906: lea     r14, [rbx+r13]
 * 000000014073490A: mov     ecx, 30h ; '0'
 * 000000014073490F: mov     [rbp+1910h+var_1320], r14
 * 0000000140734916: mov     rax, r14
 * 0000000140734919: xor     edi, edi
 * 000000014073491B: lea     edx, [rcx-2Ah]
 * 000000014073491E: mov     [rax], rdi
 * 0000000140734921: add     ecx, 0FFFFFFF8h
 * 0000000140734924: add     rax, 8
 * 0000000140734928: sub     rdx, r11
 * 000000014073492B: jnz     short loc_14073491E
 * 000000014073492D: test    ecx, ecx
 * 000000014073492F: jz      short loc_14073493C
 * 0000000140734931: mov     [rax], dil
 * 0000000140734934: add     rax, r11
 * 0000000140734937: add     ecx, 0FFFFFFFFh
 * 000000014073493A: jnz     short loc_140734931
 * 000000014073493C: mov     r13, [rsp+1A10h+var_19C0]
 * 0000000140734941: mov     eax, 20h ; ' '
 * 0000000140734946: mov     edi, dword ptr [rbp+1910h+Size]
 * 0000000140734949: mov     [r14], r15d
 * 000000014073494C: mov     [r14+8], r13
 * 0000000140734950: cmp     r15d, eax
 * 0000000140734953: jnz     short loc_140734971
 * 0000000140734955: test    edi, edi
 * 0000000140734957: jz      short loc_140734971
 * 0000000140734959: lea     r9, [r14+18h]
 * 000000014073495D: mov     r8d, edi
 * 0000000140734960: mov     rdx, r13
 * 0000000140734963: mov     rcx, rbx
 * 0000000140734966: call    sub_14014F138
 * 000000014073496B: mov     r11d, 1
 * 0000000140734971: mov     [r14+10h], edi
 * 0000000140734975: mov     r9, r13
 * 0000000140734978: add     [rbx+598h], edi
 * 000000014073497E: mov     rax, r13
 * 0000000140734981: mov     r10d, [rbx+584h]
 * 0000000140734988: mov     rdx, [rbx+588h]
 * 000000014073498F: mov     ecx, edi
 * 0000000140734991: add     rcx, r13
 * 0000000140734994: cmp     r13, rcx
 * 0000000140734997: jnb     short loc_1407349A5
 * 0000000140734999: prefetchnta byte ptr [rax]
 * 000000014073499C: add     rax, 40h ; '@'
 * 00000001407349A0: cmp     rax, rcx
 * 00000001407349A3: jb      short loc_140734999
 * 00000001407349A5: mov     r8d, edi
 * 00000001407349A8: cmp     edi, 8
 * 00000001407349AB: jb      short loc_1407349CA
 * 00000001407349AD: shr     rdi, 3
 * 00000001407349B1: xor     rdx, [r9]
 * 00000001407349B4: mov     ecx, r10d
 * 00000001407349B7: rol     rdx, cl
 * 00000001407349BA: add     r9, 8
 * 00000001407349BE: add     r8d, 0FFFFFFF8h
 * 00000001407349C2: sub     rdi, r11
 * 00000001407349C5: jnz     short loc_1407349B1
 * 00000001407349C7: mov     edi, dword ptr [rbp+1910h+Size]
 * 00000001407349CA: test    r8d, r8d
 * 00000001407349CD: jz      short loc_1407349E5
 * 00000001407349CF: movzx   eax, byte ptr [r9]
 * 00000001407349D3: mov     ecx, r10d
 * 00000001407349D6: xor     rdx, rax
 * 00000001407349D9: add     r9, r11
 * 00000001407349DC: rol     rdx, cl
 * 00000001407349DF: add     r8d, 0FFFFFFFFh
 * 00000001407349E3: jnz     short loc_1407349CF
 * 00000001407349E5: mov     rax, rdx
 * 00000001407349E8: jmp     short loc_1407349EC
 * 00000001407349EA: xor     edx, eax
 * 00000001407349EC: shr     rax, 1Fh
 * 00000001407349F0: test    rax, rax
 * 00000001407349F3: jnz     short loc_1407349EA
 * 00000001407349F5: btr     edx, 1Fh
 * 00000001407349F9: mov     [r14+14h], edx
 * 00000001407349FD: mov     r14, rbx
 * 0000000140734A00: mov     rax, [rbp+1910h+var_1320]
 * 0000000140734A07: mov     [rbp+1910h+var_F10], rax
 * 0000000140734A0E: add     [rbx+598h], edi
 * 0000000140734A14: jmp     short loc_140734A21
 * 0000000140734A16: mov     edi, dword ptr [rbp+1910h+Size]
 * 0000000140734A19: mov     r13, [rsp+1A10h+var_19C0]
 * 0000000140734A1E: mov     [rcx], r15d
 * 0000000140734A21: test    dword ptr [r14+690h], 40000000h
 * 0000000140734A2C: jz      short loc_140734A4B
 * 0000000140734A2E: test    edi, edi
 * 0000000140734A30: jz      short loc_140734A4B
 * 0000000140734A32: mov     r9, [rbp+1910h+var_F10]
 * 0000000140734A39: mov     r8d, edi
 * 0000000140734A3C: add     r9, 1Ch
 * 0000000140734A40: mov     rdx, r13
 * 0000000140734A43: mov     rcx, r14
 * 0000000140734A46: call    sub_14014F138
 * 0000000140734A4B: mov     rax, [rbp+1910h+var_F10]
 * 0000000140734A52: xor     ecx, ecx
 * 0000000140734A54: mov     [rax+18h], ecx
 * 0000000140734A57: xor     eax, eax
 * 0000000140734A59: lea     ecx, [rax+1]
 * 0000000140734A5C: test    r12d, r12d
 * 0000000140734A5F: jz      short loc_140734A6D
 * 0000000140734A61: mov     rax, [rbp+1910h+var_F10]
 * 0000000140734A68: or      [rax+18h], ecx
 * 0000000140734A6B: xor     eax, eax
 * 0000000140734A6D: mov     rbx, [rbp+1910h+var_F70]
 * 0000000140734A74: xor     r12d, r12d
 * 0000000140734A77: cmp     dword ptr [rbp+1910h+var_1980], r12d
 * 0000000140734A7B: mov     rdi, [rbp+1910h+BugCheckParameter2]
 * 0000000140734A82: setnz   al
 * 0000000140734A85: mov     [rbp+1910h+var_16C8], r14
 * 0000000140734A8C: mov     dword ptr [rbx+90h], 23h ; '#'
 * 0000000140734A96: xor     eax, [rbx+0B8h]
 * 0000000140734A9C: and     eax, ecx
 * 0000000140734A9E: xor     [rbx+0B8h], eax
 * 0000000140734AA4: cmp     dword ptr [rbx+0A0h], 94h
 * 0000000140734AAE: jb      short loc_140734B15
 * 0000000140734AB0: mov     r15, [rbx+98h]
 * 0000000140734AB7: mov     rcx, rdi
 * 0000000140734ABA: call    qword ptr [r14+1C8h]
 * 0000000140734AC1: test    rax, rax
 * 0000000140734AC4: jz      loc_1407348E4
 * 0000000140734ACA: mov     ecx, [rax+50h]
 * 0000000140734ACD: or      dword ptr [rbx+0B8h], 2
 * 0000000140734AD4: add     rcx, rdi
 * 0000000140734AD7: mov     rax, [r15+70h]
 * 0000000140734ADB: cmp     rax, rdi
 * 0000000140734ADE: jb      short loc_140734AF6
 * 0000000140734AE0: cmp     rax, rcx
 * 0000000140734AE3: jnb     short loc_140734AF6
 * 0000000140734AE5: mov     rax, [rax]
 * 0000000140734AE8: mov     [rbx+0A8h], rax
 * 0000000140734AEF: or      dword ptr [rbx+0B8h], 4
 * 0000000140734AF6: mov     rax, [r15+78h]
 * 0000000140734AFA: cmp     rax, rdi
 * 0000000140734AFD: jb      short loc_140734B15
 * 0000000140734AFF: cmp     rax, rcx
 * 0000000140734B02: jnb     short loc_140734B15
 * 0000000140734B04: mov     rax, [rax]
 * 0000000140734B07: mov     [rbx+0B0h], rax
 * 0000000140734B0E: or      dword ptr [rbx+0B8h], 8
 * 0000000140734B15: test    dword ptr [r14+690h], 400000h
 * 0000000140734B20: mov     rax, r14
 * 0000000140734B23: mov     r15, [rbp+1910h+BugCheckParameter2]
 * 0000000140734B2A: mov     [rsp+1A10h+var_19C0], rax
 * 0000000140734B2F: mov     [rbp+1910h+var_16C8], rax
 * 0000000140734B36: mov     [rsp+78h], r15
 * 0000000140734B3B: jz      loc_140735684
 * 0000000140734B41: mov     rcx, r15
 * 0000000140734B44: call    qword ptr [r14+1C8h]
 * 0000000140734B4B: mov     [rsp+1A10h+var_19D0], rax
 * 0000000140734B50: mov     r13, rax
 * 0000000140734B53: test    rax, rax
 * 0000000140734B56: jnz     short loc_140734B62
 * 0000000140734B58: mov     ecx, 0C000007Bh
 * 0000000140734B5D: jmp     loc_140734F07
 * 0000000140734B62: movzx   r12d, word ptr [r13+6]
 * 0000000140734B67: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140734B71: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 0000000140734B75: mul     rcx
 * 0000000140734B78: xor     eax, eax
 * 0000000140734B7A: mov     word ptr [rbp+1910h+Size], r12w
 * 0000000140734B7F: mov     r9, rdx
 * 0000000140734B82: shr     r9, 3
 * 0000000140734B86: mov     [rbp+1910h+var_1990], r9
 * 0000000140734B8A: test    r12w, r12w
 * 0000000140734B8E: jnz     short loc_140734BEA
 * 0000000140734B90: test    dword ptr [r14+690h], 200000h
 * 0000000140734B9B: jz      loc_1407422C2
 * 0000000140734BA1: cmp     [r14+608h], eax
 * 0000000140734BA8: jnz     short loc_140734B58
 * 0000000140734BAA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140734BB4: add     rax, r14
 * 0000000140734BB7: mov     [r14+610h], rax
 * 0000000140734BBE: xor     eax, eax
 * 0000000140734BC0: mov     [r14+618h], rax
 * 0000000140734BC7: mov     qword ptr [r14+620h], 10Fh
 * 0000000140734BD2: mov     [r14+628h], r15
 * 0000000140734BD9: mov     eax, 1
 * 0000000140734BDE: mov     [r14+608h], eax
 * 0000000140734BE5: jmp     loc_140734B58
 * 0000000140734BEA: mov     rdx, [rsp+1A10h+var_19A0]
 * 0000000140734BEF: mov     eax, r9d
 * 0000000140734BF2: mov     rbx, rdx
 * 0000000140734BF5: movzx   r10d, r12w
 * 0000000140734BF9: mov     dword ptr [rsp+1A10h+Src], r10d
 * 0000000140734BFE: lea     rcx, [rax+rax*2]
 * 0000000140734C02: movzx   eax, word ptr [r13+14h]
 * 0000000140734C07: lea     r8, [rdx+rcx*4]
 * 0000000140734C0B: lea     rdx, [r13+18h]
 * 0000000140734C0F: mov     [rbp+1910h+var_1968], r8
 * 0000000140734C13: add     rdx, rax
 * 0000000140734C16: xor     eax, eax
 * 0000000140734C18: mov     [rbp+1910h+var_1988], rdx
 * 0000000140734C1C: mov     edi, eax
 * 0000000140734C1E: lea     r11d, [rax+1]
 * 0000000140734C22: test    r10d, r10d
 * 0000000140734C25: jz      loc_140734CD9
 * 0000000140734C2B: lea     r13, [rdx+8]
 * 0000000140734C2F: mov     ecx, [r13+0]
 * 0000000140734C33: cmp     [r13+8], ecx
 * 0000000140734C37: mov     r12d, [r13+4]
 * 0000000140734C3B: cmova   ecx, [r13+8]
 * 0000000140734C40: lea     r15d, [r12+rcx]
 * 0000000140734C44: test    edi, edi
 * 0000000140734C46: jz      short loc_140734C5A
 * 0000000140734C48: lea     eax, [rdi-1]
 * 0000000140734C4B: lea     rax, [rax+rax*4]
 * 0000000140734C4F: cmp     r15d, [rdx+rax*8+0Ch]
 * 0000000140734C54: jb      loc_140734D33
 * 0000000140734C5A: cmp     rbx, r8
 * 0000000140734C5D: jz      short loc_140734CB6
 * 0000000140734C5F: mov     ecx, [rbx]
 * 0000000140734C61: mov     eax, [rbx+4]
 * 0000000140734C64: cmp     ecx, r15d
 * 0000000140734C67: jnb     short loc_140734CAB
 * 0000000140734C69: cmp     eax, r12d
 * 0000000140734C6C: jbe     short loc_140734CAB
 * 0000000140734C6E: cmp     ecx, r12d
 * 0000000140734C71: jb      loc_140734D93
 * 0000000140734C77: cmp     eax, r15d
 * 0000000140734C7A: ja      loc_140734D93
 * 0000000140734C80: mov     eax, edi
 * 0000000140734C82: mov     r9, rbx
 * 0000000140734C85: lea     rcx, [rax+rax*4]
 * 0000000140734C89: lea     r8, [rdx+rcx*8]
 * 0000000140734C8D: mov     rdx, [rsp+78h]
 * 0000000140734C92: mov     rcx, r14
 * 0000000140734C95: call    $$e6
 * 0000000140734C9A: mov     r8, [rbp+1910h+var_1968]
 * 0000000140734C9E: add     rbx, 0Ch
 * 0000000140734CA2: mov     rdx, [rbp+1910h+var_1988]
 * 0000000140734CA6: cmp     rbx, r8
 * 0000000140734CA9: jnz     short loc_140734C5F
 * 0000000140734CAB: mov     r10d, dword ptr [rsp+1A10h+Src]
 * 0000000140734CB0: mov     r11d, 1
 * 0000000140734CB6: add     edi, r11d
 * 0000000140734CB9: add     r13, 28h ; '('
 * 0000000140734CBD: cmp     edi, r10d
 * 0000000140734CC0: jb      loc_140734C2F
 * 0000000140734CC6: mov     r9, [rbp+1910h+var_1990]
 * 0000000140734CCA: mov     r13, [rsp+1A10h+var_19D0]
 * 0000000140734CCF: movzx   r12d, word ptr [rbp+1910h+Size]
 * 0000000140734CD4: mov     r15, [rsp+78h]
 * 0000000140734CD9: cmp     rbx, r8
 * 0000000140734CDC: jz      loc_140734DEC
 * 0000000140734CE2: xor     eax, eax
 * 0000000140734CE4: test    dword ptr [r14+690h], 200000h
 * 0000000140734CEF: jz      loc_14074233C
 * 0000000140734CF5: cmp     [r14+608h], eax
 * 0000000140734CFC: jnz     loc_140734B58
 * 0000000140734D02: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140734D0C: add     rax, r14
 * 0000000140734D0F: mov     [r14+610h], rax
 * 0000000140734D16: xor     eax, eax
 * 0000000140734D18: mov     [r14+618h], rax
 * 0000000140734D1F: mov     qword ptr [r14+620h], 10Fh
 * 0000000140734D2A: mov     [r14+628h], r15
 * 0000000140734D31: jmp     short loc_140734D87
 * 0000000140734D33: xor     eax, eax
 * 0000000140734D35: test    dword ptr [r14+690h], 200000h
 * 0000000140734D40: jz      loc_1407422EA
 * 0000000140734D46: cmp     [r14+608h], eax
 * 0000000140734D4D: jnz     loc_140734B58
 * 0000000140734D53: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140734D5D: add     rax, r14
 * 0000000140734D60: mov     [r14+610h], rax
 * 0000000140734D67: xor     eax, eax
 * 0000000140734D69: mov     [r14+618h], rax
 * 0000000140734D70: mov     rax, [rsp+78h]
 * 0000000140734D75: mov     qword ptr [r14+620h], 10Fh
 * 0000000140734D80: mov     [r14+628h], rax
 * 0000000140734D87: mov     [r14+608h], r11d
 * 0000000140734D8E: jmp     loc_140734B58
 * 0000000140734D93: xor     eax, eax
 * 0000000140734D95: test    dword ptr [r14+690h], 200000h
 * 0000000140734DA0: jz      loc_140742315
 * 0000000140734DA6: cmp     [r14+608h], eax
 * 0000000140734DAD: jnz     loc_140734B58
 * 0000000140734DB3: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140734DBD: add     rax, r14
 * 0000000140734DC0: mov     [r14+610h], rax
 * 0000000140734DC7: xor     eax, eax
 * 0000000140734DC9: mov     [r14+618h], rax
 * 0000000140734DD0: mov     rax, [rsp+78h]
 * 0000000140734DD5: mov     qword ptr [r14+620h], 10Fh
 * 0000000140734DE0: mov     [r14+628h], rax
 * 0000000140734DE7: jmp     loc_140734BD9
 * 0000000140734DEC: mov     r15d, [r14+554h]
 * 0000000140734DF3: lea     ecx, [r9+6]
 * 0000000140734DF7: mov     r8d, [r14+634h]
 * 0000000140734DFE: lea     eax, [r10+2]
 * 0000000140734E02: and     ecx, 0FFFFFFF8h
 * 0000000140734E05: lea     eax, [rax+rax*2]
 * 0000000140734E08: lea     eax, [rcx+rax*8]
 * 0000000140734E0B: add     eax, r15d
 * 0000000140734E0E: cmp     eax, [r14+714h]
 * 0000000140734E15: jbe     loc_140734F11
 * 0000000140734E1B: mov     edx, eax
 * 0000000140734E1D: mov     rcx, r14
 * 0000000140734E20: call    sub_140236718
 * 0000000140734E25: mov     r11, rax
 * 0000000140734E28: mov     [rbp+1910h+Size], rax
 * 0000000140734E2C: xor     eax, eax
 * 0000000140734E2E: test    r11, r11
 * 0000000140734E31: jz      loc_140734F02
 * 0000000140734E37: mov     ebx, [r14+690h]
 * 0000000140734E3E: test    bl, 4
 * 0000000140734E41: jnz     loc_140734EEF
 * 0000000140734E47: mov     edx, [r14+554h]
 * 0000000140734E4E: lea     edi, [rax+1]
 * 0000000140734E51: mov     r8, [r14+538h]
 * 0000000140734E58: and     ebx, 20000000h
 * 0000000140734E5E: neg     ebx
 * 0000000140734E60: sbb     ebx, ebx
 * 0000000140734E62: and     ebx, [r14+634h]
 * 0000000140734E69: cmp     edx, 8
 * 0000000140734E6C: jb      short loc_140734E85
 * 0000000140734E6E: mov     eax, edx
 * 0000000140734E70: shr     rax, 3
 * 0000000140734E74: xor     ecx, ecx
 * 0000000140734E76: mov     [r14], rcx
 * 0000000140734E79: add     edx, 0FFFFFFF8h
 * 0000000140734E7C: add     r14, 8
 * 0000000140734E80: sub     rax, rdi
 * 0000000140734E83: jnz     short loc_140734E76
 * 0000000140734E85: test    edx, edx
 * 0000000140734E87: jz      short loc_140734E94
 * 0000000140734E89: mov     [r14], al
 * 0000000140734E8C: add     r14, rdi
 * 0000000140734E8F: add     edx, 0FFFFFFFFh
 * 0000000140734E92: jnz     short loc_140734E89
 * 0000000140734E94: mov     edi, [r11+634h]
 * 0000000140734E9B: mov     [r11+634h], ebx
 * 0000000140734EA2: cmp     ebx, 3
 * 0000000140734EA5: jz      short loc_140734EDA
 * 0000000140734EA7: mov     eax, [r11+690h]
 * 0000000140734EAE: xor     edx, edx
 * 0000000140734EB0: and     eax, 10000000h
 * 0000000140734EB5: mov     ecx, edx
 * 0000000140734EB7: cmovz   ecx, ebx
 * 0000000140734EBA: test    ecx, ecx
 * 0000000140734EBC: jz      short loc_140734ECE
 * 0000000140734EBE: lea     rcx, [r8-8]
 * 0000000140734EC2: mov     rdx, [rcx]
 * 0000000140734EC5: call    qword ptr [r11+1F8h]
 * 0000000140734ECC: jmp     short loc_140734EE4
 * 0000000140734ECE: mov     rcx, r8
 * 0000000140734ED1: call    qword ptr [r11+0F8h]
 * 0000000140734ED8: jmp     short loc_140734EE4
 * 0000000140734EDA: mov     rcx, r8
 * 0000000140734EDD: call    qword ptr [r11+320h]
 * 0000000140734EE4: mov     r11, [rbp+1910h+Size]
 * 0000000140734EE8: mov     [r11+634h], edi
 * 0000000140734EEF: and     dword ptr [r11+690h], 0FFFFFFFBh
 * 0000000140734EF7: mov     r9, [rbp+1910h+var_1990]
 * 0000000140734EFB: mov     r10d, dword ptr [rsp+1A10h+Src]
 * 0000000140734F00: jmp     short loc_140734F1F
 * 0000000140734F02: mov     ecx, 0C000009Ah
 * 0000000140734F07: mov     r13, [rsp+1A10h+var_19C0]
 * 0000000140734F0C: jmp     loc_14073569E
 * 0000000140734F11: mov     r11, r14
 * 0000000140734F14: mov     [rbp+1910h+Size], r14
 * 0000000140734F18: mov     [r14+554h], eax
 * 0000000140734F1F: mov     eax, 1
 * 0000000140734F24: lea     rdx, [r11+r15]
 * 0000000140734F28: add     [r11+57Ch], eax
 * 0000000140734F2F: mov     [rbp+1910h+var_1310], rdx
 * 0000000140734F36: xor     edi, edi
 * 0000000140734F38: lea     ecx, [rax+2Fh]
 * 0000000140734F3B: mov     rax, rdx
 * 0000000140734F3E: lea     ebx, [rcx-2Ah]
 * 0000000140734F41: lea     r15d, [rcx-2Fh]
 * 0000000140734F45: mov     [rax], rdi
 * 0000000140734F48: add     ecx, 0FFFFFFF8h
 * 0000000140734F4B: add     rax, 8
 * 0000000140734F4F: sub     rbx, r15
 * 0000000140734F52: jnz     short loc_140734F45
 * 0000000140734F54: test    ecx, ecx
 * 0000000140734F56: jz      short loc_140734F63
 * 0000000140734F58: mov     [rax], dil
 * 0000000140734F5B: add     rax, r15
 * 0000000140734F5E: add     ecx, 0FFFFFFFFh
 * 0000000140734F61: jnz     short loc_140734F58
 * 0000000140734F63: mov     rax, [rsp+1A10h+var_19A0]
 * 0000000140734F68: mov     dword ptr [rdx], 1Eh
 * 0000000140734F6E: mov     [rdx+8], rax
 * 0000000140734F72: xor     eax, eax
 * 0000000140734F74: mov     [rdx+10h], eax
 * 0000000140734F77: mov     rcx, [r11+588h]
 * 0000000140734F7E: mov     rax, rcx
 * 0000000140734F81: jmp     short loc_140734F85
 * 0000000140734F83: xor     ecx, eax
 * 0000000140734F85: shr     rax, 1Fh
 * 0000000140734F89: test    rax, rax
 * 0000000140734F8C: jnz     short loc_140734F83
 * 0000000140734F8E: mov     rdi, [rsp+78h]
 * 0000000140734F93: lea     ebx, [r9-1]
 * 0000000140734F97: btr     ecx, 1Fh
 * 0000000140734F9B: mov     [rsp+1A10h+var_19D0], r11
 * 0000000140734FA0: mov     [rdx+14h], ecx
 * 0000000140734FA3: mov     r14, r11
 * 0000000140734FA6: mov     rax, [rbp+1910h+var_1310]
 * 0000000140734FAD: xor     edx, edx
 * 0000000140734FAF: mov     [rbp+1910h+var_F60], rax
 * 0000000140734FB6: mov     [rax+18h], rdi
 * 0000000140734FBA: mov     ecx, [r13+50h]
 * 0000000140734FBE: mov     rax, [rbp+1910h+var_F60]
 * 0000000140734FC5: mov     [rax+20h], ecx
 * 0000000140734FC8: mov     rax, [rbp+1910h+var_F60]
 * 0000000140734FCF: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 0000000140734FD3: mov     [rax+24h], ecx
 * 0000000140734FD6: mov     rax, [rbp+1910h+var_F60]
 * 0000000140734FDD: mov     [rax+28h], r12w
 * 0000000140734FE2: xor     eax, eax
 * 0000000140734FE4: cmp     dword ptr [rbp+1910h+var_1980], edx
 * 0000000140734FE7: mov     rcx, [rbp+1910h+var_F60]
 * 0000000140734FEE: mov     r12, [rsp+1A10h+var_19A0]
 * 0000000140734FF3: setnz   al
 * 0000000140734FF6: add     rbx, 7
 * 0000000140734FFA: and     rbx, 0FFFFFFFFFFFFFFF8h
 * 0000000140734FFE: xor     ax, [rcx+2Ah]
 * 0000000140735002: and     ax, r15w
 * 0000000140735006: xor     [rcx+2Ah], ax
 * 000000014073500A: mov     rcx, [rbp+1910h+var_F60]
 * 0000000140735011: movzx   eax, word ptr [rcx+28h]
 * 0000000140735015: lea     rdx, [rcx+30h]
 * 0000000140735019: add     rbx, rdx
 * 000000014073501C: mov     [rbp+1910h+var_16C8], rdx
 * 0000000140735023: mov     [rsp+1A10h+var_19C0], rbx
 * 0000000140735028: lea     rcx, [rax+rax*2]
 * 000000014073502C: lea     r8, [rbx+rcx*8]
 * 0000000140735030: mov     [rbp+1910h+var_1990], r8
 * 0000000140735034: lea     rax, [r12+0Ch]
 * 0000000140735039: test    r9d, r9d
 * 000000014073503C: jnz     short loc_140735042
 * 000000014073503E: mov     rax, [rbp+1910h+var_1968]
 * 0000000140735042: mov     [rbp+1910h+var_1980], rax
 * 0000000140735046: xor     eax, eax
 * 0000000140735048: test    r10d, r10d
 * 000000014073504B: jz      short loc_14073507D
 * 000000014073504D: lea     rax, [rbx+8]
 * 0000000140735051: mov     edx, r10d
 * 0000000140735054: xor     r9d, r9d
 * 0000000140735057: mov     r13d, 80000000h
 * 000000014073505D: mov     ecx, 2
 * 0000000140735062: mov     [rax-8], r9d
 * 0000000140735066: mov     [rax-4], r9d
 * 000000014073506A: mov     [rax], r13d
 * 000000014073506D: add     rax, 0Ch
 * 0000000140735071: sub     rcx, r15
 * 0000000140735074: jnz     short loc_140735062
 * 0000000140735076: sub     rdx, r15
 * 0000000140735079: jnz     short loc_14073505D
 * 000000014073507B: xor     eax, eax
 * 000000014073507D: cmp     rbx, r8
 * 0000000140735080: jz      loc_140735684
 * 0000000140735086: mov     r14, [rbp+1910h+var_16C8]
 * 000000014073508D: mov     rsi, rbx
 * 0000000140735090: mov     r9, [rbp+1910h+var_1988]
 * 0000000140735094: mov     r10, [rbp+1910h+var_1968]
 * 0000000140735098: jmp     short loc_1407350A0
 * 000000014073509A: xor     eax, eax
 * 000000014073509C: lea     r15d, [rax+1]
 * 00000001407350A0: mov     r13d, eax
 * 00000001407350A3: mov     eax, [r9+24h]
 * 00000001407350A7: bt      eax, 19h
 * 00000001407350AB: jb      loc_140735280
 * 00000001407350B1: mov     ecx, [r9]
 * 00000001407350B4: cmp     ecx, 54494E49h
 * 00000001407350BA: jnz     short loc_1407350CA
 * 00000001407350BC: cmp     dword ptr [r9+4], 4742444Bh
 * 00000001407350C4: jz      loc_140735280
 * 00000001407350CA: cmp     ecx, 45474150h
 * 00000001407350D0: jnz     short loc_140735101
 * 00000001407350D2: movzx   eax, word ptr [r9+4]
 * 00000001407350D7: mov     edx, 7777h
 * 00000001407350DC: cmp     ax, dx
 * 00000001407350DF: jz      loc_140735280
 * 00000001407350E5: mov     edx, 7277h
 * 00000001407350EA: cmp     ax, dx
 * 00000001407350ED: jz      loc_140735280
 * 00000001407350F3: mov     edx, 7877h
 * 00000001407350F8: cmp     ax, dx
 * 00000001407350FB: jz      loc_140735280
 * 0000000140735101: cmp     ecx, 41525245h
 * 0000000140735107: jnz     short loc_140735119
 * 0000000140735109: mov     eax, 4154h
 * 000000014073510E: cmp     [r9+4], ax
 * 0000000140735113: jz      loc_140735280
 * 0000000140735119: mov     rax, [r11+648h]
 * 0000000140735120: mov     rdi, r9
 * 0000000140735123: mov     rbx, [r11+640h]
 * 000000014073512A: mov     r8d, 7
 * 0000000140735130: mov     [rbp+1910h+var_B70], rax
 * 0000000140735137: sub     rdi, rbx
 * 000000014073513A: mov     rax, [r11+650h]
 * 0000000140735141: mov     [rbp+1910h+var_B68], rax
 * 0000000140735148: mov     rax, [r11+658h]
 * 000000014073514F: mov     [rbp+1910h+var_B60], rax
 * 0000000140735156: mov     [rbp+1910h+var_B78], rbx
 * 000000014073515D: movzx   edx, byte ptr [rdi+rbx]
 * 0000000140735161: movzx   eax, byte ptr [rbx]
 * 0000000140735164: add     rbx, r15
 * 0000000140735167: cmp     rdx, rax
 * 000000014073516A: jnz     short loc_140735177
 * 000000014073516C: add     r8d, 0FFFFFFFFh
 * 0000000140735170: jnz     short loc_14073515D
 * 0000000140735172: jmp     loc_140735210
 * 0000000140735177: mov     rdi, [rbp+1910h+var_B70]
 * 000000014073517E: mov     ebx, 8
 * 0000000140735183: mov     r8, r9
 * 0000000140735186: mov     rcx, [r8]
 * 0000000140735189: add     r8, 8
 * 000000014073518D: mov     rax, [rdi]
 * 0000000140735190: add     rdi, 8
 * 0000000140735194: cmp     rcx, rax
 * 0000000140735197: jnz     short loc_1407351BE
 * 0000000140735199: add     ebx, 0FFFFFFF8h
 * 000000014073519C: cmp     ebx, 8
 * 000000014073519F: jnb     short loc_140735186
 * 00000001407351A1: test    ebx, ebx
 * 00000001407351A3: jz      short loc_140735210
 * 00000001407351A5: movzx   edx, byte ptr [r8]
 * 00000001407351A9: add     r8, r15
 * 00000001407351AC: movzx   eax, byte ptr [rdi]
 * 00000001407351AF: add     rdi, r15
 * 00000001407351B2: cmp     rdx, rax
 * 00000001407351B5: jnz     short loc_1407351BE
 * 00000001407351B7: add     ebx, 0FFFFFFFFh
 * 00000001407351BA: jnz     short loc_1407351A5
 * 00000001407351BC: jmp     short loc_140735210
 * 00000001407351BE: mov     rbx, [rbp+1910h+var_B68]
 * 00000001407351C5: mov     rdi, r9
 * 00000001407351C8: sub     rdi, rbx
 * 00000001407351CB: mov     r8d, 4
 * 00000001407351D1: movzx   edx, byte ptr [rbx+rdi]
 * 00000001407351D5: movzx   eax, byte ptr [rbx]
 * 00000001407351D8: add     rbx, r15
 * 00000001407351DB: cmp     rdx, rax
 * 00000001407351DE: jnz     short loc_1407351E8
 * 00000001407351E0: add     r8d, 0FFFFFFFFh
 * 00000001407351E4: jnz     short loc_1407351D1
 * 00000001407351E6: jmp     short loc_140735210
 * 00000001407351E8: mov     rbx, [rbp+1910h+var_B60]
 * 00000001407351EF: mov     rdi, r9
 * 00000001407351F2: sub     rdi, rbx
 * 00000001407351F5: mov     r8d, 6
 * 00000001407351FB: movzx   edx, byte ptr [rbx+rdi]
 * 00000001407351FF: movzx   eax, byte ptr [rbx]
 * 0000000140735202: add     rbx, r15
 * 0000000140735205: cmp     rdx, rax
 * 0000000140735208: jnz     short loc_140735213
 * 000000014073520A: add     r8d, 0FFFFFFFFh
 * 000000014073520E: jnz     short loc_1407351FB
 * 0000000140735210: mov     r13d, r15d
 * 0000000140735213: mov     rdi, [rsp+78h]
 * 0000000140735218: mov     eax, [r9+24h]
 * 000000014073521C: mov     ecx, 80000000h
 * 0000000140735221: and     eax, ecx
 * 0000000140735223: xor     ecx, ecx
 * 0000000140735225: test    eax, eax
 * 0000000140735227: cmovnz  r13d, r15d
 * 000000014073522B: test    r13d, r13d
 * 000000014073522E: jz      short loc_140735255
 * 0000000140735230: cmp     dword ptr [r9], 54494E49h
 * 0000000140735237: jnz     short loc_140735255
 * 0000000140735239: cmp     dword ptr [r9+4], 4742444Bh
 * 0000000140735241: jnz     short loc_140735255
 * 0000000140735243: mov     eax, [r11+690h]
 * 000000014073524A: and     eax, 10000000h
 * 000000014073524F: mov     eax, ecx
 * 0000000140735251: cmovnz  r13d, eax
 * 0000000140735255: mov     ecx, [r9+8]
 * 0000000140735259: cmp     [r9+10h], ecx
 * 000000014073525D: mov     edx, [r9+0Ch]
 * 0000000140735261: cmova   ecx, [r9+10h]
 * 0000000140735266: add     ecx, edx
 * 0000000140735268: mov     dword ptr [rsp+1A10h+Src], edx
 * 000000014073526C: mov     dword ptr [rsp+1A10h+var_19B8], ecx
 * 0000000140735270: cmp     r12, r10
 * 0000000140735273: jz      short loc_140735285
 * 0000000140735275: mov     r11d, [r12]
 * 0000000140735279: mov     r15d, [r12+4]
 * 000000014073527E: jmp     short loc_14073528D
 * 0000000140735280: mov     r13d, r15d
 * 0000000140735283: jmp     short loc_140735218
 * 0000000140735285: xor     eax, eax
 * 0000000140735287: mov     r11d, eax
 * 000000014073528A: mov     r15d, eax
 * 000000014073528D: mov     rax, [rsp+1A10h+var_19A0]
 * 0000000140735292: xor     ebx, ebx
 * 0000000140735294: mov     r12d, edx
 * 0000000140735297: cmp     rax, r10
 * 000000014073529A: jz      loc_1407353AA
 * 00000001407352A0: cmp     r11d, edx
 * 00000001407352A3: jbe     loc_1407353AD
 * 00000001407352A9: cmp     r15d, ecx
 * 00000001407352AC: ja      loc_1407353AA
 * 00000001407352B2: test    r13d, r13d
 * 00000001407352B5: jnz     loc_1407353AA
 * 00000001407352BB: mov     [rsi], edx
 * 00000001407352BD: lea     rbx, [rbp+1910h+var_C78]
 * 00000001407352C4: mov     [rsi+4], r11d
 * 00000001407352C8: lea     rdx, [rbp+1910h+var_D80]
 * 00000001407352CF: mov     eax, [rsi]
 * 00000001407352D1: mov     r12d, r11d
 * 00000001407352D4: lea     r8, [rdi+rax]
 * 00000001407352D8: mov     edi, r11d
 * 00000001407352DB: sub     edi, eax
 * 00000001407352DD: mov     r10d, edi
 * 00000001407352E0: add     r10, r8
 * 00000001407352E3: xor     eax, eax
 * 00000001407352E5: mov     r9d, eax
 * 00000001407352E8: mov     rcx, [rbx]
 * 00000001407352EB: mov     eax, [rdx]
 * 00000001407352ED: add     rax, rcx
 * 00000001407352F0: cmp     r8, rax
 * 00000001407352F3: jnb     short loc_1407352FE
 * 00000001407352F5: cmp     r10, rcx
 * 00000001407352F8: ja      loc_140735397
 * 00000001407352FE: mov     eax, 4
 * 0000000140735303: inc     r9d
 * 0000000140735306: add     rdx, rax
 * 0000000140735309: add     rbx, 8
 * 000000014073530D: cmp     r9d, eax
 * 0000000140735310: jb      short loc_1407352E8
 * 0000000140735312: mov     r9, [rbp+1910h+Size]
 * 0000000140735316: mov     rax, r8
 * 0000000140735319: add     [r9+598h], edi
 * 0000000140735320: mov     ecx, [r9+584h]
 * 0000000140735327: mov     rdx, [r9+588h]
 * 000000014073532E: cmp     r8, r10
 * 0000000140735331: jnb     short loc_14073533F
 * 0000000140735333: prefetchnta byte ptr [rax]
 * 0000000140735336: add     rax, 40h ; '@'
 * 000000014073533A: cmp     rax, r10
 * 000000014073533D: jb      short loc_140735333
 * 000000014073533F: mov     r9d, 1
 * 0000000140735345: cmp     edi, 8
 * 0000000140735348: jb      short loc_140735362
 * 000000014073534A: mov     ebx, edi
 * 000000014073534C: shr     rbx, 3
 * 0000000140735350: xor     rdx, [r8]
 * 0000000140735353: add     edi, 0FFFFFFF8h
 * 0000000140735356: rol     rdx, cl
 * 0000000140735359: add     r8, 8
 * 000000014073535D: sub     rbx, r9
 * 0000000140735360: jnz     short loc_140735350
 * 0000000140735362: test    edi, edi
 * 0000000140735364: jz      short loc_140735378
 * 0000000140735366: movzx   eax, byte ptr [r8]
 * 000000014073536A: add     r8, r9
 * 000000014073536D: xor     rdx, rax
 * 0000000140735370: rol     rdx, cl
 * 0000000140735373: add     edi, 0FFFFFFFFh
 * 0000000140735376: jnz     short loc_140735366
 * 0000000140735378: mov     rax, rdx
 * 000000014073537B: shr     rax, 1Fh
 * 000000014073537F: xor     ebx, ebx
 * 0000000140735381: jmp     short loc_140735389
 * 0000000140735383: xor     edx, eax
 * 0000000140735385: shr     rax, 1Fh
 * 0000000140735389: test    rax, rax
 * 000000014073538C: jnz     short loc_140735383
 * 000000014073538E: btr     edx, 1Fh
 * 0000000140735392: mov     [rsi+8], edx
 * 0000000140735395: jmp     short loc_140735399
 * 0000000140735397: xor     ebx, ebx
 * 0000000140735399: mov     rax, [rsp+1A10h+var_19A0]
 * 000000014073539E: mov     r10, [rbp+1910h+var_1968]
 * 00000001407353A2: mov     edx, dword ptr [rsp+1A10h+Src]
 * 00000001407353A6: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 00000001407353AA: cmp     r11d, edx
 * 00000001407353AD: jb      loc_140735529
 * 00000001407353B3: cmp     r15d, ecx
 * 00000001407353B6: mov     r15, [rbp+1910h+var_1980]
 * 00000001407353BA: ja      loc_14073552D
 * 00000001407353C0: cmp     rax, r10
 * 00000001407353C3: jz      loc_14073552D
 * 00000001407353C9: mov     r11d, [r15+4]
 * 00000001407353CD: cmp     r11d, ecx
 * 00000001407353D0: ja      loc_14073552D
 * 00000001407353D6: mov     r15, [rbp+1910h+Size]
 * 00000001407353DA: mov     r8d, 1
 * 00000001407353E0: mov     rsi, [rbp+1910h+var_1980]
 * 00000001407353E4: cmp     rsi, r10
 * 00000001407353E7: jz      loc_140735520
 * 00000001407353ED: test    r13d, r13d
 * 00000001407353F0: jnz     loc_1407354FA
 * 00000001407353F6: mov     eax, [rax+4]
 * 00000001407353F9: lea     rdx, [rbp+1910h+var_D80]
 * 0000000140735400: mov     r12d, [rsi]
 * 0000000140735403: lea     r8, [rbp+1910h+var_C78]
 * 000000014073540A: mov     edi, eax
 * 000000014073540C: mov     ebx, r12d
 * 000000014073540F: add     rdi, [rsp+78h]
 * 0000000140735414: sub     ebx, eax
 * 0000000140735416: mov     r10d, ebx
 * 0000000140735419: add     r10, rdi
 * 000000014073541C: xor     eax, eax
 * 000000014073541E: mov     r9d, eax
 * 0000000140735421: mov     rcx, [r8]
 * 0000000140735424: mov     eax, [rdx]
 * 0000000140735426: add     rax, rcx
 * 0000000140735429: cmp     rdi, rax
 * 000000014073542C: jnb     short loc_140735437
 * 000000014073542E: cmp     r10, rcx
 * 0000000140735431: ja      loc_1407354E5
 * 0000000140735437: mov     eax, 4
 * 000000014073543C: inc     r9d
 * 000000014073543F: add     rdx, rax
 * 0000000140735442: add     r8, 8
 * 0000000140735446: cmp     r9d, eax
 * 0000000140735449: jb      short loc_140735421
 * 000000014073544B: cmp     ebx, eax
 * 000000014073544D: jb      loc_1407354E5
 * 0000000140735453: add     [r15+598h], ebx
 * 000000014073545A: mov     rax, rdi
 * 000000014073545D: mov     ecx, [r15+584h]
 * 0000000140735464: mov     rdx, [r15+588h]
 * 000000014073546B: cmp     rdi, r10
 * 000000014073546E: jnb     short loc_14073547C
 * 0000000140735470: prefetchnta byte ptr [rax]
 * 0000000140735473: add     rax, 40h ; '@'
 * 0000000140735477: cmp     rax, r10
 * 000000014073547A: jb      short loc_140735470
 * 000000014073547C: mov     r8d, 1
 * 0000000140735482: cmp     ebx, 8
 * 0000000140735485: jb      short loc_14073549F
 * 0000000140735487: mov     eax, ebx
 * 0000000140735489: shr     rax, 3
 * 000000014073548D: xor     rdx, [rdi]
 * 0000000140735490: add     ebx, 0FFFFFFF8h
 * 0000000140735493: rol     rdx, cl
 * 0000000140735496: add     rdi, 8
 * 000000014073549A: sub     rax, r8
 * 000000014073549D: jnz     short loc_14073548D
 * 000000014073549F: test    ebx, ebx
 * 00000001407354A1: jz      short loc_1407354B4
 * 00000001407354A3: movzx   eax, byte ptr [rdi]
 * 00000001407354A6: add     rdi, r8
 * 00000001407354A9: xor     rdx, rax
 * 00000001407354AC: rol     rdx, cl
 * 00000001407354AF: add     ebx, 0FFFFFFFFh
 * 00000001407354B2: jnz     short loc_1407354A3
 * 00000001407354B4: mov     rax, rdx
 * 00000001407354B7: shr     rax, 7
 * 00000001407354BB: xor     ebx, ebx
 * 00000001407354BD: jmp     short loc_1407354C5
 * 00000001407354BF: xor     dl, al
 * 00000001407354C1: shr     rax, 7
 * 00000001407354C5: test    rax, rax
 * 00000001407354C8: jnz     short loc_1407354BF
 * 00000001407354CA: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 00000001407354CE: and     dl, 7Fh
 * 00000001407354D1: mov     r10, [rbp+1910h+var_1968]
 * 00000001407354D5: mov     r8d, 1
 * 00000001407354DB: mov     rax, [rsp+1A10h+var_19A0]
 * 00000001407354E0: mov     [r14], dl
 * 00000001407354E3: jmp     short loc_1407354FE
 * 00000001407354E5: mov     rax, [rsp+1A10h+var_19A0]
 * 00000001407354EA: mov     r8d, 1
 * 00000001407354F0: mov     r10, [rbp+1910h+var_1968]
 * 00000001407354F4: xor     ebx, ebx
 * 00000001407354F6: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 00000001407354FA: mov     byte ptr [r14], 80h
 * 00000001407354FE: add     rax, 0Ch
 * 0000000140735502: add     r14, r8
 * 0000000140735505: add     rsi, 0Ch
 * 0000000140735509: mov     [rsp+1A10h+var_19A0], rax
 * 000000014073550E: cmp     rsi, r10
 * 0000000140735511: jz      short loc_140735517
 * 0000000140735513: mov     r11d, [rsi+4]
 * 0000000140735517: cmp     r11d, ecx
 * 000000014073551A: jbe     loc_1407353E4
 * 0000000140735520: mov     [rbp+1910h+var_1980], rsi
 * 0000000140735524: mov     rsi, [rsp+1A10h+var_19C0]
 * 0000000140735529: mov     r15, [rbp+1910h+var_1980]
 * 000000014073552D: test    r13d, r13d
 * 0000000140735530: jnz     loc_14073561B
 * 0000000140735536: cmp     r12d, ecx
 * 0000000140735539: jz      loc_14073561B
 * 000000014073553F: mov     [rsi+0Ch], r12d
 * 0000000140735543: lea     rdx, [rbp+1910h+var_D80]
 * 000000014073554A: mov     [rsi+10h], ecx
 * 000000014073554D: lea     r8, [rbp+1910h+var_C78]
 * 0000000140735554: mov     eax, [rsi+0Ch]
 * 0000000140735557: lea     r12d, [r13+1]
 * 000000014073555B: mov     edi, eax
 * 000000014073555D: mov     ebx, ecx
 * 000000014073555F: add     rdi, [rsp+78h]
 * 0000000140735564: sub     ebx, eax
 * 0000000140735566: mov     r10d, ebx
 * 0000000140735569: add     r10, rdi
 * 000000014073556C: xor     eax, eax
 * 000000014073556E: mov     r9d, eax
 * 0000000140735571: mov     rcx, [r8]
 * 0000000140735574: mov     eax, [rdx]
 * 0000000140735576: add     rax, rcx
 * 0000000140735579: cmp     rdi, rax
 * 000000014073557C: jnb     short loc_140735587
 * 000000014073557E: cmp     r10, rcx
 * 0000000140735581: ja      loc_140735617
 * 0000000140735587: mov     eax, 4
 * 000000014073558C: add     r9d, r12d
 * 000000014073558F: add     rdx, rax
 * 0000000140735592: add     r8, 8
 * 0000000140735596: cmp     r9d, eax
 * 0000000140735599: jb      short loc_140735571
 * 000000014073559B: mov     r11, [rbp+1910h+Size]
 * 000000014073559F: mov     rax, rdi
 * 00000001407355A2: add     [r11+598h], ebx
 * 00000001407355A9: mov     ecx, [r11+584h]
 * 00000001407355B0: mov     rdx, [r11+588h]
 * 00000001407355B7: cmp     rdi, r10
 * 00000001407355BA: jnb     short loc_1407355C8
 * 00000001407355BC: prefetchnta byte ptr [rax]
 * 00000001407355BF: add     rax, 40h ; '@'
 * 00000001407355C3: cmp     rax, r10
 * 00000001407355C6: jb      short loc_1407355BC
 * 00000001407355C8: cmp     ebx, 8
 * 00000001407355CB: jb      short loc_1407355E5
 * 00000001407355CD: mov     eax, ebx
 * 00000001407355CF: shr     rax, 3
 * 00000001407355D3: xor     rdx, [rdi]
 * 00000001407355D6: add     ebx, 0FFFFFFF8h
 * 00000001407355D9: rol     rdx, cl
 * 00000001407355DC: add     rdi, 8
 * 00000001407355E0: sub     rax, r12
 * 00000001407355E3: jnz     short loc_1407355D3
 * 00000001407355E5: test    ebx, ebx
 * 00000001407355E7: jz      short loc_1407355FA
 * 00000001407355E9: movzx   eax, byte ptr [rdi]
 * 00000001407355EC: add     rdi, r12
 * 00000001407355EF: xor     rdx, rax
 * 00000001407355F2: rol     rdx, cl
 * 00000001407355F5: add     ebx, 0FFFFFFFFh
 * 00000001407355F8: jnz     short loc_1407355E9
 * 00000001407355FA: mov     rax, rdx
 * 00000001407355FD: jmp     short loc_140735601
 * 00000001407355FF: xor     edx, eax
 * 0000000140735601: shr     rax, 1Fh
 * 0000000140735605: test    rax, rax
 * 0000000140735608: jnz     short loc_1407355FF
 * 000000014073560A: mov     r10, [rbp+1910h+var_1968]
 * 000000014073560E: btr     edx, 1Fh
 * 0000000140735612: mov     [rsi+14h], edx
 * 0000000140735615: jmp     short loc_14073561F
 * 0000000140735617: mov     r10, [rbp+1910h+var_1968]
 * 000000014073561B: mov     r11, [rbp+1910h+Size]
 * 000000014073561F: mov     r12, [rsp+1A10h+var_19A0]
 * 0000000140735624: cmp     r12, r10
 * 0000000140735627: jz      short loc_14073565B
 * 0000000140735629: mov     eax, [r12]
 * 000000014073562D: mov     ecx, [r12+4]
 * 0000000140735632: cmp     eax, dword ptr [rsp+1A10h+Src]
 * 0000000140735636: jb      short loc_14073565B
 * 0000000140735638: cmp     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 000000014073563C: ja      short loc_14073565B
 * 000000014073563E: cmp     r15, r10
 * 0000000140735641: jz      short loc_140735652
 * 0000000140735643: mov     byte ptr [r14], 80h
 * 0000000140735647: inc     r14
 * 000000014073564A: add     r15, 0Ch
 * 000000014073564E: mov     [rbp+1910h+var_1980], r15
 * 0000000140735652: add     r12, 0Ch
 * 0000000140735656: mov     [rsp+1A10h+var_19A0], r12
 * 000000014073565B: mov     r9, [rbp+1910h+var_1988]
 * 000000014073565F: add     rsi, 18h
 * 0000000140735663: mov     rdi, [rsp+78h]
 * 0000000140735668: add     r9, 28h ; '('
 * 000000014073566C: mov     [rsp+1A10h+var_19C0], rsi
 * 0000000140735671: mov     [rbp+1910h+var_1988], r9
 * 0000000140735675: cmp     rsi, [rbp+1910h+var_1990]
 * 0000000140735679: jnz     loc_14073509A
 * 000000014073567F: mov     r14, [rsp+1A10h+var_19D0]
 * 0000000140735684: xor     eax, eax
 * 0000000140735686: mov     [rbp+1910h+var_16C8], r14
 * 000000014073568D: mov     ecx, eax
 * 000000014073568F: mov     r13, r14
 * 0000000140735692: jmp     short loc_14073569E
 * 0000000140735694: mov     r13, [rsp+1A10h+var_19C0]
 * 0000000140735699: mov     ecx, 0C000007Bh
 * 000000014073569E: mov     r12d, 80000000h
 * 00000001407356A4: mov     [rbp+1910h+var_16D8], r13
 * 00000001407356AB: mov     r14, r13
 * 00000001407356AE: lea     eax, [rcx+r12]
 * 00000001407356B2: test    r12d, eax
 * 00000001407356B5: jnz     short loc_1407356CA
 * 00000001407356B7: cmp     ecx, 0C000010Eh
 * 00000001407356BD: jz      short loc_1407356CA
 * 00000001407356BF: jmp     loc_140735775
 * 00000001407356C4: mov     r12d, 80000000h
 * 00000001407356CA: mov     ebx, dword ptr [rbp+1910h+var_1958]
 * 00000001407356CD: mov     ecx, 80000004h
 * 00000001407356D2: mov     eax, ebx
 * 00000001407356D4: and     eax, ecx
 * 00000001407356D6: cmp     eax, ecx
 * 00000001407356D8: jz      loc_14073578A
 * 00000001407356DE: mov     rcx, [rbp+1910h+var_1030]
 * 00000001407356E5: mov     r15d, ebx
 * 00000001407356E8: or      r15d, r12d
 * 00000001407356EB: call    qword ptr [r13+1C8h]
 * 00000001407356F2: mov     ecx, [rax+94h]
 * 00000001407356F8: cmp     ecx, 14h
 * 00000001407356FB: jb      loc_14073578A
 * 0000000140735701: mov     eax, [rax+90h]
 * 0000000140735707: lea     rdi, [rax+rcx]
 * 000000014073570B: mov     rcx, [rbp+1910h+var_1030]
 * 0000000140735712: add     rdi, rcx
 * 0000000140735715: lea     rbx, [rax+rcx]
 * 0000000140735719: cmp     rbx, rdi
 * 000000014073571C: jz      short loc_140735771
 * 000000014073571E: xor     eax, eax
 * 0000000140735720: cmp     [rbx+0Ch], eax
 * 0000000140735723: jz      short loc_140735773
 * 0000000140735725: mov     eax, [rbx+10h]
 * 0000000140735728: test    eax, eax
 * 000000014073572A: jz      short loc_140735771
 * 000000014073572C: mov     rdx, [rax+rcx]
 * 0000000140735730: test    rdx, rdx
 * 0000000140735733: jz      short loc_14073576B
 * 0000000140735735: mov     r8d, r15d
 * 0000000140735738: lea     rcx, [rbp+1910h+var_16C8]
 * 000000014073573F: call    sub_1402347EC
 * 0000000140735744: mov     r14, [rbp+1910h+var_16C8]
 * 000000014073574B: mov     ecx, eax
 * 000000014073574D: add     eax, r12d
 * 0000000140735750: mov     [rbp+1910h+var_16D8], r14
 * 0000000140735757: test    r12d, eax
 * 000000014073575A: jnz     short loc_140735764
 * 000000014073575C: cmp     ecx, 0C000010Eh
 * 0000000140735762: jnz     short loc_140735775
 * 0000000140735764: mov     rcx, [rbp+1910h+var_1030]
 * 000000014073576B: add     rbx, 14h
 * 000000014073576F: jmp     short loc_140735719
 * 0000000140735771: xor     eax, eax
 * 0000000140735773: mov     ecx, eax
 * 0000000140735775: lea     eax, [rcx+r12]
 * 0000000140735779: test    r12d, eax
 * 000000014073577C: jnz     short loc_14073578A
 * 000000014073577E: cmp     ecx, 0C000010Eh
 * 0000000140735784: jnz     loc_140731C01
 * 000000014073578A: mov     edi, 1
 * 000000014073578F: xor     eax, eax
 * 0000000140735791: cli
 * 0000000140735792: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140735798: jz      loc_1407373D2
 * 000000014073579E: sti
 * 000000014073579F: mov     r13, [rsp+1A10h+var_19B0]
 * 00000001407357A4: lea     r8, [rbp+1910h+var_180C]
 * 00000001407357AB: mov     rcx, r13
 * 00000001407357AE: lea     rdx, [rbp+1910h+var_1300]
 * 00000001407357B5: call    qword ptr [r14+1D0h]
 * 00000001407357BC: mov     r12, rax
 * 00000001407357BF: mov     [rbp+1910h+var_1988], rax
 * 00000001407357C3: xor     eax, eax
 * 00000001407357C5: test    r12, r12
 * 00000001407357C8: jz      loc_140731C01
 * 00000001407357CE: mov     r11, [rbp+1910h+var_1300]
 * 00000001407357D5: lea     rcx, [rbp+1910h+var_E28]
 * 00000001407357DC: mov     r15d, [rbp+1910h+var_180C]
 * 00000001407357E3: lea     edx, [rax+4]
 * 00000001407357E6: mov     [rsp+1A10h+var_19C0], r11
 * 00000001407357EB: mov     dword ptr [rsp+1A10h+Src], r15d
 * 00000001407357F0: mov     [rbp+1910h+var_E30], rax
 * 00000001407357F7: mov     [rcx], al
 * 00000001407357F9: add     rcx, rdi
 * 00000001407357FC: add     edx, 0FFFFFFFFh
 * 00000001407357FF: jnz     short loc_1407357F7
 * 0000000140735801: mov     r10d, eax
 * 0000000140735804: cmp     [r14+57Ch], eax
 * 000000014073580B: jbe     loc_1407359E4
 * 0000000140735811: mov     ecx, [rbp+1910h+var_E28]
 * 0000000140735817: mov     edx, dword ptr [rbp+1910h+var_E30+4]
 * 000000014073581D: mov     edi, dword ptr [rbp+1910h+var_E30]
 * 0000000140735823: mov     rax, [r14+730h]
 * 000000014073582A: mov     r9, r14
 * 000000014073582D: test    rax, rax
 * 0000000140735830: cmovnz  r9, rax
 * 0000000140735834: xor     eax, eax
 * 0000000140735836: mov     r8d, eax
 * 0000000140735839: mov     ebx, [r9+578h]
 * 0000000140735840: add     rbx, r9
 * 0000000140735843: test    edi, edi
 * 0000000140735845: jz      short loc_140735854
 * 0000000140735847: cmp     edx, r10d
 * 000000014073584A: ja      short loc_140735854
 * 000000014073584C: mov     ebx, ecx
 * 000000014073584E: mov     r8d, edx
 * 0000000140735851: add     rbx, r9
 * 0000000140735854: cmp     r8d, r10d
 * 0000000140735857: jz      loc_140735985
 * 000000014073585D: mov     eax, r10d
 * 0000000140735860: mov     r12d, 2
 * 0000000140735866: sub     eax, r8d
 * 0000000140735869: mov     r15, 0AAAAAAAAAAAAAAABh
 * 0000000140735873: mov     edi, eax
 * 0000000140735875: add     r8d, eax
 * 0000000140735878: mov     ecx, [rbx]
 * 000000014073587A: cmp     ecx, 11h
 * 000000014073587D: jg      short loc_1407358EC
 * 000000014073587F: jz      loc_14073595A
 * 0000000140735885: sub     ecx, 1
 * 0000000140735888: jz      short loc_1407358D6
 * 000000014073588A: sub     ecx, 6
 * 000000014073588D: jz      short loc_1407358C5
 * 000000014073588F: sub     ecx, 1
 * 0000000140735892: jz      short loc_1407358B6
 * 0000000140735894: sub     ecx, r12d
 * 0000000140735897: jz      short loc_1407358A8
 * 0000000140735899: cmp     ecx, r12d
 * 000000014073589C: jz      short loc_1407358D6
 * 000000014073589E: mov     eax, 30h ; '0'
 * 00000001407358A3: jmp     loc_14073595F
 * 00000001407358A8: mov     eax, [rbx+1Ch]
 * 00000001407358AB: add     eax, 3
 * 00000001407358AE: shl     eax, 4
 * 00000001407358B1: jmp     loc_14073595F
 * 00000001407358B6: movzx   eax, word ptr [rbx+20h]
 * 00000001407358BA: add     eax, 37h ; '7'
 * 00000001407358BD: and     eax, 0FFFFFFF8h
 * 00000001407358C0: jmp     loc_14073595F
 * 00000001407358C5: mov     eax, [rbx+18h]
 * 00000001407358C8: add     eax, r12d
 * 00000001407358CB: lea     eax, [rax+rax*2]
 * 00000001407358CE: shl     eax, 3
 * 00000001407358D1: jmp     loc_14073595F
 * 00000001407358D6: mov     ecx, [rbx+10h]
 * 00000001407358D9: mov     rax, r15
 * 00000001407358DC: mul     rcx
 * 00000001407358DF: shr     rdx, 3
 * 00000001407358E3: lea     eax, ds:30h[rdx*4]
 * 00000001407358EA: jmp     short loc_14073595F
 * 00000001407358EC: cmp     ecx, 13h
 * 00000001407358EF: jz      short loc_14073595A
 * 00000001407358F1: cmp     ecx, 1Ch
 * 00000001407358F4: jz      short loc_140735951
 * 00000001407358F6: cmp     ecx, 1Eh
 * 00000001407358F9: jz      short loc_14073592D
 * 00000001407358FB: lea     eax, [rcx-21h]
 * 00000001407358FE: mov     esi, 1
 * 0000000140735903: cmp     eax, esi
 * 0000000140735905: ja      short loc_14073589E
 * 0000000140735907: mov     ecx, [rbx+20h]
 * 000000014073590A: mov     edx, [rbx+28h]
 * 000000014073590D: and     ecx, 0FFFh
 * 0000000140735913: add     rdx, 0FFFh
 * 000000014073591A: add     rdx, rcx
 * 000000014073591D: shr     rdx, 0Ch
 * 0000000140735921: lea     eax, [rdx+rdx*4]
 * 0000000140735924: lea     eax, ds:30h[rax*4]
 * 000000014073592B: jmp     short loc_14073595F
 * 000000014073592D: mov     ecx, [rbx+24h]
 * 0000000140735930: mov     rax, r15
 * 0000000140735933: dec     ecx
 * 0000000140735935: mul     rcx
 * 0000000140735938: movzx   eax, word ptr [rbx+28h]
 * 000000014073593C: shr     rdx, 3
 * 0000000140735940: add     edx, 7
 * 0000000140735943: and     edx, 0FFFFFFF8h
 * 0000000140735946: add     eax, r12d
 * 0000000140735949: lea     eax, [rax+rax*2]
 * 000000014073594C: lea     eax, [rdx+rax*8]
 * 000000014073594F: jmp     short loc_14073595F
 * 0000000140735951: movzx   eax, word ptr [rbx+28h]
 * 0000000140735955: jmp     loc_1407358BA
 * 000000014073595A: mov     eax, 38h ; '8'
 * 000000014073595F: add     rbx, rax
 * 0000000140735962: mov     eax, 1
 * 0000000140735967: sub     rdi, rax
 * 000000014073596A: jnz     loc_140735878
 * 0000000140735970: mov     r11, [rsp+1A10h+var_19C0]
 * 0000000140735975: mov     r15d, dword ptr [rsp+1A10h+Src]
 * 000000014073597A: mov     r12, [rbp+1910h+var_1988]
 * 000000014073597E: mov     r13, [rsp+1A10h+var_19B0]
 * 0000000140735983: jmp     short loc_14073598A
 * 0000000140735985: mov     eax, 1
 * 000000014073598A: mov     edx, r8d
 * 000000014073598D: mov     dword ptr [rbp+1910h+var_E30], eax
 * 0000000140735993: mov     ecx, ebx
 * 0000000140735995: mov     dword ptr [rbp+1910h+var_E30+4], edx
 * 000000014073599B: sub     ecx, r9d
 * 000000014073599E: mov     edi, eax
 * 00000001407359A0: mov     [rbp+1910h+var_E28], ecx
 * 00000001407359A6: mov     r8d, 1
 * 00000001407359AC: mov     eax, [rbx]
 * 00000001407359AE: cmp     eax, r8d
 * 00000001407359B1: jz      short loc_1407359B8
 * 00000001407359B3: cmp     eax, 0Ch
 * 00000001407359B6: jnz     short loc_1407359C4
 * 00000001407359B8: cmp     [rbx+8], r12
 * 00000001407359BC: jnz     short loc_1407359C4
 * 00000001407359BE: cmp     [rbx+10h], r15d
 * 00000001407359C2: jz      short loc_1407359E7
 * 00000001407359C4: add     eax, 0FFFFFFDFh
 * 00000001407359C7: cmp     eax, r8d
 * 00000001407359CA: ja      short loc_1407359D2
 * 00000001407359CC: cmp     [rbx+20h], r11
 * 00000001407359D0: jz      short loc_1407359E7
 * 00000001407359D2: add     r10d, r8d
 * 00000001407359D5: cmp     r10d, [r14+57Ch]
 * 00000001407359DC: jb      loc_140735823
 * 00000001407359E2: xor     eax, eax
 * 00000001407359E4: mov     rbx, rax
 * 00000001407359E7: mov     [rbp+1910h+var_1000], rbx
 * 00000001407359EE: test    rbx, rbx
 * 00000001407359F1: jnz     loc_1407373AE
 * 00000001407359F7: mov     rcx, r13
 * 00000001407359FA: call    qword ptr [r14+270h]
 * 0000000140735A01: mov     ebx, [rbp+1910h+var_180C]
 * 0000000140735A07: mov     edi, eax
 * 0000000140735A09: mov     dword ptr [rsp+1A10h+Src], eax
 * 0000000140735A0D: mov     eax, dword ptr [rbp+1910h+var_1958]
 * 0000000140735A10: mov     dword ptr [rsp+1A10h+var_19B8], ebx
 * 0000000140735A14: test    al, 2
 * 0000000140735A16: jz      short loc_140735A20
 * 0000000140735A18: test    edi, edi
 * 0000000140735A1A: jz      loc_1407373AE
 * 0000000140735A20: test    dword ptr [r14+690h], 40000000h
 * 0000000140735A2B: jz      short loc_140735A51
 * 0000000140735A2D: mov     rdx, [rbp+1910h+var_1300]
 * 0000000140735A34: lea     rcx, [rbp+1910h+var_16D8]
 * 0000000140735A3B: mov     r8d, eax
 * 0000000140735A3E: call    sub_14072DC88
 * 0000000140735A43: mov     r14, [rbp+1910h+var_16D8]
 * 0000000140735A4A: mov     ecx, eax
 * 0000000140735A4C: jmp     loc_14073613D
 * 0000000140735A51: mov     rax, [rbp+1910h+var_1300]
 * 0000000140735A58: mov     rcx, rax
 * 0000000140735A5B: mov     [rsp+1A10h+var_19B0], rax
 * 0000000140735A60: call    qword ptr [r14+1C8h]
 * 0000000140735A67: xor     r9d, r9d
 * 0000000140735A6A: mov     [rsp+1A10h+var_19C0], rax
 * 0000000140735A6F: test    rax, rax
 * 0000000140735A72: jz      loc_140736138
 * 0000000140735A78: mov     r15d, [r14+554h]
 * 0000000140735A7F: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140735A89: mov     r8d, [r14+634h]
 * 0000000140735A90: mov     r13, rbx
 * 0000000140735A93: mul     rbx
 * 0000000140735A96: mov     rax, rdx
 * 0000000140735A99: shr     rax, 3
 * 0000000140735A9D: mov     ecx, eax
 * 0000000140735A9F: mov     [rsp+1A10h+var_19A0], rax
 * 0000000140735AA4: shl     ecx, 2
 * 0000000140735AA7: mov     eax, edi
 * 0000000140735AA9: neg     eax
 * 0000000140735AAB: mov     dword ptr [rbp+1910h+var_1980], ecx
 * 0000000140735AAE: lea     edi, [r9+1]
 * 0000000140735AB2: sbb     r12d, r12d
 * 0000000140735AB5: and     r12d, 0Bh
 * 0000000140735AB9: lea     eax, [rcx+30h]
 * 0000000140735ABC: add     r12d, edi
 * 0000000140735ABF: add     eax, r15d
 * 0000000140735AC2: cmp     eax, [r14+714h]
 * 0000000140735AC9: jbe     loc_140735BBA
 * 0000000140735ACF: mov     edx, eax
 * 0000000140735AD1: mov     rcx, r14
 * 0000000140735AD4: call    sub_140236718
 * 0000000140735AD9: mov     r10, rax
 * 0000000140735ADC: mov     [rsp+1A10h+var_19D0], rax
 * 0000000140735AE1: xor     eax, eax
 * 0000000140735AE3: test    r10, r10
 * 0000000140735AE6: jz      loc_140736C1B
 * 0000000140735AEC: mov     ebx, [r14+690h]
 * 0000000140735AF3: test    bl, 4
 * 0000000140735AF6: jnz     loc_140735BAA
 * 0000000140735AFC: mov     edx, [r14+554h]
 * 0000000140735B03: and     ebx, 20000000h
 * 0000000140735B09: mov     r8, [r14+538h]
 * 0000000140735B10: neg     ebx
 * 0000000140735B12: mov     rcx, r14
 * 0000000140735B15: sbb     ebx, ebx
 * 0000000140735B17: and     ebx, [r14+634h]
 * 0000000140735B1E: cmp     edx, 8
 * 0000000140735B21: jb      short loc_140735B3B
 * 0000000140735B23: mov     eax, edx
 * 0000000140735B25: shr     rax, 3
 * 0000000140735B29: xor     r9d, r9d
 * 0000000140735B2C: mov     [rcx], r9
 * 0000000140735B2F: add     edx, 0FFFFFFF8h
 * 0000000140735B32: add     rcx, 8
 * 0000000140735B36: sub     rax, rdi
 * 0000000140735B39: jnz     short loc_140735B2C
 * 0000000140735B3B: test    edx, edx
 * 0000000140735B3D: jz      short loc_140735B49
 * 0000000140735B3F: mov     [rcx], al
 * 0000000140735B41: add     rcx, rdi
 * 0000000140735B44: add     edx, 0FFFFFFFFh
 * 0000000140735B47: jnz     short loc_140735B3F
 * 0000000140735B49: mov     edi, [r10+634h]
 * 0000000140735B50: mov     [r10+634h], ebx
 * 0000000140735B57: cmp     ebx, 3
 * 0000000140735B5A: jz      short loc_140735B8F
 * 0000000140735B5C: mov     eax, [r10+690h]
 * 0000000140735B63: xor     edx, edx
 * 0000000140735B65: and     eax, 10000000h
 * 0000000140735B6A: mov     ecx, edx
 * 0000000140735B6C: cmovz   ecx, ebx
 * 0000000140735B6F: test    ecx, ecx
 * 0000000140735B71: jz      short loc_140735B83
 * 0000000140735B73: lea     rcx, [r8-8]
 * 0000000140735B77: mov     rdx, [rcx]
 * 0000000140735B7A: call    qword ptr [r10+1F8h]
 * 0000000140735B81: jmp     short loc_140735B99
 * 0000000140735B83: mov     rcx, r8
 * 0000000140735B86: call    qword ptr [r10+0F8h]
 * 0000000140735B8D: jmp     short loc_140735B99
 * 0000000140735B8F: mov     rcx, r8
 * 0000000140735B92: call    qword ptr [r10+320h]
 * 0000000140735B99: mov     r10, [rsp+1A10h+var_19D0]
 * 0000000140735B9E: mov     [r10+634h], edi
 * 0000000140735BA5: mov     edi, 1
 * 0000000140735BAA: and     dword ptr [r10+690h], 0FFFFFFFBh
 * 0000000140735BB2: mov     ebx, r13d
 * 0000000140735BB5: xor     r9d, r9d
 * 0000000140735BB8: jmp     short loc_140735BC9
 * 0000000140735BBA: mov     r10, r14
 * 0000000140735BBD: mov     [rsp+1A10h+var_19D0], r14
 * 0000000140735BC2: mov     [r14+554h], eax
 * 0000000140735BC9: add     [r10+57Ch], edi
 * 0000000140735BD0: mov     ecx, 30h ; '0'
 * 0000000140735BD5: add     r15, r10
 * 0000000140735BD8: mov     [rbp+1910h+var_12F0], r15
 * 0000000140735BDF: mov     rax, r15
 * 0000000140735BE2: lea     edx, [rcx-2Ah]
 * 0000000140735BE5: mov     [rax], r9
 * 0000000140735BE8: add     ecx, 0FFFFFFF8h
 * 0000000140735BEB: add     rax, 8
 * 0000000140735BEF: sub     rdx, rdi
 * 0000000140735BF2: jnz     short loc_140735BE5
 * 0000000140735BF4: test    ecx, ecx
 * 0000000140735BF6: jz      short loc_140735C03
 * 0000000140735BF8: mov     [rax], r9b
 * 0000000140735BFB: add     rax, rdi
 * 0000000140735BFE: add     ecx, 0FFFFFFFFh
 * 0000000140735C01: jnz     short loc_140735BF8
 * 0000000140735C03: mov     r11, [rbp+1910h+var_1988]
 * 0000000140735C07: mov     eax, 20h ; ' '
 * 0000000140735C0C: mov     [r15], r12d
 * 0000000140735C0F: mov     [r15+8], r11
 * 0000000140735C13: cmp     r12d, eax
 * 0000000140735C16: jnz     short loc_140735C37
 * 0000000140735C18: test    ebx, ebx
 * 0000000140735C1A: jz      short loc_140735C37
 * 0000000140735C1C: lea     r9, [r15+18h]
 * 0000000140735C20: mov     r8d, ebx
 * 0000000140735C23: mov     rdx, r11
 * 0000000140735C26: mov     rcx, r10
 * 0000000140735C29: call    sub_14014F138
 * 0000000140735C2E: mov     r10, [rsp+1A10h+var_19D0]
 * 0000000140735C33: mov     r11, [rbp+1910h+var_1988]
 * 0000000140735C37: mov     [r15+10h], ebx
 * 0000000140735C3B: lea     rcx, [r11+r13]
 * 0000000140735C3F: add     [r10+598h], ebx
 * 0000000140735C46: mov     rdi, r11
 * 0000000140735C49: mov     r8d, [r10+584h]
 * 0000000140735C50: mov     rax, r11
 * 0000000140735C53: mov     rdx, [r10+588h]
 * 0000000140735C5A: cmp     r11, rcx
 * 0000000140735C5D: jnb     short loc_140735C6B
 * 0000000140735C5F: prefetchnta byte ptr [rax]
 * 0000000140735C62: add     rax, 40h ; '@'
 * 0000000140735C66: cmp     rax, rcx
 * 0000000140735C69: jb      short loc_140735C5F
 * 0000000140735C6B: mov     r9d, r13d
 * 0000000140735C6E: mov     r10d, 1
 * 0000000140735C74: cmp     r9d, 8
 * 0000000140735C78: jb      short loc_140735C96
 * 0000000140735C7A: mov     eax, r9d
 * 0000000140735C7D: shr     rax, 3
 * 0000000140735C81: xor     rdx, [rdi]
 * 0000000140735C84: mov     ecx, r8d
 * 0000000140735C87: rol     rdx, cl
 * 0000000140735C8A: add     rdi, 8
 * 0000000140735C8E: add     ebx, 0FFFFFFF8h
 * 0000000140735C91: sub     rax, r10
 * 0000000140735C94: jnz     short loc_140735C81
 * 0000000140735C96: test    ebx, ebx
 * 0000000140735C98: jz      short loc_140735CAE
 * 0000000140735C9A: movzx   eax, byte ptr [rdi]
 * 0000000140735C9D: mov     ecx, r8d
 * 0000000140735CA0: xor     rdx, rax
 * 0000000140735CA3: add     rdi, r10
 * 0000000140735CA6: rol     rdx, cl
 * 0000000140735CA9: add     ebx, 0FFFFFFFFh
 * 0000000140735CAC: jnz     short loc_140735C9A
 * 0000000140735CAE: mov     rax, rdx
 * 0000000140735CB1: jmp     short loc_140735CB5
 * 0000000140735CB3: xor     edx, eax
 * 0000000140735CB5: shr     rax, 1Fh
 * 0000000140735CB9: test    rax, rax
 * 0000000140735CBC: jnz     short loc_140735CB3
 * 0000000140735CBE: mov     r13, [rsp+1A10h+var_19D0]
 * 0000000140735CC3: btr     edx, 1Fh
 * 0000000140735CC7: mov     [r15+14h], edx
 * 0000000140735CCB: mov     edi, 0C0000225h
 * 0000000140735CD0: mov     rax, [rbp+1910h+var_12F0]
 * 0000000140735CD7: mov     [rbp+1910h+var_EE0], rax
 * 0000000140735CDE: add     [r13+598h], r9d
 * 0000000140735CE5: mov     rbx, [r13+438h]
 * 0000000140735CEC: mov     r15, [rbp+1910h+var_EE0]
 * 0000000140735CF3: add     rbx, 10h
 * 0000000140735CF7: mov     rcx, [r13+450h]
 * 0000000140735CFE: mov     r12, cr8
 * 0000000140735D02: mov     eax, 0Fh
 * 0000000140735D07: mov     cr8, rax
 * 0000000140735D0B: call    qword ptr [r13+148h]
 * 0000000140735D12: mov     rax, [r13+438h]
 * 0000000140735D19: mov     ecx, [rax]
 * 0000000140735D1B: lea     rax, [rcx+rcx*2]
 * 0000000140735D1F: lea     rcx, [rbx+rax*8]
 * 0000000140735D23: mov     rax, [rsp+1A10h+var_19B0]
 * 0000000140735D28: cmp     [rbx+8], rax
 * 0000000140735D2C: jz      short loc_140735D39
 * 0000000140735D2E: add     rbx, 18h
 * 0000000140735D32: cmp     rbx, rcx
 * 0000000140735D35: jnb     short loc_140735D50
 * 0000000140735D37: jmp     short loc_140735D28
 * 0000000140735D39: movups  xmm0, xmmword ptr [rbx]
 * 0000000140735D3C: xor     eax, eax
 * 0000000140735D3E: mov     edi, eax
 * 0000000140735D40: movups  xmmword ptr [r15+18h], xmm0
 * 0000000140735D45: movsd   xmm1, qword ptr [rbx+10h]
 * 0000000140735D4A: movsd   qword ptr [r15+28h], xmm1
 * 0000000140735D50: mov     rcx, [r13+450h]
 * 0000000140735D57: call    qword ptr [r13+188h]
 * 0000000140735D5E: movzx   eax, r12b
 * 0000000140735D62: mov     cr8, rax
 * 0000000140735D66: mov     r8d, 1
 * 0000000140735D6C: test    edi, edi
 * 0000000140735D6E: jns     short loc_140735DAC
 * 0000000140735D70: mov     rax, [rbp+1910h+var_EE0]
 * 0000000140735D77: lea     ecx, [r8+17h]
 * 0000000140735D7B: add     rax, rcx
 * 0000000140735D7E: lea     edx, [rcx-15h]
 * 0000000140735D81: xor     edi, edi
 * 0000000140735D83: mov     [rax], rdi
 * 0000000140735D86: add     ecx, 0FFFFFFF8h
 * 0000000140735D89: add     rax, 8
 * 0000000140735D8D: sub     rdx, r8
 * 0000000140735D90: jnz     short loc_140735D83
 * 0000000140735D92: test    ecx, ecx
 * 0000000140735D94: jz      short loc_140735DA1
 * 0000000140735D96: mov     [rax], dil
 * 0000000140735D99: add     rax, r8
 * 0000000140735D9C: add     ecx, 0FFFFFFFFh
 * 0000000140735D9F: jnz     short loc_140735D96
 * 0000000140735DA1: mov     rax, [rbp+1910h+var_EE0]
 * 0000000140735DA8: mov     [rax+18h], r8
 * 0000000140735DAC: mov     rbx, [rbp+1910h+var_EE0]
 * 0000000140735DB3: mov     edx, dword ptr [rbp+1910h+var_1980]
 * 0000000140735DB6: add     rbx, 30h ; '0'
 * 0000000140735DBA: mov     [rsp+1A10h+var_19D0], rbx
 * 0000000140735DBF: mov     rax, rbx
 * 0000000140735DC2: cmp     edx, 8
 * 0000000140735DC5: jb      short loc_140735DE0
 * 0000000140735DC7: mov     ecx, edx
 * 0000000140735DC9: shr     rcx, 3
 * 0000000140735DCD: mov     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
 * 0000000140735DD4: add     edx, 0FFFFFFF8h
 * 0000000140735DD7: add     rax, 8
 * 0000000140735DDB: sub     rcx, r8
 * 0000000140735DDE: jnz     short loc_140735DCD
 * 0000000140735DE0: test    edx, edx
 * 0000000140735DE2: jz      short loc_140735DEF
 * 0000000140735DE4: mov     byte ptr [rax], 0FFh
 * 0000000140735DE7: add     rax, r8
 * 0000000140735DEA: add     edx, 0FFFFFFFFh
 * 0000000140735DED: jnz     short loc_140735DE4
 * 0000000140735DEF: mov     rdx, [rbp+1910h+var_1988]
 * 0000000140735DF3: or      r12d, 0FFFFFFFFh
 * 0000000140735DF7: mov     eax, dword ptr [rsp+1A10h+var_19A0]
 * 0000000140735DFB: mov     r15, rdx
 * 0000000140735DFE: mov     r8d, [rdx]
 * 0000000140735E01: lea     rcx, [rax+rax*2]
 * 0000000140735E05: lea     rax, [rdx+rcx*4]
 * 0000000140735E09: mov     rdx, [rsp+1A10h+var_19B0]
 * 0000000140735E0E: mov     rcx, [rsp+1A10h+var_19C0]
 * 0000000140735E13: mov     [rsp+1A10h+var_19A0], rax
 * 0000000140735E18: xor     eax, eax
 * 0000000140735E1A: mov     dword ptr [rbp+1910h+var_1980], eax
 * 0000000140735E1D: call    qword ptr [r13+1E0h]
 * 0000000140735E24: mov     r9, rax
 * 0000000140735E27: xor     eax, eax
 * 0000000140735E29: test    r9, r9
 * 0000000140735E2C: jz      loc_140736138
 * 0000000140735E32: test    dword ptr [r9+24h], 2000000h
 * 0000000140735E3A: mov     r11d, eax
 * 0000000140735E3D: jnz     loc_140735FA9
 * 0000000140735E43: mov     ecx, [r9]
 * 0000000140735E46: cmp     ecx, 54494E49h
 * 0000000140735E4C: jnz     short loc_140735E5C
 * 0000000140735E4E: cmp     dword ptr [r9+4], 4742444Bh
 * 0000000140735E56: jz      loc_140735FA9
 * 0000000140735E5C: cmp     ecx, 45474150h
 * 0000000140735E62: jnz     short loc_140735E93
 * 0000000140735E64: movzx   eax, word ptr [r9+4]
 * 0000000140735E69: mov     edx, 7777h
 * 0000000140735E6E: cmp     ax, dx
 * 0000000140735E71: jz      loc_140735FA9
 * 0000000140735E77: mov     edx, 7277h
 * 0000000140735E7C: cmp     ax, dx
 * 0000000140735E7F: jz      loc_140735FA9
 * 0000000140735E85: mov     edx, 7877h
 * 0000000140735E8A: cmp     ax, dx
 * 0000000140735E8D: jz      loc_140735FA9
 * 0000000140735E93: cmp     ecx, 41525245h
 * 0000000140735E99: jnz     short loc_140735EAB
 * 0000000140735E9B: mov     eax, 4154h
 * 0000000140735EA0: cmp     [r9+4], ax
 * 0000000140735EA5: jz      loc_140735FA9
 * 0000000140735EAB: mov     rax, [r13+648h]
 * 0000000140735EB2: mov     r8d, 7
 * 0000000140735EB8: mov     rbx, [r13+640h]
 * 0000000140735EBF: mov     rdi, r9
 * 0000000140735EC2: mov     [rbp+1910h+var_C30], rax
 * 0000000140735EC9: sub     rdi, rbx
 * 0000000140735ECC: mov     rax, [r13+650h]
 * 0000000140735ED3: or      r10d, 0FFFFFFFFh
 * 0000000140735ED7: mov     [rbp+1910h+var_C28], rax
 * 0000000140735EDE: lea     r14d, [r8-6]
 * 0000000140735EE2: mov     rax, [r13+658h]
 * 0000000140735EE9: mov     [rbp+1910h+var_C20], rax
 * 0000000140735EF0: mov     [rbp+1910h+var_C38], rbx
 * 0000000140735EF7: movzx   edx, byte ptr [rdi+rbx]
 * 0000000140735EFB: movzx   eax, byte ptr [rbx]
 * 0000000140735EFE: add     rbx, r14
 * 0000000140735F01: cmp     rdx, rax
 * 0000000140735F04: jnz     short loc_140735F10
 * 0000000140735F06: add     r8d, r10d
 * 0000000140735F09: jnz     short loc_140735EF7
 * 0000000140735F0B: jmp     loc_140735FAF
 * 0000000140735F10: mov     rdi, [rbp+1910h+var_C30]
 * 0000000140735F17: mov     ebx, 8
 * 0000000140735F1C: mov     r8, r9
 * 0000000140735F1F: mov     rcx, [r8]
 * 0000000140735F22: add     r8, 8
 * 0000000140735F26: mov     rax, [rdi]
 * 0000000140735F29: add     rdi, 8
 * 0000000140735F2D: cmp     rcx, rax
 * 0000000140735F30: jnz     short loc_140735F57
 * 0000000140735F32: add     ebx, 0FFFFFFF8h
 * 0000000140735F35: cmp     ebx, 8
 * 0000000140735F38: jnb     short loc_140735F1F
 * 0000000140735F3A: test    ebx, ebx
 * 0000000140735F3C: jz      short loc_140735FAF
 * 0000000140735F3E: movzx   edx, byte ptr [r8]
 * 0000000140735F42: add     r8, r14
 * 0000000140735F45: movzx   eax, byte ptr [rdi]
 * 0000000140735F48: add     rdi, r14
 * 0000000140735F4B: cmp     rdx, rax
 * 0000000140735F4E: jnz     short loc_140735F57
 * 0000000140735F50: add     ebx, r10d
 * 0000000140735F53: jnz     short loc_140735F3E
 * 0000000140735F55: jmp     short loc_140735FAF
 * 0000000140735F57: mov     rbx, [rbp+1910h+var_C28]
 * 0000000140735F5E: mov     rdi, r9
 * 0000000140735F61: sub     rdi, rbx
 * 0000000140735F64: mov     r8d, 4
 * 0000000140735F6A: movzx   edx, byte ptr [rdi+rbx]
 * 0000000140735F6E: movzx   eax, byte ptr [rbx]
 * 0000000140735F71: add     rbx, r14
 * 0000000140735F74: cmp     rdx, rax
 * 0000000140735F77: jnz     short loc_140735F80
 * 0000000140735F79: add     r8d, r10d
 * 0000000140735F7C: jnz     short loc_140735F6A
 * 0000000140735F7E: jmp     short loc_140735FAF
 * 0000000140735F80: mov     rbx, [rbp+1910h+var_C20]
 * 0000000140735F87: mov     rdi, r9
 * 0000000140735F8A: sub     rdi, rbx
 * 0000000140735F8D: mov     r8d, 6
 * 0000000140735F93: movzx   edx, byte ptr [rbx+rdi]
 * 0000000140735F97: movzx   eax, byte ptr [rbx]
 * 0000000140735F9A: add     rbx, r14
 * 0000000140735F9D: cmp     rdx, rax
 * 0000000140735FA0: jnz     short loc_140735FB2
 * 0000000140735FA2: add     r8d, r10d
 * 0000000140735FA5: jnz     short loc_140735F93
 * 0000000140735FA7: jmp     short loc_140735FAF
 * 0000000140735FA9: mov     r14d, 1
 * 0000000140735FAF: mov     r11d, r14d
 * 0000000140735FB2: mov     eax, [r9+24h]
 * 0000000140735FB6: xor     ecx, ecx
 * 0000000140735FB8: mov     r8d, 80000000h
 * 0000000140735FBE: and     eax, r8d
 * 0000000140735FC1: cmovnz  r11d, r14d
 * 0000000140735FC5: test    r11d, r11d
 * 0000000140735FC8: jz      short loc_140735FEF
 * 0000000140735FCA: cmp     dword ptr [r9], 54494E49h
 * 0000000140735FD1: jnz     short loc_140735FEF
 * 0000000140735FD3: cmp     dword ptr [r9+4], 4742444Bh
 * 0000000140735FDB: jnz     short loc_140735FEF
 * 0000000140735FDD: mov     eax, [r13+690h]
 * 0000000140735FE4: and     eax, 10000000h
 * 0000000140735FE9: mov     eax, ecx
 * 0000000140735FEB: cmovnz  r11d, eax
 * 0000000140735FEF: mov     ecx, [r9+8]
 * 0000000140735FF3: cmp     [r9+10h], ecx
 * 0000000140735FF7: mov     r10d, [r9+0Ch]
 * 0000000140735FFB: cmova   ecx, [r9+10h]
 * 0000000140736000: mov     rdx, [rsp+1A10h+var_19B0]
 * 0000000140736005: add     r10d, ecx
 * 0000000140736008: mov     eax, [r15+8]
 * 000000014073600C: test    r14b, al
 * 000000014073600F: mov     r14d, dword ptr [rbp+1910h+var_1980]
 * 0000000140736013: jnz     short loc_140736027
 * 0000000140736015: cmp     eax, r12d
 * 0000000140736018: cmovb   r12d, eax
 * 000000014073601C: cmp     eax, r14d
 * 000000014073601F: cmova   r14d, eax
 * 0000000140736023: mov     dword ptr [rbp+1910h+var_1980], r14d
 * 0000000140736027: mov     eax, [r15]
 * 000000014073602A: mov     ebx, [r15+4]
 * 000000014073602E: sub     ebx, eax
 * 0000000140736030: lea     rdi, [rdx+rax]
 * 0000000140736034: xor     eax, eax
 * 0000000140736036: test    r11d, r11d
 * 0000000140736039: jz      short loc_140736048
 * 000000014073603B: mov     rbx, [rsp+1A10h+var_19D0]
 * 0000000140736040: mov     [rbx], r8d
 * 0000000140736043: jmp     loc_1407360DE
 * 0000000140736048: add     [r13+598h], ebx
 * 000000014073604F: mov     rax, rdi
 * 0000000140736052: mov     r8d, [r13+584h]
 * 0000000140736059: mov     rdx, [r13+588h]
 * 0000000140736060: mov     ecx, ebx
 * 0000000140736062: add     rcx, rdi
 * 0000000140736065: cmp     rdi, rcx
 * 0000000140736068: jnb     short loc_140736076
 * 000000014073606A: prefetchnta byte ptr [rax]
 * 000000014073606D: add     rax, 40h ; '@'
 * 0000000140736071: cmp     rax, rcx
 * 0000000140736074: jb      short loc_14073606A
 * 0000000140736076: cmp     ebx, 8
 * 0000000140736079: jb      short loc_14073609B
 * 000000014073607B: mov     eax, ebx
 * 000000014073607D: mov     esi, 1
 * 0000000140736082: shr     rax, 3
 * 0000000140736086: xor     rdx, [rdi]
 * 0000000140736089: mov     ecx, r8d
 * 000000014073608C: rol     rdx, cl
 * 000000014073608F: add     rdi, 8
 * 0000000140736093: add     ebx, 0FFFFFFF8h
 * 0000000140736096: sub     rax, rsi
 * 0000000140736099: jnz     short loc_140736086
 * 000000014073609B: test    ebx, ebx
 * 000000014073609D: jz      short loc_1407360B8
 * 000000014073609F: mov     esi, 1
 * 00000001407360A4: movzx   eax, byte ptr [rdi]
 * 00000001407360A7: mov     ecx, r8d
 * 00000001407360AA: xor     rdx, rax
 * 00000001407360AD: add     rdi, rsi
 * 00000001407360B0: rol     rdx, cl
 * 00000001407360B3: add     ebx, 0FFFFFFFFh
 * 00000001407360B6: jnz     short loc_1407360A4
 * 00000001407360B8: mov     rax, rdx
 * 00000001407360BB: jmp     short loc_1407360BF
 * 00000001407360BD: xor     edx, eax
 * 00000001407360BF: shr     rax, 1Fh
 * 00000001407360C3: test    rax, rax
 * 00000001407360C6: jnz     short loc_1407360BD
 * 00000001407360C8: mov     rbx, [rsp+1A10h+var_19D0]
 * 00000001407360CD: btr     edx, 1Fh
 * 00000001407360D1: mov     r8d, 80000000h
 * 00000001407360D7: mov     [rbx], edx
 * 00000001407360D9: mov     rdx, [rsp+1A10h+var_19B0]
 * 00000001407360DE: add     r15, 0Ch
 * 00000001407360E2: cmp     r15, [rsp+1A10h+var_19A0]
 * 00000001407360E7: jz      short loc_140736161
 * 00000001407360E9: mov     eax, [r9+0Ch]
 * 00000001407360ED: add     rbx, 4
 * 00000001407360F1: mov     [rsp+1A10h+var_19D0], rbx
 * 00000001407360F6: cmp     [r15], eax
 * 00000001407360F9: jb      short loc_140736114
 * 00000001407360FB: mov     ecx, [r15+4]
 * 00000001407360FF: mov     r14d, 1
 * 0000000140736105: add     rcx, rdx
 * 0000000140736108: mov     eax, r10d
 * 000000014073610B: cmp     rcx, rax
 * 000000014073610E: jbe     loc_140736008
 * 0000000140736114: mov     r8d, [r15]
 * 0000000140736117: mov     rcx, [rsp+1A10h+var_19C0]
 * 000000014073611C: call    qword ptr [r13+1E0h]
 * 0000000140736123: mov     r9, rax
 * 0000000140736126: xor     eax, eax
 * 0000000140736128: test    r9, r9
 * 000000014073612B: jnz     loc_140735E32
 * 0000000140736131: mov     r14, [rbp+1910h+var_16D8]
 * 0000000140736138: mov     ecx, 0C000007Bh
 * 000000014073613D: mov     r9d, 80000000h
 * 0000000140736143: lea     eax, [rcx+r9]
 * 0000000140736147: test    r9d, eax
 * 000000014073614A: jnz     loc_1407373B4
 * 0000000140736150: cmp     ecx, 0C000010Eh
 * 0000000140736156: jnz     loc_140731C01
 * 000000014073615C: jmp     loc_1407373B4
 * 0000000140736161: or      r15d, 0FFFFFFFFh
 * 0000000140736165: cmp     r12d, r15d
 * 0000000140736168: jnz     short loc_140736172
 * 000000014073616A: test    r14d, r14d
 * 000000014073616D: jnz     short loc_140736172
 * 000000014073616F: mov     r12d, eax
 * 0000000140736172: mov     rcx, [rbp+1910h+var_1300]
 * 0000000140736179: lea     r9, [rbp+1910h+var_180C]
 * 0000000140736180: xor     r8d, r8d
 * 0000000140736183: mov     eax, r12d
 * 0000000140736186: add     rax, rcx
 * 0000000140736189: mov     [rbp+1910h+var_16D8], r13
 * 0000000140736190: sub     r14d, r12d
 * 0000000140736193: mov     [rbp+1910h+var_BB8], rax
 * 000000014073619A: mov     [rbp+1910h+var_DE0], r14d
 * 00000001407361A1: lea     edi, [r8+1]
 * 00000001407361A5: mov     dl, dil
 * 00000001407361A8: call    qword ptr [r13+1C0h]
 * 00000001407361AF: mov     rcx, rax
 * 00000001407361B2: mov     [rbp+1910h+var_BB0], rax
 * 00000001407361B9: neg     rcx
 * 00000001407361BC: lea     r8d, [rdi+0Bh]
 * 00000001407361C0: mov     rcx, [rbp+1910h+var_1300]
 * 00000001407361C7: lea     r9, [rbp+1910h+var_180C]
 * 00000001407361CE: sbb     edx, edx
 * 00000001407361D0: and     edx, [rbp+1910h+var_180C]
 * 00000001407361D6: mov     [rbp+1910h+var_180C], edx
 * 00000001407361DC: mov     [rbp+1910h+var_DDC], edx
 * 00000001407361E2: mov     dl, dil
 * 00000001407361E5: call    qword ptr [r13+1C0h]
 * 00000001407361EC: mov     rdx, rax
 * 00000001407361EF: mov     [rsp+1A10h+var_19B0], rax
 * 00000001407361F4: neg     rax
 * 00000001407361F7: mov     [rbp+1910h+var_BA8], rdx
 * 00000001407361FE: lea     r8d, [rdi+9]
 * 0000000140736202: mov     dl, dil
 * 0000000140736205: sbb     ecx, ecx
 * 0000000140736207: lea     r9, [rbp+1910h+var_180C]
 * 000000014073620E: and     ecx, [rbp+1910h+var_180C]
 * 0000000140736214: mov     dword ptr [rbp+1910h+var_1980], ecx
 * 0000000140736217: mov     [rbp+1910h+var_180C], ecx
 * 000000014073621D: mov     [rbp+1910h+var_DD8], ecx
 * 0000000140736223: mov     rcx, [rbp+1910h+var_1300]
 * 000000014073622A: call    qword ptr [r13+1C0h]
 * 0000000140736231: mov     rcx, rax
 * 0000000140736234: mov     [rbp+1910h+var_BA0], rax
 * 000000014073623B: mov     eax, dword ptr [rsp+1A10h+Src]
 * 000000014073623F: neg     rcx
 * 0000000140736242: sbb     edx, edx
 * 0000000140736244: and     edx, [rbp+1910h+var_180C]
 * 000000014073624A: mov     [rbp+1910h+var_180C], edx
 * 0000000140736250: neg     eax
 * 0000000140736252: mov     r14d, [r13+554h]
 * 0000000140736259: mov     r8d, [r13+634h]
 * 0000000140736260: sbb     ecx, ecx
 * 0000000140736262: and     ecx, 0Bh
 * 0000000140736265: mov     [rbp+1910h+var_DD4], edx
 * 000000014073626B: mov     dword ptr [rbp+1910h+Size], ecx
 * 000000014073626E: lea     eax, [r14+0C0h]
 * 0000000140736275: cmp     eax, [r13+714h]
 * 000000014073627C: jbe     loc_140736354
 * 0000000140736282: mov     edx, eax
 * 0000000140736284: mov     rcx, r13
 * 0000000140736287: call    sub_140236718
 * 000000014073628C: mov     rbx, rax
 * 000000014073628F: xor     eax, eax
 * 0000000140736291: test    rbx, rbx
 * 0000000140736294: jz      loc_140731C01
 * 000000014073629A: mov     edx, [r13+690h]
 * 00000001407362A1: test    dl, 4
 * 00000001407362A4: jnz     loc_14073634B
 * 00000001407362AA: mov     eax, [r13+554h]
 * 00000001407362B1: and     edx, 20000000h
 * 00000001407362B7: mov     r8, [r13+538h]
 * 00000001407362BE: neg     edx
 * 00000001407362C0: sbb     edx, edx
 * 00000001407362C2: and     edx, [r13+634h]
 * 00000001407362C9: cmp     eax, 8
 * 00000001407362CC: jb      short loc_1407362E9
 * 00000001407362CE: mov     ecx, eax
 * 00000001407362D0: shr     rcx, 3
 * 00000001407362D4: xor     r9d, r9d
 * 00000001407362D7: mov     [r13+0], r9
 * 00000001407362DB: add     eax, 0FFFFFFF8h
 * 00000001407362DE: add     r13, 8
 * 00000001407362E2: sub     rcx, rdi
 * 00000001407362E5: jnz     short loc_1407362D7
 * 00000001407362E7: jmp     short loc_1407362EC
 * 00000001407362E9: xor     r9d, r9d
 * 00000001407362EC: test    eax, eax
 * 00000001407362EE: jz      short loc_1407362FC
 * 00000001407362F0: mov     [r13+0], r9b
 * 00000001407362F4: add     r13, rdi
 * 00000001407362F7: add     eax, r15d
 * 00000001407362FA: jnz     short loc_1407362F0
 * 00000001407362FC: mov     edi, [rbx+634h]
 * 0000000140736302: mov     [rbx+634h], edx
 * 0000000140736308: cmp     edx, 3
 * 000000014073630B: jz      short loc_14073633C
 * 000000014073630D: mov     eax, [rbx+690h]
 * 0000000140736313: mov     ecx, r9d
 * 0000000140736316: and     eax, 10000000h
 * 000000014073631B: cmovz   ecx, edx
 * 000000014073631E: test    ecx, ecx
 * 0000000140736320: jz      short loc_140736331
 * 0000000140736322: lea     rcx, [r8-8]
 * 0000000140736326: mov     rdx, [rcx]
 * 0000000140736329: call    qword ptr [rbx+1F8h]
 * 000000014073632F: jmp     short loc_140736345
 * 0000000140736331: mov     rcx, r8
 * 0000000140736334: call    qword ptr [rbx+0F8h]
 * 000000014073633A: jmp     short loc_140736345
 * 000000014073633C: mov     rcx, r8
 * 000000014073633F: call    qword ptr [rbx+320h]
 * 0000000140736345: mov     [rbx+634h], edi
 * 000000014073634B: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 0000000140736352: jmp     short loc_14073635E
 * 0000000140736354: mov     rbx, r13
 * 0000000140736357: mov     [r13+554h], eax
 * 000000014073635E: mov     esi, dword ptr [rbp+1910h+Size]
 * 0000000140736361: lea     r15, [rbx+r14]
 * 0000000140736365: mov     r11d, 4
 * 000000014073636B: lea     rdi, [rbp+1910h+var_DE0]
 * 0000000140736372: add     [rbx+57Ch], r11d
 * 0000000140736379: lea     r13, [rbp+1910h+var_BB8]
 * 0000000140736380: mov     [rbp+1910h+var_12E0], r15
 * 0000000140736387: mov     r10d, r11d
 * 000000014073638A: mov     [rbp+1910h+var_1000], r15
 * 0000000140736391: xor     r8d, r8d
 * 0000000140736394: lea     r9d, [r11-3]
 * 0000000140736398: mov     [rsp+1A10h+var_19C0], rdi
 * 000000014073639D: mov     [rsp+1A10h+var_19A0], r11
 * 00000001407363A2: mov     r12d, [rdi]
 * 00000001407363A5: mov     ecx, 30h ; '0'
 * 00000001407363AA: mov     r14, [r13+0]
 * 00000001407363AE: mov     rax, r15
 * 00000001407363B1: lea     edx, [rcx-2Ah]
 * 00000001407363B4: mov     [rax], r8
 * 00000001407363B7: add     ecx, 0FFFFFFF8h
 * 00000001407363BA: add     rax, 8
 * 00000001407363BE: sub     rdx, r9
 * 00000001407363C1: jnz     short loc_1407363B4
 * 00000001407363C3: test    ecx, ecx
 * 00000001407363C5: jz      short loc_1407363D2
 * 00000001407363C7: mov     [rax], r8b
 * 00000001407363CA: add     rax, r9
 * 00000001407363CD: add     ecx, 0FFFFFFFFh
 * 00000001407363D0: jnz     short loc_1407363C7
 * 00000001407363D2: mov     eax, 20h ; ' '
 * 00000001407363D7: mov     [r15], esi
 * 00000001407363DA: mov     [r15+8], r14
 * 00000001407363DE: cmp     esi, eax
 * 00000001407363E0: jnz     short loc_140736404
 * 00000001407363E2: test    r12d, r12d
 * 00000001407363E5: jz      short loc_140736404
 * 00000001407363E7: lea     r9, [r15+18h]
 * 00000001407363EB: mov     r8d, r12d
 * 00000001407363EE: mov     rdx, r14
 * 00000001407363F1: mov     rcx, rbx
 * 00000001407363F4: call    sub_14014F138
 * 00000001407363F9: mov     r10, [rsp+1A10h+var_19A0]
 * 00000001407363FE: mov     r11d, 4
 * 0000000140736404: mov     [r15+10h], r12d
 * 0000000140736408: lea     rcx, [r14+r12]
 * 000000014073640C: add     [rbx+598h], r12d
 * 0000000140736413: mov     rax, r14
 * 0000000140736416: mov     r9d, [rbx+584h]
 * 000000014073641D: mov     rdx, [rbx+588h]
 * 0000000140736424: cmp     r14, rcx
 * 0000000140736427: jnb     short loc_140736435
 * 0000000140736429: prefetchnta byte ptr [rax]
 * 000000014073642C: add     rax, 40h ; '@'
 * 0000000140736430: cmp     rax, rcx
 * 0000000140736433: jb      short loc_140736429
 * 0000000140736435: mov     r8d, r12d
 * 0000000140736438: cmp     r12d, 8
 * 000000014073643C: jb      short loc_140736468
 * 000000014073643E: mov     rdi, r12
 * 0000000140736441: mov     esi, 1
 * 0000000140736446: shr     rdi, 3
 * 000000014073644A: xor     rdx, [r14]
 * 000000014073644D: mov     ecx, r9d
 * 0000000140736450: rol     rdx, cl
 * 0000000140736453: add     r14, 8
 * 0000000140736457: add     r8d, 0FFFFFFF8h
 * 000000014073645B: sub     rdi, rsi
 * 000000014073645E: jnz     short loc_14073644A
 * 0000000140736460: mov     rdi, [rsp+1A10h+var_19C0]
 * 0000000140736465: mov     esi, dword ptr [rbp+1910h+Size]
 * 0000000140736468: test    r8d, r8d
 * 000000014073646B: jz      short loc_14073648E
 * 000000014073646D: mov     r10d, 1
 * 0000000140736473: movzx   eax, byte ptr [r14]
 * 0000000140736477: mov     ecx, r9d
 * 000000014073647A: xor     rdx, rax
 * 000000014073647D: add     r14, r10
 * 0000000140736480: rol     rdx, cl
 * 0000000140736483: add     r8d, 0FFFFFFFFh
 * 0000000140736487: jnz     short loc_140736473
 * 0000000140736489: mov     r10, [rsp+1A10h+var_19A0]
 * 000000014073648E: mov     rax, rdx
 * 0000000140736491: shr     rax, 1Fh
 * 0000000140736495: xor     r8d, r8d
 * 0000000140736498: jmp     short loc_1407364A0
 * 000000014073649A: xor     edx, eax
 * 000000014073649C: shr     rax, 1Fh
 * 00000001407364A0: test    rax, rax
 * 00000001407364A3: jnz     short loc_14073649A
 * 00000001407364A5: btr     edx, 1Fh
 * 00000001407364A9: lea     r9d, [rax+1]
 * 00000001407364AD: mov     [r15+14h], edx
 * 00000001407364B1: add     rdi, r11
 * 00000001407364B4: add     [rbx+598h], r12d
 * 00000001407364BB: add     r13, 8
 * 00000001407364BF: mov     r15, [rbp+1910h+var_12E0]
 * 00000001407364C6: add     r15, 30h ; '0'
 * 00000001407364CA: mov     [rsp+1A10h+var_19C0], rdi
 * 00000001407364CF: sub     r10, r9
 * 00000001407364D2: mov     [rbp+1910h+var_12E0], r15
 * 00000001407364D9: mov     [rsp+1A10h+var_19A0], r10
 * 00000001407364DE: jnz     loc_1407363A2
 * 00000001407364E4: mov     edi, dword ptr [rbp+1910h+var_1958]
 * 00000001407364E7: mov     r13d, r9d
 * 00000001407364EA: mov     rcx, [rbp+1910h+var_1000]
 * 00000001407364F1: and     edi, r13d
 * 00000001407364F4: mov     r15d, dword ptr [rsp+1A10h+Src]
 * 00000001407364F9: add     rcx, 60h ; '`'
 * 00000001407364FD: mov     eax, r15d
 * 0000000140736500: mov     [rbp+1910h+var_16D8], rbx
 * 0000000140736507: neg     eax
 * 0000000140736509: mov     dword ptr [rbp+1910h+var_1958], edi
 * 000000014073650C: mov     [rbp+1910h+var_FF0], rcx
 * 0000000140736513: sbb     r12d, r12d
 * 0000000140736516: neg     r12d
 * 0000000140736519: add     r12d, 0Dh
 * 000000014073651D: test    rcx, rcx
 * 0000000140736520: jnz     loc_140736739
 * 0000000140736526: mov     r15d, [rbx+554h]
 * 000000014073652D: mov     r8d, [rbx+634h]
 * 0000000140736534: lea     eax, [r15+30h]
 * 0000000140736538: cmp     eax, [rbx+714h]
 * 000000014073653E: jbe     loc_140736618
 * 0000000140736544: mov     edx, eax
 * 0000000140736546: mov     rcx, rbx
 * 0000000140736549: call    sub_140236718
 * 000000014073654E: mov     r14, rax
 * 0000000140736551: xor     eax, eax
 * 0000000140736553: test    r14, r14
 * 0000000140736556: jz      loc_140731C01
 * 000000014073655C: mov     edx, [rbx+690h]
 * 0000000140736562: test    dl, 4
 * 0000000140736565: jnz     loc_14073660E
 * 000000014073656B: mov     ecx, [rbx+554h]
 * 0000000140736571: and     edx, 20000000h
 * 0000000140736577: mov     rdi, [rbx+538h]
 * 000000014073657E: neg     edx
 * 0000000140736580: sbb     edx, edx
 * 0000000140736582: and     edx, [rbx+634h]
 * 0000000140736588: cmp     ecx, 8
 * 000000014073658B: jb      short loc_1407365A5
 * 000000014073658D: mov     eax, ecx
 * 000000014073658F: shr     rax, 3
 * 0000000140736593: xor     r9d, r9d
 * 0000000140736596: mov     [rbx], r9
 * 0000000140736599: add     ecx, 0FFFFFFF8h
 * 000000014073659C: add     rbx, 8
 * 00000001407365A0: sub     rax, r13
 * 00000001407365A3: jnz     short loc_140736596
 * 00000001407365A5: xor     eax, eax
 * 00000001407365A7: test    ecx, ecx
 * 00000001407365A9: jz      short loc_1407365B5
 * 00000001407365AB: mov     [rbx], al
 * 00000001407365AD: add     rbx, r13
 * 00000001407365B0: add     ecx, 0FFFFFFFFh
 * 00000001407365B3: jnz     short loc_1407365AB
 * 00000001407365B5: mov     ebx, [r14+634h]
 * 00000001407365BC: mov     [r14+634h], edx
 * 00000001407365C3: cmp     edx, 3
 * 00000001407365C6: jz      short loc_1407365FD
 * 00000001407365C8: mov     eax, [r14+690h]
 * 00000001407365CF: xor     r8d, r8d
 * 00000001407365D2: and     eax, 10000000h
 * 00000001407365D7: mov     ecx, r8d
 * 00000001407365DA: cmovz   ecx, edx
 * 00000001407365DD: test    ecx, ecx
 * 00000001407365DF: jz      short loc_1407365F1
 * 00000001407365E1: lea     rcx, [rdi-8]
 * 00000001407365E5: mov     rdx, [rcx]
 * 00000001407365E8: call    qword ptr [r14+1F8h]
 * 00000001407365EF: jmp     short loc_140736607
 * 00000001407365F1: mov     rcx, rdi
 * 00000001407365F4: call    qword ptr [r14+0F8h]
 * 00000001407365FB: jmp     short loc_140736607
 * 00000001407365FD: mov     rcx, rdi
 * 0000000140736600: call    qword ptr [r14+320h]
 * 0000000140736607: mov     [r14+634h], ebx
 * 000000014073660E: and     dword ptr [r14+690h], 0FFFFFFFBh
 * 0000000140736616: jmp     short loc_140736621
 * 0000000140736618: mov     r14, rbx
 * 000000014073661B: mov     [rbx+554h], eax
 * 0000000140736621: add     [r14+57Ch], r13d
 * 0000000140736628: add     r15, r14
 * 000000014073662B: mov     ecx, 30h ; '0'
 * 0000000140736630: mov     [rbp+1910h+var_12D0], r15
 * 0000000140736637: mov     rax, r15
 * 000000014073663A: xor     ebx, ebx
 * 000000014073663C: lea     edx, [rcx-2Ah]
 * 000000014073663F: mov     [rax], rbx
 * 0000000140736642: add     ecx, 0FFFFFFF8h
 * 0000000140736645: add     rax, 8
 * 0000000140736649: sub     rdx, r13
 * 000000014073664C: jnz     short loc_14073663F
 * 000000014073664E: test    ecx, ecx
 * 0000000140736650: jz      short loc_14073665C
 * 0000000140736652: mov     [rax], bl
 * 0000000140736654: add     rax, r13
 * 0000000140736657: add     ecx, 0FFFFFFFFh
 * 000000014073665A: jnz     short loc_140736652
 * 000000014073665C: mov     r13, [rsp+1A10h+var_19B0]
 * 0000000140736661: mov     eax, 20h ; ' '
 * 0000000140736666: mov     ebx, dword ptr [rbp+1910h+var_1980]
 * 0000000140736669: mov     [r15], r12d
 * 000000014073666C: mov     [r15+8], r13
 * 0000000140736670: cmp     r12d, eax
 * 0000000140736673: jnz     short loc_14073668B
 * 0000000140736675: test    ebx, ebx
 * 0000000140736677: jz      short loc_14073668B
 * 0000000140736679: lea     r9, [r15+18h]
 * 000000014073667D: mov     r8d, ebx
 * 0000000140736680: mov     rdx, r13
 * 0000000140736683: mov     rcx, r14
 * 0000000140736686: call    sub_14014F138
 * 000000014073668B: mov     [r15+10h], ebx
 * 000000014073668F: mov     r8, r13
 * 0000000140736692: add     [r14+598h], ebx
 * 0000000140736699: mov     rax, r13
 * 000000014073669C: mov     r9d, [r14+584h]
 * 00000001407366A3: mov     rdx, [r14+588h]
 * 00000001407366AA: mov     ecx, ebx
 * 00000001407366AC: add     rcx, r13
 * 00000001407366AF: cmp     r13, rcx
 * 00000001407366B2: jnb     short loc_1407366C0
 * 00000001407366B4: prefetchnta byte ptr [rax]
 * 00000001407366B7: add     rax, 40h ; '@'
 * 00000001407366BB: cmp     rax, rcx
 * 00000001407366BE: jb      short loc_1407366B4
 * 00000001407366C0: mov     edi, ebx
 * 00000001407366C2: mov     r10d, 1
 * 00000001407366C8: cmp     ebx, 8
 * 00000001407366CB: jb      short loc_1407366E9
 * 00000001407366CD: shr     rbx, 3
 * 00000001407366D1: xor     rdx, [r8]
 * 00000001407366D4: mov     ecx, r9d
 * 00000001407366D7: rol     rdx, cl
 * 00000001407366DA: add     r8, 8
 * 00000001407366DE: add     edi, 0FFFFFFF8h
 * 00000001407366E1: sub     rbx, r10
 * 00000001407366E4: jnz     short loc_1407366D1
 * 00000001407366E6: mov     ebx, dword ptr [rbp+1910h+var_1980]
 * 00000001407366E9: test    edi, edi
 * 00000001407366EB: jz      short loc_140736702
 * 00000001407366ED: movzx   eax, byte ptr [r8]
 * 00000001407366F1: mov     ecx, r9d
 * 00000001407366F4: xor     rdx, rax
 * 00000001407366F7: add     r8, r10
 * 00000001407366FA: rol     rdx, cl
 * 00000001407366FD: add     edi, 0FFFFFFFFh
 * 0000000140736700: jnz     short loc_1407366ED
 * 0000000140736702: mov     rax, rdx
 * 0000000140736705: jmp     short loc_140736709
 * 0000000140736707: xor     edx, eax
 * 0000000140736709: shr     rax, 1Fh
 * 000000014073670D: test    rax, rax
 * 0000000140736710: jnz     short loc_140736707
 * 0000000140736712: mov     edi, dword ptr [rbp+1910h+var_1958]
 * 0000000140736715: btr     edx, 1Fh
 * 0000000140736719: mov     [r15+14h], edx
 * 000000014073671D: mov     rax, [rbp+1910h+var_12D0]
 * 0000000140736724: mov     r15d, dword ptr [rsp+1A10h+Src]
 * 0000000140736729: mov     [rbp+1910h+var_FF0], rax
 * 0000000140736730: add     [r14+598h], ebx
 * 0000000140736737: jmp     short loc_140736747
 * 0000000140736739: mov     r13, [rsp+1A10h+var_19B0]
 * 000000014073673E: mov     r14, rbx
 * 0000000140736741: mov     ebx, dword ptr [rbp+1910h+var_1980]
 * 0000000140736744: mov     [rcx], r12d
 * 0000000140736747: test    dword ptr [r14+690h], 40000000h
 * 0000000140736752: jz      short loc_140736771
 * 0000000140736754: test    ebx, ebx
 * 0000000140736756: jz      short loc_140736771
 * 0000000140736758: mov     r9, [rbp+1910h+var_FF0]
 * 000000014073675F: mov     r8d, ebx
 * 0000000140736762: add     r9, 1Ch
 * 0000000140736766: mov     rdx, r13
 * 0000000140736769: mov     rcx, r14
 * 000000014073676C: call    sub_14014F138
 * 0000000140736771: mov     rax, [rbp+1910h+var_FF0]
 * 0000000140736778: xor     ecx, ecx
 * 000000014073677A: mov     [rax+18h], ecx
 * 000000014073677D: xor     eax, eax
 * 000000014073677F: lea     ecx, [rax+1]
 * 0000000140736782: test    edi, edi
 * 0000000140736784: jz      short loc_140736792
 * 0000000140736786: mov     rax, [rbp+1910h+var_FF0]
 * 000000014073678D: or      [rax+18h], ecx
 * 0000000140736790: xor     eax, eax
 * 0000000140736792: mov     rbx, [rbp+1910h+var_1000]
 * 0000000140736799: xor     r12d, r12d
 * 000000014073679C: mov     rdi, [rbp+1910h+var_1300]
 * 00000001407367A3: test    r15d, r15d
 * 00000001407367A6: setnz   al
 * 00000001407367A9: mov     dword ptr [rbx+90h], 23h ; '#'
 * 00000001407367B3: xor     eax, [rbx+0B8h]
 * 00000001407367B9: and     eax, ecx
 * 00000001407367BB: xor     [rbx+0B8h], eax
 * 00000001407367C1: cmp     dword ptr [rbx+0A0h], 94h
 * 00000001407367CB: jb      short loc_140736832
 * 00000001407367CD: mov     r15, [rbx+98h]
 * 00000001407367D4: mov     rcx, rdi
 * 00000001407367D7: call    qword ptr [r14+1C8h]
 * 00000001407367DE: test    rax, rax
 * 00000001407367E1: jz      loc_140731C01
 * 00000001407367E7: mov     ecx, [rax+50h]
 * 00000001407367EA: or      dword ptr [rbx+0B8h], 2
 * 00000001407367F1: add     rcx, rdi
 * 00000001407367F4: mov     rax, [r15+70h]
 * 00000001407367F8: cmp     rax, rdi
 * 00000001407367FB: jb      short loc_140736813
 * 00000001407367FD: cmp     rax, rcx
 * 0000000140736800: jnb     short loc_140736813
 * 0000000140736802: mov     rax, [rax]
 * 0000000140736805: mov     [rbx+0A8h], rax
 * 000000014073680C: or      dword ptr [rbx+0B8h], 4
 * 0000000140736813: mov     rax, [r15+78h]
 * 0000000140736817: cmp     rax, rdi
 * 000000014073681A: jb      short loc_140736832
 * 000000014073681C: cmp     rax, rcx
 * 000000014073681F: jnb     short loc_140736832
 * 0000000140736821: mov     rax, [rax]
 * 0000000140736824: mov     [rbx+0B0h], rax
 * 000000014073682B: or      dword ptr [rbx+0B8h], 8
 * 0000000140736832: test    dword ptr [r14+690h], 400000h
 * 000000014073683D: mov     r15, [rbp+1910h+var_1300]
 * 0000000140736844: mov     [rsp+1A10h+var_19B0], r15
 * 0000000140736849: mov     [rbp+1910h+var_16D8], r14
 * 0000000140736850: jz      loc_14073739E
 * 0000000140736856: mov     rcx, r15
 * 0000000140736859: call    qword ptr [r14+1C8h]
 * 0000000140736860: mov     [rsp+1A10h+var_19C0], rax
 * 0000000140736865: mov     r13, rax
 * 0000000140736868: test    rax, rax
 * 000000014073686B: jz      loc_140736138
 * 0000000140736871: movzx   r12d, word ptr [r13+6]
 * 0000000140736876: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140736880: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 0000000140736884: mul     rcx
 * 0000000140736887: xor     eax, eax
 * 0000000140736889: mov     word ptr [rbp+1910h+Size], r12w
 * 000000014073688E: mov     r9, rdx
 * 0000000140736891: shr     r9, 3
 * 0000000140736895: mov     [rsp+1A10h+var_19A0], r9
 * 000000014073689A: test    r12w, r12w
 * 000000014073689E: jnz     short loc_1407368FE
 * 00000001407368A0: test    dword ptr [r14+690h], 200000h
 * 00000001407368AB: jz      loc_140742361
 * 00000001407368B1: cmp     [r14+608h], eax
 * 00000001407368B8: jnz     loc_140736138
 * 00000001407368BE: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001407368C8: add     rax, r14
 * 00000001407368CB: mov     [r14+610h], rax
 * 00000001407368D2: xor     eax, eax
 * 00000001407368D4: mov     [r14+618h], rax
 * 00000001407368DB: mov     qword ptr [r14+620h], 10Fh
 * 00000001407368E6: mov     [r14+628h], r15
 * 00000001407368ED: mov     eax, 1
 * 00000001407368F2: mov     [r14+608h], eax
 * 00000001407368F9: jmp     loc_140736138
 * 00000001407368FE: mov     rdx, [rbp+1910h+var_1988]
 * 0000000140736902: mov     eax, r9d
 * 0000000140736905: mov     rbx, rdx
 * 0000000140736908: movzx   r10d, r12w
 * 000000014073690C: mov     dword ptr [rbp+1910h+var_1958], r10d
 * 0000000140736910: lea     rcx, [rax+rax*2]
 * 0000000140736914: movzx   eax, word ptr [r13+14h]
 * 0000000140736919: lea     r8, [rdx+rcx*4]
 * 000000014073691D: lea     rdx, [r13+18h]
 * 0000000140736921: mov     [rsp+78h], r8
 * 0000000140736926: add     rdx, rax
 * 0000000140736929: xor     eax, eax
 * 000000014073692B: mov     [rbp+1910h+var_1990], rdx
 * 000000014073692F: mov     edi, eax
 * 0000000140736931: lea     r11d, [rax+1]
 * 0000000140736935: test    r10d, r10d
 * 0000000140736938: jz      loc_1407369F0
 * 000000014073693E: lea     r12, [rdx+8]
 * 0000000140736942: mov     ecx, [r12]
 * 0000000140736946: cmp     [r12+8], ecx
 * 000000014073694B: mov     r13d, [r12+4]
 * 0000000140736950: cmova   ecx, [r12+8]
 * 0000000140736956: lea     r15d, [rcx+r13]
 * 000000014073695A: test    edi, edi
 * 000000014073695C: jz      short loc_140736970
 * 000000014073695E: lea     eax, [rdi-1]
 * 0000000140736961: lea     rax, [rax+rax*4]
 * 0000000140736965: cmp     r15d, [rdx+rax*8+0Ch]
 * 000000014073696A: jb      loc_140736A4A
 * 0000000140736970: cmp     rbx, r8
 * 0000000140736973: jz      short loc_1407369CC
 * 0000000140736975: mov     ecx, [rbx]
 * 0000000140736977: mov     eax, [rbx+4]
 * 000000014073697A: cmp     ecx, r15d
 * 000000014073697D: jnb     short loc_1407369C2
 * 000000014073697F: cmp     eax, r13d
 * 0000000140736982: jbe     short loc_1407369C2
 * 0000000140736984: cmp     ecx, r13d
 * 0000000140736987: jb      loc_140736AAA
 * 000000014073698D: cmp     eax, r15d
 * 0000000140736990: ja      loc_140736AAA
 * 0000000140736996: mov     eax, edi
 * 0000000140736998: mov     r9, rbx
 * 000000014073699B: lea     rcx, [rax+rax*4]
 * 000000014073699F: lea     r8, [rdx+rcx*8]
 * 00000001407369A3: mov     rdx, [rsp+1A10h+var_19B0]
 * 00000001407369A8: mov     rcx, r14
 * 00000001407369AB: call    $$e6
 * 00000001407369B0: mov     r8, [rsp+78h]
 * 00000001407369B5: add     rbx, 0Ch
 * 00000001407369B9: mov     rdx, [rbp+1910h+var_1990]
 * 00000001407369BD: cmp     rbx, r8
 * 00000001407369C0: jnz     short loc_140736975
 * 00000001407369C2: mov     r10d, dword ptr [rbp+1910h+var_1958]
 * 00000001407369C6: mov     r11d, 1
 * 00000001407369CC: add     edi, r11d
 * 00000001407369CF: add     r12, 28h ; '('
 * 00000001407369D3: cmp     edi, r10d
 * 00000001407369D6: jb      loc_140736942
 * 00000001407369DC: mov     r9, [rsp+1A10h+var_19A0]
 * 00000001407369E1: mov     r13, [rsp+1A10h+var_19C0]
 * 00000001407369E6: movzx   r12d, word ptr [rbp+1910h+Size]
 * 00000001407369EB: mov     r15, [rsp+1A10h+var_19B0]
 * 00000001407369F0: cmp     rbx, r8
 * 00000001407369F3: jz      loc_140736B03
 * 00000001407369F9: xor     eax, eax
 * 00000001407369FB: test    dword ptr [r14+690h], 200000h
 * 0000000140736A06: jz      loc_1407423CF
 * 0000000140736A0C: cmp     [r14+608h], eax
 * 0000000140736A13: jnz     loc_140736138
 * 0000000140736A19: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140736A23: add     rax, r14
 * 0000000140736A26: mov     [r14+610h], rax
 * 0000000140736A2D: xor     eax, eax
 * 0000000140736A2F: mov     [r14+618h], rax
 * 0000000140736A36: mov     qword ptr [r14+620h], 10Fh
 * 0000000140736A41: mov     [r14+628h], r15
 * 0000000140736A48: jmp     short loc_140736A9E
 * 0000000140736A4A: xor     eax, eax
 * 0000000140736A4C: test    dword ptr [r14+690h], 200000h
 * 0000000140736A57: jz      loc_140742383
 * 0000000140736A5D: cmp     [r14+608h], eax
 * 0000000140736A64: jnz     loc_140736138
 * 0000000140736A6A: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140736A74: add     rax, r14
 * 0000000140736A77: mov     [r14+610h], rax
 * 0000000140736A7E: xor     eax, eax
 * 0000000140736A80: mov     [r14+618h], rax
 * 0000000140736A87: mov     rax, [rsp+1A10h+var_19B0]
 * 0000000140736A8C: mov     qword ptr [r14+620h], 10Fh
 * 0000000140736A97: mov     [r14+628h], rax
 * 0000000140736A9E: mov     [r14+608h], r11d
 * 0000000140736AA5: jmp     loc_140736138
 * 0000000140736AAA: xor     eax, eax
 * 0000000140736AAC: test    dword ptr [r14+690h], 200000h
 * 0000000140736AB7: jz      loc_1407423A8
 * 0000000140736ABD: cmp     [r14+608h], eax
 * 0000000140736AC4: jnz     loc_140736138
 * 0000000140736ACA: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140736AD4: add     rax, r14
 * 0000000140736AD7: mov     [r14+610h], rax
 * 0000000140736ADE: xor     eax, eax
 * 0000000140736AE0: mov     [r14+618h], rax
 * 0000000140736AE7: mov     rax, [rsp+1A10h+var_19B0]
 * 0000000140736AEC: mov     qword ptr [r14+620h], 10Fh
 * 0000000140736AF7: mov     [r14+628h], rax
 * 0000000140736AFE: jmp     loc_1407368ED
 * 0000000140736B03: mov     r15d, [r14+554h]
 * 0000000140736B0A: lea     ecx, [r9+6]
 * 0000000140736B0E: mov     r8d, [r14+634h]
 * 0000000140736B15: lea     eax, [r10+2]
 * 0000000140736B19: and     ecx, 0FFFFFFF8h
 * 0000000140736B1C: lea     eax, [rax+rax*2]
 * 0000000140736B1F: lea     eax, [rcx+rax*8]
 * 0000000140736B22: add     eax, r15d
 * 0000000140736B25: cmp     eax, [r14+714h]
 * 0000000140736B2C: jbe     loc_140736C25
 * 0000000140736B32: mov     edx, eax
 * 0000000140736B34: mov     rcx, r14
 * 0000000140736B37: call    sub_140236718
 * 0000000140736B3C: mov     r11, rax
 * 0000000140736B3F: mov     [rsp+1A10h+var_19C0], rax
 * 0000000140736B44: xor     eax, eax
 * 0000000140736B46: test    r11, r11
 * 0000000140736B49: jz      loc_140736C1B
 * 0000000140736B4F: mov     ebx, [r14+690h]
 * 0000000140736B56: test    bl, 4
 * 0000000140736B59: jnz     loc_140736C08
 * 0000000140736B5F: mov     edx, [r14+554h]
 * 0000000140736B66: lea     edi, [rax+1]
 * 0000000140736B69: mov     r8, [r14+538h]
 * 0000000140736B70: and     ebx, 20000000h
 * 0000000140736B76: neg     ebx
 * 0000000140736B78: sbb     ebx, ebx
 * 0000000140736B7A: and     ebx, [r14+634h]
 * 0000000140736B81: cmp     edx, 8
 * 0000000140736B84: jb      short loc_140736B9D
 * 0000000140736B86: mov     eax, edx
 * 0000000140736B88: shr     rax, 3
 * 0000000140736B8C: xor     ecx, ecx
 * 0000000140736B8E: mov     [r14], rcx
 * 0000000140736B91: add     edx, 0FFFFFFF8h
 * 0000000140736B94: add     r14, 8
 * 0000000140736B98: sub     rax, rdi
 * 0000000140736B9B: jnz     short loc_140736B8E
 * 0000000140736B9D: test    edx, edx
 * 0000000140736B9F: jz      short loc_140736BAC
 * 0000000140736BA1: mov     [r14], al
 * 0000000140736BA4: add     r14, rdi
 * 0000000140736BA7: add     edx, 0FFFFFFFFh
 * 0000000140736BAA: jnz     short loc_140736BA1
 * 0000000140736BAC: mov     edi, [r11+634h]
 * 0000000140736BB3: mov     [r11+634h], ebx
 * 0000000140736BBA: cmp     ebx, 3
 * 0000000140736BBD: jz      short loc_140736BF2
 * 0000000140736BBF: mov     eax, [r11+690h]
 * 0000000140736BC6: xor     edx, edx
 * 0000000140736BC8: and     eax, 10000000h
 * 0000000140736BCD: mov     ecx, edx
 * 0000000140736BCF: cmovz   ecx, ebx
 * 0000000140736BD2: test    ecx, ecx
 * 0000000140736BD4: jz      short loc_140736BE6
 * 0000000140736BD6: lea     rcx, [r8-8]
 * 0000000140736BDA: mov     rdx, [rcx]
 * 0000000140736BDD: call    qword ptr [r11+1F8h]
 * 0000000140736BE4: jmp     short loc_140736BFC
 * 0000000140736BE6: mov     rcx, r8
 * 0000000140736BE9: call    qword ptr [r11+0F8h]
 * 0000000140736BF0: jmp     short loc_140736BFC
 * 0000000140736BF2: mov     rcx, r8
 * 0000000140736BF5: call    qword ptr [r11+320h]
 * 0000000140736BFC: mov     r11, [rsp+1A10h+var_19C0]
 * 0000000140736C01: mov     [r11+634h], edi
 * 0000000140736C08: and     dword ptr [r11+690h], 0FFFFFFFBh
 * 0000000140736C10: mov     r9, [rsp+1A10h+var_19A0]
 * 0000000140736C15: mov     r10d, dword ptr [rbp+1910h+var_1958]
 * 0000000140736C19: jmp     short loc_140736C34
 * 0000000140736C1B: mov     ecx, 0C000009Ah
 * 0000000140736C20: jmp     loc_14073613D
 * 0000000140736C25: mov     r11, r14
 * 0000000140736C28: mov     [rsp+1A10h+var_19C0], r14
 * 0000000140736C2D: mov     [r14+554h], eax
 * 0000000140736C34: mov     eax, 1
 * 0000000140736C39: lea     rdx, [r11+r15]
 * 0000000140736C3D: add     [r11+57Ch], eax
 * 0000000140736C44: mov     [rbp+1910h+var_F50], rdx
 * 0000000140736C4B: xor     edi, edi
 * 0000000140736C4D: lea     ecx, [rax+2Fh]
 * 0000000140736C50: mov     rax, rdx
 * 0000000140736C53: lea     ebx, [rcx-2Ah]
 * 0000000140736C56: lea     r15d, [rcx-2Fh]
 * 0000000140736C5A: mov     [rax], rdi
 * 0000000140736C5D: add     ecx, 0FFFFFFF8h
 * 0000000140736C60: add     rax, 8
 * 0000000140736C64: sub     rbx, r15
 * 0000000140736C67: jnz     short loc_140736C5A
 * 0000000140736C69: test    ecx, ecx
 * 0000000140736C6B: jz      short loc_140736C78
 * 0000000140736C6D: mov     [rax], dil
 * 0000000140736C70: add     rax, r15
 * 0000000140736C73: add     ecx, 0FFFFFFFFh
 * 0000000140736C76: jnz     short loc_140736C6D
 * 0000000140736C78: mov     rax, [rbp+1910h+var_1988]
 * 0000000140736C7C: mov     dword ptr [rdx], 1Eh
 * 0000000140736C82: mov     [rdx+8], rax
 * 0000000140736C86: xor     eax, eax
 * 0000000140736C88: mov     [rdx+10h], eax
 * 0000000140736C8B: mov     rcx, [r11+588h]
 * 0000000140736C92: mov     rax, rcx
 * 0000000140736C95: jmp     short loc_140736C99
 * 0000000140736C97: xor     ecx, eax
 * 0000000140736C99: shr     rax, 1Fh
 * 0000000140736C9D: test    rax, rax
 * 0000000140736CA0: jnz     short loc_140736C97
 * 0000000140736CA2: mov     rdi, [rsp+1A10h+var_19B0]
 * 0000000140736CA7: lea     ebx, [r9-1]
 * 0000000140736CAB: btr     ecx, 1Fh
 * 0000000140736CAF: mov     [rsp+1A10h+var_19D0], r11
 * 0000000140736CB4: mov     [rdx+14h], ecx
 * 0000000140736CB7: mov     r14, r11
 * 0000000140736CBA: mov     rax, [rbp+1910h+var_F50]
 * 0000000140736CC1: xor     edx, edx
 * 0000000140736CC3: mov     [rbp+1910h+var_12C0], rax
 * 0000000140736CCA: mov     [rax+18h], rdi
 * 0000000140736CCE: mov     ecx, [r13+50h]
 * 0000000140736CD2: mov     rax, [rbp+1910h+var_12C0]
 * 0000000140736CD9: mov     [rax+20h], ecx
 * 0000000140736CDC: mov     rax, [rbp+1910h+var_12C0]
 * 0000000140736CE3: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 0000000140736CE7: mov     [rax+24h], ecx
 * 0000000140736CEA: mov     rax, [rbp+1910h+var_12C0]
 * 0000000140736CF1: mov     [rax+28h], r12w
 * 0000000140736CF6: xor     eax, eax
 * 0000000140736CF8: cmp     dword ptr [rsp+1A10h+Src], edx
 * 0000000140736CFC: mov     rcx, [rbp+1910h+var_12C0]
 * 0000000140736D03: mov     r12, [rbp+1910h+var_1988]
 * 0000000140736D07: setnz   al
 * 0000000140736D0A: add     rbx, 7
 * 0000000140736D0E: and     rbx, 0FFFFFFFFFFFFFFF8h
 * 0000000140736D12: xor     ax, [rcx+2Ah]
 * 0000000140736D16: and     ax, r15w
 * 0000000140736D1A: xor     [rcx+2Ah], ax
 * 0000000140736D1E: mov     rcx, [rbp+1910h+var_12C0]
 * 0000000140736D25: movzx   eax, word ptr [rcx+28h]
 * 0000000140736D29: lea     rdx, [rcx+30h]
 * 0000000140736D2D: add     rbx, rdx
 * 0000000140736D30: mov     [rbp+1910h+var_16D8], rdx
 * 0000000140736D37: mov     [rsp+1A10h+var_19A0], rbx
 * 0000000140736D3C: lea     rcx, [rax+rax*2]
 * 0000000140736D40: lea     r8, [rbx+rcx*8]
 * 0000000140736D44: mov     [rbp+1910h+var_1968], r8
 * 0000000140736D48: lea     rax, [r12+0Ch]
 * 0000000140736D4D: test    r9d, r9d
 * 0000000140736D50: jnz     short loc_140736D57
 * 0000000140736D52: mov     rax, [rsp+78h]
 * 0000000140736D57: mov     [rbp+1910h+var_1958], rax
 * 0000000140736D5B: xor     eax, eax
 * 0000000140736D5D: test    r10d, r10d
 * 0000000140736D60: jz      short loc_140736D92
 * 0000000140736D62: lea     rax, [rbx+8]
 * 0000000140736D66: mov     edx, r10d
 * 0000000140736D69: xor     r9d, r9d
 * 0000000140736D6C: mov     r13d, 80000000h
 * 0000000140736D72: mov     ecx, 2
 * 0000000140736D77: mov     [rax-8], r9d
 * 0000000140736D7B: mov     [rax-4], r9d
 * 0000000140736D7F: mov     [rax], r13d
 * 0000000140736D82: add     rax, 0Ch
 * 0000000140736D86: sub     rcx, r15
 * 0000000140736D89: jnz     short loc_140736D77
 * 0000000140736D8B: sub     rdx, r15
 * 0000000140736D8E: jnz     short loc_140736D72
 * 0000000140736D90: xor     eax, eax
 * 0000000140736D92: cmp     rbx, r8
 * 0000000140736D95: jz      loc_14073739E
 * 0000000140736D9B: mov     r14, [rbp+1910h+var_16D8]
 * 0000000140736DA2: mov     rsi, rbx
 * 0000000140736DA5: mov     r9, [rbp+1910h+var_1990]
 * 0000000140736DA9: mov     r10, [rsp+78h]
 * 0000000140736DAE: jmp     short loc_140736DB2
 * 0000000140736DB0: xor     eax, eax
 * 0000000140736DB2: mov     r13d, eax
 * 0000000140736DB5: mov     eax, [r9+24h]
 * 0000000140736DB9: bt      eax, 19h
 * 0000000140736DBD: jb      loc_140736F92
 * 0000000140736DC3: mov     ecx, [r9]
 * 0000000140736DC6: cmp     ecx, 54494E49h
 * 0000000140736DCC: jnz     short loc_140736DDC
 * 0000000140736DCE: cmp     dword ptr [r9+4], 4742444Bh
 * 0000000140736DD6: jz      loc_140736F92
 * 0000000140736DDC: cmp     ecx, 45474150h
 * 0000000140736DE2: jnz     short loc_140736E13
 * 0000000140736DE4: movzx   eax, word ptr [r9+4]
 * 0000000140736DE9: mov     edx, 7777h
 * 0000000140736DEE: cmp     ax, dx
 * 0000000140736DF1: jz      loc_140736F92
 * 0000000140736DF7: mov     edx, 7277h
 * 0000000140736DFC: cmp     ax, dx
 * 0000000140736DFF: jz      loc_140736F92
 * 0000000140736E05: mov     edx, 7877h
 * 0000000140736E0A: cmp     ax, dx
 * 0000000140736E0D: jz      loc_140736F92
 * 0000000140736E13: cmp     ecx, 41525245h
 * 0000000140736E19: jnz     short loc_140736E2B
 * 0000000140736E1B: mov     eax, 4154h
 * 0000000140736E20: cmp     [r9+4], ax
 * 0000000140736E25: jz      loc_140736F92
 * 0000000140736E2B: mov     rax, [r11+648h]
 * 0000000140736E32: mov     rdi, r9
 * 0000000140736E35: mov     rbx, [r11+640h]
 * 0000000140736E3C: mov     r8d, 7
 * 0000000140736E42: mov     [rbp+1910h+var_CB0], rax
 * 0000000140736E49: sub     rdi, rbx
 * 0000000140736E4C: mov     rax, [r11+650h]
 * 0000000140736E53: mov     [rbp+1910h+var_CA8], rax
 * 0000000140736E5A: mov     rax, [r11+658h]
 * 0000000140736E61: mov     [rbp+1910h+var_CA0], rax
 * 0000000140736E68: mov     [rbp+1910h+var_CB8], rbx
 * 0000000140736E6F: movzx   edx, byte ptr [rbx+rdi]
 * 0000000140736E73: movzx   eax, byte ptr [rbx]
 * 0000000140736E76: add     rbx, r15
 * 0000000140736E79: cmp     rdx, rax
 * 0000000140736E7C: jnz     short loc_140736E89
 * 0000000140736E7E: add     r8d, 0FFFFFFFFh
 * 0000000140736E82: jnz     short loc_140736E6F
 * 0000000140736E84: jmp     loc_140736F22
 * 0000000140736E89: mov     rdi, [rbp+1910h+var_CB0]
 * 0000000140736E90: mov     ebx, 8
 * 0000000140736E95: mov     r8, r9
 * 0000000140736E98: mov     rcx, [r8]
 * 0000000140736E9B: add     r8, 8
 * 0000000140736E9F: mov     rax, [rdi]
 * 0000000140736EA2: add     rdi, 8
 * 0000000140736EA6: cmp     rcx, rax
 * 0000000140736EA9: jnz     short loc_140736ED0
 * 0000000140736EAB: add     ebx, 0FFFFFFF8h
 * 0000000140736EAE: cmp     ebx, 8
 * 0000000140736EB1: jnb     short loc_140736E98
 * 0000000140736EB3: test    ebx, ebx
 * 0000000140736EB5: jz      short loc_140736F22
 * 0000000140736EB7: movzx   edx, byte ptr [r8]
 * 0000000140736EBB: add     r8, r15
 * 0000000140736EBE: movzx   eax, byte ptr [rdi]
 * 0000000140736EC1: add     rdi, r15
 * 0000000140736EC4: cmp     rdx, rax
 * 0000000140736EC7: jnz     short loc_140736ED0
 * 0000000140736EC9: add     ebx, 0FFFFFFFFh
 * 0000000140736ECC: jnz     short loc_140736EB7
 * 0000000140736ECE: jmp     short loc_140736F22
 * 0000000140736ED0: mov     rbx, [rbp+1910h+var_CA8]
 * 0000000140736ED7: mov     rdi, r9
 * 0000000140736EDA: sub     rdi, rbx
 * 0000000140736EDD: mov     r8d, 4
 * 0000000140736EE3: movzx   edx, byte ptr [rdi+rbx]
 * 0000000140736EE7: movzx   eax, byte ptr [rbx]
 * 0000000140736EEA: add     rbx, r15
 * 0000000140736EED: cmp     rdx, rax
 * 0000000140736EF0: jnz     short loc_140736EFA
 * 0000000140736EF2: add     r8d, 0FFFFFFFFh
 * 0000000140736EF6: jnz     short loc_140736EE3
 * 0000000140736EF8: jmp     short loc_140736F22
 * 0000000140736EFA: mov     rbx, [rbp+1910h+var_CA0]
 * 0000000140736F01: mov     rdi, r9
 * 0000000140736F04: sub     rdi, rbx
 * 0000000140736F07: mov     r8d, 6
 * 0000000140736F0D: movzx   edx, byte ptr [rdi+rbx]
 * 0000000140736F11: movzx   eax, byte ptr [rbx]
 * 0000000140736F14: add     rbx, r15
 * 0000000140736F17: cmp     rdx, rax
 * 0000000140736F1A: jnz     short loc_140736F25
 * 0000000140736F1C: add     r8d, 0FFFFFFFFh
 * 0000000140736F20: jnz     short loc_140736F0D
 * 0000000140736F22: mov     r13d, r15d
 * 0000000140736F25: mov     rdi, [rsp+1A10h+var_19B0]
 * 0000000140736F2A: mov     eax, [r9+24h]
 * 0000000140736F2E: mov     ecx, 80000000h
 * 0000000140736F33: and     eax, ecx
 * 0000000140736F35: xor     ecx, ecx
 * 0000000140736F37: test    eax, eax
 * 0000000140736F39: cmovnz  r13d, r15d
 * 0000000140736F3D: test    r13d, r13d
 * 0000000140736F40: jz      short loc_140736F67
 * 0000000140736F42: cmp     dword ptr [r9], 54494E49h
 * 0000000140736F49: jnz     short loc_140736F67
 * 0000000140736F4B: cmp     dword ptr [r9+4], 4742444Bh
 * 0000000140736F53: jnz     short loc_140736F67
 * 0000000140736F55: mov     eax, [r11+690h]
 * 0000000140736F5C: and     eax, 10000000h
 * 0000000140736F61: mov     eax, ecx
 * 0000000140736F63: cmovnz  r13d, eax
 * 0000000140736F67: mov     ecx, [r9+8]
 * 0000000140736F6B: cmp     [r9+10h], ecx
 * 0000000140736F6F: mov     edx, [r9+0Ch]
 * 0000000140736F73: cmova   ecx, [r9+10h]
 * 0000000140736F78: add     ecx, edx
 * 0000000140736F7A: mov     dword ptr [rsp+1A10h+Src], edx
 * 0000000140736F7E: mov     dword ptr [rsp+1A10h+var_19B8], ecx
 * 0000000140736F82: cmp     r12, r10
 * 0000000140736F85: jz      short loc_140736F97
 * 0000000140736F87: mov     r11d, [r12]
 * 0000000140736F8B: mov     r15d, [r12+4]
 * 0000000140736F90: jmp     short loc_140736F9F
 * 0000000140736F92: mov     r13d, r15d
 * 0000000140736F95: jmp     short loc_140736F2A
 * 0000000140736F97: xor     eax, eax
 * 0000000140736F99: mov     r11d, eax
 * 0000000140736F9C: mov     r15d, eax
 * 0000000140736F9F: mov     rax, [rbp+1910h+var_1988]
 * 0000000140736FA3: xor     ebx, ebx
 * 0000000140736FA5: mov     r12d, edx
 * 0000000140736FA8: cmp     rax, r10
 * 0000000140736FAB: jz      loc_1407370BC
 * 0000000140736FB1: cmp     r11d, edx
 * 0000000140736FB4: jbe     loc_1407370BF
 * 0000000140736FBA: cmp     r15d, ecx
 * 0000000140736FBD: ja      loc_1407370BC
 * 0000000140736FC3: test    r13d, r13d
 * 0000000140736FC6: jnz     loc_1407370BC
 * 0000000140736FCC: mov     [rsi], edx
 * 0000000140736FCE: mov     ebx, r11d
 * 0000000140736FD1: mov     [rsi+4], r11d
 * 0000000140736FD5: lea     rdx, [rbp+1910h+var_DE0]
 * 0000000140736FDC: mov     eax, [rsi]
 * 0000000140736FDE: mov     r12d, r11d
 * 0000000140736FE1: sub     ebx, eax
 * 0000000140736FE3: mov     r10d, ebx
 * 0000000140736FE6: lea     r8, [rdi+rax]
 * 0000000140736FEA: add     r10, r8
 * 0000000140736FED: lea     rdi, [rbp+1910h+var_BB8]
 * 0000000140736FF4: xor     eax, eax
 * 0000000140736FF6: mov     r9d, eax
 * 0000000140736FF9: mov     rcx, [rdi]
 * 0000000140736FFC: mov     eax, [rdx]
 * 0000000140736FFE: add     rax, rcx
 * 0000000140737001: cmp     r8, rax
 * 0000000140737004: jnb     short loc_14073700F
 * 0000000140737006: cmp     r10, rcx
 * 0000000140737009: ja      loc_1407370A9
 * 000000014073700F: mov     eax, 4
 * 0000000140737014: inc     r9d
 * 0000000140737017: add     rdx, rax
 * 000000014073701A: add     rdi, 8
 * 000000014073701E: cmp     r9d, eax
 * 0000000140737021: jb      short loc_140736FF9
 * 0000000140737023: mov     r9, [rsp+1A10h+var_19C0]
 * 0000000140737028: mov     rax, r8
 * 000000014073702B: add     [r9+598h], ebx
 * 0000000140737032: mov     ecx, [r9+584h]
 * 0000000140737039: mov     rdx, [r9+588h]
 * 0000000140737040: cmp     r8, r10
 * 0000000140737043: jnb     short loc_140737051
 * 0000000140737045: prefetchnta byte ptr [rax]
 * 0000000140737048: add     rax, 40h ; '@'
 * 000000014073704C: cmp     rax, r10
 * 000000014073704F: jb      short loc_140737045
 * 0000000140737051: mov     r9d, 1
 * 0000000140737057: cmp     ebx, 8
 * 000000014073705A: jb      short loc_140737074
 * 000000014073705C: mov     edi, ebx
 * 000000014073705E: shr     rdi, 3
 * 0000000140737062: xor     rdx, [r8]
 * 0000000140737065: add     ebx, 0FFFFFFF8h
 * 0000000140737068: rol     rdx, cl
 * 000000014073706B: add     r8, 8
 * 000000014073706F: sub     rdi, r9
 * 0000000140737072: jnz     short loc_140737062
 * 0000000140737074: test    ebx, ebx
 * 0000000140737076: jz      short loc_14073708A
 * 0000000140737078: movzx   eax, byte ptr [r8]
 * 000000014073707C: add     r8, r9
 * 000000014073707F: xor     rdx, rax
 * 0000000140737082: rol     rdx, cl
 * 0000000140737085: add     ebx, 0FFFFFFFFh
 * 0000000140737088: jnz     short loc_140737078
 * 000000014073708A: mov     rax, rdx
 * 000000014073708D: shr     rax, 1Fh
 * 0000000140737091: xor     ebx, ebx
 * 0000000140737093: jmp     short loc_14073709B
 * 0000000140737095: xor     edx, eax
 * 0000000140737097: shr     rax, 1Fh
 * 000000014073709B: test    rax, rax
 * 000000014073709E: jnz     short loc_140737095
 * 00000001407370A0: btr     edx, 1Fh
 * 00000001407370A4: mov     [rsi+8], edx
 * 00000001407370A7: jmp     short loc_1407370AB
 * 00000001407370A9: xor     ebx, ebx
 * 00000001407370AB: mov     rax, [rbp+1910h+var_1988]
 * 00000001407370AF: mov     r10, [rsp+78h]
 * 00000001407370B4: mov     edx, dword ptr [rsp+1A10h+Src]
 * 00000001407370B8: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 00000001407370BC: cmp     r11d, edx
 * 00000001407370BF: jb      loc_14073723B
 * 00000001407370C5: cmp     r15d, ecx
 * 00000001407370C8: mov     r15, [rbp+1910h+var_1958]
 * 00000001407370CC: ja      loc_14073723F
 * 00000001407370D2: cmp     rax, r10
 * 00000001407370D5: jz      loc_14073723F
 * 00000001407370DB: mov     r11d, [r15+4]
 * 00000001407370DF: cmp     r11d, ecx
 * 00000001407370E2: ja      loc_14073723F
 * 00000001407370E8: mov     r15, [rsp+1A10h+var_19C0]
 * 00000001407370ED: mov     r8d, 1
 * 00000001407370F3: mov     rsi, [rbp+1910h+var_1958]
 * 00000001407370F7: cmp     rsi, r10
 * 00000001407370FA: jz      loc_140737232
 * 0000000140737100: test    r13d, r13d
 * 0000000140737103: jnz     loc_14073720D
 * 0000000140737109: mov     eax, [rax+4]
 * 000000014073710C: lea     rdx, [rbp+1910h+var_DE0]
 * 0000000140737113: mov     r12d, [rsi]
 * 0000000140737116: lea     r8, [rbp+1910h+var_BB8]
 * 000000014073711D: mov     edi, eax
 * 000000014073711F: mov     ebx, r12d
 * 0000000140737122: add     rdi, [rsp+1A10h+var_19B0]
 * 0000000140737127: sub     ebx, eax
 * 0000000140737129: mov     r10d, ebx
 * 000000014073712C: add     r10, rdi
 * 000000014073712F: xor     eax, eax
 * 0000000140737131: mov     r9d, eax
 * 0000000140737134: mov     rcx, [r8]
 * 0000000140737137: mov     eax, [rdx]
 * 0000000140737139: add     rax, rcx
 * 000000014073713C: cmp     rdi, rax
 * 000000014073713F: jnb     short loc_14073714A
 * 0000000140737141: cmp     r10, rcx
 * 0000000140737144: ja      loc_1407371F8
 * 000000014073714A: mov     eax, 4
 * 000000014073714F: inc     r9d
 * 0000000140737152: add     rdx, rax
 * 0000000140737155: add     r8, 8
 * 0000000140737159: cmp     r9d, eax
 * 000000014073715C: jb      short loc_140737134
 * 000000014073715E: cmp     ebx, eax
 * 0000000140737160: jb      loc_1407371F8
 * 0000000140737166: add     [r15+598h], ebx
 * 000000014073716D: mov     rax, rdi
 * 0000000140737170: mov     ecx, [r15+584h]
 * 0000000140737177: mov     rdx, [r15+588h]
 * 000000014073717E: cmp     rdi, r10
 * 0000000140737181: jnb     short loc_14073718F
 * 0000000140737183: prefetchnta byte ptr [rax]
 * 0000000140737186: add     rax, 40h ; '@'
 * 000000014073718A: cmp     rax, r10
 * 000000014073718D: jb      short loc_140737183
 * 000000014073718F: mov     r8d, 1
 * 0000000140737195: cmp     ebx, 8
 * 0000000140737198: jb      short loc_1407371B2
 * 000000014073719A: mov     eax, ebx
 * 000000014073719C: shr     rax, 3
 * 00000001407371A0: xor     rdx, [rdi]
 * 00000001407371A3: add     ebx, 0FFFFFFF8h
 * 00000001407371A6: rol     rdx, cl
 * 00000001407371A9: add     rdi, 8
 * 00000001407371AD: sub     rax, r8
 * 00000001407371B0: jnz     short loc_1407371A0
 * 00000001407371B2: test    ebx, ebx
 * 00000001407371B4: jz      short loc_1407371C7
 * 00000001407371B6: movzx   eax, byte ptr [rdi]
 * 00000001407371B9: add     rdi, r8
 * 00000001407371BC: xor     rdx, rax
 * 00000001407371BF: rol     rdx, cl
 * 00000001407371C2: add     ebx, 0FFFFFFFFh
 * 00000001407371C5: jnz     short loc_1407371B6
 * 00000001407371C7: mov     rax, rdx
 * 00000001407371CA: shr     rax, 7
 * 00000001407371CE: xor     ebx, ebx
 * 00000001407371D0: jmp     short loc_1407371D8
 * 00000001407371D2: xor     dl, al
 * 00000001407371D4: shr     rax, 7
 * 00000001407371D8: test    rax, rax
 * 00000001407371DB: jnz     short loc_1407371D2
 * 00000001407371DD: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 00000001407371E1: and     dl, 7Fh
 * 00000001407371E4: mov     r10, [rsp+78h]
 * 00000001407371E9: mov     r8d, 1
 * 00000001407371EF: mov     rax, [rbp+1910h+var_1988]
 * 00000001407371F3: mov     [r14], dl
 * 00000001407371F6: jmp     short loc_140737211
 * 00000001407371F8: mov     rax, [rbp+1910h+var_1988]
 * 00000001407371FC: mov     r8d, 1
 * 0000000140737202: mov     r10, [rsp+78h]
 * 0000000140737207: xor     ebx, ebx
 * 0000000140737209: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 000000014073720D: mov     byte ptr [r14], 80h
 * 0000000140737211: add     rax, 0Ch
 * 0000000140737215: add     r14, r8
 * 0000000140737218: add     rsi, 0Ch
 * 000000014073721C: mov     [rbp+1910h+var_1988], rax
 * 0000000140737220: cmp     rsi, r10
 * 0000000140737223: jz      short loc_140737229
 * 0000000140737225: mov     r11d, [rsi+4]
 * 0000000140737229: cmp     r11d, ecx
 * 000000014073722C: jbe     loc_1407370F7
 * 0000000140737232: mov     [rbp+1910h+var_1958], rsi
 * 0000000140737236: mov     rsi, [rsp+1A10h+var_19A0]
 * 000000014073723B: mov     r15, [rbp+1910h+var_1958]
 * 000000014073723F: test    r13d, r13d
 * 0000000140737242: jnz     loc_140737330
 * 0000000140737248: cmp     r12d, ecx
 * 000000014073724B: jz      loc_140737330
 * 0000000140737251: mov     [rsi+0Ch], r12d
 * 0000000140737255: lea     rdx, [rbp+1910h+var_DE0]
 * 000000014073725C: mov     [rsi+10h], ecx
 * 000000014073725F: lea     r8, [rbp+1910h+var_BB8]
 * 0000000140737266: mov     eax, [rsi+0Ch]
 * 0000000140737269: lea     r12d, [r13+1]
 * 000000014073726D: mov     edi, eax
 * 000000014073726F: mov     ebx, ecx
 * 0000000140737271: add     rdi, [rsp+1A10h+var_19B0]
 * 0000000140737276: sub     ebx, eax
 * 0000000140737278: mov     r10d, ebx
 * 000000014073727B: add     r10, rdi
 * 000000014073727E: xor     eax, eax
 * 0000000140737280: mov     r9d, eax
 * 0000000140737283: mov     rcx, [r8]
 * 0000000140737286: mov     eax, [rdx]
 * 0000000140737288: add     rax, rcx
 * 000000014073728B: cmp     rdi, rax
 * 000000014073728E: jnb     short loc_140737299
 * 0000000140737290: cmp     r10, rcx
 * 0000000140737293: ja      loc_14073732B
 * 0000000140737299: mov     eax, 4
 * 000000014073729E: add     r9d, r12d
 * 00000001407372A1: add     rdx, rax
 * 00000001407372A4: add     r8, 8
 * 00000001407372A8: cmp     r9d, eax
 * 00000001407372AB: jb      short loc_140737283
 * 00000001407372AD: mov     r11, [rsp+1A10h+var_19C0]
 * 00000001407372B2: mov     rax, rdi
 * 00000001407372B5: add     [r11+598h], ebx
 * 00000001407372BC: mov     ecx, [r11+584h]
 * 00000001407372C3: mov     rdx, [r11+588h]
 * 00000001407372CA: cmp     rdi, r10
 * 00000001407372CD: jnb     short loc_1407372DB
 * 00000001407372CF: prefetchnta byte ptr [rax]
 * 00000001407372D2: add     rax, 40h ; '@'
 * 00000001407372D6: cmp     rax, r10
 * 00000001407372D9: jb      short loc_1407372CF
 * 00000001407372DB: cmp     ebx, 8
 * 00000001407372DE: jb      short loc_1407372F8
 * 00000001407372E0: mov     eax, ebx
 * 00000001407372E2: shr     rax, 3
 * 00000001407372E6: xor     rdx, [rdi]
 * 00000001407372E9: add     ebx, 0FFFFFFF8h
 * 00000001407372EC: rol     rdx, cl
 * 00000001407372EF: add     rdi, 8
 * 00000001407372F3: sub     rax, r12
 * 00000001407372F6: jnz     short loc_1407372E6
 * 00000001407372F8: test    ebx, ebx
 * 00000001407372FA: jz      short loc_14073730D
 * 00000001407372FC: movzx   eax, byte ptr [rdi]
 * 00000001407372FF: add     rdi, r12
 * 0000000140737302: xor     rdx, rax
 * 0000000140737305: rol     rdx, cl
 * 0000000140737308: add     ebx, 0FFFFFFFFh
 * 000000014073730B: jnz     short loc_1407372FC
 * 000000014073730D: mov     rax, rdx
 * 0000000140737310: jmp     short loc_140737314
 * 0000000140737312: xor     edx, eax
 * 0000000140737314: shr     rax, 1Fh
 * 0000000140737318: test    rax, rax
 * 000000014073731B: jnz     short loc_140737312
 * 000000014073731D: mov     r10, [rsp+78h]
 * 0000000140737322: btr     edx, 1Fh
 * 0000000140737326: mov     [rsi+14h], edx
 * 0000000140737329: jmp     short loc_140737335
 * 000000014073732B: mov     r10, [rsp+78h]
 * 0000000140737330: mov     r11, [rsp+1A10h+var_19C0]
 * 0000000140737335: mov     r12, [rbp+1910h+var_1988]
 * 0000000140737339: cmp     r12, r10
 * 000000014073733C: jz      short loc_14073736F
 * 000000014073733E: mov     eax, [r12]
 * 0000000140737342: mov     ecx, [r12+4]
 * 0000000140737347: cmp     eax, dword ptr [rsp+1A10h+Src]
 * 000000014073734B: jb      short loc_14073736F
 * 000000014073734D: cmp     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 0000000140737351: ja      short loc_14073736F
 * 0000000140737353: cmp     r15, r10
 * 0000000140737356: jz      short loc_140737367
 * 0000000140737358: mov     byte ptr [r14], 80h
 * 000000014073735C: inc     r14
 * 000000014073735F: add     r15, 0Ch
 * 0000000140737363: mov     [rbp+1910h+var_1958], r15
 * 0000000140737367: add     r12, 0Ch
 * 000000014073736B: mov     [rbp+1910h+var_1988], r12
 * 000000014073736F: mov     r9, [rbp+1910h+var_1990]
 * 0000000140737373: add     rsi, 18h
 * 0000000140737377: mov     rdi, [rsp+1A10h+var_19B0]
 * 000000014073737C: add     r9, 28h ; '('
 * 0000000140737380: mov     r15d, 1
 * 0000000140737386: mov     [rsp+1A10h+var_19A0], rsi
 * 000000014073738B: mov     [rbp+1910h+var_1990], r9
 * 000000014073738F: cmp     rsi, [rbp+1910h+var_1968]
 * 0000000140737393: jnz     loc_140736DB0
 * 0000000140737399: mov     r14, [rsp+1A10h+var_19D0]
 * 000000014073739E: xor     eax, eax
 * 00000001407373A0: mov     [rbp+1910h+var_16D8], r14
 * 00000001407373A7: mov     ecx, eax
 * 00000001407373A9: jmp     loc_14073613D
 * 00000001407373AE: mov     r9d, 80000000h
 * 00000001407373B4: mov     eax, dword ptr [rbp+1910h+NtHeaders]
 * 00000001407373B7: mov     r15d, 1
 * 00000001407373BD: add     eax, r15d
 * 00000001407373C0: mov     dword ptr [rbp+1910h+NtHeaders], eax
 * 00000001407373C3: cmp     eax, 0Eh
 * 00000001407373C6: jnb     short loc_1407373D4
 * 00000001407373C8: mov     r13d, dword ptr [rsp+1A10h+var_19A8]
 * 00000001407373CD: jmp     loc_1407336F0
 * 00000001407373D2: jmp     short loc_1407373D2
 * 00000001407373D4: xor     eax, eax
 * 00000001407373D6: mov     edi, eax
 * 00000001407373D8: mov     dword ptr [rsp+1A10h+Src], eax
 * 00000001407373DC: lea     r13, asc_1402C7250; " \""
 * 00000001407373E3: jmp     short loc_1407373E7
 * 00000001407373E5: xor     eax, eax
 * 00000001407373E7: mov     rcx, gs:188h
 * 00000001407373F0: mov     r12, rax
 * 00000001407373F3: call    qword ptr [r14+160h]
 * 00000001407373FA: mov     rcx, [r14+448h]
 * 0000000140737401: mov     dl, r15b
 * 0000000140737404: call    qword ptr [r14+0E0h]
 * 000000014073740B: mov     rbx, qword ptr cs:PsLoadedModuleList
 * 0000000140737412: lea     rax, PsLoadedModuleList
 * 0000000140737419: cmp     rbx, rax
 * 000000014073741C: jz      short loc_140737461
 * 000000014073741E: mov     eax, edi
 * 0000000140737420: lea     rcx, cs:140000000h
 * 0000000140737427: shl     rax, 4
 * 000000014073742B: lea     rdi, rva unk_1402C7230[rcx]
 * 0000000140737432: add     rdi, rax
 * 0000000140737435: lea     rdx, [rbx+58h]; String2
 * 0000000140737439: mov     r8b, r15b; CaseInSensitive
 * 000000014073743C: mov     rcx, rdi; String1
 * 000000014073743F: call    RtlEqualUnicodeString
 * 0000000140737444: test    al, al
 * 0000000140737446: jnz     short loc_140737459
 * 0000000140737448: mov     rbx, [rbx]
 * 000000014073744B: lea     rax, PsLoadedModuleList
 * 0000000140737452: cmp     rbx, rax
 * 0000000140737455: jnz     short loc_140737435
 * 0000000140737457: jmp     short loc_14073745D
 * 0000000140737459: mov     r12, [rbx+30h]
 * 000000014073745D: mov     edi, dword ptr [rsp+1A10h+Src]
 * 0000000140737461: mov     rcx, [r14+448h]
 * 0000000140737468: call    qword ptr [r14+110h]
 * 000000014073746F: call    qword ptr [r14+168h]
 * 0000000140737476: xor     eax, eax
 * 0000000140737478: test    r12, r12
 * 000000014073747B: jz      loc_14073767E
 * 0000000140737481: movzx   ecx, word ptr [r13+0]
 * 0000000140737486: mov     r9d, 0FFFFFFF8h
 * 000000014073748C: mov     r15d, [r14+554h]
 * 0000000140737493: add     ecx, 7
 * 0000000140737496: mov     r8d, [r14+634h]
 * 000000014073749D: and     ecx, r9d
 * 00000001407374A0: add     ecx, 30h ; '0'
 * 00000001407374A3: add     ecx, r15d
 * 00000001407374A6: cmp     ecx, [r14+714h]
 * 00000001407374AD: jbe     loc_14073758E
 * 00000001407374B3: mov     edx, ecx
 * 00000001407374B5: mov     rcx, r14
 * 00000001407374B8: call    sub_140236718
 * 00000001407374BD: mov     rbx, rax
 * 00000001407374C0: xor     eax, eax
 * 00000001407374C2: test    rbx, rbx
 * 00000001407374C5: jz      loc_140731C01
 * 00000001407374CB: mov     edx, [r14+690h]
 * 00000001407374D2: test    dl, 4
 * 00000001407374D5: jnz     loc_14073757F
 * 00000001407374DB: mov     eax, [r14+554h]
 * 00000001407374E2: and     edx, 20000000h
 * 00000001407374E8: mov     r8, [r14+538h]
 * 00000001407374EF: neg     edx
 * 00000001407374F1: mov     edi, 1
 * 00000001407374F6: sbb     edx, edx
 * 00000001407374F8: and     edx, [r14+634h]
 * 00000001407374FF: cmp     eax, 8
 * 0000000140737502: jb      short loc_14073751E
 * 0000000140737504: mov     ecx, eax
 * 0000000140737506: shr     rcx, 3
 * 000000014073750A: xor     r9d, r9d
 * 000000014073750D: mov     [r14], r9
 * 0000000140737510: add     eax, 0FFFFFFF8h
 * 0000000140737513: add     r14, 8
 * 0000000140737517: sub     rcx, rdi
 * 000000014073751A: jnz     short loc_14073750D
 * 000000014073751C: jmp     short loc_140737521
 * 000000014073751E: xor     r9d, r9d
 * 0000000140737521: test    eax, eax
 * 0000000140737523: jz      short loc_140737530
 * 0000000140737525: mov     [r14], r9b
 * 0000000140737528: add     r14, rdi
 * 000000014073752B: add     eax, 0FFFFFFFFh
 * 000000014073752E: jnz     short loc_140737525
 * 0000000140737530: mov     edi, [rbx+634h]
 * 0000000140737536: mov     [rbx+634h], edx
 * 000000014073753C: cmp     edx, 3
 * 000000014073753F: jz      short loc_140737570
 * 0000000140737541: mov     eax, [rbx+690h]
 * 0000000140737547: mov     ecx, r9d
 * 000000014073754A: and     eax, 10000000h
 * 000000014073754F: cmovz   ecx, edx
 * 0000000140737552: test    ecx, ecx
 * 0000000140737554: jz      short loc_140737565
 * 0000000140737556: lea     rcx, [r8-8]
 * 000000014073755A: mov     rdx, [rcx]
 * 000000014073755D: call    qword ptr [rbx+1F8h]
 * 0000000140737563: jmp     short loc_140737579
 * 0000000140737565: mov     rcx, r8
 * 0000000140737568: call    qword ptr [rbx+0F8h]
 * 000000014073756E: jmp     short loc_140737579
 * 0000000140737570: mov     rcx, r8
 * 0000000140737573: call    qword ptr [rbx+320h]
 * 0000000140737579: mov     [rbx+634h], edi
 * 000000014073757F: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 0000000140737586: mov     r9d, 0FFFFFFF8h
 * 000000014073758C: jmp     short loc_140737598
 * 000000014073758E: mov     rbx, r14
 * 0000000140737591: mov     [r14+554h], ecx
 * 0000000140737598: mov     eax, 1
 * 000000014073759D: lea     rdx, [rbx+r15]
 * 00000001407375A1: add     [rbx+57Ch], eax
 * 00000001407375A7: mov     [rbp+1910h+var_FE0], rdx
 * 00000001407375AE: xor     r8d, r8d
 * 00000001407375B1: lea     ecx, [rax+2Fh]
 * 00000001407375B4: mov     rax, rdx
 * 00000001407375B7: lea     edi, [rcx-2Ah]
 * 00000001407375BA: lea     r15d, [rcx-2Fh]
 * 00000001407375BE: mov     [rax], r8
 * 00000001407375C1: add     ecx, r9d
 * 00000001407375C4: add     rax, 8
 * 00000001407375C8: sub     rdi, r15
 * 00000001407375CB: jnz     short loc_1407375BE
 * 00000001407375CD: test    ecx, ecx
 * 00000001407375CF: jz      short loc_1407375DC
 * 00000001407375D1: mov     [rax], r8b
 * 00000001407375D4: add     rax, r15
 * 00000001407375D7: add     ecx, 0FFFFFFFFh
 * 00000001407375DA: jnz     short loc_1407375D1
 * 00000001407375DC: xor     eax, eax
 * 00000001407375DE: mov     dword ptr [rdx], 1Ch
 * 00000001407375E4: mov     [rdx+8], rax
 * 00000001407375E8: mov     [rdx+10h], eax
 * 00000001407375EB: mov     rcx, [rbx+588h]
 * 00000001407375F2: mov     rax, rcx
 * 00000001407375F5: jmp     short loc_1407375F9
 * 00000001407375F7: xor     ecx, eax
 * 00000001407375F9: shr     rax, 1Fh
 * 00000001407375FD: test    rax, rax
 * 0000000140737600: jnz     short loc_1407375F7
 * 0000000140737602: btr     ecx, 1Fh
 * 0000000140737606: mov     [rdx+14h], ecx
 * 0000000140737609: mov     rax, [rbp+1910h+var_FE0]
 * 0000000140737610: mov     [rbp+1910h+var_12B0], rax
 * 0000000140737617: mov     [rax+18h], r12
 * 000000014073761B: movzx   ecx, word ptr [r13+0]
 * 0000000140737620: mov     rax, [rbp+1910h+var_12B0]
 * 0000000140737627: mov     [rax+28h], cx
 * 000000014073762B: mov     rdi, [rbp+1910h+var_12B0]
 * 0000000140737632: movzx   edx, word ptr [r13+0]
 * 0000000140737637: add     rdi, 30h ; '0'
 * 000000014073763B: mov     rcx, [r13+8]
 * 000000014073763F: cmp     edx, 8
 * 0000000140737642: jb      short loc_140737661
 * 0000000140737644: mov     r8d, edx
 * 0000000140737647: shr     r8, 3
 * 000000014073764B: mov     rax, [rcx]
 * 000000014073764E: add     edx, r9d
 * 0000000140737651: mov     [rdi], rax
 * 0000000140737654: add     rcx, 8
 * 0000000140737658: add     rdi, 8
 * 000000014073765C: sub     r8, r15
 * 000000014073765F: jnz     short loc_14073764B
 * 0000000140737661: test    edx, edx
 * 0000000140737663: jz      short loc_140737675
 * 0000000140737665: sub     rdi, rcx
 * 0000000140737668: mov     al, [rcx]
 * 000000014073766A: mov     [rdi+rcx], al
 * 000000014073766D: add     rcx, r15
 * 0000000140737670: add     edx, 0FFFFFFFFh
 * 0000000140737673: jnz     short loc_140737668
 * 0000000140737675: mov     edi, dword ptr [rsp+1A10h+Src]
 * 0000000140737679: mov     r14, rbx
 * 000000014073767C: xor     eax, eax
 * 000000014073767E: add     edi, r15d
 * 0000000140737681: add     r13, 10h
 * 0000000140737685: mov     dword ptr [rsp+1A10h+Src], edi
 * 0000000140737689: cmp     edi, 2
 * 000000014073768C: jb      loc_1407373E5
 * 0000000140737692: mov     [rbp+1910h+var_16D8], r14
 * 0000000140737699: test    r14, r14
 * 000000014073769C: jz      loc_140731C01
 * 00000001407376A2: cli
 * 00000001407376A3: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 00000001407376A9: jnz     short loc_1407376AD
 * 00000001407376AB: jmp     short loc_1407376AB
 * 00000001407376AD: sti
 * 00000001407376AE: call    KiGetHalExtensionList
 * 00000001407376B3: mov     rcx, rax
 * 00000001407376B6: mov     [rbp+1910h+var_1988], rax
 * 00000001407376BA: mov     rax, [rax]
 * 00000001407376BD: cmp     rax, rcx
 * 00000001407376C0: mov     [rsp+1A10h+var_19B0], rax
 * 00000001407376C5: jz      loc_140739315
 * 00000001407376CB: mov     rcx, rax
 * 00000001407376CE: call    KiGetHalExtensionModuleFromLinks
 * 00000001407376D3: test    rax, rax
 * 00000001407376D6: jz      loc_140738097
 * 00000001407376DC: mov     r12, [rax+30h]
 * 00000001407376E0: lea     r8, [rbp+1910h+var_1908]
 * 00000001407376E4: mov     rcx, r12
 * 00000001407376E7: mov     [rsp+1A10h+var_19C0], r12
 * 00000001407376EC: lea     rdx, [rbp+1910h+var_F00]
 * 00000001407376F3: call    qword ptr [r14+1D0h]
 * 00000001407376FA: mov     r13, rax
 * 00000001407376FD: mov     [rsp+1A10h+var_19A0], rax
 * 0000000140737702: xor     eax, eax
 * 0000000140737704: test    r13, r13
 * 0000000140737707: jz      loc_14073930C
 * 000000014073770D: mov     r11, [rbp+1910h+var_F00]
 * 0000000140737714: lea     rcx, [rbp+1910h+var_E58]
 * 000000014073771B: mov     r15d, [rbp+1910h+var_1908]
 * 000000014073771F: lea     edx, [rax+4]
 * 0000000140737722: mov     [rsp+1A10h+var_19D0], r11
 * 0000000140737727: lea     r8d, [rax+1]
 * 000000014073772B: mov     dword ptr [rsp+1A10h+Src], r15d
 * 0000000140737730: mov     [rbp+1910h+var_E60], rax
 * 0000000140737737: mov     [rcx], al
 * 0000000140737739: add     rcx, r8
 * 000000014073773C: add     edx, 0FFFFFFFFh
 * 000000014073773F: jnz     short loc_140737737
 * 0000000140737741: mov     r10d, eax
 * 0000000140737744: cmp     [r14+57Ch], eax
 * 000000014073774B: jbe     loc_140737922
 * 0000000140737751: mov     ecx, [rbp+1910h+var_E58]
 * 0000000140737757: mov     edx, dword ptr [rbp+1910h+var_E60+4]
 * 000000014073775D: mov     edi, dword ptr [rbp+1910h+var_E60]
 * 0000000140737763: mov     rax, [r14+730h]
 * 000000014073776A: mov     r9, r14
 * 000000014073776D: test    rax, rax
 * 0000000140737770: cmovnz  r9, rax
 * 0000000140737774: xor     eax, eax
 * 0000000140737776: mov     r8d, eax
 * 0000000140737779: mov     ebx, [r9+578h]
 * 0000000140737780: add     rbx, r9
 * 0000000140737783: test    edi, edi
 * 0000000140737785: jz      short loc_140737794
 * 0000000140737787: cmp     edx, r10d
 * 000000014073778A: ja      short loc_140737794
 * 000000014073778C: mov     ebx, ecx
 * 000000014073778E: mov     r8d, edx
 * 0000000140737791: add     rbx, r9
 * 0000000140737794: cmp     r8d, r10d
 * 0000000140737797: jz      loc_1407378C3
 * 000000014073779D: mov     eax, r10d
 * 00000001407377A0: mov     esi, 2
 * 00000001407377A5: sub     eax, r8d
 * 00000001407377A8: mov     r15, 0AAAAAAAAAAAAAAABh
 * 00000001407377B2: mov     edi, eax
 * 00000001407377B4: add     r8d, eax
 * 00000001407377B7: mov     ecx, [rbx]
 * 00000001407377B9: cmp     ecx, 11h
 * 00000001407377BC: jg      short loc_140737828
 * 00000001407377BE: jz      loc_140737897
 * 00000001407377C4: sub     ecx, 1
 * 00000001407377C7: jz      short loc_140737812
 * 00000001407377C9: sub     ecx, 6
 * 00000001407377CC: jz      short loc_140737802
 * 00000001407377CE: sub     ecx, 1
 * 00000001407377D1: jz      short loc_1407377F3
 * 00000001407377D3: sub     ecx, esi
 * 00000001407377D5: jz      short loc_1407377E5
 * 00000001407377D7: cmp     ecx, esi
 * 00000001407377D9: jz      short loc_140737812
 * 00000001407377DB: mov     eax, 30h ; '0'
 * 00000001407377E0: jmp     loc_14073789C
 * 00000001407377E5: mov     eax, [rbx+1Ch]
 * 00000001407377E8: add     eax, 3
 * 00000001407377EB: shl     eax, 4
 * 00000001407377EE: jmp     loc_14073789C
 * 00000001407377F3: movzx   eax, word ptr [rbx+20h]
 * 00000001407377F7: add     eax, 37h ; '7'
 * 00000001407377FA: and     eax, 0FFFFFFF8h
 * 00000001407377FD: jmp     loc_14073789C
 * 0000000140737802: mov     eax, [rbx+18h]
 * 0000000140737805: add     eax, esi
 * 0000000140737807: lea     eax, [rax+rax*2]
 * 000000014073780A: shl     eax, 3
 * 000000014073780D: jmp     loc_14073789C
 * 0000000140737812: mov     ecx, [rbx+10h]
 * 0000000140737815: mov     rax, r15
 * 0000000140737818: mul     rcx
 * 000000014073781B: shr     rdx, 3
 * 000000014073781F: lea     eax, ds:30h[rdx*4]
 * 0000000140737826: jmp     short loc_14073789C
 * 0000000140737828: cmp     ecx, 13h
 * 000000014073782B: jz      short loc_140737897
 * 000000014073782D: cmp     ecx, 1Ch
 * 0000000140737830: jz      short loc_14073788E
 * 0000000140737832: cmp     ecx, 1Eh
 * 0000000140737835: jz      short loc_14073786B
 * 0000000140737837: lea     eax, [rcx-21h]
 * 000000014073783A: mov     r12d, 1
 * 0000000140737840: cmp     eax, r12d
 * 0000000140737843: ja      short loc_1407377DB
 * 0000000140737845: mov     ecx, [rbx+20h]
 * 0000000140737848: mov     edx, [rbx+28h]
 * 000000014073784B: and     ecx, 0FFFh
 * 0000000140737851: add     rdx, 0FFFh
 * 0000000140737858: add     rdx, rcx
 * 000000014073785B: shr     rdx, 0Ch
 * 000000014073785F: lea     eax, [rdx+rdx*4]
 * 0000000140737862: lea     eax, ds:30h[rax*4]
 * 0000000140737869: jmp     short loc_14073789C
 * 000000014073786B: mov     ecx, [rbx+24h]
 * 000000014073786E: mov     rax, r15
 * 0000000140737871: dec     ecx
 * 0000000140737873: mul     rcx
 * 0000000140737876: movzx   eax, word ptr [rbx+28h]
 * 000000014073787A: shr     rdx, 3
 * 000000014073787E: add     edx, 7
 * 0000000140737881: and     edx, 0FFFFFFF8h
 * 0000000140737884: add     eax, esi
 * 0000000140737886: lea     eax, [rax+rax*2]
 * 0000000140737889: lea     eax, [rdx+rax*8]
 * 000000014073788C: jmp     short loc_14073789C
 * 000000014073788E: movzx   eax, word ptr [rbx+28h]
 * 0000000140737892: jmp     loc_1407377F7
 * 0000000140737897: mov     eax, 38h ; '8'
 * 000000014073789C: add     rbx, rax
 * 000000014073789F: mov     eax, 1
 * 00000001407378A4: sub     rdi, rax
 * 00000001407378A7: jnz     loc_1407377B7
 * 00000001407378AD: mov     r11, [rsp+1A10h+var_19D0]
 * 00000001407378B2: mov     r15d, dword ptr [rsp+1A10h+Src]
 * 00000001407378B7: mov     r12, [rsp+1A10h+var_19C0]
 * 00000001407378BC: mov     r13, [rsp+1A10h+var_19A0]
 * 00000001407378C1: jmp     short loc_1407378C8
 * 00000001407378C3: mov     eax, 1
 * 00000001407378C8: mov     edx, r8d
 * 00000001407378CB: mov     dword ptr [rbp+1910h+var_E60], eax
 * 00000001407378D1: mov     ecx, ebx
 * 00000001407378D3: mov     dword ptr [rbp+1910h+var_E60+4], edx
 * 00000001407378D9: sub     ecx, r9d
 * 00000001407378DC: mov     edi, eax
 * 00000001407378DE: mov     [rbp+1910h+var_E58], ecx
 * 00000001407378E4: mov     r8d, 1
 * 00000001407378EA: mov     eax, [rbx]
 * 00000001407378EC: cmp     eax, r8d
 * 00000001407378EF: jz      short loc_1407378F6
 * 00000001407378F1: cmp     eax, 0Ch
 * 00000001407378F4: jnz     short loc_140737902
 * 00000001407378F6: cmp     [rbx+8], r13
 * 00000001407378FA: jnz     short loc_140737902
 * 00000001407378FC: cmp     [rbx+10h], r15d
 * 0000000140737900: jz      short loc_140737925
 * 0000000140737902: add     eax, 0FFFFFFDFh
 * 0000000140737905: cmp     eax, r8d
 * 0000000140737908: ja      short loc_140737910
 * 000000014073790A: cmp     [rbx+20h], r11
 * 000000014073790E: jz      short loc_140737925
 * 0000000140737910: add     r10d, r8d
 * 0000000140737913: cmp     r10d, [r14+57Ch]
 * 000000014073791A: jb      loc_140737763
 * 0000000140737920: xor     eax, eax
 * 0000000140737922: mov     rbx, rax
 * 0000000140737925: mov     [rbp+1910h+var_12A0], rbx
 * 000000014073792C: test    rbx, rbx
 * 000000014073792F: jnz     loc_140738097
 * 0000000140737935: mov     rcx, r12
 * 0000000140737938: call    qword ptr [r14+270h]
 * 000000014073793F: test    dword ptr [r14+690h], 40000000h
 * 000000014073794A: mov     r15d, eax
 * 000000014073794D: mov     edi, [rbp+1910h+var_1908]
 * 0000000140737950: mov     dword ptr [rsp+1A10h+Src], eax
 * 0000000140737954: mov     dword ptr [rsp+1A10h+var_19B8], edi
 * 0000000140737958: jz      short loc_14073797E
 * 000000014073795A: mov     rdx, [rbp+1910h+var_F00]
 * 0000000140737961: lea     rcx, [rbp+1910h+var_16D8]
 * 0000000140737968: xor     r8d, r8d
 * 000000014073796B: call    sub_14072DC88
 * 0000000140737970: mov     r14, [rbp+1910h+var_16D8]
 * 0000000140737977: mov     ecx, eax
 * 0000000140737979: jmp     loc_14073807F
 * 000000014073797E: mov     rax, [rbp+1910h+var_F00]
 * 0000000140737985: mov     rcx, rax
 * 0000000140737988: mov     [rsp+1A10h+var_19C0], rax
 * 000000014073798D: call    qword ptr [r14+1C8h]
 * 0000000140737994: xor     r9d, r9d
 * 0000000140737997: mov     [rsp+1A10h+var_19D0], rax
 * 000000014073799C: test    rax, rax
 * 000000014073799F: jz      loc_14073807A
 * 00000001407379A5: mov     r8d, [r14+634h]
 * 00000001407379AC: lea     r11d, [r9+1]
 * 00000001407379B0: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001407379BA: mov     rbx, rdi
 * 00000001407379BD: mul     rdi
 * 00000001407379C0: mov     [rsp+78h], rbx
 * 00000001407379C5: mov     rax, rdx
 * 00000001407379C8: shr     rax, 3
 * 00000001407379CC: mov     ecx, eax
 * 00000001407379CE: mov     [rbp+1910h+var_1990], rax
 * 00000001407379D2: shl     ecx, 2
 * 00000001407379D5: mov     eax, r15d
 * 00000001407379D8: mov     r15d, [r14+554h]
 * 00000001407379DF: neg     eax
 * 00000001407379E1: mov     dword ptr [rsp+1A10h+var_19A8], ecx
 * 00000001407379E5: sbb     r12d, r12d
 * 00000001407379E8: and     r12d, 0Bh
 * 00000001407379EC: lea     eax, [rcx+30h]
 * 00000001407379EF: add     r12d, r11d
 * 00000001407379F2: add     eax, r15d
 * 00000001407379F5: cmp     eax, [r14+714h]
 * 00000001407379FC: jbe     loc_140737AF0
 * 0000000140737A02: mov     edx, eax
 * 0000000140737A04: mov     rcx, r14
 * 0000000140737A07: call    sub_140236718
 * 0000000140737A0C: mov     r13, rax
 * 0000000140737A0F: test    rax, rax
 * 0000000140737A12: jz      loc_140738B7E
 * 0000000140737A18: mov     ebx, [r14+690h]
 * 0000000140737A1F: test    bl, 4
 * 0000000140737A22: jnz     loc_140737ADA
 * 0000000140737A28: mov     edx, [r14+554h]
 * 0000000140737A2F: and     ebx, 20000000h
 * 0000000140737A35: mov     r8, [r14+538h]
 * 0000000140737A3C: neg     ebx
 * 0000000140737A3E: mov     rax, r14
 * 0000000140737A41: mov     edi, 1
 * 0000000140737A46: sbb     ebx, ebx
 * 0000000140737A48: and     ebx, [r14+634h]
 * 0000000140737A4F: cmp     edx, 8
 * 0000000140737A52: jb      short loc_140737A6E
 * 0000000140737A54: mov     ecx, edx
 * 0000000140737A56: shr     rcx, 3
 * 0000000140737A5A: xor     r9d, r9d
 * 0000000140737A5D: mov     [rax], r9
 * 0000000140737A60: add     edx, 0FFFFFFF8h
 * 0000000140737A63: add     rax, 8
 * 0000000140737A67: sub     rcx, rdi
 * 0000000140737A6A: jnz     short loc_140737A5D
 * 0000000140737A6C: jmp     short loc_140737A71
 * 0000000140737A6E: xor     r9d, r9d
 * 0000000140737A71: test    edx, edx
 * 0000000140737A73: jz      short loc_140737A80
 * 0000000140737A75: mov     [rax], r9b
 * 0000000140737A78: add     rax, rdi
 * 0000000140737A7B: add     edx, 0FFFFFFFFh
 * 0000000140737A7E: jnz     short loc_140737A75
 * 0000000140737A80: mov     edi, [r13+634h]
 * 0000000140737A87: mov     [r13+634h], ebx
 * 0000000140737A8E: cmp     ebx, 3
 * 0000000140737A91: jz      short loc_140737AC5
 * 0000000140737A93: mov     eax, [r13+690h]
 * 0000000140737A9A: mov     ecx, r9d
 * 0000000140737A9D: and     eax, 10000000h
 * 0000000140737AA2: cmovz   ecx, ebx
 * 0000000140737AA5: test    ecx, ecx
 * 0000000140737AA7: jz      short loc_140737AB9
 * 0000000140737AA9: lea     rcx, [r8-8]
 * 0000000140737AAD: mov     rdx, [rcx]
 * 0000000140737AB0: call    qword ptr [r13+1F8h]
 * 0000000140737AB7: jmp     short loc_140737ACF
 * 0000000140737AB9: mov     rcx, r8
 * 0000000140737ABC: call    qword ptr [r13+0F8h]
 * 0000000140737AC3: jmp     short loc_140737ACF
 * 0000000140737AC5: mov     rcx, r8
 * 0000000140737AC8: call    qword ptr [r13+320h]
 * 0000000140737ACF: mov     [r13+634h], edi
 * 0000000140737AD6: mov     edi, dword ptr [rsp+1A10h+var_19B8]
 * 0000000140737ADA: and     dword ptr [r13+690h], 0FFFFFFFBh
 * 0000000140737AE2: mov     rbx, [rsp+78h]
 * 0000000140737AE7: xor     r9d, r9d
 * 0000000140737AEA: lea     r11d, [r9+1]
 * 0000000140737AEE: jmp     short loc_140737AFA
 * 0000000140737AF0: mov     r13, r14
 * 0000000140737AF3: mov     [r14+554h], eax
 * 0000000140737AFA: add     [r13+57Ch], r11d
 * 0000000140737B01: mov     ecx, 30h ; '0'
 * 0000000140737B06: add     r15, r13
 * 0000000140737B09: mov     [rbp+1910h+var_FD0], r15
 * 0000000140737B10: mov     rax, r15
 * 0000000140737B13: lea     edx, [rcx-2Ah]
 * 0000000140737B16: mov     [rax], r9
 * 0000000140737B19: add     ecx, 0FFFFFFF8h
 * 0000000140737B1C: add     rax, 8
 * 0000000140737B20: sub     rdx, r11
 * 0000000140737B23: jnz     short loc_140737B16
 * 0000000140737B25: test    ecx, ecx
 * 0000000140737B27: jz      short loc_140737B34
 * 0000000140737B29: mov     [rax], r9b
 * 0000000140737B2C: add     rax, r11
 * 0000000140737B2F: add     ecx, 0FFFFFFFFh
 * 0000000140737B32: jnz     short loc_140737B29
 * 0000000140737B34: mov     r10, [rsp+1A10h+var_19A0]
 * 0000000140737B39: mov     eax, 20h ; ' '
 * 0000000140737B3E: mov     [r15], r12d
 * 0000000140737B41: mov     [r15+8], r10
 * 0000000140737B45: cmp     r12d, eax
 * 0000000140737B48: jnz     short loc_140737B6B
 * 0000000140737B4A: test    edi, edi
 * 0000000140737B4C: jz      short loc_140737B6B
 * 0000000140737B4E: lea     r9, [r15+18h]
 * 0000000140737B52: mov     r8d, edi
 * 0000000140737B55: mov     rdx, r10
 * 0000000140737B58: mov     rcx, r13
 * 0000000140737B5B: call    sub_14014F138
 * 0000000140737B60: mov     r10, [rsp+1A10h+var_19A0]
 * 0000000140737B65: mov     r11d, 1
 * 0000000140737B6B: mov     [r15+10h], edi
 * 0000000140737B6F: lea     rcx, [rbx+r10]
 * 0000000140737B73: add     [r13+598h], edi
 * 0000000140737B7A: mov     r8, r10
 * 0000000140737B7D: mov     r9d, [r13+584h]
 * 0000000140737B84: mov     rax, r10
 * 0000000140737B87: mov     rdx, [r13+588h]
 * 0000000140737B8E: cmp     r10, rcx
 * 0000000140737B91: jnb     short loc_140737B9F
 * 0000000140737B93: prefetchnta byte ptr [rax]
 * 0000000140737B96: add     rax, 40h ; '@'
 * 0000000140737B9A: cmp     rax, rcx
 * 0000000140737B9D: jb      short loc_140737B93
 * 0000000140737B9F: mov     ebx, dword ptr [rsp+1A10h+var_19B8]
 * 0000000140737BA3: cmp     ebx, 8
 * 0000000140737BA6: jb      short loc_140737BC5
 * 0000000140737BA8: shr     rbx, 3
 * 0000000140737BAC: xor     rdx, [r8]
 * 0000000140737BAF: mov     ecx, r9d
 * 0000000140737BB2: rol     rdx, cl
 * 0000000140737BB5: add     r8, 8
 * 0000000140737BB9: add     edi, 0FFFFFFF8h
 * 0000000140737BBC: sub     rbx, r11
 * 0000000140737BBF: jnz     short loc_140737BAC
 * 0000000140737BC1: mov     ebx, dword ptr [rsp+1A10h+var_19B8]
 * 0000000140737BC5: test    edi, edi
 * 0000000140737BC7: jz      short loc_140737BDE
 * 0000000140737BC9: movzx   eax, byte ptr [r8]
 * 0000000140737BCD: mov     ecx, r9d
 * 0000000140737BD0: xor     rdx, rax
 * 0000000140737BD3: add     r8, r11
 * 0000000140737BD6: rol     rdx, cl
 * 0000000140737BD9: add     edi, 0FFFFFFFFh
 * 0000000140737BDC: jnz     short loc_140737BC9
 * 0000000140737BDE: mov     rax, rdx
 * 0000000140737BE1: jmp     short loc_140737BE5
 * 0000000140737BE3: xor     edx, eax
 * 0000000140737BE5: shr     rax, 1Fh
 * 0000000140737BE9: test    rax, rax
 * 0000000140737BEC: jnz     short loc_140737BE3
 * 0000000140737BEE: btr     edx, 1Fh
 * 0000000140737BF2: mov     edi, 0C0000225h
 * 0000000140737BF7: mov     [r15+14h], edx
 * 0000000140737BFB: mov     rax, [rbp+1910h+var_FD0]
 * 0000000140737C02: mov     [rbp+1910h+var_1290], rax
 * 0000000140737C09: add     [r13+598h], ebx
 * 0000000140737C10: mov     rbx, [r13+438h]
 * 0000000140737C17: mov     r15, [rbp+1910h+var_1290]
 * 0000000140737C1E: add     rbx, 10h
 * 0000000140737C22: mov     rcx, [r13+450h]
 * 0000000140737C29: mov     r12, cr8
 * 0000000140737C2D: mov     eax, 0Fh
 * 0000000140737C32: mov     cr8, rax
 * 0000000140737C36: call    qword ptr [r13+148h]
 * 0000000140737C3D: mov     rax, [r13+438h]
 * 0000000140737C44: mov     ecx, [rax]
 * 0000000140737C46: lea     rax, [rcx+rcx*2]
 * 0000000140737C4A: lea     rcx, [rbx+rax*8]
 * 0000000140737C4E: mov     rax, [rsp+1A10h+var_19C0]
 * 0000000140737C53: cmp     [rbx+8], rax
 * 0000000140737C57: jz      short loc_140737C64
 * 0000000140737C59: add     rbx, 18h
 * 0000000140737C5D: cmp     rbx, rcx
 * 0000000140737C60: jnb     short loc_140737C7B
 * 0000000140737C62: jmp     short loc_140737C53
 * 0000000140737C64: movups  xmm0, xmmword ptr [rbx]
 * 0000000140737C67: xor     eax, eax
 * 0000000140737C69: mov     edi, eax
 * 0000000140737C6B: movups  xmmword ptr [r15+18h], xmm0
 * 0000000140737C70: movsd   xmm1, qword ptr [rbx+10h]
 * 0000000140737C75: movsd   qword ptr [r15+28h], xmm1
 * 0000000140737C7B: mov     rcx, [r13+450h]
 * 0000000140737C82: call    qword ptr [r13+188h]
 * 0000000140737C89: movzx   eax, r12b
 * 0000000140737C8D: mov     cr8, rax
 * 0000000140737C91: mov     r8d, 1
 * 0000000140737C97: test    edi, edi
 * 0000000140737C99: jns     short loc_140737CD6
 * 0000000140737C9B: mov     rax, [rbp+1910h+var_1290]
 * 0000000140737CA2: lea     ecx, [r8+17h]
 * 0000000140737CA6: add     rax, rcx
 * 0000000140737CA9: lea     edx, [rcx-15h]
 * 0000000140737CAC: xor     ebx, ebx
 * 0000000140737CAE: mov     [rax], rbx
 * 0000000140737CB1: add     ecx, 0FFFFFFF8h
 * 0000000140737CB4: add     rax, 8
 * 0000000140737CB8: sub     rdx, r8
 * 0000000140737CBB: jnz     short loc_140737CAE
 * 0000000140737CBD: test    ecx, ecx
 * 0000000140737CBF: jz      short loc_140737CCB
 * 0000000140737CC1: mov     [rax], bl
 * 0000000140737CC3: add     rax, r8
 * 0000000140737CC6: add     ecx, 0FFFFFFFFh
 * 0000000140737CC9: jnz     short loc_140737CC1
 * 0000000140737CCB: mov     rax, [rbp+1910h+var_1290]
 * 0000000140737CD2: mov     [rax+18h], r8
 * 0000000140737CD6: mov     rdi, [rbp+1910h+var_1290]
 * 0000000140737CDD: mov     edx, dword ptr [rsp+1A10h+var_19A8]
 * 0000000140737CE1: add     rdi, 30h ; '0'
 * 0000000140737CE5: mov     [rsp+78h], rdi
 * 0000000140737CEA: mov     rax, rdi
 * 0000000140737CED: cmp     edx, 8
 * 0000000140737CF0: jb      short loc_140737D0B
 * 0000000140737CF2: mov     ecx, edx
 * 0000000140737CF4: shr     rcx, 3
 * 0000000140737CF8: mov     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
 * 0000000140737CFF: add     edx, 0FFFFFFF8h
 * 0000000140737D02: add     rax, 8
 * 0000000140737D06: sub     rcx, r8
 * 0000000140737D09: jnz     short loc_140737CF8
 * 0000000140737D0B: test    edx, edx
 * 0000000140737D0D: jz      short loc_140737D1A
 * 0000000140737D0F: mov     byte ptr [rax], 0FFh
 * 0000000140737D12: add     rax, r8
 * 0000000140737D15: add     edx, 0FFFFFFFFh
 * 0000000140737D18: jnz     short loc_140737D0F
 * 0000000140737D1A: mov     rdx, [rsp+1A10h+var_19A0]
 * 0000000140737D1F: or      r12d, 0FFFFFFFFh
 * 0000000140737D23: mov     eax, dword ptr [rbp+1910h+var_1990]
 * 0000000140737D26: mov     r15, rdx
 * 0000000140737D29: mov     r8d, [rdx]
 * 0000000140737D2C: lea     rcx, [rax+rax*2]
 * 0000000140737D30: lea     rax, [rdx+rcx*4]
 * 0000000140737D34: mov     rdx, [rsp+1A10h+var_19C0]
 * 0000000140737D39: mov     rcx, [rsp+1A10h+var_19D0]
 * 0000000140737D3E: mov     [rbp+1910h+var_1990], rax
 * 0000000140737D42: xor     eax, eax
 * 0000000140737D44: mov     ebx, eax
 * 0000000140737D46: mov     dword ptr [rsp+1A10h+var_19A8], eax
 * 0000000140737D4A: call    qword ptr [r13+1E0h]
 * 0000000140737D51: mov     r9, rax
 * 0000000140737D54: xor     eax, eax
 * 0000000140737D56: test    r9, r9
 * 0000000140737D59: jz      loc_14073807A
 * 0000000140737D5F: mov     r14, [rbp+1910h+var_1990]
 * 0000000140737D63: test    dword ptr [r9+24h], 2000000h
 * 0000000140737D6B: mov     r11d, eax
 * 0000000140737D6E: jnz     loc_140737F72
 * 0000000140737D74: mov     ecx, [r9]
 * 0000000140737D77: cmp     ecx, 54494E49h
 * 0000000140737D7D: jnz     short loc_140737D8D
 * 0000000140737D7F: cmp     dword ptr [r9+4], 4742444Bh
 * 0000000140737D87: jz      loc_140737F72
 * 0000000140737D8D: cmp     ecx, 45474150h
 * 0000000140737D93: jnz     short loc_140737DC4
 * 0000000140737D95: movzx   eax, word ptr [r9+4]
 * 0000000140737D9A: mov     edx, 7777h
 * 0000000140737D9F: cmp     ax, dx
 * 0000000140737DA2: jz      loc_140737F72
 * 0000000140737DA8: mov     edx, 7277h
 * 0000000140737DAD: cmp     ax, dx
 * 0000000140737DB0: jz      loc_140737F72
 * 0000000140737DB6: mov     edx, 7877h
 * 0000000140737DBB: cmp     ax, dx
 * 0000000140737DBE: jz      loc_140737F72
 * 0000000140737DC4: cmp     ecx, 41525245h
 * 0000000140737DCA: jnz     short loc_140737DDC
 * 0000000140737DCC: mov     eax, 4154h
 * 0000000140737DD1: cmp     [r9+4], ax
 * 0000000140737DD6: jz      loc_140737F72
 * 0000000140737DDC: mov     rax, [r13+648h]
 * 0000000140737DE3: mov     r8d, 7
 * 0000000140737DE9: mov     rbx, [r13+640h]
 * 0000000140737DF0: mov     rdi, r9
 * 0000000140737DF3: mov     [rbp+1910h+var_C90], rax
 * 0000000140737DFA: sub     rdi, rbx
 * 0000000140737DFD: mov     rax, [r13+650h]
 * 0000000140737E04: mov     [rbp+1910h+var_C88], rax
 * 0000000140737E0B: lea     r10d, [r8-6]
 * 0000000140737E0F: mov     rax, [r13+658h]
 * 0000000140737E16: mov     [rbp+1910h+var_C80], rax
 * 0000000140737E1D: mov     [rbp+1910h+var_C98], rbx
 * 0000000140737E24: movzx   edx, byte ptr [rbx+rdi]
 * 0000000140737E28: movzx   eax, byte ptr [rbx]
 * 0000000140737E2B: add     rbx, r10
 * 0000000140737E2E: cmp     rdx, rax
 * 0000000140737E31: jnz     short loc_140737E3E
 * 0000000140737E33: add     r8d, 0FFFFFFFFh
 * 0000000140737E37: jnz     short loc_140737E24
 * 0000000140737E39: jmp     loc_140737ED7
 * 0000000140737E3E: mov     rdi, [rbp+1910h+var_C90]
 * 0000000140737E45: mov     ebx, 8
 * 0000000140737E4A: mov     r8, r9
 * 0000000140737E4D: mov     rcx, [r8]
 * 0000000140737E50: add     r8, 8
 * 0000000140737E54: mov     rax, [rdi]
 * 0000000140737E57: add     rdi, 8
 * 0000000140737E5B: cmp     rcx, rax
 * 0000000140737E5E: jnz     short loc_140737E85
 * 0000000140737E60: add     ebx, 0FFFFFFF8h
 * 0000000140737E63: cmp     ebx, 8
 * 0000000140737E66: jnb     short loc_140737E4D
 * 0000000140737E68: test    ebx, ebx
 * 0000000140737E6A: jz      short loc_140737ED7
 * 0000000140737E6C: movzx   edx, byte ptr [r8]
 * 0000000140737E70: add     r8, r10
 * 0000000140737E73: movzx   eax, byte ptr [rdi]
 * 0000000140737E76: add     rdi, r10
 * 0000000140737E79: cmp     rdx, rax
 * 0000000140737E7C: jnz     short loc_140737E85
 * 0000000140737E7E: add     ebx, 0FFFFFFFFh
 * 0000000140737E81: jnz     short loc_140737E6C
 * 0000000140737E83: jmp     short loc_140737ED7
 * 0000000140737E85: mov     rbx, [rbp+1910h+var_C88]
 * 0000000140737E8C: mov     rdi, r9
 * 0000000140737E8F: sub     rdi, rbx
 * 0000000140737E92: mov     r8d, 4
 * 0000000140737E98: movzx   edx, byte ptr [rbx+rdi]
 * 0000000140737E9C: movzx   eax, byte ptr [rbx]
 * 0000000140737E9F: add     rbx, r10
 * 0000000140737EA2: cmp     rdx, rax
 * 0000000140737EA5: jnz     short loc_140737EAF
 * 0000000140737EA7: add     r8d, 0FFFFFFFFh
 * 0000000140737EAB: jnz     short loc_140737E98
 * 0000000140737EAD: jmp     short loc_140737ED7
 * 0000000140737EAF: mov     rbx, [rbp+1910h+var_C80]
 * 0000000140737EB6: mov     rdi, r9
 * 0000000140737EB9: sub     rdi, rbx
 * 0000000140737EBC: mov     r8d, 6
 * 0000000140737EC2: movzx   edx, byte ptr [rbx+rdi]
 * 0000000140737EC6: movzx   eax, byte ptr [rbx]
 * 0000000140737EC9: add     rbx, r10
 * 0000000140737ECC: cmp     rdx, rax
 * 0000000140737ECF: jnz     short loc_140737EDA
 * 0000000140737ED1: add     r8d, 0FFFFFFFFh
 * 0000000140737ED5: jnz     short loc_140737EC2
 * 0000000140737ED7: mov     r11d, r10d
 * 0000000140737EDA: mov     ebx, dword ptr [rsp+1A10h+var_19A8]
 * 0000000140737EDE: mov     eax, [r9+24h]
 * 0000000140737EE2: xor     ecx, ecx
 * 0000000140737EE4: mov     r8d, 80000000h
 * 0000000140737EEA: and     eax, r8d
 * 0000000140737EED: cmovnz  r11d, r10d
 * 0000000140737EF1: test    r11d, r11d
 * 0000000140737EF4: jz      short loc_140737F1B
 * 0000000140737EF6: cmp     dword ptr [r9], 54494E49h
 * 0000000140737EFD: jnz     short loc_140737F1B
 * 0000000140737EFF: cmp     dword ptr [r9+4], 4742444Bh
 * 0000000140737F07: jnz     short loc_140737F1B
 * 0000000140737F09: mov     eax, [r13+690h]
 * 0000000140737F10: and     eax, 10000000h
 * 0000000140737F15: mov     eax, ecx
 * 0000000140737F17: cmovnz  r11d, eax
 * 0000000140737F1B: mov     ecx, [r9+8]
 * 0000000140737F1F: cmp     [r9+10h], ecx
 * 0000000140737F23: mov     r10d, [r9+0Ch]
 * 0000000140737F27: cmova   ecx, [r9+10h]
 * 0000000140737F2C: mov     rdx, [rsp+1A10h+var_19C0]
 * 0000000140737F31: add     r10d, ecx
 * 0000000140737F34: mov     eax, [r15+8]
 * 0000000140737F38: mov     ecx, 1
 * 0000000140737F3D: test    cl, al
 * 0000000140737F3F: jnz     short loc_140737F51
 * 0000000140737F41: cmp     eax, r12d
 * 0000000140737F44: cmovb   r12d, eax
 * 0000000140737F48: cmp     eax, ebx
 * 0000000140737F4A: cmova   ebx, eax
 * 0000000140737F4D: mov     dword ptr [rsp+1A10h+var_19A8], ebx
 * 0000000140737F51: mov     eax, [r15]
 * 0000000140737F54: mov     ebx, [r15+4]
 * 0000000140737F58: sub     ebx, eax
 * 0000000140737F5A: lea     rdi, [rdx+rax]
 * 0000000140737F5E: xor     eax, eax
 * 0000000140737F60: test    r11d, r11d
 * 0000000140737F63: jz      short loc_140737F80
 * 0000000140737F65: mov     rdi, [rsp+78h]
 * 0000000140737F6A: mov     [rdi], r8d
 * 0000000140737F6D: jmp     loc_140738020
 * 0000000140737F72: mov     r10d, 1
 * 0000000140737F78: mov     r11d, r10d
 * 0000000140737F7B: jmp     loc_140737EDE
 * 0000000140737F80: add     [r13+598h], ebx
 * 0000000140737F87: mov     rax, rdi
 * 0000000140737F8A: mov     r8d, [r13+584h]
 * 0000000140737F91: mov     rdx, [r13+588h]
 * 0000000140737F98: mov     ecx, ebx
 * 0000000140737F9A: add     rcx, rdi
 * 0000000140737F9D: cmp     rdi, rcx
 * 0000000140737FA0: jnb     short loc_140737FAE
 * 0000000140737FA2: prefetchnta byte ptr [rax]
 * 0000000140737FA5: add     rax, 40h ; '@'
 * 0000000140737FA9: cmp     rax, rcx
 * 0000000140737FAC: jb      short loc_140737FA2
 * 0000000140737FAE: cmp     ebx, 8
 * 0000000140737FB1: jb      short loc_140737FD8
 * 0000000140737FB3: mov     eax, ebx
 * 0000000140737FB5: mov     r14d, 1
 * 0000000140737FBB: shr     rax, 3
 * 0000000140737FBF: xor     rdx, [rdi]
 * 0000000140737FC2: mov     ecx, r8d
 * 0000000140737FC5: rol     rdx, cl
 * 0000000140737FC8: add     rdi, 8
 * 0000000140737FCC: add     ebx, 0FFFFFFF8h
 * 0000000140737FCF: sub     rax, r14
 * 0000000140737FD2: jnz     short loc_140737FBF
 * 0000000140737FD4: mov     r14, [rbp+1910h+var_1990]
 * 0000000140737FD8: test    ebx, ebx
 * 0000000140737FDA: jz      short loc_140737FFA
 * 0000000140737FDC: mov     r14d, 1
 * 0000000140737FE2: movzx   eax, byte ptr [rdi]
 * 0000000140737FE5: mov     ecx, r8d
 * 0000000140737FE8: xor     rdx, rax
 * 0000000140737FEB: add     rdi, r14
 * 0000000140737FEE: rol     rdx, cl
 * 0000000140737FF1: add     ebx, 0FFFFFFFFh
 * 0000000140737FF4: jnz     short loc_140737FE2
 * 0000000140737FF6: mov     r14, [rbp+1910h+var_1990]
 * 0000000140737FFA: mov     rax, rdx
 * 0000000140737FFD: jmp     short loc_140738001
 * 0000000140737FFF: xor     edx, eax
 * 0000000140738001: shr     rax, 1Fh
 * 0000000140738005: test    rax, rax
 * 0000000140738008: jnz     short loc_140737FFF
 * 000000014073800A: mov     rdi, [rsp+78h]
 * 000000014073800F: btr     edx, 1Fh
 * 0000000140738013: mov     r8d, 80000000h
 * 0000000140738019: mov     [rdi], edx
 * 000000014073801B: mov     rdx, [rsp+1A10h+var_19C0]
 * 0000000140738020: add     r15, 0Ch
 * 0000000140738024: cmp     r15, r14
 * 0000000140738027: jz      short loc_1407380A8
 * 0000000140738029: mov     eax, [r9+0Ch]
 * 000000014073802D: add     rdi, 4
 * 0000000140738031: mov     [rsp+78h], rdi
 * 0000000140738036: cmp     [r15], eax
 * 0000000140738039: jb      short loc_140738052
 * 000000014073803B: mov     ecx, [r15+4]
 * 000000014073803F: mov     ebx, dword ptr [rsp+1A10h+var_19A8]
 * 0000000140738043: add     rcx, rdx
 * 0000000140738046: mov     eax, r10d
 * 0000000140738049: cmp     rcx, rax
 * 000000014073804C: jbe     loc_140737F34
 * 0000000140738052: mov     r8d, [r15]
 * 0000000140738055: mov     rcx, [rsp+1A10h+var_19D0]
 * 000000014073805A: call    qword ptr [r13+1E0h]
 * 0000000140738061: mov     ebx, dword ptr [rsp+1A10h+var_19A8]
 * 0000000140738065: mov     r9, rax
 * 0000000140738068: xor     eax, eax
 * 000000014073806A: test    r9, r9
 * 000000014073806D: jnz     loc_140737D63
 * 0000000140738073: mov     r14, [rbp+1910h+var_16D8]
 * 000000014073807A: mov     ecx, 0C000007Bh
 * 000000014073807F: mov     edx, 80000000h
 * 0000000140738084: lea     eax, [rcx+rdx]
 * 0000000140738087: test    edx, eax
 * 0000000140738089: jnz     short loc_140738097
 * 000000014073808B: cmp     ecx, 0C000010Eh
 * 0000000140738091: jnz     loc_140739311
 * 0000000140738097: mov     rax, [rsp+1A10h+var_19B0]
 * 000000014073809C: mov     rax, [rax]
 * 000000014073809F: cmp     rax, [rbp+1910h+var_1988]
 * 00000001407380A3: jmp     loc_1407376C0
 * 00000001407380A8: mov     edx, dword ptr [rsp+1A10h+var_19A8]
 * 00000001407380AC: cmp     r12d, 0FFFFFFFFh
 * 00000001407380B0: jnz     short loc_1407380B9
 * 00000001407380B2: test    edx, edx
 * 00000001407380B4: jnz     short loc_1407380B9
 * 00000001407380B6: mov     r12d, eax
 * 00000001407380B9: mov     rcx, [rbp+1910h+var_F00]
 * 00000001407380C0: lea     r9, [rbp+1910h+var_1908]
 * 00000001407380C4: sub     edx, r12d
 * 00000001407380C7: mov     eax, r12d
 * 00000001407380CA: xor     r8d, r8d
 * 00000001407380CD: mov     [rbp+1910h+var_E10], edx
 * 00000001407380D3: add     rax, rcx
 * 00000001407380D6: mov     [rbp+1910h+var_16D8], r13
 * 00000001407380DD: mov     r14, r13
 * 00000001407380E0: mov     [rbp+1910h+var_C58], rax
 * 00000001407380E7: lea     edi, [r8+1]
 * 00000001407380EB: mov     dl, dil
 * 00000001407380EE: call    qword ptr [r13+1C0h]
 * 00000001407380F5: mov     rcx, rax
 * 00000001407380F8: mov     [rbp+1910h+var_C50], rax
 * 00000001407380FF: neg     rcx
 * 0000000140738102: lea     r8d, [rdi+0Bh]
 * 0000000140738106: mov     rcx, [rbp+1910h+var_F00]
 * 000000014073810D: lea     r9, [rbp+1910h+var_1908]
 * 0000000140738111: sbb     edx, edx
 * 0000000140738113: and     edx, [rbp+1910h+var_1908]
 * 0000000140738116: mov     [rbp+1910h+var_1908], edx
 * 0000000140738119: mov     [rbp+1910h+var_E0C], edx
 * 000000014073811F: mov     dl, dil
 * 0000000140738122: call    qword ptr [r13+1C0h]
 * 0000000140738129: mov     rdx, rax
 * 000000014073812C: mov     [rsp+1A10h+var_19C0], rax
 * 0000000140738131: neg     rax
 * 0000000140738134: mov     [rbp+1910h+var_C48], rdx
 * 000000014073813B: lea     r8d, [rdi+9]
 * 000000014073813F: mov     dl, dil
 * 0000000140738142: sbb     ecx, ecx
 * 0000000140738144: lea     r9, [rbp+1910h+var_1908]
 * 0000000140738148: and     ecx, [rbp+1910h+var_1908]
 * 000000014073814B: mov     dword ptr [rsp+1A10h+var_19A8], ecx
 * 000000014073814F: mov     [rbp+1910h+var_1908], ecx
 * 0000000140738152: mov     [rbp+1910h+var_E08], ecx
 * 0000000140738158: mov     rcx, [rbp+1910h+var_F00]
 * 000000014073815F: call    qword ptr [r13+1C0h]
 * 0000000140738166: mov     rcx, rax
 * 0000000140738169: mov     [rbp+1910h+var_C40], rax
 * 0000000140738170: mov     eax, dword ptr [rsp+1A10h+Src]
 * 0000000140738174: neg     rcx
 * 0000000140738177: sbb     edx, edx
 * 0000000140738179: and     edx, [rbp+1910h+var_1908]
 * 000000014073817C: mov     [rbp+1910h+var_1908], edx
 * 000000014073817F: neg     eax
 * 0000000140738181: mov     r15d, [r13+554h]
 * 0000000140738188: mov     r8d, [r13+634h]
 * 000000014073818F: sbb     ecx, ecx
 * 0000000140738191: and     ecx, 0Bh
 * 0000000140738194: mov     [rbp+1910h+var_E04], edx
 * 000000014073819A: mov     dword ptr [rbp+1910h+NtHeaders], ecx
 * 000000014073819D: lea     eax, [r15+0C0h]
 * 00000001407381A4: cmp     eax, [r13+714h]
 * 00000001407381AB: jbe     loc_140738281
 * 00000001407381B1: mov     edx, eax
 * 00000001407381B3: mov     rcx, r13
 * 00000001407381B6: call    sub_140236718
 * 00000001407381BB: mov     rbx, rax
 * 00000001407381BE: test    rax, rax
 * 00000001407381C1: jz      loc_140739305
 * 00000001407381C7: mov     edx, [r13+690h]
 * 00000001407381CE: test    dl, 4
 * 00000001407381D1: jnz     loc_140738278
 * 00000001407381D7: mov     eax, [r13+554h]
 * 00000001407381DE: and     edx, 20000000h
 * 00000001407381E4: mov     r8, [r13+538h]
 * 00000001407381EB: neg     edx
 * 00000001407381ED: sbb     edx, edx
 * 00000001407381EF: and     edx, [r13+634h]
 * 00000001407381F6: cmp     eax, 8
 * 00000001407381F9: jb      short loc_140738216
 * 00000001407381FB: mov     ecx, eax
 * 00000001407381FD: shr     rcx, 3
 * 0000000140738201: xor     r9d, r9d
 * 0000000140738204: mov     [r13+0], r9
 * 0000000140738208: add     eax, 0FFFFFFF8h
 * 000000014073820B: add     r13, 8
 * 000000014073820F: sub     rcx, rdi
 * 0000000140738212: jnz     short loc_140738204
 * 0000000140738214: jmp     short loc_140738219
 * 0000000140738216: xor     r9d, r9d
 * 0000000140738219: test    eax, eax
 * 000000014073821B: jz      short loc_140738229
 * 000000014073821D: mov     [r13+0], r9b
 * 0000000140738221: add     r13, rdi
 * 0000000140738224: add     eax, 0FFFFFFFFh
 * 0000000140738227: jnz     short loc_14073821D
 * 0000000140738229: mov     edi, [rbx+634h]
 * 000000014073822F: mov     [rbx+634h], edx
 * 0000000140738235: cmp     edx, 3
 * 0000000140738238: jz      short loc_140738269
 * 000000014073823A: mov     eax, [rbx+690h]
 * 0000000140738240: mov     ecx, r9d
 * 0000000140738243: and     eax, 10000000h
 * 0000000140738248: cmovz   ecx, edx
 * 000000014073824B: test    ecx, ecx
 * 000000014073824D: jz      short loc_14073825E
 * 000000014073824F: lea     rcx, [r8-8]
 * 0000000140738253: mov     rdx, [rcx]
 * 0000000140738256: call    qword ptr [rbx+1F8h]
 * 000000014073825C: jmp     short loc_140738272
 * 000000014073825E: mov     rcx, r8
 * 0000000140738261: call    qword ptr [rbx+0F8h]
 * 0000000140738267: jmp     short loc_140738272
 * 0000000140738269: mov     rcx, r8
 * 000000014073826C: call    qword ptr [rbx+320h]
 * 0000000140738272: mov     [rbx+634h], edi
 * 0000000140738278: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 000000014073827F: jmp     short loc_14073828B
 * 0000000140738281: mov     rbx, r13
 * 0000000140738284: mov     [r13+554h], eax
 * 000000014073828B: mov     esi, dword ptr [rbp+1910h+NtHeaders]
 * 000000014073828E: lea     r14, [rbx+r15]
 * 0000000140738292: mov     r11d, 4
 * 0000000140738298: lea     r9, [rbp+1910h+var_E10]
 * 000000014073829F: add     [rbx+57Ch], r11d
 * 00000001407382A6: lea     r13, [rbp+1910h+var_C58]
 * 00000001407382AD: mov     [rbp+1910h+var_F40], r14
 * 00000001407382B4: mov     r10d, r11d
 * 00000001407382B7: mov     [rbp+1910h+var_12A0], r14
 * 00000001407382BE: xor     edi, edi
 * 00000001407382C0: lea     r8d, [r11-3]
 * 00000001407382C4: mov     [rsp+1A10h+var_19D0], r9
 * 00000001407382C9: mov     [rsp+78h], r11
 * 00000001407382CE: mov     r12d, [r9]
 * 00000001407382D1: mov     ecx, 30h ; '0'
 * 00000001407382D6: mov     r15, [r13+0]
 * 00000001407382DA: mov     rax, r14
 * 00000001407382DD: lea     edx, [rcx-2Ah]
 * 00000001407382E0: mov     [rax], rdi
 * 00000001407382E3: add     ecx, 0FFFFFFF8h
 * 00000001407382E6: add     rax, 8
 * 00000001407382EA: sub     rdx, r8
 * 00000001407382ED: jnz     short loc_1407382E0
 * 00000001407382EF: test    ecx, ecx
 * 00000001407382F1: jz      short loc_1407382FE
 * 00000001407382F3: mov     [rax], dil
 * 00000001407382F6: add     rax, r8
 * 00000001407382F9: add     ecx, 0FFFFFFFFh
 * 00000001407382FC: jnz     short loc_1407382F3
 * 00000001407382FE: mov     eax, 20h ; ' '
 * 0000000140738303: mov     [r14], esi
 * 0000000140738306: mov     [r14+8], r15
 * 000000014073830A: cmp     esi, eax
 * 000000014073830C: jnz     short loc_140738335
 * 000000014073830E: test    r12d, r12d
 * 0000000140738311: jz      short loc_140738335
 * 0000000140738313: lea     r9, [r14+18h]
 * 0000000140738317: mov     r8d, r12d
 * 000000014073831A: mov     rdx, r15
 * 000000014073831D: mov     rcx, rbx
 * 0000000140738320: call    sub_14014F138
 * 0000000140738325: mov     r9, [rsp+1A10h+var_19D0]
 * 000000014073832A: mov     r11d, 4
 * 0000000140738330: mov     r10, [rsp+78h]
 * 0000000140738335: mov     [r14+10h], r12d
 * 0000000140738339: lea     rcx, [r15+r12]
 * 000000014073833D: add     [rbx+598h], r12d
 * 0000000140738344: mov     rax, r15
 * 0000000140738347: mov     r8d, [rbx+584h]
 * 000000014073834E: mov     rdx, [rbx+588h]
 * 0000000140738355: cmp     r15, rcx
 * 0000000140738358: jnb     short loc_140738366
 * 000000014073835A: prefetchnta byte ptr [rax]
 * 000000014073835D: add     rax, 40h ; '@'
 * 0000000140738361: cmp     rax, rcx
 * 0000000140738364: jb      short loc_14073835A
 * 0000000140738366: mov     edi, r12d
 * 0000000140738369: cmp     r12d, 8
 * 000000014073836D: jb      short loc_140738393
 * 000000014073836F: mov     rax, r12
 * 0000000140738372: mov     esi, 1
 * 0000000140738377: shr     rax, 3
 * 000000014073837B: xor     rdx, [r15]
 * 000000014073837E: mov     ecx, r8d
 * 0000000140738381: rol     rdx, cl
 * 0000000140738384: add     r15, 8
 * 0000000140738388: add     edi, 0FFFFFFF8h
 * 000000014073838B: sub     rax, rsi
 * 000000014073838E: jnz     short loc_14073837B
 * 0000000140738390: mov     esi, dword ptr [rbp+1910h+NtHeaders]
 * 0000000140738393: test    edi, edi
 * 0000000140738395: jz      short loc_1407383B7
 * 0000000140738397: mov     r10d, 1
 * 000000014073839D: movzx   eax, byte ptr [r15]
 * 00000001407383A1: mov     ecx, r8d
 * 00000001407383A4: xor     rdx, rax
 * 00000001407383A7: add     r15, r10
 * 00000001407383AA: rol     rdx, cl
 * 00000001407383AD: add     edi, 0FFFFFFFFh
 * 00000001407383B0: jnz     short loc_14073839D
 * 00000001407383B2: mov     r10, [rsp+78h]
 * 00000001407383B7: mov     rax, rdx
 * 00000001407383BA: shr     rax, 1Fh
 * 00000001407383BE: xor     edi, edi
 * 00000001407383C0: jmp     short loc_1407383C8
 * 00000001407383C2: xor     edx, eax
 * 00000001407383C4: shr     rax, 1Fh
 * 00000001407383C8: test    rax, rax
 * 00000001407383CB: jnz     short loc_1407383C2
 * 00000001407383CD: btr     edx, 1Fh
 * 00000001407383D1: lea     r8d, [rax+1]
 * 00000001407383D5: mov     [r14+14h], edx
 * 00000001407383D9: add     r9, r11
 * 00000001407383DC: add     [rbx+598h], r12d
 * 00000001407383E3: add     r13, 8
 * 00000001407383E7: mov     r14, [rbp+1910h+var_F40]
 * 00000001407383EE: add     r14, 30h ; '0'
 * 00000001407383F2: mov     [rsp+1A10h+var_19D0], r9
 * 00000001407383F7: sub     r10, r8
 * 00000001407383FA: mov     [rbp+1910h+var_F40], r14
 * 0000000140738401: mov     [rsp+78h], r10
 * 0000000140738406: jnz     loc_1407382CE
 * 000000014073840C: mov     rcx, [rbp+1910h+var_12A0]
 * 0000000140738413: mov     r14, rbx
 * 0000000140738416: mov     eax, dword ptr [rsp+1A10h+Src]
 * 000000014073841A: add     rcx, 60h ; '`'
 * 000000014073841E: neg     eax
 * 0000000140738420: mov     [rbp+1910h+var_16D8], rbx
 * 0000000140738427: mov     [rbp+1910h+var_1280], rcx
 * 000000014073842E: sbb     r15d, r15d
 * 0000000140738431: neg     r15d
 * 0000000140738434: add     r15d, 0Dh
 * 0000000140738438: test    rcx, rcx
 * 000000014073843B: jnz     loc_14073866B
 * 0000000140738441: mov     r13d, [rbx+554h]
 * 0000000140738448: mov     r8d, [rbx+634h]
 * 000000014073844F: lea     eax, [r13+30h]
 * 0000000140738453: cmp     eax, [rbx+714h]
 * 0000000140738459: jbe     loc_140738540
 * 000000014073845F: mov     edx, eax
 * 0000000140738461: mov     rcx, rbx
 * 0000000140738464: call    sub_140236718
 * 0000000140738469: mov     r12, rax
 * 000000014073846C: mov     [rsp+1A10h+var_19D0], rax
 * 0000000140738471: xor     eax, eax
 * 0000000140738473: test    r12, r12
 * 0000000140738476: jz      loc_140739305
 * 000000014073847C: mov     edi, [rbx+690h]
 * 0000000140738482: test    dil, 4
 * 0000000140738486: jnz     loc_140738535
 * 000000014073848C: mov     edx, [rbx+554h]
 * 0000000140738492: lea     r9d, [rax+1]
 * 0000000140738496: mov     r8, [rbx+538h]
 * 000000014073849D: and     edi, 20000000h
 * 00000001407384A3: neg     edi
 * 00000001407384A5: sbb     edi, edi
 * 00000001407384A7: and     edi, [rbx+634h]
 * 00000001407384AD: cmp     edx, 8
 * 00000001407384B0: jb      short loc_1407384C9
 * 00000001407384B2: mov     eax, edx
 * 00000001407384B4: shr     rax, 3
 * 00000001407384B8: xor     ecx, ecx
 * 00000001407384BA: mov     [rbx], rcx
 * 00000001407384BD: add     edx, 0FFFFFFF8h
 * 00000001407384C0: add     rbx, 8
 * 00000001407384C4: sub     rax, r9
 * 00000001407384C7: jnz     short loc_1407384BA
 * 00000001407384C9: test    edx, edx
 * 00000001407384CB: jz      short loc_1407384D7
 * 00000001407384CD: mov     [rbx], al
 * 00000001407384CF: add     rbx, r9
 * 00000001407384D2: add     edx, 0FFFFFFFFh
 * 00000001407384D5: jnz     short loc_1407384CD
 * 00000001407384D7: mov     ebx, [r12+634h]
 * 00000001407384DF: mov     [r12+634h], edi
 * 00000001407384E7: cmp     edi, 3
 * 00000001407384EA: jz      short loc_140738522
 * 00000001407384EC: mov     eax, [r12+690h]
 * 00000001407384F4: xor     edx, edx
 * 00000001407384F6: and     eax, 10000000h
 * 00000001407384FB: mov     ecx, edx
 * 00000001407384FD: cmovz   ecx, edi
 * 0000000140738500: test    ecx, ecx
 * 0000000140738502: jz      short loc_140738515
 * 0000000140738504: lea     rcx, [r8-8]
 * 0000000140738508: mov     rdx, [rcx]
 * 000000014073850B: call    qword ptr [r12+1F8h]
 * 0000000140738513: jmp     short loc_14073852D
 * 0000000140738515: mov     rcx, r8
 * 0000000140738518: call    qword ptr [r12+0F8h]
 * 0000000140738520: jmp     short loc_14073852D
 * 0000000140738522: mov     rcx, r8
 * 0000000140738525: call    qword ptr [r12+320h]
 * 000000014073852D: mov     [r12+634h], ebx
 * 0000000140738535: and     dword ptr [r12+690h], 0FFFFFFFBh
 * 000000014073853E: jmp     short loc_14073854E
 * 0000000140738540: mov     r12, rbx
 * 0000000140738543: mov     [rsp+1A10h+var_19D0], rbx
 * 0000000140738548: mov     [rbx+554h], eax
 * 000000014073854E: mov     r10d, 1
 * 0000000140738554: lea     r14, [r12+r13]
 * 0000000140738558: add     [r12+57Ch], r10d
 * 0000000140738560: mov     rax, r14
 * 0000000140738563: mov     [rbp+1910h+var_FC0], r14
 * 000000014073856A: xor     ebx, ebx
 * 000000014073856C: lea     ecx, [r10+2Fh]
 * 0000000140738570: lea     edx, [rcx-2Ah]
 * 0000000140738573: mov     [rax], rbx
 * 0000000140738576: add     ecx, 0FFFFFFF8h
 * 0000000140738579: add     rax, 8
 * 000000014073857D: sub     rdx, r10
 * 0000000140738580: jnz     short loc_140738573
 * 0000000140738582: test    ecx, ecx
 * 0000000140738584: jz      short loc_140738590
 * 0000000140738586: mov     [rax], bl
 * 0000000140738588: add     rax, r10
 * 000000014073858B: add     ecx, 0FFFFFFFFh
 * 000000014073858E: jnz     short loc_140738586
 * 0000000140738590: mov     r13, [rsp+1A10h+var_19C0]
 * 0000000140738595: mov     eax, 20h ; ' '
 * 000000014073859A: mov     ebx, dword ptr [rsp+1A10h+var_19A8]
 * 000000014073859E: mov     [r14], r15d
 * 00000001407385A1: mov     [r14+8], r13
 * 00000001407385A5: cmp     r15d, eax
 * 00000001407385A8: jnz     short loc_1407385C6
 * 00000001407385AA: test    ebx, ebx
 * 00000001407385AC: jz      short loc_1407385C6
 * 00000001407385AE: lea     r9, [r14+18h]
 * 00000001407385B2: mov     r8d, ebx
 * 00000001407385B5: mov     rdx, r13
 * 00000001407385B8: mov     rcx, r12
 * 00000001407385BB: call    sub_14014F138
 * 00000001407385C0: mov     r10d, 1
 * 00000001407385C6: mov     [r14+10h], ebx
 * 00000001407385CA: mov     r8, r13
 * 00000001407385CD: add     [r12+598h], ebx
 * 00000001407385D5: mov     rax, r13
 * 00000001407385D8: mov     r9d, [r12+584h]
 * 00000001407385E0: mov     rdx, [r12+588h]
 * 00000001407385E8: mov     ecx, ebx
 * 00000001407385EA: add     rcx, r13
 * 00000001407385ED: cmp     r13, rcx
 * 00000001407385F0: jnb     short loc_1407385FE
 * 00000001407385F2: prefetchnta byte ptr [rax]
 * 00000001407385F5: add     rax, 40h ; '@'
 * 00000001407385F9: cmp     rax, rcx
 * 00000001407385FC: jb      short loc_1407385F2
 * 00000001407385FE: mov     edi, ebx
 * 0000000140738600: cmp     ebx, 8
 * 0000000140738603: jb      short loc_140738622
 * 0000000140738605: shr     rbx, 3
 * 0000000140738609: xor     rdx, [r8]
 * 000000014073860C: mov     ecx, r9d
 * 000000014073860F: rol     rdx, cl
 * 0000000140738612: add     r8, 8
 * 0000000140738616: add     edi, 0FFFFFFF8h
 * 0000000140738619: sub     rbx, r10
 * 000000014073861C: jnz     short loc_140738609
 * 000000014073861E: mov     ebx, dword ptr [rsp+1A10h+var_19A8]
 * 0000000140738622: test    edi, edi
 * 0000000140738624: jz      short loc_14073863B
 * 0000000140738626: movzx   eax, byte ptr [r8]
 * 000000014073862A: mov     ecx, r9d
 * 000000014073862D: xor     rdx, rax
 * 0000000140738630: add     r8, r10
 * 0000000140738633: rol     rdx, cl
 * 0000000140738636: add     edi, 0FFFFFFFFh
 * 0000000140738639: jnz     short loc_140738626
 * 000000014073863B: mov     rax, rdx
 * 000000014073863E: jmp     short loc_140738642
 * 0000000140738640: xor     edx, eax
 * 0000000140738642: shr     rax, 1Fh
 * 0000000140738646: test    rax, rax
 * 0000000140738649: jnz     short loc_140738640
 * 000000014073864B: btr     edx, 1Fh
 * 000000014073864F: mov     [r14+14h], edx
 * 0000000140738653: mov     rax, [rbp+1910h+var_FC0]
 * 000000014073865A: mov     [rbp+1910h+var_1280], rax
 * 0000000140738661: add     [r12+598h], ebx
 * 0000000140738669: jmp     short loc_14073867F
 * 000000014073866B: mov     r13, [rsp+1A10h+var_19C0]
 * 0000000140738670: mov     r12, rbx
 * 0000000140738673: mov     [rsp+1A10h+var_19D0], rbx
 * 0000000140738678: mov     ebx, dword ptr [rsp+1A10h+var_19A8]
 * 000000014073867C: mov     [rcx], r15d
 * 000000014073867F: test    dword ptr [r12+690h], 40000000h
 * 000000014073868B: jz      short loc_1407386AA
 * 000000014073868D: test    ebx, ebx
 * 000000014073868F: jz      short loc_1407386AA
 * 0000000140738691: mov     r9, [rbp+1910h+var_1280]
 * 0000000140738698: mov     r8d, ebx
 * 000000014073869B: add     r9, 1Ch
 * 000000014073869F: mov     rdx, r13
 * 00000001407386A2: mov     rcx, r12
 * 00000001407386A5: call    sub_14014F138
 * 00000001407386AA: mov     rax, [rbp+1910h+var_1280]
 * 00000001407386B1: xor     ecx, ecx
 * 00000001407386B3: xor     r13d, r13d
 * 00000001407386B6: mov     [rbp+1910h+var_16D8], r12
 * 00000001407386BD: mov     r14, r12
 * 00000001407386C0: mov     [rax+18h], ecx
 * 00000001407386C3: xor     eax, eax
 * 00000001407386C5: mov     rbx, [rbp+1910h+var_12A0]
 * 00000001407386CC: cmp     dword ptr [rsp+1A10h+Src], r13d
 * 00000001407386D1: mov     rdi, [rbp+1910h+var_F00]
 * 00000001407386D8: setnz   al
 * 00000001407386DB: mov     dword ptr [rbx+90h], 23h ; '#'
 * 00000001407386E5: xor     eax, [rbx+0B8h]
 * 00000001407386EB: and     eax, 1
 * 00000001407386EE: xor     [rbx+0B8h], eax
 * 00000001407386F4: cmp     dword ptr [rbx+0A0h], 94h
 * 00000001407386FE: jb      short loc_140738766
 * 0000000140738700: mov     r15, [rbx+98h]
 * 0000000140738707: mov     rcx, rdi
 * 000000014073870A: call    qword ptr [r12+1C8h]
 * 0000000140738712: test    rax, rax
 * 0000000140738715: jz      loc_140739305
 * 000000014073871B: mov     ecx, [rax+50h]
 * 000000014073871E: or      dword ptr [rbx+0B8h], 2
 * 0000000140738725: add     rcx, rdi
 * 0000000140738728: mov     rax, [r15+70h]
 * 000000014073872C: cmp     rax, rdi
 * 000000014073872F: jb      short loc_140738747
 * 0000000140738731: cmp     rax, rcx
 * 0000000140738734: jnb     short loc_140738747
 * 0000000140738736: mov     rax, [rax]
 * 0000000140738739: mov     [rbx+0A8h], rax
 * 0000000140738740: or      dword ptr [rbx+0B8h], 4
 * 0000000140738747: mov     rax, [r15+78h]
 * 000000014073874B: cmp     rax, rdi
 * 000000014073874E: jb      short loc_140738766
 * 0000000140738750: cmp     rax, rcx
 * 0000000140738753: jnb     short loc_140738766
 * 0000000140738755: mov     rax, [rax]
 * 0000000140738758: mov     [rbx+0B0h], rax
 * 000000014073875F: or      dword ptr [rbx+0B8h], 8
 * 0000000140738766: test    dword ptr [r12+690h], 400000h
 * 0000000140738772: mov     r15, [rbp+1910h+var_F00]
 * 0000000140738779: mov     [rsp+1A10h+var_19C0], r15
 * 000000014073877E: mov     [rbp+1910h+var_16D8], r12
 * 0000000140738785: jz      loc_1407392F2
 * 000000014073878B: mov     rcx, r15
 * 000000014073878E: call    qword ptr [r12+1C8h]
 * 0000000140738796: mov     [rsp+78h], rax
 * 000000014073879B: mov     r13, rax
 * 000000014073879E: test    rax, rax
 * 00000001407387A1: jz      loc_14073807A
 * 00000001407387A7: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 00000001407387AB: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001407387B5: mul     rcx
 * 00000001407387B8: xor     eax, eax
 * 00000001407387BA: mov     r9, rdx
 * 00000001407387BD: movzx   edx, word ptr [r13+6]
 * 00000001407387C2: shr     r9, 3
 * 00000001407387C6: mov     [rbp+1910h+var_1990], r9
 * 00000001407387CA: mov     word ptr [rbp+1910h+Size], dx
 * 00000001407387CE: test    dx, dx
 * 00000001407387D1: jnz     short loc_140738838
 * 00000001407387D3: test    dword ptr [r12+690h], 200000h
 * 00000001407387DF: jz      loc_1407423F4
 * 00000001407387E5: cmp     [r12+608h], eax
 * 00000001407387ED: jnz     loc_14073807A
 * 00000001407387F3: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001407387FD: add     rax, r12
 * 0000000140738800: mov     [r12+610h], rax
 * 0000000140738808: xor     eax, eax
 * 000000014073880A: mov     [r12+618h], rax
 * 0000000140738812: mov     eax, 1
 * 0000000140738817: mov     qword ptr [r12+620h], 10Fh
 * 0000000140738823: mov     [r12+628h], r15
 * 000000014073882B: mov     [r12+608h], eax
 * 0000000140738833: jmp     loc_14073807A
 * 0000000140738838: mov     rdi, [rsp+1A10h+var_19A0]
 * 000000014073883D: lea     r8, [r13+18h]
 * 0000000140738841: movzx   r10d, dx
 * 0000000140738845: mov     rbx, rdi
 * 0000000140738848: mov     eax, r9d
 * 000000014073884B: mov     dword ptr [rsp+1A10h+var_19A8], r10d
 * 0000000140738850: lea     rcx, [rax+rax*2]
 * 0000000140738854: movzx   eax, word ptr [r13+14h]
 * 0000000140738859: add     r8, rax
 * 000000014073885C: lea     r11, [rdi+rcx*4]
 * 0000000140738860: xor     eax, eax
 * 0000000140738862: mov     [rbp+1910h+var_1968], r11
 * 0000000140738866: mov     [rbp+1910h+NtHeaders], r8
 * 000000014073886A: mov     edi, eax
 * 000000014073886C: lea     edx, [rax+1]
 * 000000014073886F: test    r10d, r10d
 * 0000000140738872: jz      loc_140738929
 * 0000000140738878: lea     r12, [r8+8]
 * 000000014073887C: mov     ecx, [r12]
 * 0000000140738880: cmp     [r12+8], ecx
 * 0000000140738885: mov     r13d, [r12+4]
 * 000000014073888A: cmova   ecx, [r12+8]
 * 0000000140738890: lea     r15d, [rcx+r13]
 * 0000000140738894: test    edi, edi
 * 0000000140738896: jz      short loc_1407388AA
 * 0000000140738898: lea     eax, [rdi-1]
 * 000000014073889B: lea     rax, [rax+rax*4]
 * 000000014073889F: cmp     r15d, [r8+rax*8+0Ch]
 * 00000001407388A4: jb      loc_140738994
 * 00000001407388AA: cmp     rbx, r11
 * 00000001407388AD: jz      short loc_140738907
 * 00000001407388AF: mov     ecx, [rbx]
 * 00000001407388B1: mov     eax, [rbx+4]
 * 00000001407388B4: cmp     ecx, r15d
 * 00000001407388B7: jnb     short loc_1407388FD
 * 00000001407388B9: cmp     eax, r13d
 * 00000001407388BC: jbe     short loc_1407388FD
 * 00000001407388BE: cmp     ecx, r13d
 * 00000001407388C1: jb      loc_1407389F6
 * 00000001407388C7: cmp     eax, r15d
 * 00000001407388CA: ja      loc_1407389F6
 * 00000001407388D0: mov     rdx, [rsp+1A10h+var_19C0]
 * 00000001407388D5: mov     r9, rbx
 * 00000001407388D8: mov     eax, edi
 * 00000001407388DA: lea     rcx, [rax+rax*4]
 * 00000001407388DE: lea     r8, [r8+rcx*8]
 * 00000001407388E2: mov     rcx, [rsp+1A10h+var_19D0]
 * 00000001407388E7: call    $$e6
 * 00000001407388EC: mov     r11, [rbp+1910h+var_1968]
 * 00000001407388F0: add     rbx, 0Ch
 * 00000001407388F4: mov     r8, [rbp+1910h+NtHeaders]
 * 00000001407388F8: cmp     rbx, r11
 * 00000001407388FB: jnz     short loc_1407388AF
 * 00000001407388FD: mov     r10d, dword ptr [rsp+1A10h+var_19A8]
 * 0000000140738902: mov     edx, 1
 * 0000000140738907: add     edi, edx
 * 0000000140738909: add     r12, 28h ; '('
 * 000000014073890D: cmp     edi, r10d
 * 0000000140738910: jb      loc_14073887C
 * 0000000140738916: mov     r12, [rsp+1A10h+var_19D0]
 * 000000014073891B: mov     r9, [rbp+1910h+var_1990]
 * 000000014073891F: mov     r13, [rsp+78h]
 * 0000000140738924: mov     r15, [rsp+1A10h+var_19C0]
 * 0000000140738929: cmp     rbx, r11
 * 000000014073892C: jz      loc_140738A5D
 * 0000000140738932: xor     eax, eax
 * 0000000140738934: test    dword ptr [r12+690h], 200000h
 * 0000000140738940: jz      loc_140742462
 * 0000000140738946: cmp     [r12+608h], eax
 * 000000014073894E: jnz     loc_14073807A
 * 0000000140738954: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014073895E: add     rax, r12
 * 0000000140738961: mov     [r12+610h], rax
 * 0000000140738969: xor     eax, eax
 * 000000014073896B: mov     [r12+618h], rax
 * 0000000140738973: mov     qword ptr [r12+620h], 10Fh
 * 000000014073897F: mov     [r12+628h], r15
 * 0000000140738987: mov     [r12+608h], edx
 * 000000014073898F: jmp     loc_14073807A
 * 0000000140738994: mov     rcx, [rsp+1A10h+var_19D0]
 * 0000000140738999: xor     eax, eax
 * 000000014073899B: test    dword ptr [rcx+690h], 200000h
 * 00000001407389A5: jz      loc_140742416
 * 00000001407389AB: cmp     [rcx+608h], eax
 * 00000001407389B1: jnz     loc_14073807A
 * 00000001407389B7: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001407389C1: add     rax, rcx
 * 00000001407389C4: mov     [rcx+610h], rax
 * 00000001407389CB: xor     eax, eax
 * 00000001407389CD: mov     [rcx+618h], rax
 * 00000001407389D4: mov     rax, [rsp+1A10h+var_19C0]
 * 00000001407389D9: mov     qword ptr [rcx+620h], 10Fh
 * 00000001407389E4: mov     [rcx+628h], rax
 * 00000001407389EB: mov     [rcx+608h], edx
 * 00000001407389F1: jmp     loc_14073807A
 * 00000001407389F6: mov     rcx, [rsp+1A10h+var_19D0]
 * 00000001407389FB: xor     eax, eax
 * 00000001407389FD: test    dword ptr [rcx+690h], 200000h
 * 0000000140738A07: jz      loc_14074243B
 * 0000000140738A0D: cmp     [rcx+608h], eax
 * 0000000140738A13: jnz     loc_14073807A
 * 0000000140738A19: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140738A23: add     rax, rcx
 * 0000000140738A26: mov     [rcx+610h], rax
 * 0000000140738A2D: xor     eax, eax
 * 0000000140738A2F: mov     [rcx+618h], rax
 * 0000000140738A36: mov     rax, [rsp+1A10h+var_19C0]
 * 0000000140738A3B: mov     qword ptr [rcx+620h], 10Fh
 * 0000000140738A46: mov     [rcx+628h], rax
 * 0000000140738A4D: mov     eax, 1
 * 0000000140738A52: mov     [rcx+608h], eax
 * 0000000140738A58: jmp     loc_14073807A
 * 0000000140738A5D: mov     r15d, [r12+554h]
 * 0000000140738A65: lea     ecx, [r9+6]
 * 0000000140738A69: mov     r8d, [r12+634h]
 * 0000000140738A71: lea     eax, [r10+2]
 * 0000000140738A75: and     ecx, 0FFFFFFF8h
 * 0000000140738A78: lea     eax, [rax+rax*2]
 * 0000000140738A7B: lea     eax, [rcx+rax*8]
 * 0000000140738A7E: add     eax, r15d
 * 0000000140738A81: cmp     eax, [r12+714h]
 * 0000000140738A89: jbe     loc_140738B88
 * 0000000140738A8F: mov     edx, eax
 * 0000000140738A91: mov     rcx, r12
 * 0000000140738A94: call    sub_140236718
 * 0000000140738A99: mov     r11, rax
 * 0000000140738A9C: mov     [rsp+78h], rax
 * 0000000140738AA1: xor     eax, eax
 * 0000000140738AA3: test    r11, r11
 * 0000000140738AA6: jz      loc_140738B7E
 * 0000000140738AAC: mov     ebx, [r12+690h]
 * 0000000140738AB4: test    bl, 4
 * 0000000140738AB7: jnz     loc_140738B6B
 * 0000000140738ABD: mov     edx, [r12+554h]
 * 0000000140738AC5: lea     edi, [rax+1]
 * 0000000140738AC8: mov     r8, [r12+538h]
 * 0000000140738AD0: and     ebx, 20000000h
 * 0000000140738AD6: neg     ebx
 * 0000000140738AD8: sbb     ebx, ebx
 * 0000000140738ADA: and     ebx, [r12+634h]
 * 0000000140738AE2: cmp     edx, 8
 * 0000000140738AE5: jb      short loc_140738AFF
 * 0000000140738AE7: mov     eax, edx
 * 0000000140738AE9: shr     rax, 3
 * 0000000140738AED: xor     ecx, ecx
 * 0000000140738AEF: mov     [r12], rcx
 * 0000000140738AF3: add     edx, 0FFFFFFF8h
 * 0000000140738AF6: add     r12, 8
 * 0000000140738AFA: sub     rax, rdi
 * 0000000140738AFD: jnz     short loc_140738AEF
 * 0000000140738AFF: test    edx, edx
 * 0000000140738B01: jz      short loc_140738B0F
 * 0000000140738B03: mov     [r12], al
 * 0000000140738B07: add     r12, rdi
 * 0000000140738B0A: add     edx, 0FFFFFFFFh
 * 0000000140738B0D: jnz     short loc_140738B03
 * 0000000140738B0F: mov     edi, [r11+634h]
 * 0000000140738B16: mov     [r11+634h], ebx
 * 0000000140738B1D: cmp     ebx, 3
 * 0000000140738B20: jz      short loc_140738B55
 * 0000000140738B22: mov     eax, [r11+690h]
 * 0000000140738B29: xor     edx, edx
 * 0000000140738B2B: and     eax, 10000000h
 * 0000000140738B30: mov     ecx, edx
 * 0000000140738B32: cmovz   ecx, ebx
 * 0000000140738B35: test    ecx, ecx
 * 0000000140738B37: jz      short loc_140738B49
 * 0000000140738B39: lea     rcx, [r8-8]
 * 0000000140738B3D: mov     rdx, [rcx]
 * 0000000140738B40: call    qword ptr [r11+1F8h]
 * 0000000140738B47: jmp     short loc_140738B5F
 * 0000000140738B49: mov     rcx, r8
 * 0000000140738B4C: call    qword ptr [r11+0F8h]
 * 0000000140738B53: jmp     short loc_140738B5F
 * 0000000140738B55: mov     rcx, r8
 * 0000000140738B58: call    qword ptr [r11+320h]
 * 0000000140738B5F: mov     r11, [rsp+78h]
 * 0000000140738B64: mov     [r11+634h], edi
 * 0000000140738B6B: and     dword ptr [r11+690h], 0FFFFFFFBh
 * 0000000140738B73: mov     r9, [rbp+1910h+var_1990]
 * 0000000140738B77: mov     r10d, dword ptr [rsp+1A10h+var_19A8]
 * 0000000140738B7C: jmp     short loc_140738B98
 * 0000000140738B7E: mov     ecx, 0C000009Ah
 * 0000000140738B83: jmp     loc_14073807F
 * 0000000140738B88: mov     r11, r12
 * 0000000140738B8B: mov     [rsp+78h], r12
 * 0000000140738B90: mov     [r12+554h], eax
 * 0000000140738B98: mov     eax, 1
 * 0000000140738B9D: lea     rdx, [r11+r15]
 * 0000000140738BA1: add     [r11+57Ch], eax
 * 0000000140738BA8: mov     [rbp+1910h+var_1270], rdx
 * 0000000140738BAF: xor     edi, edi
 * 0000000140738BB1: lea     ecx, [rax+2Fh]
 * 0000000140738BB4: mov     rax, rdx
 * 0000000140738BB7: lea     ebx, [rcx-2Ah]
 * 0000000140738BBA: lea     r15d, [rcx-2Fh]
 * 0000000140738BBE: mov     [rax], rdi
 * 0000000140738BC1: add     ecx, 0FFFFFFF8h
 * 0000000140738BC4: add     rax, 8
 * 0000000140738BC8: sub     rbx, r15
 * 0000000140738BCB: jnz     short loc_140738BBE
 * 0000000140738BCD: test    ecx, ecx
 * 0000000140738BCF: jz      short loc_140738BDC
 * 0000000140738BD1: mov     [rax], dil
 * 0000000140738BD4: add     rax, r15
 * 0000000140738BD7: add     ecx, 0FFFFFFFFh
 * 0000000140738BDA: jnz     short loc_140738BD1
 * 0000000140738BDC: mov     r14, [rsp+1A10h+var_19A0]
 * 0000000140738BE1: xor     eax, eax
 * 0000000140738BE3: mov     dword ptr [rdx], 1Eh
 * 0000000140738BE9: mov     [rdx+8], r14
 * 0000000140738BED: mov     [rdx+10h], eax
 * 0000000140738BF0: mov     rcx, [r11+588h]
 * 0000000140738BF7: mov     rax, rcx
 * 0000000140738BFA: jmp     short loc_140738BFE
 * 0000000140738BFC: xor     ecx, eax
 * 0000000140738BFE: shr     rax, 1Fh
 * 0000000140738C02: test    rax, rax
 * 0000000140738C05: jnz     short loc_140738BFC
 * 0000000140738C07: mov     r8, [rsp+1A10h+var_19C0]
 * 0000000140738C0C: lea     ebx, [r9-1]
 * 0000000140738C10: btr     ecx, 1Fh
 * 0000000140738C14: mov     [rsp+1A10h+var_19D0], r11
 * 0000000140738C19: mov     [rdx+14h], ecx
 * 0000000140738C1C: mov     r12, r11
 * 0000000140738C1F: mov     rax, [rbp+1910h+var_1270]
 * 0000000140738C26: xor     edx, edx
 * 0000000140738C28: mov     [rbp+1910h+var_EC0], rax
 * 0000000140738C2F: mov     [rax+18h], r8
 * 0000000140738C33: mov     ecx, [r13+50h]
 * 0000000140738C37: mov     rax, [rbp+1910h+var_EC0]
 * 0000000140738C3E: mov     [rax+20h], ecx
 * 0000000140738C41: mov     rax, [rbp+1910h+var_EC0]
 * 0000000140738C48: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 0000000140738C4C: mov     [rax+24h], ecx
 * 0000000140738C4F: mov     rax, [rbp+1910h+var_EC0]
 * 0000000140738C56: movzx   ecx, word ptr [rbp+1910h+Size]
 * 0000000140738C5A: mov     [rax+28h], cx
 * 0000000140738C5E: xor     eax, eax
 * 0000000140738C60: cmp     dword ptr [rsp+1A10h+Src], edx
 * 0000000140738C64: mov     rcx, [rbp+1910h+var_EC0]
 * 0000000140738C6B: setnz   al
 * 0000000140738C6E: add     rbx, 7
 * 0000000140738C72: and     rbx, 0FFFFFFFFFFFFFFF8h
 * 0000000140738C76: xor     ax, [rcx+2Ah]
 * 0000000140738C7A: and     ax, r15w
 * 0000000140738C7E: xor     [rcx+2Ah], ax
 * 0000000140738C82: mov     rcx, [rbp+1910h+var_EC0]
 * 0000000140738C89: movzx   eax, word ptr [rcx+28h]
 * 0000000140738C8D: lea     rdx, [rcx+30h]
 * 0000000140738C91: add     rbx, rdx
 * 0000000140738C94: mov     [rbp+1910h+var_1990], rdx
 * 0000000140738C98: test    r9d, r9d
 * 0000000140738C9B: mov     [rsp+1A10h+var_19A8], rbx
 * 0000000140738CA0: mov     r9, [rbp+1910h+var_1968]
 * 0000000140738CA4: lea     rcx, [rax+rax*2]
 * 0000000140738CA8: lea     rdi, [rbx+rcx*8]
 * 0000000140738CAC: mov     [rbp+1910h+var_1958], rdi
 * 0000000140738CB0: jz      short loc_140738CBC
 * 0000000140738CB2: lea     rax, [r14+0Ch]
 * 0000000140738CB6: mov     [rbp+1910h+var_1980], rax
 * 0000000140738CBA: jmp     short loc_140738CC0
 * 0000000140738CBC: mov     [rbp+1910h+var_1980], r9
 * 0000000140738CC0: xor     eax, eax
 * 0000000140738CC2: test    r10d, r10d
 * 0000000140738CC5: jz      short loc_140738CF7
 * 0000000140738CC7: mov     edx, r10d
 * 0000000140738CCA: lea     rax, [rbx+8]
 * 0000000140738CCE: xor     r10d, r10d
 * 0000000140738CD1: mov     r13d, 80000000h
 * 0000000140738CD7: mov     ecx, 2
 * 0000000140738CDC: mov     [rax-8], r10d
 * 0000000140738CE0: mov     [rax-4], r10d
 * 0000000140738CE4: mov     [rax], r13d
 * 0000000140738CE7: add     rax, 0Ch
 * 0000000140738CEB: sub     rcx, r15
 * 0000000140738CEE: jnz     short loc_140738CDC
 * 0000000140738CF0: sub     rdx, r15
 * 0000000140738CF3: jnz     short loc_140738CD7
 * 0000000140738CF5: xor     eax, eax
 * 0000000140738CF7: cmp     rbx, rdi
 * 0000000140738CFA: jz      loc_1407392F2
 * 0000000140738D00: mov     r12, [rbp+1910h+NtHeaders]
 * 0000000140738D04: mov     rsi, rbx
 * 0000000140738D07: mov     r10, r14
 * 0000000140738D0A: jmp     short loc_140738D12
 * 0000000140738D0C: xor     eax, eax
 * 0000000140738D0E: lea     r15d, [rax+1]
 * 0000000140738D12: mov     r13d, eax
 * 0000000140738D15: mov     eax, [r12+24h]
 * 0000000140738D1A: bt      eax, 19h
 * 0000000140738D1E: jb      loc_140738EFD
 * 0000000140738D24: mov     ecx, [r12]
 * 0000000140738D28: cmp     ecx, 54494E49h
 * 0000000140738D2E: jnz     short loc_140738D3F
 * 0000000140738D30: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140738D39: jz      loc_140738EFD
 * 0000000140738D3F: cmp     ecx, 45474150h
 * 0000000140738D45: jnz     short loc_140738D77
 * 0000000140738D47: movzx   eax, word ptr [r12+4]
 * 0000000140738D4D: mov     edx, 7777h
 * 0000000140738D52: cmp     ax, dx
 * 0000000140738D55: jz      loc_140738EFD
 * 0000000140738D5B: mov     edx, 7277h
 * 0000000140738D60: cmp     ax, dx
 * 0000000140738D63: jz      loc_140738EFD
 * 0000000140738D69: mov     edx, 7877h
 * 0000000140738D6E: cmp     ax, dx
 * 0000000140738D71: jz      loc_140738EFD
 * 0000000140738D77: cmp     ecx, 41525245h
 * 0000000140738D7D: jnz     short loc_140738D90
 * 0000000140738D7F: mov     eax, 4154h
 * 0000000140738D84: cmp     [r12+4], ax
 * 0000000140738D8A: jz      loc_140738EFD
 * 0000000140738D90: mov     rax, [r11+648h]
 * 0000000140738D97: mov     rdi, r12
 * 0000000140738D9A: mov     rbx, [r11+640h]
 * 0000000140738DA1: mov     r8d, 7
 * 0000000140738DA7: mov     [rbp+1910h+var_C10], rax
 * 0000000140738DAE: sub     rdi, rbx
 * 0000000140738DB1: mov     rax, [r11+650h]
 * 0000000140738DB8: or      r14d, 0FFFFFFFFh
 * 0000000140738DBC: mov     [rbp+1910h+var_C08], rax
 * 0000000140738DC3: mov     rax, [r11+658h]
 * 0000000140738DCA: mov     [rbp+1910h+var_C00], rax
 * 0000000140738DD1: mov     [rbp+1910h+var_C18], rbx
 * 0000000140738DD8: movzx   edx, byte ptr [rbx+rdi]
 * 0000000140738DDC: movzx   eax, byte ptr [rbx]
 * 0000000140738DDF: add     rbx, r15
 * 0000000140738DE2: cmp     rdx, rax
 * 0000000140738DE5: jnz     short loc_140738DF1
 * 0000000140738DE7: add     r8d, r14d
 * 0000000140738DEA: jnz     short loc_140738DD8
 * 0000000140738DEC: jmp     loc_140738E88
 * 0000000140738DF1: mov     rdi, [rbp+1910h+var_C10]
 * 0000000140738DF8: mov     ebx, 8
 * 0000000140738DFD: mov     r8, r12
 * 0000000140738E00: mov     rcx, [r8]
 * 0000000140738E03: add     r8, 8
 * 0000000140738E07: mov     rax, [rdi]
 * 0000000140738E0A: add     rdi, 8
 * 0000000140738E0E: cmp     rcx, rax
 * 0000000140738E11: jnz     short loc_140738E38
 * 0000000140738E13: add     ebx, 0FFFFFFF8h
 * 0000000140738E16: cmp     ebx, 8
 * 0000000140738E19: jnb     short loc_140738E00
 * 0000000140738E1B: test    ebx, ebx
 * 0000000140738E1D: jz      short loc_140738E88
 * 0000000140738E1F: movzx   edx, byte ptr [r8]
 * 0000000140738E23: add     r8, r15
 * 0000000140738E26: movzx   eax, byte ptr [rdi]
 * 0000000140738E29: add     rdi, r15
 * 0000000140738E2C: cmp     rdx, rax
 * 0000000140738E2F: jnz     short loc_140738E38
 * 0000000140738E31: add     ebx, r14d
 * 0000000140738E34: jnz     short loc_140738E1F
 * 0000000140738E36: jmp     short loc_140738E88
 * 0000000140738E38: mov     rbx, [rbp+1910h+var_C08]
 * 0000000140738E3F: mov     rdi, r12
 * 0000000140738E42: sub     rdi, rbx
 * 0000000140738E45: mov     r8d, 4
 * 0000000140738E4B: movzx   edx, byte ptr [rbx+rdi]
 * 0000000140738E4F: movzx   eax, byte ptr [rbx]
 * 0000000140738E52: add     rbx, r15
 * 0000000140738E55: cmp     rdx, rax
 * 0000000140738E58: jnz     short loc_140738E61
 * 0000000140738E5A: add     r8d, r14d
 * 0000000140738E5D: jnz     short loc_140738E4B
 * 0000000140738E5F: jmp     short loc_140738E88
 * 0000000140738E61: mov     rbx, [rbp+1910h+var_C00]
 * 0000000140738E68: mov     rdi, r12
 * 0000000140738E6B: sub     rdi, rbx
 * 0000000140738E6E: mov     r8d, 6
 * 0000000140738E74: movzx   edx, byte ptr [rbx+rdi]
 * 0000000140738E78: movzx   eax, byte ptr [rbx]
 * 0000000140738E7B: add     rbx, r15
 * 0000000140738E7E: cmp     rdx, rax
 * 0000000140738E81: jnz     short loc_140738E8B
 * 0000000140738E83: add     r8d, r14d
 * 0000000140738E86: jnz     short loc_140738E74
 * 0000000140738E88: mov     r13d, r15d
 * 0000000140738E8B: mov     r8, [rsp+1A10h+var_19C0]
 * 0000000140738E90: mov     eax, [r12+24h]
 * 0000000140738E95: mov     ecx, 80000000h
 * 0000000140738E9A: and     eax, ecx
 * 0000000140738E9C: xor     ecx, ecx
 * 0000000140738E9E: test    eax, eax
 * 0000000140738EA0: cmovnz  r13d, r15d
 * 0000000140738EA4: test    r13d, r13d
 * 0000000140738EA7: jz      short loc_140738ED0
 * 0000000140738EA9: cmp     dword ptr [r12], 54494E49h
 * 0000000140738EB1: jnz     short loc_140738ED0
 * 0000000140738EB3: cmp     dword ptr [r12+4], 4742444Bh
 * 0000000140738EBC: jnz     short loc_140738ED0
 * 0000000140738EBE: mov     eax, [r11+690h]
 * 0000000140738EC5: and     eax, 10000000h
 * 0000000140738ECA: mov     eax, ecx
 * 0000000140738ECC: cmovnz  r13d, eax
 * 0000000140738ED0: mov     ecx, [r12+8]
 * 0000000140738ED5: cmp     [r12+10h], ecx
 * 0000000140738EDA: mov     edx, [r12+0Ch]
 * 0000000140738EDF: cmova   ecx, [r12+10h]
 * 0000000140738EE5: add     ecx, edx
 * 0000000140738EE7: mov     dword ptr [rsp+1A10h+Src], edx
 * 0000000140738EEB: mov     dword ptr [rsp+1A10h+var_19B8], ecx
 * 0000000140738EEF: cmp     r10, r9
 * 0000000140738EF2: jz      short loc_140738F02
 * 0000000140738EF4: mov     r11d, [r10]
 * 0000000140738EF7: mov     r14d, [r10+4]
 * 0000000140738EFB: jmp     short loc_140738F0A
 * 0000000140738EFD: mov     r13d, r15d
 * 0000000140738F00: jmp     short loc_140738E90
 * 0000000140738F02: xor     eax, eax
 * 0000000140738F04: mov     r11d, eax
 * 0000000140738F07: mov     r14d, eax
 * 0000000140738F0A: mov     r15d, edx
 * 0000000140738F0D: cmp     r10, r9
 * 0000000140738F10: jz      loc_140739016
 * 0000000140738F16: cmp     r11d, edx
 * 0000000140738F19: jbe     loc_140739019
 * 0000000140738F1F: cmp     r14d, ecx
 * 0000000140738F22: ja      loc_140739016
 * 0000000140738F28: test    r13d, r13d
 * 0000000140738F2B: jnz     loc_140739016
 * 0000000140738F31: mov     [rsi], edx
 * 0000000140738F33: mov     ebx, r11d
 * 0000000140738F36: mov     [rsi+4], r11d
 * 0000000140738F3A: lea     rdx, [rbp+1910h+var_E10]
 * 0000000140738F41: mov     eax, [rsi]
 * 0000000140738F43: mov     r15d, r11d
 * 0000000140738F46: sub     ebx, eax
 * 0000000140738F48: mov     r10d, ebx
 * 0000000140738F4B: lea     rdi, [r8+rax]
 * 0000000140738F4F: add     r10, rdi
 * 0000000140738F52: lea     r8, [rbp+1910h+var_C58]
 * 0000000140738F59: xor     eax, eax
 * 0000000140738F5B: mov     r9d, eax
 * 0000000140738F5E: mov     rcx, [r8]
 * 0000000140738F61: mov     eax, [rdx]
 * 0000000140738F63: add     rax, rcx
 * 0000000140738F66: cmp     rdi, rax
 * 0000000140738F69: jnb     short loc_140738F74
 * 0000000140738F6B: cmp     r10, rcx
 * 0000000140738F6E: ja      loc_140739005
 * 0000000140738F74: mov     eax, 4
 * 0000000140738F79: inc     r9d
 * 0000000140738F7C: add     rdx, rax
 * 0000000140738F7F: add     r8, 8
 * 0000000140738F83: cmp     r9d, eax
 * 0000000140738F86: jb      short loc_140738F5E
 * 0000000140738F88: mov     r8, [rsp+78h]
 * 0000000140738F8D: mov     rax, rdi
 * 0000000140738F90: add     [r8+598h], ebx
 * 0000000140738F97: mov     ecx, [r8+584h]
 * 0000000140738F9E: mov     rdx, [r8+588h]
 * 0000000140738FA5: cmp     rdi, r10
 * 0000000140738FA8: jnb     short loc_140738FB6
 * 0000000140738FAA: prefetchnta byte ptr [rax]
 * 0000000140738FAD: add     rax, 40h ; '@'
 * 0000000140738FB1: cmp     rax, r10
 * 0000000140738FB4: jb      short loc_140738FAA
 * 0000000140738FB6: mov     r8d, 1
 * 0000000140738FBC: cmp     ebx, 8
 * 0000000140738FBF: jb      short loc_140738FD9
 * 0000000140738FC1: mov     eax, ebx
 * 0000000140738FC3: shr     rax, 3
 * 0000000140738FC7: xor     rdx, [rdi]
 * 0000000140738FCA: add     ebx, 0FFFFFFF8h
 * 0000000140738FCD: rol     rdx, cl
 * 0000000140738FD0: add     rdi, 8
 * 0000000140738FD4: sub     rax, r8
 * 0000000140738FD7: jnz     short loc_140738FC7
 * 0000000140738FD9: test    ebx, ebx
 * 0000000140738FDB: jz      short loc_140738FEE
 * 0000000140738FDD: movzx   eax, byte ptr [rdi]
 * 0000000140738FE0: add     rdi, r8
 * 0000000140738FE3: xor     rdx, rax
 * 0000000140738FE6: rol     rdx, cl
 * 0000000140738FE9: add     ebx, 0FFFFFFFFh
 * 0000000140738FEC: jnz     short loc_140738FDD
 * 0000000140738FEE: mov     rax, rdx
 * 0000000140738FF1: jmp     short loc_140738FF5
 * 0000000140738FF3: xor     edx, eax
 * 0000000140738FF5: shr     rax, 1Fh
 * 0000000140738FF9: test    rax, rax
 * 0000000140738FFC: jnz     short loc_140738FF3
 * 0000000140738FFE: btr     edx, 1Fh
 * 0000000140739002: mov     [rsi+8], edx
 * 0000000140739005: mov     r10, [rsp+1A10h+var_19A0]
 * 000000014073900A: mov     r9, [rbp+1910h+var_1968]
 * 000000014073900E: mov     edx, dword ptr [rsp+1A10h+Src]
 * 0000000140739012: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 0000000140739016: cmp     r11d, edx
 * 0000000140739019: jb      loc_14073918E
 * 000000014073901F: cmp     r14d, ecx
 * 0000000140739022: mov     r14, [rbp+1910h+var_1980]
 * 0000000140739026: ja      loc_140739192
 * 000000014073902C: cmp     r10, r9
 * 000000014073902F: jz      loc_140739192
 * 0000000140739035: mov     r11d, [r14+4]
 * 0000000140739039: cmp     r11d, ecx
 * 000000014073903C: ja      loc_140739192
 * 0000000140739042: mov     r14, [rsp+78h]
 * 0000000140739047: mov     r12, [rbp+1910h+var_1980]
 * 000000014073904B: mov     rsi, [rbp+1910h+var_1990]
 * 000000014073904F: cmp     r12, r9
 * 0000000140739052: jz      loc_140739178
 * 0000000140739058: test    r13d, r13d
 * 000000014073905B: jnz     loc_140739152
 * 0000000140739061: mov     eax, [r10+4]
 * 0000000140739065: lea     rdx, [rbp+1910h+var_E10]
 * 000000014073906C: mov     r15d, [r12]
 * 0000000140739070: lea     r8, [rbp+1910h+var_C58]
 * 0000000140739077: mov     edi, eax
 * 0000000140739079: mov     ebx, r15d
 * 000000014073907C: add     rdi, [rsp+1A10h+var_19C0]
 * 0000000140739081: sub     ebx, eax
 * 0000000140739083: mov     r10d, ebx
 * 0000000140739086: add     r10, rdi
 * 0000000140739089: xor     eax, eax
 * 000000014073908B: mov     r9d, eax
 * 000000014073908E: mov     rcx, [r8]
 * 0000000140739091: mov     eax, [rdx]
 * 0000000140739093: add     rax, rcx
 * 0000000140739096: cmp     rdi, rax
 * 0000000140739099: jnb     short loc_1407390A4
 * 000000014073909B: cmp     r10, rcx
 * 000000014073909E: ja      loc_140739145
 * 00000001407390A4: mov     eax, 4
 * 00000001407390A9: inc     r9d
 * 00000001407390AC: add     rdx, rax
 * 00000001407390AF: add     r8, 8
 * 00000001407390B3: cmp     r9d, eax
 * 00000001407390B6: jb      short loc_14073908E
 * 00000001407390B8: cmp     ebx, eax
 * 00000001407390BA: jb      loc_140739145
 * 00000001407390C0: add     [r14+598h], ebx
 * 00000001407390C7: mov     rax, rdi
 * 00000001407390CA: mov     ecx, [r14+584h]
 * 00000001407390D1: mov     rdx, [r14+588h]
 * 00000001407390D8: cmp     rdi, r10
 * 00000001407390DB: jnb     short loc_1407390E9
 * 00000001407390DD: prefetchnta byte ptr [rax]
 * 00000001407390E0: add     rax, 40h ; '@'
 * 00000001407390E4: cmp     rax, r10
 * 00000001407390E7: jb      short loc_1407390DD
 * 00000001407390E9: mov     r8d, 1
 * 00000001407390EF: cmp     ebx, 8
 * 00000001407390F2: jb      short loc_14073910C
 * 00000001407390F4: mov     eax, ebx
 * 00000001407390F6: shr     rax, 3
 * 00000001407390FA: xor     rdx, [rdi]
 * 00000001407390FD: add     ebx, 0FFFFFFF8h
 * 0000000140739100: rol     rdx, cl
 * 0000000140739103: add     rdi, 8
 * 0000000140739107: sub     rax, r8
 * 000000014073910A: jnz     short loc_1407390FA
 * 000000014073910C: test    ebx, ebx
 * 000000014073910E: jz      short loc_140739121
 * 0000000140739110: movzx   eax, byte ptr [rdi]
 * 0000000140739113: add     rdi, r8
 * 0000000140739116: xor     rdx, rax
 * 0000000140739119: rol     rdx, cl
 * 000000014073911C: add     ebx, 0FFFFFFFFh
 * 000000014073911F: jnz     short loc_140739110
 * 0000000140739121: mov     rax, rdx
 * 0000000140739124: jmp     short loc_140739128
 * 0000000140739126: xor     dl, al
 * 0000000140739128: shr     rax, 7
 * 000000014073912C: test    rax, rax
 * 000000014073912F: jnz     short loc_140739126
 * 0000000140739131: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 0000000140739135: and     dl, 7Fh
 * 0000000140739138: mov     r9, [rbp+1910h+var_1968]
 * 000000014073913C: mov     r10, [rsp+1A10h+var_19A0]
 * 0000000140739141: mov     [rsi], dl
 * 0000000140739143: jmp     short loc_140739155
 * 0000000140739145: mov     r10, [rsp+1A10h+var_19A0]
 * 000000014073914A: mov     r9, [rbp+1910h+var_1968]
 * 000000014073914E: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 0000000140739152: mov     byte ptr [rsi], 80h
 * 0000000140739155: add     r10, 0Ch
 * 0000000140739159: inc     rsi
 * 000000014073915C: add     r12, 0Ch
 * 0000000140739160: mov     [rsp+1A10h+var_19A0], r10
 * 0000000140739165: cmp     r12, r9
 * 0000000140739168: jz      short loc_14073916F
 * 000000014073916A: mov     r11d, [r12+4]
 * 000000014073916F: cmp     r11d, ecx
 * 0000000140739172: jbe     loc_14073904F
 * 0000000140739178: mov     [rbp+1910h+var_1990], rsi
 * 000000014073917C: mov     r14, r12
 * 000000014073917F: mov     rsi, [rsp+1A10h+var_19A8]
 * 0000000140739184: mov     [rbp+1910h+var_1980], r12
 * 0000000140739188: mov     r12, [rbp+1910h+NtHeaders]
 * 000000014073918C: jmp     short loc_140739192
 * 000000014073918E: mov     r14, [rbp+1910h+var_1980]
 * 0000000140739192: test    r13d, r13d
 * 0000000140739195: jnz     loc_14073928C
 * 000000014073919B: cmp     r15d, ecx
 * 000000014073919E: jz      loc_14073928C
 * 00000001407391A4: mov     [rsi+0Ch], r15d
 * 00000001407391A8: lea     rdx, [rbp+1910h+var_E10]
 * 00000001407391AF: mov     [rsi+10h], ecx
 * 00000001407391B2: lea     r8, [rbp+1910h+var_C58]
 * 00000001407391B9: mov     eax, [rsi+0Ch]
 * 00000001407391BC: lea     r15d, [r13+1]
 * 00000001407391C0: mov     edi, eax
 * 00000001407391C2: mov     ebx, ecx
 * 00000001407391C4: add     rdi, [rsp+1A10h+var_19C0]
 * 00000001407391C9: sub     ebx, eax
 * 00000001407391CB: mov     r10d, ebx
 * 00000001407391CE: add     r10, rdi
 * 00000001407391D1: xor     eax, eax
 * 00000001407391D3: mov     r9d, eax
 * 00000001407391D6: mov     rcx, [r8]
 * 00000001407391D9: mov     eax, [rdx]
 * 00000001407391DB: add     rax, rcx
 * 00000001407391DE: cmp     rdi, rax
 * 00000001407391E1: jnb     short loc_1407391EC
 * 00000001407391E3: cmp     r10, rcx
 * 00000001407391E6: ja      loc_140739283
 * 00000001407391EC: mov     eax, 4
 * 00000001407391F1: add     r9d, r15d
 * 00000001407391F4: add     rdx, rax
 * 00000001407391F7: add     r8, 8
 * 00000001407391FB: cmp     r9d, eax
 * 00000001407391FE: jb      short loc_1407391D6
 * 0000000140739200: mov     r11, [rsp+78h]
 * 0000000140739205: mov     rax, rdi
 * 0000000140739208: add     [r11+598h], ebx
 * 000000014073920F: mov     ecx, [r11+584h]
 * 0000000140739216: mov     rdx, [r11+588h]
 * 000000014073921D: cmp     rdi, r10
 * 0000000140739220: jnb     short loc_14073922E
 * 0000000140739222: prefetchnta byte ptr [rax]
 * 0000000140739225: add     rax, 40h ; '@'
 * 0000000140739229: cmp     rax, r10
 * 000000014073922C: jb      short loc_140739222
 * 000000014073922E: cmp     ebx, 8
 * 0000000140739231: jb      short loc_14073924C
 * 0000000140739233: mov     r8d, ebx
 * 0000000140739236: shr     r8, 3
 * 000000014073923A: xor     rdx, [rdi]
 * 000000014073923D: add     ebx, 0FFFFFFF8h
 * 0000000140739240: rol     rdx, cl
 * 0000000140739243: add     rdi, 8
 * 0000000140739247: sub     r8, r15
 * 000000014073924A: jnz     short loc_14073923A
 * 000000014073924C: test    ebx, ebx
 * 000000014073924E: jz      short loc_140739261
 * 0000000140739250: movzx   eax, byte ptr [rdi]
 * 0000000140739253: add     rdi, r15
 * 0000000140739256: xor     rdx, rax
 * 0000000140739259: rol     rdx, cl
 * 000000014073925C: add     ebx, 0FFFFFFFFh
 * 000000014073925F: jnz     short loc_140739250
 * 0000000140739261: mov     rax, rdx
 * 0000000140739264: jmp     short loc_140739268
 * 0000000140739266: xor     edx, eax
 * 0000000140739268: shr     rax, 1Fh
 * 000000014073926C: test    rax, rax
 * 000000014073926F: jnz     short loc_140739266
 * 0000000140739271: mov     r9, [rbp+1910h+var_1968]
 * 0000000140739275: btr     edx, 1Fh
 * 0000000140739279: mov     r10, [rsp+1A10h+var_19A0]
 * 000000014073927E: mov     [rsi+14h], edx
 * 0000000140739281: jmp     short loc_140739291
 * 0000000140739283: mov     r9, [rbp+1910h+var_1968]
 * 0000000140739287: mov     r10, [rsp+1A10h+var_19A0]
 * 000000014073928C: mov     r11, [rsp+78h]
 * 0000000140739291: cmp     r10, r9
 * 0000000140739294: jz      short loc_1407392CD
 * 0000000140739296: mov     eax, [r10]
 * 0000000140739299: mov     ecx, [r10+4]
 * 000000014073929D: cmp     eax, dword ptr [rsp+1A10h+Src]
 * 00000001407392A1: jb      short loc_1407392CD
 * 00000001407392A3: cmp     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 00000001407392A7: ja      short loc_1407392CD
 * 00000001407392A9: cmp     r14, r9
 * 00000001407392AC: jz      short loc_1407392C4
 * 00000001407392AE: mov     rax, [rbp+1910h+var_1990]
 * 00000001407392B2: mov     byte ptr [rax], 80h
 * 00000001407392B5: inc     rax
 * 00000001407392B8: add     r14, 0Ch
 * 00000001407392BC: mov     [rbp+1910h+var_1990], rax
 * 00000001407392C0: mov     [rbp+1910h+var_1980], r14
 * 00000001407392C4: add     r10, 0Ch
 * 00000001407392C8: mov     [rsp+1A10h+var_19A0], r10
 * 00000001407392CD: mov     r8, [rsp+1A10h+var_19C0]
 * 00000001407392D2: add     rsi, 18h
 * 00000001407392D6: add     r12, 28h ; '('
 * 00000001407392DA: mov     [rsp+1A10h+var_19A8], rsi
 * 00000001407392DF: mov     [rbp+1910h+NtHeaders], r12
 * 00000001407392E3: cmp     rsi, [rbp+1910h+var_1958]
 * 00000001407392E7: jnz     loc_140738D0C
 * 00000001407392ED: mov     r12, [rsp+1A10h+var_19D0]
 * 00000001407392F2: xor     eax, eax
 * 00000001407392F4: mov     [rbp+1910h+var_16D8], r12
 * 00000001407392FB: mov     ecx, eax
 * 00000001407392FD: mov     r14, r12
 * 0000000140739300: jmp     loc_14073807F
 * 0000000140739305: mov     ecx, 0C000009Ah
 * 000000014073930A: jmp     short loc_140739311
 * 000000014073930C: mov     ecx, 0C000007Bh
 * 0000000140739311: xor     eax, eax
 * 0000000140739313: jmp     short loc_140739319
 * 0000000140739315: xor     eax, eax
 * 0000000140739317: mov     ecx, eax
 * 0000000140739319: test    ecx, ecx
 * 000000014073931B: js      loc_140731C01
 * 0000000140739321: rdtsc
 * 0000000140739323: shl     rdx, 20h
 * 0000000140739327: or      rax, rdx
 * 000000014073932A: mov     rcx, rax
 * 000000014073932D: mov     rdx, rax
 * 0000000140739330: ror     rcx, 3
 * 0000000140739334: mov     rax, 7010008004002001h
 * 000000014073933E: xor     rdx, rcx
 * 0000000140739341: mul     rdx
 * 0000000140739344: mov     rbx, rax
 * 0000000140739347: mov     [rbp+1910h+var_1260], rdx
 * 000000014073934E: xor     rbx, rdx
 * 0000000140739351: mov     rax, 47AE147AE147AE15h
 * 000000014073935B: mul     rbx
 * 000000014073935E: mov     rcx, rbx
 * 0000000140739361: sub     rcx, rdx
 * 0000000140739364: shr     rcx, 1
 * 0000000140739367: add     rcx, rdx
 * 000000014073936A: shr     rcx, 6
 * 000000014073936E: imul    rax, rcx, 64h ; 'd'
 * 0000000140739372: sub     rbx, rax
 * 0000000140739375: cmp     rbx, 2
 * 0000000140739379: jnb     short loc_140739384
 * 000000014073937B: bts     dword ptr [r14+690h], 11h
 * 0000000140739384: mov     rax, [r14+478h]
 * 000000014073938B: mov     ebx, [r14+554h]
 * 0000000140739392: mov     r8d, [r14+634h]
 * 0000000140739399: mov     [rbp+1910h+var_1988], rax
 * 000000014073939D: mov     r12d, [rax+10h]
 * 00000001407393A1: mov     r15, [rax]
 * 00000001407393A4: xor     eax, eax
 * 00000001407393A6: shl     r12d, 2
 * 00000001407393AA: mov     r13d, eax
 * 00000001407393AD: cmp     dword ptr [r14+5A8h], 7
 * 00000001407393B5: mov     dword ptr [rsp+1A10h+var_19B8], ebx
 * 00000001407393B9: lea     r10d, [rax+20h]
 * 00000001407393BD: lea     eax, [rbx+30h]
 * 00000001407393C0: cmovz   r13d, r10d
 * 00000001407393C4: cmp     eax, [r14+714h]
 * 00000001407393CB: jbe     loc_1407394B3
 * 00000001407393D1: mov     edx, eax
 * 00000001407393D3: mov     rcx, r14
 * 00000001407393D6: call    sub_140236718
 * 00000001407393DB: mov     rdi, rax
 * 00000001407393DE: xor     eax, eax
 * 00000001407393E0: test    rdi, rdi
 * 00000001407393E3: jz      loc_140731C01
 * 00000001407393E9: mov     edx, [r14+690h]
 * 00000001407393F0: test    dl, 4
 * 00000001407393F3: jnz     loc_1407394A4
 * 00000001407393F9: mov     eax, [r14+554h]
 * 0000000140739400: and     edx, 20000000h
 * 0000000140739406: mov     rbx, [r14+538h]
 * 000000014073940D: neg     edx
 * 000000014073940F: mov     r9d, 1
 * 0000000140739415: sbb     edx, edx
 * 0000000140739417: and     edx, [r14+634h]
 * 000000014073941E: cmp     eax, 8
 * 0000000140739421: jb      short loc_14073943D
 * 0000000140739423: mov     ecx, eax
 * 0000000140739425: shr     rcx, 3
 * 0000000140739429: xor     r8d, r8d
 * 000000014073942C: mov     [r14], r8
 * 000000014073942F: add     eax, 0FFFFFFF8h
 * 0000000140739432: add     r14, 8
 * 0000000140739436: sub     rcx, r9
 * 0000000140739439: jnz     short loc_14073942C
 * 000000014073943B: jmp     short loc_140739440
 * 000000014073943D: xor     r8d, r8d
 * 0000000140739440: test    eax, eax
 * 0000000140739442: jz      short loc_14073944F
 * 0000000140739444: mov     [r14], r8b
 * 0000000140739447: add     r14, r9
 * 000000014073944A: add     eax, 0FFFFFFFFh
 * 000000014073944D: jnz     short loc_140739444
 * 000000014073944F: mov     r14d, [rdi+634h]
 * 0000000140739456: mov     [rdi+634h], edx
 * 000000014073945C: cmp     edx, 3
 * 000000014073945F: jz      short loc_140739490
 * 0000000140739461: mov     eax, [rdi+690h]
 * 0000000140739467: mov     ecx, r8d
 * 000000014073946A: and     eax, 10000000h
 * 000000014073946F: cmovz   ecx, edx
 * 0000000140739472: test    ecx, ecx
 * 0000000140739474: jz      short loc_140739485
 * 0000000140739476: lea     rcx, [rbx-8]
 * 000000014073947A: mov     rdx, [rcx]
 * 000000014073947D: call    qword ptr [rdi+1F8h]
 * 0000000140739483: jmp     short loc_140739499
 * 0000000140739485: mov     rcx, rbx
 * 0000000140739488: call    qword ptr [rdi+0F8h]
 * 000000014073948E: jmp     short loc_140739499
 * 0000000140739490: mov     rcx, rbx
 * 0000000140739493: call    qword ptr [rdi+320h]
 * 0000000140739499: mov     ebx, dword ptr [rsp+1A10h+var_19B8]
 * 000000014073949D: mov     [rdi+634h], r14d
 * 00000001407394A4: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 00000001407394AB: mov     r10d, 20h ; ' '
 * 00000001407394B1: jmp     short loc_1407394BD
 * 00000001407394B3: mov     rdi, r14
 * 00000001407394B6: mov     [r14+554h], eax
 * 00000001407394BD: mov     r9d, 1
 * 00000001407394C3: mov     r14d, ebx
 * 00000001407394C6: add     [rdi+57Ch], r9d
 * 00000001407394CD: add     r14, rdi
 * 00000001407394D0: mov     [rbp+1910h+var_FB0], r14
 * 00000001407394D7: mov     rax, r14
 * 00000001407394DA: xor     ebx, ebx
 * 00000001407394DC: lea     ecx, [r9+2Fh]
 * 00000001407394E0: lea     edx, [rcx-2Ah]
 * 00000001407394E3: mov     [rax], rbx
 * 00000001407394E6: add     ecx, 0FFFFFFF8h
 * 00000001407394E9: add     rax, 8
 * 00000001407394ED: sub     rdx, r9
 * 00000001407394F0: jnz     short loc_1407394E3
 * 00000001407394F2: test    ecx, ecx
 * 00000001407394F4: jz      short loc_140739500
 * 00000001407394F6: mov     [rax], bl
 * 00000001407394F8: add     rax, r9
 * 00000001407394FB: add     ecx, 0FFFFFFFFh
 * 00000001407394FE: jnz     short loc_1407394F6
 * 0000000140739500: mov     [r14], r13d
 * 0000000140739503: mov     [r14+8], r15
 * 0000000140739507: cmp     r13d, r10d
 * 000000014073950A: jnz     short loc_14073952D
 * 000000014073950C: test    r12d, r12d
 * 000000014073950F: jz      short loc_14073952D
 * 0000000140739511: lea     r9, [r14+18h]
 * 0000000140739515: mov     r8d, r12d
 * 0000000140739518: mov     rdx, r15
 * 000000014073951B: mov     rcx, rdi
 * 000000014073951E: call    sub_14014F138
 * 0000000140739523: mov     r9d, 1
 * 0000000140739529: lea     r10d, [r9+1Fh]
 * 000000014073952D: mov     [r14+10h], r12d
 * 0000000140739531: mov     rax, r15
 * 0000000140739534: add     [rdi+598h], r12d
 * 000000014073953B: mov     r8d, [rdi+584h]
 * 0000000140739542: mov     rdx, [rdi+588h]
 * 0000000140739549: mov     ecx, r12d
 * 000000014073954C: add     rcx, r15
 * 000000014073954F: cmp     r15, rcx
 * 0000000140739552: jnb     short loc_140739560
 * 0000000140739554: prefetchnta byte ptr [rax]
 * 0000000140739557: add     rax, 40h ; '@'
 * 000000014073955B: cmp     rax, rcx
 * 000000014073955E: jb      short loc_140739554
 * 0000000140739560: mov     ebx, r12d
 * 0000000140739563: cmp     r12d, 8
 * 0000000140739567: jb      short loc_140739585
 * 0000000140739569: mov     eax, r12d
 * 000000014073956C: shr     rax, 3
 * 0000000140739570: xor     rdx, [r15]
 * 0000000140739573: mov     ecx, r8d
 * 0000000140739576: rol     rdx, cl
 * 0000000140739579: add     r15, 8
 * 000000014073957D: add     ebx, 0FFFFFFF8h
 * 0000000140739580: sub     rax, r9
 * 0000000140739583: jnz     short loc_140739570
 * 0000000140739585: test    ebx, ebx
 * 0000000140739587: jz      short loc_14073959E
 * 0000000140739589: movzx   eax, byte ptr [r15]
 * 000000014073958D: mov     ecx, r8d
 * 0000000140739590: xor     rdx, rax
 * 0000000140739593: add     r15, r9
 * 0000000140739596: rol     rdx, cl
 * 0000000140739599: add     ebx, 0FFFFFFFFh
 * 000000014073959C: jnz     short loc_140739589
 * 000000014073959E: mov     rax, rdx
 * 00000001407395A1: jmp     short loc_1407395A5
 * 00000001407395A3: xor     edx, eax
 * 00000001407395A5: shr     rax, 1Fh
 * 00000001407395A9: test    rax, rax
 * 00000001407395AC: jnz     short loc_1407395A3
 * 00000001407395AE: btr     edx, 1Fh
 * 00000001407395B2: mov     [rbp+1910h+var_16D8], rdi
 * 00000001407395B9: mov     [r14+14h], edx
 * 00000001407395BD: lea     rax, KeServiceDescriptorTable
 * 00000001407395C4: add     [rdi+598h], r12d
 * 00000001407395CB: mov     r15d, 3
 * 00000001407395D1: mov     r14d, [rdi+554h]
 * 00000001407395D8: mov     r8d, [rdi+634h]
 * 00000001407395DF: mov     [rbp+1910h+var_D10], rax
 * 00000001407395E6: lea     rax, xmmword_1403827A0
 * 00000001407395ED: mov     [rbp+1910h+var_D08], rax
 * 00000001407395F4: lea     rax, KeServiceDescriptorTableShadow
 * 00000001407395FB: mov     [rbp+1910h+var_D00], rax
 * 0000000140739602: xor     eax, eax
 * 0000000140739604: cmp     dword ptr [rdi+5A8h], 7
 * 000000014073960B: mov     [rbp+1910h+var_E40], r10d
 * 0000000140739612: cmovz   eax, r10d
 * 0000000140739616: mov     [rbp+1910h+var_E3C], r10d
 * 000000014073961D: mov     dword ptr [rsp+1A10h+var_19A8], eax
 * 0000000140739621: lea     eax, [r14+90h]
 * 0000000140739628: mov     [rbp+1910h+var_E38], r10d
 * 000000014073962F: mov     dword ptr [rsp+1A10h+var_19B8], r15d
 * 0000000140739634: cmp     eax, [rdi+714h]
 * 000000014073963A: jbe     loc_140739717
 * 0000000140739640: mov     edx, eax
 * 0000000140739642: mov     rcx, rdi
 * 0000000140739645: call    sub_140236718
 * 000000014073964A: mov     rbx, rax
 * 000000014073964D: xor     eax, eax
 * 000000014073964F: test    rbx, rbx
 * 0000000140739652: jz      loc_140731C01
 * 0000000140739658: mov     edx, [rdi+690h]
 * 000000014073965E: test    dl, 4
 * 0000000140739661: jnz     loc_140739708
 * 0000000140739667: mov     eax, [rdi+554h]
 * 000000014073966D: lea     r10d, [r15-2]
 * 0000000140739671: mov     r9, [rdi+538h]
 * 0000000140739678: and     edx, 20000000h
 * 000000014073967E: neg     edx
 * 0000000140739680: sbb     r8d, r8d
 * 0000000140739683: and     r8d, [rdi+634h]
 * 000000014073968A: cmp     eax, 8
 * 000000014073968D: jb      short loc_1407396A8
 * 000000014073968F: mov     ecx, eax
 * 0000000140739691: shr     rcx, 3
 * 0000000140739695: xor     edx, edx
 * 0000000140739697: mov     [rdi], rdx
 * 000000014073969A: add     eax, 0FFFFFFF8h
 * 000000014073969D: add     rdi, 8
 * 00000001407396A1: sub     rcx, r10
 * 00000001407396A4: jnz     short loc_140739697
 * 00000001407396A6: jmp     short loc_1407396AA
 * 00000001407396A8: xor     edx, edx
 * 00000001407396AA: test    eax, eax
 * 00000001407396AC: jz      short loc_1407396B8
 * 00000001407396AE: mov     [rdi], dl
 * 00000001407396B0: add     rdi, r10
 * 00000001407396B3: add     eax, 0FFFFFFFFh
 * 00000001407396B6: jnz     short loc_1407396AE
 * 00000001407396B8: mov     edi, [rbx+634h]
 * 00000001407396BE: mov     [rbx+634h], r8d
 * 00000001407396C5: cmp     r8d, r15d
 * 00000001407396C8: jz      short loc_1407396F9
 * 00000001407396CA: mov     eax, [rbx+690h]
 * 00000001407396D0: mov     ecx, edx
 * 00000001407396D2: and     eax, 10000000h
 * 00000001407396D7: cmovz   ecx, r8d
 * 00000001407396DB: test    ecx, ecx
 * 00000001407396DD: jz      short loc_1407396EE
 * 00000001407396DF: lea     rcx, [r9-8]
 * 00000001407396E3: mov     rdx, [rcx]
 * 00000001407396E6: call    qword ptr [rbx+1F8h]
 * 00000001407396EC: jmp     short loc_140739702
 * 00000001407396EE: mov     rcx, r9
 * 00000001407396F1: call    qword ptr [rbx+0F8h]
 * 00000001407396F7: jmp     short loc_140739702
 * 00000001407396F9: mov     rcx, r9
 * 00000001407396FC: call    qword ptr [rbx+320h]
 * 0000000140739702: mov     [rbx+634h], edi
 * 0000000140739708: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 000000014073970F: mov     r10d, 20h ; ' '
 * 0000000140739715: jmp     short loc_140739720
 * 0000000140739717: mov     rbx, rdi
 * 000000014073971A: mov     [rdi+554h], eax
 * 0000000140739720: add     [rbx+57Ch], r15d
 * 0000000140739727: lea     rdi, [rbx+r14]
 * 000000014073972B: mov     esi, dword ptr [rsp+1A10h+var_19A8]
 * 000000014073972F: lea     r12, [rbp+1910h+var_D10]
 * 0000000140739736: xor     r8d, r8d
 * 0000000140739739: mov     [rbp+1910h+var_1250], rdi
 * 0000000140739740: mov     [rbp+1910h+var_F30], rdi
 * 0000000140739747: lea     r13, [rbp+1910h+var_E40]
 * 000000014073974E: mov     r11, r15
 * 0000000140739751: mov     [rsp+1A10h+var_19B0], r15
 * 0000000140739756: lea     r9d, [r8+1]
 * 000000014073975A: mov     r15d, [r13+0]
 * 000000014073975E: mov     ecx, 30h ; '0'
 * 0000000140739763: mov     r14, [r12]
 * 0000000140739767: mov     rax, rdi
 * 000000014073976A: lea     edx, [rcx-2Ah]
 * 000000014073976D: mov     [rax], r8
 * 0000000140739770: add     ecx, 0FFFFFFF8h
 * 0000000140739773: add     rax, 8
 * 0000000140739777: sub     rdx, r9
 * 000000014073977A: jnz     short loc_14073976D
 * 000000014073977C: test    ecx, ecx
 * 000000014073977E: jz      short loc_14073978B
 * 0000000140739780: mov     [rax], r8b
 * 0000000140739783: add     rax, r9
 * 0000000140739786: add     ecx, 0FFFFFFFFh
 * 0000000140739789: jnz     short loc_140739780
 * 000000014073978B: mov     [rdi], esi
 * 000000014073978D: mov     [rdi+8], r14
 * 0000000140739791: cmp     esi, r10d
 * 0000000140739794: jnz     short loc_1407397B2
 * 0000000140739796: test    r15d, r15d
 * 0000000140739799: jz      short loc_1407397B2
 * 000000014073979B: lea     r9, [rdi+18h]
 * 000000014073979F: mov     r8d, r15d
 * 00000001407397A2: mov     rdx, r14
 * 00000001407397A5: mov     rcx, rbx
 * 00000001407397A8: call    sub_14014F138
 * 00000001407397AD: mov     r11, [rsp+1A10h+var_19B0]
 * 00000001407397B2: mov     [rdi+10h], r15d
 * 00000001407397B6: lea     rcx, [r14+r15]
 * 00000001407397BA: add     [rbx+598h], r15d
 * 00000001407397C1: mov     rax, r14
 * 00000001407397C4: mov     r10d, [rbx+584h]
 * 00000001407397CB: mov     rdx, [rbx+588h]
 * 00000001407397D2: cmp     r14, rcx
 * 00000001407397D5: jnb     short loc_1407397E3
 * 00000001407397D7: prefetchnta byte ptr [rax]
 * 00000001407397DA: add     rax, 40h ; '@'
 * 00000001407397DE: cmp     rax, rcx
 * 00000001407397E1: jb      short loc_1407397D7
 * 00000001407397E3: mov     r8d, r15d
 * 00000001407397E6: cmp     r15d, 8
 * 00000001407397EA: jb      short loc_140739812
 * 00000001407397EC: mov     r9, r15
 * 00000001407397EF: mov     esi, 1
 * 00000001407397F4: shr     r9, 3
 * 00000001407397F8: xor     rdx, [r14]
 * 00000001407397FB: mov     ecx, r10d
 * 00000001407397FE: rol     rdx, cl
 * 0000000140739801: add     r14, 8
 * 0000000140739805: add     r8d, 0FFFFFFF8h
 * 0000000140739809: sub     r9, rsi
 * 000000014073980C: jnz     short loc_1407397F8
 * 000000014073980E: mov     esi, dword ptr [rsp+1A10h+var_19A8]
 * 0000000140739812: mov     r9d, 1
 * 0000000140739818: test    r8d, r8d
 * 000000014073981B: jz      short loc_140739833
 * 000000014073981D: movzx   eax, byte ptr [r14]
 * 0000000140739821: mov     ecx, r10d
 * 0000000140739824: xor     rdx, rax
 * 0000000140739827: add     r14, r9
 * 000000014073982A: rol     rdx, cl
 * 000000014073982D: add     r8d, 0FFFFFFFFh
 * 0000000140739831: jnz     short loc_14073981D
 * 0000000140739833: mov     rax, rdx
 * 0000000140739836: shr     rax, 1Fh
 * 000000014073983A: xor     r8d, r8d
 * 000000014073983D: jmp     short loc_140739845
 * 000000014073983F: xor     edx, eax
 * 0000000140739841: shr     rax, 1Fh
 * 0000000140739845: test    rax, rax
 * 0000000140739848: jnz     short loc_14073983F
 * 000000014073984A: btr     edx, 1Fh
 * 000000014073984E: lea     r10d, [rax+20h]
 * 0000000140739852: mov     [rdi+14h], edx
 * 0000000140739855: add     r12, 8
 * 0000000140739859: add     [rbx+598h], r15d
 * 0000000140739860: lea     r15d, [rax+4]
 * 0000000140739864: mov     rdi, [rbp+1910h+var_1250]
 * 000000014073986B: add     r13, r15
 * 000000014073986E: add     rdi, 30h ; '0'
 * 0000000140739872: sub     r11, r9
 * 0000000140739875: mov     [rbp+1910h+var_1250], rdi
 * 000000014073987C: mov     [rsp+1A10h+var_19B0], r11
 * 0000000140739881: jnz     loc_14073975A
 * 0000000140739887: mov     eax, r10d
 * 000000014073988A: lea     r12d, [r15-3]
 * 000000014073988E: cmp     esi, eax
 * 0000000140739890: jnz     short loc_1407398B8
 * 0000000140739892: mov     rax, [rbp+1910h+var_F30]
 * 0000000140739899: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 000000014073989D: or      [rax+28h], r12d
 * 00000001407398A1: mov     rax, [rbp+1910h+var_F30]
 * 00000001407398A8: add     rax, 30h ; '0'
 * 00000001407398AC: mov     [rbp+1910h+var_F30], rax
 * 00000001407398B3: add     ecx, 0FFFFFFFFh
 * 00000001407398B6: jnz     short loc_14073989D
 * 00000001407398B8: mov     r14, [rbp+1910h+var_1988]
 * 00000001407398BC: xor     eax, eax
 * 00000001407398BE: test    dword ptr [rbx+690h], 40000000h
 * 00000001407398C8: mov     [rbp+1910h+var_16D8], rbx
 * 00000001407398CF: mov     r13, [r14]
 * 00000001407398D2: jnz     loc_140739BAC
 * 00000001407398D8: mov     edi, eax
 * 00000001407398DA: cmp     [r14+10h], eax
 * 00000001407398DE: jbe     loc_140739BAC
 * 00000001407398E4: mov     esi, eax
 * 00000001407398E6: mov     eax, edi
 * 00000001407398E8: lea     rdx, [rbp+1910h+var_1240]
 * 00000001407398EF: xor     r8d, r8d
 * 00000001407398F2: movsxd  rcx, dword ptr [r13+rax*4+0]
 * 00000001407398F7: sar     rcx, 4
 * 00000001407398FB: add     rcx, r13
 * 00000001407398FE: call    qword ptr [rbx+228h]
 * 0000000140739904: test    rax, rax
 * 0000000140739907: jnz     short loc_14073990C
 * 0000000140739909: add     esi, r12d
 * 000000014073990C: add     edi, r12d
 * 000000014073990F: cmp     edi, [r14+10h]
 * 0000000140739913: jb      short loc_1407398E6
 * 0000000140739915: xor     eax, eax
 * 0000000140739917: mov     dword ptr [rsp+1A10h+Src], esi
 * 000000014073991B: test    esi, esi
 * 000000014073991D: jz      loc_140739BAC
 * 0000000140739923: mov     r14d, [rbx+554h]
 * 000000014073992A: mov     ecx, esi
 * 000000014073992C: mov     r8d, [rbx+634h]
 * 0000000140739933: mov     r9d, esi
 * 0000000140739936: shl     ecx, 4
 * 0000000140739939: add     ecx, 30h ; '0'
 * 000000014073993C: add     ecx, r14d
 * 000000014073993F: cmp     ecx, [rbx+714h]
 * 0000000140739945: jbe     loc_140739A1E
 * 000000014073994B: mov     edx, ecx
 * 000000014073994D: mov     rcx, rbx
 * 0000000140739950: call    sub_140236718
 * 0000000140739955: mov     rdi, rax
 * 0000000140739958: xor     eax, eax
 * 000000014073995A: test    rdi, rdi
 * 000000014073995D: jz      loc_140731C01
 * 0000000140739963: mov     edx, [rbx+690h]
 * 0000000140739969: test    r15b, dl
 * 000000014073996C: jnz     loc_140739A10
 * 0000000140739972: mov     eax, [rbx+554h]
 * 0000000140739978: and     edx, 20000000h
 * 000000014073997E: mov     r9, [rbx+538h]
 * 0000000140739985: neg     edx
 * 0000000140739987: sbb     r8d, r8d
 * 000000014073998A: and     r8d, [rbx+634h]
 * 0000000140739991: cmp     eax, 8
 * 0000000140739994: jb      short loc_1407399AF
 * 0000000140739996: mov     ecx, eax
 * 0000000140739998: shr     rcx, 3
 * 000000014073999C: xor     edx, edx
 * 000000014073999E: mov     [rbx], rdx
 * 00000001407399A1: add     eax, 0FFFFFFF8h
 * 00000001407399A4: add     rbx, 8
 * 00000001407399A8: sub     rcx, r12
 * 00000001407399AB: jnz     short loc_14073999E
 * 00000001407399AD: jmp     short loc_1407399B1
 * 00000001407399AF: xor     edx, edx
 * 00000001407399B1: test    eax, eax
 * 00000001407399B3: jz      short loc_1407399BF
 * 00000001407399B5: mov     [rbx], dl
 * 00000001407399B7: add     rbx, r12
 * 00000001407399BA: add     eax, 0FFFFFFFFh
 * 00000001407399BD: jnz     short loc_1407399B5
 * 00000001407399BF: mov     ebx, [rdi+634h]
 * 00000001407399C5: mov     [rdi+634h], r8d
 * 00000001407399CC: cmp     r8d, 3
 * 00000001407399D0: jz      short loc_140739A01
 * 00000001407399D2: mov     eax, [rdi+690h]
 * 00000001407399D8: mov     ecx, edx
 * 00000001407399DA: and     eax, 10000000h
 * 00000001407399DF: cmovz   ecx, r8d
 * 00000001407399E3: test    ecx, ecx
 * 00000001407399E5: jz      short loc_1407399F6
 * 00000001407399E7: lea     rcx, [r9-8]
 * 00000001407399EB: mov     rdx, [rcx]
 * 00000001407399EE: call    qword ptr [rdi+1F8h]
 * 00000001407399F4: jmp     short loc_140739A0A
 * 00000001407399F6: mov     rcx, r9
 * 00000001407399F9: call    qword ptr [rdi+0F8h]
 * 00000001407399FF: jmp     short loc_140739A0A
 * 0000000140739A01: mov     rcx, r9
 * 0000000140739A04: call    qword ptr [rdi+320h]
 * 0000000140739A0A: mov     [rdi+634h], ebx
 * 0000000140739A10: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 0000000140739A17: mov     r9d, dword ptr [rsp+1A10h+Src]
 * 0000000140739A1C: jmp     short loc_140739A27
 * 0000000140739A1E: mov     rdi, rbx
 * 0000000140739A21: mov     [rbx+554h], ecx
 * 0000000140739A27: add     [rdi+57Ch], r12d
 * 0000000140739A2E: lea     rcx, [rdi+r14]
 * 0000000140739A32: mov     edx, 30h ; '0'
 * 0000000140739A37: mov     [rbp+1910h+var_FA0], rcx
 * 0000000140739A3E: mov     rax, rcx
 * 0000000140739A41: xor     r8d, r8d
 * 0000000140739A44: lea     ebx, [rdx-2Ah]
 * 0000000140739A47: mov     [rax], r8
 * 0000000140739A4A: add     edx, 0FFFFFFF8h
 * 0000000140739A4D: add     rax, 8
 * 0000000140739A51: sub     rbx, r12
 * 0000000140739A54: jnz     short loc_140739A47
 * 0000000140739A56: test    edx, edx
 * 0000000140739A58: jz      short loc_140739A65
 * 0000000140739A5A: mov     [rax], r8b
 * 0000000140739A5D: add     rax, r12
 * 0000000140739A60: add     edx, 0FFFFFFFFh
 * 0000000140739A63: jnz     short loc_140739A5A
 * 0000000140739A65: xor     eax, eax
 * 0000000140739A67: mov     dword ptr [rcx], 0Ah
 * 0000000140739A6D: mov     [rcx+8], rax
 * 0000000140739A71: mov     [rcx+10h], eax
 * 0000000140739A74: mov     rdx, [rdi+588h]
 * 0000000140739A7B: mov     rax, rdx
 * 0000000140739A7E: jmp     short loc_140739A82
 * 0000000140739A80: xor     edx, eax
 * 0000000140739A82: shr     rax, 1Fh
 * 0000000140739A86: test    rax, rax
 * 0000000140739A89: jnz     short loc_140739A80
 * 0000000140739A8B: btr     edx, 1Fh
 * 0000000140739A8F: mov     rbx, rdi
 * 0000000140739A92: mov     [rcx+14h], edx
 * 0000000140739A95: mov     r12d, r8d
 * 0000000140739A98: mov     rax, [rbp+1910h+var_FA0]
 * 0000000140739A9F: mov     [rbp+1910h+var_1230], rax
 * 0000000140739AA6: mov     [rbp+1910h+var_16D8], rbx
 * 0000000140739AAD: mov     [rax+18h], r8d
 * 0000000140739AB1: mov     rax, [rbp+1910h+var_1230]
 * 0000000140739AB8: mov     [rax+1Ch], r9d
 * 0000000140739ABC: mov     rax, [rbp+1910h+var_1988]
 * 0000000140739AC0: mov     r15, [rbp+1910h+var_1230]
 * 0000000140739AC7: add     r15, 30h ; '0'
 * 0000000140739ACB: cmp     [rax+10h], r8d
 * 0000000140739ACF: jbe     loc_140739BA1
 * 0000000140739AD5: mov     eax, r12d
 * 0000000140739AD8: lea     rdx, [rbp+1910h+var_1240]
 * 0000000140739ADF: xor     r8d, r8d
 * 0000000140739AE2: movsxd  r14, dword ptr [r13+rax*4+0]
 * 0000000140739AE7: sar     r14, 4
 * 0000000140739AEB: add     r14, r13
 * 0000000140739AEE: mov     rcx, r14
 * 0000000140739AF1: call    qword ptr [rdi+228h]
 * 0000000140739AF7: test    rax, rax
 * 0000000140739AFA: jnz     loc_140739B8B
 * 0000000140739B00: lea     r11d, [rax+4]
 * 0000000140739B04: mov     r8, r14
 * 0000000140739B07: add     [rdi+598h], r11d
 * 0000000140739B0E: lea     rcx, [r14+4]
 * 0000000140739B12: mov     r10d, [rdi+584h]
 * 0000000140739B19: mov     rax, r14
 * 0000000140739B1C: mov     rdx, [rdi+588h]
 * 0000000140739B23: cmp     r14, rcx
 * 0000000140739B26: jnb     short loc_140739B34
 * 0000000140739B28: prefetchnta byte ptr [rax]
 * 0000000140739B2B: add     rax, 40h ; '@'
 * 0000000140739B2F: cmp     rax, rcx
 * 0000000140739B32: jb      short loc_140739B28
 * 0000000140739B34: mov     r9d, r11d
 * 0000000140739B37: mov     esi, 1
 * 0000000140739B3C: movzx   eax, byte ptr [r8]
 * 0000000140739B40: mov     ecx, r10d
 * 0000000140739B43: xor     rdx, rax
 * 0000000140739B46: add     r8, rsi
 * 0000000140739B49: rol     rdx, cl
 * 0000000140739B4C: or      ecx, 0FFFFFFFFh
 * 0000000140739B4F: add     r9d, ecx
 * 0000000140739B52: jnz     short loc_140739B3C
 * 0000000140739B54: mov     rax, rdx
 * 0000000140739B57: jmp     short loc_140739B5B
 * 0000000140739B59: xor     edx, eax
 * 0000000140739B5B: shr     rax, 1Fh
 * 0000000140739B5F: test    rax, rax
 * 0000000140739B62: jnz     short loc_140739B59
 * 0000000140739B64: xor     edx, [r15]
 * 0000000140739B67: mov     r9d, dword ptr [rsp+1A10h+Src]
 * 0000000140739B6C: btr     edx, 1Fh
 * 0000000140739B70: xor     [r15], edx
 * 0000000140739B73: mov     [r15+4], r11d
 * 0000000140739B77: mov     [r15+8], r14
 * 0000000140739B7B: add     r15, 10h
 * 0000000140739B7F: add     r9d, ecx
 * 0000000140739B82: mov     dword ptr [rsp+1A10h+Src], r9d
 * 0000000140739B87: jz      short loc_140739BAA
 * 0000000140739B89: jmp     short loc_140739B90
 * 0000000140739B8B: mov     r9d, dword ptr [rsp+1A10h+Src]
 * 0000000140739B90: mov     rax, [rbp+1910h+var_1988]
 * 0000000140739B94: inc     r12d
 * 0000000140739B97: cmp     r12d, [rax+10h]
 * 0000000140739B9B: jb      loc_140739AD5
 * 0000000140739BA1: test    r9d, r9d
 * 0000000140739BA4: jnz     loc_140731C01
 * 0000000140739BAA: xor     eax, eax
 * 0000000140739BAC: cli
 * 0000000140739BAD: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140739BB3: jnz     short loc_140739BB7
 * 0000000140739BB5: jmp     short loc_140739BB5
 * 0000000140739BB7: sti
 * 0000000140739BB8: cli
 * 0000000140739BB9: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140739BBF: jnz     short loc_140739BC3
 * 0000000140739BC1: jmp     short loc_140739BC1
 * 0000000140739BC3: sti
 * 0000000140739BC4: mov     r14d, [rbx+554h]
 * 0000000140739BCB: mov     r8d, [rbx+634h]
 * 0000000140739BD2: lea     eax, [r14+30h]
 * 0000000140739BD6: cmp     eax, [rbx+714h]
 * 0000000140739BDC: jbe     loc_140739CB8
 * 0000000140739BE2: mov     edx, eax
 * 0000000140739BE4: mov     rcx, rbx
 * 0000000140739BE7: call    sub_140236718
 * 0000000140739BEC: mov     rdi, rax
 * 0000000140739BEF: xor     eax, eax
 * 0000000140739BF1: test    rdi, rdi
 * 0000000140739BF4: jz      loc_140731C01
 * 0000000140739BFA: mov     edx, [rbx+690h]
 * 0000000140739C00: lea     r13d, [rax+4]
 * 0000000140739C04: test    r13b, dl
 * 0000000140739C07: jnz     loc_140739CAF
 * 0000000140739C0D: mov     eax, [rbx+554h]
 * 0000000140739C13: lea     r10d, [r13-3]
 * 0000000140739C17: mov     r9, [rbx+538h]
 * 0000000140739C1E: and     edx, 20000000h
 * 0000000140739C24: neg     edx
 * 0000000140739C26: sbb     r8d, r8d
 * 0000000140739C29: and     r8d, [rbx+634h]
 * 0000000140739C30: cmp     eax, 8
 * 0000000140739C33: jb      short loc_140739C4E
 * 0000000140739C35: mov     ecx, eax
 * 0000000140739C37: shr     rcx, 3
 * 0000000140739C3B: xor     edx, edx
 * 0000000140739C3D: mov     [rbx], rdx
 * 0000000140739C40: add     eax, 0FFFFFFF8h
 * 0000000140739C43: add     rbx, 8
 * 0000000140739C47: sub     rcx, r10
 * 0000000140739C4A: jnz     short loc_140739C3D
 * 0000000140739C4C: jmp     short loc_140739C50
 * 0000000140739C4E: xor     edx, edx
 * 0000000140739C50: test    eax, eax
 * 0000000140739C52: jz      short loc_140739C5E
 * 0000000140739C54: mov     [rbx], dl
 * 0000000140739C56: add     rbx, r10
 * 0000000140739C59: add     eax, 0FFFFFFFFh
 * 0000000140739C5C: jnz     short loc_140739C54
 * 0000000140739C5E: mov     ebx, [rdi+634h]
 * 0000000140739C64: mov     [rdi+634h], r8d
 * 0000000140739C6B: cmp     r8d, 3
 * 0000000140739C6F: jz      short loc_140739CA0
 * 0000000140739C71: mov     eax, [rdi+690h]
 * 0000000140739C77: mov     ecx, edx
 * 0000000140739C79: and     eax, 10000000h
 * 0000000140739C7E: cmovz   ecx, r8d
 * 0000000140739C82: test    ecx, ecx
 * 0000000140739C84: jz      short loc_140739C95
 * 0000000140739C86: lea     rcx, [r9-8]
 * 0000000140739C8A: mov     rdx, [rcx]
 * 0000000140739C8D: call    qword ptr [rdi+1F8h]
 * 0000000140739C93: jmp     short loc_140739CA9
 * 0000000140739C95: mov     rcx, r9
 * 0000000140739C98: call    qword ptr [rdi+0F8h]
 * 0000000140739C9E: jmp     short loc_140739CA9
 * 0000000140739CA0: mov     rcx, r9
 * 0000000140739CA3: call    qword ptr [rdi+320h]
 * 0000000140739CA9: mov     [rdi+634h], ebx
 * 0000000140739CAF: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 0000000140739CB6: jmp     short loc_140739CC7
 * 0000000140739CB8: mov     rdi, rbx
 * 0000000140739CBB: mov     [rbx+554h], eax
 * 0000000140739CC1: mov     r13d, 4
 * 0000000140739CC7: mov     r10d, 1
 * 0000000140739CCD: lea     r8, [rdi+r14]
 * 0000000140739CD1: add     [rdi+57Ch], r10d
 * 0000000140739CD8: mov     rax, r8
 * 0000000140739CDB: mov     [rbp+1910h+var_EF0], r8
 * 0000000140739CE2: xor     ebx, ebx
 * 0000000140739CE4: mov     r11d, 0FFFFFFF8h
 * 0000000140739CEA: lea     ecx, [r10+2Fh]
 * 0000000140739CEE: lea     edx, [rcx-2Ah]
 * 0000000140739CF1: mov     [rax], rbx
 * 0000000140739CF4: add     ecx, r11d
 * 0000000140739CF7: add     rax, 8
 * 0000000140739CFB: sub     rdx, r10
 * 0000000140739CFE: jnz     short loc_140739CF1
 * 0000000140739D00: test    ecx, ecx
 * 0000000140739D02: jz      short loc_140739D0E
 * 0000000140739D04: mov     [rax], bl
 * 0000000140739D06: add     rax, r10
 * 0000000140739D09: add     ecx, 0FFFFFFFFh
 * 0000000140739D0C: jnz     short loc_140739D04
 * 0000000140739D0E: mov     dword ptr [r8], 24h ; '$'
 * 0000000140739D15: lea     rax, xmmword_1402CFDD0
 * 0000000140739D1C: mov     [r8+8], rax
 * 0000000140739D20: mov     rbx, rax
 * 0000000140739D23: mov     dword ptr [r8+10h], 18h
 * 0000000140739D2B: add     dword ptr [rdi+598h], 18h
 * 0000000140739D32: mov     ecx, [rdi+584h]
 * 0000000140739D38: mov     rdx, [rdi+588h]
 * 0000000140739D3F: prefetchnta byte ptr cs:xmmword_1402CFDD0
 * 0000000140739D46: mov     eax, 3
 * 0000000140739D4B: lea     r9d, [rax+15h]
 * 0000000140739D4F: xor     rdx, [rbx]
 * 0000000140739D52: add     r9d, r11d
 * 0000000140739D55: rol     rdx, cl
 * 0000000140739D58: add     rbx, 8
 * 0000000140739D5C: sub     rax, r10
 * 0000000140739D5F: jnz     short loc_140739D4F
 * 0000000140739D61: test    r9d, r9d
 * 0000000140739D64: jz      short loc_140739D78
 * 0000000140739D66: movzx   eax, byte ptr [rbx]
 * 0000000140739D69: add     rbx, r10
 * 0000000140739D6C: xor     rdx, rax
 * 0000000140739D6F: rol     rdx, cl
 * 0000000140739D72: add     r9d, 0FFFFFFFFh
 * 0000000140739D76: jnz     short loc_140739D66
 * 0000000140739D78: mov     rax, rdx
 * 0000000140739D7B: jmp     short loc_140739D7F
 * 0000000140739D7D: xor     edx, eax
 * 0000000140739D7F: shr     rax, 1Fh
 * 0000000140739D83: test    rax, rax
 * 0000000140739D86: jnz     short loc_140739D7D
 * 0000000140739D88: btr     edx, 1Fh
 * 0000000140739D8C: mov     [r8+14h], edx
 * 0000000140739D90: mov     rax, [rbp+1910h+var_EF0]
 * 0000000140739D97: mov     [rbp+1910h+var_1220], rax
 * 0000000140739D9E: add     dword ptr [rdi+598h], 18h
 * 0000000140739DA5: mov     rbx, [rdi+438h]
 * 0000000140739DAC: mov     r14, [rbp+1910h+var_1220]
 * 0000000140739DB3: add     rbx, 10h
 * 0000000140739DB7: mov     r15, cs:PsHalImageBase
 * 0000000140739DBE: mov     rcx, [rdi+450h]
 * 0000000140739DC5: mov     r12, cr8
 * 0000000140739DC9: mov     eax, 0Fh
 * 0000000140739DCE: mov     cr8, rax
 * 0000000140739DD2: call    qword ptr [rdi+148h]
 * 0000000140739DD8: mov     rax, [rdi+438h]
 * 0000000140739DDF: mov     ecx, [rax]
 * 0000000140739DE1: lea     rax, [rcx+rcx*2]
 * 0000000140739DE5: lea     rcx, [rbx+rax*8]
 * 0000000140739DE9: cmp     [rbx+8], r15
 * 0000000140739DED: jz      short loc_140739DFA
 * 0000000140739DEF: add     rbx, 18h
 * 0000000140739DF3: cmp     rbx, rcx
 * 0000000140739DF6: jnb     short loc_140739E12
 * 0000000140739DF8: jmp     short loc_140739DE9
 * 0000000140739DFA: movups  xmm0, xmmword ptr [rbx]
 * 0000000140739DFD: xor     eax, eax
 * 0000000140739DFF: mov     dword ptr [rbp+1910h+var_1950], eax
 * 0000000140739E02: movups  xmmword ptr [r14+18h], xmm0
 * 0000000140739E07: movsd   xmm1, qword ptr [rbx+10h]
 * 0000000140739E0C: movsd   qword ptr [r14+28h], xmm1
 * 0000000140739E12: mov     rcx, [rdi+450h]
 * 0000000140739E19: call    qword ptr [rdi+188h]
 * 0000000140739E1F: movzx   eax, r12b
 * 0000000140739E23: mov     cr8, rax
 * 0000000140739E27: xor     eax, eax
 * 0000000140739E29: lea     r15d, [rax+1]
 * 0000000140739E2D: cmp     dword ptr [rbp+1910h+var_1950], eax
 * 0000000140739E30: jge     short loc_140739E6E
 * 0000000140739E32: lea     ecx, [rax+18h]
 * 0000000140739E35: mov     rax, [rbp+1910h+var_1220]
 * 0000000140739E3C: add     rax, rcx
 * 0000000140739E3F: lea     edx, [rcx-15h]
 * 0000000140739E42: xor     ebx, ebx
 * 0000000140739E44: mov     [rax], rbx
 * 0000000140739E47: add     ecx, 0FFFFFFF8h
 * 0000000140739E4A: add     rax, 8
 * 0000000140739E4E: sub     rdx, r15
 * 0000000140739E51: jnz     short loc_140739E44
 * 0000000140739E53: test    ecx, ecx
 * 0000000140739E55: jz      short loc_140739E61
 * 0000000140739E57: mov     [rax], bl
 * 0000000140739E59: add     rax, r15
 * 0000000140739E5C: add     ecx, 0FFFFFFFFh
 * 0000000140739E5F: jnz     short loc_140739E57
 * 0000000140739E61: mov     rax, [rbp+1910h+var_1220]
 * 0000000140739E68: mov     [rax+18h], r15
 * 0000000140739E6C: xor     eax, eax
 * 0000000140739E6E: mov     [rbp+1910h+var_16D8], rdi
 * 0000000140739E75: cli
 * 0000000140739E76: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140739E7C: jnz     short loc_140739E80
 * 0000000140739E7E: jmp     short loc_140739E7E
 * 0000000140739E80: sti
 * 0000000140739E81: mov     r14d, [rdi+554h]
 * 0000000140739E88: mov     r8d, [rdi+634h]
 * 0000000140739E8F: lea     eax, [r14+30h]
 * 0000000140739E93: cmp     eax, [rdi+714h]
 * 0000000140739E99: jbe     loc_140739F6D
 * 0000000140739E9F: mov     edx, eax
 * 0000000140739EA1: mov     rcx, rdi
 * 0000000140739EA4: call    sub_140236718
 * 0000000140739EA9: mov     rbx, rax
 * 0000000140739EAC: xor     eax, eax
 * 0000000140739EAE: test    rbx, rbx
 * 0000000140739EB1: jz      loc_140731C01
 * 0000000140739EB7: mov     edx, [rdi+690h]
 * 0000000140739EBD: test    r13b, dl
 * 0000000140739EC0: jnz     loc_140739F64
 * 0000000140739EC6: mov     eax, [rdi+554h]
 * 0000000140739ECC: and     edx, 20000000h
 * 0000000140739ED2: mov     r9, [rdi+538h]
 * 0000000140739ED9: neg     edx
 * 0000000140739EDB: sbb     r8d, r8d
 * 0000000140739EDE: and     r8d, [rdi+634h]
 * 0000000140739EE5: cmp     eax, 8
 * 0000000140739EE8: jb      short loc_140739F03
 * 0000000140739EEA: mov     ecx, eax
 * 0000000140739EEC: shr     rcx, 3
 * 0000000140739EF0: xor     edx, edx
 * 0000000140739EF2: mov     [rdi], rdx
 * 0000000140739EF5: add     eax, 0FFFFFFF8h
 * 0000000140739EF8: add     rdi, 8
 * 0000000140739EFC: sub     rcx, r15
 * 0000000140739EFF: jnz     short loc_140739EF2
 * 0000000140739F01: jmp     short loc_140739F05
 * 0000000140739F03: xor     edx, edx
 * 0000000140739F05: test    eax, eax
 * 0000000140739F07: jz      short loc_140739F13
 * 0000000140739F09: mov     [rdi], dl
 * 0000000140739F0B: add     rdi, r15
 * 0000000140739F0E: add     eax, 0FFFFFFFFh
 * 0000000140739F11: jnz     short loc_140739F09
 * 0000000140739F13: mov     edi, [rbx+634h]
 * 0000000140739F19: mov     [rbx+634h], r8d
 * 0000000140739F20: cmp     r8d, 3
 * 0000000140739F24: jz      short loc_140739F55
 * 0000000140739F26: mov     eax, [rbx+690h]
 * 0000000140739F2C: mov     ecx, edx
 * 0000000140739F2E: and     eax, 10000000h
 * 0000000140739F33: cmovz   ecx, r8d
 * 0000000140739F37: test    ecx, ecx
 * 0000000140739F39: jz      short loc_140739F4A
 * 0000000140739F3B: lea     rcx, [r9-8]
 * 0000000140739F3F: mov     rdx, [rcx]
 * 0000000140739F42: call    qword ptr [rbx+1F8h]
 * 0000000140739F48: jmp     short loc_140739F5E
 * 0000000140739F4A: mov     rcx, r9
 * 0000000140739F4D: call    qword ptr [rbx+0F8h]
 * 0000000140739F53: jmp     short loc_140739F5E
 * 0000000140739F55: mov     rcx, r9
 * 0000000140739F58: call    qword ptr [rbx+320h]
 * 0000000140739F5E: mov     [rbx+634h], edi
 * 0000000140739F64: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 0000000140739F6B: jmp     short loc_140739F76
 * 0000000140739F6D: mov     rbx, rdi
 * 0000000140739F70: mov     [rdi+554h], eax
 * 0000000140739F76: add     [rbx+57Ch], r15d
 * 0000000140739F7D: lea     rcx, [rbx+r14]
 * 0000000140739F81: mov     edx, 30h ; '0'
 * 0000000140739F86: mov     [rbp+1910h+var_F90], rcx
 * 0000000140739F8D: mov     rax, rcx
 * 0000000140739F90: xor     r8d, r8d
 * 0000000140739F93: lea     r12d, [rdx-2Ah]
 * 0000000140739F97: mov     edi, r12d
 * 0000000140739F9A: mov     [rax], r8
 * 0000000140739F9D: add     edx, 0FFFFFFF8h
 * 0000000140739FA0: add     rax, 8
 * 0000000140739FA4: sub     rdi, r15
 * 0000000140739FA7: jnz     short loc_140739F9A
 * 0000000140739FA9: test    edx, edx
 * 0000000140739FAB: jz      short loc_140739FB8
 * 0000000140739FAD: mov     [rax], r8b
 * 0000000140739FB0: add     rax, r15
 * 0000000140739FB3: add     edx, 0FFFFFFFFh
 * 0000000140739FB6: jnz     short loc_140739FAD
 * 0000000140739FB8: xor     eax, eax
 * 0000000140739FBA: mov     [rcx], r13d
 * 0000000140739FBD: mov     [rcx+8], rax
 * 0000000140739FC1: mov     [rcx+10h], eax
 * 0000000140739FC4: mov     rdx, [rbx+588h]
 * 0000000140739FCB: mov     rax, rdx
 * 0000000140739FCE: jmp     short loc_140739FD2
 * 0000000140739FD0: xor     edx, eax
 * 0000000140739FD2: shr     rax, 1Fh
 * 0000000140739FD6: test    rax, rax
 * 0000000140739FD9: jnz     short loc_140739FD0
 * 0000000140739FDB: btr     edx, 1Fh
 * 0000000140739FDF: mov     [rbp+1910h+var_16D8], rbx
 * 0000000140739FE6: mov     [rcx+14h], edx
 * 0000000140739FE9: cli
 * 0000000140739FEA: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140739FF0: jnz     short loc_140739FF4
 * 0000000140739FF2: jmp     short loc_140739FF2
 * 0000000140739FF4: sti
 * 0000000140739FF5: mov     r14d, [rbx+554h]
 * 0000000140739FFC: mov     r8d, [rbx+634h]
 * 000000014073A003: lea     eax, [r14+30h]
 * 000000014073A007: cmp     eax, [rbx+714h]
 * 000000014073A00D: jbe     loc_14073A0E1
 * 000000014073A013: mov     edx, eax
 * 000000014073A015: mov     rcx, rbx
 * 000000014073A018: call    sub_140236718
 * 000000014073A01D: mov     rdi, rax
 * 000000014073A020: xor     eax, eax
 * 000000014073A022: test    rdi, rdi
 * 000000014073A025: jz      loc_140731C01
 * 000000014073A02B: mov     edx, [rbx+690h]
 * 000000014073A031: test    r13b, dl
 * 000000014073A034: jnz     loc_14073A0D8
 * 000000014073A03A: mov     eax, [rbx+554h]
 * 000000014073A040: and     edx, 20000000h
 * 000000014073A046: mov     r9, [rbx+538h]
 * 000000014073A04D: neg     edx
 * 000000014073A04F: sbb     r8d, r8d
 * 000000014073A052: and     r8d, [rbx+634h]
 * 000000014073A059: cmp     eax, 8
 * 000000014073A05C: jb      short loc_14073A077
 * 000000014073A05E: mov     ecx, eax
 * 000000014073A060: shr     rcx, 3
 * 000000014073A064: xor     edx, edx
 * 000000014073A066: mov     [rbx], rdx
 * 000000014073A069: add     eax, 0FFFFFFF8h
 * 000000014073A06C: add     rbx, 8
 * 000000014073A070: sub     rcx, r15
 * 000000014073A073: jnz     short loc_14073A066
 * 000000014073A075: jmp     short loc_14073A079
 * 000000014073A077: xor     edx, edx
 * 000000014073A079: test    eax, eax
 * 000000014073A07B: jz      short loc_14073A087
 * 000000014073A07D: mov     [rbx], dl
 * 000000014073A07F: add     rbx, r15
 * 000000014073A082: add     eax, 0FFFFFFFFh
 * 000000014073A085: jnz     short loc_14073A07D
 * 000000014073A087: mov     ebx, [rdi+634h]
 * 000000014073A08D: mov     [rdi+634h], r8d
 * 000000014073A094: cmp     r8d, 3
 * 000000014073A098: jz      short loc_14073A0C9
 * 000000014073A09A: mov     eax, [rdi+690h]
 * 000000014073A0A0: mov     ecx, edx
 * 000000014073A0A2: and     eax, 10000000h
 * 000000014073A0A7: cmovz   ecx, r8d
 * 000000014073A0AB: test    ecx, ecx
 * 000000014073A0AD: jz      short loc_14073A0BE
 * 000000014073A0AF: lea     rcx, [r9-8]
 * 000000014073A0B3: mov     rdx, [rcx]
 * 000000014073A0B6: call    qword ptr [rdi+1F8h]
 * 000000014073A0BC: jmp     short loc_14073A0D2
 * 000000014073A0BE: mov     rcx, r9
 * 000000014073A0C1: call    qword ptr [rdi+0F8h]
 * 000000014073A0C7: jmp     short loc_14073A0D2
 * 000000014073A0C9: mov     rcx, r9
 * 000000014073A0CC: call    qword ptr [rdi+320h]
 * 000000014073A0D2: mov     [rdi+634h], ebx
 * 000000014073A0D8: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 000000014073A0DF: jmp     short loc_14073A0EA
 * 000000014073A0E1: mov     rdi, rbx
 * 000000014073A0E4: mov     [rbx+554h], eax
 * 000000014073A0EA: add     [rdi+57Ch], r15d
 * 000000014073A0F1: lea     rcx, [rdi+r14]
 * 000000014073A0F5: mov     [rbp+1910h+var_1210], rcx
 * 000000014073A0FC: mov     rax, rcx
 * 000000014073A0FF: xor     r8d, r8d
 * 000000014073A102: mov     edx, 30h ; '0'
 * 000000014073A107: mov     rbx, r12
 * 000000014073A10A: mov     [rax], r8
 * 000000014073A10D: add     edx, 0FFFFFFF8h
 * 000000014073A110: add     rax, 8
 * 000000014073A114: sub     rbx, r15
 * 000000014073A117: jnz     short loc_14073A10A
 * 000000014073A119: test    edx, edx
 * 000000014073A11B: jz      short loc_14073A128
 * 000000014073A11D: mov     [rax], r8b
 * 000000014073A120: add     rax, r15
 * 000000014073A123: add     edx, 0FFFFFFFFh
 * 000000014073A126: jnz     short loc_14073A11D
 * 000000014073A128: xor     eax, eax
 * 000000014073A12A: mov     dword ptr [rcx], 5
 * 000000014073A130: mov     [rcx+8], rax
 * 000000014073A134: mov     [rcx+10h], eax
 * 000000014073A137: mov     rdx, [rdi+588h]
 * 000000014073A13E: mov     rax, rdx
 * 000000014073A141: jmp     short loc_14073A145
 * 000000014073A143: xor     edx, eax
 * 000000014073A145: shr     rax, 1Fh
 * 000000014073A149: test    rax, rax
 * 000000014073A14C: jnz     short loc_14073A143
 * 000000014073A14E: btr     edx, 1Fh
 * 000000014073A152: mov     [rbp+1910h+var_16D8], rdi
 * 000000014073A159: mov     [rcx+14h], edx
 * 000000014073A15C: cli
 * 000000014073A15D: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014073A163: jnz     short loc_14073A167
 * 000000014073A165: jmp     short loc_14073A165
 * 000000014073A167: sti
 * 000000014073A168: mov     r14d, [rdi+554h]
 * 000000014073A16F: mov     r8d, [rdi+634h]
 * 000000014073A176: lea     eax, [r14+30h]
 * 000000014073A17A: cmp     eax, [rdi+714h]
 * 000000014073A180: jbe     loc_14073A254
 * 000000014073A186: mov     edx, eax
 * 000000014073A188: mov     rcx, rdi
 * 000000014073A18B: call    sub_140236718
 * 000000014073A190: mov     rbx, rax
 * 000000014073A193: xor     eax, eax
 * 000000014073A195: test    rbx, rbx
 * 000000014073A198: jz      loc_140731C01
 * 000000014073A19E: mov     edx, [rdi+690h]
 * 000000014073A1A4: test    r13b, dl
 * 000000014073A1A7: jnz     loc_14073A24B
 * 000000014073A1AD: mov     eax, [rdi+554h]
 * 000000014073A1B3: and     edx, 20000000h
 * 000000014073A1B9: mov     r9, [rdi+538h]
 * 000000014073A1C0: neg     edx
 * 000000014073A1C2: sbb     r8d, r8d
 * 000000014073A1C5: and     r8d, [rdi+634h]
 * 000000014073A1CC: cmp     eax, 8
 * 000000014073A1CF: jb      short loc_14073A1EA
 * 000000014073A1D1: mov     ecx, eax
 * 000000014073A1D3: shr     rcx, 3
 * 000000014073A1D7: xor     edx, edx
 * 000000014073A1D9: mov     [rdi], rdx
 * 000000014073A1DC: add     eax, 0FFFFFFF8h
 * 000000014073A1DF: add     rdi, 8
 * 000000014073A1E3: sub     rcx, r15
 * 000000014073A1E6: jnz     short loc_14073A1D9
 * 000000014073A1E8: jmp     short loc_14073A1EC
 * 000000014073A1EA: xor     edx, edx
 * 000000014073A1EC: test    eax, eax
 * 000000014073A1EE: jz      short loc_14073A1FA
 * 000000014073A1F0: mov     [rdi], dl
 * 000000014073A1F2: add     rdi, r15
 * 000000014073A1F5: add     eax, 0FFFFFFFFh
 * 000000014073A1F8: jnz     short loc_14073A1F0
 * 000000014073A1FA: mov     edi, [rbx+634h]
 * 000000014073A200: mov     [rbx+634h], r8d
 * 000000014073A207: cmp     r8d, 3
 * 000000014073A20B: jz      short loc_14073A23C
 * 000000014073A20D: mov     eax, [rbx+690h]
 * 000000014073A213: mov     ecx, edx
 * 000000014073A215: and     eax, 10000000h
 * 000000014073A21A: cmovz   ecx, r8d
 * 000000014073A21E: test    ecx, ecx
 * 000000014073A220: jz      short loc_14073A231
 * 000000014073A222: lea     rcx, [r9-8]
 * 000000014073A226: mov     rdx, [rcx]
 * 000000014073A229: call    qword ptr [rbx+1F8h]
 * 000000014073A22F: jmp     short loc_14073A245
 * 000000014073A231: mov     rcx, r9
 * 000000014073A234: call    qword ptr [rbx+0F8h]
 * 000000014073A23A: jmp     short loc_14073A245
 * 000000014073A23C: mov     rcx, r9
 * 000000014073A23F: call    qword ptr [rbx+320h]
 * 000000014073A245: mov     [rbx+634h], edi
 * 000000014073A24B: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 000000014073A252: jmp     short loc_14073A25D
 * 000000014073A254: mov     rbx, rdi
 * 000000014073A257: mov     [rdi+554h], eax
 * 000000014073A25D: add     [rbx+57Ch], r15d
 * 000000014073A264: lea     rcx, [rbx+r14]
 * 000000014073A268: mov     [rbp+1910h+var_F20], rcx
 * 000000014073A26F: mov     rax, rcx
 * 000000014073A272: xor     r8d, r8d
 * 000000014073A275: mov     edx, 30h ; '0'
 * 000000014073A27A: mov     rdi, r12
 * 000000014073A27D: mov     [rax], r8
 * 000000014073A280: add     edx, 0FFFFFFF8h
 * 000000014073A283: add     rax, 8
 * 000000014073A287: sub     rdi, r15
 * 000000014073A28A: jnz     short loc_14073A27D
 * 000000014073A28C: test    edx, edx
 * 000000014073A28E: jz      short loc_14073A29B
 * 000000014073A290: mov     [rax], r8b
 * 000000014073A293: add     rax, r15
 * 000000014073A296: add     edx, 0FFFFFFFFh
 * 000000014073A299: jnz     short loc_14073A290
 * 000000014073A29B: mov     eax, 0Fh
 * 000000014073A2A0: mov     [rcx], eax
 * 000000014073A2A2: xor     eax, eax
 * 000000014073A2A4: mov     [rcx+8], rax
 * 000000014073A2A8: mov     [rcx+10h], eax
 * 000000014073A2AB: mov     rdx, [rbx+588h]
 * 000000014073A2B2: mov     rax, rdx
 * 000000014073A2B5: shr     rax, 1Fh
 * 000000014073A2B9: xor     r9d, r9d
 * 000000014073A2BC: jmp     short loc_14073A2C4
 * 000000014073A2BE: xor     edx, eax
 * 000000014073A2C0: shr     rax, 1Fh
 * 000000014073A2C4: test    rax, rax
 * 000000014073A2C7: jnz     short loc_14073A2BE
 * 000000014073A2C9: btr     edx, 1Fh
 * 000000014073A2CD: mov     [rcx+14h], edx
 * 000000014073A2D0: mov     ecx, 0BC2A27DBh
 * 000000014073A2D5: mov     eax, [rbx+664h]
 * 000000014073A2DB: xor     rax, rcx
 * 000000014073A2DE: mov     rcx, 88000000000h
 * 000000014073A2E8: sub     rax, rcx
 * 000000014073A2EB: mov     al, [rax]
 * 000000014073A2ED: test    al, 2
 * 000000014073A2EF: jz      short loc_14073A2FB
 * 000000014073A2F1: add     dword ptr [rbx+554h], 1000h
 * 000000014073A2FB: mov     r14d, [rbx+554h]
 * 000000014073A302: mov     r8d, [rbx+634h]
 * 000000014073A309: mov     [rbp+1910h+var_16D8], rbx
 * 000000014073A310: lea     eax, [r14+30h]
 * 000000014073A314: cmp     eax, [rbx+714h]
 * 000000014073A31A: jbe     loc_14073A3F1
 * 000000014073A320: mov     edx, eax
 * 000000014073A322: mov     rcx, rbx
 * 000000014073A325: call    sub_140236718
 * 000000014073A32A: mov     rdi, rax
 * 000000014073A32D: xor     eax, eax
 * 000000014073A32F: test    rdi, rdi
 * 000000014073A332: jz      loc_140731C01
 * 000000014073A338: mov     edx, [rbx+690h]
 * 000000014073A33E: test    r13b, dl
 * 000000014073A341: jnz     loc_14073A3E5
 * 000000014073A347: mov     eax, [rbx+554h]
 * 000000014073A34D: and     edx, 20000000h
 * 000000014073A353: mov     r9, [rbx+538h]
 * 000000014073A35A: neg     edx
 * 000000014073A35C: sbb     r8d, r8d
 * 000000014073A35F: and     r8d, [rbx+634h]
 * 000000014073A366: cmp     eax, 8
 * 000000014073A369: jb      short loc_14073A384
 * 000000014073A36B: mov     ecx, eax
 * 000000014073A36D: shr     rcx, 3
 * 000000014073A371: xor     edx, edx
 * 000000014073A373: mov     [rbx], rdx
 * 000000014073A376: add     eax, 0FFFFFFF8h
 * 000000014073A379: add     rbx, 8
 * 000000014073A37D: sub     rcx, r15
 * 000000014073A380: jnz     short loc_14073A373
 * 000000014073A382: jmp     short loc_14073A386
 * 000000014073A384: xor     edx, edx
 * 000000014073A386: test    eax, eax
 * 000000014073A388: jz      short loc_14073A394
 * 000000014073A38A: mov     [rbx], dl
 * 000000014073A38C: add     rbx, r15
 * 000000014073A38F: add     eax, 0FFFFFFFFh
 * 000000014073A392: jnz     short loc_14073A38A
 * 000000014073A394: mov     ebx, [rdi+634h]
 * 000000014073A39A: mov     [rdi+634h], r8d
 * 000000014073A3A1: cmp     r8d, 3
 * 000000014073A3A5: jz      short loc_14073A3D6
 * 000000014073A3A7: mov     eax, [rdi+690h]
 * 000000014073A3AD: mov     ecx, edx
 * 000000014073A3AF: and     eax, 10000000h
 * 000000014073A3B4: cmovz   ecx, r8d
 * 000000014073A3B8: test    ecx, ecx
 * 000000014073A3BA: jz      short loc_14073A3CB
 * 000000014073A3BC: lea     rcx, [r9-8]
 * 000000014073A3C0: mov     rdx, [rcx]
 * 000000014073A3C3: call    qword ptr [rdi+1F8h]
 * 000000014073A3C9: jmp     short loc_14073A3DF
 * 000000014073A3CB: mov     rcx, r9
 * 000000014073A3CE: call    qword ptr [rdi+0F8h]
 * 000000014073A3D4: jmp     short loc_14073A3DF
 * 000000014073A3D6: mov     rcx, r9
 * 000000014073A3D9: call    qword ptr [rdi+320h]
 * 000000014073A3DF: mov     [rdi+634h], ebx
 * 000000014073A3E5: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 000000014073A3EC: xor     r9d, r9d
 * 000000014073A3EF: jmp     short loc_14073A3FA
 * 000000014073A3F1: mov     rdi, rbx
 * 000000014073A3F4: mov     [rbx+554h], eax
 * 000000014073A3FA: add     [rdi+57Ch], r15d
 * 000000014073A401: lea     rcx, [rdi+r14]
 * 000000014073A405: mov     [rbp+1910h+var_1200], rcx
 * 000000014073A40C: mov     rax, rcx
 * 000000014073A40F: mov     edx, 30h ; '0'
 * 000000014073A414: mov     rbx, r12
 * 000000014073A417: mov     [rax], r9
 * 000000014073A41A: add     edx, 0FFFFFFF8h
 * 000000014073A41D: add     rax, 8
 * 000000014073A421: sub     rbx, r15
 * 000000014073A424: jnz     short loc_14073A417
 * 000000014073A426: test    edx, edx
 * 000000014073A428: jz      short loc_14073A435
 * 000000014073A42A: mov     [rax], r9b
 * 000000014073A42D: add     rax, r15
 * 000000014073A430: add     edx, 0FFFFFFFFh
 * 000000014073A433: jnz     short loc_14073A42A
 * 000000014073A435: xor     eax, eax
 * 000000014073A437: mov     [rcx], r12d
 * 000000014073A43A: mov     [rcx+8], rax
 * 000000014073A43E: mov     [rcx+10h], eax
 * 000000014073A441: mov     rdx, [rdi+588h]
 * 000000014073A448: mov     rax, rdx
 * 000000014073A44B: shr     rax, 1Fh
 * 000000014073A44F: xor     r9d, r9d
 * 000000014073A452: jmp     short loc_14073A45A
 * 000000014073A454: xor     edx, eax
 * 000000014073A456: shr     rax, 1Fh
 * 000000014073A45A: test    rax, rax
 * 000000014073A45D: jnz     short loc_14073A454
 * 000000014073A45F: btr     edx, 1Fh
 * 000000014073A463: mov     [rbp+1910h+var_16D8], rdi
 * 000000014073A46A: mov     [rcx+14h], edx
 * 000000014073A46D: lea     rcx, KdpStub
 * 000000014073A474: mov     rax, [rbp+1910h+var_1200]
 * 000000014073A47B: mov     [rbp+1910h+var_1058], rax
 * 000000014073A482: mov     [rax+18h], rcx
 * 000000014073A486: lea     rcx, KdpTrap
 * 000000014073A48D: mov     rax, [rbp+1910h+var_1058]
 * 000000014073A494: mov     [rax+20h], rcx
 * 000000014073A498: lea     rcx, KiDebugRoutine
 * 000000014073A49F: mov     rax, [rbp+1910h+var_1058]
 * 000000014073A4A6: mov     [rax+28h], rcx
 * 000000014073A4AA: mov     r14d, [rdi+554h]
 * 000000014073A4B1: mov     r8d, [rdi+634h]
 * 000000014073A4B8: lea     eax, [r14+30h]
 * 000000014073A4BC: cmp     eax, [rdi+714h]
 * 000000014073A4C2: jbe     loc_14073A599
 * 000000014073A4C8: mov     edx, eax
 * 000000014073A4CA: mov     rcx, rdi
 * 000000014073A4CD: call    sub_140236718
 * 000000014073A4D2: mov     rbx, rax
 * 000000014073A4D5: xor     eax, eax
 * 000000014073A4D7: test    rbx, rbx
 * 000000014073A4DA: jz      loc_140731C01
 * 000000014073A4E0: mov     edx, [rdi+690h]
 * 000000014073A4E6: test    r13b, dl
 * 000000014073A4E9: jnz     loc_14073A58D
 * 000000014073A4EF: mov     eax, [rdi+554h]
 * 000000014073A4F5: and     edx, 20000000h
 * 000000014073A4FB: mov     r9, [rdi+538h]
 * 000000014073A502: neg     edx
 * 000000014073A504: sbb     r8d, r8d
 * 000000014073A507: and     r8d, [rdi+634h]
 * 000000014073A50E: cmp     eax, 8
 * 000000014073A511: jb      short loc_14073A52C
 * 000000014073A513: mov     ecx, eax
 * 000000014073A515: shr     rcx, 3
 * 000000014073A519: xor     edx, edx
 * 000000014073A51B: mov     [rdi], rdx
 * 000000014073A51E: add     eax, 0FFFFFFF8h
 * 000000014073A521: add     rdi, 8
 * 000000014073A525: sub     rcx, r15
 * 000000014073A528: jnz     short loc_14073A51B
 * 000000014073A52A: jmp     short loc_14073A52E
 * 000000014073A52C: xor     edx, edx
 * 000000014073A52E: test    eax, eax
 * 000000014073A530: jz      short loc_14073A53C
 * 000000014073A532: mov     [rdi], dl
 * 000000014073A534: add     rdi, r15
 * 000000014073A537: add     eax, 0FFFFFFFFh
 * 000000014073A53A: jnz     short loc_14073A532
 * 000000014073A53C: mov     edi, [rbx+634h]
 * 000000014073A542: mov     [rbx+634h], r8d
 * 000000014073A549: cmp     r8d, 3
 * 000000014073A54D: jz      short loc_14073A57E
 * 000000014073A54F: mov     eax, [rbx+690h]
 * 000000014073A555: mov     ecx, edx
 * 000000014073A557: and     eax, 10000000h
 * 000000014073A55C: cmovz   ecx, r8d
 * 000000014073A560: test    ecx, ecx
 * 000000014073A562: jz      short loc_14073A573
 * 000000014073A564: lea     rcx, [r9-8]
 * 000000014073A568: mov     rdx, [rcx]
 * 000000014073A56B: call    qword ptr [rbx+1F8h]
 * 000000014073A571: jmp     short loc_14073A587
 * 000000014073A573: mov     rcx, r9
 * 000000014073A576: call    qword ptr [rbx+0F8h]
 * 000000014073A57C: jmp     short loc_14073A587
 * 000000014073A57E: mov     rcx, r9
 * 000000014073A581: call    qword ptr [rbx+320h]
 * 000000014073A587: mov     [rbx+634h], edi
 * 000000014073A58D: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 000000014073A594: xor     r9d, r9d
 * 000000014073A597: jmp     short loc_14073A5A2
 * 000000014073A599: mov     rbx, rdi
 * 000000014073A59C: mov     [rdi+554h], eax
 * 000000014073A5A2: add     [rbx+57Ch], r15d
 * 000000014073A5A9: lea     rcx, [rbx+r14]
 * 000000014073A5AD: mov     [rbp+1910h+var_11F0], rcx
 * 000000014073A5B4: mov     rax, rcx
 * 000000014073A5B7: mov     edx, 30h ; '0'
 * 000000014073A5BC: mov     rdi, r12
 * 000000014073A5BF: mov     [rax], r9
 * 000000014073A5C2: add     edx, 0FFFFFFF8h
 * 000000014073A5C5: add     rax, 8
 * 000000014073A5C9: sub     rdi, r15
 * 000000014073A5CC: jnz     short loc_14073A5BF
 * 000000014073A5CE: test    edx, edx
 * 000000014073A5D0: jz      short loc_14073A5DD
 * 000000014073A5D2: mov     [rax], r9b
 * 000000014073A5D5: add     rax, r15
 * 000000014073A5D8: add     edx, 0FFFFFFFFh
 * 000000014073A5DB: jnz     short loc_14073A5D2
 * 000000014073A5DD: xor     eax, eax
 * 000000014073A5DF: mov     dword ptr [rcx], 10h
 * 000000014073A5E5: mov     [rcx+8], rax
 * 000000014073A5E9: mov     [rcx+10h], eax
 * 000000014073A5EC: mov     rdx, [rbx+588h]
 * 000000014073A5F3: mov     rax, rdx
 * 000000014073A5F6: jmp     short loc_14073A5FA
 * 000000014073A5F8: xor     edx, eax
 * 000000014073A5FA: shr     rax, 1Fh
 * 000000014073A5FE: test    rax, rax
 * 000000014073A601: jnz     short loc_14073A5F8
 * 000000014073A603: btr     edx, 1Fh
 * 000000014073A607: mov     [rbp+1910h+var_16D8], rbx
 * 000000014073A60E: mov     [rcx+14h], edx
 * 000000014073A611: lea     rcx, KdpSwitchProcessor
 * 000000014073A618: mov     rax, [rbp+1910h+var_11F0]
 * 000000014073A61F: mov     [rbp+1910h+var_1048], rax
 * 000000014073A626: mov     [rax+18h], rcx
 * 000000014073A62A: lea     rcx, KiDebugSwitchRoutine
 * 000000014073A631: mov     rax, [rbp+1910h+var_1048]
 * 000000014073A638: mov     [rax+20h], rcx
 * 000000014073A63C: cli
 * 000000014073A63D: xor     eax, eax
 * 000000014073A63F: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014073A645: jnz     short loc_14073A649
 * 000000014073A647: jmp     short loc_14073A647
 * 000000014073A649: sti
 * 000000014073A64A: mov     r14d, [rbx+554h]
 * 000000014073A651: mov     r8d, [rbx+634h]
 * 000000014073A658: lea     eax, [r14+38h]
 * 000000014073A65C: cmp     eax, [rbx+714h]
 * 000000014073A662: jbe     loc_14073A736
 * 000000014073A668: mov     edx, eax
 * 000000014073A66A: mov     rcx, rbx
 * 000000014073A66D: call    sub_140236718
 * 000000014073A672: mov     rdi, rax
 * 000000014073A675: xor     eax, eax
 * 000000014073A677: test    rdi, rdi
 * 000000014073A67A: jz      loc_140731C01
 * 000000014073A680: mov     edx, [rbx+690h]
 * 000000014073A686: test    r13b, dl
 * 000000014073A689: jnz     loc_14073A72D
 * 000000014073A68F: mov     eax, [rbx+554h]
 * 000000014073A695: and     edx, 20000000h
 * 000000014073A69B: mov     r9, [rbx+538h]
 * 000000014073A6A2: neg     edx
 * 000000014073A6A4: sbb     r8d, r8d
 * 000000014073A6A7: and     r8d, [rbx+634h]
 * 000000014073A6AE: cmp     eax, 8
 * 000000014073A6B1: jb      short loc_14073A6CC
 * 000000014073A6B3: mov     ecx, eax
 * 000000014073A6B5: shr     rcx, 3
 * 000000014073A6B9: xor     edx, edx
 * 000000014073A6BB: mov     [rbx], rdx
 * 000000014073A6BE: add     eax, 0FFFFFFF8h
 * 000000014073A6C1: add     rbx, 8
 * 000000014073A6C5: sub     rcx, r15
 * 000000014073A6C8: jnz     short loc_14073A6BB
 * 000000014073A6CA: jmp     short loc_14073A6CE
 * 000000014073A6CC: xor     edx, edx
 * 000000014073A6CE: test    eax, eax
 * 000000014073A6D0: jz      short loc_14073A6DC
 * 000000014073A6D2: mov     [rbx], dl
 * 000000014073A6D4: add     rbx, r15
 * 000000014073A6D7: add     eax, 0FFFFFFFFh
 * 000000014073A6DA: jnz     short loc_14073A6D2
 * 000000014073A6DC: mov     ebx, [rdi+634h]
 * 000000014073A6E2: mov     [rdi+634h], r8d
 * 000000014073A6E9: cmp     r8d, 3
 * 000000014073A6ED: jz      short loc_14073A71E
 * 000000014073A6EF: mov     eax, [rdi+690h]
 * 000000014073A6F5: mov     ecx, edx
 * 000000014073A6F7: and     eax, 10000000h
 * 000000014073A6FC: cmovz   ecx, r8d
 * 000000014073A700: test    ecx, ecx
 * 000000014073A702: jz      short loc_14073A713
 * 000000014073A704: lea     rcx, [r9-8]
 * 000000014073A708: mov     rdx, [rcx]
 * 000000014073A70B: call    qword ptr [rdi+1F8h]
 * 000000014073A711: jmp     short loc_14073A727
 * 000000014073A713: mov     rcx, r9
 * 000000014073A716: call    qword ptr [rdi+0F8h]
 * 000000014073A71C: jmp     short loc_14073A727
 * 000000014073A71E: mov     rcx, r9
 * 000000014073A721: call    qword ptr [rdi+320h]
 * 000000014073A727: mov     [rdi+634h], ebx
 * 000000014073A72D: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 000000014073A734: jmp     short loc_14073A73F
 * 000000014073A736: mov     rdi, rbx
 * 000000014073A739: mov     [rbx+554h], eax
 * 000000014073A73F: add     [rdi+57Ch], r15d
 * 000000014073A746: lea     rcx, [rdi+r14]
 * 000000014073A74A: mov     [rbp+1910h+var_11E0], rcx
 * 000000014073A751: mov     rax, rcx
 * 000000014073A754: xor     r8d, r8d
 * 000000014073A757: mov     edx, 30h ; '0'
 * 000000014073A75C: mov     rbx, r12
 * 000000014073A75F: mov     [rax], r8
 * 000000014073A762: add     edx, 0FFFFFFF8h
 * 000000014073A765: add     rax, 8
 * 000000014073A769: sub     rbx, r15
 * 000000014073A76C: jnz     short loc_14073A75F
 * 000000014073A76E: test    edx, edx
 * 000000014073A770: jz      short loc_14073A77D
 * 000000014073A772: mov     [rax], r8b
 * 000000014073A775: add     rax, r15
 * 000000014073A778: add     edx, 0FFFFFFFFh
 * 000000014073A77B: jnz     short loc_14073A772
 * 000000014073A77D: xor     eax, eax
 * 000000014073A77F: mov     dword ptr [rcx], 11h
 * 000000014073A785: mov     [rcx+8], rax
 * 000000014073A789: mov     [rcx+10h], eax
 * 000000014073A78C: mov     rdx, [rdi+588h]
 * 000000014073A793: mov     rax, rdx
 * 000000014073A796: shr     rax, 1Fh
 * 000000014073A79A: xor     r9d, r9d
 * 000000014073A79D: jmp     short loc_14073A7A5
 * 000000014073A79F: xor     edx, eax
 * 000000014073A7A1: shr     rax, 1Fh
 * 000000014073A7A5: test    rax, rax
 * 000000014073A7A8: jnz     short loc_14073A79F
 * 000000014073A7AA: btr     edx, 1Fh
 * 000000014073A7AE: mov     [rbp+1910h+var_16D8], rdi
 * 000000014073A7B5: mov     [rcx+14h], edx
 * 000000014073A7B8: lea     rcx, IovAllocateIrp
 * 000000014073A7BF: mov     rax, [rbp+1910h+var_11E0]
 * 000000014073A7C6: mov     [rbp+1910h+var_16B8], rax
 * 000000014073A7CD: mov     [rax+18h], rcx
 * 000000014073A7D1: lea     rcx, IopAllocateIrpWithExtension
 * 000000014073A7D8: mov     rax, [rbp+1910h+var_16B8]
 * 000000014073A7DF: mov     [rax+20h], rcx
 * 000000014073A7E3: lea     rcx, IopAllocateIrpPrivate
 * 000000014073A7EA: mov     rax, [rbp+1910h+var_16B8]
 * 000000014073A7F1: mov     [rax+28h], rcx
 * 000000014073A7F5: lea     rcx, pIoAllocateIrp
 * 000000014073A7FC: mov     rax, [rbp+1910h+var_16B8]
 * 000000014073A803: mov     [rax+30h], rcx
 * 000000014073A807: mov     r14d, [rdi+554h]
 * 000000014073A80E: mov     r8d, [rdi+634h]
 * 000000014073A815: lea     eax, [r14+30h]
 * 000000014073A819: cmp     eax, [rdi+714h]
 * 000000014073A81F: jbe     loc_14073A8F6
 * 000000014073A825: mov     edx, eax
 * 000000014073A827: mov     rcx, rdi
 * 000000014073A82A: call    sub_140236718
 * 000000014073A82F: mov     rbx, rax
 * 000000014073A832: xor     eax, eax
 * 000000014073A834: test    rbx, rbx
 * 000000014073A837: jz      loc_140731C01
 * 000000014073A83D: mov     edx, [rdi+690h]
 * 000000014073A843: test    r13b, dl
 * 000000014073A846: jnz     loc_14073A8EA
 * 000000014073A84C: mov     eax, [rdi+554h]
 * 000000014073A852: and     edx, 20000000h
 * 000000014073A858: mov     r9, [rdi+538h]
 * 000000014073A85F: neg     edx
 * 000000014073A861: sbb     r8d, r8d
 * 000000014073A864: and     r8d, [rdi+634h]
 * 000000014073A86B: cmp     eax, 8
 * 000000014073A86E: jb      short loc_14073A889
 * 000000014073A870: mov     ecx, eax
 * 000000014073A872: shr     rcx, 3
 * 000000014073A876: xor     edx, edx
 * 000000014073A878: mov     [rdi], rdx
 * 000000014073A87B: add     eax, 0FFFFFFF8h
 * 000000014073A87E: add     rdi, 8
 * 000000014073A882: sub     rcx, r15
 * 000000014073A885: jnz     short loc_14073A878
 * 000000014073A887: jmp     short loc_14073A88B
 * 000000014073A889: xor     edx, edx
 * 000000014073A88B: test    eax, eax
 * 000000014073A88D: jz      short loc_14073A899
 * 000000014073A88F: mov     [rdi], dl
 * 000000014073A891: add     rdi, r15
 * 000000014073A894: add     eax, 0FFFFFFFFh
 * 000000014073A897: jnz     short loc_14073A88F
 * 000000014073A899: mov     edi, [rbx+634h]
 * 000000014073A89F: mov     [rbx+634h], r8d
 * 000000014073A8A6: cmp     r8d, 3
 * 000000014073A8AA: jz      short loc_14073A8DB
 * 000000014073A8AC: mov     eax, [rbx+690h]
 * 000000014073A8B2: mov     ecx, edx
 * 000000014073A8B4: and     eax, 10000000h
 * 000000014073A8B9: cmovz   ecx, r8d
 * 000000014073A8BD: test    ecx, ecx
 * 000000014073A8BF: jz      short loc_14073A8D0
 * 000000014073A8C1: lea     rcx, [r9-8]
 * 000000014073A8C5: mov     rdx, [rcx]
 * 000000014073A8C8: call    qword ptr [rbx+1F8h]
 * 000000014073A8CE: jmp     short loc_14073A8E4
 * 000000014073A8D0: mov     rcx, r9
 * 000000014073A8D3: call    qword ptr [rbx+0F8h]
 * 000000014073A8D9: jmp     short loc_14073A8E4
 * 000000014073A8DB: mov     rcx, r9
 * 000000014073A8DE: call    qword ptr [rbx+320h]
 * 000000014073A8E4: mov     [rbx+634h], edi
 * 000000014073A8EA: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 000000014073A8F1: xor     r9d, r9d
 * 000000014073A8F4: jmp     short loc_14073A8FF
 * 000000014073A8F6: mov     rbx, rdi
 * 000000014073A8F9: mov     [rdi+554h], eax
 * 000000014073A8FF: add     [rbx+57Ch], r15d
 * 000000014073A906: lea     rcx, [rbx+r14]
 * 000000014073A90A: mov     [rbp+1910h+var_16A8], rcx
 * 000000014073A911: mov     rax, rcx
 * 000000014073A914: mov     edx, 30h ; '0'
 * 000000014073A919: mov     rdi, r12
 * 000000014073A91C: mov     [rax], r9
 * 000000014073A91F: add     edx, 0FFFFFFF8h
 * 000000014073A922: add     rax, 8
 * 000000014073A926: sub     rdi, r15
 * 000000014073A929: jnz     short loc_14073A91C
 * 000000014073A92B: test    edx, edx
 * 000000014073A92D: jz      short loc_14073A93A
 * 000000014073A92F: mov     [rax], r9b
 * 000000014073A932: add     rax, r15
 * 000000014073A935: add     edx, 0FFFFFFFFh
 * 000000014073A938: jnz     short loc_14073A92F
 * 000000014073A93A: xor     eax, eax
 * 000000014073A93C: mov     dword ptr [rcx], 12h
 * 000000014073A942: mov     [rcx+8], rax
 * 000000014073A946: mov     [rcx+10h], eax
 * 000000014073A949: mov     rdx, [rbx+588h]
 * 000000014073A950: mov     rax, rdx
 * 000000014073A953: shr     rax, 1Fh
 * 000000014073A957: xor     r9d, r9d
 * 000000014073A95A: jmp     short loc_14073A962
 * 000000014073A95C: xor     edx, eax
 * 000000014073A95E: shr     rax, 1Fh
 * 000000014073A962: test    rax, rax
 * 000000014073A965: jnz     short loc_14073A95C
 * 000000014073A967: btr     edx, 1Fh
 * 000000014073A96B: mov     [rbp+1910h+var_16D8], rbx
 * 000000014073A972: mov     [rcx+14h], edx
 * 000000014073A975: lea     rcx, IovCallDriver
 * 000000014073A97C: mov     rax, [rbp+1910h+var_16A8]
 * 000000014073A983: mov     [rbp+1910h+var_1698], rax
 * 000000014073A98A: mov     [rax+18h], rcx
 * 000000014073A98E: lea     rcx, IopPerfCallDriver
 * 000000014073A995: mov     rax, [rbp+1910h+var_1698]
 * 000000014073A99C: mov     [rax+20h], rcx
 * 000000014073A9A0: lea     rcx, pIofCallDriver
 * 000000014073A9A7: mov     rax, [rbp+1910h+var_1698]
 * 000000014073A9AE: mov     [rax+28h], rcx
 * 000000014073A9B2: mov     r14d, [rbx+554h]
 * 000000014073A9B9: mov     r8d, [rbx+634h]
 * 000000014073A9C0: lea     eax, [r14+38h]
 * 000000014073A9C4: cmp     eax, [rbx+714h]
 * 000000014073A9CA: jbe     loc_14073AAA1
 * 000000014073A9D0: mov     edx, eax
 * 000000014073A9D2: mov     rcx, rbx
 * 000000014073A9D5: call    sub_140236718
 * 000000014073A9DA: mov     rdi, rax
 * 000000014073A9DD: xor     eax, eax
 * 000000014073A9DF: test    rdi, rdi
 * 000000014073A9E2: jz      loc_140731C01
 * 000000014073A9E8: mov     edx, [rbx+690h]
 * 000000014073A9EE: test    r13b, dl
 * 000000014073A9F1: jnz     loc_14073AA95
 * 000000014073A9F7: mov     eax, [rbx+554h]
 * 000000014073A9FD: and     edx, 20000000h
 * 000000014073AA03: mov     r9, [rbx+538h]
 * 000000014073AA0A: neg     edx
 * 000000014073AA0C: sbb     r8d, r8d
 * 000000014073AA0F: and     r8d, [rbx+634h]
 * 000000014073AA16: cmp     eax, 8
 * 000000014073AA19: jb      short loc_14073AA34
 * 000000014073AA1B: mov     ecx, eax
 * 000000014073AA1D: shr     rcx, 3
 * 000000014073AA21: xor     edx, edx
 * 000000014073AA23: mov     [rbx], rdx
 * 000000014073AA26: add     eax, 0FFFFFFF8h
 * 000000014073AA29: add     rbx, 8
 * 000000014073AA2D: sub     rcx, r15
 * 000000014073AA30: jnz     short loc_14073AA23
 * 000000014073AA32: jmp     short loc_14073AA36
 * 000000014073AA34: xor     edx, edx
 * 000000014073AA36: test    eax, eax
 * 000000014073AA38: jz      short loc_14073AA44
 * 000000014073AA3A: mov     [rbx], dl
 * 000000014073AA3C: add     rbx, r15
 * 000000014073AA3F: add     eax, 0FFFFFFFFh
 * 000000014073AA42: jnz     short loc_14073AA3A
 * 000000014073AA44: mov     ebx, [rdi+634h]
 * 000000014073AA4A: mov     [rdi+634h], r8d
 * 000000014073AA51: cmp     r8d, 3
 * 000000014073AA55: jz      short loc_14073AA86
 * 000000014073AA57: mov     eax, [rdi+690h]
 * 000000014073AA5D: mov     ecx, edx
 * 000000014073AA5F: and     eax, 10000000h
 * 000000014073AA64: cmovz   ecx, r8d
 * 000000014073AA68: test    ecx, ecx
 * 000000014073AA6A: jz      short loc_14073AA7B
 * 000000014073AA6C: lea     rcx, [r9-8]
 * 000000014073AA70: mov     rdx, [rcx]
 * 000000014073AA73: call    qword ptr [rdi+1F8h]
 * 000000014073AA79: jmp     short loc_14073AA8F
 * 000000014073AA7B: mov     rcx, r9
 * 000000014073AA7E: call    qword ptr [rdi+0F8h]
 * 000000014073AA84: jmp     short loc_14073AA8F
 * 000000014073AA86: mov     rcx, r9
 * 000000014073AA89: call    qword ptr [rdi+320h]
 * 000000014073AA8F: mov     [rdi+634h], ebx
 * 000000014073AA95: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 000000014073AA9C: xor     r9d, r9d
 * 000000014073AA9F: jmp     short loc_14073AAAA
 * 000000014073AAA1: mov     rdi, rbx
 * 000000014073AAA4: mov     [rbx+554h], eax
 * 000000014073AAAA: add     [rdi+57Ch], r15d
 * 000000014073AAB1: lea     rcx, [rdi+r14]
 * 000000014073AAB5: mov     [rbp+1910h+var_1688], rcx
 * 000000014073AABC: mov     rax, rcx
 * 000000014073AABF: mov     edx, 30h ; '0'
 * 000000014073AAC4: mov     rbx, r12
 * 000000014073AAC7: mov     [rax], r9
 * 000000014073AACA: add     edx, 0FFFFFFF8h
 * 000000014073AACD: add     rax, 8
 * 000000014073AAD1: sub     rbx, r15
 * 000000014073AAD4: jnz     short loc_14073AAC7
 * 000000014073AAD6: test    edx, edx
 * 000000014073AAD8: jz      short loc_14073AAE5
 * 000000014073AADA: mov     [rax], r9b
 * 000000014073AADD: add     rax, r15
 * 000000014073AAE0: add     edx, 0FFFFFFFFh
 * 000000014073AAE3: jnz     short loc_14073AADA
 * 000000014073AAE5: xor     eax, eax
 * 000000014073AAE7: mov     dword ptr [rcx], 13h
 * 000000014073AAED: mov     [rcx+8], rax
 * 000000014073AAF1: mov     [rcx+10h], eax
 * 000000014073AAF4: mov     rdx, [rdi+588h]
 * 000000014073AAFB: mov     rax, rdx
 * 000000014073AAFE: jmp     short loc_14073AB02
 * 000000014073AB00: xor     edx, eax
 * 000000014073AB02: shr     rax, 1Fh
 * 000000014073AB06: test    rax, rax
 * 000000014073AB09: jnz     short loc_14073AB00
 * 000000014073AB0B: btr     edx, 1Fh
 * 000000014073AB0F: mov     [rbp+1910h+var_16D8], rdi
 * 000000014073AB16: mov     [rcx+14h], edx
 * 000000014073AB19: lea     rcx, IovCompleteRequest
 * 000000014073AB20: mov     rax, [rbp+1910h+var_1688]
 * 000000014073AB27: mov     [rbp+1910h+var_1678], rax
 * 000000014073AB2E: mov     [rax+18h], rcx
 * 000000014073AB32: lea     rcx, IopfCompleteRequest
 * 000000014073AB39: mov     rax, [rbp+1910h+var_1678]
 * 000000014073AB40: mov     [rax+20h], rcx
 * 000000014073AB44: lea     rcx, pIofCompleteRequest
 * 000000014073AB4B: mov     rax, [rbp+1910h+var_1678]
 * 000000014073AB52: mov     [rax+28h], rcx
 * 000000014073AB56: lea     rcx, IopPerfCompleteRequest
 * 000000014073AB5D: mov     rax, [rbp+1910h+var_1678]
 * 000000014073AB64: mov     [rax+30h], rcx
 * 000000014073AB68: cli
 * 000000014073AB69: xor     eax, eax
 * 000000014073AB6B: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014073AB71: jnz     short loc_14073AB75
 * 000000014073AB73: jmp     short loc_14073AB73
 * 000000014073AB75: sti
 * 000000014073AB76: mov     r14d, [rdi+554h]
 * 000000014073AB7D: mov     r8d, [rdi+634h]
 * 000000014073AB84: lea     eax, [r14+30h]
 * 000000014073AB88: cmp     eax, [rdi+714h]
 * 000000014073AB8E: jbe     loc_14073AC62
 * 000000014073AB94: mov     edx, eax
 * 000000014073AB96: mov     rcx, rdi
 * 000000014073AB99: call    sub_140236718
 * 000000014073AB9E: mov     rbx, rax
 * 000000014073ABA1: xor     eax, eax
 * 000000014073ABA3: test    rbx, rbx
 * 000000014073ABA6: jz      loc_140731C01
 * 000000014073ABAC: mov     edx, [rdi+690h]
 * 000000014073ABB2: test    r13b, dl
 * 000000014073ABB5: jnz     loc_14073AC59
 * 000000014073ABBB: mov     eax, [rdi+554h]
 * 000000014073ABC1: and     edx, 20000000h
 * 000000014073ABC7: mov     r9, [rdi+538h]
 * 000000014073ABCE: neg     edx
 * 000000014073ABD0: sbb     r8d, r8d
 * 000000014073ABD3: and     r8d, [rdi+634h]
 * 000000014073ABDA: cmp     eax, 8
 * 000000014073ABDD: jb      short loc_14073ABF8
 * 000000014073ABDF: mov     ecx, eax
 * 000000014073ABE1: shr     rcx, 3
 * 000000014073ABE5: xor     edx, edx
 * 000000014073ABE7: mov     [rdi], rdx
 * 000000014073ABEA: add     eax, 0FFFFFFF8h
 * 000000014073ABED: add     rdi, 8
 * 000000014073ABF1: sub     rcx, r15
 * 000000014073ABF4: jnz     short loc_14073ABE7
 * 000000014073ABF6: jmp     short loc_14073ABFA
 * 000000014073ABF8: xor     edx, edx
 * 000000014073ABFA: test    eax, eax
 * 000000014073ABFC: jz      short loc_14073AC08
 * 000000014073ABFE: mov     [rdi], dl
 * 000000014073AC00: add     rdi, r15
 * 000000014073AC03: add     eax, 0FFFFFFFFh
 * 000000014073AC06: jnz     short loc_14073ABFE
 * 000000014073AC08: mov     edi, [rbx+634h]
 * 000000014073AC0E: mov     [rbx+634h], r8d
 * 000000014073AC15: cmp     r8d, 3
 * 000000014073AC19: jz      short loc_14073AC4A
 * 000000014073AC1B: mov     eax, [rbx+690h]
 * 000000014073AC21: mov     ecx, edx
 * 000000014073AC23: and     eax, 10000000h
 * 000000014073AC28: cmovz   ecx, r8d
 * 000000014073AC2C: test    ecx, ecx
 * 000000014073AC2E: jz      short loc_14073AC3F
 * 000000014073AC30: lea     rcx, [r9-8]
 * 000000014073AC34: mov     rdx, [rcx]
 * 000000014073AC37: call    qword ptr [rbx+1F8h]
 * 000000014073AC3D: jmp     short loc_14073AC53
 * 000000014073AC3F: mov     rcx, r9
 * 000000014073AC42: call    qword ptr [rbx+0F8h]
 * 000000014073AC48: jmp     short loc_14073AC53
 * 000000014073AC4A: mov     rcx, r9
 * 000000014073AC4D: call    qword ptr [rbx+320h]
 * 000000014073AC53: mov     [rbx+634h], edi
 * 000000014073AC59: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 000000014073AC60: jmp     short loc_14073AC6B
 * 000000014073AC62: mov     rbx, rdi
 * 000000014073AC65: mov     [rdi+554h], eax
 * 000000014073AC6B: add     [rbx+57Ch], r15d
 * 000000014073AC72: lea     rcx, [rbx+r14]
 * 000000014073AC76: mov     [rbp+1910h+var_1668], rcx
 * 000000014073AC7D: mov     rax, rcx
 * 000000014073AC80: xor     r8d, r8d
 * 000000014073AC83: mov     edx, 30h ; '0'
 * 000000014073AC88: mov     rdi, r12
 * 000000014073AC8B: mov     [rax], r8
 * 000000014073AC8E: add     edx, 0FFFFFFF8h
 * 000000014073AC91: add     rax, 8
 * 000000014073AC95: sub     rdi, r15
 * 000000014073AC98: jnz     short loc_14073AC8B
 * 000000014073AC9A: test    edx, edx
 * 000000014073AC9C: jz      short loc_14073ACA9
 * 000000014073AC9E: mov     [rax], r8b
 * 000000014073ACA1: add     rax, r15
 * 000000014073ACA4: add     edx, 0FFFFFFFFh
 * 000000014073ACA7: jnz     short loc_14073AC9E
 * 000000014073ACA9: xor     eax, eax
 * 000000014073ACAB: mov     dword ptr [rcx], 14h
 * 000000014073ACB1: mov     [rcx+8], rax
 * 000000014073ACB5: mov     [rcx+10h], eax
 * 000000014073ACB8: mov     rdx, [rbx+588h]
 * 000000014073ACBF: mov     rax, rdx
 * 000000014073ACC2: jmp     short loc_14073ACC6
 * 000000014073ACC4: xor     edx, eax
 * 000000014073ACC6: shr     rax, 1Fh
 * 000000014073ACCA: test    rax, rax
 * 000000014073ACCD: jnz     short loc_14073ACC4
 * 000000014073ACCF: btr     edx, 1Fh
 * 000000014073ACD3: mov     [rbp+1910h+var_16D8], rbx
 * 000000014073ACDA: mov     [rcx+14h], edx
 * 000000014073ACDD: lea     rcx, IovFreeIrpPrivate
 * 000000014073ACE4: mov     rax, [rbp+1910h+var_1668]
 * 000000014073ACEB: mov     [rbp+1910h+var_1658], rax
 * 000000014073ACF2: mov     [rax+18h], rcx
 * 000000014073ACF6: lea     rcx, IopFreeIrp
 * 000000014073ACFD: mov     rax, [rbp+1910h+var_1658]
 * 000000014073AD04: mov     [rax+20h], rcx
 * 000000014073AD08: lea     rcx, pIoFreeIrp
 * 000000014073AD0F: mov     rax, [rbp+1910h+var_1658]
 * 000000014073AD16: mov     [rax+28h], rcx
 * 000000014073AD1A: cli
 * 000000014073AD1B: xor     eax, eax
 * 000000014073AD1D: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014073AD23: jnz     short loc_14073AD27
 * 000000014073AD25: jmp     short loc_14073AD25
 * 000000014073AD27: sti
 * 000000014073AD28: mov     r14d, [rbx+554h]
 * 000000014073AD2F: mov     r8d, [rbx+634h]
 * 000000014073AD36: lea     eax, [r14+30h]
 * 000000014073AD3A: cmp     eax, [rbx+714h]
 * 000000014073AD40: jbe     loc_14073AE14
 * 000000014073AD46: mov     edx, eax
 * 000000014073AD48: mov     rcx, rbx
 * 000000014073AD4B: call    sub_140236718
 * 000000014073AD50: mov     rdi, rax
 * 000000014073AD53: xor     eax, eax
 * 000000014073AD55: test    rdi, rdi
 * 000000014073AD58: jz      loc_140731C01
 * 000000014073AD5E: mov     edx, [rbx+690h]
 * 000000014073AD64: test    r13b, dl
 * 000000014073AD67: jnz     loc_14073AE0B
 * 000000014073AD6D: mov     eax, [rbx+554h]
 * 000000014073AD73: and     edx, 20000000h
 * 000000014073AD79: mov     r9, [rbx+538h]
 * 000000014073AD80: neg     edx
 * 000000014073AD82: sbb     r8d, r8d
 * 000000014073AD85: and     r8d, [rbx+634h]
 * 000000014073AD8C: cmp     eax, 8
 * 000000014073AD8F: jb      short loc_14073ADAA
 * 000000014073AD91: mov     ecx, eax
 * 000000014073AD93: shr     rcx, 3
 * 000000014073AD97: xor     edx, edx
 * 000000014073AD99: mov     [rbx], rdx
 * 000000014073AD9C: add     eax, 0FFFFFFF8h
 * 000000014073AD9F: add     rbx, 8
 * 000000014073ADA3: sub     rcx, r15
 * 000000014073ADA6: jnz     short loc_14073AD99
 * 000000014073ADA8: jmp     short loc_14073ADAC
 * 000000014073ADAA: xor     edx, edx
 * 000000014073ADAC: test    eax, eax
 * 000000014073ADAE: jz      short loc_14073ADBA
 * 000000014073ADB0: mov     [rbx], dl
 * 000000014073ADB2: add     rbx, r15
 * 000000014073ADB5: add     eax, 0FFFFFFFFh
 * 000000014073ADB8: jnz     short loc_14073ADB0
 * 000000014073ADBA: mov     ebx, [rdi+634h]
 * 000000014073ADC0: mov     [rdi+634h], r8d
 * 000000014073ADC7: cmp     r8d, 3
 * 000000014073ADCB: jz      short loc_14073ADFC
 * 000000014073ADCD: mov     eax, [rdi+690h]
 * 000000014073ADD3: mov     ecx, edx
 * 000000014073ADD5: and     eax, 10000000h
 * 000000014073ADDA: cmovz   ecx, r8d
 * 000000014073ADDE: test    ecx, ecx
 * 000000014073ADE0: jz      short loc_14073ADF1
 * 000000014073ADE2: lea     rcx, [r9-8]
 * 000000014073ADE6: mov     rdx, [rcx]
 * 000000014073ADE9: call    qword ptr [rdi+1F8h]
 * 000000014073ADEF: jmp     short loc_14073AE05
 * 000000014073ADF1: mov     rcx, r9
 * 000000014073ADF4: call    qword ptr [rdi+0F8h]
 * 000000014073ADFA: jmp     short loc_14073AE05
 * 000000014073ADFC: mov     rcx, r9
 * 000000014073ADFF: call    qword ptr [rdi+320h]
 * 000000014073AE05: mov     [rdi+634h], ebx
 * 000000014073AE0B: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 000000014073AE12: jmp     short loc_14073AE1D
 * 000000014073AE14: mov     rdi, rbx
 * 000000014073AE17: mov     [rbx+554h], eax
 * 000000014073AE1D: add     [rdi+57Ch], r15d
 * 000000014073AE24: lea     rcx, [rdi+r14]
 * 000000014073AE28: mov     [rbp+1910h+var_1648], rcx
 * 000000014073AE2F: mov     rax, rcx
 * 000000014073AE32: xor     r8d, r8d
 * 000000014073AE35: mov     edx, 30h ; '0'
 * 000000014073AE3A: mov     rbx, r12
 * 000000014073AE3D: mov     [rax], r8
 * 000000014073AE40: add     edx, 0FFFFFFF8h
 * 000000014073AE43: add     rax, 8
 * 000000014073AE47: sub     rbx, r15
 * 000000014073AE4A: jnz     short loc_14073AE3D
 * 000000014073AE4C: test    edx, edx
 * 000000014073AE4E: jz      short loc_14073AE5B
 * 000000014073AE50: mov     [rax], r8b
 * 000000014073AE53: add     rax, r15
 * 000000014073AE56: add     edx, 0FFFFFFFFh
 * 000000014073AE59: jnz     short loc_14073AE50
 * 000000014073AE5B: xor     eax, eax
 * 000000014073AE5D: mov     dword ptr [rcx], 19h
 * 000000014073AE63: mov     [rcx+8], rax
 * 000000014073AE67: mov     [rcx+10h], eax
 * 000000014073AE6A: mov     rdx, [rdi+588h]
 * 000000014073AE71: mov     rax, rdx
 * 000000014073AE74: jmp     short loc_14073AE78
 * 000000014073AE76: xor     edx, eax
 * 000000014073AE78: shr     rax, 1Fh
 * 000000014073AE7C: test    rax, rax
 * 000000014073AE7F: jnz     short loc_14073AE76
 * 000000014073AE81: btr     edx, 1Fh
 * 000000014073AE85: mov     [rbp+1910h+var_16D8], rdi
 * 000000014073AE8C: mov     [rcx+14h], edx
 * 000000014073AE8F: cli
 * 000000014073AE90: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014073AE96: jnz     short loc_14073AE9A
 * 000000014073AE98: jmp     short loc_14073AE98
 * 000000014073AE9A: sti
 * 000000014073AE9B: mov     r15d, [rdi+554h]
 * 000000014073AEA2: mov     r8d, [rdi+634h]
 * 000000014073AEA9: lea     eax, [r15+30h]
 * 000000014073AEAD: cmp     eax, [rdi+714h]
 * 000000014073AEB3: jbe     loc_14073AF94
 * 000000014073AEB9: mov     edx, eax
 * 000000014073AEBB: mov     rcx, rdi
 * 000000014073AEBE: call    sub_140236718
 * 000000014073AEC3: mov     r14, rax
 * 000000014073AEC6: xor     eax, eax
 * 000000014073AEC8: test    r14, r14
 * 000000014073AECB: jz      loc_140731C01
 * 000000014073AED1: mov     edx, [rdi+690h]
 * 000000014073AED7: test    r13b, dl
 * 000000014073AEDA: jnz     loc_14073AF8A
 * 000000014073AEE0: mov     eax, [rdi+554h]
 * 000000014073AEE6: and     edx, 20000000h
 * 000000014073AEEC: mov     rbx, [rdi+538h]
 * 000000014073AEF3: neg     edx
 * 000000014073AEF5: mov     r9d, 1
 * 000000014073AEFB: sbb     edx, edx
 * 000000014073AEFD: and     edx, [rdi+634h]
 * 000000014073AF03: cmp     eax, 8
 * 000000014073AF06: jb      short loc_14073AF22
 * 000000014073AF08: mov     ecx, eax
 * 000000014073AF0A: shr     rcx, 3
 * 000000014073AF0E: xor     r8d, r8d
 * 000000014073AF11: mov     [rdi], r8
 * 000000014073AF14: add     eax, 0FFFFFFF8h
 * 000000014073AF17: add     rdi, 8
 * 000000014073AF1B: sub     rcx, r9
 * 000000014073AF1E: jnz     short loc_14073AF11
 * 000000014073AF20: jmp     short loc_14073AF25
 * 000000014073AF22: xor     r8d, r8d
 * 000000014073AF25: test    eax, eax
 * 000000014073AF27: jz      short loc_14073AF34
 * 000000014073AF29: mov     [rdi], r8b
 * 000000014073AF2C: add     rdi, r9
 * 000000014073AF2F: add     eax, 0FFFFFFFFh
 * 000000014073AF32: jnz     short loc_14073AF29
 * 000000014073AF34: mov     edi, [r14+634h]
 * 000000014073AF3B: mov     [r14+634h], edx
 * 000000014073AF42: cmp     edx, 3
 * 000000014073AF45: jz      short loc_14073AF79
 * 000000014073AF47: mov     eax, [r14+690h]
 * 000000014073AF4E: mov     ecx, r8d
 * 000000014073AF51: and     eax, 10000000h
 * 000000014073AF56: cmovz   ecx, edx
 * 000000014073AF59: test    ecx, ecx
 * 000000014073AF5B: jz      short loc_14073AF6D
 * 000000014073AF5D: lea     rcx, [rbx-8]
 * 000000014073AF61: mov     rdx, [rcx]
 * 000000014073AF64: call    qword ptr [r14+1F8h]
 * 000000014073AF6B: jmp     short loc_14073AF83
 * 000000014073AF6D: mov     rcx, rbx
 * 000000014073AF70: call    qword ptr [r14+0F8h]
 * 000000014073AF77: jmp     short loc_14073AF83
 * 000000014073AF79: mov     rcx, rbx
 * 000000014073AF7C: call    qword ptr [r14+320h]
 * 000000014073AF83: mov     [r14+634h], edi
 * 000000014073AF8A: and     dword ptr [r14+690h], 0FFFFFFFBh
 * 000000014073AF92: jmp     short loc_14073AF9D
 * 000000014073AF94: mov     r14, rdi
 * 000000014073AF97: mov     [rdi+554h], eax
 * 000000014073AF9D: mov     r11d, 1
 * 000000014073AFA3: lea     rcx, [r14+r15]
 * 000000014073AFA7: add     [r14+57Ch], r11d
 * 000000014073AFAE: mov     rax, rcx
 * 000000014073AFB1: mov     [rbp+1910h+var_1638], rcx
 * 000000014073AFB8: mov     rbx, r12
 * 000000014073AFBB: xor     edi, edi
 * 000000014073AFBD: lea     edx, [r11+2Fh]
 * 000000014073AFC1: mov     [rax], rdi
 * 000000014073AFC4: add     edx, 0FFFFFFF8h
 * 000000014073AFC7: add     rax, 8
 * 000000014073AFCB: sub     rbx, r11
 * 000000014073AFCE: jnz     short loc_14073AFC1
 * 000000014073AFD0: test    edx, edx
 * 000000014073AFD2: jz      short loc_14073AFDF
 * 000000014073AFD4: mov     [rax], dil
 * 000000014073AFD7: add     rax, r11
 * 000000014073AFDA: add     edx, 0FFFFFFFFh
 * 000000014073AFDD: jnz     short loc_14073AFD4
 * 000000014073AFDF: xor     eax, eax
 * 000000014073AFE1: mov     dword ptr [rcx], 18h
 * 000000014073AFE7: mov     [rcx+8], rax
 * 000000014073AFEB: mov     [rcx+10h], eax
 * 000000014073AFEE: mov     rdx, [r14+588h]
 * 000000014073AFF5: mov     rax, rdx
 * 000000014073AFF8: jmp     short loc_14073AFFC
 * 000000014073AFFA: xor     edx, eax
 * 000000014073AFFC: shr     rax, 1Fh
 * 000000014073B000: test    rax, rax
 * 000000014073B003: jnz     short loc_14073AFFA
 * 000000014073B005: btr     edx, 1Fh
 * 000000014073B009: mov     [rbp+1910h+var_16D8], r14
 * 000000014073B010: mov     [rcx+14h], edx
 * 000000014073B013: lea     r12, ExpInitializeCallback
 * 000000014073B01A: cmp     cs:ExpInitializeCallback, rax
 * 000000014073B021: mov     r15d, eax
 * 000000014073B024: jz      short loc_14073B037
 * 000000014073B026: xor     ecx, ecx
 * 000000014073B028: add     r15d, r11d
 * 000000014073B02B: mov     eax, r15d
 * 000000014073B02E: add     rax, rax
 * 000000014073B031: cmp     [r12+rax*8], rcx
 * 000000014073B035: jnz     short loc_14073B028
 * 000000014073B037: mov     r13d, [r14+554h]
 * 000000014073B03E: mov     r8d, [r14+634h]
 * 000000014073B045: shl     r15d, 4
 * 000000014073B049: lea     eax, [r13+30h]
 * 000000014073B04D: cmp     eax, [r14+714h]
 * 000000014073B054: jbe     loc_14073B138
 * 000000014073B05A: mov     edx, eax
 * 000000014073B05C: mov     rcx, r14
 * 000000014073B05F: call    sub_140236718
 * 000000014073B064: mov     rbx, rax
 * 000000014073B067: xor     eax, eax
 * 000000014073B069: test    rbx, rbx
 * 000000014073B06C: jz      loc_140731C01
 * 000000014073B072: mov     edx, [r14+690h]
 * 000000014073B079: test    dl, 4
 * 000000014073B07C: jnz     loc_14073B129
 * 000000014073B082: mov     eax, [r14+554h]
 * 000000014073B089: and     edx, 20000000h
 * 000000014073B08F: mov     rdi, [r14+538h]
 * 000000014073B096: neg     edx
 * 000000014073B098: mov     r9d, 1
 * 000000014073B09E: sbb     edx, edx
 * 000000014073B0A0: and     edx, [r14+634h]
 * 000000014073B0A7: cmp     eax, 8
 * 000000014073B0AA: jb      short loc_14073B0C6
 * 000000014073B0AC: mov     ecx, eax
 * 000000014073B0AE: shr     rcx, 3
 * 000000014073B0B2: xor     r8d, r8d
 * 000000014073B0B5: mov     [r14], r8
 * 000000014073B0B8: add     eax, 0FFFFFFF8h
 * 000000014073B0BB: add     r14, 8
 * 000000014073B0BF: sub     rcx, r9
 * 000000014073B0C2: jnz     short loc_14073B0B5
 * 000000014073B0C4: jmp     short loc_14073B0C9
 * 000000014073B0C6: xor     r8d, r8d
 * 000000014073B0C9: test    eax, eax
 * 000000014073B0CB: jz      short loc_14073B0D8
 * 000000014073B0CD: mov     [r14], r8b
 * 000000014073B0D0: add     r14, r9
 * 000000014073B0D3: add     eax, 0FFFFFFFFh
 * 000000014073B0D6: jnz     short loc_14073B0CD
 * 000000014073B0D8: mov     r14d, [rbx+634h]
 * 000000014073B0DF: mov     [rbx+634h], edx
 * 000000014073B0E5: cmp     edx, 3
 * 000000014073B0E8: jz      short loc_14073B119
 * 000000014073B0EA: mov     eax, [rbx+690h]
 * 000000014073B0F0: mov     ecx, r8d
 * 000000014073B0F3: and     eax, 10000000h
 * 000000014073B0F8: cmovz   ecx, edx
 * 000000014073B0FB: test    ecx, ecx
 * 000000014073B0FD: jz      short loc_14073B10E
 * 000000014073B0FF: lea     rcx, [rdi-8]
 * 000000014073B103: mov     rdx, [rcx]
 * 000000014073B106: call    qword ptr [rbx+1F8h]
 * 000000014073B10C: jmp     short loc_14073B122
 * 000000014073B10E: mov     rcx, rdi
 * 000000014073B111: call    qword ptr [rbx+0F8h]
 * 000000014073B117: jmp     short loc_14073B122
 * 000000014073B119: mov     rcx, rdi
 * 000000014073B11C: call    qword ptr [rbx+320h]
 * 000000014073B122: mov     [rbx+634h], r14d
 * 000000014073B129: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 000000014073B130: mov     r11d, 1
 * 000000014073B136: jmp     short loc_14073B142
 * 000000014073B138: mov     rbx, r14
 * 000000014073B13B: mov     [r14+554h], eax
 * 000000014073B142: add     [rbx+57Ch], r11d
 * 000000014073B149: lea     r9, [rbx+r13]
 * 000000014073B14D: mov     ecx, 30h ; '0'
 * 000000014073B152: mov     [rbp+1910h+var_1628], r9
 * 000000014073B159: mov     rax, r9
 * 000000014073B15C: xor     edi, edi
 * 000000014073B15E: lea     edx, [rcx-2Ah]
 * 000000014073B161: mov     [rax], rdi
 * 000000014073B164: add     ecx, 0FFFFFFF8h
 * 000000014073B167: add     rax, 8
 * 000000014073B16B: sub     rdx, r11
 * 000000014073B16E: jnz     short loc_14073B161
 * 000000014073B170: test    ecx, ecx
 * 000000014073B172: jz      short loc_14073B17F
 * 000000014073B174: mov     [rax], dil
 * 000000014073B177: add     rax, r11
 * 000000014073B17A: add     ecx, 0FFFFFFFFh
 * 000000014073B17D: jnz     short loc_14073B174
 * 000000014073B17F: mov     dword ptr [r9], 1Dh
 * 000000014073B186: mov     rax, r12
 * 000000014073B189: mov     [r9+8], r12
 * 000000014073B18D: mov     [r9+10h], r15d
 * 000000014073B191: add     [rbx+598h], r15d
 * 000000014073B198: mov     r10d, [rbx+584h]
 * 000000014073B19F: mov     rdx, [rbx+588h]
 * 000000014073B1A6: mov     ecx, r15d
 * 000000014073B1A9: add     rcx, r12
 * 000000014073B1AC: cmp     r12, rcx
 * 000000014073B1AF: jnb     short loc_14073B1BD
 * 000000014073B1B1: prefetchnta byte ptr [rax]
 * 000000014073B1B4: add     rax, 40h ; '@'
 * 000000014073B1B8: cmp     rax, rcx
 * 000000014073B1BB: jb      short loc_14073B1B1
 * 000000014073B1BD: mov     edi, r15d
 * 000000014073B1C0: cmp     r15d, 8
 * 000000014073B1C4: jb      short loc_14073B1E3
 * 000000014073B1C6: mov     r8d, r15d
 * 000000014073B1C9: shr     r8, 3
 * 000000014073B1CD: xor     rdx, [r12]
 * 000000014073B1D1: mov     ecx, r10d
 * 000000014073B1D4: rol     rdx, cl
 * 000000014073B1D7: add     r12, 8
 * 000000014073B1DB: add     edi, 0FFFFFFF8h
 * 000000014073B1DE: sub     r8, r11
 * 000000014073B1E1: jnz     short loc_14073B1CD
 * 000000014073B1E3: test    edi, edi
 * 000000014073B1E5: jz      short loc_14073B1FD
 * 000000014073B1E7: movzx   eax, byte ptr [r12]
 * 000000014073B1EC: mov     ecx, r10d
 * 000000014073B1EF: xor     rdx, rax
 * 000000014073B1F2: add     r12, r11
 * 000000014073B1F5: rol     rdx, cl
 * 000000014073B1F8: add     edi, 0FFFFFFFFh
 * 000000014073B1FB: jnz     short loc_14073B1E7
 * 000000014073B1FD: mov     rax, rdx
 * 000000014073B200: shr     rax, 1Fh
 * 000000014073B204: xor     r10d, r10d
 * 000000014073B207: jmp     short loc_14073B20F
 * 000000014073B209: xor     edx, eax
 * 000000014073B20B: shr     rax, 1Fh
 * 000000014073B20F: test    rax, rax
 * 000000014073B212: jnz     short loc_14073B209
 * 000000014073B214: btr     edx, 1Fh
 * 000000014073B218: mov     [r9+14h], edx
 * 000000014073B21C: mov     rax, [rbp+1910h+var_1628]
 * 000000014073B223: mov     [rbp+1910h+var_1618], rax
 * 000000014073B22A: add     [rbx+598h], r15d
 * 000000014073B231: test    dword ptr [rbx+690h], 40000000h
 * 000000014073B23B: jz      loc_14073B46B
 * 000000014073B241: mov     rax, [rbp+1910h+var_1618]
 * 000000014073B248: mov     r13d, [rbx+554h]
 * 000000014073B24F: mov     r8d, [rbx+634h]
 * 000000014073B256: mov     r15d, [rax+10h]
 * 000000014073B25A: mov     r14, [rax+8]
 * 000000014073B25E: lea     eax, [r13+30h]
 * 000000014073B262: cmp     eax, [rbx+714h]
 * 000000014073B268: jbe     loc_14073B349
 * 000000014073B26E: mov     edx, eax
 * 000000014073B270: mov     rcx, rbx
 * 000000014073B273: call    sub_140236718
 * 000000014073B278: mov     rdi, rax
 * 000000014073B27B: xor     eax, eax
 * 000000014073B27D: test    rdi, rdi
 * 000000014073B280: jz      loc_140731C01
 * 000000014073B286: mov     edx, [rbx+690h]
 * 000000014073B28C: test    dl, 4
 * 000000014073B28F: jnz     loc_14073B339
 * 000000014073B295: mov     eax, [rbx+554h]
 * 000000014073B29B: and     edx, 20000000h
 * 000000014073B2A1: mov     r9, [rbx+538h]
 * 000000014073B2A8: neg     edx
 * 000000014073B2AA: mov     r10d, 1
 * 000000014073B2B0: sbb     r8d, r8d
 * 000000014073B2B3: and     r8d, [rbx+634h]
 * 000000014073B2BA: cmp     eax, 8
 * 000000014073B2BD: jb      short loc_14073B2D8
 * 000000014073B2BF: mov     ecx, eax
 * 000000014073B2C1: shr     rcx, 3
 * 000000014073B2C5: xor     edx, edx
 * 000000014073B2C7: mov     [rbx], rdx
 * 000000014073B2CA: add     eax, 0FFFFFFF8h
 * 000000014073B2CD: add     rbx, 8
 * 000000014073B2D1: sub     rcx, r10
 * 000000014073B2D4: jnz     short loc_14073B2C7
 * 000000014073B2D6: jmp     short loc_14073B2DA
 * 000000014073B2D8: xor     edx, edx
 * 000000014073B2DA: test    eax, eax
 * 000000014073B2DC: jz      short loc_14073B2E8
 * 000000014073B2DE: mov     [rbx], dl
 * 000000014073B2E0: add     rbx, r10
 * 000000014073B2E3: add     eax, 0FFFFFFFFh
 * 000000014073B2E6: jnz     short loc_14073B2DE
 * 000000014073B2E8: mov     ebx, [rdi+634h]
 * 000000014073B2EE: mov     [rdi+634h], r8d
 * 000000014073B2F5: cmp     r8d, 3
 * 000000014073B2F9: jz      short loc_14073B32A
 * 000000014073B2FB: mov     eax, [rdi+690h]
 * 000000014073B301: mov     ecx, edx
 * 000000014073B303: and     eax, 10000000h
 * 000000014073B308: cmovz   ecx, r8d
 * 000000014073B30C: test    ecx, ecx
 * 000000014073B30E: jz      short loc_14073B31F
 * 000000014073B310: lea     rcx, [r9-8]
 * 000000014073B314: mov     rdx, [rcx]
 * 000000014073B317: call    qword ptr [rdi+1F8h]
 * 000000014073B31D: jmp     short loc_14073B333
 * 000000014073B31F: mov     rcx, r9
 * 000000014073B322: call    qword ptr [rdi+0F8h]
 * 000000014073B328: jmp     short loc_14073B333
 * 000000014073B32A: mov     rcx, r9
 * 000000014073B32D: call    qword ptr [rdi+320h]
 * 000000014073B333: mov     [rdi+634h], ebx
 * 000000014073B339: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 000000014073B340: xor     r10d, r10d
 * 000000014073B343: lea     r11d, [r10+1]
 * 000000014073B347: jmp     short loc_14073B352
 * 000000014073B349: mov     rdi, rbx
 * 000000014073B34C: mov     [rbx+554h], eax
 * 000000014073B352: add     [rdi+57Ch], r11d
 * 000000014073B359: lea     rbx, [rdi+r13]
 * 000000014073B35D: mov     ecx, 30h ; '0'
 * 000000014073B362: mov     [rbp+1910h+var_1608], rbx
 * 000000014073B369: mov     rax, rbx
 * 000000014073B36C: mov     r12d, 0FFFFFFF8h
 * 000000014073B372: lea     edx, [rcx-2Ah]
 * 000000014073B375: mov     [rax], r10
 * 000000014073B378: add     ecx, r12d
 * 000000014073B37B: add     rax, 8
 * 000000014073B37F: sub     rdx, r11
 * 000000014073B382: jnz     short loc_14073B375
 * 000000014073B384: test    ecx, ecx
 * 000000014073B386: jz      short loc_14073B393
 * 000000014073B388: mov     [rax], r10b
 * 000000014073B38B: add     rax, r11
 * 000000014073B38E: add     ecx, 0FFFFFFFFh
 * 000000014073B391: jnz     short loc_14073B388
 * 000000014073B393: mov     eax, 20h ; ' '
 * 000000014073B398: mov     [rbx], eax
 * 000000014073B39A: mov     [rbx+8], r14
 * 000000014073B39E: test    r15d, r15d
 * 000000014073B3A1: jz      short loc_14073B3BB
 * 000000014073B3A3: lea     r9, [rbx+18h]
 * 000000014073B3A7: mov     r8d, r15d
 * 000000014073B3AA: mov     rdx, r14
 * 000000014073B3AD: mov     rcx, rdi
 * 000000014073B3B0: call    sub_14014F138
 * 000000014073B3B5: mov     r11d, 1
 * 000000014073B3BB: mov     [rbx+10h], r15d
 * 000000014073B3BF: lea     rcx, [r14+r15]
 * 000000014073B3C3: add     [rdi+598h], r15d
 * 000000014073B3CA: mov     rax, r14
 * 000000014073B3CD: mov     r9d, [rdi+584h]
 * 000000014073B3D4: mov     rdx, [rdi+588h]
 * 000000014073B3DB: cmp     r14, rcx
 * 000000014073B3DE: jnb     short loc_14073B3EC
 * 000000014073B3E0: prefetchnta byte ptr [rax]
 * 000000014073B3E3: add     rax, 40h ; '@'
 * 000000014073B3E7: cmp     rax, rcx
 * 000000014073B3EA: jb      short loc_14073B3E0
 * 000000014073B3EC: mov     r8d, r15d
 * 000000014073B3EF: cmp     r15d, 8
 * 000000014073B3F3: jb      short loc_14073B411
 * 000000014073B3F5: mov     rax, r15
 * 000000014073B3F8: shr     rax, 3
 * 000000014073B3FC: xor     rdx, [r14]
 * 000000014073B3FF: mov     ecx, r9d
 * 000000014073B402: rol     rdx, cl
 * 000000014073B405: add     r14, 8
 * 000000014073B409: add     r8d, r12d
 * 000000014073B40C: sub     rax, r11
 * 000000014073B40F: jnz     short loc_14073B3FC
 * 000000014073B411: test    r8d, r8d
 * 000000014073B414: jz      short loc_14073B42C
 * 000000014073B416: movzx   eax, byte ptr [r14]
 * 000000014073B41A: mov     ecx, r9d
 * 000000014073B41D: xor     rdx, rax
 * 000000014073B420: add     r14, r11
 * 000000014073B423: rol     rdx, cl
 * 000000014073B426: add     r8d, 0FFFFFFFFh
 * 000000014073B42A: jnz     short loc_14073B416
 * 000000014073B42C: mov     rax, rdx
 * 000000014073B42F: shr     rax, 1Fh
 * 000000014073B433: xor     ecx, ecx
 * 000000014073B435: jmp     short loc_14073B43D
 * 000000014073B437: xor     edx, eax
 * 000000014073B439: shr     rax, 1Fh
 * 000000014073B43D: test    rax, rax
 * 000000014073B440: jnz     short loc_14073B437
 * 000000014073B442: btr     edx, 1Fh
 * 000000014073B446: mov     [rbx+14h], edx
 * 000000014073B449: mov     rbx, rdi
 * 000000014073B44C: mov     rax, [rbp+1910h+var_1608]
 * 000000014073B453: mov     [rbp+1910h+var_15F8], rax
 * 000000014073B45A: add     [rdi+598h], r15d
 * 000000014073B461: mov     rax, [rbp+1910h+var_15F8]
 * 000000014073B468: mov     [rax+28h], ecx
 * 000000014073B46B: xor     eax, eax
 * 000000014073B46D: mov     [rbp+1910h+var_16D8], rbx
 * 000000014073B474: test    rbx, rbx
 * 000000014073B477: jz      loc_140731C01
 * 000000014073B47D: cli
 * 000000014073B47E: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014073B484: jnz     short loc_14073B488
 * 000000014073B486: jmp     short loc_14073B486
 * 000000014073B488: sti
 * 000000014073B489: mov     rax, cs:ObpTypeObjectType
 * 000000014073B490: xor     edi, edi
 * 000000014073B492: mov     r13d, [rbx+554h]
 * 000000014073B499: mov     r12d, edi
 * 000000014073B49C: mov     r8d, [rbx+634h]
 * 000000014073B4A3: mov     eax, [rax+2Ch]
 * 000000014073B4A6: lea     r9d, [rdi+20h]
 * 000000014073B4AA: mov     r15d, eax
 * 000000014073B4AD: mov     dword ptr [rsp+1A10h+Src], eax
 * 000000014073B4B1: shl     r15d, 3
 * 000000014073B4B5: lea     eax, [r13+30h]
 * 000000014073B4B9: cmp     dword ptr [rbx+5A8h], 7
 * 000000014073B4C0: cmovz   r12d, r9d
 * 000000014073B4C4: cmp     eax, [rbx+714h]
 * 000000014073B4CA: jbe     loc_14073B5B1
 * 000000014073B4D0: mov     edx, eax
 * 000000014073B4D2: mov     rcx, rbx
 * 000000014073B4D5: call    sub_140236718
 * 000000014073B4DA: mov     r14, rax
 * 000000014073B4DD: xor     eax, eax
 * 000000014073B4DF: test    r14, r14
 * 000000014073B4E2: jz      loc_140731C01
 * 000000014073B4E8: mov     edx, [rbx+690h]
 * 000000014073B4EE: test    dl, 4
 * 000000014073B4F1: jnz     loc_14073B5A1
 * 000000014073B4F7: mov     eax, [rbx+554h]
 * 000000014073B4FD: and     edx, 20000000h
 * 000000014073B503: mov     rdi, [rbx+538h]
 * 000000014073B50A: neg     edx
 * 000000014073B50C: mov     r9d, 1
 * 000000014073B512: sbb     edx, edx
 * 000000014073B514: and     edx, [rbx+634h]
 * 000000014073B51A: cmp     eax, 8
 * 000000014073B51D: jb      short loc_14073B539
 * 000000014073B51F: mov     ecx, eax
 * 000000014073B521: shr     rcx, 3
 * 000000014073B525: xor     r8d, r8d
 * 000000014073B528: mov     [rbx], r8
 * 000000014073B52B: add     eax, 0FFFFFFF8h
 * 000000014073B52E: add     rbx, 8
 * 000000014073B532: sub     rcx, r9
 * 000000014073B535: jnz     short loc_14073B528
 * 000000014073B537: jmp     short loc_14073B53C
 * 000000014073B539: xor     r8d, r8d
 * 000000014073B53C: test    eax, eax
 * 000000014073B53E: jz      short loc_14073B54B
 * 000000014073B540: mov     [rbx], r8b
 * 000000014073B543: add     rbx, r9
 * 000000014073B546: add     eax, 0FFFFFFFFh
 * 000000014073B549: jnz     short loc_14073B540
 * 000000014073B54B: mov     ebx, [r14+634h]
 * 000000014073B552: mov     [r14+634h], edx
 * 000000014073B559: cmp     edx, 3
 * 000000014073B55C: jz      short loc_14073B590
 * 000000014073B55E: mov     eax, [r14+690h]
 * 000000014073B565: mov     ecx, r8d
 * 000000014073B568: and     eax, 10000000h
 * 000000014073B56D: cmovz   ecx, edx
 * 000000014073B570: test    ecx, ecx
 * 000000014073B572: jz      short loc_14073B584
 * 000000014073B574: lea     rcx, [rdi-8]
 * 000000014073B578: mov     rdx, [rcx]
 * 000000014073B57B: call    qword ptr [r14+1F8h]
 * 000000014073B582: jmp     short loc_14073B59A
 * 000000014073B584: mov     rcx, rdi
 * 000000014073B587: call    qword ptr [r14+0F8h]
 * 000000014073B58E: jmp     short loc_14073B59A
 * 000000014073B590: mov     rcx, rdi
 * 000000014073B593: call    qword ptr [r14+320h]
 * 000000014073B59A: mov     [r14+634h], ebx
 * 000000014073B5A1: and     dword ptr [r14+690h], 0FFFFFFFBh
 * 000000014073B5A9: xor     edi, edi
 * 000000014073B5AB: lea     r9d, [rdi+20h]
 * 000000014073B5AF: jmp     short loc_14073B5BA
 * 000000014073B5B1: mov     r14, rbx
 * 000000014073B5B4: mov     [rbx+554h], eax
 * 000000014073B5BA: mov     r11d, 1
 * 000000014073B5C0: lea     rbx, [r14+r13]
 * 000000014073B5C4: add     [r14+57Ch], r11d
 * 000000014073B5CB: mov     rax, rbx
 * 000000014073B5CE: mov     [rbp+1910h+var_15E8], rbx
 * 000000014073B5D5: lea     r13d, [r11+5]
 * 000000014073B5D9: mov     edx, r13d
 * 000000014073B5DC: lea     ecx, [r11+2Fh]
 * 000000014073B5E0: mov     [rax], rdi
 * 000000014073B5E3: add     ecx, 0FFFFFFF8h
 * 000000014073B5E6: add     rax, 8
 * 000000014073B5EA: sub     rdx, r11
 * 000000014073B5ED: jnz     short loc_14073B5E0
 * 000000014073B5EF: test    ecx, ecx
 * 000000014073B5F1: jz      short loc_14073B5FE
 * 000000014073B5F3: mov     [rax], dil
 * 000000014073B5F6: add     rax, r11
 * 000000014073B5F9: add     ecx, 0FFFFFFFFh
 * 000000014073B5FC: jnz     short loc_14073B5F3
 * 000000014073B5FE: mov     [rbx], r12d
 * 000000014073B601: lea     rdi, ObpObjectTypes
 * 000000014073B608: mov     [rbx+8], rdi
 * 000000014073B60C: cmp     r12d, r9d
 * 000000014073B60F: jnz     short loc_14073B62E
 * 000000014073B611: test    r15d, r15d
 * 000000014073B614: jz      short loc_14073B62E
 * 000000014073B616: lea     r9, [rbx+18h]
 * 000000014073B61A: mov     r8d, r15d
 * 000000014073B61D: mov     rdx, rdi
 * 000000014073B620: mov     rcx, r14
 * 000000014073B623: call    sub_14014F138
 * 000000014073B628: mov     r11d, 1
 * 000000014073B62E: mov     [rbx+10h], r15d
 * 000000014073B632: mov     r8, rdi
 * 000000014073B635: add     [r14+598h], r15d
 * 000000014073B63C: mov     rax, rdi
 * 000000014073B63F: mov     r9d, [r14+584h]
 * 000000014073B646: mov     rdx, [r14+588h]
 * 000000014073B64D: mov     ecx, r15d
 * 000000014073B650: add     rcx, rdi
 * 000000014073B653: cmp     rdi, rcx
 * 000000014073B656: jnb     short loc_14073B664
 * 000000014073B658: prefetchnta byte ptr [rax]
 * 000000014073B65B: add     rax, 40h ; '@'
 * 000000014073B65F: cmp     rax, rcx
 * 000000014073B662: jb      short loc_14073B658
 * 000000014073B664: mov     edi, r15d
 * 000000014073B667: cmp     r15d, 8
 * 000000014073B66B: jb      short loc_14073B689
 * 000000014073B66D: mov     eax, r15d
 * 000000014073B670: shr     rax, 3
 * 000000014073B674: xor     rdx, [r8]
 * 000000014073B677: mov     ecx, r9d
 * 000000014073B67A: rol     rdx, cl
 * 000000014073B67D: add     r8, 8
 * 000000014073B681: add     edi, 0FFFFFFF8h
 * 000000014073B684: sub     rax, r11
 * 000000014073B687: jnz     short loc_14073B674
 * 000000014073B689: test    edi, edi
 * 000000014073B68B: jz      short loc_14073B6A2
 * 000000014073B68D: movzx   eax, byte ptr [r8]
 * 000000014073B691: mov     ecx, r9d
 * 000000014073B694: xor     rdx, rax
 * 000000014073B697: add     r8, r11
 * 000000014073B69A: rol     rdx, cl
 * 000000014073B69D: add     edi, 0FFFFFFFFh
 * 000000014073B6A0: jnz     short loc_14073B68D
 * 000000014073B6A2: mov     rax, rdx
 * 000000014073B6A5: shr     rax, 1Fh
 * 000000014073B6A9: xor     ecx, ecx
 * 000000014073B6AB: jmp     short loc_14073B6B3
 * 000000014073B6AD: xor     edx, eax
 * 000000014073B6AF: shr     rax, 1Fh
 * 000000014073B6B3: test    rax, rax
 * 000000014073B6B6: jnz     short loc_14073B6AD
 * 000000014073B6B8: btr     edx, 1Fh
 * 000000014073B6BC: mov     dword ptr [rsp+1A10h+var_19B8], eax
 * 000000014073B6C0: mov     [rbx+14h], edx
 * 000000014073B6C3: add     [r14+598h], r15d
 * 000000014073B6CA: cmp     dword ptr [rsp+1A10h+Src], eax
 * 000000014073B6CE: jbe     loc_14073BC8B
 * 000000014073B6D4: mov     r10, rax
 * 000000014073B6D7: mov     [rbp+1910h+var_1988], rax
 * 000000014073B6DB: mov     eax, dword ptr [rsp+1A10h+Src]
 * 000000014073B6DF: lea     rdx, ObpObjectTypes
 * 000000014073B6E6: xor     r9d, r9d
 * 000000014073B6E9: mov     r10, [rdx+r10*8]
 * 000000014073B6ED: mov     [rsp+1A10h+var_19B0], r10
 * 000000014073B6F2: test    r10, r10
 * 000000014073B6F5: jz      loc_14073BC6F
 * 000000014073B6FB: lea     r13, [r10-30h]
 * 000000014073B6FF: mov     al, [r13+1Ah]
 * 000000014073B703: test    al, 2
 * 000000014073B705: jz      short loc_14073B721
 * 000000014073B707: movzx   eax, al
 * 000000014073B70A: lea     rbx, cs:140000000h
 * 000000014073B711: and     eax, 3
 * 000000014073B714: movzx   eax, byte ptr [rax+rbx+2E1680h]
 * 000000014073B71C: sub     r13, rax
 * 000000014073B71F: jmp     short loc_14073B724
 * 000000014073B721: mov     r13, r9
 * 000000014073B724: test    r13, r13
 * 000000014073B727: jz      loc_14073BC65
 * 000000014073B72D: movzx   eax, word ptr [r13+8]
 * 000000014073B732: test    ax, ax
 * 000000014073B735: jz      loc_14073BC65
 * 000000014073B73B: cmp     [r10+28h], r9b
 * 000000014073B73F: jz      loc_14073BC65
 * 000000014073B745: mov     r12d, [r14+554h]
 * 000000014073B74C: lea     r15, [r10+70h]
 * 000000014073B750: mov     r8d, [r14+634h]
 * 000000014073B757: movzx   r11d, ax
 * 000000014073B75B: add     r11d, 1Ah
 * 000000014073B75F: mov     dword ptr [rsp+1A10h+var_19A8], r11d
 * 000000014073B764: lea     ecx, [r11+7]
 * 000000014073B768: and     ecx, 0FFFFFFF8h
 * 000000014073B76B: add     ecx, 30h ; '0'
 * 000000014073B76E: add     ecx, r12d
 * 000000014073B771: cmp     ecx, [r14+714h]
 * 000000014073B778: jbe     loc_14073B85A
 * 000000014073B77E: mov     edx, ecx
 * 000000014073B780: mov     rcx, r14
 * 000000014073B783: call    sub_140236718
 * 000000014073B788: xor     r9d, r9d
 * 000000014073B78B: mov     rbx, rax
 * 000000014073B78E: test    rax, rax
 * 000000014073B791: jz      loc_140731C01
 * 000000014073B797: mov     edx, [r14+690h]
 * 000000014073B79E: test    dl, 4
 * 000000014073B7A1: jnz     loc_14073B847
 * 000000014073B7A7: mov     eax, [r14+554h]
 * 000000014073B7AE: lea     r8d, [r9+1]
 * 000000014073B7B2: mov     rdi, [r14+538h]
 * 000000014073B7B9: and     edx, 20000000h
 * 000000014073B7BF: neg     edx
 * 000000014073B7C1: sbb     edx, edx
 * 000000014073B7C3: and     edx, [r14+634h]
 * 000000014073B7CA: cmp     eax, 8
 * 000000014073B7CD: jb      short loc_14073B7E4
 * 000000014073B7CF: mov     ecx, eax
 * 000000014073B7D1: shr     rcx, 3
 * 000000014073B7D5: mov     [r14], r9
 * 000000014073B7D8: add     eax, 0FFFFFFF8h
 * 000000014073B7DB: add     r14, 8
 * 000000014073B7DF: sub     rcx, r8
 * 000000014073B7E2: jnz     short loc_14073B7D5
 * 000000014073B7E4: test    eax, eax
 * 000000014073B7E6: jz      short loc_14073B7F3
 * 000000014073B7E8: mov     [r14], r9b
 * 000000014073B7EB: add     r14, r8
 * 000000014073B7EE: add     eax, 0FFFFFFFFh
 * 000000014073B7F1: jnz     short loc_14073B7E8
 * 000000014073B7F3: mov     r14d, [rbx+634h]
 * 000000014073B7FA: mov     [rbx+634h], edx
 * 000000014073B800: cmp     edx, 3
 * 000000014073B803: jz      short loc_14073B834
 * 000000014073B805: mov     eax, [rbx+690h]
 * 000000014073B80B: mov     ecx, r9d
 * 000000014073B80E: and     eax, 10000000h
 * 000000014073B813: cmovz   ecx, edx
 * 000000014073B816: test    ecx, ecx
 * 000000014073B818: jz      short loc_14073B829
 * 000000014073B81A: lea     rcx, [rdi-8]
 * 000000014073B81E: mov     rdx, [rcx]
 * 000000014073B821: call    qword ptr [rbx+1F8h]
 * 000000014073B827: jmp     short loc_14073B83D
 * 000000014073B829: mov     rcx, rdi
 * 000000014073B82C: call    qword ptr [rbx+0F8h]
 * 000000014073B832: jmp     short loc_14073B83D
 * 000000014073B834: mov     rcx, rdi
 * 000000014073B837: call    qword ptr [rbx+320h]
 * 000000014073B83D: mov     [rbx+634h], r14d
 * 000000014073B844: xor     r9d, r9d
 * 000000014073B847: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 000000014073B84E: mov     r10, [rsp+1A10h+var_19B0]
 * 000000014073B853: mov     r11d, dword ptr [rsp+1A10h+var_19A8]
 * 000000014073B858: jmp     short loc_14073B864
 * 000000014073B85A: mov     rbx, r14
 * 000000014073B85D: mov     [r14+554h], ecx
 * 000000014073B864: mov     r14d, 1
 * 000000014073B86A: lea     r8, [rbx+r12]
 * 000000014073B86E: add     [rbx+57Ch], r14d
 * 000000014073B875: mov     rax, r8
 * 000000014073B878: mov     [rbp+1910h+var_15D8], r8
 * 000000014073B87F: lea     ecx, [r14+2Fh]
 * 000000014073B883: lea     edx, [rcx-2Ah]
 * 000000014073B886: mov     [rax], r9
 * 000000014073B889: add     ecx, 0FFFFFFF8h
 * 000000014073B88C: add     rax, 8
 * 000000014073B890: sub     rdx, r14
 * 000000014073B893: jnz     short loc_14073B886
 * 000000014073B895: or      r12d, 0FFFFFFFFh
 * 000000014073B899: test    ecx, ecx
 * 000000014073B89B: jz      short loc_14073B8A8
 * 000000014073B89D: mov     [rax], r9b
 * 000000014073B8A0: add     rax, r14
 * 000000014073B8A3: add     ecx, r12d
 * 000000014073B8A6: jnz     short loc_14073B89D
 * 000000014073B8A8: mov     dword ptr [r8], 8
 * 000000014073B8AF: lea     rcx, [r15+40h]
 * 000000014073B8B3: mov     [r8+8], r15
 * 000000014073B8B7: mov     rax, r15
 * 000000014073B8BA: mov     dword ptr [r8+10h], 40h ; '@'
 * 000000014073B8C2: add     dword ptr [rbx+598h], 40h ; '@'
 * 000000014073B8C9: mov     r9d, [rbx+584h]
 * 000000014073B8D0: mov     rdx, [rbx+588h]
 * 000000014073B8D7: cmp     r15, rcx
 * 000000014073B8DA: jnb     short loc_14073B8E8
 * 000000014073B8DC: prefetchnta byte ptr [rax]
 * 000000014073B8DF: add     rax, 40h ; '@'
 * 000000014073B8E3: cmp     rax, rcx
 * 000000014073B8E6: jb      short loc_14073B8DC
 * 000000014073B8E8: mov     edi, 40h ; '@'
 * 000000014073B8ED: lea     eax, [rdi-38h]
 * 000000014073B8F0: xor     rdx, [r15]
 * 000000014073B8F3: mov     ecx, r9d
 * 000000014073B8F6: rol     rdx, cl
 * 000000014073B8F9: add     r15, 8
 * 000000014073B8FD: add     edi, 0FFFFFFF8h
 * 000000014073B900: sub     rax, r14
 * 000000014073B903: jnz     short loc_14073B8F0
 * 000000014073B905: test    edi, edi
 * 000000014073B907: jz      short loc_14073B922
 * 000000014073B909: lea     r14d, [rax+1]
 * 000000014073B90D: movzx   eax, byte ptr [r15]
 * 000000014073B911: mov     ecx, r9d
 * 000000014073B914: xor     rdx, rax
 * 000000014073B917: add     r15, r14
 * 000000014073B91A: rol     rdx, cl
 * 000000014073B91D: add     edi, r12d
 * 000000014073B920: jnz     short loc_14073B90D
 * 000000014073B922: mov     rax, rdx
 * 000000014073B925: jmp     short loc_14073B929
 * 000000014073B927: xor     edx, eax
 * 000000014073B929: shr     rax, 1Fh
 * 000000014073B92D: test    rax, rax
 * 000000014073B930: jnz     short loc_14073B927
 * 000000014073B932: btr     edx, 1Fh
 * 000000014073B936: mov     r14, rbx
 * 000000014073B939: mov     [r8+14h], edx
 * 000000014073B93D: mov     r8d, 1Ah
 * 000000014073B943: mov     rax, [rbp+1910h+var_15D8]
 * 000000014073B94A: mov     [rbp+1910h+var_15C8], rax
 * 000000014073B951: add     dword ptr [rbx+598h], 40h ; '@'
 * 000000014073B958: mov     rax, [rbp+1910h+var_15C8]
 * 000000014073B95F: lea     r9d, [r8-17h]
 * 000000014073B963: mov     [rax+18h], r10
 * 000000014073B967: mov     rax, [rbp+1910h+var_15C8]
 * 000000014073B96E: mov     [rax+20h], r11w
 * 000000014073B973: lea     r11d, [r8-19h]
 * 000000014073B977: mov     cl, [r10+42h]
 * 000000014073B97B: mov     r10d, 0FFFFFFF8h
 * 000000014073B981: mov     rax, [rbp+1910h+var_15C8]
 * 000000014073B988: mov     [rax+22h], cl
 * 000000014073B98B: lea     rcx, aObjecttypes_0; "\\ObjectTypes\\"
 * 000000014073B992: mov     rdi, [rbp+1910h+var_15C8]
 * 000000014073B999: lea     rdx, [rdi+30h]
 * 000000014073B99D: mov     rax, [rcx]
 * 000000014073B9A0: add     r8d, r10d
 * 000000014073B9A3: mov     [rdx], rax
 * 000000014073B9A6: add     rcx, 8
 * 000000014073B9AA: add     rdx, 8
 * 000000014073B9AE: sub     r9, r11
 * 000000014073B9B1: jnz     short loc_14073B99D
 * 000000014073B9B3: test    r8d, r8d
 * 000000014073B9B6: jz      short loc_14073B9C7
 * 000000014073B9B8: mov     al, [rcx]
 * 000000014073B9BA: add     rcx, r11
 * 000000014073B9BD: mov     [rdx], al
 * 000000014073B9BF: add     rdx, r11
 * 000000014073B9C2: add     r8d, r12d
 * 000000014073B9C5: jnz     short loc_14073B9B8
 * 000000014073B9C7: movzx   edx, word ptr [r13+8]
 * 000000014073B9CC: add     rdi, 4Ah ; 'J'
 * 000000014073B9D0: mov     rcx, [r13+10h]
 * 000000014073B9D4: cmp     edx, 8
 * 000000014073B9D7: jb      short loc_14073B9F6
 * 000000014073B9D9: mov     r8d, edx
 * 000000014073B9DC: shr     r8, 3
 * 000000014073B9E0: mov     rax, [rcx]
 * 000000014073B9E3: add     edx, r10d
 * 000000014073B9E6: mov     [rdi], rax
 * 000000014073B9E9: add     rcx, 8
 * 000000014073B9ED: add     rdi, 8
 * 000000014073B9F1: sub     r8, r11
 * 000000014073B9F4: jnz     short loc_14073B9E0
 * 000000014073B9F6: test    edx, edx
 * 000000014073B9F8: jz      short loc_14073BA0A
 * 000000014073B9FA: sub     rdi, rcx
 * 000000014073B9FD: mov     al, [rcx]
 * 000000014073B9FF: mov     [rcx+rdi], al
 * 000000014073BA02: add     rcx, r11
 * 000000014073BA05: add     edx, r12d
 * 000000014073BA08: jnz     short loc_14073B9FD
 * 000000014073BA0A: test    dword ptr [rbx+690h], 40000000h
 * 000000014073BA14: jz      loc_14073BC5A
 * 000000014073BA1A: mov     rax, [rbp+1910h+var_15C8]
 * 000000014073BA21: mov     r13d, [rbx+554h]
 * 000000014073BA28: mov     r8d, [rbx+634h]
 * 000000014073BA2F: mov     r12d, [rax+10h]
 * 000000014073BA33: mov     r15, [rax+8]
 * 000000014073BA37: lea     eax, [r13+30h]
 * 000000014073BA3B: cmp     eax, [rbx+714h]
 * 000000014073BA41: jbe     loc_14073BB28
 * 000000014073BA47: mov     edx, eax
 * 000000014073BA49: mov     rcx, rbx
 * 000000014073BA4C: call    sub_140236718
 * 000000014073BA51: xor     r9d, r9d
 * 000000014073BA54: mov     r14, rax
 * 000000014073BA57: test    rax, rax
 * 000000014073BA5A: jz      loc_140731C01
 * 000000014073BA60: mov     edx, [rbx+690h]
 * 000000014073BA66: test    dl, 4
 * 000000014073BA69: jnz     loc_14073BB12
 * 000000014073BA6F: mov     ecx, [rbx+554h]
 * 000000014073BA75: lea     r8d, [r9+1]
 * 000000014073BA79: mov     rdi, [rbx+538h]
 * 000000014073BA80: and     edx, 20000000h
 * 000000014073BA86: neg     edx
 * 000000014073BA88: sbb     edx, edx
 * 000000014073BA8A: and     edx, [rbx+634h]
 * 000000014073BA90: cmp     ecx, 8
 * 000000014073BA93: jb      short loc_14073BAAA
 * 000000014073BA95: mov     eax, ecx
 * 000000014073BA97: shr     rax, 3
 * 000000014073BA9B: mov     [rbx], r9
 * 000000014073BA9E: add     ecx, 0FFFFFFF8h
 * 000000014073BAA1: add     rbx, 8
 * 000000014073BAA5: sub     rax, r8
 * 000000014073BAA8: jnz     short loc_14073BA9B
 * 000000014073BAAA: test    ecx, ecx
 * 000000014073BAAC: jz      short loc_14073BAB9
 * 000000014073BAAE: mov     [rbx], r9b
 * 000000014073BAB1: add     rbx, r8
 * 000000014073BAB4: add     ecx, 0FFFFFFFFh
 * 000000014073BAB7: jnz     short loc_14073BAAE
 * 000000014073BAB9: mov     ebx, [r14+634h]
 * 000000014073BAC0: mov     [r14+634h], edx
 * 000000014073BAC7: cmp     edx, 3
 * 000000014073BACA: jz      short loc_14073BAFE
 * 000000014073BACC: mov     eax, [r14+690h]
 * 000000014073BAD3: mov     ecx, r9d
 * 000000014073BAD6: and     eax, 10000000h
 * 000000014073BADB: cmovz   ecx, edx
 * 000000014073BADE: test    ecx, ecx
 * 000000014073BAE0: jz      short loc_14073BAF2
 * 000000014073BAE2: lea     rcx, [rdi-8]
 * 000000014073BAE6: mov     rdx, [rcx]
 * 000000014073BAE9: call    qword ptr [r14+1F8h]
 * 000000014073BAF0: jmp     short loc_14073BB08
 * 000000014073BAF2: mov     rcx, rdi
 * 000000014073BAF5: call    qword ptr [r14+0F8h]
 * 000000014073BAFC: jmp     short loc_14073BB08
 * 000000014073BAFE: mov     rcx, rdi
 * 000000014073BB01: call    qword ptr [r14+320h]
 * 000000014073BB08: mov     [r14+634h], ebx
 * 000000014073BB0F: xor     r9d, r9d
 * 000000014073BB12: and     dword ptr [r14+690h], 0FFFFFFFBh
 * 000000014073BB1A: mov     r11d, 1
 * 000000014073BB20: mov     r10d, 0FFFFFFF8h
 * 000000014073BB26: jmp     short loc_14073BB2E
 * 000000014073BB28: mov     [rbx+554h], eax
 * 000000014073BB2E: add     [r14+57Ch], r11d
 * 000000014073BB35: lea     rbx, [r14+r13]
 * 000000014073BB39: mov     ecx, 30h ; '0'
 * 000000014073BB3E: mov     [rbp+1910h+var_15B8], rbx
 * 000000014073BB45: mov     rax, rbx
 * 000000014073BB48: lea     r13d, [rcx-2Ah]
 * 000000014073BB4C: mov     edx, r13d
 * 000000014073BB4F: mov     [rax], r9
 * 000000014073BB52: add     ecx, r10d
 * 000000014073BB55: add     rax, 8
 * 000000014073BB59: sub     rdx, r11
 * 000000014073BB5C: jnz     short loc_14073BB4F
 * 000000014073BB5E: test    ecx, ecx
 * 000000014073BB60: jz      short loc_14073BB6D
 * 000000014073BB62: mov     [rax], r9b
 * 000000014073BB65: add     rax, r11
 * 000000014073BB68: add     ecx, 0FFFFFFFFh
 * 000000014073BB6B: jnz     short loc_14073BB62
 * 000000014073BB6D: mov     eax, 20h ; ' '
 * 000000014073BB72: mov     [rbx], eax
 * 000000014073BB74: mov     [rbx+8], r15
 * 000000014073BB78: test    r12d, r12d
 * 000000014073BB7B: jz      short loc_14073BB9C
 * 000000014073BB7D: lea     r9, [rbx+18h]
 * 000000014073BB81: mov     r8d, r12d
 * 000000014073BB84: mov     rdx, r15
 * 000000014073BB87: mov     rcx, r14
 * 000000014073BB8A: call    sub_14014F138
 * 000000014073BB8F: xor     r9d, r9d
 * 000000014073BB92: mov     r10d, 0FFFFFFF8h
 * 000000014073BB98: lea     r11d, [r9+1]
 * 000000014073BB9C: mov     [rbx+10h], r12d
 * 000000014073BBA0: lea     rcx, [r15+r12]
 * 000000014073BBA4: add     [r14+598h], r12d
 * 000000014073BBAB: mov     rax, r15
 * 000000014073BBAE: mov     r8d, [r14+584h]
 * 000000014073BBB5: mov     rdx, [r14+588h]
 * 000000014073BBBC: cmp     r15, rcx
 * 000000014073BBBF: jnb     short loc_14073BBCD
 * 000000014073BBC1: prefetchnta byte ptr [rax]
 * 000000014073BBC4: add     rax, 40h ; '@'
 * 000000014073BBC8: cmp     rax, rcx
 * 000000014073BBCB: jb      short loc_14073BBC1
 * 000000014073BBCD: mov     edi, r12d
 * 000000014073BBD0: cmp     r12d, 8
 * 000000014073BBD4: jb      short loc_14073BBF2
 * 000000014073BBD6: mov     rax, r12
 * 000000014073BBD9: shr     rax, 3
 * 000000014073BBDD: xor     rdx, [r15]
 * 000000014073BBE0: mov     ecx, r8d
 * 000000014073BBE3: rol     rdx, cl
 * 000000014073BBE6: add     r15, 8
 * 000000014073BBEA: add     edi, r10d
 * 000000014073BBED: sub     rax, r11
 * 000000014073BBF0: jnz     short loc_14073BBDD
 * 000000014073BBF2: test    edi, edi
 * 000000014073BBF4: jz      short loc_14073BC0B
 * 000000014073BBF6: movzx   eax, byte ptr [r15]
 * 000000014073BBFA: mov     ecx, r8d
 * 000000014073BBFD: xor     rdx, rax
 * 000000014073BC00: add     r15, r11
 * 000000014073BC03: rol     rdx, cl
 * 000000014073BC06: add     edi, 0FFFFFFFFh
 * 000000014073BC09: jnz     short loc_14073BBF6
 * 000000014073BC0B: mov     rax, rdx
 * 000000014073BC0E: jmp     short loc_14073BC12
 * 000000014073BC10: xor     edx, eax
 * 000000014073BC12: shr     rax, 1Fh
 * 000000014073BC16: test    rax, rax
 * 000000014073BC19: jnz     short loc_14073BC10
 * 000000014073BC1B: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 000000014073BC1F: btr     edx, 1Fh
 * 000000014073BC23: mov     [rbx+14h], edx
 * 000000014073BC26: lea     rdx, ObpObjectTypes
 * 000000014073BC2D: mov     rax, [rbp+1910h+var_15B8]
 * 000000014073BC34: mov     [rbp+1910h+var_15A8], rax
 * 000000014073BC3B: add     [r14+598h], r12d
 * 000000014073BC42: mov     rax, [rbp+1910h+var_15A8]
 * 000000014073BC49: mov     [rax+28h], r9d
 * 000000014073BC4D: mov     rax, [rbp+1910h+var_15A8]
 * 000000014073BC54: or      [rax+28h], r11d
 * 000000014073BC58: jmp     short loc_14073BC6B
 * 000000014073BC5A: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 000000014073BC5E: lea     rdx, ObpObjectTypes
 * 000000014073BC65: mov     r13d, 6
 * 000000014073BC6B: mov     eax, dword ptr [rsp+1A10h+Src]
 * 000000014073BC6F: mov     r10, [rbp+1910h+var_1988]
 * 000000014073BC73: add     ecx, r11d
 * 000000014073BC76: add     r10, r11
 * 000000014073BC79: mov     dword ptr [rsp+1A10h+var_19B8], ecx
 * 000000014073BC7D: mov     [rbp+1910h+var_1988], r10
 * 000000014073BC81: cmp     ecx, eax
 * 000000014073BC83: jb      loc_14073B6E9
 * 000000014073BC89: xor     eax, eax
 * 000000014073BC8B: mov     [rbp+1910h+var_16D8], r14
 * 000000014073BC92: test    r14, r14
 * 000000014073BC95: jz      loc_140731C01
 * 000000014073BC9B: mov     r15d, [r14+690h]
 * 000000014073BCA2: lea     r9, [rbp+1910h+var_18E0]
 * 000000014073BCA6: shr     r15d, 1Eh
 * 000000014073BCAA: lea     r8, [rbp+1910h+var_DC0]
 * 000000014073BCB1: mov     edx, 10h
 * 000000014073BCB6: not     r15d
 * 000000014073BCB9: and     r15d, r11d
 * 000000014073BCBC: add     r15d, 8
 * 000000014073BCC0: lea     ecx, [rdx+15h]
 * 000000014073BCC3: call    cs:off_1402D29C8
 * 000000014073BCC9: xor     edi, edi
 * 000000014073BCCB: test    eax, eax
 * 000000014073BCCD: js      short loc_14073BCD8
 * 000000014073BCCF: add     r15d, dword ptr [rbp+1910h+var_DB8]
 * 000000014073BCD6: jmp     short loc_14073BCDF
 * 000000014073BCD8: mov     [rbp+1910h+var_DB8], rdi
 * 000000014073BCDF: mov     eax, [rbp+1910h+var_18DC]
 * 000000014073BCE2: and     eax, r13d
 * 000000014073BCE5: mov     dword ptr [rsp+1A10h+Src], eax
 * 000000014073BCE9: jnz     short loc_14073BD02
 * 000000014073BCEB: mov     rax, cs:PspPicoProviderRanges
 * 000000014073BCF2: test    rax, rax
 * 000000014073BCF5: jz      short loc_14073BCFB
 * 000000014073BCF7: add     r15d, [rax+8]
 * 000000014073BCFB: add     r15d, dword ptr cs:qword_1402D2180
 * 000000014073BD02: rdtsc
 * 000000014073BD04: shl     rdx, 20h
 * 000000014073BD08: mov     r8, 7010008004002001h
 * 000000014073BD12: or      rax, rdx
 * 000000014073BD15: mov     ebx, 5
 * 000000014073BD1A: mov     rcx, rax
 * 000000014073BD1D: mov     rdx, rax
 * 000000014073BD20: ror     rcx, 3
 * 000000014073BD24: mov     rax, r8
 * 000000014073BD27: xor     rdx, rcx
 * 000000014073BD2A: mul     rdx
 * 000000014073BD2D: mov     rcx, rdx
 * 000000014073BD30: mov     [rbp+1910h+var_1598], rdx
 * 000000014073BD37: xor     rcx, rax
 * 000000014073BD3A: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014073BD44: mul     rcx
 * 000000014073BD47: shr     rdx, 1
 * 000000014073BD4A: imul    rax, rdx, 0Bh
 * 000000014073BD4E: sub     rcx, rax
 * 000000014073BD51: cmp     ecx, ebx
 * 000000014073BD53: ja      loc_14073BDDC
 * 000000014073BD59: jz      short loc_14073BDCA
 * 000000014073BD5B: test    ecx, ecx
 * 000000014073BD5D: jz      short loc_14073BDB8
 * 000000014073BD5F: sub     ecx, 1
 * 000000014073BD62: jz      short loc_14073BDA7
 * 000000014073BD64: sub     ecx, 1
 * 000000014073BD67: jz      short loc_14073BD95
 * 000000014073BD69: cmp     ecx, 1
 * 000000014073BD6C: jz      short loc_14073BD80
 * 000000014073BD6E: mov     [rbp+1910h+var_18D8], 67076494h
 * 000000014073BD75: mov     edi, [rbp+1910h+var_18D8]
 * 000000014073BD78: rol     edi, 4
 * 000000014073BD7B: jmp     loc_14073BED9
 * 000000014073BD80: mov     [rbp+1910h+var_18D0], 0A8223938h
 * 000000014073BD87: mov     edi, [rbp+1910h+var_18D0]
 * 000000014073BD8A: xor     edi, 3
 * 000000014073BD8D: ror     edi, 0Fh
 * 000000014073BD90: jmp     loc_14073BED9
 * 000000014073BD95: mov     [rbp+1910h+var_18C8], 85B5910Dh
 * 000000014073BD9C: mov     edi, [rbp+1910h+var_18C8]
 * 000000014073BD9F: ror     edi, 2
 * 000000014073BDA2: jmp     loc_14073BED9
 * 000000014073BDA7: mov     [rbp+1910h+var_18C0], 0B2AD31A1h
 * 000000014073BDAE: mov     edi, [rbp+1910h+var_18C0]
 * 000000014073BDB1: rol     edi, 1
 * 000000014073BDB3: jmp     loc_14073BED9
 * 000000014073BDB8: mov     [rbp+1910h+var_18B8], 0D098D0D8h
 * 000000014073BDBF: mov     edi, [rbp+1910h+var_18B8]
 * 000000014073BDC2: ror     edi, 6
 * 000000014073BDC5: jmp     loc_14073BED9
 * 000000014073BDCA: mov     [rbp+1910h+var_18B0], 288C49EDh
 * 000000014073BDD1: mov     edi, [rbp+1910h+var_18B0]
 * 000000014073BDD4: ror     edi, 5
 * 000000014073BDD7: jmp     loc_14073BED9
 * 000000014073BDDC: sub     ecx, r13d
 * 000000014073BDDF: jz      loc_14073BEC3
 * 000000014073BDE5: sub     ecx, 1
 * 000000014073BDE8: jz      loc_14073BEB4
 * 000000014073BDEE: sub     ecx, 1
 * 000000014073BDF1: jz      loc_14073BEA5
 * 000000014073BDF7: cmp     ecx, 1
 * 000000014073BDFA: jz      loc_14073BE93
 * 000000014073BE00: rdtsc
 * 000000014073BE02: shl     rdx, 20h
 * 000000014073BE06: or      rax, rdx
 * 000000014073BE09: mov     rcx, rax
 * 000000014073BE0C: mov     rdx, rax
 * 000000014073BE0F: ror     rcx, 3
 * 000000014073BE13: mov     rax, r8
 * 000000014073BE16: xor     rdx, rcx
 * 000000014073BE19: mov     r8d, 4EC4EC4Fh
 * 000000014073BE1F: mul     rdx
 * 000000014073BE22: mov     rdi, rax
 * 000000014073BE25: mov     [rbp+1910h+var_1588], rdx
 * 000000014073BE2C: xor     edi, edx
 * 000000014073BE2E: mov     eax, r8d
 * 000000014073BE31: mul     edi
 * 000000014073BE33: mov     ebx, edi
 * 000000014073BE35: mov     eax, r8d
 * 000000014073BE38: shr     edx, 3
 * 000000014073BE3B: imul    ecx, edx, 1Ah
 * 000000014073BE3E: shr     edi, 5
 * 000000014073BE41: mul     edi
 * 000000014073BE43: sub     ebx, ecx
 * 000000014073BE45: mov     ecx, edi
 * 000000014073BE47: add     ebx, 61h ; 'a'
 * 000000014073BE4A: shr     edx, 3
 * 000000014073BE4D: shl     ebx, 8
 * 000000014073BE50: imul    eax, edx, 1Ah
 * 000000014073BE53: shr     edi, 5
 * 000000014073BE56: sub     ecx, eax
 * 000000014073BE58: mov     eax, r8d
 * 000000014073BE5B: mul     edi
 * 000000014073BE5D: add     ecx, 41h ; 'A'
 * 000000014073BE60: or      ecx, ebx
 * 000000014073BE62: shr     edx, 3
 * 000000014073BE65: mov     ebx, edi
 * 000000014073BE67: imul    eax, edx, 1Ah
 * 000000014073BE6A: shr     edi, 5
 * 000000014073BE6D: shl     ecx, 8
 * 000000014073BE70: sub     ebx, eax
 * 000000014073BE72: mov     eax, r8d
 * 000000014073BE75: mul     edi
 * 000000014073BE77: add     ebx, 61h ; 'a'
 * 000000014073BE7A: or      ebx, ecx
 * 000000014073BE7C: shr     edx, 3
 * 000000014073BE7F: imul    eax, edx, 1Ah
 * 000000014073BE82: shl     ebx, 8
 * 000000014073BE85: sub     edi, eax
 * 000000014073BE87: add     edi, 41h ; 'A'
 * 000000014073BE8A: or      edi, ebx
 * 000000014073BE8C: mov     ebx, 5
 * 000000014073BE91: jmp     short loc_14073BED9
 * 000000014073BE93: mov     [rbp+1910h+var_18A8], 0B0869E85h
 * 000000014073BE9A: mov     edi, [rbp+1910h+var_18A8]
 * 000000014073BE9D: xor     edi, 9
 * 000000014073BEA0: ror     edi, 21h
 * 000000014073BEA3: jmp     short loc_14073BED9
 * 000000014073BEA5: mov     [rbp+1910h+var_18A0], 64664142h
 * 000000014073BEAC: mov     edi, [rbp+1910h+var_18A0]
 * 000000014073BEAF: ror     edi, 8
 * 000000014073BEB2: jmp     short loc_14073BED9
 * 000000014073BEB4: mov     [rbp+1910h+var_1898], 82C6A6D8h
 * 000000014073BEBB: mov     edi, [rbp+1910h+var_1898]
 * 000000014073BEBE: rol     edi, 7
 * 000000014073BEC1: jmp     short loc_14073BED9
 * 000000014073BEC3: mov     [rbp+1910h+var_1890], 4E574672h
 * 000000014073BECD: mov     edi, [rbp+1910h+var_1890]
 * 000000014073BED3: xor     edi, r13d
 * 000000014073BED6: ror     edi, 18h
 * 000000014073BED9: mov     rdx, r15
 * 000000014073BEDC: mov     r8d, edi; Tag
 * 000000014073BEDF: shl     rdx, 3; NumberOfBytes
 * 000000014073BEE3: mov     ecx, 200h; PoolType
 * 000000014073BEE8: call    ExAllocatePoolWithTag
 * 000000014073BEED: mov     [rbp+1910h+var_1988], rax
 * 000000014073BEF1: mov     r12, rax
 * 000000014073BEF4: test    rax, rax
 * 000000014073BEF7: jz      loc_140731C01
 * 000000014073BEFD: rdtsc
 * 000000014073BEFF: shl     rdx, 20h
 * 000000014073BF03: mov     r8, 7010008004002001h
 * 000000014073BF0D: or      rax, rdx
 * 000000014073BF10: mov     rcx, rax
 * 000000014073BF13: mov     rdx, rax
 * 000000014073BF16: ror     rcx, 3
 * 000000014073BF1A: mov     rax, r8
 * 000000014073BF1D: xor     rdx, rcx
 * 000000014073BF20: mul     rdx
 * 000000014073BF23: mov     rcx, rdx
 * 000000014073BF26: mov     [rbp+1910h+var_1578], rdx
 * 000000014073BF2D: xor     rcx, rax
 * 000000014073BF30: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014073BF3A: mul     rcx
 * 000000014073BF3D: shr     rdx, 1
 * 000000014073BF40: imul    rax, rdx, 0Bh
 * 000000014073BF44: sub     rcx, rax
 * 000000014073BF47: cmp     ecx, ebx
 * 000000014073BF49: ja      loc_14073BFFA
 * 000000014073BF4F: jz      loc_14073BFE2
 * 000000014073BF55: test    ecx, ecx
 * 000000014073BF57: jz      short loc_14073BFCA
 * 000000014073BF59: sub     ecx, 1
 * 000000014073BF5C: jz      short loc_14073BFB3
 * 000000014073BF5E: sub     ecx, 1
 * 000000014073BF61: jz      short loc_14073BF9B
 * 000000014073BF63: cmp     ecx, 1
 * 000000014073BF66: jz      short loc_14073BF80
 * 000000014073BF68: mov     [rbp+1910h+var_1888], 67076494h
 * 000000014073BF72: mov     edi, [rbp+1910h+var_1888]
 * 000000014073BF78: rol     edi, 4
 * 000000014073BF7B: jmp     loc_14073C104
 * 000000014073BF80: mov     [rbp+1910h+var_1880], 0A8223938h
 * 000000014073BF8A: mov     edi, [rbp+1910h+var_1880]
 * 000000014073BF90: xor     edi, 3
 * 000000014073BF93: ror     edi, 0Fh
 * 000000014073BF96: jmp     loc_14073C104
 * 000000014073BF9B: mov     [rbp+1910h+var_1878], 85B5910Dh
 * 000000014073BFA5: mov     edi, [rbp+1910h+var_1878]
 * 000000014073BFAB: ror     edi, 2
 * 000000014073BFAE: jmp     loc_14073C104
 * 000000014073BFB3: mov     [rbp+1910h+var_1870], 0B2AD31A1h
 * 000000014073BFBD: mov     edi, [rbp+1910h+var_1870]
 * 000000014073BFC3: rol     edi, 1
 * 000000014073BFC5: jmp     loc_14073C104
 * 000000014073BFCA: mov     [rbp+1910h+var_1868], 0D098D0D8h
 * 000000014073BFD4: mov     edi, [rbp+1910h+var_1868]
 * 000000014073BFDA: ror     edi, 6
 * 000000014073BFDD: jmp     loc_14073C104
 * 000000014073BFE2: mov     [rbp+1910h+var_1860], 288C49EDh
 * 000000014073BFEC: mov     edi, [rbp+1910h+var_1860]
 * 000000014073BFF2: ror     edi, 5
 * 000000014073BFF5: jmp     loc_14073C104
 * 000000014073BFFA: sub     ecx, r13d
 * 000000014073BFFD: jz      loc_14073C0EE
 * 000000014073C003: sub     ecx, 1
 * 000000014073C006: jz      loc_14073C0D9
 * 000000014073C00C: sub     ecx, 1
 * 000000014073C00F: jz      loc_14073C0C4
 * 000000014073C015: cmp     ecx, 1
 * 000000014073C018: jz      loc_14073C0AC
 * 000000014073C01E: rdtsc
 * 000000014073C020: shl     rdx, 20h
 * 000000014073C024: or      rax, rdx
 * 000000014073C027: mov     rcx, rax
 * 000000014073C02A: mov     rdx, rax
 * 000000014073C02D: ror     rcx, 3
 * 000000014073C031: mov     rax, r8
 * 000000014073C034: xor     rdx, rcx
 * 000000014073C037: mov     r8d, 4EC4EC4Fh
 * 000000014073C03D: mul     rdx
 * 000000014073C040: mov     rdi, rax
 * 000000014073C043: mov     [rbp+1910h+var_1568], rdx
 * 000000014073C04A: xor     edi, edx
 * 000000014073C04C: mov     eax, r8d
 * 000000014073C04F: mul     edi
 * 000000014073C051: mov     ebx, edi
 * 000000014073C053: mov     eax, r8d
 * 000000014073C056: shr     edx, 3
 * 000000014073C059: imul    ecx, edx, 1Ah
 * 000000014073C05C: shr     edi, 5
 * 000000014073C05F: mul     edi
 * 000000014073C061: sub     ebx, ecx
 * 000000014073C063: mov     ecx, edi
 * 000000014073C065: add     ebx, 61h ; 'a'
 * 000000014073C068: shr     edx, 3
 * 000000014073C06B: imul    eax, edx, 1Ah
 * 000000014073C06E: shl     ebx, 8
 * 000000014073C071: shr     edi, 5
 * 000000014073C074: sub     ecx, eax
 * 000000014073C076: mov     eax, r8d
 * 000000014073C079: mul     edi
 * 000000014073C07B: add     ecx, 41h ; 'A'
 * 000000014073C07E: or      ecx, ebx
 * 000000014073C080: shr     edx, 3
 * 000000014073C083: imul    eax, edx, 1Ah
 * 000000014073C086: mov     ebx, edi
 * 000000014073C088: shr     edi, 5
 * 000000014073C08B: shl     ecx, 8
 * 000000014073C08E: sub     ebx, eax
 * 000000014073C090: mov     eax, r8d
 * 000000014073C093: mul     edi
 * 000000014073C095: add     ebx, 61h ; 'a'
 * 000000014073C098: shr     edx, 3
 * 000000014073C09B: or      ebx, ecx
 * 000000014073C09D: imul    eax, edx, 1Ah
 * 000000014073C0A0: shl     ebx, 8
 * 000000014073C0A3: sub     edi, eax
 * 000000014073C0A5: add     edi, 41h ; 'A'
 * 000000014073C0A8: or      edi, ebx
 * 000000014073C0AA: jmp     short loc_14073C104
 * 000000014073C0AC: mov     [rbp+1910h+var_1858], 0B0869E85h
 * 000000014073C0B6: mov     edi, [rbp+1910h+var_1858]
 * 000000014073C0BC: xor     edi, 9
 * 000000014073C0BF: ror     edi, 21h
 * 000000014073C0C2: jmp     short loc_14073C104
 * 000000014073C0C4: mov     [rbp+1910h+var_1850], 64664142h
 * 000000014073C0CE: mov     edi, [rbp+1910h+var_1850]
 * 000000014073C0D4: ror     edi, 8
 * 000000014073C0D7: jmp     short loc_14073C104
 * 000000014073C0D9: mov     [rbp+1910h+var_1848], 82C6A6D8h
 * 000000014073C0E3: mov     edi, [rbp+1910h+var_1848]
 * 000000014073C0E9: rol     edi, 7
 * 000000014073C0EC: jmp     short loc_14073C104
 * 000000014073C0EE: mov     [rbp+1910h+var_1840], 4E574672h
 * 000000014073C0F8: mov     edi, [rbp+1910h+var_1840]
 * 000000014073C0FE: xor     edi, r13d
 * 000000014073C101: ror     edi, 18h
 * 000000014073C104: mov     rdx, r15
 * 000000014073C107: mov     r8d, edi; Tag
 * 000000014073C10A: shl     rdx, 2; NumberOfBytes
 * 000000014073C10E: mov     ecx, 200h; PoolType
 * 000000014073C113: call    ExAllocatePoolWithTag
 * 000000014073C118: xor     r10d, r10d
 * 000000014073C11B: mov     [rsp+1A10h+var_19B0], rax
 * 000000014073C120: mov     r13, rax
 * 000000014073C123: test    rax, rax
 * 000000014073C126: jnz     short loc_14073C135
 * 000000014073C128: mov     rcx, r12; P
 * 000000014073C12B: call    ExFreePool
 * 000000014073C130: jmp     loc_140731C01
 * 000000014073C135: mov     ecx, cs:dword_1407174A8
 * 000000014073C13B: mov     r11, 88000000000h
 * 000000014073C145: mov     eax, ecx
 * 000000014073C147: mov     r15d, 1
 * 000000014073C14D: sub     rax, r11
 * 000000014073C150: mov     ebx, r15d
 * 000000014073C153: mov     [r12], rax
 * 000000014073C157: mov     eax, 1000h
 * 000000014073C15C: sub     eax, ecx
 * 000000014073C15E: mov     [r13+0], eax
 * 000000014073C162: mov     eax, [rbp+1910h+var_18DC]
 * 000000014073C165: and     eax, 2
 * 000000014073C168: mov     dword ptr [rsp+1A10h+var_19B8], eax
 * 000000014073C16C: jnz     short loc_14073C186
 * 000000014073C16E: lea     rax, InitSafeBootMode
 * 000000014073C175: mov     [r12+8], rax
 * 000000014073C17A: lea     ebx, [r15+1]
 * 000000014073C17E: mov     dword ptr [r13+4], 4
 * 000000014073C186: mov     r9d, dword ptr [rsp+1A10h+Src]
 * 000000014073C18B: lea     rcx, RtlpUnwindHistoryTable
 * 000000014073C192: mov     eax, ebx
 * 000000014073C194: add     ebx, r15d
 * 000000014073C197: mov     [r12+rax*8], rcx
 * 000000014073C19B: lea     rcx, PspSystemMitigationOptions
 * 000000014073C1A2: mov     dword ptr [r13+rax*4+0], 0D8h
 * 000000014073C1AB: mov     [r12+rbx*8], rcx
 * 000000014073C1AF: lea     rcx, KdpBootedNodebug
 * 000000014073C1B6: mov     dword ptr [r13+rbx*4+0], 8
 * 000000014073C1BF: add     ebx, r15d
 * 000000014073C1C2: mov     [r12+rbx*8], rcx
 * 000000014073C1C6: lea     rcx, xmmword_1402CFDD0
 * 000000014073C1CD: mov     [r13+rbx*4+0], r15d
 * 000000014073C1D2: add     ebx, r15d
 * 000000014073C1D5: mov     [r12+rbx*8], rcx
 * 000000014073C1D9: mov     dword ptr [r13+rbx*4+0], 18h
 * 000000014073C1E2: add     ebx, r15d
 * 000000014073C1E5: mov     dword ptr [rsp+1A10h+var_19A8], ebx
 * 000000014073C1E9: test    r9d, r9d
 * 000000014073C1EC: jnz     loc_14073C478
 * 000000014073C1F2: lea     rdx, [rbp+1910h+var_1558]
 * 000000014073C1F9: lea     rcx, [rbp+1910h+var_1548]
 * 000000014073C200: call    MmQueryApiSetSchema
 * 000000014073C205: mov     rax, [rbp+1910h+var_1548]
 * 000000014073C20C: mov     r11, 88000000000h
 * 000000014073C216: mov     r9d, dword ptr [rsp+1A10h+Src]
 * 000000014073C21B: mov     [r12+rbx*8], rax
 * 000000014073C21F: mov     dword ptr [r13+rbx*4+0], 8
 * 000000014073C228: add     ebx, r15d
 * 000000014073C22B: mov     rax, [rbp+1910h+var_1558]
 * 000000014073C232: mov     [r12+rbx*8], rax
 * 000000014073C236: mov     dword ptr [r13+rbx*4+0], 8
 * 000000014073C23F: add     ebx, r15d
 * 000000014073C242: test    dword ptr [r14+690h], 40000000h
 * 000000014073C24D: mov     dword ptr [rsp+1A10h+var_19A8], ebx
 * 000000014073C251: jnz     short loc_14073C276
 * 000000014073C253: mov     rax, [rbp+1910h+var_1548]
 * 000000014073C25A: mov     rcx, [rax]
 * 000000014073C25D: mov     [r12+rbx*8], rcx
 * 000000014073C261: mov     rax, [rbp+1910h+var_1558]
 * 000000014073C268: mov     ecx, [rax]
 * 000000014073C26A: mov     [r13+rbx*4+0], ecx
 * 000000014073C26F: add     ebx, r15d
 * 000000014073C272: mov     dword ptr [rsp+1A10h+var_19A8], ebx
 * 000000014073C276: xor     r10d, r10d
 * 000000014073C279: mov     r8d, r10d
 * 000000014073C27C: cmp     [rbp+1910h+var_DB8], r10
 * 000000014073C283: jbe     short loc_14073C2C0
 * 000000014073C285: mov     rdi, r10
 * 000000014073C288: mov     rax, [rbp+1910h+var_DC0]
 * 000000014073C28F: add     rdi, rdi
 * 000000014073C292: add     r8d, r15d
 * 000000014073C295: mov     rcx, [rax+rdi*8]
 * 000000014073C299: mov     [r12+rbx*8], rcx
 * 000000014073C29D: mov     rax, [rbp+1910h+var_DC0]
 * 000000014073C2A4: mov     ecx, [rax+rdi*8+8]
 * 000000014073C2A8: mov     [r13+rbx*4+0], ecx
 * 000000014073C2AD: add     ebx, r15d
 * 000000014073C2B0: mov     edi, r8d
 * 000000014073C2B3: cmp     rdi, [rbp+1910h+var_DB8]
 * 000000014073C2BA: jb      short loc_14073C288
 * 000000014073C2BC: mov     dword ptr [rsp+1A10h+var_19A8], ebx
 * 000000014073C2C0: test    r9d, r9d
 * 000000014073C2C3: jnz     loc_14073C363
 * 000000014073C2C9: mov     rax, cs:PspPicoProviderRanges
 * 000000014073C2D0: test    rax, rax
 * 000000014073C2D3: jz      short loc_14073C31C
 * 000000014073C2D5: mov     r8d, r10d
 * 000000014073C2D8: cmp     [rax+8], r10
 * 000000014073C2DC: jbe     short loc_14073C31C
 * 000000014073C2DE: mov     rdi, r10
 * 000000014073C2E1: mov     rax, [rax]
 * 000000014073C2E4: add     rdi, rdi
 * 000000014073C2E7: add     r8d, r15d
 * 000000014073C2EA: mov     rcx, [rax+rdi*8]
 * 000000014073C2EE: mov     [r12+rbx*8], rcx
 * 000000014073C2F2: mov     rax, cs:PspPicoProviderRanges
 * 000000014073C2F9: mov     rcx, [rax]
 * 000000014073C2FC: mov     eax, [rcx+rdi*8+8]
 * 000000014073C300: mov     [r13+rbx*4+0], eax
 * 000000014073C305: add     ebx, r15d
 * 000000014073C308: mov     rax, cs:PspPicoProviderRanges
 * 000000014073C30F: mov     edi, r8d
 * 000000014073C312: cmp     rdi, [rax+8]
 * 000000014073C316: jb      short loc_14073C2E1
 * 000000014073C318: mov     dword ptr [rsp+1A10h+var_19A8], ebx
 * 000000014073C31C: cmp     cs:qword_1402D2180, r10
 * 000000014073C323: mov     r8d, r10d
 * 000000014073C326: jbe     short loc_14073C363
 * 000000014073C328: mov     rdi, r10
 * 000000014073C32B: mov     rax, cs:PspKernelRanges
 * 000000014073C332: add     rdi, rdi
 * 000000014073C335: add     r8d, r15d
 * 000000014073C338: mov     rcx, [rax+rdi*8]
 * 000000014073C33C: mov     [r12+rbx*8], rcx
 * 000000014073C340: mov     rax, cs:PspKernelRanges
 * 000000014073C347: mov     ecx, [rax+rdi*8+8]
 * 000000014073C34B: mov     [r13+rbx*4+0], ecx
 * 000000014073C350: add     ebx, r15d
 * 000000014073C353: mov     edi, r8d
 * 000000014073C356: cmp     rdi, cs:qword_1402D2180
 * 000000014073C35D: jb      short loc_14073C32B
 * 000000014073C35F: mov     dword ptr [rsp+1A10h+var_19A8], ebx
 * 000000014073C363: mov     eax, [r14+664h]
 * 000000014073C36A: mov     ecx, 0BC2A27DBh
 * 000000014073C36F: xor     rax, rcx
 * 000000014073C372: sub     rax, r11
 * 000000014073C375: mov     al, [rax]
 * 000000014073C377: test    al, 2
 * 000000014073C379: jz      short loc_14073C386
 * 000000014073C37B: add     dword ptr [r14+554h], 1000h
 * 000000014073C386: cmp     dword ptr [r14+5A8h], 7
 * 000000014073C38E: mov     eax, r10d
 * 000000014073C391: mov     r15d, [r14+554h]
 * 000000014073C398: mov     r9d, 20h ; ' '
 * 000000014073C39E: mov     r8d, [r14+634h]
 * 000000014073C3A5: cmovz   eax, r9d
 * 000000014073C3A9: mov     dword ptr [rbp+1910h+NtHeaders], eax
 * 000000014073C3AC: lea     eax, [rbx+rbx*2]
 * 000000014073C3AF: shl     eax, 4
 * 000000014073C3B2: add     eax, r15d
 * 000000014073C3B5: mov     [rbp+1910h+var_16D8], r14
 * 000000014073C3BC: cmp     eax, [r14+714h]
 * 000000014073C3C3: jbe     loc_14073C4C0
 * 000000014073C3C9: mov     edx, eax
 * 000000014073C3CB: mov     rcx, r14
 * 000000014073C3CE: call    sub_140236718
 * 000000014073C3D3: xor     r10d, r10d
 * 000000014073C3D6: mov     rdi, rax
 * 000000014073C3D9: test    rax, rax
 * 000000014073C3DC: jz      loc_14073C4B8
 * 000000014073C3E2: mov     edx, [r14+690h]
 * 000000014073C3E9: test    dl, 4
 * 000000014073C3EC: jnz     loc_14073C4A9
 * 000000014073C3F2: mov     eax, [r14+554h]
 * 000000014073C3F9: and     edx, 20000000h
 * 000000014073C3FF: mov     r9, [r14+538h]
 * 000000014073C406: neg     edx
 * 000000014073C408: lea     edx, [r10+1]
 * 000000014073C40C: sbb     r8d, r8d
 * 000000014073C40F: and     r8d, [r14+634h]
 * 000000014073C416: cmp     eax, 8
 * 000000014073C419: jb      short loc_14073C430
 * 000000014073C41B: mov     ecx, eax
 * 000000014073C41D: shr     rcx, 3
 * 000000014073C421: mov     [r14], r10
 * 000000014073C424: add     eax, 0FFFFFFF8h
 * 000000014073C427: add     r14, 8
 * 000000014073C42B: sub     rcx, rdx
 * 000000014073C42E: jnz     short loc_14073C421
 * 000000014073C430: test    eax, eax
 * 000000014073C432: jz      short loc_14073C43F
 * 000000014073C434: mov     [r14], r10b
 * 000000014073C437: add     r14, rdx
 * 000000014073C43A: add     eax, 0FFFFFFFFh
 * 000000014073C43D: jnz     short loc_14073C434
 * 000000014073C43F: mov     r14d, [rdi+634h]
 * 000000014073C446: mov     [rdi+634h], r8d
 * 000000014073C44D: cmp     r8d, 3
 * 000000014073C451: jz      short loc_14073C496
 * 000000014073C453: mov     eax, [rdi+690h]
 * 000000014073C459: mov     ecx, r10d
 * 000000014073C45C: and     eax, 10000000h
 * 000000014073C461: cmovz   ecx, r8d
 * 000000014073C465: test    ecx, ecx
 * 000000014073C467: jz      short loc_14073C48B
 * 000000014073C469: lea     rcx, [r9-8]
 * 000000014073C46D: mov     rdx, [rcx]
 * 000000014073C470: call    qword ptr [rdi+1F8h]
 * 000000014073C476: jmp     short loc_14073C49F
 * 000000014073C478: mov     [rbp+1910h+var_1548], r10
 * 000000014073C47F: mov     [rbp+1910h+var_1558], r10
 * 000000014073C486: jmp     loc_14073C279
 * 000000014073C48B: mov     rcx, r9
 * 000000014073C48E: call    qword ptr [rdi+0F8h]
 * 000000014073C494: jmp     short loc_14073C49F
 * 000000014073C496: mov     rcx, r9
 * 000000014073C499: call    qword ptr [rdi+320h]
 * 000000014073C49F: mov     [rdi+634h], r14d
 * 000000014073C4A6: xor     r10d, r10d
 * 000000014073C4A9: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 000000014073C4B0: mov     r9d, 20h ; ' '
 * 000000014073C4B6: jmp     short loc_14073C4CA
 * 000000014073C4B8: mov     rdi, r10
 * 000000014073C4BB: jmp     loc_14073C664
 * 000000014073C4C0: mov     rdi, r14
 * 000000014073C4C3: mov     [r14+554h], eax
 * 000000014073C4CA: add     [rdi+57Ch], ebx
 * 000000014073C4D0: lea     r14, [rdi+r15]
 * 000000014073C4D4: mov     [rbp+1910h+var_1538], r14
 * 000000014073C4DB: mov     [rbp+1910h+var_1528], r14
 * 000000014073C4E2: test    ebx, ebx
 * 000000014073C4E4: jz      loc_14073C636
 * 000000014073C4EA: mov     eax, ebx
 * 000000014073C4EC: mov     rsi, r13
 * 000000014073C4EF: mov     r13d, dword ptr [rbp+1910h+NtHeaders]
 * 000000014073C4F3: mov     r11, r12
 * 000000014073C4F6: mov     [rsp+1A10h+var_19A0], rax
 * 000000014073C4FB: mov     ebx, 1
 * 000000014073C500: mov     [rsp+1A10h+var_19C0], r12
 * 000000014073C505: mov     r12d, [rsi]
 * 000000014073C508: mov     ecx, 30h ; '0'
 * 000000014073C50D: mov     r15, [r11]
 * 000000014073C510: mov     rax, r14
 * 000000014073C513: lea     edx, [rcx-2Ah]
 * 000000014073C516: mov     [rax], r10
 * 000000014073C519: add     ecx, 0FFFFFFF8h
 * 000000014073C51C: add     rax, 8
 * 000000014073C520: sub     rdx, rbx
 * 000000014073C523: jnz     short loc_14073C516
 * 000000014073C525: test    ecx, ecx
 * 000000014073C527: jz      short loc_14073C534
 * 000000014073C529: mov     [rax], r10b
 * 000000014073C52C: add     rax, rbx
 * 000000014073C52F: add     ecx, 0FFFFFFFFh
 * 000000014073C532: jnz     short loc_14073C529
 * 000000014073C534: mov     [r14], r13d
 * 000000014073C537: mov     [r14+8], r15
 * 000000014073C53B: cmp     r13d, r9d
 * 000000014073C53E: jnz     short loc_14073C55C
 * 000000014073C540: test    r12d, r12d
 * 000000014073C543: jz      short loc_14073C55C
 * 000000014073C545: lea     r9, [r14+18h]
 * 000000014073C549: mov     r8d, r12d
 * 000000014073C54C: mov     rdx, r15
 * 000000014073C54F: mov     rcx, rdi
 * 000000014073C552: call    sub_14014F138
 * 000000014073C557: mov     r11, [rsp+1A10h+var_19C0]
 * 000000014073C55C: mov     [r14+10h], r12d
 * 000000014073C560: lea     rcx, [r15+r12]
 * 000000014073C564: add     [rdi+598h], r12d
 * 000000014073C56B: mov     rax, r15
 * 000000014073C56E: mov     r10d, [rdi+584h]
 * 000000014073C575: mov     rdx, [rdi+588h]
 * 000000014073C57C: cmp     r15, rcx
 * 000000014073C57F: jnb     short loc_14073C58D
 * 000000014073C581: prefetchnta byte ptr [rax]
 * 000000014073C584: add     rax, 40h ; '@'
 * 000000014073C588: cmp     rax, rcx
 * 000000014073C58B: jb      short loc_14073C581
 * 000000014073C58D: mov     r8d, r12d
 * 000000014073C590: cmp     r12d, 8
 * 000000014073C594: jb      short loc_14073C5B3
 * 000000014073C596: mov     r9, r12
 * 000000014073C599: shr     r9, 3
 * 000000014073C59D: xor     rdx, [r15]
 * 000000014073C5A0: mov     ecx, r10d
 * 000000014073C5A3: rol     rdx, cl
 * 000000014073C5A6: add     r15, 8
 * 000000014073C5AA: add     r8d, 0FFFFFFF8h
 * 000000014073C5AE: sub     r9, rbx
 * 000000014073C5B1: jnz     short loc_14073C59D
 * 000000014073C5B3: test    r8d, r8d
 * 000000014073C5B6: jz      short loc_14073C5CE
 * 000000014073C5B8: movzx   eax, byte ptr [r15]
 * 000000014073C5BC: mov     ecx, r10d
 * 000000014073C5BF: xor     rdx, rax
 * 000000014073C5C2: add     r15, rbx
 * 000000014073C5C5: rol     rdx, cl
 * 000000014073C5C8: add     r8d, 0FFFFFFFFh
 * 000000014073C5CC: jnz     short loc_14073C5B8
 * 000000014073C5CE: mov     rax, rdx
 * 000000014073C5D1: shr     rax, 1Fh
 * 000000014073C5D5: xor     r10d, r10d
 * 000000014073C5D8: jmp     short loc_14073C5E0
 * 000000014073C5DA: xor     edx, eax
 * 000000014073C5DC: shr     rax, 1Fh
 * 000000014073C5E0: test    rax, rax
 * 000000014073C5E3: jnz     short loc_14073C5DA
 * 000000014073C5E5: btr     edx, 1Fh
 * 000000014073C5E9: lea     r9d, [rax+20h]
 * 000000014073C5ED: mov     [r14+14h], edx
 * 000000014073C5F1: add     r11, 8
 * 000000014073C5F5: add     [rdi+598h], r12d
 * 000000014073C5FC: add     rsi, 4
 * 000000014073C600: mov     r14, [rbp+1910h+var_1538]
 * 000000014073C607: add     r14, 30h ; '0'
 * 000000014073C60B: mov     [rsp+1A10h+var_19C0], r11
 * 000000014073C610: sub     [rsp+1A10h+var_19A0], rbx
 * 000000014073C615: mov     [rbp+1910h+var_1538], r14
 * 000000014073C61C: jnz     loc_14073C505
 * 000000014073C622: mov     r14, [rbp+1910h+var_1528]
 * 000000014073C629: mov     ebx, dword ptr [rsp+1A10h+var_19A8]
 * 000000014073C62D: mov     r13, [rsp+1A10h+var_19B0]
 * 000000014073C632: mov     r12, [rbp+1910h+var_1988]
 * 000000014073C636: mov     eax, 20h ; ' '
 * 000000014073C63B: cmp     dword ptr [rbp+1910h+NtHeaders], eax
 * 000000014073C63E: jnz     short loc_14073C664
 * 000000014073C640: test    ebx, ebx
 * 000000014073C642: jz      short loc_14073C664
 * 000000014073C644: mov     eax, 1
 * 000000014073C649: or      [r14+28h], eax
 * 000000014073C64D: mov     r14, [rbp+1910h+var_1528]
 * 000000014073C654: add     r14, 30h ; '0'
 * 000000014073C658: mov     [rbp+1910h+var_1528], r14
 * 000000014073C65F: add     ebx, 0FFFFFFFFh
 * 000000014073C662: jnz     short loc_14073C649
 * 000000014073C664: mov     rcx, r13; P
 * 000000014073C667: mov     [rbp+1910h+var_16D8], rdi
 * 000000014073C66E: call    ExFreePool
 * 000000014073C673: mov     rcx, r12; P
 * 000000014073C676: call    ExFreePool
 * 000000014073C67B: xor     r11d, r11d
 * 000000014073C67E: test    rdi, rdi
 * 000000014073C681: jz      loc_140731C01
 * 000000014073C687: test    dword ptr [rdi+690h], 40000000h
 * 000000014073C691: jz      loc_14073C8C8
 * 000000014073C697: mov     r14, [rbp+1910h+var_1548]
 * 000000014073C69E: test    r14, r14
 * 000000014073C6A1: jz      loc_14073C8C8
 * 000000014073C6A7: mov     rax, [rbp+1910h+var_1558]
 * 000000014073C6AE: lea     r9d, [r11+20h]
 * 000000014073C6B2: cmp     dword ptr [rdi+5A8h], 7
 * 000000014073C6B9: mov     r12d, r11d
 * 000000014073C6BC: mov     r13d, [rdi+554h]
 * 000000014073C6C3: mov     r14, [r14]
 * 000000014073C6C6: cmovz   r12d, r9d
 * 000000014073C6CA: mov     r15d, [rax]
 * 000000014073C6CD: mov     r8d, [rdi+634h]
 * 000000014073C6D4: lea     eax, [r13+30h]
 * 000000014073C6D8: cmp     eax, [rdi+714h]
 * 000000014073C6DE: jbe     loc_14073C7BC
 * 000000014073C6E4: mov     edx, eax
 * 000000014073C6E6: mov     rcx, rdi
 * 000000014073C6E9: call    sub_140236718
 * 000000014073C6EE: xor     r11d, r11d
 * 000000014073C6F1: mov     rbx, rax
 * 000000014073C6F4: test    rax, rax
 * 000000014073C6F7: jz      loc_140731C01
 * 000000014073C6FD: mov     edx, [rdi+690h]
 * 000000014073C703: test    dl, 4
 * 000000014073C706: jnz     loc_14073C7AD
 * 000000014073C70C: mov     eax, [rdi+554h]
 * 000000014073C712: and     edx, 20000000h
 * 000000014073C718: mov     r9, [rdi+538h]
 * 000000014073C71F: neg     edx
 * 000000014073C721: lea     edx, [r11+1]
 * 000000014073C725: sbb     r8d, r8d
 * 000000014073C728: and     r8d, [rdi+634h]
 * 000000014073C72F: cmp     eax, 8
 * 000000014073C732: jb      short loc_14073C749
 * 000000014073C734: mov     ecx, eax
 * 000000014073C736: shr     rcx, 3
 * 000000014073C73A: mov     [rdi], r11
 * 000000014073C73D: add     eax, 0FFFFFFF8h
 * 000000014073C740: add     rdi, 8
 * 000000014073C744: sub     rcx, rdx
 * 000000014073C747: jnz     short loc_14073C73A
 * 000000014073C749: test    eax, eax
 * 000000014073C74B: jz      short loc_14073C758
 * 000000014073C74D: mov     [rdi], r11b
 * 000000014073C750: add     rdi, rdx
 * 000000014073C753: add     eax, 0FFFFFFFFh
 * 000000014073C756: jnz     short loc_14073C74D
 * 000000014073C758: mov     edi, [rbx+634h]
 * 000000014073C75E: mov     [rbx+634h], r8d
 * 000000014073C765: cmp     r8d, 3
 * 000000014073C769: jz      short loc_14073C79B
 * 000000014073C76B: mov     eax, [rbx+690h]
 * 000000014073C771: mov     ecx, r11d
 * 000000014073C774: and     eax, 10000000h
 * 000000014073C779: cmovz   ecx, r8d
 * 000000014073C77D: test    ecx, ecx
 * 000000014073C77F: jz      short loc_14073C790
 * 000000014073C781: lea     rcx, [r9-8]
 * 000000014073C785: mov     rdx, [rcx]
 * 000000014073C788: call    qword ptr [rbx+1F8h]
 * 000000014073C78E: jmp     short loc_14073C7A4
 * 000000014073C790: mov     rcx, r9
 * 000000014073C793: call    qword ptr [rbx+0F8h]
 * 000000014073C799: jmp     short loc_14073C7A4
 * 000000014073C79B: mov     rcx, r9
 * 000000014073C79E: call    qword ptr [rbx+320h]
 * 000000014073C7A4: mov     [rbx+634h], edi
 * 000000014073C7AA: xor     r11d, r11d
 * 000000014073C7AD: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 000000014073C7B4: mov     r9d, 20h ; ' '
 * 000000014073C7BA: jmp     short loc_14073C7C5
 * 000000014073C7BC: mov     rbx, rdi
 * 000000014073C7BF: mov     [rdi+554h], eax
 * 000000014073C7C5: mov     eax, 1
 * 000000014073C7CA: lea     rdi, [rbx+r13]
 * 000000014073C7CE: add     [rbx+57Ch], eax
 * 000000014073C7D4: mov     [rbp+1910h+var_1518], rdi
 * 000000014073C7DB: lea     ecx, [rax+2Fh]
 * 000000014073C7DE: mov     rax, rdi
 * 000000014073C7E1: lea     edx, [rcx-2Ah]
 * 000000014073C7E4: lea     r13d, [rcx-2Fh]
 * 000000014073C7E8: mov     [rax], r11
 * 000000014073C7EB: add     ecx, 0FFFFFFF8h
 * 000000014073C7EE: add     rax, 8
 * 000000014073C7F2: sub     rdx, r13
 * 000000014073C7F5: jnz     short loc_14073C7E8
 * 000000014073C7F7: test    ecx, ecx
 * 000000014073C7F9: jz      short loc_14073C806
 * 000000014073C7FB: mov     [rax], r11b
 * 000000014073C7FE: add     rax, r13
 * 000000014073C801: add     ecx, 0FFFFFFFFh
 * 000000014073C804: jnz     short loc_14073C7FB
 * 000000014073C806: mov     [rdi], r12d
 * 000000014073C809: mov     [rdi+8], r14
 * 000000014073C80D: cmp     r12d, r9d
 * 000000014073C810: jnz     short loc_14073C82C
 * 000000014073C812: test    r15d, r15d
 * 000000014073C815: jz      short loc_14073C82C
 * 000000014073C817: lea     r9, [rdi+18h]
 * 000000014073C81B: mov     r8d, r15d
 * 000000014073C81E: mov     rdx, r14
 * 000000014073C821: mov     rcx, rbx
 * 000000014073C824: call    sub_14014F138
 * 000000014073C829: xor     r11d, r11d
 * 000000014073C82C: mov     [rdi+10h], r15d
 * 000000014073C830: lea     rcx, [r14+r15]
 * 000000014073C834: add     [rbx+598h], r15d
 * 000000014073C83B: mov     rax, r14
 * 000000014073C83E: mov     r10d, [rbx+584h]
 * 000000014073C845: mov     rdx, [rbx+588h]
 * 000000014073C84C: cmp     r14, rcx
 * 000000014073C84F: jnb     short loc_14073C85D
 * 000000014073C851: prefetchnta byte ptr [rax]
 * 000000014073C854: add     rax, 40h ; '@'
 * 000000014073C858: cmp     rax, rcx
 * 000000014073C85B: jb      short loc_14073C851
 * 000000014073C85D: mov     r8d, r15d
 * 000000014073C860: cmp     r15d, 8
 * 000000014073C864: jb      short loc_14073C883
 * 000000014073C866: mov     r9, r15
 * 000000014073C869: shr     r9, 3
 * 000000014073C86D: xor     rdx, [r14]
 * 000000014073C870: mov     ecx, r10d
 * 000000014073C873: rol     rdx, cl
 * 000000014073C876: add     r14, 8
 * 000000014073C87A: add     r8d, 0FFFFFFF8h
 * 000000014073C87E: sub     r9, r13
 * 000000014073C881: jnz     short loc_14073C86D
 * 000000014073C883: test    r8d, r8d
 * 000000014073C886: jz      short loc_14073C89E
 * 000000014073C888: movzx   eax, byte ptr [r14]
 * 000000014073C88C: mov     ecx, r10d
 * 000000014073C88F: xor     rdx, rax
 * 000000014073C892: add     r14, r13
 * 000000014073C895: rol     rdx, cl
 * 000000014073C898: add     r8d, 0FFFFFFFFh
 * 000000014073C89C: jnz     short loc_14073C888
 * 000000014073C89E: mov     rax, rdx
 * 000000014073C8A1: jmp     short loc_14073C8A5
 * 000000014073C8A3: xor     edx, eax
 * 000000014073C8A5: shr     rax, 1Fh
 * 000000014073C8A9: test    rax, rax
 * 000000014073C8AC: jnz     short loc_14073C8A3
 * 000000014073C8AE: btr     edx, 1Fh
 * 000000014073C8B2: mov     [rbp+1910h+var_16D8], rbx
 * 000000014073C8B9: mov     [rdi+14h], edx
 * 000000014073C8BC: mov     rdi, rbx
 * 000000014073C8BF: add     [rbx+598h], r15d
 * 000000014073C8C6: jmp     short loc_14073C8CE
 * 000000014073C8C8: mov     r13d, 1
 * 000000014073C8CE: cli
 * 000000014073C8CF: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 000000014073C8D6: jnz     short loc_14073C8DA
 * 000000014073C8D8: jmp     short loc_14073C8D8
 * 000000014073C8DA: sti
 * 000000014073C8DB: or      dword ptr [rsp+1A10h+var_19A8], 0FFFFFFFFh
 * 000000014073C8E0: lea     rax, HvlpHypercallCodeVa
 * 000000014073C8E7: mov     [rbp+1910h+var_BD8], rax
 * 000000014073C8EE: mov     r12d, r13d
 * 000000014073C8F1: mov     rax, cs:HvlpHypercallCodeVa
 * 000000014073C8F8: mov     [rbp+1910h+var_D60], 8
 * 000000014073C902: test    rax, rax
 * 000000014073C905: jz      loc_14073C9F4
 * 000000014073C90B: cmp     dword ptr [rdi+5A8h], 7
 * 000000014073C912: jz      short loc_14073C93C
 * 000000014073C914: mov     ecx, 80000000h
 * 000000014073C919: test    [rdi+690h], ecx
 * 000000014073C91F: jnz     loc_14073CA14
 * 000000014073C925: call    HvlIsHypercallOverlayLocked
 * 000000014073C92A: xor     r11d, r11d
 * 000000014073C92D: test    al, al
 * 000000014073C92F: jnz     loc_14073CA14
 * 000000014073C935: mov     rax, cs:HvlpHypercallCodeVa
 * 000000014073C93C: xor     ecx, ecx
 * 000000014073C93E: mov     [rbp+1910h+var_BD0], rax
 * 000000014073C945: mov     eax, 40000000h
 * 000000014073C94A: cpuid
 * 000000014073C94C: mov     dword ptr [rbp+1910h+var_D9C], ebx
 * 000000014073C952: mov     dword ptr [rbp+1910h+var_D9C+4], ecx
 * 000000014073C958: mov     rcx, [rbp+1910h+var_D9C]
 * 000000014073C95F: cmp     rcx, qword ptr cs:aMicrosoftHv; "Microsoft Hv"
 * 000000014073C966: mov     [rbp+1910h+var_DA0], eax
 * 000000014073C96C: mov     [rbp+1910h+var_D94], edx
 * 000000014073C972: jnz     short loc_14073C9E8
 * 000000014073C974: cmp     edx, dword ptr cs:aMicrosoftHv+8; "t Hv"
 * 000000014073C97A: jnz     short loc_14073C9E8
 * 000000014073C97C: mov     r8d, 40000002h
 * 000000014073C982: cmp     eax, r8d
 * 000000014073C985: jb      short loc_14073C9E8
 * 000000014073C987: xor     ecx, ecx
 * 000000014073C989: lea     eax, [r8-1]
 * 000000014073C98D: cpuid
 * 000000014073C98F: mov     [rbp+1910h+var_DA0], eax
 * 000000014073C995: mov     dword ptr [rbp+1910h+var_D9C], ebx
 * 000000014073C99B: mov     dword ptr [rbp+1910h+var_D9C+4], ecx
 * 000000014073C9A1: mov     [rbp+1910h+var_D94], edx
 * 000000014073C9A7: cmp     eax, 31237648h
 * 000000014073C9AC: jnz     short loc_14073C9E8
 * 000000014073C9AE: xor     ecx, ecx
 * 000000014073C9B0: mov     eax, r8d
 * 000000014073C9B3: cpuid
 * 000000014073C9B5: mov     [rbp+1910h+var_DA0], eax
 * 000000014073C9BB: mov     eax, ebx
 * 000000014073C9BD: and     eax, 0FFFF0000h
 * 000000014073C9C2: mov     dword ptr [rbp+1910h+var_D9C], ebx
 * 000000014073C9C8: mov     dword ptr [rbp+1910h+var_D9C+4], ecx
 * 000000014073C9CE: mov     [rbp+1910h+var_D94], edx
 * 000000014073C9D4: cmp     eax, 60000h
 * 000000014073C9D9: jnz     short loc_14073C9E8
 * 000000014073C9DB: movzx   eax, bx
 * 000000014073C9DE: cmp     eax, r13d
 * 000000014073C9E1: mov     eax, 4
 * 000000014073C9E6: jz      short loc_14073C9ED
 * 000000014073C9E8: mov     eax, 1000h
 * 000000014073C9ED: mov     dword ptr [rsp+1A10h+var_19A8], r13d
 * 000000014073C9F2: jmp     short loc_14073CA08
 * 000000014073C9F4: lea     rax, HvlpInterruptCallback
 * 000000014073C9FB: mov     [rbp+1910h+var_BD0], rax
 * 000000014073CA02: mov     eax, cs:dword_1407174D8
 * 000000014073CA08: mov     r12d, 2
 * 000000014073CA0E: mov     [rbp+1910h+var_D5C], eax
 * 000000014073CA14: mov     r15d, [rdi+554h]
 * 000000014073CA1B: lea     rcx, HvlpVsmVtlCallVa
 * 000000014073CA22: mov     r8d, [rdi+634h]
 * 000000014073CA29: mov     r9d, 20h ; ' '
 * 000000014073CA2F: mov     eax, r12d
 * 000000014073CA32: add     r12d, r13d
 * 000000014073CA35: cmp     dword ptr [rdi+5A8h], 7
 * 000000014073CA3C: mov     r13d, r11d
 * 000000014073CA3F: mov     dword ptr [rbp+1910h+NtHeaders], r12d
 * 000000014073CA43: cmovz   r13d, r9d
 * 000000014073CA47: mov     [rbp+rax*8+1910h+var_BD8], rcx
 * 000000014073CA4F: mov     [rbp+rax*4+1910h+var_D60], 8
 * 000000014073CA5A: lea     eax, [r12+r12*2]
 * 000000014073CA5E: shl     eax, 4
 * 000000014073CA61: add     eax, r15d
 * 000000014073CA64: mov     dword ptr [rbp+1910h+var_1950], r13d
 * 000000014073CA68: cmp     eax, [rdi+714h]
 * 000000014073CA6E: jbe     loc_14073CB4F
 * 000000014073CA74: mov     edx, eax
 * 000000014073CA76: mov     rcx, rdi
 * 000000014073CA79: call    sub_140236718
 * 000000014073CA7E: xor     r11d, r11d
 * 000000014073CA81: mov     r14, rax
 * 000000014073CA84: test    rax, rax
 * 000000014073CA87: jz      loc_140731C01
 * 000000014073CA8D: mov     edx, [rdi+690h]
 * 000000014073CA93: test    dl, 4
 * 000000014073CA96: jnz     loc_14073CB3F
 * 000000014073CA9C: mov     eax, [rdi+554h]
 * 000000014073CAA2: lea     r8d, [r11+1]
 * 000000014073CAA6: mov     rbx, [rdi+538h]
 * 000000014073CAAD: and     edx, 20000000h
 * 000000014073CAB3: neg     edx
 * 000000014073CAB5: sbb     edx, edx
 * 000000014073CAB7: and     edx, [rdi+634h]
 * 000000014073CABD: cmp     eax, 8
 * 000000014073CAC0: jb      short loc_14073CAD7
 * 000000014073CAC2: mov     ecx, eax
 * 000000014073CAC4: shr     rcx, 3
 * 000000014073CAC8: mov     [rdi], r11
 * 000000014073CACB: add     eax, 0FFFFFFF8h
 * 000000014073CACE: add     rdi, 8
 * 000000014073CAD2: sub     rcx, r8
 * 000000014073CAD5: jnz     short loc_14073CAC8
 * 000000014073CAD7: test    eax, eax
 * 000000014073CAD9: jz      short loc_14073CAE6
 * 000000014073CADB: mov     [rdi], r11b
 * 000000014073CADE: add     rdi, r8
 * 000000014073CAE1: add     eax, 0FFFFFFFFh
 * 000000014073CAE4: jnz     short loc_14073CADB
 * 000000014073CAE6: mov     edi, [r14+634h]
 * 000000014073CAED: mov     [r14+634h], edx
 * 000000014073CAF4: cmp     edx, 3
 * 000000014073CAF7: jz      short loc_14073CB2B
 * 000000014073CAF9: mov     eax, [r14+690h]
 * 000000014073CB00: mov     ecx, r11d
 * 000000014073CB03: and     eax, 10000000h
 * 000000014073CB08: cmovz   ecx, edx
 * 000000014073CB0B: test    ecx, ecx
 * 000000014073CB0D: jz      short loc_14073CB1F
 * 000000014073CB0F: lea     rcx, [rbx-8]
 * 000000014073CB13: mov     rdx, [rcx]
 * 000000014073CB16: call    qword ptr [r14+1F8h]
 * 000000014073CB1D: jmp     short loc_14073CB35
 * 000000014073CB1F: mov     rcx, rbx
 * 000000014073CB22: call    qword ptr [r14+0F8h]
 * 000000014073CB29: jmp     short loc_14073CB35
 * 000000014073CB2B: mov     rcx, rbx
 * 000000014073CB2E: call    qword ptr [r14+320h]
 * 000000014073CB35: mov     [r14+634h], edi
 * 000000014073CB3C: xor     r11d, r11d
 * 000000014073CB3F: and     dword ptr [r14+690h], 0FFFFFFFBh
 * 000000014073CB47: mov     r9d, 20h ; ' '
 * 000000014073CB4D: jmp     short loc_14073CB58
 * 000000014073CB4F: mov     r14, rdi
 * 000000014073CB52: mov     [rdi+554h], eax
 * 000000014073CB58: add     [r14+57Ch], r12d
 * 000000014073CB5F: lea     rbx, [r14+r15]
 * 000000014073CB63: mov     [rbp+1910h+var_1508], rbx
 * 000000014073CB6A: mov     r8d, 1
 * 000000014073CB70: mov     [rbp+1910h+var_14F8], rbx
 * 000000014073CB77: test    r12d, r12d
 * 000000014073CB7A: jz      loc_14073CCE2
 * 000000014073CB80: mov     esi, dword ptr [rbp+1910h+var_1950]
 * 000000014073CB83: lea     r10, [rbp+1910h+var_D60]
 * 000000014073CB8A: mov     r11d, r12d
 * 000000014073CB8D: lea     r13, [rbp+1910h+var_BD8]
 * 000000014073CB94: mov     [rbp+1910h+var_1988], r10
 * 000000014073CB98: xor     r12d, r12d
 * 000000014073CB9B: mov     [rsp+1A10h+var_19B0], r11
 * 000000014073CBA0: mov     r15d, [r10]
 * 000000014073CBA3: mov     ecx, 30h ; '0'
 * 000000014073CBA8: mov     rdi, [r13+0]
 * 000000014073CBAC: mov     rax, rbx
 * 000000014073CBAF: lea     edx, [rcx-2Ah]
 * 000000014073CBB2: mov     [rax], r12
 * 000000014073CBB5: add     ecx, 0FFFFFFF8h
 * 000000014073CBB8: add     rax, 8
 * 000000014073CBBC: sub     rdx, r8
 * 000000014073CBBF: jnz     short loc_14073CBB2
 * 000000014073CBC1: test    ecx, ecx
 * 000000014073CBC3: jz      short loc_14073CBD0
 * 000000014073CBC5: mov     [rax], r12b
 * 000000014073CBC8: add     rax, r8
 * 000000014073CBCB: add     ecx, 0FFFFFFFFh
 * 000000014073CBCE: jnz     short loc_14073CBC5
 * 000000014073CBD0: mov     [rbx], esi
 * 000000014073CBD2: mov     [rbx+8], rdi
 * 000000014073CBD6: cmp     esi, r9d
 * 000000014073CBD9: jnz     short loc_14073CBFB
 * 000000014073CBDB: test    r15d, r15d
 * 000000014073CBDE: jz      short loc_14073CBFB
 * 000000014073CBE0: lea     r9, [rbx+18h]
 * 000000014073CBE4: mov     r8d, r15d
 * 000000014073CBE7: mov     rdx, rdi
 * 000000014073CBEA: mov     rcx, r14
 * 000000014073CBED: call    sub_14014F138
 * 000000014073CBF2: mov     r10, [rbp+1910h+var_1988]
 * 000000014073CBF6: mov     r11, [rsp+1A10h+var_19B0]
 * 000000014073CBFB: mov     [rbx+10h], r15d
 * 000000014073CBFF: lea     rcx, [rdi+r15]
 * 000000014073CC03: add     [r14+598h], r15d
 * 000000014073CC0A: mov     rax, rdi
 * 000000014073CC0D: mov     r9d, [r14+584h]
 * 000000014073CC14: mov     rdx, [r14+588h]
 * 000000014073CC1B: cmp     rdi, rcx
 * 000000014073CC1E: jnb     short loc_14073CC2C
 * 000000014073CC20: prefetchnta byte ptr [rax]
 * 000000014073CC23: add     rax, 40h ; '@'
 * 000000014073CC27: cmp     rax, rcx
 * 000000014073CC2A: jb      short loc_14073CC20
 * 000000014073CC2C: mov     r8d, r15d
 * 000000014073CC2F: cmp     r15d, 8
 * 000000014073CC33: jb      short loc_14073CC5B
 * 000000014073CC35: mov     rax, r15
 * 000000014073CC38: mov     r12d, 1
 * 000000014073CC3E: shr     rax, 3
 * 000000014073CC42: xor     rdx, [rdi]
 * 000000014073CC45: mov     ecx, r9d
 * 000000014073CC48: rol     rdx, cl
 * 000000014073CC4B: add     rdi, 8
 * 000000014073CC4F: add     r8d, 0FFFFFFF8h
 * 000000014073CC53: sub     rax, r12
 * 000000014073CC56: jnz     short loc_14073CC42
 * 000000014073CC58: xor     r12d, r12d
 * 000000014073CC5B: test    r8d, r8d
 * 000000014073CC5E: jz      short loc_14073CC7E
 * 000000014073CC60: mov     r12d, 1
 * 000000014073CC66: movzx   eax, byte ptr [rdi]
 * 000000014073CC69: mov     ecx, r9d
 * 000000014073CC6C: xor     rdx, rax
 * 000000014073CC6F: add     rdi, r12
 * 000000014073CC72: rol     rdx, cl
 * 000000014073CC75: add     r8d, 0FFFFFFFFh
 * 000000014073CC79: jnz     short loc_14073CC66
 * 000000014073CC7B: xor     r12d, r12d
 * 000000014073CC7E: mov     rax, rdx
 * 000000014073CC81: jmp     short loc_14073CC85
 * 000000014073CC83: xor     edx, eax
 * 000000014073CC85: shr     rax, 1Fh
 * 000000014073CC89: test    rax, rax
 * 000000014073CC8C: jnz     short loc_14073CC83
 * 000000014073CC8E: btr     edx, 1Fh
 * 000000014073CC92: lea     r8d, [rax+1]
 * 000000014073CC96: mov     [rbx+14h], edx
 * 000000014073CC99: lea     r9d, [rax+20h]
 * 000000014073CC9D: add     [r14+598h], r15d
 * 000000014073CCA4: add     r10, 4
 * 000000014073CCA8: mov     rbx, [rbp+1910h+var_1508]
 * 000000014073CCAF: add     r13, 8
 * 000000014073CCB3: add     rbx, 30h ; '0'
 * 000000014073CCB7: mov     [rbp+1910h+var_1988], r10
 * 000000014073CCBB: sub     r11, r8
 * 000000014073CCBE: mov     [rbp+1910h+var_1508], rbx
 * 000000014073CCC5: mov     [rsp+1A10h+var_19B0], r11
 * 000000014073CCCA: jnz     loc_14073CBA0
 * 000000014073CCD0: mov     rbx, [rbp+1910h+var_14F8]
 * 000000014073CCD7: xor     r11d, r11d
 * 000000014073CCDA: mov     r12d, dword ptr [rbp+1910h+NtHeaders]
 * 000000014073CCDE: mov     r13d, dword ptr [rbp+1910h+var_1950]
 * 000000014073CCE2: mov     edx, 20h ; ' '
 * 000000014073CCE7: mov     [rbp+1910h+var_14E8], rbx
 * 000000014073CCEE: cmp     r13d, edx
 * 000000014073CCF1: jnz     short loc_14073CD1B
 * 000000014073CCF3: test    r12d, r12d
 * 000000014073CCF6: jz      short loc_14073CD1B
 * 000000014073CCF8: or      [rbx+28h], r8d
 * 000000014073CCFC: mov     rbx, [rbp+1910h+var_14F8]
 * 000000014073CD03: add     rbx, 30h ; '0'
 * 000000014073CD07: mov     [rbp+1910h+var_14F8], rbx
 * 000000014073CD0E: add     r12d, 0FFFFFFFFh
 * 000000014073CD12: jnz     short loc_14073CCF8
 * 000000014073CD14: mov     rbx, [rbp+1910h+var_14E8]
 * 000000014073CD1B: mov     eax, dword ptr [rsp+1A10h+var_19A8]
 * 000000014073CD1F: cmp     eax, 0FFFFFFFFh
 * 000000014073CD22: jz      short loc_14073CD35
 * 000000014073CD24: lea     rcx, [rax+rax*2]
 * 000000014073CD28: add     rcx, rcx
 * 000000014073CD2B: cmp     [rbx+rcx*8], edx
 * 000000014073CD2E: jnz     short loc_14073CD35
 * 000000014073CD30: or      dword ptr [rbx+rcx*8+28h], 4
 * 000000014073CD35: mov     [rbp+1910h+var_16D8], r14
 * 000000014073CD3C: cli
 * 000000014073CD3D: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 000000014073CD44: jnz     short loc_14073CD48
 * 000000014073CD46: jmp     short loc_14073CD46
 * 000000014073CD48: sti
 * 000000014073CD49: cmp     dword ptr [rsp+1A10h+var_19B8], r11d
 * 000000014073CD4E: jnz     loc_14073D5AD
 * 000000014073CD54: and     [rbp+1910h+var_18DC], 4
 * 000000014073CD58: mov     r8d, 7
 * 000000014073CD5E: jnz     short loc_14073CD6B
 * 000000014073CD60: mov     r8d, cs:SeCiStateElementCount
 * 000000014073CD67: add     r8d, 7
 * 000000014073CD6B: rdtsc
 * 000000014073CD6D: shl     rdx, 20h
 * 000000014073CD71: mov     r13, 7010008004002001h
 * 000000014073CD7B: or      rax, rdx
 * 000000014073CD7E: mov     r12d, 5
 * 000000014073CD84: mov     rcx, rax
 * 000000014073CD87: mov     rdx, rax
 * 000000014073CD8A: ror     rcx, 3
 * 000000014073CD8E: mov     rax, r13
 * 000000014073CD91: xor     rdx, rcx
 * 000000014073CD94: mul     rdx
 * 000000014073CD97: mov     rcx, rdx
 * 000000014073CD9A: mov     [rbp+1910h+var_14D8], rdx
 * 000000014073CDA1: xor     rcx, rax
 * 000000014073CDA4: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014073CDAE: mul     rcx
 * 000000014073CDB1: shr     rdx, 1
 * 000000014073CDB4: imul    rax, rdx, 0Bh
 * 000000014073CDB8: sub     rcx, rax
 * 000000014073CDBB: cmp     ecx, r12d
 * 000000014073CDBE: ja      loc_14073CE6F
 * 000000014073CDC4: jz      loc_14073CE57
 * 000000014073CDCA: test    ecx, ecx
 * 000000014073CDCC: jz      short loc_14073CE3F
 * 000000014073CDCE: sub     ecx, 1
 * 000000014073CDD1: jz      short loc_14073CE28
 * 000000014073CDD3: sub     ecx, 1
 * 000000014073CDD6: jz      short loc_14073CE10
 * 000000014073CDD8: cmp     ecx, 1
 * 000000014073CDDB: jz      short loc_14073CDF5
 * 000000014073CDDD: mov     [rbp+1910h+var_1838], 67076494h
 * 000000014073CDE7: mov     edi, [rbp+1910h+var_1838]
 * 000000014073CDED: rol     edi, 4
 * 000000014073CDF0: jmp     loc_14073CF79
 * 000000014073CDF5: mov     [rbp+1910h+var_1830], 0A8223938h
 * 000000014073CDFF: mov     edi, [rbp+1910h+var_1830]
 * 000000014073CE05: xor     edi, 3
 * 000000014073CE08: ror     edi, 0Fh
 * 000000014073CE0B: jmp     loc_14073CF79
 * 000000014073CE10: mov     [rbp+1910h+var_1828], 85B5910Dh
 * 000000014073CE1A: mov     edi, [rbp+1910h+var_1828]
 * 000000014073CE20: ror     edi, 2
 * 000000014073CE23: jmp     loc_14073CF79
 * 000000014073CE28: mov     [rbp+1910h+var_1820], 0B2AD31A1h
 * 000000014073CE32: mov     edi, [rbp+1910h+var_1820]
 * 000000014073CE38: rol     edi, 1
 * 000000014073CE3A: jmp     loc_14073CF79
 * 000000014073CE3F: mov     [rbp+1910h+var_1818], 0D098D0D8h
 * 000000014073CE49: mov     edi, [rbp+1910h+var_1818]
 * 000000014073CE4F: ror     edi, 6
 * 000000014073CE52: jmp     loc_14073CF79
 * 000000014073CE57: mov     [rbp+1910h+var_1810], 288C49EDh
 * 000000014073CE61: mov     edi, [rbp+1910h+var_1810]
 * 000000014073CE67: ror     edi, 5
 * 000000014073CE6A: jmp     loc_14073CF79
 * 000000014073CE6F: sub     ecx, 6
 * 000000014073CE72: jz      loc_14073CF63
 * 000000014073CE78: sub     ecx, 1
 * 000000014073CE7B: jz      loc_14073CF4E
 * 000000014073CE81: sub     ecx, 1
 * 000000014073CE84: jz      loc_14073CF39
 * 000000014073CE8A: cmp     ecx, 1
 * 000000014073CE8D: jz      loc_14073CF21
 * 000000014073CE93: rdtsc
 * 000000014073CE95: shl     rdx, 20h
 * 000000014073CE99: mov     r9d, 4EC4EC4Fh
 * 000000014073CE9F: or      rax, rdx
 * 000000014073CEA2: mov     rcx, rax
 * 000000014073CEA5: mov     rdx, rax
 * 000000014073CEA8: ror     rcx, 3
 * 000000014073CEAC: mov     rax, r13
 * 000000014073CEAF: xor     rdx, rcx
 * 000000014073CEB2: mul     rdx
 * 000000014073CEB5: mov     rdi, rax
 * 000000014073CEB8: mov     [rbp+1910h+var_14C8], rdx
 * 000000014073CEBF: xor     edi, edx
 * 000000014073CEC1: mov     eax, r9d
 * 000000014073CEC4: mul     edi
 * 000000014073CEC6: mov     ebx, edi
 * 000000014073CEC8: mov     eax, r9d
 * 000000014073CECB: shr     edx, 3
 * 000000014073CECE: imul    ecx, edx, 1Ah
 * 000000014073CED1: shr     edi, 5
 * 000000014073CED4: mul     edi
 * 000000014073CED6: sub     ebx, ecx
 * 000000014073CED8: mov     ecx, edi
 * 000000014073CEDA: add     ebx, 61h ; 'a'
 * 000000014073CEDD: shr     edx, 3
 * 000000014073CEE0: imul    eax, edx, 1Ah
 * 000000014073CEE3: shl     ebx, 8
 * 000000014073CEE6: shr     edi, 5
 * 000000014073CEE9: sub     ecx, eax
 * 000000014073CEEB: mov     eax, r9d
 * 000000014073CEEE: mul     edi
 * 000000014073CEF0: add     ecx, 41h ; 'A'
 * 000000014073CEF3: or      ecx, ebx
 * 000000014073CEF5: shr     edx, 3
 * 000000014073CEF8: imul    eax, edx, 1Ah
 * 000000014073CEFB: mov     ebx, edi
 * 000000014073CEFD: shr     edi, 5
 * 000000014073CF00: shl     ecx, 8
 * 000000014073CF03: sub     ebx, eax
 * 000000014073CF05: mov     eax, r9d
 * 000000014073CF08: mul     edi
 * 000000014073CF0A: add     ebx, 61h ; 'a'
 * 000000014073CF0D: shr     edx, 3
 * 000000014073CF10: or      ebx, ecx
 * 000000014073CF12: imul    eax, edx, 1Ah
 * 000000014073CF15: shl     ebx, 8
 * 000000014073CF18: sub     edi, eax
 * 000000014073CF1A: add     edi, 41h ; 'A'
 * 000000014073CF1D: or      edi, ebx
 * 000000014073CF1F: jmp     short loc_14073CF79
 * 000000014073CF21: mov     [rbp+1910h+var_1808], 0B0869E85h
 * 000000014073CF2B: mov     edi, [rbp+1910h+var_1808]
 * 000000014073CF31: xor     edi, 9
 * 000000014073CF34: ror     edi, 21h
 * 000000014073CF37: jmp     short loc_14073CF79
 * 000000014073CF39: mov     [rbp+1910h+var_1800], 64664142h
 * 000000014073CF43: mov     edi, [rbp+1910h+var_1800]
 * 000000014073CF49: ror     edi, 8
 * 000000014073CF4C: jmp     short loc_14073CF79
 * 000000014073CF4E: mov     [rbp+1910h+var_17F8], 82C6A6D8h
 * 000000014073CF58: mov     edi, [rbp+1910h+var_17F8]
 * 000000014073CF5E: rol     edi, 7
 * 000000014073CF61: jmp     short loc_14073CF79
 * 000000014073CF63: mov     [rbp+1910h+var_17F0], 4E574672h
 * 000000014073CF6D: mov     edi, [rbp+1910h+var_17F0]
 * 000000014073CF73: xor     edi, 6
 * 000000014073CF76: ror     edi, 18h
 * 000000014073CF79: mov     edx, r8d
 * 000000014073CF7C: mov     ecx, 200h; PoolType
 * 000000014073CF81: mov     r15d, r8d
 * 000000014073CF84: mov     r8d, edi; Tag
 * 000000014073CF87: shl     rdx, 3; NumberOfBytes
 * 000000014073CF8B: call    ExAllocatePoolWithTag
 * 000000014073CF90: mov     [rbp+1910h+var_1988], rax
 * 000000014073CF94: mov     rbx, rax
 * 000000014073CF97: test    rax, rax
 * 000000014073CF9A: jz      loc_140731C01
 * 000000014073CFA0: rdtsc
 * 000000014073CFA2: shl     rdx, 20h
 * 000000014073CFA6: or      rax, rdx
 * 000000014073CFA9: mov     rcx, rax
 * 000000014073CFAC: mov     rdx, rax
 * 000000014073CFAF: ror     rcx, 3
 * 000000014073CFB3: mov     rax, r13
 * 000000014073CFB6: xor     rdx, rcx
 * 000000014073CFB9: mul     rdx
 * 000000014073CFBC: mov     rcx, rdx
 * 000000014073CFBF: mov     [rbp+1910h+var_14B8], rdx
 * 000000014073CFC6: xor     rcx, rax
 * 000000014073CFC9: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014073CFD3: mul     rcx
 * 000000014073CFD6: shr     rdx, 1
 * 000000014073CFD9: imul    rax, rdx, 0Bh
 * 000000014073CFDD: sub     rcx, rax
 * 000000014073CFE0: cmp     ecx, r12d
 * 000000014073CFE3: ja      loc_14073D094
 * 000000014073CFE9: jz      loc_14073D07C
 * 000000014073CFEF: test    ecx, ecx
 * 000000014073CFF1: jz      short loc_14073D064
 * 000000014073CFF3: sub     ecx, 1
 * 000000014073CFF6: jz      short loc_14073D04D
 * 000000014073CFF8: sub     ecx, 1
 * 000000014073CFFB: jz      short loc_14073D035
 * 000000014073CFFD: cmp     ecx, 1
 * 000000014073D000: jz      short loc_14073D01A
 * 000000014073D002: mov     [rbp+1910h+var_17E8], 67076494h
 * 000000014073D00C: mov     edi, [rbp+1910h+var_17E8]
 * 000000014073D012: rol     edi, 4
 * 000000014073D015: jmp     loc_14073D1A2
 * 000000014073D01A: mov     [rbp+1910h+var_17E0], 0A8223938h
 * 000000014073D024: mov     edi, [rbp+1910h+var_17E0]
 * 000000014073D02A: xor     edi, 3
 * 000000014073D02D: ror     edi, 0Fh
 * 000000014073D030: jmp     loc_14073D1A2
 * 000000014073D035: mov     [rbp+1910h+var_17D8], 85B5910Dh
 * 000000014073D03F: mov     edi, [rbp+1910h+var_17D8]
 * 000000014073D045: ror     edi, 2
 * 000000014073D048: jmp     loc_14073D1A2
 * 000000014073D04D: mov     [rbp+1910h+var_17D0], 0B2AD31A1h
 * 000000014073D057: mov     edi, [rbp+1910h+var_17D0]
 * 000000014073D05D: rol     edi, 1
 * 000000014073D05F: jmp     loc_14073D1A2
 * 000000014073D064: mov     [rbp+1910h+var_17C8], 0D098D0D8h
 * 000000014073D06E: mov     edi, [rbp+1910h+var_17C8]
 * 000000014073D074: ror     edi, 6
 * 000000014073D077: jmp     loc_14073D1A2
 * 000000014073D07C: mov     [rbp+1910h+var_17C0], 288C49EDh
 * 000000014073D086: mov     edi, [rbp+1910h+var_17C0]
 * 000000014073D08C: ror     edi, 5
 * 000000014073D08F: jmp     loc_14073D1A2
 * 000000014073D094: sub     ecx, 6
 * 000000014073D097: jz      loc_14073D18C
 * 000000014073D09D: sub     ecx, 1
 * 000000014073D0A0: jz      loc_14073D177
 * 000000014073D0A6: sub     ecx, 1
 * 000000014073D0A9: jz      loc_14073D162
 * 000000014073D0AF: cmp     ecx, 1
 * 000000014073D0B2: jz      loc_14073D14A
 * 000000014073D0B8: rdtsc
 * 000000014073D0BA: shl     rdx, 20h
 * 000000014073D0BE: mov     r8d, 4EC4EC4Fh
 * 000000014073D0C4: or      rax, rdx
 * 000000014073D0C7: mov     rcx, rax
 * 000000014073D0CA: mov     rdx, rax
 * 000000014073D0CD: ror     rcx, 3
 * 000000014073D0D1: mov     rax, r13
 * 000000014073D0D4: xor     rdx, rcx
 * 000000014073D0D7: mul     rdx
 * 000000014073D0DA: mov     rdi, rax
 * 000000014073D0DD: mov     [rbp+1910h+var_14A8], rdx
 * 000000014073D0E4: xor     edi, edx
 * 000000014073D0E6: mov     eax, r8d
 * 000000014073D0E9: mul     edi
 * 000000014073D0EB: mov     ebx, edi
 * 000000014073D0ED: mov     eax, r8d
 * 000000014073D0F0: shr     edx, 3
 * 000000014073D0F3: imul    ecx, edx, 1Ah
 * 000000014073D0F6: shr     edi, 5
 * 000000014073D0F9: mul     edi
 * 000000014073D0FB: sub     ebx, ecx
 * 000000014073D0FD: mov     ecx, edi
 * 000000014073D0FF: add     ebx, 61h ; 'a'
 * 000000014073D102: shr     edx, 3
 * 000000014073D105: shl     ebx, 8
 * 000000014073D108: imul    eax, edx, 1Ah
 * 000000014073D10B: shr     edi, 5
 * 000000014073D10E: sub     ecx, eax
 * 000000014073D110: mov     eax, r8d
 * 000000014073D113: mul     edi
 * 000000014073D115: add     ecx, 41h ; 'A'
 * 000000014073D118: or      ecx, ebx
 * 000000014073D11A: shr     edx, 3
 * 000000014073D11D: mov     ebx, edi
 * 000000014073D11F: imul    eax, edx, 1Ah
 * 000000014073D122: shr     edi, 5
 * 000000014073D125: shl     ecx, 8
 * 000000014073D128: sub     ebx, eax
 * 000000014073D12A: mov     eax, r8d
 * 000000014073D12D: mul     edi
 * 000000014073D12F: add     ebx, 61h ; 'a'
 * 000000014073D132: or      ebx, ecx
 * 000000014073D134: shr     edx, 3
 * 000000014073D137: imul    eax, edx, 1Ah
 * 000000014073D13A: shl     ebx, 8
 * 000000014073D13D: sub     edi, eax
 * 000000014073D13F: add     edi, 41h ; 'A'
 * 000000014073D142: or      edi, ebx
 * 000000014073D144: mov     rbx, [rbp+1910h+var_1988]
 * 000000014073D148: jmp     short loc_14073D1A2
 * 000000014073D14A: mov     [rbp+1910h+var_17B8], 0B0869E85h
 * 000000014073D154: mov     edi, [rbp+1910h+var_17B8]
 * 000000014073D15A: xor     edi, 9
 * 000000014073D15D: ror     edi, 21h
 * 000000014073D160: jmp     short loc_14073D1A2
 * 000000014073D162: mov     [rbp+1910h+var_17B0], 64664142h
 * 000000014073D16C: mov     edi, [rbp+1910h+var_17B0]
 * 000000014073D172: ror     edi, 8
 * 000000014073D175: jmp     short loc_14073D1A2
 * 000000014073D177: mov     [rbp+1910h+var_17A8], 82C6A6D8h
 * 000000014073D181: mov     edi, [rbp+1910h+var_17A8]
 * 000000014073D187: rol     edi, 7
 * 000000014073D18A: jmp     short loc_14073D1A2
 * 000000014073D18C: mov     [rbp+1910h+var_17A0], 4E574672h
 * 000000014073D196: mov     edi, [rbp+1910h+var_17A0]
 * 000000014073D19C: xor     edi, 6
 * 000000014073D19F: ror     edi, 18h
 * 000000014073D1A2: mov     rdx, r15
 * 000000014073D1A5: mov     r8d, edi; Tag
 * 000000014073D1A8: shl     rdx, 2; NumberOfBytes
 * 000000014073D1AC: mov     ecx, 200h; PoolType
 * 000000014073D1B1: call    ExAllocatePoolWithTag
 * 000000014073D1B6: xor     r9d, r9d
 * 000000014073D1B9: mov     [rsp+1A10h+var_19B0], rax
 * 000000014073D1BE: mov     r13, rax
 * 000000014073D1C1: test    rax, rax
 * 000000014073D1C4: jnz     short loc_14073D1CE
 * 000000014073D1C6: mov     rcx, rbx
 * 000000014073D1C9: jmp     loc_14073C12B
 * 000000014073D1CE: lea     rax, SeCiCallbacks
 * 000000014073D1D5: mov     r12d, 4
 * 000000014073D1DB: mov     [rbx], rax
 * 000000014073D1DE: mov     eax, cs:dword_1407174B0
 * 000000014073D1E4: mov     [r13+0], eax
 * 000000014073D1E8: lea     rax, SeMsMinTCBList
 * 000000014073D1EF: mov     [rbx+8], rax
 * 000000014073D1F3: mov     eax, cs:dword_1407174E0
 * 000000014073D1F9: mov     [r13+4], eax
 * 000000014073D1FD: lea     rax, RtlProtectedAccess
 * 000000014073D204: mov     [rbx+10h], rax
 * 000000014073D208: mov     eax, cs:dword_1407174E8
 * 000000014073D20E: mov     [r13+8], eax
 * 000000014073D212: lea     rax, SeProtectedMapping
 * 000000014073D219: mov     [rbx+18h], rax
 * 000000014073D21D: mov     eax, cs:dword_1407174F0
 * 000000014073D223: mov     [r13+0Ch], eax
 * 000000014073D227: mov     dword ptr [rsp+1A10h+var_19B8], r12d
 * 000000014073D22C: cmp     [rbp+1910h+var_18DC], r9d
 * 000000014073D230: jnz     loc_14073D2C1
 * 000000014073D236: mov     rax, cs:SeSecureBootPolicyBlobHeader
 * 000000014073D23D: lea     r10d, [r12-3]
 * 000000014073D242: mov     [rbx+20h], rax
 * 000000014073D246: mov     edi, r9d
 * 000000014073D249: mov     eax, cs:SeSecureBootPolicyBlobHeaderSize
 * 000000014073D24F: mov     [r13+10h], eax
 * 000000014073D253: lea     rax, SeILSigningPolicy
 * 000000014073D25A: mov     [rbx+28h], rax
 * 000000014073D25E: lea     rax, SeCiDebugOptions
 * 000000014073D265: mov     [r13+14h], r10d
 * 000000014073D269: mov     [rbx+30h], rax
 * 000000014073D26D: mov     [r13+18h], r12d
 * 000000014073D271: lea     r12d, [r10+6]
 * 000000014073D275: cmp     cs:SeCiStateElementCount, r9d
 * 000000014073D27C: mov     dword ptr [rsp+1A10h+var_19B8], r12d
 * 000000014073D281: jbe     short loc_14073D2C1
 * 000000014073D283: mov     r8, [rbp+1910h+var_1988]
 * 000000014073D287: mov     rax, cs:SeCiStateElements
 * 000000014073D28E: mov     edx, r12d
 * 000000014073D291: add     r12d, r10d
 * 000000014073D294: mov     ebx, edi
 * 000000014073D296: add     edi, r10d
 * 000000014073D299: add     rbx, rbx
 * 000000014073D29C: mov     rcx, [rax+rbx*8]
 * 000000014073D2A0: mov     [r8+rdx*8], rcx
 * 000000014073D2A4: mov     rax, cs:SeCiStateElements
 * 000000014073D2AB: mov     ecx, [rax+rbx*8+8]
 * 000000014073D2AF: mov     [r13+rdx*4+0], ecx
 * 000000014073D2B4: cmp     edi, cs:SeCiStateElementCount
 * 000000014073D2BA: jb      short loc_14073D287
 * 000000014073D2BC: mov     dword ptr [rsp+1A10h+var_19B8], r12d
 * 000000014073D2C1: cmp     dword ptr [r14+5A8h], 7
 * 000000014073D2C9: mov     eax, r9d
 * 000000014073D2CC: mov     r15d, [r14+554h]
 * 000000014073D2D3: mov     ecx, 20h ; ' '
 * 000000014073D2D8: mov     r8d, [r14+634h]
 * 000000014073D2DF: cmovz   eax, ecx
 * 000000014073D2E2: mov     dword ptr [rsp+1A10h+var_19A8], eax
 * 000000014073D2E6: lea     eax, [r12+r12*2]
 * 000000014073D2EA: shl     eax, 4
 * 000000014073D2ED: add     eax, r15d
 * 000000014073D2F0: cmp     eax, [r14+714h]
 * 000000014073D2F7: jbe     loc_14073D3D7
 * 000000014073D2FD: mov     edx, eax
 * 000000014073D2FF: mov     rcx, r14
 * 000000014073D302: call    sub_140236718
 * 000000014073D307: xor     r9d, r9d
 * 000000014073D30A: mov     rbx, rax
 * 000000014073D30D: test    rax, rax
 * 000000014073D310: jz      loc_14073D3CF
 * 000000014073D316: mov     edx, [r14+690h]
 * 000000014073D31D: test    dl, 4
 * 000000014073D320: jnz     loc_14073D3C6
 * 000000014073D326: mov     eax, [r14+554h]
 * 000000014073D32D: lea     r8d, [r9+1]
 * 000000014073D331: mov     rdi, [r14+538h]
 * 000000014073D338: and     edx, 20000000h
 * 000000014073D33E: neg     edx
 * 000000014073D340: sbb     edx, edx
 * 000000014073D342: and     edx, [r14+634h]
 * 000000014073D349: cmp     eax, 8
 * 000000014073D34C: jb      short loc_14073D363
 * 000000014073D34E: mov     ecx, eax
 * 000000014073D350: shr     rcx, 3
 * 000000014073D354: mov     [r14], r9
 * 000000014073D357: add     eax, 0FFFFFFF8h
 * 000000014073D35A: add     r14, 8
 * 000000014073D35E: sub     rcx, r8
 * 000000014073D361: jnz     short loc_14073D354
 * 000000014073D363: test    eax, eax
 * 000000014073D365: jz      short loc_14073D372
 * 000000014073D367: mov     [r14], r9b
 * 000000014073D36A: add     r14, r8
 * 000000014073D36D: add     eax, 0FFFFFFFFh
 * 000000014073D370: jnz     short loc_14073D367
 * 000000014073D372: mov     r14d, [rbx+634h]
 * 000000014073D379: mov     [rbx+634h], edx
 * 000000014073D37F: cmp     edx, 3
 * 000000014073D382: jz      short loc_14073D3B3
 * 000000014073D384: mov     eax, [rbx+690h]
 * 000000014073D38A: mov     ecx, r9d
 * 000000014073D38D: and     eax, 10000000h
 * 000000014073D392: cmovz   ecx, edx
 * 000000014073D395: test    ecx, ecx
 * 000000014073D397: jz      short loc_14073D3A8
 * 000000014073D399: lea     rcx, [rdi-8]
 * 000000014073D39D: mov     rdx, [rcx]
 * 000000014073D3A0: call    qword ptr [rbx+1F8h]
 * 000000014073D3A6: jmp     short loc_14073D3BC
 * 000000014073D3A8: mov     rcx, rdi
 * 000000014073D3AB: call    qword ptr [rbx+0F8h]
 * 000000014073D3B1: jmp     short loc_14073D3BC
 * 000000014073D3B3: mov     rcx, rdi
 * 000000014073D3B6: call    qword ptr [rbx+320h]
 * 000000014073D3BC: mov     [rbx+634h], r14d
 * 000000014073D3C3: xor     r9d, r9d
 * 000000014073D3C6: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 000000014073D3CD: jmp     short loc_14073D3E1
 * 000000014073D3CF: mov     r14, r9
 * 000000014073D3D2: jmp     loc_14073D589
 * 000000014073D3D7: mov     rbx, r14
 * 000000014073D3DA: mov     [r14+554h], eax
 * 000000014073D3E1: add     [rbx+57Ch], r12d
 * 000000014073D3E8: lea     rdi, [rbx+r15]
 * 000000014073D3EC: mov     [rbp+1910h+var_1498], rdi
 * 000000014073D3F3: mov     [rbp+1910h+var_1488], rdi
 * 000000014073D3FA: test    r12d, r12d
 * 000000014073D3FD: jz      loc_14073D561
 * 000000014073D403: mov     r10, [rbp+1910h+var_1988]
 * 000000014073D407: mov     r11, r13
 * 000000014073D40A: mov     esi, dword ptr [rsp+1A10h+var_19A8]
 * 000000014073D40E: mov     eax, r12d
 * 000000014073D411: mov     r12d, 1
 * 000000014073D417: mov     [rsp+1A10h+var_19A0], r13
 * 000000014073D41C: mov     r13d, 0FFFFFFF8h
 * 000000014073D422: mov     [rsp+1A10h+var_19C0], r10
 * 000000014073D427: mov     [rsp+1A10h+var_19D0], rax
 * 000000014073D42C: mov     r15d, [r11]
 * 000000014073D42F: mov     ecx, 30h ; '0'
 * 000000014073D434: mov     r14, [r10]
 * 000000014073D437: mov     rax, rdi
 * 000000014073D43A: lea     edx, [rcx-2Ah]
 * 000000014073D43D: mov     [rax], r9
 * 000000014073D440: add     ecx, r13d
 * 000000014073D443: add     rax, 8
 * 000000014073D447: sub     rdx, r12
 * 000000014073D44A: jnz     short loc_14073D43D
 * 000000014073D44C: test    ecx, ecx
 * 000000014073D44E: jz      short loc_14073D45B
 * 000000014073D450: mov     [rax], r9b
 * 000000014073D453: add     rax, r12
 * 000000014073D456: add     ecx, 0FFFFFFFFh
 * 000000014073D459: jnz     short loc_14073D450
 * 000000014073D45B: mov     eax, 20h ; ' '
 * 000000014073D460: mov     [rdi], esi
 * 000000014073D462: mov     [rdi+8], r14
 * 000000014073D466: cmp     esi, eax
 * 000000014073D468: jnz     short loc_14073D48B
 * 000000014073D46A: test    r15d, r15d
 * 000000014073D46D: jz      short loc_14073D48B
 * 000000014073D46F: lea     r9, [rdi+18h]
 * 000000014073D473: mov     r8d, r15d
 * 000000014073D476: mov     rdx, r14
 * 000000014073D479: mov     rcx, rbx
 * 000000014073D47C: call    sub_14014F138
 * 000000014073D481: mov     r10, [rsp+1A10h+var_19C0]
 * 000000014073D486: mov     r11, [rsp+1A10h+var_19A0]
 * 000000014073D48B: mov     [rdi+10h], r15d
 * 000000014073D48F: lea     rcx, [r14+r15]
 * 000000014073D493: add     [rbx+598h], r15d
 * 000000014073D49A: mov     rax, r14
 * 000000014073D49D: mov     r9d, [rbx+584h]
 * 000000014073D4A4: mov     rdx, [rbx+588h]
 * 000000014073D4AB: cmp     r14, rcx
 * 000000014073D4AE: jnb     short loc_14073D4BC
 * 000000014073D4B0: prefetchnta byte ptr [rax]
 * 000000014073D4B3: add     rax, 40h ; '@'
 * 000000014073D4B7: cmp     rax, rcx
 * 000000014073D4BA: jb      short loc_14073D4B0
 * 000000014073D4BC: mov     r8d, r15d
 * 000000014073D4BF: cmp     r15d, 8
 * 000000014073D4C3: jb      short loc_14073D4E1
 * 000000014073D4C5: mov     rax, r15
 * 000000014073D4C8: shr     rax, 3
 * 000000014073D4CC: xor     rdx, [r14]
 * 000000014073D4CF: mov     ecx, r9d
 * 000000014073D4D2: rol     rdx, cl
 * 000000014073D4D5: add     r14, 8
 * 000000014073D4D9: add     r8d, r13d
 * 000000014073D4DC: sub     rax, r12
 * 000000014073D4DF: jnz     short loc_14073D4CC
 * 000000014073D4E1: test    r8d, r8d
 * 000000014073D4E4: jz      short loc_14073D4FC
 * 000000014073D4E6: movzx   eax, byte ptr [r14]
 * 000000014073D4EA: mov     ecx, r9d
 * 000000014073D4ED: xor     rdx, rax
 * 000000014073D4F0: add     r14, r12
 * 000000014073D4F3: rol     rdx, cl
 * 000000014073D4F6: add     r8d, 0FFFFFFFFh
 * 000000014073D4FA: jnz     short loc_14073D4E6
 * 000000014073D4FC: mov     rax, rdx
 * 000000014073D4FF: shr     rax, 1Fh
 * 000000014073D503: xor     r9d, r9d
 * 000000014073D506: jmp     short loc_14073D50E
 * 000000014073D508: xor     edx, eax
 * 000000014073D50A: shr     rax, 1Fh
 * 000000014073D50E: test    rax, rax
 * 000000014073D511: jnz     short loc_14073D508
 * 000000014073D513: btr     edx, 1Fh
 * 000000014073D517: add     r11, 4
 * 000000014073D51B: mov     [rdi+14h], edx
 * 000000014073D51E: add     r10, 8
 * 000000014073D522: add     [rbx+598h], r15d
 * 000000014073D529: mov     rdi, [rbp+1910h+var_1498]
 * 000000014073D530: add     rdi, 30h ; '0'
 * 000000014073D534: mov     [rsp+1A10h+var_19A0], r11
 * 000000014073D539: sub     [rsp+1A10h+var_19D0], r12
 * 000000014073D53E: mov     [rbp+1910h+var_1498], rdi
 * 000000014073D545: mov     [rsp+1A10h+var_19C0], r10
 * 000000014073D54A: jnz     loc_14073D42C
 * 000000014073D550: mov     rdi, [rbp+1910h+var_1488]
 * 000000014073D557: mov     r12d, dword ptr [rsp+1A10h+var_19B8]
 * 000000014073D55C: mov     r13, [rsp+1A10h+var_19B0]
 * 000000014073D561: mov     eax, 20h ; ' '
 * 000000014073D566: cmp     dword ptr [rsp+1A10h+var_19A8], eax
 * 000000014073D56A: jnz     short loc_14073D586
 * 000000014073D56C: test    r12d, r12d
 * 000000014073D56F: jz      short loc_14073D586
 * 000000014073D571: mov     eax, r12d
 * 000000014073D574: lea     rcx, [rax+rax*2]
 * 000000014073D578: shl     rcx, 4
 * 000000014073D57C: add     rdi, rcx
 * 000000014073D57F: mov     [rbp+1910h+var_1488], rdi
 * 000000014073D586: mov     r14, rbx
 * 000000014073D589: mov     rcx, r13; P
 * 000000014073D58C: call    ExFreePool
 * 000000014073D591: mov     rcx, [rbp+1910h+var_1988]; P
 * 000000014073D595: call    ExFreePool
 * 000000014073D59A: xor     r11d, r11d
 * 000000014073D59D: test    r14, r14
 * 000000014073D5A0: jz      loc_140731C01
 * 000000014073D5A6: mov     [rbp+1910h+var_16D8], r14
 * 000000014073D5AD: cli
 * 000000014073D5AE: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 000000014073D5B5: jnz     short loc_14073D5B9
 * 000000014073D5B7: jmp     short loc_14073D5B7
 * 000000014073D5B9: sti
 * 000000014073D5BA: cmp     dword ptr [rsp+1A10h+Src], r11d
 * 000000014073D5BF: jnz     loc_14073D8C7
 * 000000014073D5C5: call    SeMinTcbLowering
 * 000000014073D5CA: xor     r11d, r11d
 * 000000014073D5CD: test    eax, eax
 * 000000014073D5CF: jnz     loc_14073D8C7
 * 000000014073D5D5: cli
 * 000000014073D5D6: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 000000014073D5DD: jnz     short loc_14073D5E1
 * 000000014073D5DF: jmp     short loc_14073D5DF
 * 000000014073D5E1: sti
 * 000000014073D5E2: mov     r15d, [r14+554h]
 * 000000014073D5E9: mov     r8d, [r14+634h]
 * 000000014073D5F0: lea     eax, [r15+30h]
 * 000000014073D5F4: cmp     eax, [r14+714h]
 * 000000014073D5FB: jbe     loc_14073D6D3
 * 000000014073D601: mov     edx, eax
 * 000000014073D603: mov     rcx, r14
 * 000000014073D606: call    sub_140236718
 * 000000014073D60B: xor     r11d, r11d
 * 000000014073D60E: mov     rbx, rax
 * 000000014073D611: test    rax, rax
 * 000000014073D614: jz      loc_140731C01
 * 000000014073D61A: mov     edx, [r14+690h]
 * 000000014073D621: test    dl, 4
 * 000000014073D624: jnz     loc_14073D6CA
 * 000000014073D62A: mov     eax, [r14+554h]
 * 000000014073D631: lea     r8d, [r11+1]
 * 000000014073D635: mov     rdi, [r14+538h]
 * 000000014073D63C: and     edx, 20000000h
 * 000000014073D642: neg     edx
 * 000000014073D644: sbb     edx, edx
 * 000000014073D646: and     edx, [r14+634h]
 * 000000014073D64D: cmp     eax, 8
 * 000000014073D650: jb      short loc_14073D667
 * 000000014073D652: mov     ecx, eax
 * 000000014073D654: shr     rcx, 3
 * 000000014073D658: mov     [r14], r11
 * 000000014073D65B: add     eax, 0FFFFFFF8h
 * 000000014073D65E: add     r14, 8
 * 000000014073D662: sub     rcx, r8
 * 000000014073D665: jnz     short loc_14073D658
 * 000000014073D667: test    eax, eax
 * 000000014073D669: jz      short loc_14073D676
 * 000000014073D66B: mov     [r14], r11b
 * 000000014073D66E: add     r14, r8
 * 000000014073D671: add     eax, 0FFFFFFFFh
 * 000000014073D674: jnz     short loc_14073D66B
 * 000000014073D676: mov     r14d, [rbx+634h]
 * 000000014073D67D: mov     [rbx+634h], edx
 * 000000014073D683: cmp     edx, 3
 * 000000014073D686: jz      short loc_14073D6B7
 * 000000014073D688: mov     eax, [rbx+690h]
 * 000000014073D68E: mov     ecx, r11d
 * 000000014073D691: and     eax, 10000000h
 * 000000014073D696: cmovz   ecx, edx
 * 000000014073D699: test    ecx, ecx
 * 000000014073D69B: jz      short loc_14073D6AC
 * 000000014073D69D: lea     rcx, [rdi-8]
 * 000000014073D6A1: mov     rdx, [rcx]
 * 000000014073D6A4: call    qword ptr [rbx+1F8h]
 * 000000014073D6AA: jmp     short loc_14073D6C0
 * 000000014073D6AC: mov     rcx, rdi
 * 000000014073D6AF: call    qword ptr [rbx+0F8h]
 * 000000014073D6B5: jmp     short loc_14073D6C0
 * 000000014073D6B7: mov     rcx, rdi
 * 000000014073D6BA: call    qword ptr [rbx+320h]
 * 000000014073D6C0: mov     [rbx+634h], r14d
 * 000000014073D6C7: xor     r11d, r11d
 * 000000014073D6CA: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 000000014073D6D1: jmp     short loc_14073D6DD
 * 000000014073D6D3: mov     rbx, r14
 * 000000014073D6D6: mov     [r14+554h], eax
 * 000000014073D6DD: mov     r13d, 1
 * 000000014073D6E3: lea     rcx, [rbx+r15]
 * 000000014073D6E7: add     [rbx+57Ch], r13d
 * 000000014073D6EE: mov     rax, rcx
 * 000000014073D6F1: mov     [rbp+1910h+var_1478], rcx
 * 000000014073D6F8: lea     r12d, [r13+5]
 * 000000014073D6FC: mov     edi, r12d
 * 000000014073D6FF: lea     edx, [r13+2Fh]
 * 000000014073D703: mov     [rax], r11
 * 000000014073D706: add     edx, 0FFFFFFF8h
 * 000000014073D709: add     rax, 8
 * 000000014073D70D: sub     rdi, r13
 * 000000014073D710: jnz     short loc_14073D703
 * 000000014073D712: test    edx, edx
 * 000000014073D714: jz      short loc_14073D721
 * 000000014073D716: mov     [rax], r11b
 * 000000014073D719: add     rax, r13
 * 000000014073D71C: add     edx, 0FFFFFFFFh
 * 000000014073D71F: jnz     short loc_14073D716
 * 000000014073D721: mov     dword ptr [rcx], 1Fh
 * 000000014073D727: mov     [rcx+8], r11
 * 000000014073D72B: mov     [rcx+10h], r11d
 * 000000014073D72F: mov     rdx, [rbx+588h]
 * 000000014073D736: mov     rax, rdx
 * 000000014073D739: jmp     short loc_14073D73D
 * 000000014073D73B: xor     edx, eax
 * 000000014073D73D: shr     rax, 1Fh
 * 000000014073D741: test    rax, rax
 * 000000014073D744: jnz     short loc_14073D73B
 * 000000014073D746: btr     edx, 1Fh
 * 000000014073D74A: mov     [rbp+1910h+var_16D8], rbx
 * 000000014073D751: mov     [rcx+14h], edx
 * 000000014073D754: cli
 * 000000014073D755: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 000000014073D75C: jnz     short loc_14073D760
 * 000000014073D75E: jmp     short loc_14073D75E
 * 000000014073D760: sti
 * 000000014073D761: mov     r15d, [rbx+554h]
 * 000000014073D768: mov     r8d, [rbx+634h]
 * 000000014073D76F: lea     eax, [r15+30h]
 * 000000014073D773: cmp     eax, [rbx+714h]
 * 000000014073D779: jbe     loc_14073D850
 * 000000014073D77F: mov     edx, eax
 * 000000014073D781: mov     rcx, rbx
 * 000000014073D784: call    sub_140236718
 * 000000014073D789: xor     r11d, r11d
 * 000000014073D78C: mov     r14, rax
 * 000000014073D78F: test    rax, rax
 * 000000014073D792: jz      loc_140731C01
 * 000000014073D798: mov     edx, [rbx+690h]
 * 000000014073D79E: test    dl, 4
 * 000000014073D7A1: jnz     loc_14073D846
 * 000000014073D7A7: mov     ecx, [rbx+554h]
 * 000000014073D7AD: and     edx, 20000000h
 * 000000014073D7B3: mov     rdi, [rbx+538h]
 * 000000014073D7BA: neg     edx
 * 000000014073D7BC: sbb     edx, edx
 * 000000014073D7BE: and     edx, [rbx+634h]
 * 000000014073D7C4: cmp     ecx, 8
 * 000000014073D7C7: jb      short loc_14073D7DE
 * 000000014073D7C9: mov     eax, ecx
 * 000000014073D7CB: shr     rax, 3
 * 000000014073D7CF: mov     [rbx], r11
 * 000000014073D7D2: add     ecx, 0FFFFFFF8h
 * 000000014073D7D5: add     rbx, 8
 * 000000014073D7D9: sub     rax, r13
 * 000000014073D7DC: jnz     short loc_14073D7CF
 * 000000014073D7DE: test    ecx, ecx
 * 000000014073D7E0: jz      short loc_14073D7ED
 * 000000014073D7E2: mov     [rbx], r11b
 * 000000014073D7E5: add     rbx, r13
 * 000000014073D7E8: add     ecx, 0FFFFFFFFh
 * 000000014073D7EB: jnz     short loc_14073D7E2
 * 000000014073D7ED: mov     ebx, [r14+634h]
 * 000000014073D7F4: mov     [r14+634h], edx
 * 000000014073D7FB: cmp     edx, 3
 * 000000014073D7FE: jz      short loc_14073D832
 * 000000014073D800: mov     eax, [r14+690h]
 * 000000014073D807: mov     ecx, r11d
 * 000000014073D80A: and     eax, 10000000h
 * 000000014073D80F: cmovz   ecx, edx
 * 000000014073D812: test    ecx, ecx
 * 000000014073D814: jz      short loc_14073D826
 * 000000014073D816: lea     rcx, [rdi-8]
 * 000000014073D81A: mov     rdx, [rcx]
 * 000000014073D81D: call    qword ptr [r14+1F8h]
 * 000000014073D824: jmp     short loc_14073D83C
 * 000000014073D826: mov     rcx, rdi
 * 000000014073D829: call    qword ptr [r14+0F8h]
 * 000000014073D830: jmp     short loc_14073D83C
 * 000000014073D832: mov     rcx, rdi
 * 000000014073D835: call    qword ptr [r14+320h]
 * 000000014073D83C: mov     [r14+634h], ebx
 * 000000014073D843: xor     r11d, r11d
 * 000000014073D846: and     dword ptr [r14+690h], 0FFFFFFFBh
 * 000000014073D84E: jmp     short loc_14073D859
 * 000000014073D850: mov     r14, rbx
 * 000000014073D853: mov     [rbx+554h], eax
 * 000000014073D859: add     [r14+57Ch], r13d
 * 000000014073D860: lea     rcx, [r14+r15]
 * 000000014073D864: mov     [rbp+1910h+var_1468], rcx
 * 000000014073D86B: mov     rax, rcx
 * 000000014073D86E: mov     edx, 30h ; '0'
 * 000000014073D873: mov     rbx, r12
 * 000000014073D876: mov     [rax], r11
 * 000000014073D879: add     edx, 0FFFFFFF8h
 * 000000014073D87C: add     rax, 8
 * 000000014073D880: sub     rbx, r13
 * 000000014073D883: jnz     short loc_14073D876
 * 000000014073D885: test    edx, edx
 * 000000014073D887: jz      short loc_14073D894
 * 000000014073D889: mov     [rax], r11b
 * 000000014073D88C: add     rax, r13
 * 000000014073D88F: add     edx, 0FFFFFFFFh
 * 000000014073D892: jnz     short loc_14073D889
 * 000000014073D894: mov     dword ptr [rcx], 25h ; '%'
 * 000000014073D89A: mov     [rcx+8], r11
 * 000000014073D89E: mov     [rcx+10h], r11d
 * 000000014073D8A2: mov     rdx, [r14+588h]
 * 000000014073D8A9: mov     rax, rdx
 * 000000014073D8AC: jmp     short loc_14073D8B0
 * 000000014073D8AE: xor     edx, eax
 * 000000014073D8B0: shr     rax, 1Fh
 * 000000014073D8B4: test    rax, rax
 * 000000014073D8B7: jnz     short loc_14073D8AE
 * 000000014073D8B9: btr     edx, 1Fh
 * 000000014073D8BD: mov     [rbp+1910h+var_16D8], r14
 * 000000014073D8C4: mov     [rcx+14h], edx
 * 000000014073D8C7: mov     al, cs:KiKvaShadow
 * 000000014073D8CD: lea     r12, KxUnexpectedInterrupt0
 * 000000014073D8D4: mov     r13d, [r14+554h]
 * 000000014073D8DB: test    al, al
 * 000000014073D8DD: mov     r8d, [r14+634h]
 * 000000014073D8E4: lea     rax, KiIsrThunkShadow
 * 000000014073D8EB: cmovnz  r12, rax
 * 000000014073D8EF: mov     r15d, r11d
 * 000000014073D8F2: cmp     dword ptr [r14+5A8h], 7
 * 000000014073D8FA: mov     r9d, 20h ; ' '
 * 000000014073D900: lea     eax, [r13+30h]
 * 000000014073D904: cmovz   r15d, r9d
 * 000000014073D908: cmp     eax, [r14+714h]
 * 000000014073D90F: jbe     loc_14073D9ED
 * 000000014073D915: mov     edx, eax
 * 000000014073D917: mov     rcx, r14
 * 000000014073D91A: call    sub_140236718
 * 000000014073D91F: xor     r11d, r11d
 * 000000014073D922: mov     rdi, rax
 * 000000014073D925: test    rax, rax
 * 000000014073D928: jz      loc_14073EB89
 * 000000014073D92E: mov     edx, [r14+690h]
 * 000000014073D935: test    dl, 4
 * 000000014073D938: jnz     loc_14073D9DE
 * 000000014073D93E: mov     eax, [r14+554h]
 * 000000014073D945: lea     r8d, [r11+1]
 * 000000014073D949: mov     rbx, [r14+538h]
 * 000000014073D950: and     edx, 20000000h
 * 000000014073D956: neg     edx
 * 000000014073D958: sbb     edx, edx
 * 000000014073D95A: and     edx, [r14+634h]
 * 000000014073D961: cmp     eax, 8
 * 000000014073D964: jb      short loc_14073D97B
 * 000000014073D966: mov     ecx, eax
 * 000000014073D968: shr     rcx, 3
 * 000000014073D96C: mov     [r14], r11
 * 000000014073D96F: add     eax, 0FFFFFFF8h
 * 000000014073D972: add     r14, 8
 * 000000014073D976: sub     rcx, r8
 * 000000014073D979: jnz     short loc_14073D96C
 * 000000014073D97B: test    eax, eax
 * 000000014073D97D: jz      short loc_14073D98A
 * 000000014073D97F: mov     [r14], r11b
 * 000000014073D982: add     r14, r8
 * 000000014073D985: add     eax, 0FFFFFFFFh
 * 000000014073D988: jnz     short loc_14073D97F
 * 000000014073D98A: mov     r14d, [rdi+634h]
 * 000000014073D991: mov     [rdi+634h], edx
 * 000000014073D997: cmp     edx, 3
 * 000000014073D99A: jz      short loc_14073D9CB
 * 000000014073D99C: mov     eax, [rdi+690h]
 * 000000014073D9A2: mov     ecx, r11d
 * 000000014073D9A5: and     eax, 10000000h
 * 000000014073D9AA: cmovz   ecx, edx
 * 000000014073D9AD: test    ecx, ecx
 * 000000014073D9AF: jz      short loc_14073D9C0
 * 000000014073D9B1: lea     rcx, [rbx-8]
 * 000000014073D9B5: mov     rdx, [rcx]
 * 000000014073D9B8: call    qword ptr [rdi+1F8h]
 * 000000014073D9BE: jmp     short loc_14073D9D4
 * 000000014073D9C0: mov     rcx, rbx
 * 000000014073D9C3: call    qword ptr [rdi+0F8h]
 * 000000014073D9C9: jmp     short loc_14073D9D4
 * 000000014073D9CB: mov     rcx, rbx
 * 000000014073D9CE: call    qword ptr [rdi+320h]
 * 000000014073D9D4: mov     [rdi+634h], r14d
 * 000000014073D9DB: xor     r11d, r11d
 * 000000014073D9DE: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 000000014073D9E5: mov     r9d, 20h ; ' '
 * 000000014073D9EB: jmp     short loc_14073D9F7
 * 000000014073D9ED: mov     rdi, r14
 * 000000014073D9F0: mov     [r14+554h], eax
 * 000000014073D9F7: mov     eax, 1
 * 000000014073D9FC: lea     rbx, [rdi+r13]
 * 000000014073DA00: add     [rdi+57Ch], eax
 * 000000014073DA06: mov     [rbp+1910h+var_1458], rbx
 * 000000014073DA0D: lea     ecx, [rax+2Fh]
 * 000000014073DA10: mov     rax, rbx
 * 000000014073DA13: lea     edx, [rcx-2Ah]
 * 000000014073DA16: lea     r13d, [rcx-2Fh]
 * 000000014073DA1A: mov     [rax], r11
 * 000000014073DA1D: add     ecx, 0FFFFFFF8h
 * 000000014073DA20: add     rax, 8
 * 000000014073DA24: sub     rdx, r13
 * 000000014073DA27: jnz     short loc_14073DA1A
 * 000000014073DA29: test    ecx, ecx
 * 000000014073DA2B: jz      short loc_14073DA38
 * 000000014073DA2D: mov     [rax], r11b
 * 000000014073DA30: add     rax, r13
 * 000000014073DA33: add     ecx, 0FFFFFFFFh
 * 000000014073DA36: jnz     short loc_14073DA2D
 * 000000014073DA38: mov     [rbx], r15d
 * 000000014073DA3B: mov     r14d, 800h
 * 000000014073DA41: mov     [rbx+8], r12
 * 000000014073DA45: cmp     r15d, r9d
 * 000000014073DA48: jnz     short loc_14073DA5F
 * 000000014073DA4A: lea     r9, [rbx+18h]
 * 000000014073DA4E: mov     r8d, r14d
 * 000000014073DA51: mov     rdx, r12
 * 000000014073DA54: mov     rcx, rdi
 * 000000014073DA57: call    sub_14014F138
 * 000000014073DA5C: xor     r11d, r11d
 * 000000014073DA5F: mov     [rbx+10h], r14d
 * 000000014073DA63: lea     rcx, [r12+800h]
 * 000000014073DA6B: add     [rdi+598h], r14d
 * 000000014073DA72: mov     rax, r12
 * 000000014073DA75: mov     r9d, [rdi+584h]
 * 000000014073DA7C: mov     rdx, [rdi+588h]
 * 000000014073DA83: cmp     r12, rcx
 * 000000014073DA86: jnb     short loc_14073DA94
 * 000000014073DA88: prefetchnta byte ptr [rax]
 * 000000014073DA8B: add     rax, 40h ; '@'
 * 000000014073DA8F: cmp     rax, rcx
 * 000000014073DA92: jb      short loc_14073DA88
 * 000000014073DA94: mov     r8d, r14d
 * 000000014073DA97: mov     eax, 100h
 * 000000014073DA9C: xor     rdx, [r12]
 * 000000014073DAA0: mov     ecx, r9d
 * 000000014073DAA3: rol     rdx, cl
 * 000000014073DAA6: add     r12, 8
 * 000000014073DAAA: add     r8d, 0FFFFFFF8h
 * 000000014073DAAE: sub     rax, r13
 * 000000014073DAB1: jnz     short loc_14073DA9C
 * 000000014073DAB3: test    r8d, r8d
 * 000000014073DAB6: jz      short loc_14073DACF
 * 000000014073DAB8: movzx   eax, byte ptr [r12]
 * 000000014073DABD: mov     ecx, r9d
 * 000000014073DAC0: xor     rdx, rax
 * 000000014073DAC3: add     r12, r13
 * 000000014073DAC6: rol     rdx, cl
 * 000000014073DAC9: add     r8d, 0FFFFFFFFh
 * 000000014073DACD: jnz     short loc_14073DAB8
 * 000000014073DACF: mov     rax, rdx
 * 000000014073DAD2: jmp     short loc_14073DAD6
 * 000000014073DAD4: xor     edx, eax
 * 000000014073DAD6: shr     rax, 1Fh
 * 000000014073DADA: test    rax, rax
 * 000000014073DADD: jnz     short loc_14073DAD4
 * 000000014073DADF: btr     edx, 1Fh
 * 000000014073DAE3: mov     [rbx+14h], edx
 * 000000014073DAE6: add     [rdi+598h], r14d
 * 000000014073DAED: mov     rax, cs:qword_140717060
 * 000000014073DAF4: mov     [rdi+708h], rax
 * 000000014073DAFB: mov     al, [rdi+692h]
 * 000000014073DB01: test    r13b, al
 * 000000014073DB04: jnz     loc_14073EB92
 * 000000014073DB0A: xor     ecx, ecx
 * 000000014073DB0C: call    KeGetPrcb
 * 000000014073DB11: mov     r8, rax
 * 000000014073DB14: lea     rcx, [rbp+1910h+var_998]
 * 000000014073DB1B: mov     edx, 7
 * 000000014073DB20: xor     r11d, r11d
 * 000000014073DB23: or      qword ptr [rcx-8], 0FFFFFFFFFFFFFFFFh
 * 000000014073DB28: mov     [rcx], r11
 * 000000014073DB2B: lea     rcx, [rcx+18h]
 * 000000014073DB2F: sub     rdx, r13
 * 000000014073DB32: jnz     short loc_14073DB23
 * 000000014073DB34: xor     ecx, ecx
 * 000000014073DB36: mov     [rbp+1910h+var_990], 0C0000082h
 * 000000014073DB40: lea     r9d, [rdx+5]
 * 000000014073DB44: mov     [rbp+1910h+var_978], 0C0000081h
 * 000000014073DB4E: mov     eax, 80000001h
 * 000000014073DB53: mov     [rbp+1910h+var_960], 0C0000083h
 * 000000014073DB5D: cpuid
 * 000000014073DB5F: mov     [rbp+1910h+var_948], 1Bh
 * 000000014073DB69: mov     [rbp+1910h+var_930], 0C0000080h
 * 000000014073DB73: mov     [rbp+1910h+var_940], 0FFFFFFFFFFFFEFFFh
 * 000000014073DB7E: mov     dword ptr [rsp+1A10h+Src], r9d
 * 000000014073DB83: mov     [rbp+1910h+var_D20], eax
 * 000000014073DB89: mov     [rbp+1910h+var_D1C], ebx
 * 000000014073DB8F: mov     [rbp+1910h+var_D18], ecx
 * 000000014073DB95: mov     [rbp+1910h+var_D14], edx
 * 000000014073DB9B: bt      edx, 1Bh
 * 000000014073DB9F: jnb     short loc_14073DBB6
 * 000000014073DBA1: mov     r9d, 6
 * 000000014073DBA7: mov     [rbp+1910h+var_918], 0C0000103h
 * 000000014073DBB1: mov     dword ptr [rsp+1A10h+Src], r9d
 * 000000014073DBB6: cmp     byte ptr [r8+63Dh], 2
 * 000000014073DBBE: jnz     short loc_14073DBEC
 * 000000014073DBC0: mov     eax, r9d
 * 000000014073DBC3: add     r9d, r13d
 * 000000014073DBC6: mov     dword ptr [rsp+1A10h+Src], r9d
 * 000000014073DBCB: lea     rcx, [rax+rax*2]
 * 000000014073DBCF: mov     rax, 400440000h
 * 000000014073DBD9: mov     [rbp+rcx*8+1910h+var_990], 1A0h
 * 000000014073DBE4: mov     [rbp+rcx*8+1910h+var_9A0], rax
 * 000000014073DBEC: mov     eax, cs:KeNumberProcessors_0
 * 000000014073DBF2: mov     r13d, r11d
 * 000000014073DBF5: mov     dword ptr [rsp+1A10h+var_19B8], r11d
 * 000000014073DBFA: test    eax, eax
 * 000000014073DBFC: jz      loc_14073EB8C
 * 000000014073DC02: mov     r12, [rdi+190h]
 * 000000014073DC09: lea     rcx, [rbp+1910h+var_E00]
 * 000000014073DC10: mov     edx, r13d
 * 000000014073DC13: call    qword ptr [rdi+198h]
 * 000000014073DC19: xor     edx, edx
 * 000000014073DC1B: lea     rcx, [rbp+1910h+var_E00]
 * 000000014073DC22: call    qword ptr [rdi+1A0h]
 * 000000014073DC28: lea     rdx, [rbp+1910h+var_EB0]
 * 000000014073DC2F: lea     rcx, [rbp+1910h+var_E90]
 * 000000014073DC36: call    KiGetGdtIdt
 * 000000014073DC3B: mov     rdx, [rbp+1910h+var_E8E]
 * 000000014073DC42: lea     rcx, unk_14024499C
 * 000000014073DC49: mov     ebx, 7
 * 000000014073DC4E: lea     r9d, [rbx-6]
 * 000000014073DC52: movzx   eax, byte ptr [rcx]
 * 000000014073DC55: add     rcx, r9
 * 000000014073DC58: bts     dword ptr [rax+rdx+4], 8
 * 000000014073DC5E: sub     rbx, r9
 * 000000014073DC61: jnz     short loc_14073DC52
 * 000000014073DC63: bts     dword ptr [rdx+44h], 9
 * 000000014073DC68: mov     r15d, [rdi+554h]
 * 000000014073DC6F: mov     r14, [rbp+1910h+var_E8E]
 * 000000014073DC76: mov     r8d, [rdi+634h]
 * 000000014073DC7D: lea     eax, [r15+30h]
 * 000000014073DC81: cmp     eax, [rdi+714h]
 * 000000014073DC87: jbe     loc_14073DD6A
 * 000000014073DC8D: mov     edx, eax
 * 000000014073DC8F: mov     rcx, rdi
 * 000000014073DC92: call    sub_140236718
 * 000000014073DC97: xor     r10d, r10d
 * 000000014073DC9A: mov     rbx, rax
 * 000000014073DC9D: test    rax, rax
 * 000000014073DCA0: jz      loc_14073DD62
 * 000000014073DCA6: mov     edx, [rdi+690h]
 * 000000014073DCAC: test    dl, 4
 * 000000014073DCAF: jnz     loc_14073DD53
 * 000000014073DCB5: mov     eax, [rdi+554h]
 * 000000014073DCBB: and     edx, 20000000h
 * 000000014073DCC1: mov     r9, [rdi+538h]
 * 000000014073DCC8: neg     edx
 * 000000014073DCCA: lea     edx, [r10+1]
 * 000000014073DCCE: sbb     r8d, r8d
 * 000000014073DCD1: and     r8d, [rdi+634h]
 * 000000014073DCD8: cmp     eax, 8
 * 000000014073DCDB: jb      short loc_14073DCF2
 * 000000014073DCDD: mov     ecx, eax
 * 000000014073DCDF: shr     rcx, 3
 * 000000014073DCE3: mov     [rdi], r10
 * 000000014073DCE6: add     eax, 0FFFFFFF8h
 * 000000014073DCE9: add     rdi, 8
 * 000000014073DCED: sub     rcx, rdx
 * 000000014073DCF0: jnz     short loc_14073DCE3
 * 000000014073DCF2: test    eax, eax
 * 000000014073DCF4: jz      short loc_14073DD01
 * 000000014073DCF6: mov     [rdi], r10b
 * 000000014073DCF9: add     rdi, rdx
 * 000000014073DCFC: add     eax, 0FFFFFFFFh
 * 000000014073DCFF: jnz     short loc_14073DCF6
 * 000000014073DD01: mov     edi, [rbx+634h]
 * 000000014073DD07: mov     [rbx+634h], r8d
 * 000000014073DD0E: cmp     r8d, 3
 * 000000014073DD12: jz      short loc_14073DD44
 * 000000014073DD14: mov     eax, [rbx+690h]
 * 000000014073DD1A: mov     ecx, r10d
 * 000000014073DD1D: and     eax, 10000000h
 * 000000014073DD22: cmovz   ecx, r8d
 * 000000014073DD26: test    ecx, ecx
 * 000000014073DD28: jz      short loc_14073DD39
 * 000000014073DD2A: lea     rcx, [r9-8]
 * 000000014073DD2E: mov     rdx, [rcx]
 * 000000014073DD31: call    qword ptr [rbx+1F8h]
 * 000000014073DD37: jmp     short loc_14073DD4D
 * 000000014073DD39: mov     rcx, r9
 * 000000014073DD3C: call    qword ptr [rbx+0F8h]
 * 000000014073DD42: jmp     short loc_14073DD4D
 * 000000014073DD44: mov     rcx, r9
 * 000000014073DD47: call    qword ptr [rbx+320h]
 * 000000014073DD4D: mov     [rbx+634h], edi
 * 000000014073DD53: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 000000014073DD5A: mov     r9d, 1
 * 000000014073DD60: jmp     short loc_14073DD73
 * 000000014073DD62: mov     rbx, r10
 * 000000014073DD65: jmp     loc_14073DE5A
 * 000000014073DD6A: mov     rbx, rdi
 * 000000014073DD6D: mov     [rdi+554h], eax
 * 000000014073DD73: add     [rbx+57Ch], r9d
 * 000000014073DD7A: lea     r8, [rbx+r15]
 * 000000014073DD7E: mov     ecx, 30h ; '0'
 * 000000014073DD83: mov     [rbp+1910h+var_1448], r8
 * 000000014073DD8A: mov     rax, r8
 * 000000014073DD8D: xor     r10d, r10d
 * 000000014073DD90: lea     edx, [rcx-2Ah]
 * 000000014073DD93: mov     [rax], r10
 * 000000014073DD96: add     ecx, 0FFFFFFF8h
 * 000000014073DD99: add     rax, 8
 * 000000014073DD9D: sub     rdx, r9
 * 000000014073DDA0: jnz     short loc_14073DD93
 * 000000014073DDA2: test    ecx, ecx
 * 000000014073DDA4: jz      short loc_14073DDB1
 * 000000014073DDA6: mov     [rax], r10b
 * 000000014073DDA9: add     rax, r9
 * 000000014073DDAC: add     ecx, 0FFFFFFFFh
 * 000000014073DDAF: jnz     short loc_14073DDA6
 * 000000014073DDB1: mov     dword ptr [r8], 3
 * 000000014073DDB8: lea     rcx, [r14+50h]
 * 000000014073DDBC: mov     [r8+8], r14
 * 000000014073DDC0: mov     r11d, 50h ; 'P'
 * 000000014073DDC6: mov     [r8+10h], r11d
 * 000000014073DDCA: mov     rax, r14
 * 000000014073DDCD: add     [rbx+598h], r11d
 * 000000014073DDD4: mov     r9d, [rbx+584h]
 * 000000014073DDDB: mov     rdx, [rbx+588h]
 * 000000014073DDE2: cmp     r14, rcx
 * 000000014073DDE5: jnb     short loc_14073DDF3
 * 000000014073DDE7: prefetchnta byte ptr [rax]
 * 000000014073DDEA: add     rax, 40h ; '@'
 * 000000014073DDEE: cmp     rax, rcx
 * 000000014073DDF1: jb      short loc_14073DDE7
 * 000000014073DDF3: mov     eax, 0Ah
 * 000000014073DDF8: mov     edi, r11d
 * 000000014073DDFB: lea     r15d, [rax-9]
 * 000000014073DDFF: xor     rdx, [r14]
 * 000000014073DE02: mov     ecx, r9d
 * 000000014073DE05: rol     rdx, cl
 * 000000014073DE08: add     r14, 8
 * 000000014073DE0C: add     edi, 0FFFFFFF8h
 * 000000014073DE0F: sub     rax, r15
 * 000000014073DE12: jnz     short loc_14073DDFF
 * 000000014073DE14: test    edi, edi
 * 000000014073DE16: jz      short loc_14073DE2D
 * 000000014073DE18: movzx   eax, byte ptr [r14]
 * 000000014073DE1C: mov     ecx, r9d
 * 000000014073DE1F: xor     rdx, rax
 * 000000014073DE22: add     r14, r15
 * 000000014073DE25: rol     rdx, cl
 * 000000014073DE28: add     edi, 0FFFFFFFFh
 * 000000014073DE2B: jnz     short loc_14073DE18
 * 000000014073DE2D: mov     rax, rdx
 * 000000014073DE30: jmp     short loc_14073DE34
 * 000000014073DE32: xor     edx, eax
 * 000000014073DE34: shr     rax, 1Fh
 * 000000014073DE38: test    rax, rax
 * 000000014073DE3B: jnz     short loc_14073DE32
 * 000000014073DE3D: btr     edx, 1Fh
 * 000000014073DE41: mov     [r8+14h], edx
 * 000000014073DE45: mov     rax, [rbp+1910h+var_1448]
 * 000000014073DE4C: mov     [rbp+1910h+var_1438], rax
 * 000000014073DE53: add     [rbx+598h], r11d
 * 000000014073DE5A: call    r12
 * 000000014073DE5D: xor     r11d, r11d
 * 000000014073DE60: test    rbx, rbx
 * 000000014073DE63: jz      loc_14073EB89
 * 000000014073DE69: mov     rax, [rbp+1910h+var_1438]
 * 000000014073DE70: mov     edx, r13d
 * 000000014073DE73: mov     r14d, r11d
 * 000000014073DE76: mov     [rax+28h], r13d
 * 000000014073DE7A: mov     rcx, [rbp+1910h+var_1438]
 * 000000014073DE81: movzx   eax, [rbp+1910h+var_E90]
 * 000000014073DE88: mov     [rcx+2Ch], ax
 * 000000014073DE8C: lea     rcx, [rbp+1910h+var_DF0]
 * 000000014073DE93: mov     r12, [rbx+190h]
 * 000000014073DE9A: call    qword ptr [rbx+198h]
 * 000000014073DEA0: xor     edx, edx
 * 000000014073DEA2: lea     rcx, [rbp+1910h+var_DF0]
 * 000000014073DEA9: call    qword ptr [rbx+1A0h]
 * 000000014073DEAF: lea     rdx, [rbp+1910h+var_EA0]
 * 000000014073DEB6: lea     rcx, [rbp+1910h+var_E80]
 * 000000014073DEBD: call    KiGetGdtIdt
 * 000000014073DEC2: mov     r13d, [rbx+554h]
 * 000000014073DEC9: mov     r15, [rbp+1910h+var_E9E]
 * 000000014073DED0: mov     r8d, [rbx+634h]
 * 000000014073DED7: lea     eax, [r13+30h]
 * 000000014073DEDB: cmp     eax, [rbx+714h]
 * 000000014073DEE1: jbe     loc_14073DFBE
 * 000000014073DEE7: mov     edx, eax
 * 000000014073DEE9: mov     rcx, rbx
 * 000000014073DEEC: call    sub_140236718
 * 000000014073DEF1: xor     r10d, r10d
 * 000000014073DEF4: mov     rdi, rax
 * 000000014073DEF7: test    rax, rax
 * 000000014073DEFA: jz      loc_14073DFB6
 * 000000014073DF00: mov     edx, [rbx+690h]
 * 000000014073DF06: test    dl, 4
 * 000000014073DF09: jnz     loc_14073DFAD
 * 000000014073DF0F: mov     eax, [rbx+554h]
 * 000000014073DF15: and     edx, 20000000h
 * 000000014073DF1B: mov     r9, [rbx+538h]
 * 000000014073DF22: neg     edx
 * 000000014073DF24: lea     edx, [r10+1]
 * 000000014073DF28: sbb     r8d, r8d
 * 000000014073DF2B: and     r8d, [rbx+634h]
 * 000000014073DF32: cmp     eax, 8
 * 000000014073DF35: jb      short loc_14073DF4C
 * 000000014073DF37: mov     ecx, eax
 * 000000014073DF39: shr     rcx, 3
 * 000000014073DF3D: mov     [rbx], r10
 * 000000014073DF40: add     eax, 0FFFFFFF8h
 * 000000014073DF43: add     rbx, 8
 * 000000014073DF47: sub     rcx, rdx
 * 000000014073DF4A: jnz     short loc_14073DF3D
 * 000000014073DF4C: test    eax, eax
 * 000000014073DF4E: jz      short loc_14073DF5B
 * 000000014073DF50: mov     [rbx], r10b
 * 000000014073DF53: add     rbx, rdx
 * 000000014073DF56: add     eax, 0FFFFFFFFh
 * 000000014073DF59: jnz     short loc_14073DF50
 * 000000014073DF5B: mov     ebx, [rdi+634h]
 * 000000014073DF61: mov     [rdi+634h], r8d
 * 000000014073DF68: cmp     r8d, 3
 * 000000014073DF6C: jz      short loc_14073DF9E
 * 000000014073DF6E: mov     eax, [rdi+690h]
 * 000000014073DF74: mov     ecx, r10d
 * 000000014073DF77: and     eax, 10000000h
 * 000000014073DF7C: cmovz   ecx, r8d
 * 000000014073DF80: test    ecx, ecx
 * 000000014073DF82: jz      short loc_14073DF93
 * 000000014073DF84: lea     rcx, [r9-8]
 * 000000014073DF88: mov     rdx, [rcx]
 * 000000014073DF8B: call    qword ptr [rdi+1F8h]
 * 000000014073DF91: jmp     short loc_14073DFA7
 * 000000014073DF93: mov     rcx, r9
 * 000000014073DF96: call    qword ptr [rdi+0F8h]
 * 000000014073DF9C: jmp     short loc_14073DFA7
 * 000000014073DF9E: mov     rcx, r9
 * 000000014073DFA1: call    qword ptr [rdi+320h]
 * 000000014073DFA7: mov     [rdi+634h], ebx
 * 000000014073DFAD: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 000000014073DFB4: jmp     short loc_14073DFC7
 * 000000014073DFB6: mov     rdi, r10
 * 000000014073DFB9: jmp     loc_14073E14D
 * 000000014073DFBE: mov     rdi, rbx
 * 000000014073DFC1: mov     [rbx+554h], eax
 * 000000014073DFC7: mov     ebx, 1
 * 000000014073DFCC: lea     r8, [rdi+r13]
 * 000000014073DFD0: add     [rdi+57Ch], ebx
 * 000000014073DFD6: mov     rax, r8
 * 000000014073DFD9: mov     [rbp+1910h+var_1428], r8
 * 000000014073DFE0: xor     r13d, r13d
 * 000000014073DFE3: lea     ecx, [rbx+2Fh]
 * 000000014073DFE6: lea     edx, [rbx+5]
 * 000000014073DFE9: mov     [rax], r13
 * 000000014073DFEC: add     ecx, 0FFFFFFF8h
 * 000000014073DFEF: add     rax, 8
 * 000000014073DFF3: sub     rdx, rbx
 * 000000014073DFF6: jnz     short loc_14073DFE9
 * 000000014073DFF8: test    ecx, ecx
 * 000000014073DFFA: jz      short loc_14073E007
 * 000000014073DFFC: mov     [rax], r13b
 * 000000014073DFFF: add     rax, rbx
 * 000000014073E002: add     ecx, 0FFFFFFFFh
 * 000000014073E005: jnz     short loc_14073DFFC
 * 000000014073E007: mov     r14d, 350h
 * 000000014073E00D: lea     rcx, [r15+350h]
 * 000000014073E014: mov     r11d, 2
 * 000000014073E01A: mov     rax, r15
 * 000000014073E01D: mov     [r8], r11d
 * 000000014073E020: mov     [r8+8], r15
 * 000000014073E024: mov     [r8+10h], r14d
 * 000000014073E028: add     [rdi+598h], r14d
 * 000000014073E02F: mov     r10d, [rdi+584h]
 * 000000014073E036: mov     rdx, [rdi+588h]
 * 000000014073E03D: cmp     r15, rcx
 * 000000014073E040: jnb     short loc_14073E04E
 * 000000014073E042: prefetchnta byte ptr [rax]
 * 000000014073E045: add     rax, 40h ; '@'
 * 000000014073E049: cmp     rax, rcx
 * 000000014073E04C: jb      short loc_14073E042
 * 000000014073E04E: mov     r9d, 6Ah ; 'j'
 * 000000014073E054: mov     ebx, r14d
 * 000000014073E057: lea     r13d, [r9-69h]
 * 000000014073E05B: xor     rdx, [r15]
 * 000000014073E05E: mov     ecx, r10d
 * 000000014073E061: rol     rdx, cl
 * 000000014073E064: add     r15, 8
 * 000000014073E068: add     ebx, 0FFFFFFF8h
 * 000000014073E06B: sub     r9, r13
 * 000000014073E06E: jnz     short loc_14073E05B
 * 000000014073E070: test    ebx, ebx
 * 000000014073E072: jz      short loc_14073E093
 * 000000014073E074: lea     r14d, [r9+1]
 * 000000014073E078: movzx   eax, byte ptr [r15]
 * 000000014073E07C: mov     ecx, r10d
 * 000000014073E07F: xor     rdx, rax
 * 000000014073E082: add     r15, r14
 * 000000014073E085: rol     rdx, cl
 * 000000014073E088: add     ebx, 0FFFFFFFFh
 * 000000014073E08B: jnz     short loc_14073E078
 * 000000014073E08D: mov     r14d, 350h
 * 000000014073E093: mov     rax, rdx
 * 000000014073E096: jmp     short loc_14073E09A
 * 000000014073E098: xor     edx, eax
 * 000000014073E09A: shr     rax, 1Fh
 * 000000014073E09E: test    rax, rax
 * 000000014073E0A1: jnz     short loc_14073E098
 * 000000014073E0A3: mov     r15d, 7FFFFFFFh
 * 000000014073E0A9: and     edx, r15d
 * 000000014073E0AC: mov     [r8+14h], edx
 * 000000014073E0B0: mov     rax, [rbp+1910h+var_1428]
 * 000000014073E0B7: mov     [rbp+1910h+var_1418], rax
 * 000000014073E0BE: add     [rdi+598h], r14d
 * 000000014073E0C5: mov     rdx, [rbp+1910h+var_E9E]
 * 000000014073E0CC: add     dword ptr [rdi+598h], 10h
 * 000000014073E0D3: add     rdx, 0E10h
 * 000000014073E0DA: mov     r9d, [rdi+584h]
 * 000000014073E0E1: mov     rax, rdx
 * 000000014073E0E4: mov     r14, [rdi+588h]
 * 000000014073E0EB: lea     rcx, [rdx+10h]
 * 000000014073E0EF: cmp     rdx, rcx
 * 000000014073E0F2: jnb     short loc_14073E100
 * 000000014073E0F4: prefetchnta byte ptr [rax]
 * 000000014073E0F7: add     rax, 40h ; '@'
 * 000000014073E0FB: cmp     rax, rcx
 * 000000014073E0FE: jb      short loc_14073E0F4
 * 000000014073E100: mov     ebx, 10h
 * 000000014073E105: mov     r8, r11
 * 000000014073E108: lea     r10d, [rbx-0Fh]
 * 000000014073E10C: xor     r14, [rdx]
 * 000000014073E10F: mov     ecx, r9d
 * 000000014073E112: rol     r14, cl
 * 000000014073E115: add     rdx, 8
 * 000000014073E119: add     ebx, 0FFFFFFF8h
 * 000000014073E11C: sub     r8, r10
 * 000000014073E11F: jnz     short loc_14073E10C
 * 000000014073E121: test    ebx, ebx
 * 000000014073E123: jz      short loc_14073E139
 * 000000014073E125: movzx   eax, byte ptr [rdx]
 * 000000014073E128: mov     ecx, r9d
 * 000000014073E12B: xor     r14, rax
 * 000000014073E12E: add     rdx, r10
 * 000000014073E131: rol     r14, cl
 * 000000014073E134: add     ebx, 0FFFFFFFFh
 * 000000014073E137: jnz     short loc_14073E125
 * 000000014073E139: mov     rax, r14
 * 000000014073E13C: jmp     short loc_14073E141
 * 000000014073E13E: xor     r14d, eax
 * 000000014073E141: shr     rax, 1Fh
 * 000000014073E145: test    rax, rax
 * 000000014073E148: jnz     short loc_14073E13E
 * 000000014073E14A: and     r14d, r15d
 * 000000014073E14D: call    r12
 * 000000014073E150: xor     r11d, r11d
 * 000000014073E153: test    rdi, rdi
 * 000000014073E156: jz      loc_14073EB89
 * 000000014073E15C: mov     rax, [rbp+1910h+var_1418]
 * 000000014073E163: mov     r12d, dword ptr [rsp+1A10h+var_19B8]
 * 000000014073E168: mov     r13d, dword ptr [rsp+1A10h+Src]
 * 000000014073E16D: mov     ecx, r14d
 * 000000014073E170: mov     [rax+18h], rcx
 * 000000014073E174: mov     rax, [rbp+1910h+var_1418]
 * 000000014073E17B: mov     [rax+28h], r12d
 * 000000014073E17F: mov     rcx, [rbp+1910h+var_1418]
 * 000000014073E186: movzx   eax, [rbp+1910h+var_EA0]
 * 000000014073E18D: mov     [rcx+2Ch], ax
 * 000000014073E191: lea     eax, [r13+2]
 * 000000014073E195: mov     r15d, [rdi+554h]
 * 000000014073E19C: lea     ecx, [rax+rax*2]
 * 000000014073E19F: mov     r8d, [rdi+634h]
 * 000000014073E1A6: lea     eax, [r15+rcx*8]
 * 000000014073E1AA: cmp     eax, [rdi+714h]
 * 000000014073E1B0: jbe     loc_14073E28B
 * 000000014073E1B6: mov     edx, eax
 * 000000014073E1B8: mov     rcx, rdi
 * 000000014073E1BB: call    sub_140236718
 * 000000014073E1C0: xor     r11d, r11d
 * 000000014073E1C3: mov     r14, rax
 * 000000014073E1C6: test    rax, rax
 * 000000014073E1C9: jz      loc_14073EB89
 * 000000014073E1CF: mov     edx, [rdi+690h]
 * 000000014073E1D5: test    dl, 4
 * 000000014073E1D8: jnz     loc_14073E281
 * 000000014073E1DE: mov     eax, [rdi+554h]
 * 000000014073E1E4: lea     r8d, [r11+1]
 * 000000014073E1E8: mov     rbx, [rdi+538h]
 * 000000014073E1EF: and     edx, 20000000h
 * 000000014073E1F5: neg     edx
 * 000000014073E1F7: sbb     edx, edx
 * 000000014073E1F9: and     edx, [rdi+634h]
 * 000000014073E1FF: cmp     eax, 8
 * 000000014073E202: jb      short loc_14073E219
 * 000000014073E204: mov     ecx, eax
 * 000000014073E206: shr     rcx, 3
 * 000000014073E20A: mov     [rdi], r11
 * 000000014073E20D: add     eax, 0FFFFFFF8h
 * 000000014073E210: add     rdi, 8
 * 000000014073E214: sub     rcx, r8
 * 000000014073E217: jnz     short loc_14073E20A
 * 000000014073E219: test    eax, eax
 * 000000014073E21B: jz      short loc_14073E228
 * 000000014073E21D: mov     [rdi], r11b
 * 000000014073E220: add     rdi, r8
 * 000000014073E223: add     eax, 0FFFFFFFFh
 * 000000014073E226: jnz     short loc_14073E21D
 * 000000014073E228: mov     edi, [r14+634h]
 * 000000014073E22F: mov     [r14+634h], edx
 * 000000014073E236: cmp     edx, 3
 * 000000014073E239: jz      short loc_14073E26D
 * 000000014073E23B: mov     eax, [r14+690h]
 * 000000014073E242: mov     ecx, r11d
 * 000000014073E245: and     eax, 10000000h
 * 000000014073E24A: cmovz   ecx, edx
 * 000000014073E24D: test    ecx, ecx
 * 000000014073E24F: jz      short loc_14073E261
 * 000000014073E251: lea     rcx, [rbx-8]
 * 000000014073E255: mov     rdx, [rcx]
 * 000000014073E258: call    qword ptr [r14+1F8h]
 * 000000014073E25F: jmp     short loc_14073E277
 * 000000014073E261: mov     rcx, rbx
 * 000000014073E264: call    qword ptr [r14+0F8h]
 * 000000014073E26B: jmp     short loc_14073E277
 * 000000014073E26D: mov     rcx, rbx
 * 000000014073E270: call    qword ptr [r14+320h]
 * 000000014073E277: mov     [r14+634h], edi
 * 000000014073E27E: xor     r11d, r11d
 * 000000014073E281: and     dword ptr [r14+690h], 0FFFFFFFBh
 * 000000014073E289: jmp     short loc_14073E294
 * 000000014073E28B: mov     r14, rdi
 * 000000014073E28E: mov     [rdi+554h], eax
 * 000000014073E294: mov     edi, 1
 * 000000014073E299: lea     rcx, [r14+r15]
 * 000000014073E29D: add     [r14+57Ch], edi
 * 000000014073E2A4: mov     rax, rcx
 * 000000014073E2A7: mov     [rbp+1910h+var_1408], rcx
 * 000000014073E2AE: lea     edx, [rdi+2Fh]
 * 000000014073E2B1: lea     ebx, [rdi+5]
 * 000000014073E2B4: mov     [rax], r11
 * 000000014073E2B7: add     edx, 0FFFFFFF8h
 * 000000014073E2BA: add     rax, 8
 * 000000014073E2BE: sub     rbx, rdi
 * 000000014073E2C1: jnz     short loc_14073E2B4
 * 000000014073E2C3: test    edx, edx
 * 000000014073E2C5: jz      short loc_14073E2D2
 * 000000014073E2C7: mov     [rax], r11b
 * 000000014073E2CA: add     rax, rdi
 * 000000014073E2CD: add     edx, 0FFFFFFFFh
 * 000000014073E2D0: jnz     short loc_14073E2C7
 * 000000014073E2D2: mov     dword ptr [rcx], 7
 * 000000014073E2D8: mov     [rcx+8], r11
 * 000000014073E2DC: mov     [rcx+10h], r11d
 * 000000014073E2E0: mov     rdx, [r14+588h]
 * 000000014073E2E7: mov     rax, rdx
 * 000000014073E2EA: jmp     short loc_14073E2EE
 * 000000014073E2EC: xor     edx, eax
 * 000000014073E2EE: shr     rax, 1Fh
 * 000000014073E2F2: test    rax, rax
 * 000000014073E2F5: jnz     short loc_14073E2EC
 * 000000014073E2F7: btr     edx, 1Fh
 * 000000014073E2FB: mov     [rcx+14h], edx
 * 000000014073E2FE: mov     edx, r12d
 * 000000014073E301: mov     rax, [rbp+1910h+var_1408]
 * 000000014073E308: lea     rcx, [rbp+1910h+var_DD0]
 * 000000014073E30F: mov     [rbp+1910h+var_13F8], rax
 * 000000014073E316: mov     [rax+18h], r13d
 * 000000014073E31A: mov     rax, [rbp+1910h+var_13F8]
 * 000000014073E321: mov     [rax+1Ch], r12d
 * 000000014073E325: mov     rbx, [rbp+1910h+var_13F8]
 * 000000014073E32C: add     rbx, 30h ; '0'
 * 000000014073E330: call    qword ptr [r14+198h]
 * 000000014073E337: xor     edx, edx
 * 000000014073E339: lea     rcx, [rbp+1910h+var_DD0]
 * 000000014073E340: call    qword ptr [r14+1A0h]
 * 000000014073E347: test    r13d, r13d
 * 000000014073E34A: jz      short loc_14073E39E
 * 000000014073E34C: lea     r8, [rbp+1910h+var_9A0]
 * 000000014073E353: mov     r10, r13
 * 000000014073E356: sub     r8, rbx
 * 000000014073E359: lea     r9, [rbp+1910h+var_998]
 * 000000014073E360: sub     r9, rbx
 * 000000014073E363: lea     rdi, [rbx+8]
 * 000000014073E367: mov     r12d, 1
 * 000000014073E36D: mov     rbx, [r8+rdi-8]
 * 000000014073E372: mov     ecx, [r9+rdi]
 * 000000014073E376: mov     [rdi-8], rbx
 * 000000014073E37A: mov     [rdi+8], ecx
 * 000000014073E37D: rdmsr
 * 000000014073E37F: shl     rdx, 20h
 * 000000014073E383: or      rax, rdx
 * 000000014073E386: and     rax, rbx
 * 000000014073E389: mov     [rdi], rax
 * 000000014073E38C: lea     rdi, [rdi+18h]
 * 000000014073E390: sub     r10, r12
 * 000000014073E393: jnz     short loc_14073E36D
 * 000000014073E395: mov     r12d, dword ptr [rsp+1A10h+var_19B8]
 * 000000014073E39A: lea     edi, [r10+1]
 * 000000014073E39E: call    qword ptr [r14+190h]
 * 000000014073E3A5: mov     r13d, [r14+554h]
 * 000000014073E3AC: mov     r8d, [r14+634h]
 * 000000014073E3B3: lea     eax, [r13+30h]
 * 000000014073E3B7: cmp     eax, [r14+714h]
 * 000000014073E3BE: jbe     loc_14073E495
 * 000000014073E3C4: mov     edx, eax
 * 000000014073E3C6: mov     rcx, r14
 * 000000014073E3C9: call    sub_140236718
 * 000000014073E3CE: xor     r11d, r11d
 * 000000014073E3D1: mov     r15, rax
 * 000000014073E3D4: test    rax, rax
 * 000000014073E3D7: jz      loc_14073EB89
 * 000000014073E3DD: mov     edx, [r14+690h]
 * 000000014073E3E4: test    dl, 4
 * 000000014073E3E7: jnz     loc_14073E48B
 * 000000014073E3ED: mov     eax, [r14+554h]
 * 000000014073E3F4: and     edx, 20000000h
 * 000000014073E3FA: mov     rbx, [r14+538h]
 * 000000014073E401: neg     edx
 * 000000014073E403: sbb     edx, edx
 * 000000014073E405: and     edx, [r14+634h]
 * 000000014073E40C: cmp     eax, 8
 * 000000014073E40F: jb      short loc_14073E426
 * 000000014073E411: mov     ecx, eax
 * 000000014073E413: shr     rcx, 3
 * 000000014073E417: mov     [r14], r11
 * 000000014073E41A: add     eax, 0FFFFFFF8h
 * 000000014073E41D: add     r14, 8
 * 000000014073E421: sub     rcx, rdi
 * 000000014073E424: jnz     short loc_14073E417
 * 000000014073E426: test    eax, eax
 * 000000014073E428: jz      short loc_14073E435
 * 000000014073E42A: mov     [r14], r11b
 * 000000014073E42D: add     r14, rdi
 * 000000014073E430: add     eax, 0FFFFFFFFh
 * 000000014073E433: jnz     short loc_14073E42A
 * 000000014073E435: mov     edi, [r15+634h]
 * 000000014073E43C: mov     [r15+634h], edx
 * 000000014073E443: cmp     edx, 3
 * 000000014073E446: jz      short loc_14073E47A
 * 000000014073E448: mov     eax, [r15+690h]
 * 000000014073E44F: mov     ecx, r11d
 * 000000014073E452: and     eax, 10000000h
 * 000000014073E457: cmovz   ecx, edx
 * 000000014073E45A: test    ecx, ecx
 * 000000014073E45C: jz      short loc_14073E46E
 * 000000014073E45E: lea     rcx, [rbx-8]
 * 000000014073E462: mov     rdx, [rcx]
 * 000000014073E465: call    qword ptr [r15+1F8h]
 * 000000014073E46C: jmp     short loc_14073E484
 * 000000014073E46E: mov     rcx, rbx
 * 000000014073E471: call    qword ptr [r15+0F8h]
 * 000000014073E478: jmp     short loc_14073E484
 * 000000014073E47A: mov     rcx, rbx
 * 000000014073E47D: call    qword ptr [r15+320h]
 * 000000014073E484: mov     [r15+634h], edi
 * 000000014073E48B: and     dword ptr [r15+690h], 0FFFFFFFBh
 * 000000014073E493: jmp     short loc_14073E49F
 * 000000014073E495: mov     r15, r14
 * 000000014073E498: mov     [r14+554h], eax
 * 000000014073E49F: mov     edi, 1
 * 000000014073E4A4: lea     rcx, [r15+r13]
 * 000000014073E4A8: add     [r15+57Ch], edi
 * 000000014073E4AF: mov     rax, rcx
 * 000000014073E4B2: mov     [rbp+1910h+var_13E8], rcx
 * 000000014073E4B9: xor     r14d, r14d
 * 000000014073E4BC: lea     edx, [rdi+2Fh]
 * 000000014073E4BF: lea     ebx, [rdi+5]
 * 000000014073E4C2: mov     [rax], r14
 * 000000014073E4C5: add     edx, 0FFFFFFF8h
 * 000000014073E4C8: add     rax, 8
 * 000000014073E4CC: sub     rbx, rdi
 * 000000014073E4CF: jnz     short loc_14073E4C2
 * 000000014073E4D1: test    edx, edx
 * 000000014073E4D3: jz      short loc_14073E4E0
 * 000000014073E4D5: mov     [rax], r14b
 * 000000014073E4D8: add     rax, rdi
 * 000000014073E4DB: add     edx, 0FFFFFFFFh
 * 000000014073E4DE: jnz     short loc_14073E4D5
 * 000000014073E4E0: mov     dword ptr [rcx], 15h
 * 000000014073E4E6: mov     [rcx+8], r14
 * 000000014073E4EA: mov     [rcx+10h], r14d
 * 000000014073E4EE: mov     rdx, [r15+588h]
 * 000000014073E4F5: mov     rax, rdx
 * 000000014073E4F8: jmp     short loc_14073E4FC
 * 000000014073E4FA: xor     edx, eax
 * 000000014073E4FC: shr     rax, 1Fh
 * 000000014073E500: test    rax, rax
 * 000000014073E503: jnz     short loc_14073E4FA
 * 000000014073E505: btr     edx, 1Fh
 * 000000014073E509: mov     edi, 80010001h
 * 000000014073E50E: mov     [rcx+14h], edx
 * 000000014073E511: mov     edx, r12d
 * 000000014073E514: mov     rax, [rbp+1910h+var_13E8]
 * 000000014073E51B: lea     rcx, [rbp+1910h+var_DB0]
 * 000000014073E522: mov     [rbp+1910h+var_13D8], rax
 * 000000014073E529: mov     [rax+28h], r14d
 * 000000014073E52D: mov     rax, [rbp+1910h+var_13D8]
 * 000000014073E534: mov     [rax+18h], rdi
 * 000000014073E538: mov     rax, [rbp+1910h+var_13D8]
 * 000000014073E53F: mov     [rax+2Ch], r12d
 * 000000014073E543: call    qword ptr [r15+198h]
 * 000000014073E54A: xor     edx, edx
 * 000000014073E54C: lea     rcx, [rbp+1910h+var_DB0]
 * 000000014073E553: call    qword ptr [r15+1A0h]
 * 000000014073E55A: mov     rbx, cr0
 * 000000014073E55D: call    qword ptr [r15+190h]
 * 000000014073E564: mov     rax, [rbp+1910h+var_13D8]
 * 000000014073E56B: mov     [rax+20h], rbx
 * 000000014073E56F: mov     rax, [rbp+1910h+var_13D8]
 * 000000014073E576: and     [rax+20h], rdi
 * 000000014073E57A: mov     r13d, [r15+554h]
 * 000000014073E581: mov     r8d, [r15+634h]
 * 000000014073E588: lea     eax, [r13+30h]
 * 000000014073E58C: cmp     eax, [r15+714h]
 * 000000014073E593: jbe     loc_14073E66B
 * 000000014073E599: mov     edx, eax
 * 000000014073E59B: mov     rcx, r15
 * 000000014073E59E: call    sub_140236718
 * 000000014073E5A3: xor     r11d, r11d
 * 000000014073E5A6: mov     rdi, rax
 * 000000014073E5A9: test    rax, rax
 * 000000014073E5AC: jz      loc_14073EB89
 * 000000014073E5B2: mov     edx, [r15+690h]
 * 000000014073E5B9: test    dl, 4
 * 000000014073E5BC: jnz     loc_14073E65F
 * 000000014073E5C2: mov     eax, [r15+554h]
 * 000000014073E5C9: lea     r8d, [r11+1]
 * 000000014073E5CD: mov     rbx, [r15+538h]
 * 000000014073E5D4: and     edx, 20000000h
 * 000000014073E5DA: neg     edx
 * 000000014073E5DC: sbb     edx, edx
 * 000000014073E5DE: and     edx, [r15+634h]
 * 000000014073E5E5: cmp     eax, 8
 * 000000014073E5E8: jb      short loc_14073E5FF
 * 000000014073E5EA: mov     ecx, eax
 * 000000014073E5EC: shr     rcx, 3
 * 000000014073E5F0: mov     [r15], r11
 * 000000014073E5F3: add     eax, 0FFFFFFF8h
 * 000000014073E5F6: add     r15, 8
 * 000000014073E5FA: sub     rcx, r8
 * 000000014073E5FD: jnz     short loc_14073E5F0
 * 000000014073E5FF: test    eax, eax
 * 000000014073E601: jz      short loc_14073E60E
 * 000000014073E603: mov     [r15], r11b
 * 000000014073E606: add     r15, r8
 * 000000014073E609: add     eax, 0FFFFFFFFh
 * 000000014073E60C: jnz     short loc_14073E603
 * 000000014073E60E: mov     r14d, [rdi+634h]
 * 000000014073E615: mov     [rdi+634h], edx
 * 000000014073E61B: cmp     edx, 3
 * 000000014073E61E: jz      short loc_14073E64F
 * 000000014073E620: mov     eax, [rdi+690h]
 * 000000014073E626: mov     ecx, r11d
 * 000000014073E629: and     eax, 10000000h
 * 000000014073E62E: cmovz   ecx, edx
 * 000000014073E631: test    ecx, ecx
 * 000000014073E633: jz      short loc_14073E644
 * 000000014073E635: lea     rcx, [rbx-8]
 * 000000014073E639: mov     rdx, [rcx]
 * 000000014073E63C: call    qword ptr [rdi+1F8h]
 * 000000014073E642: jmp     short loc_14073E658
 * 000000014073E644: mov     rcx, rbx
 * 000000014073E647: call    qword ptr [rdi+0F8h]
 * 000000014073E64D: jmp     short loc_14073E658
 * 000000014073E64F: mov     rcx, rbx
 * 000000014073E652: call    qword ptr [rdi+320h]
 * 000000014073E658: mov     [rdi+634h], r14d
 * 000000014073E65F: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 000000014073E666: xor     r14d, r14d
 * 000000014073E669: jmp     short loc_14073E675
 * 000000014073E66B: mov     rdi, r15
 * 000000014073E66E: mov     [r15+554h], eax
 * 000000014073E675: mov     eax, 1
 * 000000014073E67A: lea     rcx, [rdi+r13]
 * 000000014073E67E: add     [rdi+57Ch], eax
 * 000000014073E684: mov     [rbp+1910h+var_13C8], rcx
 * 000000014073E68B: lea     edx, [rax+2Fh]
 * 000000014073E68E: mov     rax, rcx
 * 000000014073E691: lea     ebx, [rdx-2Ah]
 * 000000014073E694: lea     r13d, [rdx-2Fh]
 * 000000014073E698: mov     [rax], r14
 * 000000014073E69B: add     edx, 0FFFFFFF8h
 * 000000014073E69E: add     rax, 8
 * 000000014073E6A2: sub     rbx, r13
 * 000000014073E6A5: jnz     short loc_14073E698
 * 000000014073E6A7: test    edx, edx
 * 000000014073E6A9: jz      short loc_14073E6B6
 * 000000014073E6AB: mov     [rax], r14b
 * 000000014073E6AE: add     rax, r13
 * 000000014073E6B1: add     edx, 0FFFFFFFFh
 * 000000014073E6B4: jnz     short loc_14073E6AB
 * 000000014073E6B6: mov     dword ptr [rcx], 15h
 * 000000014073E6BC: mov     [rcx+8], r14
 * 000000014073E6C0: mov     [rcx+10h], r14d
 * 000000014073E6C4: mov     rdx, [rdi+588h]
 * 000000014073E6CB: mov     rax, rdx
 * 000000014073E6CE: jmp     short loc_14073E6D2
 * 000000014073E6D0: xor     edx, eax
 * 000000014073E6D2: shr     rax, 1Fh
 * 000000014073E6D6: test    rax, rax
 * 000000014073E6D9: jnz     short loc_14073E6D0
 * 000000014073E6DB: btr     edx, 1Fh
 * 000000014073E6DF: mov     r15, 0FFFFFFFFFFFFDE3Fh
 * 000000014073E6E6: mov     [rcx+14h], edx
 * 000000014073E6E9: mov     edx, r12d
 * 000000014073E6EC: mov     rax, [rbp+1910h+var_13C8]
 * 000000014073E6F3: lea     rcx, [rbp+1910h+var_D90]
 * 000000014073E6FA: mov     [rbp+1910h+var_13B8], rax
 * 000000014073E701: mov     dword ptr [rax+28h], 4
 * 000000014073E708: mov     rax, [rbp+1910h+var_13B8]
 * 000000014073E70F: mov     [rax+18h], r15
 * 000000014073E713: mov     rax, [rbp+1910h+var_13B8]
 * 000000014073E71A: mov     [rax+2Ch], r12d
 * 000000014073E71E: call    qword ptr [rdi+198h]
 * 000000014073E724: xor     edx, edx
 * 000000014073E726: lea     rcx, [rbp+1910h+var_D90]
 * 000000014073E72D: call    qword ptr [rdi+1A0h]
 * 000000014073E733: mov     rbx, cr4
 * 000000014073E736: call    qword ptr [rdi+190h]
 * 000000014073E73C: mov     rax, [rbp+1910h+var_13B8]
 * 000000014073E743: lea     rcx, [rbp+1910h+var_D70]
 * 000000014073E74A: mov     edx, r12d
 * 000000014073E74D: mov     [rax+20h], rbx
 * 000000014073E751: mov     rax, [rbp+1910h+var_13B8]
 * 000000014073E758: and     [rax+20h], r15
 * 000000014073E75C: call    qword ptr [rdi+198h]
 * 000000014073E762: xor     edx, edx
 * 000000014073E764: lea     rcx, [rbp+1910h+var_D70]
 * 000000014073E76B: call    qword ptr [rdi+1A0h]
 * 000000014073E771: mov     rax, [rdi+708h]
 * 000000014073E778: test    rax, rax
 * 000000014073E77B: jz      short loc_14073E786
 * 000000014073E77D: mov     r12d, [rax+320h]
 * 000000014073E784: jmp     short loc_14073E797
 * 000000014073E786: mov     ecx, 832h
 * 000000014073E78B: rdmsr
 * 000000014073E78D: shl     rdx, 20h
 * 000000014073E791: or      rax, rdx
 * 000000014073E794: mov     r12, rax
 * 000000014073E797: mov     rcx, [rdi+708h]
 * 000000014073E79E: test    rcx, rcx
 * 000000014073E7A1: jz      short loc_14073E7AC
 * 000000014073E7A3: mov     r15d, [rcx+340h]
 * 000000014073E7AA: jmp     short loc_14073E7BD
 * 000000014073E7AC: mov     ecx, 834h
 * 000000014073E7B1: rdmsr
 * 000000014073E7B3: shl     rdx, 20h
 * 000000014073E7B7: or      rax, rdx
 * 000000014073E7BA: mov     r15, rax
 * 000000014073E7BD: call    qword ptr [rdi+190h]
 * 000000014073E7C3: mov     r14d, [rdi+554h]
 * 000000014073E7CA: and     r12d, 0FFFCEF00h
 * 000000014073E7D1: mov     r8d, [rdi+634h]
 * 000000014073E7D8: and     r15d, 0FFFEE800h
 * 000000014073E7DF: lea     ecx, [r14+30h]
 * 000000014073E7E3: cmp     ecx, [rdi+714h]
 * 000000014073E7E9: jbe     loc_14073E8BA
 * 000000014073E7EF: mov     edx, ecx
 * 000000014073E7F1: mov     rcx, rdi
 * 000000014073E7F4: call    sub_140236718
 * 000000014073E7F9: xor     r11d, r11d
 * 000000014073E7FC: mov     rbx, rax
 * 000000014073E7FF: test    rax, rax
 * 000000014073E802: jz      loc_14073EB84
 * 000000014073E808: mov     edx, [rdi+690h]
 * 000000014073E80E: test    dl, 4
 * 000000014073E811: jnz     loc_14073E8B1
 * 000000014073E817: mov     eax, [rdi+554h]
 * 000000014073E81D: and     edx, 20000000h
 * 000000014073E823: mov     r9, [rdi+538h]
 * 000000014073E82A: neg     edx
 * 000000014073E82C: sbb     r8d, r8d
 * 000000014073E82F: and     r8d, [rdi+634h]
 * 000000014073E836: cmp     eax, 8
 * 000000014073E839: jb      short loc_14073E850
 * 000000014073E83B: mov     ecx, eax
 * 000000014073E83D: shr     rcx, 3
 * 000000014073E841: mov     [rdi], r11
 * 000000014073E844: add     eax, 0FFFFFFF8h
 * 000000014073E847: add     rdi, 8
 * 000000014073E84B: sub     rcx, r13
 * 000000014073E84E: jnz     short loc_14073E841
 * 000000014073E850: test    eax, eax
 * 000000014073E852: jz      short loc_14073E85F
 * 000000014073E854: mov     [rdi], r11b
 * 000000014073E857: add     rdi, r13
 * 000000014073E85A: add     eax, 0FFFFFFFFh
 * 000000014073E85D: jnz     short loc_14073E854
 * 000000014073E85F: mov     edi, [rbx+634h]
 * 000000014073E865: mov     [rbx+634h], r8d
 * 000000014073E86C: cmp     r8d, 3
 * 000000014073E870: jz      short loc_14073E8A2
 * 000000014073E872: mov     eax, [rbx+690h]
 * 000000014073E878: mov     ecx, r11d
 * 000000014073E87B: and     eax, 10000000h
 * 000000014073E880: cmovz   ecx, r8d
 * 000000014073E884: test    ecx, ecx
 * 000000014073E886: jz      short loc_14073E897
 * 000000014073E888: lea     rcx, [r9-8]
 * 000000014073E88C: mov     rdx, [rcx]
 * 000000014073E88F: call    qword ptr [rbx+1F8h]
 * 000000014073E895: jmp     short loc_14073E8AB
 * 000000014073E897: mov     rcx, r9
 * 000000014073E89A: call    qword ptr [rbx+0F8h]
 * 000000014073E8A0: jmp     short loc_14073E8AB
 * 000000014073E8A2: mov     rcx, r9
 * 000000014073E8A5: call    qword ptr [rbx+320h]
 * 000000014073E8AB: mov     [rbx+634h], edi
 * 000000014073E8B1: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 000000014073E8B8: jmp     short loc_14073E8C3
 * 000000014073E8BA: mov     rbx, rdi
 * 000000014073E8BD: mov     [rdi+554h], ecx
 * 000000014073E8C3: add     [rbx+57Ch], r13d
 * 000000014073E8CA: lea     rcx, [rbx+r14]
 * 000000014073E8CE: mov     edx, 30h ; '0'
 * 000000014073E8D3: mov     [rbp+1910h+var_13A8], rcx
 * 000000014073E8DA: mov     rax, rcx
 * 000000014073E8DD: xor     r8d, r8d
 * 000000014073E8E0: lea     edi, [rdx-2Ah]
 * 000000014073E8E3: mov     [rax], r8
 * 000000014073E8E6: add     edx, 0FFFFFFF8h
 * 000000014073E8E9: add     rax, 8
 * 000000014073E8ED: sub     rdi, r13
 * 000000014073E8F0: jnz     short loc_14073E8E3
 * 000000014073E8F2: test    edx, edx
 * 000000014073E8F4: jz      short loc_14073E901
 * 000000014073E8F6: mov     [rax], r8b
 * 000000014073E8F9: add     rax, r13
 * 000000014073E8FC: add     edx, 0FFFFFFFFh
 * 000000014073E8FF: jnz     short loc_14073E8F6
 * 000000014073E901: mov     dword ptr [rcx], 17h
 * 000000014073E907: mov     [rcx+8], r8
 * 000000014073E90B: mov     [rcx+10h], r8d
 * 000000014073E90F: mov     rdx, [rbx+588h]
 * 000000014073E916: mov     rax, rdx
 * 000000014073E919: jmp     short loc_14073E91D
 * 000000014073E91B: xor     edx, eax
 * 000000014073E91D: shr     rax, 1Fh
 * 000000014073E921: test    rax, rax
 * 000000014073E924: jnz     short loc_14073E91B
 * 000000014073E926: btr     edx, 1Fh
 * 000000014073E92A: mov     [rcx+14h], edx
 * 000000014073E92D: mov     rax, [rbp+1910h+var_13A8]
 * 000000014073E934: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 000000014073E938: mov     [rbp+1910h+var_1398], rax
 * 000000014073E93F: mov     [rax+18h], r12d
 * 000000014073E943: mov     rax, [rbp+1910h+var_1398]
 * 000000014073E94A: mov     dword ptr [rax+1Ch], 0FFFCEF00h
 * 000000014073E951: mov     rax, [rbp+1910h+var_1398]
 * 000000014073E958: mov     [rax+20h], r15d
 * 000000014073E95C: mov     rax, [rbp+1910h+var_1398]
 * 000000014073E963: mov     dword ptr [rax+24h], 0FFFEE800h
 * 000000014073E96A: mov     rax, [rbp+1910h+var_1398]
 * 000000014073E971: mov     [rax+28h], ecx
 * 000000014073E974: call    KeGetPrcb
 * 000000014073E979: mov     ecx, cs:NtBuildNumber
 * 000000014073E97F: mov     edx, 0F0000000h
 * 000000014073E984: and     ecx, edx
 * 000000014073E986: xor     r11d, r11d
 * 000000014073E989: cmp     ecx, edx
 * 000000014073E98B: jnz     short loc_14073E991
 * 000000014073E98D: mov     [rax-78h], r11
 * 000000014073E991: cmp     dword ptr [rbx+5A8h], 7
 * 000000014073E998: lea     r14, [rax-78h]
 * 000000014073E99C: mov     r13d, [rbx+554h]
 * 000000014073E9A3: mov     r15d, r11d
 * 000000014073E9A6: mov     r8d, [rbx+634h]
 * 000000014073E9AD: mov     r10d, 20h ; ' '
 * 000000014073E9B3: cmovz   r15d, r10d
 * 000000014073E9B7: lea     eax, [r13+30h]
 * 000000014073E9BB: cmp     eax, [rbx+714h]
 * 000000014073E9C1: jbe     loc_14073EA9F
 * 000000014073E9C7: mov     edx, eax
 * 000000014073E9C9: mov     rcx, rbx
 * 000000014073E9CC: call    sub_140236718
 * 000000014073E9D1: xor     r11d, r11d
 * 000000014073E9D4: mov     rdi, rax
 * 000000014073E9D7: test    rax, rax
 * 000000014073E9DA: jz      loc_14073EB89
 * 000000014073E9E0: mov     edx, [rbx+690h]
 * 000000014073E9E6: test    dl, 4
 * 000000014073E9E9: jnz     loc_14073EA90
 * 000000014073E9EF: mov     ecx, [rbx+554h]
 * 000000014073E9F5: and     edx, 20000000h
 * 000000014073E9FB: mov     r9, [rbx+538h]
 * 000000014073EA02: neg     edx
 * 000000014073EA04: lea     edx, [r11+1]
 * 000000014073EA08: sbb     r8d, r8d
 * 000000014073EA0B: and     r8d, [rbx+634h]
 * 000000014073EA12: cmp     ecx, 8
 * 000000014073EA15: jb      short loc_14073EA2C
 * 000000014073EA17: mov     eax, ecx
 * 000000014073EA19: shr     rax, 3
 * 000000014073EA1D: mov     [rbx], r11
 * 000000014073EA20: add     ecx, 0FFFFFFF8h
 * 000000014073EA23: add     rbx, 8
 * 000000014073EA27: sub     rax, rdx
 * 000000014073EA2A: jnz     short loc_14073EA1D
 * 000000014073EA2C: test    ecx, ecx
 * 000000014073EA2E: jz      short loc_14073EA3B
 * 000000014073EA30: mov     [rbx], r11b
 * 000000014073EA33: add     rbx, rdx
 * 000000014073EA36: add     ecx, 0FFFFFFFFh
 * 000000014073EA39: jnz     short loc_14073EA30
 * 000000014073EA3B: mov     ebx, [rdi+634h]
 * 000000014073EA41: mov     [rdi+634h], r8d
 * 000000014073EA48: cmp     r8d, 3
 * 000000014073EA4C: jz      short loc_14073EA7E
 * 000000014073EA4E: mov     eax, [rdi+690h]
 * 000000014073EA54: mov     ecx, r11d
 * 000000014073EA57: and     eax, 10000000h
 * 000000014073EA5C: cmovz   ecx, r8d
 * 000000014073EA60: test    ecx, ecx
 * 000000014073EA62: jz      short loc_14073EA73
 * 000000014073EA64: lea     rcx, [r9-8]
 * 000000014073EA68: mov     rdx, [rcx]
 * 000000014073EA6B: call    qword ptr [rdi+1F8h]
 * 000000014073EA71: jmp     short loc_14073EA87
 * 000000014073EA73: mov     rcx, r9
 * 000000014073EA76: call    qword ptr [rdi+0F8h]
 * 000000014073EA7C: jmp     short loc_14073EA87
 * 000000014073EA7E: mov     rcx, r9
 * 000000014073EA81: call    qword ptr [rdi+320h]
 * 000000014073EA87: mov     [rdi+634h], ebx
 * 000000014073EA8D: xor     r11d, r11d
 * 000000014073EA90: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 000000014073EA97: mov     r10d, 20h ; ' '
 * 000000014073EA9D: jmp     short loc_14073EAA8
 * 000000014073EA9F: mov     rdi, rbx
 * 000000014073EAA2: mov     [rbx+554h], eax
 * 000000014073EAA8: mov     r9d, 1
 * 000000014073EAAE: lea     rbx, [rdi+r13]
 * 000000014073EAB2: add     [rdi+57Ch], r9d
 * 000000014073EAB9: mov     rax, rbx
 * 000000014073EABC: mov     [rbp+1910h+var_1388], rbx
 * 000000014073EAC3: lea     ecx, [r9+2Fh]
 * 000000014073EAC7: lea     edx, [rcx-2Ah]
 * 000000014073EACA: mov     [rax], r11
 * 000000014073EACD: add     ecx, 0FFFFFFF8h
 * 000000014073EAD0: add     rax, 8
 * 000000014073EAD4: sub     rdx, r9
 * 000000014073EAD7: jnz     short loc_14073EACA
 * 000000014073EAD9: test    ecx, ecx
 * 000000014073EADB: jz      short loc_14073EAE8
 * 000000014073EADD: mov     [rax], r11b
 * 000000014073EAE0: add     rax, r9
 * 000000014073EAE3: add     ecx, 0FFFFFFFFh
 * 000000014073EAE6: jnz     short loc_14073EADD
 * 000000014073EAE8: mov     [rbx], r15d
 * 000000014073EAEB: mov     [rbx+8], r14
 * 000000014073EAEF: cmp     r15d, r10d
 * 000000014073EAF2: jnz     short loc_14073EB10
 * 000000014073EAF4: lea     r9, [rbx+18h]
 * 000000014073EAF8: mov     r8d, 8
 * 000000014073EAFE: mov     rdx, r14
 * 000000014073EB01: mov     rcx, rdi
 * 000000014073EB04: call    sub_14014F138
 * 000000014073EB09: xor     r11d, r11d
 * 000000014073EB0C: lea     r9d, [r11+1]
 * 000000014073EB10: mov     dword ptr [rbx+10h], 8
 * 000000014073EB17: lea     r8, [r14+8]
 * 000000014073EB1B: add     dword ptr [rdi+598h], 8
 * 000000014073EB22: mov     rdx, r14
 * 000000014073EB25: mov     ecx, [rdi+584h]
 * 000000014073EB2B: mov     rax, [rdi+588h]
 * 000000014073EB32: cmp     r14, r8
 * 000000014073EB35: jnb     short loc_14073EB43
 * 000000014073EB37: prefetchnta byte ptr [rdx]
 * 000000014073EB3A: add     rdx, 40h ; '@'
 * 000000014073EB3E: cmp     rdx, r8
 * 000000014073EB41: jb      short loc_14073EB37
 * 000000014073EB43: xor     rax, [r14]
 * 000000014073EB46: rol     rax, cl
 * 000000014073EB49: mov     rcx, rax
 * 000000014073EB4C: jmp     short loc_14073EB50
 * 000000014073EB4E: xor     eax, ecx
 * 000000014073EB50: shr     rcx, 1Fh
 * 000000014073EB54: test    rcx, rcx
 * 000000014073EB57: jnz     short loc_14073EB4E
 * 000000014073EB59: mov     r13d, dword ptr [rsp+1A10h+var_19B8]
 * 000000014073EB5E: btr     eax, 1Fh
 * 000000014073EB62: mov     [rbx+14h], eax
 * 000000014073EB65: add     r13d, r9d
 * 000000014073EB68: add     dword ptr [rdi+598h], 8
 * 000000014073EB6F: mov     eax, cs:KeNumberProcessors_0
 * 000000014073EB75: mov     dword ptr [rsp+1A10h+var_19B8], r13d
 * 000000014073EB7A: cmp     r13d, eax
 * 000000014073EB7D: jnb     short loc_14073EB8C
 * 000000014073EB7F: jmp     loc_14073DC02
 * 000000014073EB84: mov     rdi, r11
 * 000000014073EB87: jmp     short loc_14073EB92
 * 000000014073EB89: mov     rdi, r11
 * 000000014073EB8C: mov     r13d, 1
 * 000000014073EB92: mov     [rbp+1910h+var_16D8], rdi
 * 000000014073EB99: cli
 * 000000014073EB9A: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 000000014073EBA1: jnz     short loc_14073EBA5
 * 000000014073EBA3: jmp     short loc_14073EBA3
 * 000000014073EBA5: sti
 * 000000014073EBA6: test    rdi, rdi
 * 000000014073EBA9: jz      loc_140731C01
 * 000000014073EBAF: cli
 * 000000014073EBB0: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 000000014073EBB7: jnz     short loc_14073EBBB
 * 000000014073EBB9: jmp     short loc_14073EBB9
 * 000000014073EBBB: sti
 * 000000014073EBBC: mov     r14d, [rdi+554h]
 * 000000014073EBC3: mov     r8d, [rdi+634h]
 * 000000014073EBCA: lea     eax, [r14+30h]
 * 000000014073EBCE: cmp     eax, [rdi+714h]
 * 000000014073EBD4: jbe     loc_14073ECA8
 * 000000014073EBDA: mov     edx, eax
 * 000000014073EBDC: mov     rcx, rdi
 * 000000014073EBDF: call    sub_140236718
 * 000000014073EBE4: xor     r11d, r11d
 * 000000014073EBE7: mov     rbx, rax
 * 000000014073EBEA: test    rax, rax
 * 000000014073EBED: jz      loc_140731C01
 * 000000014073EBF3: mov     edx, [rdi+690h]
 * 000000014073EBF9: test    dl, 4
 * 000000014073EBFC: jnz     loc_14073EC9F
 * 000000014073EC02: mov     eax, [rdi+554h]
 * 000000014073EC08: and     edx, 20000000h
 * 000000014073EC0E: mov     r9, [rdi+538h]
 * 000000014073EC15: neg     edx
 * 000000014073EC17: sbb     r8d, r8d
 * 000000014073EC1A: and     r8d, [rdi+634h]
 * 000000014073EC21: cmp     eax, 8
 * 000000014073EC24: jb      short loc_14073EC3B
 * 000000014073EC26: mov     ecx, eax
 * 000000014073EC28: shr     rcx, 3
 * 000000014073EC2C: mov     [rdi], r11
 * 000000014073EC2F: add     eax, 0FFFFFFF8h
 * 000000014073EC32: add     rdi, 8
 * 000000014073EC36: sub     rcx, r13
 * 000000014073EC39: jnz     short loc_14073EC2C
 * 000000014073EC3B: test    eax, eax
 * 000000014073EC3D: jz      short loc_14073EC4A
 * 000000014073EC3F: mov     [rdi], r11b
 * 000000014073EC42: add     rdi, r13
 * 000000014073EC45: add     eax, 0FFFFFFFFh
 * 000000014073EC48: jnz     short loc_14073EC3F
 * 000000014073EC4A: mov     edi, [rbx+634h]
 * 000000014073EC50: mov     [rbx+634h], r8d
 * 000000014073EC57: cmp     r8d, 3
 * 000000014073EC5B: jz      short loc_14073EC8D
 * 000000014073EC5D: mov     eax, [rbx+690h]
 * 000000014073EC63: mov     ecx, r11d
 * 000000014073EC66: and     eax, 10000000h
 * 000000014073EC6B: cmovz   ecx, r8d
 * 000000014073EC6F: test    ecx, ecx
 * 000000014073EC71: jz      short loc_14073EC82
 * 000000014073EC73: lea     rcx, [r9-8]
 * 000000014073EC77: mov     rdx, [rcx]
 * 000000014073EC7A: call    qword ptr [rbx+1F8h]
 * 000000014073EC80: jmp     short loc_14073EC96
 * 000000014073EC82: mov     rcx, r9
 * 000000014073EC85: call    qword ptr [rbx+0F8h]
 * 000000014073EC8B: jmp     short loc_14073EC96
 * 000000014073EC8D: mov     rcx, r9
 * 000000014073EC90: call    qword ptr [rbx+320h]
 * 000000014073EC96: mov     [rbx+634h], edi
 * 000000014073EC9C: xor     r11d, r11d
 * 000000014073EC9F: and     dword ptr [rbx+690h], 0FFFFFFFBh
 * 000000014073ECA6: jmp     short loc_14073ECB1
 * 000000014073ECA8: mov     rbx, rdi
 * 000000014073ECAB: mov     [rdi+554h], eax
 * 000000014073ECB1: add     [rbx+57Ch], r13d
 * 000000014073ECB8: lea     rcx, [rbx+r14]
 * 000000014073ECBC: mov     edx, 30h ; '0'
 * 000000014073ECC1: mov     [rbp+1910h+var_1378], rcx
 * 000000014073ECC8: mov     rax, rcx
 * 000000014073ECCB: mov     r12d, 0FFFFFFF8h
 * 000000014073ECD1: lea     edi, [rdx-2Ah]
 * 000000014073ECD4: mov     [rax], r11
 * 000000014073ECD7: add     edx, r12d
 * 000000014073ECDA: add     rax, 8
 * 000000014073ECDE: sub     rdi, r13
 * 000000014073ECE1: jnz     short loc_14073ECD4
 * 000000014073ECE3: or      r15d, 0FFFFFFFFh
 * 000000014073ECE7: test    edx, edx
 * 000000014073ECE9: jz      short loc_14073ECF6
 * 000000014073ECEB: mov     [rax], r11b
 * 000000014073ECEE: add     rax, r13
 * 000000014073ECF1: add     edx, r15d
 * 000000014073ECF4: jnz     short loc_14073ECEB
 * 000000014073ECF6: mov     dword ptr [rcx], 1Ah
 * 000000014073ECFC: mov     [rcx+8], r11
 * 000000014073ED00: mov     [rcx+10h], r11d
 * 000000014073ED04: mov     rdx, [rbx+588h]
 * 000000014073ED0B: mov     rax, rdx
 * 000000014073ED0E: jmp     short loc_14073ED12
 * 000000014073ED10: xor     edx, eax
 * 000000014073ED12: shr     rax, 1Fh
 * 000000014073ED16: test    rax, rax
 * 000000014073ED19: jnz     short loc_14073ED10
 * 000000014073ED1B: btr     edx, 1Fh
 * 000000014073ED1F: mov     [rbp+1910h+var_16D8], rbx
 * 000000014073ED26: mov     [rcx+14h], edx
 * 000000014073ED29: cli
 * 000000014073ED2A: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 000000014073ED31: jnz     short loc_14073ED35
 * 000000014073ED33: jmp     short loc_14073ED33
 * 000000014073ED35: sti
 * 000000014073ED36: mov     r14d, [rbx+554h]
 * 000000014073ED3D: mov     r8d, [rbx+634h]
 * 000000014073ED44: lea     eax, [r14+30h]
 * 000000014073ED48: cmp     eax, [rbx+714h]
 * 000000014073ED4E: jbe     loc_14073EE22
 * 000000014073ED54: mov     edx, eax
 * 000000014073ED56: mov     rcx, rbx
 * 000000014073ED59: call    sub_140236718
 * 000000014073ED5E: xor     r11d, r11d
 * 000000014073ED61: mov     rdi, rax
 * 000000014073ED64: test    rax, rax
 * 000000014073ED67: jz      loc_140731C01
 * 000000014073ED6D: mov     edx, [rbx+690h]
 * 000000014073ED73: test    dl, 4
 * 000000014073ED76: jnz     loc_14073EE19
 * 000000014073ED7C: mov     eax, [rbx+554h]
 * 000000014073ED82: and     edx, 20000000h
 * 000000014073ED88: mov     r9, [rbx+538h]
 * 000000014073ED8F: neg     edx
 * 000000014073ED91: sbb     r8d, r8d
 * 000000014073ED94: and     r8d, [rbx+634h]
 * 000000014073ED9B: cmp     eax, 8
 * 000000014073ED9E: jb      short loc_14073EDB5
 * 000000014073EDA0: mov     ecx, eax
 * 000000014073EDA2: shr     rcx, 3
 * 000000014073EDA6: mov     [rbx], r11
 * 000000014073EDA9: add     eax, r12d
 * 000000014073EDAC: add     rbx, 8
 * 000000014073EDB0: sub     rcx, r13
 * 000000014073EDB3: jnz     short loc_14073EDA6
 * 000000014073EDB5: test    eax, eax
 * 000000014073EDB7: jz      short loc_14073EDC4
 * 000000014073EDB9: mov     [rbx], r11b
 * 000000014073EDBC: add     rbx, r13
 * 000000014073EDBF: add     eax, r15d
 * 000000014073EDC2: jnz     short loc_14073EDB9
 * 000000014073EDC4: mov     ebx, [rdi+634h]
 * 000000014073EDCA: mov     [rdi+634h], r8d
 * 000000014073EDD1: cmp     r8d, 3
 * 000000014073EDD5: jz      short loc_14073EE07
 * 000000014073EDD7: mov     eax, [rdi+690h]
 * 000000014073EDDD: mov     ecx, r11d
 * 000000014073EDE0: and     eax, 10000000h
 * 000000014073EDE5: cmovz   ecx, r8d
 * 000000014073EDE9: test    ecx, ecx
 * 000000014073EDEB: jz      short loc_14073EDFC
 * 000000014073EDED: lea     rcx, [r9-8]
 * 000000014073EDF1: mov     rdx, [rcx]
 * 000000014073EDF4: call    qword ptr [rdi+1F8h]
 * 000000014073EDFA: jmp     short loc_14073EE10
 * 000000014073EDFC: mov     rcx, r9
 * 000000014073EDFF: call    qword ptr [rdi+0F8h]
 * 000000014073EE05: jmp     short loc_14073EE10
 * 000000014073EE07: mov     rcx, r9
 * 000000014073EE0A: call    qword ptr [rdi+320h]
 * 000000014073EE10: mov     [rdi+634h], ebx
 * 000000014073EE16: xor     r11d, r11d
 * 000000014073EE19: and     dword ptr [rdi+690h], 0FFFFFFFBh
 * 000000014073EE20: jmp     short loc_14073EE2B
 * 000000014073EE22: mov     rdi, rbx
 * 000000014073EE25: mov     [rbx+554h], eax
 * 000000014073EE2B: add     [rdi+57Ch], r13d
 * 000000014073EE32: lea     rcx, [rdi+r14]
 * 000000014073EE36: mov     edx, 30h ; '0'
 * 000000014073EE3B: mov     [rbp+1910h+var_1368], rcx
 * 000000014073EE42: mov     rax, rcx
 * 000000014073EE45: lea     ebx, [rdx-2Ah]
 * 000000014073EE48: mov     [rax], r11
 * 000000014073EE4B: add     edx, r12d
 * 000000014073EE4E: add     rax, 8
 * 000000014073EE52: sub     rbx, r13
 * 000000014073EE55: jnz     short loc_14073EE48
 * 000000014073EE57: test    edx, edx
 * 000000014073EE59: jz      short loc_14073EE66
 * 000000014073EE5B: mov     [rax], r11b
 * 000000014073EE5E: add     rax, r13
 * 000000014073EE61: add     edx, r15d
 * 000000014073EE64: jnz     short loc_14073EE5B
 * 000000014073EE66: mov     dword ptr [rcx], 1Bh
 * 000000014073EE6C: mov     [rcx+8], r11
 * 000000014073EE70: mov     [rcx+10h], r11d
 * 000000014073EE74: mov     rdx, [rdi+588h]
 * 000000014073EE7B: mov     rax, rdx
 * 000000014073EE7E: jmp     short loc_14073EE82
 * 000000014073EE80: xor     edx, eax
 * 000000014073EE82: shr     rax, 1Fh
 * 000000014073EE86: test    rax, rax
 * 000000014073EE89: jnz     short loc_14073EE80
 * 000000014073EE8B: btr     edx, 1Fh
 * 000000014073EE8F: mov     [rbp+1910h+var_16D8], rdi
 * 000000014073EE96: mov     r14, 7010008004002001h
 * 000000014073EEA0: mov     [rcx+14h], edx
 * 000000014073EEA3: cmp     [rbp+1910h+arg_10], r13d
 * 000000014073EEAA: jbe     short loc_14073EEE3
 * 000000014073EEAC: rdtsc
 * 000000014073EEAE: shl     rdx, 20h
 * 000000014073EEB2: or      rax, rdx
 * 000000014073EEB5: mov     rcx, rax
 * 000000014073EEB8: mov     rdx, rax
 * 000000014073EEBB: ror     rcx, 3
 * 000000014073EEBF: mov     rax, r14
 * 000000014073EEC2: xor     rdx, rcx
 * 000000014073EEC5: mov     ecx, [rdi+57Ch]
 * 000000014073EECB: mul     rdx
 * 000000014073EECE: mov     [rbp+1910h+var_1358], rdx
 * 000000014073EED5: xor     rax, rdx
 * 000000014073EED8: xor     edx, edx
 * 000000014073EEDA: div     rcx
 * 000000014073EEDD: mov     [rdi+590h], edx
 * 000000014073EEE3: test    dword ptr [rdi+690h], 10000000h
 * 000000014073EEED: jz      short loc_14073EF2D
 * 000000014073EEEF: rdtsc
 * 000000014073EEF1: shl     rdx, 20h
 * 000000014073EEF5: or      rax, rdx
 * 000000014073EEF8: mov     rcx, rax
 * 000000014073EEFB: mov     rdx, rax
 * 000000014073EEFE: ror     rcx, 3
 * 000000014073EF02: mov     rax, r14
 * 000000014073EF05: xor     rdx, rcx
 * 000000014073EF08: mul     rdx
 * 000000014073EF0B: mov     [rbp+1910h+var_1348], rdx
 * 000000014073EF12: xor     rdx, rax
 * 000000014073EF15: mov     rax, [rdi+4D8h]
 * 000000014073EF1C: and     rdx, 0Fh
 * 000000014073EF20: lea     rcx, [rdx+rdx*4]
 * 000000014073EF24: lea     rcx, [rax+rcx*2]
 * 000000014073EF28: jmp     loc_14073F825
 * 000000014073EF2D: mov     eax, [rbp+1910h+arg_0]
 * 000000014073EF33: mov     ecx, 5
 * 000000014073EF38: cmp     eax, ecx
 * 000000014073EF3A: jbe     loc_14073F432
 * 000000014073EF40: lea     r14, KiTimerDispatch
 * 000000014073EF47: cmp     eax, 6
 * 000000014073EF4A: jz      loc_14073F7EB
 * 000000014073EF50: cmp     eax, 7
 * 000000014073EF53: jz      loc_14073F7D8
 * 000000014073EF59: cmp     eax, 8
 * 000000014073EF5C: jz      loc_14073F7CF
 * 000000014073EF62: cmp     eax, 9
 * 000000014073EF65: jz      loc_14073F7C6
 * 000000014073EF6B: rdtsc
 * 000000014073EF6D: shl     rdx, 20h
 * 000000014073EF71: mov     r15, 7010008004002001h
 * 000000014073EF7B: or      rax, rdx
 * 000000014073EF7E: mov     rcx, rax
 * 000000014073EF81: mov     rdx, rax
 * 000000014073EF84: ror     rcx, 3
 * 000000014073EF88: mov     rax, r15
 * 000000014073EF8B: xor     rdx, rcx
 * 000000014073EF8E: mul     rdx
 * 000000014073EF91: mov     rcx, rdx
 * 000000014073EF94: mov     [rbp+1910h+var_1338], rdx
 * 000000014073EF9B: xor     rcx, rax
 * 000000014073EF9E: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014073EFA8: mul     rcx
 * 000000014073EFAB: shr     rdx, 3
 * 000000014073EFAF: lea     rax, [rdx+rdx*4]
 * 000000014073EFB3: add     rax, rax
 * 000000014073EFB6: sub     rcx, rax
 * 000000014073EFB9: cmp     rcx, 8
 * 000000014073EFBD: mov     ecx, [rdi+5A8h]
 * 000000014073EFC3: lea     eax, [rcx-3]
 * 000000014073EFC6: jnb     loc_14073F467
 * 000000014073EFCC: test    eax, 0FFFFFFFAh
 * 000000014073EFD1: jnz     short loc_14073EFDC
 * 000000014073EFD3: cmp     ecx, 8
 * 000000014073EFD6: jnz     loc_14073F3D3
 * 000000014073EFDC: lea     r8, [rbp+1910h+var_1798]
 * 000000014073EFE3: mov     rcx, r14
 * 000000014073EFE6: lea     rdx, [rbp+1910h+var_A88]
 * 000000014073EFED: or      r13, 0FFFFFFFFFFFFFFFFh
 * 000000014073EFF1: mov     r15, r11
 * 000000014073EFF4: call    RtlLookupFunctionTable
 * 000000014073EFF9: xor     r11d, r11d
 * 000000014073EFFC: mov     [rbp+1910h+var_A90], rax
 * 000000014073F003: mov     rbx, rax
 * 000000014073F006: test    rax, rax
 * 000000014073F009: jz      short loc_14073F05B
 * 000000014073F00B: mov     ecx, [rbp+1910h+var_1798]
 * 000000014073F011: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014073F01B: mov     r12, [rbp+1910h+var_A88]
 * 000000014073F022: mul     rcx
 * 000000014073F025: lea     rax, [rbp+1910h+var_1328]
 * 000000014073F02C: mov     [rbp+1910h+var_A98], r14
 * 000000014073F033: shr     rdx, 3
 * 000000014073F037: mov     ecx, edx
 * 000000014073F039: mov     [rbp+1910h+var_1798], edx
 * 000000014073F03F: mov     [rbp+1910h+var_A78], rax
 * 000000014073F046: mov     [rbp+1910h+var_1988], r12
 * 000000014073F04A: lea     rdx, [rcx+rcx*2]
 * 000000014073F04E: lea     rcx, [rbx+rdx*4]
 * 000000014073F052: mov     [rbp+1910h+var_A80], rcx
 * 000000014073F059: jmp     short loc_14073F05F
 * 000000014073F05B: mov     r12, [rbp+1910h+var_1988]
 * 000000014073F05F: test    rbx, rbx
 * 000000014073F062: jz      loc_14073F0EA
 * 000000014073F068: cmp     rbx, [rbp+1910h+var_A80]
 * 000000014073F06F: jz      short loc_14073F0EA
 * 000000014073F071: mov     rdx, [rbp+1910h+var_A88]
 * 000000014073F078: mov     rcx, rbx
 * 000000014073F07B: mov     r14, rbx
 * 000000014073F07E: call    RtlpConvertFunctionEntry
 * 000000014073F083: mov     r8, [rbp+1910h+var_A98]
 * 000000014073F08A: mov     rcx, rax
 * 000000014073F08D: mov     rdx, [rbp+1910h+var_A88]
 * 000000014073F094: call    RtlpSameFunction
 * 000000014073F099: mov     rbx, [rbp+1910h+var_A90]
 * 000000014073F0A0: xor     r11d, r11d
 * 000000014073F0A3: add     rbx, 0Ch
 * 000000014073F0A7: mov     [rbp+1910h+var_A90], rbx
 * 000000014073F0AE: test    rax, rax
 * 000000014073F0B1: jz      short loc_14073F068
 * 000000014073F0B3: mov     rax, [rbp+1910h+var_A78]
 * 000000014073F0BA: mov     [rax], r14
 * 000000014073F0BD: mov     rax, [rbp+1910h+var_1328]
 * 000000014073F0C4: mov     ecx, [rax]
 * 000000014073F0C6: mov     edx, [rax+4]
 * 000000014073F0C9: add     rcx, r12
 * 000000014073F0CC: add     rdx, r12
 * 000000014073F0CF: cmp     r13, rcx
 * 000000014073F0D2: cmova   r13, rcx
 * 000000014073F0D6: cmp     r15, rdx
 * 000000014073F0D9: jnb     short loc_14073F0DE
 * 000000014073F0DB: mov     r15, rdx
 * 000000014073F0DE: mov     rbx, [rbp+1910h+var_A90]
 * 000000014073F0E5: jmp     loc_14073F05F
 * 000000014073F0EA: test    r15, r15
 * 000000014073F0ED: jz      loc_14073F3CD
 * 000000014073F0F3: sub     r15, r13
 * 000000014073F0F6: cmp     r15, 1000h
 * 000000014073F0FD: ja      loc_14073F3CD
 * 000000014073F103: test    dword ptr [rdi+690h], 10000000h
 * 000000014073F10D: mov     r12d, 1
 * 000000014073F113: mov     r9b, r12b
 * 000000014073F116: mov     r8d, r11d
 * 000000014073F119: jz      short loc_14073F120
 * 000000014073F11B: mov     r9b, r11b
 * 000000014073F11E: jmp     short loc_14073F127
 * 000000014073F120: mov     r8d, [rdi+634h]
 * 000000014073F127: mov     r10d, [rdi+580h]
 * 000000014073F12E: rdtsc
 * 000000014073F130: shl     rdx, 20h
 * 000000014073F134: mov     rbx, 7010008004002001h
 * 000000014073F13E: or      rax, rdx
 * 000000014073F141: mov     rcx, rax
 * 000000014073F144: mov     rdx, rax
 * 000000014073F147: ror     rcx, 3
 * 000000014073F14B: mov     rax, rbx
 * 000000014073F14E: xor     rdx, rcx
 * 000000014073F151: mul     rdx
 * 000000014073F154: mov     r14, rax
 * 000000014073F157: mov     [rbp+1910h+var_1318], rdx
 * 000000014073F15E: xor     r14d, edx
 * 000000014073F161: and     r14d, 7FFh
 * 000000014073F168: rdtsc
 * 000000014073F16A: shl     rdx, 20h
 * 000000014073F16E: or      rax, rdx
 * 000000014073F171: mov     rcx, rax
 * 000000014073F174: mov     rdx, rax
 * 000000014073F177: ror     rcx, 3
 * 000000014073F17B: mov     rax, rbx
 * 000000014073F17E: xor     rdx, rcx
 * 000000014073F181: lea     ecx, [r14+1]
 * 000000014073F185: mul     rdx
 * 000000014073F188: xor     rax, rdx
 * 000000014073F18B: mov     [rbp+1910h+var_1308], rdx
 * 000000014073F192: xor     edx, edx
 * 000000014073F194: div     rcx
 * 000000014073F197: mov     [rsp+1A10h+var_19B0], rdx
 * 000000014073F19C: test    r8d, r8d
 * 000000014073F19F: jz      loc_14073F23C
 * 000000014073F1A5: rdtsc
 * 000000014073F1A7: shl     rdx, 20h
 * 000000014073F1AB: or      rax, rdx
 * 000000014073F1AE: mov     rcx, rax
 * 000000014073F1B1: mov     rbx, rax
 * 000000014073F1B4: ror     rcx, 3
 * 000000014073F1B8: mov     rax, 7010008004002001h
 * 000000014073F1C2: xor     rbx, rcx
 * 000000014073F1C5: mul     rbx
 * 000000014073F1C8: xor     eax, edx
 * 000000014073F1CA: mov     [rbp+1910h+var_12F8], rdx
 * 000000014073F1D1: and     eax, r12d
 * 000000014073F1D4: or      edx, 0FFFFFFFFh
 * 000000014073F1D7: shl     eax, 0Ch
 * 000000014073F1DA: add     eax, 1000h
 * 000000014073F1DF: add     r14d, eax
 * 000000014073F1E2: lea     eax, [r14+r15]
 * 000000014073F1E6: lea     rcx, [rax+8]
 * 000000014073F1EA: mov     ebx, eax
 * 000000014073F1EC: call    qword ptr [rdi+1F0h]
 * 000000014073F1F2: xor     r11d, r11d
 * 000000014073F1F5: mov     r12, rax
 * 000000014073F1F8: test    rax, rax
 * 000000014073F1FB: jz      short loc_14073F261
 * 000000014073F1FD: lea     rdx, [rbx+0FFFh]
 * 000000014073F204: mov     rcx, rax
 * 000000014073F207: and     edx, 0FFFFF000h
 * 000000014073F20D: lea     r8d, [r11+40h]
 * 000000014073F211: call    qword ptr [rdi+200h]
 * 000000014073F217: xor     r11d, r11d
 * 000000014073F21A: test    al, al
 * 000000014073F21C: jnz     short loc_14073F22E
 * 000000014073F21E: mov     edx, ebx
 * 000000014073F220: mov     rcx, r12
 * 000000014073F223: call    qword ptr [rdi+1F8h]
 * 000000014073F229: xor     r11d, r11d
 * 000000014073F22C: jmp     short loc_14073F261
 * 000000014073F22E: lea     rax, [rbx+8]
 * 000000014073F232: mov     [r12], rax
 * 000000014073F236: add     r12, 8
 * 000000014073F23A: jmp     short loc_14073F25C
 * 000000014073F23C: neg     r9b
 * 000000014073F23F: lea     edx, [r14+r15]
 * 000000014073F243: mov     r8d, r10d
 * 000000014073F246: sbb     ecx, ecx
 * 000000014073F248: not     ecx
 * 000000014073F24A: and     ecx, 200h
 * 000000014073F250: call    qword ptr [rdi+0F0h]
 * 000000014073F256: mov     r12, rax
 * 000000014073F259: xor     r11d, r11d
 * 000000014073F25C: test    r12, r12
 * 000000014073F25F: jnz     short loc_14073F273
 * 000000014073F261: mov     r13d, 1
 * 000000014073F267: add     [rdi+710h], r13d
 * 000000014073F26E: jmp     loc_14073F3D3
 * 000000014073F273: mov     r9, [rsp+1A10h+var_19B0]
 * 000000014073F278: mov     rbx, r12
 * 000000014073F27B: mov     r8d, r9d
 * 000000014073F27E: mov     r10d, 1
 * 000000014073F284: cmp     r9d, 8
 * 000000014073F288: jb      short loc_14073F2D9
 * 000000014073F28A: mov     r9d, r9d
 * 000000014073F28D: mov     r11, 7010008004002001h
 * 000000014073F297: shr     r9, 3
 * 000000014073F29B: rdtsc
 * 000000014073F29D: shl     rdx, 20h
 * 000000014073F2A1: add     r8d, 0FFFFFFF8h
 * 000000014073F2A5: or      rax, rdx
 * 000000014073F2A8: mov     rcx, rax
 * 000000014073F2AB: mov     rdx, rax
 * 000000014073F2AE: ror     rcx, 3
 * 000000014073F2B2: mov     rax, r11
 * 000000014073F2B5: xor     rdx, rcx
 * 000000014073F2B8: mul     rdx
 * 000000014073F2BB: mov     [rbp+1910h+var_12E8], rdx
 * 000000014073F2C2: xor     rdx, rax
 * 000000014073F2C5: mov     [rbx], rdx
 * 000000014073F2C8: add     rbx, 8
 * 000000014073F2CC: sub     r9, r10
 * 000000014073F2CF: jnz     short loc_14073F29B
 * 000000014073F2D1: mov     r9, [rsp+1A10h+var_19B0]
 * 000000014073F2D6: xor     r11d, r11d
 * 000000014073F2D9: test    r8d, r8d
 * 000000014073F2DC: jz      short loc_14073F31A
 * 000000014073F2DE: rdtsc
 * 000000014073F2E0: shl     rdx, 20h
 * 000000014073F2E4: or      rax, rdx
 * 000000014073F2E7: mov     rcx, rax
 * 000000014073F2EA: mov     rdx, rax
 * 000000014073F2ED: ror     rcx, 3
 * 000000014073F2F1: mov     rax, 7010008004002001h
 * 000000014073F2FB: xor     rdx, rcx
 * 000000014073F2FE: mul     rdx
 * 000000014073F301: mov     [rbp+1910h+var_12D8], rdx
 * 000000014073F308: xor     rdx, rax
 * 000000014073F30B: mov     [rbx], dl
 * 000000014073F30D: add     rbx, r10
 * 000000014073F310: shr     rdx, 8
 * 000000014073F314: add     r8d, 0FFFFFFFFh
 * 000000014073F318: jnz     short loc_14073F30B
 * 000000014073F31A: mov     r10d, r9d
 * 000000014073F31D: sub     r14d, r9d
 * 000000014073F320: mov     ebx, r15d
 * 000000014073F323: mov     r9d, 1
 * 000000014073F329: add     rbx, r12
 * 000000014073F32C: add     rbx, r10
 * 000000014073F32F: cmp     r14d, 8
 * 000000014073F333: jb      short loc_14073F37F
 * 000000014073F335: mov     r8d, r14d
 * 000000014073F338: mov     r11, 7010008004002001h
 * 000000014073F342: shr     r8, 3
 * 000000014073F346: rdtsc
 * 000000014073F348: shl     rdx, 20h
 * 000000014073F34C: add     r14d, 0FFFFFFF8h
 * 000000014073F350: or      rax, rdx
 * 000000014073F353: mov     rcx, rax
 * 000000014073F356: mov     rdx, rax
 * 000000014073F359: ror     rcx, 3
 * 000000014073F35D: mov     rax, r11
 * 000000014073F360: xor     rdx, rcx
 * 000000014073F363: mul     rdx
 * 000000014073F366: mov     [rbp+1910h+var_12C8], rdx
 * 000000014073F36D: xor     rdx, rax
 * 000000014073F370: mov     [rbx], rdx
 * 000000014073F373: add     rbx, 8
 * 000000014073F377: sub     r8, r9
 * 000000014073F37A: jnz     short loc_14073F346
 * 000000014073F37C: xor     r11d, r11d
 * 000000014073F37F: test    r14d, r14d
 * 000000014073F382: jz      short loc_14073F3C0
 * 000000014073F384: rdtsc
 * 000000014073F386: shl     rdx, 20h
 * 000000014073F38A: or      rax, rdx
 * 000000014073F38D: mov     rcx, rax
 * 000000014073F390: mov     rdx, rax
 * 000000014073F393: ror     rcx, 3
 * 000000014073F397: mov     rax, 7010008004002001h
 * 000000014073F3A1: xor     rdx, rcx
 * 000000014073F3A4: mul     rdx
 * 000000014073F3A7: mov     [rbp+1910h+var_12B8], rdx
 * 000000014073F3AE: xor     rdx, rax
 * 000000014073F3B1: mov     [rbx], dl
 * 000000014073F3B3: add     rbx, r9
 * 000000014073F3B6: shr     rdx, 8
 * 000000014073F3BA: add     r14d, 0FFFFFFFFh
 * 000000014073F3BE: jnz     short loc_14073F3B1
 * 000000014073F3C0: lea     rcx, [r12+r10]
 * 000000014073F3C4: test    rcx, rcx
 * 000000014073F3C7: jnz     loc_14073F77A
 * 000000014073F3CD: mov     r13d, 1
 * 000000014073F3D3: rdtsc
 * 000000014073F3D5: shl     rdx, 20h
 * 000000014073F3D9: mov     r14, 7010008004002001h
 * 000000014073F3E3: or      rax, rdx
 * 000000014073F3E6: mov     rcx, rax
 * 000000014073F3E9: mov     rdx, rax
 * 000000014073F3EC: ror     rcx, 3
 * 000000014073F3F0: mov     rax, r14
 * 000000014073F3F3: xor     rdx, rcx
 * 000000014073F3F6: mul     rdx
 * 000000014073F3F9: mov     rbx, rax
 * 000000014073F3FC: mov     [rbp+1910h+var_1238], rdx
 * 000000014073F403: xor     rbx, rdx
 * 000000014073F406: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014073F410: mul     rbx
 * 000000014073F413: shr     rdx, 3
 * 000000014073F417: lea     rcx, [rdx+rdx*4]
 * 000000014073F41B: add     rcx, rcx
 * 000000014073F41E: sub     rbx, rcx
 * 000000014073F421: mov     ecx, 5
 * 000000014073F426: mov     eax, ebx
 * 000000014073F428: cmp     ebx, ecx
 * 000000014073F42A: ja      loc_14073EF40
 * 000000014073F430: cmp     eax, ecx
 * 000000014073F432: jz      loc_14073F818
 * 000000014073F438: test    eax, eax
 * 000000014073F43A: jz      loc_14073F80F
 * 000000014073F440: sub     eax, 1
 * 000000014073F443: jz      loc_14073F806
 * 000000014073F449: sub     eax, 1
 * 000000014073F44C: jz      loc_14073F7FD
 * 000000014073F452: cmp     eax, 1
 * 000000014073F455: jz      loc_14073F7F4
 * 000000014073F45B: lea     rcx, ExpCenturyDpcRoutine
 * 000000014073F462: jmp     loc_14073F81F
 * 000000014073F467: test    eax, 0FFFFFFFAh
 * 000000014073F46C: jnz     short loc_14073F477
 * 000000014073F46E: cmp     ecx, 8
 * 000000014073F471: jnz     loc_14073F3D3
 * 000000014073F477: test    dword ptr [rdi+690h], 10000000h
 * 000000014073F481: mov     r9b, r13b
 * 000000014073F484: mov     r8d, r11d
 * 000000014073F487: jz      short loc_14073F48E
 * 000000014073F489: mov     r9b, r11b
 * 000000014073F48C: jmp     short loc_14073F495
 * 000000014073F48E: mov     r8d, [rdi+634h]
 * 000000014073F495: mov     r10d, [rdi+580h]
 * 000000014073F49C: rdtsc
 * 000000014073F49E: shl     rdx, 20h
 * 000000014073F4A2: or      rax, rdx
 * 000000014073F4A5: mov     rcx, rax
 * 000000014073F4A8: mov     rdx, rax
 * 000000014073F4AB: ror     rcx, 3
 * 000000014073F4AF: mov     rax, r15
 * 000000014073F4B2: xor     rdx, rcx
 * 000000014073F4B5: mul     rdx
 * 000000014073F4B8: mov     r14, rax
 * 000000014073F4BB: mov     [rbp+1910h+var_12A8], rdx
 * 000000014073F4C2: xor     r14d, edx
 * 000000014073F4C5: and     r14d, 7FFh
 * 000000014073F4CC: rdtsc
 * 000000014073F4CE: shl     rdx, 20h
 * 000000014073F4D2: or      rax, rdx
 * 000000014073F4D5: mov     rcx, rax
 * 000000014073F4D8: mov     rdx, rax
 * 000000014073F4DB: ror     rcx, 3
 * 000000014073F4DF: mov     rax, r15
 * 000000014073F4E2: xor     rdx, rcx
 * 000000014073F4E5: lea     ecx, [r14+1]
 * 000000014073F4E9: mul     rdx
 * 000000014073F4EC: xor     rax, rdx
 * 000000014073F4EF: mov     [rbp+1910h+var_1298], rdx
 * 000000014073F4F6: xor     edx, edx
 * 000000014073F4F8: div     rcx
 * 000000014073F4FB: mov     r12, rdx
 * 000000014073F4FE: test    r8d, r8d
 * 000000014073F501: jz      loc_14073F5A8
 * 000000014073F507: rdtsc
 * 000000014073F509: shl     rdx, 20h
 * 000000014073F50D: or      rax, rdx
 * 000000014073F510: mov     rcx, rax
 * 000000014073F513: mov     rbx, rax
 * 000000014073F516: ror     rcx, 3
 * 000000014073F51A: mov     rax, r15
 * 000000014073F51D: xor     rbx, rcx
 * 000000014073F520: mul     rbx
 * 000000014073F523: xor     eax, edx
 * 000000014073F525: mov     [rbp+1910h+var_1288], rdx
 * 000000014073F52C: and     eax, r13d
 * 000000014073F52F: or      edx, 0FFFFFFFFh
 * 000000014073F532: shl     eax, 0Ch
 * 000000014073F535: add     eax, 1000h
 * 000000014073F53A: add     r14d, eax
 * 000000014073F53D: lea     eax, [r14+110h]
 * 000000014073F544: lea     r13, [rax+8]
 * 000000014073F548: mov     r15d, eax
 * 000000014073F54B: mov     rcx, r13
 * 000000014073F54E: call    qword ptr [rdi+1F0h]
 * 000000014073F554: xor     r11d, r11d
 * 000000014073F557: mov     rbx, rax
 * 000000014073F55A: test    rax, rax
 * 000000014073F55D: jz      loc_14073F261
 * 000000014073F563: lea     rdx, [r15+0FFFh]
 * 000000014073F56A: mov     rcx, rax
 * 000000014073F56D: and     edx, 0FFFFF000h
 * 000000014073F573: lea     r8d, [r11+40h]
 * 000000014073F577: call    qword ptr [rdi+200h]
 * 000000014073F57D: xor     r11d, r11d
 * 000000014073F580: test    al, al
 * 000000014073F582: jnz     short loc_14073F58F
 * 000000014073F584: mov     edx, r15d
 * 000000014073F587: mov     rcx, rbx
 * 000000014073F58A: jmp     loc_14073F223
 * 000000014073F58F: mov     [rbx], r13
 * 000000014073F592: mov     r15, 7010008004002001h
 * 000000014073F59C: add     rbx, 8
 * 000000014073F5A0: mov     r13d, 1
 * 000000014073F5A6: jmp     short loc_14073F5CB
 * 000000014073F5A8: neg     r9b
 * 000000014073F5AB: lea     edx, [r14+110h]
 * 000000014073F5B2: mov     r8d, r10d
 * 000000014073F5B5: sbb     ecx, ecx
 * 000000014073F5B7: not     ecx
 * 000000014073F5B9: and     ecx, 200h
 * 000000014073F5BF: call    qword ptr [rdi+0F0h]
 * 000000014073F5C5: mov     rbx, rax
 * 000000014073F5C8: xor     r11d, r11d
 * 000000014073F5CB: test    rbx, rbx
 * 000000014073F5CE: jz      loc_14073F267
 * 000000014073F5D4: mov     r9d, r12d
 * 000000014073F5D7: mov     r8, rbx
 * 000000014073F5DA: cmp     r12d, 8
 * 000000014073F5DE: jb      short loc_14073F61D
 * 000000014073F5E0: mov     r10d, r12d
 * 000000014073F5E3: shr     r10, 3
 * 000000014073F5E7: rdtsc
 * 000000014073F5E9: shl     rdx, 20h
 * 000000014073F5ED: add     r9d, 0FFFFFFF8h
 * 000000014073F5F1: or      rax, rdx
 * 000000014073F5F4: mov     rcx, rax
 * 000000014073F5F7: mov     rdx, rax
 * 000000014073F5FA: ror     rcx, 3
 * 000000014073F5FE: mov     rax, r15
 * 000000014073F601: xor     rdx, rcx
 * 000000014073F604: mul     rdx
 * 000000014073F607: mov     [rbp+1910h+var_1278], rdx
 * 000000014073F60E: xor     rdx, rax
 * 000000014073F611: mov     [r8], rdx
 * 000000014073F614: add     r8, 8
 * 000000014073F618: sub     r10, r13
 * 000000014073F61B: jnz     short loc_14073F5E7
 * 000000014073F61D: test    r9d, r9d
 * 000000014073F620: jz      short loc_14073F65D
 * 000000014073F622: rdtsc
 * 000000014073F624: shl     rdx, 20h
 * 000000014073F628: or      rax, rdx
 * 000000014073F62B: mov     rcx, rax
 * 000000014073F62E: mov     rdx, rax
 * 000000014073F631: ror     rcx, 3
 * 000000014073F635: mov     rax, r15
 * 000000014073F638: xor     rdx, rcx
 * 000000014073F63B: mul     rdx
 * 000000014073F63E: mov     [rbp+1910h+var_1268], rdx
 * 000000014073F645: xor     rdx, rax
 * 000000014073F648: or      r15d, 0FFFFFFFFh
 * 000000014073F64C: mov     [r8], dl
 * 000000014073F64F: add     r8, r13
 * 000000014073F652: shr     rdx, 8
 * 000000014073F656: add     r9d, r15d
 * 000000014073F659: jnz     short loc_14073F64C
 * 000000014073F65B: jmp     short loc_14073F661
 * 000000014073F65D: or      r15d, 0FFFFFFFFh
 * 000000014073F661: mov     eax, r12d
 * 000000014073F664: sub     r14d, r12d
 * 000000014073F667: add     rbx, rax
 * 000000014073F66A: mov     r12d, 0FFFFFFF8h
 * 000000014073F670: mov     r10, 7010008004002001h
 * 000000014073F67A: lea     r8, [rbx+110h]
 * 000000014073F681: cmp     r14d, 8
 * 000000014073F685: jb      short loc_14073F6C3
 * 000000014073F687: mov     r9d, r14d
 * 000000014073F68A: shr     r9, 3
 * 000000014073F68E: rdtsc
 * 000000014073F690: shl     rdx, 20h
 * 000000014073F694: add     r14d, r12d
 * 000000014073F697: or      rax, rdx
 * 000000014073F69A: mov     rcx, rax
 * 000000014073F69D: mov     rdx, rax
 * 000000014073F6A0: ror     rcx, 3
 * 000000014073F6A4: mov     rax, r10
 * 000000014073F6A7: xor     rdx, rcx
 * 000000014073F6AA: mul     rdx
 * 000000014073F6AD: mov     [rbp+1910h+var_1258], rdx
 * 000000014073F6B4: xor     rdx, rax
 * 000000014073F6B7: mov     [r8], rdx
 * 000000014073F6BA: add     r8, 8
 * 000000014073F6BE: sub     r9, r13
 * 000000014073F6C1: jnz     short loc_14073F68E
 * 000000014073F6C3: test    r14d, r14d
 * 000000014073F6C6: jz      short loc_14073F6FD
 * 000000014073F6C8: rdtsc
 * 000000014073F6CA: shl     rdx, 20h
 * 000000014073F6CE: or      rax, rdx
 * 000000014073F6D1: mov     rcx, rax
 * 000000014073F6D4: mov     rdx, rax
 * 000000014073F6D7: ror     rcx, 3
 * 000000014073F6DB: mov     rax, r10
 * 000000014073F6DE: xor     rdx, rcx
 * 000000014073F6E1: mul     rdx
 * 000000014073F6E4: mov     [rbp+1910h+var_1248], rdx
 * 000000014073F6EB: xor     rdx, rax
 * 000000014073F6EE: mov     [r8], dl
 * 000000014073F6F1: add     r8, r13
 * 000000014073F6F4: shr     rdx, 8
 * 000000014073F6F8: add     r14d, r15d
 * 000000014073F6FB: jnz     short loc_14073F6EE
 * 000000014073F6FD: test    rbx, rbx
 * 000000014073F700: jz      loc_14073F3D3
 * 000000014073F706: lea     rcx, [rbx+48h]
 * 000000014073F70A: mov     r9d, 0C8h
 * 000000014073F710: mov     r8, rcx
 * 000000014073F713: lea     rdx, KiDpcDispatch
 * 000000014073F71A: mov     r10d, 19h
 * 000000014073F720: mov     rax, [rdx]
 * 000000014073F723: add     r9d, r12d
 * 000000014073F726: mov     [r8], rax
 * 000000014073F729: add     rdx, 8
 * 000000014073F72D: add     r8, 8
 * 000000014073F731: sub     r10, r13
 * 000000014073F734: jnz     short loc_14073F720
 * 000000014073F736: test    r9d, r9d
 * 000000014073F739: jz      short loc_14073F74B
 * 000000014073F73B: mov     al, [rdx]
 * 000000014073F73D: add     rdx, r13
 * 000000014073F740: mov     [r8], al
 * 000000014073F743: add     r8, r13
 * 000000014073F746: add     r9d, r15d
 * 000000014073F749: jnz     short loc_14073F73B
 * 000000014073F74B: mov     byte ptr [rbx], 13h
 * 000000014073F74E: mov     [rbx+1], r13b
 * 000000014073F752: mov     [rbx+2], r11w
 * 000000014073F757: mov     [rbx+18h], rcx
 * 000000014073F75B: mov     [rbx+20h], r11
 * 000000014073F75F: mov     [rbx+38h], r11
 * 000000014073F763: mov     [rbx+10h], r11
 * 000000014073F767: test    rcx, rcx
 * 000000014073F76A: jz      loc_14073F3D3
 * 000000014073F770: bts     dword ptr [rdi+690h], 8
 * 000000014073F778: jmp     short loc_14073F7DF
 * 000000014073F77A: mov     rdx, rcx
 * 000000014073F77D: cmp     r15d, 8
 * 000000014073F781: jb      short loc_14073F7A2
 * 000000014073F783: mov     ebx, r15d
 * 000000014073F786: shr     rbx, 3
 * 000000014073F78A: mov     rax, [r13+0]
 * 000000014073F78E: add     r15d, 0FFFFFFF8h
 * 000000014073F792: mov     [rdx], rax
 * 000000014073F795: add     r13, 8
 * 000000014073F799: add     rdx, 8
 * 000000014073F79D: sub     rbx, r9
 * 000000014073F7A0: jnz     short loc_14073F78A
 * 000000014073F7A2: test    r15d, r15d
 * 000000014073F7A5: jz      short loc_14073F7BC
 * 000000014073F7A7: sub     rdx, r13
 * 000000014073F7AA: mov     al, [r13+0]
 * 000000014073F7AE: mov     [r13+rdx+0], al
 * 000000014073F7B3: add     r13, r9
 * 000000014073F7B6: add     r15d, 0FFFFFFFFh
 * 000000014073F7BA: jnz     short loc_14073F7AA
 * 000000014073F7BC: bts     dword ptr [rdi+690h], 9
 * 000000014073F7C4: jmp     short loc_14073F7DF
 * 000000014073F7C6: lea     rcx, PopThermalZoneDpc
 * 000000014073F7CD: jmp     short loc_14073F7DF
 * 000000014073F7CF: lea     rcx, KiBalanceSetManagerDeferredRoutine
 * 000000014073F7D6: jmp     short loc_14073F7DF
 * 000000014073F7D8: lea     rcx, IopIrpStackProfilerDpcRoutine
 * 000000014073F7DF: mov     r14, 7010008004002001h
 * 000000014073F7E9: jmp     short loc_14073F81F
 * 000000014073F7EB: lea     rcx, IopTimerDispatch
 * 000000014073F7F2: jmp     short loc_14073F7DF
 * 000000014073F7F4: lea     rcx, ExpTimeZoneDpcRoutine
 * 000000014073F7FB: jmp     short loc_14073F81F
 * 000000014073F7FD: lea     rcx, ExpTimeRefreshDpcRoutine
 * 000000014073F804: jmp     short loc_14073F81F
 * 000000014073F806: lea     rcx, CmpLazyFlushDpcRoutine
 * 000000014073F80D: jmp     short loc_14073F81F
 * 000000014073F80F: lea     rcx, CmpEnableLazyFlushDpcRoutine
 * 000000014073F816: jmp     short loc_14073F81F
 * 000000014073F818: lea     rcx, ExpTimerDpcRoutine
 * 000000014073F81F: mov     r13d, 1
 * 000000014073F825: mov     [rdi+548h], rcx
 * 000000014073F82C: mov     rax, [rdi+668h]
 * 000000014073F833: mov     rcx, [rax]
 * 000000014073F836: mov     [rdi+670h], rcx
 * 000000014073F83D: or      dword ptr [rdi+678h], 0FFFFFFFFh
 * 000000014073F844: mov     [rdi+67Ch], r11d
 * 000000014073F84B: mov     [rdi+680h], r11
 * 000000014073F852: cli
 * 000000014073F853: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 000000014073F85A: jnz     short loc_14073F85E
 * 000000014073F85C: jmp     short loc_14073F85C
 * 000000014073F85E: sti
 * 000000014073F85F: rdtsc
 * 000000014073F861: shl     rdx, 20h
 * 000000014073F865: or      rax, rdx
 * 000000014073F868: mov     rcx, rax
 * 000000014073F86B: mov     rdx, rax
 * 000000014073F86E: ror     rcx, 3
 * 000000014073F872: mov     rax, r14
 * 000000014073F875: xor     rdx, rcx
 * 000000014073F878: mul     rdx
 * 000000014073F87B: mov     [rbp+1910h+var_1228], rdx
 * 000000014073F882: xor     edx, eax
 * 000000014073F884: cmp     [rbp+1910h+arg_8], 3
 * 000000014073F88B: mov     [rdi+664h], edx
 * 000000014073F891: jnz     short loc_14073F8B3
 * 000000014073F893: mov     rdx, [rbp+1910h+arg_18]
 * 000000014073F89A: mov     rcx, rdi
 * 000000014073F89D: call    sub_1407424FC
 * 000000014073F8A2: xor     r11d, r11d
 * 000000014073F8A5: mov     [rbp+1910h+var_1988], rax
 * 000000014073F8A9: test    rax, rax
 * 000000014073F8AC: jnz     short loc_14073F8B7
 * 000000014073F8AE: jmp     loc_140731C01
 * 000000014073F8B3: mov     [rbp+1910h+var_1988], r11
 * 000000014073F8B7: mov     r8d, [rdi+634h]
 * 000000014073F8BE: mov     [rdi+714h], r11d
 * 000000014073F8C5: cmp     dword ptr [rdi+5A8h], 7
 * 000000014073F8CC: mov     edx, [rdi+554h]
 * 000000014073F8D2: jnz     short loc_14073F8DA
 * 000000014073F8D4: add     edx, 0FFFh
 * 000000014073F8DA: mov     rcx, rdi
 * 000000014073F8DD: call    sub_140236718
 * 000000014073F8E2: xor     r12d, r12d
 * 000000014073F8E5: mov     [rsp+1A10h+var_19B0], rax
 * 000000014073F8EA: mov     r15, rax
 * 000000014073F8ED: test    rax, rax
 * 000000014073F8F0: jz      loc_140731C01
 * 000000014073F8F6: mov     edx, [rdi+690h]
 * 000000014073F8FC: test    dl, 4
 * 000000014073F8FF: jnz     loc_14073F9A1
 * 000000014073F905: mov     eax, [rdi+554h]
 * 000000014073F90B: and     edx, 20000000h
 * 000000014073F911: mov     rbx, [rdi+538h]
 * 000000014073F918: neg     edx
 * 000000014073F91A: sbb     edx, edx
 * 000000014073F91C: and     edx, [rdi+634h]
 * 000000014073F922: cmp     eax, 8
 * 000000014073F925: jb      short loc_14073F93C
 * 000000014073F927: mov     ecx, eax
 * 000000014073F929: shr     rcx, 3
 * 000000014073F92D: mov     [rdi], r12
 * 000000014073F930: add     eax, 0FFFFFFF8h
 * 000000014073F933: add     rdi, 8
 * 000000014073F937: sub     rcx, r13
 * 000000014073F93A: jnz     short loc_14073F92D
 * 000000014073F93C: test    eax, eax
 * 000000014073F93E: jz      short loc_14073F94B
 * 000000014073F940: mov     [rdi], r12b
 * 000000014073F943: add     rdi, r13
 * 000000014073F946: add     eax, 0FFFFFFFFh
 * 000000014073F949: jnz     short loc_14073F940
 * 000000014073F94B: mov     edi, [r15+634h]
 * 000000014073F952: mov     [r15+634h], edx
 * 000000014073F959: cmp     edx, 3
 * 000000014073F95C: jz      short loc_14073F990
 * 000000014073F95E: mov     eax, [r15+690h]
 * 000000014073F965: mov     ecx, r12d
 * 000000014073F968: and     eax, 10000000h
 * 000000014073F96D: cmovz   ecx, edx
 * 000000014073F970: test    ecx, ecx
 * 000000014073F972: jz      short loc_14073F984
 * 000000014073F974: lea     rcx, [rbx-8]
 * 000000014073F978: mov     rdx, [rcx]
 * 000000014073F97B: call    qword ptr [r15+1F8h]
 * 000000014073F982: jmp     short loc_14073F99A
 * 000000014073F984: mov     rcx, rbx
 * 000000014073F987: call    qword ptr [r15+0F8h]
 * 000000014073F98E: jmp     short loc_14073F99A
 * 000000014073F990: mov     rcx, rbx
 * 000000014073F993: call    qword ptr [r15+320h]
 * 000000014073F99A: mov     [r15+634h], edi
 * 000000014073F9A1: and     dword ptr [r15+690h], 0FFFFFFFBh
 * 000000014073F9A9: mov     rax, [r15+740h]
 * 000000014073F9B0: mov     [rsp+1A10h+var_19C0], rax
 * 000000014073F9B5: mov     [r15+740h], r12
 * 000000014073F9BC: mov     eax, [r15+720h]
 * 000000014073F9C3: test    eax, eax
 * 000000014073F9C5: jz      loc_140740264
 * 000000014073F9CB: lea     r14, [r15+rax]
 * 000000014073F9CF: mov     rbx, [r14+8]
 * 000000014073F9D3: mov     [rsp+1A10h+var_19A0], r14
 * 000000014073F9D8: test    rbx, rbx
 * 000000014073F9DB: jz      loc_14073FB12
 * 000000014073F9E1: cmp     dword ptr [r14], 0Bh
 * 000000014073F9E5: jnz     short loc_14073F9F4
 * 000000014073F9E7: cmp     [r15+688h], r12
 * 000000014073F9EE: jz      loc_14073FAE0
 * 000000014073F9F4: mov     edi, [r14+10h]
 * 000000014073F9F8: mov     rax, rbx
 * 000000014073F9FB: add     [r15+598h], edi
 * 000000014073FA02: mov     r9d, [r15+584h]
 * 000000014073FA09: mov     rdx, [r15+588h]
 * 000000014073FA10: lea     rcx, [rbx+rdi]
 * 000000014073FA14: cmp     rbx, rcx
 * 000000014073FA17: jnb     short loc_14073FA25
 * 000000014073FA19: prefetchnta byte ptr [rax]
 * 000000014073FA1C: add     rax, 40h ; '@'
 * 000000014073FA20: cmp     rax, rcx
 * 000000014073FA23: jb      short loc_14073FA19
 * 000000014073FA25: cmp     edi, 8
 * 000000014073FA28: jb      short loc_14073FA46
 * 000000014073FA2A: mov     r8, rdi
 * 000000014073FA2D: shr     r8, 3
 * 000000014073FA31: xor     rdx, [rbx]
 * 000000014073FA34: mov     ecx, r9d
 * 000000014073FA37: rol     rdx, cl
 * 000000014073FA3A: add     rbx, 8
 * 000000014073FA3E: add     edi, 0FFFFFFF8h
 * 000000014073FA41: sub     r8, r13
 * 000000014073FA44: jnz     short loc_14073FA31
 * 000000014073FA46: test    edi, edi
 * 000000014073FA48: jz      short loc_14073FA5E
 * 000000014073FA4A: movzx   eax, byte ptr [rbx]
 * 000000014073FA4D: mov     ecx, r9d
 * 000000014073FA50: xor     rdx, rax
 * 000000014073FA53: add     rbx, r13
 * 000000014073FA56: rol     rdx, cl
 * 000000014073FA59: add     edi, 0FFFFFFFFh
 * 000000014073FA5C: jnz     short loc_14073FA4A
 * 000000014073FA5E: mov     rax, rdx
 * 000000014073FA61: jmp     short loc_14073FA65
 * 000000014073FA63: xor     edx, eax
 * 000000014073FA65: shr     rax, 1Fh
 * 000000014073FA69: test    rax, rax
 * 000000014073FA6C: jnz     short loc_14073FA63
 * 000000014073FA6E: mov     eax, [r14+14h]
 * 000000014073FA72: btr     edx, 1Fh
 * 000000014073FA76: cmp     edx, eax
 * 000000014073FA78: jz      short loc_14073FAE0
 * 000000014073FA7A: cmp     [r15+608h], r12d
 * 000000014073FA81: jnz     short loc_14073FA93
 * 000000014073FA83: mov     ecx, edx
 * 000000014073FA85: xor     rcx, rax
 * 000000014073FA88: mov     rax, [r15+498h]
 * 000000014073FA8F: mov     [rax+18h], rcx
 * 000000014073FA93: mov     rcx, [r14+8]
 * 000000014073FA97: cmp     [r15+608h], r12d
 * 000000014073FA9E: jnz     short loc_14073FAE0
 * 000000014073FAA0: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014073FAAA: add     rax, r15
 * 000000014073FAAD: mov     [r15+610h], rax
 * 000000014073FAB4: mov     rax, 0B3B74BDEE4453415h
 * 000000014073FABE: add     rax, r14
 * 000000014073FAC1: mov     [r15+618h], rax
 * 000000014073FAC8: movsxd  rax, dword ptr [r14]
 * 000000014073FACB: mov     [r15+620h], rax
 * 000000014073FAD2: mov     [r15+628h], rcx
 * 000000014073FAD9: mov     [r15+608h], r13d
 * 000000014073FAE0: mov     rcx, [r14+18h]
 * 000000014073FAE4: call    qword ptr [r15+0F8h]
 * 000000014073FAEB: mov     [r14+8], r12
 * 000000014073FAEF: mov     [r14+10h], r12d
 * 000000014073FAF3: mov     rcx, [r15+588h]
 * 000000014073FAFA: mov     rax, rcx
 * 000000014073FAFD: jmp     short loc_14073FB01
 * 000000014073FAFF: xor     ecx, eax
 * 000000014073FB01: shr     rax, 1Fh
 * 000000014073FB05: test    rax, rax
 * 000000014073FB08: jnz     short loc_14073FAFF
 * 000000014073FB0A: btr     ecx, 1Fh
 * 000000014073FB0E: mov     [r14+14h], ecx
 * 000000014073FB12: rdtsc
 * 000000014073FB14: shl     rdx, 20h
 * 000000014073FB18: mov     rbx, 7010008004002001h
 * 000000014073FB22: or      rax, rdx
 * 000000014073FB25: mov     rcx, rax
 * 000000014073FB28: mov     rdx, rax
 * 000000014073FB2B: ror     rcx, 3
 * 000000014073FB2F: mov     rax, rbx
 * 000000014073FB32: xor     rdx, rcx
 * 000000014073FB35: mul     rdx
 * 000000014073FB38: mov     rcx, rdx
 * 000000014073FB3B: mov     [rbp+1910h+var_1218], rdx
 * 000000014073FB42: xor     rcx, rax
 * 000000014073FB45: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014073FB4F: mul     rcx
 * 000000014073FB52: shr     rdx, 1
 * 000000014073FB55: lea     rax, [rdx+rdx*2]
 * 000000014073FB59: cmp     rcx, rax
 * 000000014073FB5C: jnz     loc_14074026C
 * 000000014073FB62: mov     eax, [r15+690h]
 * 000000014073FB69: lea     r13, [r14+18h]
 * 000000014073FB6D: mov     r8d, [r15+580h]
 * 000000014073FB74: mov     ecx, 1
 * 000000014073FB79: and     eax, 10000000h
 * 000000014073FB7E: movzx   edi, cl
 * 000000014073FB81: cmovnz  edi, r12d
 * 000000014073FB85: rdtsc
 * 000000014073FB87: shl     rdx, 20h
 * 000000014073FB8B: or      rax, rdx
 * 000000014073FB8E: mov     rcx, rax
 * 000000014073FB91: mov     rdx, rax
 * 000000014073FB94: ror     rcx, 3
 * 000000014073FB98: mov     rax, rbx
 * 000000014073FB9B: xor     rdx, rcx
 * 000000014073FB9E: mul     rdx
 * 000000014073FBA1: mov     r14, rax
 * 000000014073FBA4: mov     [rbp+1910h+var_1208], rdx
 * 000000014073FBAB: xor     r14d, edx
 * 000000014073FBAE: and     r14d, 7FFh
 * 000000014073FBB5: rdtsc
 * 000000014073FBB7: shl     rdx, 20h
 * 000000014073FBBB: or      rax, rdx
 * 000000014073FBBE: mov     rcx, rax
 * 000000014073FBC1: mov     rdx, rax
 * 000000014073FBC4: ror     rcx, 3
 * 000000014073FBC8: mov     rax, rbx
 * 000000014073FBCB: xor     rdx, rcx
 * 000000014073FBCE: lea     ecx, [r14+1]
 * 000000014073FBD2: mul     rdx
 * 000000014073FBD5: xor     rax, rdx
 * 000000014073FBD8: mov     [rbp+1910h+var_11F8], rdx
 * 000000014073FBDF: xor     edx, edx
 * 000000014073FBE1: div     rcx
 * 000000014073FBE4: neg     dil
 * 000000014073FBE7: mov     r12, rdx
 * 000000014073FBEA: lea     edx, [r14+750h]
 * 000000014073FBF1: sbb     ecx, ecx
 * 000000014073FBF3: not     ecx
 * 000000014073FBF5: and     ecx, 200h
 * 000000014073FBFB: call    qword ptr [r15+0F0h]
 * 000000014073FC02: mov     r9, rax
 * 000000014073FC05: test    rax, rax
 * 000000014073FC08: jnz     short loc_14073FC20
 * 000000014073FC0A: lea     r10d, [rax+1]
 * 000000014073FC0E: add     [r15+710h], r10d
 * 000000014073FC15: xor     r12d, r12d
 * 000000014073FC18: mov     r14, rbx
 * 000000014073FC1B: jmp     loc_140740281
 * 000000014073FC20: mov     edi, r12d
 * 000000014073FC23: mov     rbx, rax
 * 000000014073FC26: mov     r11, 7010008004002001h
 * 000000014073FC30: cmp     r12d, 8
 * 000000014073FC34: jb      short loc_14073FC78
 * 000000014073FC36: mov     r8d, r12d
 * 000000014073FC39: mov     r10d, 1
 * 000000014073FC3F: shr     r8, 3
 * 000000014073FC43: rdtsc
 * 000000014073FC45: shl     rdx, 20h
 * 000000014073FC49: add     edi, 0FFFFFFF8h
 * 000000014073FC4C: or      rax, rdx
 * 000000014073FC4F: mov     rcx, rax
 * 000000014073FC52: mov     rdx, rax
 * 000000014073FC55: ror     rcx, 3
 * 000000014073FC59: mov     rax, r11
 * 000000014073FC5C: xor     rdx, rcx
 * 000000014073FC5F: mul     rdx
 * 000000014073FC62: mov     [rbp+1910h+var_11E8], rdx
 * 000000014073FC69: xor     rdx, rax
 * 000000014073FC6C: mov     [rbx], rdx
 * 000000014073FC6F: add     rbx, 8
 * 000000014073FC73: sub     r8, r10
 * 000000014073FC76: jnz     short loc_14073FC43
 * 000000014073FC78: mov     r10d, 1
 * 000000014073FC7E: test    edi, edi
 * 000000014073FC80: jz      short loc_14073FCBC
 * 000000014073FC82: rdtsc
 * 000000014073FC84: shl     rdx, 20h
 * 000000014073FC88: or      rax, rdx
 * 000000014073FC8B: mov     rcx, rax
 * 000000014073FC8E: mov     rdx, rax
 * 000000014073FC91: ror     rcx, 3
 * 000000014073FC95: mov     rax, r11
 * 000000014073FC98: xor     rdx, rcx
 * 000000014073FC9B: mul     rdx
 * 000000014073FC9E: mov     [rbp+1910h+var_11D8], rdx
 * 000000014073FCA5: xor     rdx, rax
 * 000000014073FCA8: or      r11d, 0FFFFFFFFh
 * 000000014073FCAC: mov     [rbx], dl
 * 000000014073FCAE: add     rbx, r10
 * 000000014073FCB1: shr     rdx, 8
 * 000000014073FCB5: add     edi, r11d
 * 000000014073FCB8: jnz     short loc_14073FCAC
 * 000000014073FCBA: jmp     short loc_14073FCC0
 * 000000014073FCBC: or      r11d, 0FFFFFFFFh
 * 000000014073FCC0: mov     edi, r12d
 * 000000014073FCC3: sub     r14d, r12d
 * 000000014073FCC6: add     rdi, r9
 * 000000014073FCC9: lea     rbx, [rdi+750h]
 * 000000014073FCD0: cmp     r14d, 8
 * 000000014073FCD4: jb      short loc_14073FD22
 * 000000014073FCD6: mov     r8d, r14d
 * 000000014073FCD9: mov     r15, 7010008004002001h
 * 000000014073FCE3: shr     r8, 3
 * 000000014073FCE7: rdtsc
 * 000000014073FCE9: shl     rdx, 20h
 * 000000014073FCED: add     r14d, 0FFFFFFF8h
 * 000000014073FCF1: or      rax, rdx
 * 000000014073FCF4: mov     rcx, rax
 * 000000014073FCF7: mov     rdx, rax
 * 000000014073FCFA: ror     rcx, 3
 * 000000014073FCFE: mov     rax, r15
 * 000000014073FD01: xor     rdx, rcx
 * 000000014073FD04: mul     rdx
 * 000000014073FD07: mov     [rbp+1910h+var_11C8], rdx
 * 000000014073FD0E: xor     rdx, rax
 * 000000014073FD11: mov     [rbx], rdx
 * 000000014073FD14: add     rbx, 8
 * 000000014073FD18: sub     r8, r10
 * 000000014073FD1B: jnz     short loc_14073FCE7
 * 000000014073FD1D: mov     r15, [rsp+1A10h+var_19B0]
 * 000000014073FD22: xor     r12d, r12d
 * 000000014073FD25: test    r14d, r14d
 * 000000014073FD28: jz      short loc_14073FD65
 * 000000014073FD2A: rdtsc
 * 000000014073FD2C: shl     rdx, 20h
 * 000000014073FD30: or      rax, rdx
 * 000000014073FD33: mov     rcx, rax
 * 000000014073FD36: mov     rdx, rax
 * 000000014073FD39: ror     rcx, 3
 * 000000014073FD3D: mov     rax, 7010008004002001h
 * 000000014073FD47: xor     rdx, rcx
 * 000000014073FD4A: mul     rdx
 * 000000014073FD4D: mov     [rbp+1910h+var_11B8], rdx
 * 000000014073FD54: xor     rdx, rax
 * 000000014073FD57: mov     [rbx], dl
 * 000000014073FD59: add     rbx, r10
 * 000000014073FD5C: shr     rdx, 8
 * 000000014073FD60: add     r14d, r11d
 * 000000014073FD63: jnz     short loc_14073FD57
 * 000000014073FD65: test    r13, r13
 * 000000014073FD68: jz      short loc_14073FD6E
 * 000000014073FD6A: mov     [r13+0], r9
 * 000000014073FD6E: test    rdi, rdi
 * 000000014073FD71: jz      loc_140740277
 * 000000014073FD77: mov     rax, [rsp+1A10h+var_19A0]
 * 000000014073FD7C: mov     r9d, 750h
 * 000000014073FD82: mov     ebx, r9d
 * 000000014073FD85: mov     rcx, r15
 * 000000014073FD88: mov     rdx, rdi
 * 000000014073FD8B: mov     r8d, 0EAh
 * 000000014073FD91: mov     [rax+8], rdi
 * 000000014073FD95: mov     [rax+10h], r9d
 * 000000014073FD99: mov     rax, [rcx]
 * 000000014073FD9C: add     ebx, 0FFFFFFF8h
 * 000000014073FD9F: mov     [rdx], rax
 * 000000014073FDA2: add     rcx, 8
 * 000000014073FDA6: add     rdx, 8
 * 000000014073FDAA: sub     r8, r10
 * 000000014073FDAD: jnz     short loc_14073FD99
 * 000000014073FDAF: test    ebx, ebx
 * 000000014073FDB1: jz      short loc_14073FDC2
 * 000000014073FDB3: mov     al, [rcx]
 * 000000014073FDB5: add     rcx, r10
 * 000000014073FDB8: mov     [rdx], al
 * 000000014073FDBA: add     rdx, r10
 * 000000014073FDBD: add     ebx, r11d
 * 000000014073FDC0: jnz     short loc_14073FDB3
 * 000000014073FDC2: bts     dword ptr [rdi+690h], 13h
 * 000000014073FDCA: mov     eax, r9d
 * 000000014073FDCD: mov     [rdi+554h], r9d
 * 000000014073FDD4: mov     [rdi+578h], r9d
 * 000000014073FDDB: mov     r11d, [rdi+690h]
 * 000000014073FDE2: and     r11d, 0FFFFFFFDh
 * 000000014073FDE6: lea     r14d, [rax-0C8h]
 * 000000014073FDED: mov     [rdi+690h], r11d
 * 000000014073FDF4: mov     ecx, r11d
 * 000000014073FDF7: shr     ecx, 13h
 * 000000014073FDFA: and     ecx, r10d
 * 000000014073FDFD: mov     dword ptr [rbp+1910h+arg_18], ecx
 * 000000014073FE03: mov     ecx, r11d
 * 000000014073FE06: shr     ecx, 9
 * 000000014073FE09: and     ecx, r10d
 * 000000014073FE0C: shr     r11d, 8
 * 000000014073FE10: mov     dword ptr [rsp+1A10h+Src], ecx
 * 000000014073FE14: and     r11d, r10d
 * 000000014073FE17: mov     rcx, [rdi+400h]
 * 000000014073FE1E: mov     [rsp+1A10h+var_19D0], rcx
 * 000000014073FE23: mov     rcx, [rdi+4C8h]
 * 000000014073FE2A: shr     r14d, 3
 * 000000014073FE2E: mov     [rsp+78h], rcx
 * 000000014073FE33: mov     [rdi+0C4h], r14d
 * 000000014073FE3A: rdtsc
 * 000000014073FE3C: mov     r13, [rdi+528h]
 * 000000014073FE43: lea     r10, [rdi+508h]
 * 000000014073FE4A: shl     rdx, 20h
 * 000000014073FE4E: lea     rbx, [rbp+1910h+var_B98]
 * 000000014073FE55: or      rax, rdx
 * 000000014073FE58: mov     r8d, 20h ; ' '
 * 000000014073FE5E: mov     rcx, rax
 * 000000014073FE61: mov     rdx, rax
 * 000000014073FE64: ror     rcx, 3
 * 000000014073FE68: mov     rax, 7010008004002001h
 * 000000014073FE72: xor     rdx, rcx
 * 000000014073FE75: mov     rcx, r10
 * 000000014073FE78: mul     rdx
 * 000000014073FE7B: lea     r15d, [r8-1Fh]
 * 000000014073FE7F: mov     r12, rdx
 * 000000014073FE82: mov     [rbp+1910h+var_11A8], rdx
 * 000000014073FE89: xor     r12, rax
 * 000000014073FE8C: lea     edx, [r8-1Ch]
 * 000000014073FE90: mov     eax, [rdi+598h]
 * 000000014073FE96: mov     r9d, edx
 * 000000014073FE99: mov     dword ptr [rsp+1A10h+var_19B8], eax
 * 000000014073FE9D: mov     rax, [rcx]
 * 000000014073FEA0: add     r8d, 0FFFFFFF8h
 * 000000014073FEA4: mov     [rbx], rax
 * 000000014073FEA7: add     rcx, 8
 * 000000014073FEAB: add     rbx, 8
 * 000000014073FEAF: sub     r9, r15
 * 000000014073FEB2: jnz     short loc_14073FE9D
 * 000000014073FEB4: mov     r15, [rsp+1A10h+var_19B0]
 * 000000014073FEB9: test    r8d, r8d
 * 000000014073FEBC: jz      short loc_14073FED7
 * 000000014073FEBE: mov     r9d, 1
 * 000000014073FEC4: mov     al, [rcx]
 * 000000014073FEC6: add     rcx, r9
 * 000000014073FEC9: mov     [rbx], al
 * 000000014073FECB: add     rbx, r9
 * 000000014073FECE: add     r8d, 0FFFFFFFFh
 * 000000014073FED2: jnz     short loc_14073FEC4
 * 000000014073FED4: xor     r9d, r9d
 * 000000014073FED7: mov     ecx, 20h ; ' '
 * 000000014073FEDC: mov     [rdi+528h], r9
 * 000000014073FEE3: mov     [rdi+598h], r9d
 * 000000014073FEEA: mov     rax, r10
 * 000000014073FEED: lea     ebx, [rcx-1Fh]
 * 000000014073FEF0: mov     [rax], r9
 * 000000014073FEF3: add     ecx, 0FFFFFFF8h
 * 000000014073FEF6: add     rax, 8
 * 000000014073FEFA: sub     rdx, rbx
 * 000000014073FEFD: jnz     short loc_14073FEF0
 * 000000014073FEFF: test    ecx, ecx
 * 000000014073FF01: jz      short loc_14073FF0E
 * 000000014073FF03: mov     [rax], r9b
 * 000000014073FF06: add     rax, rbx
 * 000000014073FF09: add     ecx, 0FFFFFFFFh
 * 000000014073FF0C: jnz     short loc_14073FF03
 * 000000014073FF0E: mov     eax, [rdi+554h]
 * 000000014073FF14: mov     r8, rdi
 * 000000014073FF17: add     [rdi+598h], eax
 * 000000014073FF1D: mov     rax, rdi
 * 000000014073FF20: mov     edx, [rdi+554h]
 * 000000014073FF26: mov     r9d, [rdi+584h]
 * 000000014073FF2D: mov     rbx, [rdi+588h]
 * 000000014073FF34: lea     rcx, [rdi+rdx]
 * 000000014073FF38: cmp     rdi, rcx
 * 000000014073FF3B: jnb     short loc_14073FF49
 * 000000014073FF3D: prefetchnta byte ptr [rax]
 * 000000014073FF40: add     rax, 40h ; '@'
 * 000000014073FF44: cmp     rax, rcx
 * 000000014073FF47: jb      short loc_14073FF3D
 * 000000014073FF49: cmp     edx, 8
 * 000000014073FF4C: jb      short loc_14073FF75
 * 000000014073FF4E: mov     rax, rdx
 * 000000014073FF51: mov     r15d, 1
 * 000000014073FF57: shr     rax, 3
 * 000000014073FF5B: xor     rbx, [r8]
 * 000000014073FF5E: mov     ecx, r9d
 * 000000014073FF61: rol     rbx, cl
 * 000000014073FF64: add     r8, 8
 * 000000014073FF68: add     edx, 0FFFFFFF8h
 * 000000014073FF6B: sub     rax, r15
 * 000000014073FF6E: jnz     short loc_14073FF5B
 * 000000014073FF70: mov     r15, [rsp+1A10h+var_19B0]
 * 000000014073FF75: test    edx, edx
 * 000000014073FF77: jz      short loc_14073FF99
 * 000000014073FF79: mov     r15d, 1
 * 000000014073FF7F: movzx   eax, byte ptr [r8]
 * 000000014073FF83: mov     ecx, r9d
 * 000000014073FF86: xor     rbx, rax
 * 000000014073FF89: add     r8, r15
 * 000000014073FF8C: rol     rbx, cl
 * 000000014073FF8F: add     edx, 0FFFFFFFFh
 * 000000014073FF92: jnz     short loc_14073FF7F
 * 000000014073FF94: mov     r15, [rsp+1A10h+var_19B0]
 * 000000014073FF99: mov     eax, dword ptr [rsp+1A10h+var_19B8]
 * 000000014073FF9D: lea     rcx, [rbp+1910h+var_B98]
 * 000000014073FFA4: mov     edx, 20h ; ' '
 * 000000014073FFA9: mov     [rdi+528h], r13
 * 000000014073FFB0: add     [rdi+598h], eax
 * 000000014073FFB6: lea     r9d, [rdx-1Ch]
 * 000000014073FFBA: mov     r8d, r9d
 * 000000014073FFBD: lea     r13d, [rdx-1Fh]
 * 000000014073FFC1: mov     rax, [rcx]
 * 000000014073FFC4: add     edx, 0FFFFFFF8h
 * 000000014073FFC7: mov     [r10], rax
 * 000000014073FFCA: add     rcx, 8
 * 000000014073FFCE: add     r10, 8
 * 000000014073FFD2: sub     r8, r13
 * 000000014073FFD5: jnz     short loc_14073FFC1
 * 000000014073FFD7: test    edx, edx
 * 000000014073FFD9: jz      short loc_14073FFEB
 * 000000014073FFDB: mov     al, [rcx]
 * 000000014073FFDD: add     rcx, r13
 * 000000014073FFE0: mov     [r10], al
 * 000000014073FFE3: add     r10, r13
 * 000000014073FFE6: add     edx, 0FFFFFFFFh
 * 000000014073FFE9: jnz     short loc_14073FFDB
 * 000000014073FFEB: mov     [rdi+528h], rbx
 * 000000014073FFF2: mov     r10d, 1
 * 000000014073FFF8: test    dword ptr [rdi+690h], 40000000h
 * 0000000140740002: jnz     loc_1407401CA
 * 0000000140740008: mov     rcx, rdi
 * 000000014074000B: lea     r13d, [r10+18h]
 * 000000014074000F: mov     edx, r8d
 * 0000000140740012: xor     [rcx], r12
 * 0000000140740015: add     edx, r10d
 * 0000000140740018: movsxd  rax, edx
 * 000000014074001B: lea     rcx, [rcx+8]
 * 000000014074001F: cmp     rax, r13
 * 0000000140740022: jb      short loc_140740012
 * 0000000140740024: test    r14d, r14d
 * 0000000140740027: jz      short loc_140740045
 * 0000000140740029: mov     edx, r14d
 * 000000014074002C: dec     rdx
 * 000000014074002F: lea     rdx, [rcx+rdx*8]
 * 0000000140740033: xor     [rdx], r12
 * 0000000140740036: mov     ecx, r14d
 * 0000000140740039: ror     r12, cl
 * 000000014074003C: lea     rdx, [rdx-8]
 * 0000000140740040: sub     r14d, r10d
 * 0000000140740043: jnz     short loc_140740033
 * 0000000140740045: xor     r12d, r12d
 * 0000000140740048: cmp     dword ptr [rbp+1910h+arg_18], r12d
 * 000000014074004F: jz      short loc_1407400A2
 * 0000000140740051: rdtsc
 * 0000000140740053: shl     rdx, 20h
 * 0000000140740057: mov     r14, 7010008004002001h
 * 0000000140740061: or      rax, rdx
 * 0000000140740064: mov     rcx, rax
 * 0000000140740067: mov     rdx, rax
 * 000000014074006A: ror     rcx, 3
 * 000000014074006E: mov     rax, r14
 * 0000000140740071: xor     rdx, rcx
 * 0000000140740074: mul     rdx
 * 0000000140740077: mov     rcx, rdx
 * 000000014074007A: mov     [rbp+1910h+var_1198], rdx
 * 0000000140740081: xor     rcx, rax
 * 0000000140740084: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014074008E: mul     rcx
 * 0000000140740091: shr     rdx, 1
 * 0000000140740094: lea     rax, [rdx+rdx*2]
 * 0000000140740098: cmp     rcx, rax
 * 000000014074009B: jz      short loc_1407400AB
 * 000000014074009D: jmp     loc_1407401D7
 * 00000001407400A2: test    r11d, r11d
 * 00000001407400A5: jnz     loc_1407401CD
 * 00000001407400AB: mov     r14d, dword ptr [rsp+1A10h+Src]
 * 00000001407400B0: mov     eax, 0Fh
 * 00000001407400B5: mov     r15, [rsp+78h]
 * 00000001407400BA: mov     ecx, edi
 * 00000001407400BC: mov     [rbp+1910h+var_D4D], r10b
 * 00000001407400C3: mov     r8, rdi
 * 00000001407400C6: mov     r10d, r12d
 * 00000001407400C9: mov     [rbp+1910h+var_D50], r12b
 * 00000001407400D0: mov     [rbp+1910h+var_D4A], r9b
 * 00000001407400D7: mov     r11, r12
 * 00000001407400DA: mov     r12, [rsp+1A10h+var_19D0]
 * 00000001407400DF: mov     r9, rdi
 * 00000001407400E2: mov     [rbp+1910h+var_D4E], al
 * 00000001407400E8: ror     r8, cl
 * 00000001407400EB: mov     [rbp+1910h+var_D4B], 2
 * 00000001407400F2: mov     [rbp+1910h+var_D48], 3
 * 00000001407400F9: mov     [rbp+1910h+var_D47], 5
 * 0000000140740100: mov     [rbp+1910h+var_D44], 6
 * 0000000140740107: mov     [rbp+1910h+var_D49], 7
 * 000000014074010E: mov     [rbp+1910h+var_D43], 8
 * 0000000140740115: mov     [rbp+1910h+var_D46], 9
 * 000000014074011C: mov     [rbp+1910h+var_D42], 0Ah
 * 0000000140740123: mov     [rbp+1910h+var_D4C], 0Bh
 * 000000014074012A: mov     [rbp+1910h+var_D4F], 0Ch
 * 0000000140740131: mov     [rbp+1910h+var_D41], 0Dh
 * 0000000140740138: mov     [rbp+1910h+var_D45], 0Eh
 * 000000014074013F: mov     rdx, [r9]
 * 0000000140740142: mov     ebx, 10h
 * 0000000140740147: lea     esi, [rbx-0Fh]
 * 000000014074014A: movzx   eax, byte ptr [r9]
 * 000000014074014E: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 0000000140740152: and     eax, 0Fh
 * 0000000140740155: movzx   ecx, [rbp+rax+1910h+var_D50]
 * 000000014074015D: or      rdx, rcx
 * 0000000140740160: ror     rdx, 4
 * 0000000140740164: mov     [r9], rdx
 * 0000000140740167: sub     rbx, rsi
 * 000000014074016A: jnz     short loc_14074014A
 * 000000014074016C: sub     rdx, r11
 * 000000014074016F: mov     [r9], rdx
 * 0000000140740172: test    r14d, r14d
 * 0000000140740175: jnz     short loc_14074018B
 * 0000000140740177: xor     rdx, r12
 * 000000014074017A: mov     ecx, r15d
 * 000000014074017D: bswap   rdx
 * 0000000140740180: xor     rdx, r8
 * 0000000140740183: ror     rdx, cl
 * 0000000140740186: xor     rdx, r15
 * 0000000140740189: jmp     short loc_14074018E
 * 000000014074018B: xor     rdx, r8
 * 000000014074018E: mov     [r9], rdx
 * 0000000140740191: mov     ecx, edx
 * 0000000140740193: mov     edx, 0C8h
 * 0000000140740198: not     ecx
 * 000000014074019A: sub     edx, r10d
 * 000000014074019D: add     r11, rdi
 * 00000001407401A0: imul    edx, r10d
 * 00000001407401A4: inc     r10d
 * 00000001407401A7: ror     rdx, cl
 * 00000001407401AA: mov     ecx, [r9]
 * 00000001407401AD: xor     r8, rdx
 * 00000001407401B0: rol     r8, cl
 * 00000001407401B3: add     r9, 8
 * 00000001407401B7: add     r8, rdi
 * 00000001407401BA: cmp     r10d, r13d
 * 00000001407401BD: jb      short loc_14074013F
 * 00000001407401BF: mov     r15, [rsp+1A10h+var_19B0]
 * 00000001407401C4: mov     r10d, 1
 * 00000001407401CA: xor     r12d, r12d
 * 00000001407401CD: mov     r14, 7010008004002001h
 * 00000001407401D7: mov     r9, [rsp+1A10h+var_19A0]
 * 00000001407401DC: mov     rdi, [r9+8]
 * 00000001407401E0: mov     ebx, [r9+10h]
 * 00000001407401E4: mov     rax, rdi
 * 00000001407401E7: add     [r15+598h], ebx
 * 00000001407401EE: mov     r8d, [r15+584h]
 * 00000001407401F5: mov     rdx, [r15+588h]
 * 00000001407401FC: lea     rcx, [rdi+rbx]
 * 0000000140740200: cmp     rdi, rcx
 * 0000000140740203: jnb     short loc_140740211
 * 0000000140740205: prefetchnta byte ptr [rax]
 * 0000000140740208: add     rax, 40h ; '@'
 * 000000014074020C: cmp     rax, rcx
 * 000000014074020F: jb      short loc_140740205
 * 0000000140740211: cmp     ebx, 8
 * 0000000140740214: jb      short loc_140740232
 * 0000000140740216: mov     rax, rbx
 * 0000000140740219: shr     rax, 3
 * 000000014074021D: xor     rdx, [rdi]
 * 0000000140740220: mov     ecx, r8d
 * 0000000140740223: rol     rdx, cl
 * 0000000140740226: add     rdi, 8
 * 000000014074022A: add     ebx, 0FFFFFFF8h
 * 000000014074022D: sub     rax, r10
 * 0000000140740230: jnz     short loc_14074021D
 * 0000000140740232: test    ebx, ebx
 * 0000000140740234: jz      short loc_14074024A
 * 0000000140740236: movzx   eax, byte ptr [rdi]
 * 0000000140740239: mov     ecx, r8d
 * 000000014074023C: xor     rdx, rax
 * 000000014074023F: add     rdi, r10
 * 0000000140740242: rol     rdx, cl
 * 0000000140740245: add     ebx, 0FFFFFFFFh
 * 0000000140740248: jnz     short loc_140740236
 * 000000014074024A: mov     rax, rdx
 * 000000014074024D: jmp     short loc_140740251
 * 000000014074024F: xor     edx, eax
 * 0000000140740251: shr     rax, 1Fh
 * 0000000140740255: test    rax, rax
 * 0000000140740258: jnz     short loc_14074024F
 * 000000014074025A: btr     edx, 1Fh
 * 000000014074025E: mov     [r9+14h], edx
 * 0000000140740262: jmp     short loc_140740281
 * 0000000140740264: mov     r10d, 1
 * 000000014074026A: jmp     short loc_140740281
 * 000000014074026C: mov     r10d, 1
 * 0000000140740272: jmp     loc_14073FC18
 * 0000000140740277: mov     r14, 7010008004002001h
 * 0000000140740281: bts     dword ptr [r15+690h], 15h
 * 000000014074028A: lea     rcx, [r15+4F0h]
 * 0000000140740291: mov     r9d, [r15+0C4h]
 * 0000000140740298: mov     ebx, 4F0h
 * 000000014074029D: mov     [r15+0C4h], r12d
 * 00000001407402A4: mov     rdi, r15
 * 00000001407402A7: add     [r15+598h], ebx
 * 00000001407402AE: mov     rax, r15
 * 00000001407402B1: mov     r8d, [r15+584h]
 * 00000001407402B8: mov     rdx, [r15+588h]
 * 00000001407402BF: cmp     r15, rcx
 * 00000001407402C2: jnb     short loc_1407402D0
 * 00000001407402C4: prefetchnta byte ptr [rax]
 * 00000001407402C7: add     rax, 40h ; '@'
 * 00000001407402CB: cmp     rax, rcx
 * 00000001407402CE: jb      short loc_1407402C4
 * 00000001407402D0: mov     eax, 9Eh
 * 00000001407402D5: xor     rdx, [rdi]
 * 00000001407402D8: mov     ecx, r8d
 * 00000001407402DB: rol     rdx, cl
 * 00000001407402DE: add     rdi, 8
 * 00000001407402E2: add     ebx, 0FFFFFFF8h
 * 00000001407402E5: sub     rax, r10
 * 00000001407402E8: jnz     short loc_1407402D5
 * 00000001407402EA: test    ebx, ebx
 * 00000001407402EC: jz      short loc_140740302
 * 00000001407402EE: movzx   eax, byte ptr [rdi]
 * 00000001407402F1: mov     ecx, r8d
 * 00000001407402F4: xor     rdx, rax
 * 00000001407402F7: add     rdi, r10
 * 00000001407402FA: rol     rdx, cl
 * 00000001407402FD: add     ebx, 0FFFFFFFFh
 * 0000000140740300: jnz     short loc_1407402EE
 * 0000000140740302: mov     [r15+0C4h], r9d
 * 0000000140740309: lea     rcx, [rbp+1910h+var_790]
 * 0000000140740310: mov     [r15+718h], rdx
 * 0000000140740317: mov     rax, r15
 * 000000014074031A: mov     [r15+598h], r12d
 * 0000000140740321: mov     edx, 0Eh
 * 0000000140740326: mov     [r15+710h], r12d
 * 000000014074032D: mov     r9, [r15+538h]
 * 0000000140740334: mov     [rsp+1A10h+var_19A0], r9
 * 0000000140740339: lea     ebx, [rdx+72h]
 * 000000014074033C: movups  xmm0, xmmword ptr [rax]
 * 000000014074033F: movups  xmmword ptr [rcx], xmm0
 * 0000000140740342: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000140740346: movups  xmmword ptr [rcx+10h], xmm1
 * 000000014074034A: movups  xmm0, xmmword ptr [rax+20h]
 * 000000014074034E: movups  xmmword ptr [rcx+20h], xmm0
 * 0000000140740352: movups  xmm1, xmmword ptr [rax+30h]
 * 0000000140740356: movups  xmmword ptr [rcx+30h], xmm1
 * 000000014074035A: movups  xmm0, xmmword ptr [rax+40h]
 * 000000014074035E: movups  xmmword ptr [rcx+40h], xmm0
 * 0000000140740362: movups  xmm1, xmmword ptr [rax+50h]
 * 0000000140740366: movups  xmmword ptr [rcx+50h], xmm1
 * 000000014074036A: movups  xmm0, xmmword ptr [rax+60h]
 * 000000014074036E: movups  xmmword ptr [rcx+60h], xmm0
 * 0000000140740372: add     rcx, rbx
 * 0000000140740375: movups  xmm1, xmmword ptr [rax+70h]
 * 0000000140740379: add     rax, rbx
 * 000000014074037C: movups  xmmword ptr [rcx-10h], xmm1
 * 0000000140740380: sub     rdx, 1
 * 0000000140740384: jnz     short loc_14074033C
 * 0000000140740386: movups  xmm0, xmmword ptr [rax]
 * 0000000140740389: movups  xmmword ptr [rcx], xmm0
 * 000000014074038C: movups  xmm1, xmmword ptr [rax+10h]
 * 0000000140740390: movups  xmmword ptr [rcx+10h], xmm1
 * 0000000140740394: movups  xmm0, xmmword ptr [rax+20h]
 * 0000000140740398: movups  xmmword ptr [rcx+20h], xmm0
 * 000000014074039C: movups  xmm1, xmmword ptr [rax+30h]
 * 00000001407403A0: movups  xmmword ptr [rcx+30h], xmm1
 * 00000001407403A4: movups  xmm0, xmmword ptr [rax+40h]
 * 00000001407403A8: movups  xmmword ptr [rcx+40h], xmm0
 * 00000001407403AC: mov     r12d, [r15+690h]
 * 00000001407403B3: test    r12b, 2
 * 00000001407403B7: jz      short loc_1407403C2
 * 00000001407403B9: mov     eax, [r15+554h]
 * 00000001407403C0: jmp     short loc_1407403C9
 * 00000001407403C2: mov     eax, [r15+578h]
 * 00000001407403C9: mov     ecx, r12d
 * 00000001407403CC: lea     r11d, [rax-0C8h]
 * 00000001407403D3: shr     ecx, 13h
 * 00000001407403D6: and     ecx, r10d
 * 00000001407403D9: mov     dword ptr [rbp+1910h+arg_18], ecx
 * 00000001407403DF: mov     ecx, r12d
 * 00000001407403E2: shr     ecx, 9
 * 00000001407403E5: and     ecx, r10d
 * 00000001407403E8: shr     r12d, 8
 * 00000001407403EC: mov     dword ptr [rsp+1A10h+Src], ecx
 * 00000001407403F0: and     r12d, r10d
 * 00000001407403F3: mov     rcx, [r15+400h]
 * 00000001407403FA: mov     [rsp+1A10h+var_19D0], rcx
 * 00000001407403FF: mov     rcx, [r15+4C8h]
 * 0000000140740406: shr     r11d, 3
 * 000000014074040A: mov     [rsp+78h], rcx
 * 000000014074040F: mov     [r15+0C4h], r11d
 * 0000000140740416: rdtsc
 * 0000000140740418: mov     r13, [r15+528h]
 * 000000014074041F: lea     r9, [r15+508h]
 * 0000000140740426: shl     rdx, 20h
 * 000000014074042A: lea     rbx, [rbp+1910h+var_CD8]
 * 0000000140740431: or      rax, rdx
 * 0000000140740434: mov     rcx, rax
 * 0000000140740437: mov     rdx, rax
 * 000000014074043A: ror     rcx, 3
 * 000000014074043E: mov     rax, r14
 * 0000000140740441: xor     rdx, rcx
 * 0000000140740444: mov     rcx, r9
 * 0000000140740447: mul     rdx
 * 000000014074044A: mov     r14, rdx
 * 000000014074044D: mov     [rbp+1910h+var_1188], rdx
 * 0000000140740454: mov     edx, 20h ; ' '
 * 0000000140740459: xor     r14, rax
 * 000000014074045C: mov     eax, [r15+598h]
 * 0000000140740463: mov     edi, edx
 * 0000000140740465: mov     dword ptr [rsp+1A10h+var_19B8], eax
 * 0000000140740469: lea     r8d, [rdx-1Ch]
 * 000000014074046D: mov     rax, [rcx]
 * 0000000140740470: add     edi, 0FFFFFFF8h
 * 0000000140740473: mov     [rbx], rax
 * 0000000140740476: add     rcx, 8
 * 000000014074047A: add     rbx, 8
 * 000000014074047E: sub     r8, r10
 * 0000000140740481: jnz     short loc_14074046D
 * 0000000140740483: xor     r10d, r10d
 * 0000000140740486: test    edi, edi
 * 0000000140740488: jz      short loc_1407404A0
 * 000000014074048A: lea     r10d, [r8+1]
 * 000000014074048E: mov     al, [rcx]
 * 0000000140740490: add     rcx, r10
 * 0000000140740493: mov     [rbx], al
 * 0000000140740495: add     rbx, r10
 * 0000000140740498: add     edi, 0FFFFFFFFh
 * 000000014074049B: jnz     short loc_14074048E
 * 000000014074049D: xor     r10d, r10d
 * 00000001407404A0: mov     r8d, 4
 * 00000001407404A6: mov     [r15+528h], r10
 * 00000001407404AD: mov     ecx, edx
 * 00000001407404AF: mov     [r15+598h], r10d
 * 00000001407404B6: mov     rax, r9
 * 00000001407404B9: mov     edx, r8d
 * 00000001407404BC: lea     ebx, [r8-3]
 * 00000001407404C0: mov     [rax], r10
 * 00000001407404C3: add     ecx, 0FFFFFFF8h
 * 00000001407404C6: add     rax, 8
 * 00000001407404CA: sub     rdx, rbx
 * 00000001407404CD: jnz     short loc_1407404C0
 * 00000001407404CF: test    ecx, ecx
 * 00000001407404D1: jz      short loc_1407404DE
 * 00000001407404D3: mov     [rax], r10b
 * 00000001407404D6: add     rax, rbx
 * 00000001407404D9: add     ecx, 0FFFFFFFFh
 * 00000001407404DC: jnz     short loc_1407404D3
 * 00000001407404DE: mov     eax, [r15+554h]
 * 00000001407404E5: mov     rdi, r15
 * 00000001407404E8: add     [r15+598h], eax
 * 00000001407404EF: mov     rax, r15
 * 00000001407404F2: mov     edx, [r15+554h]
 * 00000001407404F9: mov     r10d, [r15+584h]
 * 0000000140740500: mov     rbx, [r15+588h]
 * 0000000140740507: lea     rcx, [r15+rdx]
 * 000000014074050B: cmp     r15, rcx
 * 000000014074050E: jnb     short loc_14074051C
 * 0000000140740510: prefetchnta byte ptr [rax]
 * 0000000140740513: add     rax, 40h ; '@'
 * 0000000140740517: cmp     rax, rcx
 * 000000014074051A: jb      short loc_140740510
 * 000000014074051C: cmp     edx, 8
 * 000000014074051F: jb      short loc_14074054E
 * 0000000140740521: mov     r8, rdx
 * 0000000140740524: mov     r15d, 1
 * 000000014074052A: shr     r8, 3
 * 000000014074052E: xor     rbx, [rdi]
 * 0000000140740531: mov     ecx, r10d
 * 0000000140740534: rol     rbx, cl
 * 0000000140740537: add     rdi, 8
 * 000000014074053B: add     edx, 0FFFFFFF8h
 * 000000014074053E: sub     r8, r15
 * 0000000140740541: jnz     short loc_14074052E
 * 0000000140740543: mov     r15, [rsp+1A10h+var_19B0]
 * 0000000140740548: mov     r8d, 4
 * 000000014074054E: test    edx, edx
 * 0000000140740550: jz      short loc_140740571
 * 0000000140740552: mov     r15d, 1
 * 0000000140740558: movzx   eax, byte ptr [rdi]
 * 000000014074055B: mov     ecx, r10d
 * 000000014074055E: xor     rbx, rax
 * 0000000140740561: add     rdi, r15
 * 0000000140740564: rol     rbx, cl
 * 0000000140740567: add     edx, 0FFFFFFFFh
 * 000000014074056A: jnz     short loc_140740558
 * 000000014074056C: mov     r15, [rsp+1A10h+var_19B0]
 * 0000000140740571: mov     eax, dword ptr [rsp+1A10h+var_19B8]
 * 0000000140740575: lea     rcx, [rbp+1910h+var_CD8]
 * 000000014074057C: mov     [r15+528h], r13
 * 0000000140740583: mov     rdi, r8
 * 0000000140740586: add     [r15+598h], eax
 * 000000014074058D: mov     r13d, 20h ; ' '
 * 0000000140740593: mov     edx, r13d
 * 0000000140740596: lea     r10d, [r13-1Fh]
 * 000000014074059A: mov     rax, [rcx]
 * 000000014074059D: add     edx, 0FFFFFFF8h
 * 00000001407405A0: mov     [r9], rax
 * 00000001407405A3: add     rcx, 8
 * 00000001407405A7: add     r9, 8
 * 00000001407405AB: sub     rdi, r10
 * 00000001407405AE: jnz     short loc_14074059A
 * 00000001407405B0: test    edx, edx
 * 00000001407405B2: jz      short loc_1407405C4
 * 00000001407405B4: mov     al, [rcx]
 * 00000001407405B6: add     rcx, r10
 * 00000001407405B9: mov     [r9], al
 * 00000001407405BC: add     r9, r10
 * 00000001407405BF: add     edx, 0FFFFFFFFh
 * 00000001407405C2: jnz     short loc_1407405B4
 * 00000001407405C4: mov     [r15+528h], rbx
 * 00000001407405CB: test    dword ptr [r15+690h], 40000000h
 * 00000001407405D6: jnz     loc_1407407B3
 * 00000001407405DC: mov     rcx, r15
 * 00000001407405DF: mov     edx, edi
 * 00000001407405E1: mov     r13d, 19h
 * 00000001407405E7: xor     [rcx], r14
 * 00000001407405EA: add     edx, r10d
 * 00000001407405ED: movsxd  rax, edx
 * 00000001407405F0: lea     rcx, [rcx+8]
 * 00000001407405F4: cmp     rax, r13
 * 00000001407405F7: jb      short loc_1407405E7
 * 00000001407405F9: test    r11d, r11d
 * 00000001407405FC: jz      short loc_14074061A
 * 00000001407405FE: mov     edx, r11d
 * 0000000140740601: dec     rdx
 * 0000000140740604: lea     rdx, [rcx+rdx*8]
 * 0000000140740608: xor     [rdx], r14
 * 000000014074060B: mov     ecx, r11d
 * 000000014074060E: ror     r14, cl
 * 0000000140740611: lea     rdx, [rdx-8]
 * 0000000140740615: sub     r11d, r10d
 * 0000000140740618: jnz     short loc_140740608
 * 000000014074061A: xor     r14d, r14d
 * 000000014074061D: cmp     dword ptr [rbp+1910h+arg_18], r14d
 * 0000000140740624: jz      short loc_140740691
 * 0000000140740626: rdtsc
 * 0000000140740628: shl     rdx, 20h
 * 000000014074062C: or      rax, rdx
 * 000000014074062F: mov     rcx, rax
 * 0000000140740632: mov     rdx, rax
 * 0000000140740635: ror     rcx, 3
 * 0000000140740639: mov     rax, 7010008004002001h
 * 0000000140740643: xor     rdx, rcx
 * 0000000140740646: mul     rdx
 * 0000000140740649: mov     rcx, rdx
 * 000000014074064C: mov     [rbp+1910h+var_1178], rdx
 * 0000000140740653: xor     rcx, rax
 * 0000000140740656: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140740660: mul     rcx
 * 0000000140740663: shr     rdx, 1
 * 0000000140740666: lea     rax, [rdx+rdx*2]
 * 000000014074066A: cmp     rcx, rax
 * 000000014074066D: jz      short loc_140740696
 * 000000014074066F: mov     r12, r10
 * 0000000140740672: mov     r13d, 20h ; ' '
 * 0000000140740678: mov     rcx, [rbp+1910h+Timer]; Timer
 * 000000014074067C: call    KeInitializeTimer
 * 0000000140740681: cli
 * 0000000140740682: cmp     byte ptr cs:KdDebuggerNotPresent, r14b
 * 0000000140740689: jnz     loc_1407407BE
 * 000000014074068F: jmp     short loc_14074068F
 * 0000000140740691: test    r12d, r12d
 * 0000000140740694: jnz     short loc_14074066F
 * 0000000140740696: mov     r11d, dword ptr [rsp+1A10h+Src]
 * 000000014074069B: mov     eax, 0Fh
 * 00000001407406A0: mov     rsi, [rsp+78h]
 * 00000001407406A5: mov     ecx, r15d
 * 00000001407406A8: mov     [rbp+1910h+var_D2D], r10b
 * 00000001407406AF: mov     rdi, r15
 * 00000001407406B2: mov     [rbp+1910h+var_D30], r14b
 * 00000001407406B9: mov     r9d, r14d
 * 00000001407406BC: mov     [rbp+1910h+var_D2A], r8b
 * 00000001407406C3: lea     r12d, [rax-0Eh]
 * 00000001407406C7: mov     r10, r14
 * 00000001407406CA: mov     [rbp+1910h+var_D2B], 2
 * 00000001407406D1: mov     r14, [rsp+1A10h+var_19D0]
 * 00000001407406D6: mov     r8, r15
 * 00000001407406D9: mov     [rbp+1910h+var_D28], 3
 * 00000001407406E0: mov     [rbp+1910h+var_D27], 5
 * 00000001407406E7: mov     [rbp+1910h+var_D24], 6
 * 00000001407406EE: mov     [rbp+1910h+var_D29], 7
 * 00000001407406F5: mov     [rbp+1910h+var_D23], 8
 * 00000001407406FC: mov     [rbp+1910h+var_D26], 9
 * 0000000140740703: mov     [rbp+1910h+var_D22], 0Ah
 * 000000014074070A: mov     [rbp+1910h+var_D2C], 0Bh
 * 0000000140740711: mov     [rbp+1910h+var_D2F], 0Ch
 * 0000000140740718: mov     [rbp+1910h+var_D21], 0Dh
 * 000000014074071F: mov     [rbp+1910h+var_D25], 0Eh
 * 0000000140740726: mov     [rbp+1910h+var_D2E], al
 * 000000014074072C: ror     rdi, cl
 * 000000014074072F: mov     rdx, [r8]
 * 0000000140740732: mov     ebx, 10h
 * 0000000140740737: movzx   eax, byte ptr [r8]
 * 000000014074073B: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 000000014074073F: and     eax, 0Fh
 * 0000000140740742: movzx   ecx, [rbp+rax+1910h+var_D30]
 * 000000014074074A: or      rdx, rcx
 * 000000014074074D: ror     rdx, 4
 * 0000000140740751: mov     [r8], rdx
 * 0000000140740754: sub     rbx, r12
 * 0000000140740757: jnz     short loc_140740737
 * 0000000140740759: sub     rdx, r10
 * 000000014074075C: mov     [r8], rdx
 * 000000014074075F: test    r11d, r11d
 * 0000000140740762: jnz     short loc_140740777
 * 0000000140740764: xor     rdx, r14
 * 0000000140740767: mov     ecx, esi
 * 0000000140740769: bswap   rdx
 * 000000014074076C: xor     rdx, rdi
 * 000000014074076F: ror     rdx, cl
 * 0000000140740772: xor     rdx, rsi
 * 0000000140740775: jmp     short loc_14074077A
 * 0000000140740777: xor     rdx, rdi
 * 000000014074077A: mov     [r8], rdx
 * 000000014074077D: mov     ecx, edx
 * 000000014074077F: mov     edx, 0C8h
 * 0000000140740784: not     ecx
 * 0000000140740786: sub     edx, r9d
 * 0000000140740789: add     r10, r15
 * 000000014074078C: imul    edx, r9d
 * 0000000140740790: add     r9d, r12d
 * 0000000140740793: ror     rdx, cl
 * 0000000140740796: mov     ecx, [r8]
 * 0000000140740799: xor     rdi, rdx
 * 000000014074079C: rol     rdi, cl
 * 000000014074079F: add     r8, 8
 * 00000001407407A3: add     rdi, r15
 * 00000001407407A6: cmp     r9d, r13d
 * 00000001407407A9: jb      short loc_14074072F
 * 00000001407407AB: xor     r14d, r14d
 * 00000001407407AE: jmp     loc_140740672
 * 00000001407407B3: xor     r14d, r14d
 * 00000001407407B6: mov     r12, r10
 * 00000001407407B9: jmp     loc_140740678
 * 00000001407407BE: sti
 * 00000001407407BF: cmp     [rbp+1910h+arg_8], 7
 * 00000001407407C6: jnz     loc_140741290
 * 00000001407407CC: mov     eax, [r15+690h]
 * 00000001407407D3: mov     edi, r13d
 * 00000001407407D6: mov     ecx, [r15+634h]
 * 00000001407407DD: and     eax, 10000000h
 * 00000001407407E2: mov     r13d, 2
 * 00000001407407E8: cmovnz  edi, r13d
 * 00000001407407EC: test    ecx, ecx
 * 00000001407407EE: jz      short loc_140740808
 * 00000001407407F0: mov     rax, [r15+538h]
 * 00000001407407F7: mov     r8d, edi
 * 00000001407407FA: mov     rdx, [rax]
 * 00000001407407FD: lea     rcx, [rax-8]
 * 0000000140740801: call    MmSetPageProtection
 * 0000000140740806: jmp     short loc_140740829
 * 0000000140740808: mov     rbx, [r15+538h]
 * 000000014074080F: lea     rdx, [rbp+1910h+QuotaCharged]; QuotaCharged
 * 0000000140740813: mov     rcx, rbx; PoolBlock
 * 0000000140740816: call    ExQueryPoolBlockSize
 * 000000014074081B: mov     r8d, edi
 * 000000014074081E: mov     rdx, rax
 * 0000000140740821: mov     rcx, rbx
 * 0000000140740824: call    ExProtectPool
 * 0000000140740829: mov     ebx, [r15+554h]
 * 0000000140740830: mov     rdi, r15
 * 0000000140740833: mov     r8d, [r15+584h]
 * 000000014074083A: mov     rax, r15
 * 000000014074083D: mov     rdx, [r15+588h]
 * 0000000140740844: lea     rcx, [r15+rbx]
 * 0000000140740848: cmp     r15, rcx
 * 000000014074084B: jnb     short loc_140740859
 * 000000014074084D: prefetchnta byte ptr [rax]
 * 0000000140740850: add     rax, 40h ; '@'
 * 0000000140740854: cmp     rax, rcx
 * 0000000140740857: jb      short loc_14074084D
 * 0000000140740859: cmp     ebx, 8
 * 000000014074085C: jb      short loc_14074087A
 * 000000014074085E: mov     rax, rbx
 * 0000000140740861: shr     rax, 3
 * 0000000140740865: xor     rdx, [rdi]
 * 0000000140740868: mov     ecx, r8d
 * 000000014074086B: rol     rdx, cl
 * 000000014074086E: add     rdi, 8
 * 0000000140740872: add     ebx, 0FFFFFFF8h
 * 0000000140740875: sub     rax, r12
 * 0000000140740878: jnz     short loc_140740865
 * 000000014074087A: test    ebx, ebx
 * 000000014074087C: jz      short loc_140740892
 * 000000014074087E: movzx   eax, byte ptr [rdi]
 * 0000000140740881: mov     ecx, r8d
 * 0000000140740884: xor     rdx, rax
 * 0000000140740887: add     rdi, r12
 * 000000014074088A: rol     rdx, cl
 * 000000014074088D: add     ebx, 0FFFFFFFFh
 * 0000000140740890: jnz     short loc_14074087E
 * 0000000140740892: mov     ecx, 4
 * 0000000140740897: mov     cs:qword_1403821C8, rdx
 * 000000014074089E: mov     r12d, ecx
 * 00000001407408A1: mov     dword ptr [rbp+1910h+arg_18], ecx
 * 00000001407408A7: mov     [rbp+1910h+var_E20], r14
 * 00000001407408AE: lea     rax, [rbp+1910h+var_E18]
 * 00000001407408B5: lea     edx, [rcx-3]
 * 00000001407408B8: mov     [rax], r14b
 * 00000001407408BB: add     rax, rdx
 * 00000001407408BE: add     ecx, 0FFFFFFFFh
 * 00000001407408C1: jnz     short loc_1407408B8
 * 00000001407408C3: xor     ebx, ebx
 * 00000001407408C5: cmp     [r15+57Ch], ebx
 * 00000001407408CC: jbe     loc_140740B23
 * 00000001407408D2: mov     r8d, [rbp+1910h+var_E18]
 * 00000001407408D9: xor     esi, esi
 * 00000001407408DB: mov     r10d, dword ptr [rbp+1910h+var_E20+4]
 * 00000001407408E2: mov     r11d, dword ptr [rbp+1910h+var_E20]
 * 00000001407408E9: mov     rax, [r15+730h]
 * 00000001407408F0: mov     r9, r15
 * 00000001407408F3: test    rax, rax
 * 00000001407408F6: mov     edi, esi
 * 00000001407408F8: cmovnz  r9, rax
 * 00000001407408FC: mov     ebx, [r9+578h]
 * 0000000140740903: add     rbx, r9
 * 0000000140740906: test    r11d, r11d
 * 0000000140740909: jz      short loc_140740919
 * 000000014074090B: cmp     r10d, r14d
 * 000000014074090E: ja      short loc_140740919
 * 0000000140740910: mov     ebx, r8d
 * 0000000140740913: mov     edi, r10d
 * 0000000140740916: add     rbx, r9
 * 0000000140740919: cmp     edi, r14d
 * 000000014074091C: jz      loc_140740A38
 * 0000000140740922: mov     eax, r14d
 * 0000000140740925: mov     esi, 1
 * 000000014074092A: sub     eax, edi
 * 000000014074092C: mov     r12, 0AAAAAAAAAAAAAAABh
 * 0000000140740936: mov     r8d, eax
 * 0000000140740939: add     edi, eax
 * 000000014074093B: mov     ecx, [rbx]
 * 000000014074093D: cmp     ecx, 11h
 * 0000000140740940: jg      short loc_1407409AD
 * 0000000140740942: jz      loc_140740A16
 * 0000000140740948: sub     ecx, esi
 * 000000014074094A: jz      short loc_140740997
 * 000000014074094C: sub     ecx, 6
 * 000000014074094F: jz      short loc_140740986
 * 0000000140740951: sub     ecx, esi
 * 0000000140740953: jz      short loc_140740977
 * 0000000140740955: sub     ecx, r13d
 * 0000000140740958: jz      short loc_140740969
 * 000000014074095A: cmp     ecx, r13d
 * 000000014074095D: jz      short loc_140740997
 * 000000014074095F: mov     eax, 30h ; '0'
 * 0000000140740964: jmp     loc_140740A1B
 * 0000000140740969: mov     eax, [rbx+1Ch]
 * 000000014074096C: add     eax, 3
 * 000000014074096F: shl     eax, 4
 * 0000000140740972: jmp     loc_140740A1B
 * 0000000140740977: movzx   eax, word ptr [rbx+20h]
 * 000000014074097B: add     eax, 37h ; '7'
 * 000000014074097E: and     eax, 0FFFFFFF8h
 * 0000000140740981: jmp     loc_140740A1B
 * 0000000140740986: mov     eax, [rbx+18h]
 * 0000000140740989: add     eax, r13d
 * 000000014074098C: lea     eax, [rax+rax*2]
 * 000000014074098F: shl     eax, 3
 * 0000000140740992: jmp     loc_140740A1B
 * 0000000140740997: mov     ecx, [rbx+10h]
 * 000000014074099A: mov     rax, r12
 * 000000014074099D: mul     rcx
 * 00000001407409A0: shr     rdx, 3
 * 00000001407409A4: lea     eax, ds:30h[rdx*4]
 * 00000001407409AB: jmp     short loc_140740A1B
 * 00000001407409AD: cmp     ecx, 13h
 * 00000001407409B0: jz      short loc_140740A16
 * 00000001407409B2: cmp     ecx, 1Ch
 * 00000001407409B5: jz      short loc_140740A0D
 * 00000001407409B7: cmp     ecx, 1Eh
 * 00000001407409BA: jz      short loc_1407409E9
 * 00000001407409BC: lea     eax, [rcx-21h]
 * 00000001407409BF: cmp     eax, esi
 * 00000001407409C1: ja      short loc_14074095F
 * 00000001407409C3: mov     ecx, [rbx+20h]
 * 00000001407409C6: mov     edx, [rbx+28h]
 * 00000001407409C9: and     ecx, 0FFFh
 * 00000001407409CF: add     rdx, 0FFFh
 * 00000001407409D6: add     rdx, rcx
 * 00000001407409D9: shr     rdx, 0Ch
 * 00000001407409DD: lea     eax, [rdx+rdx*4]
 * 00000001407409E0: lea     eax, ds:30h[rax*4]
 * 00000001407409E7: jmp     short loc_140740A1B
 * 00000001407409E9: mov     ecx, [rbx+24h]
 * 00000001407409EC: mov     rax, r12
 * 00000001407409EF: sub     ecx, esi
 * 00000001407409F1: mul     rcx
 * 00000001407409F4: movzx   eax, word ptr [rbx+28h]
 * 00000001407409F8: shr     rdx, 3
 * 00000001407409FC: add     edx, 7
 * 00000001407409FF: and     edx, 0FFFFFFF8h
 * 0000000140740A02: add     eax, r13d
 * 0000000140740A05: lea     eax, [rax+rax*2]
 * 0000000140740A08: lea     eax, [rdx+rax*8]
 * 0000000140740A0B: jmp     short loc_140740A1B
 * 0000000140740A0D: movzx   eax, word ptr [rbx+28h]
 * 0000000140740A11: jmp     loc_14074097B
 * 0000000140740A16: mov     eax, 38h ; '8'
 * 0000000140740A1B: add     rbx, rax
 * 0000000140740A1E: sub     r8, rsi
 * 0000000140740A21: jnz     loc_14074093B
 * 0000000140740A27: mov     r15, [rsp+1A10h+var_19B0]
 * 0000000140740A2C: xor     esi, esi
 * 0000000140740A2E: mov     r12d, dword ptr [rbp+1910h+arg_18]
 * 0000000140740A35: lea     edx, [rsi+1]
 * 0000000140740A38: mov     r8d, ebx
 * 0000000140740A3B: mov     dword ptr [rbp+1910h+var_E20], edx
 * 0000000140740A41: sub     r8d, r9d
 * 0000000140740A44: mov     dword ptr [rbp+1910h+var_E20+4], edi
 * 0000000140740A4A: mov     [rbp+1910h+var_E18], r8d
 * 0000000140740A51: mov     r11d, edx
 * 0000000140740A54: mov     eax, [rbx]
 * 0000000140740A56: mov     r10d, edi
 * 0000000140740A59: cmp     eax, 15h
 * 0000000140740A5C: ja      short loc_140740A7D
 * 0000000140740A5E: mov     ecx, 20020Ch
 * 0000000140740A63: bt      ecx, eax
 * 0000000140740A66: jnb     short loc_140740A7D
 * 0000000140740A68: add     r12d, edx
 * 0000000140740A6B: mov     dword ptr [rbp+1910h+arg_18], r12d
 * 0000000140740A72: cmp     eax, r13d
 * 0000000140740A75: jnz     loc_140740B13
 * 0000000140740A7B: jmp     short loc_140740A92
 * 0000000140740A7D: mov     ecx, 20h ; ' '
 * 0000000140740A82: cmp     eax, ecx
 * 0000000140740A84: jnz     short loc_140740A97
 * 0000000140740A86: mov     ecx, [rbx+28h]
 * 0000000140740A89: test    r13b, cl
 * 0000000140740A8C: jnz     short loc_140740A97
 * 0000000140740A8E: test    dl, cl
 * 0000000140740A90: jz      short loc_140740A97
 * 0000000140740A92: add     r12d, edx
 * 0000000140740A95: jmp     short loc_140740AA0
 * 0000000140740A97: cmp     eax, 7
 * 0000000140740A9A: jnz     short loc_140740AA9
 * 0000000140740A9C: add     r12d, [rbx+18h]
 * 0000000140740AA0: mov     dword ptr [rbp+1910h+arg_18], r12d
 * 0000000140740AA7: jmp     short loc_140740B13
 * 0000000140740AA9: cmp     eax, 21h ; '!'
 * 0000000140740AAC: jnz     short loc_140740B13
 * 0000000140740AAE: mov     rcx, [rbx+20h]
 * 0000000140740AB2: mov     eax, [rbx+28h]
 * 0000000140740AB5: and     ecx, 0FFFh
 * 0000000140740ABB: add     rcx, 0FFFh
 * 0000000140740AC2: add     rbx, 30h ; '0'
 * 0000000140740AC6: add     rax, rcx
 * 0000000140740AC9: shr     rax, 0Ch
 * 0000000140740ACD: mov     eax, eax
 * 0000000140740ACF: lea     rcx, [rax+rax*4]
 * 0000000140740AD3: lea     rdx, [rbx+rcx*4]
 * 0000000140740AD7: cmp     rbx, rdx
 * 0000000140740ADA: jz      short loc_140740B0E
 * 0000000140740ADC: mov     esi, 1
 * 0000000140740AE1: mov     r15d, 80000000h
 * 0000000140740AE7: mov     al, [rbx+0Fh]
 * 0000000140740AEA: test    al, al
 * 0000000140740AEC: js      short loc_140740AF7
 * 0000000140740AEE: test    [rbx+10h], r15d
 * 0000000140740AF2: jnz     short loc_140740AF7
 * 0000000140740AF4: add     r12d, esi
 * 0000000140740AF7: add     rbx, 14h
 * 0000000140740AFB: cmp     rbx, rdx
 * 0000000140740AFE: jnz     short loc_140740AE7
 * 0000000140740B00: mov     r15, [rsp+1A10h+var_19B0]
 * 0000000140740B05: xor     esi, esi
 * 0000000140740B07: mov     dword ptr [rbp+1910h+arg_18], r12d
 * 0000000140740B0E: mov     edx, 1
 * 0000000140740B13: add     r14d, edx
 * 0000000140740B16: cmp     r14d, [r15+57Ch]
 * 0000000140740B1D: jb      loc_1407408E9
 * 0000000140740B23: rdtsc
 * 0000000140740B25: shl     rdx, 20h
 * 0000000140740B29: mov     r13, 7010008004002001h
 * 0000000140740B33: or      rax, rdx
 * 0000000140740B36: mov     rcx, rax
 * 0000000140740B39: mov     rdx, rax
 * 0000000140740B3C: ror     rcx, 3
 * 0000000140740B40: mov     rax, r13
 * 0000000140740B43: xor     rdx, rcx
 * 0000000140740B46: mul     rdx
 * 0000000140740B49: mov     rcx, rdx
 * 0000000140740B4C: mov     [rbp+1910h+var_1168], rdx
 * 0000000140740B53: xor     rcx, rax
 * 0000000140740B56: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140740B60: mul     rcx
 * 0000000140740B63: shr     rdx, 1
 * 0000000140740B66: imul    rax, rdx, 0Bh
 * 0000000140740B6A: sub     rcx, rax
 * 0000000140740B6D: mov     eax, 5
 * 0000000140740B72: cmp     ecx, eax
 * 0000000140740B74: ja      loc_140740C32
 * 0000000140740B7A: jz      loc_140740C18
 * 0000000140740B80: test    ecx, ecx
 * 0000000140740B82: jz      short loc_140740BFE
 * 0000000140740B84: sub     ecx, 1
 * 0000000140740B87: jz      short loc_140740BE5
 * 0000000140740B89: sub     ecx, 1
 * 0000000140740B8C: jz      short loc_140740BCB
 * 0000000140740B8E: cmp     ecx, 1
 * 0000000140740B91: jz      short loc_140740BAD
 * 0000000140740B93: mov     [rbp+1910h+var_1790], 67076494h
 * 0000000140740B9D: mov     r8d, [rbp+1910h+var_1790]
 * 0000000140740BA4: rol     r8d, 4
 * 0000000140740BA8: jmp     loc_140740D57
 * 0000000140740BAD: mov     [rbp+1910h+var_1788], 0A8223938h
 * 0000000140740BB7: mov     r8d, [rbp+1910h+var_1788]
 * 0000000140740BBE: xor     r8d, 3
 * 0000000140740BC2: ror     r8d, 0Fh
 * 0000000140740BC6: jmp     loc_140740D57
 * 0000000140740BCB: mov     [rbp+1910h+var_1780], 85B5910Dh
 * 0000000140740BD5: mov     r8d, [rbp+1910h+var_1780]
 * 0000000140740BDC: ror     r8d, 2
 * 0000000140740BE0: jmp     loc_140740D57
 * 0000000140740BE5: mov     [rbp+1910h+var_1778], 0B2AD31A1h
 * 0000000140740BEF: mov     r8d, [rbp+1910h+var_1778]
 * 0000000140740BF6: rol     r8d, 1
 * 0000000140740BF9: jmp     loc_140740D57
 * 0000000140740BFE: mov     [rbp+1910h+var_1770], 0D098D0D8h
 * 0000000140740C08: mov     r8d, [rbp+1910h+var_1770]
 * 0000000140740C0F: ror     r8d, 6
 * 0000000140740C13: jmp     loc_140740D57
 * 0000000140740C18: mov     [rbp+1910h+var_1768], 288C49EDh
 * 0000000140740C22: mov     r8d, [rbp+1910h+var_1768]
 * 0000000140740C29: ror     r8d, 5
 * 0000000140740C2D: jmp     loc_140740D57
 * 0000000140740C32: mov     edx, 6
 * 0000000140740C37: sub     ecx, edx
 * 0000000140740C39: jz      loc_140740D3F
 * 0000000140740C3F: sub     ecx, 1
 * 0000000140740C42: jz      loc_140740D28
 * 0000000140740C48: sub     ecx, 1
 * 0000000140740C4B: jz      loc_140740D11
 * 0000000140740C51: cmp     ecx, 1
 * 0000000140740C54: jz      loc_140740CF6
 * 0000000140740C5A: rdtsc
 * 0000000140740C5C: shl     rdx, 20h
 * 0000000140740C60: mov     r9d, 4EC4EC4Fh
 * 0000000140740C66: or      rax, rdx
 * 0000000140740C69: mov     rcx, rax
 * 0000000140740C6C: mov     rdx, rax
 * 0000000140740C6F: ror     rcx, 3
 * 0000000140740C73: mov     rax, r13
 * 0000000140740C76: xor     rdx, rcx
 * 0000000140740C79: mul     rdx
 * 0000000140740C7C: mov     r8, rax
 * 0000000140740C7F: mov     [rbp+1910h+var_1158], rdx
 * 0000000140740C86: xor     r8d, edx
 * 0000000140740C89: mov     eax, r9d
 * 0000000140740C8C: mul     r8d
 * 0000000140740C8F: mov     ebx, r8d
 * 0000000140740C92: mov     eax, r9d
 * 0000000140740C95: shr     edx, 3
 * 0000000140740C98: imul    ecx, edx, 1Ah
 * 0000000140740C9B: shr     r8d, 5
 * 0000000140740C9F: mul     r8d
 * 0000000140740CA2: sub     ebx, ecx
 * 0000000140740CA4: mov     edi, r8d
 * 0000000140740CA7: add     ebx, 61h ; 'a'
 * 0000000140740CAA: shr     r8d, 5
 * 0000000140740CAE: shl     ebx, 8
 * 0000000140740CB1: shr     edx, 3
 * 0000000140740CB4: imul    eax, edx, 1Ah
 * 0000000140740CB7: sub     edi, eax
 * 0000000140740CB9: mov     eax, r9d
 * 0000000140740CBC: mul     r8d
 * 0000000140740CBF: add     edi, 41h ; 'A'
 * 0000000140740CC2: mov     eax, r9d
 * 0000000140740CC5: or      edi, ebx
 * 0000000140740CC7: shr     edx, 3
 * 0000000140740CCA: mov     ebx, r8d
 * 0000000140740CCD: imul    ecx, edx, 1Ah
 * 0000000140740CD0: shr     r8d, 5
 * 0000000140740CD4: mul     r8d
 * 0000000140740CD7: sub     ebx, ecx
 * 0000000140740CD9: shl     edi, 8
 * 0000000140740CDC: add     ebx, 61h ; 'a'
 * 0000000140740CDF: shr     edx, 3
 * 0000000140740CE2: imul    eax, edx, 1Ah
 * 0000000140740CE5: or      ebx, edi
 * 0000000140740CE7: shl     ebx, 8
 * 0000000140740CEA: sub     r8d, eax
 * 0000000140740CED: add     r8d, 41h ; 'A'
 * 0000000140740CF1: or      r8d, ebx
 * 0000000140740CF4: jmp     short loc_140740D57
 * 0000000140740CF6: mov     [rbp+1910h+var_1760], 0B0869E85h
 * 0000000140740D00: mov     r8d, [rbp+1910h+var_1760]
 * 0000000140740D07: xor     r8d, 9
 * 0000000140740D0B: ror     r8d, 21h
 * 0000000140740D0F: jmp     short loc_140740D57
 * 0000000140740D11: mov     [rbp+1910h+var_1758], 64664142h
 * 0000000140740D1B: mov     r8d, [rbp+1910h+var_1758]
 * 0000000140740D22: ror     r8d, 8
 * 0000000140740D26: jmp     short loc_140740D57
 * 0000000140740D28: mov     [rbp+1910h+var_1750], 82C6A6D8h
 * 0000000140740D32: mov     r8d, [rbp+1910h+var_1750]
 * 0000000140740D39: rol     r8d, 7
 * 0000000140740D3D: jmp     short loc_140740D57
 * 0000000140740D3F: mov     [rbp+1910h+var_1748], 4E574672h
 * 0000000140740D49: mov     r8d, [rbp+1910h+var_1748]
 * 0000000140740D50: xor     r8d, edx
 * 0000000140740D53: ror     r8d, 18h
 * 0000000140740D57: mov     ebx, r12d
 * 0000000140740D5A: mov     ecx, 200h
 * 0000000140740D5F: shl     rbx, 6
 * 0000000140740D63: mov     rdx, rbx
 * 0000000140740D66: mov     [rbp+1910h+Timer], rbx
 * 0000000140740D6A: call    qword ptr [r15+0F0h]
 * 0000000140740D71: mov     r14, rax
 * 0000000140740D74: mov     [rsp+1A10h+var_19D0], rax
 * 0000000140740D79: xor     eax, eax
 * 0000000140740D7B: test    r14, r14
 * 0000000140740D7E: jz      loc_140731C01
 * 0000000140740D84: mov     r8, rbx; Size
 * 0000000140740D87: xor     edx, edx; Val
 * 0000000140740D89: mov     rcx, r14; void *
 * 0000000140740D8C: call    memset
 * 0000000140740D91: rdtsc
 * 0000000140740D93: shl     rdx, 20h
 * 0000000140740D97: or      rax, rdx
 * 0000000140740D9A: mov     rcx, rax
 * 0000000140740D9D: mov     rdx, rax
 * 0000000140740DA0: ror     rcx, 3
 * 0000000140740DA4: mov     rax, r13
 * 0000000140740DA7: xor     rdx, rcx
 * 0000000140740DAA: xor     ecx, ecx
 * 0000000140740DAC: mul     rdx
 * 0000000140740DAF: mov     rbx, rdx
 * 0000000140740DB2: mov     [rbp+1910h+var_1148], rdx
 * 0000000140740DB9: xor     rbx, rax
 * 0000000140740DBC: call    ExGenRandom
 * 0000000140740DC1: mov     eax, eax
 * 0000000140740DC3: xor     rax, rbx
 * 0000000140740DC6: mov     [rbp+1910h+var_1138], rax
 * 0000000140740DCD: rdtsc
 * 0000000140740DCF: shl     rdx, 20h
 * 0000000140740DD3: or      rax, rdx
 * 0000000140740DD6: mov     rcx, rax
 * 0000000140740DD9: mov     rdx, rax
 * 0000000140740DDC: ror     rcx, 3
 * 0000000140740DE0: mov     rax, r13
 * 0000000140740DE3: xor     rdx, rcx
 * 0000000140740DE6: xor     ecx, ecx
 * 0000000140740DE8: mul     rdx
 * 0000000140740DEB: mov     rbx, rdx
 * 0000000140740DEE: mov     [rbp+1910h+var_1128], rdx
 * 0000000140740DF5: xor     rbx, rax
 * 0000000140740DF8: call    ExGenRandom
 * 0000000140740DFD: mov     ecx, eax
 * 0000000140740DFF: lea     r13, [r14+8]
 * 0000000140740E03: xor     rcx, rbx
 * 0000000140740E06: mov     rax, 410410410410411h
 * 0000000140740E10: mul     rcx
 * 0000000140740E13: mov     rax, rcx
 * 0000000140740E16: xor     ebx, ebx
 * 0000000140740E18: sub     rax, rdx
 * 0000000140740E1B: mov     r12d, 1
 * 0000000140740E21: shr     rax, 1
 * 0000000140740E24: add     rax, rdx
 * 0000000140740E27: shr     rax, 5
 * 0000000140740E2B: imul    rax, 3Fh ; '?'
 * 0000000140740E2F: sub     rcx, rax
 * 0000000140740E32: add     ecx, r12d
 * 0000000140740E35: mov     [rbp+1910h+var_1740], ecx
 * 0000000140740E3B: mov     [r13+0], rbx
 * 0000000140740E3F: mov     [r14+10h], rbx
 * 0000000140740E43: mov     dword ptr [r14+18h], 1000h
 * 0000000140740E4B: mov     rax, [rbp+1910h+var_1138]
 * 0000000140740E52: mov     [r14+20h], rax
 * 0000000140740E56: mov     eax, [rbp+1910h+var_1740]
 * 0000000140740E5C: mov     [r14+28h], eax
 * 0000000140740E60: mov     [r14+2Ch], ebx
 * 0000000140740E64: call    MmStrongCodeGuaranteesEnforced
 * 0000000140740E69: test    eax, eax
 * 0000000140740E6B: jz      short loc_140740E7A
 * 0000000140740E6D: call    sub_140742B9C
 * 0000000140740E72: test    eax, eax
 * 0000000140740E74: jz      short loc_140740E7A
 * 0000000140740E76: or      [r14+2Ch], r12d
 * 0000000140740E7A: call    KeQueryErrataCodePage
 * 0000000140740E7F: mov     [rsp+78h], rax
 * 0000000140740E84: lea     rcx, [rbp+1910h+var_E18]
 * 0000000140740E8B: mov     rax, r12
 * 0000000140740E8E: mov     [rbp+1910h+var_E20], rbx
 * 0000000140740E95: mov     edx, 4
 * 0000000140740E9A: mov     [rcx], bl
 * 0000000140740E9C: add     rcx, rax
 * 0000000140740E9F: add     edx, 0FFFFFFFFh
 * 0000000140740EA2: jnz     short loc_140740E9A
 * 0000000140740EA4: mov     [rbp+1910h+var_1738], ebx
 * 0000000140740EAA: mov     r11, rbx
 * 0000000140740EAD: mov     r10, rbx
 * 0000000140740EB0: mov     [rbp+1910h+var_1990], rbx
 * 0000000140740EB4: mov     ecx, ebx
 * 0000000140740EB6: mov     [rbp+1910h+var_1968], rbx
 * 0000000140740EBA: mov     dword ptr [rsp+1A10h+Src], ebx
 * 0000000140740EBE: mov     dword ptr [rsp+1A10h+var_19B8], ebx
 * 0000000140740EC2: cmp     [r15+57Ch], ebx
 * 0000000140740EC9: jbe     loc_1407410D2
 * 0000000140740ECF: mov     rax, [r15+730h]
 * 0000000140740ED6: mov     r8, r15
 * 0000000140740ED9: test    rax, rax
 * 0000000140740EDC: cmovnz  r8, rax
 * 0000000140740EE0: xor     r13d, r13d
 * 0000000140740EE3: mov     edi, [r8+578h]
 * 0000000140740EEA: add     rdi, r8
 * 0000000140740EED: cmp     dword ptr [rbp+1910h+var_E20], r13d
 * 0000000140740EF4: jz      short loc_140740F0D
 * 0000000140740EF6: cmp     dword ptr [rbp+1910h+var_E20+4], ecx
 * 0000000140740EFC: ja      short loc_140740F0D
 * 0000000140740EFE: mov     edi, [rbp+1910h+var_E18]
 * 0000000140740F04: mov     ebx, dword ptr [rbp+1910h+var_E20+4]
 * 0000000140740F0A: add     rdi, r8
 * 0000000140740F0D: cmp     ebx, ecx
 * 0000000140740F0F: jz      loc_14074103B
 * 0000000140740F15: mov     eax, ecx
 * 0000000140740F17: mov     r15d, 2
 * 0000000140740F1D: sub     eax, ebx
 * 0000000140740F1F: mov     r14, 0AAAAAAAAAAAAAAABh
 * 0000000140740F29: mov     r9d, eax
 * 0000000140740F2C: add     ebx, eax
 * 0000000140740F2E: mov     ecx, [rdi]
 * 0000000140740F30: cmp     ecx, 11h
 * 0000000140740F33: jg      short loc_140740FA2
 * 0000000140740F35: jz      loc_140741012
 * 0000000140740F3B: sub     ecx, 1
 * 0000000140740F3E: jz      short loc_140740F8C
 * 0000000140740F40: sub     ecx, 6
 * 0000000140740F43: jz      short loc_140740F7B
 * 0000000140740F45: sub     ecx, 1
 * 0000000140740F48: jz      short loc_140740F6C
 * 0000000140740F4A: sub     ecx, r15d
 * 0000000140740F4D: jz      short loc_140740F5E
 * 0000000140740F4F: cmp     ecx, r15d
 * 0000000140740F52: jz      short loc_140740F8C
 * 0000000140740F54: mov     eax, 30h ; '0'
 * 0000000140740F59: jmp     loc_140741017
 * 0000000140740F5E: mov     eax, [rdi+1Ch]
 * 0000000140740F61: add     eax, 3
 * 0000000140740F64: shl     eax, 4
 * 0000000140740F67: jmp     loc_140741017
 * 0000000140740F6C: movzx   eax, word ptr [rdi+20h]
 * 0000000140740F70: add     eax, 37h ; '7'
 * 0000000140740F73: and     eax, 0FFFFFFF8h
 * 0000000140740F76: jmp     loc_140741017
 * 0000000140740F7B: mov     eax, [rdi+18h]
 * 0000000140740F7E: add     eax, r15d
 * 0000000140740F81: lea     eax, [rax+rax*2]
 * 0000000140740F84: shl     eax, 3
 * 0000000140740F87: jmp     loc_140741017
 * 0000000140740F8C: mov     ecx, [rdi+10h]
 * 0000000140740F8F: mov     rax, r14
 * 0000000140740F92: mul     rcx
 * 0000000140740F95: shr     rdx, 3
 * 0000000140740F99: lea     eax, ds:30h[rdx*4]
 * 0000000140740FA0: jmp     short loc_140741017
 * 0000000140740FA2: cmp     ecx, 13h
 * 0000000140740FA5: jz      short loc_140741012
 * 0000000140740FA7: cmp     ecx, 1Ch
 * 0000000140740FAA: jz      short loc_140741009
 * 0000000140740FAC: cmp     ecx, 1Eh
 * 0000000140740FAF: jz      short loc_140740FE5
 * 0000000140740FB1: lea     eax, [rcx-21h]
 * 0000000140740FB4: mov     r13d, 1
 * 0000000140740FBA: cmp     eax, r13d
 * 0000000140740FBD: ja      short loc_140740F54
 * 0000000140740FBF: mov     ecx, [rdi+20h]
 * 0000000140740FC2: mov     edx, [rdi+28h]
 * 0000000140740FC5: and     ecx, 0FFFh
 * 0000000140740FCB: add     rdx, 0FFFh
 * 0000000140740FD2: add     rdx, rcx
 * 0000000140740FD5: shr     rdx, 0Ch
 * 0000000140740FD9: lea     eax, [rdx+rdx*4]
 * 0000000140740FDC: lea     eax, ds:30h[rax*4]
 * 0000000140740FE3: jmp     short loc_140741017
 * 0000000140740FE5: mov     ecx, [rdi+24h]
 * 0000000140740FE8: mov     rax, r14
 * 0000000140740FEB: dec     ecx
 * 0000000140740FED: mul     rcx
 * 0000000140740FF0: movzx   eax, word ptr [rdi+28h]
 * 0000000140740FF4: shr     rdx, 3
 * 0000000140740FF8: add     edx, 7
 * 0000000140740FFB: and     edx, 0FFFFFFF8h
 * 0000000140740FFE: add     eax, r15d
 * 0000000140741001: lea     eax, [rax+rax*2]
 * 0000000140741004: lea     eax, [rdx+rax*8]
 * 0000000140741007: jmp     short loc_140741017
 * 0000000140741009: movzx   eax, word ptr [rdi+28h]
 * 000000014074100D: jmp     loc_140740F70
 * 0000000140741012: mov     eax, 38h ; '8'
 * 0000000140741017: add     rdi, rax
 * 000000014074101A: mov     eax, 1
 * 000000014074101F: sub     r9, rax
 * 0000000140741022: jnz     loc_140740F2E
 * 0000000140741028: mov     r14, [rsp+1A10h+var_19D0]
 * 000000014074102D: xor     r13d, r13d
 * 0000000140741030: mov     r15, [rsp+1A10h+var_19B0]
 * 0000000140741035: mov     r11, [rbp+1910h+var_1990]
 * 0000000140741039: jmp     short loc_140741040
 * 000000014074103B: mov     eax, 1
 * 0000000140741040: mov     dword ptr [rbp+1910h+var_E20], eax
 * 0000000140741046: mov     eax, edi
 * 0000000140741048: sub     eax, r8d
 * 000000014074104B: mov     dword ptr [rbp+1910h+var_E20+4], ebx
 * 0000000140741051: mov     [rbp+1910h+var_E18], eax
 * 0000000140741057: mov     ebx, 1
 * 000000014074105C: mov     ecx, [rdi]
 * 000000014074105E: lea     eax, [rcx-2]
 * 0000000140741061: cmp     eax, ebx
 * 0000000140741063: jbe     loc_140741A69
 * 0000000140741069: cmp     ecx, 9
 * 000000014074106C: jnz     loc_1407415D5
 * 0000000140741072: mov     rax, [rdi+8]
 * 0000000140741076: lea     r9, [r14+20h]
 * 000000014074107A: mov     edx, r12d
 * 000000014074107D: mov     rcx, r15
 * 0000000140741080: shl     rdx, 6
 * 0000000140741084: add     r9, rdx
 * 0000000140741087: mov     [rdx+r14+8], rax
 * 000000014074108C: mov     eax, [rdi+10h]
 * 000000014074108F: mov     [rdx+r14+10h], rax
 * 0000000140741094: mov     r8d, eax
 * 0000000140741097: mov     dword ptr [rdx+r14+18h], 1001h
 * 00000001407410A0: mov     rdx, [rdx+r14+8]
 * 00000001407410A5: call    sub_14014F138
 * 00000001407410AA: mov     r11, [rbp+1910h+var_1990]
 * 00000001407410AE: add     r12d, ebx
 * 00000001407410B1: mov     r10, [rbp+1910h+var_1968]
 * 00000001407410B5: xor     ebx, ebx
 * 00000001407410B7: mov     ecx, dword ptr [rsp+1A10h+var_19B8]
 * 00000001407410BB: inc     ecx
 * 00000001407410BD: mov     dword ptr [rsp+1A10h+var_19B8], ecx
 * 00000001407410C1: cmp     ecx, [r15+57Ch]
 * 00000001407410C8: jb      loc_140740ECF
 * 00000001407410CE: lea     r13, [r14+8]
 * 00000001407410D2: mov     cs:qword_1403821C0, r15
 * 00000001407410D9: lea     rax, qword_1403821C0
 * 00000001407410E0: mov     edi, 8
 * 00000001407410E5: mov     edx, r12d
 * 00000001407410E8: shl     rdx, 6
 * 00000001407410EC: lea     r9, [r14+20h]
 * 00000001407410F0: add     r9, rdx
 * 00000001407410F3: mov     r8d, edi
 * 00000001407410F6: mov     rcx, r15
 * 00000001407410F9: mov     [rdx+r14+8], rax
 * 00000001407410FE: mov     [rdx+r14+10h], rdi
 * 0000000140741103: mov     dword ptr [rdx+r14+18h], 1001h
 * 000000014074110C: mov     rdx, [rdx+r14+8]
 * 0000000140741111: call    sub_14014F138
 * 0000000140741116: mov     rax, cs:qword_1403821C0
 * 000000014074111D: lea     r9, [r14+20h]
 * 0000000140741121: mov     ecx, 0FFFFF000h
 * 0000000140741126: inc     r12d
 * 0000000140741129: mov     edx, r12d
 * 000000014074112C: shl     rdx, 6
 * 0000000140741130: add     r9, rdx
 * 0000000140741133: mov     [rdx+r14+8], rax
 * 0000000140741138: mov     eax, [r15+554h]
 * 000000014074113F: and     rax, rcx
 * 0000000140741142: mov     rcx, r15
 * 0000000140741145: mov     [rdx+r14+10h], rax
 * 000000014074114A: mov     r8d, eax
 * 000000014074114D: mov     dword ptr [rdx+r14+18h], 1001h
 * 0000000140741156: mov     rdx, [rdx+r14+8]
 * 000000014074115B: call    sub_14014F138
 * 0000000140741160: lea     edx, [rdi-7]
 * 0000000140741163: mov     r8d, edi
 * 0000000140741166: add     edx, r12d
 * 0000000140741169: lea     rax, qword_1403821C8
 * 0000000140741170: shl     rdx, 6
 * 0000000140741174: lea     r9, [r14+20h]
 * 0000000140741178: add     r9, rdx
 * 000000014074117B: mov     rcx, r15
 * 000000014074117E: mov     [rdx+r14+8], rax
 * 0000000140741183: mov     [rdx+r14+10h], rdi
 * 0000000140741188: mov     dword ptr [rdx+r14+18h], 1001h
 * 0000000140741191: mov     rdx, [rdx+r14+8]
 * 0000000140741196: call    sub_14014F138
 * 000000014074119B: mov     r10d, dword ptr [rbp+1910h+arg_18]
 * 00000001407411A2: test    r10d, r10d
 * 00000001407411A5: jz      loc_140741250
 * 00000001407411AB: mov     r11d, r10d
 * 00000001407411AE: lea     r12d, [rdi-7]
 * 00000001407411B2: xor     r9d, r9d
 * 00000001407411B5: mov     rbx, [r13+0]
 * 00000001407411B9: mov     r8d, [r13+8]
 * 00000001407411BD: mov     rax, rbx
 * 00000001407411C0: lea     rcx, [rbx+r8]
 * 00000001407411C4: cmp     rbx, rcx
 * 00000001407411C7: jnb     short loc_1407411D5
 * 00000001407411C9: prefetchnta byte ptr [rax]
 * 00000001407411CC: add     rax, 40h ; '@'
 * 00000001407411D0: cmp     rax, rcx
 * 00000001407411D3: jb      short loc_1407411C9
 * 00000001407411D5: mov     rdi, [rbp+1910h+var_1138]
 * 00000001407411DC: mov     rdx, rbx
 * 00000001407411DF: and     rdx, 0FFFFFFFFFFFFF000h
 * 00000001407411E6: add     rdx, 1000h
 * 00000001407411ED: sub     edx, ebx
 * 00000001407411EF: cmp     r8d, edx
 * 00000001407411F2: cmovb   edx, r8d
 * 00000001407411F6: sub     r8d, edx
 * 00000001407411F9: cmp     edx, 8
 * 00000001407411FC: jb      short loc_14074121E
 * 00000001407411FE: movzx   ecx, byte ptr [rbp+1910h+var_1740]
 * 0000000140741205: mov     r9d, edx
 * 0000000140741208: shr     r9, 3
 * 000000014074120C: xor     rdi, [rbx]
 * 000000014074120F: add     edx, 0FFFFFFF8h
 * 0000000140741212: ror     rdi, cl
 * 0000000140741215: add     rbx, 8
 * 0000000140741219: sub     r9, r12
 * 000000014074121C: jnz     short loc_14074120C
 * 000000014074121E: test    edx, edx
 * 0000000140741220: jz      short loc_14074123A
 * 0000000140741222: movzx   ecx, byte ptr [rbp+1910h+var_1740]
 * 0000000140741229: movzx   eax, byte ptr [rbx]
 * 000000014074122C: add     rbx, r12
 * 000000014074122F: xor     rdi, rax
 * 0000000140741232: ror     rdi, cl
 * 0000000140741235: add     edx, 0FFFFFFFFh
 * 0000000140741238: jnz     short loc_140741229
 * 000000014074123A: test    r8d, r8d
 * 000000014074123D: jnz     short loc_1407411DC
 * 000000014074123F: mov     [r13-8], rdi
 * 0000000140741243: add     r13, 40h ; '@'
 * 0000000140741247: sub     r11, r12
 * 000000014074124A: jnz     loc_1407411B5
 * 0000000140741250: mov     edx, r10d
 * 0000000140741253: mov     rcx, r14
 * 0000000140741256: call    KiConnectSwInterrupt
 * 000000014074125B: mov     rcx, [rbp+1910h+Timer]
 * 000000014074125F: mov     ebx, eax
 * 0000000140741261: xor     eax, eax
 * 0000000140741263: mov     rdi, r14
 * 0000000140741266: rep stosb
 * 0000000140741268: lea     ecx, [rax+8]
 * 000000014074126B: lea     rdi, [rbp+1910h+var_1138]
 * 0000000140741272: rep stosb
 * 0000000140741274: lea     ecx, [rax+4]
 * 0000000140741277: lea     rdi, [rbp+1910h+var_1740]
 * 000000014074127E: rep stosb
 * 0000000140741280: mov     rcx, r14; P
 * 0000000140741283: call    ExFreePool
 * 0000000140741288: test    ebx, ebx
 * 000000014074128A: js      loc_140731C01
 * 0000000140741290: mov     rax, [rsp+1A10h+var_19C0]
 * 0000000140741295: test    rax, rax
 * 0000000140741298: jz      short loc_1407412A3
 * 000000014074129A: mov     rcx, rax
 * 000000014074129D: call    [rbp+1910h+var_698]
 * 00000001407412A3: rdtsc
 * 00000001407412A5: mov     r13, [rbp+1910h+var_248]
 * 00000001407412AC: mov     r9, 7010008004002001h
 * 00000001407412B6: shl     rdx, 20h
 * 00000001407412BA: or      rax, rdx
 * 00000001407412BD: mov     rcx, rax
 * 00000001407412C0: mov     rdx, rax
 * 00000001407412C3: ror     rcx, 3
 * 00000001407412C7: mov     rax, r9
 * 00000001407412CA: xor     rdx, rcx
 * 00000001407412CD: mul     rdx
 * 00000001407412D0: mov     r14, rdx
 * 00000001407412D3: mov     [rbp+1910h+var_1108], rdx
 * 00000001407412DA: xor     r14, rax
 * 00000001407412DD: test    [rbp+1910h+var_100], 10000000h
 * 00000001407412E7: jz      short loc_140741322
 * 00000001407412E9: rdtsc
 * 00000001407412EB: shl     rdx, 20h
 * 00000001407412EF: or      rax, rdx
 * 00000001407412F2: mov     rcx, rax
 * 00000001407412F5: mov     rbx, rax
 * 00000001407412F8: ror     rcx, 3
 * 00000001407412FC: mov     rax, r9
 * 00000001407412FF: xor     rbx, rcx
 * 0000000140741302: mul     rbx
 * 0000000140741305: mov     [rbp+1910h+var_10F8], rdx
 * 000000014074130C: xor     rdx, rax
 * 000000014074130F: mov     rax, [rbp+1910h+var_2B8]
 * 0000000140741316: and     rdx, 0Fh
 * 000000014074131A: lea     rcx, [rdx+rdx*4]
 * 000000014074131E: lea     r13, [rax+rcx*2]
 * 0000000140741322: mov     r10d, 28h ; '('
 * 0000000140741328: lea     rcx, [rbp+1910h+var_188]
 * 000000014074132F: mov     ebx, r10d
 * 0000000140741332: lea     rdx, [rbp+1910h+var_A48]
 * 0000000140741339: lea     r11d, [r10-23h]
 * 000000014074133D: mov     edi, r11d
 * 0000000140741340: lea     r12d, [r10-27h]
 * 0000000140741344: mov     rax, [rcx]
 * 0000000140741347: add     ebx, 0FFFFFFF8h
 * 000000014074134A: mov     [rdx], rax
 * 000000014074134D: add     rcx, 8
 * 0000000140741351: add     rdx, 8
 * 0000000140741355: sub     rdi, r12
 * 0000000140741358: jnz     short loc_140741344
 * 000000014074135A: xor     eax, eax
 * 000000014074135C: test    ebx, ebx
 * 000000014074135E: jz      short loc_140741371
 * 0000000140741360: mov     al, [rcx]
 * 0000000140741362: add     rcx, r12
 * 0000000140741365: mov     [rdx], al
 * 0000000140741367: add     rdx, r12
 * 000000014074136A: add     ebx, 0FFFFFFFFh
 * 000000014074136D: jnz     short loc_140741360
 * 000000014074136F: xor     eax, eax
 * 0000000140741371: test    [rbp+1910h+var_100], 8000h
 * 000000014074137B: jnz     short loc_140741389
 * 000000014074137D: cmp     [rbp+1910h+var_188], eax
 * 0000000140741383: jnz     loc_140741E4D
 * 0000000140741389: test    [rbp+1910h+var_100], 40000000h
 * 0000000140741393: jnz     loc_140742125
 * 0000000140741399: mov     al, [rbp+1910h+var_160]
 * 000000014074139F: xor     r15, r14
 * 00000001407413A2: sub     al, r12b
 * 00000001407413A5: mov     ebx, 3Fh ; '?'
 * 00000001407413AA: movzx   r8d, al
 * 00000001407413AE: sub     ebx, r8d
 * 00000001407413B1: rdtsc
 * 00000001407413B3: shl     rdx, 20h
 * 00000001407413B7: mov     rsi, 7010008004002001h
 * 00000001407413C1: or      rax, rdx
 * 00000001407413C4: mov     rcx, rax
 * 00000001407413C7: mov     rdx, rax
 * 00000001407413CA: ror     rcx, 3
 * 00000001407413CE: mov     rax, r9
 * 00000001407413D1: xor     rdx, rcx
 * 00000001407413D4: mov     r9d, ebx
 * 00000001407413D7: mul     rdx
 * 00000001407413DA: mov     [rbp+1910h+var_10E8], rdx
 * 00000001407413E1: xor     rax, rdx
 * 00000001407413E4: xor     edx, edx
 * 00000001407413E6: div     r9
 * 00000001407413E9: lea     edi, [r8+rdx]
 * 00000001407413ED: rdtsc
 * 00000001407413EF: shl     rdx, 20h
 * 00000001407413F3: or      rax, rdx
 * 00000001407413F6: mov     rcx, rax
 * 00000001407413F9: mov     rbx, rax
 * 00000001407413FC: ror     rcx, 3
 * 0000000140741400: mov     rax, rsi
 * 0000000140741403: xor     rbx, rcx
 * 0000000140741406: mul     rbx
 * 0000000140741409: xor     rax, rdx
 * 000000014074140C: mov     [rbp+1910h+var_10D8], rdx
 * 0000000140741413: xor     edx, edx
 * 0000000140741415: div     r9
 * 0000000140741418: add     edx, r8d
 * 000000014074141B: cmp     edx, edi
 * 000000014074141D: jz      short loc_1407413ED
 * 000000014074141F: mov     rbx, [rbp+1910h+var_290]
 * 0000000140741426: mov     rsi, 0FFFFFFFFB8797400h
 * 000000014074142D: mov     r12, [rbp+1910h+var_298]
 * 0000000140741434: mov     eax, edi
 * 0000000140741436: bts     r15, rax
 * 000000014074143A: mov     eax, edx
 * 000000014074143C: btr     r15, rax
 * 0000000140741440: cmp     [rbp+1910h+var_15C], 3
 * 0000000140741447: jnz     loc_140741AFC
 * 000000014074144D: mov     rdi, [rsp+1A10h+var_19A0]
 * 0000000140741452: xor     ecx, ecx
 * 0000000140741454: test    rdi, rdi
 * 0000000140741457: jz      loc_140741AFE
 * 000000014074145D: mov     rax, [rbp+1910h+var_468]
 * 0000000140741464: lea     r8d, [rcx+1]
 * 0000000140741468: mov     byte ptr [rbx], 13h
 * 000000014074146B: mov     [rbx+1], r8b
 * 000000014074146F: mov     [rbx+2], cx
 * 0000000140741473: mov     [rbx+18h], rax
 * 0000000140741477: mov     [rbx+20h], rdi
 * 000000014074147B: mov     [rbx+38h], rcx
 * 000000014074147F: mov     [rbx+10h], rcx
 * 0000000140741483: mov     [rbx+28h], r15
 * 0000000140741487: mov     r8, [rdi]
 * 000000014074148A: mov     edx, [rdi+10h]
 * 000000014074148D: mov     rcx, [rdi+8]
 * 0000000140741491: call    [rbp+1910h+var_478]
 * 0000000140741497: mov     r9, [rsp+1A10h+var_19A0]
 * 000000014074149C: mov     rcx, rdi
 * 000000014074149F: mov     r8, [rdi]
 * 00000001407414A2: mov     r10, 5851F42D4C957F2Dh
 * 00000001407414AC: rol     rcx, 11h
 * 00000001407414B0: mov     rax, r10
 * 00000001407414B3: xor     rcx, rdi
 * 00000001407414B6: add     r9, 18h
 * 00000001407414BA: mul     rcx
 * 00000001407414BD: mov     [rbp+1910h+var_10C8], rdx
 * 00000001407414C4: xor     rdx, rax
 * 00000001407414C7: mov     eax, 4
 * 00000001407414CC: mov     rdi, rdx
 * 00000001407414CF: xor     r15d, r15d
 * 00000001407414D2: lea     r11d, [rax-3]
 * 00000001407414D6: xor     [r9], rdi
 * 00000001407414D9: mov     ecx, eax
 * 00000001407414DB: rol     rdi, cl
 * 00000001407414DE: lea     r9, [r9-8]
 * 00000001407414E2: sub     eax, r11d
 * 00000001407414E5: jnz     short loc_1407414D6
 * 00000001407414E7: and     dl, 0Fh
 * 00000001407414EA: cmp     dl, 7
 * 00000001407414ED: jnb     short loc_140741555
 * 00000001407414EF: mov     rcx, r8
 * 00000001407414F2: mov     rax, r10
 * 00000001407414F5: rol     rcx, 11h
 * 00000001407414F9: mov     r9d, 6
 * 00000001407414FF: xor     rcx, r8
 * 0000000140741502: mul     rcx
 * 0000000140741505: mov     [rbp+1910h+var_10B8], rdx
 * 000000014074150C: xor     rdx, rax
 * 000000014074150F: add     rdi, rdx
 * 0000000140741512: lea     rax, [r8+28h]
 * 0000000140741516: movsx   edx, word ptr [r8+8]
 * 000000014074151B: xor     [rax], rdi
 * 000000014074151E: mov     ecx, r9d
 * 0000000140741521: rol     rdi, cl
 * 0000000140741524: lea     rax, [rax-8]
 * 0000000140741528: sub     r9d, r11d
 * 000000014074152B: jnz     short loc_14074151B
 * 000000014074152D: sub     rdx, 30h ; '0'
 * 0000000140741531: shr     rdx, 3
 * 0000000140741535: test    edx, edx
 * 0000000140741537: jz      short loc_140741555
 * 0000000140741539: movsxd  r9, edx
 * 000000014074153C: add     r9, 5
 * 0000000140741540: lea     r9, [r8+r9*8]
 * 0000000140741544: xor     [r9], rdi
 * 0000000140741547: mov     ecx, edx
 * 0000000140741549: rol     rdi, cl
 * 000000014074154C: lea     r9, [r9-8]
 * 0000000140741550: sub     edx, r11d
 * 0000000140741553: jnz     short loc_140741544
 * 0000000140741555: mov     r10d, 28h ; '('
 * 000000014074155B: lea     r11d, [r10-23h]
 * 000000014074155F: lea     r9d, [r10-27h]
 * 0000000140741563: mov     [rbx+40h], r14
 * 0000000140741567: mov     r14, 7010008004002001h
 * 0000000140741571: test    [rbp+1910h+var_100], 100h
 * 000000014074157B: jz      loc_140741B27
 * 0000000140741581: lea     rdi, [r13-48h]
 * 0000000140741585: mov     [rdi+40h], rbx
 * 0000000140741589: rdtsc
 * 000000014074158B: shl     rdx, 20h
 * 000000014074158F: mov     r8d, 19h
 * 0000000140741595: or      rax, rdx
 * 0000000140741598: mov     rcx, rax
 * 000000014074159B: mov     rdx, rax
 * 000000014074159E: ror     rcx, 3
 * 00000001407415A2: mov     rax, r14
 * 00000001407415A5: xor     rdx, rcx
 * 00000001407415A8: mul     rdx
 * 00000001407415AB: mov     [rbp+1910h+var_10A8], rdx
 * 00000001407415B2: xor     rdx, rax
 * 00000001407415B5: lea     rax, [rdi+48h]
 * 00000001407415B9: xor     [rax], rdx
 * 00000001407415BC: lea     rax, [rax+8]
 * 00000001407415C0: sub     r8, r9
 * 00000001407415C3: jnz     short loc_1407415B9
 * 00000001407415C5: mov     dword ptr [rdi+48h], 48513148h
 * 00000001407415CC: mov     [rdi+20h], rdx
 * 00000001407415D0: jmp     loc_140741B2A
 * 00000001407415D5: mov     eax, 20h ; ' '
 * 00000001407415DA: cmp     ecx, eax
 * 00000001407415DC: jnz     loc_1407417C1
 * 00000001407415E2: mov     eax, [rdi+28h]
 * 00000001407415E5: mov     r9d, 2
 * 00000001407415EB: test    r9b, al
 * 00000001407415EE: jnz     loc_1407417C1
 * 00000001407415F4: test    bl, al
 * 00000001407415F6: jz      loc_1407417C1
 * 00000001407415FC: mov     rax, [rdi+8]
 * 0000000140741600: lea     rdx, [r14+20h]
 * 0000000140741604: mov     ebx, r12d
 * 0000000140741607: lea     r8d, [r9+0Eh]
 * 000000014074160B: shl     rbx, 6
 * 000000014074160F: lea     rcx, [rdi+18h]
 * 0000000140741613: add     rdx, rbx
 * 0000000140741616: lea     r13d, [r9-1]
 * 000000014074161A: mov     [rbx+r14+8], rax
 * 000000014074161F: mov     eax, [rdi+10h]
 * 0000000140741622: mov     [rbx+r14+10h], rax
 * 0000000140741627: mov     dword ptr [rbx+r14+18h], 1001h
 * 0000000140741630: mov     rax, [rcx]
 * 0000000140741633: add     r8d, 0FFFFFFF8h
 * 0000000140741637: mov     [rdx], rax
 * 000000014074163A: add     rcx, 8
 * 000000014074163E: add     rdx, 8
 * 0000000140741642: sub     r9, r13
 * 0000000140741645: jnz     short loc_140741630
 * 0000000140741647: xor     r13d, r13d
 * 000000014074164A: test    r8d, r8d
 * 000000014074164D: jz      short loc_140741666
 * 000000014074164F: lea     r13d, [r9+1]
 * 0000000140741653: mov     al, [rcx]
 * 0000000140741655: add     rcx, r13
 * 0000000140741658: mov     [rdx], al
 * 000000014074165A: add     rdx, r13
 * 000000014074165D: add     r8d, 0FFFFFFFFh
 * 0000000140741661: jnz     short loc_140741653
 * 0000000140741663: xor     r13d, r13d
 * 0000000140741666: mov     rcx, [rdi+8]
 * 000000014074166A: test    rcx, rcx
 * 000000014074166D: jz      short loc_14074169C
 * 000000014074166F: cmp     rcx, r11
 * 0000000140741672: jb      short loc_14074167E
 * 0000000140741674: cmp     rcx, r10
 * 0000000140741677: jnb     short loc_14074167E
 * 0000000140741679: mov     r13, r11
 * 000000014074167C: jmp     short loc_14074169C
 * 000000014074167E: test    rcx, rcx
 * 0000000140741681: jz      short loc_14074169C
 * 0000000140741683: lea     rdx, [rbp+1910h+var_1118]
 * 000000014074168A: call    qword ptr [r15+1D8h]
 * 0000000140741691: mov     r11, [rbp+1910h+var_1990]
 * 0000000140741695: mov     r13, rax
 * 0000000140741698: mov     r10, [rbp+1910h+var_1968]
 * 000000014074169C: mov     rcx, [rdi+8]
 * 00000001407416A0: xor     edx, edx
 * 00000001407416A2: test    rcx, rcx
 * 00000001407416A5: jz      short loc_1407416E0
 * 00000001407416A7: cmp     rcx, [rsp+78h]
 * 00000001407416AC: jnz     short loc_1407416E0
 * 00000001407416AE: mov     dword ptr [rbx+r14+18h], 1008h
 * 00000001407416B7: lea     rcx, cs:140000000h
 * 00000001407416BE: mov     [rbx+r14+30h], rcx
 * 00000001407416C3: lea     rax, KiSanitizeFpu
 * 00000001407416CA: sub     rax, rcx
 * 00000001407416CD: shr     rax, 0Ch
 * 00000001407416D1: mov     [rbx+r14+38h], eax
 * 00000001407416D6: mov     [rbx+r14+3Ch], edx
 * 00000001407416DB: jmp     loc_1407417B9
 * 00000001407416E0: mov     eax, [rdi+28h]
 * 00000001407416E3: test    al, 4
 * 00000001407416E5: jz      short loc_140741707
 * 00000001407416E7: mov     dword ptr [rbx+r14+18h], 100Ah
 * 00000001407416F0: mov     rcx, [rdi+8]; BaseAddress
 * 00000001407416F4: call    MmGetPhysicalAddress
 * 00000001407416F9: shr     rax, 0Ch
 * 00000001407416FD: mov     [rbx+r14+30h], rax
 * 0000000140741702: jmp     loc_1407417B1
 * 0000000140741707: test    r13, r13
 * 000000014074170A: jz      short loc_140741758
 * 000000014074170C: mov     rcx, r13
 * 000000014074170F: call    qword ptr [r15+1C8h]
 * 0000000140741716: mov     r8d, [rdi+8]
 * 000000014074171A: mov     rdx, r13; BaseOfImage
 * 000000014074171D: sub     r8d, r13d; VirtualAddress
 * 0000000140741720: mov     [rbp+1910h+var_1968], rax
 * 0000000140741724: mov     rcx, rax; NtHeaders
 * 0000000140741727: call    RtlSectionTableFromVirtualAddress
 * 000000014074172C: test    rax, rax
 * 000000014074172F: jz      short loc_140741740
 * 0000000140741731: test    dword ptr [rax+24h], 20000000h
 * 0000000140741738: jz      short loc_140741740
 * 000000014074173A: or      byte ptr [rbx+r14+2Fh], 80h
 * 0000000140741740: mov     rax, [rbp+1910h+var_1968]
 * 0000000140741744: mov     r11, r13
 * 0000000140741747: mov     [rbp+1910h+var_1990], r13
 * 000000014074174B: mov     r10d, [rax+50h]
 * 000000014074174F: add     r10, r13
 * 0000000140741752: mov     [rbp+1910h+var_1968], r10
 * 0000000140741756: jmp     short loc_1407417B9
 * 0000000140741758: mov     rax, 88000000000h
 * 0000000140741762: add     rax, rcx
 * 0000000140741765: cmp     rax, 0FFFh
 * 000000014074176B: jbe     short loc_1407417B9
 * 000000014074176D: mov     eax, [rdi+10h]
 * 0000000140741770: test    eax, eax
 * 0000000140741772: jz      short loc_1407417B9
 * 0000000140741774: cmp     eax, 1000h
 * 0000000140741779: ja      loc_140742487
 * 000000014074177F: mov     dword ptr [rbx+r14+18h], 1009h
 * 0000000140741788: mov     rcx, [rdi+8]; BaseAddress
 * 000000014074178C: call    MmGetPhysicalAddress
 * 0000000140741791: shr     rax, 0Ch
 * 0000000140741795: mov     [rbx+r14+30h], rax
 * 000000014074179A: mov     ecx, [rdi+10h]
 * 000000014074179D: dec     ecx
 * 000000014074179F: add     rcx, [rdi+8]; BaseAddress
 * 00000001407417A3: call    MmGetPhysicalAddress
 * 00000001407417A8: shr     rax, 0Ch
 * 00000001407417AC: mov     [rbx+r14+38h], rax
 * 00000001407417B1: mov     r10, [rbp+1910h+var_1968]
 * 00000001407417B5: mov     r11, [rbp+1910h+var_1990]
 * 00000001407417B9: inc     r12d
 * 00000001407417BC: jmp     loc_1407410B5
 * 00000001407417C1: cmp     ecx, 7
 * 00000001407417C4: jnz     short loc_14074182F
 * 00000001407417C6: lea     rdx, [rdi+30h]
 * 00000001407417CA: mov     ebx, r13d
 * 00000001407417CD: cmp     [rdi+18h], r13d
 * 00000001407417D1: jbe     loc_1407410B5
 * 00000001407417D7: lea     r15d, [rcx-6]
 * 00000001407417DB: mov     ecx, r12d
 * 00000001407417DE: add     ebx, r15d
 * 00000001407417E1: shl     rcx, 6
 * 00000001407417E5: add     r12d, r15d
 * 00000001407417E8: mov     [rcx+r14+8], r13
 * 00000001407417ED: mov     [rcx+r14+10h], r13
 * 00000001407417F2: mov     dword ptr [rcx+r14+18h], 1003h
 * 00000001407417FB: mov     eax, [rdi+1Ch]
 * 00000001407417FE: mov     [rcx+r14+34h], eax
 * 0000000140741803: mov     rax, [rdx]
 * 0000000140741806: lea     rdx, [rdx+18h]
 * 000000014074180A: mov     [rcx+r14+20h], rax
 * 000000014074180F: mov     rax, [rdx-10h]
 * 0000000140741813: mov     [rcx+r14+28h], rax
 * 0000000140741818: mov     eax, [rdx-8]
 * 000000014074181B: mov     [rcx+r14+30h], eax
 * 0000000140741820: cmp     ebx, [rdi+18h]
 * 0000000140741823: jb      short loc_1407417DB
 * 0000000140741825: mov     r15, [rsp+1A10h+var_19B0]
 * 000000014074182A: jmp     loc_1407410B5
 * 000000014074182F: cmp     ecx, 15h
 * 0000000140741832: jnz     short loc_14074187A
 * 0000000140741834: mov     ecx, r12d
 * 0000000140741837: shl     rcx, 6
 * 000000014074183B: xor     ebx, ebx
 * 000000014074183D: mov     [rcx+r14+8], rbx
 * 0000000140741842: mov     [rcx+r14+10h], rbx
 * 0000000140741847: mov     dword ptr [rcx+r14+18h], 1006h
 * 0000000140741850: mov     eax, [rdi+2Ch]
 * 0000000140741853: mov     [rcx+r14+34h], eax
 * 0000000140741858: mov     rax, [rdi+18h]
 * 000000014074185C: mov     [rcx+r14+20h], rax
 * 0000000140741861: mov     rax, [rdi+20h]
 * 0000000140741865: mov     [rcx+r14+28h], rax
 * 000000014074186A: mov     eax, [rdi+28h]
 * 000000014074186D: mov     [rcx+r14+30h], eax
 * 0000000140741872: inc     r12d
 * 0000000140741875: jmp     loc_1407410B7
 * 000000014074187A: cmp     ecx, 21h ; '!'
 * 000000014074187D: jnz     loc_1407410B5
 * 0000000140741883: mov     rdx, [rdi+20h]
 * 0000000140741887: mov     ebx, [rdi+28h]
 * 000000014074188A: mov     rcx, rdx
 * 000000014074188D: and     ecx, 0FFFh
 * 0000000140741893: mov     [rbp+1910h+var_1990], rdx
 * 0000000140741897: add     rcx, 0FFFh
 * 000000014074189E: add     rbx, rcx
 * 00000001407418A1: mov     rcx, rdx
 * 00000001407418A4: shr     rbx, 0Ch
 * 00000001407418A8: call    qword ptr [r15+1C8h]
 * 00000001407418AF: mov     rdx, [rbp+1910h+var_1990]
 * 00000001407418B3: lea     r8, [rbp+1910h+var_1738]
 * 00000001407418BA: mov     [rbp+1910h+NtHeaders], rax
 * 00000001407418BE: mov     rcx, r15
 * 00000001407418C1: mov     eax, [rdi+28h]
 * 00000001407418C4: add     rax, rdx
 * 00000001407418C7: mov     [rbp+1910h+var_1968], rax
 * 00000001407418CB: call    $$b7
 * 00000001407418D0: mov     r11, [rbp+1910h+var_1990]
 * 00000001407418D4: neg     eax
 * 00000001407418D6: mov     eax, ebx
 * 00000001407418D8: sbb     ecx, ecx
 * 00000001407418DA: add     rdi, 30h ; '0'
 * 00000001407418DE: and     [rbp+1910h+var_1738], ecx
 * 00000001407418E4: lea     rcx, [rax+rax*4]
 * 00000001407418E8: lea     r10, [rdi+rcx*4]
 * 00000001407418EC: mov     [rbp+1910h+var_1950], r10
 * 00000001407418F0: cmp     rdi, r10
 * 00000001407418F3: jz      loc_1407410B1
 * 00000001407418F9: mov     r15, r11
 * 00000001407418FC: mov     rsi, r11
 * 00000001407418FF: neg     r15
 * 0000000140741902: mov     al, [rdi+0Fh]
 * 0000000140741905: test    al, al
 * 0000000140741907: js      loc_140741A4B
 * 000000014074190D: mov     ecx, 80000000h
 * 0000000140741912: test    [rdi+10h], ecx
 * 0000000140741915: jnz     loc_140741A4B
 * 000000014074191B: mov     r8d, 10h
 * 0000000140741921: mov     ebx, r12d
 * 0000000140741924: shl     rbx, 6
 * 0000000140741928: lea     rax, [r15+rsi]
 * 000000014074192C: cqo
 * 000000014074192E: mov     rcx, rdi
 * 0000000140741931: and     edx, 0FFFh
 * 0000000140741937: add     rax, rdx
 * 000000014074193A: lea     r9d, [r8-0Eh]
 * 000000014074193E: mov     [r14+rbx+8], rsi
 * 0000000140741943: lea     rdx, [rbx+20h]
 * 0000000140741947: mov     qword ptr [r14+rbx+10h], 1000h
 * 0000000140741950: lea     r10d, [r8-0Fh]
 * 0000000140741954: mov     dword ptr [r14+rbx+18h], 1002h
 * 000000014074195D: sar     rax, 0Ch
 * 0000000140741961: mov     [r14+rbx+30h], r11
 * 0000000140741966: add     rdx, r14
 * 0000000140741969: mov     [r14+rbx+38h], eax
 * 000000014074196E: mov     rax, [rcx]
 * 0000000140741971: add     r8d, 0FFFFFFF8h
 * 0000000140741975: mov     [rdx], rax
 * 0000000140741978: add     rcx, 8
 * 000000014074197C: add     rdx, 8
 * 0000000140741980: sub     r9, r10
 * 0000000140741983: jnz     short loc_14074196E
 * 0000000140741985: mov     r10, [rbp+1910h+var_1950]
 * 0000000140741989: test    r8d, r8d
 * 000000014074198C: jz      short loc_1407419A6
 * 000000014074198E: lea     r10d, [r9+1]
 * 0000000140741992: mov     al, [rcx]
 * 0000000140741994: add     rcx, r10
 * 0000000140741997: mov     [rdx], al
 * 0000000140741999: add     rdx, r10
 * 000000014074199C: add     r8d, 0FFFFFFFFh
 * 00000001407419A0: jnz     short loc_140741992
 * 00000001407419A2: mov     r10, [rbp+1910h+var_1950]
 * 00000001407419A6: lea     r8, [rbp+1910h+var_1738]
 * 00000001407419AD: mov     rax, r14
 * 00000001407419B0: sub     rax, r8
 * 00000001407419B3: lea     rcx, [rbp+1910h+var_1738]
 * 00000001407419BA: mov     edx, 4
 * 00000001407419BF: lea     r8, [rax+rbx]
 * 00000001407419C3: lea     r11d, [rdx-3]
 * 00000001407419C7: mov     al, [rcx]
 * 00000001407419C9: mov     [r8+rcx+3Ch], al
 * 00000001407419CE: add     rcx, r11
 * 00000001407419D1: add     edx, 0FFFFFFFFh
 * 00000001407419D4: jnz     short loc_1407419C7
 * 00000001407419D6: mov     r8d, [r14+rbx+38h]
 * 00000001407419DB: xor     ecx, ecx
 * 00000001407419DD: mov     r11, [rbp+1910h+var_1990]
 * 00000001407419E1: shl     r8d, 0Ch; VirtualAddress
 * 00000001407419E5: test    r13, r13
 * 00000001407419E8: jz      short loc_1407419F1
 * 00000001407419EA: cmp     r8d, dword ptr [rsp+1A10h+Src]
 * 00000001407419EF: jb      short loc_140741A26
 * 00000001407419F1: mov     rcx, [rbp+1910h+NtHeaders]; NtHeaders
 * 00000001407419F5: mov     rdx, r11; BaseOfImage
 * 00000001407419F8: call    RtlSectionTableFromVirtualAddress
 * 00000001407419FD: mov     r10, [rbp+1910h+var_1950]
 * 0000000140741A01: mov     r13, rax
 * 0000000140741A04: mov     r11, [rbp+1910h+var_1990]
 * 0000000140741A08: test    rax, rax
 * 0000000140741A0B: jz      short loc_140741A16
 * 0000000140741A0D: mov     eax, [rax+0Ch]
 * 0000000140741A10: add     eax, [r13+8]
 * 0000000140741A14: jmp     short loc_140741A22
 * 0000000140741A16: mov     rcx, [rbp+1910h+NtHeaders]
 * 0000000140741A1A: movzx   eax, word ptr [rcx+14h]
 * 0000000140741A1E: mov     eax, [rax+rcx+24h]
 * 0000000140741A22: mov     dword ptr [rsp+1A10h+Src], eax
 * 0000000140741A26: and     byte ptr [r14+rbx+2Fh], 7Fh
 * 0000000140741A2C: mov     cl, [r14+rbx+2Fh]
 * 0000000140741A31: test    r13, r13
 * 0000000140741A34: jz      short loc_140741A48
 * 0000000140741A36: test    dword ptr [r13+24h], 20000000h
 * 0000000140741A3E: jz      short loc_140741A48
 * 0000000140741A40: or      cl, 80h
 * 0000000140741A43: mov     [r14+rbx+2Fh], cl
 * 0000000140741A48: inc     r12d
 * 0000000140741A4B: add     rdi, 14h
 * 0000000140741A4F: add     rsi, 1000h
 * 0000000140741A56: cmp     rdi, r10
 * 0000000140741A59: jnz     loc_140741902
 * 0000000140741A5F: mov     r15, [rsp+1A10h+var_19B0]
 * 0000000140741A64: jmp     loc_1407410B1
 * 0000000140741A69: mov     rax, [rdi+8]
 * 0000000140741A6D: lea     r9, [r14+20h]
 * 0000000140741A71: mov     edx, r12d
 * 0000000140741A74: mov     rcx, r15
 * 0000000140741A77: shl     rdx, 6
 * 0000000140741A7B: mov     [rdx+r14+8], rax
 * 0000000140741A80: mov     eax, [rdi+10h]
 * 0000000140741A83: mov     [rdx+r14+10h], rax
 * 0000000140741A88: mov     eax, [rdi]
 * 0000000140741A8A: sub     eax, 3
 * 0000000140741A8D: neg     eax
 * 0000000140741A8F: sbb     eax, eax
 * 0000000140741A91: add     r9, rdx
 * 0000000140741A94: add     eax, 1005h
 * 0000000140741A99: mov     [rdx+r14+18h], eax
 * 0000000140741A9E: mov     eax, [rdi+28h]
 * 0000000140741AA1: mov     [rdx+r14+30h], eax
 * 0000000140741AA6: movzx   eax, word ptr [rdi+2Ch]
 * 0000000140741AAA: mov     [rdx+r14+34h], ax
 * 0000000140741AB0: mov     r8d, [rdx+r14+10h]
 * 0000000140741AB5: mov     rdx, [rdx+r14+8]
 * 0000000140741ABA: call    sub_14014F138
 * 0000000140741ABF: mov     r11, [rbp+1910h+var_1990]
 * 0000000140741AC3: add     r12d, ebx
 * 0000000140741AC6: mov     r10, [rbp+1910h+var_1968]
 * 0000000140741ACA: xor     ebx, ebx
 * 0000000140741ACC: cmp     dword ptr [rdi], 2
 * 0000000140741ACF: jnz     loc_1407410B7
 * 0000000140741AD5: mov     ecx, r12d
 * 0000000140741AD8: shl     rcx, 6
 * 0000000140741ADC: mov     [rcx+r14+8], rbx
 * 0000000140741AE1: mov     [rcx+r14+10h], rbx
 * 0000000140741AE6: mov     dword ptr [rcx+r14+18h], 100Bh
 * 0000000140741AEF: mov     eax, [rdi+28h]
 * 0000000140741AF2: mov     [rcx+r14+20h], eax
 * 0000000140741AF7: jmp     loc_140741872
 * 0000000140741AFC: xor     ecx, ecx
 * 0000000140741AFE: mov     byte ptr [rbx], 13h
 * 0000000140741B01: mov     r9d, 1
 * 0000000140741B07: mov     [rbx+1], r9b
 * 0000000140741B0B: mov     [rbx+2], cx
 * 0000000140741B0F: mov     [rbx+18h], r13
 * 0000000140741B13: mov     [rbx+20h], r15
 * 0000000140741B17: xor     r15d, r15d
 * 0000000140741B1A: mov     [rbx+38h], r15
 * 0000000140741B1E: mov     [rbx+10h], r15
 * 0000000140741B22: jmp     loc_140741563
 * 0000000140741B27: mov     rdi, rbx
 * 0000000140741B2A: lock or [rsp+0], r15d
 * 0000000140741B2F: mov     ecx, [rbp+1910h+var_1E8]
 * 0000000140741B35: test    ecx, ecx
 * 0000000140741B37: jz      loc_140741DA6
 * 0000000140741B3D: sub     ecx, 1
 * 0000000140741B40: jz      loc_140741D8D
 * 0000000140741B46: sub     ecx, 1
 * 0000000140741B49: jz      loc_140741D7D
 * 0000000140741B4F: sub     ecx, 1
 * 0000000140741B52: jz      loc_140741CD5
 * 0000000140741B58: cmp     ecx, 1
 * 0000000140741B5B: jz      loc_140741BE1
 * 0000000140741B61: mov     rbx, [rbp+1910h+var_F8]
 * 0000000140741B68: mov     [rbx+48h], rdi
 * 0000000140741B6C: lock or [rsp+0], r15d
 * 0000000140741B71: rdtsc
 * 0000000140741B73: shl     rdx, 20h
 * 0000000140741B77: or      rax, rdx
 * 0000000140741B7A: mov     rcx, rax
 * 0000000140741B7D: mov     rdx, rax
 * 0000000140741B80: ror     rcx, 3
 * 0000000140741B84: mov     rax, r14
 * 0000000140741B87: xor     rdx, rcx
 * 0000000140741B8A: mul     rdx
 * 0000000140741B8D: mov     rcx, rdx
 * 0000000140741B90: mov     [rbp+1910h+var_1098], rdx
 * 0000000140741B97: xor     rcx, rax
 * 0000000140741B9A: mov     rax, 0ABCC77118461CEFDh
 * 0000000140741BA4: mul     rcx
 * 0000000140741BA7: shr     rdx, 1Ah
 * 0000000140741BAB: imul    rax, rdx, 5F5E100h
 * 0000000140741BB2: sub     rcx, rax
 * 0000000140741BB5: mov     rax, 0D6BF94D5E57A42BDh
 * 0000000140741BBF: add     rcx, 47868C00h
 * 0000000140741BC6: imul    rcx
 * 0000000140741BC9: add     rdx, rcx
 * 0000000140741BCC: sar     rdx, 17h
 * 0000000140741BD0: mov     rax, rdx
 * 0000000140741BD3: shr     rax, 3Fh
 * 0000000140741BD7: add     rdx, rax
 * 0000000140741BDA: mov     [rbx], edx
 * 0000000140741BDC: jmp     loc_140741D9B
 * 0000000140741BE1: mov     rdx, [rbp+1910h+var_B0]
 * 0000000140741BE8: xor     r9d, r9d
 * 0000000140741BEB: mov     rcx, [rbp+1910h+var_A0]
 * 0000000140741BF2: xor     r8d, r8d
 * 0000000140741BF5: mov     rdi, [rbp+1910h+var_F8]
 * 0000000140741BFC: mov     rax, [rbp+1910h+var_A8]
 * 0000000140741C03: mov     byte ptr [rdx], 12h
 * 0000000140741C06: mov     byte ptr [rdx+2], 58h ; 'X'
 * 0000000140741C0A: mov     [rdx+50h], r15b
 * 0000000140741C0E: mov     [rdx+8], rdi
 * 0000000140741C12: mov     [rdx+20h], rax
 * 0000000140741C16: mov     [rdx+28h], r15
 * 0000000140741C1A: mov     [rdx+30h], rcx
 * 0000000140741C1E: mov     [rdx+51h], r15b
 * 0000000140741C22: mov     [rdx+38h], r15
 * 0000000140741C26: mov     [rdx+52h], r15b
 * 0000000140741C2A: mov     rdx, rbx
 * 0000000140741C2D: mov     rcx, [rbp+1910h+var_B0]
 * 0000000140741C34: call    [rbp+1910h+var_518]
 * 0000000140741C3A: test    al, al
 * 0000000140741C3C: jnz     loc_140741D9B
 * 0000000140741C42: mov     r12d, 1
 * 0000000140741C48: cmp     [rbp+1910h+var_188], r15d
 * 0000000140741C4F: jnz     short loc_140741C8C
 * 0000000140741C51: lea     rax, [rbp+1910h+var_790]
 * 0000000140741C58: mov     [rbp+1910h+var_178], r15
 * 0000000140741C5F: mov     rdx, 0A3A03F5891C8B4E8h
 * 0000000140741C69: mov     [rbp+1910h+var_170], 104h
 * 0000000140741C74: add     rax, rdx
 * 0000000140741C77: mov     [rbp+1910h+var_168], rdi
 * 0000000140741C7E: mov     [rbp+1910h+var_180], rax
 * 0000000140741C85: mov     [rbp+1910h+var_188], r12d
 * 0000000140741C8C: lea     rcx, [rbp+1910h+var_188]
 * 0000000140741C93: mov     ebx, 28h ; '('
 * 0000000140741C98: lea     rdx, [rbp+1910h+var_A48]
 * 0000000140741C9F: mov     rax, [rcx]
 * 0000000140741CA2: add     ebx, 0FFFFFFF8h
 * 0000000140741CA5: mov     [rdx], rax
 * 0000000140741CA8: add     rcx, 8
 * 0000000140741CAC: add     rdx, 8
 * 0000000140741CB0: sub     [rbp+1910h+var_1650], r12
 * 0000000140741CB7: jnz     short loc_140741C9F
 * 0000000140741CB9: test    ebx, ebx
 * 0000000140741CBB: jz      loc_140741E50
 * 0000000140741CC1: mov     al, [rcx]
 * 0000000140741CC3: add     rcx, r12
 * 0000000140741CC6: mov     [rdx], al
 * 0000000140741CC8: add     rdx, r12
 * 0000000140741CCB: add     ebx, 0FFFFFFFFh
 * 0000000140741CCE: jnz     short loc_140741CC1
 * 0000000140741CD0: jmp     loc_140741E50
 * 0000000140741CD5: mov     rdi, [rbp+1910h+var_F8]
 * 0000000140741CDC: mov     r12d, 1
 * 0000000140741CE2: mov     rcx, [rdi+608h]
 * 0000000140741CE9: test    rcx, rcx
 * 0000000140741CEC: jz      short loc_140741D6C
 * 0000000140741CEE: cmp     [rbp+1910h+var_188], r15d
 * 0000000140741CF5: jnz     short loc_140741D32
 * 0000000140741CF7: lea     rax, [rbp+1910h+var_790]
 * 0000000140741CFE: mov     [rbp+1910h+var_178], r15
 * 0000000140741D05: mov     rdx, 0A3A03F5891C8B4E8h
 * 0000000140741D0F: mov     [rbp+1910h+var_170], 104h
 * 0000000140741D1A: add     rax, rdx
 * 0000000140741D1D: mov     [rbp+1910h+var_168], rcx
 * 0000000140741D24: mov     [rbp+1910h+var_180], rax
 * 0000000140741D2B: mov     [rbp+1910h+var_188], r12d
 * 0000000140741D32: lea     rcx, [rbp+1910h+var_188]
 * 0000000140741D39: lea     rdx, [rbp+1910h+var_A48]
 * 0000000140741D40: mov     rax, [rcx]
 * 0000000140741D43: add     r10d, 0FFFFFFF8h
 * 0000000140741D47: mov     [rdx], rax
 * 0000000140741D4A: add     rcx, 8
 * 0000000140741D4E: add     rdx, 8
 * 0000000140741D52: sub     r11, r12
 * 0000000140741D55: jnz     short loc_140741D40
 * 0000000140741D57: test    r10d, r10d
 * 0000000140741D5A: jz      short loc_140741D6C
 * 0000000140741D5C: mov     al, [rcx]
 * 0000000140741D5E: add     rcx, r12
 * 0000000140741D61: mov     [rdx], al
 * 0000000140741D63: add     rdx, r12
 * 0000000140741D66: add     r10d, 0FFFFFFFFh
 * 0000000140741D6A: jnz     short loc_140741D5C
 * 0000000140741D6C: lock or [rsp+0], r15d
 * 0000000140741D71: mov     [rdi+608h], rbx
 * 0000000140741D78: jmp     loc_140741E50
 * 0000000140741D7D: mov     rax, [rbp+1910h+var_260]
 * 0000000140741D84: mov     [rax+630h], rdi
 * 0000000140741D8B: jmp     short loc_140741D9B
 * 0000000140741D8D: mov     rax, [rbp+1910h+var_260]
 * 0000000140741D94: mov     [rax+660h], rdi
 * 0000000140741D9B: mov     r12d, 1
 * 0000000140741DA1: jmp     loc_140741E50
 * 0000000140741DA6: rdtsc
 * 0000000140741DA8: shl     rdx, 20h
 * 0000000140741DAC: or      rax, rdx
 * 0000000140741DAF: mov     rcx, rax
 * 0000000140741DB2: mov     rdx, rax
 * 0000000140741DB5: ror     rcx, 3
 * 0000000140741DB9: mov     rax, r14
 * 0000000140741DBC: xor     rdx, rcx
 * 0000000140741DBF: mul     rdx
 * 0000000140741DC2: mov     rcx, rdx
 * 0000000140741DC5: mov     [rbp+1910h+var_1088], rdx
 * 0000000140741DCC: xor     rcx, rax
 * 0000000140741DCF: mov     rax, 0ABCC77118461CEFDh
 * 0000000140741DD9: mul     rcx
 * 0000000140741DDC: shr     rdx, 1Ah
 * 0000000140741DE0: imul    rax, rdx, 5F5E100h
 * 0000000140741DE7: sub     rcx, rax
 * 0000000140741DEA: sub     rsi, rcx
 * 0000000140741DED: rdtsc
 * 0000000140741DEF: shl     rdx, 20h
 * 0000000140741DF3: xor     r8d, r8d
 * 0000000140741DF6: or      rax, rdx
 * 0000000140741DF9: mov     [rsp+1A10h+BugCheckParameter4], rdi
 * 0000000140741DFE: mov     rcx, rax
 * 0000000140741E01: mov     rdx, rax
 * 0000000140741E04: ror     rcx, 3
 * 0000000140741E08: mov     rax, r14
 * 0000000140741E0B: xor     rdx, rcx
 * 0000000140741E0E: mov     rcx, r12
 * 0000000140741E11: mul     rdx
 * 0000000140741E14: mov     rbx, rdx
 * 0000000140741E17: mov     [rbp+1910h+var_1078], rdx
 * 0000000140741E1E: xor     rbx, rax
 * 0000000140741E21: mov     rax, 346DC5D63886594Bh
 * 0000000140741E2B: mul     rbx
 * 0000000140741E2E: shr     rdx, 0Bh
 * 0000000140741E32: imul    rax, rdx, 2710h
 * 0000000140741E39: mov     rdx, rsi
 * 0000000140741E3C: sub     rbx, rax
 * 0000000140741E3F: mov     r9d, ebx
 * 0000000140741E42: call    [rbp+1910h+var_5E8]
 * 0000000140741E48: jmp     loc_140741D9B
 * 0000000140741E4D: xor     r15d, r15d
 * 0000000140741E50: cmp     [rbp+1910h+var_A48], r15d
 * 0000000140741E57: jz      loc_140742128
 * 0000000140741E5D: test    [rbp+1910h+var_100], 8000h
 * 0000000140741E67: jnz     loc_140742128
 * 0000000140741E6D: mov     r8, [rbp+1910h+var_A30]
 * 0000000140741E74: lea     rax, [rbp+1910h+var_790]
 * 0000000140741E7B: mov     r9, [rbp+1910h+var_A28]
 * 0000000140741E82: mov     r10, [rbp+1910h+var_A38]
 * 0000000140741E89: mov     r11, [rbp+1910h+var_A40]
 * 0000000140741E90: mov     [rbp+1910h+var_1988], r8
 * 0000000140741E94: mov     [rbp+1910h+Timer], r9
 * 0000000140741E98: mov     [rbp+1910h+var_1940], r10
 * 0000000140741E9C: mov     [rsp+1A10h+var_19B0], r11
 * 0000000140741EA1: mov     [rbp+1910h+var_1068], rax
 * 0000000140741EA8: mov     rax, cr8
 * 0000000140741EAC: mov     ecx, 2
 * 0000000140741EB1: cmp     al, cl
 * 0000000140741EB3: jnb     short loc_140741EB9
 * 0000000140741EB5: mov     cr8, rcx
 * 0000000140741EB9: mov     rax, gs:20h
 * 0000000140741EC2: mov     rbx, gs:188h
 * 0000000140741ECB: mov     [rsp+1A10h+var_19A0], rbx
 * 0000000140741ED0: mov     r13, [rax+2DD0h]
 * 0000000140741ED7: mov     al, [rax+2DEAh]
 * 0000000140741EDD: mov     [rsp+1A10h+var_19C0], r13
 * 0000000140741EE2: test    al, al
 * 0000000140741EE4: jz      short loc_140741F05
 * 0000000140741EE6: lea     rax, [rbp+1910h+var_1068]
 * 0000000140741EED: cmp     rax, r13
 * 0000000140741EF0: ja      short loc_140741F05
 * 0000000140741EF2: lea     rax, [r13-6000h]
 * 0000000140741EF9: lea     rdx, [rbp+1910h+var_1068]
 * 0000000140741F00: cmp     rdx, rax
 * 0000000140741F03: jnb     short loc_140741F0E
 * 0000000140741F05: mov     r13, [rbx+28h]
 * 0000000140741F09: mov     [rsp+1A10h+var_19C0], r13
 * 0000000140741F0E: mov     rdi, [rbp+1910h+var_1068]
 * 0000000140741F15: test    dword ptr [rdi+690h], 8000000h
 * 0000000140741F1F: jnz     loc_140742071
 * 0000000140741F25: mov     r10, cr0
 * 0000000140741F29: mov     rax, r10
 * 0000000140741F2C: mov     [rsp+1A10h+var_19D0], r10
 * 0000000140741F31: btr     rax, 10h
 * 0000000140741F36: mov     cr0, rax
 * 0000000140741F39: mov     r15d, [rdi+750h]
 * 0000000140741F40: lea     rsi, [rdi+758h]
 * 0000000140741F47: shl     r15, 4
 * 0000000140741F4B: xor     r12d, r12d
 * 0000000140741F4E: add     r15, rsi
 * 0000000140741F51: mov     r14, r15
 * 0000000140741F54: mov     [rsp+78h], r15
 * 0000000140741F59: cmp     [rdi+754h], r12d
 * 0000000140741F60: jbe     loc_14074203E
 * 0000000140741F66: mov     esi, r12d
 * 0000000140741F69: lea     r13d, [r12+1]
 * 0000000140741F6E: mov     r12, [r14]
 * 0000000140741F71: mov     rbx, [r14+8]
 * 0000000140741F75: mov     rcx, r12
 * 0000000140741F78: mov     [r12], rbx
 * 0000000140741F7C: call    MiPteInShadowRange
 * 0000000140741F81: test    eax, eax
 * 0000000140741F83: jz      short loc_140741F90
 * 0000000140741F85: mov     rdx, rbx
 * 0000000140741F88: mov     rcx, r12
 * 0000000140741F8B: call    MiWritePteShadow
 * 0000000140741F90: mov     rcx, cr4
 * 0000000140741F93: test    rcx, 20080h
 * 0000000140741F9A: jz      short loc_140741FAC
 * 0000000140741F9C: mov     rax, rcx
 * 0000000140741F9F: btc     rax, 7
 * 0000000140741FA4: mov     cr4, rax
 * 0000000140741FA7: mov     cr4, rcx
 * 0000000140741FAA: jmp     short loc_140741FB2
 * 0000000140741FAC: mov     rax, cr3
 * 0000000140741FAF: mov     cr3, rax
 * 0000000140741FB2: add     r14, 10h
 * 0000000140741FB6: add     esi, r13d
 * 0000000140741FB9: cmp     esi, [rdi+754h]
 * 0000000140741FBF: jb      short loc_140741F6E
 * 0000000140741FC1: mov     r15, [rsp+78h]
 * 0000000140741FC6: lea     rsi, [rdi+758h]
 * 0000000140741FCD: mov     r13, [rsp+1A10h+var_19C0]
 * 0000000140741FD2: xor     r12d, r12d
 * 0000000140741FD5: mov     r10, [rsp+1A10h+var_19D0]
 * 0000000140741FDA: mov     r11, [rsp+1A10h+var_19B0]
 * 0000000140741FDF: jmp     short loc_14074203E
 * 0000000140741FE1: mov     r9d, [rsi+8]
 * 0000000140741FE5: mov     rcx, r14
 * 0000000140741FE8: mov     rdx, [rsi]
 * 0000000140741FEB: mov     ebx, r9d
 * 0000000140741FEE: cmp     r9d, 8
 * 0000000140741FF2: jb      short loc_14074201A
 * 0000000140741FF4: mov     r8d, r9d
 * 0000000140741FF7: mov     r12d, 1
 * 0000000140741FFD: shr     r8, 3
 * 0000000140742001: mov     rax, [rcx]
 * 0000000140742004: add     ebx, 0FFFFFFF8h
 * 0000000140742007: mov     [rdx], rax
 * 000000014074200A: add     rcx, 8
 * 000000014074200E: add     rdx, 8
 * 0000000140742012: sub     r8, r12
 * 0000000140742015: jnz     short loc_140742001
 * 0000000140742017: xor     r12d, r12d
 * 000000014074201A: test    ebx, ebx
 * 000000014074201C: jz      short loc_140742037
 * 000000014074201E: sub     rdx, rcx
 * 0000000140742021: mov     r12d, 1
 * 0000000140742027: mov     al, [rcx]
 * 0000000140742029: mov     [rdx+rcx], al
 * 000000014074202C: add     rcx, r12
 * 000000014074202F: add     ebx, 0FFFFFFFFh
 * 0000000140742032: jnz     short loc_140742027
 * 0000000140742034: xor     r12d, r12d
 * 0000000140742037: add     r14, r9
 * 000000014074203A: add     rsi, 10h
 * 000000014074203E: cmp     rsi, r15
 * 0000000140742041: jb      short loc_140741FE1
 * 0000000140742043: mov     rax, [rdi+1E8h]
 * 000000014074204A: mov     byte ptr [rax], 0C3h
 * 000000014074204D: mov     cr0, r10
 * 0000000140742051: mov     rdi, [rbp+1910h+var_1068]
 * 0000000140742058: mov     ecx, 2
 * 000000014074205D: mov     rbx, [rsp+1A10h+var_19A0]
 * 0000000140742062: xor     r15d, r15d
 * 0000000140742065: mov     r8, [rbp+1910h+var_1988]
 * 0000000140742069: mov     r9, [rbp+1910h+Timer]
 * 000000014074206D: mov     r10, [rbp+1910h+var_1940]
 * 0000000140742071: cmp     [rdi+638h], r15d
 * 0000000140742078: jz      short loc_140742086
 * 000000014074207A: mov     rax, cr8
 * 000000014074207E: cmp     al, cl
 * 0000000140742080: jnb     short loc_140742086
 * 0000000140742082: mov     cr8, rcx
 * 0000000140742086: mov     ecx, [rdi+638h]
 * 000000014074208C: test    ecx, ecx
 * 000000014074208E: jz      loc_1407424C0
 * 0000000140742094: sub     ecx, 1
 * 0000000140742097: jz      loc_1407424B3
 * 000000014074209D: sub     ecx, 1
 * 00000001407420A0: jz      short loc_140742119
 * 00000001407420A2: sub     ecx, 1
 * 00000001407420A5: jz      short loc_14074210D
 * 00000001407420A7: sub     ecx, 1
 * 00000001407420AA: jz      short loc_1407420E8
 * 00000001407420AC: cmp     ecx, 1
 * 00000001407420AF: jz      short loc_1407420CA
 * 00000001407420B1: mov     rax, [rdi+4C0h]
 * 00000001407420B8: mov     ecx, 1
 * 00000001407420BD: lock or [rax+340h], rcx
 * 00000001407420C5: jmp     loc_1407424C0
 * 00000001407420CA: mov     ecx, [rdi+690h]
 * 00000001407420D0: mov     rax, gs:188h
 * 00000001407420D9: shr     ecx, 0Ah
 * 00000001407420DC: and     ecx, 1Fh
 * 00000001407420DF: lock bts [rax], ecx
 * 00000001407420E3: jmp     loc_1407424C0
 * 00000001407420E8: mov     rax, gs:188h
 * 00000001407420F1: mov     edx, [rdi+690h]
 * 00000001407420F7: shr     edx, 0Ah
 * 00000001407420FA: and     edx, 1Fh
 * 00000001407420FD: mov     rcx, [rax+0B8h]
 * 0000000140742104: lock bts [rcx], edx
 * 0000000140742108: jmp     loc_1407424C0
 * 000000014074210D: mov     rax, [rdi+470h]
 * 0000000140742114: jmp     loc_1407424BA
 * 0000000140742119: mov     rax, [rdi+468h]
 * 0000000140742120: jmp     loc_1407424BA
 * 0000000140742125: xor     r15d, r15d
 * 0000000140742128: cli
 * 0000000140742129: cmp     byte ptr cs:KdDebuggerNotPresent, r15b
 * 0000000140742130: jnz     short loc_140742134
 * 0000000140742132: jmp     short loc_140742132
 * 0000000140742134: sti
 * 0000000140742135: mov     rax, [rbp+1910h+var_1988]
 * 0000000140742139: test    rax, rax
 * 000000014074213C: jz      short loc_14074215A
 * 000000014074213E: mov     rcx, [rbp+1910h+var_1940]
 * 0000000140742142: mov     [rax+10h], rcx
 * 0000000140742146: lock or [rsp+0], r15d
 * 000000014074214B: lea     rcx, [rax+18h]; Event
 * 000000014074214F: xor     r8d, r8d; Wait
 * 0000000140742152: mov     edx, r12d; Increment
 * 0000000140742155: call    KeSetEvent
 * 000000014074215A: lea     rax, [rbp+1910h+var_790]
 * 0000000140742161: mov     ecx, 750h
 * 0000000140742166: mov     edx, 0EAh
 * 000000014074216B: mov     [rax], r15
 * 000000014074216E: add     ecx, 0FFFFFFF8h
 * 0000000140742171: add     rax, 8
 * 0000000140742175: sub     rdx, r12
 * 0000000140742178: jnz     short loc_14074216B
 * 000000014074217A: test    ecx, ecx
 * 000000014074217C: jz      short loc_140742189
 * 000000014074217E: mov     [rax], r15b
 * 0000000140742181: add     rax, r12
 * 0000000140742184: add     ecx, 0FFFFFFFFh
 * 0000000140742187: jnz     short loc_14074217E
 * 0000000140742189: cli
 * 000000014074218A: cmp     byte ptr cs:KdDebuggerNotPresent, r15b
 * 0000000140742191: jnz     short loc_140742195
 * 0000000140742193: jmp     short loc_140742193
 * 0000000140742195: sti
 * 0000000140742196: mov     al, r12b
 * 0000000140742199: jmp     loc_140731C03
 * 000000014074219E: xor     r8d, r8d; BugCheckParameter2
 * 00000001407421A1: mov     [rbp+1910h+var_177C], 4F400h
 * 00000001407421AB: mov     ecx, [rbp+1910h+var_177C]
 * 00000001407421B1: ror     ecx, 0AAh; BugCheckCode
 * 00000001407421B4: mov     [rsp+1A10h+BugCheckParameter4], 0Bh; BugCheckParameter4
 * 00000001407421BD: lea     edx, [r8+2]; BugCheckParameter1
 * 00000001407421C1: call    KeBugCheckEx
 * 00000001407421C7: xor     eax, eax
 * 00000001407421C9: mov     [rbp+1910h+var_1814], 4F400h
 * 00000001407421D3: mov     ecx, [rbp+1910h+var_1814]
 * 00000001407421D9: movsxd  r9, edx; BugCheckParameter3
 * 00000001407421DC: movsxd  r8, ebx; BugCheckParameter2
 * 00000001407421DF: lea     edx, [rax+0Ch]; BugCheckParameter1
 * 00000001407421E2: ror     ecx, 0AAh; BugCheckCode
 * 00000001407421E5: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001407421EA: call    KeBugCheckEx
 * 00000001407421F0: mov     [rbp+1910h+var_1728], 4F400h
 * 00000001407421FA: mov     r9, rdi; BugCheckParameter3
 * 00000001407421FD: mov     ecx, [rbp+1910h+var_1728]
 * 0000000140742203: mov     eax, ebx
 * 0000000140742205: mov     r8d, edx; BugCheckParameter2
 * 0000000140742208: mov     edx, 9; BugCheckParameter1
 * 000000014074220D: ror     ecx, 0AAh; BugCheckCode
 * 0000000140742210: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140742215: call    KeBugCheckEx
 * 000000014074221B: xor     edx, edx
 * 000000014074221D: mov     [rbp+1910h+var_1884], 4F400h
 * 0000000140742227: mov     ecx, [rbp+1910h+var_1884]
 * 000000014074222D: xor     r8d, r8d; BugCheckParameter2
 * 0000000140742230: mov     [rsp+1A10h+BugCheckParameter4], rdx; BugCheckParameter4
 * 0000000140742235: mov     r9, rax; BugCheckParameter3
 * 0000000140742238: ror     ecx, 0AAh; BugCheckCode
 * 000000014074223B: lea     edx, [r8+3]; BugCheckParameter1
 * 000000014074223F: call    KeBugCheckEx
 * 0000000140742245: mov     [rbp+1910h+var_16FC], 4F400h
 * 000000014074224F: xor     eax, eax
 * 0000000140742251: mov     ecx, [rbp+1910h+var_16FC]
 * 0000000140742257: xor     r9d, r9d; BugCheckParameter3
 * 000000014074225A: ror     ecx, 0AAh; BugCheckCode
 * 000000014074225D: xor     r8d, r8d; BugCheckParameter2
 * 0000000140742260: xor     edx, edx; BugCheckParameter1
 * 0000000140742262: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140742267: call    KeBugCheckEx
 * 000000014074226D: mov     [rbp+1910h+var_1938], 4F400h
 * 0000000140742274: xor     r8d, r8d; BugCheckParameter2
 * 0000000140742277: mov     ecx, [rbp+1910h+var_1938]
 * 000000014074227A: mov     rdx, r15; BugCheckParameter1
 * 000000014074227D: ror     ecx, 0AAh; BugCheckCode
 * 0000000140742280: mov     [rsp+1A10h+BugCheckParameter4], 8; BugCheckParameter4
 * 0000000140742289: call    KeBugCheckEx
 * 000000014074228F: mov     r8d, r13d; BugCheckParameter2
 * 0000000140742292: mov     rdx, r15; BugCheckParameter1
 * 0000000140742295: mov     [rbp+1910h+var_1724], 4F400h
 * 000000014074229F: mov     ecx, [rbp+1910h+var_1724]
 * 00000001407422A5: mov     rax, [rbp+1910h+BaseAddress]
 * 00000001407422AC: mov     r9, [rbp+r8*8+1910h+PcValue]; BugCheckParameter3
 * 00000001407422B4: ror     ecx, 0AAh; BugCheckCode
 * 00000001407422B7: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001407422BC: call    KeBugCheckEx
 * 00000001407422C2: xor     r9d, r9d; BugCheckParameter3
 * 00000001407422C5: mov     [rbp+1910h+var_176C], 4F400h
 * 00000001407422CF: mov     ecx, [rbp+1910h+var_176C]
 * 00000001407422D5: mov     r8, r15; BugCheckParameter2
 * 00000001407422D8: ror     ecx, 0AAh; BugCheckCode
 * 00000001407422DB: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001407422E0: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 00000001407422E4: call    KeBugCheckEx
 * 00000001407422EA: mov     r8, [rsp+78h]; BugCheckParameter2
 * 00000001407422EF: mov     r9, r11; BugCheckParameter3
 * 00000001407422F2: mov     [rbp+1910h+var_1804], 4F400h
 * 00000001407422FC: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140742301: mov     ecx, [rbp+1910h+var_1804]
 * 0000000140742307: ror     ecx, 0AAh; BugCheckCode
 * 000000014074230A: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 000000014074230F: call    KeBugCheckEx
 * 0000000140742315: mov     r8, [rsp+78h]; BugCheckParameter2
 * 000000014074231A: mov     r9d, 2; BugCheckParameter3
 * 0000000140742320: mov     [rbp+1910h+var_1934], 4F400h
 * 0000000140742327: mov     ecx, [rbp+1910h+var_1934]
 * 000000014074232A: ror     ecx, 0AAh; BugCheckCode
 * 000000014074232D: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140742331: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140742336: call    KeBugCheckEx
 * 000000014074233C: mov     r9d, 3; BugCheckParameter3
 * 0000000140742342: mov     [rbp+1910h+var_1930], 4F400h
 * 0000000140742349: mov     ecx, [rbp+1910h+var_1930]
 * 000000014074234C: mov     r8, r15; BugCheckParameter2
 * 000000014074234F: ror     ecx, 0AAh; BugCheckCode
 * 0000000140742352: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140742357: lea     edx, [r9+7]; BugCheckParameter1
 * 000000014074235B: call    KeBugCheckEx
 * 0000000140742361: xor     r9d, r9d; BugCheckParameter3
 * 0000000140742364: mov     [rbp+1910h+var_1928], 4F400h
 * 000000014074236B: mov     ecx, [rbp+1910h+var_1928]
 * 000000014074236E: mov     r8, r15; BugCheckParameter2
 * 0000000140742371: ror     ecx, 0AAh; BugCheckCode
 * 0000000140742374: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140742379: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 000000014074237D: call    KeBugCheckEx
 * 0000000140742383: mov     r8, [rsp+1A10h+var_19B0]; BugCheckParameter2
 * 0000000140742388: mov     r9, r11; BugCheckParameter3
 * 000000014074238B: mov     [rbp+1910h+var_1920], 4F400h
 * 0000000140742392: mov     edx, 0Ah; BugCheckParameter1
 * 0000000140742397: mov     ecx, [rbp+1910h+var_1920]
 * 000000014074239A: ror     ecx, 0AAh; BugCheckCode
 * 000000014074239D: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001407423A2: call    KeBugCheckEx
 * 00000001407423A8: mov     r8, [rsp+1A10h+var_19B0]; BugCheckParameter2
 * 00000001407423AD: mov     r9d, 2; BugCheckParameter3
 * 00000001407423B3: mov     [rbp+1910h+var_1918], 4F400h
 * 00000001407423BA: mov     ecx, [rbp+1910h+var_1918]
 * 00000001407423BD: ror     ecx, 0AAh; BugCheckCode
 * 00000001407423C0: lea     edx, [r9+8]; BugCheckParameter1
 * 00000001407423C4: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001407423C9: call    KeBugCheckEx
 * 00000001407423CF: mov     r9d, 3; BugCheckParameter3
 * 00000001407423D5: mov     [rbp+1910h+var_1910], 4F400h
 * 00000001407423DC: mov     ecx, [rbp+1910h+var_1910]
 * 00000001407423DF: mov     r8, r15; BugCheckParameter2
 * 00000001407423E2: ror     ecx, 0AAh; BugCheckCode
 * 00000001407423E5: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001407423EA: lea     edx, [r9+7]; BugCheckParameter1
 * 00000001407423EE: call    KeBugCheckEx
 * 00000001407423F4: xor     r9d, r9d; BugCheckParameter3
 * 00000001407423F7: mov     [rbp+1910h+var_1900], 4F400h
 * 00000001407423FE: mov     ecx, [rbp+1910h+var_1900]
 * 0000000140742401: mov     r8, r15; BugCheckParameter2
 * 0000000140742404: ror     ecx, 0AAh; BugCheckCode
 * 0000000140742407: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 000000014074240C: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 0000000140742410: call    KeBugCheckEx
 * 0000000140742416: mov     r8, [rsp+1A10h+var_19C0]; BugCheckParameter2
 * 000000014074241B: mov     r9, rdx; BugCheckParameter3
 * 000000014074241E: mov     [rbp+1910h+var_18F8], 4F400h
 * 0000000140742425: mov     edx, 0Ah; BugCheckParameter1
 * 000000014074242A: mov     ecx, [rbp+1910h+var_18F8]
 * 000000014074242D: ror     ecx, 0AAh; BugCheckCode
 * 0000000140742430: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 0000000140742435: call    KeBugCheckEx
 * 000000014074243B: mov     r8, [rsp+1A10h+var_19C0]; BugCheckParameter2
 * 0000000140742440: mov     r9d, 2; BugCheckParameter3
 * 0000000140742446: mov     [rbp+1910h+var_18F0], 4F400h
 * 000000014074244D: mov     ecx, [rbp+1910h+var_18F0]
 * 0000000140742450: ror     ecx, 0AAh; BugCheckCode
 * 0000000140742453: lea     edx, [r9+8]; BugCheckParameter1
 * 0000000140742457: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 000000014074245C: call    KeBugCheckEx
 * 0000000140742462: mov     r9d, 3; BugCheckParameter3
 * 0000000140742468: mov     [rbp+1910h+var_18E8], 4F400h
 * 000000014074246F: mov     ecx, [rbp+1910h+var_18E8]
 * 0000000140742472: mov     r8, r15; BugCheckParameter2
 * 0000000140742475: ror     ecx, 0AAh; BugCheckCode
 * 0000000140742478: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 000000014074247D: lea     edx, [r9+7]; BugCheckParameter1
 * 0000000140742481: call    KeBugCheckEx
 * 0000000140742487: mov     eax, [rdi+10h]
 * 000000014074248A: mov     r9, rcx; BugCheckParameter3
 * 000000014074248D: mov     [rbp+1910h+var_1730], 4F400h
 * 0000000140742497: mov     r8, r15; BugCheckParameter2
 * 000000014074249A: mov     ecx, [rbp+1910h+var_1730]
 * 00000001407424A0: mov     edx, 0Dh; BugCheckParameter1
 * 00000001407424A5: ror     ecx, 0AAh; BugCheckCode
 * 00000001407424A8: mov     [rsp+1A10h+BugCheckParameter4], rax; BugCheckParameter4
 * 00000001407424AD: call    KeBugCheckEx
 * 00000001407424B3: mov     rax, [rdi+458h]
 * 00000001407424BA: lock bts qword ptr [rax], 0
 * 00000001407424C0: mov     [rbx+600h], r15
 * 00000001407424C7: mov     rdx, r11
 * 00000001407424CA: mov     [rbx+680h], r15
 * 00000001407424D1: mov     rax, [rbp+1910h+var_1068]
 * 00000001407424D8: mov     [rsp+30h], r13
 * 00000001407424DD: mov     rcx, [rax+150h]
 * 00000001407424E4: mov     [rsp+1A10h+var_19E8], rcx
 * 00000001407424E9: mov     ecx, 109h
 * 00000001407424EE: mov     [rsp+1A10h+BugCheckParameter4], r8
 * 00000001407424F3: mov     r8, r10
 * 00000001407424F6: call    SdbpCheckDll
 * 00000001407424FB: int     3; Trap to Debugger
 */
