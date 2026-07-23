/*
 * XREFs of sub_140778D9C @ 0x140778D9C
 * Callers:
 *     KiVerifyXcpt15 @ 0x1407772E0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140777A80 (KiFilterFiberContext.c)
 * Callees:
 *     RtlDecompressBufferEx @ 0x140005AF8 (RtlDecompressBufferEx.c)
 *     RtlGetCompressionWorkSpaceSize @ 0x1400064BC (RtlGetCompressionWorkSpaceSize.c)
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     RtlCaptureImageExceptionValues @ 0x140082E38 (RtlCaptureImageExceptionValues.c)
 *     RtlPcToFileHeader @ 0x1400A3AD0 (RtlPcToFileHeader.c)
 *     MmSetPageProtection @ 0x1400B0300 (MmSetPageProtection.c)
 *     MmQueryApiSetSchema @ 0x1400B0D70 (MmQueryApiSetSchema.c)
 *     RtlLookupFunctionTable @ 0x1400B38E8 (RtlLookupFunctionTable.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExProtectPool @ 0x1400EE180 (ExProtectPool.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     KeInitializeTimer @ 0x1400EEA84 (KeInitializeTimer.c)
 *     RtlLookupFunctionEntry @ 0x1400F4070 (RtlLookupFunctionEntry.c)
 *     ExSetTimer @ 0x1400F7AB0 (ExSetTimer.c)
 *     RtlSectionTableFromVirtualAddress @ 0x1400F82A0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlGetEnabledExtendedFeatures @ 0x140132414 (RtlGetEnabledExtendedFeatures.c)
 *     ExAllocateTimer @ 0x140133010 (ExAllocateTimer.c)
 *     RtlpConvertFunctionEntry @ 0x1401412B4 (RtlpConvertFunctionEntry.c)
 *     sub_1401588B8 @ 0x1401588B8 (sub_1401588B8.c)
 *     RtlpSameFunction @ 0x140159958 (RtlpSameFunction.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlIsHypercallOverlayLocked @ 0x1401BAA24 (HvlIsHypercallOverlayLocked.c)
 *     KeComputeParallelSha256StateSize @ 0x1401D257C (KeComputeParallelSha256StateSize.c)
 *     KeKvaShadowingActive @ 0x1401D8BE0 (KeKvaShadowingActive.c)
 *     ExQueryPoolBlockSize @ 0x14022CE48 (ExQueryPoolBlockSize.c)
 *     sub_14024FE34 @ 0x14024FE34 (sub_14024FE34.c)
 *     sub_140251E08 @ 0x140251E08 (sub_140251E08.c)
 *     $$c1 @ 0x1402528A4 ($$c1.c)
 *     $$f4 @ 0x140253298 ($$f4.c)
 *     KiGetGdtIdt @ 0x140253480 (KiGetGdtIdt.c)
 *     SdbpCheckDll @ 0x1402534D0 (SdbpCheckDll.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExFreePool @ 0x140255B30 (ExFreePool.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     PsEnumProcessThreads @ 0x140459774 (PsEnumProcessThreads.c)
 *     MmImageSectionPagable @ 0x14047C974 (MmImageSectionPagable.c)
 *     LdrResFindResource @ 0x140544984 (LdrResFindResource.c)
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
 *     sub_140777D18 @ 0x140777D18 (sub_140777D18.c)
 *     $$5e @ 0x140778B84 ($$5e.c)
 *     sub_14078D96C @ 0x14078D96C (sub_14078D96C.c)
 *     sub_14078E00C @ 0x14078E00C (sub_14078E00C.c)
 *     KiSwInterruptPresent @ 0x1407BD344 (KiSwInterruptPresent.c)
 *     MmStrongCodeGuaranteesEnforced @ 0x1407BD3B4 (MmStrongCodeGuaranteesEnforced.c)
 *     KiConnectSwInterrupt @ 0x1407CFB34 (KiConnectSwInterrupt.c)
 *     KiGetHalExtensionList @ 0x1407CFB40 (KiGetHalExtensionList.c)
 *     KiGetHalExtensionModuleFromLinks @ 0x1407CFB58 (KiGetHalExtensionModuleFromLinks.c)
 *     SeMinTcbLowering @ 0x1407D1500 (SeMinTcbLowering.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140778D9C @ 0x140778D9C
 * Reason: Hex-Rays returned no pseudocode for 0x140778D9C
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140778D9C: mov     rax, rsp
 * 0000000140778D9F: mov     [rax+20h], r9
 * 0000000140778DA3: mov     [rax+18h], r8d
 * 0000000140778DA7: mov     [rax+10h], edx
 * 0000000140778DAA: mov     [rax+8], ecx
 * 0000000140778DAD: push    rbp
 * 0000000140778DAE: push    rbx
 * 0000000140778DAF: push    rsi
 * 0000000140778DB0: push    rdi
 * 0000000140778DB1: push    r12
 * 0000000140778DB3: push    r13
 * 0000000140778DB5: push    r14
 * 0000000140778DB7: push    r15
 * 0000000140778DB9: lea     rbp, [rax-1C78h]
 * 0000000140778DC0: sub     rsp, 1D38h
 * 0000000140778DC7: mov     rax, r9
 * 0000000140778DCA: mov     esi, edx
 * 0000000140778DCC: cli
 * 0000000140778DCD: xor     ecx, ecx
 * 0000000140778DCF: cmp     byte ptr cs:KdDebuggerNotPresent, cl
 * 0000000140778DD5: jnz     short loc_140778DD9
 * 0000000140778DD7: jmp     short loc_140778DD7
 * 0000000140778DD9: sti
 * 0000000140778DDA: mov     r15d, 5
 * 0000000140778DE0: mov     [rbp+1C70h+var_1540], r15
 * 0000000140778DE7: lea     edx, [r15+24h]
 * 0000000140778DEB: lea     r14d, [r15-1]
 * 0000000140778DEF: test    rax, rax
 * 0000000140778DF2: jnz     short loc_140778E10
 * 0000000140778DF4: lea     eax, [rsi-3]
 * 0000000140778DF7: test    eax, 0FFFFFFFDh
 * 0000000140778DFC: jnz     short loc_140778E08
 * 0000000140778DFE: xor     eax, eax
 * 0000000140778E00: mov     esi, eax
 * 0000000140778E02: mov     [rbp+1C70h+arg_8], eax
 * 0000000140778E08: mov     eax, [rbp+1C70h+arg_20]
 * 0000000140778E0E: jmp     short loc_140778E2D
 * 0000000140778E10: cmp     esi, r15d
 * 0000000140778E13: ja      short loc_140778E1A
 * 0000000140778E15: bt      edx, esi
 * 0000000140778E18: jb      short loc_140778E24
 * 0000000140778E1A: xor     eax, eax
 * 0000000140778E1C: mov     esi, eax
 * 0000000140778E1E: mov     [rbp+1C70h+arg_8], eax
 * 0000000140778E24: mov     eax, [rbp+1C70h+arg_20]
 * 0000000140778E2A: or      eax, r14d
 * 0000000140778E2D: mov     [rbp+1C70h+var_1AC0], eax
 * 0000000140778E33: cli
 * 0000000140778E34: xor     eax, eax
 * 0000000140778E36: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140778E3C: jnz     short loc_140778E40
 * 0000000140778E3E: jmp     short loc_140778E3E
 * 0000000140778E40: sti
 * 0000000140778E41: mov     r9, cs:KiInitData; BugCheckParameter3
 * 0000000140778E48: cmp     r9, 0Bh
 * 0000000140778E4C: jnz     loc_14078D3A8
 * 0000000140778E52: mov     ebx, eax
 * 0000000140778E54: lea     rcx, __ts_z
 * 0000000140778E5B: lea     rax, __ts_88
 * 0000000140778E62: jmp     short loc_140778E69
 * 0000000140778E64: add     ebx, [rax]
 * 0000000140778E66: add     rax, r14
 * 0000000140778E69: cmp     rax, rcx
 * 0000000140778E6C: jnz     short loc_140778E64
 * 0000000140778E6E: xor     eax, eax
 * 0000000140778E70: lea     rcx, __ps_z
 * 0000000140778E77: mov     edx, eax
 * 0000000140778E79: lea     rax, __ps_37
 * 0000000140778E80: jmp     short loc_140778E87
 * 0000000140778E82: add     edx, [rax]
 * 0000000140778E84: add     rax, r14
 * 0000000140778E87: cmp     rax, rcx
 * 0000000140778E8A: jnz     short loc_140778E82
 * 0000000140778E8C: xor     eax, eax
 * 0000000140778E8E: cmp     ebx, edx
 * 0000000140778E90: jnz     loc_14078D3D1
 * 0000000140778E96: cmp     cs:$$0, rax
 * 0000000140778E9D: lea     r12, cs:140000000h
 * 0000000140778EA4: lea     edi, [rax+6]
 * 0000000140778EA7: jnz     loc_1407796E3
 * 0000000140778EAD: mov     [rsp+40h], eax
 * 0000000140778EB1: lea     r8, aFunctionextent; "FUNCTIONEXTENTLIST"
 * 0000000140778EB8: mov     qword ptr [rsp+1D70h+var_1D38], rax
 * 0000000140778EBD: lea     edx, [rdi+4]
 * 0000000140778EC0: mov     [rsp+1D70h+WorkSpace], rax
 * 0000000140778EC5: xor     r9d, r9d
 * 0000000140778EC8: lea     rax, [rbp+1C70h+var_1538]
 * 0000000140778ECF: mov     [rbp+1C70h+var_E88], r12
 * 0000000140778ED6: mov     [rsp+1D70h+FinalUncompressedSize], rax
 * 0000000140778EDB: mov     rcx, r12
 * 0000000140778EDE: lea     rax, [rbp+1C70h+BugCheckParameter2]
 * 0000000140778EE5: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax
 * 0000000140778EEA: call    LdrResFindResource
 * 0000000140778EEF: xor     ebx, ebx
 * 0000000140778EF1: lea     r13d, [rdi-5]
 * 0000000140778EF5: test    eax, eax
 * 0000000140778EF7: js      loc_140778F96
 * 0000000140778EFD: mov     rcx, [rbp+1C70h+var_1538]
 * 0000000140778F04: mov     edx, 0FFFFFFF7h
 * 0000000140778F09: lea     rax, [rcx-8]
 * 0000000140778F0D: cmp     rax, rdx
 * 0000000140778F10: ja      loc_140778F96
 * 0000000140778F16: mov     [rbp+1C70h+var_1AB4], ecx
 * 0000000140778F1C: mov     rcx, r12; BaseAddress
 * 0000000140778F1F: call    RtlImageNtHeader
 * 0000000140778F24: test    rax, rax
 * 0000000140778F27: jz      short loc_140778F96
 * 0000000140778F29: lea     r8d, [rdi-3]; Directory
 * 0000000140778F2D: mov     dl, r13b; MappedAsImage
 * 0000000140778F30: lea     r9, [rbp+1C70h+Size]; Size
 * 0000000140778F37: mov     rcx, r12; BaseAddress
 * 0000000140778F3A: call    RtlImageDirectoryEntryToData
 * 0000000140778F3F: mov     r12, rax
 * 0000000140778F42: xor     eax, eax
 * 0000000140778F44: test    r12, r12
 * 0000000140778F47: jz      short loc_140778F98
 * 0000000140778F49: mov     rcx, [rbp+1C70h+BugCheckParameter2]
 * 0000000140778F50: mov     esi, eax
 * 0000000140778F52: mov     r15d, 0C0000001h
 * 0000000140778F58: mov     edx, [rcx]
 * 0000000140778F5A: sub     edx, 45585443h
 * 0000000140778F60: jz      short loc_140778F70
 * 0000000140778F62: cmp     edx, 9
 * 0000000140778F65: jz      loc_140779442
 * 0000000140778F6B: jmp     loc_140779207
 * 0000000140778F70: mov     ecx, r14d; CompressionFormatAndEngine
 * 0000000140778F73: lea     r8, [rbp+1C70h+CompressFragmentWorkSpaceSize]; CompressFragmentWorkSpaceSize
 * 0000000140778F7A: lea     rdx, [rbp+1C70h+CompressBufferWorkSpaceSize]; CompressBufferWorkSpaceSize
 * 0000000140778F81: call    RtlGetCompressionWorkSpaceSize
 * 0000000140778F86: test    eax, eax
 * 0000000140778F88: jns     short loc_140778FE7
 * 0000000140778F8A: mov     esi, [rbp+1C70h+arg_8]
 * 0000000140778F90: mov     r15d, 5
 * 0000000140778F96: xor     eax, eax
 * 0000000140778F98: mov     [rbp+1C70h+var_E80], rbx
 * 0000000140778F9F: lea     rdx, [rbp+1C70h+var_E88]
 * 0000000140778FA6: mov     ebx, 18h
 * 0000000140778FAB: lea     rcx, $$0
 * 0000000140778FB2: lea     edi, [rbx-15h]
 * 0000000140778FB5: mov     rax, [rdx]
 * 0000000140778FB8: add     ebx, 0FFFFFFF8h
 * 0000000140778FBB: mov     [rcx], rax
 * 0000000140778FBE: add     rdx, 8
 * 0000000140778FC2: add     rcx, 8
 * 0000000140778FC6: sub     rdi, r13
 * 0000000140778FC9: jnz     short loc_140778FB5
 * 0000000140778FCB: test    ebx, ebx
 * 0000000140778FCD: jz      loc_140779726
 * 0000000140778FD3: mov     al, [rdx]
 * 0000000140778FD5: add     rdx, r13
 * 0000000140778FD8: mov     [rcx], al
 * 0000000140778FDA: add     rcx, r13
 * 0000000140778FDD: add     ebx, 0FFFFFFFFh
 * 0000000140778FE0: jnz     short loc_140778FD3
 * 0000000140778FE2: jmp     loc_140779726
 * 0000000140778FE7: mov     rax, [rbp+1C70h+BugCheckParameter2]
 * 0000000140778FEE: mov     r14d, [rax+4]
 * 0000000140778FF2: cmp     r14d, 8
 * 0000000140778FF6: jb      loc_14078D3FA
 * 0000000140778FFC: rdtsc
 * 0000000140778FFE: shl     rdx, 20h
 * 0000000140779002: mov     r8, 7010008004002001h
 * 000000014077900C: or      rax, rdx
 * 000000014077900F: mov     ebx, 5
 * 0000000140779014: mov     rcx, rax
 * 0000000140779017: ror     rax, 3
 * 000000014077901B: xor     rcx, rax
 * 000000014077901E: mov     rax, r8
 * 0000000140779021: mul     rcx
 * 0000000140779024: mov     rcx, rdx
 * 0000000140779027: mov     [rbp+1C70h+var_1930], rdx
 * 000000014077902E: xor     rcx, rax
 * 0000000140779031: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014077903B: mul     rcx
 * 000000014077903E: shr     rdx, 1
 * 0000000140779041: imul    rax, rdx, 0Bh
 * 0000000140779045: sub     rcx, rax
 * 0000000140779048: cmp     ecx, ebx
 * 000000014077904A: ja      loc_1407790F5
 * 0000000140779050: jz      loc_1407790E3
 * 0000000140779056: test    ecx, ecx
 * 0000000140779058: jz      short loc_1407790CB
 * 000000014077905A: sub     ecx, r13d
 * 000000014077905D: jz      short loc_1407790B4
 * 000000014077905F: sub     ecx, r13d
 * 0000000140779062: jz      short loc_14077909C
 * 0000000140779064: cmp     ecx, r13d
 * 0000000140779067: jz      short loc_140779081
 * 0000000140779069: mov     [rbp+1C70h+var_1954], 67076494h
 * 0000000140779073: mov     edi, [rbp+1C70h+var_1954]
 * 0000000140779079: rol     edi, 4
 * 000000014077907C: jmp     loc_1407791E7
 * 0000000140779081: mov     [rbp+1C70h+var_1950], 0A8223938h
 * 000000014077908B: mov     edi, [rbp+1C70h+var_1950]
 * 0000000140779091: xor     edi, 3
 * 0000000140779094: ror     edi, 0Fh
 * 0000000140779097: jmp     loc_1407791E7
 * 000000014077909C: mov     [rbp+1C70h+var_194C], 85B5910Dh
 * 00000001407790A6: mov     edi, [rbp+1C70h+var_194C]
 * 00000001407790AC: ror     edi, 2
 * 00000001407790AF: jmp     loc_1407791E7
 * 00000001407790B4: mov     [rbp+1C70h+var_1948], 0B2AD31A1h
 * 00000001407790BE: mov     edi, [rbp+1C70h+var_1948]
 * 00000001407790C4: rol     edi, 1
 * 00000001407790C6: jmp     loc_1407791E7
 * 00000001407790CB: mov     [rbp+1C70h+var_1944], 0D098D0D8h
 * 00000001407790D5: mov     edi, [rbp+1C70h+var_1944]
 * 00000001407790DB: ror     edi, 6
 * 00000001407790DE: jmp     loc_1407791E7
 * 00000001407790E3: mov     [rbp+1C70h+var_1C88], 288C49EDh
 * 00000001407790EA: mov     edi, [rbp+1C70h+var_1C88]
 * 00000001407790ED: ror     edi, 5
 * 00000001407790F0: jmp     loc_1407791E7
 * 00000001407790F5: sub     ecx, edi
 * 00000001407790F7: jz      loc_1407791D8
 * 00000001407790FD: sub     ecx, r13d
 * 0000000140779100: jz      loc_1407791C9
 * 0000000140779106: sub     ecx, r13d
 * 0000000140779109: jz      loc_1407791BA
 * 000000014077910F: cmp     ecx, r13d
 * 0000000140779112: jz      loc_1407791A8
 * 0000000140779118: rdtsc
 * 000000014077911A: shl     rdx, 20h
 * 000000014077911E: or      rax, rdx
 * 0000000140779121: mov     rcx, rax
 * 0000000140779124: ror     rax, 3
 * 0000000140779128: xor     rcx, rax
 * 000000014077912B: mov     rax, r8
 * 000000014077912E: mul     rcx
 * 0000000140779131: mov     r8d, 4EC4EC4Fh
 * 0000000140779137: mov     rdi, rax
 * 000000014077913A: mov     [rbp+1C70h+var_1928], rdx
 * 0000000140779141: xor     edi, edx
 * 0000000140779143: mov     eax, r8d
 * 0000000140779146: mul     edi
 * 0000000140779148: mov     ecx, edi
 * 000000014077914A: shr     edi, 5
 * 000000014077914D: shr     edx, 3
 * 0000000140779150: mov     ebx, edi
 * 0000000140779152: imul    eax, edx, 1Ah
 * 0000000140779155: sub     ecx, eax
 * 0000000140779157: mov     eax, r8d
 * 000000014077915A: mul     edi
 * 000000014077915C: add     ecx, 61h ; 'a'
 * 000000014077915F: shr     edi, 5
 * 0000000140779162: shl     ecx, 8
 * 0000000140779165: shr     edx, 3
 * 0000000140779168: imul    eax, edx, 1Ah
 * 000000014077916B: sub     ebx, eax
 * 000000014077916D: mov     eax, r8d
 * 0000000140779170: mul     edi
 * 0000000140779172: add     ebx, 41h ; 'A'
 * 0000000140779175: or      ebx, ecx
 * 0000000140779177: shr     edx, 3
 * 000000014077917A: imul    eax, edx, 1Ah
 * 000000014077917D: mov     ecx, edi
 * 000000014077917F: shr     edi, 5
 * 0000000140779182: shl     ebx, 8
 * 0000000140779185: sub     ecx, eax
 * 0000000140779187: mov     eax, r8d
 * 000000014077918A: mul     edi
 * 000000014077918C: add     ecx, 61h ; 'a'
 * 000000014077918F: or      ecx, ebx
 * 0000000140779191: shr     edx, 3
 * 0000000140779194: imul    eax, edx, 1Ah
 * 0000000140779197: mov     ebx, 5
 * 000000014077919C: shl     ecx, 8
 * 000000014077919F: sub     edi, eax
 * 00000001407791A1: add     edi, 41h ; 'A'
 * 00000001407791A4: or      edi, ecx
 * 00000001407791A6: jmp     short loc_1407791E7
 * 00000001407791A8: mov     [rbp+1C70h+var_1C84], 0B0869E85h
 * 00000001407791AF: mov     edi, [rbp+1C70h+var_1C84]
 * 00000001407791B2: xor     edi, 9
 * 00000001407791B5: ror     edi, 21h
 * 00000001407791B8: jmp     short loc_1407791E7
 * 00000001407791BA: mov     [rbp+1C70h+var_1C80], 64664142h
 * 00000001407791C1: mov     edi, [rbp+1C70h+var_1C80]
 * 00000001407791C4: ror     edi, 8
 * 00000001407791C7: jmp     short loc_1407791E7
 * 00000001407791C9: mov     [rbp+1C70h+var_1C7C], 82C6A6D8h
 * 00000001407791D0: mov     edi, [rbp+1C70h+var_1C7C]
 * 00000001407791D3: rol     edi, 7
 * 00000001407791D6: jmp     short loc_1407791E7
 * 00000001407791D8: mov     [rbp+1C70h+var_1C78], 4E574672h
 * 00000001407791DF: mov     eax, [rbp+1C70h+var_1C78]
 * 00000001407791E2: xor     edi, eax
 * 00000001407791E4: ror     edi, 18h
 * 00000001407791E7: mov     edx, [rbp+1C70h+CompressBufferWorkSpaceSize]; NumberOfBytes
 * 00000001407791ED: mov     r8d, edi; Tag
 * 00000001407791F0: mov     ecx, 200h; PoolType
 * 00000001407791F5: call    ExAllocatePoolWithTag
 * 00000001407791FA: mov     rsi, rax
 * 00000001407791FD: xor     eax, eax
 * 00000001407791FF: test    rsi, rsi
 * 0000000140779202: jnz     short loc_140779218
 * 0000000140779204: mov     rbx, rax
 * 0000000140779207: mov     esi, [rbp+1C70h+arg_8]
 * 000000014077920D: mov     r15d, 5
 * 0000000140779213: jmp     loc_140778F98
 * 0000000140779218: rdtsc
 * 000000014077921A: shl     rdx, 20h
 * 000000014077921E: mov     rdi, 7010008004002001h
 * 0000000140779228: or      rax, rdx
 * 000000014077922B: mov     rcx, rax
 * 000000014077922E: ror     rax, 3
 * 0000000140779232: xor     rcx, rax
 * 0000000140779235: mov     rax, rdi
 * 0000000140779238: mul     rcx
 * 000000014077923B: mov     rcx, rdx
 * 000000014077923E: mov     [rbp+1C70h+var_1920], rdx
 * 0000000140779245: xor     rcx, rax
 * 0000000140779248: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140779252: mul     rcx
 * 0000000140779255: shr     rdx, 1
 * 0000000140779258: imul    rax, rdx, 0Bh
 * 000000014077925C: sub     rcx, rax
 * 000000014077925F: cmp     ecx, ebx
 * 0000000140779261: ja      loc_1407792EA
 * 0000000140779267: jz      short loc_1407792D8
 * 0000000140779269: test    ecx, ecx
 * 000000014077926B: jz      short loc_1407792C6
 * 000000014077926D: sub     ecx, r13d
 * 0000000140779270: jz      short loc_1407792B5
 * 0000000140779272: sub     ecx, r13d
 * 0000000140779275: jz      short loc_1407792A3
 * 0000000140779277: cmp     ecx, r13d
 * 000000014077927A: jz      short loc_14077928E
 * 000000014077927C: mov     [rbp+1C70h+var_1C74], 67076494h
 * 0000000140779283: mov     edi, [rbp+1C70h+var_1C74]
 * 0000000140779286: rol     edi, 4
 * 0000000140779289: jmp     loc_1407793DC
 * 000000014077928E: mov     [rbp+1C70h+var_1C70], 0A8223938h
 * 0000000140779295: mov     edi, [rbp+1C70h+var_1C70]
 * 0000000140779298: xor     edi, 3
 * 000000014077929B: ror     edi, 0Fh
 * 000000014077929E: jmp     loc_1407793DC
 * 00000001407792A3: mov     [rbp+1C70h+var_1C6C], 85B5910Dh
 * 00000001407792AA: mov     edi, [rbp+1C70h+var_1C6C]
 * 00000001407792AD: ror     edi, 2
 * 00000001407792B0: jmp     loc_1407793DC
 * 00000001407792B5: mov     [rbp+1C70h+var_1C68], 0B2AD31A1h
 * 00000001407792BC: mov     edi, [rbp+1C70h+var_1C68]
 * 00000001407792BF: rol     edi, 1
 * 00000001407792C1: jmp     loc_1407793DC
 * 00000001407792C6: mov     [rbp+1C70h+var_1C64], 0D098D0D8h
 * 00000001407792CD: mov     edi, [rbp+1C70h+var_1C64]
 * 00000001407792D0: ror     edi, 6
 * 00000001407792D3: jmp     loc_1407793DC
 * 00000001407792D8: mov     [rbp+1C70h+var_1C60], 288C49EDh
 * 00000001407792DF: mov     edi, [rbp+1C70h+var_1C60]
 * 00000001407792E2: ror     edi, 5
 * 00000001407792E5: jmp     loc_1407793DC
 * 00000001407792EA: mov     edx, 6
 * 00000001407792EF: sub     ecx, edx
 * 00000001407792F1: jz      loc_1407793CD
 * 00000001407792F7: sub     ecx, r13d
 * 00000001407792FA: jz      loc_1407793BE
 * 0000000140779300: sub     ecx, r13d
 * 0000000140779303: jz      loc_1407793AF
 * 0000000140779309: cmp     ecx, r13d
 * 000000014077930C: jz      loc_14077939D
 * 0000000140779312: rdtsc
 * 0000000140779314: shl     rdx, 20h
 * 0000000140779318: mov     r8d, 4EC4EC4Fh
 * 000000014077931E: or      rax, rdx
 * 0000000140779321: mov     rcx, rax
 * 0000000140779324: ror     rax, 3
 * 0000000140779328: xor     rcx, rax
 * 000000014077932B: mov     rax, rdi
 * 000000014077932E: mul     rcx
 * 0000000140779331: mov     rdi, rax
 * 0000000140779334: mov     [rbp+1C70h+var_1918], rdx
 * 000000014077933B: xor     edi, edx
 * 000000014077933D: mov     eax, r8d
 * 0000000140779340: mul     edi
 * 0000000140779342: mov     ecx, edi
 * 0000000140779344: shr     edi, 5
 * 0000000140779347: shr     edx, 3
 * 000000014077934A: mov     ebx, edi
 * 000000014077934C: imul    eax, edx, 1Ah
 * 000000014077934F: sub     ecx, eax
 * 0000000140779351: mov     eax, r8d
 * 0000000140779354: mul     edi
 * 0000000140779356: add     ecx, 61h ; 'a'
 * 0000000140779359: shr     edi, 5
 * 000000014077935C: shl     ecx, 8
 * 000000014077935F: shr     edx, 3
 * 0000000140779362: imul    eax, edx, 1Ah
 * 0000000140779365: sub     ebx, eax
 * 0000000140779367: mov     eax, r8d
 * 000000014077936A: mul     edi
 * 000000014077936C: add     ebx, 41h ; 'A'
 * 000000014077936F: or      ebx, ecx
 * 0000000140779371: shr     edx, 3
 * 0000000140779374: imul    eax, edx, 1Ah
 * 0000000140779377: mov     ecx, edi
 * 0000000140779379: shr     edi, 5
 * 000000014077937C: shl     ebx, 8
 * 000000014077937F: sub     ecx, eax
 * 0000000140779381: mov     eax, r8d
 * 0000000140779384: mul     edi
 * 0000000140779386: add     ecx, 61h ; 'a'
 * 0000000140779389: shr     edx, 3
 * 000000014077938C: or      ecx, ebx
 * 000000014077938E: imul    eax, edx, 1Ah
 * 0000000140779391: shl     ecx, 8
 * 0000000140779394: sub     edi, eax
 * 0000000140779396: add     edi, 41h ; 'A'
 * 0000000140779399: or      edi, ecx
 * 000000014077939B: jmp     short loc_1407793DC
 * 000000014077939D: mov     [rbp+1C70h+var_1C5C], 0B0869E85h
 * 00000001407793A4: mov     edi, [rbp+1C70h+var_1C5C]
 * 00000001407793A7: xor     edi, 9
 * 00000001407793AA: ror     edi, 21h
 * 00000001407793AD: jmp     short loc_1407793DC
 * 00000001407793AF: mov     [rbp+1C70h+var_1C58], 64664142h
 * 00000001407793B6: mov     edi, [rbp+1C70h+var_1C58]
 * 00000001407793B9: ror     edi, 8
 * 00000001407793BC: jmp     short loc_1407793DC
 * 00000001407793BE: mov     [rbp+1C70h+var_1C54], 82C6A6D8h
 * 00000001407793C5: mov     edi, [rbp+1C70h+var_1C54]
 * 00000001407793C8: rol     edi, 7
 * 00000001407793CB: jmp     short loc_1407793DC
 * 00000001407793CD: mov     [rbp+1C70h+var_1C50], 4E574672h
 * 00000001407793D4: mov     edi, [rbp+1C70h+var_1C50]
 * 00000001407793D7: xor     edi, edx
 * 00000001407793D9: ror     edi, 18h
 * 00000001407793DC: mov     rdx, r14; NumberOfBytes
 * 00000001407793DF: mov     r8d, edi; Tag
 * 00000001407793E2: mov     ecx, 200h; PoolType
 * 00000001407793E7: call    ExAllocatePoolWithTag
 * 00000001407793EC: mov     rbx, rax
 * 00000001407793EF: test    rax, rax
 * 00000001407793F2: jz      loc_1407796B5
 * 00000001407793F8: mov     eax, [rbp+1C70h+var_1AB4]
 * 00000001407793FE: lea     rdx, [rbp+1C70h+var_1AB4]
 * 0000000140779405: mov     r9, [rbp+1C70h+BugCheckParameter2]
 * 000000014077940C: add     eax, 0FFFFFFF8h
 * 000000014077940F: mov     [rsp+1D70h+WorkSpace], rsi; WorkSpace
 * 0000000140779414: add     r9, 8; CompressedBuffer
 * 0000000140779418: mov     [rsp+1D70h+FinalUncompressedSize], rdx; FinalUncompressedSize
 * 000000014077941D: mov     ecx, 4; CompressionFormat
 * 0000000140779422: mov     rdx, rbx; UncompressedBuffer
 * 0000000140779425: mov     [rsp+1D70h+CompressedBufferSize], eax; CompressedBufferSize
 * 0000000140779429: mov     r8d, r14d; UncompressedBufferSize
 * 000000014077942C: call    RtlDecompressBufferEx
 * 0000000140779431: test    eax, eax
 * 0000000140779433: js      loc_14078D431
 * 0000000140779439: mov     edi, 6
 * 000000014077943E: lea     r14d, [rdi-2]
 * 0000000140779442: xor     eax, eax
 * 0000000140779444: test    rbx, rbx
 * 0000000140779447: jnz     loc_140779652
 * 000000014077944D: rdtsc
 * 000000014077944F: shl     rdx, 20h
 * 0000000140779453: mov     rbx, 7010008004002001h
 * 000000014077945D: or      rax, rdx
 * 0000000140779460: mov     rcx, rax
 * 0000000140779463: ror     rax, 3
 * 0000000140779467: xor     rcx, rax
 * 000000014077946A: mov     rax, rbx
 * 000000014077946D: mul     rcx
 * 0000000140779470: mov     rcx, rdx
 * 0000000140779473: mov     [rbp+1C70h+var_1910], rdx
 * 000000014077947A: xor     rcx, rax
 * 000000014077947D: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140779487: mul     rcx
 * 000000014077948A: shr     rdx, 1
 * 000000014077948D: imul    rax, rdx, 0Bh
 * 0000000140779491: sub     rcx, rax
 * 0000000140779494: mov     eax, 5
 * 0000000140779499: cmp     ecx, eax
 * 000000014077949B: ja      loc_140779524
 * 00000001407794A1: jz      short loc_140779512
 * 00000001407794A3: test    ecx, ecx
 * 00000001407794A5: jz      short loc_140779500
 * 00000001407794A7: sub     ecx, r13d
 * 00000001407794AA: jz      short loc_1407794EF
 * 00000001407794AC: sub     ecx, r13d
 * 00000001407794AF: jz      short loc_1407794DD
 * 00000001407794B1: cmp     ecx, r13d
 * 00000001407794B4: jz      short loc_1407794C8
 * 00000001407794B6: mov     [rbp+1C70h+var_1C48], 67076494h
 * 00000001407794BD: mov     edi, [rbp+1C70h+var_1C48]
 * 00000001407794C0: rol     edi, 4
 * 00000001407794C3: jmp     loc_140779611
 * 00000001407794C8: mov     [rbp+1C70h+var_1C44], 0A8223938h
 * 00000001407794CF: mov     edi, [rbp+1C70h+var_1C44]
 * 00000001407794D2: xor     edi, 3
 * 00000001407794D5: ror     edi, 0Fh
 * 00000001407794D8: jmp     loc_140779611
 * 00000001407794DD: mov     [rbp+1C70h+var_1C40], 85B5910Dh
 * 00000001407794E4: mov     edi, [rbp+1C70h+var_1C40]
 * 00000001407794E7: ror     edi, 2
 * 00000001407794EA: jmp     loc_140779611
 * 00000001407794EF: mov     [rbp+1C70h+var_1C3C], 0B2AD31A1h
 * 00000001407794F6: mov     edi, [rbp+1C70h+var_1C3C]
 * 00000001407794F9: rol     edi, 1
 * 00000001407794FB: jmp     loc_140779611
 * 0000000140779500: mov     [rbp+1C70h+var_1C38], 0D098D0D8h
 * 0000000140779507: mov     edi, [rbp+1C70h+var_1C38]
 * 000000014077950A: ror     edi, 6
 * 000000014077950D: jmp     loc_140779611
 * 0000000140779512: mov     [rbp+1C70h+var_1C34], 288C49EDh
 * 0000000140779519: mov     edi, [rbp+1C70h+var_1C34]
 * 000000014077951C: ror     edi, 5
 * 000000014077951F: jmp     loc_140779611
 * 0000000140779524: sub     ecx, edi
 * 0000000140779526: jz      loc_140779602
 * 000000014077952C: sub     ecx, r13d
 * 000000014077952F: jz      loc_1407795F3
 * 0000000140779535: sub     ecx, r13d
 * 0000000140779538: jz      loc_1407795E4
 * 000000014077953E: cmp     ecx, r13d
 * 0000000140779541: jz      loc_1407795D2
 * 0000000140779547: rdtsc
 * 0000000140779549: shl     rdx, 20h
 * 000000014077954D: mov     r8d, 4EC4EC4Fh
 * 0000000140779553: or      rax, rdx
 * 0000000140779556: mov     rcx, rax
 * 0000000140779559: ror     rax, 3
 * 000000014077955D: xor     rcx, rax
 * 0000000140779560: mov     rax, rbx
 * 0000000140779563: mul     rcx
 * 0000000140779566: mov     rdi, rax
 * 0000000140779569: mov     [rbp+1C70h+var_1908], rdx
 * 0000000140779570: xor     edi, edx
 * 0000000140779572: mov     eax, r8d
 * 0000000140779575: mul     edi
 * 0000000140779577: mov     ecx, edi
 * 0000000140779579: shr     edi, 5
 * 000000014077957C: shr     edx, 3
 * 000000014077957F: mov     ebx, edi
 * 0000000140779581: imul    eax, edx, 1Ah
 * 0000000140779584: sub     ecx, eax
 * 0000000140779586: mov     eax, r8d
 * 0000000140779589: mul     edi
 * 000000014077958B: add     ecx, 61h ; 'a'
 * 000000014077958E: shr     edi, 5
 * 0000000140779591: shl     ecx, 8
 * 0000000140779594: shr     edx, 3
 * 0000000140779597: imul    eax, edx, 1Ah
 * 000000014077959A: sub     ebx, eax
 * 000000014077959C: mov     eax, r8d
 * 000000014077959F: mul     edi
 * 00000001407795A1: add     ebx, 41h ; 'A'
 * 00000001407795A4: or      ebx, ecx
 * 00000001407795A6: shr     edx, 3
 * 00000001407795A9: imul    eax, edx, 1Ah
 * 00000001407795AC: mov     ecx, edi
 * 00000001407795AE: shr     edi, 5
 * 00000001407795B1: shl     ebx, 8
 * 00000001407795B4: sub     ecx, eax
 * 00000001407795B6: mov     eax, r8d
 * 00000001407795B9: mul     edi
 * 00000001407795BB: add     ecx, 61h ; 'a'
 * 00000001407795BE: shr     edx, 3
 * 00000001407795C1: or      ecx, ebx
 * 00000001407795C3: imul    eax, edx, 1Ah
 * 00000001407795C6: shl     ecx, 8
 * 00000001407795C9: sub     edi, eax
 * 00000001407795CB: add     edi, 41h ; 'A'
 * 00000001407795CE: or      edi, ecx
 * 00000001407795D0: jmp     short loc_140779611
 * 00000001407795D2: mov     [rbp+1C70h+var_1C30], 0B0869E85h
 * 00000001407795D9: mov     edi, [rbp+1C70h+var_1C30]
 * 00000001407795DC: xor     edi, 9
 * 00000001407795DF: ror     edi, 21h
 * 00000001407795E2: jmp     short loc_140779611
 * 00000001407795E4: mov     [rbp+1C70h+var_1C2C], 64664142h
 * 00000001407795EB: mov     edi, [rbp+1C70h+var_1C2C]
 * 00000001407795EE: ror     edi, 8
 * 00000001407795F1: jmp     short loc_140779611
 * 00000001407795F3: mov     [rbp+1C70h+var_1C28], 82C6A6D8h
 * 00000001407795FA: mov     edi, [rbp+1C70h+var_1C28]
 * 00000001407795FD: rol     edi, 7
 * 0000000140779600: jmp     short loc_140779611
 * 0000000140779602: mov     [rbp+1C70h+var_1C24], 4E574672h
 * 0000000140779609: mov     eax, [rbp+1C70h+var_1C24]
 * 000000014077960C: xor     edi, eax
 * 000000014077960E: ror     edi, 18h
 * 0000000140779611: mov     edx, [rbp+1C70h+var_1AB4]
 * 0000000140779617: mov     r8d, edi; Tag
 * 000000014077961A: sub     rdx, r14; NumberOfBytes
 * 000000014077961D: mov     ecx, 200h; PoolType
 * 0000000140779622: call    ExAllocatePoolWithTag
 * 0000000140779627: mov     rbx, rax
 * 000000014077962A: test    rax, rax
 * 000000014077962D: jz      loc_1407796B5
 * 0000000140779633: mov     r8d, [rbp+1C70h+var_1AB4]
 * 000000014077963A: mov     rcx, rax; void *
 * 000000014077963D: mov     rdx, [rbp+1C70h+BugCheckParameter2]
 * 0000000140779644: sub     r8, r14; Size
 * 0000000140779647: add     rdx, 4; Src
 * 000000014077964B: call    memmove
 * 0000000140779650: xor     eax, eax
 * 0000000140779652: mov     edi, [rbp+1C70h+Size]
 * 0000000140779658: lea     r8, cs:140000000h
 * 000000014077965F: mov     ecx, r12d
 * 0000000140779662: mov     edx, eax
 * 0000000140779664: sub     ecx, r8d
 * 0000000140779667: test    edi, edi
 * 0000000140779669: jz      short loc_14077967C
 * 000000014077966B: mov     eax, edx
 * 000000014077966D: add     edx, r14d
 * 0000000140779670: shr     rax, 2
 * 0000000140779674: add     ecx, [r12+rax*4]
 * 0000000140779678: cmp     edx, edi
 * 000000014077967A: jb      short loc_14077966B
 * 000000014077967C: mov     eax, [rbx+4]
 * 000000014077967F: cmp     ecx, eax
 * 0000000140779681: jnz     loc_14078D45E
 * 0000000140779687: mov     edx, [rbx]
 * 0000000140779689: cmp     edx, 1FFFFFFFh
 * 000000014077968F: jnb     loc_14078D486
 * 0000000140779695: mov     edi, [rbp+1C70h+var_1AB4]
 * 000000014077969B: mov     ecx, edx
 * 000000014077969D: shl     rcx, 3
 * 00000001407796A1: cmp     rcx, rdi
 * 00000001407796A4: ja      loc_14078D486
 * 00000001407796AA: xor     eax, eax
 * 00000001407796AC: mov     [rbp+1C70h+var_E78], edi
 * 00000001407796B2: mov     r15d, eax
 * 00000001407796B5: test    rsi, rsi
 * 00000001407796B8: jz      short loc_1407796C2
 * 00000001407796BA: mov     rcx, rsi; P
 * 00000001407796BD: call    ExFreePool
 * 00000001407796C2: test    rbx, rbx
 * 00000001407796C5: jz      loc_140779207
 * 00000001407796CB: test    r15d, r15d
 * 00000001407796CE: jns     loc_140779207
 * 00000001407796D4: mov     rcx, rbx; P
 * 00000001407796D7: call    ExFreePool
 * 00000001407796DC: xor     eax, eax
 * 00000001407796DE: jmp     loc_140779204
 * 00000001407796E3: mov     ebx, 18h
 * 00000001407796E8: lea     rcx, $$0
 * 00000001407796EF: lea     rdx, [rbp+1C70h+var_E88]
 * 00000001407796F6: lea     edi, [rbx-15h]
 * 00000001407796F9: lea     r13d, [rbx-17h]
 * 00000001407796FD: mov     rax, [rcx]
 * 0000000140779700: add     ebx, 0FFFFFFF8h
 * 0000000140779703: mov     [rdx], rax
 * 0000000140779706: add     rcx, 8
 * 000000014077970A: add     rdx, 8
 * 000000014077970E: sub     rdi, r13
 * 0000000140779711: jnz     short loc_1407796FD
 * 0000000140779713: test    ebx, ebx
 * 0000000140779715: jz      short loc_140779726
 * 0000000140779717: mov     al, [rcx]
 * 0000000140779719: add     rcx, r13
 * 000000014077971C: mov     [rdx], al
 * 000000014077971E: add     rdx, r13
 * 0000000140779721: add     ebx, 0FFFFFFFFh
 * 0000000140779724: jnz     short loc_140779717
 * 0000000140779726: lea     rbx, FsRtlUninitializeSmallMcb
 * 000000014077972D: mov     rcx, rbx; PcValue
 * 0000000140779730: lea     rdx, [rbp+1C70h+BaseOfImage]; BaseOfImage
 * 0000000140779737: call    RtlPcToFileHeader
 * 000000014077973C: test    rax, rax
 * 000000014077973F: jz      loc_14077C9F7
 * 0000000140779745: mov     rcx, [rbp+1C70h+BaseOfImage]; BaseAddress
 * 000000014077974C: call    RtlImageNtHeader
 * 0000000140779751: test    rax, rax
 * 0000000140779754: jz      loc_14077C9F7
 * 000000014077975A: mov     rdx, [rbp+1C70h+BaseOfImage]; BaseOfImage
 * 0000000140779761: mov     r8d, ebx
 * 0000000140779764: sub     r8d, edx; VirtualAddress
 * 0000000140779767: mov     rcx, rax; NtHeaders
 * 000000014077976A: call    RtlSectionTableFromVirtualAddress
 * 000000014077976F: test    rax, rax
 * 0000000140779772: jz      loc_14077C9F7
 * 0000000140779778: mov     ecx, [rax+0Ch]
 * 000000014077977B: add     rcx, [rbp+1C70h+BaseOfImage]
 * 0000000140779782: mov     edi, [rax+8]
 * 0000000140779785: sub     ebx, ecx
 * 0000000140779787: mov     [rsp+1D70h+var_1D08], rbx
 * 000000014077978C: mov     [rsp+1D70h+Src], rcx
 * 0000000140779791: mov     dword ptr [rbp+1C70h+var_1C18], edi
 * 0000000140779794: cli
 * 0000000140779795: xor     eax, eax
 * 0000000140779797: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077979D: jnz     short loc_1407797A1
 * 000000014077979F: jmp     short loc_14077979F
 * 00000001407797A1: sti
 * 00000001407797A2: lea     rax, sub_14025299C
 * 00000001407797A9: lea     rdx, RtlLookupFunctionEntryEx
 * 00000001407797B0: sub     eax, ecx
 * 00000001407797B2: sub     edx, ecx
 * 00000001407797B4: mov     [rsp+1D70h+NtHeaders], rax
 * 00000001407797B9: mov     [rbp+1C70h+var_1CF0], rdx
 * 00000001407797BD: cmp     edx, 7FFFFFFFh
 * 00000001407797C3: ja      loc_14078D4A9
 * 00000001407797C9: xor     eax, eax
 * 00000001407797CB: mov     ebx, eax
 * 00000001407797CD: call    MmStrongCodeGuaranteesEnforced
 * 00000001407797D2: test    eax, eax
 * 00000001407797D4: jz      short loc_1407797E1
 * 00000001407797D6: call    sub_14078E00C
 * 00000001407797DB: test    eax, eax
 * 00000001407797DD: cmovnz  ebx, r13d
 * 00000001407797E1: cmp     esi, 7
 * 00000001407797E4: mov     r8, 0CCCCCCCCCCCCCCCDh
 * 00000001407797EE: mov     rdi, 7010008004002001h
 * 00000001407797F8: cmovz   ebx, r13d
 * 00000001407797FC: mov     dword ptr [rbp+1C70h+var_1CC8], ebx
 * 00000001407797FF: cmp     esi, 3
 * 0000000140779802: jnz     short loc_140779848
 * 0000000140779804: rdtsc
 * 0000000140779806: shl     rdx, 20h
 * 000000014077980A: or      rax, rdx
 * 000000014077980D: mov     rcx, rax
 * 0000000140779810: ror     rax, 3
 * 0000000140779814: xor     rcx, rax
 * 0000000140779817: mov     rax, rdi
 * 000000014077981A: mul     rcx
 * 000000014077981D: mov     rcx, rdx
 * 0000000140779820: mov     [rbp+1C70h+var_18F8], rdx
 * 0000000140779827: xor     rcx, rax
 * 000000014077982A: mov     rax, r8
 * 000000014077982D: mul     rcx
 * 0000000140779830: shr     rdx, 3
 * 0000000140779834: lea     rax, [rdx+rdx*4]
 * 0000000140779838: add     rax, rax
 * 000000014077983B: sub     rcx, rax
 * 000000014077983E: cmp     rcx, r15
 * 0000000140779841: jnb     short loc_140779848
 * 0000000140779843: mov     dword ptr [rbp+1C70h+var_1CD8], esi
 * 0000000140779846: jmp     short loc_1407798B4
 * 0000000140779848: rdtsc
 * 000000014077984A: shl     rdx, 20h
 * 000000014077984E: or      rax, rdx
 * 0000000140779851: mov     rcx, rax
 * 0000000140779854: ror     rax, 3
 * 0000000140779858: xor     rcx, rax
 * 000000014077985B: mov     rax, rdi
 * 000000014077985E: mul     rcx
 * 0000000140779861: mov     rcx, rdx
 * 0000000140779864: mov     [rbp+1C70h+var_18F0], rdx
 * 000000014077986B: xor     rcx, rax
 * 000000014077986E: mov     rax, r8
 * 0000000140779871: mul     rcx
 * 0000000140779874: shr     rdx, 3
 * 0000000140779878: lea     rax, [rdx+rdx*4]
 * 000000014077987C: add     rax, rax
 * 000000014077987F: sub     rcx, rax
 * 0000000140779882: cmp     rcx, 2
 * 0000000140779886: jnb     short loc_1407798B8
 * 0000000140779888: rdtsc
 * 000000014077988A: shl     rdx, 20h
 * 000000014077988E: or      rax, rdx
 * 0000000140779891: mov     rcx, rax
 * 0000000140779894: ror     rax, 3
 * 0000000140779898: xor     rcx, rax
 * 000000014077989B: mov     rax, rdi
 * 000000014077989E: mul     rcx
 * 00000001407798A1: mov     rdi, rax
 * 00000001407798A4: mov     [rbp+1C70h+var_18E8], rdx
 * 00000001407798AB: xor     edi, edx
 * 00000001407798AD: and     edi, r13d
 * 00000001407798B0: mov     [rbp+1C70h+var_1CD8], rdi
 * 00000001407798B4: xor     eax, eax
 * 00000001407798B6: jmp     short loc_1407798BD
 * 00000001407798B8: xor     eax, eax
 * 00000001407798BA: mov     dword ptr [rbp+1C70h+var_1CD8], eax
 * 00000001407798BD: cli
 * 00000001407798BE: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 00000001407798C4: jnz     short loc_1407798C8
 * 00000001407798C6: jmp     short loc_1407798C6
 * 00000001407798C8: sti
 * 00000001407798C9: test    ebx, ebx
 * 00000001407798CB: jz      short loc_1407798E4
 * 00000001407798CD: mov     dword ptr [rbp+1C70h+var_1CD8], eax
 * 00000001407798D0: lea     eax, [rsi-3]
 * 00000001407798D3: cmp     eax, r13d
 * 00000001407798D6: mov     eax, 0
 * 00000001407798DB: cmovbe  esi, eax
 * 00000001407798DE: mov     [rbp+1C70h+arg_8], esi
 * 00000001407798E4: mov     rax, cs:off_1402F22E8
 * 00000001407798EB: lea     rcx, [rbp+1C70h+var_E70]; void *
 * 00000001407798F2: xor     edx, edx; Val
 * 00000001407798F4: mov     cs:qword_1402F2210, rax
 * 00000001407798FB: lea     r8d, [rdx+20h]; Size
 * 00000001407798FF: call    memset
 * 0000000140779904: mov     r15d, [rbp+1C70h+var_E58]
 * 000000014077990B: xor     eax, eax
 * 000000014077990D: mov     esi, [rbp+1C70h+var_E60]
 * 0000000140779913: mov     r12d, eax
 * 0000000140779916: mov     [rbp+1C70h+var_E70], rax
 * 000000014077991D: mov     dword ptr [rbp+1C70h+var_1CA8], eax
 * 0000000140779920: mov     [rbp+1C70h+var_1CC0], rax
 * 0000000140779924: mov     [rbp+1C70h+var_1CB4], r15d
 * 0000000140779928: mov     [rbp+1C70h+var_1C98], esi
 * 000000014077992B: lea     rcx, cs:140000000h
 * 0000000140779932: mov     r14, rva qword_1402F2210[rcx+r12*8]
 * 000000014077993A: lea     r8, [rbp+1C70h+var_1C10]
 * 000000014077993E: mov     rcx, r14
 * 0000000140779941: lea     rdx, [rbp+1C70h+ImageBase]
 * 0000000140779948: call    RtlLookupFunctionTable
 * 000000014077994D: mov     rbx, rax
 * 0000000140779950: mov     [rbp+1C70h+var_BD8], rax
 * 0000000140779957: xor     eax, eax
 * 0000000140779959: test    rbx, rbx
 * 000000014077995C: jz      loc_140779A7A
 * 0000000140779962: mov     [rbp+1C70h+var_BB0], rax
 * 0000000140779969: mov     rax, [rbp+1C70h+ImageBase]
 * 0000000140779970: cmp     [rbp+1C70h+var_E88], rax
 * 0000000140779977: jnz     loc_140779A26
 * 000000014077997D: mov     rsi, [rbp+1C70h+var_E80]
 * 0000000140779984: lea     rdx, [rbp+1C70h+ImageBase]; ImageBase
 * 000000014077998B: xor     eax, eax
 * 000000014077998D: mov     [rbp+1C70h+var_BB0], rsi
 * 0000000140779994: mov     [rbp+1C70h+var_BA8], rax
 * 000000014077999B: xor     r8d, r8d; HistoryTable
 * 000000014077999E: mov     eax, [rbp+1C70h+var_E78]
 * 00000001407799A4: mov     rcx, r14; ControlPc
 * 00000001407799A7: mov     [rbp+1C70h+var_BA0], eax
 * 00000001407799AD: xor     eax, eax
 * 00000001407799AF: mov     [rbp+1C70h+var_B9C], eax
 * 00000001407799B5: call    RtlLookupFunctionEntry
 * 00000001407799BA: mov     rdi, rax
 * 00000001407799BD: mov     [rbp+1C70h+var_BD0], rax
 * 00000001407799C4: xor     eax, eax
 * 00000001407799C6: test    rdi, rdi
 * 00000001407799C9: jz      short loc_140779A1D
 * 00000001407799CB: mov     edx, [rsi]
 * 00000001407799CD: mov     r9d, edi
 * 00000001407799D0: sub     r9d, dword ptr [rbp+1C70h+ImageBase]
 * 00000001407799D7: mov     ebx, eax
 * 00000001407799D9: sub     edx, r13d
 * 00000001407799DC: js      short loc_140779A1D
 * 00000001407799DE: lea     ecx, [rdx+rbx]
 * 00000001407799E1: mov     r8d, r9d
 * 00000001407799E4: sar     ecx, 1
 * 00000001407799E6: sub     r8d, [rsi+rcx*8+8]
 * 00000001407799EB: jns     short loc_1407799F6
 * 00000001407799ED: test    ecx, ecx
 * 00000001407799EF: jz      short loc_140779A1D
 * 00000001407799F1: lea     edx, [rcx-1]
 * 00000001407799F4: jmp     short loc_1407799FE
 * 00000001407799F6: test    r8d, r8d
 * 00000001407799F9: jle     short loc_140779A02
 * 00000001407799FB: lea     ebx, [rcx+1]
 * 00000001407799FE: cmp     edx, ebx
 * 0000000140779A00: jge     short loc_1407799DE
 * 0000000140779A02: cmp     edx, ebx
 * 0000000140779A04: mov     rbx, [rbp+1C70h+var_BD8]
 * 0000000140779A0B: jl      short loc_140779A2D
 * 0000000140779A0D: inc     rcx
 * 0000000140779A10: lea     rcx, [rsi+rcx*8]
 * 0000000140779A14: mov     [rbp+1C70h+var_BA8], rcx
 * 0000000140779A1B: jmp     short loc_140779A2D
 * 0000000140779A1D: mov     rbx, [rbp+1C70h+var_BD8]
 * 0000000140779A24: jmp     short loc_140779A2D
 * 0000000140779A26: mov     rdi, [rbp+1C70h+var_BD0]
 * 0000000140779A2D: mov     ecx, [rbp+1C70h+var_1C10]
 * 0000000140779A30: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140779A3A: mul     rcx
 * 0000000140779A3D: mov     [rbp+1C70h+var_BE0], r14
 * 0000000140779A44: mov     r14, [rbp+1C70h+ImageBase]
 * 0000000140779A4B: shr     rdx, 3
 * 0000000140779A4F: mov     eax, edx
 * 0000000140779A51: mov     [rbp+1C70h+var_1C10], edx
 * 0000000140779A54: mov     [rbp+1C70h+var_1CB0], r14
 * 0000000140779A58: lea     rcx, [rax+rax*2]
 * 0000000140779A5C: lea     rax, [rbx+rcx*4]
 * 0000000140779A60: lea     rcx, [rbp+1C70h+var_18E0]
 * 0000000140779A67: mov     [rbp+1C70h+var_BC0], rax
 * 0000000140779A6E: mov     [rbp+1C70h+var_BB8], rcx
 * 0000000140779A75: jmp     loc_14077A01B
 * 0000000140779A7A: mov     rcx, [rbp+1C70h+var_BB8]
 * 0000000140779A81: mov     rdi, [rbp+1C70h+var_BD0]
 * 0000000140779A88: mov     r14, [rbp+1C70h+var_1CB0]
 * 0000000140779A8C: test    rbx, rbx
 * 0000000140779A8F: jz      loc_140779BA5
 * 0000000140779A95: cmp     rbx, [rbp+1C70h+var_BC0]
 * 0000000140779A9C: jz      loc_140779BA5
 * 0000000140779AA2: cmp     [rbp+1C70h+var_BB0], rax
 * 0000000140779AA9: jz      loc_140779B59
 * 0000000140779AAF: test    rdi, rdi
 * 0000000140779AB2: jz      loc_140779BA5
 * 0000000140779AB8: cmp     [rbp+1C70h+var_BA8], rax
 * 0000000140779ABF: jnz     short loc_140779AD0
 * 0000000140779AC1: mov     [rcx], rdi
 * 0000000140779AC4: mov     [rbp+1C70h+var_BD0], rax
 * 0000000140779ACB: jmp     loc_140779C48
 * 0000000140779AD0: mov     rax, [rbp+1C70h+var_BA8]
 * 0000000140779AD7: mov     edx, [rax+4]
 * 0000000140779ADA: test    r13b, dl
 * 0000000140779ADD: jz      short loc_140779AFC
 * 0000000140779ADF: and     edx, 0FFFFFFFEh
 * 0000000140779AE2: mov     eax, edx
 * 0000000140779AE4: add     rax, [rbp+1C70h+ImageBase]
 * 0000000140779AEB: mov     [rcx], rax
 * 0000000140779AEE: xor     eax, eax
 * 0000000140779AF0: mov     [rbp+1C70h+var_BA8], rax
 * 0000000140779AF7: jmp     loc_140779C48
 * 0000000140779AFC: mov     ebx, [rbp+1C70h+var_B9C]
 * 0000000140779B02: add     edx, ebx
 * 0000000140779B04: mov     edi, edx
 * 0000000140779B06: lea     r8, [rdx+4]
 * 0000000140779B0A: cmp     r8, rdi
 * 0000000140779B0D: jb      loc_14078D4CE
 * 0000000140779B13: mov     eax, [rbp+1C70h+var_BA0]
 * 0000000140779B19: cmp     r8, rax
 * 0000000140779B1C: ja      loc_14078D4CE
 * 0000000140779B22: mov     rax, [rbp+1C70h+var_BB0]
 * 0000000140779B29: add     ebx, 4
 * 0000000140779B2C: mov     edx, [rdx+rax]
 * 0000000140779B2F: mov     [rbp+1C70h+var_B9C], ebx
 * 0000000140779B35: test    r13b, dl
 * 0000000140779B38: jnz     short loc_140779B45
 * 0000000140779B3A: xor     eax, eax
 * 0000000140779B3C: mov     [rbp+1C70h+var_BA8], rax
 * 0000000140779B43: jmp     short loc_140779B48
 * 0000000140779B45: and     edx, 0FFFFFFFEh
 * 0000000140779B48: mov     eax, edx
 * 0000000140779B4A: add     rax, [rbp+1C70h+ImageBase]
 * 0000000140779B51: mov     [rcx], rax
 * 0000000140779B54: jmp     loc_140779C48
 * 0000000140779B59: mov     rdx, [rbp+1C70h+ImageBase]
 * 0000000140779B60: mov     rcx, rbx
 * 0000000140779B63: mov     rdi, rbx
 * 0000000140779B66: call    RtlpConvertFunctionEntry
 * 0000000140779B6B: mov     r8, [rbp+1C70h+var_BE0]
 * 0000000140779B72: mov     rcx, rax
 * 0000000140779B75: mov     rdx, [rbp+1C70h+ImageBase]
 * 0000000140779B7C: call    RtlpSameFunction
 * 0000000140779B81: mov     rbx, [rbp+1C70h+var_BD8]
 * 0000000140779B88: add     rbx, 0Ch
 * 0000000140779B8C: mov     [rbp+1C70h+var_BD8], rbx
 * 0000000140779B93: test    rax, rax
 * 0000000140779B96: jnz     loc_140779C3E
 * 0000000140779B9C: cmp     rbx, [rbp+1C70h+var_BC0]
 * 0000000140779BA3: jnz     short loc_140779B59
 * 0000000140779BA5: mov     edi, dword ptr [rbp+1C70h+var_1CA8]
 * 0000000140779BA8: mov     r12, [rbp+1C70h+var_1CC0]
 * 0000000140779BAC: add     edi, r13d
 * 0000000140779BAF: add     r12, r13
 * 0000000140779BB2: mov     dword ptr [rbp+1C70h+var_1CA8], edi
 * 0000000140779BB5: mov     [rbp+1C70h+var_1CC0], r12
 * 0000000140779BB9: cmp     edi, 9
 * 0000000140779BBC: jb      loc_14077992B
 * 0000000140779BC2: add     [rbp+1C70h+var_E54], 8
 * 0000000140779BC9: lea     rax, off_1402F22E8
 * 0000000140779BD0: and     rax, 0FFFFFFFFFFFFF000h
 * 0000000140779BD6: mov     [rsp+78h], rax
 * 0000000140779BDB: mov     r12, rax
 * 0000000140779BDE: mov     rdx, cs:MmPteBase
 * 0000000140779BE5: lea     rcx, [rbp+1C70h+var_E30]
 * 0000000140779BEC: mov     rax, r12
 * 0000000140779BEF: mov     r8, 7FFFFFFFF8h
 * 0000000140779BF9: shr     rax, 9
 * 0000000140779BFD: mov     edi, 4
 * 0000000140779C02: and     rax, r8
 * 0000000140779C05: mov     ebx, edi
 * 0000000140779C07: add     rax, rdx
 * 0000000140779C0A: mov     [rcx], rax
 * 0000000140779C0D: lea     rcx, [rcx+8]
 * 0000000140779C11: shr     rax, 9
 * 0000000140779C15: and     rax, r8
 * 0000000140779C18: add     rax, rdx
 * 0000000140779C1B: sub     rbx, r13
 * 0000000140779C1E: jnz     short loc_140779C0A
 * 0000000140779C20: xor     esi, esi
 * 0000000140779C22: mov     ebx, esi
 * 0000000140779C24: lea     edx, [rsi+3]
 * 0000000140779C27: test    ebx, ebx
 * 0000000140779C29: jz      loc_14077A022
 * 0000000140779C2F: mov     eax, edx
 * 0000000140779C31: mov     [rbp+rax*8+1C70h+var_E30], rsi
 * 0000000140779C39: jmp     loc_14077A03B
 * 0000000140779C3E: mov     rax, [rbp+1C70h+var_BB8]
 * 0000000140779C45: mov     [rax], rdi
 * 0000000140779C48: mov     rax, [rbp+1C70h+var_18E0]
 * 0000000140779C4F: mov     ecx, [rax]
 * 0000000140779C51: mov     edx, [rax+4]
 * 0000000140779C54: sub     edx, ecx
 * 0000000140779C56: add     [rbp+1C70h+var_E54], edx
 * 0000000140779C5C: inc     r15d
 * 0000000140779C5F: lea     rax, [r14+rcx]
 * 0000000140779C63: mov     [rbp+1C70h+var_1CB4], r15d
 * 0000000140779C67: mov     r14, rax
 * 0000000140779C6A: mov     ecx, edx
 * 0000000140779C6C: and     r14, 0FFFFFFFFFFFFF000h
 * 0000000140779C73: add     rcx, rax
 * 0000000140779C76: mov     [rsp+78h], rcx
 * 0000000140779C7B: mov     rdx, cs:MmPteBase
 * 0000000140779C82: lea     rcx, [rbp+1C70h+var_E50]
 * 0000000140779C89: mov     rax, r14
 * 0000000140779C8C: mov     rdi, 7FFFFFFFF8h
 * 0000000140779C96: shr     rax, 9
 * 0000000140779C9A: mov     ebx, 4
 * 0000000140779C9F: and     rax, rdi
 * 0000000140779CA2: add     rax, rdx
 * 0000000140779CA5: mov     [rcx], rax
 * 0000000140779CA8: lea     rcx, [rcx+8]
 * 0000000140779CAC: shr     rax, 9
 * 0000000140779CB0: and     rax, rdi
 * 0000000140779CB3: add     rax, rdx
 * 0000000140779CB6: sub     rbx, r13
 * 0000000140779CB9: jnz     short loc_140779CA5
 * 0000000140779CBB: xor     esi, esi
 * 0000000140779CBD: mov     ebx, esi
 * 0000000140779CBF: lea     edx, [rsi+3]
 * 0000000140779CC2: test    ebx, ebx
 * 0000000140779CC4: jz      short loc_140779CD2
 * 0000000140779CC6: mov     eax, edx
 * 0000000140779CC8: mov     [rbp+rax*8+1C70h+var_E50], rsi
 * 0000000140779CD0: jmp     short loc_140779CEB
 * 0000000140779CD2: test    edx, edx
 * 0000000140779CD4: jz      short loc_140779CF4
 * 0000000140779CD6: mov     eax, edx
 * 0000000140779CD8: mov     rcx, [rbp+rax*8+1C70h+var_E50]
 * 0000000140779CE0: mov     al, [rcx]
 * 0000000140779CE2: shr     al, 7
 * 0000000140779CE5: test    al, al
 * 0000000140779CE7: cmovnz  ebx, r13d
 * 0000000140779CEB: dec     edx
 * 0000000140779CED: lea     eax, [rdx+1]
 * 0000000140779CF0: test    eax, eax
 * 0000000140779CF2: jnz     short loc_140779CC2
 * 0000000140779CF4: mov     esi, [rbp+1C70h+var_1C98]
 * 0000000140779CF7: mov     r15d, 4
 * 0000000140779CFD: dec     r15d
 * 0000000140779D00: xor     eax, eax
 * 0000000140779D02: mov     r12, [rbp+r15*8+1C70h+var_E50]
 * 0000000140779D0A: test    r12, r12
 * 0000000140779D0D: jz      loc_140779FE4
 * 0000000140779D13: mov     edx, eax
 * 0000000140779D15: cmp     [rbp+1C70h+var_E5C], eax
 * 0000000140779D1B: jbe     short loc_140779D37
 * 0000000140779D1D: mov     rax, [rbp+1C70h+P]
 * 0000000140779D24: mov     ecx, edx
 * 0000000140779D26: cmp     r12, [rax+rcx*8]
 * 0000000140779D2A: jz      short loc_140779D37
 * 0000000140779D2C: add     edx, r13d
 * 0000000140779D2F: cmp     edx, [rbp+1C70h+var_E5C]
 * 0000000140779D35: jb      short loc_140779D1D
 * 0000000140779D37: mov     eax, [rbp+1C70h+var_E5C]
 * 0000000140779D3D: cmp     edx, eax
 * 0000000140779D3F: jnz     loc_140779FDB
 * 0000000140779D45: cmp     eax, esi
 * 0000000140779D47: jnz     loc_140779FBC
 * 0000000140779D4D: lea     esi, ds:40h[rsi*2]
 * 0000000140779D54: mov     [rbp+1C70h+var_1C98], esi
 * 0000000140779D57: rdtsc
 * 0000000140779D59: shl     rdx, 20h
 * 0000000140779D5D: mov     rbx, 7010008004002001h
 * 0000000140779D67: or      rax, rdx
 * 0000000140779D6A: mov     rcx, rax
 * 0000000140779D6D: ror     rax, 3
 * 0000000140779D71: xor     rcx, rax
 * 0000000140779D74: mov     rax, rbx
 * 0000000140779D77: mul     rcx
 * 0000000140779D7A: mov     rcx, rdx
 * 0000000140779D7D: mov     [rbp+1C70h+var_18D8], rdx
 * 0000000140779D84: xor     rcx, rax
 * 0000000140779D87: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140779D91: mul     rcx
 * 0000000140779D94: shr     rdx, 1
 * 0000000140779D97: imul    rax, rdx, 0Bh
 * 0000000140779D9B: sub     rcx, rax
 * 0000000140779D9E: mov     eax, 5
 * 0000000140779DA3: cmp     ecx, eax
 * 0000000140779DA5: ja      loc_140779E2E
 * 0000000140779DAB: jz      short loc_140779E1C
 * 0000000140779DAD: test    ecx, ecx
 * 0000000140779DAF: jz      short loc_140779E0A
 * 0000000140779DB1: sub     ecx, 1
 * 0000000140779DB4: jz      short loc_140779DF9
 * 0000000140779DB6: sub     ecx, 1
 * 0000000140779DB9: jz      short loc_140779DE7
 * 0000000140779DBB: cmp     ecx, 1
 * 0000000140779DBE: jz      short loc_140779DD2
 * 0000000140779DC0: mov     [rbp+1C70h+var_1C0C], 67076494h
 * 0000000140779DC7: mov     edi, [rbp+1C70h+var_1C0C]
 * 0000000140779DCA: rol     edi, 4
 * 0000000140779DCD: jmp     loc_140779F32
 * 0000000140779DD2: mov     [rbp+1C70h+var_1C08], 0A8223938h
 * 0000000140779DD9: mov     edi, [rbp+1C70h+var_1C08]
 * 0000000140779DDC: xor     edi, 3
 * 0000000140779DDF: ror     edi, 0Fh
 * 0000000140779DE2: jmp     loc_140779F32
 * 0000000140779DE7: mov     [rbp+1C70h+var_1C04], 85B5910Dh
 * 0000000140779DEE: mov     edi, [rbp+1C70h+var_1C04]
 * 0000000140779DF1: ror     edi, 2
 * 0000000140779DF4: jmp     loc_140779F32
 * 0000000140779DF9: mov     [rbp+1C70h+var_1C00], 0B2AD31A1h
 * 0000000140779E00: mov     edi, [rbp+1C70h+var_1C00]
 * 0000000140779E03: rol     edi, 1
 * 0000000140779E05: jmp     loc_140779F32
 * 0000000140779E0A: mov     [rbp+1C70h+var_1BFC], 0D098D0D8h
 * 0000000140779E11: mov     edi, [rbp+1C70h+var_1BFC]
 * 0000000140779E14: ror     edi, 6
 * 0000000140779E17: jmp     loc_140779F32
 * 0000000140779E1C: mov     [rbp+1C70h+var_1BF8], 288C49EDh
 * 0000000140779E23: mov     edi, [rbp+1C70h+var_1BF8]
 * 0000000140779E26: ror     edi, 5
 * 0000000140779E29: jmp     loc_140779F32
 * 0000000140779E2E: mov     edx, 6
 * 0000000140779E33: sub     ecx, edx
 * 0000000140779E35: jz      loc_140779F1D
 * 0000000140779E3B: sub     ecx, 1
 * 0000000140779E3E: jz      loc_140779F08
 * 0000000140779E44: sub     ecx, 1
 * 0000000140779E47: jz      loc_140779EF3
 * 0000000140779E4D: cmp     ecx, 1
 * 0000000140779E50: jz      loc_140779EE1
 * 0000000140779E56: rdtsc
 * 0000000140779E58: shl     rdx, 20h
 * 0000000140779E5C: mov     r8d, 4EC4EC4Fh
 * 0000000140779E62: or      rax, rdx
 * 0000000140779E65: mov     rcx, rax
 * 0000000140779E68: ror     rax, 3
 * 0000000140779E6C: xor     rcx, rax
 * 0000000140779E6F: mov     rax, rbx
 * 0000000140779E72: mul     rcx
 * 0000000140779E75: mov     rdi, rax
 * 0000000140779E78: mov     [rbp+1C70h+var_18D0], rdx
 * 0000000140779E7F: xor     edi, edx
 * 0000000140779E81: mov     eax, r8d
 * 0000000140779E84: mul     edi
 * 0000000140779E86: mov     ecx, edi
 * 0000000140779E88: shr     edi, 5
 * 0000000140779E8B: shr     edx, 3
 * 0000000140779E8E: mov     ebx, edi
 * 0000000140779E90: imul    eax, edx, 1Ah
 * 0000000140779E93: sub     ecx, eax
 * 0000000140779E95: mov     eax, r8d
 * 0000000140779E98: mul     edi
 * 0000000140779E9A: add     ecx, 61h ; 'a'
 * 0000000140779E9D: shr     edi, 5
 * 0000000140779EA0: shl     ecx, 8
 * 0000000140779EA3: shr     edx, 3
 * 0000000140779EA6: imul    eax, edx, 1Ah
 * 0000000140779EA9: sub     ebx, eax
 * 0000000140779EAB: mov     eax, r8d
 * 0000000140779EAE: mul     edi
 * 0000000140779EB0: add     ebx, 41h ; 'A'
 * 0000000140779EB3: or      ebx, ecx
 * 0000000140779EB5: shr     edx, 3
 * 0000000140779EB8: imul    eax, edx, 1Ah
 * 0000000140779EBB: mov     ecx, edi
 * 0000000140779EBD: shr     edi, 5
 * 0000000140779EC0: shl     ebx, 8
 * 0000000140779EC3: sub     ecx, eax
 * 0000000140779EC5: mov     eax, r8d
 * 0000000140779EC8: mul     edi
 * 0000000140779ECA: add     ecx, 61h ; 'a'
 * 0000000140779ECD: shr     edx, 3
 * 0000000140779ED0: or      ecx, ebx
 * 0000000140779ED2: imul    eax, edx, 1Ah
 * 0000000140779ED5: shl     ecx, 8
 * 0000000140779ED8: sub     edi, eax
 * 0000000140779EDA: add     edi, 41h ; 'A'
 * 0000000140779EDD: or      edi, ecx
 * 0000000140779EDF: jmp     short loc_140779F32
 * 0000000140779EE1: mov     [rbp+1C70h+var_1BF4], 0B0869E85h
 * 0000000140779EE8: mov     edi, [rbp+1C70h+var_1BF4]
 * 0000000140779EEB: xor     edi, 9
 * 0000000140779EEE: ror     edi, 21h
 * 0000000140779EF1: jmp     short loc_140779F32
 * 0000000140779EF3: mov     [rbp+1C70h+var_1BF0], 64664142h
 * 0000000140779EFD: mov     edi, [rbp+1C70h+var_1BF0]
 * 0000000140779F03: ror     edi, 8
 * 0000000140779F06: jmp     short loc_140779F32
 * 0000000140779F08: mov     [rbp+1C70h+var_1BEC], 82C6A6D8h
 * 0000000140779F12: mov     edi, [rbp+1C70h+var_1BEC]
 * 0000000140779F18: rol     edi, 7
 * 0000000140779F1B: jmp     short loc_140779F32
 * 0000000140779F1D: mov     [rbp+1C70h+var_1BE8], 4E574672h
 * 0000000140779F27: mov     edi, [rbp+1C70h+var_1BE8]
 * 0000000140779F2D: xor     edi, edx
 * 0000000140779F2F: ror     edi, 18h
 * 0000000140779F32: mov     edx, esi
 * 0000000140779F34: mov     r8d, edi; Tag
 * 0000000140779F37: shl     rdx, 3; NumberOfBytes
 * 0000000140779F3B: mov     ecx, 200h; PoolType
 * 0000000140779F40: call    ExAllocatePoolWithTag
 * 0000000140779F45: mov     rsi, rax
 * 0000000140779F48: xor     eax, eax
 * 0000000140779F4A: test    rsi, rsi
 * 0000000140779F4D: jz      loc_14077C9F7
 * 0000000140779F53: mov     rcx, [rbp+1C70h+P]
 * 0000000140779F5A: test    rcx, rcx
 * 0000000140779F5D: jz      short loc_140779FAC
 * 0000000140779F5F: mov     edx, [rbp+1C70h+var_E5C]
 * 0000000140779F65: mov     rbx, rsi
 * 0000000140779F68: shl     edx, 3
 * 0000000140779F6B: cmp     edx, 8
 * 0000000140779F6E: jb      short loc_140779F8C
 * 0000000140779F70: mov     edi, edx
 * 0000000140779F72: shr     rdi, 3
 * 0000000140779F76: mov     rax, [rcx]
 * 0000000140779F79: add     edx, 0FFFFFFF8h
 * 0000000140779F7C: mov     [rbx], rax
 * 0000000140779F7F: add     rcx, 8
 * 0000000140779F83: add     rbx, 8
 * 0000000140779F87: sub     rdi, r13
 * 0000000140779F8A: jnz     short loc_140779F76
 * 0000000140779F8C: test    edx, edx
 * 0000000140779F8E: jz      short loc_140779FA0
 * 0000000140779F90: sub     rbx, rcx
 * 0000000140779F93: mov     al, [rcx]
 * 0000000140779F95: mov     [rcx+rbx], al
 * 0000000140779F98: add     rcx, r13
 * 0000000140779F9B: add     edx, 0FFFFFFFFh
 * 0000000140779F9E: jnz     short loc_140779F93
 * 0000000140779FA0: mov     rcx, [rbp+1C70h+P]; P
 * 0000000140779FA7: call    ExFreePool
 * 0000000140779FAC: mov     [rbp+1C70h+P], rsi
 * 0000000140779FB3: mov     esi, [rbp+1C70h+var_1C98]
 * 0000000140779FB6: mov     [rbp+1C70h+var_E60], esi
 * 0000000140779FBC: mov     ecx, [rbp+1C70h+var_E5C]
 * 0000000140779FC2: mov     rax, [rbp+1C70h+P]
 * 0000000140779FC9: add     [rbp+1C70h+var_E5C], r13d
 * 0000000140779FD0: add     [rbp+1C70h+var_E54], 10h
 * 0000000140779FD7: mov     [rax+rcx*8], r12
 * 0000000140779FDB: test    r15d, r15d
 * 0000000140779FDE: jnz     loc_140779CFD
 * 0000000140779FE4: mov     eax, 1000h
 * 0000000140779FE9: add     r14, rax
 * 0000000140779FEC: cmp     r14, [rsp+78h]
 * 0000000140779FF1: jb      loc_140779C7B
 * 0000000140779FF7: mov     r15d, [rbp+1C70h+var_1CB4]
 * 0000000140779FFB: mov     rcx, [rbp+1C70h+var_BB8]
 * 000000014077A002: mov     rdi, [rbp+1C70h+var_BD0]
 * 000000014077A009: mov     rbx, [rbp+1C70h+var_BD8]
 * 000000014077A010: mov     r14, [rbp+1C70h+var_1CB0]
 * 000000014077A014: mov     [rbp+1C70h+var_E58], r15d
 * 000000014077A01B: xor     eax, eax
 * 000000014077A01D: jmp     loc_140779A8C
 * 000000014077A022: test    edx, edx
 * 000000014077A024: jz      short loc_14077A048
 * 000000014077A026: mov     eax, edx
 * 000000014077A028: mov     rcx, [rbp+rax*8+1C70h+var_E30]
 * 000000014077A030: mov     al, [rcx]
 * 000000014077A032: shr     al, 7
 * 000000014077A035: test    al, al
 * 000000014077A037: cmovnz  ebx, r13d
 * 000000014077A03B: dec     edx
 * 000000014077A03D: lea     eax, [rdx+1]
 * 000000014077A040: test    eax, eax
 * 000000014077A042: jnz     loc_140779C27
 * 000000014077A048: mov     esi, [rbp+1C70h+var_1C98]
 * 000000014077A04B: mov     r14d, edi
 * 000000014077A04E: dec     r14d
 * 000000014077A051: xor     eax, eax
 * 000000014077A053: mov     r15, [rbp+r14*8+1C70h+var_E30]
 * 000000014077A05B: test    r15, r15
 * 000000014077A05E: jz      loc_14077A363
 * 000000014077A064: mov     edx, eax
 * 000000014077A066: cmp     [rbp+1C70h+var_E5C], eax
 * 000000014077A06C: jbe     short loc_14077A088
 * 000000014077A06E: mov     rax, [rbp+1C70h+P]
 * 000000014077A075: mov     ecx, edx
 * 000000014077A077: cmp     r15, [rax+rcx*8]
 * 000000014077A07B: jz      short loc_14077A088
 * 000000014077A07D: add     edx, r13d
 * 000000014077A080: cmp     edx, [rbp+1C70h+var_E5C]
 * 000000014077A086: jb      short loc_14077A06E
 * 000000014077A088: mov     eax, [rbp+1C70h+var_E5C]
 * 000000014077A08E: cmp     edx, eax
 * 000000014077A090: jnz     loc_14077A35A
 * 000000014077A096: cmp     eax, esi
 * 000000014077A098: jnz     loc_14077A33B
 * 000000014077A09E: lea     esi, ds:40h[rsi*2]
 * 000000014077A0A5: mov     [rbp+1C70h+var_1C98], esi
 * 000000014077A0A8: rdtsc
 * 000000014077A0AA: shl     rdx, 20h
 * 000000014077A0AE: mov     rbx, 7010008004002001h
 * 000000014077A0B8: or      rax, rdx
 * 000000014077A0BB: mov     rcx, rax
 * 000000014077A0BE: ror     rax, 3
 * 000000014077A0C2: xor     rcx, rax
 * 000000014077A0C5: mov     rax, rbx
 * 000000014077A0C8: mul     rcx
 * 000000014077A0CB: mov     rcx, rdx
 * 000000014077A0CE: mov     [rbp+1C70h+var_18C8], rdx
 * 000000014077A0D5: xor     rcx, rax
 * 000000014077A0D8: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014077A0E2: mul     rcx
 * 000000014077A0E5: shr     rdx, 1
 * 000000014077A0E8: imul    rax, rdx, 0Bh
 * 000000014077A0EC: sub     rcx, rax
 * 000000014077A0EF: mov     eax, 5
 * 000000014077A0F4: cmp     ecx, eax
 * 000000014077A0F6: ja      loc_14077A1A7
 * 000000014077A0FC: jz      loc_14077A18F
 * 000000014077A102: test    ecx, ecx
 * 000000014077A104: jz      short loc_14077A177
 * 000000014077A106: sub     ecx, 1
 * 000000014077A109: jz      short loc_14077A160
 * 000000014077A10B: sub     ecx, 1
 * 000000014077A10E: jz      short loc_14077A148
 * 000000014077A110: cmp     ecx, 1
 * 000000014077A113: jz      short loc_14077A12D
 * 000000014077A115: mov     [rbp+1C70h+var_1BE0], 67076494h
 * 000000014077A11F: mov     edi, [rbp+1C70h+var_1BE0]
 * 000000014077A125: rol     edi, 4
 * 000000014077A128: jmp     loc_14077A2B1
 * 000000014077A12D: mov     [rbp+1C70h+var_1BDC], 0A8223938h
 * 000000014077A137: mov     edi, [rbp+1C70h+var_1BDC]
 * 000000014077A13D: xor     edi, 3
 * 000000014077A140: ror     edi, 0Fh
 * 000000014077A143: jmp     loc_14077A2B1
 * 000000014077A148: mov     [rbp+1C70h+var_1BD8], 85B5910Dh
 * 000000014077A152: mov     edi, [rbp+1C70h+var_1BD8]
 * 000000014077A158: ror     edi, 2
 * 000000014077A15B: jmp     loc_14077A2B1
 * 000000014077A160: mov     [rbp+1C70h+var_1BD4], 0B2AD31A1h
 * 000000014077A16A: mov     edi, [rbp+1C70h+var_1BD4]
 * 000000014077A170: rol     edi, 1
 * 000000014077A172: jmp     loc_14077A2B1
 * 000000014077A177: mov     [rbp+1C70h+var_1BD0], 0D098D0D8h
 * 000000014077A181: mov     edi, [rbp+1C70h+var_1BD0]
 * 000000014077A187: ror     edi, 6
 * 000000014077A18A: jmp     loc_14077A2B1
 * 000000014077A18F: mov     [rbp+1C70h+var_1BCC], 288C49EDh
 * 000000014077A199: mov     edi, [rbp+1C70h+var_1BCC]
 * 000000014077A19F: ror     edi, 5
 * 000000014077A1A2: jmp     loc_14077A2B1
 * 000000014077A1A7: mov     edx, 6
 * 000000014077A1AC: sub     ecx, edx
 * 000000014077A1AE: jz      loc_14077A29C
 * 000000014077A1B4: sub     ecx, 1
 * 000000014077A1B7: jz      loc_14077A287
 * 000000014077A1BD: sub     ecx, 1
 * 000000014077A1C0: jz      loc_14077A272
 * 000000014077A1C6: cmp     ecx, 1
 * 000000014077A1C9: jz      loc_14077A25A
 * 000000014077A1CF: rdtsc
 * 000000014077A1D1: shl     rdx, 20h
 * 000000014077A1D5: mov     r8d, 4EC4EC4Fh
 * 000000014077A1DB: or      rax, rdx
 * 000000014077A1DE: mov     rcx, rax
 * 000000014077A1E1: ror     rax, 3
 * 000000014077A1E5: xor     rcx, rax
 * 000000014077A1E8: mov     rax, rbx
 * 000000014077A1EB: mul     rcx
 * 000000014077A1EE: mov     rdi, rax
 * 000000014077A1F1: mov     [rbp+1C70h+var_18C0], rdx
 * 000000014077A1F8: xor     edi, edx
 * 000000014077A1FA: mov     eax, r8d
 * 000000014077A1FD: mul     edi
 * 000000014077A1FF: mov     ecx, edi
 * 000000014077A201: shr     edi, 5
 * 000000014077A204: shr     edx, 3
 * 000000014077A207: mov     ebx, edi
 * 000000014077A209: imul    eax, edx, 1Ah
 * 000000014077A20C: sub     ecx, eax
 * 000000014077A20E: mov     eax, r8d
 * 000000014077A211: mul     edi
 * 000000014077A213: add     ecx, 61h ; 'a'
 * 000000014077A216: shr     edi, 5
 * 000000014077A219: shl     ecx, 8
 * 000000014077A21C: shr     edx, 3
 * 000000014077A21F: imul    eax, edx, 1Ah
 * 000000014077A222: sub     ebx, eax
 * 000000014077A224: mov     eax, r8d
 * 000000014077A227: mul     edi
 * 000000014077A229: add     ebx, 41h ; 'A'
 * 000000014077A22C: or      ebx, ecx
 * 000000014077A22E: shr     edx, 3
 * 000000014077A231: imul    eax, edx, 1Ah
 * 000000014077A234: mov     ecx, edi
 * 000000014077A236: shr     edi, 5
 * 000000014077A239: shl     ebx, 8
 * 000000014077A23C: sub     ecx, eax
 * 000000014077A23E: mov     eax, r8d
 * 000000014077A241: mul     edi
 * 000000014077A243: add     ecx, 61h ; 'a'
 * 000000014077A246: shr     edx, 3
 * 000000014077A249: or      ecx, ebx
 * 000000014077A24B: imul    eax, edx, 1Ah
 * 000000014077A24E: shl     ecx, 8
 * 000000014077A251: sub     edi, eax
 * 000000014077A253: add     edi, 41h ; 'A'
 * 000000014077A256: or      edi, ecx
 * 000000014077A258: jmp     short loc_14077A2B1
 * 000000014077A25A: mov     [rbp+1C70h+var_1BC8], 0B0869E85h
 * 000000014077A264: mov     edi, [rbp+1C70h+var_1BC8]
 * 000000014077A26A: xor     edi, 9
 * 000000014077A26D: ror     edi, 21h
 * 000000014077A270: jmp     short loc_14077A2B1
 * 000000014077A272: mov     [rbp+1C70h+var_1BC4], 64664142h
 * 000000014077A27C: mov     edi, [rbp+1C70h+var_1BC4]
 * 000000014077A282: ror     edi, 8
 * 000000014077A285: jmp     short loc_14077A2B1
 * 000000014077A287: mov     [rbp+1C70h+var_1BC0], 82C6A6D8h
 * 000000014077A291: mov     edi, [rbp+1C70h+var_1BC0]
 * 000000014077A297: rol     edi, 7
 * 000000014077A29A: jmp     short loc_14077A2B1
 * 000000014077A29C: mov     [rbp+1C70h+var_1BBC], 4E574672h
 * 000000014077A2A6: mov     edi, [rbp+1C70h+var_1BBC]
 * 000000014077A2AC: xor     edi, edx
 * 000000014077A2AE: ror     edi, 18h
 * 000000014077A2B1: mov     edx, esi
 * 000000014077A2B3: mov     r8d, edi; Tag
 * 000000014077A2B6: shl     rdx, 3; NumberOfBytes
 * 000000014077A2BA: mov     ecx, 200h; PoolType
 * 000000014077A2BF: call    ExAllocatePoolWithTag
 * 000000014077A2C4: mov     rsi, rax
 * 000000014077A2C7: xor     eax, eax
 * 000000014077A2C9: test    rsi, rsi
 * 000000014077A2CC: jz      loc_14077C9F7
 * 000000014077A2D2: mov     rcx, [rbp+1C70h+P]
 * 000000014077A2D9: test    rcx, rcx
 * 000000014077A2DC: jz      short loc_14077A32B
 * 000000014077A2DE: mov     edx, [rbp+1C70h+var_E5C]
 * 000000014077A2E4: mov     rbx, rsi
 * 000000014077A2E7: shl     edx, 3
 * 000000014077A2EA: cmp     edx, 8
 * 000000014077A2ED: jb      short loc_14077A30B
 * 000000014077A2EF: mov     edi, edx
 * 000000014077A2F1: shr     rdi, 3
 * 000000014077A2F5: mov     rax, [rcx]
 * 000000014077A2F8: add     edx, 0FFFFFFF8h
 * 000000014077A2FB: mov     [rbx], rax
 * 000000014077A2FE: add     rcx, 8
 * 000000014077A302: add     rbx, 8
 * 000000014077A306: sub     rdi, r13
 * 000000014077A309: jnz     short loc_14077A2F5
 * 000000014077A30B: test    edx, edx
 * 000000014077A30D: jz      short loc_14077A31F
 * 000000014077A30F: sub     rbx, rcx
 * 000000014077A312: mov     al, [rcx]
 * 000000014077A314: mov     [rbx+rcx], al
 * 000000014077A317: add     rcx, r13
 * 000000014077A31A: add     edx, 0FFFFFFFFh
 * 000000014077A31D: jnz     short loc_14077A312
 * 000000014077A31F: mov     rcx, [rbp+1C70h+P]; P
 * 000000014077A326: call    ExFreePool
 * 000000014077A32B: mov     [rbp+1C70h+P], rsi
 * 000000014077A332: mov     esi, [rbp+1C70h+var_1C98]
 * 000000014077A335: mov     [rbp+1C70h+var_E60], esi
 * 000000014077A33B: mov     ecx, [rbp+1C70h+var_E5C]
 * 000000014077A341: mov     rax, [rbp+1C70h+P]
 * 000000014077A348: add     [rbp+1C70h+var_E5C], r13d
 * 000000014077A34F: add     [rbp+1C70h+var_E54], 10h
 * 000000014077A356: mov     [rax+rcx*8], r15
 * 000000014077A35A: test    r14d, r14d
 * 000000014077A35D: jnz     loc_14077A04E
 * 000000014077A363: mov     eax, 1000h
 * 000000014077A368: add     r12, rax
 * 000000014077A36B: lea     rax, unk_1402F22F0
 * 000000014077A372: cmp     r12, rax
 * 000000014077A375: jb      loc_140779BDE
 * 000000014077A37B: mov     ecx, [rbp+1C70h+var_1CB4]
 * 000000014077A37E: mov     eax, [rbp+1C70h+var_E54]
 * 000000014077A384: inc     ecx
 * 000000014077A386: mov     [rbp+1C70h+var_E58], ecx
 * 000000014077A38C: add     eax, 8
 * 000000014077A38F: shl     ecx, 4
 * 000000014077A392: add     ecx, eax
 * 000000014077A394: cli
 * 000000014077A395: xor     eax, eax
 * 000000014077A397: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077A39D: jnz     short loc_14077A3A1
 * 000000014077A39F: jmp     short loc_14077A39F
 * 000000014077A3A1: sti
 * 000000014077A3A2: mov     r12d, dword ptr [rbp+1C70h+var_1CC8]
 * 000000014077A3A6: test    r12d, r12d
 * 000000014077A3A9: jz      short loc_14077A3B0
 * 000000014077A3AB: mov     ecx, eax
 * 000000014077A3AD: mov     dword ptr [rbp+1C70h+var_1C18], eax
 * 000000014077A3B0: mov     ebx, dword ptr [rbp+1C70h+var_1C18]
 * 000000014077A3B3: lea     eax, [rcx+798h]
 * 000000014077A3B9: add     ebx, eax
 * 000000014077A3BB: mov     [rbp+1C70h+var_1C98], eax
 * 000000014077A3BE: mov     [rbp+1C70h+var_1CB4], ebx
 * 000000014077A3C1: rdtsc
 * 000000014077A3C3: shl     rdx, 20h
 * 000000014077A3C7: mov     r8, 7010008004002001h
 * 000000014077A3D1: or      rax, rdx
 * 000000014077A3D4: mov     r9d, 7FFh
 * 000000014077A3DA: mov     rcx, rax
 * 000000014077A3DD: ror     rax, 3
 * 000000014077A3E1: xor     rcx, rax
 * 000000014077A3E4: mov     rax, r8
 * 000000014077A3E7: mul     rcx
 * 000000014077A3EA: mov     [rbp+1C70h+var_18B8], rdx
 * 000000014077A3F1: xor     rdx, rax
 * 000000014077A3F4: and     edx, r9d
 * 000000014077A3F7: lea     r15d, [rdx+80000h]
 * 000000014077A3FE: add     r15d, ebx
 * 000000014077A401: rdtsc
 * 000000014077A403: shl     rdx, 20h
 * 000000014077A407: or      rax, rdx
 * 000000014077A40A: mov     rcx, rax
 * 000000014077A40D: ror     rax, 3
 * 000000014077A411: xor     rcx, rax
 * 000000014077A414: mov     rax, r8
 * 000000014077A417: mul     rcx
 * 000000014077A41A: mov     rcx, rdx
 * 000000014077A41D: mov     [rbp+1C70h+var_18B0], rdx
 * 000000014077A424: xor     rcx, rax
 * 000000014077A427: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014077A431: mul     rcx
 * 000000014077A434: shr     rdx, 1
 * 000000014077A437: imul    rax, rdx, 0Bh
 * 000000014077A43B: sub     rcx, rax
 * 000000014077A43E: mov     eax, 5
 * 000000014077A443: cmp     ecx, eax
 * 000000014077A445: ja      loc_14077A4F6
 * 000000014077A44B: jz      loc_14077A4DE
 * 000000014077A451: test    ecx, ecx
 * 000000014077A453: jz      short loc_14077A4C6
 * 000000014077A455: sub     ecx, 1
 * 000000014077A458: jz      short loc_14077A4AF
 * 000000014077A45A: sub     ecx, 1
 * 000000014077A45D: jz      short loc_14077A497
 * 000000014077A45F: cmp     ecx, 1
 * 000000014077A462: jz      short loc_14077A47C
 * 000000014077A464: mov     [rbp+1C70h+var_1BB8], 67076494h
 * 000000014077A46E: mov     edi, [rbp+1C70h+var_1BB8]
 * 000000014077A474: rol     edi, 4
 * 000000014077A477: jmp     loc_14077A600
 * 000000014077A47C: mov     [rbp+1C70h+var_1BB4], 0A8223938h
 * 000000014077A486: mov     edi, [rbp+1C70h+var_1BB4]
 * 000000014077A48C: xor     edi, 3
 * 000000014077A48F: ror     edi, 0Fh
 * 000000014077A492: jmp     loc_14077A600
 * 000000014077A497: mov     [rbp+1C70h+var_1BB0], 85B5910Dh
 * 000000014077A4A1: mov     edi, [rbp+1C70h+var_1BB0]
 * 000000014077A4A7: ror     edi, 2
 * 000000014077A4AA: jmp     loc_14077A600
 * 000000014077A4AF: mov     [rbp+1C70h+var_1BAC], 0B2AD31A1h
 * 000000014077A4B9: mov     edi, [rbp+1C70h+var_1BAC]
 * 000000014077A4BF: rol     edi, 1
 * 000000014077A4C1: jmp     loc_14077A600
 * 000000014077A4C6: mov     [rbp+1C70h+var_1BA8], 0D098D0D8h
 * 000000014077A4D0: mov     edi, [rbp+1C70h+var_1BA8]
 * 000000014077A4D6: ror     edi, 6
 * 000000014077A4D9: jmp     loc_14077A600
 * 000000014077A4DE: mov     [rbp+1C70h+var_1BA4], 288C49EDh
 * 000000014077A4E8: mov     edi, [rbp+1C70h+var_1BA4]
 * 000000014077A4EE: ror     edi, 5
 * 000000014077A4F1: jmp     loc_14077A600
 * 000000014077A4F6: mov     edx, 6
 * 000000014077A4FB: sub     ecx, edx
 * 000000014077A4FD: jz      loc_14077A5EB
 * 000000014077A503: sub     ecx, 1
 * 000000014077A506: jz      loc_14077A5D6
 * 000000014077A50C: sub     ecx, 1
 * 000000014077A50F: jz      loc_14077A5C1
 * 000000014077A515: cmp     ecx, 1
 * 000000014077A518: jz      loc_14077A5A9
 * 000000014077A51E: rdtsc
 * 000000014077A520: shl     rdx, 20h
 * 000000014077A524: mov     r10d, 4EC4EC4Fh
 * 000000014077A52A: or      rax, rdx
 * 000000014077A52D: mov     rcx, rax
 * 000000014077A530: ror     rax, 3
 * 000000014077A534: xor     rcx, rax
 * 000000014077A537: mov     rax, r8
 * 000000014077A53A: mul     rcx
 * 000000014077A53D: mov     rdi, rax
 * 000000014077A540: mov     [rbp+1C70h+var_18A8], rdx
 * 000000014077A547: xor     edi, edx
 * 000000014077A549: mov     eax, r10d
 * 000000014077A54C: mul     edi
 * 000000014077A54E: mov     ecx, edi
 * 000000014077A550: shr     edi, 5
 * 000000014077A553: shr     edx, 3
 * 000000014077A556: mov     ebx, edi
 * 000000014077A558: imul    eax, edx, 1Ah
 * 000000014077A55B: sub     ecx, eax
 * 000000014077A55D: mov     eax, r10d
 * 000000014077A560: mul     edi
 * 000000014077A562: add     ecx, 61h ; 'a'
 * 000000014077A565: shr     edi, 5
 * 000000014077A568: shl     ecx, 8
 * 000000014077A56B: shr     edx, 3
 * 000000014077A56E: imul    eax, edx, 1Ah
 * 000000014077A571: sub     ebx, eax
 * 000000014077A573: mov     eax, r10d
 * 000000014077A576: mul     edi
 * 000000014077A578: add     ebx, 41h ; 'A'
 * 000000014077A57B: or      ebx, ecx
 * 000000014077A57D: shr     edx, 3
 * 000000014077A580: imul    eax, edx, 1Ah
 * 000000014077A583: mov     ecx, edi
 * 000000014077A585: shr     edi, 5
 * 000000014077A588: shl     ebx, 8
 * 000000014077A58B: sub     ecx, eax
 * 000000014077A58D: mov     eax, r10d
 * 000000014077A590: mul     edi
 * 000000014077A592: add     ecx, 61h ; 'a'
 * 000000014077A595: shr     edx, 3
 * 000000014077A598: or      ecx, ebx
 * 000000014077A59A: imul    eax, edx, 1Ah
 * 000000014077A59D: shl     ecx, 8
 * 000000014077A5A0: sub     edi, eax
 * 000000014077A5A2: add     edi, 41h ; 'A'
 * 000000014077A5A5: or      edi, ecx
 * 000000014077A5A7: jmp     short loc_14077A600
 * 000000014077A5A9: mov     [rbp+1C70h+var_1BA0], 0B0869E85h
 * 000000014077A5B3: mov     edi, [rbp+1C70h+var_1BA0]
 * 000000014077A5B9: xor     edi, 9
 * 000000014077A5BC: ror     edi, 21h
 * 000000014077A5BF: jmp     short loc_14077A600
 * 000000014077A5C1: mov     [rbp+1C70h+var_1B9C], 64664142h
 * 000000014077A5CB: mov     edi, [rbp+1C70h+var_1B9C]
 * 000000014077A5D1: ror     edi, 8
 * 000000014077A5D4: jmp     short loc_14077A600
 * 000000014077A5D6: mov     [rbp+1C70h+var_1B98], 82C6A6D8h
 * 000000014077A5E0: mov     edi, [rbp+1C70h+var_1B98]
 * 000000014077A5E6: rol     edi, 7
 * 000000014077A5E9: jmp     short loc_14077A600
 * 000000014077A5EB: mov     [rbp+1C70h+var_1B94], 4E574672h
 * 000000014077A5F5: mov     edi, [rbp+1C70h+var_1B94]
 * 000000014077A5FB: xor     edi, edx
 * 000000014077A5FD: ror     edi, 18h
 * 000000014077A600: rdtsc
 * 000000014077A602: shl     rdx, 20h
 * 000000014077A606: or      rax, rdx
 * 000000014077A609: mov     rcx, rax
 * 000000014077A60C: ror     rax, 3
 * 000000014077A610: xor     rcx, rax
 * 000000014077A613: mov     rax, r8
 * 000000014077A616: mul     rcx
 * 000000014077A619: mov     rsi, rax
 * 000000014077A61C: mov     [rbp+1C70h+var_18A0], rdx
 * 000000014077A623: xor     esi, edx
 * 000000014077A625: and     esi, r9d
 * 000000014077A628: rdtsc
 * 000000014077A62A: shl     rdx, 20h
 * 000000014077A62E: or      rax, rdx
 * 000000014077A631: mov     rcx, rax
 * 000000014077A634: ror     rax, 3
 * 000000014077A638: xor     rcx, rax
 * 000000014077A63B: mov     rax, r8
 * 000000014077A63E: mul     rcx
 * 000000014077A641: lea     ecx, [rsi+1]
 * 000000014077A644: mov     r8d, edi; Tag
 * 000000014077A647: mov     [rbp+1C70h+var_1898], rdx
 * 000000014077A64E: xor     rax, rdx
 * 000000014077A651: xor     edx, edx
 * 000000014077A653: div     rcx
 * 000000014077A656: xor     ecx, ecx; PoolType
 * 000000014077A658: mov     r14, rdx
 * 000000014077A65B: lea     edx, [rsi+r15]; NumberOfBytes
 * 000000014077A65F: call    ExAllocatePoolWithTag
 * 000000014077A664: mov     r9, rax
 * 000000014077A667: xor     eax, eax
 * 000000014077A669: test    r9, r9
 * 000000014077A66C: jz      loc_14077C9F7
 * 000000014077A672: mov     edi, r14d
 * 000000014077A675: mov     rbx, r9
 * 000000014077A678: mov     r10, 7010008004002001h
 * 000000014077A682: cmp     r14d, 8
 * 000000014077A686: jb      short loc_14077A6C1
 * 000000014077A688: mov     r8d, r14d
 * 000000014077A68B: shr     r8, 3
 * 000000014077A68F: rdtsc
 * 000000014077A691: shl     rdx, 20h
 * 000000014077A695: add     edi, 0FFFFFFF8h
 * 000000014077A698: or      rax, rdx
 * 000000014077A69B: mov     rcx, rax
 * 000000014077A69E: ror     rax, 3
 * 000000014077A6A2: xor     rcx, rax
 * 000000014077A6A5: mov     rax, r10
 * 000000014077A6A8: mul     rcx
 * 000000014077A6AB: mov     [rbp+1C70h+var_1890], rdx
 * 000000014077A6B2: xor     rdx, rax
 * 000000014077A6B5: mov     [rbx], rdx
 * 000000014077A6B8: add     rbx, 8
 * 000000014077A6BC: sub     r8, r13
 * 000000014077A6BF: jnz     short loc_14077A68F
 * 000000014077A6C1: test    edi, edi
 * 000000014077A6C3: jz      short loc_14077A6F6
 * 000000014077A6C5: rdtsc
 * 000000014077A6C7: shl     rdx, 20h
 * 000000014077A6CB: or      rax, rdx
 * 000000014077A6CE: mov     rcx, rax
 * 000000014077A6D1: ror     rax, 3
 * 000000014077A6D5: xor     rcx, rax
 * 000000014077A6D8: mov     rax, r10
 * 000000014077A6DB: mul     rcx
 * 000000014077A6DE: mov     [rbp+1C70h+var_1888], rdx
 * 000000014077A6E5: xor     rdx, rax
 * 000000014077A6E8: mov     [rbx], dl
 * 000000014077A6EA: add     rbx, r13
 * 000000014077A6ED: shr     rdx, 8
 * 000000014077A6F1: add     edi, 0FFFFFFFFh
 * 000000014077A6F4: jnz     short loc_14077A6E8
 * 000000014077A6F6: mov     r8d, r14d
 * 000000014077A6F9: sub     esi, r14d
 * 000000014077A6FC: mov     ebx, r15d
 * 000000014077A6FF: add     rbx, r8
 * 000000014077A702: add     rbx, r9
 * 000000014077A705: cmp     esi, 8
 * 000000014077A708: jb      short loc_14077A742
 * 000000014077A70A: mov     edi, esi
 * 000000014077A70C: shr     rdi, 3
 * 000000014077A710: rdtsc
 * 000000014077A712: shl     rdx, 20h
 * 000000014077A716: add     esi, 0FFFFFFF8h
 * 000000014077A719: or      rax, rdx
 * 000000014077A71C: mov     rcx, rax
 * 000000014077A71F: ror     rax, 3
 * 000000014077A723: xor     rcx, rax
 * 000000014077A726: mov     rax, r10
 * 000000014077A729: mul     rcx
 * 000000014077A72C: mov     [rbp+1C70h+var_1880], rdx
 * 000000014077A733: xor     rdx, rax
 * 000000014077A736: mov     [rbx], rdx
 * 000000014077A739: add     rbx, 8
 * 000000014077A73D: sub     rdi, r13
 * 000000014077A740: jnz     short loc_14077A710
 * 000000014077A742: xor     eax, eax
 * 000000014077A744: test    esi, esi
 * 000000014077A746: jz      short loc_14077A77B
 * 000000014077A748: rdtsc
 * 000000014077A74A: shl     rdx, 20h
 * 000000014077A74E: or      rax, rdx
 * 000000014077A751: mov     rcx, rax
 * 000000014077A754: ror     rax, 3
 * 000000014077A758: xor     rcx, rax
 * 000000014077A75B: mov     rax, r10
 * 000000014077A75E: mul     rcx
 * 000000014077A761: mov     [rbp+1C70h+var_1878], rdx
 * 000000014077A768: xor     rdx, rax
 * 000000014077A76B: mov     [rbx], dl
 * 000000014077A76D: add     rbx, r13
 * 000000014077A770: shr     rdx, 8
 * 000000014077A774: add     esi, 0FFFFFFFFh
 * 000000014077A777: jnz     short loc_14077A76B
 * 000000014077A779: xor     eax, eax
 * 000000014077A77B: lea     r14, [r8+r9]
 * 000000014077A77F: mov     [rbp+1C70h+var_1870], r9
 * 000000014077A786: mov     [rbp+1C70h+var_1CE0], r14
 * 000000014077A78A: test    r14, r14
 * 000000014077A78D: jz      loc_14077C9F7
 * 000000014077A793: mov     esi, [rbp+1C70h+var_1CB4]
 * 000000014077A796: xor     edx, edx; Val
 * 000000014077A798: mov     rcx, r14; void *
 * 000000014077A79B: lea     ebx, [rsi+80000h]
 * 000000014077A7A1: mov     r8d, ebx; Size
 * 000000014077A7A4: mov     dword ptr [rbp+1C70h+var_1CA8], ebx
 * 000000014077A7A7: call    memset
 * 000000014077A7AC: cli
 * 000000014077A7AD: xor     eax, eax
 * 000000014077A7AF: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077A7B5: jnz     short loc_14077A7B9
 * 000000014077A7B7: jmp     short loc_14077A7B7
 * 000000014077A7B9: sti
 * 000000014077A7BA: test    r12d, r12d
 * 000000014077A7BD: mov     ecx, 10000000h
 * 000000014077A7C2: setnz   al
 * 000000014077A7C5: shl     eax, 1Ch
 * 000000014077A7C8: xor     eax, [r14+6D8h]
 * 000000014077A7CF: and     eax, ecx
 * 000000014077A7D1: xor     eax, [r14+6D8h]
 * 000000014077A7D8: mov     [r14+6D8h], eax
 * 000000014077A7DF: test    ecx, eax
 * 000000014077A7E1: jz      short loc_14077A7EE
 * 000000014077A7E3: bts     eax, 1Bh
 * 000000014077A7E7: mov     [r14+6D8h], eax
 * 000000014077A7EE: xor     eax, eax
 * 000000014077A7F0: test    r12d, r12d
 * 000000014077A7F3: jnz     loc_14077B3DD
 * 000000014077A7F9: mov     rax, cs:off_1402F22E8
 * 000000014077A800: lea     rcx, [rbp+1C70h+var_E10]; void *
 * 000000014077A807: xor     edx, edx; Val
 * 000000014077A809: mov     cs:qword_1402F2210, rax
 * 000000014077A810: lea     r12, [r14+798h]
 * 000000014077A817: lea     r8d, [rdx+20h]; Size
 * 000000014077A81B: call    memset
 * 000000014077A820: mov     esi, [rbp+1C70h+var_DF8]
 * 000000014077A826: xor     eax, eax
 * 000000014077A828: mov     dword ptr [rbp+1C70h+var_1CC8], eax
 * 000000014077A82B: mov     ecx, eax
 * 000000014077A82D: mov     [rbp+1C70h+var_1CE8], rax
 * 000000014077A831: mov     eax, [rbp+1C70h+var_E00]
 * 000000014077A837: mov     dword ptr [rbp+1C70h+var_1CC0], eax
 * 000000014077A83A: mov     [rbp+1C70h+var_E10], r12
 * 000000014077A841: mov     dword ptr [rbp+1C70h+var_1CB0], esi
 * 000000014077A844: lea     rax, cs:140000000h
 * 000000014077A84B: mov     r15, rva qword_1402F2210[rax+rcx*8]
 * 000000014077A853: lea     r8, [rbp+1C70h+var_1B90]
 * 000000014077A85A: mov     rcx, r15
 * 000000014077A85D: lea     rdx, [rbp+1C70h+BugCheckParameter3]
 * 000000014077A864: call    RtlLookupFunctionTable
 * 000000014077A869: mov     rbx, rax
 * 000000014077A86C: mov     [rbp+1C70h+var_B88], rax
 * 000000014077A873: xor     eax, eax
 * 000000014077A875: test    rbx, rbx
 * 000000014077A878: jz      loc_14077A9A0
 * 000000014077A87E: mov     [rbp+1C70h+var_B60], rax
 * 000000014077A885: mov     rax, [rbp+1C70h+BugCheckParameter3]
 * 000000014077A88C: cmp     [rbp+1C70h+var_E88], rax
 * 000000014077A893: jnz     loc_14077A945
 * 000000014077A899: mov     rsi, [rbp+1C70h+var_E80]
 * 000000014077A8A0: lea     rdx, [rbp+1C70h+BugCheckParameter3]; ImageBase
 * 000000014077A8A7: xor     eax, eax
 * 000000014077A8A9: mov     [rbp+1C70h+var_B60], rsi
 * 000000014077A8B0: mov     [rbp+1C70h+var_B58], rax
 * 000000014077A8B7: xor     r8d, r8d; HistoryTable
 * 000000014077A8BA: mov     eax, [rbp+1C70h+var_E78]
 * 000000014077A8C0: mov     rcx, r15; ControlPc
 * 000000014077A8C3: mov     [rbp+1C70h+var_B50], eax
 * 000000014077A8C9: xor     eax, eax
 * 000000014077A8CB: mov     [rbp+1C70h+var_B4C], eax
 * 000000014077A8D1: call    RtlLookupFunctionEntry
 * 000000014077A8D6: mov     rdi, rax
 * 000000014077A8D9: mov     [rbp+1C70h+var_B80], rax
 * 000000014077A8E0: xor     eax, eax
 * 000000014077A8E2: test    rdi, rdi
 * 000000014077A8E5: jz      short loc_14077A93C
 * 000000014077A8E7: mov     edx, [rsi]
 * 000000014077A8E9: mov     r9d, edi
 * 000000014077A8EC: sub     r9d, dword ptr [rbp+1C70h+BugCheckParameter3]
 * 000000014077A8F3: mov     ebx, eax
 * 000000014077A8F5: sub     edx, r13d
 * 000000014077A8F8: js      short loc_14077A93C
 * 000000014077A8FA: lea     ecx, [rdx+rbx]
 * 000000014077A8FD: mov     r8d, r9d
 * 000000014077A900: sar     ecx, 1
 * 000000014077A902: sub     r8d, [rsi+rcx*8+8]
 * 000000014077A907: jns     short loc_14077A912
 * 000000014077A909: test    ecx, ecx
 * 000000014077A90B: jz      short loc_14077A93C
 * 000000014077A90D: lea     edx, [rcx-1]
 * 000000014077A910: jmp     short loc_14077A91A
 * 000000014077A912: test    r8d, r8d
 * 000000014077A915: jle     short loc_14077A91E
 * 000000014077A917: lea     ebx, [rcx+1]
 * 000000014077A91A: cmp     edx, ebx
 * 000000014077A91C: jge     short loc_14077A8FA
 * 000000014077A91E: cmp     edx, ebx
 * 000000014077A920: mov     rbx, [rbp+1C70h+var_B88]
 * 000000014077A927: jl      short loc_14077A937
 * 000000014077A929: inc     rcx
 * 000000014077A92C: lea     rcx, [rsi+rcx*8]
 * 000000014077A930: mov     [rbp+1C70h+var_B58], rcx
 * 000000014077A937: mov     esi, dword ptr [rbp+1C70h+var_1CB0]
 * 000000014077A93A: jmp     short loc_14077A94C
 * 000000014077A93C: mov     rbx, [rbp+1C70h+var_B88]
 * 000000014077A943: jmp     short loc_14077A937
 * 000000014077A945: mov     rdi, [rbp+1C70h+var_B80]
 * 000000014077A94C: mov     ecx, [rbp+1C70h+var_1B90]
 * 000000014077A952: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014077A95C: mul     rcx
 * 000000014077A95F: mov     [rbp+1C70h+var_B90], r15
 * 000000014077A966: mov     r15, [rbp+1C70h+BugCheckParameter3]
 * 000000014077A96D: shr     rdx, 3
 * 000000014077A971: mov     eax, edx
 * 000000014077A973: mov     [rbp+1C70h+var_1B90], edx
 * 000000014077A979: mov     [rsp+1D70h+var_1D20], r15
 * 000000014077A97E: lea     rcx, [rax+rax*2]
 * 000000014077A982: lea     rax, [rbx+rcx*4]
 * 000000014077A986: lea     rcx, [rbp+1C70h+var_1868]
 * 000000014077A98D: mov     [rbp+1C70h+var_B70], rax
 * 000000014077A994: mov     [rbp+1C70h+var_B68], rcx
 * 000000014077A99B: jmp     loc_14077AFA8
 * 000000014077A9A0: mov     rcx, [rbp+1C70h+var_B68]
 * 000000014077A9A7: mov     rdi, [rbp+1C70h+var_B80]
 * 000000014077A9AE: mov     r15, [rsp+1D70h+var_1D20]
 * 000000014077A9B3: test    rbx, rbx
 * 000000014077A9B6: jz      loc_14077AACC
 * 000000014077A9BC: cmp     rbx, [rbp+1C70h+var_B70]
 * 000000014077A9C3: jz      loc_14077AACC
 * 000000014077A9C9: cmp     [rbp+1C70h+var_B60], rax
 * 000000014077A9D0: jz      loc_14077AA80
 * 000000014077A9D6: test    rdi, rdi
 * 000000014077A9D9: jz      loc_14077AACC
 * 000000014077A9DF: cmp     [rbp+1C70h+var_B58], rax
 * 000000014077A9E6: jnz     short loc_14077A9F7
 * 000000014077A9E8: mov     [rcx], rdi
 * 000000014077A9EB: mov     [rbp+1C70h+var_B80], rax
 * 000000014077A9F2: jmp     loc_14077AB7E
 * 000000014077A9F7: mov     rax, [rbp+1C70h+var_B58]
 * 000000014077A9FE: mov     edx, [rax+4]
 * 000000014077AA01: test    r13b, dl
 * 000000014077AA04: jz      short loc_14077AA23
 * 000000014077AA06: and     edx, 0FFFFFFFEh
 * 000000014077AA09: mov     eax, edx
 * 000000014077AA0B: add     rax, [rbp+1C70h+BugCheckParameter3]
 * 000000014077AA12: mov     [rcx], rax
 * 000000014077AA15: xor     eax, eax
 * 000000014077AA17: mov     [rbp+1C70h+var_B58], rax
 * 000000014077AA1E: jmp     loc_14077AB7E
 * 000000014077AA23: mov     ebx, [rbp+1C70h+var_B4C]
 * 000000014077AA29: add     edx, ebx
 * 000000014077AA2B: mov     edi, edx
 * 000000014077AA2D: lea     r8, [rdx+4]
 * 000000014077AA31: cmp     r8, rdi
 * 000000014077AA34: jb      loc_14078D501
 * 000000014077AA3A: mov     eax, [rbp+1C70h+var_B50]
 * 000000014077AA40: cmp     r8, rax
 * 000000014077AA43: ja      loc_14078D501
 * 000000014077AA49: mov     rax, [rbp+1C70h+var_B60]
 * 000000014077AA50: add     ebx, 4
 * 000000014077AA53: mov     edx, [rdx+rax]
 * 000000014077AA56: mov     [rbp+1C70h+var_B4C], ebx
 * 000000014077AA5C: test    r13b, dl
 * 000000014077AA5F: jnz     short loc_14077AA6C
 * 000000014077AA61: xor     eax, eax
 * 000000014077AA63: mov     [rbp+1C70h+var_B58], rax
 * 000000014077AA6A: jmp     short loc_14077AA6F
 * 000000014077AA6C: and     edx, 0FFFFFFFEh
 * 000000014077AA6F: mov     eax, edx
 * 000000014077AA71: add     rax, [rbp+1C70h+BugCheckParameter3]
 * 000000014077AA78: mov     [rcx], rax
 * 000000014077AA7B: jmp     loc_14077AB7E
 * 000000014077AA80: mov     rdx, [rbp+1C70h+BugCheckParameter3]
 * 000000014077AA87: mov     rcx, rbx
 * 000000014077AA8A: mov     rdi, rbx
 * 000000014077AA8D: call    RtlpConvertFunctionEntry
 * 000000014077AA92: mov     r8, [rbp+1C70h+var_B90]
 * 000000014077AA99: mov     rcx, rax
 * 000000014077AA9C: mov     rdx, [rbp+1C70h+BugCheckParameter3]
 * 000000014077AAA3: call    RtlpSameFunction
 * 000000014077AAA8: mov     rbx, [rbp+1C70h+var_B88]
 * 000000014077AAAF: add     rbx, 0Ch
 * 000000014077AAB3: mov     [rbp+1C70h+var_B88], rbx
 * 000000014077AABA: test    rax, rax
 * 000000014077AABD: jnz     loc_14077AB74
 * 000000014077AAC3: cmp     rbx, [rbp+1C70h+var_B70]
 * 000000014077AACA: jnz     short loc_14077AA80
 * 000000014077AACC: mov     edi, dword ptr [rbp+1C70h+var_1CC8]
 * 000000014077AACF: mov     rcx, [rbp+1C70h+var_1CE8]
 * 000000014077AAD3: add     edi, r13d
 * 000000014077AAD6: add     rcx, r13
 * 000000014077AAD9: mov     dword ptr [rbp+1C70h+var_1CC8], edi
 * 000000014077AADC: mov     [rbp+1C70h+var_1CE8], rcx
 * 000000014077AAE0: cmp     edi, 9
 * 000000014077AAE3: jb      loc_14077A844
 * 000000014077AAE9: test    r12, r12
 * 000000014077AAEC: jz      short loc_14077AB08
 * 000000014077AAEE: mov     eax, esi
 * 000000014077AAF0: lea     rcx, off_1402F22E8
 * 000000014077AAF7: add     rax, rax
 * 000000014077AAFA: mov     dword ptr [r12+rax*8+10h], 8
 * 000000014077AB03: mov     [r12+rax*8+8], rcx
 * 000000014077AB08: add     [rbp+1C70h+var_DF4], 8
 * 000000014077AB0F: mov     rax, [rsp+78h]
 * 000000014077AB14: mov     rdx, cs:MmPteBase
 * 000000014077AB1B: lea     rcx, [rbp+1C70h+var_DD0]
 * 000000014077AB22: shr     rax, 9
 * 000000014077AB26: mov     r8, 7FFFFFFFF8h
 * 000000014077AB30: and     rax, r8
 * 000000014077AB33: mov     edi, 4
 * 000000014077AB38: add     rax, rdx
 * 000000014077AB3B: mov     ebx, edi
 * 000000014077AB3D: mov     [rcx], rax
 * 000000014077AB40: lea     rcx, [rcx+8]
 * 000000014077AB44: shr     rax, 9
 * 000000014077AB48: and     rax, r8
 * 000000014077AB4B: add     rax, rdx
 * 000000014077AB4E: sub     rbx, r13
 * 000000014077AB51: jnz     short loc_14077AB3D
 * 000000014077AB53: xor     r14d, r14d
 * 000000014077AB56: mov     ebx, r14d
 * 000000014077AB59: lea     edx, [r14+3]
 * 000000014077AB5D: test    ebx, ebx
 * 000000014077AB5F: jz      loc_14077AFAF
 * 000000014077AB65: mov     eax, edx
 * 000000014077AB67: mov     [rbp+rax*8+1C70h+var_DD0], r14
 * 000000014077AB6F: jmp     loc_14077AFC8
 * 000000014077AB74: mov     rax, [rbp+1C70h+var_B68]
 * 000000014077AB7B: mov     [rax], rdi
 * 000000014077AB7E: mov     rax, [rbp+1C70h+var_1868]
 * 000000014077AB85: mov     ecx, [rax]
 * 000000014077AB87: mov     edx, [rax+4]
 * 000000014077AB8A: sub     edx, ecx
 * 000000014077AB8C: add     rcx, r15
 * 000000014077AB8F: test    r12, r12
 * 000000014077AB92: jz      short loc_14077ABA3
 * 000000014077AB94: mov     eax, esi
 * 000000014077AB96: add     rax, rax
 * 000000014077AB99: mov     [r12+rax*8+10h], edx
 * 000000014077AB9E: mov     [r12+rax*8+8], rcx
 * 000000014077ABA3: add     [rbp+1C70h+var_DF4], edx
 * 000000014077ABA9: inc     esi
 * 000000014077ABAB: mov     r15, rcx
 * 000000014077ABAE: mov     eax, edx
 * 000000014077ABB0: and     r15, 0FFFFFFFFFFFFF000h
 * 000000014077ABB7: mov     dword ptr [rbp+1C70h+var_1CB0], esi
 * 000000014077ABBA: add     rax, rcx
 * 000000014077ABBD: mov     [rbp+1C70h+var_1C90], rax
 * 000000014077ABC1: mov     rdx, cs:MmPteBase
 * 000000014077ABC8: lea     rcx, [rbp+1C70h+var_DF0]
 * 000000014077ABCF: mov     rax, r15
 * 000000014077ABD2: mov     rdi, 7FFFFFFFF8h
 * 000000014077ABDC: shr     rax, 9
 * 000000014077ABE0: mov     ebx, 4
 * 000000014077ABE5: and     rax, rdi
 * 000000014077ABE8: add     rax, rdx
 * 000000014077ABEB: mov     [rcx], rax
 * 000000014077ABEE: lea     rcx, [rcx+8]
 * 000000014077ABF2: shr     rax, 9
 * 000000014077ABF6: and     rax, rdi
 * 000000014077ABF9: add     rax, rdx
 * 000000014077ABFC: sub     rbx, r13
 * 000000014077ABFF: jnz     short loc_14077ABEB
 * 000000014077AC01: xor     r14d, r14d
 * 000000014077AC04: mov     ebx, r14d
 * 000000014077AC07: lea     edx, [r14+3]
 * 000000014077AC0B: test    ebx, ebx
 * 000000014077AC0D: jz      short loc_14077AC1B
 * 000000014077AC0F: mov     eax, edx
 * 000000014077AC11: mov     [rbp+rax*8+1C70h+var_DF0], r14
 * 000000014077AC19: jmp     short loc_14077AC34
 * 000000014077AC1B: test    edx, edx
 * 000000014077AC1D: jz      short loc_14077AC3D
 * 000000014077AC1F: mov     eax, edx
 * 000000014077AC21: mov     rcx, [rbp+rax*8+1C70h+var_DF0]
 * 000000014077AC29: mov     al, [rcx]
 * 000000014077AC2B: shr     al, 7
 * 000000014077AC2E: test    al, al
 * 000000014077AC30: cmovnz  ebx, r13d
 * 000000014077AC34: dec     edx
 * 000000014077AC36: lea     eax, [rdx+1]
 * 000000014077AC39: test    eax, eax
 * 000000014077AC3B: jnz     short loc_14077AC0B
 * 000000014077AC3D: mov     r14, [rbp+1C70h+var_1CE0]
 * 000000014077AC41: mov     r12d, 4
 * 000000014077AC47: dec     r12d
 * 000000014077AC4A: xor     eax, eax
 * 000000014077AC4C: mov     rbx, [rbp+r12*8+1C70h+var_DF0]
 * 000000014077AC54: mov     [rbp+1C70h+Timer], rbx
 * 000000014077AC58: test    rbx, rbx
 * 000000014077AC5B: jz      loc_14077AF6C
 * 000000014077AC61: mov     edx, eax
 * 000000014077AC63: cmp     [rbp+1C70h+var_DFC], eax
 * 000000014077AC69: jbe     short loc_14077AC85
 * 000000014077AC6B: mov     rax, [rbp+1C70h+var_E08]
 * 000000014077AC72: mov     ecx, edx
 * 000000014077AC74: cmp     rbx, [rax+rcx*8]
 * 000000014077AC78: jz      short loc_14077AC85
 * 000000014077AC7A: add     edx, r13d
 * 000000014077AC7D: cmp     edx, [rbp+1C70h+var_DFC]
 * 000000014077AC83: jb      short loc_14077AC6B
 * 000000014077AC85: mov     eax, [rbp+1C70h+var_DFC]
 * 000000014077AC8B: cmp     edx, eax
 * 000000014077AC8D: jnz     loc_14077AF63
 * 000000014077AC93: mov     r8d, dword ptr [rbp+1C70h+var_1CC0]
 * 000000014077AC97: cmp     eax, r8d
 * 000000014077AC9A: jnz     loc_14077AF44
 * 000000014077ACA0: lea     r8d, ds:40h[r8*2]
 * 000000014077ACA8: mov     dword ptr [rbp+1C70h+var_1CC0], r8d
 * 000000014077ACAC: rdtsc
 * 000000014077ACAE: shl     rdx, 20h
 * 000000014077ACB2: mov     rbx, 7010008004002001h
 * 000000014077ACBC: or      rax, rdx
 * 000000014077ACBF: mov     rcx, rax
 * 000000014077ACC2: ror     rax, 3
 * 000000014077ACC6: xor     rcx, rax
 * 000000014077ACC9: mov     rax, rbx
 * 000000014077ACCC: mul     rcx
 * 000000014077ACCF: mov     rcx, rdx
 * 000000014077ACD2: mov     [rbp+1C70h+var_1860], rdx
 * 000000014077ACD9: xor     rcx, rax
 * 000000014077ACDC: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014077ACE6: mul     rcx
 * 000000014077ACE9: shr     rdx, 1
 * 000000014077ACEC: imul    rax, rdx, 0Bh
 * 000000014077ACF0: sub     rcx, rax
 * 000000014077ACF3: mov     eax, 5
 * 000000014077ACF8: cmp     ecx, eax
 * 000000014077ACFA: ja      loc_14077ADAB
 * 000000014077AD00: jz      loc_14077AD93
 * 000000014077AD06: test    ecx, ecx
 * 000000014077AD08: jz      short loc_14077AD7B
 * 000000014077AD0A: sub     ecx, 1
 * 000000014077AD0D: jz      short loc_14077AD64
 * 000000014077AD0F: sub     ecx, 1
 * 000000014077AD12: jz      short loc_14077AD4C
 * 000000014077AD14: cmp     ecx, 1
 * 000000014077AD17: jz      short loc_14077AD31
 * 000000014077AD19: mov     [rbp+1C70h+var_1B8C], 67076494h
 * 000000014077AD23: mov     edi, [rbp+1C70h+var_1B8C]
 * 000000014077AD29: rol     edi, 4
 * 000000014077AD2C: jmp     loc_14077AEB5
 * 000000014077AD31: mov     [rbp+1C70h+var_1B88], 0A8223938h
 * 000000014077AD3B: mov     edi, [rbp+1C70h+var_1B88]
 * 000000014077AD41: xor     edi, 3
 * 000000014077AD44: ror     edi, 0Fh
 * 000000014077AD47: jmp     loc_14077AEB5
 * 000000014077AD4C: mov     [rbp+1C70h+var_1B84], 85B5910Dh
 * 000000014077AD56: mov     edi, [rbp+1C70h+var_1B84]
 * 000000014077AD5C: ror     edi, 2
 * 000000014077AD5F: jmp     loc_14077AEB5
 * 000000014077AD64: mov     [rbp+1C70h+var_1B80], 0B2AD31A1h
 * 000000014077AD6E: mov     edi, [rbp+1C70h+var_1B80]
 * 000000014077AD74: rol     edi, 1
 * 000000014077AD76: jmp     loc_14077AEB5
 * 000000014077AD7B: mov     [rbp+1C70h+var_1B7C], 0D098D0D8h
 * 000000014077AD85: mov     edi, [rbp+1C70h+var_1B7C]
 * 000000014077AD8B: ror     edi, 6
 * 000000014077AD8E: jmp     loc_14077AEB5
 * 000000014077AD93: mov     [rbp+1C70h+var_1B78], 288C49EDh
 * 000000014077AD9D: mov     edi, [rbp+1C70h+var_1B78]
 * 000000014077ADA3: ror     edi, 5
 * 000000014077ADA6: jmp     loc_14077AEB5
 * 000000014077ADAB: mov     edx, 6
 * 000000014077ADB0: sub     ecx, edx
 * 000000014077ADB2: jz      loc_14077AEA0
 * 000000014077ADB8: sub     ecx, 1
 * 000000014077ADBB: jz      loc_14077AE8B
 * 000000014077ADC1: sub     ecx, 1
 * 000000014077ADC4: jz      loc_14077AE76
 * 000000014077ADCA: cmp     ecx, 1
 * 000000014077ADCD: jz      loc_14077AE5E
 * 000000014077ADD3: rdtsc
 * 000000014077ADD5: shl     rdx, 20h
 * 000000014077ADD9: mov     r9d, 4EC4EC4Fh
 * 000000014077ADDF: or      rax, rdx
 * 000000014077ADE2: mov     rcx, rax
 * 000000014077ADE5: ror     rax, 3
 * 000000014077ADE9: xor     rcx, rax
 * 000000014077ADEC: mov     rax, rbx
 * 000000014077ADEF: mul     rcx
 * 000000014077ADF2: mov     rdi, rax
 * 000000014077ADF5: mov     [rbp+1C70h+var_1858], rdx
 * 000000014077ADFC: xor     edi, edx
 * 000000014077ADFE: mov     eax, r9d
 * 000000014077AE01: mul     edi
 * 000000014077AE03: mov     ecx, edi
 * 000000014077AE05: shr     edi, 5
 * 000000014077AE08: shr     edx, 3
 * 000000014077AE0B: mov     ebx, edi
 * 000000014077AE0D: imul    eax, edx, 1Ah
 * 000000014077AE10: sub     ecx, eax
 * 000000014077AE12: mov     eax, r9d
 * 000000014077AE15: mul     edi
 * 000000014077AE17: add     ecx, 61h ; 'a'
 * 000000014077AE1A: shr     edi, 5
 * 000000014077AE1D: shl     ecx, 8
 * 000000014077AE20: shr     edx, 3
 * 000000014077AE23: imul    eax, edx, 1Ah
 * 000000014077AE26: sub     ebx, eax
 * 000000014077AE28: mov     eax, r9d
 * 000000014077AE2B: mul     edi
 * 000000014077AE2D: add     ebx, 41h ; 'A'
 * 000000014077AE30: or      ebx, ecx
 * 000000014077AE32: shr     edx, 3
 * 000000014077AE35: imul    eax, edx, 1Ah
 * 000000014077AE38: mov     ecx, edi
 * 000000014077AE3A: shr     edi, 5
 * 000000014077AE3D: shl     ebx, 8
 * 000000014077AE40: sub     ecx, eax
 * 000000014077AE42: mov     eax, r9d
 * 000000014077AE45: mul     edi
 * 000000014077AE47: add     ecx, 61h ; 'a'
 * 000000014077AE4A: shr     edx, 3
 * 000000014077AE4D: or      ecx, ebx
 * 000000014077AE4F: imul    eax, edx, 1Ah
 * 000000014077AE52: shl     ecx, 8
 * 000000014077AE55: sub     edi, eax
 * 000000014077AE57: add     edi, 41h ; 'A'
 * 000000014077AE5A: or      edi, ecx
 * 000000014077AE5C: jmp     short loc_14077AEB5
 * 000000014077AE5E: mov     [rbp+1C70h+var_1B74], 0B0869E85h
 * 000000014077AE68: mov     edi, [rbp+1C70h+var_1B74]
 * 000000014077AE6E: xor     edi, 9
 * 000000014077AE71: ror     edi, 21h
 * 000000014077AE74: jmp     short loc_14077AEB5
 * 000000014077AE76: mov     [rbp+1C70h+var_1B70], 64664142h
 * 000000014077AE80: mov     edi, [rbp+1C70h+var_1B70]
 * 000000014077AE86: ror     edi, 8
 * 000000014077AE89: jmp     short loc_14077AEB5
 * 000000014077AE8B: mov     [rbp+1C70h+var_1B6C], 82C6A6D8h
 * 000000014077AE95: mov     edi, [rbp+1C70h+var_1B6C]
 * 000000014077AE9B: rol     edi, 7
 * 000000014077AE9E: jmp     short loc_14077AEB5
 * 000000014077AEA0: mov     [rbp+1C70h+var_1B68], 4E574672h
 * 000000014077AEAA: mov     edi, [rbp+1C70h+var_1B68]
 * 000000014077AEB0: xor     edi, edx
 * 000000014077AEB2: ror     edi, 18h
 * 000000014077AEB5: mov     edx, r8d
 * 000000014077AEB8: mov     ecx, 200h; PoolType
 * 000000014077AEBD: shl     rdx, 3; NumberOfBytes
 * 000000014077AEC1: mov     r8d, edi; Tag
 * 000000014077AEC4: call    ExAllocatePoolWithTag
 * 000000014077AEC9: mov     rsi, rax
 * 000000014077AECC: xor     eax, eax
 * 000000014077AECE: test    rsi, rsi
 * 000000014077AED1: jz      loc_14077C9F7
 * 000000014077AED7: mov     rcx, [rbp+1C70h+var_E08]
 * 000000014077AEDE: test    rcx, rcx
 * 000000014077AEE1: jz      short loc_14077AF30
 * 000000014077AEE3: mov     edx, [rbp+1C70h+var_DFC]
 * 000000014077AEE9: mov     rbx, rsi
 * 000000014077AEEC: shl     edx, 3
 * 000000014077AEEF: cmp     edx, 8
 * 000000014077AEF2: jb      short loc_14077AF10
 * 000000014077AEF4: mov     edi, edx
 * 000000014077AEF6: shr     rdi, 3
 * 000000014077AEFA: mov     rax, [rcx]
 * 000000014077AEFD: add     edx, 0FFFFFFF8h
 * 000000014077AF00: mov     [rbx], rax
 * 000000014077AF03: add     rcx, 8
 * 000000014077AF07: add     rbx, 8
 * 000000014077AF0B: sub     rdi, r13
 * 000000014077AF0E: jnz     short loc_14077AEFA
 * 000000014077AF10: test    edx, edx
 * 000000014077AF12: jz      short loc_14077AF24
 * 000000014077AF14: sub     rbx, rcx
 * 000000014077AF17: mov     al, [rcx]
 * 000000014077AF19: mov     [rbx+rcx], al
 * 000000014077AF1C: add     rcx, r13
 * 000000014077AF1F: add     edx, 0FFFFFFFFh
 * 000000014077AF22: jnz     short loc_14077AF17
 * 000000014077AF24: mov     rcx, [rbp+1C70h+var_E08]; P
 * 000000014077AF2B: call    ExFreePool
 * 000000014077AF30: mov     eax, dword ptr [rbp+1C70h+var_1CC0]
 * 000000014077AF33: mov     rbx, [rbp+1C70h+Timer]
 * 000000014077AF37: mov     [rbp+1C70h+var_E00], eax
 * 000000014077AF3D: mov     [rbp+1C70h+var_E08], rsi
 * 000000014077AF44: mov     ecx, [rbp+1C70h+var_DFC]
 * 000000014077AF4A: mov     rax, [rbp+1C70h+var_E08]
 * 000000014077AF51: add     [rbp+1C70h+var_DFC], r13d
 * 000000014077AF58: add     [rbp+1C70h+var_DF4], 10h
 * 000000014077AF5F: mov     [rax+rcx*8], rbx
 * 000000014077AF63: test    r12d, r12d
 * 000000014077AF66: jnz     loc_14077AC47
 * 000000014077AF6C: mov     eax, 1000h
 * 000000014077AF71: add     r15, rax
 * 000000014077AF74: cmp     r15, [rbp+1C70h+var_1C90]
 * 000000014077AF78: jb      loc_14077ABC1
 * 000000014077AF7E: mov     esi, dword ptr [rbp+1C70h+var_1CB0]
 * 000000014077AF81: lea     r12, [r14+798h]
 * 000000014077AF88: mov     rcx, [rbp+1C70h+var_B68]
 * 000000014077AF8F: mov     rdi, [rbp+1C70h+var_B80]
 * 000000014077AF96: mov     rbx, [rbp+1C70h+var_B88]
 * 000000014077AF9D: mov     r15, [rsp+1D70h+var_1D20]
 * 000000014077AFA2: mov     [rbp+1C70h+var_DF8], esi
 * 000000014077AFA8: xor     eax, eax
 * 000000014077AFAA: jmp     loc_14077A9B3
 * 000000014077AFAF: test    edx, edx
 * 000000014077AFB1: jz      short loc_14077AFD5
 * 000000014077AFB3: mov     eax, edx
 * 000000014077AFB5: mov     rcx, [rbp+rax*8+1C70h+var_DD0]
 * 000000014077AFBD: mov     al, [rcx]
 * 000000014077AFBF: shr     al, 7
 * 000000014077AFC2: test    al, al
 * 000000014077AFC4: cmovnz  ebx, r13d
 * 000000014077AFC8: dec     edx
 * 000000014077AFCA: lea     eax, [rdx+1]
 * 000000014077AFCD: test    eax, eax
 * 000000014077AFCF: jnz     loc_14077AB5D
 * 000000014077AFD5: mov     r14, [rbp+1C70h+var_1CE0]
 * 000000014077AFD9: mov     r15d, edi
 * 000000014077AFDC: dec     r15d
 * 000000014077AFDF: xor     eax, eax
 * 000000014077AFE1: mov     r12, [rbp+r15*8+1C70h+var_DD0]
 * 000000014077AFE9: test    r12, r12
 * 000000014077AFEC: jz      loc_14077B2F9
 * 000000014077AFF2: mov     edx, eax
 * 000000014077AFF4: cmp     [rbp+1C70h+var_DFC], eax
 * 000000014077AFFA: jbe     short loc_14077B016
 * 000000014077AFFC: mov     rax, [rbp+1C70h+var_E08]
 * 000000014077B003: mov     ecx, edx
 * 000000014077B005: cmp     r12, [rax+rcx*8]
 * 000000014077B009: jz      short loc_14077B016
 * 000000014077B00B: add     edx, r13d
 * 000000014077B00E: cmp     edx, [rbp+1C70h+var_DFC]
 * 000000014077B014: jb      short loc_14077AFFC
 * 000000014077B016: mov     eax, [rbp+1C70h+var_DFC]
 * 000000014077B01C: cmp     edx, eax
 * 000000014077B01E: jnz     loc_14077B2F0
 * 000000014077B024: mov     r8d, dword ptr [rbp+1C70h+var_1CC0]
 * 000000014077B028: cmp     eax, r8d
 * 000000014077B02B: jnz     loc_14077B2D1
 * 000000014077B031: lea     r8d, ds:40h[r8*2]
 * 000000014077B039: mov     dword ptr [rbp+1C70h+var_1CC0], r8d
 * 000000014077B03D: rdtsc
 * 000000014077B03F: shl     rdx, 20h
 * 000000014077B043: mov     rbx, 7010008004002001h
 * 000000014077B04D: or      rax, rdx
 * 000000014077B050: mov     rcx, rax
 * 000000014077B053: ror     rax, 3
 * 000000014077B057: xor     rcx, rax
 * 000000014077B05A: mov     rax, rbx
 * 000000014077B05D: mul     rcx
 * 000000014077B060: mov     rcx, rdx
 * 000000014077B063: mov     [rbp+1C70h+var_1850], rdx
 * 000000014077B06A: xor     rcx, rax
 * 000000014077B06D: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014077B077: mul     rcx
 * 000000014077B07A: shr     rdx, 1
 * 000000014077B07D: imul    rax, rdx, 0Bh
 * 000000014077B081: sub     rcx, rax
 * 000000014077B084: mov     eax, 5
 * 000000014077B089: cmp     ecx, eax
 * 000000014077B08B: ja      loc_14077B13C
 * 000000014077B091: jz      loc_14077B124
 * 000000014077B097: test    ecx, ecx
 * 000000014077B099: jz      short loc_14077B10C
 * 000000014077B09B: sub     ecx, 1
 * 000000014077B09E: jz      short loc_14077B0F5
 * 000000014077B0A0: sub     ecx, 1
 * 000000014077B0A3: jz      short loc_14077B0DD
 * 000000014077B0A5: cmp     ecx, 1
 * 000000014077B0A8: jz      short loc_14077B0C2
 * 000000014077B0AA: mov     [rbp+1C70h+var_1B60], 67076494h
 * 000000014077B0B4: mov     edi, [rbp+1C70h+var_1B60]
 * 000000014077B0BA: rol     edi, 4
 * 000000014077B0BD: jmp     loc_14077B246
 * 000000014077B0C2: mov     [rbp+1C70h+var_1B5C], 0A8223938h
 * 000000014077B0CC: mov     edi, [rbp+1C70h+var_1B5C]
 * 000000014077B0D2: xor     edi, 3
 * 000000014077B0D5: ror     edi, 0Fh
 * 000000014077B0D8: jmp     loc_14077B246
 * 000000014077B0DD: mov     [rbp+1C70h+var_1B58], 85B5910Dh
 * 000000014077B0E7: mov     edi, [rbp+1C70h+var_1B58]
 * 000000014077B0ED: ror     edi, 2
 * 000000014077B0F0: jmp     loc_14077B246
 * 000000014077B0F5: mov     [rbp+1C70h+var_1B54], 0B2AD31A1h
 * 000000014077B0FF: mov     edi, [rbp+1C70h+var_1B54]
 * 000000014077B105: rol     edi, 1
 * 000000014077B107: jmp     loc_14077B246
 * 000000014077B10C: mov     [rbp+1C70h+var_1B50], 0D098D0D8h
 * 000000014077B116: mov     edi, [rbp+1C70h+var_1B50]
 * 000000014077B11C: ror     edi, 6
 * 000000014077B11F: jmp     loc_14077B246
 * 000000014077B124: mov     [rbp+1C70h+var_1B4C], 288C49EDh
 * 000000014077B12E: mov     edi, [rbp+1C70h+var_1B4C]
 * 000000014077B134: ror     edi, 5
 * 000000014077B137: jmp     loc_14077B246
 * 000000014077B13C: mov     edx, 6
 * 000000014077B141: sub     ecx, edx
 * 000000014077B143: jz      loc_14077B231
 * 000000014077B149: sub     ecx, 1
 * 000000014077B14C: jz      loc_14077B21C
 * 000000014077B152: sub     ecx, 1
 * 000000014077B155: jz      loc_14077B207
 * 000000014077B15B: cmp     ecx, 1
 * 000000014077B15E: jz      loc_14077B1EF
 * 000000014077B164: rdtsc
 * 000000014077B166: shl     rdx, 20h
 * 000000014077B16A: mov     r9d, 4EC4EC4Fh
 * 000000014077B170: or      rax, rdx
 * 000000014077B173: mov     rcx, rax
 * 000000014077B176: ror     rax, 3
 * 000000014077B17A: xor     rcx, rax
 * 000000014077B17D: mov     rax, rbx
 * 000000014077B180: mul     rcx
 * 000000014077B183: mov     rdi, rax
 * 000000014077B186: mov     [rbp+1C70h+var_1848], rdx
 * 000000014077B18D: xor     edi, edx
 * 000000014077B18F: mov     eax, r9d
 * 000000014077B192: mul     edi
 * 000000014077B194: mov     ecx, edi
 * 000000014077B196: shr     edi, 5
 * 000000014077B199: shr     edx, 3
 * 000000014077B19C: mov     ebx, edi
 * 000000014077B19E: imul    eax, edx, 1Ah
 * 000000014077B1A1: sub     ecx, eax
 * 000000014077B1A3: mov     eax, r9d
 * 000000014077B1A6: mul     edi
 * 000000014077B1A8: add     ecx, 61h ; 'a'
 * 000000014077B1AB: shr     edi, 5
 * 000000014077B1AE: shl     ecx, 8
 * 000000014077B1B1: shr     edx, 3
 * 000000014077B1B4: imul    eax, edx, 1Ah
 * 000000014077B1B7: sub     ebx, eax
 * 000000014077B1B9: mov     eax, r9d
 * 000000014077B1BC: mul     edi
 * 000000014077B1BE: add     ebx, 41h ; 'A'
 * 000000014077B1C1: or      ebx, ecx
 * 000000014077B1C3: shr     edx, 3
 * 000000014077B1C6: imul    eax, edx, 1Ah
 * 000000014077B1C9: mov     ecx, edi
 * 000000014077B1CB: shr     edi, 5
 * 000000014077B1CE: shl     ebx, 8
 * 000000014077B1D1: sub     ecx, eax
 * 000000014077B1D3: mov     eax, r9d
 * 000000014077B1D6: mul     edi
 * 000000014077B1D8: add     ecx, 61h ; 'a'
 * 000000014077B1DB: shr     edx, 3
 * 000000014077B1DE: or      ecx, ebx
 * 000000014077B1E0: imul    eax, edx, 1Ah
 * 000000014077B1E3: shl     ecx, 8
 * 000000014077B1E6: sub     edi, eax
 * 000000014077B1E8: add     edi, 41h ; 'A'
 * 000000014077B1EB: or      edi, ecx
 * 000000014077B1ED: jmp     short loc_14077B246
 * 000000014077B1EF: mov     [rbp+1C70h+var_1B48], 0B0869E85h
 * 000000014077B1F9: mov     edi, [rbp+1C70h+var_1B48]
 * 000000014077B1FF: xor     edi, 9
 * 000000014077B202: ror     edi, 21h
 * 000000014077B205: jmp     short loc_14077B246
 * 000000014077B207: mov     [rbp+1C70h+var_1B44], 64664142h
 * 000000014077B211: mov     edi, [rbp+1C70h+var_1B44]
 * 000000014077B217: ror     edi, 8
 * 000000014077B21A: jmp     short loc_14077B246
 * 000000014077B21C: mov     [rbp+1C70h+var_1B40], 82C6A6D8h
 * 000000014077B226: mov     edi, [rbp+1C70h+var_1B40]
 * 000000014077B22C: rol     edi, 7
 * 000000014077B22F: jmp     short loc_14077B246
 * 000000014077B231: mov     [rbp+1C70h+var_1B3C], 4E574672h
 * 000000014077B23B: mov     edi, [rbp+1C70h+var_1B3C]
 * 000000014077B241: xor     edi, edx
 * 000000014077B243: ror     edi, 18h
 * 000000014077B246: mov     edx, r8d
 * 000000014077B249: mov     ecx, 200h; PoolType
 * 000000014077B24E: shl     rdx, 3; NumberOfBytes
 * 000000014077B252: mov     r8d, edi; Tag
 * 000000014077B255: call    ExAllocatePoolWithTag
 * 000000014077B25A: mov     rsi, rax
 * 000000014077B25D: xor     eax, eax
 * 000000014077B25F: test    rsi, rsi
 * 000000014077B262: jz      loc_14077C9F7
 * 000000014077B268: mov     rcx, [rbp+1C70h+var_E08]
 * 000000014077B26F: test    rcx, rcx
 * 000000014077B272: jz      short loc_14077B2C1
 * 000000014077B274: mov     edx, [rbp+1C70h+var_DFC]
 * 000000014077B27A: mov     rbx, rsi
 * 000000014077B27D: shl     edx, 3
 * 000000014077B280: cmp     edx, 8
 * 000000014077B283: jb      short loc_14077B2A1
 * 000000014077B285: mov     edi, edx
 * 000000014077B287: shr     rdi, 3
 * 000000014077B28B: mov     rax, [rcx]
 * 000000014077B28E: add     edx, 0FFFFFFF8h
 * 000000014077B291: mov     [rbx], rax
 * 000000014077B294: add     rcx, 8
 * 000000014077B298: add     rbx, 8
 * 000000014077B29C: sub     rdi, r13
 * 000000014077B29F: jnz     short loc_14077B28B
 * 000000014077B2A1: test    edx, edx
 * 000000014077B2A3: jz      short loc_14077B2B5
 * 000000014077B2A5: sub     rbx, rcx
 * 000000014077B2A8: mov     al, [rcx]
 * 000000014077B2AA: mov     [rcx+rbx], al
 * 000000014077B2AD: add     rcx, r13
 * 000000014077B2B0: add     edx, 0FFFFFFFFh
 * 000000014077B2B3: jnz     short loc_14077B2A8
 * 000000014077B2B5: mov     rcx, [rbp+1C70h+var_E08]; P
 * 000000014077B2BC: call    ExFreePool
 * 000000014077B2C1: mov     eax, dword ptr [rbp+1C70h+var_1CC0]
 * 000000014077B2C4: mov     [rbp+1C70h+var_E00], eax
 * 000000014077B2CA: mov     [rbp+1C70h+var_E08], rsi
 * 000000014077B2D1: mov     ecx, [rbp+1C70h+var_DFC]
 * 000000014077B2D7: mov     rax, [rbp+1C70h+var_E08]
 * 000000014077B2DE: add     [rbp+1C70h+var_DFC], r13d
 * 000000014077B2E5: add     [rbp+1C70h+var_DF4], 10h
 * 000000014077B2EC: mov     [rax+rcx*8], r12
 * 000000014077B2F0: test    r15d, r15d
 * 000000014077B2F3: jnz     loc_14077AFDC
 * 000000014077B2F9: mov     rax, [rsp+78h]
 * 000000014077B2FE: lea     rcx, unk_1402F22F0
 * 000000014077B305: add     rax, 1000h
 * 000000014077B30B: mov     [rsp+78h], rax
 * 000000014077B310: cmp     rax, rcx
 * 000000014077B313: jb      loc_14077AB14
 * 000000014077B319: mov     r11d, dword ptr [rbp+1C70h+var_1CB0]
 * 000000014077B31D: lea     rsi, [r14+798h]
 * 000000014077B324: inc     r11d
 * 000000014077B327: xor     eax, eax
 * 000000014077B329: mov     [rbp+1C70h+var_DF8], r11d
 * 000000014077B330: test    rsi, rsi
 * 000000014077B333: jz      loc_14077B3D7
 * 000000014077B339: mov     eax, [rbp+1C70h+var_DFC]
 * 000000014077B33F: lea     rdx, [rsi+8]
 * 000000014077B343: mov     r8d, r11d
 * 000000014077B346: shl     r8, 4
 * 000000014077B34A: add     r8, rdx
 * 000000014077B34D: mov     [rsi+4], eax
 * 000000014077B350: mov     rdi, r8
 * 000000014077B353: test    eax, eax
 * 000000014077B355: jz      short loc_14077B37A
 * 000000014077B357: mov     rcx, [rbp+1C70h+var_E08]
 * 000000014077B35E: mov     ebx, eax
 * 000000014077B360: mov     rax, [rcx]
 * 000000014077B363: lea     rcx, [rcx+8]
 * 000000014077B367: mov     [rdi], rax
 * 000000014077B36A: mov     rax, [rax]
 * 000000014077B36D: mov     [rdi+8], rax
 * 000000014077B371: add     rdi, 10h
 * 000000014077B375: sub     rbx, r13
 * 000000014077B378: jnz     short loc_14077B360
 * 000000014077B37A: cmp     rdx, r8
 * 000000014077B37D: jnb     short loc_14077B3D2
 * 000000014077B37F: mov     ebx, [rdx+8]
 * 000000014077B382: mov     r9, rdi
 * 000000014077B385: mov     rcx, [rdx]
 * 000000014077B388: cmp     ebx, 8
 * 000000014077B38B: jb      short loc_14077B3AA
 * 000000014077B38D: mov     r10d, ebx
 * 000000014077B390: shr     r10, 3
 * 000000014077B394: mov     rax, [rcx]
 * 000000014077B397: add     ebx, 0FFFFFFF8h
 * 000000014077B39A: mov     [r9], rax
 * 000000014077B39D: add     rcx, 8
 * 000000014077B3A1: add     r9, 8
 * 000000014077B3A5: sub     r10, r13
 * 000000014077B3A8: jnz     short loc_14077B394
 * 000000014077B3AA: test    ebx, ebx
 * 000000014077B3AC: jz      short loc_14077B3BF
 * 000000014077B3AE: sub     r9, rcx
 * 000000014077B3B1: mov     al, [rcx]
 * 000000014077B3B3: mov     [rcx+r9], al
 * 000000014077B3B7: add     rcx, r13
 * 000000014077B3BA: add     ebx, 0FFFFFFFFh
 * 000000014077B3BD: jnz     short loc_14077B3B1
 * 000000014077B3BF: mov     eax, [rdx+8]
 * 000000014077B3C2: add     rdx, 10h
 * 000000014077B3C6: add     rdi, rax
 * 000000014077B3C9: cmp     rdx, r8
 * 000000014077B3CC: jb      short loc_14077B37F
 * 000000014077B3CE: mov     r14, [rbp+1C70h+var_1CE0]
 * 000000014077B3D2: mov     [rsi], r11d
 * 000000014077B3D5: xor     eax, eax
 * 000000014077B3D7: mov     esi, [rbp+1C70h+var_1CB4]
 * 000000014077B3DA: mov     ebx, dword ptr [rbp+1C70h+var_1CA8]
 * 000000014077B3DD: cli
 * 000000014077B3DE: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077B3E4: jnz     short loc_14077B3E8
 * 000000014077B3E6: jmp     short loc_14077B3E6
 * 000000014077B3E8: sti
 * 000000014077B3E9: mov     [r14+59Ch], esi
 * 000000014077B3F0: mov     edx, 80h
 * 000000014077B3F5: mov     [r14+75Ch], ebx
 * 000000014077B3FC: mov     rax, [rbp+1C70h+var_1870]
 * 000000014077B403: mov     [r14+580h], rax
 * 000000014077B40A: mov     rax, [rbp+1C70h+var_1CD8]
 * 000000014077B40E: lea     rcx, [rdx+r14]
 * 000000014077B412: mov     [r14+67Ch], eax
 * 000000014077B419: lea     rax, CmpAppendDllSection
 * 000000014077B420: movups  xmm0, xmmword ptr [rax]
 * 000000014077B423: movups  xmmword ptr [r14], xmm0
 * 000000014077B427: movups  xmm1, xmmword ptr [rax+10h]
 * 000000014077B42B: movups  xmmword ptr [r14+10h], xmm1
 * 000000014077B430: movups  xmm0, xmmword ptr [rax+20h]
 * 000000014077B434: movups  xmmword ptr [r14+20h], xmm0
 * 000000014077B439: movups  xmm1, xmmword ptr [rax+30h]
 * 000000014077B43D: movups  xmmword ptr [r14+30h], xmm1
 * 000000014077B442: movups  xmm0, xmmword ptr [rax+40h]
 * 000000014077B446: movups  xmmword ptr [r14+40h], xmm0
 * 000000014077B44B: movups  xmm1, xmmword ptr [rax+50h]
 * 000000014077B44F: movups  xmmword ptr [r14+50h], xmm1
 * 000000014077B454: movups  xmm0, xmmword ptr [rax+60h]
 * 000000014077B458: movups  xmmword ptr [r14+60h], xmm0
 * 000000014077B45D: movups  xmm0, xmmword ptr [rax+70h]
 * 000000014077B461: add     rax, rdx
 * 000000014077B464: movups  xmmword ptr [rcx-10h], xmm0
 * 000000014077B468: movups  xmm1, xmmword ptr [rax]
 * 000000014077B46B: movups  xmmword ptr [rcx], xmm1
 * 000000014077B46E: movups  xmm0, xmmword ptr [rax+10h]
 * 000000014077B472: movups  xmmword ptr [rcx+10h], xmm0
 * 000000014077B476: movups  xmm1, xmmword ptr [rax+20h]
 * 000000014077B47A: movups  xmmword ptr [rcx+20h], xmm1
 * 000000014077B47E: movups  xmm0, xmmword ptr [rax+30h]
 * 000000014077B482: movups  xmmword ptr [rcx+30h], xmm0
 * 000000014077B486: mov     eax, [rax+40h]
 * 000000014077B489: mov     [rcx+40h], eax
 * 000000014077B48C: mov     ecx, [rbp+1C70h+var_1C98]
 * 000000014077B48F: mov     rax, [rsp+1D70h+var_1D08]
 * 000000014077B494: add     eax, ecx
 * 000000014077B496: mov     [r14+5A8h], eax
 * 000000014077B49D: mov     rax, [rsp+1D70h+NtHeaders]
 * 000000014077B4A2: add     eax, ecx
 * 000000014077B4A4: mov     [r14+5A0h], eax
 * 000000014077B4AB: mov     rax, [rbp+1C70h+var_1CF0]
 * 000000014077B4AF: add     eax, ecx
 * 000000014077B4B1: mov     [r14+5A4h], eax
 * 000000014077B4B8: cli
 * 000000014077B4B9: xor     eax, eax
 * 000000014077B4BB: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077B4C1: jnz     short loc_14077B4C5
 * 000000014077B4C3: jmp     short loc_14077B4C3
 * 000000014077B4C5: sti
 * 000000014077B4C6: lea     rax, ExAcquireResourceSharedLite
 * 000000014077B4CD: mov     [r14+0D0h], rax
 * 000000014077B4D4: lea     rax, ExAcquireResourceExclusiveLite
 * 000000014077B4DB: mov     [r14+0D8h], rax
 * 000000014077B4E2: lea     rax, ExAllocatePoolWithTag
 * 000000014077B4E9: mov     [r14+0E0h], rax
 * 000000014077B4F0: lea     rax, ExFreePool
 * 000000014077B4F7: mov     [r14+0E8h], rax
 * 000000014077B4FE: lea     rax, ExMapHandleToPointer
 * 000000014077B505: mov     [r14+0F0h], rax
 * 000000014077B50C: lea     rax, ExQueueWorkItem
 * 000000014077B513: mov     [r14+0F8h], rax
 * 000000014077B51A: lea     rax, ExReleaseResourceLite
 * 000000014077B521: mov     [r14+100h], rax
 * 000000014077B528: lea     rax, ExUnlockHandleTableEntry
 * 000000014077B52F: mov     [r14+108h], rax
 * 000000014077B536: lea     rax, ExAcquirePushLockExclusiveEx
 * 000000014077B53D: mov     [r14+110h], rax
 * 000000014077B544: lea     rax, ExReleasePushLockExclusiveEx
 * 000000014077B54B: mov     [r14+118h], rax
 * 000000014077B552: lea     rax, ExAcquirePushLockSharedEx
 * 000000014077B559: mov     [r14+120h], rax
 * 000000014077B560: lea     rax, ExReleasePushLockSharedEx
 * 000000014077B567: mov     [r14+128h], rax
 * 000000014077B56E: lea     rax, KeAcquireInStackQueuedSpinLockAtDpcLevel
 * 000000014077B575: mov     [r14+130h], rax
 * 000000014077B57C: lea     rax, ExAcquireSpinLockSharedAtDpcLevel
 * 000000014077B583: mov     [r14+138h], rax
 * 000000014077B58A: lea     rax, KeBugCheckEx
 * 000000014077B591: mov     [r14+140h], rax
 * 000000014077B598: lea     rax, KeDelayExecutionThread
 * 000000014077B59F: mov     [r14+148h], rax
 * 000000014077B5A6: lea     rax, KeEnterCriticalRegionThread
 * 000000014077B5AD: mov     [r14+150h], rax
 * 000000014077B5B4: lea     rax, KeLeaveCriticalRegion
 * 000000014077B5BB: mov     [r14+158h], rax
 * 000000014077B5C2: lea     rax, KeEnterGuardedRegion
 * 000000014077B5C9: mov     [r14+160h], rax
 * 000000014077B5D0: lea     rax, KeLeaveGuardedRegion
 * 000000014077B5D7: mov     [r14+168h], rax
 * 000000014077B5DE: lea     rax, KeReleaseInStackQueuedSpinLockFromDpcLevel
 * 000000014077B5E5: mov     [r14+170h], rax
 * 000000014077B5EC: lea     rax, ExReleaseSpinLockSharedFromDpcLevel
 * 000000014077B5F3: mov     [r14+178h], rax
 * 000000014077B5FA: lea     rax, KeRevertToUserGroupAffinityThread
 * 000000014077B601: mov     [r14+180h], rax
 * 000000014077B608: lea     rax, KeProcessorGroupAffinity
 * 000000014077B60F: mov     [r14+188h], rax
 * 000000014077B616: lea     rax, KeInitializeEnumerationContext
 * 000000014077B61D: mov     [r14+190h], rax
 * 000000014077B624: lea     rax, KeEnumerateNextProcessor
 * 000000014077B62B: mov     [r14+198h], rax
 * 000000014077B632: lea     rax, KeCountSetBitsAffinityEx
 * 000000014077B639: mov     [r14+1A0h], rax
 * 000000014077B640: lea     rax, KeQueryAffinityProcess
 * 000000014077B647: mov     [r14+1A8h], rax
 * 000000014077B64E: lea     rax, KeQueryAffinityThread
 * 000000014077B655: mov     [r14+1B0h], rax
 * 000000014077B65C: lea     rax, KeSetSystemGroupAffinityThread
 * 000000014077B663: mov     [r14+1B8h], rax
 * 000000014077B66A: lea     rax, KeSetCoalescableTimer
 * 000000014077B671: mov     [r14+1C0h], rax
 * 000000014077B678: lea     rax, RtlImageNtHeader
 * 000000014077B67F: mov     [r14+1E0h], rax
 * 000000014077B686: lea     rax, RtlSectionTableFromVirtualAddress
 * 000000014077B68D: mov     [r14+1F8h], rax
 * 000000014077B694: lea     rax, RtlLookupFunctionTable
 * 000000014077B69B: mov     [r14+1E8h], rax
 * 000000014077B6A2: lea     rax, RtlPcToFileHeader
 * 000000014077B6A9: mov     [r14+1F0h], rax
 * 000000014077B6B0: lea     rax, ObfDereferenceObject
 * 000000014077B6B7: mov     [r14+1C8h], rax
 * 000000014077B6BE: lea     rax, ObReferenceObjectByName
 * 000000014077B6C5: mov     [r14+1D0h], rax
 * 000000014077B6CC: lea     rax, RtlImageDirectoryEntryToData
 * 000000014077B6D3: mov     [r14+1D8h], rax
 * 000000014077B6DA: lea     rax, DbgPrint
 * 000000014077B6E1: mov     [r14+200h], rax
 * 000000014077B6E8: lea     rax, MmAllocateIndependentPages
 * 000000014077B6EF: mov     [r14+208h], rax
 * 000000014077B6F6: lea     rax, MmFreeIndependentPages
 * 000000014077B6FD: mov     [r14+210h], rax
 * 000000014077B704: lea     rax, MmSetPageProtection
 * 000000014077B70B: mov     [r14+218h], rax
 * 000000014077B712: lea     rax, RtlLookupFunctionEntry
 * 000000014077B719: mov     [r14+240h], rax
 * 000000014077B720: lea     rax, KeAcquireSpinLockRaiseToDpc
 * 000000014077B727: mov     [r14+248h], rax
 * 000000014077B72E: lea     rax, KeReleaseSpinLock
 * 000000014077B735: mov     [r14+250h], rax
 * 000000014077B73C: lea     rax, MmGetSessionById
 * 000000014077B743: mov     [r14+258h], rax
 * 000000014077B74A: lea     rax, MmGetNextSession
 * 000000014077B751: mov     [r14+260h], rax
 * 000000014077B758: lea     rax, MmQuitNextSession
 * 000000014077B75F: mov     [r14+268h], rax
 * 000000014077B766: lea     rax, MmAttachSession
 * 000000014077B76D: mov     [r14+270h], rax
 * 000000014077B774: lea     rax, MmDetachSession
 * 000000014077B77B: mov     [r14+278h], rax
 * 000000014077B782: lea     rax, MmGetSessionIdEx
 * 000000014077B789: mov     [r14+280h], rax
 * 000000014077B790: lea     rax, MmIsSessionAddress
 * 000000014077B797: mov     [r14+288h], rax
 * 000000014077B79E: lea     rax, MmIsAddressValid
 * 000000014077B7A5: mov     [r14+290h], rax
 * 000000014077B7AC: lea     rax, MmSessionGetWin32Callouts
 * 000000014077B7B3: mov     [r14+298h], rax
 * 000000014077B7BA: lea     rax, KeInsertQueueApc
 * 000000014077B7C1: mov     [r14+2A0h], rax
 * 000000014077B7C8: lea     rax, KeWaitForSingleObject
 * 000000014077B7CF: mov     [r14+2A8h], rax
 * 000000014077B7D6: lea     rax, ExReferenceCallBackBlock
 * 000000014077B7DD: mov     [r14+2B8h], rax
 * 000000014077B7E4: lea     rax, ExGetCallBackBlockRoutine
 * 000000014077B7EB: mov     [r14+2C0h], rax
 * 000000014077B7F2: lea     rax, ExDereferenceCallBackBlock
 * 000000014077B7F9: mov     [r14+2C8h], rax
 * 000000014077B800: lea     rax, sub_1401578A4
 * 000000014077B807: mov     [r14+2D0h], rax
 * 000000014077B80E: lea     rax, PspEnumerateCallback
 * 000000014077B815: mov     [r14+2D8h], rax
 * 000000014077B81C: lea     rax, CmpEnumerateCallback
 * 000000014077B823: mov     [r14+2E0h], rax
 * 000000014077B82A: lea     rax, DbgEnumerateCallback
 * 000000014077B831: mov     [r14+2E8h], rax
 * 000000014077B838: lea     rax, ExpEnumerateCallback
 * 000000014077B83F: mov     [r14+2F0h], rax
 * 000000014077B846: lea     rax, ExpGetNextCallback
 * 000000014077B84D: mov     [r14+2F8h], rax
 * 000000014077B854: lea     rax, xHalFreeMessageTarget
 * 000000014077B85B: mov     [r14+300h], rax
 * 000000014077B862: lea     rax, KiSchedulerApcTerminate
 * 000000014077B869: mov     [r14+308h], rax
 * 000000014077B870: lea     rax, KiSchedulerApc
 * 000000014077B877: mov     [r14+310h], rax
 * 000000014077B87E: lea     rax, xHalFreeMessageTarget
 * 000000014077B885: mov     [r14+318h], rax
 * 000000014077B88C: lea     rax, sub_140158468
 * 000000014077B893: mov     [r14+320h], rax
 * 000000014077B89A: lea     rax, MmAllocatePagesForMdlEx
 * 000000014077B8A1: mov     [r14+328h], rax
 * 000000014077B8A8: lea     rax, MmAllocateMappingAddress
 * 000000014077B8AF: mov     [r14+330h], rax
 * 000000014077B8B6: lea     rax, MmMapLockedPagesWithReservedMapping
 * 000000014077B8BD: mov     [r14+338h], rax
 * 000000014077B8C4: lea     rax, MmUnmapReservedMapping
 * 000000014077B8CB: mov     [r14+340h], rax
 * 000000014077B8D2: lea     rax, sub_140158738
 * 000000014077B8D9: mov     [r14+348h], rax
 * 000000014077B8E0: lea     rax, sub_1401587A0
 * 000000014077B8E7: mov     [r14+350h], rax
 * 000000014077B8EE: lea     rax, MmAcquireLoadLock
 * 000000014077B8F5: mov     [r14+358h], rax
 * 000000014077B8FC: lea     rax, MmReleaseLoadLock
 * 000000014077B903: mov     [r14+360h], rax
 * 000000014077B90A: lea     rax, KeEnumerateQueueApc
 * 000000014077B911: mov     [r14+368h], rax
 * 000000014077B918: lea     rax, KeIsApcRunningThread
 * 000000014077B91F: mov     [r14+370h], rax
 * 000000014077B926: lea     rax, $$121
 * 000000014077B92D: mov     [r14+378h], rax
 * 000000014077B934: mov     rbx, [rbp+1C70h+arg_18]
 * 000000014077B93B: lea     rax, PsAcquireProcessExitSynchronization
 * 000000014077B942: mov     [r14+380h], rax
 * 000000014077B949: lea     rax, PsReleaseProcessExitSynchronization
 * 000000014077B950: mov     [r14+388h], rax
 * 000000014077B957: lea     rax, PsGetNextProcess
 * 000000014077B95E: mov     [r14+390h], rax
 * 000000014077B965: lea     rax, PsQuitNextProcess
 * 000000014077B96C: mov     [r14+398h], rax
 * 000000014077B973: lea     rax, MmIsSessionLeaderProcess
 * 000000014077B97A: mov     [r14+3A0h], rax
 * 000000014077B981: lea     rax, PsInvokeWin32Callout
 * 000000014077B988: mov     [r14+3A8h], rax
 * 000000014077B98F: lea     rax, MmEnumerateAddressSpaceAndReferenceImages
 * 000000014077B996: mov     [r14+3B0h], rax
 * 000000014077B99D: lea     rax, PsGetProcessProtection
 * 000000014077B9A4: mov     [r14+3B8h], rax
 * 000000014077B9AB: lea     rax, PsGetProcessSignatureLevel
 * 000000014077B9B2: mov     [r14+3C0h], rax
 * 000000014077B9B9: lea     rax, PsGetProcessSectionBaseAddress
 * 000000014077B9C0: mov     [r14+3C8h], rax
 * 000000014077B9C7: lea     rax, SeCompareSigningLevels
 * 000000014077B9CE: mov     [r14+3D0h], rax
 * 000000014077B9D5: lea     rax, RtlIsMultiSessionSku
 * 000000014077B9DC: mov     [r14+400h], rax
 * 000000014077B9E3: lea     rax, KiEnumerateCallback
 * 000000014077B9EA: mov     [r14+408h], rax
 * 000000014077B9F1: lea     rax, KeStackAttachProcess
 * 000000014077B9F8: mov     [r14+410h], rax
 * 000000014077B9FF: lea     rax, KeUnstackDetachProcess
 * 000000014077BA06: mov     [r14+418h], rax
 * 000000014077BA0D: lea     rax, KeComputeSha256
 * 000000014077BA14: mov     [r14+3D8h], rax
 * 000000014077BA1B: lea     rax, KeComputeParallelSha256
 * 000000014077BA22: mov     [r14+3E0h], rax
 * 000000014077BA29: lea     rax, KeSetEvent
 * 000000014077BA30: mov     [r14+3E8h], rax
 * 000000014077BA37: lea     rax, qword_1402F9BD0
 * 000000014077BA3E: mov     [r14+6B0h], rax
 * 000000014077BA45: test    rbx, rbx
 * 000000014077BA48: jz      short loc_14077BA55
 * 000000014077BA4A: mov     rax, [rbx+8]
 * 000000014077BA4E: mov     [r14+2B0h], rax
 * 000000014077BA55: lea     rax, RtlpConvertFunctionEntry
 * 000000014077BA5C: mov     [r14+3F0h], rax
 * 000000014077BA63: lea     rax, RtlpLookupPrimaryFunctionEntry
 * 000000014077BA6A: mov     [r14+3F8h], rax
 * 000000014077BA71: lea     rax, KiGetInterruptObjectAddress
 * 000000014077BA78: mov     [r14+420h], rax
 * 000000014077BA7F: cli
 * 000000014077BA80: xor     eax, eax
 * 000000014077BA82: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077BA88: jnz     short loc_14077BA8C
 * 000000014077BA8A: jmp     short loc_14077BA8A
 * 000000014077BA8C: sti
 * 000000014077BA8D: mov     [r14+6ACh], esi
 * 000000014077BA94: cli
 * 000000014077BA95: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077BA9B: jnz     short loc_14077BA9F
 * 000000014077BA9D: jmp     short loc_14077BA9D
 * 000000014077BA9F: sti
 * 000000014077BAA0: cli
 * 000000014077BAA1: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077BAA7: jnz     short loc_14077BAAB
 * 000000014077BAA9: jmp     short loc_14077BAA9
 * 000000014077BAAB: sti
 * 000000014077BAAC: rdtsc
 * 000000014077BAAE: shl     rdx, 20h
 * 000000014077BAB2: mov     rdi, 7010008004002001h
 * 000000014077BABC: or      rax, rdx
 * 000000014077BABF: mov     r15d, 3
 * 000000014077BAC5: mov     rcx, rax
 * 000000014077BAC8: ror     rax, 3
 * 000000014077BACC: xor     rcx, rax
 * 000000014077BACF: mov     rax, rdi
 * 000000014077BAD2: mul     rcx
 * 000000014077BAD5: mov     rcx, rdx
 * 000000014077BAD8: mov     [rbp+1C70h+var_1840], rdx
 * 000000014077BADF: xor     rcx, rax
 * 000000014077BAE2: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014077BAEC: mul     rcx
 * 000000014077BAEF: shr     rdx, 3
 * 000000014077BAF3: lea     rax, [rdx+rdx*4]
 * 000000014077BAF7: add     rax, rax
 * 000000014077BAFA: sub     rcx, rax
 * 000000014077BAFD: cmp     rcx, r15
 * 000000014077BB00: jnb     short loc_14077BB60
 * 000000014077BB02: mov     dword ptr [r14+680h], 4
 * 000000014077BB0D: rdtsc
 * 000000014077BB0F: shl     rdx, 20h
 * 000000014077BB13: or      rax, rdx
 * 000000014077BB16: mov     rcx, rax
 * 000000014077BB19: ror     rax, 3
 * 000000014077BB1D: xor     rcx, rax
 * 000000014077BB20: mov     rax, rdi
 * 000000014077BB23: mul     rcx
 * 000000014077BB26: mov     rcx, rdx
 * 000000014077BB29: mov     [rbp+1C70h+var_1838], rdx
 * 000000014077BB30: xor     rcx, rax
 * 000000014077BB33: mov     rax, 2492492492492493h
 * 000000014077BB3D: mul     rcx
 * 000000014077BB40: mov     rax, rcx
 * 000000014077BB43: sub     rax, rdx
 * 000000014077BB46: shr     rax, 1
 * 000000014077BB49: add     rax, rdx
 * 000000014077BB4C: shr     rax, 2
 * 000000014077BB50: imul    rax, 7
 * 000000014077BB54: sub     rcx, rax
 * 000000014077BB57: mov     [r14+680h], ecx
 * 000000014077BB5E: jmp     short loc_14077BB69
 * 000000014077BB60: xor     eax, eax
 * 000000014077BB62: mov     [r14+680h], eax
 * 000000014077BB69: mov     rax, cs:qword_1407604C0
 * 000000014077BB70: cmp     rax, 1Fh
 * 000000014077BB74: ja      loc_14078D534
 * 000000014077BB7A: shl     eax, 0Ah
 * 000000014077BB7D: xor     eax, [r14+6D8h]
 * 000000014077BB84: and     eax, 7C00h
 * 000000014077BB89: xor     [r14+6D8h], eax
 * 000000014077BB90: xor     eax, eax
 * 000000014077BB92: mov     [r14+5B8h], rax
 * 000000014077BB99: mov     rax, cs:VfExcludeSections
 * 000000014077BBA0: mov     [r14+688h], rax
 * 000000014077BBA7: mov     rax, cs:off_1402F4BE0; "PAGESPEC"
 * 000000014077BBAE: mov     [r14+690h], rax
 * 000000014077BBB5: mov     rax, cs:off_1402F4BE8; "INIT"
 * 000000014077BBBC: mov     [r14+698h], rax
 * 000000014077BBC3: mov     rax, cs:off_1402F4BF0; "PAGEKD"
 * 000000014077BBCA: mov     [r14+6A0h], rax
 * 000000014077BBD1: rdtsc
 * 000000014077BBD3: shl     rdx, 20h
 * 000000014077BBD7: or      rax, rdx
 * 000000014077BBDA: mov     rcx, rax
 * 000000014077BBDD: ror     rax, 3
 * 000000014077BBE1: xor     rcx, rax
 * 000000014077BBE4: mov     rax, rdi
 * 000000014077BBE7: mul     rcx
 * 000000014077BBEA: mov     rcx, rdx
 * 000000014077BBED: mov     [rbp+1C70h+var_1830], rdx
 * 000000014077BBF4: xor     rcx, rax
 * 000000014077BBF7: mov     rax, 624DD2F1A9FBE77h
 * 000000014077BC01: mul     rcx
 * 000000014077BC04: mov     rax, rcx
 * 000000014077BC07: sub     rax, rdx
 * 000000014077BC0A: shr     rax, 1
 * 000000014077BC0D: add     rax, rdx
 * 000000014077BC10: shr     rax, 9
 * 000000014077BC14: imul    rax, 3E8h
 * 000000014077BC1B: sub     rcx, rax
 * 000000014077BC1E: cmp     rcx, r15
 * 000000014077BC21: jnb     short loc_14077BC2B
 * 000000014077BC23: or      dword ptr [r14+6DCh], 20h
 * 000000014077BC2B: xor     ecx, ecx
 * 000000014077BC2D: call    KeGetPrcb
 * 000000014077BC32: mov     [r14+578h], rax
 * 000000014077BC39: cli
 * 000000014077BC3A: xor     eax, eax
 * 000000014077BC3C: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077BC42: jnz     short loc_14077BC46
 * 000000014077BC44: jmp     short loc_14077BC44
 * 000000014077BC46: sti
 * 000000014077BC47: xor     edx, edx
 * 000000014077BC49: lea     rdi, KiIsrThunkShadow
 * 000000014077BC50: mov     eax, 140000h
 * 000000014077BC55: div     [rbp+1C70h+arg_10]
 * 000000014077BC5B: mov     [r14+5E4h], eax
 * 000000014077BC62: mov     rax, cs:PsInitialSystemProcess
 * 000000014077BC69: mov     [r14+430h], rax
 * 000000014077BC70: mov     rax, cs:KiWaitAlways
 * 000000014077BC77: mov     [r14+438h], rax
 * 000000014077BC7E: lea     rax, KiEntropyTimingRoutine
 * 000000014077BC85: mov     [r14+440h], rax
 * 000000014077BC8C: lea     rax, KiProcessListHead
 * 000000014077BC93: mov     [r14+448h], rax
 * 000000014077BC9A: lea     rax, KiProcessListLock
 * 000000014077BCA1: mov     [r14+450h], rax
 * 000000014077BCA8: mov     rax, cs:ObpTypeObjectType
 * 000000014077BCAF: mov     [r14+458h], rax
 * 000000014077BCB6: mov     rax, cs:IoDriverObjectType
 * 000000014077BCBD: mov     [r14+460h], rax
 * 000000014077BCC4: lea     rax, PsActiveProcessHead
 * 000000014077BCCB: mov     [r14+468h], rax
 * 000000014077BCD2: lea     rax, PsInvertedFunctionTable
 * 000000014077BCD9: mov     [r14+470h], rax
 * 000000014077BCE0: lea     rax, PsLoadedModuleList
 * 000000014077BCE7: mov     [r14+478h], rax
 * 000000014077BCEE: lea     rax, PsLoadedModuleResource
 * 000000014077BCF5: mov     [r14+480h], rax
 * 000000014077BCFC: lea     rax, PsLoadedModuleSpinLock
 * 000000014077BD03: mov     [r14+488h], rax
 * 000000014077BD0A: lea     rax, PspActiveProcessLock
 * 000000014077BD11: mov     [r14+490h], rax
 * 000000014077BD18: lea     rax, PspCidTable
 * 000000014077BD1F: mov     [r14+498h], rax
 * 000000014077BD26: lea     rax, ExpUuidLock
 * 000000014077BD2D: mov     [r14+4A0h], rax
 * 000000014077BD34: lea     rax, AlpcpPortListLock
 * 000000014077BD3B: mov     [r14+4A8h], rax
 * 000000014077BD42: lea     rax, KeServiceDescriptorTable
 * 000000014077BD49: mov     [r14+4B0h], rax
 * 000000014077BD50: lea     rax, KeServiceDescriptorTableShadow
 * 000000014077BD57: mov     [r14+4B8h], rax
 * 000000014077BD5E: lea     rax, KeServiceDescriptorTableFilter
 * 000000014077BD65: mov     [r14+4C0h], rax
 * 000000014077BD6C: lea     rax, VfThunksExtended
 * 000000014077BD73: mov     [r14+4C8h], rax
 * 000000014077BD7A: lea     rax, PsWin32CallBack
 * 000000014077BD81: mov     [r14+4D0h], rax
 * 000000014077BD88: lea     rax, qword_1402F9BB0
 * 000000014077BD8F: mov     [r14+4D8h], rax
 * 000000014077BD96: lea     rax, KiTableInformation
 * 000000014077BD9D: mov     [r14+4E0h], rax
 * 000000014077BDA4: lea     rax, HandleTableListHead
 * 000000014077BDAB: mov     [r14+4E8h], rax
 * 000000014077BDB2: lea     rax, HandleTableListLock
 * 000000014077BDB9: mov     [r14+4F0h], rax
 * 000000014077BDC0: mov     rax, cs:ObpKernelHandleTable
 * 000000014077BDC7: mov     [r14+4F8h], rax
 * 000000014077BDCE: mov     rax, 0FFFFF78000000000h
 * 000000014077BDD8: mov     [r14+500h], rax
 * 000000014077BDDF: mov     rax, cs:KiWaitNever
 * 000000014077BDE6: mov     [r14+508h], rax
 * 000000014077BDED: lea     rax, SeProtectedMapping
 * 000000014077BDF4: mov     [r14+510h], rax
 * 000000014077BDFB: lea     rax, CcPeriodicEvent
 * 000000014077BE02: mov     [r14+520h], rax
 * 000000014077BE09: mov     rax, cs:MmPteBase
 * 000000014077BE10: mov     [r14+528h], rax
 * 000000014077BE17: lea     rax, KiInterruptThunk
 * 000000014077BE1E: mov     [r14+518h], rax
 * 000000014077BE25: lea     rax, KxUnexpectedInterrupt0
 * 000000014077BE2C: mov     cl, cs:KiKvaShadow
 * 000000014077BE32: test    cl, cl
 * 000000014077BE34: cmovnz  rax, rdi
 * 000000014077BE38: mov     [r14+530h], rax
 * 000000014077BE3F: cli
 * 000000014077BE40: xor     eax, eax
 * 000000014077BE42: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077BE48: jnz     short loc_14077BE4C
 * 000000014077BE4A: jmp     short loc_14077BE4A
 * 000000014077BE4C: sti
 * 000000014077BE4D: mov     [r14+5C0h], esi
 * 000000014077BE54: rdtsc
 * 000000014077BE56: shl     rdx, 20h
 * 000000014077BE5A: mov     r8, 7010008004002001h
 * 000000014077BE64: or      rax, rdx
 * 000000014077BE67: mov     rcx, rax
 * 000000014077BE6A: ror     rax, 3
 * 000000014077BE6E: xor     rcx, rax
 * 000000014077BE71: mov     rax, r8
 * 000000014077BE74: mul     rcx
 * 000000014077BE77: mov     rcx, rdx
 * 000000014077BE7A: mov     [rbp+1C70h+var_1828], rdx
 * 000000014077BE81: xor     rcx, rax
 * 000000014077BE84: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014077BE8E: mul     rcx
 * 000000014077BE91: shr     rdx, 1
 * 000000014077BE94: imul    rax, rdx, 0Bh
 * 000000014077BE98: sub     rcx, rax
 * 000000014077BE9B: mov     eax, 5
 * 000000014077BEA0: cmp     ecx, eax
 * 000000014077BEA2: ja      loc_14077BF53
 * 000000014077BEA8: jz      loc_14077BF3B
 * 000000014077BEAE: test    ecx, ecx
 * 000000014077BEB0: jz      short loc_14077BF23
 * 000000014077BEB2: sub     ecx, 1
 * 000000014077BEB5: jz      short loc_14077BF0C
 * 000000014077BEB7: sub     ecx, 1
 * 000000014077BEBA: jz      short loc_14077BEF4
 * 000000014077BEBC: cmp     ecx, 1
 * 000000014077BEBF: jz      short loc_14077BED9
 * 000000014077BEC1: mov     [rbp+1C70h+var_1B34], 67076494h
 * 000000014077BECB: mov     edi, [rbp+1C70h+var_1B34]
 * 000000014077BED1: rol     edi, 4
 * 000000014077BED4: jmp     loc_14077C061
 * 000000014077BED9: mov     [rbp+1C70h+var_1B30], 0A8223938h
 * 000000014077BEE3: mov     edi, [rbp+1C70h+var_1B30]
 * 000000014077BEE9: xor     edi, r15d
 * 000000014077BEEC: ror     edi, 0Fh
 * 000000014077BEEF: jmp     loc_14077C061
 * 000000014077BEF4: mov     [rbp+1C70h+var_1B2C], 85B5910Dh
 * 000000014077BEFE: mov     edi, [rbp+1C70h+var_1B2C]
 * 000000014077BF04: ror     edi, 2
 * 000000014077BF07: jmp     loc_14077C061
 * 000000014077BF0C: mov     [rbp+1C70h+var_1B28], 0B2AD31A1h
 * 000000014077BF16: mov     edi, [rbp+1C70h+var_1B28]
 * 000000014077BF1C: rol     edi, 1
 * 000000014077BF1E: jmp     loc_14077C061
 * 000000014077BF23: mov     [rbp+1C70h+var_1B24], 0D098D0D8h
 * 000000014077BF2D: mov     edi, [rbp+1C70h+var_1B24]
 * 000000014077BF33: ror     edi, 6
 * 000000014077BF36: jmp     loc_14077C061
 * 000000014077BF3B: mov     [rbp+1C70h+var_1B20], 288C49EDh
 * 000000014077BF45: mov     edi, [rbp+1C70h+var_1B20]
 * 000000014077BF4B: ror     edi, 5
 * 000000014077BF4E: jmp     loc_14077C061
 * 000000014077BF53: sub     ecx, 6
 * 000000014077BF56: jz      loc_14077C04B
 * 000000014077BF5C: sub     ecx, 1
 * 000000014077BF5F: jz      loc_14077C036
 * 000000014077BF65: sub     ecx, 1
 * 000000014077BF68: jz      loc_14077C021
 * 000000014077BF6E: cmp     ecx, 1
 * 000000014077BF71: jz      loc_14077C009
 * 000000014077BF77: rdtsc
 * 000000014077BF79: shl     rdx, 20h
 * 000000014077BF7D: mov     r9d, 4EC4EC4Fh
 * 000000014077BF83: or      rax, rdx
 * 000000014077BF86: mov     rcx, rax
 * 000000014077BF89: ror     rax, 3
 * 000000014077BF8D: xor     rcx, rax
 * 000000014077BF90: mov     rax, r8
 * 000000014077BF93: mul     rcx
 * 000000014077BF96: mov     rdi, rax
 * 000000014077BF99: mov     [rbp+1C70h+var_1820], rdx
 * 000000014077BFA0: xor     edi, edx
 * 000000014077BFA2: mov     eax, r9d
 * 000000014077BFA5: mul     edi
 * 000000014077BFA7: mov     ecx, edi
 * 000000014077BFA9: shr     edi, 5
 * 000000014077BFAC: shr     edx, 3
 * 000000014077BFAF: mov     ebx, edi
 * 000000014077BFB1: imul    eax, edx, 1Ah
 * 000000014077BFB4: sub     ecx, eax
 * 000000014077BFB6: mov     eax, r9d
 * 000000014077BFB9: mul     edi
 * 000000014077BFBB: add     ecx, 61h ; 'a'
 * 000000014077BFBE: shr     edi, 5
 * 000000014077BFC1: shl     ecx, 8
 * 000000014077BFC4: shr     edx, 3
 * 000000014077BFC7: imul    eax, edx, 1Ah
 * 000000014077BFCA: sub     ebx, eax
 * 000000014077BFCC: mov     eax, r9d
 * 000000014077BFCF: mul     edi
 * 000000014077BFD1: add     ebx, 41h ; 'A'
 * 000000014077BFD4: or      ebx, ecx
 * 000000014077BFD6: shr     edx, 3
 * 000000014077BFD9: imul    eax, edx, 1Ah
 * 000000014077BFDC: mov     ecx, edi
 * 000000014077BFDE: shr     edi, 5
 * 000000014077BFE1: shl     ebx, 8
 * 000000014077BFE4: sub     ecx, eax
 * 000000014077BFE6: mov     eax, r9d
 * 000000014077BFE9: mul     edi
 * 000000014077BFEB: add     ecx, 61h ; 'a'
 * 000000014077BFEE: or      ecx, ebx
 * 000000014077BFF0: shr     edx, 3
 * 000000014077BFF3: mov     rbx, [rbp+1C70h+arg_18]
 * 000000014077BFFA: imul    eax, edx, 1Ah
 * 000000014077BFFD: shl     ecx, 8
 * 000000014077C000: sub     edi, eax
 * 000000014077C002: add     edi, 41h ; 'A'
 * 000000014077C005: or      edi, ecx
 * 000000014077C007: jmp     short loc_14077C061
 * 000000014077C009: mov     [rbp+1C70h+var_1B1C], 0B0869E85h
 * 000000014077C013: mov     edi, [rbp+1C70h+var_1B1C]
 * 000000014077C019: xor     edi, 9
 * 000000014077C01C: ror     edi, 21h
 * 000000014077C01F: jmp     short loc_14077C061
 * 000000014077C021: mov     [rbp+1C70h+var_1B18], 64664142h
 * 000000014077C02B: mov     edi, [rbp+1C70h+var_1B18]
 * 000000014077C031: ror     edi, 8
 * 000000014077C034: jmp     short loc_14077C061
 * 000000014077C036: mov     [rbp+1C70h+var_1B14], 82C6A6D8h
 * 000000014077C040: mov     edi, [rbp+1C70h+var_1B14]
 * 000000014077C046: rol     edi, 7
 * 000000014077C049: jmp     short loc_14077C061
 * 000000014077C04B: mov     [rbp+1C70h+var_1B10], 4E574672h
 * 000000014077C055: mov     edi, [rbp+1C70h+var_1B10]
 * 000000014077C05B: xor     edi, 6
 * 000000014077C05E: ror     edi, 18h
 * 000000014077C061: mov     [r14+5C8h], edi
 * 000000014077C068: rdtsc
 * 000000014077C06A: shl     rdx, 20h
 * 000000014077C06E: or      rax, rdx
 * 000000014077C071: mov     rcx, rax
 * 000000014077C074: ror     rax, 3
 * 000000014077C078: xor     rcx, rax
 * 000000014077C07B: mov     rax, r8
 * 000000014077C07E: mul     rcx
 * 000000014077C081: mov     rcx, rdx
 * 000000014077C084: mov     [rbp+1C70h+var_1818], rdx
 * 000000014077C08B: xor     rcx, rax
 * 000000014077C08E: mov     rax, 410410410410411h
 * 000000014077C098: mul     rcx
 * 000000014077C09B: mov     rax, rcx
 * 000000014077C09E: sub     rax, rdx
 * 000000014077C0A1: shr     rax, 1
 * 000000014077C0A4: add     rax, rdx
 * 000000014077C0A7: shr     rax, 5
 * 000000014077C0AB: imul    rax, 3Fh ; '?'
 * 000000014077C0AF: sub     rcx, rax
 * 000000014077C0B2: add     ecx, r13d
 * 000000014077C0B5: mov     [r14+5CCh], ecx
 * 000000014077C0BC: rdtsc
 * 000000014077C0BE: shl     rdx, 20h
 * 000000014077C0C2: xor     r9d, r9d
 * 000000014077C0C5: or      rax, rdx
 * 000000014077C0C8: mov     rcx, rax
 * 000000014077C0CB: ror     rax, 3
 * 000000014077C0CF: xor     rcx, rax
 * 000000014077C0D2: mov     rax, r8
 * 000000014077C0D5: mul     rcx
 * 000000014077C0D8: mov     ecx, 2BCh
 * 000000014077C0DD: sub     ecx, esi
 * 000000014077C0DF: mov     [rbp+1C70h+var_1810], rdx
 * 000000014077C0E6: xor     rdx, rax
 * 000000014077C0E9: mov     eax, 80000000h
 * 000000014077C0EE: mov     [r14+5D0h], rdx
 * 000000014077C0F5: and     rdx, rax
 * 000000014077C0F8: mov     eax, 2D4h
 * 000000014077C0FD: sub     eax, esi
 * 000000014077C0FF: test    rdx, rdx
 * 000000014077C102: cmovnz  ecx, eax
 * 000000014077C105: mov     eax, 0BC2A27DBh
 * 000000014077C10A: add     ecx, [r14+6ACh]
 * 000000014077C111: xor     ecx, eax
 * 000000014077C113: mov     [r14+6ACh], ecx
 * 000000014077C11A: rdtsc
 * 000000014077C11C: shl     rdx, 20h
 * 000000014077C120: lea     r12d, [r9+8]
 * 000000014077C124: or      rax, rdx
 * 000000014077C127: mov     rdi, 0CCCCCCCCCCCCCCCDh
 * 000000014077C131: mov     rcx, rax
 * 000000014077C134: ror     rax, 3
 * 000000014077C138: xor     rcx, rax
 * 000000014077C13B: mov     rax, r8
 * 000000014077C13E: mul     rcx
 * 000000014077C141: mov     rcx, rdx
 * 000000014077C144: mov     [rbp+1C70h+var_1808], rdx
 * 000000014077C14B: xor     rcx, rax
 * 000000014077C14E: mov     rax, rdi
 * 000000014077C151: mul     rcx
 * 000000014077C154: shr     rdx, 3
 * 000000014077C158: lea     rax, [rdx+rdx*4]
 * 000000014077C15C: add     rax, rax
 * 000000014077C15F: sub     rcx, rax
 * 000000014077C162: cmp     rcx, r15
 * 000000014077C165: jnb     short loc_14077C16E
 * 000000014077C167: or      [r14+6D8h], r12d
 * 000000014077C16E: rdtsc
 * 000000014077C170: shl     rdx, 20h
 * 000000014077C174: or      rax, rdx
 * 000000014077C177: mov     rcx, rax
 * 000000014077C17A: ror     rax, 3
 * 000000014077C17E: xor     rcx, rax
 * 000000014077C181: mov     rax, r8
 * 000000014077C184: mul     rcx
 * 000000014077C187: mov     rcx, rdx
 * 000000014077C18A: mov     [rbp+1C70h+var_1800], rdx
 * 000000014077C191: xor     rcx, rax
 * 000000014077C194: mov     rax, rdi
 * 000000014077C197: mul     rcx
 * 000000014077C19A: shr     rdx, 3
 * 000000014077C19E: lea     rax, [rdx+rdx*4]
 * 000000014077C1A2: add     rax, rax
 * 000000014077C1A5: sub     rcx, rax
 * 000000014077C1A8: cmp     rcx, r15
 * 000000014077C1AB: jnb     short loc_14077C1B6
 * 000000014077C1AD: bts     dword ptr [r14+6D8h], 1Ah
 * 000000014077C1B6: cmp     [rbp+1C70h+arg_8], 7
 * 000000014077C1BD: jz      short loc_14077C1FF
 * 000000014077C1BF: rdtsc
 * 000000014077C1C1: shl     rdx, 20h
 * 000000014077C1C5: or      rax, rdx
 * 000000014077C1C8: mov     rcx, rax
 * 000000014077C1CB: ror     rax, 3
 * 000000014077C1CF: xor     rcx, rax
 * 000000014077C1D2: mov     rax, r8
 * 000000014077C1D5: mul     rcx
 * 000000014077C1D8: mov     rcx, rdx
 * 000000014077C1DB: mov     [rbp+1C70h+var_17F8], rdx
 * 000000014077C1E2: xor     rcx, rax
 * 000000014077C1E5: mov     rax, rdi
 * 000000014077C1E8: mul     rcx
 * 000000014077C1EB: shr     rdx, 3
 * 000000014077C1EF: lea     rax, [rdx+rdx*4]
 * 000000014077C1F3: add     rax, rax
 * 000000014077C1F6: sub     rcx, rax
 * 000000014077C1F9: cmp     rcx, 2
 * 000000014077C1FD: jnb     short loc_14077C206
 * 000000014077C1FF: or      [r14+6DCh], r12d
 * 000000014077C206: rdtsc
 * 000000014077C208: shl     rdx, 20h
 * 000000014077C20C: or      rax, rdx
 * 000000014077C20F: mov     rcx, rax
 * 000000014077C212: ror     rax, 3
 * 000000014077C216: xor     rcx, rax
 * 000000014077C219: mov     rax, r8
 * 000000014077C21C: mul     rcx
 * 000000014077C21F: mov     rcx, rdx
 * 000000014077C222: mov     [rbp+1C70h+var_17F0], rdx
 * 000000014077C229: xor     rcx, rax
 * 000000014077C22C: mov     rax, rdi
 * 000000014077C22F: mul     rcx
 * 000000014077C232: shr     rdx, 3
 * 000000014077C236: lea     rax, [rdx+rdx*4]
 * 000000014077C23A: add     rax, rax
 * 000000014077C23D: sub     rcx, rax
 * 000000014077C240: cmp     rcx, r13
 * 000000014077C243: jnb     short loc_14077C24E
 * 000000014077C245: bts     dword ptr [r14+6D8h], 0Fh
 * 000000014077C24E: rdtsc
 * 000000014077C250: shl     rdx, 20h
 * 000000014077C254: or      rax, rdx
 * 000000014077C257: mov     rcx, rax
 * 000000014077C25A: ror     rax, 3
 * 000000014077C25E: xor     rcx, rax
 * 000000014077C261: mov     rax, r8
 * 000000014077C264: mul     rcx
 * 000000014077C267: mov     rcx, rdx
 * 000000014077C26A: mov     [rbp+1C70h+var_17E8], rdx
 * 000000014077C271: xor     rcx, rax
 * 000000014077C274: mov     rax, rdi
 * 000000014077C277: mul     rcx
 * 000000014077C27A: shr     rdx, 3
 * 000000014077C27E: lea     rax, [rdx+rdx*4]
 * 000000014077C282: add     rax, rax
 * 000000014077C285: sub     rcx, rax
 * 000000014077C288: cmp     rcx, r15
 * 000000014077C28B: jnb     short loc_14077C296
 * 000000014077C28D: bts     dword ptr [r14+6D8h], 16h
 * 000000014077C296: cli
 * 000000014077C297: xor     eax, eax
 * 000000014077C299: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077C29F: jnz     short loc_14077C2A3
 * 000000014077C2A1: jmp     short loc_14077C2A1
 * 000000014077C2A3: sti
 * 000000014077C2A4: rdtsc
 * 000000014077C2A6: shl     rdx, 20h
 * 000000014077C2AA: or      rax, rdx
 * 000000014077C2AD: mov     rcx, rax
 * 000000014077C2B0: ror     rax, 3
 * 000000014077C2B4: xor     rcx, rax
 * 000000014077C2B7: mov     rax, r8
 * 000000014077C2BA: mul     rcx
 * 000000014077C2BD: mov     rcx, rdx
 * 000000014077C2C0: mov     [rbp+1C70h+var_17E0], rdx
 * 000000014077C2C7: xor     rcx, rax
 * 000000014077C2CA: mov     rax, rdi
 * 000000014077C2CD: mul     rcx
 * 000000014077C2D0: shr     rdx, 3
 * 000000014077C2D4: lea     rax, [rdx+rdx*4]
 * 000000014077C2D8: add     rax, rax
 * 000000014077C2DB: sub     rcx, rax
 * 000000014077C2DE: cmp     rcx, r13
 * 000000014077C2E1: jnb     short loc_14077C2EC
 * 000000014077C2E3: bts     dword ptr [r14+6D8h], 1Bh
 * 000000014077C2EC: rdtsc
 * 000000014077C2EE: shl     rdx, 20h
 * 000000014077C2F2: or      rax, rdx
 * 000000014077C2F5: mov     rcx, rax
 * 000000014077C2F8: ror     rax, 3
 * 000000014077C2FC: xor     rcx, rax
 * 000000014077C2FF: mov     rax, r8
 * 000000014077C302: mul     rcx
 * 000000014077C305: mov     rcx, rdx
 * 000000014077C308: mov     [rbp+1C70h+var_17D8], rdx
 * 000000014077C30F: xor     rcx, rax
 * 000000014077C312: mov     rax, rdi
 * 000000014077C315: mul     rcx
 * 000000014077C318: shr     rdx, 3
 * 000000014077C31C: lea     rax, [rdx+rdx*4]
 * 000000014077C320: add     rax, rax
 * 000000014077C323: sub     rcx, rax
 * 000000014077C326: cmp     rcx, r15
 * 000000014077C329: jnb     short loc_14077C334
 * 000000014077C32B: bts     dword ptr [r14+6D8h], 17h
 * 000000014077C334: mov     esi, [rbp+1C70h+var_1AC0]
 * 000000014077C33A: test    rbx, rbx
 * 000000014077C33D: mov     ebx, [rbp+1C70h+arg_8]
 * 000000014077C343: jz      short loc_14077C396
 * 000000014077C345: test    r13b, sil
 * 000000014077C348: jz      short loc_14077C396
 * 000000014077C34A: cmp     ebx, 4
 * 000000014077C34D: jz      short loc_14077C396
 * 000000014077C34F: rdtsc
 * 000000014077C351: shl     rdx, 20h
 * 000000014077C355: or      rax, rdx
 * 000000014077C358: mov     rcx, rax
 * 000000014077C35B: ror     rax, 3
 * 000000014077C35F: xor     rcx, rax
 * 000000014077C362: mov     rax, r8
 * 000000014077C365: mul     rcx
 * 000000014077C368: mov     rcx, rdx
 * 000000014077C36B: mov     [rbp+1C70h+var_17D0], rdx
 * 000000014077C372: xor     rcx, rax
 * 000000014077C375: mov     rax, rdi
 * 000000014077C378: mul     rcx
 * 000000014077C37B: shr     rdx, 3
 * 000000014077C37F: lea     rax, [rdx+rdx*4]
 * 000000014077C383: add     rax, rax
 * 000000014077C386: sub     rcx, rax
 * 000000014077C389: cmp     rcx, 6
 * 000000014077C38D: jnb     short loc_14077C396
 * 000000014077C38F: or      [r14+6DCh], r13d
 * 000000014077C396: call    qword ptr [r14+400h]
 * 000000014077C39D: test    al, al
 * 000000014077C39F: jz      short loc_14077C3A9
 * 000000014077C3A1: or      dword ptr [r14+6DCh], 2
 * 000000014077C3A9: cmp     ebx, 7
 * 000000014077C3AC: jnz     short loc_14077C3CB
 * 000000014077C3AE: mov     eax, [r14+6D8h]
 * 000000014077C3B5: btr     eax, 1Ah
 * 000000014077C3B9: bts     eax, 1Eh
 * 000000014077C3BD: mov     [r14+6D8h], eax
 * 000000014077C3C4: mov     [r14+6A8h], r13d
 * 000000014077C3CB: call    KiSwInterruptPresent
 * 000000014077C3D0: test    eax, eax
 * 000000014077C3D2: js      short loc_14077C3E0
 * 000000014077C3D4: mov     eax, 80000000h
 * 000000014077C3D9: or      [r14+6D8h], eax
 * 000000014077C3E0: call    KeComputeParallelSha256StateSize
 * 000000014077C3E5: mov     [r14+790h], rax
 * 000000014077C3EC: rdtsc
 * 000000014077C3EE: shl     rdx, 20h
 * 000000014077C3F2: mov     rdi, 7010008004002001h
 * 000000014077C3FC: or      rax, rdx
 * 000000014077C3FF: mov     rcx, rax
 * 000000014077C402: ror     rax, 3
 * 000000014077C406: xor     rcx, rax
 * 000000014077C409: mov     rax, rdi
 * 000000014077C40C: mul     rcx
 * 000000014077C40F: mov     rcx, rdx
 * 000000014077C412: mov     [rbp+1C70h+var_17C8], rdx
 * 000000014077C419: xor     rcx, rax
 * 000000014077C41C: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014077C426: mul     rcx
 * 000000014077C429: shr     rdx, 1
 * 000000014077C42C: imul    rax, rdx, 0Bh
 * 000000014077C430: sub     rcx, rax
 * 000000014077C433: mov     eax, 5
 * 000000014077C438: cmp     ecx, eax
 * 000000014077C43A: ja      loc_14077C4EB
 * 000000014077C440: jz      loc_14077C4D3
 * 000000014077C446: test    ecx, ecx
 * 000000014077C448: jz      short loc_14077C4BB
 * 000000014077C44A: sub     ecx, 1
 * 000000014077C44D: jz      short loc_14077C4A4
 * 000000014077C44F: sub     ecx, 1
 * 000000014077C452: jz      short loc_14077C48C
 * 000000014077C454: cmp     ecx, 1
 * 000000014077C457: jz      short loc_14077C471
 * 000000014077C459: mov     [rbp+1C70h+var_1B0C], 67076494h
 * 000000014077C463: mov     edi, [rbp+1C70h+var_1B0C]
 * 000000014077C469: rol     edi, 4
 * 000000014077C46C: jmp     loc_14077C5F8
 * 000000014077C471: mov     [rbp+1C70h+var_1B08], 0A8223938h
 * 000000014077C47B: mov     edi, [rbp+1C70h+var_1B08]
 * 000000014077C481: xor     edi, r15d
 * 000000014077C484: ror     edi, 0Fh
 * 000000014077C487: jmp     loc_14077C5F8
 * 000000014077C48C: mov     [rbp+1C70h+var_1B04], 85B5910Dh
 * 000000014077C496: mov     edi, [rbp+1C70h+var_1B04]
 * 000000014077C49C: ror     edi, 2
 * 000000014077C49F: jmp     loc_14077C5F8
 * 000000014077C4A4: mov     [rbp+1C70h+var_1B00], 0B2AD31A1h
 * 000000014077C4AE: mov     edi, [rbp+1C70h+var_1B00]
 * 000000014077C4B4: rol     edi, 1
 * 000000014077C4B6: jmp     loc_14077C5F8
 * 000000014077C4BB: mov     [rbp+1C70h+var_1AFC], 0D098D0D8h
 * 000000014077C4C5: mov     edi, [rbp+1C70h+var_1AFC]
 * 000000014077C4CB: ror     edi, 6
 * 000000014077C4CE: jmp     loc_14077C5F8
 * 000000014077C4D3: mov     [rbp+1C70h+var_1AF8], 288C49EDh
 * 000000014077C4DD: mov     edi, [rbp+1C70h+var_1AF8]
 * 000000014077C4E3: ror     edi, 5
 * 000000014077C4E6: jmp     loc_14077C5F8
 * 000000014077C4EB: sub     ecx, 6
 * 000000014077C4EE: jz      loc_14077C5E2
 * 000000014077C4F4: sub     ecx, 1
 * 000000014077C4F7: jz      loc_14077C5CD
 * 000000014077C4FD: sub     ecx, 1
 * 000000014077C500: jz      loc_14077C5B8
 * 000000014077C506: cmp     ecx, 1
 * 000000014077C509: jz      loc_14077C5A0
 * 000000014077C50F: rdtsc
 * 000000014077C511: shl     rdx, 20h
 * 000000014077C515: mov     r8d, 4EC4EC4Fh
 * 000000014077C51B: or      rax, rdx
 * 000000014077C51E: mov     rcx, rax
 * 000000014077C521: ror     rax, 3
 * 000000014077C525: xor     rcx, rax
 * 000000014077C528: mov     rax, rdi
 * 000000014077C52B: mul     rcx
 * 000000014077C52E: mov     rdi, rax
 * 000000014077C531: mov     [rbp+1C70h+var_17C0], rdx
 * 000000014077C538: xor     edi, edx
 * 000000014077C53A: mov     eax, r8d
 * 000000014077C53D: mul     edi
 * 000000014077C53F: mov     ecx, edi
 * 000000014077C541: shr     edi, 5
 * 000000014077C544: shr     edx, 3
 * 000000014077C547: mov     ebx, edi
 * 000000014077C549: imul    eax, edx, 1Ah
 * 000000014077C54C: sub     ecx, eax
 * 000000014077C54E: mov     eax, r8d
 * 000000014077C551: mul     edi
 * 000000014077C553: add     ecx, 61h ; 'a'
 * 000000014077C556: shr     edi, 5
 * 000000014077C559: shl     ecx, 8
 * 000000014077C55C: shr     edx, 3
 * 000000014077C55F: imul    eax, edx, 1Ah
 * 000000014077C562: sub     ebx, eax
 * 000000014077C564: mov     eax, r8d
 * 000000014077C567: mul     edi
 * 000000014077C569: add     ebx, 41h ; 'A'
 * 000000014077C56C: or      ebx, ecx
 * 000000014077C56E: shr     edx, 3
 * 000000014077C571: imul    eax, edx, 1Ah
 * 000000014077C574: mov     ecx, edi
 * 000000014077C576: shr     edi, 5
 * 000000014077C579: shl     ebx, 8
 * 000000014077C57C: sub     ecx, eax
 * 000000014077C57E: mov     eax, r8d
 * 000000014077C581: mul     edi
 * 000000014077C583: add     ecx, 61h ; 'a'
 * 000000014077C586: or      ecx, ebx
 * 000000014077C588: shr     edx, 3
 * 000000014077C58B: mov     ebx, [rbp+1C70h+arg_8]
 * 000000014077C591: imul    eax, edx, 1Ah
 * 000000014077C594: shl     ecx, 8
 * 000000014077C597: sub     edi, eax
 * 000000014077C599: add     edi, 41h ; 'A'
 * 000000014077C59C: or      edi, ecx
 * 000000014077C59E: jmp     short loc_14077C5F8
 * 000000014077C5A0: mov     [rbp+1C70h+var_1AF4], 0B0869E85h
 * 000000014077C5AA: mov     edi, [rbp+1C70h+var_1AF4]
 * 000000014077C5B0: xor     edi, 9
 * 000000014077C5B3: ror     edi, 21h
 * 000000014077C5B6: jmp     short loc_14077C5F8
 * 000000014077C5B8: mov     [rbp+1C70h+var_1AF0], 64664142h
 * 000000014077C5C2: mov     edi, [rbp+1C70h+var_1AF0]
 * 000000014077C5C8: ror     edi, 8
 * 000000014077C5CB: jmp     short loc_14077C5F8
 * 000000014077C5CD: mov     [rbp+1C70h+var_1AEC], 82C6A6D8h
 * 000000014077C5D7: mov     edi, [rbp+1C70h+var_1AEC]
 * 000000014077C5DD: rol     edi, 7
 * 000000014077C5E0: jmp     short loc_14077C5F8
 * 000000014077C5E2: mov     [rbp+1C70h+var_1AE8], 4E574672h
 * 000000014077C5EC: mov     edi, [rbp+1C70h+var_1AE8]
 * 000000014077C5F2: xor     edi, 6
 * 000000014077C5F5: ror     edi, 18h
 * 000000014077C5F8: mov     rdx, [r14+790h]
 * 000000014077C5FF: mov     r8d, edi
 * 000000014077C602: mov     ecx, 200h
 * 000000014077C607: call    qword ptr [r14+0E0h]
 * 000000014077C60E: xor     ecx, ecx
 * 000000014077C610: mov     [r14+788h], rax
 * 000000014077C617: test    rax, rax
 * 000000014077C61A: jz      loc_14077C9F7
 * 000000014077C620: mov     [r14+5F0h], ebx
 * 000000014077C627: cli
 * 000000014077C628: xor     eax, eax
 * 000000014077C62A: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077C630: jnz     short loc_14077C634
 * 000000014077C632: jmp     short loc_14077C632
 * 000000014077C634: sti
 * 000000014077C635: mov     eax, 80000008h
 * 000000014077C63A: cpuid
 * 000000014077C63C: mov     [rbp+1C70h+var_1018], eax
 * 000000014077C642: shr     eax, 8
 * 000000014077C645: mov     [rbp+1C70h+var_1010], ecx
 * 000000014077C64B: mov     ecx, 3Fh ; '?'
 * 000000014077C650: mov     [rbp+1C70h+var_1014], ebx
 * 000000014077C656: mov     [rbp+1C70h+var_100C], edx
 * 000000014077C65C: mov     [r14+678h], al
 * 000000014077C663: cmp     al, cl
 * 000000014077C665: ja      loc_14078D55D
 * 000000014077C66B: mov     eax, esi
 * 000000014077C66D: and     eax, r13d
 * 000000014077C670: mov     dword ptr [rbp+1C70h+var_1CC0], eax
 * 000000014077C673: jz      loc_14077C7FC
 * 000000014077C679: lea     rbx, qword_1402F9BE0
 * 000000014077C680: mov     esi, ebx
 * 000000014077C682: lea     rdi, cs:140000000h
 * 000000014077C689: and     esi, ecx
 * 000000014077C68B: mov     rcx, rdi; BaseAddress
 * 000000014077C68E: call    RtlImageNtHeader
 * 000000014077C693: lea     r8, [rbp+1C70h+var_1AE0]
 * 000000014077C69A: mov     rcx, rdi
 * 000000014077C69D: lea     rdx, [rbp+1C70h+var_B38]
 * 000000014077C6A4: call    RtlCaptureImageExceptionValues
 * 000000014077C6A9: mov     ecx, [rbp+1C70h+var_1AE0]
 * 000000014077C6AF: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014077C6B9: mov     r8, [rbp+1C70h+var_B38]
 * 000000014077C6C0: mul     rcx
 * 000000014077C6C3: mov     [rbp+1C70h+var_B28], rdi
 * 000000014077C6CA: shr     rdx, 3
 * 000000014077C6CE: mov     eax, edx
 * 000000014077C6D0: xor     r14d, r14d
 * 000000014077C6D3: mov     [rbp+1C70h+var_1AE0], edx
 * 000000014077C6D9: lea     rax, [rax+rax*2]
 * 000000014077C6DD: lea     rcx, [r8+rax*4]
 * 000000014077C6E1: lea     rax, [rbp+1C70h+var_17B8]
 * 000000014077C6E8: mov     [rbp+1C70h+var_B20], rcx
 * 000000014077C6EF: mov     [rbp+1C70h+var_B18], rax
 * 000000014077C6F6: test    r8, r8
 * 000000014077C6F9: jz      loc_14077C7AB
 * 000000014077C6FF: cmp     r8, rcx
 * 000000014077C702: jz      loc_14077C7AB
 * 000000014077C708: mov     rdx, rdi
 * 000000014077C70B: mov     rcx, r8
 * 000000014077C70E: call    RtlpConvertFunctionEntry
 * 000000014077C713: mov     rcx, rax
 * 000000014077C716: lea     rdx, cs:140000000h
 * 000000014077C71D: mov     rax, [rbp+1C70h+var_B18]
 * 000000014077C724: mov     [rax], rcx
 * 000000014077C727: mov     rax, [rbp+1C70h+var_17B8]
 * 000000014077C72E: mov     r8, [rbp+1C70h+var_B38]
 * 000000014077C735: add     r8, 0Ch
 * 000000014077C739: mov     [rbp+1C70h+var_B38], r8
 * 000000014077C740: mov     ecx, [rax]
 * 000000014077C742: mov     edi, [rax+4]
 * 000000014077C745: add     rdx, rcx
 * 000000014077C748: sub     edi, ecx
 * 000000014077C74A: mov     rax, rdx
 * 000000014077C74D: mov     ecx, edi
 * 000000014077C74F: add     rcx, rdx
 * 000000014077C752: cmp     rdx, rcx
 * 000000014077C755: jnb     short loc_14077C763
 * 000000014077C757: prefetchnta byte ptr [rax]
 * 000000014077C75A: add     rax, 40h ; '@'
 * 000000014077C75E: cmp     rax, rcx
 * 000000014077C761: jb      short loc_14077C757
 * 000000014077C763: cmp     edi, r12d
 * 000000014077C766: jb      short loc_14077C781
 * 000000014077C768: mov     eax, edi
 * 000000014077C76A: shr     rax, 3
 * 000000014077C76E: xor     rbx, [rdx]
 * 000000014077C771: mov     ecx, esi
 * 000000014077C773: rol     rbx, cl
 * 000000014077C776: add     rdx, r12
 * 000000014077C779: add     edi, 0FFFFFFF8h
 * 000000014077C77C: sub     rax, r13
 * 000000014077C77F: jnz     short loc_14077C76E
 * 000000014077C781: test    edi, edi
 * 000000014077C783: jz      short loc_14077C798
 * 000000014077C785: movzx   eax, byte ptr [rdx]
 * 000000014077C788: mov     ecx, esi
 * 000000014077C78A: xor     rbx, rax
 * 000000014077C78D: add     rdx, r13
 * 000000014077C790: rol     rbx, cl
 * 000000014077C793: add     edi, 0FFFFFFFFh
 * 000000014077C796: jnz     short loc_14077C785
 * 000000014077C798: mov     rcx, [rbp+1C70h+var_B20]
 * 000000014077C79F: mov     rdi, [rbp+1C70h+var_B28]
 * 000000014077C7A6: jmp     loc_14077C6F6
 * 000000014077C7AB: cmp     rbx, cs:qword_1402F9BE0
 * 000000014077C7B2: mov     eax, r14d
 * 000000014077C7B5: mov     r14, [rbp+1C70h+var_1CE0]
 * 000000014077C7B9: mov     ecx, 40000h
 * 000000014077C7BE: setnz   al
 * 000000014077C7C1: shl     eax, 12h
 * 000000014077C7C4: xor     eax, [r14+6D8h]
 * 000000014077C7CB: and     eax, ecx
 * 000000014077C7CD: xor     eax, [r14+6D8h]
 * 000000014077C7D4: mov     [r14+6D8h], eax
 * 000000014077C7DB: test    ecx, eax
 * 000000014077C7DD: jz      short loc_14077C7FC
 * 000000014077C7DF: xor     eax, eax
 * 000000014077C7E1: cmp     [r14+650h], eax
 * 000000014077C7E8: jnz     short loc_14077C7FC
 * 000000014077C7EA: mov     rax, [r14+4D8h]
 * 000000014077C7F1: xor     rbx, cs:qword_1402F9BE0
 * 000000014077C7F8: mov     [rax+18h], rbx
 * 000000014077C7FC: rdtsc
 * 000000014077C7FE: shl     rdx, 20h
 * 000000014077C802: mov     rbx, 0CCCCCCCCCCCCCCCDh
 * 000000014077C80C: or      rax, rdx
 * 000000014077C80F: mov     rcx, rax
 * 000000014077C812: ror     rax, 3
 * 000000014077C816: xor     rcx, rax
 * 000000014077C819: mov     rax, 7010008004002001h
 * 000000014077C823: mul     rcx
 * 000000014077C826: mov     rcx, rdx
 * 000000014077C829: mov     [rbp+1C70h+var_17B0], rdx
 * 000000014077C830: xor     rcx, rax
 * 000000014077C833: mov     rax, rbx
 * 000000014077C836: mul     rcx
 * 000000014077C839: shr     rdx, 3
 * 000000014077C83D: lea     rax, [rdx+rdx*4]
 * 000000014077C841: add     rax, rax
 * 000000014077C844: sub     rcx, rax
 * 000000014077C847: cmp     rcx, 2
 * 000000014077C84B: jnb     loc_14077CA0D
 * 000000014077C851: cmp     [rbp+1C70h+arg_8], r15d
 * 000000014077C858: mov     r15, 7010008004002001h
 * 000000014077C862: jz      loc_14077CA23
 * 000000014077C868: mov     r8d, [r14+5C8h]
 * 000000014077C86F: rdtsc
 * 000000014077C871: shl     rdx, 20h
 * 000000014077C875: or      rax, rdx
 * 000000014077C878: mov     rcx, rax
 * 000000014077C87B: ror     rax, 3
 * 000000014077C87F: xor     rcx, rax
 * 000000014077C882: mov     rax, r15
 * 000000014077C885: mul     rcx
 * 000000014077C888: mov     rdi, rax
 * 000000014077C88B: mov     [rbp+1C70h+var_17A8], rdx
 * 000000014077C892: xor     edi, edx
 * 000000014077C894: and     edi, 7FFh
 * 000000014077C89A: rdtsc
 * 000000014077C89C: shl     rdx, 20h
 * 000000014077C8A0: or      rax, rdx
 * 000000014077C8A3: mov     rcx, rax
 * 000000014077C8A6: ror     rax, 3
 * 000000014077C8AA: xor     rcx, rax
 * 000000014077C8AD: mov     rax, r15
 * 000000014077C8B0: mul     rcx
 * 000000014077C8B3: lea     ecx, [rdi+1]
 * 000000014077C8B6: mov     [rbp+1C70h+var_17A0], rdx
 * 000000014077C8BD: xor     rax, rdx
 * 000000014077C8C0: xor     edx, edx
 * 000000014077C8C2: div     rcx
 * 000000014077C8C5: mov     ecx, 200h
 * 000000014077C8CA: mov     rsi, rdx
 * 000000014077C8CD: lea     edx, [rdi+28h]
 * 000000014077C8D0: call    qword ptr [r14+0E0h]
 * 000000014077C8D7: mov     r10, rax
 * 000000014077C8DA: xor     eax, eax
 * 000000014077C8DC: test    r10, r10
 * 000000014077C8DF: jnz     short loc_14077C8F0
 * 000000014077C8E1: add     [r14+758h], r13d
 * 000000014077C8E8: mov     r9d, eax
 * 000000014077C8EB: jmp     loc_14077C9EB
 * 000000014077C8F0: mov     r8d, esi
 * 000000014077C8F3: mov     rbx, r10
 * 000000014077C8F6: cmp     esi, r12d
 * 000000014077C8F9: jb      short loc_14077C934
 * 000000014077C8FB: mov     r9d, esi
 * 000000014077C8FE: shr     r9, 3
 * 000000014077C902: rdtsc
 * 000000014077C904: shl     rdx, 20h
 * 000000014077C908: add     r8d, 0FFFFFFF8h
 * 000000014077C90C: or      rax, rdx
 * 000000014077C90F: mov     rcx, rax
 * 000000014077C912: ror     rax, 3
 * 000000014077C916: xor     rcx, rax
 * 000000014077C919: mov     rax, r15
 * 000000014077C91C: mul     rcx
 * 000000014077C91F: mov     [rbp+1C70h+var_1798], rdx
 * 000000014077C926: xor     rdx, rax
 * 000000014077C929: mov     [rbx], rdx
 * 000000014077C92C: add     rbx, r12
 * 000000014077C92F: sub     r9, r13
 * 000000014077C932: jnz     short loc_14077C902
 * 000000014077C934: test    r8d, r8d
 * 000000014077C937: jz      short loc_14077C96B
 * 000000014077C939: rdtsc
 * 000000014077C93B: shl     rdx, 20h
 * 000000014077C93F: or      rax, rdx
 * 000000014077C942: mov     rcx, rax
 * 000000014077C945: ror     rax, 3
 * 000000014077C949: xor     rcx, rax
 * 000000014077C94C: mov     rax, r15
 * 000000014077C94F: mul     rcx
 * 000000014077C952: mov     [rbp+1C70h+var_1790], rdx
 * 000000014077C959: xor     rdx, rax
 * 000000014077C95C: mov     [rbx], dl
 * 000000014077C95E: add     rbx, r13
 * 000000014077C961: shr     rdx, 8
 * 000000014077C965: add     r8d, 0FFFFFFFFh
 * 000000014077C969: jnz     short loc_14077C95C
 * 000000014077C96B: mov     r9d, esi
 * 000000014077C96E: sub     edi, esi
 * 000000014077C970: add     r9, r10
 * 000000014077C973: lea     rbx, [r9+28h]
 * 000000014077C977: cmp     edi, r12d
 * 000000014077C97A: jb      short loc_14077C9B4
 * 000000014077C97C: mov     r8d, edi
 * 000000014077C97F: shr     r8, 3
 * 000000014077C983: rdtsc
 * 000000014077C985: shl     rdx, 20h
 * 000000014077C989: add     edi, 0FFFFFFF8h
 * 000000014077C98C: or      rax, rdx
 * 000000014077C98F: mov     rcx, rax
 * 000000014077C992: ror     rax, 3
 * 000000014077C996: xor     rcx, rax
 * 000000014077C999: mov     rax, r15
 * 000000014077C99C: mul     rcx
 * 000000014077C99F: mov     [rbp+1C70h+var_1788], rdx
 * 000000014077C9A6: xor     rdx, rax
 * 000000014077C9A9: mov     [rbx], rdx
 * 000000014077C9AC: add     rbx, r12
 * 000000014077C9AF: sub     r8, r13
 * 000000014077C9B2: jnz     short loc_14077C983
 * 000000014077C9B4: test    edi, edi
 * 000000014077C9B6: jz      short loc_14077C9E9
 * 000000014077C9B8: rdtsc
 * 000000014077C9BA: shl     rdx, 20h
 * 000000014077C9BE: or      rax, rdx
 * 000000014077C9C1: mov     rcx, rax
 * 000000014077C9C4: ror     rax, 3
 * 000000014077C9C8: xor     rcx, rax
 * 000000014077C9CB: mov     rax, r15
 * 000000014077C9CE: mul     rcx
 * 000000014077C9D1: mov     [rbp+1C70h+var_1780], rdx
 * 000000014077C9D8: xor     rdx, rax
 * 000000014077C9DB: mov     [rbx], dl
 * 000000014077C9DD: add     rbx, r13
 * 000000014077C9E0: shr     rdx, 8
 * 000000014077C9E4: add     edi, 0FFFFFFFFh
 * 000000014077C9E7: jnz     short loc_14077C9DB
 * 000000014077C9E9: xor     eax, eax
 * 000000014077C9EB: mov     [r14+748h], r9
 * 000000014077C9F2: test    r9, r9
 * 000000014077C9F5: jnz     short loc_14077CA19
 * 000000014077C9F7: xor     al, al
 * 000000014077C9F9: add     rsp, 1D38h
 * 000000014077CA00: pop     r15
 * 000000014077CA02: pop     r14
 * 000000014077CA04: pop     r13
 * 000000014077CA06: pop     r12
 * 000000014077CA08: pop     rdi
 * 000000014077CA09: pop     rsi
 * 000000014077CA0A: pop     rbx
 * 000000014077CA0B: pop     rbp
 * 000000014077CA0C: retn
 * 000000014077CA0D: mov     r15, 7010008004002001h
 * 000000014077CA17: jmp     short loc_14077CA23
 * 000000014077CA19: mov     rbx, 0CCCCCCCCCCCCCCCDh
 * 000000014077CA23: rdtsc
 * 000000014077CA25: shl     rdx, 20h
 * 000000014077CA29: or      rax, rdx
 * 000000014077CA2C: mov     rcx, rax
 * 000000014077CA2F: ror     rax, 3
 * 000000014077CA33: xor     rcx, rax
 * 000000014077CA36: mov     rax, r15
 * 000000014077CA39: mul     rcx
 * 000000014077CA3C: mov     rcx, rdx
 * 000000014077CA3F: mov     [rbp+1C70h+var_1778], rdx
 * 000000014077CA46: xor     rcx, rax
 * 000000014077CA49: mov     rax, rbx
 * 000000014077CA4C: mul     rcx
 * 000000014077CA4F: shr     rdx, 3
 * 000000014077CA53: lea     rax, [rdx+rdx*4]
 * 000000014077CA57: add     rax, rax
 * 000000014077CA5A: sub     rcx, rax
 * 000000014077CA5D: cmp     rcx, 2
 * 000000014077CA61: jnb     loc_14077CD32
 * 000000014077CA67: test    dword ptr [r14+6D8h], 40000000h
 * 000000014077CA72: jnz     loc_14077CD32
 * 000000014077CA78: mov     r8d, [r14+5C8h]
 * 000000014077CA7F: rdtsc
 * 000000014077CA81: shl     rdx, 20h
 * 000000014077CA85: or      rax, rdx
 * 000000014077CA88: mov     rcx, rax
 * 000000014077CA8B: ror     rax, 3
 * 000000014077CA8F: xor     rcx, rax
 * 000000014077CA92: mov     rax, r15
 * 000000014077CA95: mul     rcx
 * 000000014077CA98: mov     rdi, rax
 * 000000014077CA9B: mov     [rbp+1C70h+var_1770], rdx
 * 000000014077CAA2: xor     edi, edx
 * 000000014077CAA4: and     edi, 7FFh
 * 000000014077CAAA: rdtsc
 * 000000014077CAAC: shl     rdx, 20h
 * 000000014077CAB0: or      rax, rdx
 * 000000014077CAB3: mov     rcx, rax
 * 000000014077CAB6: ror     rax, 3
 * 000000014077CABA: xor     rcx, rax
 * 000000014077CABD: mov     rax, r15
 * 000000014077CAC0: mul     rcx
 * 000000014077CAC3: lea     ecx, [rdi+1]
 * 000000014077CAC6: mov     [rbp+1C70h+var_1768], rdx
 * 000000014077CACD: xor     rax, rdx
 * 000000014077CAD0: xor     edx, edx
 * 000000014077CAD2: div     rcx
 * 000000014077CAD5: mov     ecx, 200h
 * 000000014077CADA: mov     rsi, rdx
 * 000000014077CADD: lea     edx, [rdi+202h]
 * 000000014077CAE3: call    qword ptr [r14+0E0h]
 * 000000014077CAEA: mov     r10, rax
 * 000000014077CAED: xor     eax, eax
 * 000000014077CAEF: test    r10, r10
 * 000000014077CAF2: jnz     short loc_14077CB00
 * 000000014077CAF4: add     [r14+758h], r13d
 * 000000014077CAFB: jmp     loc_14077C9F7
 * 000000014077CB00: mov     r8d, esi
 * 000000014077CB03: mov     rbx, r10
 * 000000014077CB06: mov     r11d, 0FFFFFFF8h
 * 000000014077CB0C: cmp     esi, r12d
 * 000000014077CB0F: jb      short loc_14077CB49
 * 000000014077CB11: mov     r9d, esi
 * 000000014077CB14: shr     r9, 3
 * 000000014077CB18: rdtsc
 * 000000014077CB1A: shl     rdx, 20h
 * 000000014077CB1E: add     r8d, r11d
 * 000000014077CB21: or      rax, rdx
 * 000000014077CB24: mov     rcx, rax
 * 000000014077CB27: ror     rax, 3
 * 000000014077CB2B: xor     rcx, rax
 * 000000014077CB2E: mov     rax, r15
 * 000000014077CB31: mul     rcx
 * 000000014077CB34: mov     [rbp+1C70h+var_1760], rdx
 * 000000014077CB3B: xor     rdx, rax
 * 000000014077CB3E: mov     [rbx], rdx
 * 000000014077CB41: add     rbx, r12
 * 000000014077CB44: sub     r9, r13
 * 000000014077CB47: jnz     short loc_14077CB18
 * 000000014077CB49: test    r8d, r8d
 * 000000014077CB4C: jz      short loc_14077CB85
 * 000000014077CB4E: rdtsc
 * 000000014077CB50: shl     rdx, 20h
 * 000000014077CB54: or      rax, rdx
 * 000000014077CB57: mov     rcx, rax
 * 000000014077CB5A: ror     rax, 3
 * 000000014077CB5E: xor     rcx, rax
 * 000000014077CB61: mov     rax, r15
 * 000000014077CB64: mul     rcx
 * 000000014077CB67: mov     [rbp+1C70h+var_1758], rdx
 * 000000014077CB6E: xor     rdx, rax
 * 000000014077CB71: or      r15d, 0FFFFFFFFh
 * 000000014077CB75: mov     [rbx], dl
 * 000000014077CB77: add     rbx, r13
 * 000000014077CB7A: shr     rdx, 8
 * 000000014077CB7E: add     r8d, r15d
 * 000000014077CB81: jnz     short loc_14077CB75
 * 000000014077CB83: jmp     short loc_14077CB89
 * 000000014077CB85: or      r15d, 0FFFFFFFFh
 * 000000014077CB89: mov     r8d, esi
 * 000000014077CB8C: sub     edi, esi
 * 000000014077CB8E: add     r8, r10
 * 000000014077CB91: mov     rsi, 7010008004002001h
 * 000000014077CB9B: lea     rbx, [r8+202h]
 * 000000014077CBA2: cmp     edi, r12d
 * 000000014077CBA5: jb      short loc_14077CBDF
 * 000000014077CBA7: mov     r9d, edi
 * 000000014077CBAA: shr     r9, 3
 * 000000014077CBAE: rdtsc
 * 000000014077CBB0: shl     rdx, 20h
 * 000000014077CBB4: add     edi, r11d
 * 000000014077CBB7: or      rax, rdx
 * 000000014077CBBA: mov     rcx, rax
 * 000000014077CBBD: ror     rax, 3
 * 000000014077CBC1: xor     rcx, rax
 * 000000014077CBC4: mov     rax, rsi
 * 000000014077CBC7: mul     rcx
 * 000000014077CBCA: mov     [rbp+1C70h+var_1750], rdx
 * 000000014077CBD1: xor     rdx, rax
 * 000000014077CBD4: mov     [rbx], rdx
 * 000000014077CBD7: add     rbx, r12
 * 000000014077CBDA: sub     r9, r13
 * 000000014077CBDD: jnz     short loc_14077CBAE
 * 000000014077CBDF: xor     eax, eax
 * 000000014077CBE1: test    edi, edi
 * 000000014077CBE3: jz      short loc_14077CC18
 * 000000014077CBE5: rdtsc
 * 000000014077CBE7: shl     rdx, 20h
 * 000000014077CBEB: or      rax, rdx
 * 000000014077CBEE: mov     rcx, rax
 * 000000014077CBF1: ror     rax, 3
 * 000000014077CBF5: xor     rcx, rax
 * 000000014077CBF8: mov     rax, rsi
 * 000000014077CBFB: mul     rcx
 * 000000014077CBFE: mov     [rbp+1C70h+var_1748], rdx
 * 000000014077CC05: xor     rdx, rax
 * 000000014077CC08: mov     [rbx], dl
 * 000000014077CC0A: add     rbx, r13
 * 000000014077CC0D: shr     rdx, 8
 * 000000014077CC11: add     edi, r15d
 * 000000014077CC14: jnz     short loc_14077CC08
 * 000000014077CC16: xor     eax, eax
 * 000000014077CC18: test    r8, r8
 * 000000014077CC1B: jz      loc_14077C9F7
 * 000000014077CC21: rdtsc
 * 000000014077CC23: shl     rdx, 20h
 * 000000014077CC27: lea     rbx, [r8+2]
 * 000000014077CC2B: or      rax, rdx
 * 000000014077CC2E: mov     rcx, rax
 * 000000014077CC31: ror     rax, 3
 * 000000014077CC35: xor     rcx, rax
 * 000000014077CC38: mov     rax, rsi
 * 000000014077CC3B: mul     rcx
 * 000000014077CC3E: mov     rcx, rbx
 * 000000014077CC41: mov     [rbp+1C70h+var_1740], rdx
 * 000000014077CC48: xor     rdx, rax
 * 000000014077CC4B: mov     [rbp+1C70h+var_1738], rdx
 * 000000014077CC52: xor     eax, eax
 * 000000014077CC54: mov     edx, 100h
 * 000000014077CC59: mov     [rcx], al
 * 000000014077CC5B: add     eax, r13d
 * 000000014077CC5E: add     rcx, r13
 * 000000014077CC61: cmp     eax, edx
 * 000000014077CC63: jb      short loc_14077CC59
 * 000000014077CC65: xor     eax, eax
 * 000000014077CC67: mov     r10, rdx
 * 000000014077CC6A: mov     r9b, al
 * 000000014077CC6D: lea     rdi, [rax-2]
 * 000000014077CC71: sub     rdi, r8
 * 000000014077CC74: mov     dl, [rbx]
 * 000000014077CC76: lea     rax, [rdi+rbx]
 * 000000014077CC7A: and     eax, 7
 * 000000014077CC7D: mov     cl, byte ptr [rbp+rax+1C70h+var_1738]
 * 000000014077CC84: add     cl, dl
 * 000000014077CC86: add     r9b, cl
 * 000000014077CC89: movzx   ecx, r9b
 * 000000014077CC8D: mov     al, [rcx+r8+2]
 * 000000014077CC92: mov     [rcx+r8+2], dl
 * 000000014077CC97: mov     [rbx], al
 * 000000014077CC99: add     rbx, r13
 * 000000014077CC9C: sub     r10, r13
 * 000000014077CC9F: jnz     short loc_14077CC74
 * 000000014077CCA1: mov     edi, 100h
 * 000000014077CCA6: lea     rbx, [r8+102h]
 * 000000014077CCAD: lea     r9d, [r10+20h]
 * 000000014077CCB1: rdtsc
 * 000000014077CCB3: shl     rdx, 20h
 * 000000014077CCB7: add     edi, r11d
 * 000000014077CCBA: or      rax, rdx
 * 000000014077CCBD: mov     rcx, rax
 * 000000014077CCC0: ror     rax, 3
 * 000000014077CCC4: xor     rcx, rax
 * 000000014077CCC7: mov     rax, rsi
 * 000000014077CCCA: mul     rcx
 * 000000014077CCCD: mov     [rbp+1C70h+var_1730], rdx
 * 000000014077CCD4: xor     rdx, rax
 * 000000014077CCD7: mov     [rbx], rdx
 * 000000014077CCDA: add     rbx, r12
 * 000000014077CCDD: sub     r9, r13
 * 000000014077CCE0: jnz     short loc_14077CCB1
 * 000000014077CCE2: test    edi, edi
 * 000000014077CCE4: jz      short loc_14077CD17
 * 000000014077CCE6: rdtsc
 * 000000014077CCE8: shl     rdx, 20h
 * 000000014077CCEC: or      rax, rdx
 * 000000014077CCEF: mov     rcx, rax
 * 000000014077CCF2: ror     rax, 3
 * 000000014077CCF6: xor     rcx, rax
 * 000000014077CCF9: mov     rax, rsi
 * 000000014077CCFC: mul     rcx
 * 000000014077CCFF: mov     [rbp+1C70h+var_1728], rdx
 * 000000014077CD06: xor     rdx, rax
 * 000000014077CD09: mov     [rbx], dl
 * 000000014077CD0B: add     rbx, r13
 * 000000014077CD0E: shr     rdx, 8
 * 000000014077CD12: add     edi, r15d
 * 000000014077CD15: jnz     short loc_14077CD09
 * 000000014077CD17: mov     [r14+770h], r8
 * 000000014077CD1E: mov     rbx, 0CCCCCCCCCCCCCCCDh
 * 000000014077CD28: mov     r15, 7010008004002001h
 * 000000014077CD32: cli
 * 000000014077CD33: xor     eax, eax
 * 000000014077CD35: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077CD3B: jnz     short loc_14077CD3F
 * 000000014077CD3D: jmp     short loc_14077CD3D
 * 000000014077CD3F: sti
 * 000000014077CD40: rdtsc
 * 000000014077CD42: shl     rdx, 20h
 * 000000014077CD46: or      rax, rdx
 * 000000014077CD49: mov     rcx, rax
 * 000000014077CD4C: ror     rax, 3
 * 000000014077CD50: xor     rcx, rax
 * 000000014077CD53: mov     rax, r15
 * 000000014077CD56: mul     rcx
 * 000000014077CD59: mov     rcx, rdx
 * 000000014077CD5C: mov     [rbp+1C70h+var_1720], rdx
 * 000000014077CD63: xor     rcx, rax
 * 000000014077CD66: mov     rax, rbx
 * 000000014077CD69: mul     rcx
 * 000000014077CD6C: shr     rdx, 3
 * 000000014077CD70: lea     rax, [rdx+rdx*4]
 * 000000014077CD74: add     rax, rax
 * 000000014077CD77: sub     rcx, rax
 * 000000014077CD7A: cmp     rcx, 5
 * 000000014077CD7E: jnb     short loc_14077CD89
 * 000000014077CD80: bts     dword ptr [r14+6D8h], 18h
 * 000000014077CD89: cli
 * 000000014077CD8A: xor     eax, eax
 * 000000014077CD8C: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077CD92: jnz     short loc_14077CD96
 * 000000014077CD94: jmp     short loc_14077CD94
 * 000000014077CD96: sti
 * 000000014077CD97: mov     r8d, [r14+5C8h]
 * 000000014077CD9E: rdtsc
 * 000000014077CDA0: shl     rdx, 20h
 * 000000014077CDA4: or      rax, rdx
 * 000000014077CDA7: mov     rcx, rax
 * 000000014077CDAA: ror     rax, 3
 * 000000014077CDAE: xor     rcx, rax
 * 000000014077CDB1: mov     rax, r15
 * 000000014077CDB4: mul     rcx
 * 000000014077CDB7: mov     rsi, rax
 * 000000014077CDBA: mov     [rbp+1C70h+var_1718], rdx
 * 000000014077CDC1: xor     esi, edx
 * 000000014077CDC3: and     esi, 7FFh
 * 000000014077CDC9: rdtsc
 * 000000014077CDCB: shl     rdx, 20h
 * 000000014077CDCF: lea     ebx, [rsi+1]
 * 000000014077CDD2: or      rax, rdx
 * 000000014077CDD5: mov     rcx, rax
 * 000000014077CDD8: ror     rax, 3
 * 000000014077CDDC: xor     rcx, rax
 * 000000014077CDDF: mov     rax, r15
 * 000000014077CDE2: mul     rcx
 * 000000014077CDE5: mov     ecx, 200h
 * 000000014077CDEA: mov     [rbp+1C70h+var_1710], rdx
 * 000000014077CDF1: xor     rax, rdx
 * 000000014077CDF4: xor     edx, edx
 * 000000014077CDF6: div     rbx
 * 000000014077CDF9: mov     r15, rdx
 * 000000014077CDFC: lea     edx, [rsi+88h]
 * 000000014077CE02: call    qword ptr [r14+0E0h]
 * 000000014077CE09: mov     r9, rax
 * 000000014077CE0C: xor     eax, eax
 * 000000014077CE0E: test    r9, r9
 * 000000014077CE11: jz      loc_14077CAF4
 * 000000014077CE17: mov     edi, r15d
 * 000000014077CE1A: mov     rbx, r9
 * 000000014077CE1D: mov     r11, 7010008004002001h
 * 000000014077CE27: cmp     r15d, r12d
 * 000000014077CE2A: jb      short loc_14077CE64
 * 000000014077CE2C: mov     r8d, r15d
 * 000000014077CE2F: shr     r8, 3
 * 000000014077CE33: rdtsc
 * 000000014077CE35: shl     rdx, 20h
 * 000000014077CE39: add     edi, 0FFFFFFF8h
 * 000000014077CE3C: or      rax, rdx
 * 000000014077CE3F: mov     rcx, rax
 * 000000014077CE42: ror     rax, 3
 * 000000014077CE46: xor     rcx, rax
 * 000000014077CE49: mov     rax, r11
 * 000000014077CE4C: mul     rcx
 * 000000014077CE4F: mov     [rbp+1C70h+var_1708], rdx
 * 000000014077CE56: xor     rdx, rax
 * 000000014077CE59: mov     [rbx], rdx
 * 000000014077CE5C: add     rbx, r12
 * 000000014077CE5F: sub     r8, r13
 * 000000014077CE62: jnz     short loc_14077CE33
 * 000000014077CE64: test    edi, edi
 * 000000014077CE66: jz      short loc_14077CE99
 * 000000014077CE68: rdtsc
 * 000000014077CE6A: shl     rdx, 20h
 * 000000014077CE6E: or      rax, rdx
 * 000000014077CE71: mov     rcx, rax
 * 000000014077CE74: ror     rax, 3
 * 000000014077CE78: xor     rcx, rax
 * 000000014077CE7B: mov     rax, r11
 * 000000014077CE7E: mul     rcx
 * 000000014077CE81: mov     [rbp+1C70h+var_1700], rdx
 * 000000014077CE88: xor     rdx, rax
 * 000000014077CE8B: mov     [rbx], dl
 * 000000014077CE8D: add     rbx, r13
 * 000000014077CE90: shr     rdx, 8
 * 000000014077CE94: add     edi, 0FFFFFFFFh
 * 000000014077CE97: jnz     short loc_14077CE8B
 * 000000014077CE99: mov     edi, r15d
 * 000000014077CE9C: sub     esi, r15d
 * 000000014077CE9F: add     rdi, r9
 * 000000014077CEA2: mov     r15d, 0FFFFFFF8h
 * 000000014077CEA8: mov     [rbp+1C70h+Timer], rdi
 * 000000014077CEAC: lea     rbx, [rdi+88h]
 * 000000014077CEB3: cmp     esi, r12d
 * 000000014077CEB6: jb      short loc_14077CEF3
 * 000000014077CEB8: mov     edi, esi
 * 000000014077CEBA: shr     rdi, 3
 * 000000014077CEBE: rdtsc
 * 000000014077CEC0: shl     rdx, 20h
 * 000000014077CEC4: add     esi, r15d
 * 000000014077CEC7: or      rax, rdx
 * 000000014077CECA: mov     rcx, rax
 * 000000014077CECD: ror     rax, 3
 * 000000014077CED1: xor     rcx, rax
 * 000000014077CED4: mov     rax, r11
 * 000000014077CED7: mul     rcx
 * 000000014077CEDA: mov     [rbp+1C70h+var_16F8], rdx
 * 000000014077CEE1: xor     rdx, rax
 * 000000014077CEE4: mov     [rbx], rdx
 * 000000014077CEE7: add     rbx, r12
 * 000000014077CEEA: sub     rdi, r13
 * 000000014077CEED: jnz     short loc_14077CEBE
 * 000000014077CEEF: mov     rdi, [rbp+1C70h+Timer]
 * 000000014077CEF3: xor     eax, eax
 * 000000014077CEF5: test    esi, esi
 * 000000014077CEF7: jz      short loc_14077CF2C
 * 000000014077CEF9: rdtsc
 * 000000014077CEFB: shl     rdx, 20h
 * 000000014077CEFF: or      rax, rdx
 * 000000014077CF02: mov     rcx, rax
 * 000000014077CF05: ror     rax, 3
 * 000000014077CF09: xor     rcx, rax
 * 000000014077CF0C: mov     rax, r11
 * 000000014077CF0F: mul     rcx
 * 000000014077CF12: mov     [rbp+1C70h+var_16F0], rdx
 * 000000014077CF19: xor     rdx, rax
 * 000000014077CF1C: mov     [rbx], dl
 * 000000014077CF1E: add     rbx, r13
 * 000000014077CF21: shr     rdx, 8
 * 000000014077CF25: add     esi, 0FFFFFFFFh
 * 000000014077CF28: jnz     short loc_14077CF1C
 * 000000014077CF2A: xor     eax, eax
 * 000000014077CF2C: test    rdi, rdi
 * 000000014077CF2F: jz      loc_14077C9F7
 * 000000014077CF35: mov     [r14+540h], rdi
 * 000000014077CF3C: cli
 * 000000014077CF3D: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077CF43: jnz     short loc_14077CF47
 * 000000014077CF45: jmp     short loc_14077CF45
 * 000000014077CF47: sti
 * 000000014077CF48: rdtsc
 * 000000014077CF4A: shl     rdx, 20h
 * 000000014077CF4E: or      rax, rdx
 * 000000014077CF51: mov     rcx, rax
 * 000000014077CF54: ror     rax, 3
 * 000000014077CF58: xor     rcx, rax
 * 000000014077CF5B: mov     rax, r11
 * 000000014077CF5E: mul     rcx
 * 000000014077CF61: mov     rcx, rdx
 * 000000014077CF64: mov     [rbp+1C70h+var_16E8], rdx
 * 000000014077CF6B: xor     rcx, rax
 * 000000014077CF6E: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014077CF78: mul     rcx
 * 000000014077CF7B: shr     rdx, 3
 * 000000014077CF7F: lea     rax, [rdx+rdx*4]
 * 000000014077CF83: add     rax, rax
 * 000000014077CF86: sub     rcx, rax
 * 000000014077CF89: cmp     rcx, 3
 * 000000014077CF8D: jnb     loc_14077D128
 * 000000014077CF93: mov     r8d, [r14+5C8h]
 * 000000014077CF9A: rdtsc
 * 000000014077CF9C: shl     rdx, 20h
 * 000000014077CFA0: or      rax, rdx
 * 000000014077CFA3: mov     rcx, rax
 * 000000014077CFA6: ror     rax, 3
 * 000000014077CFAA: xor     rcx, rax
 * 000000014077CFAD: mov     rax, r11
 * 000000014077CFB0: mul     rcx
 * 000000014077CFB3: mov     rdi, rax
 * 000000014077CFB6: mov     [rbp+1C70h+var_16E0], rdx
 * 000000014077CFBD: xor     edi, edx
 * 000000014077CFBF: and     edi, 7FFh
 * 000000014077CFC5: rdtsc
 * 000000014077CFC7: shl     rdx, 20h
 * 000000014077CFCB: or      rax, rdx
 * 000000014077CFCE: mov     rcx, rax
 * 000000014077CFD1: ror     rax, 3
 * 000000014077CFD5: xor     rcx, rax
 * 000000014077CFD8: mov     rax, r11
 * 000000014077CFDB: mul     rcx
 * 000000014077CFDE: lea     ecx, [rdi+1]
 * 000000014077CFE1: mov     [rbp+1C70h+var_16D8], rdx
 * 000000014077CFE8: xor     rax, rdx
 * 000000014077CFEB: xor     edx, edx
 * 000000014077CFED: div     rcx
 * 000000014077CFF0: mov     ecx, 200h
 * 000000014077CFF5: mov     rsi, rdx
 * 000000014077CFF8: lea     edx, [rdi+48h]
 * 000000014077CFFB: call    qword ptr [r14+0E0h]
 * 000000014077D002: mov     r10, rax
 * 000000014077D005: xor     eax, eax
 * 000000014077D007: test    r10, r10
 * 000000014077D00A: jz      loc_14077CAF4
 * 000000014077D010: mov     r8d, esi
 * 000000014077D013: mov     rbx, r10
 * 000000014077D016: mov     r11, 7010008004002001h
 * 000000014077D020: cmp     esi, r12d
 * 000000014077D023: jb      short loc_14077D05D
 * 000000014077D025: mov     r9d, esi
 * 000000014077D028: shr     r9, 3
 * 000000014077D02C: rdtsc
 * 000000014077D02E: shl     rdx, 20h
 * 000000014077D032: add     r8d, r15d
 * 000000014077D035: or      rax, rdx
 * 000000014077D038: mov     rcx, rax
 * 000000014077D03B: ror     rax, 3
 * 000000014077D03F: xor     rcx, rax
 * 000000014077D042: mov     rax, r11
 * 000000014077D045: mul     rcx
 * 000000014077D048: mov     [rbp+1C70h+var_16D0], rdx
 * 000000014077D04F: xor     rdx, rax
 * 000000014077D052: mov     [rbx], rdx
 * 000000014077D055: add     rbx, r12
 * 000000014077D058: sub     r9, r13
 * 000000014077D05B: jnz     short loc_14077D02C
 * 000000014077D05D: test    r8d, r8d
 * 000000014077D060: jz      short loc_14077D094
 * 000000014077D062: rdtsc
 * 000000014077D064: shl     rdx, 20h
 * 000000014077D068: or      rax, rdx
 * 000000014077D06B: mov     rcx, rax
 * 000000014077D06E: ror     rax, 3
 * 000000014077D072: xor     rcx, rax
 * 000000014077D075: mov     rax, r11
 * 000000014077D078: mul     rcx
 * 000000014077D07B: mov     [rbp+1C70h+var_16C8], rdx
 * 000000014077D082: xor     rdx, rax
 * 000000014077D085: mov     [rbx], dl
 * 000000014077D087: add     rbx, r13
 * 000000014077D08A: shr     rdx, 8
 * 000000014077D08E: add     r8d, 0FFFFFFFFh
 * 000000014077D092: jnz     short loc_14077D085
 * 000000014077D094: mov     r8d, esi
 * 000000014077D097: sub     edi, esi
 * 000000014077D099: add     r8, r10
 * 000000014077D09C: mov     [rbp+1C70h+var_1C90], r8
 * 000000014077D0A0: lea     rbx, [r8+48h]
 * 000000014077D0A4: cmp     edi, r12d
 * 000000014077D0A7: jb      short loc_14077D0E5
 * 000000014077D0A9: mov     r8d, edi
 * 000000014077D0AC: shr     r8, 3
 * 000000014077D0B0: rdtsc
 * 000000014077D0B2: shl     rdx, 20h
 * 000000014077D0B6: add     edi, r15d
 * 000000014077D0B9: or      rax, rdx
 * 000000014077D0BC: mov     rcx, rax
 * 000000014077D0BF: ror     rax, 3
 * 000000014077D0C3: xor     rcx, rax
 * 000000014077D0C6: mov     rax, r11
 * 000000014077D0C9: mul     rcx
 * 000000014077D0CC: mov     [rbp+1C70h+var_16C0], rdx
 * 000000014077D0D3: xor     rdx, rax
 * 000000014077D0D6: mov     [rbx], rdx
 * 000000014077D0D9: add     rbx, r12
 * 000000014077D0DC: sub     r8, r13
 * 000000014077D0DF: jnz     short loc_14077D0B0
 * 000000014077D0E1: mov     r8, [rbp+1C70h+var_1C90]
 * 000000014077D0E5: xor     eax, eax
 * 000000014077D0E7: test    edi, edi
 * 000000014077D0E9: jz      short loc_14077D11E
 * 000000014077D0EB: rdtsc
 * 000000014077D0ED: shl     rdx, 20h
 * 000000014077D0F1: or      rax, rdx
 * 000000014077D0F4: mov     rcx, rax
 * 000000014077D0F7: ror     rax, 3
 * 000000014077D0FB: xor     rcx, rax
 * 000000014077D0FE: mov     rax, r11
 * 000000014077D101: mul     rcx
 * 000000014077D104: mov     [rbp+1C70h+var_16B8], rdx
 * 000000014077D10B: xor     rdx, rax
 * 000000014077D10E: mov     [rbx], dl
 * 000000014077D110: add     rbx, r13
 * 000000014077D113: shr     rdx, 8
 * 000000014077D117: add     edi, 0FFFFFFFFh
 * 000000014077D11A: jnz     short loc_14077D10E
 * 000000014077D11C: xor     eax, eax
 * 000000014077D11E: test    r8, r8
 * 000000014077D121: jnz     short loc_14077D130
 * 000000014077D123: jmp     loc_14077C9F7
 * 000000014077D128: lea     r8, [rdi+40h]
 * 000000014077D12C: mov     [rbp+1C70h+var_1C90], r8
 * 000000014077D130: mov     eax, [rbp+1C70h+arg_8]
 * 000000014077D136: mov     [r14+548h], r8
 * 000000014077D13D: cmp     eax, 4
 * 000000014077D140: jnz     loc_14077D363
 * 000000014077D146: mov     r8d, [r14+5C8h]
 * 000000014077D14D: rdtsc
 * 000000014077D14F: shl     rdx, 20h
 * 000000014077D153: or      rax, rdx
 * 000000014077D156: mov     rcx, rax
 * 000000014077D159: ror     rax, 3
 * 000000014077D15D: xor     rcx, rax
 * 000000014077D160: mov     rax, r11
 * 000000014077D163: mul     rcx
 * 000000014077D166: mov     rsi, rax
 * 000000014077D169: mov     [rbp+1C70h+var_16B0], rdx
 * 000000014077D170: xor     esi, edx
 * 000000014077D172: and     esi, 7FFh
 * 000000014077D178: rdtsc
 * 000000014077D17A: shl     rdx, 20h
 * 000000014077D17E: lea     ebx, [rsi+1]
 * 000000014077D181: or      rax, rdx
 * 000000014077D184: mov     rcx, rax
 * 000000014077D187: ror     rax, 3
 * 000000014077D18B: xor     rcx, rax
 * 000000014077D18E: mov     rax, r11
 * 000000014077D191: mul     rcx
 * 000000014077D194: mov     ecx, 200h
 * 000000014077D199: mov     [rbp+1C70h+var_16A8], rdx
 * 000000014077D1A0: xor     rax, rdx
 * 000000014077D1A3: xor     edx, edx
 * 000000014077D1A5: div     rbx
 * 000000014077D1A8: mov     r15, rdx
 * 000000014077D1AB: lea     edx, [rsi+58h]
 * 000000014077D1AE: call    qword ptr [r14+0E0h]
 * 000000014077D1B5: mov     r9, rax
 * 000000014077D1B8: xor     eax, eax
 * 000000014077D1BA: test    r9, r9
 * 000000014077D1BD: jz      loc_14077CAF4
 * 000000014077D1C3: mov     edi, r15d
 * 000000014077D1C6: mov     rbx, r9
 * 000000014077D1C9: mov     r10, 7010008004002001h
 * 000000014077D1D3: cmp     r15d, r12d
 * 000000014077D1D6: jb      short loc_14077D210
 * 000000014077D1D8: mov     r8d, r15d
 * 000000014077D1DB: shr     r8, 3
 * 000000014077D1DF: rdtsc
 * 000000014077D1E1: shl     rdx, 20h
 * 000000014077D1E5: add     edi, 0FFFFFFF8h
 * 000000014077D1E8: or      rax, rdx
 * 000000014077D1EB: mov     rcx, rax
 * 000000014077D1EE: ror     rax, 3
 * 000000014077D1F2: xor     rcx, rax
 * 000000014077D1F5: mov     rax, r10
 * 000000014077D1F8: mul     rcx
 * 000000014077D1FB: mov     [rbp+1C70h+var_16A0], rdx
 * 000000014077D202: xor     rdx, rax
 * 000000014077D205: mov     [rbx], rdx
 * 000000014077D208: add     rbx, r12
 * 000000014077D20B: sub     r8, r13
 * 000000014077D20E: jnz     short loc_14077D1DF
 * 000000014077D210: test    edi, edi
 * 000000014077D212: jz      short loc_14077D245
 * 000000014077D214: rdtsc
 * 000000014077D216: shl     rdx, 20h
 * 000000014077D21A: or      rax, rdx
 * 000000014077D21D: mov     rcx, rax
 * 000000014077D220: ror     rax, 3
 * 000000014077D224: xor     rcx, rax
 * 000000014077D227: mov     rax, r10
 * 000000014077D22A: mul     rcx
 * 000000014077D22D: mov     [rbp+1C70h+var_1698], rdx
 * 000000014077D234: xor     rdx, rax
 * 000000014077D237: mov     [rbx], dl
 * 000000014077D239: add     rbx, r13
 * 000000014077D23C: shr     rdx, 8
 * 000000014077D240: add     edi, 0FFFFFFFFh
 * 000000014077D243: jnz     short loc_14077D237
 * 000000014077D245: mov     r8d, r15d
 * 000000014077D248: sub     esi, r15d
 * 000000014077D24B: add     r8, r9
 * 000000014077D24E: lea     rbx, [r8+58h]
 * 000000014077D252: cmp     esi, r12d
 * 000000014077D255: jb      short loc_14077D28E
 * 000000014077D257: mov     edi, esi
 * 000000014077D259: shr     rdi, 3
 * 000000014077D25D: rdtsc
 * 000000014077D25F: shl     rdx, 20h
 * 000000014077D263: add     esi, 0FFFFFFF8h
 * 000000014077D266: or      rax, rdx
 * 000000014077D269: mov     rcx, rax
 * 000000014077D26C: ror     rax, 3
 * 000000014077D270: xor     rcx, rax
 * 000000014077D273: mov     rax, r10
 * 000000014077D276: mul     rcx
 * 000000014077D279: mov     [rbp+1C70h+var_1690], rdx
 * 000000014077D280: xor     rdx, rax
 * 000000014077D283: mov     [rbx], rdx
 * 000000014077D286: add     rbx, r12
 * 000000014077D289: sub     rdi, r13
 * 000000014077D28C: jnz     short loc_14077D25D
 * 000000014077D28E: xor     eax, eax
 * 000000014077D290: mov     rdi, 7010008004002001h
 * 000000014077D29A: test    esi, esi
 * 000000014077D29C: jz      short loc_14077D2D1
 * 000000014077D29E: rdtsc
 * 000000014077D2A0: shl     rdx, 20h
 * 000000014077D2A4: or      rax, rdx
 * 000000014077D2A7: mov     rcx, rax
 * 000000014077D2AA: ror     rax, 3
 * 000000014077D2AE: xor     rcx, rax
 * 000000014077D2B1: mov     rax, rdi
 * 000000014077D2B4: mul     rcx
 * 000000014077D2B7: mov     [rbp+1C70h+var_1688], rdx
 * 000000014077D2BE: xor     rdx, rax
 * 000000014077D2C1: mov     [rbx], dl
 * 000000014077D2C3: add     rbx, r13
 * 000000014077D2C6: shr     rdx, 8
 * 000000014077D2CA: add     esi, 0FFFFFFFFh
 * 000000014077D2CD: jnz     short loc_14077D2C1
 * 000000014077D2CF: xor     eax, eax
 * 000000014077D2D1: test    r8, r8
 * 000000014077D2D4: jz      loc_14077C9F7
 * 000000014077D2DA: mov     [r14+728h], r8
 * 000000014077D2E1: or      [r14+6D8h], r12d
 * 000000014077D2E8: rdtsc
 * 000000014077D2EA: shl     rdx, 20h
 * 000000014077D2EE: mov     r8, r14
 * 000000014077D2F1: or      rax, rdx
 * 000000014077D2F4: mov     rcx, rax
 * 000000014077D2F7: ror     rax, 3
 * 000000014077D2FB: xor     rcx, rax
 * 000000014077D2FE: mov     rax, rdi
 * 000000014077D301: mul     rcx
 * 000000014077D304: mov     [rbp+1C70h+var_1680], rdx
 * 000000014077D30B: xor     rdx, rax
 * 000000014077D30E: and     rdx, r13
 * 000000014077D311: mov     [r14+6E0h], rdx
 * 000000014077D318: lea     rdx, sub_14078DFA4
 * 000000014077D31F: mov     rax, gs:188h
 * 000000014077D328: mov     rcx, [rax+0B8h]
 * 000000014077D32F: call    PsEnumProcessThreads
 * 000000014077D334: cmp     qword ptr [r14+6E0h], 2
 * 000000014077D33C: jb      loc_14077C9F7
 * 000000014077D342: lea     rax, KiDispatchCallout
 * 000000014077D349: mov     [r14+730h], rax
 * 000000014077D350: lea     rax, xHalFreeMessageTarget
 * 000000014077D357: mov     [r14+738h], rax
 * 000000014077D35E: jmp     loc_14077D5A6
 * 000000014077D363: cmp     eax, 5
 * 000000014077D366: jnz     loc_14077D59C
 * 000000014077D36C: mov     r8d, [r14+5C8h]
 * 000000014077D373: rdtsc
 * 000000014077D375: shl     rdx, 20h
 * 000000014077D379: or      rax, rdx
 * 000000014077D37C: mov     rcx, rax
 * 000000014077D37F: ror     rax, 3
 * 000000014077D383: xor     rcx, rax
 * 000000014077D386: mov     rax, r11
 * 000000014077D389: mul     rcx
 * 000000014077D38C: mov     rdi, rax
 * 000000014077D38F: mov     [rbp+1C70h+var_1678], rdx
 * 000000014077D396: xor     edi, edx
 * 000000014077D398: and     edi, 7FFh
 * 000000014077D39E: rdtsc
 * 000000014077D3A0: shl     rdx, 20h
 * 000000014077D3A4: or      rax, rdx
 * 000000014077D3A7: mov     rcx, rax
 * 000000014077D3AA: ror     rax, 3
 * 000000014077D3AE: xor     rcx, rax
 * 000000014077D3B1: mov     rax, r11
 * 000000014077D3B4: mul     rcx
 * 000000014077D3B7: lea     ecx, [rdi+1]
 * 000000014077D3BA: mov     [rbp+1C70h+var_1670], rdx
 * 000000014077D3C1: xor     rax, rdx
 * 000000014077D3C4: xor     edx, edx
 * 000000014077D3C6: div     rcx
 * 000000014077D3C9: mov     ecx, 200h
 * 000000014077D3CE: mov     rsi, rdx
 * 000000014077D3D1: lea     edx, [rdi+50h]
 * 000000014077D3D4: call    qword ptr [r14+0E0h]
 * 000000014077D3DB: mov     r10, rax
 * 000000014077D3DE: xor     eax, eax
 * 000000014077D3E0: test    r10, r10
 * 000000014077D3E3: jnz     short loc_14077D3F4
 * 000000014077D3E5: add     [r14+758h], r13d
 * 000000014077D3EC: mov     r9d, eax
 * 000000014077D3EF: jmp     loc_14077D4F8
 * 000000014077D3F4: mov     r8d, esi
 * 000000014077D3F7: mov     rbx, r10
 * 000000014077D3FA: mov     r11, 7010008004002001h
 * 000000014077D404: cmp     esi, r12d
 * 000000014077D407: jb      short loc_14077D441
 * 000000014077D409: mov     r9d, esi
 * 000000014077D40C: shr     r9, 3
 * 000000014077D410: rdtsc
 * 000000014077D412: shl     rdx, 20h
 * 000000014077D416: add     r8d, r15d
 * 000000014077D419: or      rax, rdx
 * 000000014077D41C: mov     rcx, rax
 * 000000014077D41F: ror     rax, 3
 * 000000014077D423: xor     rcx, rax
 * 000000014077D426: mov     rax, r11
 * 000000014077D429: mul     rcx
 * 000000014077D42C: mov     [rbp+1C70h+var_1668], rdx
 * 000000014077D433: xor     rdx, rax
 * 000000014077D436: mov     [rbx], rdx
 * 000000014077D439: add     rbx, r12
 * 000000014077D43C: sub     r9, r13
 * 000000014077D43F: jnz     short loc_14077D410
 * 000000014077D441: test    r8d, r8d
 * 000000014077D444: jz      short loc_14077D478
 * 000000014077D446: rdtsc
 * 000000014077D448: shl     rdx, 20h
 * 000000014077D44C: or      rax, rdx
 * 000000014077D44F: mov     rcx, rax
 * 000000014077D452: ror     rax, 3
 * 000000014077D456: xor     rcx, rax
 * 000000014077D459: mov     rax, r11
 * 000000014077D45C: mul     rcx
 * 000000014077D45F: mov     [rbp+1C70h+var_1660], rdx
 * 000000014077D466: xor     rdx, rax
 * 000000014077D469: mov     [rbx], dl
 * 000000014077D46B: add     rbx, r13
 * 000000014077D46E: shr     rdx, 8
 * 000000014077D472: add     r8d, 0FFFFFFFFh
 * 000000014077D476: jnz     short loc_14077D469
 * 000000014077D478: mov     r9d, esi
 * 000000014077D47B: sub     edi, esi
 * 000000014077D47D: add     r9, r10
 * 000000014077D480: lea     rbx, [r9+50h]
 * 000000014077D484: cmp     edi, r12d
 * 000000014077D487: jb      short loc_14077D4C1
 * 000000014077D489: mov     r8d, edi
 * 000000014077D48C: shr     r8, 3
 * 000000014077D490: rdtsc
 * 000000014077D492: shl     rdx, 20h
 * 000000014077D496: add     edi, r15d
 * 000000014077D499: or      rax, rdx
 * 000000014077D49C: mov     rcx, rax
 * 000000014077D49F: ror     rax, 3
 * 000000014077D4A3: xor     rcx, rax
 * 000000014077D4A6: mov     rax, r11
 * 000000014077D4A9: mul     rcx
 * 000000014077D4AC: mov     [rbp+1C70h+var_1658], rdx
 * 000000014077D4B3: xor     rdx, rax
 * 000000014077D4B6: mov     [rbx], rdx
 * 000000014077D4B9: add     rbx, r12
 * 000000014077D4BC: sub     r8, r13
 * 000000014077D4BF: jnz     short loc_14077D490
 * 000000014077D4C1: test    edi, edi
 * 000000014077D4C3: jz      short loc_14077D4F6
 * 000000014077D4C5: rdtsc
 * 000000014077D4C7: shl     rdx, 20h
 * 000000014077D4CB: or      rax, rdx
 * 000000014077D4CE: mov     rcx, rax
 * 000000014077D4D1: ror     rax, 3
 * 000000014077D4D5: xor     rcx, rax
 * 000000014077D4D8: mov     rax, r11
 * 000000014077D4DB: mul     rcx
 * 000000014077D4DE: mov     [rbp+1C70h+var_1650], rdx
 * 000000014077D4E5: xor     rdx, rax
 * 000000014077D4E8: mov     [rbx], dl
 * 000000014077D4EA: add     rbx, r13
 * 000000014077D4ED: shr     rdx, 8
 * 000000014077D4F1: add     edi, 0FFFFFFFFh
 * 000000014077D4F4: jnz     short loc_14077D4E8
 * 000000014077D4F6: xor     eax, eax
 * 000000014077D4F8: mov     [r14+6E0h], r9
 * 000000014077D4FF: test    r9, r9
 * 000000014077D502: jz      loc_14077C9F7
 * 000000014077D508: mov     rbx, [rbp+1C70h+arg_18]
 * 000000014077D50F: lea     rcx, KiHardwareTriggerLock; SpinLock
 * 000000014077D516: mov     [r9], eax
 * 000000014077D519: mov     rdi, [r14+6E0h]
 * 000000014077D520: mov     rbx, [rbx+18h]
 * 000000014077D524: movups  xmm0, xmmword ptr [rbx]
 * 000000014077D527: movups  xmmword ptr [rdi+8], xmm0
 * 000000014077D52B: movups  xmm1, xmmword ptr [rbx+10h]
 * 000000014077D52F: movups  xmmword ptr [rdi+18h], xmm1
 * 000000014077D533: movups  xmm0, xmmword ptr [rbx+20h]
 * 000000014077D537: movups  xmmword ptr [rdi+28h], xmm0
 * 000000014077D53B: movups  xmm1, xmmword ptr [rbx+30h]
 * 000000014077D53F: movups  xmmword ptr [rdi+38h], xmm1
 * 000000014077D543: call    KeAcquireSpinLockRaiseToDpc
 * 000000014077D548: mov     dl, al; NewIrql
 * 000000014077D54A: lea     rcx, KiHardwareTriggerLock; SpinLock
 * 000000014077D551: lea     rax, sub_140158660
 * 000000014077D558: xchg    rax, [rbx+18h]
 * 000000014077D55C: mov     [rbx+20h], rdi
 * 000000014077D560: call    KeReleaseSpinLock
 * 000000014077D565: mov     rax, [r14+6E0h]
 * 000000014077D56C: movups  xmm0, xmmword ptr [rax+8]
 * 000000014077D570: movups  xmmword ptr [r14+6E8h], xmm0
 * 000000014077D578: movups  xmm1, xmmword ptr [rax+18h]
 * 000000014077D57C: movups  xmmword ptr [r14+6F8h], xmm1
 * 000000014077D584: movups  xmm0, xmmword ptr [rax+28h]
 * 000000014077D588: movups  xmmword ptr [r14+708h], xmm0
 * 000000014077D590: movups  xmm1, xmmword ptr [rax+38h]
 * 000000014077D594: movups  xmmword ptr [r14+718h], xmm1
 * 000000014077D59C: mov     rdi, 7010008004002001h
 * 000000014077D5A6: rdtsc
 * 000000014077D5A8: shl     rdx, 20h
 * 000000014077D5AC: mov     rbx, 0CCCCCCCCCCCCCCCDh
 * 000000014077D5B6: or      rax, rdx
 * 000000014077D5B9: mov     rcx, rax
 * 000000014077D5BC: ror     rax, 3
 * 000000014077D5C0: xor     rcx, rax
 * 000000014077D5C3: mov     rax, rdi
 * 000000014077D5C6: mul     rcx
 * 000000014077D5C9: mov     rcx, rax
 * 000000014077D5CC: mov     [rbp+1C70h+var_1648], rdx
 * 000000014077D5D3: xor     rcx, rdx
 * 000000014077D5D6: mov     rax, rbx
 * 000000014077D5D9: mul     rcx
 * 000000014077D5DC: shr     rdx, 3
 * 000000014077D5E0: lea     rax, [rdx+rdx*4]
 * 000000014077D5E4: add     rax, rax
 * 000000014077D5E7: sub     rcx, rax
 * 000000014077D5EA: cmp     rcx, r13
 * 000000014077D5ED: jnb     short loc_14077D5F7
 * 000000014077D5EF: or      dword ptr [r14+6D8h], 2
 * 000000014077D5F7: cli
 * 000000014077D5F8: xor     eax, eax
 * 000000014077D5FA: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077D600: jnz     short loc_14077D604
 * 000000014077D602: jmp     short loc_14077D602
 * 000000014077D604: sti
 * 000000014077D605: rdtsc
 * 000000014077D607: shl     rdx, 20h
 * 000000014077D60B: or      rax, rdx
 * 000000014077D60E: mov     rcx, rax
 * 000000014077D611: ror     rax, 3
 * 000000014077D615: xor     rcx, rax
 * 000000014077D618: mov     rax, rdi
 * 000000014077D61B: mul     rcx
 * 000000014077D61E: mov     rcx, rdx
 * 000000014077D621: mov     [rbp+1C70h+var_1640], rdx
 * 000000014077D628: xor     rcx, rax
 * 000000014077D62B: mov     rax, rbx
 * 000000014077D62E: mul     rcx
 * 000000014077D631: shr     rdx, 3
 * 000000014077D635: lea     rax, [rdx+rdx*4]
 * 000000014077D639: add     rax, rax
 * 000000014077D63C: sub     rcx, rax
 * 000000014077D63F: cmp     rcx, 7
 * 000000014077D643: jnb     short loc_14077D65D
 * 000000014077D645: mov     eax, [r14+6D8h]
 * 000000014077D64C: bt      eax, 1Eh
 * 000000014077D650: jb      short loc_14077D65D
 * 000000014077D652: bts     eax, 7
 * 000000014077D656: mov     [r14+6D8h], eax
 * 000000014077D65D: cli
 * 000000014077D65E: xor     eax, eax
 * 000000014077D660: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077D666: jnz     short loc_14077D66A
 * 000000014077D668: jmp     short loc_14077D668
 * 000000014077D66A: sti
 * 000000014077D66B: rdtsc
 * 000000014077D66D: shl     rdx, 20h
 * 000000014077D671: mov     rsi, 0FFFFFFFFB8797400h
 * 000000014077D678: or      rax, rdx
 * 000000014077D67B: mov     r15, 0ABCC77118461CEFDh
 * 000000014077D685: mov     rcx, rax
 * 000000014077D688: ror     rax, 3
 * 000000014077D68C: xor     rcx, rax
 * 000000014077D68F: mov     rax, rdi
 * 000000014077D692: mul     rcx
 * 000000014077D695: mov     rcx, rdx
 * 000000014077D698: mov     [rbp+1C70h+var_1638], rdx
 * 000000014077D69F: xor     rcx, rax
 * 000000014077D6A2: mov     rax, rbx
 * 000000014077D6A5: mul     rcx
 * 000000014077D6A8: shr     rdx, 3
 * 000000014077D6AC: lea     rax, [rdx+rdx*4]
 * 000000014077D6B0: add     rax, rax
 * 000000014077D6B3: sub     rcx, rax
 * 000000014077D6B6: cmp     rcx, 7
 * 000000014077D6BA: jnb     loc_14077D929
 * 000000014077D6C0: rdtsc
 * 000000014077D6C2: shl     rdx, 20h
 * 000000014077D6C6: or      rax, rdx
 * 000000014077D6C9: mov     rcx, rax
 * 000000014077D6CC: ror     rax, 3
 * 000000014077D6D0: xor     rcx, rax
 * 000000014077D6D3: mov     rax, rdi
 * 000000014077D6D6: mul     rcx
 * 000000014077D6D9: mov     rcx, rdx
 * 000000014077D6DC: mov     [rbp+1C70h+var_1630], rdx
 * 000000014077D6E3: xor     rcx, rax
 * 000000014077D6E6: mov     rax, rbx
 * 000000014077D6E9: mul     rcx
 * 000000014077D6EC: shr     rdx, 3
 * 000000014077D6F0: lea     rax, [rdx+rdx*4]
 * 000000014077D6F4: add     rax, rax
 * 000000014077D6F7: sub     rcx, rax
 * 000000014077D6FA: cmp     rcx, 7
 * 000000014077D6FE: jnb     loc_14077D8B7
 * 000000014077D704: mov     r8d, [r14+5C8h]
 * 000000014077D70B: rdtsc
 * 000000014077D70D: shl     rdx, 20h
 * 000000014077D711: or      rax, rdx
 * 000000014077D714: mov     rcx, rax
 * 000000014077D717: ror     rax, 3
 * 000000014077D71B: xor     rcx, rax
 * 000000014077D71E: mov     rax, rdi
 * 000000014077D721: mul     rcx
 * 000000014077D724: mov     r15, rax
 * 000000014077D727: mov     [rbp+1C70h+var_1628], rdx
 * 000000014077D72E: xor     r15d, edx
 * 000000014077D731: and     r15d, 7FFh
 * 000000014077D738: rdtsc
 * 000000014077D73A: shl     rdx, 20h
 * 000000014077D73E: lea     ebx, [r15+1]
 * 000000014077D742: or      rax, rdx
 * 000000014077D745: mov     rcx, rax
 * 000000014077D748: ror     rax, 3
 * 000000014077D74C: xor     rcx, rax
 * 000000014077D74F: mov     rax, rdi
 * 000000014077D752: mul     rcx
 * 000000014077D755: mov     ecx, 200h
 * 000000014077D75A: mov     [rbp+1C70h+var_1620], rdx
 * 000000014077D761: xor     rax, rdx
 * 000000014077D764: xor     edx, edx
 * 000000014077D766: div     rbx
 * 000000014077D769: mov     r12, rdx
 * 000000014077D76C: lea     edx, [r15+18h]
 * 000000014077D770: call    qword ptr [r14+0E0h]
 * 000000014077D777: mov     r9, rax
 * 000000014077D77A: xor     eax, eax
 * 000000014077D77C: test    r9, r9
 * 000000014077D77F: jz      loc_14077CAF4
 * 000000014077D785: mov     edi, r12d
 * 000000014077D788: mov     rbx, r9
 * 000000014077D78B: mov     r10, 7010008004002001h
 * 000000014077D795: cmp     r12d, 8
 * 000000014077D799: jb      short loc_14077D7D4
 * 000000014077D79B: mov     r8d, r12d
 * 000000014077D79E: shr     r8, 3
 * 000000014077D7A2: rdtsc
 * 000000014077D7A4: shl     rdx, 20h
 * 000000014077D7A8: add     edi, 0FFFFFFF8h
 * 000000014077D7AB: or      rax, rdx
 * 000000014077D7AE: mov     rcx, rax
 * 000000014077D7B1: ror     rax, 3
 * 000000014077D7B5: xor     rcx, rax
 * 000000014077D7B8: mov     rax, r10
 * 000000014077D7BB: mul     rcx
 * 000000014077D7BE: mov     [rbp+1C70h+var_1618], rdx
 * 000000014077D7C5: xor     rdx, rax
 * 000000014077D7C8: mov     [rbx], rdx
 * 000000014077D7CB: add     rbx, 8
 * 000000014077D7CF: sub     r8, r13
 * 000000014077D7D2: jnz     short loc_14077D7A2
 * 000000014077D7D4: test    edi, edi
 * 000000014077D7D6: jz      short loc_14077D809
 * 000000014077D7D8: rdtsc
 * 000000014077D7DA: shl     rdx, 20h
 * 000000014077D7DE: or      rax, rdx
 * 000000014077D7E1: mov     rcx, rax
 * 000000014077D7E4: ror     rax, 3
 * 000000014077D7E8: xor     rcx, rax
 * 000000014077D7EB: mov     rax, r10
 * 000000014077D7EE: mul     rcx
 * 000000014077D7F1: mov     [rbp+1C70h+var_1610], rdx
 * 000000014077D7F8: xor     rdx, rax
 * 000000014077D7FB: mov     [rbx], dl
 * 000000014077D7FD: add     rbx, r13
 * 000000014077D800: shr     rdx, 8
 * 000000014077D804: add     edi, 0FFFFFFFFh
 * 000000014077D807: jnz     short loc_14077D7FB
 * 000000014077D809: sub     r15d, r12d
 * 000000014077D80C: mov     r12d, r12d
 * 000000014077D80F: add     r12, r9
 * 000000014077D812: lea     rbx, [r12+18h]
 * 000000014077D817: cmp     r15d, 8
 * 000000014077D81B: jb      short loc_14077D857
 * 000000014077D81D: mov     edi, r15d
 * 000000014077D820: shr     rdi, 3
 * 000000014077D824: rdtsc
 * 000000014077D826: shl     rdx, 20h
 * 000000014077D82A: add     r15d, 0FFFFFFF8h
 * 000000014077D82E: or      rax, rdx
 * 000000014077D831: mov     rcx, rax
 * 000000014077D834: ror     rax, 3
 * 000000014077D838: xor     rcx, rax
 * 000000014077D83B: mov     rax, r10
 * 000000014077D83E: mul     rcx
 * 000000014077D841: mov     [rbp+1C70h+var_1608], rdx
 * 000000014077D848: xor     rdx, rax
 * 000000014077D84B: mov     [rbx], rdx
 * 000000014077D84E: add     rbx, 8
 * 000000014077D852: sub     rdi, r13
 * 000000014077D855: jnz     short loc_14077D824
 * 000000014077D857: xor     eax, eax
 * 000000014077D859: test    r15d, r15d
 * 000000014077D85C: jz      short loc_14077D892
 * 000000014077D85E: rdtsc
 * 000000014077D860: shl     rdx, 20h
 * 000000014077D864: or      rax, rdx
 * 000000014077D867: mov     rcx, rax
 * 000000014077D86A: ror     rax, 3
 * 000000014077D86E: xor     rcx, rax
 * 000000014077D871: mov     rax, r10
 * 000000014077D874: mul     rcx
 * 000000014077D877: mov     [rbp+1C70h+var_1600], rdx
 * 000000014077D87E: xor     rdx, rax
 * 000000014077D881: mov     [rbx], dl
 * 000000014077D883: add     rbx, r13
 * 000000014077D886: shr     rdx, 8
 * 000000014077D88A: add     r15d, 0FFFFFFFFh
 * 000000014077D88E: jnz     short loc_14077D881
 * 000000014077D890: xor     eax, eax
 * 000000014077D892: test    r12, r12
 * 000000014077D895: jz      loc_14077C9F7
 * 000000014077D89B: xor     r8d, r8d; State
 * 000000014077D89E: xor     edx, edx; Type
 * 000000014077D8A0: mov     rcx, r12; Event
 * 000000014077D8A3: call    KeInitializeEvent
 * 000000014077D8A8: mov     [r14+740h], r12
 * 000000014077D8AF: mov     r12d, 8
 * 000000014077D8B5: jmp     short loc_14077D929
 * 000000014077D8B7: mov     r8d, r12d
 * 000000014077D8BA: xor     edx, edx
 * 000000014077D8BC: xor     ecx, ecx
 * 000000014077D8BE: call    ExAllocateTimer
 * 000000014077D8C3: mov     rbx, rax
 * 000000014077D8C6: xor     eax, eax
 * 000000014077D8C8: test    rbx, rbx
 * 000000014077D8CB: jz      loc_14077C9F7
 * 000000014077D8D1: mov     [r14+740h], rbx
 * 000000014077D8D8: rdtsc
 * 000000014077D8DA: shl     rdx, 20h
 * 000000014077D8DE: xor     r9d, r9d
 * 000000014077D8E1: or      rax, rdx
 * 000000014077D8E4: mov     rcx, rax
 * 000000014077D8E7: ror     rax, 3
 * 000000014077D8EB: xor     rcx, rax
 * 000000014077D8EE: mov     rax, rdi
 * 000000014077D8F1: mul     rcx
 * 000000014077D8F4: mov     rcx, rdx
 * 000000014077D8F7: mov     [rbp+1C70h+var_15F8], rdx
 * 000000014077D8FE: xor     rcx, rax
 * 000000014077D901: mov     rax, r15
 * 000000014077D904: mul     rcx
 * 000000014077D907: shr     rdx, 1Ah
 * 000000014077D90B: imul    rax, rdx, 5F5E100h
 * 000000014077D912: mov     rdx, rsi
 * 000000014077D915: sub     rcx, rax
 * 000000014077D918: sub     rdx, rcx
 * 000000014077D91B: mov     rcx, rbx; BugCheckParameter1
 * 000000014077D91E: mov     r8, rdx
 * 000000014077D921: neg     r8
 * 000000014077D924: call    ExSetTimer
 * 000000014077D929: mov     ecx, [rbp+1C70h+var_1C98]
 * 000000014077D92C: mov     r8d, dword ptr [rbp+1C70h+var_1C18]; Size
 * 000000014077D930: add     rcx, r14; void *
 * 000000014077D933: mov     rdx, [rsp+1D70h+Src]; Src
 * 000000014077D938: call    memmove
 * 000000014077D93D: cli
 * 000000014077D93E: xor     eax, eax
 * 000000014077D940: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077D946: jnz     short loc_14077D94A
 * 000000014077D948: jmp     short loc_14077D948
 * 000000014077D94A: sti
 * 000000014077D94B: lea     rbx, cs:140000000h
 * 000000014077D952: mov     rcx, rbx; BaseAddress
 * 000000014077D955: mov     [r14+638h], rbx
 * 000000014077D95C: call    RtlImageNtHeader
 * 000000014077D961: mov     [r14+648h], rax
 * 000000014077D968: mov     ecx, [rax+50h]
 * 000000014077D96B: add     rcx, rbx
 * 000000014077D96E: mov     [r14+640h], rcx
 * 000000014077D975: mov     eax, cs:dword_1407604B0
 * 000000014077D97B: mov     [r14+634h], eax
 * 000000014077D982: mov     r9, cs:qword_1407604B8; BugCheckParameter3
 * 000000014077D989: cmp     r9d, r12d
 * 000000014077D98C: jnz     loc_14078D585
 * 000000014077D992: mov     eax, 0CF48h
 * 000000014077D997: mov     [r14+628h], ax
 * 000000014077D99F: mov     rax, gs:18h
 * 000000014077D9A8: mov     rcx, [rax+38h]
 * 000000014077D9AC: movups  xmm0, xmmword ptr [rcx+10h]
 * 000000014077D9B0: movdqu  xmmword ptr [r14+5F8h], xmm0
 * 000000014077D9B9: movups  xmm1, xmmword ptr [rcx+20h]
 * 000000014077D9BD: movdqu  xmmword ptr [r14+608h], xmm1
 * 000000014077D9C6: movups  xmm0, xmmword ptr [rcx+120h]
 * 000000014077D9CD: movdqu  xmmword ptr [r14+618h], xmm0
 * 000000014077D9D6: call    KeKvaShadowingActive
 * 000000014077D9DB: test    eax, eax
 * 000000014077D9DD: jz      short loc_14077D9E6
 * 000000014077D9DF: or      [r14+62Ch], r13d
 * 000000014077D9E6: test    dword ptr [r14+6D8h], 10000000h
 * 000000014077D9F1: jnz     short loc_14077DA03
 * 000000014077D9F3: mov     ecx, [r14+5A4h]
 * 000000014077D9FA: mov     eax, ecx
 * 000000014077D9FC: neg     eax
 * 000000014077D9FE: mov     [rcx+r14+0Bh], eax
 * 000000014077DA03: mov     eax, [r14+6D8h]
 * 000000014077DA0A: mov     r10d, 80000000h
 * 000000014077DA10: test    r10d, eax
 * 000000014077DA13: jz      short loc_14077DA20
 * 000000014077DA15: bts     eax, 1Bh
 * 000000014077DA19: mov     [r14+6D8h], eax
 * 000000014077DA20: mov     eax, cs:KeNumberProcessors_0
 * 000000014077DA26: cmp     eax, r13d
 * 000000014077DA29: jnz     short loc_14077DA33
 * 000000014077DA2B: or      dword ptr [r14+6D8h], 40h
 * 000000014077DA33: mov     eax, [r14+6ACh]
 * 000000014077DA3A: mov     ecx, 0BC2A27DBh
 * 000000014077DA3F: xor     rax, rcx
 * 000000014077DA42: mov     rcx, 88000000000h
 * 000000014077DA4C: sub     rax, rcx
 * 000000014077DA4F: mov     al, [rax]
 * 000000014077DA51: test    al, 2
 * 000000014077DA53: jz      short loc_14077DA61
 * 000000014077DA55: mov     eax, 1000h
 * 000000014077DA5A: add     [r14+59Ch], eax
 * 000000014077DA61: cmp     dword ptr [r14+5F0h], 7
 * 000000014077DA69: mov     [rbp+1C70h+var_15F0], r14
 * 000000014077DA70: jz      loc_14077E550
 * 000000014077DA76: lea     rax, ExQueueWorkItem
 * 000000014077DA7D: xorps   xmm0, xmm0
 * 000000014077DA80: mov     [rbp+1C70h+PcValue], rax
 * 000000014077DA87: xorps   xmm1, xmm1
 * 000000014077DA8A: lea     rax, ExpWorkerThread
 * 000000014077DA91: movdqa  [rbp+1C70h+var_8F0], xmm0
 * 000000014077DA99: mov     [rbp+1C70h+var_938], rax
 * 000000014077DAA0: lea     rax, KiDebugTrapOrFault
 * 000000014077DAA7: mov     [rbp+1C70h+var_930], rax
 * 000000014077DAAE: lea     rax, KiExceptionDispatch
 * 000000014077DAB5: mov     [rbp+1C70h+var_928], rax
 * 000000014077DABC: lea     rax, KiDispatchException
 * 000000014077DAC3: mov     [rbp+1C70h+var_920], rax
 * 000000014077DACA: xor     eax, eax
 * 000000014077DACC: mov     [rbp+1C70h+var_918], rax
 * 000000014077DAD3: mov     [rbp+1C70h+var_910], rax
 * 000000014077DADA: mov     [rbp+1C70h+var_908], rax
 * 000000014077DAE1: mov     [rbp+1C70h+var_900], rax
 * 000000014077DAE8: mov     [rbp+1C70h+var_8F8], rax
 * 000000014077DAEF: lea     rax, RtlDispatchException
 * 000000014077DAF6: mov     [rbp+1C70h+var_8A0], rax
 * 000000014077DAFD: lea     rax, KeContextToKframes
 * 000000014077DB04: mov     [rbp+1C70h+var_898], rax
 * 000000014077DB0B: xor     eax, eax
 * 000000014077DB0D: mov     [rbp+1C70h+var_890], rax
 * 000000014077DB14: mov     [rbp+1C70h+var_888], rax
 * 000000014077DB1B: lea     rax, sub_140158468
 * 000000014077DB22: mov     [rbp+1C70h+var_880], rax
 * 000000014077DB29: lea     rax, KeAcquireSpinLockRaiseToDpc
 * 000000014077DB30: mov     [rbp+1C70h+var_878], rax
 * 000000014077DB37: lea     rax, KeReleaseSpinLock
 * 000000014077DB3E: mov     [rbp+1C70h+var_870], rax
 * 000000014077DB45: lea     rax, KeProcessorGroupAffinity
 * 000000014077DB4C: mov     [rbp+1C70h+var_868], rax
 * 000000014077DB53: lea     rax, KeSetSystemGroupAffinityThread
 * 000000014077DB5A: mov     [rbp+1C70h+var_860], rax
 * 000000014077DB61: lea     rax, KeRevertToUserGroupAffinityThread
 * 000000014077DB68: mov     [rbp+1C70h+var_858], rax
 * 000000014077DB6F: lea     rax, MmGetSessionIdEx
 * 000000014077DB76: mov     [rbp+1C70h+var_850], rax
 * 000000014077DB7D: lea     rax, sub_140231EA8
 * 000000014077DB84: mov     [rbp+1C70h+var_848], rax
 * 000000014077DB8B: lea     rax, sub_1401578A4
 * 000000014077DB92: mov     [rbp+1C70h+var_840], rax
 * 000000014077DB99: lea     rax, memmove
 * 000000014077DBA0: mov     [rbp+1C70h+var_838], rax
 * 000000014077DBA7: lea     rax, qword_140158708
 * 000000014077DBAE: mov     [rbp+1C70h+var_830], rax
 * 000000014077DBB5: lea     rax, KiCommitThreadWait
 * 000000014077DBBC: mov     [rbp+1C70h+var_828], rax
 * 000000014077DBC3: lea     rax, KeDelayExecutionThread
 * 000000014077DBCA: mov     [rbp+1C70h+var_820], rax
 * 000000014077DBD1: lea     rax, KeWaitForSingleObject
 * 000000014077DBD8: mov     [rbp+1C70h+var_818], rax
 * 000000014077DBDF: lea     rax, KeRemovePriQueue
 * 000000014077DBE6: mov     [rbp+1C70h+var_810], rax
 * 000000014077DBED: lea     rax, KiAttemptFastRemovePriQueue
 * 000000014077DBF4: mov     [rbp+1C70h+var_808], rax
 * 000000014077DBFB: lea     rax, KiExitThreadWait
 * 000000014077DC02: mov     [rbp+1C70h+var_800], rax
 * 000000014077DC09: lea     rax, EtwTraceThreadWorkItem
 * 000000014077DC10: mov     [rbp+1C70h+var_7F8], rax
 * 000000014077DC17: lea     rax, ExIsSafeWorkItem
 * 000000014077DC1E: mov     [rbp+1C70h+var_7F0], rax
 * 000000014077DC25: xor     eax, eax
 * 000000014077DC27: mov     dword ptr [rbp+1C70h+var_1CB0], eax
 * 000000014077DC2A: mov     r15d, eax
 * 000000014077DC2D: mov     [rbp+1C70h+var_1CB4], eax
 * 000000014077DC30: mov     r12d, eax
 * 000000014077DC33: mov     [rsp+1D70h+var_1D20], rax
 * 000000014077DC38: movdqa  [rbp+1C70h+var_8E0], xmm1
 * 000000014077DC40: movdqa  [rbp+1C70h+var_8D0], xmm0
 * 000000014077DC48: movdqa  [rbp+1C70h+var_8C0], xmm1
 * 000000014077DC50: movdqa  [rbp+1C70h+var_8B0], xmm0
 * 000000014077DC58: mov     r12, [rbp+r12*8+1C70h+PcValue]
 * 000000014077DC60: mov     [rbp+1C70h+var_1CE8], r12
 * 000000014077DC64: test    r12, r12
 * 000000014077DC67: jz      loc_14077E395
 * 000000014077DC6D: lea     rdx, [rbp+1C70h+BaseAddress]; BaseOfImage
 * 000000014077DC74: mov     rcx, r12; PcValue
 * 000000014077DC77: call    RtlPcToFileHeader
 * 000000014077DC7C: mov     rcx, [rbp+1C70h+BaseAddress]; BaseAddress
 * 000000014077DC83: call    RtlImageNtHeader
 * 000000014077DC88: mov     rdx, [rbp+1C70h+BaseAddress]
 * 000000014077DC8F: mov     r8d, r12d
 * 000000014077DC92: sub     r8d, edx
 * 000000014077DC95: mov     rcx, rax
 * 000000014077DC98: call    qword ptr [r14+1F8h]
 * 000000014077DC9F: mov     rcx, rax
 * 000000014077DCA2: xor     eax, eax
 * 000000014077DCA4: test    rcx, rcx
 * 000000014077DCA7: jz      short loc_14077DCE8
 * 000000014077DCA9: cmp     dword ptr [rcx], 54494E49h
 * 000000014077DCAF: jnz     short loc_14077DCCC
 * 000000014077DCB1: cmp     dword ptr [rcx+4], 4742444Bh
 * 000000014077DCB8: jnz     short loc_14077DCCC
 * 000000014077DCBA: test    dword ptr [r14+6D8h], 10000000h
 * 000000014077DCC5: jnz     short loc_14077DCE8
 * 000000014077DCC7: jmp     loc_14078D5AA
 * 000000014077DCCC: test    dword ptr [rcx+24h], 2000000h
 * 000000014077DCD3: jnz     loc_14078D5AA
 * 000000014077DCD9: call    MmImageSectionPagable
 * 000000014077DCDE: test    eax, eax
 * 000000014077DCE0: jnz     loc_14078D5AA
 * 000000014077DCE6: xor     eax, eax
 * 000000014077DCE8: lea     r8, [rbp+1C70h+var_1AD8]
 * 000000014077DCEF: mov     dword ptr [rbp+1C70h+var_1CA8], eax
 * 000000014077DCF2: lea     rdx, [rbp+1C70h+var_AD8]
 * 000000014077DCF9: mov     rcx, r12
 * 000000014077DCFC: call    RtlLookupFunctionTable
 * 000000014077DD01: mov     rbx, rax
 * 000000014077DD04: mov     [rbp+1C70h+var_AE8], rax
 * 000000014077DD0B: xor     eax, eax
 * 000000014077DD0D: test    rbx, rbx
 * 000000014077DD10: jz      loc_14077DE37
 * 000000014077DD16: mov     [rbp+1C70h+var_AC0], rax
 * 000000014077DD1D: mov     rax, [rbp+1C70h+var_AD8]
 * 000000014077DD24: cmp     [rbp+1C70h+var_E88], rax
 * 000000014077DD2B: jnz     loc_14077DDDB
 * 000000014077DD31: mov     r15, [rbp+1C70h+var_E80]
 * 000000014077DD38: lea     rdx, [rbp+1C70h+var_AD8]; ImageBase
 * 000000014077DD3F: xor     eax, eax
 * 000000014077DD41: mov     [rbp+1C70h+var_AC0], r15
 * 000000014077DD48: mov     [rbp+1C70h+var_AB8], rax
 * 000000014077DD4F: xor     r8d, r8d; HistoryTable
 * 000000014077DD52: mov     eax, [rbp+1C70h+var_E78]
 * 000000014077DD58: mov     rcx, r12; ControlPc
 * 000000014077DD5B: mov     [rbp+1C70h+var_AB0], eax
 * 000000014077DD61: xor     eax, eax
 * 000000014077DD63: mov     [rbp+1C70h+var_AAC], eax
 * 000000014077DD69: call    RtlLookupFunctionEntry
 * 000000014077DD6E: mov     rdi, rax
 * 000000014077DD71: mov     [rbp+1C70h+var_AE0], rax
 * 000000014077DD78: xor     eax, eax
 * 000000014077DD7A: test    rdi, rdi
 * 000000014077DD7D: jz      short loc_14077DDD2
 * 000000014077DD7F: mov     edx, [r15]
 * 000000014077DD82: mov     r9d, edi
 * 000000014077DD85: sub     r9d, dword ptr [rbp+1C70h+var_AD8]
 * 000000014077DD8C: mov     ebx, eax
 * 000000014077DD8E: sub     edx, r13d
 * 000000014077DD91: js      short loc_14077DDD2
 * 000000014077DD93: lea     ecx, [rdx+rbx]
 * 000000014077DD96: mov     r8d, r9d
 * 000000014077DD99: sar     ecx, 1
 * 000000014077DD9B: sub     r8d, [r15+rcx*8+8]
 * 000000014077DDA0: jns     short loc_14077DDAB
 * 000000014077DDA2: test    ecx, ecx
 * 000000014077DDA4: jz      short loc_14077DDD2
 * 000000014077DDA6: lea     edx, [rcx-1]
 * 000000014077DDA9: jmp     short loc_14077DDB3
 * 000000014077DDAB: test    r8d, r8d
 * 000000014077DDAE: jle     short loc_14077DDB7
 * 000000014077DDB0: lea     ebx, [rcx+1]
 * 000000014077DDB3: cmp     edx, ebx
 * 000000014077DDB5: jge     short loc_14077DD93
 * 000000014077DDB7: cmp     edx, ebx
 * 000000014077DDB9: mov     rbx, [rbp+1C70h+var_AE8]
 * 000000014077DDC0: jl      short loc_14077DDE2
 * 000000014077DDC2: inc     rcx
 * 000000014077DDC5: lea     rcx, [r15+rcx*8]
 * 000000014077DDC9: mov     [rbp+1C70h+var_AB8], rcx
 * 000000014077DDD0: jmp     short loc_14077DDE2
 * 000000014077DDD2: mov     rbx, [rbp+1C70h+var_AE8]
 * 000000014077DDD9: jmp     short loc_14077DDE2
 * 000000014077DDDB: mov     rdi, [rbp+1C70h+var_AE0]
 * 000000014077DDE2: mov     ecx, [rbp+1C70h+var_1AD8]
 * 000000014077DDE8: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014077DDF2: mul     rcx
 * 000000014077DDF5: mov     [rbp+1C70h+var_AF0], r12
 * 000000014077DDFC: shr     rdx, 3
 * 000000014077DE00: mov     eax, edx
 * 000000014077DE02: mov     [rbp+1C70h+var_1AD8], edx
 * 000000014077DE08: lea     rcx, [rax+rax*2]
 * 000000014077DE0C: lea     rax, [rbx+rcx*4]
 * 000000014077DE10: mov     [rbp+1C70h+var_AD0], rax
 * 000000014077DE17: lea     rcx, [rbp+1C70h+var_15E0]
 * 000000014077DE1E: mov     rax, [rbp+1C70h+var_AD8]
 * 000000014077DE25: mov     [rbp+1C70h+BaseAddress], rax
 * 000000014077DE2C: xor     eax, eax
 * 000000014077DE2E: mov     [rbp+1C70h+var_AC8], rcx
 * 000000014077DE35: jmp     short loc_14077DE45
 * 000000014077DE37: mov     rcx, [rbp+1C70h+var_AC8]
 * 000000014077DE3E: mov     rdi, [rbp+1C70h+var_AE0]
 * 000000014077DE45: mov     r12d, 0FFFFFFF8h
 * 000000014077DE4B: test    rbx, rbx
 * 000000014077DE4E: jz      loc_14077DF64
 * 000000014077DE54: cmp     rbx, [rbp+1C70h+var_AD0]
 * 000000014077DE5B: jz      loc_14077DF64
 * 000000014077DE61: cmp     [rbp+1C70h+var_AC0], rax
 * 000000014077DE68: jz      loc_14077DF18
 * 000000014077DE6E: test    rdi, rdi
 * 000000014077DE71: jz      loc_14077DF64
 * 000000014077DE77: cmp     [rbp+1C70h+var_AB8], rax
 * 000000014077DE7E: jnz     short loc_14077DE8F
 * 000000014077DE80: mov     [rcx], rdi
 * 000000014077DE83: mov     [rbp+1C70h+var_AE0], rax
 * 000000014077DE8A: jmp     loc_14077E04D
 * 000000014077DE8F: mov     rax, [rbp+1C70h+var_AB8]
 * 000000014077DE96: mov     edx, [rax+4]
 * 000000014077DE99: test    r13b, dl
 * 000000014077DE9C: jz      short loc_14077DEBB
 * 000000014077DE9E: and     edx, 0FFFFFFFEh
 * 000000014077DEA1: mov     eax, edx
 * 000000014077DEA3: add     rax, [rbp+1C70h+var_AD8]
 * 000000014077DEAA: mov     [rcx], rax
 * 000000014077DEAD: xor     eax, eax
 * 000000014077DEAF: mov     [rbp+1C70h+var_AB8], rax
 * 000000014077DEB6: jmp     loc_14077E04D
 * 000000014077DEBB: mov     ebx, [rbp+1C70h+var_AAC]
 * 000000014077DEC1: add     edx, ebx
 * 000000014077DEC3: mov     edi, edx
 * 000000014077DEC5: lea     r8, [rdx+4]
 * 000000014077DEC9: cmp     r8, rdi
 * 000000014077DECC: jb      loc_14078D5DD
 * 000000014077DED2: mov     eax, [rbp+1C70h+var_AB0]
 * 000000014077DED8: cmp     r8, rax
 * 000000014077DEDB: ja      loc_14078D5DD
 * 000000014077DEE1: mov     rax, [rbp+1C70h+var_AC0]
 * 000000014077DEE8: add     ebx, 4
 * 000000014077DEEB: mov     edx, [rax+rdx]
 * 000000014077DEEE: mov     [rbp+1C70h+var_AAC], ebx
 * 000000014077DEF4: test    r13b, dl
 * 000000014077DEF7: jnz     short loc_14077DF04
 * 000000014077DEF9: xor     eax, eax
 * 000000014077DEFB: mov     [rbp+1C70h+var_AB8], rax
 * 000000014077DF02: jmp     short loc_14077DF07
 * 000000014077DF04: and     edx, 0FFFFFFFEh
 * 000000014077DF07: mov     eax, edx
 * 000000014077DF09: add     rax, [rbp+1C70h+var_AD8]
 * 000000014077DF10: mov     [rcx], rax
 * 000000014077DF13: jmp     loc_14077E04B
 * 000000014077DF18: mov     rdx, [rbp+1C70h+var_AD8]
 * 000000014077DF1F: mov     rcx, rbx
 * 000000014077DF22: mov     rdi, rbx
 * 000000014077DF25: call    RtlpConvertFunctionEntry
 * 000000014077DF2A: mov     r8, [rbp+1C70h+var_AF0]
 * 000000014077DF31: mov     rcx, rax
 * 000000014077DF34: mov     rdx, [rbp+1C70h+var_AD8]
 * 000000014077DF3B: call    RtlpSameFunction
 * 000000014077DF40: mov     rbx, [rbp+1C70h+var_AE8]
 * 000000014077DF47: add     rbx, 0Ch
 * 000000014077DF4B: mov     [rbp+1C70h+var_AE8], rbx
 * 000000014077DF52: test    rax, rax
 * 000000014077DF55: jnz     loc_14077E041
 * 000000014077DF5B: cmp     rbx, [rbp+1C70h+var_AD0]
 * 000000014077DF62: jnz     short loc_14077DF18
 * 000000014077DF64: cmp     dword ptr [rbp+1C70h+var_1CA8], eax
 * 000000014077DF67: jnz     loc_14077E38F
 * 000000014077DF6D: mov     r15d, [r14+59Ch]
 * 000000014077DF74: mov     r8d, [r14+67Ch]
 * 000000014077DF7B: lea     eax, [r15+30h]
 * 000000014077DF7F: cmp     eax, [r14+75Ch]
 * 000000014077DF86: jbe     loc_14077E2B1
 * 000000014077DF8C: mov     edx, eax
 * 000000014077DF8E: mov     rcx, r14
 * 000000014077DF91: call    sub_140251E08
 * 000000014077DF96: mov     rbx, rax
 * 000000014077DF99: xor     eax, eax
 * 000000014077DF9B: test    rbx, rbx
 * 000000014077DF9E: jz      loc_14077C9F7
 * 000000014077DFA4: mov     edx, [r14+6D8h]
 * 000000014077DFAB: test    dl, 4
 * 000000014077DFAE: jnz     loc_14077E2A8
 * 000000014077DFB4: mov     ecx, [r14+59Ch]
 * 000000014077DFBB: and     edx, 20000000h
 * 000000014077DFC1: mov     rdi, [r14+580h]
 * 000000014077DFC8: neg     edx
 * 000000014077DFCA: sbb     edx, edx
 * 000000014077DFCC: and     edx, [r14+67Ch]
 * 000000014077DFD3: cmp     ecx, 8
 * 000000014077DFD6: jb      short loc_14077DFF0
 * 000000014077DFD8: mov     eax, ecx
 * 000000014077DFDA: shr     rax, 3
 * 000000014077DFDE: xor     r9d, r9d
 * 000000014077DFE1: mov     [r14], r9
 * 000000014077DFE4: add     ecx, r12d
 * 000000014077DFE7: add     r14, 8
 * 000000014077DFEB: sub     rax, r13
 * 000000014077DFEE: jnz     short loc_14077DFE1
 * 000000014077DFF0: xor     eax, eax
 * 000000014077DFF2: test    ecx, ecx
 * 000000014077DFF4: jz      short loc_14077E001
 * 000000014077DFF6: mov     [r14], al
 * 000000014077DFF9: add     r14, r13
 * 000000014077DFFC: add     ecx, 0FFFFFFFFh
 * 000000014077DFFF: jnz     short loc_14077DFF6
 * 000000014077E001: mov     r14d, [rbx+67Ch]
 * 000000014077E008: mov     [rbx+67Ch], edx
 * 000000014077E00E: cmp     edx, 3
 * 000000014077E011: jz      loc_14077E298
 * 000000014077E017: test    dword ptr [rbx+6D8h], 10000000h
 * 000000014077E021: mov     rcx, rax
 * 000000014077E024: cmovz   ecx, edx
 * 000000014077E027: test    ecx, ecx
 * 000000014077E029: jz      loc_14077E28D
 * 000000014077E02F: lea     rcx, [rdi-8]
 * 000000014077E033: mov     rdx, [rcx]
 * 000000014077E036: call    qword ptr [rbx+210h]
 * 000000014077E03C: jmp     loc_14077E2A1
 * 000000014077E041: mov     rax, [rbp+1C70h+var_AC8]
 * 000000014077E048: mov     [rax], rdi
 * 000000014077E04B: xor     eax, eax
 * 000000014077E04D: cli
 * 000000014077E04E: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077E054: jz      loc_14077E48D
 * 000000014077E05A: sti
 * 000000014077E05B: mov     rax, [rbp+1C70h+var_15E0]
 * 000000014077E062: mov     r12d, [r14+59Ch]
 * 000000014077E069: mov     r8d, [r14+67Ch]
 * 000000014077E070: mov     dword ptr [rbp+1C70h+var_1CA8], r13d
 * 000000014077E074: mov     ecx, [rax]
 * 000000014077E076: mov     r15d, [rax+4]
 * 000000014077E07A: mov     edi, ecx
 * 000000014077E07C: add     rdi, [rbp+1C70h+BaseAddress]
 * 000000014077E083: lea     eax, [r12+30h]
 * 000000014077E088: sub     r15d, ecx
 * 000000014077E08B: cmp     eax, [r14+75Ch]
 * 000000014077E092: jbe     loc_14077E169
 * 000000014077E098: mov     edx, eax
 * 000000014077E09A: mov     rcx, r14
 * 000000014077E09D: call    sub_140251E08
 * 000000014077E0A2: mov     rbx, rax
 * 000000014077E0A5: xor     eax, eax
 * 000000014077E0A7: test    rbx, rbx
 * 000000014077E0AA: jz      loc_14077C9F7
 * 000000014077E0B0: mov     edx, [r14+6D8h]
 * 000000014077E0B7: test    dl, 4
 * 000000014077E0BA: jnz     loc_14077E160
 * 000000014077E0C0: mov     ecx, [r14+59Ch]
 * 000000014077E0C7: and     edx, 20000000h
 * 000000014077E0CD: mov     r9, [r14+580h]
 * 000000014077E0D4: neg     edx
 * 000000014077E0D6: sbb     r8d, r8d
 * 000000014077E0D9: and     r8d, [r14+67Ch]
 * 000000014077E0E0: cmp     ecx, 8
 * 000000014077E0E3: jb      short loc_14077E0FC
 * 000000014077E0E5: mov     eax, ecx
 * 000000014077E0E7: shr     rax, 3
 * 000000014077E0EB: xor     edx, edx
 * 000000014077E0ED: mov     [r14], rdx
 * 000000014077E0F0: add     ecx, 0FFFFFFF8h
 * 000000014077E0F3: add     r14, 8
 * 000000014077E0F7: sub     rax, r13
 * 000000014077E0FA: jnz     short loc_14077E0ED
 * 000000014077E0FC: xor     eax, eax
 * 000000014077E0FE: test    ecx, ecx
 * 000000014077E100: jz      short loc_14077E10D
 * 000000014077E102: mov     [r14], al
 * 000000014077E105: add     r14, r13
 * 000000014077E108: add     ecx, 0FFFFFFFFh
 * 000000014077E10B: jnz     short loc_14077E102
 * 000000014077E10D: mov     r14d, [rbx+67Ch]
 * 000000014077E114: mov     [rbx+67Ch], r8d
 * 000000014077E11B: cmp     r8d, 3
 * 000000014077E11F: jz      short loc_14077E150
 * 000000014077E121: test    dword ptr [rbx+6D8h], 10000000h
 * 000000014077E12B: mov     rcx, rax
 * 000000014077E12E: cmovz   ecx, r8d
 * 000000014077E132: test    ecx, ecx
 * 000000014077E134: jz      short loc_14077E145
 * 000000014077E136: lea     rcx, [r9-8]
 * 000000014077E13A: mov     rdx, [rcx]
 * 000000014077E13D: call    qword ptr [rbx+210h]
 * 000000014077E143: jmp     short loc_14077E159
 * 000000014077E145: mov     rcx, r9
 * 000000014077E148: call    qword ptr [rbx+0E8h]
 * 000000014077E14E: jmp     short loc_14077E159
 * 000000014077E150: mov     rcx, r9
 * 000000014077E153: call    qword ptr [rbx+348h]
 * 000000014077E159: mov     [rbx+67Ch], r14d
 * 000000014077E160: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 000000014077E167: jmp     short loc_14077E173
 * 000000014077E169: mov     rbx, r14
 * 000000014077E16C: mov     [r14+59Ch], eax
 * 000000014077E173: add     [rbx+5C4h], r13d
 * 000000014077E17A: lea     r8, [rbx+r12]
 * 000000014077E17E: mov     ecx, 30h ; '0'
 * 000000014077E183: mov     [rbp+1C70h+var_15D8], r8
 * 000000014077E18A: mov     rax, r8
 * 000000014077E18D: mov     r12d, 0FFFFFFF8h
 * 000000014077E193: xor     r9d, r9d
 * 000000014077E196: lea     edx, [rcx-2Ah]
 * 000000014077E199: mov     [rax], r9
 * 000000014077E19C: add     ecx, r12d
 * 000000014077E19F: add     rax, 8
 * 000000014077E1A3: sub     rdx, r13
 * 000000014077E1A6: jnz     short loc_14077E199
 * 000000014077E1A8: test    ecx, ecx
 * 000000014077E1AA: jz      short loc_14077E1B7
 * 000000014077E1AC: mov     [rax], r9b
 * 000000014077E1AF: add     rax, r13
 * 000000014077E1B2: add     ecx, 0FFFFFFFFh
 * 000000014077E1B5: jnz     short loc_14077E1AC
 * 000000014077E1B7: xor     eax, eax
 * 000000014077E1B9: mov     ecx, r15d
 * 000000014077E1BC: mov     [r8], eax
 * 000000014077E1BF: add     rcx, rdi
 * 000000014077E1C2: mov     [r8+8], rdi
 * 000000014077E1C6: mov     rax, rdi
 * 000000014077E1C9: mov     [r8+10h], r15d
 * 000000014077E1CD: add     [rbx+5E0h], r15d
 * 000000014077E1D4: mov     r10d, [rbx+5CCh]
 * 000000014077E1DB: mov     rdx, [rbx+5D0h]
 * 000000014077E1E2: cmp     rdi, rcx
 * 000000014077E1E5: jnb     short loc_14077E1F3
 * 000000014077E1E7: prefetchnta byte ptr [rax]
 * 000000014077E1EA: add     rax, 40h ; '@'
 * 000000014077E1EE: cmp     rax, rcx
 * 000000014077E1F1: jb      short loc_14077E1E7
 * 000000014077E1F3: mov     r9d, r15d
 * 000000014077E1F6: cmp     r15d, 8
 * 000000014077E1FA: jb      short loc_14077E218
 * 000000014077E1FC: mov     eax, r15d
 * 000000014077E1FF: shr     rax, 3
 * 000000014077E203: xor     rdx, [rdi]
 * 000000014077E206: mov     ecx, r10d
 * 000000014077E209: rol     rdx, cl
 * 000000014077E20C: add     rdi, 8
 * 000000014077E210: add     r9d, r12d
 * 000000014077E213: sub     rax, r13
 * 000000014077E216: jnz     short loc_14077E203
 * 000000014077E218: test    r9d, r9d
 * 000000014077E21B: jz      short loc_14077E232
 * 000000014077E21D: movzx   eax, byte ptr [rdi]
 * 000000014077E220: mov     ecx, r10d
 * 000000014077E223: xor     rdx, rax
 * 000000014077E226: add     rdi, r13
 * 000000014077E229: rol     rdx, cl
 * 000000014077E22C: add     r9d, 0FFFFFFFFh
 * 000000014077E230: jnz     short loc_14077E21D
 * 000000014077E232: mov     rax, rdx
 * 000000014077E235: jmp     short loc_14077E239
 * 000000014077E237: xor     edx, eax
 * 000000014077E239: shr     rax, 1Fh
 * 000000014077E23D: test    rax, rax
 * 000000014077E240: jnz     short loc_14077E237
 * 000000014077E242: add     dword ptr [rbp+1C70h+var_1CB0], r13d
 * 000000014077E246: btr     edx, 1Fh
 * 000000014077E24A: mov     [r8+14h], edx
 * 000000014077E24E: mov     r14, rbx
 * 000000014077E251: mov     rax, [rbp+1C70h+var_15D8]
 * 000000014077E258: mov     [rbp+1C70h+var_15D0], rax
 * 000000014077E25F: add     [rbx+5E0h], r15d
 * 000000014077E266: mov     rax, [rbp+1C70h+var_15D0]
 * 000000014077E26D: mov     [rax+18h], r13d
 * 000000014077E271: xor     eax, eax
 * 000000014077E273: mov     rcx, [rbp+1C70h+var_AC8]
 * 000000014077E27A: mov     rdi, [rbp+1C70h+var_AE0]
 * 000000014077E281: mov     rbx, [rbp+1C70h+var_AE8]
 * 000000014077E288: jmp     loc_14077DE4B
 * 000000014077E28D: mov     rcx, rdi
 * 000000014077E290: call    qword ptr [rbx+0E8h]
 * 000000014077E296: jmp     short loc_14077E2A1
 * 000000014077E298: mov     rcx, rdi
 * 000000014077E29B: call    qword ptr [rbx+348h]
 * 000000014077E2A1: mov     [rbx+67Ch], r14d
 * 000000014077E2A8: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 000000014077E2AF: jmp     short loc_14077E2BB
 * 000000014077E2B1: mov     rbx, r14
 * 000000014077E2B4: mov     [r14+59Ch], eax
 * 000000014077E2BB: add     [rbx+5C4h], r13d
 * 000000014077E2C2: lea     rdi, [rbx+r15]
 * 000000014077E2C6: mov     ecx, 30h ; '0'
 * 000000014077E2CB: mov     [rbp+1C70h+var_15C8], rdi
 * 000000014077E2D2: mov     rax, rdi
 * 000000014077E2D5: xor     r8d, r8d
 * 000000014077E2D8: lea     edx, [rcx-2Ah]
 * 000000014077E2DB: mov     [rax], r8
 * 000000014077E2DE: add     ecx, r12d
 * 000000014077E2E1: add     rax, 8
 * 000000014077E2E5: sub     rdx, r13
 * 000000014077E2E8: jnz     short loc_14077E2DB
 * 000000014077E2EA: test    ecx, ecx
 * 000000014077E2EC: jz      short loc_14077E2F9
 * 000000014077E2EE: mov     [rax], r8b
 * 000000014077E2F1: add     rax, r13
 * 000000014077E2F4: add     ecx, 0FFFFFFFFh
 * 000000014077E2F7: jnz     short loc_14077E2EE
 * 000000014077E2F9: mov     r12, [rbp+1C70h+var_1CE8]
 * 000000014077E2FD: xor     eax, eax
 * 000000014077E2FF: mov     [rdi], eax
 * 000000014077E301: mov     [rdi+8], r12
 * 000000014077E305: lea     r10d, [rax+4]
 * 000000014077E309: mov     rax, r12
 * 000000014077E30C: mov     [rdi+10h], r10d
 * 000000014077E310: lea     rcx, [r12+4]
 * 000000014077E315: add     [rbx+5E0h], r10d
 * 000000014077E31C: mov     r9d, [rbx+5CCh]
 * 000000014077E323: mov     rdx, [rbx+5D0h]
 * 000000014077E32A: cmp     r12, rcx
 * 000000014077E32D: jnb     short loc_14077E33B
 * 000000014077E32F: prefetchnta byte ptr [rax]
 * 000000014077E332: add     rax, 40h ; '@'
 * 000000014077E336: cmp     rax, rcx
 * 000000014077E339: jb      short loc_14077E32F
 * 000000014077E33B: mov     r8d, r10d
 * 000000014077E33E: movzx   eax, byte ptr [r12]
 * 000000014077E343: mov     ecx, r9d
 * 000000014077E346: xor     rdx, rax
 * 000000014077E349: add     r12, r13
 * 000000014077E34C: rol     rdx, cl
 * 000000014077E34F: add     r8d, 0FFFFFFFFh
 * 000000014077E353: jnz     short loc_14077E33E
 * 000000014077E355: mov     rax, rdx
 * 000000014077E358: jmp     short loc_14077E35C
 * 000000014077E35A: xor     edx, eax
 * 000000014077E35C: shr     rax, 1Fh
 * 000000014077E360: test    rax, rax
 * 000000014077E363: jnz     short loc_14077E35A
 * 000000014077E365: btr     edx, 1Fh
 * 000000014077E369: mov     r14, rbx
 * 000000014077E36C: mov     [rdi+14h], edx
 * 000000014077E36F: mov     rax, [rbp+1C70h+var_15C8]
 * 000000014077E376: mov     [rbp+1C70h+var_15C0], rax
 * 000000014077E37D: add     [rbx+5E0h], r10d
 * 000000014077E384: mov     rax, [rbp+1C70h+var_15C0]
 * 000000014077E38B: mov     [rax+18h], r13d
 * 000000014077E38F: mov     r15d, [rbp+1C70h+var_1CB4]
 * 000000014077E393: xor     eax, eax
 * 000000014077E395: mov     r12, [rsp+1D70h+var_1D20]
 * 000000014077E39A: add     r15d, r13d
 * 000000014077E39D: add     r12, r13
 * 000000014077E3A0: mov     [rbp+1C70h+var_1CB4], r15d
 * 000000014077E3A4: mov     [rsp+1D70h+var_1D20], r12
 * 000000014077E3A9: cmp     r15d, 2Bh ; '+'
 * 000000014077E3AD: jb      loc_14077DC58
 * 000000014077E3B3: test    dword ptr [r14+6D8h], 40000000h
 * 000000014077E3BE: jnz     loc_14077E540
 * 000000014077E3C4: mov     r15d, [r14+59Ch]
 * 000000014077E3CB: mov     r8d, [r14+67Ch]
 * 000000014077E3D2: lea     eax, [r15+30h]
 * 000000014077E3D6: cmp     eax, [r14+75Ch]
 * 000000014077E3DD: jbe     loc_14077E4B3
 * 000000014077E3E3: mov     edx, eax
 * 000000014077E3E5: mov     rcx, r14
 * 000000014077E3E8: call    sub_140251E08
 * 000000014077E3ED: mov     rbx, rax
 * 000000014077E3F0: xor     eax, eax
 * 000000014077E3F2: test    rbx, rbx
 * 000000014077E3F5: jz      loc_14077C9F7
 * 000000014077E3FB: mov     edx, [r14+6D8h]
 * 000000014077E402: test    dl, 4
 * 000000014077E405: jnz     loc_14077E4AA
 * 000000014077E40B: mov     ecx, [r14+59Ch]
 * 000000014077E412: and     edx, 20000000h
 * 000000014077E418: mov     rdi, [r14+580h]
 * 000000014077E41F: neg     edx
 * 000000014077E421: sbb     edx, edx
 * 000000014077E423: and     edx, [r14+67Ch]
 * 000000014077E42A: cmp     ecx, 8
 * 000000014077E42D: jb      short loc_14077E447
 * 000000014077E42F: mov     eax, ecx
 * 000000014077E431: shr     rax, 3
 * 000000014077E435: xor     r9d, r9d
 * 000000014077E438: mov     [r14], r9
 * 000000014077E43B: add     ecx, 0FFFFFFF8h
 * 000000014077E43E: add     r14, 8
 * 000000014077E442: sub     rax, r13
 * 000000014077E445: jnz     short loc_14077E438
 * 000000014077E447: xor     eax, eax
 * 000000014077E449: test    ecx, ecx
 * 000000014077E44B: jz      short loc_14077E458
 * 000000014077E44D: mov     [r14], al
 * 000000014077E450: add     r14, r13
 * 000000014077E453: add     ecx, 0FFFFFFFFh
 * 000000014077E456: jnz     short loc_14077E44D
 * 000000014077E458: mov     r14d, [rbx+67Ch]
 * 000000014077E45F: mov     [rbx+67Ch], edx
 * 000000014077E465: cmp     edx, 3
 * 000000014077E468: jz      short loc_14077E49A
 * 000000014077E46A: test    dword ptr [rbx+6D8h], 10000000h
 * 000000014077E474: mov     rcx, rax
 * 000000014077E477: cmovz   ecx, edx
 * 000000014077E47A: test    ecx, ecx
 * 000000014077E47C: jz      short loc_14077E48F
 * 000000014077E47E: lea     rcx, [rdi-8]
 * 000000014077E482: mov     rdx, [rcx]
 * 000000014077E485: call    qword ptr [rbx+210h]
 * 000000014077E48B: jmp     short loc_14077E4A3
 * 000000014077E48D: jmp     short loc_14077E48D
 * 000000014077E48F: mov     rcx, rdi
 * 000000014077E492: call    qword ptr [rbx+0E8h]
 * 000000014077E498: jmp     short loc_14077E4A3
 * 000000014077E49A: mov     rcx, rdi
 * 000000014077E49D: call    qword ptr [rbx+348h]
 * 000000014077E4A3: mov     [rbx+67Ch], r14d
 * 000000014077E4AA: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 000000014077E4B1: jmp     short loc_14077E4BD
 * 000000014077E4B3: mov     rbx, r14
 * 000000014077E4B6: mov     [r14+59Ch], eax
 * 000000014077E4BD: add     [rbx+5C4h], r13d
 * 000000014077E4C4: lea     rcx, [rbx+r15]
 * 000000014077E4C8: mov     edx, 30h ; '0'
 * 000000014077E4CD: mov     [rbp+1C70h+var_15B8], rcx
 * 000000014077E4D4: mov     rax, rcx
 * 000000014077E4D7: xor     r8d, r8d
 * 000000014077E4DA: lea     edi, [rdx-2Ah]
 * 000000014077E4DD: lea     r12d, [rdx-28h]
 * 000000014077E4E1: mov     [rax], r8
 * 000000014077E4E4: add     edx, 0FFFFFFF8h
 * 000000014077E4E7: add     rax, r12
 * 000000014077E4EA: sub     rdi, r13
 * 000000014077E4ED: jnz     short loc_14077E4E1
 * 000000014077E4EF: test    edx, edx
 * 000000014077E4F1: jz      short loc_14077E4FE
 * 000000014077E4F3: mov     [rax], r8b
 * 000000014077E4F6: add     rax, r13
 * 000000014077E4F9: add     edx, 0FFFFFFFFh
 * 000000014077E4FC: jnz     short loc_14077E4F3
 * 000000014077E4FE: xor     eax, eax
 * 000000014077E500: mov     [rcx], eax
 * 000000014077E502: mov     [rcx+8], rax
 * 000000014077E506: mov     [rcx+10h], eax
 * 000000014077E509: mov     rdx, [rbx+5D0h]
 * 000000014077E510: mov     rax, rdx
 * 000000014077E513: jmp     short loc_14077E517
 * 000000014077E515: xor     edx, eax
 * 000000014077E517: shr     rax, 1Fh
 * 000000014077E51B: test    rax, rax
 * 000000014077E51E: jnz     short loc_14077E515
 * 000000014077E520: btr     edx, 1Fh
 * 000000014077E524: mov     r14, rbx
 * 000000014077E527: mov     [rcx+14h], edx
 * 000000014077E52A: mov     rax, [rbp+1C70h+var_15B8]
 * 000000014077E531: mov     [rbp+1C70h+var_15B0], rax
 * 000000014077E538: sub     eax, ebx
 * 000000014077E53A: mov     [rbx+768h], eax
 * 000000014077E540: mov     eax, dword ptr [rbp+1C70h+var_1CB0]
 * 000000014077E543: mov     r10d, 80000000h
 * 000000014077E549: mov     [r14+598h], eax
 * 000000014077E550: xor     eax, eax
 * 000000014077E552: mov     [rbp+1C70h+var_15F0], r14
 * 000000014077E559: test    r14, r14
 * 000000014077E55C: jz      loc_14077C9F7
 * 000000014077E562: mov     ebx, [r14+6D8h]
 * 000000014077E569: mov     edi, eax
 * 000000014077E56B: mov     dword ptr [rbp+1C70h+var_1CB0], eax
 * 000000014077E56E: bt      ebx, 1Eh
 * 000000014077E572: jb      loc_14077E677
 * 000000014077E578: cmp     dword ptr [rbp+1C70h+var_1CC0], eax
 * 000000014077E57B: jnz     loc_14077E677
 * 000000014077E581: rdtsc
 * 000000014077E583: shl     rdx, 20h
 * 000000014077E587: mov     r8, 7010008004002001h
 * 000000014077E591: or      rax, rdx
 * 000000014077E594: mov     r9, 0CCCCCCCCCCCCCCCDh
 * 000000014077E59E: mov     rcx, rax
 * 000000014077E5A1: ror     rax, 3
 * 000000014077E5A5: xor     rcx, rax
 * 000000014077E5A8: mov     rax, r8
 * 000000014077E5AB: mul     rcx
 * 000000014077E5AE: mov     rcx, rdx
 * 000000014077E5B1: mov     [rbp+1C70h+var_15A8], rdx
 * 000000014077E5B8: xor     rcx, rax
 * 000000014077E5BB: mov     rax, r9
 * 000000014077E5BE: mul     rcx
 * 000000014077E5C1: shr     rdx, 3
 * 000000014077E5C5: lea     rax, [rdx+rdx*4]
 * 000000014077E5C9: add     rax, rax
 * 000000014077E5CC: sub     rcx, rax
 * 000000014077E5CF: cmp     rcx, r13
 * 000000014077E5D2: jnb     loc_14077E675
 * 000000014077E5D8: mov     edi, r13d
 * 000000014077E5DB: mov     dword ptr [rbp+1C70h+var_1CB0], r13d
 * 000000014077E5DF: rdtsc
 * 000000014077E5E1: shl     rdx, 20h
 * 000000014077E5E5: or      rax, rdx
 * 000000014077E5E8: mov     rcx, rax
 * 000000014077E5EB: ror     rax, 3
 * 000000014077E5EF: xor     rcx, rax
 * 000000014077E5F2: mov     rax, r8
 * 000000014077E5F5: mul     rcx
 * 000000014077E5F8: mov     rcx, rdx
 * 000000014077E5FB: mov     [rbp+1C70h+var_15A0], rdx
 * 000000014077E602: xor     rcx, rax
 * 000000014077E605: mov     rax, r9
 * 000000014077E608: mul     rcx
 * 000000014077E60B: shr     rdx, 3
 * 000000014077E60F: lea     rax, [rdx+rdx*4]
 * 000000014077E613: add     rax, rax
 * 000000014077E616: sub     rcx, rax
 * 000000014077E619: cmp     rcx, 3
 * 000000014077E61D: jnb     short loc_14077E675
 * 000000014077E61F: bts     ebx, 10h
 * 000000014077E623: mov     [r14+6D8h], ebx
 * 000000014077E62A: rdtsc
 * 000000014077E62C: shl     rdx, 20h
 * 000000014077E630: or      rax, rdx
 * 000000014077E633: mov     rcx, rax
 * 000000014077E636: ror     rax, 3
 * 000000014077E63A: xor     rcx, rax
 * 000000014077E63D: mov     rax, r8
 * 000000014077E640: mul     rcx
 * 000000014077E643: mov     rcx, rdx
 * 000000014077E646: mov     [rbp+1C70h+var_1598], rdx
 * 000000014077E64D: xor     rcx, rax
 * 000000014077E650: mov     rax, r9
 * 000000014077E653: mul     rcx
 * 000000014077E656: shr     rdx, 3
 * 000000014077E65A: lea     rax, [rdx+rdx*4]
 * 000000014077E65E: add     rax, rax
 * 000000014077E661: sub     rcx, rax
 * 000000014077E664: cmp     rcx, 3
 * 000000014077E668: jnb     short loc_14077E675
 * 000000014077E66A: bts     ebx, 14h
 * 000000014077E66E: mov     [r14+6D8h], ebx
 * 000000014077E675: xor     eax, eax
 * 000000014077E677: cli
 * 000000014077E678: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014077E67E: jnz     short loc_14077E682
 * 000000014077E680: jmp     short loc_14077E680
 * 000000014077E682: sti
 * 000000014077E683: mov     r8, cs:PspPicoProviderRanges
 * 000000014077E68A: mov     dword ptr [rbp+1C70h+var_1CC0], eax
 * 000000014077E68D: mov     [rbp+1C70h+var_1CB4], 0C0000225h
 * 000000014077E694: mov     eax, eax
 * 000000014077E696: lea     rcx, [rax+rax*2]
 * 000000014077E69A: lea     rax, cs:140000000h
 * 000000014077E6A1: lea     r15, rva qword_1407D5460[rax]
 * 000000014077E6A8: lea     r15, [r15+rcx*8]
 * 000000014077E6AC: mov     eax, [r15+10h]
 * 000000014077E6B0: and     eax, 0E0000000h
 * 000000014077E6B5: cmp     eax, r10d
 * 000000014077E6B8: jz      short loc_14077E6C4
 * 000000014077E6BA: xor     eax, eax
 * 000000014077E6BC: test    edi, edi
 * 000000014077E6BE: jnz     loc_140782300
 * 000000014077E6C4: mov     rax, [r15+8]
 * 000000014077E6C8: xor     r9d, r9d
 * 000000014077E6CB: mov     [rbp+1C70h+var_1590], rax
 * 000000014077E6D2: test    rax, rax
 * 000000014077E6D5: jnz     short loc_14077E6F2
 * 000000014077E6D7: lea     rax, cs:140000000h
 * 000000014077E6DE: mov     r12, rax
 * 000000014077E6E1: mov     [rsp+1D70h+var_1D20], rax
 * 000000014077E6E6: mov     [rbp+1C70h+var_1590], rax
 * 000000014077E6ED: jmp     loc_14077E84A
 * 000000014077E6F2: cmp     rax, r13
 * 000000014077E6F5: jnz     short loc_14077E708
 * 000000014077E6F7: mov     r12, cs:PsHalImageBase
 * 000000014077E6FE: mov     [rsp+1D70h+var_1D20], r12
 * 000000014077E703: jmp     loc_14077E837
 * 000000014077E708: cmp     rax, 2
 * 000000014077E70C: jnz     loc_14077E7B3
 * 000000014077E712: xor     eax, eax
 * 000000014077E714: test    byte ptr [rbp+1C70h+var_1AC0], 6
 * 000000014077E71B: mov     r12d, eax
 * 000000014077E71E: mov     [rsp+1D70h+var_1D20], rax
 * 000000014077E723: mov     [rbp+1C70h+var_1590], rax
 * 000000014077E72A: jnz     loc_140781104
 * 000000014077E730: test    r8, r8
 * 000000014077E733: jz      loc_140781104
 * 000000014077E739: mov     ebx, eax
 * 000000014077E73B: mov     edi, eax
 * 000000014077E73D: cmp     [r8+8], rax
 * 000000014077E741: jbe     short loc_14077E7A8
 * 000000014077E743: mov     rbx, rax
 * 000000014077E746: xor     eax, eax
 * 000000014077E748: shl     rbx, 4
 * 000000014077E74C: add     rbx, [r8]
 * 000000014077E74F: cmp     [rbx+8], rax
 * 000000014077E753: jz      short loc_14077E78E
 * 000000014077E755: mov     rcx, [rbx]
 * 000000014077E758: lea     r8, [rbp+1C70h+var_1ACC]
 * 000000014077E75F: lea     rdx, [rbp+1C70h+var_1590]
 * 000000014077E766: call    qword ptr [r14+1E8h]
 * 000000014077E76D: mov     r12, [rbp+1C70h+var_1590]
 * 000000014077E774: mov     [rsp+1D70h+var_1D20], r12
 * 000000014077E779: test    rax, rax
 * 000000014077E77C: jz      short loc_14077E787
 * 000000014077E77E: test    r12, r12
 * 000000014077E781: jnz     loc_14077E847
 * 000000014077E787: mov     r8, cs:PspPicoProviderRanges; BugCheckParameter2
 * 000000014077E78E: add     edi, r13d
 * 000000014077E791: mov     eax, edi
 * 000000014077E793: cmp     rax, [r8+8]
 * 000000014077E797: jb      short loc_14077E743
 * 000000014077E799: xor     eax, eax
 * 000000014077E79B: test    r12, r12
 * 000000014077E79E: jnz     loc_14077E847
 * 000000014077E7A4: cmp     [r8+8], rax
 * 000000014077E7A8: jz      loc_140781104
 * 000000014077E7AE: jmp     loc_14078D610
 * 000000014077E7B3: mov     rcx, gs:188h
 * 000000014077E7BC: xor     eax, eax
 * 000000014077E7BE: mov     r14, [rbp+1C70h+var_15F0]
 * 000000014077E7C5: mov     r12d, eax
 * 000000014077E7C8: mov     [rsp+1D70h+var_1D20], rax
 * 000000014077E7CD: call    qword ptr [r14+150h]
 * 000000014077E7D4: mov     rcx, [r14+480h]
 * 000000014077E7DB: mov     dl, r13b
 * 000000014077E7DE: call    qword ptr [r14+0D0h]
 * 000000014077E7E5: mov     rbx, qword ptr cs:PsLoadedModuleList
 * 000000014077E7EC: lea     rdi, PsLoadedModuleList
 * 000000014077E7F3: jmp     short loc_14077E80B
 * 000000014077E7F5: lea     rdx, [rbx+58h]; String2
 * 000000014077E7F9: mov     r8b, r13b; CaseInSensitive
 * 000000014077E7FC: mov     rcx, r15; String1
 * 000000014077E7FF: call    RtlEqualUnicodeString
 * 000000014077E804: test    al, al
 * 000000014077E806: jnz     short loc_14077E812
 * 000000014077E808: mov     rbx, [rbx]
 * 000000014077E80B: cmp     rbx, rdi
 * 000000014077E80E: jnz     short loc_14077E7F5
 * 000000014077E810: jmp     short loc_14077E81B
 * 000000014077E812: mov     r12, [rbx+30h]
 * 000000014077E816: mov     [rsp+1D70h+var_1D20], r12
 * 000000014077E81B: mov     rcx, [r14+480h]
 * 000000014077E822: call    qword ptr [r14+100h]
 * 000000014077E829: call    qword ptr [r14+158h]
 * 000000014077E830: mov     r8, cs:PspPicoProviderRanges
 * 000000014077E837: mov     [rbp+1C70h+var_1590], r12
 * 000000014077E83E: test    r12, r12
 * 000000014077E841: jz      loc_140781104
 * 000000014077E847: xor     r9d, r9d
 * 000000014077E84A: mov     eax, [r15+10h]
 * 000000014077E84E: test    r13b, al
 * 000000014077E851: mov     r15d, r9d
 * 000000014077E854: cmovnz  r15d, r13d
 * 000000014077E858: mov     dword ptr [rbp+1C70h+var_1CA8], r15d
 * 000000014077E85C: test    al, 2
 * 000000014077E85E: jz      loc_140780766
 * 000000014077E864: xor     eax, eax
 * 000000014077E866: cmp     dword ptr [rbp+1C70h+var_1CB0], eax
 * 000000014077E869: jnz     loc_140780768
 * 000000014077E86F: mov     rax, r14
 * 000000014077E872: lea     r8, [rbp+1C70h+var_1AC8]
 * 000000014077E879: lea     rdx, [rbp+1C70h+var_1580]
 * 000000014077E880: mov     [rbp+1C70h+var_1CE8], rax
 * 000000014077E884: mov     rcx, r12
 * 000000014077E887: mov     [rbp+1C70h+var_1588], rax
 * 000000014077E88E: call    qword ptr [r14+1E8h]
 * 000000014077E895: mov     r11, rax
 * 000000014077E898: mov     [rbp+1C70h+var_1CE0], rax
 * 000000014077E89C: xor     eax, eax
 * 000000014077E89E: test    r11, r11
 * 000000014077E8A1: jz      loc_14077C9F7
 * 000000014077E8A7: mov     r15, [rbp+1C70h+var_1580]
 * 000000014077E8AE: mov     ecx, 4
 * 000000014077E8B3: mov     r12d, [rbp+1C70h+var_1AC8]
 * 000000014077E8BA: xor     edx, edx
 * 000000014077E8BC: mov     [rbp+1C70h+var_1068], rax
 * 000000014077E8C3: lea     rax, [rbp+1C70h+var_1060]
 * 000000014077E8CA: mov     [rsp+78h], r15
 * 000000014077E8CF: mov     [rax], dl
 * 000000014077E8D1: add     rax, r13
 * 000000014077E8D4: add     ecx, 0FFFFFFFFh
 * 000000014077E8D7: jnz     short loc_14077E8CF
 * 000000014077E8D9: xor     eax, eax
 * 000000014077E8DB: mov     r10d, eax
 * 000000014077E8DE: cmp     [r14+5C4h], eax
 * 000000014077E8E5: jbe     loc_14077EAA1
 * 000000014077E8EB: mov     ecx, [rbp+1C70h+var_1060]
 * 000000014077E8F1: mov     edx, dword ptr [rbp+1C70h+var_1068+4]
 * 000000014077E8F7: mov     edi, dword ptr [rbp+1C70h+var_1068]
 * 000000014077E8FD: mov     rax, [r14+778h]
 * 000000014077E904: mov     r9, r14
 * 000000014077E907: test    rax, rax
 * 000000014077E90A: cmovnz  r9, rax
 * 000000014077E90E: xor     eax, eax
 * 000000014077E910: mov     r8d, eax
 * 000000014077E913: mov     ebx, [r9+5C0h]
 * 000000014077E91A: add     rbx, r9
 * 000000014077E91D: test    edi, edi
 * 000000014077E91F: jz      short loc_14077E92E
 * 000000014077E921: cmp     edx, r10d
 * 000000014077E924: ja      short loc_14077E92E
 * 000000014077E926: mov     ebx, ecx
 * 000000014077E928: mov     r8d, edx
 * 000000014077E92B: add     rbx, r9
 * 000000014077E92E: cmp     r8d, r10d
 * 000000014077E931: jz      loc_14077EA4B
 * 000000014077E937: mov     eax, r10d
 * 000000014077E93A: mov     r15d, 2
 * 000000014077E940: sub     eax, r8d
 * 000000014077E943: mov     r11, 0AAAAAAAAAAAAAAABh
 * 000000014077E94D: mov     edi, eax
 * 000000014077E94F: add     r8d, eax
 * 000000014077E952: mov     ecx, [rbx]
 * 000000014077E954: cmp     ecx, 11h
 * 000000014077E957: jg      short loc_14077E9C6
 * 000000014077E959: jz      loc_14077EA31
 * 000000014077E95F: sub     ecx, 1
 * 000000014077E962: jz      short loc_14077E9B0
 * 000000014077E964: sub     ecx, 6
 * 000000014077E967: jz      short loc_14077E99F
 * 000000014077E969: sub     ecx, 1
 * 000000014077E96C: jz      short loc_14077E990
 * 000000014077E96E: sub     ecx, r15d
 * 000000014077E971: jz      short loc_14077E982
 * 000000014077E973: cmp     ecx, r15d
 * 000000014077E976: jz      short loc_14077E9B0
 * 000000014077E978: mov     eax, 30h ; '0'
 * 000000014077E97D: jmp     loc_14077EA36
 * 000000014077E982: mov     eax, [rbx+1Ch]
 * 000000014077E985: add     eax, 3
 * 000000014077E988: shl     eax, 4
 * 000000014077E98B: jmp     loc_14077EA36
 * 000000014077E990: movzx   eax, word ptr [rbx+20h]
 * 000000014077E994: add     eax, 37h ; '7'
 * 000000014077E997: and     eax, 0FFFFFFF8h
 * 000000014077E99A: jmp     loc_14077EA36
 * 000000014077E99F: mov     eax, [rbx+18h]
 * 000000014077E9A2: add     eax, r15d
 * 000000014077E9A5: lea     eax, [rax+rax*2]
 * 000000014077E9A8: shl     eax, 3
 * 000000014077E9AB: jmp     loc_14077EA36
 * 000000014077E9B0: mov     ecx, [rbx+10h]
 * 000000014077E9B3: mov     rax, r11
 * 000000014077E9B6: mul     rcx
 * 000000014077E9B9: shr     rdx, 3
 * 000000014077E9BD: lea     eax, ds:30h[rdx*4]
 * 000000014077E9C4: jmp     short loc_14077EA36
 * 000000014077E9C6: cmp     ecx, 13h
 * 000000014077E9C9: jz      short loc_14077EA31
 * 000000014077E9CB: cmp     ecx, 1Ch
 * 000000014077E9CE: jz      short loc_14077EA28
 * 000000014077E9D0: cmp     ecx, 1Eh
 * 000000014077E9D3: jz      short loc_14077EA03
 * 000000014077E9D5: lea     eax, [rcx-21h]
 * 000000014077E9D8: cmp     eax, r13d
 * 000000014077E9DB: ja      short loc_14077E978
 * 000000014077E9DD: mov     ecx, [rbx+20h]
 * 000000014077E9E0: mov     edx, [rbx+28h]
 * 000000014077E9E3: and     ecx, 0FFFh
 * 000000014077E9E9: add     rdx, 0FFFh
 * 000000014077E9F0: add     rdx, rcx
 * 000000014077E9F3: shr     rdx, 0Ch
 * 000000014077E9F7: lea     eax, [rdx+rdx*4]
 * 000000014077E9FA: lea     eax, ds:30h[rax*4]
 * 000000014077EA01: jmp     short loc_14077EA36
 * 000000014077EA03: mov     ecx, [rbx+24h]
 * 000000014077EA06: mov     rax, r11
 * 000000014077EA09: sub     ecx, r13d
 * 000000014077EA0C: mul     rcx
 * 000000014077EA0F: movzx   eax, word ptr [rbx+28h]
 * 000000014077EA13: shr     rdx, 3
 * 000000014077EA17: add     edx, 7
 * 000000014077EA1A: and     edx, 0FFFFFFF8h
 * 000000014077EA1D: add     eax, r15d
 * 000000014077EA20: lea     eax, [rax+rax*2]
 * 000000014077EA23: lea     eax, [rdx+rax*8]
 * 000000014077EA26: jmp     short loc_14077EA36
 * 000000014077EA28: movzx   eax, word ptr [rbx+28h]
 * 000000014077EA2C: jmp     loc_14077E994
 * 000000014077EA31: mov     eax, 38h ; '8'
 * 000000014077EA36: add     rbx, rax
 * 000000014077EA39: sub     rdi, r13
 * 000000014077EA3C: jnz     loc_14077E952
 * 000000014077EA42: mov     r11, [rbp+1C70h+var_1CE0]
 * 000000014077EA46: mov     r15, [rsp+78h]
 * 000000014077EA4B: mov     ecx, ebx
 * 000000014077EA4D: mov     dword ptr [rbp+1C70h+var_1068], r13d
 * 000000014077EA54: sub     ecx, r9d
 * 000000014077EA57: mov     edx, r8d
 * 000000014077EA5A: mov     [rbp+1C70h+var_1060], ecx
 * 000000014077EA60: mov     edi, r13d
 * 000000014077EA63: mov     dword ptr [rbp+1C70h+var_1068+4], edx
 * 000000014077EA69: mov     eax, [rbx]
 * 000000014077EA6B: cmp     eax, r13d
 * 000000014077EA6E: jz      short loc_14077EA75
 * 000000014077EA70: cmp     eax, 0Ch
 * 000000014077EA73: jnz     short loc_14077EA81
 * 000000014077EA75: cmp     [rbx+8], r11
 * 000000014077EA79: jnz     short loc_14077EA81
 * 000000014077EA7B: cmp     [rbx+10h], r12d
 * 000000014077EA7F: jz      short loc_14077EAA4
 * 000000014077EA81: add     eax, 0FFFFFFDFh
 * 000000014077EA84: cmp     eax, r13d
 * 000000014077EA87: ja      short loc_14077EA8F
 * 000000014077EA89: cmp     [rbx+20h], r15
 * 000000014077EA8D: jz      short loc_14077EAA4
 * 000000014077EA8F: add     r10d, r13d
 * 000000014077EA92: cmp     r10d, [r14+5C4h]
 * 000000014077EA99: jb      loc_14077E8FD
 * 000000014077EA9F: xor     eax, eax
 * 000000014077EAA1: mov     rbx, rax
 * 000000014077EAA4: test    rbx, rbx
 * 000000014077EAA7: jnz     loc_140780766
 * 000000014077EAAD: mov     r12, [rsp+1D70h+var_1D20]
 * 000000014077EAB2: lea     r8, [rbp+1C70h+var_1AC4]
 * 000000014077EAB9: mov     rcx, r12
 * 000000014077EABC: lea     rdx, [rbp+1C70h+var_1578]
 * 000000014077EAC3: call    qword ptr [r14+1E8h]
 * 000000014077EACA: mov     [rbp+1C70h+var_1CE0], rax
 * 000000014077EACE: test    rax, rax
 * 000000014077EAD1: jnz     short loc_14077EAE3
 * 000000014077EAD3: mov     ecx, 0C000007Bh
 * 000000014077EAD8: mov     r12d, 80000000h
 * 000000014077EADE: jmp     loc_140780751
 * 000000014077EAE3: mov     r11, [rbp+1C70h+var_1578]
 * 000000014077EAEA: xor     eax, eax
 * 000000014077EAEC: mov     r15d, [rbp+1C70h+var_1AC4]
 * 000000014077EAF3: mov     ecx, 4
 * 000000014077EAF8: mov     [rbp+1C70h+var_1058], rax
 * 000000014077EAFF: xor     edx, edx
 * 000000014077EB01: lea     rax, [rbp+1C70h+var_1050]
 * 000000014077EB08: mov     [rsp+78h], r11
 * 000000014077EB0D: mov     [rax], dl
 * 000000014077EB0F: add     rax, r13
 * 000000014077EB12: add     ecx, 0FFFFFFFFh
 * 000000014077EB15: jnz     short loc_14077EB0D
 * 000000014077EB17: xor     eax, eax
 * 000000014077EB19: mov     r10d, eax
 * 000000014077EB1C: cmp     [r14+5C4h], eax
 * 000000014077EB23: jbe     loc_14077ECDF
 * 000000014077EB29: mov     ecx, [rbp+1C70h+var_1050]
 * 000000014077EB2F: mov     edx, dword ptr [rbp+1C70h+var_1058+4]
 * 000000014077EB35: mov     edi, dword ptr [rbp+1C70h+var_1058]
 * 000000014077EB3B: mov     rax, [r14+778h]
 * 000000014077EB42: mov     r9, r14
 * 000000014077EB45: test    rax, rax
 * 000000014077EB48: cmovnz  r9, rax
 * 000000014077EB4C: xor     eax, eax
 * 000000014077EB4E: mov     r8d, eax
 * 000000014077EB51: mov     ebx, [r9+5C0h]
 * 000000014077EB58: add     rbx, r9
 * 000000014077EB5B: test    edi, edi
 * 000000014077EB5D: jz      short loc_14077EB6C
 * 000000014077EB5F: cmp     edx, r10d
 * 000000014077EB62: ja      short loc_14077EB6C
 * 000000014077EB64: mov     ebx, ecx
 * 000000014077EB66: mov     r8d, edx
 * 000000014077EB69: add     rbx, r9
 * 000000014077EB6C: cmp     r8d, r10d
 * 000000014077EB6F: jz      loc_14077EC85
 * 000000014077EB75: mov     eax, r10d
 * 000000014077EB78: mov     esi, 2
 * 000000014077EB7D: sub     eax, r8d
 * 000000014077EB80: mov     r11, 0AAAAAAAAAAAAAAABh
 * 000000014077EB8A: mov     edi, eax
 * 000000014077EB8C: add     r8d, eax
 * 000000014077EB8F: mov     ecx, [rbx]
 * 000000014077EB91: cmp     ecx, 11h
 * 000000014077EB94: jg      short loc_14077EC00
 * 000000014077EB96: jz      loc_14077EC6A
 * 000000014077EB9C: sub     ecx, 1
 * 000000014077EB9F: jz      short loc_14077EBEA
 * 000000014077EBA1: sub     ecx, 6
 * 000000014077EBA4: jz      short loc_14077EBDA
 * 000000014077EBA6: sub     ecx, 1
 * 000000014077EBA9: jz      short loc_14077EBCB
 * 000000014077EBAB: sub     ecx, esi
 * 000000014077EBAD: jz      short loc_14077EBBD
 * 000000014077EBAF: cmp     ecx, esi
 * 000000014077EBB1: jz      short loc_14077EBEA
 * 000000014077EBB3: mov     eax, 30h ; '0'
 * 000000014077EBB8: jmp     loc_14077EC6F
 * 000000014077EBBD: mov     eax, [rbx+1Ch]
 * 000000014077EBC0: add     eax, 3
 * 000000014077EBC3: shl     eax, 4
 * 000000014077EBC6: jmp     loc_14077EC6F
 * 000000014077EBCB: movzx   eax, word ptr [rbx+20h]
 * 000000014077EBCF: add     eax, 37h ; '7'
 * 000000014077EBD2: and     eax, 0FFFFFFF8h
 * 000000014077EBD5: jmp     loc_14077EC6F
 * 000000014077EBDA: mov     eax, [rbx+18h]
 * 000000014077EBDD: add     eax, esi
 * 000000014077EBDF: lea     eax, [rax+rax*2]
 * 000000014077EBE2: shl     eax, 3
 * 000000014077EBE5: jmp     loc_14077EC6F
 * 000000014077EBEA: mov     ecx, [rbx+10h]
 * 000000014077EBED: mov     rax, r11
 * 000000014077EBF0: mul     rcx
 * 000000014077EBF3: shr     rdx, 3
 * 000000014077EBF7: lea     eax, ds:30h[rdx*4]
 * 000000014077EBFE: jmp     short loc_14077EC6F
 * 000000014077EC00: cmp     ecx, 13h
 * 000000014077EC03: jz      short loc_14077EC6A
 * 000000014077EC05: cmp     ecx, 1Ch
 * 000000014077EC08: jz      short loc_14077EC61
 * 000000014077EC0A: cmp     ecx, 1Eh
 * 000000014077EC0D: jz      short loc_14077EC3D
 * 000000014077EC0F: lea     eax, [rcx-21h]
 * 000000014077EC12: cmp     eax, r13d
 * 000000014077EC15: ja      short loc_14077EBB3
 * 000000014077EC17: mov     ecx, [rbx+20h]
 * 000000014077EC1A: mov     edx, [rbx+28h]
 * 000000014077EC1D: and     ecx, 0FFFh
 * 000000014077EC23: add     rdx, 0FFFh
 * 000000014077EC2A: add     rdx, rcx
 * 000000014077EC2D: shr     rdx, 0Ch
 * 000000014077EC31: lea     eax, [rdx+rdx*4]
 * 000000014077EC34: lea     eax, ds:30h[rax*4]
 * 000000014077EC3B: jmp     short loc_14077EC6F
 * 000000014077EC3D: mov     ecx, [rbx+24h]
 * 000000014077EC40: mov     rax, r11
 * 000000014077EC43: sub     ecx, r13d
 * 000000014077EC46: mul     rcx
 * 000000014077EC49: movzx   eax, word ptr [rbx+28h]
 * 000000014077EC4D: shr     rdx, 3
 * 000000014077EC51: add     edx, 7
 * 000000014077EC54: and     edx, 0FFFFFFF8h
 * 000000014077EC57: add     eax, esi
 * 000000014077EC59: lea     eax, [rax+rax*2]
 * 000000014077EC5C: lea     eax, [rdx+rax*8]
 * 000000014077EC5F: jmp     short loc_14077EC6F
 * 000000014077EC61: movzx   eax, word ptr [rbx+28h]
 * 000000014077EC65: jmp     loc_14077EBCF
 * 000000014077EC6A: mov     eax, 38h ; '8'
 * 000000014077EC6F: add     rbx, rax
 * 000000014077EC72: sub     rdi, r13
 * 000000014077EC75: jnz     loc_14077EB8F
 * 000000014077EC7B: mov     r11, [rsp+78h]
 * 000000014077EC80: mov     r12, [rsp+1D70h+var_1D20]
 * 000000014077EC85: mov     ecx, ebx
 * 000000014077EC87: mov     dword ptr [rbp+1C70h+var_1058], r13d
 * 000000014077EC8E: sub     ecx, r9d
 * 000000014077EC91: mov     edx, r8d
 * 000000014077EC94: mov     [rbp+1C70h+var_1050], ecx
 * 000000014077EC9A: mov     edi, r13d
 * 000000014077EC9D: mov     dword ptr [rbp+1C70h+var_1058+4], edx
 * 000000014077ECA3: mov     eax, [rbx]
 * 000000014077ECA5: cmp     eax, r13d
 * 000000014077ECA8: jz      short loc_14077ECAF
 * 000000014077ECAA: cmp     eax, 0Ch
 * 000000014077ECAD: jnz     short loc_14077ECBF
 * 000000014077ECAF: mov     r8, [rbp+1C70h+var_1CE0]
 * 000000014077ECB3: cmp     [rbx+8], r8
 * 000000014077ECB7: jnz     short loc_14077ECBF
 * 000000014077ECB9: cmp     [rbx+10h], r15d
 * 000000014077ECBD: jz      short loc_14077ECE2
 * 000000014077ECBF: add     eax, 0FFFFFFDFh
 * 000000014077ECC2: cmp     eax, r13d
 * 000000014077ECC5: ja      short loc_14077ECCD
 * 000000014077ECC7: cmp     [rbx+20h], r11
 * 000000014077ECCB: jz      short loc_14077ECE2
 * 000000014077ECCD: add     r10d, r13d
 * 000000014077ECD0: cmp     r10d, [r14+5C4h]
 * 000000014077ECD7: jb      loc_14077EB3B
 * 000000014077ECDD: xor     eax, eax
 * 000000014077ECDF: mov     rbx, rax
 * 000000014077ECE2: mov     [rbp+1C70h+var_1570], rbx
 * 000000014077ECE9: test    rbx, rbx
 * 000000014077ECEC: jnz     loc_14078069D
 * 000000014077ECF2: mov     rcx, r12
 * 000000014077ECF5: call    qword ptr [r14+288h]
 * 000000014077ECFC: mov     ecx, dword ptr [rbp+1C70h+var_1CA8]
 * 000000014077ECFF: mov     r15d, eax
 * 000000014077ED02: mov     ebx, [rbp+1C70h+var_1AC4]
 * 000000014077ED08: mov     dword ptr [rbp+1C70h+var_1CF0], eax
 * 000000014077ED0B: mov     dword ptr [rsp+1D70h+NtHeaders], ebx
 * 000000014077ED0F: test    cl, 2
 * 000000014077ED12: jz      short loc_14077ED1C
 * 000000014077ED14: test    eax, eax
 * 000000014077ED16: jz      loc_14078069D
 * 000000014077ED1C: test    dword ptr [r14+6D8h], 40000000h
 * 000000014077ED27: jz      short loc_14077ED4D
 * 000000014077ED29: mov     rdx, [rbp+1C70h+var_1578]
 * 000000014077ED30: mov     r8d, ecx
 * 000000014077ED33: lea     rcx, [rbp+1C70h+var_1588]
 * 000000014077ED3A: call    sub_140777D18
 * 000000014077ED3F: mov     rbx, [rbp+1C70h+var_1588]
 * 000000014077ED46: mov     ecx, eax
 * 000000014077ED48: jmp     loc_14077F428
 * 000000014077ED4D: mov     rax, [rbp+1C70h+var_1578]
 * 000000014077ED54: mov     rcx, rax
 * 000000014077ED57: mov     [rsp+1D70h+var_1D20], rax
 * 000000014077ED5C: call    qword ptr [r14+1E0h]
 * 000000014077ED63: xor     r9d, r9d
 * 000000014077ED66: mov     [rsp+78h], rax
 * 000000014077ED6B: test    rax, rax
 * 000000014077ED6E: jz      loc_14077F41F
 * 000000014077ED74: mov     r8d, [r14+67Ch]
 * 000000014077ED7B: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014077ED85: mul     rbx
 * 000000014077ED88: mov     rdi, rbx
 * 000000014077ED8B: mov     [rbp+1C70h+var_1CD8], rbx
 * 000000014077ED8F: mov     ebx, [r14+59Ch]
 * 000000014077ED96: mov     rax, rdx
 * 000000014077ED99: shr     rax, 3
 * 000000014077ED9D: mov     ecx, eax
 * 000000014077ED9F: mov     [rsp+1D70h+Src], rax
 * 000000014077EDA4: shl     ecx, 2
 * 000000014077EDA7: mov     eax, r15d
 * 000000014077EDAA: neg     eax
 * 000000014077EDAC: mov     dword ptr [rbp+1C70h+var_1CC8], ecx
 * 000000014077EDAF: mov     dword ptr [rsp+1D70h+var_1D08], ebx
 * 000000014077EDB3: sbb     r12d, r12d
 * 000000014077EDB6: and     r12d, 0Bh
 * 000000014077EDBA: lea     eax, [rcx+30h]
 * 000000014077EDBD: add     r12d, r13d
 * 000000014077EDC0: add     eax, ebx
 * 000000014077EDC2: cmp     eax, [r14+75Ch]
 * 000000014077EDC9: jbe     loc_14077EEB5
 * 000000014077EDCF: mov     edx, eax
 * 000000014077EDD1: mov     rcx, r14
 * 000000014077EDD4: call    sub_140251E08
 * 000000014077EDD9: mov     r15, rax
 * 000000014077EDDC: test    rax, rax
 * 000000014077EDDF: jz      loc_14077EEAB
 * 000000014077EDE5: mov     edx, [r14+6D8h]
 * 000000014077EDEC: test    dl, 4
 * 000000014077EDEF: jnz     loc_14077EE9E
 * 000000014077EDF5: mov     ecx, [r14+59Ch]
 * 000000014077EDFC: and     edx, 20000000h
 * 000000014077EE02: mov     rdi, [r14+580h]
 * 000000014077EE09: neg     edx
 * 000000014077EE0B: sbb     edx, edx
 * 000000014077EE0D: and     edx, [r14+67Ch]
 * 000000014077EE14: cmp     ecx, 8
 * 000000014077EE17: jb      short loc_14077EE30
 * 000000014077EE19: mov     eax, ecx
 * 000000014077EE1B: shr     rax, 3
 * 000000014077EE1F: xor     ebx, ebx
 * 000000014077EE21: mov     [r14], rbx
 * 000000014077EE24: add     ecx, 0FFFFFFF8h
 * 000000014077EE27: add     r14, 8
 * 000000014077EE2B: sub     rax, r13
 * 000000014077EE2E: jnz     short loc_14077EE21
 * 000000014077EE30: xor     eax, eax
 * 000000014077EE32: test    ecx, ecx
 * 000000014077EE34: jz      short loc_14077EE41
 * 000000014077EE36: mov     [r14], al
 * 000000014077EE39: add     r14, r13
 * 000000014077EE3C: add     ecx, 0FFFFFFFFh
 * 000000014077EE3F: jnz     short loc_14077EE36
 * 000000014077EE41: mov     ebx, [r15+67Ch]
 * 000000014077EE48: mov     [r15+67Ch], edx
 * 000000014077EE4F: cmp     edx, 3
 * 000000014077EE52: jz      short loc_14077EE85
 * 000000014077EE54: test    dword ptr [r15+6D8h], 10000000h
 * 000000014077EE5F: mov     rcx, rax
 * 000000014077EE62: cmovz   ecx, edx
 * 000000014077EE65: test    ecx, ecx
 * 000000014077EE67: jz      short loc_14077EE79
 * 000000014077EE69: lea     rcx, [rdi-8]
 * 000000014077EE6D: mov     rdx, [rcx]
 * 000000014077EE70: call    qword ptr [r15+210h]
 * 000000014077EE77: jmp     short loc_14077EE8F
 * 000000014077EE79: mov     rcx, rdi
 * 000000014077EE7C: call    qword ptr [r15+0E8h]
 * 000000014077EE83: jmp     short loc_14077EE8F
 * 000000014077EE85: mov     rcx, rdi
 * 000000014077EE88: call    qword ptr [r15+348h]
 * 000000014077EE8F: mov     rdi, [rbp+1C70h+var_1CD8]
 * 000000014077EE93: mov     [r15+67Ch], ebx
 * 000000014077EE9A: mov     ebx, dword ptr [rsp+1D70h+var_1D08]
 * 000000014077EE9E: and     dword ptr [r15+6D8h], 0FFFFFFFBh
 * 000000014077EEA6: xor     r9d, r9d
 * 000000014077EEA9: jmp     short loc_14077EEBF
 * 000000014077EEAB: mov     ecx, 0C000009Ah
 * 000000014077EEB0: jmp     loc_14077F424
 * 000000014077EEB5: mov     r15, r14
 * 000000014077EEB8: mov     [r14+59Ch], eax
 * 000000014077EEBF: add     [r15+5C4h], r13d
 * 000000014077EEC6: mov     ecx, 30h ; '0'
 * 000000014077EECB: mov     r14d, ebx
 * 000000014077EECE: add     r14, r15
 * 000000014077EED1: mov     [rbp+1C70h+var_1568], r14
 * 000000014077EED8: mov     rax, r14
 * 000000014077EEDB: lea     edx, [rcx-2Ah]
 * 000000014077EEDE: mov     [rax], r9
 * 000000014077EEE1: add     ecx, 0FFFFFFF8h
 * 000000014077EEE4: add     rax, 8
 * 000000014077EEE8: sub     rdx, r13
 * 000000014077EEEB: jnz     short loc_14077EEDE
 * 000000014077EEED: test    ecx, ecx
 * 000000014077EEEF: jz      short loc_14077EEFC
 * 000000014077EEF1: mov     [rax], r9b
 * 000000014077EEF4: add     rax, r13
 * 000000014077EEF7: add     ecx, 0FFFFFFFFh
 * 000000014077EEFA: jnz     short loc_14077EEF1
 * 000000014077EEFC: mov     r10, [rbp+1C70h+var_1CE0]
 * 000000014077EF00: mov     ebx, dword ptr [rsp+1D70h+NtHeaders]
 * 000000014077EF04: mov     [r14], r12d
 * 000000014077EF07: mov     [r14+8], r10
 * 000000014077EF0B: cmp     r12d, 20h ; ' '
 * 000000014077EF0F: jnz     short loc_14077EF2B
 * 000000014077EF11: test    ebx, ebx
 * 000000014077EF13: jz      short loc_14077EF2B
 * 000000014077EF15: lea     r9, [r14+18h]
 * 000000014077EF19: mov     r8d, ebx
 * 000000014077EF1C: mov     rdx, r10
 * 000000014077EF1F: mov     rcx, r15
 * 000000014077EF22: call    sub_1401588B8
 * 000000014077EF27: mov     r10, [rbp+1C70h+var_1CE0]
 * 000000014077EF2B: mov     [r14+10h], ebx
 * 000000014077EF2F: lea     rcx, [r10+rdi]
 * 000000014077EF33: add     [r15+5E0h], ebx
 * 000000014077EF3A: mov     r8, r10
 * 000000014077EF3D: mov     r9d, [r15+5CCh]
 * 000000014077EF44: mov     rax, r10
 * 000000014077EF47: mov     rdx, [r15+5D0h]
 * 000000014077EF4E: cmp     r10, rcx
 * 000000014077EF51: jnb     short loc_14077EF5F
 * 000000014077EF53: prefetchnta byte ptr [rax]
 * 000000014077EF56: add     rax, 40h ; '@'
 * 000000014077EF5A: cmp     rax, rcx
 * 000000014077EF5D: jb      short loc_14077EF53
 * 000000014077EF5F: mov     edi, ebx
 * 000000014077EF61: cmp     ebx, 8
 * 000000014077EF64: jb      short loc_14077EF83
 * 000000014077EF66: shr     rbx, 3
 * 000000014077EF6A: xor     rdx, [r8]
 * 000000014077EF6D: mov     ecx, r9d
 * 000000014077EF70: rol     rdx, cl
 * 000000014077EF73: add     r8, 8
 * 000000014077EF77: add     edi, 0FFFFFFF8h
 * 000000014077EF7A: sub     rbx, r13
 * 000000014077EF7D: jnz     short loc_14077EF6A
 * 000000014077EF7F: mov     ebx, dword ptr [rsp+1D70h+NtHeaders]
 * 000000014077EF83: test    edi, edi
 * 000000014077EF85: jz      short loc_14077EF9C
 * 000000014077EF87: movzx   eax, byte ptr [r8]
 * 000000014077EF8B: mov     ecx, r9d
 * 000000014077EF8E: xor     rdx, rax
 * 000000014077EF91: add     r8, r13
 * 000000014077EF94: rol     rdx, cl
 * 000000014077EF97: add     edi, 0FFFFFFFFh
 * 000000014077EF9A: jnz     short loc_14077EF87
 * 000000014077EF9C: mov     rax, rdx
 * 000000014077EF9F: jmp     short loc_14077EFA3
 * 000000014077EFA1: xor     edx, eax
 * 000000014077EFA3: shr     rax, 1Fh
 * 000000014077EFA7: test    rax, rax
 * 000000014077EFAA: jnz     short loc_14077EFA1
 * 000000014077EFAC: btr     edx, 1Fh
 * 000000014077EFB0: mov     edi, 0C0000225h
 * 000000014077EFB5: mov     [r14+14h], edx
 * 000000014077EFB9: mov     rax, [rbp+1C70h+var_1568]
 * 000000014077EFC0: mov     [rbp+1C70h+var_1560], rax
 * 000000014077EFC7: add     [r15+5E0h], ebx
 * 000000014077EFCE: mov     rbx, [r15+470h]
 * 000000014077EFD5: mov     r14, [rbp+1C70h+var_1560]
 * 000000014077EFDC: add     rbx, 10h
 * 000000014077EFE0: mov     rcx, [r15+488h]
 * 000000014077EFE7: mov     r12, cr8
 * 000000014077EFEB: mov     eax, 0Fh
 * 000000014077EFF0: mov     cr8, rax
 * 000000014077EFF4: call    qword ptr [r15+138h]
 * 000000014077EFFB: mov     rax, [r15+470h]
 * 000000014077F002: mov     ecx, [rax]
 * 000000014077F004: lea     rax, [rcx+rcx*2]
 * 000000014077F008: lea     rcx, [rbx+rax*8]
 * 000000014077F00C: mov     rax, [rsp+1D70h+var_1D20]
 * 000000014077F011: cmp     [rbx+8], rax
 * 000000014077F015: jz      short loc_14077F022
 * 000000014077F017: add     rbx, 18h
 * 000000014077F01B: cmp     rbx, rcx
 * 000000014077F01E: jnb     short loc_14077F039
 * 000000014077F020: jmp     short loc_14077F011
 * 000000014077F022: movups  xmm0, xmmword ptr [rbx]
 * 000000014077F025: xor     eax, eax
 * 000000014077F027: mov     edi, eax
 * 000000014077F029: movups  xmmword ptr [r14+18h], xmm0
 * 000000014077F02E: movsd   xmm1, qword ptr [rbx+10h]
 * 000000014077F033: movsd   qword ptr [r14+28h], xmm1
 * 000000014077F039: mov     rcx, [r15+488h]
 * 000000014077F040: call    qword ptr [r15+178h]
 * 000000014077F047: movzx   eax, r12b
 * 000000014077F04B: mov     cr8, rax
 * 000000014077F04F: test    edi, edi
 * 000000014077F051: jns     short loc_14077F08F
 * 000000014077F053: mov     rax, [rbp+1C70h+var_1560]
 * 000000014077F05A: mov     ecx, 18h
 * 000000014077F05F: add     rax, rcx
 * 000000014077F062: xor     ebx, ebx
 * 000000014077F064: lea     edx, [rcx-15h]
 * 000000014077F067: mov     [rax], rbx
 * 000000014077F06A: add     ecx, 0FFFFFFF8h
 * 000000014077F06D: add     rax, 8
 * 000000014077F071: sub     rdx, r13
 * 000000014077F074: jnz     short loc_14077F067
 * 000000014077F076: test    ecx, ecx
 * 000000014077F078: jz      short loc_14077F084
 * 000000014077F07A: mov     [rax], bl
 * 000000014077F07C: add     rax, r13
 * 000000014077F07F: add     ecx, 0FFFFFFFFh
 * 000000014077F082: jnz     short loc_14077F07A
 * 000000014077F084: mov     rax, [rbp+1C70h+var_1560]
 * 000000014077F08B: mov     [rax+18h], r13
 * 000000014077F08F: mov     rax, [rbp+1C70h+var_1560]
 * 000000014077F096: mov     edx, dword ptr [rbp+1C70h+var_1CC8]
 * 000000014077F099: add     rax, 30h ; '0'
 * 000000014077F09D: mov     [rbp+1C70h+var_1CD8], rax
 * 000000014077F0A1: cmp     edx, 8
 * 000000014077F0A4: jb      short loc_14077F0BF
 * 000000014077F0A6: mov     ecx, edx
 * 000000014077F0A8: shr     rcx, 3
 * 000000014077F0AC: mov     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
 * 000000014077F0B3: add     edx, 0FFFFFFF8h
 * 000000014077F0B6: add     rax, 8
 * 000000014077F0BA: sub     rcx, r13
 * 000000014077F0BD: jnz     short loc_14077F0AC
 * 000000014077F0BF: test    edx, edx
 * 000000014077F0C1: jz      short loc_14077F0CE
 * 000000014077F0C3: mov     byte ptr [rax], 0FFh
 * 000000014077F0C6: add     rax, r13
 * 000000014077F0C9: add     edx, 0FFFFFFFFh
 * 000000014077F0CC: jnz     short loc_14077F0C3
 * 000000014077F0CE: mov     rdx, [rbp+1C70h+var_1CE0]
 * 000000014077F0D2: or      ebx, 0FFFFFFFFh
 * 000000014077F0D5: mov     eax, dword ptr [rsp+1D70h+Src]
 * 000000014077F0D9: mov     r12, rdx
 * 000000014077F0DC: mov     dword ptr [rsp+1D70h+var_1D08], ebx
 * 000000014077F0E0: mov     r8d, [rdx]
 * 000000014077F0E3: lea     rcx, [rax+rax*2]
 * 000000014077F0E7: lea     rax, [rdx+rcx*4]
 * 000000014077F0EB: mov     rdx, [rsp+1D70h+var_1D20]
 * 000000014077F0F0: mov     rcx, [rsp+78h]
 * 000000014077F0F5: mov     [rsp+1D70h+Src], rax
 * 000000014077F0FA: xor     eax, eax
 * 000000014077F0FC: mov     edi, eax
 * 000000014077F0FE: mov     dword ptr [rbp+1C70h+var_1CC8], eax
 * 000000014077F101: call    qword ptr [r15+1F8h]
 * 000000014077F108: mov     r10, rax
 * 000000014077F10B: xor     eax, eax
 * 000000014077F10D: test    r10, r10
 * 000000014077F110: jz      loc_14077F41F
 * 000000014077F116: mov     r14d, eax
 * 000000014077F119: mov     eax, [r10+24h]
 * 000000014077F11D: bt      eax, 19h
 * 000000014077F121: jb      loc_14077F31C
 * 000000014077F127: mov     ecx, [r10]
 * 000000014077F12A: cmp     ecx, 54494E49h
 * 000000014077F130: jnz     short loc_14077F140
 * 000000014077F132: cmp     dword ptr [r10+4], 4742444Bh
 * 000000014077F13A: jz      loc_14077F31C
 * 000000014077F140: cmp     ecx, 45474150h
 * 000000014077F146: jnz     short loc_14077F177
 * 000000014077F148: movzx   eax, word ptr [r10+4]
 * 000000014077F14D: mov     edx, 7777h
 * 000000014077F152: cmp     ax, dx
 * 000000014077F155: jz      loc_14077F31C
 * 000000014077F15B: mov     edx, 7277h
 * 000000014077F160: cmp     ax, dx
 * 000000014077F163: jz      loc_14077F31C
 * 000000014077F169: mov     edx, 7877h
 * 000000014077F16E: cmp     ax, dx
 * 000000014077F171: jz      loc_14077F31C
 * 000000014077F177: cmp     ecx, 41525245h
 * 000000014077F17D: jnz     short loc_14077F18F
 * 000000014077F17F: mov     eax, 4154h
 * 000000014077F184: cmp     [r10+4], ax
 * 000000014077F189: jz      loc_14077F31C
 * 000000014077F18F: mov     rax, [r15+690h]
 * 000000014077F196: mov     rdi, r10
 * 000000014077F199: mov     rbx, [r15+688h]
 * 000000014077F1A0: mov     r8d, 7
 * 000000014077F1A6: mov     [rbp+1C70h+var_DA8], rax
 * 000000014077F1AD: sub     rdi, rbx
 * 000000014077F1B0: mov     rax, [r15+698h]
 * 000000014077F1B7: or      r9d, 0FFFFFFFFh
 * 000000014077F1BB: mov     [rbp+1C70h+var_DA0], rax
 * 000000014077F1C2: mov     rax, [r15+6A0h]
 * 000000014077F1C9: mov     [rbp+1C70h+var_D98], rax
 * 000000014077F1D0: mov     [rbp+1C70h+var_DB0], rbx
 * 000000014077F1D7: movzx   edx, byte ptr [rdi+rbx]
 * 000000014077F1DB: movzx   eax, byte ptr [rbx]
 * 000000014077F1DE: add     rbx, r13
 * 000000014077F1E1: cmp     rdx, rax
 * 000000014077F1E4: jnz     short loc_14077F1F0
 * 000000014077F1E6: add     r8d, r9d
 * 000000014077F1E9: jnz     short loc_14077F1D7
 * 000000014077F1EB: jmp     loc_14077F287
 * 000000014077F1F0: mov     rdi, [rbp+1C70h+var_DA8]
 * 000000014077F1F7: mov     ebx, 8
 * 000000014077F1FC: mov     r8, r10
 * 000000014077F1FF: mov     rcx, [r8]
 * 000000014077F202: add     r8, 8
 * 000000014077F206: mov     rax, [rdi]
 * 000000014077F209: add     rdi, 8
 * 000000014077F20D: cmp     rcx, rax
 * 000000014077F210: jnz     short loc_14077F237
 * 000000014077F212: add     ebx, 0FFFFFFF8h
 * 000000014077F215: cmp     ebx, 8
 * 000000014077F218: jnb     short loc_14077F1FF
 * 000000014077F21A: test    ebx, ebx
 * 000000014077F21C: jz      short loc_14077F287
 * 000000014077F21E: movzx   edx, byte ptr [r8]
 * 000000014077F222: add     r8, r13
 * 000000014077F225: movzx   eax, byte ptr [rdi]
 * 000000014077F228: add     rdi, r13
 * 000000014077F22B: cmp     rdx, rax
 * 000000014077F22E: jnz     short loc_14077F237
 * 000000014077F230: add     ebx, r9d
 * 000000014077F233: jnz     short loc_14077F21E
 * 000000014077F235: jmp     short loc_14077F287
 * 000000014077F237: mov     rbx, [rbp+1C70h+var_DA0]
 * 000000014077F23E: mov     rdi, r10
 * 000000014077F241: sub     rdi, rbx
 * 000000014077F244: mov     r8d, 4
 * 000000014077F24A: movzx   edx, byte ptr [rdi+rbx]
 * 000000014077F24E: movzx   eax, byte ptr [rbx]
 * 000000014077F251: add     rbx, r13
 * 000000014077F254: cmp     rdx, rax
 * 000000014077F257: jnz     short loc_14077F260
 * 000000014077F259: add     r8d, r9d
 * 000000014077F25C: jnz     short loc_14077F24A
 * 000000014077F25E: jmp     short loc_14077F287
 * 000000014077F260: mov     rbx, [rbp+1C70h+var_D98]
 * 000000014077F267: mov     rdi, r10
 * 000000014077F26A: sub     rdi, rbx
 * 000000014077F26D: mov     r8d, 6
 * 000000014077F273: movzx   edx, byte ptr [rdi+rbx]
 * 000000014077F277: movzx   eax, byte ptr [rbx]
 * 000000014077F27A: add     rbx, r13
 * 000000014077F27D: cmp     rdx, rax
 * 000000014077F280: jnz     short loc_14077F28A
 * 000000014077F282: add     r8d, r9d
 * 000000014077F285: jnz     short loc_14077F273
 * 000000014077F287: mov     r14d, r13d
 * 000000014077F28A: mov     edi, dword ptr [rbp+1C70h+var_1CC8]
 * 000000014077F28D: mov     ebx, dword ptr [rsp+1D70h+var_1D08]
 * 000000014077F291: mov     r8d, 80000000h
 * 000000014077F297: test    [r10+24h], r8d
 * 000000014077F29B: cmovnz  r14d, r13d
 * 000000014077F29F: xor     eax, eax
 * 000000014077F2A1: test    r14d, r14d
 * 000000014077F2A4: jz      short loc_14077F2C8
 * 000000014077F2A6: cmp     dword ptr [r10], 54494E49h
 * 000000014077F2AD: jnz     short loc_14077F2C8
 * 000000014077F2AF: cmp     dword ptr [r10+4], 4742444Bh
 * 000000014077F2B7: jnz     short loc_14077F2C8
 * 000000014077F2B9: test    dword ptr [r15+6D8h], 10000000h
 * 000000014077F2C4: cmovnz  r14d, eax
 * 000000014077F2C8: mov     ecx, [r10+8]
 * 000000014077F2CC: cmp     [r10+10h], ecx
 * 000000014077F2D0: mov     r11d, [r10+0Ch]
 * 000000014077F2D4: cmova   ecx, [r10+10h]
 * 000000014077F2D9: mov     r9, [rsp+1D70h+var_1D20]
 * 000000014077F2DE: add     r11d, ecx
 * 000000014077F2E1: mov     eax, [r12+8]
 * 000000014077F2E6: test    r13b, al
 * 000000014077F2E9: jnz     short loc_14077F2FC
 * 000000014077F2EB: cmp     eax, ebx
 * 000000014077F2ED: cmovb   ebx, eax
 * 000000014077F2F0: cmp     eax, edi
 * 000000014077F2F2: mov     dword ptr [rsp+1D70h+var_1D08], ebx
 * 000000014077F2F6: cmova   edi, eax
 * 000000014077F2F9: mov     dword ptr [rbp+1C70h+var_1CC8], edi
 * 000000014077F2FC: mov     eax, [r12]
 * 000000014077F300: mov     edx, [r12+4]
 * 000000014077F305: sub     edx, eax
 * 000000014077F307: lea     rdi, [r9+rax]
 * 000000014077F30B: test    r14d, r14d
 * 000000014077F30E: jz      short loc_14077F324
 * 000000014077F310: mov     rax, [rbp+1C70h+var_1CD8]
 * 000000014077F314: mov     [rax], r8d
 * 000000014077F317: jmp     loc_14077F3B0
 * 000000014077F31C: mov     r14d, r13d
 * 000000014077F31F: jmp     loc_14077F291
 * 000000014077F324: add     [r15+5E0h], edx
 * 000000014077F32B: mov     rax, rdi
 * 000000014077F32E: mov     r9d, [r15+5CCh]
 * 000000014077F335: mov     rbx, [r15+5D0h]
 * 000000014077F33C: mov     ecx, edx
 * 000000014077F33E: add     rcx, rdi
 * 000000014077F341: cmp     rdi, rcx
 * 000000014077F344: jnb     short loc_14077F352
 * 000000014077F346: prefetchnta byte ptr [rax]
 * 000000014077F349: add     rax, 40h ; '@'
 * 000000014077F34D: cmp     rax, rcx
 * 000000014077F350: jb      short loc_14077F346
 * 000000014077F352: cmp     edx, 8
 * 000000014077F355: jb      short loc_14077F379
 * 000000014077F357: mov     r8d, edx
 * 000000014077F35A: shr     r8, 3
 * 000000014077F35E: xor     rbx, [rdi]
 * 000000014077F361: mov     ecx, r9d
 * 000000014077F364: rol     rbx, cl
 * 000000014077F367: add     rdi, 8
 * 000000014077F36B: add     edx, 0FFFFFFF8h
 * 000000014077F36E: sub     r8, r13
 * 000000014077F371: jnz     short loc_14077F35E
 * 000000014077F373: mov     r8d, 80000000h
 * 000000014077F379: test    edx, edx
 * 000000014077F37B: jz      short loc_14077F391
 * 000000014077F37D: movzx   eax, byte ptr [rdi]
 * 000000014077F380: mov     ecx, r9d
 * 000000014077F383: xor     rbx, rax
 * 000000014077F386: add     rdi, r13
 * 000000014077F389: rol     rbx, cl
 * 000000014077F38C: add     edx, 0FFFFFFFFh
 * 000000014077F38F: jnz     short loc_14077F37D
 * 000000014077F391: mov     rax, rbx
 * 000000014077F394: jmp     short loc_14077F398
 * 000000014077F396: xor     ebx, eax
 * 000000014077F398: shr     rax, 1Fh
 * 000000014077F39C: test    rax, rax
 * 000000014077F39F: jnz     short loc_14077F396
 * 000000014077F3A1: mov     rax, [rbp+1C70h+var_1CD8]
 * 000000014077F3A5: btr     ebx, 1Fh
 * 000000014077F3A9: mov     r9, [rsp+1D70h+var_1D20]
 * 000000014077F3AE: mov     [rax], ebx
 * 000000014077F3B0: add     r12, 0Ch
 * 000000014077F3B4: cmp     r12, [rsp+1D70h+Src]
 * 000000014077F3B9: jz      loc_14077F456
 * 000000014077F3BF: add     rax, 4
 * 000000014077F3C3: mov     [rbp+1C70h+var_1CD8], rax
 * 000000014077F3C7: mov     eax, [r10+0Ch]
 * 000000014077F3CB: cmp     [r12], eax
 * 000000014077F3CF: jb      short loc_14077F3EC
 * 000000014077F3D1: mov     ecx, [r12+4]
 * 000000014077F3D6: mov     ebx, dword ptr [rsp+1D70h+var_1D08]
 * 000000014077F3DA: add     rcx, r9
 * 000000014077F3DD: mov     edi, dword ptr [rbp+1C70h+var_1CC8]
 * 000000014077F3E0: mov     eax, r11d
 * 000000014077F3E3: cmp     rcx, rax
 * 000000014077F3E6: jbe     loc_14077F2E1
 * 000000014077F3EC: mov     r8d, [r12]
 * 000000014077F3F0: mov     rdx, r9
 * 000000014077F3F3: mov     rcx, [rsp+78h]
 * 000000014077F3F8: call    qword ptr [r15+1F8h]
 * 000000014077F3FF: mov     ebx, dword ptr [rsp+1D70h+var_1D08]
 * 000000014077F403: mov     r10, rax
 * 000000014077F406: mov     edi, dword ptr [rbp+1C70h+var_1CC8]
 * 000000014077F409: xor     eax, eax
 * 000000014077F40B: test    r10, r10
 * 000000014077F40E: jnz     loc_14077F116
 * 000000014077F414: mov     rax, [rbp+1C70h+var_1588]
 * 000000014077F41B: mov     [rbp+1C70h+var_1CE8], rax
 * 000000014077F41F: mov     ecx, 0C000007Bh
 * 000000014077F424: mov     rbx, [rbp+1C70h+var_1CE8]
 * 000000014077F428: mov     r12d, 80000000h
 * 000000014077F42E: mov     [rbp+1C70h+var_15F0], rbx
 * 000000014077F435: mov     r14, rbx
 * 000000014077F438: lea     eax, [rcx+r12]
 * 000000014077F43C: test    r12d, eax
 * 000000014077F43F: jnz     loc_1407806A7
 * 000000014077F445: cmp     ecx, 0C000010Eh
 * 000000014077F44B: jz      loc_1407806A7
 * 000000014077F451: jmp     loc_140780751
 * 000000014077F456: mov     edx, dword ptr [rsp+1D70h+var_1D08]
 * 000000014077F45A: mov     ebx, dword ptr [rbp+1C70h+var_1CC8]
 * 000000014077F45D: cmp     edx, 0FFFFFFFFh
 * 000000014077F460: jnz     short loc_14077F46A
 * 000000014077F462: xor     eax, eax
 * 000000014077F464: test    ebx, ebx
 * 000000014077F466: jnz     short loc_14077F46A
 * 000000014077F468: mov     edx, eax
 * 000000014077F46A: mov     rcx, [rbp+1C70h+var_1578]
 * 000000014077F471: lea     r9, [rbp+1C70h+var_1AC4]
 * 000000014077F478: mov     eax, edx
 * 000000014077F47A: sub     ebx, edx
 * 000000014077F47C: add     rax, rcx
 * 000000014077F47F: mov     [rbp+1C70h+var_1588], r15
 * 000000014077F486: xor     r8d, r8d
 * 000000014077F489: mov     [rbp+1C70h+var_D90], rax
 * 000000014077F490: mov     dl, r13b
 * 000000014077F493: mov     [rbp+1C70h+var_1008], ebx
 * 000000014077F499: call    qword ptr [r15+1D8h]
 * 000000014077F4A0: mov     r8d, 0Ch
 * 000000014077F4A6: lea     r9, [rbp+1C70h+var_1AC4]
 * 000000014077F4AD: mov     rdx, rax
 * 000000014077F4B0: neg     rax
 * 000000014077F4B3: mov     [rbp+1C70h+var_D88], rdx
 * 000000014077F4BA: mov     dl, r13b
 * 000000014077F4BD: sbb     ecx, ecx
 * 000000014077F4BF: and     ecx, [rbp+1C70h+var_1AC4]
 * 000000014077F4C5: mov     [rbp+1C70h+var_1AC4], ecx
 * 000000014077F4CB: mov     [rbp+1C70h+var_1004], ecx
 * 000000014077F4D1: mov     rcx, [rbp+1C70h+var_1578]
 * 000000014077F4D8: call    qword ptr [r15+1D8h]
 * 000000014077F4DF: mov     [rsp+1D70h+var_1D20], rax
 * 000000014077F4E4: mov     r8d, 0Ah
 * 000000014077F4EA: mov     rdx, rax
 * 000000014077F4ED: lea     r9, [rbp+1C70h+var_1AC4]
 * 000000014077F4F4: neg     rax
 * 000000014077F4F7: mov     [rbp+1C70h+var_D80], rdx
 * 000000014077F4FE: mov     dl, r13b
 * 000000014077F501: sbb     ecx, ecx
 * 000000014077F503: and     ecx, [rbp+1C70h+var_1AC4]
 * 000000014077F509: mov     dword ptr [rsp+1D70h+var_1D08], ecx
 * 000000014077F50D: mov     [rbp+1C70h+var_1AC4], ecx
 * 000000014077F513: mov     [rbp+1C70h+var_1000], ecx
 * 000000014077F519: mov     rcx, [rbp+1C70h+var_1578]
 * 000000014077F520: call    qword ptr [r15+1D8h]
 * 000000014077F527: mov     rdx, rax
 * 000000014077F52A: neg     rax
 * 000000014077F52D: mov     eax, dword ptr [rbp+1C70h+var_1CF0]
 * 000000014077F530: sbb     ecx, ecx
 * 000000014077F532: mov     [rbp+1C70h+var_D78], rdx
 * 000000014077F539: and     ecx, [rbp+1C70h+var_1AC4]
 * 000000014077F53F: mov     [rbp+1C70h+var_1AC4], ecx
 * 000000014077F545: neg     eax
 * 000000014077F547: mov     r12d, [r15+59Ch]
 * 000000014077F54E: mov     r8d, [r15+67Ch]
 * 000000014077F555: mov     [rbp+1C70h+var_FFC], ecx
 * 000000014077F55B: sbb     ecx, ecx
 * 000000014077F55D: and     ecx, 0Bh
 * 000000014077F560: lea     eax, [r12+0C0h]
 * 000000014077F568: mov     dword ptr [rbp+1C70h+var_1CC8], ecx
 * 000000014077F56B: cmp     eax, [r15+75Ch]
 * 000000014077F572: jbe     loc_14077F65D
 * 000000014077F578: mov     edx, eax
 * 000000014077F57A: mov     rcx, r15
 * 000000014077F57D: call    sub_140251E08
 * 000000014077F582: mov     r14, rax
 * 000000014077F585: test    rax, rax
 * 000000014077F588: jz      loc_14077F649
 * 000000014077F58E: mov     edx, [r15+6D8h]
 * 000000014077F595: test    dl, 4
 * 000000014077F598: jnz     loc_14077F63F
 * 000000014077F59E: mov     ecx, [r15+59Ch]
 * 000000014077F5A5: and     edx, 20000000h
 * 000000014077F5AB: mov     rdi, [r15+580h]
 * 000000014077F5B2: neg     edx
 * 000000014077F5B4: sbb     edx, edx
 * 000000014077F5B6: and     edx, [r15+67Ch]
 * 000000014077F5BD: cmp     ecx, 8
 * 000000014077F5C0: jb      short loc_14077F5D9
 * 000000014077F5C2: mov     eax, ecx
 * 000000014077F5C4: shr     rax, 3
 * 000000014077F5C8: xor     ebx, ebx
 * 000000014077F5CA: mov     [r15], rbx
 * 000000014077F5CD: add     ecx, 0FFFFFFF8h
 * 000000014077F5D0: add     r15, 8
 * 000000014077F5D4: sub     rax, r13
 * 000000014077F5D7: jnz     short loc_14077F5CA
 * 000000014077F5D9: xor     eax, eax
 * 000000014077F5DB: test    ecx, ecx
 * 000000014077F5DD: jz      short loc_14077F5EA
 * 000000014077F5DF: mov     [r15], al
 * 000000014077F5E2: add     r15, r13
 * 000000014077F5E5: add     ecx, 0FFFFFFFFh
 * 000000014077F5E8: jnz     short loc_14077F5DF
 * 000000014077F5EA: mov     ebx, [r14+67Ch]
 * 000000014077F5F1: mov     [r14+67Ch], edx
 * 000000014077F5F8: cmp     edx, 3
 * 000000014077F5FB: jz      short loc_14077F62E
 * 000000014077F5FD: test    dword ptr [r14+6D8h], 10000000h
 * 000000014077F608: mov     rcx, rax
 * 000000014077F60B: cmovz   ecx, edx
 * 000000014077F60E: test    ecx, ecx
 * 000000014077F610: jz      short loc_14077F622
 * 000000014077F612: lea     rcx, [rdi-8]
 * 000000014077F616: mov     rdx, [rcx]
 * 000000014077F619: call    qword ptr [r14+210h]
 * 000000014077F620: jmp     short loc_14077F638
 * 000000014077F622: mov     rcx, rdi
 * 000000014077F625: call    qword ptr [r14+0E8h]
 * 000000014077F62C: jmp     short loc_14077F638
 * 000000014077F62E: mov     rcx, rdi
 * 000000014077F631: call    qword ptr [r14+348h]
 * 000000014077F638: mov     [r14+67Ch], ebx
 * 000000014077F63F: and     dword ptr [r14+6D8h], 0FFFFFFFBh
 * 000000014077F647: jmp     short loc_14077F667
 * 000000014077F649: mov     ecx, 0C000009Ah
 * 000000014077F64E: mov     [rbp+1C70h+var_15F0], r15
 * 000000014077F655: mov     r14, r15
 * 000000014077F658: jmp     loc_14077EAD8
 * 000000014077F65D: mov     r14, r15
 * 000000014077F660: mov     [r15+59Ch], eax
 * 000000014077F667: mov     esi, dword ptr [rbp+1C70h+var_1CC8]
 * 000000014077F66A: lea     rbx, [r14+r12]
 * 000000014077F66E: mov     eax, 4
 * 000000014077F673: lea     r10, [rbp+1C70h+var_1008]
 * 000000014077F67A: add     [r14+5C4h], eax
 * 000000014077F681: lea     r12, [rbp+1C70h+var_D90]
 * 000000014077F688: xor     r8d, r8d
 * 000000014077F68B: mov     [rbp+1C70h+var_1558], rbx
 * 000000014077F692: mov     [rbp+1C70h+var_1570], rbx
 * 000000014077F699: mov     r11d, eax
 * 000000014077F69C: mov     [rbp+1C70h+var_1CE8], r10
 * 000000014077F6A0: mov     [rsp+78h], rax
 * 000000014077F6A5: mov     r15d, [r10]
 * 000000014077F6A8: mov     ecx, 30h ; '0'
 * 000000014077F6AD: mov     rdi, [r12]
 * 000000014077F6B1: mov     rax, rbx
 * 000000014077F6B4: lea     edx, [rcx-2Ah]
 * 000000014077F6B7: mov     [rax], r8
 * 000000014077F6BA: add     ecx, 0FFFFFFF8h
 * 000000014077F6BD: add     rax, 8
 * 000000014077F6C1: sub     rdx, r13
 * 000000014077F6C4: jnz     short loc_14077F6B7
 * 000000014077F6C6: test    ecx, ecx
 * 000000014077F6C8: jz      short loc_14077F6D5
 * 000000014077F6CA: mov     [rax], r8b
 * 000000014077F6CD: add     rax, r13
 * 000000014077F6D0: add     ecx, 0FFFFFFFFh
 * 000000014077F6D3: jnz     short loc_14077F6CA
 * 000000014077F6D5: mov     [rbx], esi
 * 000000014077F6D7: mov     [rbx+8], rdi
 * 000000014077F6DB: cmp     esi, 20h ; ' '
 * 000000014077F6DE: jnz     short loc_14077F700
 * 000000014077F6E0: test    r15d, r15d
 * 000000014077F6E3: jz      short loc_14077F700
 * 000000014077F6E5: lea     r9, [rbx+18h]
 * 000000014077F6E9: mov     r8d, r15d
 * 000000014077F6EC: mov     rdx, rdi
 * 000000014077F6EF: mov     rcx, r14
 * 000000014077F6F2: call    sub_1401588B8
 * 000000014077F6F7: mov     r10, [rbp+1C70h+var_1CE8]
 * 000000014077F6FB: mov     r11, [rsp+78h]
 * 000000014077F700: mov     [rbx+10h], r15d
 * 000000014077F704: lea     rcx, [rdi+r15]
 * 000000014077F708: add     [r14+5E0h], r15d
 * 000000014077F70F: mov     rax, rdi
 * 000000014077F712: mov     r9d, [r14+5CCh]
 * 000000014077F719: mov     rdx, [r14+5D0h]
 * 000000014077F720: cmp     rdi, rcx
 * 000000014077F723: jnb     short loc_14077F731
 * 000000014077F725: prefetchnta byte ptr [rax]
 * 000000014077F728: add     rax, 40h ; '@'
 * 000000014077F72C: cmp     rax, rcx
 * 000000014077F72F: jb      short loc_14077F725
 * 000000014077F731: mov     r8d, r15d
 * 000000014077F734: cmp     r15d, 8
 * 000000014077F738: jb      short loc_14077F757
 * 000000014077F73A: mov     rax, r15
 * 000000014077F73D: shr     rax, 3
 * 000000014077F741: xor     rdx, [rdi]
 * 000000014077F744: mov     ecx, r9d
 * 000000014077F747: rol     rdx, cl
 * 000000014077F74A: add     rdi, 8
 * 000000014077F74E: add     r8d, 0FFFFFFF8h
 * 000000014077F752: sub     rax, r13
 * 000000014077F755: jnz     short loc_14077F741
 * 000000014077F757: test    r8d, r8d
 * 000000014077F75A: jz      short loc_14077F771
 * 000000014077F75C: movzx   eax, byte ptr [rdi]
 * 000000014077F75F: mov     ecx, r9d
 * 000000014077F762: xor     rdx, rax
 * 000000014077F765: add     rdi, r13
 * 000000014077F768: rol     rdx, cl
 * 000000014077F76B: add     r8d, 0FFFFFFFFh
 * 000000014077F76F: jnz     short loc_14077F75C
 * 000000014077F771: mov     rax, rdx
 * 000000014077F774: shr     rax, 1Fh
 * 000000014077F778: xor     r8d, r8d
 * 000000014077F77B: jmp     short loc_14077F783
 * 000000014077F77D: xor     edx, eax
 * 000000014077F77F: shr     rax, 1Fh
 * 000000014077F783: test    rax, rax
 * 000000014077F786: jnz     short loc_14077F77D
 * 000000014077F788: btr     edx, 1Fh
 * 000000014077F78C: lea     edi, [rax+4]
 * 000000014077F78F: mov     [rbx+14h], edx
 * 000000014077F792: add     r10, rdi
 * 000000014077F795: add     [r14+5E0h], r15d
 * 000000014077F79C: add     r12, 8
 * 000000014077F7A0: mov     rbx, [rbp+1C70h+var_1558]
 * 000000014077F7A7: add     rbx, 30h ; '0'
 * 000000014077F7AB: mov     [rbp+1C70h+var_1CE8], r10
 * 000000014077F7AF: sub     r11, r13
 * 000000014077F7B2: mov     [rbp+1C70h+var_1558], rbx
 * 000000014077F7B9: mov     [rsp+78h], r11
 * 000000014077F7BE: jnz     loc_14077F6A5
 * 000000014077F7C4: mov     ebx, dword ptr [rbp+1C70h+var_1CA8]
 * 000000014077F7C7: mov     rcx, [rbp+1C70h+var_1570]
 * 000000014077F7CE: and     ebx, r13d
 * 000000014077F7D1: mov     eax, dword ptr [rbp+1C70h+var_1CF0]
 * 000000014077F7D4: add     rcx, 60h ; '`'
 * 000000014077F7D8: neg     eax
 * 000000014077F7DA: mov     [rbp+1C70h+var_1588], r14
 * 000000014077F7E1: mov     dword ptr [rbp+1C70h+var_1CC8], ebx
 * 000000014077F7E4: sbb     r15d, r15d
 * 000000014077F7E7: mov     [rbp+1C70h+var_1550], rcx
 * 000000014077F7EE: neg     r15d
 * 000000014077F7F1: add     r15d, 0Dh
 * 000000014077F7F5: test    rcx, rcx
 * 000000014077F7F8: jnz     loc_14077FA17
 * 000000014077F7FE: mov     r12d, [r14+59Ch]
 * 000000014077F805: mov     r8d, [r14+67Ch]
 * 000000014077F80C: lea     eax, [r12+30h]
 * 000000014077F811: cmp     eax, [r14+75Ch]
 * 000000014077F818: jbe     loc_14077F8F9
 * 000000014077F81E: mov     edx, eax
 * 000000014077F820: mov     rcx, r14
 * 000000014077F823: call    sub_140251E08
 * 000000014077F828: mov     rbx, rax
 * 000000014077F82B: test    rax, rax
 * 000000014077F82E: jz      loc_14077F8E8
 * 000000014077F834: mov     edx, [r14+6D8h]
 * 000000014077F83B: test    dil, dl
 * 000000014077F83E: jnz     loc_14077F8DF
 * 000000014077F844: mov     ecx, [r14+59Ch]
 * 000000014077F84B: and     edx, 20000000h
 * 000000014077F851: mov     r8, [r14+580h]
 * 000000014077F858: neg     edx
 * 000000014077F85A: sbb     edx, edx
 * 000000014077F85C: and     edx, [r14+67Ch]
 * 000000014077F863: cmp     ecx, 8
 * 000000014077F866: jb      short loc_14077F880
 * 000000014077F868: mov     eax, ecx
 * 000000014077F86A: shr     rax, 3
 * 000000014077F86E: xor     r9d, r9d
 * 000000014077F871: mov     [r14], r9
 * 000000014077F874: add     ecx, 0FFFFFFF8h
 * 000000014077F877: add     r14, 8
 * 000000014077F87B: sub     rax, r13
 * 000000014077F87E: jnz     short loc_14077F871
 * 000000014077F880: xor     eax, eax
 * 000000014077F882: test    ecx, ecx
 * 000000014077F884: jz      short loc_14077F891
 * 000000014077F886: mov     [r14], al
 * 000000014077F889: add     r14, r13
 * 000000014077F88C: add     ecx, 0FFFFFFFFh
 * 000000014077F88F: jnz     short loc_14077F886
 * 000000014077F891: mov     edi, [rbx+67Ch]
 * 000000014077F897: mov     [rbx+67Ch], edx
 * 000000014077F89D: cmp     edx, 3
 * 000000014077F8A0: jz      short loc_14077F8D0
 * 000000014077F8A2: test    dword ptr [rbx+6D8h], 10000000h
 * 000000014077F8AC: mov     rcx, rax
 * 000000014077F8AF: cmovz   ecx, edx
 * 000000014077F8B2: test    ecx, ecx
 * 000000014077F8B4: jz      short loc_14077F8C5
 * 000000014077F8B6: lea     rcx, [r8-8]
 * 000000014077F8BA: mov     rdx, [rcx]
 * 000000014077F8BD: call    qword ptr [rbx+210h]
 * 000000014077F8C3: jmp     short loc_14077F8D9
 * 000000014077F8C5: mov     rcx, r8
 * 000000014077F8C8: call    qword ptr [rbx+0E8h]
 * 000000014077F8CE: jmp     short loc_14077F8D9
 * 000000014077F8D0: mov     rcx, r8
 * 000000014077F8D3: call    qword ptr [rbx+348h]
 * 000000014077F8D9: mov     [rbx+67Ch], edi
 * 000000014077F8DF: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 000000014077F8E6: jmp     short loc_14077F903
 * 000000014077F8E8: mov     ecx, 0C000009Ah
 * 000000014077F8ED: mov     [rbp+1C70h+var_15F0], r14
 * 000000014077F8F4: jmp     loc_14077EAD8
 * 000000014077F8F9: mov     rbx, r14
 * 000000014077F8FC: mov     [r14+59Ch], eax
 * 000000014077F903: add     [rbx+5C4h], r13d
 * 000000014077F90A: lea     r14, [rbx+r12]
 * 000000014077F90E: mov     ecx, 30h ; '0'
 * 000000014077F913: mov     [rbp+1C70h+var_1548], r14
 * 000000014077F91A: mov     rax, r14
 * 000000014077F91D: xor     edi, edi
 * 000000014077F91F: lea     edx, [rcx-2Ah]
 * 000000014077F922: mov     [rax], rdi
 * 000000014077F925: add     ecx, 0FFFFFFF8h
 * 000000014077F928: add     rax, 8
 * 000000014077F92C: sub     rdx, r13
 * 000000014077F92F: jnz     short loc_14077F922
 * 000000014077F931: test    ecx, ecx
 * 000000014077F933: jz      short loc_14077F940
 * 000000014077F935: mov     [rax], dil
 * 000000014077F938: add     rax, r13
 * 000000014077F93B: add     ecx, 0FFFFFFFFh
 * 000000014077F93E: jnz     short loc_14077F935
 * 000000014077F940: mov     r12, [rsp+1D70h+var_1D20]
 * 000000014077F945: cmp     r15d, 20h ; ' '
 * 000000014077F949: mov     [r14], r15d
 * 000000014077F94C: mov     r15d, dword ptr [rsp+1D70h+var_1D08]
 * 000000014077F951: mov     [r14+8], r12
 * 000000014077F955: jnz     short loc_14077F96E
 * 000000014077F957: test    r15d, r15d
 * 000000014077F95A: jz      short loc_14077F96E
 * 000000014077F95C: lea     r9, [r14+18h]
 * 000000014077F960: mov     r8d, r15d
 * 000000014077F963: mov     rdx, r12
 * 000000014077F966: mov     rcx, rbx
 * 000000014077F969: call    sub_1401588B8
 * 000000014077F96E: mov     [r14+10h], r15d
 * 000000014077F972: mov     r8, r12
 * 000000014077F975: add     [rbx+5E0h], r15d
 * 000000014077F97C: mov     rax, r12
 * 000000014077F97F: mov     r9d, [rbx+5CCh]
 * 000000014077F986: mov     rdx, [rbx+5D0h]
 * 000000014077F98D: mov     ecx, r15d
 * 000000014077F990: add     rcx, r12
 * 000000014077F993: cmp     r12, rcx
 * 000000014077F996: jnb     short loc_14077F9A4
 * 000000014077F998: prefetchnta byte ptr [rax]
 * 000000014077F99B: add     rax, 40h ; '@'
 * 000000014077F99F: cmp     rax, rcx
 * 000000014077F9A2: jb      short loc_14077F998
 * 000000014077F9A4: mov     edi, r15d
 * 000000014077F9A7: cmp     r15d, 8
 * 000000014077F9AB: jb      short loc_14077F9C9
 * 000000014077F9AD: mov     eax, r15d
 * 000000014077F9B0: shr     rax, 3
 * 000000014077F9B4: xor     rdx, [r8]
 * 000000014077F9B7: mov     ecx, r9d
 * 000000014077F9BA: rol     rdx, cl
 * 000000014077F9BD: add     r8, 8
 * 000000014077F9C1: add     edi, 0FFFFFFF8h
 * 000000014077F9C4: sub     rax, r13
 * 000000014077F9C7: jnz     short loc_14077F9B4
 * 000000014077F9C9: test    edi, edi
 * 000000014077F9CB: jz      short loc_14077F9E2
 * 000000014077F9CD: movzx   eax, byte ptr [r8]
 * 000000014077F9D1: mov     ecx, r9d
 * 000000014077F9D4: xor     rdx, rax
 * 000000014077F9D7: add     r8, r13
 * 000000014077F9DA: rol     rdx, cl
 * 000000014077F9DD: add     edi, 0FFFFFFFFh
 * 000000014077F9E0: jnz     short loc_14077F9CD
 * 000000014077F9E2: mov     rax, rdx
 * 000000014077F9E5: jmp     short loc_14077F9E9
 * 000000014077F9E7: xor     edx, eax
 * 000000014077F9E9: shr     rax, 1Fh
 * 000000014077F9ED: test    rax, rax
 * 000000014077F9F0: jnz     short loc_14077F9E7
 * 000000014077F9F2: btr     edx, 1Fh
 * 000000014077F9F6: mov     [r14+14h], edx
 * 000000014077F9FA: mov     r14, rbx
 * 000000014077F9FD: mov     rax, [rbp+1C70h+var_1548]
 * 000000014077FA04: mov     [rbp+1C70h+var_1550], rax
 * 000000014077FA0B: add     [rbx+5E0h], r15d
 * 000000014077FA12: mov     ebx, dword ptr [rbp+1C70h+var_1CC8]
 * 000000014077FA15: jmp     short loc_14077FA24
 * 000000014077FA17: mov     r12, [rsp+1D70h+var_1D20]
 * 000000014077FA1C: mov     [rcx], r15d
 * 000000014077FA1F: mov     r15d, dword ptr [rsp+1D70h+var_1D08]
 * 000000014077FA24: test    dword ptr [r14+6D8h], 40000000h
 * 000000014077FA2F: jz      short loc_14077FA4F
 * 000000014077FA31: test    r15d, r15d
 * 000000014077FA34: jz      short loc_14077FA4F
 * 000000014077FA36: mov     r9, [rbp+1C70h+var_1550]
 * 000000014077FA3D: mov     r8d, r15d
 * 000000014077FA40: add     r9, 1Ch
 * 000000014077FA44: mov     rdx, r12
 * 000000014077FA47: mov     rcx, r14
 * 000000014077FA4A: call    sub_1401588B8
 * 000000014077FA4F: mov     rax, [rbp+1C70h+var_1550]
 * 000000014077FA56: xor     ecx, ecx
 * 000000014077FA58: mov     [rax+18h], ecx
 * 000000014077FA5B: xor     eax, eax
 * 000000014077FA5D: test    ebx, ebx
 * 000000014077FA5F: jz      short loc_14077FA6E
 * 000000014077FA61: mov     rax, [rbp+1C70h+var_1550]
 * 000000014077FA68: or      [rax+18h], r13d
 * 000000014077FA6C: xor     eax, eax
 * 000000014077FA6E: mov     rbx, [rbp+1C70h+var_1570]
 * 000000014077FA75: xor     r12d, r12d
 * 000000014077FA78: cmp     dword ptr [rbp+1C70h+var_1CF0], r12d
 * 000000014077FA7C: mov     rdi, [rbp+1C70h+var_1578]
 * 000000014077FA83: setnz   al
 * 000000014077FA86: mov     [rbp+1C70h+var_1588], r14
 * 000000014077FA8D: mov     dword ptr [rbx+90h], 23h ; '#'
 * 000000014077FA97: xor     eax, [rbx+0B8h]
 * 000000014077FA9D: and     eax, r13d
 * 000000014077FAA0: xor     [rbx+0B8h], eax
 * 000000014077FAA6: cmp     dword ptr [rbx+0A0h], 94h
 * 000000014077FAB0: jb      short loc_14077FB17
 * 000000014077FAB2: mov     r15, [rbx+98h]
 * 000000014077FAB9: mov     rcx, rdi
 * 000000014077FABC: call    qword ptr [r14+1E0h]
 * 000000014077FAC3: test    rax, rax
 * 000000014077FAC6: jz      loc_14077F8E8
 * 000000014077FACC: mov     ecx, [rax+50h]
 * 000000014077FACF: or      dword ptr [rbx+0B8h], 2
 * 000000014077FAD6: add     rcx, rdi
 * 000000014077FAD9: mov     rax, [r15+70h]
 * 000000014077FADD: cmp     rax, rdi
 * 000000014077FAE0: jb      short loc_14077FAF8
 * 000000014077FAE2: cmp     rax, rcx
 * 000000014077FAE5: jnb     short loc_14077FAF8
 * 000000014077FAE7: mov     rax, [rax]
 * 000000014077FAEA: mov     [rbx+0A8h], rax
 * 000000014077FAF1: or      dword ptr [rbx+0B8h], 4
 * 000000014077FAF8: mov     rax, [r15+78h]
 * 000000014077FAFC: cmp     rax, rdi
 * 000000014077FAFF: jb      short loc_14077FB17
 * 000000014077FB01: cmp     rax, rcx
 * 000000014077FB04: jnb     short loc_14077FB17
 * 000000014077FB06: mov     rax, [rax]
 * 000000014077FB09: mov     [rbx+0B0h], rax
 * 000000014077FB10: or      dword ptr [rbx+0B8h], 8
 * 000000014077FB17: test    dword ptr [r14+6D8h], 400000h
 * 000000014077FB22: mov     rbx, r14
 * 000000014077FB25: mov     r15, [rbp+1C70h+var_1578]
 * 000000014077FB2C: mov     [rbp+1C70h+var_1CE8], rbx
 * 000000014077FB30: mov     [rbp+1C70h+var_1588], rbx
 * 000000014077FB37: mov     [rsp+1D70h+var_1D20], r15
 * 000000014077FB3C: jz      loc_14078068A
 * 000000014077FB42: mov     rcx, r15
 * 000000014077FB45: call    qword ptr [r14+1E0h]
 * 000000014077FB4C: mov     [rsp+78h], rax
 * 000000014077FB51: mov     r12, rax
 * 000000014077FB54: test    rax, rax
 * 000000014077FB57: jnz     short loc_14077FB63
 * 000000014077FB59: mov     ecx, 0C000007Bh
 * 000000014077FB5E: jmp     loc_14077F428
 * 000000014077FB63: mov     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 000000014077FB67: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014077FB71: mul     rcx
 * 000000014077FB74: xor     eax, eax
 * 000000014077FB76: mov     r9, rdx
 * 000000014077FB79: movzx   edx, word ptr [r12+6]
 * 000000014077FB7F: shr     r9, 3
 * 000000014077FB83: mov     [rbp+1C70h+var_1CD8], r9
 * 000000014077FB87: mov     word ptr [rbp+1C70h+var_1CC8], dx
 * 000000014077FB8B: test    dx, dx
 * 000000014077FB8E: jnz     short loc_14077FBE5
 * 000000014077FB90: test    dword ptr [r14+6D8h], 200000h
 * 000000014077FB9B: jz      loc_14078D6BB
 * 000000014077FBA1: cmp     [r14+650h], eax
 * 000000014077FBA8: jnz     short loc_14077FB59
 * 000000014077FBAA: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014077FBB4: add     rax, r14
 * 000000014077FBB7: mov     [r14+658h], rax
 * 000000014077FBBE: xor     eax, eax
 * 000000014077FBC0: mov     [r14+660h], rax
 * 000000014077FBC7: mov     qword ptr [r14+668h], 10Fh
 * 000000014077FBD2: mov     [r14+670h], r15
 * 000000014077FBD9: mov     [r14+650h], r13d
 * 000000014077FBE0: jmp     loc_14077FB59
 * 000000014077FBE5: mov     rdi, [rbp+1C70h+var_1CE0]
 * 000000014077FBE9: movzx   r8d, word ptr [r12+14h]
 * 000000014077FBEF: mov     rbx, rdi
 * 000000014077FBF2: mov     eax, r9d
 * 000000014077FBF5: add     r8, 18h
 * 000000014077FBF9: add     r8, r12
 * 000000014077FBFC: movzx   r10d, dx
 * 000000014077FC00: mov     [rsp+1D70h+var_1D00], r8
 * 000000014077FC05: mov     dword ptr [rsp+1D70h+var_1D08], r10d
 * 000000014077FC0A: lea     rcx, [rax+rax*2]
 * 000000014077FC0E: xor     eax, eax
 * 000000014077FC10: lea     r11, [rdi+rcx*4]
 * 000000014077FC14: mov     edi, eax
 * 000000014077FC16: mov     [rbp+1C70h+var_1CD0], r11
 * 000000014077FC1A: test    r10d, r10d
 * 000000014077FC1D: jz      loc_14077FCCC
 * 000000014077FC23: lea     r15, [r8+8]
 * 000000014077FC27: mov     ecx, [r15]
 * 000000014077FC2A: cmp     [r15+8], ecx
 * 000000014077FC2E: mov     edx, [r15+4]
 * 000000014077FC32: cmova   ecx, [r15+8]
 * 000000014077FC37: mov     dword ptr [rsp+1D70h+Src], edx
 * 000000014077FC3B: lea     r12d, [rdx+rcx]
 * 000000014077FC3F: test    edi, edi
 * 000000014077FC41: jz      short loc_14077FC55
 * 000000014077FC43: lea     eax, [rdi-1]
 * 000000014077FC46: lea     rax, [rax+rax*4]
 * 000000014077FC4A: cmp     r12d, [r8+rax*8+0Ch]
 * 000000014077FC4F: jb      loc_14077FD26
 * 000000014077FC55: cmp     rbx, r11
 * 000000014077FC58: jz      short loc_14077FCAE
 * 000000014077FC5A: mov     ecx, [rbx]
 * 000000014077FC5C: mov     eax, [rbx+4]
 * 000000014077FC5F: cmp     ecx, r12d
 * 000000014077FC62: jnb     short loc_14077FCA9
 * 000000014077FC64: cmp     eax, edx
 * 000000014077FC66: jbe     short loc_14077FCA9
 * 000000014077FC68: cmp     ecx, edx
 * 000000014077FC6A: jb      loc_14077FD86
 * 000000014077FC70: cmp     eax, r12d
 * 000000014077FC73: ja      loc_14077FD86
 * 000000014077FC79: mov     rdx, [rsp+1D70h+var_1D20]
 * 000000014077FC7E: mov     r9, rbx
 * 000000014077FC81: mov     eax, edi
 * 000000014077FC83: lea     rcx, [rax+rax*4]
 * 000000014077FC87: lea     r8, [r8+rcx*8]
 * 000000014077FC8B: mov     rcx, r14
 * 000000014077FC8E: call    $$f4
 * 000000014077FC93: mov     r11, [rbp+1C70h+var_1CD0]
 * 000000014077FC97: add     rbx, 0Ch
 * 000000014077FC9B: mov     edx, dword ptr [rsp+1D70h+Src]
 * 000000014077FC9F: mov     r8, [rsp+1D70h+var_1D00]
 * 000000014077FCA4: cmp     rbx, r11
 * 000000014077FCA7: jnz     short loc_14077FC5A
 * 000000014077FCA9: mov     r10d, dword ptr [rsp+1D70h+var_1D08]
 * 000000014077FCAE: add     edi, r13d
 * 000000014077FCB1: add     r15, 28h ; '('
 * 000000014077FCB5: cmp     edi, r10d
 * 000000014077FCB8: jb      loc_14077FC27
 * 000000014077FCBE: mov     r9, [rbp+1C70h+var_1CD8]
 * 000000014077FCC2: mov     r12, [rsp+78h]
 * 000000014077FCC7: mov     r15, [rsp+1D70h+var_1D20]
 * 000000014077FCCC: cmp     rbx, r11
 * 000000014077FCCF: jz      loc_14077FD9A
 * 000000014077FCD5: xor     eax, eax
 * 000000014077FCD7: test    dword ptr [r14+6D8h], 200000h
 * 000000014077FCE2: jz      loc_14078D70E
 * 000000014077FCE8: cmp     [r14+650h], eax
 * 000000014077FCEF: jnz     loc_14077F41F
 * 000000014077FCF5: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014077FCFF: add     rax, r14
 * 000000014077FD02: mov     [r14+658h], rax
 * 000000014077FD09: xor     eax, eax
 * 000000014077FD0B: mov     [r14+660h], rax
 * 000000014077FD12: mov     qword ptr [r14+668h], 10Fh
 * 000000014077FD1D: mov     [r14+670h], r15
 * 000000014077FD24: jmp     short loc_14077FD7A
 * 000000014077FD26: xor     eax, eax
 * 000000014077FD28: test    dword ptr [r14+6D8h], 200000h
 * 000000014077FD33: jz      loc_14078D6E3
 * 000000014077FD39: cmp     [r14+650h], eax
 * 000000014077FD40: jnz     loc_14077F41F
 * 000000014077FD46: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014077FD50: add     rax, r14
 * 000000014077FD53: mov     [r14+658h], rax
 * 000000014077FD5A: xor     eax, eax
 * 000000014077FD5C: mov     [r14+660h], rax
 * 000000014077FD63: mov     rax, [rsp+1D70h+var_1D20]
 * 000000014077FD68: mov     qword ptr [r14+668h], 10Fh
 * 000000014077FD73: mov     [r14+670h], rax
 * 000000014077FD7A: mov     [r14+650h], r13d
 * 000000014077FD81: jmp     loc_14077F41F
 * 000000014077FD86: xor     eax, eax
 * 000000014077FD88: test    dword ptr [r14+6D8h], 200000h
 * 000000014077FD93: jnz     short loc_14077FD39
 * 000000014077FD95: jmp     loc_14078D636
 * 000000014077FD9A: mov     r15d, [r14+59Ch]
 * 000000014077FDA1: lea     ecx, [r9+6]
 * 000000014077FDA5: mov     r8d, [r14+67Ch]
 * 000000014077FDAC: lea     eax, [r10+2]
 * 000000014077FDB0: lea     eax, [rax+rax*2]
 * 000000014077FDB3: mov     ebx, 0FFFFFFF8h
 * 000000014077FDB8: and     ecx, ebx
 * 000000014077FDBA: lea     eax, [rcx+rax*8]
 * 000000014077FDBD: add     eax, r15d
 * 000000014077FDC0: cmp     eax, [r14+75Ch]
 * 000000014077FDC7: jbe     loc_14077FEB1
 * 000000014077FDCD: mov     edx, eax
 * 000000014077FDCF: mov     rcx, r14
 * 000000014077FDD2: call    sub_140251E08
 * 000000014077FDD7: mov     [rsp+78h], rax
 * 000000014077FDDC: mov     r11, rax
 * 000000014077FDDF: test    rax, rax
 * 000000014077FDE2: jz      loc_14077EEAB
 * 000000014077FDE8: mov     edx, [r14+6D8h]
 * 000000014077FDEF: test    dl, 4
 * 000000014077FDF2: jnz     loc_14077FE9E
 * 000000014077FDF8: mov     ecx, [r14+59Ch]
 * 000000014077FDFF: and     edx, 20000000h
 * 000000014077FE05: mov     rdi, [r14+580h]
 * 000000014077FE0C: neg     edx
 * 000000014077FE0E: sbb     edx, edx
 * 000000014077FE10: and     edx, [r14+67Ch]
 * 000000014077FE17: cmp     ecx, 8
 * 000000014077FE1A: jb      short loc_14077FE33
 * 000000014077FE1C: mov     eax, ecx
 * 000000014077FE1E: shr     rax, 3
 * 000000014077FE22: xor     r9d, r9d
 * 000000014077FE25: mov     [r14], r9
 * 000000014077FE28: add     ecx, ebx
 * 000000014077FE2A: add     r14, 8
 * 000000014077FE2E: sub     rax, r13
 * 000000014077FE31: jnz     short loc_14077FE25
 * 000000014077FE33: xor     eax, eax
 * 000000014077FE35: test    ecx, ecx
 * 000000014077FE37: jz      short loc_14077FE44
 * 000000014077FE39: mov     [r14], al
 * 000000014077FE3C: add     r14, r13
 * 000000014077FE3F: add     ecx, 0FFFFFFFFh
 * 000000014077FE42: jnz     short loc_14077FE39
 * 000000014077FE44: mov     ebx, [r11+67Ch]
 * 000000014077FE4B: mov     [r11+67Ch], edx
 * 000000014077FE52: cmp     edx, 3
 * 000000014077FE55: jz      short loc_14077FE88
 * 000000014077FE57: test    dword ptr [r11+6D8h], 10000000h
 * 000000014077FE62: mov     rcx, rax
 * 000000014077FE65: cmovz   ecx, edx
 * 000000014077FE68: test    ecx, ecx
 * 000000014077FE6A: jz      short loc_14077FE7C
 * 000000014077FE6C: lea     rcx, [rdi-8]
 * 000000014077FE70: mov     rdx, [rcx]
 * 000000014077FE73: call    qword ptr [r11+210h]
 * 000000014077FE7A: jmp     short loc_14077FE92
 * 000000014077FE7C: mov     rcx, rdi
 * 000000014077FE7F: call    qword ptr [r11+0E8h]
 * 000000014077FE86: jmp     short loc_14077FE92
 * 000000014077FE88: mov     rcx, rdi
 * 000000014077FE8B: call    qword ptr [r11+348h]
 * 000000014077FE92: mov     r11, [rsp+78h]
 * 000000014077FE97: mov     [r11+67Ch], ebx
 * 000000014077FE9E: and     dword ptr [r11+6D8h], 0FFFFFFFBh
 * 000000014077FEA6: mov     r9, [rbp+1C70h+var_1CD8]
 * 000000014077FEAA: mov     r10d, dword ptr [rsp+1D70h+var_1D08]
 * 000000014077FEAF: jmp     short loc_14077FEC0
 * 000000014077FEB1: mov     r11, r14
 * 000000014077FEB4: mov     [rsp+78h], r14
 * 000000014077FEB9: mov     [r14+59Ch], eax
 * 000000014077FEC0: add     [r11+5C4h], r13d
 * 000000014077FEC7: lea     rdx, [r11+r15]
 * 000000014077FECB: mov     ecx, 30h ; '0'
 * 000000014077FED0: mov     [rbp+1C70h+var_1530], rdx
 * 000000014077FED7: mov     rax, rdx
 * 000000014077FEDA: xor     edi, edi
 * 000000014077FEDC: lea     ebx, [rcx-2Ah]
 * 000000014077FEDF: mov     [rax], rdi
 * 000000014077FEE2: add     ecx, 0FFFFFFF8h
 * 000000014077FEE5: add     rax, 8
 * 000000014077FEE9: sub     rbx, r13
 * 000000014077FEEC: jnz     short loc_14077FEDF
 * 000000014077FEEE: test    ecx, ecx
 * 000000014077FEF0: jz      short loc_14077FEFD
 * 000000014077FEF2: mov     [rax], dil
 * 000000014077FEF5: add     rax, r13
 * 000000014077FEF8: add     ecx, 0FFFFFFFFh
 * 000000014077FEFB: jnz     short loc_14077FEF2
 * 000000014077FEFD: mov     rax, [rbp+1C70h+var_1CE0]
 * 000000014077FF01: mov     dword ptr [rdx], 1Eh
 * 000000014077FF07: mov     [rdx+8], rax
 * 000000014077FF0B: xor     eax, eax
 * 000000014077FF0D: mov     [rdx+10h], eax
 * 000000014077FF10: mov     rcx, [r11+5D0h]
 * 000000014077FF17: mov     rax, rcx
 * 000000014077FF1A: jmp     short loc_14077FF1E
 * 000000014077FF1C: xor     ecx, eax
 * 000000014077FF1E: shr     rax, 1Fh
 * 000000014077FF22: test    rax, rax
 * 000000014077FF25: jnz     short loc_14077FF1C
 * 000000014077FF27: mov     r8, [rsp+1D70h+var_1D20]
 * 000000014077FF2C: lea     ebx, [r9-1]
 * 000000014077FF30: btr     ecx, 1Fh
 * 000000014077FF34: mov     r14, r11
 * 000000014077FF37: mov     [rdx+14h], ecx
 * 000000014077FF3A: xor     edx, edx
 * 000000014077FF3C: mov     rax, [rbp+1C70h+var_1530]
 * 000000014077FF43: mov     [rbp+1C70h+var_1528], rax
 * 000000014077FF4A: mov     [rax+18h], r8
 * 000000014077FF4E: mov     ecx, [r12+50h]
 * 000000014077FF53: mov     rax, [rbp+1C70h+var_1528]
 * 000000014077FF5A: mov     r12, [rbp+1C70h+var_1CE0]
 * 000000014077FF5E: mov     [rax+20h], ecx
 * 000000014077FF61: mov     rax, [rbp+1C70h+var_1528]
 * 000000014077FF68: mov     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 000000014077FF6C: mov     [rax+24h], ecx
 * 000000014077FF6F: mov     rax, [rbp+1C70h+var_1528]
 * 000000014077FF76: movzx   ecx, word ptr [rbp+1C70h+var_1CC8]
 * 000000014077FF7A: mov     [rax+28h], cx
 * 000000014077FF7E: xor     eax, eax
 * 000000014077FF80: cmp     dword ptr [rbp+1C70h+var_1CF0], edx
 * 000000014077FF83: mov     rcx, [rbp+1C70h+var_1528]
 * 000000014077FF8A: setnz   al
 * 000000014077FF8D: add     rbx, 7
 * 000000014077FF91: and     rbx, 0FFFFFFFFFFFFFFF8h
 * 000000014077FF95: xor     ax, [rcx+2Ah]
 * 000000014077FF99: and     ax, r13w
 * 000000014077FF9D: xor     [rcx+2Ah], ax
 * 000000014077FFA1: mov     rcx, [rbp+1C70h+var_1528]
 * 000000014077FFA8: movzx   eax, word ptr [rcx+28h]
 * 000000014077FFAC: lea     rdx, [rcx+30h]
 * 000000014077FFB0: add     rbx, rdx
 * 000000014077FFB3: mov     [rbp+1C70h+var_1CE8], rdx
 * 000000014077FFB7: mov     [rbp+1C70h+var_1CD8], rbx
 * 000000014077FFBB: lea     rcx, [rax+rax*2]
 * 000000014077FFBF: lea     rdi, [rbx+rcx*8]
 * 000000014077FFC3: mov     [rbp+1C70h+var_1CF0], rdi
 * 000000014077FFC7: lea     rax, [r12+0Ch]
 * 000000014077FFCC: test    r9d, r9d
 * 000000014077FFCF: jnz     short loc_14077FFD5
 * 000000014077FFD1: mov     rax, [rbp+1C70h+var_1CD0]
 * 000000014077FFD5: mov     [rbp+1C70h+var_1CC8], rax
 * 000000014077FFD9: xor     eax, eax
 * 000000014077FFDB: test    r10d, r10d
 * 000000014077FFDE: jz      short loc_140780010
 * 000000014077FFE0: mov     edx, r10d
 * 000000014077FFE3: lea     rax, [rbx+8]
 * 000000014077FFE7: mov     r10d, 80000000h
 * 000000014077FFED: xor     r9d, r9d
 * 000000014077FFF0: mov     ecx, 2
 * 000000014077FFF5: mov     [rax-8], r9d
 * 000000014077FFF9: mov     [rax-4], r9d
 * 000000014077FFFD: mov     [rax], r10d
 * 0000000140780000: add     rax, 0Ch
 * 0000000140780004: sub     rcx, r13
 * 0000000140780007: jnz     short loc_14077FFF5
 * 0000000140780009: sub     rdx, r13
 * 000000014078000C: jnz     short loc_14077FFF0
 * 000000014078000E: xor     eax, eax
 * 0000000140780010: cmp     rbx, rdi
 * 0000000140780013: jz      loc_14078068A
 * 0000000140780019: mov     r15, [rsp+1D70h+var_1D00]
 * 000000014078001E: jmp     short loc_140780022
 * 0000000140780020: xor     eax, eax
 * 0000000140780022: mov     r10d, eax
 * 0000000140780025: mov     eax, [r15+24h]
 * 0000000140780029: bt      eax, 19h
 * 000000014078002D: jb      loc_140780210
 * 0000000140780033: mov     ecx, [r15]
 * 0000000140780036: cmp     ecx, 54494E49h
 * 000000014078003C: jnz     short loc_14078004C
 * 000000014078003E: cmp     dword ptr [r15+4], 4742444Bh
 * 0000000140780046: jz      loc_140780210
 * 000000014078004C: cmp     ecx, 45474150h
 * 0000000140780052: jnz     short loc_140780083
 * 0000000140780054: movzx   eax, word ptr [r15+4]
 * 0000000140780059: mov     edx, 7777h
 * 000000014078005E: cmp     ax, dx
 * 0000000140780061: jz      loc_140780210
 * 0000000140780067: mov     edx, 7277h
 * 000000014078006C: cmp     ax, dx
 * 000000014078006F: jz      loc_140780210
 * 0000000140780075: mov     edx, 7877h
 * 000000014078007A: cmp     ax, dx
 * 000000014078007D: jz      loc_140780210
 * 0000000140780083: cmp     ecx, 41525245h
 * 0000000140780089: jnz     short loc_14078009B
 * 000000014078008B: mov     eax, 4154h
 * 0000000140780090: cmp     [r15+4], ax
 * 0000000140780095: jz      loc_140780210
 * 000000014078009B: mov     rax, [r11+690h]
 * 00000001407800A2: mov     rdi, r15
 * 00000001407800A5: mov     rbx, [r11+688h]
 * 00000001407800AC: mov     r8d, 7
 * 00000001407800B2: mov     [rbp+1C70h+var_D68], rax
 * 00000001407800B9: sub     rdi, rbx
 * 00000001407800BC: mov     rax, [r11+698h]
 * 00000001407800C3: or      r9d, 0FFFFFFFFh
 * 00000001407800C7: mov     [rbp+1C70h+var_D60], rax
 * 00000001407800CE: mov     rax, [r11+6A0h]
 * 00000001407800D5: mov     [rbp+1C70h+var_D58], rax
 * 00000001407800DC: mov     [rbp+1C70h+var_D70], rbx
 * 00000001407800E3: movzx   edx, byte ptr [rdi+rbx]
 * 00000001407800E7: movzx   eax, byte ptr [rbx]
 * 00000001407800EA: add     rbx, r13
 * 00000001407800ED: cmp     rdx, rax
 * 00000001407800F0: jnz     short loc_1407800FC
 * 00000001407800F2: add     r8d, r9d
 * 00000001407800F5: jnz     short loc_1407800E3
 * 00000001407800F7: jmp     loc_140780193
 * 00000001407800FC: mov     rdi, [rbp+1C70h+var_D68]
 * 0000000140780103: mov     ebx, 8
 * 0000000140780108: mov     r8, r15
 * 000000014078010B: mov     rcx, [r8]
 * 000000014078010E: add     r8, 8
 * 0000000140780112: mov     rax, [rdi]
 * 0000000140780115: add     rdi, 8
 * 0000000140780119: cmp     rcx, rax
 * 000000014078011C: jnz     short loc_140780143
 * 000000014078011E: add     ebx, 0FFFFFFF8h
 * 0000000140780121: cmp     ebx, 8
 * 0000000140780124: jnb     short loc_14078010B
 * 0000000140780126: test    ebx, ebx
 * 0000000140780128: jz      short loc_140780193
 * 000000014078012A: movzx   edx, byte ptr [r8]
 * 000000014078012E: add     r8, r13
 * 0000000140780131: movzx   eax, byte ptr [rdi]
 * 0000000140780134: add     rdi, r13
 * 0000000140780137: cmp     rdx, rax
 * 000000014078013A: jnz     short loc_140780143
 * 000000014078013C: add     ebx, r9d
 * 000000014078013F: jnz     short loc_14078012A
 * 0000000140780141: jmp     short loc_140780193
 * 0000000140780143: mov     rbx, [rbp+1C70h+var_D60]
 * 000000014078014A: mov     rdi, r15
 * 000000014078014D: sub     rdi, rbx
 * 0000000140780150: mov     r8d, 4
 * 0000000140780156: movzx   edx, byte ptr [rdi+rbx]
 * 000000014078015A: movzx   eax, byte ptr [rbx]
 * 000000014078015D: add     rbx, r13
 * 0000000140780160: cmp     rdx, rax
 * 0000000140780163: jnz     short loc_14078016C
 * 0000000140780165: add     r8d, r9d
 * 0000000140780168: jnz     short loc_140780156
 * 000000014078016A: jmp     short loc_140780193
 * 000000014078016C: mov     rbx, [rbp+1C70h+var_D58]
 * 0000000140780173: mov     rdi, r15
 * 0000000140780176: sub     rdi, rbx
 * 0000000140780179: mov     r8d, 6
 * 000000014078017F: movzx   edx, byte ptr [rdi+rbx]
 * 0000000140780183: movzx   eax, byte ptr [rbx]
 * 0000000140780186: add     rbx, r13
 * 0000000140780189: cmp     rdx, rax
 * 000000014078018C: jnz     short loc_140780196
 * 000000014078018E: add     r8d, r9d
 * 0000000140780191: jnz     short loc_14078017F
 * 0000000140780193: mov     r10d, r13d
 * 0000000140780196: mov     r8, [rsp+1D70h+var_1D20]
 * 000000014078019B: mov     rbx, [rbp+1C70h+var_1CD8]
 * 000000014078019F: mov     ecx, 80000000h
 * 00000001407801A4: test    [r15+24h], ecx
 * 00000001407801A8: cmovnz  r10d, r13d
 * 00000001407801AC: xor     eax, eax
 * 00000001407801AE: mov     dword ptr [rsp+1D70h+Src], r10d
 * 00000001407801B3: test    r10d, r10d
 * 00000001407801B6: jz      short loc_1407801DF
 * 00000001407801B8: cmp     dword ptr [r15], 54494E49h
 * 00000001407801BF: jnz     short loc_1407801DF
 * 00000001407801C1: cmp     dword ptr [r15+4], 4742444Bh
 * 00000001407801C9: jnz     short loc_1407801DF
 * 00000001407801CB: test    dword ptr [r11+6D8h], 10000000h
 * 00000001407801D6: cmovnz  r10d, eax
 * 00000001407801DA: mov     dword ptr [rsp+1D70h+Src], r10d
 * 00000001407801DF: mov     ecx, [r15+8]
 * 00000001407801E3: cmp     [r15+10h], ecx
 * 00000001407801E7: mov     r9d, [r15+0Ch]
 * 00000001407801EB: cmova   ecx, [r15+10h]
 * 00000001407801F0: mov     rax, [rbp+1C70h+var_1CD0]
 * 00000001407801F4: add     ecx, r9d
 * 00000001407801F7: mov     dword ptr [rsp+1D70h+var_1D08], r9d
 * 00000001407801FC: mov     dword ptr [rsp+1D70h+NtHeaders], ecx
 * 0000000140780200: cmp     r12, rax
 * 0000000140780203: jz      short loc_140780215
 * 0000000140780205: mov     r11d, [r12]
 * 0000000140780209: mov     r15d, [r12+4]
 * 000000014078020E: jmp     short loc_14078021D
 * 0000000140780210: mov     r10d, r13d
 * 0000000140780213: jmp     short loc_14078019F
 * 0000000140780215: xor     edi, edi
 * 0000000140780217: mov     r11d, edi
 * 000000014078021A: mov     r15d, edi
 * 000000014078021D: mov     rdx, [rbp+1C70h+var_1CE0]
 * 0000000140780221: mov     r12d, r9d
 * 0000000140780224: cmp     rdx, rax
 * 0000000140780227: jz      loc_140780346
 * 000000014078022D: cmp     r11d, r9d
 * 0000000140780230: jbe     loc_140780346
 * 0000000140780236: cmp     r15d, ecx
 * 0000000140780239: ja      loc_140780346
 * 000000014078023F: test    r10d, r10d
 * 0000000140780242: jnz     loc_140780346
 * 0000000140780248: mov     [rbx], r9d
 * 000000014078024B: lea     rcx, [rbp+1C70h+var_1008]
 * 0000000140780252: mov     [rbx+4], r11d
 * 0000000140780256: lea     rdx, [rbp+1C70h+var_D90]
 * 000000014078025D: mov     eax, [rbx]
 * 000000014078025F: mov     r12d, r11d
 * 0000000140780262: mov     ebx, r11d
 * 0000000140780265: sub     ebx, eax
 * 0000000140780267: mov     r10d, ebx
 * 000000014078026A: lea     rdi, [r8+rax]
 * 000000014078026E: add     r10, rdi
 * 0000000140780271: xor     eax, eax
 * 0000000140780273: mov     r9d, eax
 * 0000000140780276: mov     r8, [rdx]
 * 0000000140780279: mov     eax, [rcx]
 * 000000014078027B: add     rax, r8
 * 000000014078027E: cmp     rdi, rax
 * 0000000140780281: jnb     short loc_14078028C
 * 0000000140780283: cmp     r10, r8
 * 0000000140780286: ja      loc_140780335
 * 000000014078028C: mov     eax, 4
 * 0000000140780291: add     r9d, r13d
 * 0000000140780294: add     rcx, rax
 * 0000000140780297: add     rdx, 8
 * 000000014078029B: cmp     r9d, eax
 * 000000014078029E: jb      short loc_140780276
 * 00000001407802A0: mov     r9, [rsp+78h]
 * 00000001407802A5: mov     rax, rdi
 * 00000001407802A8: add     [r9+5E0h], ebx
 * 00000001407802AF: mov     ecx, [r9+5CCh]
 * 00000001407802B6: mov     rdx, [r9+5D0h]
 * 00000001407802BD: cmp     rdi, r10
 * 00000001407802C0: jnb     short loc_1407802CE
 * 00000001407802C2: prefetchnta byte ptr [rax]
 * 00000001407802C5: add     rax, 40h ; '@'
 * 00000001407802C9: cmp     rax, r10
 * 00000001407802CC: jb      short loc_1407802C2
 * 00000001407802CE: cmp     ebx, 8
 * 00000001407802D1: jb      short loc_1407802EC
 * 00000001407802D3: mov     r8d, ebx
 * 00000001407802D6: shr     r8, 3
 * 00000001407802DA: xor     rdx, [rdi]
 * 00000001407802DD: add     ebx, 0FFFFFFF8h
 * 00000001407802E0: rol     rdx, cl
 * 00000001407802E3: add     rdi, 8
 * 00000001407802E7: sub     r8, r13
 * 00000001407802EA: jnz     short loc_1407802DA
 * 00000001407802EC: test    ebx, ebx
 * 00000001407802EE: jz      short loc_140780301
 * 00000001407802F0: movzx   eax, byte ptr [rdi]
 * 00000001407802F3: add     rdi, r13
 * 00000001407802F6: xor     rdx, rax
 * 00000001407802F9: rol     rdx, cl
 * 00000001407802FC: add     ebx, 0FFFFFFFFh
 * 00000001407802FF: jnz     short loc_1407802F0
 * 0000000140780301: mov     rax, rdx
 * 0000000140780304: shr     rax, 1Fh
 * 0000000140780308: xor     edi, edi
 * 000000014078030A: jmp     short loc_140780312
 * 000000014078030C: xor     edx, eax
 * 000000014078030E: shr     rax, 1Fh
 * 0000000140780312: test    rax, rax
 * 0000000140780315: jnz     short loc_14078030C
 * 0000000140780317: mov     rax, [rbp+1C70h+var_1CD8]
 * 000000014078031B: btr     edx, 1Fh
 * 000000014078031F: mov     r10d, dword ptr [rsp+1D70h+Src]
 * 0000000140780324: mov     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140780328: mov     [rax+8], edx
 * 000000014078032B: mov     rax, [rbp+1C70h+var_1CD0]
 * 000000014078032F: mov     rdx, [rbp+1C70h+var_1CE0]
 * 0000000140780333: jmp     short loc_14078034D
 * 0000000140780335: mov     r10d, dword ptr [rsp+1D70h+Src]
 * 000000014078033A: mov     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 000000014078033E: mov     rax, [rbp+1C70h+var_1CD0]
 * 0000000140780342: mov     rdx, [rbp+1C70h+var_1CE0]
 * 0000000140780346: mov     r9, [rsp+78h]
 * 000000014078034B: xor     edi, edi
 * 000000014078034D: cmp     r11d, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140780352: jb      loc_140780527
 * 0000000140780358: cmp     r15d, ecx
 * 000000014078035B: mov     r15, [rbp+1C70h+var_1CC8]
 * 000000014078035F: ja      loc_14078052B
 * 0000000140780365: cmp     rdx, rax
 * 0000000140780368: jz      loc_14078052B
 * 000000014078036E: mov     r11d, [r15+4]
 * 0000000140780372: cmp     r11d, ecx
 * 0000000140780375: ja      loc_14078052B
 * 000000014078037B: mov     rax, [rbp+1C70h+var_1CE8]
 * 000000014078037F: mov     rdx, [rbp+1C70h+var_1CD0]
 * 0000000140780383: mov     rbx, [rbp+1C70h+var_1CE0]
 * 0000000140780387: cmp     r15, rdx
 * 000000014078038A: jz      loc_14078052B
 * 0000000140780390: test    r10d, r10d
 * 0000000140780393: jz      short loc_14078039D
 * 0000000140780395: mov     byte ptr [rax], 80h
 * 0000000140780398: jmp     loc_1407804FC
 * 000000014078039D: mov     ecx, [rbx+4]
 * 00000001407803A0: mov     r12d, [r15]
 * 00000001407803A3: cmp     r12d, ecx
 * 00000001407803A6: jnb     short loc_1407803FF
 * 00000001407803A8: xor     eax, eax
 * 00000001407803AA: test    dword ptr [r9+6D8h], 200000h
 * 00000001407803B5: jz      loc_14078D739
 * 00000001407803BB: cmp     [r9+650h], eax
 * 00000001407803C2: jnz     short loc_1407803FF
 * 00000001407803C4: mov     rdi, [rsp+1D70h+var_1D20]
 * 00000001407803C9: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001407803D3: add     rax, r9
 * 00000001407803D6: mov     [r9+658h], rax
 * 00000001407803DD: xor     eax, eax
 * 00000001407803DF: mov     [r9+660h], rax
 * 00000001407803E6: mov     qword ptr [r9+668h], 10Fh
 * 00000001407803F1: mov     [r9+670h], rdi
 * 00000001407803F8: mov     [r9+650h], r13d
 * 00000001407803FF: mov     ebx, r12d
 * 0000000140780402: lea     rdx, [rbp+1C70h+var_1008]
 * 0000000140780409: sub     ebx, ecx
 * 000000014078040B: lea     r8, [rbp+1C70h+var_D90]
 * 0000000140780412: mov     rdi, rcx
 * 0000000140780415: mov     r10d, ebx
 * 0000000140780418: add     rdi, [rsp+1D70h+var_1D20]
 * 000000014078041D: add     r10, rdi
 * 0000000140780420: xor     eax, eax
 * 0000000140780422: mov     r9d, eax
 * 0000000140780425: mov     rcx, [r8]
 * 0000000140780428: mov     eax, [rdx]
 * 000000014078042A: add     rax, rcx
 * 000000014078042D: cmp     rdi, rax
 * 0000000140780430: jnb     short loc_14078043B
 * 0000000140780432: cmp     r10, rcx
 * 0000000140780435: ja      loc_1407804D9
 * 000000014078043B: mov     eax, 4
 * 0000000140780440: add     r9d, r13d
 * 0000000140780443: add     rdx, rax
 * 0000000140780446: add     r8, 8
 * 000000014078044A: cmp     r9d, eax
 * 000000014078044D: jb      short loc_140780425
 * 000000014078044F: cmp     ebx, eax
 * 0000000140780451: jb      loc_1407804D9
 * 0000000140780457: mov     r9, [rsp+78h]
 * 000000014078045C: mov     rax, rdi
 * 000000014078045F: add     [r9+5E0h], ebx
 * 0000000140780466: mov     ecx, [r9+5CCh]
 * 000000014078046D: mov     rdx, [r9+5D0h]
 * 0000000140780474: cmp     rdi, r10
 * 0000000140780477: jnb     short loc_140780485
 * 0000000140780479: prefetchnta byte ptr [rax]
 * 000000014078047C: add     rax, 40h ; '@'
 * 0000000140780480: cmp     rax, r10
 * 0000000140780483: jb      short loc_140780479
 * 0000000140780485: cmp     ebx, 8
 * 0000000140780488: jb      short loc_1407804A3
 * 000000014078048A: mov     r8d, ebx
 * 000000014078048D: shr     r8, 3
 * 0000000140780491: xor     rdx, [rdi]
 * 0000000140780494: add     ebx, 0FFFFFFF8h
 * 0000000140780497: rol     rdx, cl
 * 000000014078049A: add     rdi, 8
 * 000000014078049E: sub     r8, r13
 * 00000001407804A1: jnz     short loc_140780491
 * 00000001407804A3: test    ebx, ebx
 * 00000001407804A5: jz      short loc_1407804B8
 * 00000001407804A7: movzx   eax, byte ptr [rdi]
 * 00000001407804AA: add     rdi, r13
 * 00000001407804AD: xor     rdx, rax
 * 00000001407804B0: rol     rdx, cl
 * 00000001407804B3: add     ebx, 0FFFFFFFFh
 * 00000001407804B6: jnz     short loc_1407804A7
 * 00000001407804B8: mov     rax, rdx
 * 00000001407804BB: shr     rax, 7
 * 00000001407804BF: xor     edi, edi
 * 00000001407804C1: jmp     short loc_1407804C9
 * 00000001407804C3: xor     dl, al
 * 00000001407804C5: shr     rax, 7
 * 00000001407804C9: test    rax, rax
 * 00000001407804CC: jnz     short loc_1407804C3
 * 00000001407804CE: mov     rcx, [rbp+1C70h+var_1CE8]
 * 00000001407804D2: and     dl, 7Fh
 * 00000001407804D5: mov     [rcx], dl
 * 00000001407804D7: jmp     short loc_1407804E7
 * 00000001407804D9: mov     rcx, [rbp+1C70h+var_1CE8]
 * 00000001407804DD: xor     edi, edi
 * 00000001407804DF: mov     r9, [rsp+78h]
 * 00000001407804E4: mov     byte ptr [rcx], 80h
 * 00000001407804E7: mov     r10d, dword ptr [rsp+1D70h+Src]
 * 00000001407804EC: mov     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 00000001407804F0: mov     rax, [rbp+1C70h+var_1CE8]
 * 00000001407804F4: mov     rdx, [rbp+1C70h+var_1CD0]
 * 00000001407804F8: mov     rbx, [rbp+1C70h+var_1CE0]
 * 00000001407804FC: add     rbx, 0Ch
 * 0000000140780500: add     rax, r13
 * 0000000140780503: add     r15, 0Ch
 * 0000000140780507: mov     [rbp+1C70h+var_1CE0], rbx
 * 000000014078050B: mov     [rbp+1C70h+var_1CE8], rax
 * 000000014078050F: mov     [rbp+1C70h+var_1CC8], r15
 * 0000000140780513: cmp     r15, rdx
 * 0000000140780516: jz      short loc_14078051C
 * 0000000140780518: mov     r11d, [r15+4]
 * 000000014078051C: cmp     r11d, ecx
 * 000000014078051F: jbe     loc_140780387
 * 0000000140780525: jmp     short loc_14078052B
 * 0000000140780527: mov     r15, [rbp+1C70h+var_1CC8]
 * 000000014078052B: test    r10d, r10d
 * 000000014078052E: jnz     loc_140780617
 * 0000000140780534: cmp     r12d, ecx
 * 0000000140780537: jz      loc_140780617
 * 000000014078053D: mov     rax, [rbp+1C70h+var_1CD8]
 * 0000000140780541: lea     rdx, [rbp+1C70h+var_D90]
 * 0000000140780548: mov     ebx, ecx
 * 000000014078054A: mov     [rax+0Ch], r12d
 * 000000014078054E: mov     [rax+10h], ecx
 * 0000000140780551: lea     rcx, [rbp+1C70h+var_1008]
 * 0000000140780558: mov     eax, [rax+0Ch]
 * 000000014078055B: mov     edi, eax
 * 000000014078055D: sub     ebx, eax
 * 000000014078055F: add     rdi, [rsp+1D70h+var_1D20]
 * 0000000140780564: mov     r10d, ebx
 * 0000000140780567: add     r10, rdi
 * 000000014078056A: xor     eax, eax
 * 000000014078056C: mov     r9d, eax
 * 000000014078056F: mov     r8, [rdx]
 * 0000000140780572: mov     eax, [rcx]
 * 0000000140780574: add     rax, r8
 * 0000000140780577: cmp     rdi, rax
 * 000000014078057A: jnb     short loc_140780585
 * 000000014078057C: cmp     r10, r8
 * 000000014078057F: ja      loc_140780617
 * 0000000140780585: mov     eax, 4
 * 000000014078058A: add     r9d, r13d
 * 000000014078058D: add     rcx, rax
 * 0000000140780590: add     rdx, 8
 * 0000000140780594: cmp     r9d, eax
 * 0000000140780597: jb      short loc_14078056F
 * 0000000140780599: mov     r11, [rsp+78h]
 * 000000014078059E: mov     rax, rdi
 * 00000001407805A1: add     [r11+5E0h], ebx
 * 00000001407805A8: mov     ecx, [r11+5CCh]
 * 00000001407805AF: mov     rdx, [r11+5D0h]
 * 00000001407805B6: cmp     rdi, r10
 * 00000001407805B9: jnb     short loc_1407805C7
 * 00000001407805BB: prefetchnta byte ptr [rax]
 * 00000001407805BE: add     rax, 40h ; '@'
 * 00000001407805C2: cmp     rax, r10
 * 00000001407805C5: jb      short loc_1407805BB
 * 00000001407805C7: cmp     ebx, 8
 * 00000001407805CA: jb      short loc_1407805E5
 * 00000001407805CC: mov     r8d, ebx
 * 00000001407805CF: shr     r8, 3
 * 00000001407805D3: xor     rdx, [rdi]
 * 00000001407805D6: add     ebx, 0FFFFFFF8h
 * 00000001407805D9: rol     rdx, cl
 * 00000001407805DC: add     rdi, 8
 * 00000001407805E0: sub     r8, r13
 * 00000001407805E3: jnz     short loc_1407805D3
 * 00000001407805E5: test    ebx, ebx
 * 00000001407805E7: jz      short loc_1407805FA
 * 00000001407805E9: movzx   eax, byte ptr [rdi]
 * 00000001407805EC: add     rdi, r13
 * 00000001407805EF: xor     rdx, rax
 * 00000001407805F2: rol     rdx, cl
 * 00000001407805F5: add     ebx, 0FFFFFFFFh
 * 00000001407805F8: jnz     short loc_1407805E9
 * 00000001407805FA: mov     rax, rdx
 * 00000001407805FD: jmp     short loc_140780601
 * 00000001407805FF: xor     edx, eax
 * 0000000140780601: shr     rax, 1Fh
 * 0000000140780605: test    rax, rax
 * 0000000140780608: jnz     short loc_1407805FF
 * 000000014078060A: mov     rbx, [rbp+1C70h+var_1CD8]
 * 000000014078060E: btr     edx, 1Fh
 * 0000000140780612: mov     [rbx+14h], edx
 * 0000000140780615: jmp     short loc_140780620
 * 0000000140780617: mov     r11, [rsp+78h]
 * 000000014078061C: mov     rbx, [rbp+1C70h+var_1CD8]
 * 0000000140780620: mov     rdx, [rbp+1C70h+var_1CD0]
 * 0000000140780624: mov     r12, [rbp+1C70h+var_1CE0]
 * 0000000140780628: cmp     r12, rdx
 * 000000014078062B: jz      short loc_140780665
 * 000000014078062D: mov     eax, [r12]
 * 0000000140780631: mov     ecx, [r12+4]
 * 0000000140780636: cmp     eax, dword ptr [rsp+1D70h+var_1D08]
 * 000000014078063A: jb      short loc_140780665
 * 000000014078063C: cmp     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140780640: ja      short loc_140780665
 * 0000000140780642: cmp     r15, rdx
 * 0000000140780645: jz      short loc_14078065D
 * 0000000140780647: mov     rax, [rbp+1C70h+var_1CE8]
 * 000000014078064B: mov     byte ptr [rax], 80h
 * 000000014078064E: add     rax, r13
 * 0000000140780651: add     r15, 0Ch
 * 0000000140780655: mov     [rbp+1C70h+var_1CE8], rax
 * 0000000140780659: mov     [rbp+1C70h+var_1CC8], r15
 * 000000014078065D: add     r12, 0Ch
 * 0000000140780661: mov     [rbp+1C70h+var_1CE0], r12
 * 0000000140780665: mov     r15, [rsp+1D70h+var_1D00]
 * 000000014078066A: add     rbx, 18h
 * 000000014078066E: mov     r8, [rsp+1D70h+var_1D20]
 * 0000000140780673: add     r15, 28h ; '('
 * 0000000140780677: mov     [rbp+1C70h+var_1CD8], rbx
 * 000000014078067B: mov     [rsp+1D70h+var_1D00], r15
 * 0000000140780680: cmp     rbx, [rbp+1C70h+var_1CF0]
 * 0000000140780684: jnz     loc_140780020
 * 000000014078068A: mov     rbx, r14
 * 000000014078068D: xor     eax, eax
 * 000000014078068F: mov     [rbp+1C70h+var_1588], rbx
 * 0000000140780696: mov     ecx, eax
 * 0000000140780698: jmp     loc_14077F428
 * 000000014078069D: mov     rbx, [rbp+1C70h+var_1CE8]
 * 00000001407806A1: mov     r12d, 80000000h
 * 00000001407806A7: mov     r15d, dword ptr [rbp+1C70h+var_1CA8]
 * 00000001407806AB: mov     ecx, 80000004h
 * 00000001407806B0: mov     eax, r15d
 * 00000001407806B3: and     eax, ecx
 * 00000001407806B5: cmp     eax, ecx
 * 00000001407806B7: jz      loc_140780766
 * 00000001407806BD: mov     rcx, [rbp+1C70h+var_1580]
 * 00000001407806C4: or      r15d, r12d
 * 00000001407806C7: call    qword ptr [rbx+1E0h]
 * 00000001407806CD: mov     ecx, [rax+94h]
 * 00000001407806D3: cmp     ecx, 14h
 * 00000001407806D6: jb      loc_140780766
 * 00000001407806DC: mov     eax, [rax+90h]
 * 00000001407806E2: mov     edi, ecx
 * 00000001407806E4: mov     rcx, [rbp+1C70h+var_1580]
 * 00000001407806EB: add     rdi, rcx
 * 00000001407806EE: add     rdi, rax
 * 00000001407806F1: lea     rbx, [rcx+rax]
 * 00000001407806F5: cmp     rbx, rdi
 * 00000001407806F8: jz      short loc_14078074D
 * 00000001407806FA: xor     eax, eax
 * 00000001407806FC: cmp     [rbx+0Ch], eax
 * 00000001407806FF: jz      short loc_14078074F
 * 0000000140780701: mov     eax, [rbx+10h]
 * 0000000140780704: test    eax, eax
 * 0000000140780706: jz      short loc_14078074D
 * 0000000140780708: mov     rdx, [rax+rcx]
 * 000000014078070C: test    rdx, rdx
 * 000000014078070F: jz      short loc_140780747
 * 0000000140780711: mov     r8d, r15d
 * 0000000140780714: lea     rcx, [rbp+1C70h+var_1588]
 * 000000014078071B: call    sub_14024FE34
 * 0000000140780720: mov     r14, [rbp+1C70h+var_1588]
 * 0000000140780727: mov     ecx, eax
 * 0000000140780729: add     eax, r12d
 * 000000014078072C: mov     [rbp+1C70h+var_15F0], r14
 * 0000000140780733: test    r12d, eax
 * 0000000140780736: jnz     short loc_140780740
 * 0000000140780738: cmp     ecx, 0C000010Eh
 * 000000014078073E: jnz     short loc_140780751
 * 0000000140780740: mov     rcx, [rbp+1C70h+var_1580]
 * 0000000140780747: add     rbx, 14h
 * 000000014078074B: jmp     short loc_1407806F5
 * 000000014078074D: xor     eax, eax
 * 000000014078074F: mov     ecx, eax
 * 0000000140780751: lea     eax, [rcx+r12]
 * 0000000140780755: test    r12d, eax
 * 0000000140780758: jnz     short loc_140780766
 * 000000014078075A: cmp     ecx, 0C000010Eh
 * 0000000140780760: jnz     loc_14077C9F7
 * 0000000140780766: xor     eax, eax
 * 0000000140780768: cli
 * 0000000140780769: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 000000014078076F: jz      loc_1407822FC
 * 0000000140780775: sti
 * 0000000140780776: mov     r12, [rbp+1C70h+var_1590]
 * 000000014078077D: lea     r8, [rbp+1C70h+var_1AB0]
 * 0000000140780784: mov     rcx, r12
 * 0000000140780787: mov     [rsp+1D70h+var_1D00], r12
 * 000000014078078C: lea     rdx, [rbp+1C70h+var_1520]
 * 0000000140780793: call    qword ptr [r14+1E8h]
 * 000000014078079A: mov     [rbp+1C70h+var_1CD0], rax
 * 000000014078079E: test    rax, rax
 * 00000001407807A1: jz      loc_14077C9F7
 * 00000001407807A7: mov     r11, [rbp+1C70h+var_1520]
 * 00000001407807AE: xor     eax, eax
 * 00000001407807B0: mov     r15d, [rbp+1C70h+var_1AB0]
 * 00000001407807B7: mov     ecx, 4
 * 00000001407807BC: mov     [rbp+1C70h+var_1048], rax
 * 00000001407807C3: xor     edx, edx
 * 00000001407807C5: lea     rax, [rbp+1C70h+var_1040]
 * 00000001407807CC: mov     [rsp+1D70h+var_1D20], r11
 * 00000001407807D1: mov     [rax], dl
 * 00000001407807D3: add     rax, r13
 * 00000001407807D6: add     ecx, 0FFFFFFFFh
 * 00000001407807D9: jnz     short loc_1407807D1
 * 00000001407807DB: xor     eax, eax
 * 00000001407807DD: mov     r10d, eax
 * 00000001407807E0: cmp     [r14+5C4h], eax
 * 00000001407807E7: jbe     loc_1407809A8
 * 00000001407807ED: mov     ecx, [rbp+1C70h+var_1040]
 * 00000001407807F3: mov     edx, dword ptr [rbp+1C70h+var_1048+4]
 * 00000001407807F9: mov     edi, dword ptr [rbp+1C70h+var_1048]
 * 00000001407807FF: mov     rax, [r14+778h]
 * 0000000140780806: mov     r9, r14
 * 0000000140780809: test    rax, rax
 * 000000014078080C: cmovnz  r9, rax
 * 0000000140780810: xor     eax, eax
 * 0000000140780812: mov     r8d, eax
 * 0000000140780815: mov     ebx, [r9+5C0h]
 * 000000014078081C: add     rbx, r9
 * 000000014078081F: test    edi, edi
 * 0000000140780821: jz      short loc_140780830
 * 0000000140780823: cmp     edx, r10d
 * 0000000140780826: ja      short loc_140780830
 * 0000000140780828: mov     ebx, ecx
 * 000000014078082A: mov     r8d, edx
 * 000000014078082D: add     rbx, r9
 * 0000000140780830: cmp     r8d, r10d
 * 0000000140780833: jz      loc_14078094E
 * 0000000140780839: mov     eax, r10d
 * 000000014078083C: mov     r12d, 2
 * 0000000140780842: sub     eax, r8d
 * 0000000140780845: mov     r11, 0AAAAAAAAAAAAAAABh
 * 000000014078084F: mov     edi, eax
 * 0000000140780851: add     r8d, eax
 * 0000000140780854: mov     ecx, [rbx]
 * 0000000140780856: cmp     ecx, 11h
 * 0000000140780859: jg      short loc_1407808C8
 * 000000014078085B: jz      loc_140780933
 * 0000000140780861: sub     ecx, 1
 * 0000000140780864: jz      short loc_1407808B2
 * 0000000140780866: sub     ecx, 6
 * 0000000140780869: jz      short loc_1407808A1
 * 000000014078086B: sub     ecx, 1
 * 000000014078086E: jz      short loc_140780892
 * 0000000140780870: sub     ecx, r12d
 * 0000000140780873: jz      short loc_140780884
 * 0000000140780875: cmp     ecx, r12d
 * 0000000140780878: jz      short loc_1407808B2
 * 000000014078087A: mov     eax, 30h ; '0'
 * 000000014078087F: jmp     loc_140780938
 * 0000000140780884: mov     eax, [rbx+1Ch]
 * 0000000140780887: add     eax, 3
 * 000000014078088A: shl     eax, 4
 * 000000014078088D: jmp     loc_140780938
 * 0000000140780892: movzx   eax, word ptr [rbx+20h]
 * 0000000140780896: add     eax, 37h ; '7'
 * 0000000140780899: and     eax, 0FFFFFFF8h
 * 000000014078089C: jmp     loc_140780938
 * 00000001407808A1: mov     eax, [rbx+18h]
 * 00000001407808A4: add     eax, r12d
 * 00000001407808A7: lea     eax, [rax+rax*2]
 * 00000001407808AA: shl     eax, 3
 * 00000001407808AD: jmp     loc_140780938
 * 00000001407808B2: mov     ecx, [rbx+10h]
 * 00000001407808B5: mov     rax, r11
 * 00000001407808B8: mul     rcx
 * 00000001407808BB: shr     rdx, 3
 * 00000001407808BF: lea     eax, ds:30h[rdx*4]
 * 00000001407808C6: jmp     short loc_140780938
 * 00000001407808C8: cmp     ecx, 13h
 * 00000001407808CB: jz      short loc_140780933
 * 00000001407808CD: cmp     ecx, 1Ch
 * 00000001407808D0: jz      short loc_14078092A
 * 00000001407808D2: cmp     ecx, 1Eh
 * 00000001407808D5: jz      short loc_140780905
 * 00000001407808D7: lea     eax, [rcx-21h]
 * 00000001407808DA: cmp     eax, r13d
 * 00000001407808DD: ja      short loc_14078087A
 * 00000001407808DF: mov     ecx, [rbx+20h]
 * 00000001407808E2: mov     edx, [rbx+28h]
 * 00000001407808E5: and     ecx, 0FFFh
 * 00000001407808EB: add     rdx, 0FFFh
 * 00000001407808F2: add     rdx, rcx
 * 00000001407808F5: shr     rdx, 0Ch
 * 00000001407808F9: lea     eax, [rdx+rdx*4]
 * 00000001407808FC: lea     eax, ds:30h[rax*4]
 * 0000000140780903: jmp     short loc_140780938
 * 0000000140780905: mov     ecx, [rbx+24h]
 * 0000000140780908: mov     rax, r11
 * 000000014078090B: sub     ecx, r13d
 * 000000014078090E: mul     rcx
 * 0000000140780911: movzx   eax, word ptr [rbx+28h]
 * 0000000140780915: shr     rdx, 3
 * 0000000140780919: add     edx, 7
 * 000000014078091C: and     edx, 0FFFFFFF8h
 * 000000014078091F: add     eax, r12d
 * 0000000140780922: lea     eax, [rax+rax*2]
 * 0000000140780925: lea     eax, [rdx+rax*8]
 * 0000000140780928: jmp     short loc_140780938
 * 000000014078092A: movzx   eax, word ptr [rbx+28h]
 * 000000014078092E: jmp     loc_140780896
 * 0000000140780933: mov     eax, 38h ; '8'
 * 0000000140780938: add     rbx, rax
 * 000000014078093B: sub     rdi, r13
 * 000000014078093E: jnz     loc_140780854
 * 0000000140780944: mov     r11, [rsp+1D70h+var_1D20]
 * 0000000140780949: mov     r12, [rsp+1D70h+var_1D00]
 * 000000014078094E: mov     ecx, ebx
 * 0000000140780950: mov     dword ptr [rbp+1C70h+var_1048], r13d
 * 0000000140780957: sub     ecx, r9d
 * 000000014078095A: mov     edx, r8d
 * 000000014078095D: mov     [rbp+1C70h+var_1040], ecx
 * 0000000140780963: mov     edi, r13d
 * 0000000140780966: mov     dword ptr [rbp+1C70h+var_1048+4], edx
 * 000000014078096C: mov     eax, [rbx]
 * 000000014078096E: cmp     eax, r13d
 * 0000000140780971: jz      short loc_140780978
 * 0000000140780973: cmp     eax, 0Ch
 * 0000000140780976: jnz     short loc_140780988
 * 0000000140780978: mov     r8, [rbp+1C70h+var_1CD0]
 * 000000014078097C: cmp     [rbx+8], r8
 * 0000000140780980: jnz     short loc_140780988
 * 0000000140780982: cmp     [rbx+10h], r15d
 * 0000000140780986: jz      short loc_1407809AB
 * 0000000140780988: add     eax, 0FFFFFFDFh
 * 000000014078098B: cmp     eax, r13d
 * 000000014078098E: ja      short loc_140780996
 * 0000000140780990: cmp     [rbx+20h], r11
 * 0000000140780994: jz      short loc_1407809AB
 * 0000000140780996: add     r10d, r13d
 * 0000000140780999: cmp     r10d, [r14+5C4h]
 * 00000001407809A0: jb      loc_1407807FF
 * 00000001407809A6: xor     eax, eax
 * 00000001407809A8: mov     rbx, rax
 * 00000001407809AB: mov     [rbp+1C70h+var_1518], rbx
 * 00000001407809B2: test    rbx, rbx
 * 00000001407809B5: jnz     loc_1407810FD
 * 00000001407809BB: mov     rcx, r12
 * 00000001407809BE: call    qword ptr [r14+288h]
 * 00000001407809C5: mov     ecx, dword ptr [rbp+1C70h+var_1CA8]
 * 00000001407809C8: mov     r15d, eax
 * 00000001407809CB: mov     ebx, [rbp+1C70h+var_1AB0]
 * 00000001407809D1: mov     dword ptr [rsp+1D70h+Src], eax
 * 00000001407809D5: mov     dword ptr [rsp+1D70h+var_1D08], ebx
 * 00000001407809D9: test    cl, 2
 * 00000001407809DC: jz      short loc_1407809E6
 * 00000001407809DE: test    eax, eax
 * 00000001407809E0: jz      loc_1407810FD
 * 00000001407809E6: test    dword ptr [r14+6D8h], 40000000h
 * 00000001407809F1: jz      short loc_140780A17
 * 00000001407809F3: mov     rdx, [rbp+1C70h+var_1520]
 * 00000001407809FA: mov     r8d, ecx
 * 00000001407809FD: lea     rcx, [rbp+1C70h+var_15F0]
 * 0000000140780A04: call    sub_140777D18
 * 0000000140780A09: mov     r14, [rbp+1C70h+var_15F0]
 * 0000000140780A10: mov     ecx, eax
 * 0000000140780A12: jmp     loc_1407810E5
 * 0000000140780A17: mov     rax, [rbp+1C70h+var_1520]
 * 0000000140780A1E: mov     rcx, rax
 * 0000000140780A21: mov     [rsp+1D70h+var_1D00], rax
 * 0000000140780A26: call    qword ptr [r14+1E0h]
 * 0000000140780A2D: xor     r9d, r9d
 * 0000000140780A30: mov     [rsp+1D70h+var_1D20], rax
 * 0000000140780A35: test    rax, rax
 * 0000000140780A38: jz      loc_1407810E0
 * 0000000140780A3E: mov     r12d, [r14+59Ch]
 * 0000000140780A45: mov     rdi, rbx
 * 0000000140780A48: mov     r8d, [r14+67Ch]
 * 0000000140780A4F: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140780A59: mul     rbx
 * 0000000140780A5C: mov     [rbp+1C70h+var_1CE8], rbx
 * 0000000140780A60: mov     rax, rdx
 * 0000000140780A63: shr     rax, 3
 * 0000000140780A67: mov     ecx, eax
 * 0000000140780A69: mov     [rbp+1C70h+var_1CE0], rax
 * 0000000140780A6D: shl     ecx, 2
 * 0000000140780A70: mov     eax, r15d
 * 0000000140780A73: neg     eax
 * 0000000140780A75: mov     dword ptr [rsp+1D70h+NtHeaders], ecx
 * 0000000140780A79: sbb     ebx, ebx
 * 0000000140780A7B: and     ebx, 0Bh
 * 0000000140780A7E: lea     eax, [rcx+30h]
 * 0000000140780A81: add     ebx, r13d
 * 0000000140780A84: add     eax, r12d
 * 0000000140780A87: mov     dword ptr [rbp+1C70h+var_1CF0], ebx
 * 0000000140780A8A: cmp     eax, [r14+75Ch]
 * 0000000140780A91: jbe     loc_140780B75
 * 0000000140780A97: mov     edx, eax
 * 0000000140780A99: mov     rcx, r14
 * 0000000140780A9C: call    sub_140251E08
 * 0000000140780AA1: mov     r15, rax
 * 0000000140780AA4: test    rax, rax
 * 0000000140780AA7: jz      loc_140781B09
 * 0000000140780AAD: mov     edx, [r14+6D8h]
 * 0000000140780AB4: test    dl, 4
 * 0000000140780AB7: jnz     loc_140780B68
 * 0000000140780ABD: mov     ecx, [r14+59Ch]
 * 0000000140780AC4: and     edx, 20000000h
 * 0000000140780ACA: mov     r8, [r14+580h]
 * 0000000140780AD1: neg     edx
 * 0000000140780AD3: mov     rax, r14
 * 0000000140780AD6: sbb     ebx, ebx
 * 0000000140780AD8: and     ebx, [r14+67Ch]
 * 0000000140780ADF: cmp     ecx, 8
 * 0000000140780AE2: jb      short loc_140780AFC
 * 0000000140780AE4: mov     edx, ecx
 * 0000000140780AE6: shr     rdx, 3
 * 0000000140780AEA: xor     r9d, r9d
 * 0000000140780AED: mov     [rax], r9
 * 0000000140780AF0: add     ecx, 0FFFFFFF8h
 * 0000000140780AF3: add     rax, 8
 * 0000000140780AF7: sub     rdx, r13
 * 0000000140780AFA: jnz     short loc_140780AED
 * 0000000140780AFC: xor     edx, edx
 * 0000000140780AFE: test    ecx, ecx
 * 0000000140780B00: jz      short loc_140780B0C
 * 0000000140780B02: mov     [rax], dl
 * 0000000140780B04: add     rax, r13
 * 0000000140780B07: add     ecx, 0FFFFFFFFh
 * 0000000140780B0A: jnz     short loc_140780B02
 * 0000000140780B0C: mov     edi, [r15+67Ch]
 * 0000000140780B13: mov     [r15+67Ch], ebx
 * 0000000140780B1A: cmp     ebx, 3
 * 0000000140780B1D: jz      short loc_140780B50
 * 0000000140780B1F: test    dword ptr [r15+6D8h], 10000000h
 * 0000000140780B2A: mov     rcx, rdx
 * 0000000140780B2D: cmovz   ecx, ebx
 * 0000000140780B30: test    ecx, ecx
 * 0000000140780B32: jz      short loc_140780B44
 * 0000000140780B34: lea     rcx, [r8-8]
 * 0000000140780B38: mov     rdx, [rcx]
 * 0000000140780B3B: call    qword ptr [r15+210h]
 * 0000000140780B42: jmp     short loc_140780B5A
 * 0000000140780B44: mov     rcx, r8
 * 0000000140780B47: call    qword ptr [r15+0E8h]
 * 0000000140780B4E: jmp     short loc_140780B5A
 * 0000000140780B50: mov     rcx, r8
 * 0000000140780B53: call    qword ptr [r15+348h]
 * 0000000140780B5A: mov     ebx, dword ptr [rbp+1C70h+var_1CF0]
 * 0000000140780B5D: mov     [r15+67Ch], edi
 * 0000000140780B64: mov     rdi, [rbp+1C70h+var_1CE8]
 * 0000000140780B68: and     dword ptr [r15+6D8h], 0FFFFFFFBh
 * 0000000140780B70: xor     r9d, r9d
 * 0000000140780B73: jmp     short loc_140780B7F
 * 0000000140780B75: mov     r15, r14
 * 0000000140780B78: mov     [r14+59Ch], eax
 * 0000000140780B7F: add     [r15+5C4h], r13d
 * 0000000140780B86: mov     ecx, 30h ; '0'
 * 0000000140780B8B: add     r12, r15
 * 0000000140780B8E: mov     [rbp+1C70h+var_1510], r12
 * 0000000140780B95: mov     rax, r12
 * 0000000140780B98: lea     edx, [rcx-2Ah]
 * 0000000140780B9B: mov     [rax], r9
 * 0000000140780B9E: add     ecx, 0FFFFFFF8h
 * 0000000140780BA1: add     rax, 8
 * 0000000140780BA5: sub     rdx, r13
 * 0000000140780BA8: jnz     short loc_140780B9B
 * 0000000140780BAA: test    ecx, ecx
 * 0000000140780BAC: jz      short loc_140780BB9
 * 0000000140780BAE: mov     [rax], r9b
 * 0000000140780BB1: add     rax, r13
 * 0000000140780BB4: add     ecx, 0FFFFFFFFh
 * 0000000140780BB7: jnz     short loc_140780BAE
 * 0000000140780BB9: mov     r10, [rbp+1C70h+var_1CD0]
 * 0000000140780BBD: cmp     ebx, 20h ; ' '
 * 0000000140780BC0: mov     [r12], ebx
 * 0000000140780BC4: mov     ebx, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140780BC8: mov     [r12+8], r10
 * 0000000140780BCD: jnz     short loc_140780BEA
 * 0000000140780BCF: test    ebx, ebx
 * 0000000140780BD1: jz      short loc_140780BEA
 * 0000000140780BD3: lea     r9, [r12+18h]
 * 0000000140780BD8: mov     r8d, ebx
 * 0000000140780BDB: mov     rdx, r10
 * 0000000140780BDE: mov     rcx, r15
 * 0000000140780BE1: call    sub_1401588B8
 * 0000000140780BE6: mov     r10, [rbp+1C70h+var_1CD0]
 * 0000000140780BEA: mov     [r12+10h], ebx
 * 0000000140780BEF: lea     rcx, [r10+rdi]
 * 0000000140780BF3: add     [r15+5E0h], ebx
 * 0000000140780BFA: mov     r8, r10
 * 0000000140780BFD: mov     r9d, [r15+5CCh]
 * 0000000140780C04: mov     rax, r10
 * 0000000140780C07: mov     rdx, [r15+5D0h]
 * 0000000140780C0E: cmp     r10, rcx
 * 0000000140780C11: jnb     short loc_140780C1F
 * 0000000140780C13: prefetchnta byte ptr [rax]
 * 0000000140780C16: add     rax, 40h ; '@'
 * 0000000140780C1A: cmp     rax, rcx
 * 0000000140780C1D: jb      short loc_140780C13
 * 0000000140780C1F: mov     edi, ebx
 * 0000000140780C21: cmp     ebx, 8
 * 0000000140780C24: jb      short loc_140780C43
 * 0000000140780C26: shr     rbx, 3
 * 0000000140780C2A: xor     rdx, [r8]
 * 0000000140780C2D: mov     ecx, r9d
 * 0000000140780C30: rol     rdx, cl
 * 0000000140780C33: add     r8, 8
 * 0000000140780C37: add     edi, 0FFFFFFF8h
 * 0000000140780C3A: sub     rbx, r13
 * 0000000140780C3D: jnz     short loc_140780C2A
 * 0000000140780C3F: mov     ebx, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140780C43: test    edi, edi
 * 0000000140780C45: jz      short loc_140780C5C
 * 0000000140780C47: movzx   eax, byte ptr [r8]
 * 0000000140780C4B: mov     ecx, r9d
 * 0000000140780C4E: xor     rdx, rax
 * 0000000140780C51: add     r8, r13
 * 0000000140780C54: rol     rdx, cl
 * 0000000140780C57: add     edi, 0FFFFFFFFh
 * 0000000140780C5A: jnz     short loc_140780C47
 * 0000000140780C5C: mov     rax, rdx
 * 0000000140780C5F: jmp     short loc_140780C63
 * 0000000140780C61: xor     edx, eax
 * 0000000140780C63: shr     rax, 1Fh
 * 0000000140780C67: test    rax, rax
 * 0000000140780C6A: jnz     short loc_140780C61
 * 0000000140780C6C: btr     edx, 1Fh
 * 0000000140780C70: mov     edi, 0C0000225h
 * 0000000140780C75: mov     [r12+14h], edx
 * 0000000140780C7A: mov     rax, [rbp+1C70h+var_1510]
 * 0000000140780C81: mov     [rbp+1C70h+var_1508], rax
 * 0000000140780C88: add     [r15+5E0h], ebx
 * 0000000140780C8F: mov     rbx, [r15+470h]
 * 0000000140780C96: mov     r12, [rbp+1C70h+var_1508]
 * 0000000140780C9D: add     rbx, 10h
 * 0000000140780CA1: mov     rcx, [r15+488h]
 * 0000000140780CA8: mov     rax, cr8
 * 0000000140780CAC: mov     [rbp+1C70h+var_1CE8], rax
 * 0000000140780CB0: mov     eax, 0Fh
 * 0000000140780CB5: mov     cr8, rax
 * 0000000140780CB9: call    qword ptr [r15+138h]
 * 0000000140780CC0: mov     rax, [r15+470h]
 * 0000000140780CC7: mov     ecx, [rax]
 * 0000000140780CC9: lea     rax, [rcx+rcx*2]
 * 0000000140780CCD: lea     rcx, [rbx+rax*8]
 * 0000000140780CD1: mov     rax, [rsp+1D70h+var_1D00]
 * 0000000140780CD6: cmp     [rbx+8], rax
 * 0000000140780CDA: jz      short loc_140780CE7
 * 0000000140780CDC: add     rbx, 18h
 * 0000000140780CE0: cmp     rbx, rcx
 * 0000000140780CE3: jnb     short loc_140780D00
 * 0000000140780CE5: jmp     short loc_140780CD6
 * 0000000140780CE7: movups  xmm0, xmmword ptr [rbx]
 * 0000000140780CEA: xor     eax, eax
 * 0000000140780CEC: mov     edi, eax
 * 0000000140780CEE: movups  xmmword ptr [r12+18h], xmm0
 * 0000000140780CF4: movsd   xmm1, qword ptr [rbx+10h]
 * 0000000140780CF9: movsd   qword ptr [r12+28h], xmm1
 * 0000000140780D00: mov     rcx, [r15+488h]
 * 0000000140780D07: call    qword ptr [r15+178h]
 * 0000000140780D0E: movzx   eax, byte ptr [rbp+1C70h+var_1CE8]
 * 0000000140780D12: mov     cr8, rax
 * 0000000140780D16: test    edi, edi
 * 0000000140780D18: jns     short loc_140780D56
 * 0000000140780D1A: mov     rax, [rbp+1C70h+var_1508]
 * 0000000140780D21: mov     ecx, 18h
 * 0000000140780D26: add     rax, rcx
 * 0000000140780D29: xor     ebx, ebx
 * 0000000140780D2B: lea     edx, [rcx-15h]
 * 0000000140780D2E: mov     [rax], rbx
 * 0000000140780D31: add     ecx, 0FFFFFFF8h
 * 0000000140780D34: add     rax, 8
 * 0000000140780D38: sub     rdx, r13
 * 0000000140780D3B: jnz     short loc_140780D2E
 * 0000000140780D3D: test    ecx, ecx
 * 0000000140780D3F: jz      short loc_140780D4B
 * 0000000140780D41: mov     [rax], bl
 * 0000000140780D43: add     rax, r13
 * 0000000140780D46: add     ecx, 0FFFFFFFFh
 * 0000000140780D49: jnz     short loc_140780D41
 * 0000000140780D4B: mov     rax, [rbp+1C70h+var_1508]
 * 0000000140780D52: mov     [rax+18h], r13
 * 0000000140780D56: mov     rax, [rbp+1C70h+var_1508]
 * 0000000140780D5D: mov     edx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140780D61: add     rax, 30h ; '0'
 * 0000000140780D65: mov     [rbp+1C70h+var_1CE8], rax
 * 0000000140780D69: cmp     edx, 8
 * 0000000140780D6C: jb      short loc_140780D87
 * 0000000140780D6E: mov     ecx, edx
 * 0000000140780D70: shr     rcx, 3
 * 0000000140780D74: mov     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
 * 0000000140780D7B: add     edx, 0FFFFFFF8h
 * 0000000140780D7E: add     rax, 8
 * 0000000140780D82: sub     rcx, r13
 * 0000000140780D85: jnz     short loc_140780D74
 * 0000000140780D87: test    edx, edx
 * 0000000140780D89: jz      short loc_140780D96
 * 0000000140780D8B: mov     byte ptr [rax], 0FFh
 * 0000000140780D8E: add     rax, r13
 * 0000000140780D91: add     edx, 0FFFFFFFFh
 * 0000000140780D94: jnz     short loc_140780D8B
 * 0000000140780D96: mov     rdx, [rbp+1C70h+var_1CD0]
 * 0000000140780D9A: or      ebx, 0FFFFFFFFh
 * 0000000140780D9D: mov     eax, dword ptr [rbp+1C70h+var_1CE0]
 * 0000000140780DA0: mov     r12, rdx
 * 0000000140780DA3: mov     dword ptr [rsp+1D70h+NtHeaders], ebx
 * 0000000140780DA7: mov     r8d, [rdx]
 * 0000000140780DAA: lea     rcx, [rax+rax*2]
 * 0000000140780DAE: lea     rax, [rdx+rcx*4]
 * 0000000140780DB2: mov     rdx, [rsp+1D70h+var_1D00]
 * 0000000140780DB7: mov     rcx, [rsp+1D70h+var_1D20]
 * 0000000140780DBC: mov     [rbp+1C70h+var_1CE0], rax
 * 0000000140780DC0: xor     eax, eax
 * 0000000140780DC2: mov     edi, eax
 * 0000000140780DC4: mov     dword ptr [rbp+1C70h+var_1CF0], eax
 * 0000000140780DC7: call    qword ptr [r15+1F8h]
 * 0000000140780DCE: mov     r10, rax
 * 0000000140780DD1: xor     eax, eax
 * 0000000140780DD3: test    r10, r10
 * 0000000140780DD6: jz      loc_1407810E0
 * 0000000140780DDC: mov     r14d, eax
 * 0000000140780DDF: mov     eax, [r10+24h]
 * 0000000140780DE3: bt      eax, 19h
 * 0000000140780DE7: jb      loc_140780FE2
 * 0000000140780DED: mov     ecx, [r10]
 * 0000000140780DF0: cmp     ecx, 54494E49h
 * 0000000140780DF6: jnz     short loc_140780E06
 * 0000000140780DF8: cmp     dword ptr [r10+4], 4742444Bh
 * 0000000140780E00: jz      loc_140780FE2
 * 0000000140780E06: cmp     ecx, 45474150h
 * 0000000140780E0C: jnz     short loc_140780E3D
 * 0000000140780E0E: movzx   eax, word ptr [r10+4]
 * 0000000140780E13: mov     edx, 7777h
 * 0000000140780E18: cmp     ax, dx
 * 0000000140780E1B: jz      loc_140780FE2
 * 0000000140780E21: mov     edx, 7277h
 * 0000000140780E26: cmp     ax, dx
 * 0000000140780E29: jz      loc_140780FE2
 * 0000000140780E2F: mov     edx, 7877h
 * 0000000140780E34: cmp     ax, dx
 * 0000000140780E37: jz      loc_140780FE2
 * 0000000140780E3D: cmp     ecx, 41525245h
 * 0000000140780E43: jnz     short loc_140780E55
 * 0000000140780E45: mov     eax, 4154h
 * 0000000140780E4A: cmp     [r10+4], ax
 * 0000000140780E4F: jz      loc_140780FE2
 * 0000000140780E55: mov     rax, [r15+690h]
 * 0000000140780E5C: mov     rdi, r10
 * 0000000140780E5F: mov     rbx, [r15+688h]
 * 0000000140780E66: mov     r8d, 7
 * 0000000140780E6C: mov     [rbp+1C70h+var_D48], rax
 * 0000000140780E73: sub     rdi, rbx
 * 0000000140780E76: mov     rax, [r15+698h]
 * 0000000140780E7D: or      r9d, 0FFFFFFFFh
 * 0000000140780E81: mov     [rbp+1C70h+var_D40], rax
 * 0000000140780E88: mov     rax, [r15+6A0h]
 * 0000000140780E8F: mov     [rbp+1C70h+var_D38], rax
 * 0000000140780E96: mov     [rbp+1C70h+var_D50], rbx
 * 0000000140780E9D: movzx   edx, byte ptr [rbx+rdi]
 * 0000000140780EA1: movzx   eax, byte ptr [rbx]
 * 0000000140780EA4: add     rbx, r13
 * 0000000140780EA7: cmp     rdx, rax
 * 0000000140780EAA: jnz     short loc_140780EB6
 * 0000000140780EAC: add     r8d, r9d
 * 0000000140780EAF: jnz     short loc_140780E9D
 * 0000000140780EB1: jmp     loc_140780F4D
 * 0000000140780EB6: mov     rdi, [rbp+1C70h+var_D48]
 * 0000000140780EBD: mov     ebx, 8
 * 0000000140780EC2: mov     r8, r10
 * 0000000140780EC5: mov     rcx, [r8]
 * 0000000140780EC8: add     r8, 8
 * 0000000140780ECC: mov     rax, [rdi]
 * 0000000140780ECF: add     rdi, 8
 * 0000000140780ED3: cmp     rcx, rax
 * 0000000140780ED6: jnz     short loc_140780EFD
 * 0000000140780ED8: add     ebx, 0FFFFFFF8h
 * 0000000140780EDB: cmp     ebx, 8
 * 0000000140780EDE: jnb     short loc_140780EC5
 * 0000000140780EE0: test    ebx, ebx
 * 0000000140780EE2: jz      short loc_140780F4D
 * 0000000140780EE4: movzx   edx, byte ptr [r8]
 * 0000000140780EE8: add     r8, r13
 * 0000000140780EEB: movzx   eax, byte ptr [rdi]
 * 0000000140780EEE: add     rdi, r13
 * 0000000140780EF1: cmp     rdx, rax
 * 0000000140780EF4: jnz     short loc_140780EFD
 * 0000000140780EF6: add     ebx, r9d
 * 0000000140780EF9: jnz     short loc_140780EE4
 * 0000000140780EFB: jmp     short loc_140780F4D
 * 0000000140780EFD: mov     rbx, [rbp+1C70h+var_D40]
 * 0000000140780F04: mov     rdi, r10
 * 0000000140780F07: sub     rdi, rbx
 * 0000000140780F0A: mov     r8d, 4
 * 0000000140780F10: movzx   edx, byte ptr [rbx+rdi]
 * 0000000140780F14: movzx   eax, byte ptr [rbx]
 * 0000000140780F17: add     rbx, r13
 * 0000000140780F1A: cmp     rdx, rax
 * 0000000140780F1D: jnz     short loc_140780F26
 * 0000000140780F1F: add     r8d, r9d
 * 0000000140780F22: jnz     short loc_140780F10
 * 0000000140780F24: jmp     short loc_140780F4D
 * 0000000140780F26: mov     rbx, [rbp+1C70h+var_D38]
 * 0000000140780F2D: mov     rdi, r10
 * 0000000140780F30: sub     rdi, rbx
 * 0000000140780F33: mov     r8d, 6
 * 0000000140780F39: movzx   edx, byte ptr [rbx+rdi]
 * 0000000140780F3D: movzx   eax, byte ptr [rbx]
 * 0000000140780F40: add     rbx, r13
 * 0000000140780F43: cmp     rdx, rax
 * 0000000140780F46: jnz     short loc_140780F50
 * 0000000140780F48: add     r8d, r9d
 * 0000000140780F4B: jnz     short loc_140780F39
 * 0000000140780F4D: mov     r14d, r13d
 * 0000000140780F50: mov     edi, dword ptr [rbp+1C70h+var_1CF0]
 * 0000000140780F53: mov     ebx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140780F57: mov     r8d, 80000000h
 * 0000000140780F5D: test    [r10+24h], r8d
 * 0000000140780F61: cmovnz  r14d, r13d
 * 0000000140780F65: xor     eax, eax
 * 0000000140780F67: test    r14d, r14d
 * 0000000140780F6A: jz      short loc_140780F8E
 * 0000000140780F6C: cmp     dword ptr [r10], 54494E49h
 * 0000000140780F73: jnz     short loc_140780F8E
 * 0000000140780F75: cmp     dword ptr [r10+4], 4742444Bh
 * 0000000140780F7D: jnz     short loc_140780F8E
 * 0000000140780F7F: test    dword ptr [r15+6D8h], 10000000h
 * 0000000140780F8A: cmovnz  r14d, eax
 * 0000000140780F8E: mov     ecx, [r10+8]
 * 0000000140780F92: cmp     [r10+10h], ecx
 * 0000000140780F96: mov     r11d, [r10+0Ch]
 * 0000000140780F9A: cmova   ecx, [r10+10h]
 * 0000000140780F9F: mov     r9, [rsp+1D70h+var_1D00]
 * 0000000140780FA4: add     r11d, ecx
 * 0000000140780FA7: mov     eax, [r12+8]
 * 0000000140780FAC: test    r13b, al
 * 0000000140780FAF: jnz     short loc_140780FC2
 * 0000000140780FB1: cmp     eax, ebx
 * 0000000140780FB3: cmovb   ebx, eax
 * 0000000140780FB6: cmp     eax, edi
 * 0000000140780FB8: mov     dword ptr [rsp+1D70h+NtHeaders], ebx
 * 0000000140780FBC: cmova   edi, eax
 * 0000000140780FBF: mov     dword ptr [rbp+1C70h+var_1CF0], edi
 * 0000000140780FC2: mov     eax, [r12]
 * 0000000140780FC6: mov     edx, [r12+4]
 * 0000000140780FCB: sub     edx, eax
 * 0000000140780FCD: lea     rdi, [r9+rax]
 * 0000000140780FD1: test    r14d, r14d
 * 0000000140780FD4: jz      short loc_140780FEA
 * 0000000140780FD6: mov     rax, [rbp+1C70h+var_1CE8]
 * 0000000140780FDA: mov     [rax], r8d
 * 0000000140780FDD: jmp     loc_140781076
 * 0000000140780FE2: mov     r14d, r13d
 * 0000000140780FE5: jmp     loc_140780F57
 * 0000000140780FEA: add     [r15+5E0h], edx
 * 0000000140780FF1: mov     rax, rdi
 * 0000000140780FF4: mov     r9d, [r15+5CCh]
 * 0000000140780FFB: mov     rbx, [r15+5D0h]
 * 0000000140781002: mov     ecx, edx
 * 0000000140781004: add     rcx, rdi
 * 0000000140781007: cmp     rdi, rcx
 * 000000014078100A: jnb     short loc_140781018
 * 000000014078100C: prefetchnta byte ptr [rax]
 * 000000014078100F: add     rax, 40h ; '@'
 * 0000000140781013: cmp     rax, rcx
 * 0000000140781016: jb      short loc_14078100C
 * 0000000140781018: cmp     edx, 8
 * 000000014078101B: jb      short loc_14078103F
 * 000000014078101D: mov     r8d, edx
 * 0000000140781020: shr     r8, 3
 * 0000000140781024: xor     rbx, [rdi]
 * 0000000140781027: mov     ecx, r9d
 * 000000014078102A: rol     rbx, cl
 * 000000014078102D: add     rdi, 8
 * 0000000140781031: add     edx, 0FFFFFFF8h
 * 0000000140781034: sub     r8, r13
 * 0000000140781037: jnz     short loc_140781024
 * 0000000140781039: mov     r8d, 80000000h
 * 000000014078103F: test    edx, edx
 * 0000000140781041: jz      short loc_140781057
 * 0000000140781043: movzx   eax, byte ptr [rdi]
 * 0000000140781046: mov     ecx, r9d
 * 0000000140781049: xor     rbx, rax
 * 000000014078104C: add     rdi, r13
 * 000000014078104F: rol     rbx, cl
 * 0000000140781052: add     edx, 0FFFFFFFFh
 * 0000000140781055: jnz     short loc_140781043
 * 0000000140781057: mov     rax, rbx
 * 000000014078105A: jmp     short loc_14078105E
 * 000000014078105C: xor     ebx, eax
 * 000000014078105E: shr     rax, 1Fh
 * 0000000140781062: test    rax, rax
 * 0000000140781065: jnz     short loc_14078105C
 * 0000000140781067: mov     rax, [rbp+1C70h+var_1CE8]
 * 000000014078106B: btr     ebx, 1Fh
 * 000000014078106F: mov     r9, [rsp+1D70h+var_1D00]
 * 0000000140781074: mov     [rax], ebx
 * 0000000140781076: add     r12, 0Ch
 * 000000014078107A: cmp     r12, [rbp+1C70h+var_1CE0]
 * 000000014078107E: jz      loc_140781124
 * 0000000140781084: add     rax, 4
 * 0000000140781088: mov     [rbp+1C70h+var_1CE8], rax
 * 000000014078108C: mov     eax, [r10+0Ch]
 * 0000000140781090: cmp     [r12], eax
 * 0000000140781094: jb      short loc_1407810B1
 * 0000000140781096: mov     ecx, [r12+4]
 * 000000014078109B: mov     ebx, dword ptr [rsp+1D70h+NtHeaders]
 * 000000014078109F: add     rcx, r9
 * 00000001407810A2: mov     edi, dword ptr [rbp+1C70h+var_1CF0]
 * 00000001407810A5: mov     eax, r11d
 * 00000001407810A8: cmp     rcx, rax
 * 00000001407810AB: jbe     loc_140780FA7
 * 00000001407810B1: mov     r8d, [r12]
 * 00000001407810B5: mov     rdx, r9
 * 00000001407810B8: mov     rcx, [rsp+1D70h+var_1D20]
 * 00000001407810BD: call    qword ptr [r15+1F8h]
 * 00000001407810C4: mov     ebx, dword ptr [rsp+1D70h+NtHeaders]
 * 00000001407810C8: mov     r10, rax
 * 00000001407810CB: mov     edi, dword ptr [rbp+1C70h+var_1CF0]
 * 00000001407810CE: xor     eax, eax
 * 00000001407810D0: test    r10, r10
 * 00000001407810D3: jnz     loc_140780DDC
 * 00000001407810D9: mov     r14, [rbp+1C70h+var_15F0]
 * 00000001407810E0: mov     ecx, 0C000007Bh
 * 00000001407810E5: mov     edx, 80000000h
 * 00000001407810EA: lea     eax, [rcx+rdx]
 * 00000001407810ED: test    edx, eax
 * 00000001407810EF: jnz     short loc_1407810FD
 * 00000001407810F1: cmp     ecx, 0C000010Eh
 * 00000001407810F7: jnz     loc_14077C9F7
 * 00000001407810FD: mov     r8, cs:PspPicoProviderRanges
 * 0000000140781104: mov     eax, dword ptr [rbp+1C70h+var_1CC0]
 * 0000000140781107: add     eax, r13d
 * 000000014078110A: mov     dword ptr [rbp+1C70h+var_1CC0], eax
 * 000000014078110D: cmp     eax, 0Fh
 * 0000000140781110: jnb     loc_1407822FE
 * 0000000140781116: mov     edi, dword ptr [rbp+1C70h+var_1CB0]
 * 0000000140781119: mov     r10d, 80000000h
 * 000000014078111F: jmp     loc_14077E694
 * 0000000140781124: mov     edx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140781128: or      edi, 0FFFFFFFFh
 * 000000014078112B: mov     ebx, dword ptr [rbp+1C70h+var_1CF0]
 * 000000014078112E: cmp     edx, edi
 * 0000000140781130: jnz     short loc_14078113A
 * 0000000140781132: xor     eax, eax
 * 0000000140781134: test    ebx, ebx
 * 0000000140781136: jnz     short loc_14078113A
 * 0000000140781138: mov     edx, eax
 * 000000014078113A: mov     rcx, [rbp+1C70h+var_1520]
 * 0000000140781141: lea     r9, [rbp+1C70h+var_1AB0]
 * 0000000140781148: mov     eax, edx
 * 000000014078114A: sub     ebx, edx
 * 000000014078114C: add     rax, rcx
 * 000000014078114F: mov     [rbp+1C70h+var_15F0], r15
 * 0000000140781156: xor     r8d, r8d
 * 0000000140781159: mov     [rbp+1C70h+var_D30], rax
 * 0000000140781160: mov     dl, r13b
 * 0000000140781163: mov     [rbp+1C70h+var_FF8], ebx
 * 0000000140781169: call    qword ptr [r15+1D8h]
 * 0000000140781170: mov     r8d, 0Ch
 * 0000000140781176: lea     r9, [rbp+1C70h+var_1AB0]
 * 000000014078117D: mov     rdx, rax
 * 0000000140781180: neg     rax
 * 0000000140781183: mov     [rbp+1C70h+var_D28], rdx
 * 000000014078118A: mov     dl, r13b
 * 000000014078118D: sbb     ecx, ecx
 * 000000014078118F: and     ecx, [rbp+1C70h+var_1AB0]
 * 0000000140781195: mov     [rbp+1C70h+var_1AB0], ecx
 * 000000014078119B: mov     [rbp+1C70h+var_FF4], ecx
 * 00000001407811A1: mov     rcx, [rbp+1C70h+var_1520]
 * 00000001407811A8: call    qword ptr [r15+1D8h]
 * 00000001407811AF: mov     [rsp+1D70h+var_1D00], rax
 * 00000001407811B4: mov     r8d, 0Ah
 * 00000001407811BA: mov     rdx, rax
 * 00000001407811BD: lea     r9, [rbp+1C70h+var_1AB0]
 * 00000001407811C4: neg     rax
 * 00000001407811C7: mov     [rbp+1C70h+var_D20], rdx
 * 00000001407811CE: mov     dl, r13b
 * 00000001407811D1: sbb     ecx, ecx
 * 00000001407811D3: and     ecx, [rbp+1C70h+var_1AB0]
 * 00000001407811D9: mov     dword ptr [rsp+1D70h+NtHeaders], ecx
 * 00000001407811DD: mov     [rbp+1C70h+var_1AB0], ecx
 * 00000001407811E3: mov     [rbp+1C70h+var_FF0], ecx
 * 00000001407811E9: mov     rcx, [rbp+1C70h+var_1520]
 * 00000001407811F0: call    qword ptr [r15+1D8h]
 * 00000001407811F7: mov     rdx, rax
 * 00000001407811FA: neg     rax
 * 00000001407811FD: mov     eax, dword ptr [rsp+1D70h+Src]
 * 0000000140781201: sbb     ecx, ecx
 * 0000000140781203: mov     [rbp+1C70h+var_D18], rdx
 * 000000014078120A: and     ecx, [rbp+1C70h+var_1AB0]
 * 0000000140781210: mov     [rbp+1C70h+var_1AB0], ecx
 * 0000000140781216: neg     eax
 * 0000000140781218: mov     r14d, [r15+59Ch]
 * 000000014078121F: mov     r8d, [r15+67Ch]
 * 0000000140781226: mov     [rbp+1C70h+var_FEC], ecx
 * 000000014078122C: sbb     ecx, ecx
 * 000000014078122E: and     ecx, 0Bh
 * 0000000140781231: lea     eax, [r14+0C0h]
 * 0000000140781238: mov     dword ptr [rbp+1C70h+var_1CF0], ecx
 * 000000014078123B: cmp     eax, [r15+75Ch]
 * 0000000140781242: jbe     loc_140781313
 * 0000000140781248: mov     edx, eax
 * 000000014078124A: mov     rcx, r15
 * 000000014078124D: call    sub_140251E08
 * 0000000140781252: mov     rbx, rax
 * 0000000140781255: xor     eax, eax
 * 0000000140781257: test    rbx, rbx
 * 000000014078125A: jz      loc_14077C9F7
 * 0000000140781260: mov     edx, [r15+6D8h]
 * 0000000140781267: test    dl, 4
 * 000000014078126A: jnz     loc_14078130A
 * 0000000140781270: mov     ecx, [r15+59Ch]
 * 0000000140781277: and     edx, 20000000h
 * 000000014078127D: mov     r8, [r15+580h]
 * 0000000140781284: neg     edx
 * 0000000140781286: sbb     edx, edx
 * 0000000140781288: and     edx, [r15+67Ch]
 * 000000014078128F: cmp     ecx, 8
 * 0000000140781292: jb      short loc_1407812AC
 * 0000000140781294: mov     eax, ecx
 * 0000000140781296: shr     rax, 3
 * 000000014078129A: xor     r9d, r9d
 * 000000014078129D: mov     [r15], r9
 * 00000001407812A0: add     ecx, 0FFFFFFF8h
 * 00000001407812A3: add     r15, 8
 * 00000001407812A7: sub     rax, r13
 * 00000001407812AA: jnz     short loc_14078129D
 * 00000001407812AC: xor     eax, eax
 * 00000001407812AE: test    ecx, ecx
 * 00000001407812B0: jz      short loc_1407812BC
 * 00000001407812B2: mov     [r15], al
 * 00000001407812B5: add     r15, r13
 * 00000001407812B8: add     ecx, edi
 * 00000001407812BA: jnz     short loc_1407812B2
 * 00000001407812BC: mov     edi, [rbx+67Ch]
 * 00000001407812C2: mov     [rbx+67Ch], edx
 * 00000001407812C8: cmp     edx, 3
 * 00000001407812CB: jz      short loc_1407812FB
 * 00000001407812CD: test    dword ptr [rbx+6D8h], 10000000h
 * 00000001407812D7: mov     rcx, rax
 * 00000001407812DA: cmovz   ecx, edx
 * 00000001407812DD: test    ecx, ecx
 * 00000001407812DF: jz      short loc_1407812F0
 * 00000001407812E1: lea     rcx, [r8-8]
 * 00000001407812E5: mov     rdx, [rcx]
 * 00000001407812E8: call    qword ptr [rbx+210h]
 * 00000001407812EE: jmp     short loc_140781304
 * 00000001407812F0: mov     rcx, r8
 * 00000001407812F3: call    qword ptr [rbx+0E8h]
 * 00000001407812F9: jmp     short loc_140781304
 * 00000001407812FB: mov     rcx, r8
 * 00000001407812FE: call    qword ptr [rbx+348h]
 * 0000000140781304: mov     [rbx+67Ch], edi
 * 000000014078130A: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 0000000140781311: jmp     short loc_14078131D
 * 0000000140781313: mov     rbx, r15
 * 0000000140781316: mov     [r15+59Ch], eax
 * 000000014078131D: mov     esi, dword ptr [rbp+1C70h+var_1CF0]
 * 0000000140781320: lea     rdi, [rbx+r14]
 * 0000000140781324: mov     eax, 4
 * 0000000140781329: lea     r10, [rbp+1C70h+var_FF8]
 * 0000000140781330: add     [rbx+5C4h], eax
 * 0000000140781336: lea     r12, [rbp+1C70h+var_D30]
 * 000000014078133D: xor     r8d, r8d
 * 0000000140781340: mov     [rbp+1C70h+var_1500], rdi
 * 0000000140781347: mov     [rbp+1C70h+var_1518], rdi
 * 000000014078134E: mov     r11d, eax
 * 0000000140781351: mov     [rsp+1D70h+var_1D20], r10
 * 0000000140781356: mov     [rbp+1C70h+var_1CE8], rax
 * 000000014078135A: mov     r15d, [r10]
 * 000000014078135D: mov     ecx, 30h ; '0'
 * 0000000140781362: mov     r14, [r12]
 * 0000000140781366: mov     rax, rdi
 * 0000000140781369: lea     edx, [rcx-2Ah]
 * 000000014078136C: mov     [rax], r8
 * 000000014078136F: add     ecx, 0FFFFFFF8h
 * 0000000140781372: add     rax, 8
 * 0000000140781376: sub     rdx, r13
 * 0000000140781379: jnz     short loc_14078136C
 * 000000014078137B: test    ecx, ecx
 * 000000014078137D: jz      short loc_14078138A
 * 000000014078137F: mov     [rax], r8b
 * 0000000140781382: add     rax, r13
 * 0000000140781385: add     ecx, 0FFFFFFFFh
 * 0000000140781388: jnz     short loc_14078137F
 * 000000014078138A: mov     [rdi], esi
 * 000000014078138C: mov     [rdi+8], r14
 * 0000000140781390: cmp     esi, 20h ; ' '
 * 0000000140781393: jnz     short loc_1407813B5
 * 0000000140781395: test    r15d, r15d
 * 0000000140781398: jz      short loc_1407813B5
 * 000000014078139A: lea     r9, [rdi+18h]
 * 000000014078139E: mov     r8d, r15d
 * 00000001407813A1: mov     rdx, r14
 * 00000001407813A4: mov     rcx, rbx
 * 00000001407813A7: call    sub_1401588B8
 * 00000001407813AC: mov     r10, [rsp+1D70h+var_1D20]
 * 00000001407813B1: mov     r11, [rbp+1C70h+var_1CE8]
 * 00000001407813B5: mov     [rdi+10h], r15d
 * 00000001407813B9: lea     rcx, [r14+r15]
 * 00000001407813BD: add     [rbx+5E0h], r15d
 * 00000001407813C4: mov     rax, r14
 * 00000001407813C7: mov     r9d, [rbx+5CCh]
 * 00000001407813CE: mov     rdx, [rbx+5D0h]
 * 00000001407813D5: cmp     r14, rcx
 * 00000001407813D8: jnb     short loc_1407813E6
 * 00000001407813DA: prefetchnta byte ptr [rax]
 * 00000001407813DD: add     rax, 40h ; '@'
 * 00000001407813E1: cmp     rax, rcx
 * 00000001407813E4: jb      short loc_1407813DA
 * 00000001407813E6: mov     r8d, r15d
 * 00000001407813E9: cmp     r15d, 8
 * 00000001407813ED: jb      short loc_14078140C
 * 00000001407813EF: mov     rax, r15
 * 00000001407813F2: shr     rax, 3
 * 00000001407813F6: xor     rdx, [r14]
 * 00000001407813F9: mov     ecx, r9d
 * 00000001407813FC: rol     rdx, cl
 * 00000001407813FF: add     r14, 8
 * 0000000140781403: add     r8d, 0FFFFFFF8h
 * 0000000140781407: sub     rax, r13
 * 000000014078140A: jnz     short loc_1407813F6
 * 000000014078140C: test    r8d, r8d
 * 000000014078140F: jz      short loc_140781427
 * 0000000140781411: movzx   eax, byte ptr [r14]
 * 0000000140781415: mov     ecx, r9d
 * 0000000140781418: xor     rdx, rax
 * 000000014078141B: add     r14, r13
 * 000000014078141E: rol     rdx, cl
 * 0000000140781421: add     r8d, 0FFFFFFFFh
 * 0000000140781425: jnz     short loc_140781411
 * 0000000140781427: mov     rax, rdx
 * 000000014078142A: shr     rax, 1Fh
 * 000000014078142E: xor     r8d, r8d
 * 0000000140781431: jmp     short loc_140781439
 * 0000000140781433: xor     edx, eax
 * 0000000140781435: shr     rax, 1Fh
 * 0000000140781439: test    rax, rax
 * 000000014078143C: jnz     short loc_140781433
 * 000000014078143E: btr     edx, 1Fh
 * 0000000140781442: add     r10, 4
 * 0000000140781446: mov     [rdi+14h], edx
 * 0000000140781449: add     r12, 8
 * 000000014078144D: add     [rbx+5E0h], r15d
 * 0000000140781454: mov     rdi, [rbp+1C70h+var_1500]
 * 000000014078145B: add     rdi, 30h ; '0'
 * 000000014078145F: mov     [rsp+1D70h+var_1D20], r10
 * 0000000140781464: sub     r11, r13
 * 0000000140781467: mov     [rbp+1C70h+var_1500], rdi
 * 000000014078146E: mov     [rbp+1C70h+var_1CE8], r11
 * 0000000140781472: jnz     loc_14078135A
 * 0000000140781478: mov     edi, dword ptr [rbp+1C70h+var_1CA8]
 * 000000014078147B: mov     rcx, [rbp+1C70h+var_1518]
 * 0000000140781482: and     edi, r13d
 * 0000000140781485: mov     r15d, dword ptr [rsp+1D70h+Src]
 * 000000014078148A: add     rcx, 60h ; '`'
 * 000000014078148E: mov     eax, r15d
 * 0000000140781491: mov     [rbp+1C70h+var_15F0], rbx
 * 0000000140781498: neg     eax
 * 000000014078149A: mov     dword ptr [rbp+1C70h+var_1CA8], edi
 * 000000014078149D: mov     [rbp+1C70h+var_14F8], rcx
 * 00000001407814A4: sbb     r12d, r12d
 * 00000001407814A7: neg     r12d
 * 00000001407814AA: add     r12d, 0Dh
 * 00000001407814AE: test    rcx, rcx
 * 00000001407814B1: jnz     loc_1407816C1
 * 00000001407814B7: mov     r15d, [rbx+59Ch]
 * 00000001407814BE: mov     r8d, [rbx+67Ch]
 * 00000001407814C5: lea     eax, [r15+30h]
 * 00000001407814C9: cmp     eax, [rbx+75Ch]
 * 00000001407814CF: jbe     loc_1407815A5
 * 00000001407814D5: mov     edx, eax
 * 00000001407814D7: mov     rcx, rbx
 * 00000001407814DA: call    sub_140251E08
 * 00000001407814DF: mov     r14, rax
 * 00000001407814E2: xor     eax, eax
 * 00000001407814E4: test    r14, r14
 * 00000001407814E7: jz      loc_14077C9F7
 * 00000001407814ED: mov     edx, [rbx+6D8h]
 * 00000001407814F3: test    dl, 4
 * 00000001407814F6: jnz     loc_14078159B
 * 00000001407814FC: mov     ecx, [rbx+59Ch]
 * 0000000140781502: and     edx, 20000000h
 * 0000000140781508: mov     rdi, [rbx+580h]
 * 000000014078150F: neg     edx
 * 0000000140781511: sbb     edx, edx
 * 0000000140781513: and     edx, [rbx+67Ch]
 * 0000000140781519: cmp     ecx, 8
 * 000000014078151C: jb      short loc_140781536
 * 000000014078151E: mov     eax, ecx
 * 0000000140781520: shr     rax, 3
 * 0000000140781524: xor     r9d, r9d
 * 0000000140781527: mov     [rbx], r9
 * 000000014078152A: add     ecx, 0FFFFFFF8h
 * 000000014078152D: add     rbx, 8
 * 0000000140781531: sub     rax, r13
 * 0000000140781534: jnz     short loc_140781527
 * 0000000140781536: xor     eax, eax
 * 0000000140781538: test    ecx, ecx
 * 000000014078153A: jz      short loc_140781546
 * 000000014078153C: mov     [rbx], al
 * 000000014078153E: add     rbx, r13
 * 0000000140781541: add     ecx, 0FFFFFFFFh
 * 0000000140781544: jnz     short loc_14078153C
 * 0000000140781546: mov     ebx, [r14+67Ch]
 * 000000014078154D: mov     [r14+67Ch], edx
 * 0000000140781554: cmp     edx, 3
 * 0000000140781557: jz      short loc_14078158A
 * 0000000140781559: test    dword ptr [r14+6D8h], 10000000h
 * 0000000140781564: mov     rcx, rax
 * 0000000140781567: cmovz   ecx, edx
 * 000000014078156A: test    ecx, ecx
 * 000000014078156C: jz      short loc_14078157E
 * 000000014078156E: lea     rcx, [rdi-8]
 * 0000000140781572: mov     rdx, [rcx]
 * 0000000140781575: call    qword ptr [r14+210h]
 * 000000014078157C: jmp     short loc_140781594
 * 000000014078157E: mov     rcx, rdi
 * 0000000140781581: call    qword ptr [r14+0E8h]
 * 0000000140781588: jmp     short loc_140781594
 * 000000014078158A: mov     rcx, rdi
 * 000000014078158D: call    qword ptr [r14+348h]
 * 0000000140781594: mov     [r14+67Ch], ebx
 * 000000014078159B: and     dword ptr [r14+6D8h], 0FFFFFFFBh
 * 00000001407815A3: jmp     short loc_1407815AE
 * 00000001407815A5: mov     r14, rbx
 * 00000001407815A8: mov     [rbx+59Ch], eax
 * 00000001407815AE: add     [r14+5C4h], r13d
 * 00000001407815B5: add     r15, r14
 * 00000001407815B8: mov     ecx, 30h ; '0'
 * 00000001407815BD: mov     [rbp+1C70h+var_14F0], r15
 * 00000001407815C4: mov     rax, r15
 * 00000001407815C7: xor     ebx, ebx
 * 00000001407815C9: lea     edx, [rcx-2Ah]
 * 00000001407815CC: mov     [rax], rbx
 * 00000001407815CF: add     ecx, 0FFFFFFF8h
 * 00000001407815D2: add     rax, 8
 * 00000001407815D6: sub     rdx, r13
 * 00000001407815D9: jnz     short loc_1407815CC
 * 00000001407815DB: test    ecx, ecx
 * 00000001407815DD: jz      short loc_1407815E9
 * 00000001407815DF: mov     [rax], bl
 * 00000001407815E1: add     rax, r13
 * 00000001407815E4: add     ecx, 0FFFFFFFFh
 * 00000001407815E7: jnz     short loc_1407815DF
 * 00000001407815E9: mov     rbx, [rsp+1D70h+var_1D00]
 * 00000001407815EE: cmp     r12d, 20h ; ' '
 * 00000001407815F2: mov     [r15], r12d
 * 00000001407815F5: mov     r12d, dword ptr [rsp+1D70h+NtHeaders]
 * 00000001407815FA: mov     [r15+8], rbx
 * 00000001407815FE: jnz     short loc_140781617
 * 0000000140781600: test    r12d, r12d
 * 0000000140781603: jz      short loc_140781617
 * 0000000140781605: lea     r9, [r15+18h]
 * 0000000140781609: mov     r8d, r12d
 * 000000014078160C: mov     rdx, rbx
 * 000000014078160F: mov     rcx, r14
 * 0000000140781612: call    sub_1401588B8
 * 0000000140781617: mov     [r15+10h], r12d
 * 000000014078161B: mov     rdi, rbx
 * 000000014078161E: add     [r14+5E0h], r12d
 * 0000000140781625: mov     rax, rbx
 * 0000000140781628: mov     r8d, [r14+5CCh]
 * 000000014078162F: mov     rdx, [r14+5D0h]
 * 0000000140781636: mov     ecx, r12d
 * 0000000140781639: add     rcx, rbx
 * 000000014078163C: cmp     rbx, rcx
 * 000000014078163F: jnb     short loc_14078164D
 * 0000000140781641: prefetchnta byte ptr [rax]
 * 0000000140781644: add     rax, 40h ; '@'
 * 0000000140781648: cmp     rax, rcx
 * 000000014078164B: jb      short loc_140781641
 * 000000014078164D: mov     ebx, r12d
 * 0000000140781650: cmp     r12d, 8
 * 0000000140781654: jb      short loc_140781672
 * 0000000140781656: mov     eax, r12d
 * 0000000140781659: shr     rax, 3
 * 000000014078165D: xor     rdx, [rdi]
 * 0000000140781660: mov     ecx, r8d
 * 0000000140781663: rol     rdx, cl
 * 0000000140781666: add     rdi, 8
 * 000000014078166A: add     ebx, 0FFFFFFF8h
 * 000000014078166D: sub     rax, r13
 * 0000000140781670: jnz     short loc_14078165D
 * 0000000140781672: test    ebx, ebx
 * 0000000140781674: jz      short loc_14078168A
 * 0000000140781676: movzx   eax, byte ptr [rdi]
 * 0000000140781679: mov     ecx, r8d
 * 000000014078167C: xor     rdx, rax
 * 000000014078167F: add     rdi, r13
 * 0000000140781682: rol     rdx, cl
 * 0000000140781685: add     ebx, 0FFFFFFFFh
 * 0000000140781688: jnz     short loc_140781676
 * 000000014078168A: mov     rax, rdx
 * 000000014078168D: jmp     short loc_140781691
 * 000000014078168F: xor     edx, eax
 * 0000000140781691: shr     rax, 1Fh
 * 0000000140781695: test    rax, rax
 * 0000000140781698: jnz     short loc_14078168F
 * 000000014078169A: mov     edi, dword ptr [rbp+1C70h+var_1CA8]
 * 000000014078169D: btr     edx, 1Fh
 * 00000001407816A1: mov     [r15+14h], edx
 * 00000001407816A5: mov     rax, [rbp+1C70h+var_14F0]
 * 00000001407816AC: mov     r15d, dword ptr [rsp+1D70h+Src]
 * 00000001407816B1: mov     [rbp+1C70h+var_14F8], rax
 * 00000001407816B8: add     [r14+5E0h], r12d
 * 00000001407816BF: jmp     short loc_1407816CC
 * 00000001407816C1: mov     [rcx], r12d
 * 00000001407816C4: mov     r14, rbx
 * 00000001407816C7: mov     r12d, dword ptr [rsp+1D70h+NtHeaders]
 * 00000001407816CC: test    dword ptr [r14+6D8h], 40000000h
 * 00000001407816D7: jz      short loc_1407816F9
 * 00000001407816D9: test    r12d, r12d
 * 00000001407816DC: jz      short loc_1407816F9
 * 00000001407816DE: mov     r9, [rbp+1C70h+var_14F8]
 * 00000001407816E5: mov     r8d, r12d
 * 00000001407816E8: mov     rdx, [rsp+1D70h+var_1D00]
 * 00000001407816ED: add     r9, 1Ch
 * 00000001407816F1: mov     rcx, r14
 * 00000001407816F4: call    sub_1401588B8
 * 00000001407816F9: mov     rax, [rbp+1C70h+var_14F8]
 * 0000000140781700: xor     ecx, ecx
 * 0000000140781702: mov     [rax+18h], ecx
 * 0000000140781705: xor     eax, eax
 * 0000000140781707: test    edi, edi
 * 0000000140781709: jz      short loc_140781718
 * 000000014078170B: mov     rax, [rbp+1C70h+var_14F8]
 * 0000000140781712: or      [rax+18h], r13d
 * 0000000140781716: xor     eax, eax
 * 0000000140781718: mov     rbx, [rbp+1C70h+var_1518]
 * 000000014078171F: test    r15d, r15d
 * 0000000140781722: mov     rdi, [rbp+1C70h+var_1520]
 * 0000000140781729: setnz   al
 * 000000014078172C: mov     dword ptr [rbx+90h], 23h ; '#'
 * 0000000140781736: xor     eax, [rbx+0B8h]
 * 000000014078173C: and     eax, r13d
 * 000000014078173F: xor     [rbx+0B8h], eax
 * 0000000140781745: cmp     dword ptr [rbx+0A0h], 94h
 * 000000014078174F: jb      short loc_1407817B6
 * 0000000140781751: mov     r15, [rbx+98h]
 * 0000000140781758: mov     rcx, rdi
 * 000000014078175B: call    qword ptr [r14+1E0h]
 * 0000000140781762: test    rax, rax
 * 0000000140781765: jz      loc_14077C9F7
 * 000000014078176B: mov     ecx, [rax+50h]
 * 000000014078176E: or      dword ptr [rbx+0B8h], 2
 * 0000000140781775: add     rcx, rdi
 * 0000000140781778: mov     rax, [r15+70h]
 * 000000014078177C: cmp     rax, rdi
 * 000000014078177F: jb      short loc_140781797
 * 0000000140781781: cmp     rax, rcx
 * 0000000140781784: jnb     short loc_140781797
 * 0000000140781786: mov     rax, [rax]
 * 0000000140781789: mov     [rbx+0A8h], rax
 * 0000000140781790: or      dword ptr [rbx+0B8h], 4
 * 0000000140781797: mov     rax, [r15+78h]
 * 000000014078179B: cmp     rax, rdi
 * 000000014078179E: jb      short loc_1407817B6
 * 00000001407817A0: cmp     rax, rcx
 * 00000001407817A3: jnb     short loc_1407817B6
 * 00000001407817A5: mov     rax, [rax]
 * 00000001407817A8: mov     [rbx+0B0h], rax
 * 00000001407817AF: or      dword ptr [rbx+0B8h], 8
 * 00000001407817B6: test    dword ptr [r14+6D8h], 400000h
 * 00000001407817C1: mov     r15, [rbp+1C70h+var_1520]
 * 00000001407817C8: mov     [rsp+1D70h+var_1D00], r15
 * 00000001407817CD: mov     [rbp+1C70h+var_15F0], r14
 * 00000001407817D4: jz      loc_1407822EC
 * 00000001407817DA: mov     rcx, r15
 * 00000001407817DD: call    qword ptr [r14+1E0h]
 * 00000001407817E4: mov     [rsp+1D70h+var_1D20], rax
 * 00000001407817E9: mov     r12, rax
 * 00000001407817EC: test    rax, rax
 * 00000001407817EF: jz      loc_1407810E0
 * 00000001407817F5: mov     ecx, dword ptr [rsp+1D70h+var_1D08]
 * 00000001407817F9: mov     rax, 0AAAAAAAAAAAAAAABh
 * 0000000140781803: mul     rcx
 * 0000000140781806: xor     eax, eax
 * 0000000140781808: mov     r9, rdx
 * 000000014078180B: movzx   edx, word ptr [r12+6]
 * 0000000140781811: shr     r9, 3
 * 0000000140781815: mov     [rbp+1C70h+var_1CE8], r9
 * 0000000140781819: mov     word ptr [rbp+1C70h+var_1CC8], dx
 * 000000014078181D: test    dx, dx
 * 0000000140781820: jnz     short loc_14078187B
 * 0000000140781822: test    dword ptr [r14+6D8h], 200000h
 * 000000014078182D: jz      loc_14078D766
 * 0000000140781833: cmp     [r14+650h], eax
 * 000000014078183A: jnz     loc_1407810E0
 * 0000000140781840: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014078184A: add     rax, r14
 * 000000014078184D: mov     [r14+658h], rax
 * 0000000140781854: xor     eax, eax
 * 0000000140781856: mov     [r14+660h], rax
 * 000000014078185D: mov     qword ptr [r14+668h], 10Fh
 * 0000000140781868: mov     [r14+670h], r15
 * 000000014078186F: mov     [r14+650h], r13d
 * 0000000140781876: jmp     loc_1407810E0
 * 000000014078187B: mov     rdi, [rbp+1C70h+var_1CD0]
 * 000000014078187F: movzx   r8d, word ptr [r12+14h]
 * 0000000140781885: mov     rbx, rdi
 * 0000000140781888: mov     eax, r9d
 * 000000014078188B: add     r8, 18h
 * 000000014078188F: add     r8, r12
 * 0000000140781892: movzx   r10d, dx
 * 0000000140781896: mov     [rsp+78h], r8
 * 000000014078189B: mov     dword ptr [rsp+1D70h+NtHeaders], r10d
 * 00000001407818A0: lea     rcx, [rax+rax*2]
 * 00000001407818A4: xor     eax, eax
 * 00000001407818A6: lea     r11, [rdi+rcx*4]
 * 00000001407818AA: mov     edi, eax
 * 00000001407818AC: mov     [rbp+1C70h+var_1CE0], r11
 * 00000001407818B0: test    r10d, r10d
 * 00000001407818B3: jz      loc_140781960
 * 00000001407818B9: lea     r15, [r8+8]
 * 00000001407818BD: mov     ecx, [r15]
 * 00000001407818C0: cmp     [r15+8], ecx
 * 00000001407818C4: mov     edx, [r15+4]
 * 00000001407818C8: cmova   ecx, [r15+8]
 * 00000001407818CD: mov     dword ptr [rbp+1C70h+var_1CF0], edx
 * 00000001407818D0: lea     r12d, [rcx+rdx]
 * 00000001407818D4: test    edi, edi
 * 00000001407818D6: jz      short loc_1407818EA
 * 00000001407818D8: lea     eax, [rdi-1]
 * 00000001407818DB: lea     rax, [rax+rax*4]
 * 00000001407818DF: cmp     r12d, [r8+rax*8+0Ch]
 * 00000001407818E4: jb      loc_140781981
 * 00000001407818EA: cmp     rbx, r11
 * 00000001407818ED: jz      short loc_140781942
 * 00000001407818EF: mov     ecx, [rbx]
 * 00000001407818F1: mov     eax, [rbx+4]
 * 00000001407818F4: cmp     ecx, r12d
 * 00000001407818F7: jnb     short loc_14078193D
 * 00000001407818F9: cmp     eax, edx
 * 00000001407818FB: jbe     short loc_14078193D
 * 00000001407818FD: cmp     ecx, edx
 * 00000001407818FF: jb      loc_1407819DA
 * 0000000140781905: cmp     eax, r12d
 * 0000000140781908: ja      loc_1407819DA
 * 000000014078190E: mov     rdx, [rsp+1D70h+var_1D00]
 * 0000000140781913: mov     r9, rbx
 * 0000000140781916: mov     eax, edi
 * 0000000140781918: lea     rcx, [rax+rax*4]
 * 000000014078191C: lea     r8, [r8+rcx*8]
 * 0000000140781920: mov     rcx, r14
 * 0000000140781923: call    $$f4
 * 0000000140781928: mov     r11, [rbp+1C70h+var_1CE0]
 * 000000014078192C: add     rbx, 0Ch
 * 0000000140781930: mov     edx, dword ptr [rbp+1C70h+var_1CF0]
 * 0000000140781933: mov     r8, [rsp+78h]
 * 0000000140781938: cmp     rbx, r11
 * 000000014078193B: jnz     short loc_1407818EF
 * 000000014078193D: mov     r10d, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140781942: add     edi, r13d
 * 0000000140781945: add     r15, 28h ; '('
 * 0000000140781949: cmp     edi, r10d
 * 000000014078194C: jb      loc_1407818BD
 * 0000000140781952: mov     r9, [rbp+1C70h+var_1CE8]
 * 0000000140781956: mov     r12, [rsp+1D70h+var_1D20]
 * 000000014078195B: mov     r15, [rsp+1D70h+var_1D00]
 * 0000000140781960: cmp     rbx, r11
 * 0000000140781963: jz      loc_1407819EE
 * 0000000140781969: xor     eax, eax
 * 000000014078196B: test    dword ptr [r14+6D8h], 200000h
 * 0000000140781976: jnz     loc_140781833
 * 000000014078197C: jmp     loc_14078D663
 * 0000000140781981: xor     eax, eax
 * 0000000140781983: test    dword ptr [r14+6D8h], 200000h
 * 000000014078198E: jz      loc_14078D78E
 * 0000000140781994: cmp     [r14+650h], eax
 * 000000014078199B: jnz     loc_1407810E0
 * 00000001407819A1: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001407819AB: add     rax, r14
 * 00000001407819AE: mov     [r14+658h], rax
 * 00000001407819B5: xor     eax, eax
 * 00000001407819B7: mov     [r14+660h], rax
 * 00000001407819BE: mov     rax, [rsp+1D70h+var_1D00]
 * 00000001407819C3: mov     qword ptr [r14+668h], 10Fh
 * 00000001407819CE: mov     [r14+670h], rax
 * 00000001407819D5: jmp     loc_14078186F
 * 00000001407819DA: xor     eax, eax
 * 00000001407819DC: test    dword ptr [r14+6D8h], 200000h
 * 00000001407819E7: jnz     short loc_140781994
 * 00000001407819E9: jmp     loc_14078D68E
 * 00000001407819EE: mov     r15d, [r14+59Ch]
 * 00000001407819F5: lea     eax, [r10+r10*2]
 * 00000001407819F9: mov     r8d, [r14+67Ch]
 * 0000000140781A00: lea     ecx, [r9+6]
 * 0000000140781A04: mov     ebx, 0FFFFFFF8h
 * 0000000140781A09: and     ecx, ebx
 * 0000000140781A0B: lea     edx, [rcx+rax*8]
 * 0000000140781A0E: lea     eax, [r15+30h]
 * 0000000140781A12: add     eax, edx
 * 0000000140781A14: cmp     eax, [r14+75Ch]
 * 0000000140781A1B: jbe     loc_140781B13
 * 0000000140781A21: mov     edx, eax
 * 0000000140781A23: mov     rcx, r14
 * 0000000140781A26: call    sub_140251E08
 * 0000000140781A2B: mov     [rsp+1D70h+var_1D20], rax
 * 0000000140781A30: mov     r8, rax
 * 0000000140781A33: test    rax, rax
 * 0000000140781A36: jz      loc_140781B09
 * 0000000140781A3C: mov     edx, [r14+6D8h]
 * 0000000140781A43: test    dl, 4
 * 0000000140781A46: jnz     loc_140781AF2
 * 0000000140781A4C: mov     ecx, [r14+59Ch]
 * 0000000140781A53: and     edx, 20000000h
 * 0000000140781A59: mov     rdi, [r14+580h]
 * 0000000140781A60: neg     edx
 * 0000000140781A62: sbb     edx, edx
 * 0000000140781A64: and     edx, [r14+67Ch]
 * 0000000140781A6B: cmp     ecx, 8
 * 0000000140781A6E: jb      short loc_140781A87
 * 0000000140781A70: mov     eax, ecx
 * 0000000140781A72: shr     rax, 3
 * 0000000140781A76: xor     r9d, r9d
 * 0000000140781A79: mov     [r14], r9
 * 0000000140781A7C: add     ecx, ebx
 * 0000000140781A7E: add     r14, 8
 * 0000000140781A82: sub     rax, r13
 * 0000000140781A85: jnz     short loc_140781A79
 * 0000000140781A87: xor     eax, eax
 * 0000000140781A89: test    ecx, ecx
 * 0000000140781A8B: jz      short loc_140781A98
 * 0000000140781A8D: mov     [r14], al
 * 0000000140781A90: add     r14, r13
 * 0000000140781A93: add     ecx, 0FFFFFFFFh
 * 0000000140781A96: jnz     short loc_140781A8D
 * 0000000140781A98: mov     ebx, [r8+67Ch]
 * 0000000140781A9F: mov     [r8+67Ch], edx
 * 0000000140781AA6: cmp     edx, 3
 * 0000000140781AA9: jz      short loc_140781ADC
 * 0000000140781AAB: test    dword ptr [r8+6D8h], 10000000h
 * 0000000140781AB6: mov     rcx, rax
 * 0000000140781AB9: cmovz   ecx, edx
 * 0000000140781ABC: test    ecx, ecx
 * 0000000140781ABE: jz      short loc_140781AD0
 * 0000000140781AC0: lea     rcx, [rdi-8]
 * 0000000140781AC4: mov     rdx, [rcx]
 * 0000000140781AC7: call    qword ptr [r8+210h]
 * 0000000140781ACE: jmp     short loc_140781AE6
 * 0000000140781AD0: mov     rcx, rdi
 * 0000000140781AD3: call    qword ptr [r8+0E8h]
 * 0000000140781ADA: jmp     short loc_140781AE6
 * 0000000140781ADC: mov     rcx, rdi
 * 0000000140781ADF: call    qword ptr [r8+348h]
 * 0000000140781AE6: mov     r8, [rsp+1D70h+var_1D20]
 * 0000000140781AEB: mov     [r8+67Ch], ebx
 * 0000000140781AF2: and     dword ptr [r8+6D8h], 0FFFFFFFBh
 * 0000000140781AFA: mov     r9, [rbp+1C70h+var_1CE8]
 * 0000000140781AFE: mov     r10d, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140781B03: mov     r11, [rbp+1C70h+var_1CE0]
 * 0000000140781B07: jmp     short loc_140781B22
 * 0000000140781B09: mov     ecx, 0C000009Ah
 * 0000000140781B0E: jmp     loc_1407810E5
 * 0000000140781B13: mov     r8, r14
 * 0000000140781B16: mov     [rsp+1D70h+var_1D20], r14
 * 0000000140781B1B: mov     [r14+59Ch], eax
 * 0000000140781B22: add     [r8+5C4h], r13d
 * 0000000140781B29: lea     rdx, [r8+r15]
 * 0000000140781B2D: mov     ecx, 30h ; '0'
 * 0000000140781B32: mov     [rbp+1C70h+var_14E8], rdx
 * 0000000140781B39: mov     rax, rdx
 * 0000000140781B3C: xor     edi, edi
 * 0000000140781B3E: lea     ebx, [rcx-2Ah]
 * 0000000140781B41: mov     [rax], rdi
 * 0000000140781B44: add     ecx, 0FFFFFFF8h
 * 0000000140781B47: add     rax, 8
 * 0000000140781B4B: sub     rbx, r13
 * 0000000140781B4E: jnz     short loc_140781B41
 * 0000000140781B50: or      r15d, 0FFFFFFFFh
 * 0000000140781B54: test    ecx, ecx
 * 0000000140781B56: jz      short loc_140781B63
 * 0000000140781B58: mov     [rax], dil
 * 0000000140781B5B: add     rax, r13
 * 0000000140781B5E: add     ecx, r15d
 * 0000000140781B61: jnz     short loc_140781B58
 * 0000000140781B63: mov     rax, [rbp+1C70h+var_1CD0]
 * 0000000140781B67: mov     dword ptr [rdx], 1Eh
 * 0000000140781B6D: mov     [rdx+8], rax
 * 0000000140781B71: xor     eax, eax
 * 0000000140781B73: mov     [rdx+10h], eax
 * 0000000140781B76: mov     rcx, [r8+5D0h]
 * 0000000140781B7D: mov     rax, rcx
 * 0000000140781B80: jmp     short loc_140781B84
 * 0000000140781B82: xor     ecx, eax
 * 0000000140781B84: shr     rax, 1Fh
 * 0000000140781B88: test    rax, rax
 * 0000000140781B8B: jnz     short loc_140781B82
 * 0000000140781B8D: btr     ecx, 1Fh
 * 0000000140781B91: lea     ebx, [r9-1]
 * 0000000140781B95: mov     [rdx+14h], ecx
 * 0000000140781B98: mov     r14, r8
 * 0000000140781B9B: mov     rax, [rbp+1C70h+var_14E8]
 * 0000000140781BA2: xor     edx, edx
 * 0000000140781BA4: mov     rcx, [rsp+1D70h+var_1D00]
 * 0000000140781BA9: mov     [rbp+1C70h+var_14E0], rax
 * 0000000140781BB0: mov     [rax+18h], rcx
 * 0000000140781BB4: mov     ecx, [r12+50h]
 * 0000000140781BB9: mov     rax, [rbp+1C70h+var_14E0]
 * 0000000140781BC0: mov     r12, [rbp+1C70h+var_1CD0]
 * 0000000140781BC4: mov     [rax+20h], ecx
 * 0000000140781BC7: mov     rax, [rbp+1C70h+var_14E0]
 * 0000000140781BCE: mov     ecx, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140781BD2: mov     [rax+24h], ecx
 * 0000000140781BD5: mov     rax, [rbp+1C70h+var_14E0]
 * 0000000140781BDC: movzx   ecx, word ptr [rbp+1C70h+var_1CC8]
 * 0000000140781BE0: mov     [rax+28h], cx
 * 0000000140781BE4: xor     eax, eax
 * 0000000140781BE6: cmp     dword ptr [rsp+1D70h+Src], edx
 * 0000000140781BEA: mov     rcx, [rbp+1C70h+var_14E0]
 * 0000000140781BF1: setnz   al
 * 0000000140781BF4: add     rbx, 7
 * 0000000140781BF8: and     rbx, 0FFFFFFFFFFFFFFF8h
 * 0000000140781BFC: xor     ax, [rcx+2Ah]
 * 0000000140781C00: and     ax, r13w
 * 0000000140781C04: xor     [rcx+2Ah], ax
 * 0000000140781C08: mov     rcx, [rbp+1C70h+var_14E0]
 * 0000000140781C0F: movzx   eax, word ptr [rcx+28h]
 * 0000000140781C13: lea     rdx, [rcx+30h]
 * 0000000140781C17: add     rbx, rdx
 * 0000000140781C1A: mov     [rbp+1C70h+var_1CE8], rdx
 * 0000000140781C1E: mov     [rbp+1C70h+var_1CD8], rbx
 * 0000000140781C22: lea     rcx, [rax+rax*2]
 * 0000000140781C26: lea     rdi, [rbx+rcx*8]
 * 0000000140781C2A: mov     [rbp+1C70h+var_1CF0], rdi
 * 0000000140781C2E: test    r9d, r9d
 * 0000000140781C31: jz      short loc_140781C3E
 * 0000000140781C33: lea     rax, [r12+0Ch]
 * 0000000140781C38: mov     [rbp+1C70h+var_1CA8], rax
 * 0000000140781C3C: jmp     short loc_140781C42
 * 0000000140781C3E: mov     [rbp+1C70h+var_1CA8], r11
 * 0000000140781C42: xor     eax, eax
 * 0000000140781C44: test    r10d, r10d
 * 0000000140781C47: jz      short loc_140781C79
 * 0000000140781C49: mov     edx, r10d
 * 0000000140781C4C: lea     rax, [rbx+8]
 * 0000000140781C50: mov     r10d, 80000000h
 * 0000000140781C56: xor     r9d, r9d
 * 0000000140781C59: mov     ecx, 2
 * 0000000140781C5E: mov     [rax-8], r9d
 * 0000000140781C62: mov     [rax-4], r9d
 * 0000000140781C66: mov     [rax], r10d
 * 0000000140781C69: add     rax, 0Ch
 * 0000000140781C6D: sub     rcx, r13
 * 0000000140781C70: jnz     short loc_140781C5E
 * 0000000140781C72: sub     rdx, r13
 * 0000000140781C75: jnz     short loc_140781C59
 * 0000000140781C77: xor     eax, eax
 * 0000000140781C79: cmp     rbx, rdi
 * 0000000140781C7C: jz      loc_1407822EC
 * 0000000140781C82: mov     r10, [rsp+78h]
 * 0000000140781C87: jmp     short loc_140781C8F
 * 0000000140781C89: xor     eax, eax
 * 0000000140781C8B: or      r15d, 0FFFFFFFFh
 * 0000000140781C8F: mov     r9d, eax
 * 0000000140781C92: mov     eax, [r10+24h]
 * 0000000140781C96: bt      eax, 19h
 * 0000000140781C9A: jb      loc_140781E75
 * 0000000140781CA0: mov     ecx, [r10]
 * 0000000140781CA3: cmp     ecx, 54494E49h
 * 0000000140781CA9: jnz     short loc_140781CB9
 * 0000000140781CAB: cmp     dword ptr [r10+4], 4742444Bh
 * 0000000140781CB3: jz      loc_140781E75
 * 0000000140781CB9: cmp     ecx, 45474150h
 * 0000000140781CBF: jnz     short loc_140781CF0
 * 0000000140781CC1: movzx   eax, word ptr [r10+4]
 * 0000000140781CC6: mov     edx, 7777h
 * 0000000140781CCB: cmp     ax, dx
 * 0000000140781CCE: jz      loc_140781E75
 * 0000000140781CD4: mov     edx, 7277h
 * 0000000140781CD9: cmp     ax, dx
 * 0000000140781CDC: jz      loc_140781E75
 * 0000000140781CE2: mov     edx, 7877h
 * 0000000140781CE7: cmp     ax, dx
 * 0000000140781CEA: jz      loc_140781E75
 * 0000000140781CF0: cmp     ecx, 41525245h
 * 0000000140781CF6: jnz     short loc_140781D08
 * 0000000140781CF8: mov     eax, 4154h
 * 0000000140781CFD: cmp     [r10+4], ax
 * 0000000140781D02: jz      loc_140781E75
 * 0000000140781D08: mov     rax, [r8+690h]
 * 0000000140781D0F: mov     rdi, r10
 * 0000000140781D12: mov     rbx, [r8+688h]
 * 0000000140781D19: mov     [rbp+1C70h+var_D08], rax
 * 0000000140781D20: sub     rdi, rbx
 * 0000000140781D23: mov     rax, [r8+698h]
 * 0000000140781D2A: mov     [rbp+1C70h+var_D00], rax
 * 0000000140781D31: mov     rax, [r8+6A0h]
 * 0000000140781D38: mov     r8d, 7
 * 0000000140781D3E: mov     [rbp+1C70h+var_CF8], rax
 * 0000000140781D45: mov     [rbp+1C70h+var_D10], rbx
 * 0000000140781D4C: movzx   edx, byte ptr [rdi+rbx]
 * 0000000140781D50: movzx   eax, byte ptr [rbx]
 * 0000000140781D53: add     rbx, r13
 * 0000000140781D56: cmp     rdx, rax
 * 0000000140781D59: jnz     short loc_140781D65
 * 0000000140781D5B: add     r8d, r15d
 * 0000000140781D5E: jnz     short loc_140781D4C
 * 0000000140781D60: jmp     loc_140781DFC
 * 0000000140781D65: mov     rdi, [rbp+1C70h+var_D08]
 * 0000000140781D6C: mov     ebx, 8
 * 0000000140781D71: mov     r8, r10
 * 0000000140781D74: mov     rcx, [r8]
 * 0000000140781D77: add     r8, 8
 * 0000000140781D7B: mov     rax, [rdi]
 * 0000000140781D7E: add     rdi, 8
 * 0000000140781D82: cmp     rcx, rax
 * 0000000140781D85: jnz     short loc_140781DAC
 * 0000000140781D87: add     ebx, 0FFFFFFF8h
 * 0000000140781D8A: cmp     ebx, 8
 * 0000000140781D8D: jnb     short loc_140781D74
 * 0000000140781D8F: test    ebx, ebx
 * 0000000140781D91: jz      short loc_140781DFC
 * 0000000140781D93: movzx   edx, byte ptr [r8]
 * 0000000140781D97: add     r8, r13
 * 0000000140781D9A: movzx   eax, byte ptr [rdi]
 * 0000000140781D9D: add     rdi, r13
 * 0000000140781DA0: cmp     rdx, rax
 * 0000000140781DA3: jnz     short loc_140781DAC
 * 0000000140781DA5: add     ebx, r15d
 * 0000000140781DA8: jnz     short loc_140781D93
 * 0000000140781DAA: jmp     short loc_140781DFC
 * 0000000140781DAC: mov     rbx, [rbp+1C70h+var_D00]
 * 0000000140781DB3: mov     rdi, r10
 * 0000000140781DB6: sub     rdi, rbx
 * 0000000140781DB9: mov     r8d, 4
 * 0000000140781DBF: movzx   edx, byte ptr [rdi+rbx]
 * 0000000140781DC3: movzx   eax, byte ptr [rbx]
 * 0000000140781DC6: add     rbx, r13
 * 0000000140781DC9: cmp     rdx, rax
 * 0000000140781DCC: jnz     short loc_140781DD5
 * 0000000140781DCE: add     r8d, r15d
 * 0000000140781DD1: jnz     short loc_140781DBF
 * 0000000140781DD3: jmp     short loc_140781DFC
 * 0000000140781DD5: mov     rbx, [rbp+1C70h+var_CF8]
 * 0000000140781DDC: mov     rdi, r10
 * 0000000140781DDF: sub     rdi, rbx
 * 0000000140781DE2: mov     r8d, 6
 * 0000000140781DE8: movzx   edx, byte ptr [rdi+rbx]
 * 0000000140781DEC: movzx   eax, byte ptr [rbx]
 * 0000000140781DEF: add     rbx, r13
 * 0000000140781DF2: cmp     rdx, rax
 * 0000000140781DF5: jnz     short loc_140781DFF
 * 0000000140781DF7: add     r8d, r15d
 * 0000000140781DFA: jnz     short loc_140781DE8
 * 0000000140781DFC: mov     r9d, r13d
 * 0000000140781DFF: mov     rbx, [rbp+1C70h+var_1CD8]
 * 0000000140781E03: mov     r8, [rsp+1D70h+var_1D20]
 * 0000000140781E08: mov     ecx, 80000000h
 * 0000000140781E0D: test    [r10+24h], ecx
 * 0000000140781E11: cmovnz  r9d, r13d
 * 0000000140781E15: xor     eax, eax
 * 0000000140781E17: mov     dword ptr [rsp+1D70h+Src], r9d
 * 0000000140781E1C: test    r9d, r9d
 * 0000000140781E1F: jz      short loc_140781E48
 * 0000000140781E21: cmp     dword ptr [r10], 54494E49h
 * 0000000140781E28: jnz     short loc_140781E48
 * 0000000140781E2A: cmp     dword ptr [r10+4], 4742444Bh
 * 0000000140781E32: jnz     short loc_140781E48
 * 0000000140781E34: test    dword ptr [r8+6D8h], 10000000h
 * 0000000140781E3F: cmovnz  r9d, eax
 * 0000000140781E43: mov     dword ptr [rsp+1D70h+Src], r9d
 * 0000000140781E48: mov     ecx, [r10+8]
 * 0000000140781E4C: cmp     [r10+10h], ecx
 * 0000000140781E50: mov     r8d, [r10+0Ch]
 * 0000000140781E54: cmova   ecx, [r10+10h]
 * 0000000140781E59: add     ecx, r8d
 * 0000000140781E5C: mov     dword ptr [rsp+1D70h+var_1D08], r8d
 * 0000000140781E61: mov     dword ptr [rsp+1D70h+NtHeaders], ecx
 * 0000000140781E65: cmp     r12, r11
 * 0000000140781E68: jz      short loc_140781E7A
 * 0000000140781E6A: mov     r11d, [r12]
 * 0000000140781E6E: mov     r15d, [r12+4]
 * 0000000140781E73: jmp     short loc_140781E82
 * 0000000140781E75: mov     r9d, r13d
 * 0000000140781E78: jmp     short loc_140781E08
 * 0000000140781E7A: xor     eax, eax
 * 0000000140781E7C: mov     r11d, eax
 * 0000000140781E7F: mov     r15d, eax
 * 0000000140781E82: mov     rax, [rbp+1C70h+var_1CD0]
 * 0000000140781E86: xor     edi, edi
 * 0000000140781E88: mov     r12d, r8d
 * 0000000140781E8B: cmp     rax, [rbp+1C70h+var_1CE0]
 * 0000000140781E8F: jz      loc_140781FAA
 * 0000000140781E95: cmp     r11d, r8d
 * 0000000140781E98: jbe     loc_140781FAA
 * 0000000140781E9E: cmp     r15d, ecx
 * 0000000140781EA1: ja      loc_140781FAA
 * 0000000140781EA7: test    r9d, r9d
 * 0000000140781EAA: jnz     loc_140781FAA
 * 0000000140781EB0: mov     [rbx], r8d
 * 0000000140781EB3: lea     rcx, [rbp+1C70h+var_FF8]
 * 0000000140781EBA: mov     [rbx+4], r11d
 * 0000000140781EBE: lea     rdx, [rbp+1C70h+var_D30]
 * 0000000140781EC5: mov     eax, [rbx]
 * 0000000140781EC7: mov     r12d, r11d
 * 0000000140781ECA: mov     edi, eax
 * 0000000140781ECC: mov     ebx, r11d
 * 0000000140781ECF: add     rdi, [rsp+1D70h+var_1D00]
 * 0000000140781ED4: sub     ebx, eax
 * 0000000140781ED6: mov     r10d, ebx
 * 0000000140781ED9: add     r10, rdi
 * 0000000140781EDC: xor     eax, eax
 * 0000000140781EDE: mov     r9d, eax
 * 0000000140781EE1: mov     r8, [rdx]
 * 0000000140781EE4: mov     eax, [rcx]
 * 0000000140781EE6: add     rax, r8
 * 0000000140781EE9: cmp     rdi, rax
 * 0000000140781EEC: jnb     short loc_140781EF7
 * 0000000140781EEE: cmp     r10, r8
 * 0000000140781EF1: ja      loc_140781F9B
 * 0000000140781EF7: mov     eax, 4
 * 0000000140781EFC: add     r9d, r13d
 * 0000000140781EFF: add     rcx, rax
 * 0000000140781F02: add     rdx, 8
 * 0000000140781F06: cmp     r9d, eax
 * 0000000140781F09: jb      short loc_140781EE1
 * 0000000140781F0B: mov     r8, [rsp+1D70h+var_1D20]
 * 0000000140781F10: mov     rax, rdi
 * 0000000140781F13: add     [r8+5E0h], ebx
 * 0000000140781F1A: mov     ecx, [r8+5CCh]
 * 0000000140781F21: mov     rdx, [r8+5D0h]
 * 0000000140781F28: cmp     rdi, r10
 * 0000000140781F2B: jnb     short loc_140781F39
 * 0000000140781F2D: prefetchnta byte ptr [rax]
 * 0000000140781F30: add     rax, 40h ; '@'
 * 0000000140781F34: cmp     rax, r10
 * 0000000140781F37: jb      short loc_140781F2D
 * 0000000140781F39: cmp     ebx, 8
 * 0000000140781F3C: jb      short loc_140781F56
 * 0000000140781F3E: mov     eax, ebx
 * 0000000140781F40: shr     rax, 3
 * 0000000140781F44: xor     rdx, [rdi]
 * 0000000140781F47: add     ebx, 0FFFFFFF8h
 * 0000000140781F4A: rol     rdx, cl
 * 0000000140781F4D: add     rdi, 8
 * 0000000140781F51: sub     rax, r13
 * 0000000140781F54: jnz     short loc_140781F44
 * 0000000140781F56: test    ebx, ebx
 * 0000000140781F58: jz      short loc_140781F6B
 * 0000000140781F5A: movzx   eax, byte ptr [rdi]
 * 0000000140781F5D: add     rdi, r13
 * 0000000140781F60: xor     rdx, rax
 * 0000000140781F63: rol     rdx, cl
 * 0000000140781F66: add     ebx, 0FFFFFFFFh
 * 0000000140781F69: jnz     short loc_140781F5A
 * 0000000140781F6B: mov     rax, rdx
 * 0000000140781F6E: shr     rax, 1Fh
 * 0000000140781F72: xor     edi, edi
 * 0000000140781F74: jmp     short loc_140781F7C
 * 0000000140781F76: xor     edx, eax
 * 0000000140781F78: shr     rax, 1Fh
 * 0000000140781F7C: test    rax, rax
 * 0000000140781F7F: jnz     short loc_140781F76
 * 0000000140781F81: mov     rax, [rbp+1C70h+var_1CD8]
 * 0000000140781F85: btr     edx, 1Fh
 * 0000000140781F89: mov     r9d, dword ptr [rsp+1D70h+Src]
 * 0000000140781F8E: mov     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140781F92: mov     [rax+8], edx
 * 0000000140781F95: mov     rax, [rbp+1C70h+var_1CD0]
 * 0000000140781F99: jmp     short loc_140781FAF
 * 0000000140781F9B: mov     r9d, dword ptr [rsp+1D70h+Src]
 * 0000000140781FA0: xor     edi, edi
 * 0000000140781FA2: mov     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140781FA6: mov     rax, [rbp+1C70h+var_1CD0]
 * 0000000140781FAA: mov     r8, [rsp+1D70h+var_1D20]
 * 0000000140781FAF: cmp     r11d, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140781FB4: mov     r11, [rbp+1C70h+var_1CE0]
 * 0000000140781FB8: jb      loc_140782261
 * 0000000140781FBE: cmp     r15d, ecx
 * 0000000140781FC1: mov     r15, [rbp+1C70h+var_1CA8]
 * 0000000140781FC5: ja      loc_14078218E
 * 0000000140781FCB: cmp     rax, r11
 * 0000000140781FCE: jz      loc_14078218E
 * 0000000140781FD4: mov     r11d, [r15+4]
 * 0000000140781FD8: cmp     r11d, ecx
 * 0000000140781FDB: ja      loc_14078218A
 * 0000000140781FE1: mov     rax, [rbp+1C70h+var_1CE8]
 * 0000000140781FE5: mov     rdx, [rbp+1C70h+var_1CE0]
 * 0000000140781FE9: mov     rbx, [rbp+1C70h+var_1CD0]
 * 0000000140781FED: cmp     r15, rdx
 * 0000000140781FF0: jz      loc_14078218A
 * 0000000140781FF6: test    r9d, r9d
 * 0000000140781FF9: jz      short loc_140782003
 * 0000000140781FFB: mov     byte ptr [rax], 80h
 * 0000000140781FFE: jmp     loc_140782161
 * 0000000140782003: mov     ecx, [rbx+4]
 * 0000000140782006: mov     r12d, [r15]
 * 0000000140782009: cmp     r12d, ecx
 * 000000014078200C: jnb     short loc_140782065
 * 000000014078200E: xor     eax, eax
 * 0000000140782010: test    dword ptr [r8+6D8h], 200000h
 * 000000014078201B: jz      loc_14078D7B9
 * 0000000140782021: cmp     [r8+650h], eax
 * 0000000140782028: jnz     short loc_140782065
 * 000000014078202A: mov     rdi, [rsp+1D70h+var_1D00]
 * 000000014078202F: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140782039: add     rax, r8
 * 000000014078203C: mov     [r8+658h], rax
 * 0000000140782043: xor     eax, eax
 * 0000000140782045: mov     [r8+660h], rax
 * 000000014078204C: mov     qword ptr [r8+668h], 10Fh
 * 0000000140782057: mov     [r8+670h], rdi
 * 000000014078205E: mov     [r8+650h], r13d
 * 0000000140782065: mov     ebx, r12d
 * 0000000140782068: lea     rdx, [rbp+1C70h+var_FF8]
 * 000000014078206F: sub     ebx, ecx
 * 0000000140782071: lea     r8, [rbp+1C70h+var_D30]
 * 0000000140782078: mov     rdi, rcx
 * 000000014078207B: mov     r10d, ebx
 * 000000014078207E: add     rdi, [rsp+1D70h+var_1D00]
 * 0000000140782083: add     r10, rdi
 * 0000000140782086: xor     eax, eax
 * 0000000140782088: mov     r9d, eax
 * 000000014078208B: mov     rcx, [r8]
 * 000000014078208E: mov     eax, [rdx]
 * 0000000140782090: add     rax, rcx
 * 0000000140782093: cmp     rdi, rax
 * 0000000140782096: jnb     short loc_1407820A1
 * 0000000140782098: cmp     r10, rcx
 * 000000014078209B: ja      loc_14078213E
 * 00000001407820A1: mov     eax, 4
 * 00000001407820A6: add     r9d, r13d
 * 00000001407820A9: add     rdx, rax
 * 00000001407820AC: add     r8, 8
 * 00000001407820B0: cmp     r9d, eax
 * 00000001407820B3: jb      short loc_14078208B
 * 00000001407820B5: cmp     ebx, eax
 * 00000001407820B7: jb      loc_14078213E
 * 00000001407820BD: mov     r8, [rsp+1D70h+var_1D20]
 * 00000001407820C2: mov     rax, rdi
 * 00000001407820C5: add     [r8+5E0h], ebx
 * 00000001407820CC: mov     ecx, [r8+5CCh]
 * 00000001407820D3: mov     rdx, [r8+5D0h]
 * 00000001407820DA: cmp     rdi, r10
 * 00000001407820DD: jnb     short loc_1407820EB
 * 00000001407820DF: prefetchnta byte ptr [rax]
 * 00000001407820E2: add     rax, 40h ; '@'
 * 00000001407820E6: cmp     rax, r10
 * 00000001407820E9: jb      short loc_1407820DF
 * 00000001407820EB: cmp     ebx, 8
 * 00000001407820EE: jb      short loc_140782108
 * 00000001407820F0: mov     eax, ebx
 * 00000001407820F2: shr     rax, 3
 * 00000001407820F6: xor     rdx, [rdi]
 * 00000001407820F9: add     ebx, 0FFFFFFF8h
 * 00000001407820FC: rol     rdx, cl
 * 00000001407820FF: add     rdi, 8
 * 0000000140782103: sub     rax, r13
 * 0000000140782106: jnz     short loc_1407820F6
 * 0000000140782108: test    ebx, ebx
 * 000000014078210A: jz      short loc_14078211D
 * 000000014078210C: movzx   eax, byte ptr [rdi]
 * 000000014078210F: add     rdi, r13
 * 0000000140782112: xor     rdx, rax
 * 0000000140782115: rol     rdx, cl
 * 0000000140782118: add     ebx, 0FFFFFFFFh
 * 000000014078211B: jnz     short loc_14078210C
 * 000000014078211D: mov     rax, rdx
 * 0000000140782120: shr     rax, 7
 * 0000000140782124: xor     edi, edi
 * 0000000140782126: jmp     short loc_14078212E
 * 0000000140782128: xor     dl, al
 * 000000014078212A: shr     rax, 7
 * 000000014078212E: test    rax, rax
 * 0000000140782131: jnz     short loc_140782128
 * 0000000140782133: mov     rcx, [rbp+1C70h+var_1CE8]
 * 0000000140782137: and     dl, 7Fh
 * 000000014078213A: mov     [rcx], dl
 * 000000014078213C: jmp     short loc_14078214C
 * 000000014078213E: mov     rcx, [rbp+1C70h+var_1CE8]
 * 0000000140782142: xor     edi, edi
 * 0000000140782144: mov     r8, [rsp+1D70h+var_1D20]
 * 0000000140782149: mov     byte ptr [rcx], 80h
 * 000000014078214C: mov     r9d, dword ptr [rsp+1D70h+Src]
 * 0000000140782151: mov     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140782155: mov     rax, [rbp+1C70h+var_1CE8]
 * 0000000140782159: mov     rdx, [rbp+1C70h+var_1CE0]
 * 000000014078215D: mov     rbx, [rbp+1C70h+var_1CD0]
 * 0000000140782161: add     rbx, 0Ch
 * 0000000140782165: add     rax, r13
 * 0000000140782168: add     r15, 0Ch
 * 000000014078216C: mov     [rbp+1C70h+var_1CD0], rbx
 * 0000000140782170: mov     [rbp+1C70h+var_1CE8], rax
 * 0000000140782174: mov     [rbp+1C70h+var_1CA8], r15
 * 0000000140782178: cmp     r15, rdx
 * 000000014078217B: jz      short loc_140782181
 * 000000014078217D: mov     r11d, [r15+4]
 * 0000000140782181: cmp     r11d, ecx
 * 0000000140782184: jbe     loc_140781FED
 * 000000014078218A: mov     r11, [rbp+1C70h+var_1CE0]
 * 000000014078218E: test    r9d, r9d
 * 0000000140782191: jnz     loc_140782282
 * 0000000140782197: cmp     r12d, ecx
 * 000000014078219A: jz      loc_140782282
 * 00000001407821A0: mov     rax, [rbp+1C70h+var_1CD8]
 * 00000001407821A4: lea     rdx, [rbp+1C70h+var_D30]
 * 00000001407821AB: mov     ebx, ecx
 * 00000001407821AD: mov     [rax+0Ch], r12d
 * 00000001407821B1: mov     [rax+10h], ecx
 * 00000001407821B4: lea     rcx, [rbp+1C70h+var_FF8]
 * 00000001407821BB: mov     eax, [rax+0Ch]
 * 00000001407821BE: mov     edi, eax
 * 00000001407821C0: sub     ebx, eax
 * 00000001407821C2: add     rdi, [rsp+1D70h+var_1D00]
 * 00000001407821C7: mov     r10d, ebx
 * 00000001407821CA: add     r10, rdi
 * 00000001407821CD: xor     eax, eax
 * 00000001407821CF: mov     r9d, eax
 * 00000001407821D2: mov     r8, [rdx]
 * 00000001407821D5: mov     eax, [rcx]
 * 00000001407821D7: add     rax, r8
 * 00000001407821DA: cmp     rdi, rax
 * 00000001407821DD: jnb     short loc_1407821E8
 * 00000001407821DF: cmp     r10, r8
 * 00000001407821E2: ja      loc_140782282
 * 00000001407821E8: mov     eax, 4
 * 00000001407821ED: add     r9d, r13d
 * 00000001407821F0: add     rcx, rax
 * 00000001407821F3: add     rdx, 8
 * 00000001407821F7: cmp     r9d, eax
 * 00000001407821FA: jb      short loc_1407821D2
 * 00000001407821FC: mov     r8, [rsp+1D70h+var_1D20]
 * 0000000140782201: mov     rax, rdi
 * 0000000140782204: add     [r8+5E0h], ebx
 * 000000014078220B: mov     ecx, [r8+5CCh]
 * 0000000140782212: mov     rdx, [r8+5D0h]
 * 0000000140782219: cmp     rdi, r10
 * 000000014078221C: jnb     short loc_14078222A
 * 000000014078221E: prefetchnta byte ptr [rax]
 * 0000000140782221: add     rax, 40h ; '@'
 * 0000000140782225: cmp     rax, r10
 * 0000000140782228: jb      short loc_14078221E
 * 000000014078222A: cmp     ebx, 8
 * 000000014078222D: jb      short loc_140782247
 * 000000014078222F: mov     eax, ebx
 * 0000000140782231: shr     rax, 3
 * 0000000140782235: xor     rdx, [rdi]
 * 0000000140782238: add     ebx, 0FFFFFFF8h
 * 000000014078223B: rol     rdx, cl
 * 000000014078223E: add     rdi, 8
 * 0000000140782242: sub     rax, r13
 * 0000000140782245: jnz     short loc_140782235
 * 0000000140782247: test    ebx, ebx
 * 0000000140782249: jz      short loc_14078225C
 * 000000014078224B: movzx   eax, byte ptr [rdi]
 * 000000014078224E: add     rdi, r13
 * 0000000140782251: xor     rdx, rax
 * 0000000140782254: rol     rdx, cl
 * 0000000140782257: add     ebx, 0FFFFFFFFh
 * 000000014078225A: jnz     short loc_14078224B
 * 000000014078225C: mov     rax, rdx
 * 000000014078225F: jmp     short loc_14078226C
 * 0000000140782261: mov     r15, [rbp+1C70h+var_1CA8]
 * 0000000140782265: jmp     loc_14078218E
 * 000000014078226A: xor     edx, eax
 * 000000014078226C: shr     rax, 1Fh
 * 0000000140782270: test    rax, rax
 * 0000000140782273: jnz     short loc_14078226A
 * 0000000140782275: mov     rbx, [rbp+1C70h+var_1CD8]
 * 0000000140782279: btr     edx, 1Fh
 * 000000014078227D: mov     [rbx+14h], edx
 * 0000000140782280: jmp     short loc_14078228B
 * 0000000140782282: mov     r8, [rsp+1D70h+var_1D20]
 * 0000000140782287: mov     rbx, [rbp+1C70h+var_1CD8]
 * 000000014078228B: mov     r12, [rbp+1C70h+var_1CD0]
 * 000000014078228F: cmp     r12, r11
 * 0000000140782292: jz      short loc_1407822CC
 * 0000000140782294: mov     eax, [r12]
 * 0000000140782298: mov     ecx, [r12+4]
 * 000000014078229D: cmp     eax, dword ptr [rsp+1D70h+var_1D08]
 * 00000001407822A1: jb      short loc_1407822CC
 * 00000001407822A3: cmp     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 00000001407822A7: ja      short loc_1407822CC
 * 00000001407822A9: cmp     r15, r11
 * 00000001407822AC: jz      short loc_1407822C4
 * 00000001407822AE: mov     rax, [rbp+1C70h+var_1CE8]
 * 00000001407822B2: mov     byte ptr [rax], 80h
 * 00000001407822B5: add     rax, r13
 * 00000001407822B8: add     r15, 0Ch
 * 00000001407822BC: mov     [rbp+1C70h+var_1CE8], rax
 * 00000001407822C0: mov     [rbp+1C70h+var_1CA8], r15
 * 00000001407822C4: add     r12, 0Ch
 * 00000001407822C8: mov     [rbp+1C70h+var_1CD0], r12
 * 00000001407822CC: mov     r10, [rsp+78h]
 * 00000001407822D1: add     rbx, 18h
 * 00000001407822D5: add     r10, 28h ; '('
 * 00000001407822D9: mov     [rbp+1C70h+var_1CD8], rbx
 * 00000001407822DD: mov     [rsp+78h], r10
 * 00000001407822E2: cmp     rbx, [rbp+1C70h+var_1CF0]
 * 00000001407822E6: jnz     loc_140781C89
 * 00000001407822EC: xor     eax, eax
 * 00000001407822EE: mov     [rbp+1C70h+var_15F0], r14
 * 00000001407822F5: mov     ecx, eax
 * 00000001407822F7: jmp     loc_1407810E5
 * 00000001407822FC: jmp     short loc_1407822FC
 * 00000001407822FE: xor     eax, eax
 * 0000000140782300: lea     r15, asc_1402F2278; " \""
 * 0000000140782307: mov     dword ptr [rsp+1D70h+Src], eax
 * 000000014078230B: mov     [rsp+1D70h+var_1D00], r15
 * 0000000140782310: mov     edi, eax
 * 0000000140782312: jmp     short loc_140782316
 * 0000000140782314: xor     eax, eax
 * 0000000140782316: mov     rcx, gs:188h
 * 000000014078231F: mov     r12, rax
 * 0000000140782322: call    qword ptr [r14+150h]
 * 0000000140782329: mov     rcx, [r14+480h]
 * 0000000140782330: mov     dl, r13b
 * 0000000140782333: call    qword ptr [r14+0D0h]
 * 000000014078233A: mov     rbx, qword ptr cs:PsLoadedModuleList
 * 0000000140782341: lea     rax, PsLoadedModuleList
 * 0000000140782348: cmp     rbx, rax
 * 000000014078234B: jz      short loc_140782390
 * 000000014078234D: mov     eax, edi
 * 000000014078234F: lea     rcx, cs:140000000h
 * 0000000140782356: shl     rax, 4
 * 000000014078235A: lea     rdi, rva unk_1402F2258[rcx]
 * 0000000140782361: add     rdi, rax
 * 0000000140782364: lea     rdx, [rbx+58h]; String2
 * 0000000140782368: mov     r8b, r13b; CaseInSensitive
 * 000000014078236B: mov     rcx, rdi; String1
 * 000000014078236E: call    RtlEqualUnicodeString
 * 0000000140782373: test    al, al
 * 0000000140782375: jnz     short loc_140782388
 * 0000000140782377: mov     rbx, [rbx]
 * 000000014078237A: lea     rax, PsLoadedModuleList
 * 0000000140782381: cmp     rbx, rax
 * 0000000140782384: jnz     short loc_140782364
 * 0000000140782386: jmp     short loc_14078238C
 * 0000000140782388: mov     r12, [rbx+30h]
 * 000000014078238C: mov     edi, dword ptr [rsp+1D70h+Src]
 * 0000000140782390: mov     rcx, [r14+480h]
 * 0000000140782397: call    qword ptr [r14+100h]
 * 000000014078239E: call    qword ptr [r14+158h]
 * 00000001407823A5: xor     eax, eax
 * 00000001407823A7: test    r12, r12
 * 00000001407823AA: jz      loc_1407825A2
 * 00000001407823B0: movzx   ecx, word ptr [r15]
 * 00000001407823B4: mov     r9d, 0FFFFFFF8h
 * 00000001407823BA: mov     r15d, [r14+59Ch]
 * 00000001407823C1: add     ecx, 7
 * 00000001407823C4: mov     r8d, [r14+67Ch]
 * 00000001407823CB: and     ecx, r9d
 * 00000001407823CE: add     ecx, 30h ; '0'
 * 00000001407823D1: add     ecx, r15d
 * 00000001407823D4: cmp     ecx, [r14+75Ch]
 * 00000001407823DB: jbe     loc_1407824B5
 * 00000001407823E1: mov     edx, ecx
 * 00000001407823E3: mov     rcx, r14
 * 00000001407823E6: call    sub_140251E08
 * 00000001407823EB: mov     rbx, rax
 * 00000001407823EE: xor     eax, eax
 * 00000001407823F0: test    rbx, rbx
 * 00000001407823F3: jz      loc_14077C9F7
 * 00000001407823F9: mov     edx, [r14+6D8h]
 * 0000000140782400: test    dl, 4
 * 0000000140782403: jnz     loc_1407824A6
 * 0000000140782409: mov     ecx, [r14+59Ch]
 * 0000000140782410: and     edx, 20000000h
 * 0000000140782416: mov     rdi, [r14+580h]
 * 000000014078241D: neg     edx
 * 000000014078241F: sbb     edx, edx
 * 0000000140782421: and     edx, [r14+67Ch]
 * 0000000140782428: cmp     ecx, 8
 * 000000014078242B: jb      short loc_140782445
 * 000000014078242D: mov     eax, ecx
 * 000000014078242F: shr     rax, 3
 * 0000000140782433: xor     r9d, r9d
 * 0000000140782436: mov     [r14], r9
 * 0000000140782439: add     ecx, 0FFFFFFF8h
 * 000000014078243C: add     r14, 8
 * 0000000140782440: sub     rax, r13
 * 0000000140782443: jnz     short loc_140782436
 * 0000000140782445: xor     eax, eax
 * 0000000140782447: test    ecx, ecx
 * 0000000140782449: jz      short loc_140782456
 * 000000014078244B: mov     [r14], al
 * 000000014078244E: add     r14, r13
 * 0000000140782451: add     ecx, 0FFFFFFFFh
 * 0000000140782454: jnz     short loc_14078244B
 * 0000000140782456: mov     r14d, [rbx+67Ch]
 * 000000014078245D: mov     [rbx+67Ch], edx
 * 0000000140782463: cmp     edx, 3
 * 0000000140782466: jz      short loc_140782496
 * 0000000140782468: test    dword ptr [rbx+6D8h], 10000000h
 * 0000000140782472: mov     rcx, rax
 * 0000000140782475: cmovz   ecx, edx
 * 0000000140782478: test    ecx, ecx
 * 000000014078247A: jz      short loc_14078248B
 * 000000014078247C: lea     rcx, [rdi-8]
 * 0000000140782480: mov     rdx, [rcx]
 * 0000000140782483: call    qword ptr [rbx+210h]
 * 0000000140782489: jmp     short loc_14078249F
 * 000000014078248B: mov     rcx, rdi
 * 000000014078248E: call    qword ptr [rbx+0E8h]
 * 0000000140782494: jmp     short loc_14078249F
 * 0000000140782496: mov     rcx, rdi
 * 0000000140782499: call    qword ptr [rbx+348h]
 * 000000014078249F: mov     [rbx+67Ch], r14d
 * 00000001407824A6: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 00000001407824AD: mov     r9d, 0FFFFFFF8h
 * 00000001407824B3: jmp     short loc_1407824BF
 * 00000001407824B5: mov     rbx, r14
 * 00000001407824B8: mov     [r14+59Ch], ecx
 * 00000001407824BF: add     [rbx+5C4h], r13d
 * 00000001407824C6: lea     rdx, [rbx+r15]
 * 00000001407824CA: mov     ecx, 30h ; '0'
 * 00000001407824CF: mov     [rbp+1C70h+var_14D8], rdx
 * 00000001407824D6: mov     rax, rdx
 * 00000001407824D9: xor     r8d, r8d
 * 00000001407824DC: lea     edi, [rcx-2Ah]
 * 00000001407824DF: mov     [rax], r8
 * 00000001407824E2: add     ecx, r9d
 * 00000001407824E5: add     rax, 8
 * 00000001407824E9: sub     rdi, r13
 * 00000001407824EC: jnz     short loc_1407824DF
 * 00000001407824EE: test    ecx, ecx
 * 00000001407824F0: jz      short loc_1407824FD
 * 00000001407824F2: mov     [rax], r8b
 * 00000001407824F5: add     rax, r13
 * 00000001407824F8: add     ecx, 0FFFFFFFFh
 * 00000001407824FB: jnz     short loc_1407824F2
 * 00000001407824FD: xor     eax, eax
 * 00000001407824FF: mov     dword ptr [rdx], 1Ch
 * 0000000140782505: mov     [rdx+8], rax
 * 0000000140782509: mov     [rdx+10h], eax
 * 000000014078250C: mov     rcx, [rbx+5D0h]
 * 0000000140782513: mov     rax, rcx
 * 0000000140782516: jmp     short loc_14078251A
 * 0000000140782518: xor     ecx, eax
 * 000000014078251A: shr     rax, 1Fh
 * 000000014078251E: test    rax, rax
 * 0000000140782521: jnz     short loc_140782518
 * 0000000140782523: mov     r15, [rsp+1D70h+var_1D00]
 * 0000000140782528: btr     ecx, 1Fh
 * 000000014078252C: mov     [rdx+14h], ecx
 * 000000014078252F: mov     rax, [rbp+1C70h+var_14D8]
 * 0000000140782536: mov     [rbp+1C70h+var_14D0], rax
 * 000000014078253D: mov     [rax+18h], r12
 * 0000000140782541: movzx   ecx, word ptr [r15]
 * 0000000140782545: mov     rax, [rbp+1C70h+var_14D0]
 * 000000014078254C: mov     [rax+28h], cx
 * 0000000140782550: mov     rdi, [rbp+1C70h+var_14D0]
 * 0000000140782557: movzx   edx, word ptr [r15]
 * 000000014078255B: add     rdi, 30h ; '0'
 * 000000014078255F: mov     rcx, [r15+8]
 * 0000000140782563: cmp     edx, 8
 * 0000000140782566: jb      short loc_140782585
 * 0000000140782568: mov     r8d, edx
 * 000000014078256B: shr     r8, 3
 * 000000014078256F: mov     rax, [rcx]
 * 0000000140782572: add     edx, r9d
 * 0000000140782575: mov     [rdi], rax
 * 0000000140782578: add     rcx, 8
 * 000000014078257C: add     rdi, 8
 * 0000000140782580: sub     r8, r13
 * 0000000140782583: jnz     short loc_14078256F
 * 0000000140782585: test    edx, edx
 * 0000000140782587: jz      short loc_140782599
 * 0000000140782589: sub     rdi, rcx
 * 000000014078258C: mov     al, [rcx]
 * 000000014078258E: mov     [rdi+rcx], al
 * 0000000140782591: add     rcx, r13
 * 0000000140782594: add     edx, 0FFFFFFFFh
 * 0000000140782597: jnz     short loc_14078258C
 * 0000000140782599: mov     edi, dword ptr [rsp+1D70h+Src]
 * 000000014078259D: mov     r14, rbx
 * 00000001407825A0: xor     eax, eax
 * 00000001407825A2: add     edi, r13d
 * 00000001407825A5: add     r15, 10h
 * 00000001407825A9: mov     dword ptr [rsp+1D70h+Src], edi
 * 00000001407825AD: mov     [rsp+1D70h+var_1D00], r15
 * 00000001407825B2: cmp     edi, 2
 * 00000001407825B5: jb      loc_140782314
 * 00000001407825BB: mov     [rbp+1C70h+var_15F0], r14
 * 00000001407825C2: test    r14, r14
 * 00000001407825C5: jz      loc_14077C9F7
 * 00000001407825CB: cli
 * 00000001407825CC: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 00000001407825D2: jnz     short loc_1407825D6
 * 00000001407825D4: jmp     short loc_1407825D4
 * 00000001407825D6: sti
 * 00000001407825D7: call    KiGetHalExtensionList
 * 00000001407825DC: mov     rcx, rax
 * 00000001407825DF: mov     [rsp+1D70h+var_1D00], rax
 * 00000001407825E4: mov     rax, [rax]
 * 00000001407825E7: mov     [rbp+1C70h+var_1CD0], rax
 * 00000001407825EB: cmp     rax, rcx
 * 00000001407825EE: jz      loc_140782F79
 * 00000001407825F4: xor     ebx, ebx
 * 00000001407825F6: mov     rcx, rax
 * 00000001407825F9: call    KiGetHalExtensionModuleFromLinks
 * 00000001407825FE: test    rax, rax
 * 0000000140782601: jz      loc_140782F63
 * 0000000140782607: mov     r12, [rax+30h]
 * 000000014078260B: lea     r8, [rbp+1C70h+var_1A80]
 * 0000000140782612: mov     rcx, r12
 * 0000000140782615: mov     [rsp+1D70h+var_1D20], r12
 * 000000014078261A: lea     rdx, [rbp+1C70h+var_14C8]
 * 0000000140782621: call    qword ptr [r14+1E8h]
 * 0000000140782628: mov     [rbp+1C70h+var_1CE8], rax
 * 000000014078262C: test    rax, rax
 * 000000014078262F: jz      loc_1407842AC
 * 0000000140782635: mov     r11, [rbp+1C70h+var_14C8]
 * 000000014078263C: xor     eax, eax
 * 000000014078263E: mov     r15d, [rbp+1C70h+var_1A80]
 * 0000000140782645: mov     ecx, 4
 * 000000014078264A: mov     [rbp+1C70h+var_1038], rax
 * 0000000140782651: xor     edx, edx
 * 0000000140782653: lea     rax, [rbp+1C70h+var_1030]
 * 000000014078265A: mov     [rbp+1C70h+var_1CE0], r11
 * 000000014078265E: mov     [rax], dl
 * 0000000140782660: add     rax, r13
 * 0000000140782663: add     ecx, 0FFFFFFFFh
 * 0000000140782666: jnz     short loc_14078265E
 * 0000000140782668: xor     eax, eax
 * 000000014078266A: mov     r10d, eax
 * 000000014078266D: cmp     [r14+5C4h], eax
 * 0000000140782674: jbe     loc_140782834
 * 000000014078267A: mov     ecx, [rbp+1C70h+var_1030]
 * 0000000140782680: mov     edx, dword ptr [rbp+1C70h+var_1038+4]
 * 0000000140782686: mov     edi, dword ptr [rbp+1C70h+var_1038]
 * 000000014078268C: mov     rax, [r14+778h]
 * 0000000140782693: mov     r9, r14
 * 0000000140782696: test    rax, rax
 * 0000000140782699: cmovnz  r9, rax
 * 000000014078269D: xor     eax, eax
 * 000000014078269F: mov     r8d, eax
 * 00000001407826A2: mov     ebx, [r9+5C0h]
 * 00000001407826A9: add     rbx, r9
 * 00000001407826AC: test    edi, edi
 * 00000001407826AE: jz      short loc_1407826BD
 * 00000001407826B0: cmp     edx, r10d
 * 00000001407826B3: ja      short loc_1407826BD
 * 00000001407826B5: mov     ebx, ecx
 * 00000001407826B7: mov     r8d, edx
 * 00000001407826BA: add     rbx, r9
 * 00000001407826BD: cmp     r8d, r10d
 * 00000001407826C0: jz      loc_1407827DA
 * 00000001407826C6: mov     eax, r10d
 * 00000001407826C9: mov     r12d, 2
 * 00000001407826CF: sub     eax, r8d
 * 00000001407826D2: mov     r11, 0AAAAAAAAAAAAAAABh
 * 00000001407826DC: mov     edi, eax
 * 00000001407826DE: add     r8d, eax
 * 00000001407826E1: mov     ecx, [rbx]
 * 00000001407826E3: cmp     ecx, 11h
 * 00000001407826E6: jg      short loc_140782755
 * 00000001407826E8: jz      loc_1407827C0
 * 00000001407826EE: sub     ecx, 1
 * 00000001407826F1: jz      short loc_14078273F
 * 00000001407826F3: sub     ecx, 6
 * 00000001407826F6: jz      short loc_14078272E
 * 00000001407826F8: sub     ecx, 1
 * 00000001407826FB: jz      short loc_14078271F
 * 00000001407826FD: sub     ecx, r12d
 * 0000000140782700: jz      short loc_140782711
 * 0000000140782702: cmp     ecx, r12d
 * 0000000140782705: jz      short loc_14078273F
 * 0000000140782707: mov     eax, 30h ; '0'
 * 000000014078270C: jmp     loc_1407827C5
 * 0000000140782711: mov     eax, [rbx+1Ch]
 * 0000000140782714: add     eax, 3
 * 0000000140782717: shl     eax, 4
 * 000000014078271A: jmp     loc_1407827C5
 * 000000014078271F: movzx   eax, word ptr [rbx+20h]
 * 0000000140782723: add     eax, 37h ; '7'
 * 0000000140782726: and     eax, 0FFFFFFF8h
 * 0000000140782729: jmp     loc_1407827C5
 * 000000014078272E: mov     eax, [rbx+18h]
 * 0000000140782731: add     eax, r12d
 * 0000000140782734: lea     eax, [rax+rax*2]
 * 0000000140782737: shl     eax, 3
 * 000000014078273A: jmp     loc_1407827C5
 * 000000014078273F: mov     ecx, [rbx+10h]
 * 0000000140782742: mov     rax, r11
 * 0000000140782745: mul     rcx
 * 0000000140782748: shr     rdx, 3
 * 000000014078274C: lea     eax, ds:30h[rdx*4]
 * 0000000140782753: jmp     short loc_1407827C5
 * 0000000140782755: cmp     ecx, 13h
 * 0000000140782758: jz      short loc_1407827C0
 * 000000014078275A: cmp     ecx, 1Ch
 * 000000014078275D: jz      short loc_1407827B7
 * 000000014078275F: cmp     ecx, 1Eh
 * 0000000140782762: jz      short loc_140782792
 * 0000000140782764: lea     eax, [rcx-21h]
 * 0000000140782767: cmp     eax, r13d
 * 000000014078276A: ja      short loc_140782707
 * 000000014078276C: mov     ecx, [rbx+20h]
 * 000000014078276F: mov     edx, [rbx+28h]
 * 0000000140782772: and     ecx, 0FFFh
 * 0000000140782778: add     rdx, 0FFFh
 * 000000014078277F: add     rdx, rcx
 * 0000000140782782: shr     rdx, 0Ch
 * 0000000140782786: lea     eax, [rdx+rdx*4]
 * 0000000140782789: lea     eax, ds:30h[rax*4]
 * 0000000140782790: jmp     short loc_1407827C5
 * 0000000140782792: mov     ecx, [rbx+24h]
 * 0000000140782795: mov     rax, r11
 * 0000000140782798: sub     ecx, r13d
 * 000000014078279B: mul     rcx
 * 000000014078279E: movzx   eax, word ptr [rbx+28h]
 * 00000001407827A2: shr     rdx, 3
 * 00000001407827A6: add     edx, 7
 * 00000001407827A9: and     edx, 0FFFFFFF8h
 * 00000001407827AC: add     eax, r12d
 * 00000001407827AF: lea     eax, [rax+rax*2]
 * 00000001407827B2: lea     eax, [rdx+rax*8]
 * 00000001407827B5: jmp     short loc_1407827C5
 * 00000001407827B7: movzx   eax, word ptr [rbx+28h]
 * 00000001407827BB: jmp     loc_140782723
 * 00000001407827C0: mov     eax, 38h ; '8'
 * 00000001407827C5: add     rbx, rax
 * 00000001407827C8: sub     rdi, r13
 * 00000001407827CB: jnz     loc_1407826E1
 * 00000001407827D1: mov     r11, [rbp+1C70h+var_1CE0]
 * 00000001407827D5: mov     r12, [rsp+1D70h+var_1D20]
 * 00000001407827DA: mov     ecx, ebx
 * 00000001407827DC: mov     dword ptr [rbp+1C70h+var_1038], r13d
 * 00000001407827E3: sub     ecx, r9d
 * 00000001407827E6: mov     edx, r8d
 * 00000001407827E9: mov     [rbp+1C70h+var_1030], ecx
 * 00000001407827EF: mov     edi, r13d
 * 00000001407827F2: mov     dword ptr [rbp+1C70h+var_1038+4], edx
 * 00000001407827F8: mov     eax, [rbx]
 * 00000001407827FA: cmp     eax, r13d
 * 00000001407827FD: jz      short loc_140782804
 * 00000001407827FF: cmp     eax, 0Ch
 * 0000000140782802: jnz     short loc_140782814
 * 0000000140782804: mov     r8, [rbp+1C70h+var_1CE8]
 * 0000000140782808: cmp     [rbx+8], r8
 * 000000014078280C: jnz     short loc_140782814
 * 000000014078280E: cmp     [rbx+10h], r15d
 * 0000000140782812: jz      short loc_140782837
 * 0000000140782814: add     eax, 0FFFFFFDFh
 * 0000000140782817: cmp     eax, r13d
 * 000000014078281A: ja      short loc_140782822
 * 000000014078281C: cmp     [rbx+20h], r11
 * 0000000140782820: jz      short loc_140782837
 * 0000000140782822: add     r10d, r13d
 * 0000000140782825: cmp     r10d, [r14+5C4h]
 * 000000014078282C: jb      loc_14078268C
 * 0000000140782832: xor     eax, eax
 * 0000000140782834: mov     rbx, rax
 * 0000000140782837: mov     [rbp+1C70h+var_14C0], rbx
 * 000000014078283E: test    rbx, rbx
 * 0000000140782841: jnz     loc_140782F61
 * 0000000140782847: mov     rcx, r12
 * 000000014078284A: call    qword ptr [r14+288h]
 * 0000000140782851: test    dword ptr [r14+6D8h], 40000000h
 * 000000014078285C: mov     edi, eax
 * 000000014078285E: mov     ebx, [rbp+1C70h+var_1A80]
 * 0000000140782864: mov     dword ptr [rsp+1D70h+Src], eax
 * 0000000140782868: mov     dword ptr [rsp+1D70h+var_1D08], ebx
 * 000000014078286C: jz      short loc_140782892
 * 000000014078286E: mov     rdx, [rbp+1C70h+var_14C8]
 * 0000000140782875: lea     rcx, [rbp+1C70h+var_15F0]
 * 000000014078287C: xor     r8d, r8d
 * 000000014078287F: call    sub_140777D18
 * 0000000140782884: mov     r14, [rbp+1C70h+var_15F0]
 * 000000014078288B: mov     ecx, eax
 * 000000014078288D: jmp     loc_140782F49
 * 0000000140782892: mov     rax, [rbp+1C70h+var_14C8]
 * 0000000140782899: mov     rcx, rax
 * 000000014078289C: mov     [rsp+1D70h+var_1D20], rax
 * 00000001407828A1: call    qword ptr [r14+1E0h]
 * 00000001407828A8: xor     r9d, r9d
 * 00000001407828AB: mov     [rbp+1C70h+var_1CE0], rax
 * 00000001407828AF: test    rax, rax
 * 00000001407828B2: jz      loc_140782F44
 * 00000001407828B8: mov     r8d, [r14+67Ch]
 * 00000001407828BF: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001407828C9: mul     rbx
 * 00000001407828CC: mov     ebx, [r14+59Ch]
 * 00000001407828D3: mov     rax, rdx
 * 00000001407828D6: mov     dword ptr [rbp+1C70h+var_1CF0], ebx
 * 00000001407828D9: shr     rax, 3
 * 00000001407828DD: mov     ecx, eax
 * 00000001407828DF: mov     [rsp+78h], rax
 * 00000001407828E4: shl     ecx, 2
 * 00000001407828E7: mov     eax, edi
 * 00000001407828E9: neg     eax
 * 00000001407828EB: mov     dword ptr [rsp+1D70h+NtHeaders], ecx
 * 00000001407828EF: sbb     r12d, r12d
 * 00000001407828F2: and     r12d, 0Bh
 * 00000001407828F6: lea     eax, [rcx+30h]
 * 00000001407828F9: add     r12d, r13d
 * 00000001407828FC: add     eax, ebx
 * 00000001407828FE: cmp     eax, [r14+75Ch]
 * 0000000140782905: jbe     loc_1407829DF
 * 000000014078290B: mov     edx, eax
 * 000000014078290D: mov     rcx, r14
 * 0000000140782910: call    sub_140251E08
 * 0000000140782915: mov     rdi, rax
 * 0000000140782918: test    rax, rax
 * 000000014078291B: jz      loc_140783AAB
 * 0000000140782921: mov     edx, [r14+6D8h]
 * 0000000140782928: test    dl, 4
 * 000000014078292B: jnz     loc_1407829D3
 * 0000000140782931: mov     ecx, [r14+59Ch]
 * 0000000140782938: and     edx, 20000000h
 * 000000014078293E: mov     r8, [r14+580h]
 * 0000000140782945: neg     edx
 * 0000000140782947: mov     rax, r14
 * 000000014078294A: sbb     ebx, ebx
 * 000000014078294C: and     ebx, [r14+67Ch]
 * 0000000140782953: cmp     ecx, 8
 * 0000000140782956: jb      short loc_140782970
 * 0000000140782958: mov     edx, ecx
 * 000000014078295A: shr     rdx, 3
 * 000000014078295E: xor     r9d, r9d
 * 0000000140782961: mov     [rax], r9
 * 0000000140782964: add     ecx, 0FFFFFFF8h
 * 0000000140782967: add     rax, 8
 * 000000014078296B: sub     rdx, r13
 * 000000014078296E: jnz     short loc_140782961
 * 0000000140782970: xor     edx, edx
 * 0000000140782972: test    ecx, ecx
 * 0000000140782974: jz      short loc_140782980
 * 0000000140782976: mov     [rax], dl
 * 0000000140782978: add     rax, r13
 * 000000014078297B: add     ecx, 0FFFFFFFFh
 * 000000014078297E: jnz     short loc_140782976
 * 0000000140782980: mov     r15d, [rdi+67Ch]
 * 0000000140782987: mov     [rdi+67Ch], ebx
 * 000000014078298D: cmp     ebx, 3
 * 0000000140782990: jz      short loc_1407829C0
 * 0000000140782992: test    dword ptr [rdi+6D8h], 10000000h
 * 000000014078299C: mov     rcx, rdx
 * 000000014078299F: cmovz   ecx, ebx
 * 00000001407829A2: test    ecx, ecx
 * 00000001407829A4: jz      short loc_1407829B5
 * 00000001407829A6: lea     rcx, [r8-8]
 * 00000001407829AA: mov     rdx, [rcx]
 * 00000001407829AD: call    qword ptr [rdi+210h]
 * 00000001407829B3: jmp     short loc_1407829C9
 * 00000001407829B5: mov     rcx, r8
 * 00000001407829B8: call    qword ptr [rdi+0E8h]
 * 00000001407829BE: jmp     short loc_1407829C9
 * 00000001407829C0: mov     rcx, r8
 * 00000001407829C3: call    qword ptr [rdi+348h]
 * 00000001407829C9: mov     ebx, dword ptr [rbp+1C70h+var_1CF0]
 * 00000001407829CC: mov     [rdi+67Ch], r15d
 * 00000001407829D3: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 00000001407829DA: xor     r9d, r9d
 * 00000001407829DD: jmp     short loc_1407829E9
 * 00000001407829DF: mov     rdi, r14
 * 00000001407829E2: mov     [r14+59Ch], eax
 * 00000001407829E9: add     [rdi+5C4h], r13d
 * 00000001407829F0: mov     ecx, 30h ; '0'
 * 00000001407829F5: mov     r15d, ebx
 * 00000001407829F8: add     r15, rdi
 * 00000001407829FB: mov     [rbp+1C70h+var_14B8], r15
 * 0000000140782A02: mov     rax, r15
 * 0000000140782A05: lea     edx, [rcx-2Ah]
 * 0000000140782A08: mov     [rax], r9
 * 0000000140782A0B: add     ecx, 0FFFFFFF8h
 * 0000000140782A0E: add     rax, 8
 * 0000000140782A12: sub     rdx, r13
 * 0000000140782A15: jnz     short loc_140782A08
 * 0000000140782A17: test    ecx, ecx
 * 0000000140782A19: jz      short loc_140782A26
 * 0000000140782A1B: mov     [rax], r9b
 * 0000000140782A1E: add     rax, r13
 * 0000000140782A21: add     ecx, 0FFFFFFFFh
 * 0000000140782A24: jnz     short loc_140782A1B
 * 0000000140782A26: mov     r11, [rbp+1C70h+var_1CE8]
 * 0000000140782A2A: mov     ebx, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140782A2E: mov     [r15], r12d
 * 0000000140782A31: mov     [r15+8], r11
 * 0000000140782A35: cmp     r12d, 20h ; ' '
 * 0000000140782A39: jnz     short loc_140782A55
 * 0000000140782A3B: test    ebx, ebx
 * 0000000140782A3D: jz      short loc_140782A55
 * 0000000140782A3F: lea     r9, [r15+18h]
 * 0000000140782A43: mov     r8d, ebx
 * 0000000140782A46: mov     rdx, r11
 * 0000000140782A49: mov     rcx, rdi
 * 0000000140782A4C: call    sub_1401588B8
 * 0000000140782A51: mov     r11, [rbp+1C70h+var_1CE8]
 * 0000000140782A55: mov     [r15+10h], ebx
 * 0000000140782A59: mov     r9, r11
 * 0000000140782A5C: add     [rdi+5E0h], ebx
 * 0000000140782A62: mov     rax, r11
 * 0000000140782A65: mov     r10d, [rdi+5CCh]
 * 0000000140782A6C: mov     rdx, [rdi+5D0h]
 * 0000000140782A73: mov     ecx, ebx
 * 0000000140782A75: add     rcx, r11
 * 0000000140782A78: cmp     r11, rcx
 * 0000000140782A7B: jnb     short loc_140782A89
 * 0000000140782A7D: prefetchnta byte ptr [rax]
 * 0000000140782A80: add     rax, 40h ; '@'
 * 0000000140782A84: cmp     rax, rcx
 * 0000000140782A87: jb      short loc_140782A7D
 * 0000000140782A89: mov     r8d, ebx
 * 0000000140782A8C: cmp     ebx, 8
 * 0000000140782A8F: jb      short loc_140782AAF
 * 0000000140782A91: shr     rbx, 3
 * 0000000140782A95: xor     rdx, [r9]
 * 0000000140782A98: mov     ecx, r10d
 * 0000000140782A9B: rol     rdx, cl
 * 0000000140782A9E: add     r9, 8
 * 0000000140782AA2: add     r8d, 0FFFFFFF8h
 * 0000000140782AA6: sub     rbx, r13
 * 0000000140782AA9: jnz     short loc_140782A95
 * 0000000140782AAB: mov     ebx, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140782AAF: test    r8d, r8d
 * 0000000140782AB2: jz      short loc_140782ACA
 * 0000000140782AB4: movzx   eax, byte ptr [r9]
 * 0000000140782AB8: mov     ecx, r10d
 * 0000000140782ABB: xor     rdx, rax
 * 0000000140782ABE: add     r9, r13
 * 0000000140782AC1: rol     rdx, cl
 * 0000000140782AC4: add     r8d, 0FFFFFFFFh
 * 0000000140782AC8: jnz     short loc_140782AB4
 * 0000000140782ACA: mov     rax, rdx
 * 0000000140782ACD: jmp     short loc_140782AD1
 * 0000000140782ACF: xor     edx, eax
 * 0000000140782AD1: shr     rax, 1Fh
 * 0000000140782AD5: test    rax, rax
 * 0000000140782AD8: jnz     short loc_140782ACF
 * 0000000140782ADA: btr     edx, 1Fh
 * 0000000140782ADE: mov     [r15+14h], edx
 * 0000000140782AE2: mov     r15d, 0C0000225h
 * 0000000140782AE8: mov     rax, [rbp+1C70h+var_14B8]
 * 0000000140782AEF: mov     [rbp+1C70h+var_14B0], rax
 * 0000000140782AF6: add     [rdi+5E0h], ebx
 * 0000000140782AFC: mov     rbx, [rdi+470h]
 * 0000000140782B03: mov     r12, [rbp+1C70h+var_14B0]
 * 0000000140782B0A: add     rbx, 10h
 * 0000000140782B0E: mov     rcx, [rdi+488h]
 * 0000000140782B15: mov     rax, cr8
 * 0000000140782B19: mov     [rbp+1C70h+var_1CD8], rax
 * 0000000140782B1D: mov     eax, 0Fh
 * 0000000140782B22: mov     cr8, rax
 * 0000000140782B26: call    qword ptr [rdi+138h]
 * 0000000140782B2C: mov     rax, [rdi+470h]
 * 0000000140782B33: mov     ecx, [rax]
 * 0000000140782B35: lea     rax, [rcx+rcx*2]
 * 0000000140782B39: lea     rcx, [rbx+rax*8]
 * 0000000140782B3D: mov     rax, [rsp+1D70h+var_1D20]
 * 0000000140782B42: cmp     [rbx+8], rax
 * 0000000140782B46: jz      short loc_140782B53
 * 0000000140782B48: add     rbx, 18h
 * 0000000140782B4C: cmp     rbx, rcx
 * 0000000140782B4F: jnb     short loc_140782B6D
 * 0000000140782B51: jmp     short loc_140782B42
 * 0000000140782B53: movups  xmm0, xmmword ptr [rbx]
 * 0000000140782B56: xor     eax, eax
 * 0000000140782B58: mov     r15d, eax
 * 0000000140782B5B: movups  xmmword ptr [r12+18h], xmm0
 * 0000000140782B61: movsd   xmm1, qword ptr [rbx+10h]
 * 0000000140782B66: movsd   qword ptr [r12+28h], xmm1
 * 0000000140782B6D: mov     rcx, [rdi+488h]
 * 0000000140782B74: call    qword ptr [rdi+178h]
 * 0000000140782B7A: movzx   eax, byte ptr [rbp+1C70h+var_1CD8]
 * 0000000140782B7E: mov     cr8, rax
 * 0000000140782B82: test    r15d, r15d
 * 0000000140782B85: jns     short loc_140782BC3
 * 0000000140782B87: mov     rax, [rbp+1C70h+var_14B0]
 * 0000000140782B8E: mov     ecx, 18h
 * 0000000140782B93: add     rax, rcx
 * 0000000140782B96: xor     ebx, ebx
 * 0000000140782B98: lea     edx, [rcx-15h]
 * 0000000140782B9B: mov     [rax], rbx
 * 0000000140782B9E: add     ecx, 0FFFFFFF8h
 * 0000000140782BA1: add     rax, 8
 * 0000000140782BA5: sub     rdx, r13
 * 0000000140782BA8: jnz     short loc_140782B9B
 * 0000000140782BAA: test    ecx, ecx
 * 0000000140782BAC: jz      short loc_140782BB8
 * 0000000140782BAE: mov     [rax], bl
 * 0000000140782BB0: add     rax, r13
 * 0000000140782BB3: add     ecx, 0FFFFFFFFh
 * 0000000140782BB6: jnz     short loc_140782BAE
 * 0000000140782BB8: mov     rax, [rbp+1C70h+var_14B0]
 * 0000000140782BBF: mov     [rax+18h], r13
 * 0000000140782BC3: mov     rax, [rbp+1C70h+var_14B0]
 * 0000000140782BCA: mov     edx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140782BCE: add     rax, 30h ; '0'
 * 0000000140782BD2: mov     [rbp+1C70h+var_1CD8], rax
 * 0000000140782BD6: cmp     edx, 8
 * 0000000140782BD9: jb      short loc_140782BF4
 * 0000000140782BDB: mov     ecx, edx
 * 0000000140782BDD: shr     rcx, 3
 * 0000000140782BE1: mov     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
 * 0000000140782BE8: add     edx, 0FFFFFFF8h
 * 0000000140782BEB: add     rax, 8
 * 0000000140782BEF: sub     rcx, r13
 * 0000000140782BF2: jnz     short loc_140782BE1
 * 0000000140782BF4: test    edx, edx
 * 0000000140782BF6: jz      short loc_140782C03
 * 0000000140782BF8: mov     byte ptr [rax], 0FFh
 * 0000000140782BFB: add     rax, r13
 * 0000000140782BFE: add     edx, 0FFFFFFFFh
 * 0000000140782C01: jnz     short loc_140782BF8
 * 0000000140782C03: mov     rdx, [rbp+1C70h+var_1CE8]
 * 0000000140782C07: or      ebx, 0FFFFFFFFh
 * 0000000140782C0A: mov     eax, [rsp+78h]
 * 0000000140782C0E: mov     r12, rdx
 * 0000000140782C11: mov     dword ptr [rsp+1D70h+NtHeaders], ebx
 * 0000000140782C15: mov     r8d, [rdx]
 * 0000000140782C18: lea     rcx, [rax+rax*2]
 * 0000000140782C1C: lea     rax, [rdx+rcx*4]
 * 0000000140782C20: mov     rdx, [rsp+1D70h+var_1D20]
 * 0000000140782C25: mov     rcx, [rbp+1C70h+var_1CE0]
 * 0000000140782C29: mov     [rsp+78h], rax
 * 0000000140782C2E: xor     eax, eax
 * 0000000140782C30: mov     dword ptr [rbp+1C70h+var_1CF0], eax
 * 0000000140782C33: call    qword ptr [rdi+1F8h]
 * 0000000140782C39: mov     r10, rax
 * 0000000140782C3C: xor     eax, eax
 * 0000000140782C3E: test    r10, r10
 * 0000000140782C41: jz      loc_140782F44
 * 0000000140782C47: mov     r15d, eax
 * 0000000140782C4A: mov     eax, [r10+24h]
 * 0000000140782C4E: bt      eax, 19h
 * 0000000140782C52: jb      loc_140782E50
 * 0000000140782C58: mov     ecx, [r10]
 * 0000000140782C5B: cmp     ecx, 54494E49h
 * 0000000140782C61: jnz     short loc_140782C71
 * 0000000140782C63: cmp     dword ptr [r10+4], 4742444Bh
 * 0000000140782C6B: jz      loc_140782E50
 * 0000000140782C71: cmp     ecx, 45474150h
 * 0000000140782C77: jnz     short loc_140782CA8
 * 0000000140782C79: movzx   eax, word ptr [r10+4]
 * 0000000140782C7E: mov     edx, 7777h
 * 0000000140782C83: cmp     ax, dx
 * 0000000140782C86: jz      loc_140782E50
 * 0000000140782C8C: mov     edx, 7277h
 * 0000000140782C91: cmp     ax, dx
 * 0000000140782C94: jz      loc_140782E50
 * 0000000140782C9A: mov     edx, 7877h
 * 0000000140782C9F: cmp     ax, dx
 * 0000000140782CA2: jz      loc_140782E50
 * 0000000140782CA8: cmp     ecx, 41525245h
 * 0000000140782CAE: jnz     short loc_140782CC0
 * 0000000140782CB0: mov     eax, 4154h
 * 0000000140782CB5: cmp     [r10+4], ax
 * 0000000140782CBA: jz      loc_140782E50
 * 0000000140782CC0: mov     rax, [rdi+690h]
 * 0000000140782CC7: mov     r8, r10
 * 0000000140782CCA: mov     rbx, [rdi+688h]
 * 0000000140782CD1: mov     r9d, 7
 * 0000000140782CD7: mov     [rbp+1C70h+var_CE8], rax
 * 0000000140782CDE: sub     r8, rbx
 * 0000000140782CE1: mov     rax, [rdi+698h]
 * 0000000140782CE8: or      r11d, 0FFFFFFFFh
 * 0000000140782CEC: mov     [rbp+1C70h+var_CE0], rax
 * 0000000140782CF3: mov     rax, [rdi+6A0h]
 * 0000000140782CFA: mov     [rbp+1C70h+var_CD8], rax
 * 0000000140782D01: mov     [rbp+1C70h+var_CF0], rbx
 * 0000000140782D08: movzx   edx, byte ptr [r8+rbx]
 * 0000000140782D0D: movzx   eax, byte ptr [rbx]
 * 0000000140782D10: add     rbx, r13
 * 0000000140782D13: cmp     rdx, rax
 * 0000000140782D16: jnz     short loc_140782D22
 * 0000000140782D18: add     r9d, r11d
 * 0000000140782D1B: jnz     short loc_140782D08
 * 0000000140782D1D: jmp     loc_140782DBC
 * 0000000140782D22: mov     r8, [rbp+1C70h+var_CE8]
 * 0000000140782D29: mov     ebx, 8
 * 0000000140782D2E: mov     r9, r10
 * 0000000140782D31: mov     rcx, [r9]
 * 0000000140782D34: add     r9, 8
 * 0000000140782D38: mov     rax, [r8]
 * 0000000140782D3B: add     r8, 8
 * 0000000140782D3F: cmp     rcx, rax
 * 0000000140782D42: jnz     short loc_140782D6A
 * 0000000140782D44: add     ebx, 0FFFFFFF8h
 * 0000000140782D47: cmp     ebx, 8
 * 0000000140782D4A: jnb     short loc_140782D31
 * 0000000140782D4C: test    ebx, ebx
 * 0000000140782D4E: jz      short loc_140782DBC
 * 0000000140782D50: movzx   edx, byte ptr [r9]
 * 0000000140782D54: add     r9, r13
 * 0000000140782D57: movzx   eax, byte ptr [r8]
 * 0000000140782D5B: add     r8, r13
 * 0000000140782D5E: cmp     rdx, rax
 * 0000000140782D61: jnz     short loc_140782D6A
 * 0000000140782D63: add     ebx, r11d
 * 0000000140782D66: jnz     short loc_140782D50
 * 0000000140782D68: jmp     short loc_140782DBC
 * 0000000140782D6A: mov     rbx, [rbp+1C70h+var_CE0]
 * 0000000140782D71: mov     r8, r10
 * 0000000140782D74: sub     r8, rbx
 * 0000000140782D77: mov     r9d, 4
 * 0000000140782D7D: movzx   edx, byte ptr [r8+rbx]
 * 0000000140782D82: movzx   eax, byte ptr [rbx]
 * 0000000140782D85: add     rbx, r13
 * 0000000140782D88: cmp     rdx, rax
 * 0000000140782D8B: jnz     short loc_140782D94
 * 0000000140782D8D: add     r9d, r11d
 * 0000000140782D90: jnz     short loc_140782D7D
 * 0000000140782D92: jmp     short loc_140782DBC
 * 0000000140782D94: mov     rbx, [rbp+1C70h+var_CD8]
 * 0000000140782D9B: mov     r8, r10
 * 0000000140782D9E: sub     r8, rbx
 * 0000000140782DA1: mov     r9d, 6
 * 0000000140782DA7: movzx   edx, byte ptr [r8+rbx]
 * 0000000140782DAC: movzx   eax, byte ptr [rbx]
 * 0000000140782DAF: add     rbx, r13
 * 0000000140782DB2: cmp     rdx, rax
 * 0000000140782DB5: jnz     short loc_140782DBF
 * 0000000140782DB7: add     r9d, r11d
 * 0000000140782DBA: jnz     short loc_140782DA7
 * 0000000140782DBC: mov     r15d, r13d
 * 0000000140782DBF: mov     ebx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140782DC3: mov     r9d, 80000000h
 * 0000000140782DC9: test    [r10+24h], r9d
 * 0000000140782DCD: cmovnz  r15d, r13d
 * 0000000140782DD1: xor     eax, eax
 * 0000000140782DD3: test    r15d, r15d
 * 0000000140782DD6: jz      short loc_140782DF9
 * 0000000140782DD8: cmp     dword ptr [r10], 54494E49h
 * 0000000140782DDF: jnz     short loc_140782DF9
 * 0000000140782DE1: cmp     dword ptr [r10+4], 4742444Bh
 * 0000000140782DE9: jnz     short loc_140782DF9
 * 0000000140782DEB: test    dword ptr [rdi+6D8h], 10000000h
 * 0000000140782DF5: cmovnz  r15d, eax
 * 0000000140782DF9: mov     ecx, [r10+8]
 * 0000000140782DFD: cmp     [r10+10h], ecx
 * 0000000140782E01: mov     r14d, [r10+0Ch]
 * 0000000140782E05: cmova   ecx, [r10+10h]
 * 0000000140782E0A: mov     rdx, [rsp+1D70h+var_1D20]
 * 0000000140782E0F: add     r14d, ecx
 * 0000000140782E12: mov     eax, [r12+8]
 * 0000000140782E17: test    r13b, al
 * 0000000140782E1A: jnz     short loc_140782E30
 * 0000000140782E1C: mov     ecx, dword ptr [rbp+1C70h+var_1CF0]
 * 0000000140782E1F: cmp     eax, ebx
 * 0000000140782E21: cmovb   ebx, eax
 * 0000000140782E24: cmp     eax, ecx
 * 0000000140782E26: mov     dword ptr [rsp+1D70h+NtHeaders], ebx
 * 0000000140782E2A: cmova   ecx, eax
 * 0000000140782E2D: mov     dword ptr [rbp+1C70h+var_1CF0], ecx
 * 0000000140782E30: mov     eax, [r12]
 * 0000000140782E34: mov     ebx, [r12+4]
 * 0000000140782E39: sub     ebx, eax
 * 0000000140782E3B: lea     r8, [rdx+rax]
 * 0000000140782E3F: test    r15d, r15d
 * 0000000140782E42: jz      short loc_140782E58
 * 0000000140782E44: mov     rax, [rbp+1C70h+var_1CD8]
 * 0000000140782E48: mov     [rax], r9d
 * 0000000140782E4B: jmp     loc_140782EE4
 * 0000000140782E50: mov     r15d, r13d
 * 0000000140782E53: jmp     loc_140782DC3
 * 0000000140782E58: add     [rdi+5E0h], ebx
 * 0000000140782E5E: mov     rax, r8
 * 0000000140782E61: mov     r11d, [rdi+5CCh]
 * 0000000140782E68: mov     rdx, [rdi+5D0h]
 * 0000000140782E6F: mov     ecx, ebx
 * 0000000140782E71: add     rcx, r8
 * 0000000140782E74: cmp     r8, rcx
 * 0000000140782E77: jnb     short loc_140782E85
 * 0000000140782E79: prefetchnta byte ptr [rax]
 * 0000000140782E7C: add     rax, 40h ; '@'
 * 0000000140782E80: cmp     rax, rcx
 * 0000000140782E83: jb      short loc_140782E79
 * 0000000140782E85: cmp     ebx, 8
 * 0000000140782E88: jb      short loc_140782EAC
 * 0000000140782E8A: mov     r9d, ebx
 * 0000000140782E8D: shr     r9, 3
 * 0000000140782E91: xor     rdx, [r8]
 * 0000000140782E94: mov     ecx, r11d
 * 0000000140782E97: rol     rdx, cl
 * 0000000140782E9A: add     r8, 8
 * 0000000140782E9E: add     ebx, 0FFFFFFF8h
 * 0000000140782EA1: sub     r9, r13
 * 0000000140782EA4: jnz     short loc_140782E91
 * 0000000140782EA6: mov     r9d, 80000000h
 * 0000000140782EAC: test    ebx, ebx
 * 0000000140782EAE: jz      short loc_140782EC5
 * 0000000140782EB0: movzx   eax, byte ptr [r8]
 * 0000000140782EB4: mov     ecx, r11d
 * 0000000140782EB7: xor     rdx, rax
 * 0000000140782EBA: add     r8, r13
 * 0000000140782EBD: rol     rdx, cl
 * 0000000140782EC0: add     ebx, 0FFFFFFFFh
 * 0000000140782EC3: jnz     short loc_140782EB0
 * 0000000140782EC5: mov     rax, rdx
 * 0000000140782EC8: jmp     short loc_140782ECC
 * 0000000140782ECA: xor     edx, eax
 * 0000000140782ECC: shr     rax, 1Fh
 * 0000000140782ED0: test    rax, rax
 * 0000000140782ED3: jnz     short loc_140782ECA
 * 0000000140782ED5: mov     rax, [rbp+1C70h+var_1CD8]
 * 0000000140782ED9: btr     edx, 1Fh
 * 0000000140782EDD: mov     [rax], edx
 * 0000000140782EDF: mov     rdx, [rsp+1D70h+var_1D20]
 * 0000000140782EE4: add     r12, 0Ch
 * 0000000140782EE8: cmp     r12, [rsp+78h]
 * 0000000140782EED: jz      loc_1407830ED
 * 0000000140782EF3: add     rax, 4
 * 0000000140782EF7: mov     [rbp+1C70h+var_1CD8], rax
 * 0000000140782EFB: mov     eax, [r10+0Ch]
 * 0000000140782EFF: cmp     [r12], eax
 * 0000000140782F03: jb      short loc_140782F1D
 * 0000000140782F05: mov     ecx, [r12+4]
 * 0000000140782F0A: mov     ebx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140782F0E: add     rcx, rdx
 * 0000000140782F11: mov     eax, r14d
 * 0000000140782F14: cmp     rcx, rax
 * 0000000140782F17: jbe     loc_140782E12
 * 0000000140782F1D: mov     r8d, [r12]
 * 0000000140782F21: mov     rcx, [rbp+1C70h+var_1CE0]
 * 0000000140782F25: call    qword ptr [rdi+1F8h]
 * 0000000140782F2B: mov     ebx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140782F2F: mov     r10, rax
 * 0000000140782F32: xor     eax, eax
 * 0000000140782F34: test    r10, r10
 * 0000000140782F37: jnz     loc_140782C47
 * 0000000140782F3D: mov     r14, [rbp+1C70h+var_15F0]
 * 0000000140782F44: mov     ecx, 0C000007Bh
 * 0000000140782F49: mov     edx, 80000000h
 * 0000000140782F4E: lea     eax, [rcx+rdx]
 * 0000000140782F51: test    edx, eax
 * 0000000140782F53: jnz     short loc_140782F61
 * 0000000140782F55: cmp     ecx, 0C000010Eh
 * 0000000140782F5B: jnz     loc_1407842B1
 * 0000000140782F61: xor     ebx, ebx
 * 0000000140782F63: mov     rax, [rbp+1C70h+var_1CD0]
 * 0000000140782F67: mov     rax, [rax]
 * 0000000140782F6A: mov     [rbp+1C70h+var_1CD0], rax
 * 0000000140782F6E: cmp     rax, [rsp+1D70h+var_1D00]
 * 0000000140782F73: jnz     loc_1407825F6
 * 0000000140782F79: xor     eax, eax
 * 0000000140782F7B: mov     ecx, eax
 * 0000000140782F7D: test    ecx, ecx
 * 0000000140782F7F: js      loc_14077C9F7
 * 0000000140782F85: rdtsc
 * 0000000140782F87: shl     rdx, 20h
 * 0000000140782F8B: or      rax, rdx
 * 0000000140782F8E: mov     rcx, rax
 * 0000000140782F91: ror     rax, 3
 * 0000000140782F95: xor     rcx, rax
 * 0000000140782F98: mov     rax, 7010008004002001h
 * 0000000140782FA2: mul     rcx
 * 0000000140782FA5: mov     rcx, rax
 * 0000000140782FA8: mov     [rbp+1C70h+var_1480], rdx
 * 0000000140782FAF: xor     rcx, rdx
 * 0000000140782FB2: mov     rax, 47AE147AE147AE15h
 * 0000000140782FBC: mul     rcx
 * 0000000140782FBF: mov     rax, rcx
 * 0000000140782FC2: sub     rax, rdx
 * 0000000140782FC5: shr     rax, 1
 * 0000000140782FC8: add     rax, rdx
 * 0000000140782FCB: shr     rax, 6
 * 0000000140782FCF: imul    rax, 64h ; 'd'
 * 0000000140782FD3: sub     rcx, rax
 * 0000000140782FD6: cmp     rcx, 2
 * 0000000140782FDA: jnb     short loc_140782FE5
 * 0000000140782FDC: bts     dword ptr [r14+6D8h], 11h
 * 0000000140782FE5: mov     rax, [r14+4B0h]
 * 0000000140782FEC: mov     ebx, [r14+59Ch]
 * 0000000140782FF3: mov     r8d, [r14+67Ch]
 * 0000000140782FFA: mov     [rsp+1D70h+var_1D00], rax
 * 0000000140782FFF: mov     r12d, [rax+10h]
 * 0000000140783003: mov     r15, [rax]
 * 0000000140783006: xor     eax, eax
 * 0000000140783008: shl     r12d, 2
 * 000000014078300C: mov     r9d, eax
 * 000000014078300F: cmp     dword ptr [r14+5F0h], 7
 * 0000000140783017: mov     dword ptr [rsp+1D70h+var_1D08], ebx
 * 000000014078301B: lea     r11d, [rax+20h]
 * 000000014078301F: cmovz   r9d, r11d
 * 0000000140783023: lea     eax, [rbx+30h]
 * 0000000140783026: mov     dword ptr [rsp+1D70h+Src], r9d
 * 000000014078302B: cmp     eax, [r14+75Ch]
 * 0000000140783032: jbe     loc_1407842EB
 * 0000000140783038: mov     edx, eax
 * 000000014078303A: mov     rcx, r14
 * 000000014078303D: call    sub_140251E08
 * 0000000140783042: mov     rdi, rax
 * 0000000140783045: xor     eax, eax
 * 0000000140783047: test    rdi, rdi
 * 000000014078304A: jz      loc_14077C9F7
 * 0000000140783050: mov     edx, [r14+6D8h]
 * 0000000140783057: test    dl, 4
 * 000000014078305A: jnz     loc_1407842D7
 * 0000000140783060: mov     ecx, [r14+59Ch]
 * 0000000140783067: and     edx, 20000000h
 * 000000014078306D: mov     rbx, [r14+580h]
 * 0000000140783074: neg     edx
 * 0000000140783076: sbb     edx, edx
 * 0000000140783078: and     edx, [r14+67Ch]
 * 000000014078307F: cmp     ecx, 8
 * 0000000140783082: jb      short loc_14078309C
 * 0000000140783084: mov     eax, ecx
 * 0000000140783086: shr     rax, 3
 * 000000014078308A: xor     r9d, r9d
 * 000000014078308D: mov     [r14], r9
 * 0000000140783090: add     ecx, 0FFFFFFF8h
 * 0000000140783093: add     r14, 8
 * 0000000140783097: sub     rax, r13
 * 000000014078309A: jnz     short loc_14078308D
 * 000000014078309C: xor     eax, eax
 * 000000014078309E: test    ecx, ecx
 * 00000001407830A0: jz      short loc_1407830AD
 * 00000001407830A2: mov     [r14], al
 * 00000001407830A5: add     r14, r13
 * 00000001407830A8: add     ecx, 0FFFFFFFFh
 * 00000001407830AB: jnz     short loc_1407830A2
 * 00000001407830AD: mov     r14d, [rdi+67Ch]
 * 00000001407830B4: mov     [rdi+67Ch], edx
 * 00000001407830BA: cmp     edx, 3
 * 00000001407830BD: jz      loc_1407842C3
 * 00000001407830C3: test    dword ptr [rdi+6D8h], 10000000h
 * 00000001407830CD: mov     rcx, rax
 * 00000001407830D0: cmovz   ecx, edx
 * 00000001407830D3: test    ecx, ecx
 * 00000001407830D5: jz      loc_1407842B8
 * 00000001407830DB: lea     rcx, [rbx-8]
 * 00000001407830DF: mov     rdx, [rcx]
 * 00000001407830E2: call    qword ptr [rdi+210h]
 * 00000001407830E8: jmp     loc_1407842CC
 * 00000001407830ED: mov     edx, dword ptr [rsp+1D70h+NtHeaders]
 * 00000001407830F1: or      r12d, 0FFFFFFFFh
 * 00000001407830F5: mov     r8d, dword ptr [rbp+1C70h+var_1CF0]
 * 00000001407830F9: cmp     edx, r12d
 * 00000001407830FC: jnz     short loc_140783107
 * 00000001407830FE: xor     eax, eax
 * 0000000140783100: test    r8d, r8d
 * 0000000140783103: jnz     short loc_140783107
 * 0000000140783105: mov     edx, eax
 * 0000000140783107: mov     rcx, [rbp+1C70h+var_14C8]
 * 000000014078310E: lea     r9, [rbp+1C70h+var_1A80]
 * 0000000140783115: sub     r8d, edx
 * 0000000140783118: mov     eax, edx
 * 000000014078311A: add     rax, rcx
 * 000000014078311D: mov     [rbp+1C70h+var_FE8], r8d
 * 0000000140783124: xor     r8d, r8d
 * 0000000140783127: mov     [rbp+1C70h+var_CD0], rax
 * 000000014078312E: mov     dl, r13b
 * 0000000140783131: mov     [rbp+1C70h+var_15F0], rdi
 * 0000000140783138: mov     r14, rdi
 * 000000014078313B: call    qword ptr [rdi+1D8h]
 * 0000000140783141: mov     r8d, 0Ch
 * 0000000140783147: lea     r9, [rbp+1C70h+var_1A80]
 * 000000014078314E: mov     rdx, rax
 * 0000000140783151: neg     rax
 * 0000000140783154: mov     [rbp+1C70h+var_CC8], rdx
 * 000000014078315B: mov     dl, r13b
 * 000000014078315E: sbb     ecx, ecx
 * 0000000140783160: and     ecx, [rbp+1C70h+var_1A80]
 * 0000000140783166: mov     [rbp+1C70h+var_1A80], ecx
 * 000000014078316C: mov     [rbp+1C70h+var_FE4], ecx
 * 0000000140783172: mov     rcx, [rbp+1C70h+var_14C8]
 * 0000000140783179: call    qword ptr [rdi+1D8h]
 * 000000014078317F: mov     [rsp+1D70h+var_1D20], rax
 * 0000000140783184: mov     r8d, 0Ah
 * 000000014078318A: mov     rdx, rax
 * 000000014078318D: lea     r9, [rbp+1C70h+var_1A80]
 * 0000000140783194: neg     rax
 * 0000000140783197: mov     [rbp+1C70h+var_CC0], rdx
 * 000000014078319E: mov     dl, r13b
 * 00000001407831A1: sbb     ecx, ecx
 * 00000001407831A3: and     ecx, [rbp+1C70h+var_1A80]
 * 00000001407831A9: mov     dword ptr [rsp+1D70h+NtHeaders], ecx
 * 00000001407831AD: mov     [rbp+1C70h+var_1A80], ecx
 * 00000001407831B3: mov     [rbp+1C70h+var_FE0], ecx
 * 00000001407831B9: mov     rcx, [rbp+1C70h+var_14C8]
 * 00000001407831C0: call    qword ptr [rdi+1D8h]
 * 00000001407831C6: mov     rdx, rax
 * 00000001407831C9: neg     rax
 * 00000001407831CC: mov     eax, dword ptr [rsp+1D70h+Src]
 * 00000001407831D0: sbb     ecx, ecx
 * 00000001407831D2: mov     [rbp+1C70h+var_CB8], rdx
 * 00000001407831D9: and     ecx, [rbp+1C70h+var_1A80]
 * 00000001407831DF: mov     [rbp+1C70h+var_1A80], ecx
 * 00000001407831E5: neg     eax
 * 00000001407831E7: mov     r15d, [rdi+59Ch]
 * 00000001407831EE: mov     r8d, [rdi+67Ch]
 * 00000001407831F5: mov     [rbp+1C70h+var_FDC], ecx
 * 00000001407831FB: sbb     ecx, ecx
 * 00000001407831FD: and     ecx, 0Bh
 * 0000000140783200: lea     eax, [r15+0C0h]
 * 0000000140783207: mov     dword ptr [rbp+1C70h+var_1CF0], ecx
 * 000000014078320A: cmp     eax, [rdi+75Ch]
 * 0000000140783210: jbe     loc_1407832E0
 * 0000000140783216: mov     edx, eax
 * 0000000140783218: mov     rcx, rdi
 * 000000014078321B: call    sub_140251E08
 * 0000000140783220: mov     rbx, rax
 * 0000000140783223: test    rax, rax
 * 0000000140783226: jz      loc_1407842A5
 * 000000014078322C: mov     edx, [rdi+6D8h]
 * 0000000140783232: test    dl, 4
 * 0000000140783235: jnz     loc_1407832D7
 * 000000014078323B: mov     ecx, [rdi+59Ch]
 * 0000000140783241: and     edx, 20000000h
 * 0000000140783247: mov     r9, [rdi+580h]
 * 000000014078324E: neg     edx
 * 0000000140783250: sbb     r8d, r8d
 * 0000000140783253: and     r8d, [rdi+67Ch]
 * 000000014078325A: cmp     ecx, 8
 * 000000014078325D: jb      short loc_140783276
 * 000000014078325F: mov     eax, ecx
 * 0000000140783261: shr     rax, 3
 * 0000000140783265: xor     edx, edx
 * 0000000140783267: mov     [rdi], rdx
 * 000000014078326A: add     ecx, 0FFFFFFF8h
 * 000000014078326D: add     rdi, 8
 * 0000000140783271: sub     rax, r13
 * 0000000140783274: jnz     short loc_140783267
 * 0000000140783276: xor     eax, eax
 * 0000000140783278: test    ecx, ecx
 * 000000014078327A: jz      short loc_140783286
 * 000000014078327C: mov     [rdi], al
 * 000000014078327E: add     rdi, r13
 * 0000000140783281: add     ecx, r12d
 * 0000000140783284: jnz     short loc_14078327C
 * 0000000140783286: mov     edi, [rbx+67Ch]
 * 000000014078328C: mov     [rbx+67Ch], r8d
 * 0000000140783293: cmp     r8d, 3
 * 0000000140783297: jz      short loc_1407832C8
 * 0000000140783299: test    dword ptr [rbx+6D8h], 10000000h
 * 00000001407832A3: mov     rcx, rax
 * 00000001407832A6: cmovz   ecx, r8d
 * 00000001407832AA: test    ecx, ecx
 * 00000001407832AC: jz      short loc_1407832BD
 * 00000001407832AE: lea     rcx, [r9-8]
 * 00000001407832B2: mov     rdx, [rcx]
 * 00000001407832B5: call    qword ptr [rbx+210h]
 * 00000001407832BB: jmp     short loc_1407832D1
 * 00000001407832BD: mov     rcx, r9
 * 00000001407832C0: call    qword ptr [rbx+0E8h]
 * 00000001407832C6: jmp     short loc_1407832D1
 * 00000001407832C8: mov     rcx, r9
 * 00000001407832CB: call    qword ptr [rbx+348h]
 * 00000001407832D1: mov     [rbx+67Ch], edi
 * 00000001407832D7: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 00000001407832DE: jmp     short loc_1407832E9
 * 00000001407832E0: mov     rbx, rdi
 * 00000001407832E3: mov     [rdi+59Ch], eax
 * 00000001407832E9: mov     esi, dword ptr [rbp+1C70h+var_1CF0]
 * 00000001407832EC: lea     rdi, [rbx+r15]
 * 00000001407832F0: mov     eax, 4
 * 00000001407832F5: lea     r10, [rbp+1C70h+var_FE8]
 * 00000001407832FC: add     [rbx+5C4h], eax
 * 0000000140783302: lea     r12, [rbp+1C70h+var_CD0]
 * 0000000140783309: xor     r8d, r8d
 * 000000014078330C: mov     [rbp+1C70h+var_14A8], rdi
 * 0000000140783313: mov     [rbp+1C70h+var_14C0], rdi
 * 000000014078331A: mov     r11d, eax
 * 000000014078331D: mov     [rbp+1C70h+var_1CE0], r10
 * 0000000140783321: mov     [rsp+78h], rax
 * 0000000140783326: mov     r15d, [r10]
 * 0000000140783329: mov     ecx, 30h ; '0'
 * 000000014078332E: mov     r14, [r12]
 * 0000000140783332: mov     rax, rdi
 * 0000000140783335: lea     edx, [rcx-2Ah]
 * 0000000140783338: mov     [rax], r8
 * 000000014078333B: add     ecx, 0FFFFFFF8h
 * 000000014078333E: add     rax, 8
 * 0000000140783342: sub     rdx, r13
 * 0000000140783345: jnz     short loc_140783338
 * 0000000140783347: test    ecx, ecx
 * 0000000140783349: jz      short loc_140783356
 * 000000014078334B: mov     [rax], r8b
 * 000000014078334E: add     rax, r13
 * 0000000140783351: add     ecx, 0FFFFFFFFh
 * 0000000140783354: jnz     short loc_14078334B
 * 0000000140783356: mov     [rdi], esi
 * 0000000140783358: mov     [rdi+8], r14
 * 000000014078335C: cmp     esi, 20h ; ' '
 * 000000014078335F: jnz     short loc_140783381
 * 0000000140783361: test    r15d, r15d
 * 0000000140783364: jz      short loc_140783381
 * 0000000140783366: lea     r9, [rdi+18h]
 * 000000014078336A: mov     r8d, r15d
 * 000000014078336D: mov     rdx, r14
 * 0000000140783370: mov     rcx, rbx
 * 0000000140783373: call    sub_1401588B8
 * 0000000140783378: mov     r10, [rbp+1C70h+var_1CE0]
 * 000000014078337C: mov     r11, [rsp+78h]
 * 0000000140783381: mov     [rdi+10h], r15d
 * 0000000140783385: lea     rcx, [r14+r15]
 * 0000000140783389: add     [rbx+5E0h], r15d
 * 0000000140783390: mov     rax, r14
 * 0000000140783393: mov     r9d, [rbx+5CCh]
 * 000000014078339A: mov     rdx, [rbx+5D0h]
 * 00000001407833A1: cmp     r14, rcx
 * 00000001407833A4: jnb     short loc_1407833B2
 * 00000001407833A6: prefetchnta byte ptr [rax]
 * 00000001407833A9: add     rax, 40h ; '@'
 * 00000001407833AD: cmp     rax, rcx
 * 00000001407833B0: jb      short loc_1407833A6
 * 00000001407833B2: mov     r8d, r15d
 * 00000001407833B5: cmp     r15d, 8
 * 00000001407833B9: jb      short loc_1407833D8
 * 00000001407833BB: mov     rax, r15
 * 00000001407833BE: shr     rax, 3
 * 00000001407833C2: xor     rdx, [r14]
 * 00000001407833C5: mov     ecx, r9d
 * 00000001407833C8: rol     rdx, cl
 * 00000001407833CB: add     r14, 8
 * 00000001407833CF: add     r8d, 0FFFFFFF8h
 * 00000001407833D3: sub     rax, r13
 * 00000001407833D6: jnz     short loc_1407833C2
 * 00000001407833D8: test    r8d, r8d
 * 00000001407833DB: jz      short loc_1407833F3
 * 00000001407833DD: movzx   eax, byte ptr [r14]
 * 00000001407833E1: mov     ecx, r9d
 * 00000001407833E4: xor     rdx, rax
 * 00000001407833E7: add     r14, r13
 * 00000001407833EA: rol     rdx, cl
 * 00000001407833ED: add     r8d, 0FFFFFFFFh
 * 00000001407833F1: jnz     short loc_1407833DD
 * 00000001407833F3: mov     rax, rdx
 * 00000001407833F6: shr     rax, 1Fh
 * 00000001407833FA: xor     r8d, r8d
 * 00000001407833FD: jmp     short loc_140783405
 * 00000001407833FF: xor     edx, eax
 * 0000000140783401: shr     rax, 1Fh
 * 0000000140783405: test    rax, rax
 * 0000000140783408: jnz     short loc_1407833FF
 * 000000014078340A: btr     edx, 1Fh
 * 000000014078340E: add     r10, 4
 * 0000000140783412: mov     [rdi+14h], edx
 * 0000000140783415: add     r12, 8
 * 0000000140783419: add     [rbx+5E0h], r15d
 * 0000000140783420: mov     rdi, [rbp+1C70h+var_14A8]
 * 0000000140783427: add     rdi, 30h ; '0'
 * 000000014078342B: mov     [rbp+1C70h+var_1CE0], r10
 * 000000014078342F: sub     r11, r13
 * 0000000140783432: mov     [rbp+1C70h+var_14A8], rdi
 * 0000000140783439: mov     [rsp+78h], r11
 * 000000014078343E: jnz     loc_140783326
 * 0000000140783444: mov     rcx, [rbp+1C70h+var_14C0]
 * 000000014078344B: mov     r14, rbx
 * 000000014078344E: mov     eax, dword ptr [rsp+1D70h+Src]
 * 0000000140783452: add     rcx, 60h ; '`'
 * 0000000140783456: neg     eax
 * 0000000140783458: mov     [rbp+1C70h+var_15F0], rbx
 * 000000014078345F: mov     [rbp+1C70h+var_14A0], rcx
 * 0000000140783466: sbb     r15d, r15d
 * 0000000140783469: neg     r15d
 * 000000014078346C: add     r15d, 0Dh
 * 0000000140783470: test    rcx, rcx
 * 0000000140783473: jnz     loc_140783678
 * 0000000140783479: mov     r12d, [rbx+59Ch]
 * 0000000140783480: mov     r8d, [rbx+67Ch]
 * 0000000140783487: lea     eax, [r12+30h]
 * 000000014078348C: cmp     eax, [rbx+75Ch]
 * 0000000140783492: jbe     loc_140783562
 * 0000000140783498: mov     edx, eax
 * 000000014078349A: mov     rcx, rbx
 * 000000014078349D: call    sub_140251E08
 * 00000001407834A2: mov     rdi, rax
 * 00000001407834A5: test    rax, rax
 * 00000001407834A8: jz      loc_1407842A5
 * 00000001407834AE: mov     edx, [rbx+6D8h]
 * 00000001407834B4: test    dl, 4
 * 00000001407834B7: jnz     loc_140783559
 * 00000001407834BD: mov     ecx, [rbx+59Ch]
 * 00000001407834C3: and     edx, 20000000h
 * 00000001407834C9: mov     r9, [rbx+580h]
 * 00000001407834D0: neg     edx
 * 00000001407834D2: sbb     r8d, r8d
 * 00000001407834D5: and     r8d, [rbx+67Ch]
 * 00000001407834DC: cmp     ecx, 8
 * 00000001407834DF: jb      short loc_1407834F8
 * 00000001407834E1: mov     eax, ecx
 * 00000001407834E3: shr     rax, 3
 * 00000001407834E7: xor     edx, edx
 * 00000001407834E9: mov     [rbx], rdx
 * 00000001407834EC: add     ecx, 0FFFFFFF8h
 * 00000001407834EF: add     rbx, 8
 * 00000001407834F3: sub     rax, r13
 * 00000001407834F6: jnz     short loc_1407834E9
 * 00000001407834F8: xor     eax, eax
 * 00000001407834FA: test    ecx, ecx
 * 00000001407834FC: jz      short loc_140783508
 * 00000001407834FE: mov     [rbx], al
 * 0000000140783500: add     rbx, r13
 * 0000000140783503: add     ecx, 0FFFFFFFFh
 * 0000000140783506: jnz     short loc_1407834FE
 * 0000000140783508: mov     ebx, [rdi+67Ch]
 * 000000014078350E: mov     [rdi+67Ch], r8d
 * 0000000140783515: cmp     r8d, 3
 * 0000000140783519: jz      short loc_14078354A
 * 000000014078351B: test    dword ptr [rdi+6D8h], 10000000h
 * 0000000140783525: mov     rcx, rax
 * 0000000140783528: cmovz   ecx, r8d
 * 000000014078352C: test    ecx, ecx
 * 000000014078352E: jz      short loc_14078353F
 * 0000000140783530: lea     rcx, [r9-8]
 * 0000000140783534: mov     rdx, [rcx]
 * 0000000140783537: call    qword ptr [rdi+210h]
 * 000000014078353D: jmp     short loc_140783553
 * 000000014078353F: mov     rcx, r9
 * 0000000140783542: call    qword ptr [rdi+0E8h]
 * 0000000140783548: jmp     short loc_140783553
 * 000000014078354A: mov     rcx, r9
 * 000000014078354D: call    qword ptr [rdi+348h]
 * 0000000140783553: mov     [rdi+67Ch], ebx
 * 0000000140783559: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 0000000140783560: jmp     short loc_14078356B
 * 0000000140783562: mov     rdi, rbx
 * 0000000140783565: mov     [rbx+59Ch], eax
 * 000000014078356B: add     [rdi+5C4h], r13d
 * 0000000140783572: lea     r14, [rdi+r12]
 * 0000000140783576: mov     ecx, 30h ; '0'
 * 000000014078357B: mov     [rbp+1C70h+var_1498], r14
 * 0000000140783582: mov     rax, r14
 * 0000000140783585: xor     ebx, ebx
 * 0000000140783587: lea     edx, [rcx-2Ah]
 * 000000014078358A: mov     [rax], rbx
 * 000000014078358D: add     ecx, 0FFFFFFF8h
 * 0000000140783590: add     rax, 8
 * 0000000140783594: sub     rdx, r13
 * 0000000140783597: jnz     short loc_14078358A
 * 0000000140783599: test    ecx, ecx
 * 000000014078359B: jz      short loc_1407835A7
 * 000000014078359D: mov     [rax], bl
 * 000000014078359F: add     rax, r13
 * 00000001407835A2: add     ecx, 0FFFFFFFFh
 * 00000001407835A5: jnz     short loc_14078359D
 * 00000001407835A7: mov     r12, [rsp+1D70h+var_1D20]
 * 00000001407835AC: cmp     r15d, 20h ; ' '
 * 00000001407835B0: mov     [r14], r15d
 * 00000001407835B3: mov     r15d, dword ptr [rsp+1D70h+NtHeaders]
 * 00000001407835B8: mov     [r14+8], r12
 * 00000001407835BC: jnz     short loc_1407835D5
 * 00000001407835BE: test    r15d, r15d
 * 00000001407835C1: jz      short loc_1407835D5
 * 00000001407835C3: lea     r9, [r14+18h]
 * 00000001407835C7: mov     r8d, r15d
 * 00000001407835CA: mov     rdx, r12
 * 00000001407835CD: mov     rcx, rdi
 * 00000001407835D0: call    sub_1401588B8
 * 00000001407835D5: mov     [r14+10h], r15d
 * 00000001407835D9: mov     r8, r12
 * 00000001407835DC: add     [rdi+5E0h], r15d
 * 00000001407835E3: mov     rax, r12
 * 00000001407835E6: mov     r9d, [rdi+5CCh]
 * 00000001407835ED: mov     rdx, [rdi+5D0h]
 * 00000001407835F4: mov     ecx, r15d
 * 00000001407835F7: add     rcx, r12
 * 00000001407835FA: cmp     r12, rcx
 * 00000001407835FD: jnb     short loc_14078360B
 * 00000001407835FF: prefetchnta byte ptr [rax]
 * 0000000140783602: add     rax, 40h ; '@'
 * 0000000140783606: cmp     rax, rcx
 * 0000000140783609: jb      short loc_1407835FF
 * 000000014078360B: mov     ebx, r15d
 * 000000014078360E: cmp     r15d, 8
 * 0000000140783612: jb      short loc_140783630
 * 0000000140783614: mov     eax, r15d
 * 0000000140783617: shr     rax, 3
 * 000000014078361B: xor     rdx, [r8]
 * 000000014078361E: mov     ecx, r9d
 * 0000000140783621: rol     rdx, cl
 * 0000000140783624: add     r8, 8
 * 0000000140783628: add     ebx, 0FFFFFFF8h
 * 000000014078362B: sub     rax, r13
 * 000000014078362E: jnz     short loc_14078361B
 * 0000000140783630: test    ebx, ebx
 * 0000000140783632: jz      short loc_140783649
 * 0000000140783634: movzx   eax, byte ptr [r8]
 * 0000000140783638: mov     ecx, r9d
 * 000000014078363B: xor     rdx, rax
 * 000000014078363E: add     r8, r13
 * 0000000140783641: rol     rdx, cl
 * 0000000140783644: add     ebx, 0FFFFFFFFh
 * 0000000140783647: jnz     short loc_140783634
 * 0000000140783649: mov     rax, rdx
 * 000000014078364C: jmp     short loc_140783650
 * 000000014078364E: xor     edx, eax
 * 0000000140783650: shr     rax, 1Fh
 * 0000000140783654: test    rax, rax
 * 0000000140783657: jnz     short loc_14078364E
 * 0000000140783659: btr     edx, 1Fh
 * 000000014078365D: mov     [r14+14h], edx
 * 0000000140783661: mov     rax, [rbp+1C70h+var_1498]
 * 0000000140783668: mov     [rbp+1C70h+var_14A0], rax
 * 000000014078366F: add     [rdi+5E0h], r15d
 * 0000000140783676: jmp     short loc_140783688
 * 0000000140783678: mov     r12, [rsp+1D70h+var_1D20]
 * 000000014078367D: mov     rdi, rbx
 * 0000000140783680: mov     [rcx], r15d
 * 0000000140783683: mov     r15d, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140783688: test    dword ptr [rdi+6D8h], 40000000h
 * 0000000140783692: jz      short loc_1407836B2
 * 0000000140783694: test    r15d, r15d
 * 0000000140783697: jz      short loc_1407836B2
 * 0000000140783699: mov     r9, [rbp+1C70h+var_14A0]
 * 00000001407836A0: mov     r8d, r15d
 * 00000001407836A3: add     r9, 1Ch
 * 00000001407836A7: mov     rdx, r12
 * 00000001407836AA: mov     rcx, rdi
 * 00000001407836AD: call    sub_1401588B8
 * 00000001407836B2: mov     rax, [rbp+1C70h+var_14A0]
 * 00000001407836B9: xor     ecx, ecx
 * 00000001407836BB: mov     r14, rdi
 * 00000001407836BE: mov     [rbp+1C70h+var_15F0], rdi
 * 00000001407836C5: mov     [rax+18h], ecx
 * 00000001407836C8: xor     eax, eax
 * 00000001407836CA: mov     rbx, [rbp+1C70h+var_14C0]
 * 00000001407836D1: cmp     dword ptr [rsp+1D70h+Src], ecx
 * 00000001407836D5: mov     r15, [rbp+1C70h+var_14C8]
 * 00000001407836DC: setnz   al
 * 00000001407836DF: mov     dword ptr [rbx+90h], 23h ; '#'
 * 00000001407836E9: xor     eax, [rbx+0B8h]
 * 00000001407836EF: and     eax, r13d
 * 00000001407836F2: xor     [rbx+0B8h], eax
 * 00000001407836F8: cmp     dword ptr [rbx+0A0h], 94h
 * 0000000140783702: jb      short loc_14078376A
 * 0000000140783704: mov     r12, [rbx+98h]
 * 000000014078370B: mov     rcx, r15
 * 000000014078370E: call    qword ptr [rdi+1E0h]
 * 0000000140783714: test    rax, rax
 * 0000000140783717: jz      loc_1407842A5
 * 000000014078371D: mov     ecx, [rax+50h]
 * 0000000140783720: or      dword ptr [rbx+0B8h], 2
 * 0000000140783727: add     rcx, r15
 * 000000014078372A: mov     rax, [r12+70h]
 * 000000014078372F: cmp     rax, r15
 * 0000000140783732: jb      short loc_14078374A
 * 0000000140783734: cmp     rax, rcx
 * 0000000140783737: jnb     short loc_14078374A
 * 0000000140783739: mov     rax, [rax]
 * 000000014078373C: mov     [rbx+0A8h], rax
 * 0000000140783743: or      dword ptr [rbx+0B8h], 4
 * 000000014078374A: mov     rax, [r12+78h]
 * 000000014078374F: cmp     rax, r15
 * 0000000140783752: jb      short loc_14078376A
 * 0000000140783754: cmp     rax, rcx
 * 0000000140783757: jnb     short loc_14078376A
 * 0000000140783759: mov     rax, [rax]
 * 000000014078375C: mov     [rbx+0B0h], rax
 * 0000000140783763: or      dword ptr [rbx+0B8h], 8
 * 000000014078376A: test    dword ptr [rdi+6D8h], 400000h
 * 0000000140783774: mov     rbx, [rbp+1C70h+var_14C8]
 * 000000014078377B: mov     [rsp+1D70h+var_1D20], rbx
 * 0000000140783780: mov     [rbp+1C70h+var_15F0], rdi
 * 0000000140783787: jz      loc_140784292
 * 000000014078378D: mov     rcx, rbx
 * 0000000140783790: call    qword ptr [rdi+1E0h]
 * 0000000140783796: mov     [rbp+1C70h+var_1CE0], rax
 * 000000014078379A: mov     r12, rax
 * 000000014078379D: test    rax, rax
 * 00000001407837A0: jz      loc_140782F44
 * 00000001407837A6: mov     ecx, dword ptr [rsp+1D70h+var_1D08]
 * 00000001407837AA: mov     rax, 0AAAAAAAAAAAAAAABh
 * 00000001407837B4: mul     rcx
 * 00000001407837B7: xor     eax, eax
 * 00000001407837B9: mov     r9, rdx
 * 00000001407837BC: movzx   edx, word ptr [r12+6]
 * 00000001407837C2: shr     r9, 3
 * 00000001407837C6: mov     [rsp+78h], r9
 * 00000001407837CB: mov     word ptr [rbp+1C70h+var_1CC8], dx
 * 00000001407837CF: test    dx, dx
 * 00000001407837D2: jnz     short loc_14078382B
 * 00000001407837D4: test    dword ptr [rdi+6D8h], 200000h
 * 00000001407837DE: jz      loc_14078D840
 * 00000001407837E4: cmp     [rdi+650h], eax
 * 00000001407837EA: jnz     loc_140782F44
 * 00000001407837F0: mov     rax, 0A3A03F5891C8B4E8h
 * 00000001407837FA: add     rax, rdi
 * 00000001407837FD: mov     [rdi+658h], rax
 * 0000000140783804: xor     eax, eax
 * 0000000140783806: mov     [rdi+660h], rax
 * 000000014078380D: mov     qword ptr [rdi+668h], 10Fh
 * 0000000140783818: mov     [rdi+670h], rbx
 * 000000014078381F: mov     [rdi+650h], r13d
 * 0000000140783826: jmp     loc_140782F44
 * 000000014078382B: mov     r8, [rbp+1C70h+var_1CE8]
 * 000000014078382F: movzx   r11d, word ptr [r12+14h]
 * 0000000140783835: mov     rbx, r8
 * 0000000140783838: mov     eax, r9d
 * 000000014078383B: add     r11, 18h
 * 000000014078383F: add     r11, r12
 * 0000000140783842: movzx   r10d, dx
 * 0000000140783846: mov     [rbp+1C70h+var_1CB0], r11
 * 000000014078384A: mov     dword ptr [rsp+1D70h+NtHeaders], r10d
 * 000000014078384F: lea     rcx, [rax+rax*2]
 * 0000000140783853: lea     rax, [r8+rcx*4]
 * 0000000140783857: mov     [rbp+1C70h+var_1CD8], rax
 * 000000014078385B: xor     eax, eax
 * 000000014078385D: mov     r15d, eax
 * 0000000140783860: test    r10d, r10d
 * 0000000140783863: jz      loc_140783917
 * 0000000140783869: lea     r12, [r11+8]
 * 000000014078386D: mov     ecx, [r12]
 * 0000000140783871: cmp     [r12+8], ecx
 * 0000000140783876: mov     r8d, [r12+4]
 * 000000014078387B: cmova   ecx, [r12+8]
 * 0000000140783881: mov     dword ptr [rbp+1C70h+var_1CF0], r8d
 * 0000000140783885: lea     edx, [rcx+r8]
 * 0000000140783889: mov     dword ptr [rbp+1C70h+var_1CC0], edx
 * 000000014078388C: test    r15d, r15d
 * 000000014078388F: jz      short loc_1407838A4
 * 0000000140783891: lea     eax, [r15-1]
 * 0000000140783895: lea     rax, [rax+rax*4]
 * 0000000140783899: cmp     edx, [r11+rax*8+0Ch]
 * 000000014078389E: jb      loc_140783930
 * 00000001407838A4: cmp     rbx, [rbp+1C70h+var_1CD8]
 * 00000001407838A8: jz      short loc_1407838FE
 * 00000001407838AA: mov     ecx, [rbx]
 * 00000001407838AC: mov     eax, [rbx+4]
 * 00000001407838AF: cmp     ecx, edx
 * 00000001407838B1: jnb     short loc_1407838F9
 * 00000001407838B3: cmp     eax, r8d
 * 00000001407838B6: jbe     short loc_1407838F9
 * 00000001407838B8: cmp     ecx, r8d
 * 00000001407838BB: jb      loc_140783987
 * 00000001407838C1: cmp     eax, edx
 * 00000001407838C3: ja      loc_140783987
 * 00000001407838C9: mov     rdx, [rsp+1D70h+var_1D20]
 * 00000001407838CE: mov     r9, rbx
 * 00000001407838D1: mov     eax, r15d
 * 00000001407838D4: lea     rcx, [rax+rax*4]
 * 00000001407838D8: lea     r8, [r11+rcx*8]
 * 00000001407838DC: mov     rcx, rdi
 * 00000001407838DF: call    $$f4
 * 00000001407838E4: mov     edx, dword ptr [rbp+1C70h+var_1CC0]
 * 00000001407838E7: add     rbx, 0Ch
 * 00000001407838EB: mov     r8d, dword ptr [rbp+1C70h+var_1CF0]
 * 00000001407838EF: mov     r11, [rbp+1C70h+var_1CB0]
 * 00000001407838F3: cmp     rbx, [rbp+1C70h+var_1CD8]
 * 00000001407838F7: jnz     short loc_1407838AA
 * 00000001407838F9: mov     r10d, dword ptr [rsp+1D70h+NtHeaders]
 * 00000001407838FE: add     r15d, r13d
 * 0000000140783901: add     r12, 28h ; '('
 * 0000000140783905: cmp     r15d, r10d
 * 0000000140783908: jb      loc_14078386D
 * 000000014078390E: mov     r9, [rsp+78h]
 * 0000000140783913: mov     r12, [rbp+1C70h+var_1CE0]
 * 0000000140783917: cmp     rbx, [rbp+1C70h+var_1CD8]
 * 000000014078391B: jz      short loc_14078399A
 * 000000014078391D: xor     eax, eax
 * 000000014078391F: test    dword ptr [rdi+6D8h], 200000h
 * 0000000140783929: jnz     short loc_140783942
 * 000000014078392B: jmp     loc_14078D7E6
 * 0000000140783930: xor     eax, eax
 * 0000000140783932: test    dword ptr [rdi+6D8h], 200000h
 * 000000014078393C: jz      loc_14078D868
 * 0000000140783942: cmp     [rdi+650h], eax
 * 0000000140783948: jnz     loc_140782F44
 * 000000014078394E: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140783958: add     rax, rdi
 * 000000014078395B: mov     [rdi+658h], rax
 * 0000000140783962: xor     eax, eax
 * 0000000140783964: mov     [rdi+660h], rax
 * 000000014078396B: mov     rax, [rsp+1D70h+var_1D20]
 * 0000000140783970: mov     qword ptr [rdi+668h], 10Fh
 * 000000014078397B: mov     [rdi+670h], rax
 * 0000000140783982: jmp     loc_14078381F
 * 0000000140783987: xor     eax, eax
 * 0000000140783989: test    dword ptr [rdi+6D8h], 200000h
 * 0000000140783993: jnz     short loc_140783942
 * 0000000140783995: jmp     loc_14078D813
 * 000000014078399A: mov     r15d, [rdi+59Ch]
 * 00000001407839A1: lea     ecx, [r9+6]
 * 00000001407839A5: mov     r8d, [rdi+67Ch]
 * 00000001407839AC: lea     eax, [r10+2]
 * 00000001407839B0: lea     eax, [rax+rax*2]
 * 00000001407839B3: mov     ebx, 0FFFFFFF8h
 * 00000001407839B8: and     ecx, ebx
 * 00000001407839BA: lea     eax, [rcx+rax*8]
 * 00000001407839BD: add     eax, r15d
 * 00000001407839C0: cmp     eax, [rdi+75Ch]
 * 00000001407839C6: jbe     loc_140783AB5
 * 00000001407839CC: mov     edx, eax
 * 00000001407839CE: mov     rcx, rdi
 * 00000001407839D1: call    sub_140251E08
 * 00000001407839D6: mov     [rbp+1C70h+var_1CE0], rax
 * 00000001407839DA: mov     r11, rax
 * 00000001407839DD: test    rax, rax
 * 00000001407839E0: jz      loc_140783AAB
 * 00000001407839E6: mov     edx, [rdi+6D8h]
 * 00000001407839EC: test    dl, 4
 * 00000001407839EF: jnz     loc_140783A97
 * 00000001407839F5: mov     ecx, [rdi+59Ch]
 * 00000001407839FB: and     edx, 20000000h
 * 0000000140783A01: mov     r8, [rdi+580h]
 * 0000000140783A08: neg     edx
 * 0000000140783A0A: sbb     edx, edx
 * 0000000140783A0C: and     edx, [rdi+67Ch]
 * 0000000140783A12: cmp     ecx, 8
 * 0000000140783A15: jb      short loc_140783A2E
 * 0000000140783A17: mov     eax, ecx
 * 0000000140783A19: shr     rax, 3
 * 0000000140783A1D: xor     r9d, r9d
 * 0000000140783A20: mov     [rdi], r9
 * 0000000140783A23: add     ecx, ebx
 * 0000000140783A25: add     rdi, 8
 * 0000000140783A29: sub     rax, r13
 * 0000000140783A2C: jnz     short loc_140783A20
 * 0000000140783A2E: xor     eax, eax
 * 0000000140783A30: test    ecx, ecx
 * 0000000140783A32: jz      short loc_140783A3E
 * 0000000140783A34: mov     [rdi], al
 * 0000000140783A36: add     rdi, r13
 * 0000000140783A39: add     ecx, 0FFFFFFFFh
 * 0000000140783A3C: jnz     short loc_140783A34
 * 0000000140783A3E: mov     ebx, [r11+67Ch]
 * 0000000140783A45: mov     [r11+67Ch], edx
 * 0000000140783A4C: cmp     edx, 3
 * 0000000140783A4F: jz      short loc_140783A82
 * 0000000140783A51: test    dword ptr [r11+6D8h], 10000000h
 * 0000000140783A5C: mov     rcx, rax
 * 0000000140783A5F: cmovz   ecx, edx
 * 0000000140783A62: test    ecx, ecx
 * 0000000140783A64: jz      short loc_140783A76
 * 0000000140783A66: lea     rcx, [r8-8]
 * 0000000140783A6A: mov     rdx, [rcx]
 * 0000000140783A6D: call    qword ptr [r11+210h]
 * 0000000140783A74: jmp     short loc_140783A8C
 * 0000000140783A76: mov     rcx, r8
 * 0000000140783A79: call    qword ptr [r11+0E8h]
 * 0000000140783A80: jmp     short loc_140783A8C
 * 0000000140783A82: mov     rcx, r8
 * 0000000140783A85: call    qword ptr [r11+348h]
 * 0000000140783A8C: mov     r11, [rbp+1C70h+var_1CE0]
 * 0000000140783A90: mov     [r11+67Ch], ebx
 * 0000000140783A97: and     dword ptr [r11+6D8h], 0FFFFFFFBh
 * 0000000140783A9F: mov     r9, [rsp+78h]
 * 0000000140783AA4: mov     r10d, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140783AA9: jmp     short loc_140783AC2
 * 0000000140783AAB: mov     ecx, 0C000009Ah
 * 0000000140783AB0: jmp     loc_140782F49
 * 0000000140783AB5: mov     r11, rdi
 * 0000000140783AB8: mov     [rbp+1C70h+var_1CE0], rdi
 * 0000000140783ABC: mov     [rdi+59Ch], eax
 * 0000000140783AC2: add     [r11+5C4h], r13d
 * 0000000140783AC9: lea     rdx, [r11+r15]
 * 0000000140783ACD: mov     ecx, 30h ; '0'
 * 0000000140783AD2: mov     [rbp+1C70h+var_1490], rdx
 * 0000000140783AD9: mov     rax, rdx
 * 0000000140783ADC: xor     edi, edi
 * 0000000140783ADE: lea     ebx, [rcx-2Ah]
 * 0000000140783AE1: mov     [rax], rdi
 * 0000000140783AE4: add     ecx, 0FFFFFFF8h
 * 0000000140783AE7: add     rax, 8
 * 0000000140783AEB: sub     rbx, r13
 * 0000000140783AEE: jnz     short loc_140783AE1
 * 0000000140783AF0: or      r15d, 0FFFFFFFFh
 * 0000000140783AF4: test    ecx, ecx
 * 0000000140783AF6: jz      short loc_140783B03
 * 0000000140783AF8: mov     [rax], dil
 * 0000000140783AFB: add     rax, r13
 * 0000000140783AFE: add     ecx, r15d
 * 0000000140783B01: jnz     short loc_140783AF8
 * 0000000140783B03: mov     rax, [rbp+1C70h+var_1CE8]
 * 0000000140783B07: mov     dword ptr [rdx], 1Eh
 * 0000000140783B0D: mov     [rdx+8], rax
 * 0000000140783B11: xor     eax, eax
 * 0000000140783B13: mov     [rdx+10h], eax
 * 0000000140783B16: mov     rcx, [r11+5D0h]
 * 0000000140783B1D: mov     rax, rcx
 * 0000000140783B20: jmp     short loc_140783B24
 * 0000000140783B22: xor     ecx, eax
 * 0000000140783B24: shr     rax, 1Fh
 * 0000000140783B28: test    rax, rax
 * 0000000140783B2B: jnz     short loc_140783B22
 * 0000000140783B2D: btr     ecx, 1Fh
 * 0000000140783B31: lea     ebx, [r9-1]
 * 0000000140783B35: mov     [rdx+14h], ecx
 * 0000000140783B38: mov     rdi, r11
 * 0000000140783B3B: mov     rax, [rbp+1C70h+var_1490]
 * 0000000140783B42: xor     edx, edx
 * 0000000140783B44: mov     rcx, [rsp+1D70h+var_1D20]
 * 0000000140783B49: mov     [rbp+1C70h+var_1488], rax
 * 0000000140783B50: mov     [rax+18h], rcx
 * 0000000140783B54: mov     ecx, [r12+50h]
 * 0000000140783B59: mov     rax, [rbp+1C70h+var_1488]
 * 0000000140783B60: mov     r12, [rbp+1C70h+var_1CE8]
 * 0000000140783B64: mov     [rax+20h], ecx
 * 0000000140783B67: mov     rax, [rbp+1C70h+var_1488]
 * 0000000140783B6E: mov     ecx, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140783B72: mov     [rax+24h], ecx
 * 0000000140783B75: mov     rax, [rbp+1C70h+var_1488]
 * 0000000140783B7C: movzx   ecx, word ptr [rbp+1C70h+var_1CC8]
 * 0000000140783B80: mov     [rax+28h], cx
 * 0000000140783B84: xor     eax, eax
 * 0000000140783B86: cmp     dword ptr [rsp+1D70h+Src], edx
 * 0000000140783B8A: mov     rcx, [rbp+1C70h+var_1488]
 * 0000000140783B91: setnz   al
 * 0000000140783B94: add     rbx, 7
 * 0000000140783B98: and     rbx, 0FFFFFFFFFFFFFFF8h
 * 0000000140783B9C: xor     ax, [rcx+2Ah]
 * 0000000140783BA0: and     ax, r13w
 * 0000000140783BA4: xor     [rcx+2Ah], ax
 * 0000000140783BA8: mov     rcx, [rbp+1C70h+var_1488]
 * 0000000140783BAF: movzx   eax, word ptr [rcx+28h]
 * 0000000140783BB3: lea     rdx, [rcx+30h]
 * 0000000140783BB7: add     rbx, rdx
 * 0000000140783BBA: mov     [rsp+78h], rdx
 * 0000000140783BBF: mov     [rbp+1C70h+var_1CF0], rbx
 * 0000000140783BC3: lea     rcx, [rax+rax*2]
 * 0000000140783BC7: lea     r8, [rbx+rcx*8]
 * 0000000140783BCB: mov     [rbp+1C70h+var_1CC0], r8
 * 0000000140783BCF: lea     rax, [r12+0Ch]
 * 0000000140783BD4: test    r9d, r9d
 * 0000000140783BD7: jnz     short loc_140783BDD
 * 0000000140783BD9: mov     rax, [rbp+1C70h+var_1CD8]
 * 0000000140783BDD: mov     [rbp+1C70h+var_1CA8], rax
 * 0000000140783BE1: xor     eax, eax
 * 0000000140783BE3: test    r10d, r10d
 * 0000000140783BE6: jz      short loc_140783C18
 * 0000000140783BE8: mov     edx, r10d
 * 0000000140783BEB: lea     rax, [rbx+8]
 * 0000000140783BEF: mov     r10d, 80000000h
 * 0000000140783BF5: xor     r9d, r9d
 * 0000000140783BF8: mov     ecx, 2
 * 0000000140783BFD: mov     [rax-8], r9d
 * 0000000140783C01: mov     [rax-4], r9d
 * 0000000140783C05: mov     [rax], r10d
 * 0000000140783C08: add     rax, 0Ch
 * 0000000140783C0C: sub     rcx, r13
 * 0000000140783C0F: jnz     short loc_140783BFD
 * 0000000140783C11: sub     rdx, r13
 * 0000000140783C14: jnz     short loc_140783BF8
 * 0000000140783C16: xor     eax, eax
 * 0000000140783C18: cmp     rbx, r8
 * 0000000140783C1B: jz      loc_140784292
 * 0000000140783C21: mov     r14, [rbp+1C70h+var_1CB0]
 * 0000000140783C25: jmp     short loc_140783C2D
 * 0000000140783C27: xor     eax, eax
 * 0000000140783C29: or      r15d, 0FFFFFFFFh
 * 0000000140783C2D: mov     r10d, eax
 * 0000000140783C30: mov     eax, [r14+24h]
 * 0000000140783C34: bt      eax, 19h
 * 0000000140783C38: jb      loc_140783E14
 * 0000000140783C3E: mov     ecx, [r14]
 * 0000000140783C41: cmp     ecx, 54494E49h
 * 0000000140783C47: jnz     short loc_140783C57
 * 0000000140783C49: cmp     dword ptr [r14+4], 4742444Bh
 * 0000000140783C51: jz      loc_140783E14
 * 0000000140783C57: cmp     ecx, 45474150h
 * 0000000140783C5D: jnz     short loc_140783C8E
 * 0000000140783C5F: movzx   eax, word ptr [r14+4]
 * 0000000140783C64: mov     edx, 7777h
 * 0000000140783C69: cmp     ax, dx
 * 0000000140783C6C: jz      loc_140783E14
 * 0000000140783C72: mov     edx, 7277h
 * 0000000140783C77: cmp     ax, dx
 * 0000000140783C7A: jz      loc_140783E14
 * 0000000140783C80: mov     edx, 7877h
 * 0000000140783C85: cmp     ax, dx
 * 0000000140783C88: jz      loc_140783E14
 * 0000000140783C8E: cmp     ecx, 41525245h
 * 0000000140783C94: jnz     short loc_140783CA6
 * 0000000140783C96: mov     eax, 4154h
 * 0000000140783C9B: cmp     [r14+4], ax
 * 0000000140783CA0: jz      loc_140783E14
 * 0000000140783CA6: mov     rax, [r11+690h]
 * 0000000140783CAD: mov     r8, r14
 * 0000000140783CB0: mov     rbx, [r11+688h]
 * 0000000140783CB7: mov     r9d, 7
 * 0000000140783CBD: mov     [rbp+1C70h+var_CA8], rax
 * 0000000140783CC4: sub     r8, rbx
 * 0000000140783CC7: mov     rax, [r11+698h]
 * 0000000140783CCE: mov     [rbp+1C70h+var_CA0], rax
 * 0000000140783CD5: mov     rax, [r11+6A0h]
 * 0000000140783CDC: mov     [rbp+1C70h+var_C98], rax
 * 0000000140783CE3: mov     [rbp+1C70h+var_CB0], rbx
 * 0000000140783CEA: movzx   edx, byte ptr [rbx+r8]
 * 0000000140783CEF: movzx   eax, byte ptr [rbx]
 * 0000000140783CF2: add     rbx, r13
 * 0000000140783CF5: cmp     rdx, rax
 * 0000000140783CF8: jnz     short loc_140783D04
 * 0000000140783CFA: add     r9d, r15d
 * 0000000140783CFD: jnz     short loc_140783CEA
 * 0000000140783CFF: jmp     loc_140783D9E
 * 0000000140783D04: mov     r8, [rbp+1C70h+var_CA8]
 * 0000000140783D0B: mov     ebx, 8
 * 0000000140783D10: mov     r9, r14
 * 0000000140783D13: mov     rcx, [r9]
 * 0000000140783D16: add     r9, 8
 * 0000000140783D1A: mov     rax, [r8]
 * 0000000140783D1D: add     r8, 8
 * 0000000140783D21: cmp     rcx, rax
 * 0000000140783D24: jnz     short loc_140783D4C
 * 0000000140783D26: add     ebx, 0FFFFFFF8h
 * 0000000140783D29: cmp     ebx, 8
 * 0000000140783D2C: jnb     short loc_140783D13
 * 0000000140783D2E: test    ebx, ebx
 * 0000000140783D30: jz      short loc_140783D9E
 * 0000000140783D32: movzx   edx, byte ptr [r9]
 * 0000000140783D36: add     r9, r13
 * 0000000140783D39: movzx   eax, byte ptr [r8]
 * 0000000140783D3D: add     r8, r13
 * 0000000140783D40: cmp     rdx, rax
 * 0000000140783D43: jnz     short loc_140783D4C
 * 0000000140783D45: add     ebx, r15d
 * 0000000140783D48: jnz     short loc_140783D32
 * 0000000140783D4A: jmp     short loc_140783D9E
 * 0000000140783D4C: mov     rbx, [rbp+1C70h+var_CA0]
 * 0000000140783D53: mov     r8, r14
 * 0000000140783D56: sub     r8, rbx
 * 0000000140783D59: mov     r9d, 4
 * 0000000140783D5F: movzx   edx, byte ptr [rbx+r8]
 * 0000000140783D64: movzx   eax, byte ptr [rbx]
 * 0000000140783D67: add     rbx, r13
 * 0000000140783D6A: cmp     rdx, rax
 * 0000000140783D6D: jnz     short loc_140783D76
 * 0000000140783D6F: add     r9d, r15d
 * 0000000140783D72: jnz     short loc_140783D5F
 * 0000000140783D74: jmp     short loc_140783D9E
 * 0000000140783D76: mov     rbx, [rbp+1C70h+var_C98]
 * 0000000140783D7D: mov     r8, r14
 * 0000000140783D80: sub     r8, rbx
 * 0000000140783D83: mov     r9d, 6
 * 0000000140783D89: movzx   edx, byte ptr [rbx+r8]
 * 0000000140783D8E: movzx   eax, byte ptr [rbx]
 * 0000000140783D91: add     rbx, r13
 * 0000000140783D94: cmp     rdx, rax
 * 0000000140783D97: jnz     short loc_140783DA1
 * 0000000140783D99: add     r9d, r15d
 * 0000000140783D9C: jnz     short loc_140783D89
 * 0000000140783D9E: mov     r10d, r13d
 * 0000000140783DA1: mov     rbx, [rbp+1C70h+var_1CF0]
 * 0000000140783DA5: mov     ecx, 80000000h
 * 0000000140783DAA: test    [r14+24h], ecx
 * 0000000140783DAE: cmovnz  r10d, r13d
 * 0000000140783DB2: xor     eax, eax
 * 0000000140783DB4: mov     dword ptr [rsp+1D70h+Src], r10d
 * 0000000140783DB9: test    r10d, r10d
 * 0000000140783DBC: jz      short loc_140783DE5
 * 0000000140783DBE: cmp     dword ptr [r14], 54494E49h
 * 0000000140783DC5: jnz     short loc_140783DE5
 * 0000000140783DC7: cmp     dword ptr [r14+4], 4742444Bh
 * 0000000140783DCF: jnz     short loc_140783DE5
 * 0000000140783DD1: test    dword ptr [r11+6D8h], 10000000h
 * 0000000140783DDC: cmovnz  r10d, eax
 * 0000000140783DE0: mov     dword ptr [rsp+1D70h+Src], r10d
 * 0000000140783DE5: mov     ecx, [r14+8]
 * 0000000140783DE9: cmp     [r14+10h], ecx
 * 0000000140783DED: mov     edx, [r14+0Ch]
 * 0000000140783DF1: cmova   ecx, [r14+10h]
 * 0000000140783DF6: mov     rax, [rbp+1C70h+var_1CD8]
 * 0000000140783DFA: add     ecx, edx
 * 0000000140783DFC: mov     dword ptr [rsp+1D70h+var_1D08], edx
 * 0000000140783E00: mov     dword ptr [rsp+1D70h+NtHeaders], ecx
 * 0000000140783E04: cmp     r12, rax
 * 0000000140783E07: jz      short loc_140783E19
 * 0000000140783E09: mov     r14d, [r12]
 * 0000000140783E0D: mov     r15d, [r12+4]
 * 0000000140783E12: jmp     short loc_140783E22
 * 0000000140783E14: mov     r10d, r13d
 * 0000000140783E17: jmp     short loc_140783DA5
 * 0000000140783E19: xor     r9d, r9d
 * 0000000140783E1C: mov     r14d, r9d
 * 0000000140783E1F: mov     r15d, r9d
 * 0000000140783E22: mov     r8, [rbp+1C70h+var_1CE8]
 * 0000000140783E26: mov     r12d, edx
 * 0000000140783E29: cmp     r8, rax
 * 0000000140783E2C: jz      loc_140783F5C
 * 0000000140783E32: cmp     r14d, edx
 * 0000000140783E35: jbe     loc_140783F5C
 * 0000000140783E3B: cmp     r15d, ecx
 * 0000000140783E3E: ja      loc_140783F5C
 * 0000000140783E44: test    r10d, r10d
 * 0000000140783E47: jnz     loc_140783F5C
 * 0000000140783E4D: mov     [rbx], edx
 * 0000000140783E4F: lea     rcx, [rbp+1C70h+var_FE8]
 * 0000000140783E56: mov     [rbx+4], r14d
 * 0000000140783E5A: lea     rdx, [rbp+1C70h+var_CD0]
 * 0000000140783E61: mov     eax, [rbx]
 * 0000000140783E63: mov     r12d, r14d
 * 0000000140783E66: mov     r8d, eax
 * 0000000140783E69: mov     ebx, r14d
 * 0000000140783E6C: add     r8, [rsp+1D70h+var_1D20]
 * 0000000140783E71: sub     ebx, eax
 * 0000000140783E73: mov     r11d, ebx
 * 0000000140783E76: add     r11, r8
 * 0000000140783E79: xor     eax, eax
 * 0000000140783E7B: mov     r10d, eax
 * 0000000140783E7E: mov     r9, [rdx]
 * 0000000140783E81: mov     eax, [rcx]
 * 0000000140783E83: add     rax, r9
 * 0000000140783E86: cmp     r8, rax
 * 0000000140783E89: jnb     short loc_140783E94
 * 0000000140783E8B: cmp     r11, r9
 * 0000000140783E8E: ja      loc_140783F43
 * 0000000140783E94: mov     eax, 4
 * 0000000140783E99: add     r10d, r13d
 * 0000000140783E9C: add     rcx, rax
 * 0000000140783E9F: add     rdx, 8
 * 0000000140783EA3: cmp     r10d, eax
 * 0000000140783EA6: jb      short loc_140783E7E
 * 0000000140783EA8: mov     rdx, [rbp+1C70h+var_1CE0]
 * 0000000140783EAC: mov     rax, r8
 * 0000000140783EAF: add     [rdx+5E0h], ebx
 * 0000000140783EB5: mov     ecx, [rdx+5CCh]
 * 0000000140783EBB: mov     rdx, [rdx+5D0h]
 * 0000000140783EC2: cmp     r8, r11
 * 0000000140783EC5: jnb     short loc_140783ED3
 * 0000000140783EC7: prefetchnta byte ptr [rax]
 * 0000000140783ECA: add     rax, 40h ; '@'
 * 0000000140783ECE: cmp     rax, r11
 * 0000000140783ED1: jb      short loc_140783EC7
 * 0000000140783ED3: cmp     ebx, 8
 * 0000000140783ED6: jb      short loc_140783EF1
 * 0000000140783ED8: mov     r9d, ebx
 * 0000000140783EDB: shr     r9, 3
 * 0000000140783EDF: xor     rdx, [r8]
 * 0000000140783EE2: add     ebx, 0FFFFFFF8h
 * 0000000140783EE5: rol     rdx, cl
 * 0000000140783EE8: add     r8, 8
 * 0000000140783EEC: sub     r9, r13
 * 0000000140783EEF: jnz     short loc_140783EDF
 * 0000000140783EF1: test    ebx, ebx
 * 0000000140783EF3: jz      short loc_140783F07
 * 0000000140783EF5: movzx   eax, byte ptr [r8]
 * 0000000140783EF9: add     r8, r13
 * 0000000140783EFC: xor     rdx, rax
 * 0000000140783EFF: rol     rdx, cl
 * 0000000140783F02: add     ebx, 0FFFFFFFFh
 * 0000000140783F05: jnz     short loc_140783EF5
 * 0000000140783F07: mov     rax, rdx
 * 0000000140783F0A: shr     rax, 1Fh
 * 0000000140783F0E: xor     ebx, ebx
 * 0000000140783F10: jmp     short loc_140783F18
 * 0000000140783F12: xor     edx, eax
 * 0000000140783F14: shr     rax, 1Fh
 * 0000000140783F18: test    rax, rax
 * 0000000140783F1B: jnz     short loc_140783F12
 * 0000000140783F1D: mov     rax, [rbp+1C70h+var_1CF0]
 * 0000000140783F21: btr     edx, 1Fh
 * 0000000140783F25: mov     r11, [rbp+1C70h+var_1CE0]
 * 0000000140783F29: mov     r10d, dword ptr [rsp+1D70h+Src]
 * 0000000140783F2E: mov     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140783F32: mov     r8, [rbp+1C70h+var_1CE8]
 * 0000000140783F36: mov     [rax+8], edx
 * 0000000140783F39: mov     edx, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140783F3D: mov     rax, [rbp+1C70h+var_1CD8]
 * 0000000140783F41: jmp     short loc_140783F5E
 * 0000000140783F43: mov     r11, [rbp+1C70h+var_1CE0]
 * 0000000140783F47: mov     r10d, dword ptr [rsp+1D70h+Src]
 * 0000000140783F4C: mov     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140783F50: mov     edx, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140783F54: mov     rax, [rbp+1C70h+var_1CD8]
 * 0000000140783F58: mov     r8, [rbp+1C70h+var_1CE8]
 * 0000000140783F5C: xor     ebx, ebx
 * 0000000140783F5E: cmp     r14d, edx
 * 0000000140783F61: jb      loc_140784131
 * 0000000140783F67: cmp     r15d, ecx
 * 0000000140783F6A: mov     r15, [rbp+1C70h+var_1CA8]
 * 0000000140783F6E: ja      loc_140784135
 * 0000000140783F74: cmp     r8, rax
 * 0000000140783F77: jz      loc_140784135
 * 0000000140783F7D: mov     r14d, [r15+4]
 * 0000000140783F81: cmp     r14d, ecx
 * 0000000140783F84: ja      loc_140784135
 * 0000000140783F8A: mov     rax, [rsp+78h]
 * 0000000140783F8F: jmp     short loc_140783F95
 * 0000000140783F91: mov     r11, [rbp+1C70h+var_1CE0]
 * 0000000140783F95: cmp     r15, [rbp+1C70h+var_1CD8]
 * 0000000140783F99: jz      loc_140784135
 * 0000000140783F9F: test    r10d, r10d
 * 0000000140783FA2: jz      short loc_140783FAC
 * 0000000140783FA4: mov     byte ptr [rax], 80h
 * 0000000140783FA7: jmp     loc_140784104
 * 0000000140783FAC: mov     ecx, [r8+4]
 * 0000000140783FB0: mov     r12d, [r15]
 * 0000000140783FB3: cmp     r12d, ecx
 * 0000000140783FB6: jnb     short loc_14078400F
 * 0000000140783FB8: xor     eax, eax
 * 0000000140783FBA: test    dword ptr [r11+6D8h], 200000h
 * 0000000140783FC5: jz      loc_14078D893
 * 0000000140783FCB: cmp     [r11+650h], eax
 * 0000000140783FD2: jnz     short loc_14078400F
 * 0000000140783FD4: mov     r8, [rsp+1D70h+var_1D20]
 * 0000000140783FD9: mov     rax, 0A3A03F5891C8B4E8h
 * 0000000140783FE3: add     rax, r11
 * 0000000140783FE6: mov     [r11+658h], rax
 * 0000000140783FED: xor     eax, eax
 * 0000000140783FEF: mov     [r11+660h], rax
 * 0000000140783FF6: mov     qword ptr [r11+668h], 10Fh
 * 0000000140784001: mov     [r11+670h], r8
 * 0000000140784008: mov     [r11+650h], r13d
 * 000000014078400F: mov     ebx, r12d
 * 0000000140784012: lea     rdx, [rbp+1C70h+var_FE8]
 * 0000000140784019: sub     ebx, ecx
 * 000000014078401B: lea     r9, [rbp+1C70h+var_CD0]
 * 0000000140784022: mov     r8, rcx
 * 0000000140784025: mov     r11d, ebx
 * 0000000140784028: add     r8, [rsp+1D70h+var_1D20]
 * 000000014078402D: add     r11, r8
 * 0000000140784030: xor     eax, eax
 * 0000000140784032: mov     r10d, eax
 * 0000000140784035: mov     rcx, [r9]
 * 0000000140784038: mov     eax, [rdx]
 * 000000014078403A: add     rax, rcx
 * 000000014078403D: cmp     r8, rax
 * 0000000140784040: jnb     short loc_14078404B
 * 0000000140784042: cmp     r11, rcx
 * 0000000140784045: ja      loc_1407840E8
 * 000000014078404B: mov     eax, 4
 * 0000000140784050: add     r10d, r13d
 * 0000000140784053: add     rdx, rax
 * 0000000140784056: add     r9, 8
 * 000000014078405A: cmp     r10d, eax
 * 000000014078405D: jb      short loc_140784035
 * 000000014078405F: cmp     ebx, eax
 * 0000000140784061: jb      loc_1407840E8
 * 0000000140784067: mov     rdx, [rbp+1C70h+var_1CE0]
 * 000000014078406B: mov     rax, r8
 * 000000014078406E: add     [rdx+5E0h], ebx
 * 0000000140784074: mov     ecx, [rdx+5CCh]
 * 000000014078407A: mov     rdx, [rdx+5D0h]
 * 0000000140784081: cmp     r8, r11
 * 0000000140784084: jnb     short loc_140784092
 * 0000000140784086: prefetchnta byte ptr [rax]
 * 0000000140784089: add     rax, 40h ; '@'
 * 000000014078408D: cmp     rax, r11
 * 0000000140784090: jb      short loc_140784086
 * 0000000140784092: cmp     ebx, 8
 * 0000000140784095: jb      short loc_1407840B0
 * 0000000140784097: mov     r9d, ebx
 * 000000014078409A: shr     r9, 3
 * 000000014078409E: xor     rdx, [r8]
 * 00000001407840A1: add     ebx, 0FFFFFFF8h
 * 00000001407840A4: rol     rdx, cl
 * 00000001407840A7: add     r8, 8
 * 00000001407840AB: sub     r9, r13
 * 00000001407840AE: jnz     short loc_14078409E
 * 00000001407840B0: test    ebx, ebx
 * 00000001407840B2: jz      short loc_1407840C6
 * 00000001407840B4: movzx   eax, byte ptr [r8]
 * 00000001407840B8: add     r8, r13
 * 00000001407840BB: xor     rdx, rax
 * 00000001407840BE: rol     rdx, cl
 * 00000001407840C1: add     ebx, 0FFFFFFFFh
 * 00000001407840C4: jnz     short loc_1407840B4
 * 00000001407840C6: mov     rax, rdx
 * 00000001407840C9: shr     rax, 7
 * 00000001407840CD: xor     ebx, ebx
 * 00000001407840CF: jmp     short loc_1407840D7
 * 00000001407840D1: xor     dl, al
 * 00000001407840D3: shr     rax, 7
 * 00000001407840D7: test    rax, rax
 * 00000001407840DA: jnz     short loc_1407840D1
 * 00000001407840DC: mov     rcx, [rsp+78h]
 * 00000001407840E1: and     dl, 7Fh
 * 00000001407840E4: mov     [rcx], dl
 * 00000001407840E6: jmp     short loc_1407840F2
 * 00000001407840E8: mov     rcx, [rsp+78h]
 * 00000001407840ED: xor     ebx, ebx
 * 00000001407840EF: mov     byte ptr [rcx], 80h
 * 00000001407840F2: mov     r10d, dword ptr [rsp+1D70h+Src]
 * 00000001407840F7: mov     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 00000001407840FB: mov     rax, [rsp+78h]
 * 0000000140784100: mov     r8, [rbp+1C70h+var_1CE8]
 * 0000000140784104: add     r8, 0Ch
 * 0000000140784108: add     rax, r13
 * 000000014078410B: add     r15, 0Ch
 * 000000014078410F: mov     [rbp+1C70h+var_1CE8], r8
 * 0000000140784113: mov     [rsp+78h], rax
 * 0000000140784118: mov     [rbp+1C70h+var_1CA8], r15
 * 000000014078411C: cmp     r15, [rbp+1C70h+var_1CD8]
 * 0000000140784120: jz      short loc_140784126
 * 0000000140784122: mov     r14d, [r15+4]
 * 0000000140784126: cmp     r14d, ecx
 * 0000000140784129: jbe     loc_140783F91
 * 000000014078412F: jmp     short loc_140784135
 * 0000000140784131: mov     r15, [rbp+1C70h+var_1CA8]
 * 0000000140784135: test    r10d, r10d
 * 0000000140784138: jnz     loc_140784225
 * 000000014078413E: cmp     r12d, ecx
 * 0000000140784141: jz      loc_140784225
 * 0000000140784147: mov     rax, [rbp+1C70h+var_1CF0]
 * 000000014078414B: lea     rdx, [rbp+1C70h+var_CD0]
 * 0000000140784152: mov     r8d, ecx
 * 0000000140784155: mov     [rax+0Ch], r12d
 * 0000000140784159: mov     [rax+10h], ecx
 * 000000014078415C: lea     rcx, [rbp+1C70h+var_FE8]
 * 0000000140784163: mov     eax, [rax+0Ch]
 * 0000000140784166: mov     ebx, eax
 * 0000000140784168: sub     r8d, eax
 * 000000014078416B: add     rbx, [rsp+1D70h+var_1D20]
 * 0000000140784170: mov     r11d, r8d
 * 0000000140784173: add     r11, rbx
 * 0000000140784176: xor     eax, eax
 * 0000000140784178: mov     r10d, eax
 * 000000014078417B: mov     r9, [rdx]
 * 000000014078417E: mov     eax, [rcx]
 * 0000000140784180: add     rax, r9
 * 0000000140784183: cmp     rbx, rax
 * 0000000140784186: jnb     short loc_140784191
 * 0000000140784188: cmp     r11, r9
 * 000000014078418B: ja      loc_140784225
 * 0000000140784191: mov     eax, 4
 * 0000000140784196: add     r10d, r13d
 * 0000000140784199: add     rcx, rax
 * 000000014078419C: add     rdx, 8
 * 00000001407841A0: cmp     r10d, eax
 * 00000001407841A3: jb      short loc_14078417B
 * 00000001407841A5: mov     rax, [rbp+1C70h+var_1CE0]
 * 00000001407841A9: add     [rax+5E0h], r8d
 * 00000001407841B0: mov     ecx, [rax+5CCh]
 * 00000001407841B6: mov     rdx, [rax+5D0h]
 * 00000001407841BD: mov     rax, rbx
 * 00000001407841C0: cmp     rbx, r11
 * 00000001407841C3: jnb     short loc_1407841D1
 * 00000001407841C5: prefetchnta byte ptr [rax]
 * 00000001407841C8: add     rax, 40h ; '@'
 * 00000001407841CC: cmp     rax, r11
 * 00000001407841CF: jb      short loc_1407841C5
 * 00000001407841D1: cmp     r8d, 8
 * 00000001407841D5: jb      short loc_1407841F1
 * 00000001407841D7: mov     eax, r8d
 * 00000001407841DA: shr     rax, 3
 * 00000001407841DE: xor     rdx, [rbx]
 * 00000001407841E1: add     r8d, 0FFFFFFF8h
 * 00000001407841E5: rol     rdx, cl
 * 00000001407841E8: add     rbx, 8
 * 00000001407841EC: sub     rax, r13
 * 00000001407841EF: jnz     short loc_1407841DE
 * 00000001407841F1: test    r8d, r8d
 * 00000001407841F4: jz      short loc_140784208
 * 00000001407841F6: movzx   eax, byte ptr [rbx]
 * 00000001407841F9: add     rbx, r13
 * 00000001407841FC: xor     rdx, rax
 * 00000001407841FF: rol     rdx, cl
 * 0000000140784202: add     r8d, 0FFFFFFFFh
 * 0000000140784206: jnz     short loc_1407841F6
 * 0000000140784208: mov     rax, rdx
 * 000000014078420B: jmp     short loc_14078420F
 * 000000014078420D: xor     edx, eax
 * 000000014078420F: shr     rax, 1Fh
 * 0000000140784213: test    rax, rax
 * 0000000140784216: jnz     short loc_14078420D
 * 0000000140784218: mov     rbx, [rbp+1C70h+var_1CF0]
 * 000000014078421C: btr     edx, 1Fh
 * 0000000140784220: mov     [rbx+14h], edx
 * 0000000140784223: jmp     short loc_140784229
 * 0000000140784225: mov     rbx, [rbp+1C70h+var_1CF0]
 * 0000000140784229: mov     rdx, [rbp+1C70h+var_1CD8]
 * 000000014078422D: mov     r12, [rbp+1C70h+var_1CE8]
 * 0000000140784231: cmp     r12, rdx
 * 0000000140784234: jz      short loc_140784270
 * 0000000140784236: mov     eax, [r12]
 * 000000014078423A: mov     ecx, [r12+4]
 * 000000014078423F: cmp     eax, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140784243: jb      short loc_140784270
 * 0000000140784245: cmp     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140784249: ja      short loc_140784270
 * 000000014078424B: cmp     r15, rdx
 * 000000014078424E: jz      short loc_140784268
 * 0000000140784250: mov     rax, [rsp+78h]
 * 0000000140784255: mov     byte ptr [rax], 80h
 * 0000000140784258: add     rax, r13
 * 000000014078425B: add     r15, 0Ch
 * 000000014078425F: mov     [rsp+78h], rax
 * 0000000140784264: mov     [rbp+1C70h+var_1CA8], r15
 * 0000000140784268: add     r12, 0Ch
 * 000000014078426C: mov     [rbp+1C70h+var_1CE8], r12
 * 0000000140784270: mov     r14, [rbp+1C70h+var_1CB0]
 * 0000000140784274: add     rbx, 18h
 * 0000000140784278: mov     r11, [rbp+1C70h+var_1CE0]
 * 000000014078427C: add     r14, 28h ; '('
 * 0000000140784280: mov     [rbp+1C70h+var_1CF0], rbx
 * 0000000140784284: mov     [rbp+1C70h+var_1CB0], r14
 * 0000000140784288: cmp     rbx, [rbp+1C70h+var_1CC0]
 * 000000014078428C: jnz     loc_140783C27
 * 0000000140784292: xor     eax, eax
 * 0000000140784294: mov     [rbp+1C70h+var_15F0], rdi
 * 000000014078429B: mov     ecx, eax
 * 000000014078429D: mov     r14, rdi
 * 00000001407842A0: jmp     loc_140782F49
 * 00000001407842A5: mov     ecx, 0C000009Ah
 * 00000001407842AA: jmp     short loc_1407842B1
 * 00000001407842AC: mov     ecx, 0C000007Bh
 * 00000001407842B1: xor     eax, eax
 * 00000001407842B3: jmp     loc_140782F7D
 * 00000001407842B8: mov     rcx, rbx
 * 00000001407842BB: call    qword ptr [rdi+0E8h]
 * 00000001407842C1: jmp     short loc_1407842CC
 * 00000001407842C3: mov     rcx, rbx
 * 00000001407842C6: call    qword ptr [rdi+348h]
 * 00000001407842CC: mov     ebx, dword ptr [rsp+1D70h+var_1D08]
 * 00000001407842D0: mov     [rdi+67Ch], r14d
 * 00000001407842D7: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 00000001407842DE: mov     r11d, 20h ; ' '
 * 00000001407842E4: mov     r9d, dword ptr [rsp+1D70h+Src]
 * 00000001407842E9: jmp     short loc_1407842F5
 * 00000001407842EB: mov     rdi, r14
 * 00000001407842EE: mov     [r14+59Ch], eax
 * 00000001407842F5: add     [rdi+5C4h], r13d
 * 00000001407842FC: add     rbx, rdi
 * 00000001407842FF: mov     ecx, 30h ; '0'
 * 0000000140784304: mov     [rbp+1C70h+var_1478], rbx
 * 000000014078430B: mov     rax, rbx
 * 000000014078430E: xor     r8d, r8d
 * 0000000140784311: lea     edx, [rcx-2Ah]
 * 0000000140784314: mov     [rax], r8
 * 0000000140784317: add     ecx, 0FFFFFFF8h
 * 000000014078431A: add     rax, 8
 * 000000014078431E: sub     rdx, r13
 * 0000000140784321: jnz     short loc_140784314
 * 0000000140784323: test    ecx, ecx
 * 0000000140784325: jz      short loc_140784332
 * 0000000140784327: mov     [rax], r8b
 * 000000014078432A: add     rax, r13
 * 000000014078432D: add     ecx, 0FFFFFFFFh
 * 0000000140784330: jnz     short loc_140784327
 * 0000000140784332: mov     [rbx], r9d
 * 0000000140784335: mov     [rbx+8], r15
 * 0000000140784339: cmp     r9d, r11d
 * 000000014078433C: jnz     short loc_14078435B
 * 000000014078433E: test    r12d, r12d
 * 0000000140784341: jz      short loc_14078435B
 * 0000000140784343: lea     r9, [rbx+18h]
 * 0000000140784347: mov     r8d, r12d
 * 000000014078434A: mov     rdx, r15
 * 000000014078434D: mov     rcx, rdi
 * 0000000140784350: call    sub_1401588B8
 * 0000000140784355: mov     r11d, 20h ; ' '
 * 000000014078435B: mov     [rbx+10h], r12d
 * 000000014078435F: mov     rax, r15
 * 0000000140784362: add     [rdi+5E0h], r12d
 * 0000000140784369: mov     r10d, [rdi+5CCh]
 * 0000000140784370: mov     rdx, [rdi+5D0h]
 * 0000000140784377: mov     ecx, r12d
 * 000000014078437A: add     rcx, r15
 * 000000014078437D: cmp     r15, rcx
 * 0000000140784380: jnb     short loc_14078438E
 * 0000000140784382: prefetchnta byte ptr [rax]
 * 0000000140784385: add     rax, 40h ; '@'
 * 0000000140784389: cmp     rax, rcx
 * 000000014078438C: jb      short loc_140784382
 * 000000014078438E: mov     r8d, r12d
 * 0000000140784391: cmp     r12d, 8
 * 0000000140784395: jb      short loc_1407843B4
 * 0000000140784397: mov     r9d, r12d
 * 000000014078439A: shr     r9, 3
 * 000000014078439E: xor     rdx, [r15]
 * 00000001407843A1: mov     ecx, r10d
 * 00000001407843A4: rol     rdx, cl
 * 00000001407843A7: add     r15, 8
 * 00000001407843AB: add     r8d, 0FFFFFFF8h
 * 00000001407843AF: sub     r9, r13
 * 00000001407843B2: jnz     short loc_14078439E
 * 00000001407843B4: test    r8d, r8d
 * 00000001407843B7: jz      short loc_1407843CF
 * 00000001407843B9: movzx   eax, byte ptr [r15]
 * 00000001407843BD: mov     ecx, r10d
 * 00000001407843C0: xor     rdx, rax
 * 00000001407843C3: add     r15, r13
 * 00000001407843C6: rol     rdx, cl
 * 00000001407843C9: add     r8d, 0FFFFFFFFh
 * 00000001407843CD: jnz     short loc_1407843B9
 * 00000001407843CF: mov     rax, rdx
 * 00000001407843D2: jmp     short loc_1407843D6
 * 00000001407843D4: xor     edx, eax
 * 00000001407843D6: shr     rax, 1Fh
 * 00000001407843DA: test    rax, rax
 * 00000001407843DD: jnz     short loc_1407843D4
 * 00000001407843DF: btr     edx, 1Fh
 * 00000001407843E3: mov     [rbp+1C70h+var_15F0], rdi
 * 00000001407843EA: mov     [rbx+14h], edx
 * 00000001407843ED: lea     rax, KeServiceDescriptorTable
 * 00000001407843F4: add     [rdi+5E0h], r12d
 * 00000001407843FB: mov     r15d, 4
 * 0000000140784401: mov     r14d, [rdi+59Ch]
 * 0000000140784408: mov     r8d, [rdi+67Ch]
 * 000000014078440F: mov     [rbp+1C70h+var_C90], rax
 * 0000000140784416: lea     rax, xmmword_1403AA7E0
 * 000000014078441D: mov     [rbp+1C70h+var_C88], rax
 * 0000000140784424: lea     rax, KeServiceDescriptorTableShadow
 * 000000014078442B: mov     [rbp+1C70h+var_C80], rax
 * 0000000140784432: lea     rax, KeServiceDescriptorTableFilter
 * 0000000140784439: mov     [rbp+1C70h+var_C78], rax
 * 0000000140784440: xor     eax, eax
 * 0000000140784442: cmp     dword ptr [rdi+5F0h], 7
 * 0000000140784449: mov     [rbp+1C70h+var_FD8], r11d
 * 0000000140784450: cmovz   eax, r11d
 * 0000000140784454: mov     [rbp+1C70h+var_FD4], r11d
 * 000000014078445B: mov     dword ptr [rsp+1D70h+var_1D08], eax
 * 000000014078445F: lea     eax, [r14+0C0h]
 * 0000000140784466: mov     [rbp+1C70h+var_FD0], r11d
 * 000000014078446D: mov     [rbp+1C70h+var_FCC], r11d
 * 0000000140784474: mov     dword ptr [rsp+1D70h+Src], r15d
 * 0000000140784479: cmp     eax, [rdi+75Ch]
 * 000000014078447F: jbe     loc_140784551
 * 0000000140784485: mov     edx, eax
 * 0000000140784487: mov     rcx, rdi
 * 000000014078448A: call    sub_140251E08
 * 000000014078448F: mov     rbx, rax
 * 0000000140784492: xor     eax, eax
 * 0000000140784494: test    rbx, rbx
 * 0000000140784497: jz      loc_14077C9F7
 * 000000014078449D: mov     edx, [rdi+6D8h]
 * 00000001407844A3: test    r15b, dl
 * 00000001407844A6: jnz     loc_140784548
 * 00000001407844AC: mov     ecx, [rdi+59Ch]
 * 00000001407844B2: and     edx, 20000000h
 * 00000001407844B8: mov     r9, [rdi+580h]
 * 00000001407844BF: neg     edx
 * 00000001407844C1: sbb     r8d, r8d
 * 00000001407844C4: and     r8d, [rdi+67Ch]
 * 00000001407844CB: cmp     ecx, 8
 * 00000001407844CE: jb      short loc_1407844E7
 * 00000001407844D0: mov     eax, ecx
 * 00000001407844D2: shr     rax, 3
 * 00000001407844D6: xor     edx, edx
 * 00000001407844D8: mov     [rdi], rdx
 * 00000001407844DB: add     ecx, 0FFFFFFF8h
 * 00000001407844DE: add     rdi, 8
 * 00000001407844E2: sub     rax, r13
 * 00000001407844E5: jnz     short loc_1407844D8
 * 00000001407844E7: xor     eax, eax
 * 00000001407844E9: test    ecx, ecx
 * 00000001407844EB: jz      short loc_1407844F7
 * 00000001407844ED: mov     [rdi], al
 * 00000001407844EF: add     rdi, r13
 * 00000001407844F2: add     ecx, 0FFFFFFFFh
 * 00000001407844F5: jnz     short loc_1407844ED
 * 00000001407844F7: mov     edi, [rbx+67Ch]
 * 00000001407844FD: mov     [rbx+67Ch], r8d
 * 0000000140784504: cmp     r8d, 3
 * 0000000140784508: jz      short loc_140784539
 * 000000014078450A: test    dword ptr [rbx+6D8h], 10000000h
 * 0000000140784514: mov     rcx, rax
 * 0000000140784517: cmovz   ecx, r8d
 * 000000014078451B: test    ecx, ecx
 * 000000014078451D: jz      short loc_14078452E
 * 000000014078451F: lea     rcx, [r9-8]
 * 0000000140784523: mov     rdx, [rcx]
 * 0000000140784526: call    qword ptr [rbx+210h]
 * 000000014078452C: jmp     short loc_140784542
 * 000000014078452E: mov     rcx, r9
 * 0000000140784531: call    qword ptr [rbx+0E8h]
 * 0000000140784537: jmp     short loc_140784542
 * 0000000140784539: mov     rcx, r9
 * 000000014078453C: call    qword ptr [rbx+348h]
 * 0000000140784542: mov     [rbx+67Ch], edi
 * 0000000140784548: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 000000014078454F: jmp     short loc_14078455A
 * 0000000140784551: mov     rbx, rdi
 * 0000000140784554: mov     [rdi+59Ch], eax
 * 000000014078455A: add     [rbx+5C4h], r15d
 * 0000000140784561: lea     rdi, [rbx+r14]
 * 0000000140784565: mov     esi, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140784569: lea     r11, [rbp+1C70h+var_FD8]
 * 0000000140784570: mov     [rbp+1C70h+var_1470], rdi
 * 0000000140784577: lea     r12, [rbp+1C70h+var_C90]
 * 000000014078457E: mov     [rbp+1C70h+var_1468], rdi
 * 0000000140784585: xor     r8d, r8d
 * 0000000140784588: mov     [rbp+1C70h+var_1CD0], r11
 * 000000014078458C: mov     [rsp+1D70h+var_1D20], r15
 * 0000000140784591: mov     r15d, [r11]
 * 0000000140784594: mov     ecx, 30h ; '0'
 * 0000000140784599: mov     r14, [r12]
 * 000000014078459D: mov     rax, rdi
 * 00000001407845A0: lea     edx, [rcx-2Ah]
 * 00000001407845A3: mov     [rax], r8
 * 00000001407845A6: add     ecx, 0FFFFFFF8h
 * 00000001407845A9: add     rax, 8
 * 00000001407845AD: sub     rdx, r13
 * 00000001407845B0: jnz     short loc_1407845A3
 * 00000001407845B2: test    ecx, ecx
 * 00000001407845B4: jz      short loc_1407845C1
 * 00000001407845B6: mov     [rax], r8b
 * 00000001407845B9: add     rax, r13
 * 00000001407845BC: add     ecx, 0FFFFFFFFh
 * 00000001407845BF: jnz     short loc_1407845B6
 * 00000001407845C1: mov     eax, 20h ; ' '
 * 00000001407845C6: mov     [rdi], esi
 * 00000001407845C8: mov     [rdi+8], r14
 * 00000001407845CC: cmp     esi, eax
 * 00000001407845CE: jnz     short loc_1407845EB
 * 00000001407845D0: test    r15d, r15d
 * 00000001407845D3: jz      short loc_1407845EB
 * 00000001407845D5: lea     r9, [rdi+18h]
 * 00000001407845D9: mov     r8d, r15d
 * 00000001407845DC: mov     rdx, r14
 * 00000001407845DF: mov     rcx, rbx
 * 00000001407845E2: call    sub_1401588B8
 * 00000001407845E7: mov     r11, [rbp+1C70h+var_1CD0]
 * 00000001407845EB: mov     [rdi+10h], r15d
 * 00000001407845EF: lea     rcx, [r14+r15]
 * 00000001407845F3: add     [rbx+5E0h], r15d
 * 00000001407845FA: mov     rax, r14
 * 00000001407845FD: mov     r10d, [rbx+5CCh]
 * 0000000140784604: mov     rdx, [rbx+5D0h]
 * 000000014078460B: cmp     r14, rcx
 * 000000014078460E: jnb     short loc_14078461C
 * 0000000140784610: prefetchnta byte ptr [rax]
 * 0000000140784613: add     rax, 40h ; '@'
 * 0000000140784617: cmp     rax, rcx
 * 000000014078461A: jb      short loc_140784610
 * 000000014078461C: mov     r8d, r15d
 * 000000014078461F: cmp     r15d, 8
 * 0000000140784623: jb      short loc_140784642
 * 0000000140784625: mov     r9, r15
 * 0000000140784628: shr     r9, 3
 * 000000014078462C: xor     rdx, [r14]
 * 000000014078462F: mov     ecx, r10d
 * 0000000140784632: rol     rdx, cl
 * 0000000140784635: add     r14, 8
 * 0000000140784639: add     r8d, 0FFFFFFF8h
 * 000000014078463D: sub     r9, r13
 * 0000000140784640: jnz     short loc_14078462C
 * 0000000140784642: test    r8d, r8d
 * 0000000140784645: jz      short loc_14078465D
 * 0000000140784647: movzx   eax, byte ptr [r14]
 * 000000014078464B: mov     ecx, r10d
 * 000000014078464E: xor     rdx, rax
 * 0000000140784651: add     r14, r13
 * 0000000140784654: rol     rdx, cl
 * 0000000140784657: add     r8d, 0FFFFFFFFh
 * 000000014078465B: jnz     short loc_140784647
 * 000000014078465D: mov     rax, rdx
 * 0000000140784660: shr     rax, 1Fh
 * 0000000140784664: xor     r8d, r8d
 * 0000000140784667: jmp     short loc_14078466F
 * 0000000140784669: xor     edx, eax
 * 000000014078466B: shr     rax, 1Fh
 * 000000014078466F: test    rax, rax
 * 0000000140784672: jnz     short loc_140784669
 * 0000000140784674: btr     edx, 1Fh
 * 0000000140784678: add     r11, 4
 * 000000014078467C: mov     [rdi+14h], edx
 * 000000014078467F: add     r12, 8
 * 0000000140784683: add     [rbx+5E0h], r15d
 * 000000014078468A: mov     rdi, [rbp+1C70h+var_1470]
 * 0000000140784691: add     rdi, 30h ; '0'
 * 0000000140784695: mov     [rbp+1C70h+var_1CD0], r11
 * 0000000140784699: sub     [rsp+1D70h+var_1D20], r13
 * 000000014078469E: mov     [rbp+1C70h+var_1470], rdi
 * 00000001407846A5: jnz     loc_140784591
 * 00000001407846AB: mov     eax, 20h ; ' '
 * 00000001407846B0: cmp     esi, eax
 * 00000001407846B2: mov     rsi, 0FFFFFFFFB8797400h
 * 00000001407846B9: jnz     short loc_1407846E7
 * 00000001407846BB: mov     rax, [rbp+1C70h+var_1468]
 * 00000001407846C2: or      r12d, 0FFFFFFFFh
 * 00000001407846C6: mov     ecx, dword ptr [rsp+1D70h+Src]
 * 00000001407846CA: or      [rax+28h], r13d
 * 00000001407846CE: mov     rax, [rbp+1C70h+var_1468]
 * 00000001407846D5: add     rax, 30h ; '0'
 * 00000001407846D9: mov     [rbp+1C70h+var_1468], rax
 * 00000001407846E0: add     ecx, r12d
 * 00000001407846E3: jnz     short loc_1407846CA
 * 00000001407846E5: jmp     short loc_1407846EB
 * 00000001407846E7: or      r12d, 0FFFFFFFFh
 * 00000001407846EB: mov     r15, [rsp+1D70h+var_1D00]
 * 00000001407846F0: xor     eax, eax
 * 00000001407846F2: mov     r14d, eax
 * 00000001407846F5: mov     [rbp+1C70h+var_15F0], rbx
 * 00000001407846FC: mov     rax, [r15]
 * 00000001407846FF: mov     [rbp+1C70h+var_1CD0], rax
 * 0000000140784703: xor     eax, eax
 * 0000000140784705: test    dword ptr [rbx+6D8h], 40000000h
 * 000000014078470F: jnz     loc_1407849EB
 * 0000000140784715: mov     edi, eax
 * 0000000140784717: cmp     [r15+10h], eax
 * 000000014078471B: jbe     loc_1407849EB
 * 0000000140784721: mov     rsi, [rbp+1C70h+var_1CD0]
 * 0000000140784725: mov     eax, edi
 * 0000000140784727: lea     rdx, [rbp+1C70h+var_1460]
 * 000000014078472E: xor     r8d, r8d
 * 0000000140784731: movsxd  rcx, dword ptr [rsi+rax*4]
 * 0000000140784735: sar     rcx, 4
 * 0000000140784739: add     rcx, rsi
 * 000000014078473C: call    qword ptr [rbx+240h]
 * 0000000140784742: test    rax, rax
 * 0000000140784745: jnz     short loc_14078474A
 * 0000000140784747: add     r14d, r13d
 * 000000014078474A: add     edi, r13d
 * 000000014078474D: cmp     edi, [r15+10h]
 * 0000000140784751: jb      short loc_140784725
 * 0000000140784753: xor     eax, eax
 * 0000000140784755: mov     dword ptr [rsp+1D70h+Src], r14d
 * 000000014078475A: mov     rsi, 0FFFFFFFFB8797400h
 * 0000000140784761: test    r14d, r14d
 * 0000000140784764: jz      loc_1407849EB
 * 000000014078476A: mov     r15d, [rbx+59Ch]
 * 0000000140784771: mov     ecx, r14d
 * 0000000140784774: mov     r8d, [rbx+67Ch]
 * 000000014078477B: shl     ecx, 4
 * 000000014078477E: add     ecx, 30h ; '0'
 * 0000000140784781: add     ecx, r15d
 * 0000000140784784: cmp     ecx, [rbx+75Ch]
 * 000000014078478A: jbe     loc_140784864
 * 0000000140784790: mov     edx, ecx
 * 0000000140784792: mov     rcx, rbx
 * 0000000140784795: call    sub_140251E08
 * 000000014078479A: mov     rdi, rax
 * 000000014078479D: test    rax, rax
 * 00000001407847A0: jz      loc_14078485A
 * 00000001407847A6: mov     edx, [rbx+6D8h]
 * 00000001407847AC: test    dl, 4
 * 00000001407847AF: jnz     loc_140784851
 * 00000001407847B5: mov     ecx, [rbx+59Ch]
 * 00000001407847BB: and     edx, 20000000h
 * 00000001407847C1: mov     r9, [rbx+580h]
 * 00000001407847C8: neg     edx
 * 00000001407847CA: sbb     r8d, r8d
 * 00000001407847CD: and     r8d, [rbx+67Ch]
 * 00000001407847D4: cmp     ecx, 8
 * 00000001407847D7: jb      short loc_1407847F0
 * 00000001407847D9: mov     eax, ecx
 * 00000001407847DB: shr     rax, 3
 * 00000001407847DF: xor     edx, edx
 * 00000001407847E1: mov     [rbx], rdx
 * 00000001407847E4: add     ecx, 0FFFFFFF8h
 * 00000001407847E7: add     rbx, 8
 * 00000001407847EB: sub     rax, r13
 * 00000001407847EE: jnz     short loc_1407847E1
 * 00000001407847F0: xor     eax, eax
 * 00000001407847F2: test    ecx, ecx
 * 00000001407847F4: jz      short loc_140784800
 * 00000001407847F6: mov     [rbx], al
 * 00000001407847F8: add     rbx, r13
 * 00000001407847FB: add     ecx, r12d
 * 00000001407847FE: jnz     short loc_1407847F6
 * 0000000140784800: mov     ebx, [rdi+67Ch]
 * 0000000140784806: mov     [rdi+67Ch], r8d
 * 000000014078480D: cmp     r8d, 3
 * 0000000140784811: jz      short loc_140784842
 * 0000000140784813: test    dword ptr [rdi+6D8h], 10000000h
 * 000000014078481D: mov     rcx, rax
 * 0000000140784820: cmovz   ecx, r8d
 * 0000000140784824: test    ecx, ecx
 * 0000000140784826: jz      short loc_140784837
 * 0000000140784828: lea     rcx, [r9-8]
 * 000000014078482C: mov     rdx, [rcx]
 * 000000014078482F: call    qword ptr [rdi+210h]
 * 0000000140784835: jmp     short loc_14078484B
 * 0000000140784837: mov     rcx, r9
 * 000000014078483A: call    qword ptr [rdi+0E8h]
 * 0000000140784840: jmp     short loc_14078484B
 * 0000000140784842: mov     rcx, r9
 * 0000000140784845: call    qword ptr [rdi+348h]
 * 000000014078484B: mov     [rdi+67Ch], ebx
 * 0000000140784851: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 0000000140784858: jmp     short loc_14078486D
 * 000000014078485A: mov     eax, 0C000022Dh
 * 000000014078485F: jmp     loc_1407849EB
 * 0000000140784864: mov     rdi, rbx
 * 0000000140784867: mov     [rbx+59Ch], ecx
 * 000000014078486D: add     [rdi+5C4h], r13d
 * 0000000140784874: lea     rcx, [rdi+r15]
 * 0000000140784878: mov     edx, 30h ; '0'
 * 000000014078487D: mov     [rbp+1C70h+var_1458], rcx
 * 0000000140784884: mov     rax, rcx
 * 0000000140784887: xor     r8d, r8d
 * 000000014078488A: lea     ebx, [rdx-2Ah]
 * 000000014078488D: mov     [rax], r8
 * 0000000140784890: add     edx, 0FFFFFFF8h
 * 0000000140784893: add     rax, 8
 * 0000000140784897: sub     rbx, r13
 * 000000014078489A: jnz     short loc_14078488D
 * 000000014078489C: test    edx, edx
 * 000000014078489E: jz      short loc_1407848AB
 * 00000001407848A0: mov     [rax], r8b
 * 00000001407848A3: add     rax, r13
 * 00000001407848A6: add     edx, r12d
 * 00000001407848A9: jnz     short loc_1407848A0
 * 00000001407848AB: xor     eax, eax
 * 00000001407848AD: mov     dword ptr [rcx], 0Ah
 * 00000001407848B3: mov     [rcx+8], rax
 * 00000001407848B7: mov     [rcx+10h], eax
 * 00000001407848BA: mov     rdx, [rdi+5D0h]
 * 00000001407848C1: mov     rax, rdx
 * 00000001407848C4: jmp     short loc_1407848C8
 * 00000001407848C6: xor     edx, eax
 * 00000001407848C8: shr     rax, 1Fh
 * 00000001407848CC: test    rax, rax
 * 00000001407848CF: jnz     short loc_1407848C6
 * 00000001407848D1: btr     edx, 1Fh
 * 00000001407848D5: mov     rbx, rdi
 * 00000001407848D8: mov     [rcx+14h], edx
 * 00000001407848DB: mov     r12d, r8d
 * 00000001407848DE: mov     rax, [rbp+1C70h+var_1458]
 * 00000001407848E5: mov     [rbp+1C70h+var_1450], rax
 * 00000001407848EC: mov     [rax+18h], r8d
 * 00000001407848F0: mov     rax, [rbp+1C70h+var_1450]
 * 00000001407848F7: mov     [rax+1Ch], r14d
 * 00000001407848FB: mov     rax, [rsp+1D70h+var_1D00]
 * 0000000140784900: mov     r15, [rbp+1C70h+var_1450]
 * 0000000140784907: add     r15, 30h ; '0'
 * 000000014078490B: cmp     [rax+10h], r8d
 * 000000014078490F: jbe     loc_1407849E0
 * 0000000140784915: mov     rcx, [rbp+1C70h+var_1CD0]
 * 0000000140784919: lea     rdx, [rbp+1C70h+var_1460]
 * 0000000140784920: mov     eax, r12d
 * 0000000140784923: xor     r8d, r8d
 * 0000000140784926: movsxd  r14, dword ptr [rcx+rax*4]
 * 000000014078492A: sar     r14, 4
 * 000000014078492E: add     r14, rcx
 * 0000000140784931: mov     rcx, r14
 * 0000000140784934: call    qword ptr [rdi+240h]
 * 000000014078493A: test    rax, rax
 * 000000014078493D: jnz     loc_1407849C9
 * 0000000140784943: lea     r11d, [rax+4]
 * 0000000140784947: mov     r8, r14
 * 000000014078494A: add     [rdi+5E0h], r11d
 * 0000000140784951: lea     rcx, [r14+4]
 * 0000000140784955: mov     r10d, [rdi+5CCh]
 * 000000014078495C: mov     rax, r14
 * 000000014078495F: mov     rdx, [rdi+5D0h]
 * 0000000140784966: cmp     r14, rcx
 * 0000000140784969: jnb     short loc_140784977
 * 000000014078496B: prefetchnta byte ptr [rax]
 * 000000014078496E: add     rax, 40h ; '@'
 * 0000000140784972: cmp     rax, rcx
 * 0000000140784975: jb      short loc_14078496B
 * 0000000140784977: mov     r9d, r11d
 * 000000014078497A: movzx   eax, byte ptr [r8]
 * 000000014078497E: mov     ecx, r10d
 * 0000000140784981: xor     rdx, rax
 * 0000000140784984: add     r8, r13
 * 0000000140784987: rol     rdx, cl
 * 000000014078498A: or      ecx, 0FFFFFFFFh
 * 000000014078498D: add     r9d, ecx
 * 0000000140784990: jnz     short loc_14078497A
 * 0000000140784992: mov     rax, rdx
 * 0000000140784995: jmp     short loc_140784999
 * 0000000140784997: xor     edx, eax
 * 0000000140784999: shr     rax, 1Fh
 * 000000014078499D: test    rax, rax
 * 00000001407849A0: jnz     short loc_140784997
 * 00000001407849A2: xor     edx, [r15]
 * 00000001407849A5: btr     edx, 1Fh
 * 00000001407849A9: xor     [r15], edx
 * 00000001407849AC: mov     [r15+4], r11d
 * 00000001407849B0: mov     [r15+8], r14
 * 00000001407849B4: add     r15, 10h
 * 00000001407849B8: mov     r14d, dword ptr [rsp+1D70h+Src]
 * 00000001407849BD: add     r14d, ecx
 * 00000001407849C0: mov     dword ptr [rsp+1D70h+Src], r14d
 * 00000001407849C5: jz      short loc_1407849E9
 * 00000001407849C7: jmp     short loc_1407849CE
 * 00000001407849C9: mov     r14d, dword ptr [rsp+1D70h+Src]
 * 00000001407849CE: mov     rax, [rsp+1D70h+var_1D00]
 * 00000001407849D3: add     r12d, r13d
 * 00000001407849D6: cmp     r12d, [rax+10h]
 * 00000001407849DA: jb      loc_140784915
 * 00000001407849E0: test    r14d, r14d
 * 00000001407849E3: jnz     loc_14077C9F7
 * 00000001407849E9: xor     eax, eax
 * 00000001407849EB: mov     [rbp+1C70h+var_15F0], rbx
 * 00000001407849F2: test    eax, eax
 * 00000001407849F4: js      loc_14077C9F7
 * 00000001407849FA: cli
 * 00000001407849FB: xor     eax, eax
 * 00000001407849FD: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140784A03: jnz     short loc_140784A07
 * 0000000140784A05: jmp     short loc_140784A05
 * 0000000140784A07: sti
 * 0000000140784A08: cli
 * 0000000140784A09: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140784A0F: jnz     short loc_140784A13
 * 0000000140784A11: jmp     short loc_140784A11
 * 0000000140784A13: sti
 * 0000000140784A14: mov     r14d, [rbx+59Ch]
 * 0000000140784A1B: mov     r8d, [rbx+67Ch]
 * 0000000140784A22: lea     eax, [r14+30h]
 * 0000000140784A26: cmp     eax, [rbx+75Ch]
 * 0000000140784A2C: jbe     loc_140784AFE
 * 0000000140784A32: mov     edx, eax
 * 0000000140784A34: mov     rcx, rbx
 * 0000000140784A37: call    sub_140251E08
 * 0000000140784A3C: mov     rdi, rax
 * 0000000140784A3F: xor     eax, eax
 * 0000000140784A41: test    rdi, rdi
 * 0000000140784A44: jz      loc_14077C9F7
 * 0000000140784A4A: mov     edx, [rbx+6D8h]
 * 0000000140784A50: test    dl, 4
 * 0000000140784A53: jnz     loc_140784AF5
 * 0000000140784A59: mov     ecx, [rbx+59Ch]
 * 0000000140784A5F: and     edx, 20000000h
 * 0000000140784A65: mov     r9, [rbx+580h]
 * 0000000140784A6C: neg     edx
 * 0000000140784A6E: sbb     r8d, r8d
 * 0000000140784A71: and     r8d, [rbx+67Ch]
 * 0000000140784A78: cmp     ecx, 8
 * 0000000140784A7B: jb      short loc_140784A94
 * 0000000140784A7D: mov     eax, ecx
 * 0000000140784A7F: shr     rax, 3
 * 0000000140784A83: xor     edx, edx
 * 0000000140784A85: mov     [rbx], rdx
 * 0000000140784A88: add     ecx, 0FFFFFFF8h
 * 0000000140784A8B: add     rbx, 8
 * 0000000140784A8F: sub     rax, r13
 * 0000000140784A92: jnz     short loc_140784A85
 * 0000000140784A94: xor     eax, eax
 * 0000000140784A96: test    ecx, ecx
 * 0000000140784A98: jz      short loc_140784AA4
 * 0000000140784A9A: mov     [rbx], al
 * 0000000140784A9C: add     rbx, r13
 * 0000000140784A9F: add     ecx, 0FFFFFFFFh
 * 0000000140784AA2: jnz     short loc_140784A9A
 * 0000000140784AA4: mov     ebx, [rdi+67Ch]
 * 0000000140784AAA: mov     [rdi+67Ch], r8d
 * 0000000140784AB1: cmp     r8d, 3
 * 0000000140784AB5: jz      short loc_140784AE6
 * 0000000140784AB7: test    dword ptr [rdi+6D8h], 10000000h
 * 0000000140784AC1: mov     rcx, rax
 * 0000000140784AC4: cmovz   ecx, r8d
 * 0000000140784AC8: test    ecx, ecx
 * 0000000140784ACA: jz      short loc_140784ADB
 * 0000000140784ACC: lea     rcx, [r9-8]
 * 0000000140784AD0: mov     rdx, [rcx]
 * 0000000140784AD3: call    qword ptr [rdi+210h]
 * 0000000140784AD9: jmp     short loc_140784AEF
 * 0000000140784ADB: mov     rcx, r9
 * 0000000140784ADE: call    qword ptr [rdi+0E8h]
 * 0000000140784AE4: jmp     short loc_140784AEF
 * 0000000140784AE6: mov     rcx, r9
 * 0000000140784AE9: call    qword ptr [rdi+348h]
 * 0000000140784AEF: mov     [rdi+67Ch], ebx
 * 0000000140784AF5: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 0000000140784AFC: jmp     short loc_140784B07
 * 0000000140784AFE: mov     rdi, rbx
 * 0000000140784B01: mov     [rbx+59Ch], eax
 * 0000000140784B07: add     [rdi+5C4h], r13d
 * 0000000140784B0E: lea     r8, [rdi+r14]
 * 0000000140784B12: mov     ecx, 30h ; '0'
 * 0000000140784B17: mov     [rbp+1C70h+var_1448], r8
 * 0000000140784B1E: mov     rax, r8
 * 0000000140784B21: xor     ebx, ebx
 * 0000000140784B23: mov     r11d, 0FFFFFFF8h
 * 0000000140784B29: lea     edx, [rcx-2Ah]
 * 0000000140784B2C: mov     [rax], rbx
 * 0000000140784B2F: add     ecx, r11d
 * 0000000140784B32: add     rax, 8
 * 0000000140784B36: sub     rdx, r13
 * 0000000140784B39: jnz     short loc_140784B2C
 * 0000000140784B3B: test    ecx, ecx
 * 0000000140784B3D: jz      short loc_140784B49
 * 0000000140784B3F: mov     [rax], bl
 * 0000000140784B41: add     rax, r13
 * 0000000140784B44: add     ecx, 0FFFFFFFFh
 * 0000000140784B47: jnz     short loc_140784B3F
 * 0000000140784B49: mov     dword ptr [r8], 24h ; '$'
 * 0000000140784B50: lea     rax, xmmword_1402F6FB0
 * 0000000140784B57: mov     [r8+8], rax
 * 0000000140784B5B: mov     rbx, rax
 * 0000000140784B5E: mov     dword ptr [r8+10h], 18h
 * 0000000140784B66: add     dword ptr [rdi+5E0h], 18h
 * 0000000140784B6D: mov     ecx, [rdi+5CCh]
 * 0000000140784B73: mov     rdx, [rdi+5D0h]
 * 0000000140784B7A: prefetchnta byte ptr cs:xmmword_1402F6FB0
 * 0000000140784B81: mov     r9d, 18h
 * 0000000140784B87: lea     r10d, [r9-15h]
 * 0000000140784B8B: xor     rdx, [rbx]
 * 0000000140784B8E: add     r9d, r11d
 * 0000000140784B91: rol     rdx, cl
 * 0000000140784B94: add     rbx, 8
 * 0000000140784B98: sub     r10, r13
 * 0000000140784B9B: jnz     short loc_140784B8B
 * 0000000140784B9D: test    r9d, r9d
 * 0000000140784BA0: jz      short loc_140784BB4
 * 0000000140784BA2: movzx   eax, byte ptr [rbx]
 * 0000000140784BA5: add     rbx, r13
 * 0000000140784BA8: xor     rdx, rax
 * 0000000140784BAB: rol     rdx, cl
 * 0000000140784BAE: add     r9d, 0FFFFFFFFh
 * 0000000140784BB2: jnz     short loc_140784BA2
 * 0000000140784BB4: mov     rax, rdx
 * 0000000140784BB7: jmp     short loc_140784BBB
 * 0000000140784BB9: xor     edx, eax
 * 0000000140784BBB: shr     rax, 1Fh
 * 0000000140784BBF: test    rax, rax
 * 0000000140784BC2: jnz     short loc_140784BB9
 * 0000000140784BC4: btr     edx, 1Fh
 * 0000000140784BC8: mov     [r8+14h], edx
 * 0000000140784BCC: mov     rax, [rbp+1C70h+var_1448]
 * 0000000140784BD3: mov     [rbp+1C70h+var_1440], rax
 * 0000000140784BDA: add     dword ptr [rdi+5E0h], 18h
 * 0000000140784BE1: mov     rbx, [rdi+470h]
 * 0000000140784BE8: mov     r14, [rbp+1C70h+var_1440]
 * 0000000140784BEF: add     rbx, 10h
 * 0000000140784BF3: mov     r15, cs:PsHalImageBase
 * 0000000140784BFA: mov     rcx, [rdi+488h]
 * 0000000140784C01: mov     r12, cr8
 * 0000000140784C05: mov     eax, 0Fh
 * 0000000140784C0A: mov     cr8, rax
 * 0000000140784C0E: call    qword ptr [rdi+138h]
 * 0000000140784C14: mov     rax, [rdi+470h]
 * 0000000140784C1B: mov     ecx, [rax]
 * 0000000140784C1D: lea     rax, [rcx+rcx*2]
 * 0000000140784C21: lea     rcx, [rbx+rax*8]
 * 0000000140784C25: cmp     [rbx+8], r15
 * 0000000140784C29: jz      short loc_140784C36
 * 0000000140784C2B: add     rbx, 18h
 * 0000000140784C2F: cmp     rbx, rcx
 * 0000000140784C32: jnb     short loc_140784C4E
 * 0000000140784C34: jmp     short loc_140784C25
 * 0000000140784C36: movups  xmm0, xmmword ptr [rbx]
 * 0000000140784C39: xor     eax, eax
 * 0000000140784C3B: mov     [rbp+1C70h+var_1CB4], eax
 * 0000000140784C3E: movups  xmmword ptr [r14+18h], xmm0
 * 0000000140784C43: movsd   xmm1, qword ptr [rbx+10h]
 * 0000000140784C48: movsd   qword ptr [r14+28h], xmm1
 * 0000000140784C4E: mov     rcx, [rdi+488h]
 * 0000000140784C55: call    qword ptr [rdi+178h]
 * 0000000140784C5B: movzx   eax, r12b
 * 0000000140784C5F: mov     cr8, rax
 * 0000000140784C63: xor     eax, eax
 * 0000000140784C65: mov     r15d, 0FFFFFFF8h
 * 0000000140784C6B: lea     r12d, [rax+8]
 * 0000000140784C6F: cmp     [rbp+1C70h+var_1CB4], eax
 * 0000000140784C72: jge     short loc_140784CAF
 * 0000000140784C74: lea     ecx, [rax+18h]
 * 0000000140784C77: mov     rax, [rbp+1C70h+var_1440]
 * 0000000140784C7E: add     rax, rcx
 * 0000000140784C81: lea     edx, [rcx-15h]
 * 0000000140784C84: xor     ebx, ebx
 * 0000000140784C86: mov     [rax], rbx
 * 0000000140784C89: add     ecx, r15d
 * 0000000140784C8C: add     rax, r12
 * 0000000140784C8F: sub     rdx, r13
 * 0000000140784C92: jnz     short loc_140784C86
 * 0000000140784C94: test    ecx, ecx
 * 0000000140784C96: jz      short loc_140784CA2
 * 0000000140784C98: mov     [rax], bl
 * 0000000140784C9A: add     rax, r13
 * 0000000140784C9D: add     ecx, 0FFFFFFFFh
 * 0000000140784CA0: jnz     short loc_140784C98
 * 0000000140784CA2: mov     rax, [rbp+1C70h+var_1440]
 * 0000000140784CA9: mov     [rax+18h], r13
 * 0000000140784CAD: xor     eax, eax
 * 0000000140784CAF: mov     [rbp+1C70h+var_15F0], rdi
 * 0000000140784CB6: cli
 * 0000000140784CB7: cmp     byte ptr cs:KdDebuggerNotPresent, al
 * 0000000140784CBD: jnz     short loc_140784CC1
 * 0000000140784CBF: jmp     short loc_140784CBF
 * 0000000140784CC1: sti
 * 0000000140784CC2: mov     r14d, [rdi+59Ch]
 * 0000000140784CC9: mov     r8d, [rdi+67Ch]
 * 0000000140784CD0: lea     eax, [r14+30h]
 * 0000000140784CD4: cmp     eax, [rdi+75Ch]
 * 0000000140784CDA: jbe     loc_140784DAB
 * 0000000140784CE0: mov     edx, eax
 * 0000000140784CE2: mov     rcx, rdi
 * 0000000140784CE5: call    sub_140251E08
 * 0000000140784CEA: mov     rbx, rax
 * 0000000140784CED: xor     eax, eax
 * 0000000140784CEF: test    rbx, rbx
 * 0000000140784CF2: jz      loc_14077C9F7
 * 0000000140784CF8: mov     edx, [rdi+6D8h]
 * 0000000140784CFE: test    dl, 4
 * 0000000140784D01: jnz     loc_140784DA2
 * 0000000140784D07: mov     ecx, [rdi+59Ch]
 * 0000000140784D0D: and     edx, 20000000h
 * 0000000140784D13: mov     r9, [rdi+580h]
 * 0000000140784D1A: neg     edx
 * 0000000140784D1C: sbb     r8d, r8d
 * 0000000140784D1F: and     r8d, [rdi+67Ch]
 * 0000000140784D26: cmp     ecx, r12d
 * 0000000140784D29: jb      short loc_140784D41
 * 0000000140784D2B: mov     eax, ecx
 * 0000000140784D2D: shr     rax, 3
 * 0000000140784D31: xor     edx, edx
 * 0000000140784D33: mov     [rdi], rdx
 * 0000000140784D36: add     ecx, r15d
 * 0000000140784D39: add     rdi, r12
 * 0000000140784D3C: sub     rax, r13
 * 0000000140784D3F: jnz     short loc_140784D33
 * 0000000140784D41: xor     eax, eax
 * 0000000140784D43: test    ecx, ecx
 * 0000000140784D45: jz      short loc_140784D51
 * 0000000140784D47: mov     [rdi], al
 * 0000000140784D49: add     rdi, r13
 * 0000000140784D4C: add     ecx, 0FFFFFFFFh
 * 0000000140784D4F: jnz     short loc_140784D47
 * 0000000140784D51: mov     edi, [rbx+67Ch]
 * 0000000140784D57: mov     [rbx+67Ch], r8d
 * 0000000140784D5E: cmp     r8d, 3
 * 0000000140784D62: jz      short loc_140784D93
 * 0000000140784D64: test    dword ptr [rbx+6D8h], 10000000h
 * 0000000140784D6E: mov     rcx, rax
 * 0000000140784D71: cmovz   ecx, r8d
 * 0000000140784D75: test    ecx, ecx
 * 0000000140784D77: jz      short loc_140784D88
 * 0000000140784D79: lea     rcx, [r9-8]
 * 0000000140784D7D: mov     rdx, [rcx]
 * 0000000140784D80: call    qword ptr [rbx+210h]
 * 0000000140784D86: jmp     short loc_140784D9C
 * 0000000140784D88: mov     rcx, r9
 * 0000000140784D8B: call    qword ptr [rbx+0E8h]
 * 0000000140784D91: jmp     short loc_140784D9C
 * 0000000140784D93: mov     rcx, r9
 * 0000000140784D96: call    qword ptr [rbx+348h]
 * 0000000140784D9C: mov     [rbx+67Ch], edi
 * 0000000140784DA2: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 0000000140784DA9: jmp     short loc_140784DB4
 * 0000000140784DAB: mov     rbx, rdi
 * 0000000140784DAE: mov     [rdi+59Ch], eax
 * 0000000140784DB4: add     [rbx+5C4h], r13d
 * 0000000140784DBB: lea     rcx, [rbx+r14]
 * 0000000140784DBF: mov     edx, 30h ; '0'
 * 0000000140784DC4: mov     [rbp+1C70h+var_1438], rcx
 * 0000000140784DCB: mov     rax, rcx
 * 0000000140784DCE: xor     r8d, r8d
 * 0000000140784DD1: lea     edi, [rdx-2Ah]
 * 0000000140784DD4: mov     [rax], r8
 * 0000000140784DD7: add     edx, r15d
 * 0000000140784DDA: add     rax, r12
 * 0000000140784DDD: sub     rdi, r13
 * 0000000140784DE0: jnz     short loc_140784DD4
 * 0000000140784DE2: test    edx, edx
 * 0000000140784DE4: jz      short loc_140784DF1
 * 0000000140784DE6: mov     [rax], r8b
 * 0000000140784DE9: add     rax, r13
 * 0000000140784DEC: add     edx, 0FFFFFFFFh
 * 0000000140784DEF: jnz     short loc_140784DE6
 * 0000000140784DF1: xor     eax, eax
 * 0000000140784DF3: mov     dword ptr [rcx], 4
 * 0000000140784DF9: mov     [rcx+8], rax
 * 0000000140784DFD: mov     [rcx+10h], eax
 * 0000000140784E00: mov     rdx, [rbx+5D0h]
 * 0000000140784E07: mov     rax, rdx
 * 0000000140784E0A: shr     rax, 1Fh
 * 0000000140784E0E: xor     r10d, r10d
 * 0000000140784E11: jmp     short loc_140784E19
 * 0000000140784E13: xor     edx, eax
 * 0000000140784E15: shr     rax, 1Fh
 * 0000000140784E19: test    rax, rax
 * 0000000140784E1C: jnz     short loc_140784E13
 * 0000000140784E1E: btr     edx, 1Fh
 * 0000000140784E22: mov     [rbp+1C70h+var_15F0], rbx
 * 0000000140784E29: mov     [rcx+14h], edx
 * 0000000140784E2C: cli
 * 0000000140784E2D: cmp     byte ptr cs:KdDebuggerNotPresent, r10b
 * 0000000140784E34: jnz     short loc_140784E38
 * 0000000140784E36: jmp     short loc_140784E36
 * 0000000140784E38: sti
 * 0000000140784E39: mov     r14d, [rbx+59Ch]
 * 0000000140784E40: mov     r8d, [rbx+67Ch]
 * 0000000140784E47: lea     eax, [r14+30h]
 * 0000000140784E4B: cmp     eax, [rbx+75Ch]
 * 0000000140784E51: jbe     loc_140784F23
 * 0000000140784E57: mov     edx, eax
 * 0000000140784E59: mov     rcx, rbx
 * 0000000140784E5C: call    sub_140251E08
 * 0000000140784E61: xor     r10d, r10d
 * 0000000140784E64: mov     rdi, rax
 * 0000000140784E67: test    rax, rax
 * 0000000140784E6A: jz      loc_14077C9F7
 * 0000000140784E70: mov     edx, [rbx+6D8h]
 * 0000000140784E76: test    dl, 4
 * 0000000140784E79: jnz     loc_140784F1A
 * 0000000140784E7F: mov     ecx, [rbx+59Ch]
 * 0000000140784E85: and     edx, 20000000h
 * 0000000140784E8B: mov     r9, [rbx+580h]
 * 0000000140784E92: neg     edx
 * 0000000140784E94: sbb     r8d, r8d
 * 0000000140784E97: and     r8d, [rbx+67Ch]
 * 0000000140784E9E: cmp     ecx, r12d
 * 0000000140784EA1: jb      short loc_140784EB7
 * 0000000140784EA3: mov     eax, ecx
 * 0000000140784EA5: shr     rax, 3
 * 0000000140784EA9: mov     [rbx], r10
 * 0000000140784EAC: add     ecx, r15d
 * 0000000140784EAF: add     rbx, r12
 * 0000000140784EB2: sub     rax, r13
 * 0000000140784EB5: jnz     short loc_140784EA9
 * 0000000140784EB7: test    ecx, ecx
 * 0000000140784EB9: jz      short loc_140784EC6
 * 0000000140784EBB: mov     [rbx], r10b
 * 0000000140784EBE: add     rbx, r13
 * 0000000140784EC1: add     ecx, 0FFFFFFFFh
 * 0000000140784EC4: jnz     short loc_140784EBB
 * 0000000140784EC6: mov     ebx, [rdi+67Ch]
 * 0000000140784ECC: mov     [rdi+67Ch], r8d
 * 0000000140784ED3: cmp     r8d, 3
 * 0000000140784ED7: jz      short loc_140784F08
 * 0000000140784ED9: test    dword ptr [rdi+6D8h], 10000000h
 * 0000000140784EE3: mov     ecx, r10d
 * 0000000140784EE6: cmovz   ecx, r8d
 * 0000000140784EEA: test    ecx, ecx
 * 0000000140784EEC: jz      short loc_140784EFD
 * 0000000140784EEE: lea     rcx, [r9-8]
 * 0000000140784EF2: mov     rdx, [rcx]
 * 0000000140784EF5: call    qword ptr [rdi+210h]
 * 0000000140784EFB: jmp     short loc_140784F11
 * 0000000140784EFD: mov     rcx, r9
 * 0000000140784F00: call    qword ptr [rdi+0E8h]
 * 0000000140784F06: jmp     short loc_140784F11
 * 0000000140784F08: mov     rcx, r9
 * 0000000140784F0B: call    qword ptr [rdi+348h]
 * 0000000140784F11: mov     [rdi+67Ch], ebx
 * 0000000140784F17: xor     r10d, r10d
 * 0000000140784F1A: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 0000000140784F21: jmp     short loc_140784F2C
 * 0000000140784F23: mov     rdi, rbx
 * 0000000140784F26: mov     [rbx+59Ch], eax
 * 0000000140784F2C: add     [rdi+5C4h], r13d
 * 0000000140784F33: lea     rcx, [rdi+r14]
 * 0000000140784F37: mov     edx, 30h ; '0'
 * 0000000140784F3C: mov     [rbp+1C70h+var_1430], rcx
 * 0000000140784F43: mov     rax, rcx
 * 0000000140784F46: lea     ebx, [rdx-2Ah]
 * 0000000140784F49: mov     [rax], r10
 * 0000000140784F4C: add     edx, r15d
 * 0000000140784F4F: add     rax, r12
 * 0000000140784F52: sub     rbx, r13
 * 0000000140784F55: jnz     short loc_140784F49
 * 0000000140784F57: test    edx, edx
 * 0000000140784F59: jz      short loc_140784F66
 * 0000000140784F5B: mov     [rax], r10b
 * 0000000140784F5E: add     rax, r13
 * 0000000140784F61: add     edx, 0FFFFFFFFh
 * 0000000140784F64: jnz     short loc_140784F5B
 * 0000000140784F66: mov     dword ptr [rcx], 5
 * 0000000140784F6C: mov     [rcx+8], r10
 * 0000000140784F70: mov     [rcx+10h], r10d
 * 0000000140784F74: mov     rdx, [rdi+5D0h]
 * 0000000140784F7B: mov     rax, rdx
 * 0000000140784F7E: jmp     short loc_140784F82
 * 0000000140784F80: xor     edx, eax
 * 0000000140784F82: shr     rax, 1Fh
 * 0000000140784F86: test    rax, rax
 * 0000000140784F89: jnz     short loc_140784F80
 * 0000000140784F8B: btr     edx, 1Fh
 * 0000000140784F8F: mov     [rbp+1C70h+var_15F0], rdi
 * 0000000140784F96: mov     [rcx+14h], edx
 * 0000000140784F99: cli
 * 0000000140784F9A: cmp     byte ptr cs:KdDebuggerNotPresent, r10b
 * 0000000140784FA1: jnz     short loc_140784FA5
 * 0000000140784FA3: jmp     short loc_140784FA3
 * 0000000140784FA5: sti
 * 0000000140784FA6: mov     r14d, [rdi+59Ch]
 * 0000000140784FAD: mov     r8d, [rdi+67Ch]
 * 0000000140784FB4: lea     eax, [r14+30h]
 * 0000000140784FB8: cmp     eax, [rdi+75Ch]
 * 0000000140784FBE: jbe     loc_140785090
 * 0000000140784FC4: mov     edx, eax
 * 0000000140784FC6: mov     rcx, rdi
 * 0000000140784FC9: call    sub_140251E08
 * 0000000140784FCE: xor     r10d, r10d
 * 0000000140784FD1: mov     rbx, rax
 * 0000000140784FD4: test    rax, rax
 * 0000000140784FD7: jz      loc_14077C9F7
 * 0000000140784FDD: mov     edx, [rdi+6D8h]
 * 0000000140784FE3: test    dl, 4
 * 0000000140784FE6: jnz     loc_140785087
 * 0000000140784FEC: mov     ecx, [rdi+59Ch]
 * 0000000140784FF2: and     edx, 20000000h
 * 0000000140784FF8: mov     r9, [rdi+580h]
 * 0000000140784FFF: neg     edx
 * 0000000140785001: sbb     r8d, r8d
 * 0000000140785004: and     r8d, [rdi+67Ch]
 * 000000014078500B: cmp     ecx, r12d
 * 000000014078500E: jb      short loc_140785024
 * 0000000140785010: mov     eax, ecx
 * 0000000140785012: shr     rax, 3
 * 0000000140785016: mov     [rdi], r10
 * 0000000140785019: add     ecx, r15d
 * 000000014078501C: add     rdi, r12
 * 000000014078501F: sub     rax, r13
 * 0000000140785022: jnz     short loc_140785016
 * 0000000140785024: test    ecx, ecx
 * 0000000140785026: jz      short loc_140785033
 * 0000000140785028: mov     [rdi], r10b
 * 000000014078502B: add     rdi, r13
 * 000000014078502E: add     ecx, 0FFFFFFFFh
 * 0000000140785031: jnz     short loc_140785028
 * 0000000140785033: mov     edi, [rbx+67Ch]
 * 0000000140785039: mov     [rbx+67Ch], r8d
 * 0000000140785040: cmp     r8d, 3
 * 0000000140785044: jz      short loc_140785075
 * 0000000140785046: test    dword ptr [rbx+6D8h], 10000000h
 * 0000000140785050: mov     ecx, r10d
 * 0000000140785053: cmovz   ecx, r8d
 * 0000000140785057: test    ecx, ecx
 * 0000000140785059: jz      short loc_14078506A
 * 000000014078505B: lea     rcx, [r9-8]
 * 000000014078505F: mov     rdx, [rcx]
 * 0000000140785062: call    qword ptr [rbx+210h]
 * 0000000140785068: jmp     short loc_14078507E
 * 000000014078506A: mov     rcx, r9
 * 000000014078506D: call    qword ptr [rbx+0E8h]
 * 0000000140785073: jmp     short loc_14078507E
 * 0000000140785075: mov     rcx, r9
 * 0000000140785078: call    qword ptr [rbx+348h]
 * 000000014078507E: mov     [rbx+67Ch], edi
 * 0000000140785084: xor     r10d, r10d
 * 0000000140785087: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 000000014078508E: jmp     short loc_140785099
 * 0000000140785090: mov     rbx, rdi
 * 0000000140785093: mov     [rdi+59Ch], eax
 * 0000000140785099: add     [rbx+5C4h], r13d
 * 00000001407850A0: lea     rcx, [rbx+r14]
 * 00000001407850A4: mov     edx, 30h ; '0'
 * 00000001407850A9: mov     [rbp+1C70h+var_1428], rcx
 * 00000001407850B0: mov     rax, rcx
 * 00000001407850B3: lea     edi, [rdx-2Ah]
 * 00000001407850B6: mov     [rax], r10
 * 00000001407850B9: add     edx, r15d
 * 00000001407850BC: add     rax, r12
 * 00000001407850BF: sub     rdi, r13
 * 00000001407850C2: jnz     short loc_1407850B6
 * 00000001407850C4: test    edx, edx
 * 00000001407850C6: jz      short loc_1407850D3
 * 00000001407850C8: mov     [rax], r10b
 * 00000001407850CB: add     rax, r13
 * 00000001407850CE: add     edx, 0FFFFFFFFh
 * 00000001407850D1: jnz     short loc_1407850C8
 * 00000001407850D3: mov     dword ptr [rcx], 0Fh
 * 00000001407850D9: mov     [rcx+8], r10
 * 00000001407850DD: mov     [rcx+10h], r10d
 * 00000001407850E1: mov     rdx, [rbx+5D0h]
 * 00000001407850E8: mov     rax, rdx
 * 00000001407850EB: jmp     short loc_1407850EF
 * 00000001407850ED: xor     edx, eax
 * 00000001407850EF: shr     rax, 1Fh
 * 00000001407850F3: test    rax, rax
 * 00000001407850F6: jnz     short loc_1407850ED
 * 00000001407850F8: btr     edx, 1Fh
 * 00000001407850FC: mov     [rcx+14h], edx
 * 00000001407850FF: mov     ecx, 0BC2A27DBh
 * 0000000140785104: mov     eax, [rbx+6ACh]
 * 000000014078510A: xor     rax, rcx
 * 000000014078510D: mov     rcx, 88000000000h
 * 0000000140785117: sub     rax, rcx
 * 000000014078511A: mov     al, [rax]
 * 000000014078511C: test    al, 2
 * 000000014078511E: jz      short loc_14078512B
 * 0000000140785120: mov     eax, 1000h
 * 0000000140785125: add     [rbx+59Ch], eax
 * 000000014078512B: mov     r14d, [rbx+59Ch]
 * 0000000140785132: mov     r8d, [rbx+67Ch]
 * 0000000140785139: mov     [rbp+1C70h+var_15F0], rbx
 * 0000000140785140: lea     eax, [r14+30h]
 * 0000000140785144: cmp     eax, [rbx+75Ch]
 * 000000014078514A: jbe     loc_14078521C
 * 0000000140785150: mov     edx, eax
 * 0000000140785152: mov     rcx, rbx
 * 0000000140785155: call    sub_140251E08
 * 000000014078515A: xor     r10d, r10d
 * 000000014078515D: mov     rdi, rax
 * 0000000140785160: test    rax, rax
 * 0000000140785163: jz      loc_14077C9F7
 * 0000000140785169: mov     edx, [rbx+6D8h]
 * 000000014078516F: test    dl, 4
 * 0000000140785172: jnz     loc_140785213
 * 0000000140785178: mov     ecx, [rbx+59Ch]
 * 000000014078517E: and     edx, 20000000h
 * 0000000140785184: mov     r9, [rbx+580h]
 * 000000014078518B: neg     edx
 * 000000014078518D: sbb     r8d, r8d
 * 0000000140785190: and     r8d, [rbx+67Ch]
 * 0000000140785197: cmp     ecx, r12d
 * 000000014078519A: jb      short loc_1407851B0
 * 000000014078519C: mov     eax, ecx
 * 000000014078519E: shr     rax, 3
 * 00000001407851A2: mov     [rbx], r10
 * 00000001407851A5: add     ecx, r15d
 * 00000001407851A8: add     rbx, r12
 * 00000001407851AB: sub     rax, r13
 * 00000001407851AE: jnz     short loc_1407851A2
 * 00000001407851B0: test    ecx, ecx
 * 00000001407851B2: jz      short loc_1407851BF
 * 00000001407851B4: mov     [rbx], r10b
 * 00000001407851B7: add     rbx, r13
 * 00000001407851BA: add     ecx, 0FFFFFFFFh
 * 00000001407851BD: jnz     short loc_1407851B4
 * 00000001407851BF: mov     ebx, [rdi+67Ch]
 * 00000001407851C5: mov     [rdi+67Ch], r8d
 * 00000001407851CC: cmp     r8d, 3
 * 00000001407851D0: jz      short loc_140785201
 * 00000001407851D2: test    dword ptr [rdi+6D8h], 10000000h
 * 00000001407851DC: mov     ecx, r10d
 * 00000001407851DF: cmovz   ecx, r8d
 * 00000001407851E3: test    ecx, ecx
 * 00000001407851E5: jz      short loc_1407851F6
 * 00000001407851E7: lea     rcx, [r9-8]
 * 00000001407851EB: mov     rdx, [rcx]
 * 00000001407851EE: call    qword ptr [rdi+210h]
 * 00000001407851F4: jmp     short loc_14078520A
 * 00000001407851F6: mov     rcx, r9
 * 00000001407851F9: call    qword ptr [rdi+0E8h]
 * 00000001407851FF: jmp     short loc_14078520A
 * 0000000140785201: mov     rcx, r9
 * 0000000140785204: call    qword ptr [rdi+348h]
 * 000000014078520A: mov     [rdi+67Ch], ebx
 * 0000000140785210: xor     r10d, r10d
 * 0000000140785213: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 000000014078521A: jmp     short loc_140785225
 * 000000014078521C: mov     rdi, rbx
 * 000000014078521F: mov     [rbx+59Ch], eax
 * 0000000140785225: add     [rdi+5C4h], r13d
 * 000000014078522C: lea     rcx, [rdi+r14]
 * 0000000140785230: mov     edx, 30h ; '0'
 * 0000000140785235: mov     [rbp+1C70h+var_1420], rcx
 * 000000014078523C: mov     rax, rcx
 * 000000014078523F: lea     r8d, [rdx-2Ah]
 * 0000000140785243: mov     ebx, r8d
 * 0000000140785246: mov     [rax], r10
 * 0000000140785249: add     edx, r15d
 * 000000014078524C: add     rax, r12
 * 000000014078524F: sub     rbx, r13
 * 0000000140785252: jnz     short loc_140785246
 * 0000000140785254: test    edx, edx
 * 0000000140785256: jz      short loc_140785263
 * 0000000140785258: mov     [rax], r10b
 * 000000014078525B: add     rax, r13
 * 000000014078525E: add     edx, 0FFFFFFFFh
 * 0000000140785261: jnz     short loc_140785258
 * 0000000140785263: mov     [rcx], r8d
 * 0000000140785266: mov     [rcx+8], r10
 * 000000014078526A: mov     [rcx+10h], r10d
 * 000000014078526E: mov     rdx, [rdi+5D0h]
 * 0000000140785275: mov     rax, rdx
 * 0000000140785278: jmp     short loc_14078527C
 * 000000014078527A: xor     edx, eax
 * 000000014078527C: shr     rax, 1Fh
 * 0000000140785280: test    rax, rax
 * 0000000140785283: jnz     short loc_14078527A
 * 0000000140785285: btr     edx, 1Fh
 * 0000000140785289: mov     [rbp+1C70h+var_15F0], rdi
 * 0000000140785290: mov     [rcx+14h], edx
 * 0000000140785293: lea     rcx, KdpStub
 * 000000014078529A: mov     rax, [rbp+1C70h+var_1420]
 * 00000001407852A1: mov     [rbp+1C70h+var_1418], rax
 * 00000001407852A8: mov     [rax+18h], rcx
 * 00000001407852AC: lea     rcx, KdpTrap
 * 00000001407852B3: mov     rax, [rbp+1C70h+var_1418]
 * 00000001407852BA: mov     [rax+20h], rcx
 * 00000001407852BE: lea     rcx, KiDebugRoutine
 * 00000001407852C5: mov     rax, [rbp+1C70h+var_1418]
 * 00000001407852CC: mov     [rax+28h], rcx
 * 00000001407852D0: mov     r14d, [rdi+59Ch]
 * 00000001407852D7: mov     r8d, [rdi+67Ch]
 * 00000001407852DE: lea     eax, [r14+30h]
 * 00000001407852E2: cmp     eax, [rdi+75Ch]
 * 00000001407852E8: jbe     loc_1407853BA
 * 00000001407852EE: mov     edx, eax
 * 00000001407852F0: mov     rcx, rdi
 * 00000001407852F3: call    sub_140251E08
 * 00000001407852F8: xor     r10d, r10d
 * 00000001407852FB: mov     rbx, rax
 * 00000001407852FE: test    rax, rax
 * 0000000140785301: jz      loc_14077C9F7
 * 0000000140785307: mov     edx, [rdi+6D8h]
 * 000000014078530D: test    dl, 4
 * 0000000140785310: jnz     loc_1407853B1
 * 0000000140785316: mov     ecx, [rdi+59Ch]
 * 000000014078531C: and     edx, 20000000h
 * 0000000140785322: mov     r9, [rdi+580h]
 * 0000000140785329: neg     edx
 * 000000014078532B: sbb     r8d, r8d
 * 000000014078532E: and     r8d, [rdi+67Ch]
 * 0000000140785335: cmp     ecx, r12d
 * 0000000140785338: jb      short loc_14078534E
 * 000000014078533A: mov     eax, ecx
 * 000000014078533C: shr     rax, 3
 * 0000000140785340: mov     [rdi], r10
 * 0000000140785343: add     ecx, r15d
 * 0000000140785346: add     rdi, r12
 * 0000000140785349: sub     rax, r13
 * 000000014078534C: jnz     short loc_140785340
 * 000000014078534E: test    ecx, ecx
 * 0000000140785350: jz      short loc_14078535D
 * 0000000140785352: mov     [rdi], r10b
 * 0000000140785355: add     rdi, r13
 * 0000000140785358: add     ecx, 0FFFFFFFFh
 * 000000014078535B: jnz     short loc_140785352
 * 000000014078535D: mov     edi, [rbx+67Ch]
 * 0000000140785363: mov     [rbx+67Ch], r8d
 * 000000014078536A: cmp     r8d, 3
 * 000000014078536E: jz      short loc_14078539F
 * 0000000140785370: test    dword ptr [rbx+6D8h], 10000000h
 * 000000014078537A: mov     ecx, r10d
 * 000000014078537D: cmovz   ecx, r8d
 * 0000000140785381: test    ecx, ecx
 * 0000000140785383: jz      short loc_140785394
 * 0000000140785385: lea     rcx, [r9-8]
 * 0000000140785389: mov     rdx, [rcx]
 * 000000014078538C: call    qword ptr [rbx+210h]
 * 0000000140785392: jmp     short loc_1407853A8
 * 0000000140785394: mov     rcx, r9
 * 0000000140785397: call    qword ptr [rbx+0E8h]
 * 000000014078539D: jmp     short loc_1407853A8
 * 000000014078539F: mov     rcx, r9
 * 00000001407853A2: call    qword ptr [rbx+348h]
 * 00000001407853A8: mov     [rbx+67Ch], edi
 * 00000001407853AE: xor     r10d, r10d
 * 00000001407853B1: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 00000001407853B8: jmp     short loc_1407853C3
 * 00000001407853BA: mov     rbx, rdi
 * 00000001407853BD: mov     [rdi+59Ch], eax
 * 00000001407853C3: add     [rbx+5C4h], r13d
 * 00000001407853CA: lea     rcx, [rbx+r14]
 * 00000001407853CE: mov     edx, 30h ; '0'
 * 00000001407853D3: mov     [rbp+1C70h+var_1410], rcx
 * 00000001407853DA: mov     rax, rcx
 * 00000001407853DD: lea     edi, [rdx-2Ah]
 * 00000001407853E0: mov     [rax], r10
 * 00000001407853E3: add     edx, r15d
 * 00000001407853E6: add     rax, r12
 * 00000001407853E9: sub     rdi, r13
 * 00000001407853EC: jnz     short loc_1407853E0
 * 00000001407853EE: test    edx, edx
 * 00000001407853F0: jz      short loc_1407853FD
 * 00000001407853F2: mov     [rax], r10b
 * 00000001407853F5: add     rax, r13
 * 00000001407853F8: add     edx, 0FFFFFFFFh
 * 00000001407853FB: jnz     short loc_1407853F2
 * 00000001407853FD: mov     dword ptr [rcx], 10h
 * 0000000140785403: mov     [rcx+8], r10
 * 0000000140785407: mov     [rcx+10h], r10d
 * 000000014078540B: mov     rdx, [rbx+5D0h]
 * 0000000140785412: mov     rax, rdx
 * 0000000140785415: jmp     short loc_140785419
 * 0000000140785417: xor     edx, eax
 * 0000000140785419: shr     rax, 1Fh
 * 000000014078541D: test    rax, rax
 * 0000000140785420: jnz     short loc_140785417
 * 0000000140785422: btr     edx, 1Fh
 * 0000000140785426: mov     [rbp+1C70h+var_15F0], rbx
 * 000000014078542D: mov     [rcx+14h], edx
 * 0000000140785430: lea     rcx, KdpSwitchProcessor
 * 0000000140785437: mov     rax, [rbp+1C70h+var_1410]
 * 000000014078543E: mov     [rbp+1C70h+var_1408], rax
 * 0000000140785445: mov     [rax+18h], rcx
 * 0000000140785449: lea     rcx, KiDebugSwitchRoutine
 * 0000000140785450: mov     rax, [rbp+1C70h+var_1408]
 * 0000000140785457: mov     [rax+20h], rcx
 * 000000014078545B: cli
 * 000000014078545C: cmp     byte ptr cs:KdDebuggerNotPresent, r10b
 * 0000000140785463: jnz     short loc_140785467
 * 0000000140785465: jmp     short loc_140785465
 * 0000000140785467: sti
 * 0000000140785468: mov     r14d, [rbx+59Ch]
 * 000000014078546F: mov     r8d, [rbx+67Ch]
 * 0000000140785476: lea     eax, [r14+38h]
 * 000000014078547A: cmp     eax, [rbx+75Ch]
 * 0000000140785480: jbe     loc_140785552
 * 0000000140785486: mov     edx, eax
 * 0000000140785488: mov     rcx, rbx
 * 000000014078548B: call    sub_140251E08
 * 0000000140785490: xor     r10d, r10d
 * 0000000140785493: mov     rdi, rax
 * 0000000140785496: test    rax, rax
 * 0000000140785499: jz      loc_14077C9F7
 * 000000014078549F: mov     edx, [rbx+6D8h]
 * 00000001407854A5: test    dl, 4
 * 00000001407854A8: jnz     loc_140785549
 * 00000001407854AE: mov     ecx, [rbx+59Ch]
 * 00000001407854B4: and     edx, 20000000h
 * 00000001407854BA: mov     r9, [rbx+580h]
 * 00000001407854C1: neg     edx
 * 00000001407854C3: sbb     r8d, r8d
 * 00000001407854C6: and     r8d, [rbx+67Ch]
 * 00000001407854CD: cmp     ecx, r12d
 * 00000001407854D0: jb      short loc_1407854E6
 * 00000001407854D2: mov     eax, ecx
 * 00000001407854D4: shr     rax, 3
 * 00000001407854D8: mov     [rbx], r10
 * 00000001407854DB: add     ecx, r15d
 * 00000001407854DE: add     rbx, r12
 * 00000001407854E1: sub     rax, r13
 * 00000001407854E4: jnz     short loc_1407854D8
 * 00000001407854E6: test    ecx, ecx
 * 00000001407854E8: jz      short loc_1407854F5
 * 00000001407854EA: mov     [rbx], r10b
 * 00000001407854ED: add     rbx, r13
 * 00000001407854F0: add     ecx, 0FFFFFFFFh
 * 00000001407854F3: jnz     short loc_1407854EA
 * 00000001407854F5: mov     ebx, [rdi+67Ch]
 * 00000001407854FB: mov     [rdi+67Ch], r8d
 * 0000000140785502: cmp     r8d, 3
 * 0000000140785506: jz      short loc_140785537
 * 0000000140785508: test    dword ptr [rdi+6D8h], 10000000h
 * 0000000140785512: mov     ecx, r10d
 * 0000000140785515: cmovz   ecx, r8d
 * 0000000140785519: test    ecx, ecx
 * 000000014078551B: jz      short loc_14078552C
 * 000000014078551D: lea     rcx, [r9-8]
 * 0000000140785521: mov     rdx, [rcx]
 * 0000000140785524: call    qword ptr [rdi+210h]
 * 000000014078552A: jmp     short loc_140785540
 * 000000014078552C: mov     rcx, r9
 * 000000014078552F: call    qword ptr [rdi+0E8h]
 * 0000000140785535: jmp     short loc_140785540
 * 0000000140785537: mov     rcx, r9
 * 000000014078553A: call    qword ptr [rdi+348h]
 * 0000000140785540: mov     [rdi+67Ch], ebx
 * 0000000140785546: xor     r10d, r10d
 * 0000000140785549: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 0000000140785550: jmp     short loc_14078555B
 * 0000000140785552: mov     rdi, rbx
 * 0000000140785555: mov     [rbx+59Ch], eax
 * 000000014078555B: add     [rdi+5C4h], r13d
 * 0000000140785562: lea     rcx, [rdi+r14]
 * 0000000140785566: mov     edx, 30h ; '0'
 * 000000014078556B: mov     [rbp+1C70h+var_1400], rcx
 * 0000000140785572: mov     rax, rcx
 * 0000000140785575: lea     ebx, [rdx-2Ah]
 * 0000000140785578: mov     [rax], r10
 * 000000014078557B: add     edx, r15d
 * 000000014078557E: add     rax, r12
 * 0000000140785581: sub     rbx, r13
 * 0000000140785584: jnz     short loc_140785578
 * 0000000140785586: test    edx, edx
 * 0000000140785588: jz      short loc_140785595
 * 000000014078558A: mov     [rax], r10b
 * 000000014078558D: add     rax, r13
 * 0000000140785590: add     edx, 0FFFFFFFFh
 * 0000000140785593: jnz     short loc_14078558A
 * 0000000140785595: mov     dword ptr [rcx], 11h
 * 000000014078559B: mov     [rcx+8], r10
 * 000000014078559F: mov     [rcx+10h], r10d
 * 00000001407855A3: mov     rdx, [rdi+5D0h]
 * 00000001407855AA: mov     rax, rdx
 * 00000001407855AD: jmp     short loc_1407855B1
 * 00000001407855AF: xor     edx, eax
 * 00000001407855B1: shr     rax, 1Fh
 * 00000001407855B5: test    rax, rax
 * 00000001407855B8: jnz     short loc_1407855AF
 * 00000001407855BA: btr     edx, 1Fh
 * 00000001407855BE: mov     [rbp+1C70h+var_15F0], rdi
 * 00000001407855C5: mov     [rcx+14h], edx
 * 00000001407855C8: lea     rcx, IovAllocateIrp
 * 00000001407855CF: mov     rax, [rbp+1C70h+var_1400]
 * 00000001407855D6: mov     [rbp+1C70h+var_13F8], rax
 * 00000001407855DD: mov     [rax+18h], rcx
 * 00000001407855E1: lea     rcx, IopAllocateIrpWithExtension
 * 00000001407855E8: mov     rax, [rbp+1C70h+var_13F8]
 * 00000001407855EF: mov     [rax+20h], rcx
 * 00000001407855F3: lea     rcx, IopAllocateIrpPrivate
 * 00000001407855FA: mov     rax, [rbp+1C70h+var_13F8]
 * 0000000140785601: mov     [rax+28h], rcx
 * 0000000140785605: lea     rcx, pIoAllocateIrp
 * 000000014078560C: mov     rax, [rbp+1C70h+var_13F8]
 * 0000000140785613: mov     [rax+30h], rcx
 * 0000000140785617: mov     r14d, [rdi+59Ch]
 * 000000014078561E: mov     r8d, [rdi+67Ch]
 * 0000000140785625: lea     eax, [r14+30h]
 * 0000000140785629: cmp     eax, [rdi+75Ch]
 * 000000014078562F: jbe     loc_140785701
 * 0000000140785635: mov     edx, eax
 * 0000000140785637: mov     rcx, rdi
 * 000000014078563A: call    sub_140251E08
 * 000000014078563F: xor     r10d, r10d
 * 0000000140785642: mov     rbx, rax
 * 0000000140785645: test    rax, rax
 * 0000000140785648: jz      loc_14077C9F7
 * 000000014078564E: mov     edx, [rdi+6D8h]
 * 0000000140785654: test    dl, 4
 * 0000000140785657: jnz     loc_1407856F8
 * 000000014078565D: mov     ecx, [rdi+59Ch]
 * 0000000140785663: and     edx, 20000000h
 * 0000000140785669: mov     r9, [rdi+580h]
 * 0000000140785670: neg     edx
 * 0000000140785672: sbb     r8d, r8d
 * 0000000140785675: and     r8d, [rdi+67Ch]
 * 000000014078567C: cmp     ecx, r12d
 * 000000014078567F: jb      short loc_140785695
 * 0000000140785681: mov     eax, ecx
 * 0000000140785683: shr     rax, 3
 * 0000000140785687: mov     [rdi], r10
 * 000000014078568A: add     ecx, r15d
 * 000000014078568D: add     rdi, r12
 * 0000000140785690: sub     rax, r13
 * 0000000140785693: jnz     short loc_140785687
 * 0000000140785695: test    ecx, ecx
 * 0000000140785697: jz      short loc_1407856A4
 * 0000000140785699: mov     [rdi], r10b
 * 000000014078569C: add     rdi, r13
 * 000000014078569F: add     ecx, 0FFFFFFFFh
 * 00000001407856A2: jnz     short loc_140785699
 * 00000001407856A4: mov     edi, [rbx+67Ch]
 * 00000001407856AA: mov     [rbx+67Ch], r8d
 * 00000001407856B1: cmp     r8d, 3
 * 00000001407856B5: jz      short loc_1407856E6
 * 00000001407856B7: test    dword ptr [rbx+6D8h], 10000000h
 * 00000001407856C1: mov     ecx, r10d
 * 00000001407856C4: cmovz   ecx, r8d
 * 00000001407856C8: test    ecx, ecx
 * 00000001407856CA: jz      short loc_1407856DB
 * 00000001407856CC: lea     rcx, [r9-8]
 * 00000001407856D0: mov     rdx, [rcx]
 * 00000001407856D3: call    qword ptr [rbx+210h]
 * 00000001407856D9: jmp     short loc_1407856EF
 * 00000001407856DB: mov     rcx, r9
 * 00000001407856DE: call    qword ptr [rbx+0E8h]
 * 00000001407856E4: jmp     short loc_1407856EF
 * 00000001407856E6: mov     rcx, r9
 * 00000001407856E9: call    qword ptr [rbx+348h]
 * 00000001407856EF: mov     [rbx+67Ch], edi
 * 00000001407856F5: xor     r10d, r10d
 * 00000001407856F8: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 00000001407856FF: jmp     short loc_14078570A
 * 0000000140785701: mov     rbx, rdi
 * 0000000140785704: mov     [rdi+59Ch], eax
 * 000000014078570A: add     [rbx+5C4h], r13d
 * 0000000140785711: lea     rcx, [rbx+r14]
 * 0000000140785715: mov     edx, 30h ; '0'
 * 000000014078571A: mov     [rbp+1C70h+var_13F0], rcx
 * 0000000140785721: mov     rax, rcx
 * 0000000140785724: lea     edi, [rdx-2Ah]
 * 0000000140785727: mov     [rax], r10
 * 000000014078572A: add     edx, r15d
 * 000000014078572D: add     rax, r12
 * 0000000140785730: sub     rdi, r13
 * 0000000140785733: jnz     short loc_140785727
 * 0000000140785735: test    edx, edx
 * 0000000140785737: jz      short loc_140785744
 * 0000000140785739: mov     [rax], r10b
 * 000000014078573C: add     rax, r13
 * 000000014078573F: add     edx, 0FFFFFFFFh
 * 0000000140785742: jnz     short loc_140785739
 * 0000000140785744: mov     dword ptr [rcx], 12h
 * 000000014078574A: mov     [rcx+8], r10
 * 000000014078574E: mov     [rcx+10h], r10d
 * 0000000140785752: mov     rdx, [rbx+5D0h]
 * 0000000140785759: mov     rax, rdx
 * 000000014078575C: jmp     short loc_140785760
 * 000000014078575E: xor     edx, eax
 * 0000000140785760: shr     rax, 1Fh
 * 0000000140785764: test    rax, rax
 * 0000000140785767: jnz     short loc_14078575E
 * 0000000140785769: btr     edx, 1Fh
 * 000000014078576D: mov     [rbp+1C70h+var_15F0], rbx
 * 0000000140785774: mov     [rcx+14h], edx
 * 0000000140785777: lea     rcx, IovCallDriver
 * 000000014078577E: mov     rax, [rbp+1C70h+var_13F0]
 * 0000000140785785: mov     [rbp+1C70h+var_13E8], rax
 * 000000014078578C: mov     [rax+18h], rcx
 * 0000000140785790: lea     rcx, IopPerfCallDriver
 * 0000000140785797: mov     rax, [rbp+1C70h+var_13E8]
 * 000000014078579E: mov     [rax+20h], rcx
 * 00000001407857A2: lea     rcx, pIofCallDriver
 * 00000001407857A9: mov     rax, [rbp+1C70h+var_13E8]
 * 00000001407857B0: mov     [rax+28h], rcx
 * 00000001407857B4: mov     r14d, [rbx+59Ch]
 * 00000001407857BB: mov     r8d, [rbx+67Ch]
 * 00000001407857C2: lea     eax, [r14+38h]
 * 00000001407857C6: cmp     eax, [rbx+75Ch]
 * 00000001407857CC: jbe     loc_14078589E
 * 00000001407857D2: mov     edx, eax
 * 00000001407857D4: mov     rcx, rbx
 * 00000001407857D7: call    sub_140251E08
 * 00000001407857DC: xor     r10d, r10d
 * 00000001407857DF: mov     rdi, rax
 * 00000001407857E2: test    rax, rax
 * 00000001407857E5: jz      loc_14077C9F7
 * 00000001407857EB: mov     edx, [rbx+6D8h]
 * 00000001407857F1: test    dl, 4
 * 00000001407857F4: jnz     loc_140785895
 * 00000001407857FA: mov     ecx, [rbx+59Ch]
 * 0000000140785800: and     edx, 20000000h
 * 0000000140785806: mov     r9, [rbx+580h]
 * 000000014078580D: neg     edx
 * 000000014078580F: sbb     r8d, r8d
 * 0000000140785812: and     r8d, [rbx+67Ch]
 * 0000000140785819: cmp     ecx, r12d
 * 000000014078581C: jb      short loc_140785832
 * 000000014078581E: mov     eax, ecx
 * 0000000140785820: shr     rax, 3
 * 0000000140785824: mov     [rbx], r10
 * 0000000140785827: add     ecx, r15d
 * 000000014078582A: add     rbx, r12
 * 000000014078582D: sub     rax, r13
 * 0000000140785830: jnz     short loc_140785824
 * 0000000140785832: test    ecx, ecx
 * 0000000140785834: jz      short loc_140785841
 * 0000000140785836: mov     [rbx], r10b
 * 0000000140785839: add     rbx, r13
 * 000000014078583C: add     ecx, 0FFFFFFFFh
 * 000000014078583F: jnz     short loc_140785836
 * 0000000140785841: mov     ebx, [rdi+67Ch]
 * 0000000140785847: mov     [rdi+67Ch], r8d
 * 000000014078584E: cmp     r8d, 3
 * 0000000140785852: jz      short loc_140785883
 * 0000000140785854: test    dword ptr [rdi+6D8h], 10000000h
 * 000000014078585E: mov     ecx, r10d
 * 0000000140785861: cmovz   ecx, r8d
 * 0000000140785865: test    ecx, ecx
 * 0000000140785867: jz      short loc_140785878
 * 0000000140785869: lea     rcx, [r9-8]
 * 000000014078586D: mov     rdx, [rcx]
 * 0000000140785870: call    qword ptr [rdi+210h]
 * 0000000140785876: jmp     short loc_14078588C
 * 0000000140785878: mov     rcx, r9
 * 000000014078587B: call    qword ptr [rdi+0E8h]
 * 0000000140785881: jmp     short loc_14078588C
 * 0000000140785883: mov     rcx, r9
 * 0000000140785886: call    qword ptr [rdi+348h]
 * 000000014078588C: mov     [rdi+67Ch], ebx
 * 0000000140785892: xor     r10d, r10d
 * 0000000140785895: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 000000014078589C: jmp     short loc_1407858A7
 * 000000014078589E: mov     rdi, rbx
 * 00000001407858A1: mov     [rbx+59Ch], eax
 * 00000001407858A7: add     [rdi+5C4h], r13d
 * 00000001407858AE: lea     rcx, [rdi+r14]
 * 00000001407858B2: mov     edx, 30h ; '0'
 * 00000001407858B7: mov     [rbp+1C70h+var_13E0], rcx
 * 00000001407858BE: mov     rax, rcx
 * 00000001407858C1: lea     ebx, [rdx-2Ah]
 * 00000001407858C4: mov     [rax], r10
 * 00000001407858C7: add     edx, r15d
 * 00000001407858CA: add     rax, r12
 * 00000001407858CD: sub     rbx, r13
 * 00000001407858D0: jnz     short loc_1407858C4
 * 00000001407858D2: test    edx, edx
 * 00000001407858D4: jz      short loc_1407858E1
 * 00000001407858D6: mov     [rax], r10b
 * 00000001407858D9: add     rax, r13
 * 00000001407858DC: add     edx, 0FFFFFFFFh
 * 00000001407858DF: jnz     short loc_1407858D6
 * 00000001407858E1: mov     dword ptr [rcx], 13h
 * 00000001407858E7: mov     [rcx+8], r10
 * 00000001407858EB: mov     [rcx+10h], r10d
 * 00000001407858EF: mov     rdx, [rdi+5D0h]
 * 00000001407858F6: mov     rax, rdx
 * 00000001407858F9: jmp     short loc_1407858FD
 * 00000001407858FB: xor     edx, eax
 * 00000001407858FD: shr     rax, 1Fh
 * 0000000140785901: test    rax, rax
 * 0000000140785904: jnz     short loc_1407858FB
 * 0000000140785906: btr     edx, 1Fh
 * 000000014078590A: mov     [rbp+1C70h+var_15F0], rdi
 * 0000000140785911: mov     [rcx+14h], edx
 * 0000000140785914: lea     rcx, IovCompleteRequest
 * 000000014078591B: mov     rax, [rbp+1C70h+var_13E0]
 * 0000000140785922: mov     [rbp+1C70h+var_13D8], rax
 * 0000000140785929: mov     [rax+18h], rcx
 * 000000014078592D: lea     rcx, IopfCompleteRequest
 * 0000000140785934: mov     rax, [rbp+1C70h+var_13D8]
 * 000000014078593B: mov     [rax+20h], rcx
 * 000000014078593F: lea     rcx, pIofCompleteRequest
 * 0000000140785946: mov     rax, [rbp+1C70h+var_13D8]
 * 000000014078594D: mov     [rax+28h], rcx
 * 0000000140785951: lea     rcx, IopPerfCompleteRequest
 * 0000000140785958: mov     rax, [rbp+1C70h+var_13D8]
 * 000000014078595F: mov     [rax+30h], rcx
 * 0000000140785963: cli
 * 0000000140785964: cmp     byte ptr cs:KdDebuggerNotPresent, r10b
 * 000000014078596B: jnz     short loc_14078596F
 * 000000014078596D: jmp     short loc_14078596D
 * 000000014078596F: sti
 * 0000000140785970: mov     r14d, [rdi+59Ch]
 * 0000000140785977: mov     r8d, [rdi+67Ch]
 * 000000014078597E: lea     eax, [r14+30h]
 * 0000000140785982: cmp     eax, [rdi+75Ch]
 * 0000000140785988: jbe     loc_140785A5A
 * 000000014078598E: mov     edx, eax
 * 0000000140785990: mov     rcx, rdi
 * 0000000140785993: call    sub_140251E08
 * 0000000140785998: xor     r10d, r10d
 * 000000014078599B: mov     rbx, rax
 * 000000014078599E: test    rax, rax
 * 00000001407859A1: jz      loc_14077C9F7
 * 00000001407859A7: mov     edx, [rdi+6D8h]
 * 00000001407859AD: test    dl, 4
 * 00000001407859B0: jnz     loc_140785A51
 * 00000001407859B6: mov     ecx, [rdi+59Ch]
 * 00000001407859BC: and     edx, 20000000h
 * 00000001407859C2: mov     r9, [rdi+580h]
 * 00000001407859C9: neg     edx
 * 00000001407859CB: sbb     r8d, r8d
 * 00000001407859CE: and     r8d, [rdi+67Ch]
 * 00000001407859D5: cmp     ecx, r12d
 * 00000001407859D8: jb      short loc_1407859EE
 * 00000001407859DA: mov     eax, ecx
 * 00000001407859DC: shr     rax, 3
 * 00000001407859E0: mov     [rdi], r10
 * 00000001407859E3: add     ecx, r15d
 * 00000001407859E6: add     rdi, r12
 * 00000001407859E9: sub     rax, r13
 * 00000001407859EC: jnz     short loc_1407859E0
 * 00000001407859EE: test    ecx, ecx
 * 00000001407859F0: jz      short loc_1407859FD
 * 00000001407859F2: mov     [rdi], r10b
 * 00000001407859F5: add     rdi, r13
 * 00000001407859F8: add     ecx, 0FFFFFFFFh
 * 00000001407859FB: jnz     short loc_1407859F2
 * 00000001407859FD: mov     edi, [rbx+67Ch]
 * 0000000140785A03: mov     [rbx+67Ch], r8d
 * 0000000140785A0A: cmp     r8d, 3
 * 0000000140785A0E: jz      short loc_140785A3F
 * 0000000140785A10: test    dword ptr [rbx+6D8h], 10000000h
 * 0000000140785A1A: mov     ecx, r10d
 * 0000000140785A1D: cmovz   ecx, r8d
 * 0000000140785A21: test    ecx, ecx
 * 0000000140785A23: jz      short loc_140785A34
 * 0000000140785A25: lea     rcx, [r9-8]
 * 0000000140785A29: mov     rdx, [rcx]
 * 0000000140785A2C: call    qword ptr [rbx+210h]
 * 0000000140785A32: jmp     short loc_140785A48
 * 0000000140785A34: mov     rcx, r9
 * 0000000140785A37: call    qword ptr [rbx+0E8h]
 * 0000000140785A3D: jmp     short loc_140785A48
 * 0000000140785A3F: mov     rcx, r9
 * 0000000140785A42: call    qword ptr [rbx+348h]
 * 0000000140785A48: mov     [rbx+67Ch], edi
 * 0000000140785A4E: xor     r10d, r10d
 * 0000000140785A51: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 0000000140785A58: jmp     short loc_140785A63
 * 0000000140785A5A: mov     rbx, rdi
 * 0000000140785A5D: mov     [rdi+59Ch], eax
 * 0000000140785A63: add     [rbx+5C4h], r13d
 * 0000000140785A6A: lea     rcx, [rbx+r14]
 * 0000000140785A6E: mov     edx, 30h ; '0'
 * 0000000140785A73: mov     [rbp+1C70h+var_13D0], rcx
 * 0000000140785A7A: mov     rax, rcx
 * 0000000140785A7D: lea     edi, [rdx-2Ah]
 * 0000000140785A80: mov     [rax], r10
 * 0000000140785A83: add     edx, r15d
 * 0000000140785A86: add     rax, r12
 * 0000000140785A89: sub     rdi, r13
 * 0000000140785A8C: jnz     short loc_140785A80
 * 0000000140785A8E: test    edx, edx
 * 0000000140785A90: jz      short loc_140785A9D
 * 0000000140785A92: mov     [rax], r10b
 * 0000000140785A95: add     rax, r13
 * 0000000140785A98: add     edx, 0FFFFFFFFh
 * 0000000140785A9B: jnz     short loc_140785A92
 * 0000000140785A9D: mov     dword ptr [rcx], 14h
 * 0000000140785AA3: mov     [rcx+8], r10
 * 0000000140785AA7: mov     [rcx+10h], r10d
 * 0000000140785AAB: mov     rdx, [rbx+5D0h]
 * 0000000140785AB2: mov     rax, rdx
 * 0000000140785AB5: jmp     short loc_140785AB9
 * 0000000140785AB7: xor     edx, eax
 * 0000000140785AB9: shr     rax, 1Fh
 * 0000000140785ABD: test    rax, rax
 * 0000000140785AC0: jnz     short loc_140785AB7
 * 0000000140785AC2: btr     edx, 1Fh
 * 0000000140785AC6: mov     [rbp+1C70h+var_15F0], rbx
 * 0000000140785ACD: mov     [rcx+14h], edx
 * 0000000140785AD0: lea     rcx, IovFreeIrpPrivate
 * 0000000140785AD7: mov     rax, [rbp+1C70h+var_13D0]
 * 0000000140785ADE: mov     [rbp+1C70h+var_13C8], rax
 * 0000000140785AE5: mov     [rax+18h], rcx
 * 0000000140785AE9: lea     rcx, IopFreeIrp
 * 0000000140785AF0: mov     rax, [rbp+1C70h+var_13C8]
 * 0000000140785AF7: mov     [rax+20h], rcx
 * 0000000140785AFB: lea     rcx, pIoFreeIrp
 * 0000000140785B02: mov     rax, [rbp+1C70h+var_13C8]
 * 0000000140785B09: mov     [rax+28h], rcx
 * 0000000140785B0D: cli
 * 0000000140785B0E: cmp     byte ptr cs:KdDebuggerNotPresent, r10b
 * 0000000140785B15: jnz     short loc_140785B19
 * 0000000140785B17: jmp     short loc_140785B17
 * 0000000140785B19: sti
 * 0000000140785B1A: mov     r14d, [rbx+59Ch]
 * 0000000140785B21: mov     r8d, [rbx+67Ch]
 * 0000000140785B28: lea     eax, [r14+30h]
 * 0000000140785B2C: cmp     eax, [rbx+75Ch]
 * 0000000140785B32: jbe     loc_140785C04
 * 0000000140785B38: mov     edx, eax
 * 0000000140785B3A: mov     rcx, rbx
 * 0000000140785B3D: call    sub_140251E08
 * 0000000140785B42: xor     r10d, r10d
 * 0000000140785B45: mov     rdi, rax
 * 0000000140785B48: test    rax, rax
 * 0000000140785B4B: jz      loc_14077C9F7
 * 0000000140785B51: mov     edx, [rbx+6D8h]
 * 0000000140785B57: test    dl, 4
 * 0000000140785B5A: jnz     loc_140785BFB
 * 0000000140785B60: mov     ecx, [rbx+59Ch]
 * 0000000140785B66: and     edx, 20000000h
 * 0000000140785B6C: mov     r9, [rbx+580h]
 * 0000000140785B73: neg     edx
 * 0000000140785B75: sbb     r8d, r8d
 * 0000000140785B78: and     r8d, [rbx+67Ch]
 * 0000000140785B7F: cmp     ecx, r12d
 * 0000000140785B82: jb      short loc_140785B98
 * 0000000140785B84: mov     eax, ecx
 * 0000000140785B86: shr     rax, 3
 * 0000000140785B8A: mov     [rbx], r10
 * 0000000140785B8D: add     ecx, r15d
 * 0000000140785B90: add     rbx, r12
 * 0000000140785B93: sub     rax, r13
 * 0000000140785B96: jnz     short loc_140785B8A
 * 0000000140785B98: test    ecx, ecx
 * 0000000140785B9A: jz      short loc_140785BA7
 * 0000000140785B9C: mov     [rbx], r10b
 * 0000000140785B9F: add     rbx, r13
 * 0000000140785BA2: add     ecx, 0FFFFFFFFh
 * 0000000140785BA5: jnz     short loc_140785B9C
 * 0000000140785BA7: mov     ebx, [rdi+67Ch]
 * 0000000140785BAD: mov     [rdi+67Ch], r8d
 * 0000000140785BB4: cmp     r8d, 3
 * 0000000140785BB8: jz      short loc_140785BE9
 * 0000000140785BBA: test    dword ptr [rdi+6D8h], 10000000h
 * 0000000140785BC4: mov     ecx, r10d
 * 0000000140785BC7: cmovz   ecx, r8d
 * 0000000140785BCB: test    ecx, ecx
 * 0000000140785BCD: jz      short loc_140785BDE
 * 0000000140785BCF: lea     rcx, [r9-8]
 * 0000000140785BD3: mov     rdx, [rcx]
 * 0000000140785BD6: call    qword ptr [rdi+210h]
 * 0000000140785BDC: jmp     short loc_140785BF2
 * 0000000140785BDE: mov     rcx, r9
 * 0000000140785BE1: call    qword ptr [rdi+0E8h]
 * 0000000140785BE7: jmp     short loc_140785BF2
 * 0000000140785BE9: mov     rcx, r9
 * 0000000140785BEC: call    qword ptr [rdi+348h]
 * 0000000140785BF2: mov     [rdi+67Ch], ebx
 * 0000000140785BF8: xor     r10d, r10d
 * 0000000140785BFB: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 0000000140785C02: jmp     short loc_140785C0D
 * 0000000140785C04: mov     rdi, rbx
 * 0000000140785C07: mov     [rbx+59Ch], eax
 * 0000000140785C0D: add     [rdi+5C4h], r13d
 * 0000000140785C14: lea     rcx, [rdi+r14]
 * 0000000140785C18: mov     edx, 30h ; '0'
 * 0000000140785C1D: mov     [rbp+1C70h+var_13C0], rcx
 * 0000000140785C24: mov     rax, rcx
 * 0000000140785C27: lea     ebx, [rdx-2Ah]
 * 0000000140785C2A: mov     [rax], r10
 * 0000000140785C2D: add     edx, r15d
 * 0000000140785C30: add     rax, r12
 * 0000000140785C33: sub     rbx, r13
 * 0000000140785C36: jnz     short loc_140785C2A
 * 0000000140785C38: test    edx, edx
 * 0000000140785C3A: jz      short loc_140785C47
 * 0000000140785C3C: mov     [rax], r10b
 * 0000000140785C3F: add     rax, r13
 * 0000000140785C42: add     edx, 0FFFFFFFFh
 * 0000000140785C45: jnz     short loc_140785C3C
 * 0000000140785C47: mov     dword ptr [rcx], 19h
 * 0000000140785C4D: mov     [rcx+8], r10
 * 0000000140785C51: mov     [rcx+10h], r10d
 * 0000000140785C55: mov     rdx, [rdi+5D0h]
 * 0000000140785C5C: mov     rax, rdx
 * 0000000140785C5F: jmp     short loc_140785C63
 * 0000000140785C61: xor     edx, eax
 * 0000000140785C63: shr     rax, 1Fh
 * 0000000140785C67: test    rax, rax
 * 0000000140785C6A: jnz     short loc_140785C61
 * 0000000140785C6C: btr     edx, 1Fh
 * 0000000140785C70: mov     [rbp+1C70h+var_15F0], rdi
 * 0000000140785C77: mov     [rcx+14h], edx
 * 0000000140785C7A: cli
 * 0000000140785C7B: cmp     byte ptr cs:KdDebuggerNotPresent, r10b
 * 0000000140785C82: jnz     short loc_140785C86
 * 0000000140785C84: jmp     short loc_140785C84
 * 0000000140785C86: sti
 * 0000000140785C87: mov     r15d, [rdi+59Ch]
 * 0000000140785C8E: mov     r8d, [rdi+67Ch]
 * 0000000140785C95: lea     eax, [r15+30h]
 * 0000000140785C99: cmp     eax, [rdi+75Ch]
 * 0000000140785C9F: jbe     loc_140785D74
 * 0000000140785CA5: mov     edx, eax
 * 0000000140785CA7: mov     rcx, rdi
 * 0000000140785CAA: call    sub_140251E08
 * 0000000140785CAF: xor     r10d, r10d
 * 0000000140785CB2: mov     r14, rax
 * 0000000140785CB5: test    rax, rax
 * 0000000140785CB8: jz      loc_14077C9F7
 * 0000000140785CBE: mov     edx, [rdi+6D8h]
 * 0000000140785CC4: test    dl, 4
 * 0000000140785CC7: jnz     loc_140785D6A
 * 0000000140785CCD: mov     ecx, [rdi+59Ch]
 * 0000000140785CD3: and     edx, 20000000h
 * 0000000140785CD9: mov     rbx, [rdi+580h]
 * 0000000140785CE0: neg     edx
 * 0000000140785CE2: sbb     edx, edx
 * 0000000140785CE4: and     edx, [rdi+67Ch]
 * 0000000140785CEA: cmp     ecx, r12d
 * 0000000140785CED: jb      short loc_140785D03
 * 0000000140785CEF: mov     eax, ecx
 * 0000000140785CF1: shr     rax, 3
 * 0000000140785CF5: mov     [rdi], r10
 * 0000000140785CF8: add     ecx, 0FFFFFFF8h
 * 0000000140785CFB: add     rdi, r12
 * 0000000140785CFE: sub     rax, r13
 * 0000000140785D01: jnz     short loc_140785CF5
 * 0000000140785D03: test    ecx, ecx
 * 0000000140785D05: jz      short loc_140785D12
 * 0000000140785D07: mov     [rdi], r10b
 * 0000000140785D0A: add     rdi, r13
 * 0000000140785D0D: add     ecx, 0FFFFFFFFh
 * 0000000140785D10: jnz     short loc_140785D07
 * 0000000140785D12: mov     edi, [r14+67Ch]
 * 0000000140785D19: mov     [r14+67Ch], edx
 * 0000000140785D20: cmp     edx, 3
 * 0000000140785D23: jz      short loc_140785D56
 * 0000000140785D25: test    dword ptr [r14+6D8h], 10000000h
 * 0000000140785D30: mov     ecx, r10d
 * 0000000140785D33: cmovz   ecx, edx
 * 0000000140785D36: test    ecx, ecx
 * 0000000140785D38: jz      short loc_140785D4A
 * 0000000140785D3A: lea     rcx, [rbx-8]
 * 0000000140785D3E: mov     rdx, [rcx]
 * 0000000140785D41: call    qword ptr [r14+210h]
 * 0000000140785D48: jmp     short loc_140785D60
 * 0000000140785D4A: mov     rcx, rbx
 * 0000000140785D4D: call    qword ptr [r14+0E8h]
 * 0000000140785D54: jmp     short loc_140785D60
 * 0000000140785D56: mov     rcx, rbx
 * 0000000140785D59: call    qword ptr [r14+348h]
 * 0000000140785D60: mov     [r14+67Ch], edi
 * 0000000140785D67: xor     r10d, r10d
 * 0000000140785D6A: and     dword ptr [r14+6D8h], 0FFFFFFFBh
 * 0000000140785D72: jmp     short loc_140785D7D
 * 0000000140785D74: mov     r14, rdi
 * 0000000140785D77: mov     [rdi+59Ch], eax
 * 0000000140785D7D: add     [r14+5C4h], r13d
 * 0000000140785D84: lea     rcx, [r14+r15]
 * 0000000140785D88: mov     edx, 30h ; '0'
 * 0000000140785D8D: mov     [rbp+1C70h+var_13B8], rcx
 * 0000000140785D94: mov     rax, rcx
 * 0000000140785D97: lea     ebx, [rdx-2Ah]
 * 0000000140785D9A: mov     [rax], r10
 * 0000000140785D9D: add     edx, 0FFFFFFF8h
 * 0000000140785DA0: add     rax, r12
 * 0000000140785DA3: sub     rbx, r13
 * 0000000140785DA6: jnz     short loc_140785D9A
 * 0000000140785DA8: test    edx, edx
 * 0000000140785DAA: jz      short loc_140785DB7
 * 0000000140785DAC: mov     [rax], r10b
 * 0000000140785DAF: add     rax, r13
 * 0000000140785DB2: add     edx, 0FFFFFFFFh
 * 0000000140785DB5: jnz     short loc_140785DAC
 * 0000000140785DB7: mov     dword ptr [rcx], 18h
 * 0000000140785DBD: mov     [rcx+8], r10
 * 0000000140785DC1: mov     [rcx+10h], r10d
 * 0000000140785DC5: mov     rdx, [r14+5D0h]
 * 0000000140785DCC: mov     rax, rdx
 * 0000000140785DCF: jmp     short loc_140785DD3
 * 0000000140785DD1: xor     edx, eax
 * 0000000140785DD3: shr     rax, 1Fh
 * 0000000140785DD7: test    rax, rax
 * 0000000140785DDA: jnz     short loc_140785DD1
 * 0000000140785DDC: btr     edx, 1Fh
 * 0000000140785DE0: mov     [rbp+1C70h+var_15F0], r14
 * 0000000140785DE7: mov     [rcx+14h], edx
 * 0000000140785DEA: lea     r15, ExpInitializeCallback
 * 0000000140785DF1: cmp     cs:ExpInitializeCallback, r10
 * 0000000140785DF8: mov     edi, r10d
 * 0000000140785DFB: jz      short loc_140785E0B
 * 0000000140785DFD: add     edi, r13d
 * 0000000140785E00: mov     eax, edi
 * 0000000140785E02: add     rax, rax
 * 0000000140785E05: cmp     [r15+rax*8], r10
 * 0000000140785E09: jnz     short loc_140785DFD
 * 0000000140785E0B: mov     r12d, [r14+59Ch]
 * 0000000140785E12: mov     r8d, [r14+67Ch]
 * 0000000140785E19: shl     edi, 4
 * 0000000140785E1C: lea     eax, [r12+30h]
 * 0000000140785E21: cmp     eax, [r14+75Ch]
 * 0000000140785E28: jbe     loc_140785EFF
 * 0000000140785E2E: mov     edx, eax
 * 0000000140785E30: mov     rcx, r14
 * 0000000140785E33: call    sub_140251E08
 * 0000000140785E38: xor     r10d, r10d
 * 0000000140785E3B: mov     rbx, rax
 * 0000000140785E3E: test    rax, rax
 * 0000000140785E41: jz      loc_14077C9F7
 * 0000000140785E47: mov     edx, [r14+6D8h]
 * 0000000140785E4E: test    dl, 4
 * 0000000140785E51: jnz     loc_140785EF6
 * 0000000140785E57: mov     ecx, [r14+59Ch]
 * 0000000140785E5E: and     edx, 20000000h
 * 0000000140785E64: mov     r9, [r14+580h]
 * 0000000140785E6B: neg     edx
 * 0000000140785E6D: sbb     r8d, r8d
 * 0000000140785E70: and     r8d, [r14+67Ch]
 * 0000000140785E77: cmp     ecx, 8
 * 0000000140785E7A: jb      short loc_140785E91
 * 0000000140785E7C: mov     eax, ecx
 * 0000000140785E7E: shr     rax, 3
 * 0000000140785E82: mov     [r14], r10
 * 0000000140785E85: add     ecx, 0FFFFFFF8h
 * 0000000140785E88: add     r14, 8
 * 0000000140785E8C: sub     rax, r13
 * 0000000140785E8F: jnz     short loc_140785E82
 * 0000000140785E91: test    ecx, ecx
 * 0000000140785E93: jz      short loc_140785EA0
 * 0000000140785E95: mov     [r14], r10b
 * 0000000140785E98: add     r14, r13
 * 0000000140785E9B: add     ecx, 0FFFFFFFFh
 * 0000000140785E9E: jnz     short loc_140785E95
 * 0000000140785EA0: mov     r14d, [rbx+67Ch]
 * 0000000140785EA7: mov     [rbx+67Ch], r8d
 * 0000000140785EAE: cmp     r8d, 3
 * 0000000140785EB2: jz      short loc_140785EE3
 * 0000000140785EB4: test    dword ptr [rbx+6D8h], 10000000h
 * 0000000140785EBE: mov     ecx, r10d
 * 0000000140785EC1: cmovz   ecx, r8d
 * 0000000140785EC5: test    ecx, ecx
 * 0000000140785EC7: jz      short loc_140785ED8
 * 0000000140785EC9: lea     rcx, [r9-8]
 * 0000000140785ECD: mov     rdx, [rcx]
 * 0000000140785ED0: call    qword ptr [rbx+210h]
 * 0000000140785ED6: jmp     short loc_140785EEC
 * 0000000140785ED8: mov     rcx, r9
 * 0000000140785EDB: call    qword ptr [rbx+0E8h]
 * 0000000140785EE1: jmp     short loc_140785EEC
 * 0000000140785EE3: mov     rcx, r9
 * 0000000140785EE6: call    qword ptr [rbx+348h]
 * 0000000140785EEC: mov     [rbx+67Ch], r14d
 * 0000000140785EF3: xor     r10d, r10d
 * 0000000140785EF6: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 0000000140785EFD: jmp     short loc_140785F09
 * 0000000140785EFF: mov     rbx, r14
 * 0000000140785F02: mov     [r14+59Ch], eax
 * 0000000140785F09: add     [rbx+5C4h], r13d
 * 0000000140785F10: lea     r9, [rbx+r12]
 * 0000000140785F14: mov     ecx, 30h ; '0'
 * 0000000140785F19: mov     [rbp+1C70h+var_13B0], r9
 * 0000000140785F20: mov     rax, r9
 * 0000000140785F23: mov     r12d, 0FFFFFFF8h
 * 0000000140785F29: lea     edx, [rcx-2Ah]
 * 0000000140785F2C: mov     [rax], r10
 * 0000000140785F2F: add     ecx, r12d
 * 0000000140785F32: add     rax, 8
 * 0000000140785F36: sub     rdx, r13
 * 0000000140785F39: jnz     short loc_140785F2C
 * 0000000140785F3B: test    ecx, ecx
 * 0000000140785F3D: jz      short loc_140785F4A
 * 0000000140785F3F: mov     [rax], r10b
 * 0000000140785F42: add     rax, r13
 * 0000000140785F45: add     ecx, 0FFFFFFFFh
 * 0000000140785F48: jnz     short loc_140785F3F
 * 0000000140785F4A: mov     dword ptr [r9], 1Dh
 * 0000000140785F51: mov     rax, r15
 * 0000000140785F54: mov     [r9+8], r15
 * 0000000140785F58: mov     [r9+10h], edi
 * 0000000140785F5C: add     [rbx+5E0h], edi
 * 0000000140785F62: mov     r11d, [rbx+5CCh]
 * 0000000140785F69: mov     rdx, [rbx+5D0h]
 * 0000000140785F70: mov     ecx, edi
 * 0000000140785F72: add     rcx, r15
 * 0000000140785F75: cmp     r15, rcx
 * 0000000140785F78: jnb     short loc_140785F86
 * 0000000140785F7A: prefetchnta byte ptr [rax]
 * 0000000140785F7D: add     rax, 40h ; '@'
 * 0000000140785F81: cmp     rax, rcx
 * 0000000140785F84: jb      short loc_140785F7A
 * 0000000140785F86: mov     r8d, edi
 * 0000000140785F89: cmp     edi, 8
 * 0000000140785F8C: jb      short loc_140785FAA
 * 0000000140785F8E: mov     r10d, edi
 * 0000000140785F91: shr     r10, 3
 * 0000000140785F95: xor     rdx, [r15]
 * 0000000140785F98: mov     ecx, r11d
 * 0000000140785F9B: rol     rdx, cl
 * 0000000140785F9E: add     r15, 8
 * 0000000140785FA2: add     r8d, r12d
 * 0000000140785FA5: sub     r10, r13
 * 0000000140785FA8: jnz     short loc_140785F95
 * 0000000140785FAA: test    r8d, r8d
 * 0000000140785FAD: jz      short loc_140785FC5
 * 0000000140785FAF: movzx   eax, byte ptr [r15]
 * 0000000140785FB3: mov     ecx, r11d
 * 0000000140785FB6: xor     rdx, rax
 * 0000000140785FB9: add     r15, r13
 * 0000000140785FBC: rol     rdx, cl
 * 0000000140785FBF: add     r8d, 0FFFFFFFFh
 * 0000000140785FC3: jnz     short loc_140785FAF
 * 0000000140785FC5: mov     rax, rdx
 * 0000000140785FC8: jmp     short loc_140785FCC
 * 0000000140785FCA: xor     edx, eax
 * 0000000140785FCC: shr     rax, 1Fh
 * 0000000140785FD0: test    rax, rax
 * 0000000140785FD3: jnz     short loc_140785FCA
 * 0000000140785FD5: btr     edx, 1Fh
 * 0000000140785FD9: mov     [r9+14h], edx
 * 0000000140785FDD: mov     rax, [rbp+1C70h+var_13B0]
 * 0000000140785FE4: mov     [rbp+1C70h+var_13A8], rax
 * 0000000140785FEB: add     [rbx+5E0h], edi
 * 0000000140785FF1: mov     eax, [rbx+6D8h]
 * 0000000140785FF7: bt      eax, 1Eh
 * 0000000140785FFB: jnb     loc_140786216
 * 0000000140786001: mov     rax, [rbp+1C70h+var_13A8]
 * 0000000140786008: mov     r12d, [rbx+59Ch]
 * 000000014078600F: mov     r8d, [rbx+67Ch]
 * 0000000140786016: mov     r15d, [rax+10h]
 * 000000014078601A: mov     r14, [rax+8]
 * 000000014078601E: lea     eax, [r12+30h]
 * 0000000140786023: cmp     eax, [rbx+75Ch]
 * 0000000140786029: jbe     loc_1407860FC
 * 000000014078602F: mov     edx, eax
 * 0000000140786031: mov     rcx, rbx
 * 0000000140786034: call    sub_140251E08
 * 0000000140786039: xor     r10d, r10d
 * 000000014078603C: mov     rdi, rax
 * 000000014078603F: test    rax, rax
 * 0000000140786042: jz      loc_14077C9F7
 * 0000000140786048: mov     edx, [rbx+6D8h]
 * 000000014078604E: test    dl, 4
 * 0000000140786051: jnz     loc_1407860F3
 * 0000000140786057: mov     ecx, [rbx+59Ch]
 * 000000014078605D: and     edx, 20000000h
 * 0000000140786063: mov     r9, [rbx+580h]
 * 000000014078606A: neg     edx
 * 000000014078606C: sbb     r8d, r8d
 * 000000014078606F: and     r8d, [rbx+67Ch]
 * 0000000140786076: cmp     ecx, 8
 * 0000000140786079: jb      short loc_140786090
 * 000000014078607B: mov     eax, ecx
 * 000000014078607D: shr     rax, 3
 * 0000000140786081: mov     [rbx], r10
 * 0000000140786084: add     ecx, 0FFFFFFF8h
 * 0000000140786087: add     rbx, 8
 * 000000014078608B: sub     rax, r13
 * 000000014078608E: jnz     short loc_140786081
 * 0000000140786090: test    ecx, ecx
 * 0000000140786092: jz      short loc_14078609F
 * 0000000140786094: mov     [rbx], r10b
 * 0000000140786097: add     rbx, r13
 * 000000014078609A: add     ecx, 0FFFFFFFFh
 * 000000014078609D: jnz     short loc_140786094
 * 000000014078609F: mov     ebx, [rdi+67Ch]
 * 00000001407860A5: mov     [rdi+67Ch], r8d
 * 00000001407860AC: cmp     r8d, 3
 * 00000001407860B0: jz      short loc_1407860E1
 * 00000001407860B2: test    dword ptr [rdi+6D8h], 10000000h
 * 00000001407860BC: mov     ecx, r10d
 * 00000001407860BF: cmovz   ecx, r8d
 * 00000001407860C3: test    ecx, ecx
 * 00000001407860C5: jz      short loc_1407860D6
 * 00000001407860C7: lea     rcx, [r9-8]
 * 00000001407860CB: mov     rdx, [rcx]
 * 00000001407860CE: call    qword ptr [rdi+210h]
 * 00000001407860D4: jmp     short loc_1407860EA
 * 00000001407860D6: mov     rcx, r9
 * 00000001407860D9: call    qword ptr [rdi+0E8h]
 * 00000001407860DF: jmp     short loc_1407860EA
 * 00000001407860E1: mov     rcx, r9
 * 00000001407860E4: call    qword ptr [rdi+348h]
 * 00000001407860EA: mov     [rdi+67Ch], ebx
 * 00000001407860F0: xor     r10d, r10d
 * 00000001407860F3: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 00000001407860FA: jmp     short loc_140786105
 * 00000001407860FC: mov     rdi, rbx
 * 00000001407860FF: mov     [rbx+59Ch], eax
 * 0000000140786105: add     [rdi+5C4h], r13d
 * 000000014078610C: lea     rbx, [rdi+r12]
 * 0000000140786110: mov     ecx, 30h ; '0'
 * 0000000140786115: mov     [rbp+1C70h+var_13A0], rbx
 * 000000014078611C: mov     rax, rbx
 * 000000014078611F: mov     r12d, 0FFFFFFF8h
 * 0000000140786125: lea     edx, [rcx-2Ah]
 * 0000000140786128: mov     [rax], r10
 * 000000014078612B: add     ecx, r12d
 * 000000014078612E: add     rax, 8
 * 0000000140786132: sub     rdx, r13
 * 0000000140786135: jnz     short loc_140786128
 * 0000000140786137: test    ecx, ecx
 * 0000000140786139: jz      short loc_140786146
 * 000000014078613B: mov     [rax], r10b
 * 000000014078613E: add     rax, r13
 * 0000000140786141: add     ecx, 0FFFFFFFFh
 * 0000000140786144: jnz     short loc_14078613B
 * 0000000140786146: mov     eax, 20h ; ' '
 * 000000014078614B: mov     [rbx], eax
 * 000000014078614D: mov     [rbx+8], r14
 * 0000000140786151: test    r15d, r15d
 * 0000000140786154: jz      short loc_14078616B
 * 0000000140786156: lea     r9, [rbx+18h]
 * 000000014078615A: mov     r8d, r15d
 * 000000014078615D: mov     rdx, r14
 * 0000000140786160: mov     rcx, rdi
 * 0000000140786163: call    sub_1401588B8
 * 0000000140786168: xor     r10d, r10d
 * 000000014078616B: mov     [rbx+10h], r15d
 * 000000014078616F: lea     rcx, [r14+r15]
 * 0000000140786173: add     [rdi+5E0h], r15d
 * 000000014078617A: mov     rax, r14
 * 000000014078617D: mov     r9d, [rdi+5CCh]
 * 0000000140786184: mov     rdx, [rdi+5D0h]
 * 000000014078618B: cmp     r14, rcx
 * 000000014078618E: jnb     short loc_14078619C
 * 0000000140786190: prefetchnta byte ptr [rax]
 * 0000000140786193: add     rax, 40h ; '@'
 * 0000000140786197: cmp     rax, rcx
 * 000000014078619A: jb      short loc_140786190
 * 000000014078619C: mov     r8d, r15d
 * 000000014078619F: cmp     r15d, 8
 * 00000001407861A3: jb      short loc_1407861C1
 * 00000001407861A5: mov     rax, r15
 * 00000001407861A8: shr     rax, 3
 * 00000001407861AC: xor     rdx, [r14]
 * 00000001407861AF: mov     ecx, r9d
 * 00000001407861B2: rol     rdx, cl
 * 00000001407861B5: add     r14, 8
 * 00000001407861B9: add     r8d, r12d
 * 00000001407861BC: sub     rax, r13
 * 00000001407861BF: jnz     short loc_1407861AC
 * 00000001407861C1: test    r8d, r8d
 * 00000001407861C4: jz      short loc_1407861DC
 * 00000001407861C6: movzx   eax, byte ptr [r14]
 * 00000001407861CA: mov     ecx, r9d
 * 00000001407861CD: xor     rdx, rax
 * 00000001407861D0: add     r14, r13
 * 00000001407861D3: rol     rdx, cl
 * 00000001407861D6: add     r8d, 0FFFFFFFFh
 * 00000001407861DA: jnz     short loc_1407861C6
 * 00000001407861DC: mov     rax, rdx
 * 00000001407861DF: jmp     short loc_1407861E3
 * 00000001407861E1: xor     edx, eax
 * 00000001407861E3: shr     rax, 1Fh
 * 00000001407861E7: test    rax, rax
 * 00000001407861EA: jnz     short loc_1407861E1
 * 00000001407861EC: btr     edx, 1Fh
 * 00000001407861F0: mov     [rbx+14h], edx
 * 00000001407861F3: mov     rbx, rdi
 * 00000001407861F6: mov     rax, [rbp+1C70h+var_13A0]
 * 00000001407861FD: mov     [rbp+1C70h+var_1398], rax
 * 0000000140786204: add     [rdi+5E0h], r15d
 * 000000014078620B: mov     rax, [rbp+1C70h+var_1398]
 * 0000000140786212: mov     [rax+28h], r10d
 * 0000000140786216: mov     [rbp+1C70h+var_15F0], rbx
 * 000000014078621D: test    rbx, rbx
 * 0000000140786220: jz      loc_14077C9F7
 * 0000000140786226: cli
 * 0000000140786227: cmp     byte ptr cs:KdDebuggerNotPresent, r10b
 * 000000014078622E: jnz     short loc_140786232
 * 0000000140786230: jmp     short loc_140786230
 * 0000000140786232: sti
 * 0000000140786233: mov     rax, cs:ObpTypeObjectType
 * 000000014078623A: mov     r15d, r10d
 * 000000014078623D: mov     r12d, [rbx+59Ch]
 * 0000000140786244: mov     r9d, 20h ; ' '
 * 000000014078624A: mov     r8d, [rbx+67Ch]
 * 0000000140786251: mov     eax, [rax+2Ch]
 * 0000000140786254: mov     r14d, eax
 * 0000000140786257: shl     r14d, 3
 * 000000014078625B: cmp     dword ptr [rbx+5F0h], 7
 * 0000000140786262: mov     dword ptr [rsp+1D70h+Src], eax
 * 0000000140786266: lea     eax, [r12+30h]
 * 000000014078626B: cmovz   r15d, r9d
 * 000000014078626F: cmp     eax, [rbx+75Ch]
 * 0000000140786275: jbe     loc_14078634E
 * 000000014078627B: mov     edx, eax
 * 000000014078627D: mov     rcx, rbx
 * 0000000140786280: call    sub_140251E08
 * 0000000140786285: xor     r10d, r10d
 * 0000000140786288: mov     rdi, rax
 * 000000014078628B: test    rax, rax
 * 000000014078628E: jz      loc_14077C9F7
 * 0000000140786294: mov     edx, [rbx+6D8h]
 * 000000014078629A: test    dl, 4
 * 000000014078629D: jnz     loc_14078633F
 * 00000001407862A3: mov     ecx, [rbx+59Ch]
 * 00000001407862A9: and     edx, 20000000h
 * 00000001407862AF: mov     r9, [rbx+580h]
 * 00000001407862B6: neg     edx
 * 00000001407862B8: sbb     r8d, r8d
 * 00000001407862BB: and     r8d, [rbx+67Ch]
 * 00000001407862C2: cmp     ecx, 8
 * 00000001407862C5: jb      short loc_1407862DC
 * 00000001407862C7: mov     eax, ecx
 * 00000001407862C9: shr     rax, 3
 * 00000001407862CD: mov     [rbx], r10
 * 00000001407862D0: add     ecx, 0FFFFFFF8h
 * 00000001407862D3: add     rbx, 8
 * 00000001407862D7: sub     rax, r13
 * 00000001407862DA: jnz     short loc_1407862CD
 * 00000001407862DC: test    ecx, ecx
 * 00000001407862DE: jz      short loc_1407862EB
 * 00000001407862E0: mov     [rbx], r10b
 * 00000001407862E3: add     rbx, r13
 * 00000001407862E6: add     ecx, 0FFFFFFFFh
 * 00000001407862E9: jnz     short loc_1407862E0
 * 00000001407862EB: mov     ebx, [rdi+67Ch]
 * 00000001407862F1: mov     [rdi+67Ch], r8d
 * 00000001407862F8: cmp     r8d, 3
 * 00000001407862FC: jz      short loc_14078632D
 * 00000001407862FE: test    dword ptr [rdi+6D8h], 10000000h
 * 0000000140786308: mov     ecx, r10d
 * 000000014078630B: cmovz   ecx, r8d
 * 000000014078630F: test    ecx, ecx
 * 0000000140786311: jz      short loc_140786322
 * 0000000140786313: lea     rcx, [r9-8]
 * 0000000140786317: mov     rdx, [rcx]
 * 000000014078631A: call    qword ptr [rdi+210h]
 * 0000000140786320: jmp     short loc_140786336
 * 0000000140786322: mov     rcx, r9
 * 0000000140786325: call    qword ptr [rdi+0E8h]
 * 000000014078632B: jmp     short loc_140786336
 * 000000014078632D: mov     rcx, r9
 * 0000000140786330: call    qword ptr [rdi+348h]
 * 0000000140786336: mov     [rdi+67Ch], ebx
 * 000000014078633C: xor     r10d, r10d
 * 000000014078633F: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 0000000140786346: mov     r9d, 20h ; ' '
 * 000000014078634C: jmp     short loc_140786357
 * 000000014078634E: mov     rdi, rbx
 * 0000000140786351: mov     [rbx+59Ch], eax
 * 0000000140786357: add     [rdi+5C4h], r13d
 * 000000014078635E: lea     rbx, [rdi+r12]
 * 0000000140786362: mov     ecx, 30h ; '0'
 * 0000000140786367: mov     [rbp+1C70h+var_1390], rbx
 * 000000014078636E: mov     rax, rbx
 * 0000000140786371: mov     r12d, 0FFFFFFF8h
 * 0000000140786377: lea     edx, [rcx-2Ah]
 * 000000014078637A: mov     [rax], r10
 * 000000014078637D: add     ecx, r12d
 * 0000000140786380: add     rax, 8
 * 0000000140786384: sub     rdx, r13
 * 0000000140786387: jnz     short loc_14078637A
 * 0000000140786389: test    ecx, ecx
 * 000000014078638B: jz      short loc_140786398
 * 000000014078638D: mov     [rax], r10b
 * 0000000140786390: add     rax, r13
 * 0000000140786393: add     ecx, 0FFFFFFFFh
 * 0000000140786396: jnz     short loc_14078638D
 * 0000000140786398: mov     [rbx], r15d
 * 000000014078639B: lea     r8, ObpObjectTypes
 * 00000001407863A2: mov     [rbx+8], r8
 * 00000001407863A6: cmp     r15d, r9d
 * 00000001407863A9: jnz     short loc_1407863CD
 * 00000001407863AB: test    r14d, r14d
 * 00000001407863AE: jz      short loc_1407863CD
 * 00000001407863B0: lea     r9, [rbx+18h]
 * 00000001407863B4: mov     r8d, r14d
 * 00000001407863B7: lea     rdx, ObpObjectTypes
 * 00000001407863BE: mov     rcx, rdi
 * 00000001407863C1: call    sub_1401588B8
 * 00000001407863C6: lea     r8, ObpObjectTypes
 * 00000001407863CD: mov     [rbx+10h], r14d
 * 00000001407863D1: mov     r9, r8
 * 00000001407863D4: add     [rdi+5E0h], r14d
 * 00000001407863DB: mov     rax, r8
 * 00000001407863DE: mov     r11d, [rdi+5CCh]
 * 00000001407863E5: mov     rdx, [rdi+5D0h]
 * 00000001407863EC: mov     ecx, r14d
 * 00000001407863EF: add     rcx, r8
 * 00000001407863F2: cmp     r8, rcx
 * 00000001407863F5: jnb     short loc_140786403
 * 00000001407863F7: prefetchnta byte ptr [rax]
 * 00000001407863FA: add     rax, 40h ; '@'
 * 00000001407863FE: cmp     rax, rcx
 * 0000000140786401: jb      short loc_1407863F7
 * 0000000140786403: mov     r8d, r14d
 * 0000000140786406: cmp     r14d, 8
 * 000000014078640A: jb      short loc_140786428
 * 000000014078640C: mov     r10d, r14d
 * 000000014078640F: shr     r10, 3
 * 0000000140786413: xor     rdx, [r9]
 * 0000000140786416: mov     ecx, r11d
 * 0000000140786419: rol     rdx, cl
 * 000000014078641C: add     r9, 8
 * 0000000140786420: add     r8d, r12d
 * 0000000140786423: sub     r10, r13
 * 0000000140786426: jnz     short loc_140786413
 * 0000000140786428: test    r8d, r8d
 * 000000014078642B: jz      short loc_140786443
 * 000000014078642D: movzx   eax, byte ptr [r9]
 * 0000000140786431: mov     ecx, r11d
 * 0000000140786434: xor     rdx, rax
 * 0000000140786437: add     r9, r13
 * 000000014078643A: rol     rdx, cl
 * 000000014078643D: add     r8d, 0FFFFFFFFh
 * 0000000140786441: jnz     short loc_14078642D
 * 0000000140786443: mov     rax, rdx
 * 0000000140786446: shr     rax, 1Fh
 * 000000014078644A: xor     r11d, r11d
 * 000000014078644D: jmp     short loc_140786455
 * 000000014078644F: xor     edx, eax
 * 0000000140786451: shr     rax, 1Fh
 * 0000000140786455: test    rax, rax
 * 0000000140786458: jnz     short loc_14078644F
 * 000000014078645A: btr     edx, 1Fh
 * 000000014078645E: mov     ecx, r11d
 * 0000000140786461: mov     [rbx+14h], edx
 * 0000000140786464: add     [rdi+5E0h], r14d
 * 000000014078646B: mov     dword ptr [rsp+1D70h+var_1D08], ecx
 * 000000014078646F: cmp     dword ptr [rsp+1D70h+Src], r11d
 * 0000000140786474: jbe     loc_1407869F0
 * 000000014078647A: mov     eax, dword ptr [rsp+1D70h+Src]
 * 000000014078647E: lea     rdx, ObpObjectTypes
 * 0000000140786485: mov     r10, r11
 * 0000000140786488: mov     [rsp+1D70h+var_1D00], r11
 * 000000014078648D: mov     r10, [rdx+r10*8]
 * 0000000140786491: mov     [rbp+1C70h+var_1CD0], r10
 * 0000000140786495: test    r10, r10
 * 0000000140786498: jz      loc_1407869D4
 * 000000014078649E: lea     r15, [r10-30h]
 * 00000001407864A2: mov     al, [r15+1Ah]
 * 00000001407864A6: test    al, 2
 * 00000001407864A8: jz      short loc_1407864C4
 * 00000001407864AA: movzx   eax, al
 * 00000001407864AD: lea     rbx, cs:140000000h
 * 00000001407864B4: and     eax, 3
 * 00000001407864B7: movzx   eax, byte ptr [rax+rbx+306C40h]
 * 00000001407864BF: sub     r15, rax
 * 00000001407864C2: jmp     short loc_1407864C7
 * 00000001407864C4: mov     r15, r11
 * 00000001407864C7: test    r15, r15
 * 00000001407864CA: jz      loc_1407869D0
 * 00000001407864D0: movzx   eax, word ptr [r15+8]
 * 00000001407864D5: test    ax, ax
 * 00000001407864D8: jz      loc_1407869D0
 * 00000001407864DE: cmp     [r10+28h], r11b
 * 00000001407864E2: jz      loc_1407869D0
 * 00000001407864E8: mov     r8d, [rdi+67Ch]
 * 00000001407864EF: lea     r14, [r10+70h]
 * 00000001407864F3: movzx   r11d, ax
 * 00000001407864F7: add     r11d, 1Ah
 * 00000001407864FB: mov     dword ptr [rsp+1D70h+NtHeaders], r11d
 * 0000000140786500: lea     ecx, [r11+7]
 * 0000000140786504: and     ecx, r12d
 * 0000000140786507: mov     r12d, [rdi+59Ch]
 * 000000014078650E: add     ecx, 30h ; '0'
 * 0000000140786511: add     ecx, r12d
 * 0000000140786514: cmp     ecx, [rdi+75Ch]
 * 000000014078651A: jbe     loc_1407865F3
 * 0000000140786520: mov     edx, ecx
 * 0000000140786522: mov     rcx, rdi
 * 0000000140786525: call    sub_140251E08
 * 000000014078652A: xor     r10d, r10d
 * 000000014078652D: mov     rbx, rax
 * 0000000140786530: test    rax, rax
 * 0000000140786533: jz      loc_14077C9F7
 * 0000000140786539: mov     edx, [rdi+6D8h]
 * 000000014078653F: test    dl, 4
 * 0000000140786542: jnz     loc_1407865E1
 * 0000000140786548: mov     ecx, [rdi+59Ch]
 * 000000014078654E: and     edx, 20000000h
 * 0000000140786554: mov     r9, [rdi+580h]
 * 000000014078655B: neg     edx
 * 000000014078655D: sbb     r8d, r8d
 * 0000000140786560: and     r8d, [rdi+67Ch]
 * 0000000140786567: cmp     ecx, 8
 * 000000014078656A: jb      short loc_140786581
 * 000000014078656C: mov     eax, ecx
 * 000000014078656E: shr     rax, 3
 * 0000000140786572: mov     [rdi], r10
 * 0000000140786575: add     ecx, 0FFFFFFF8h
 * 0000000140786578: add     rdi, 8
 * 000000014078657C: sub     rax, r13
 * 000000014078657F: jnz     short loc_140786572
 * 0000000140786581: test    ecx, ecx
 * 0000000140786583: jz      short loc_140786590
 * 0000000140786585: mov     [rdi], r10b
 * 0000000140786588: add     rdi, r13
 * 000000014078658B: add     ecx, 0FFFFFFFFh
 * 000000014078658E: jnz     short loc_140786585
 * 0000000140786590: mov     edi, [rbx+67Ch]
 * 0000000140786596: mov     [rbx+67Ch], r8d
 * 000000014078659D: cmp     r8d, 3
 * 00000001407865A1: jz      short loc_1407865D2
 * 00000001407865A3: test    dword ptr [rbx+6D8h], 10000000h
 * 00000001407865AD: mov     ecx, r10d
 * 00000001407865B0: cmovz   ecx, r8d
 * 00000001407865B4: test    ecx, ecx
 * 00000001407865B6: jz      short loc_1407865C7
 * 00000001407865B8: lea     rcx, [r9-8]
 * 00000001407865BC: mov     rdx, [rcx]
 * 00000001407865BF: call    qword ptr [rbx+210h]
 * 00000001407865C5: jmp     short loc_1407865DB
 * 00000001407865C7: mov     rcx, r9
 * 00000001407865CA: call    qword ptr [rbx+0E8h]
 * 00000001407865D0: jmp     short loc_1407865DB
 * 00000001407865D2: mov     rcx, r9
 * 00000001407865D5: call    qword ptr [rbx+348h]
 * 00000001407865DB: mov     [rbx+67Ch], edi
 * 00000001407865E1: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 00000001407865E8: mov     r10, [rbp+1C70h+var_1CD0]
 * 00000001407865EC: mov     r11d, dword ptr [rsp+1D70h+NtHeaders]
 * 00000001407865F1: jmp     short loc_1407865FC
 * 00000001407865F3: mov     rbx, rdi
 * 00000001407865F6: mov     [rdi+59Ch], ecx
 * 00000001407865FC: add     [rbx+5C4h], r13d
 * 0000000140786603: lea     r8, [rbx+r12]
 * 0000000140786607: mov     ecx, 30h ; '0'
 * 000000014078660C: mov     [rbp+1C70h+var_1388], r8
 * 0000000140786613: mov     rax, r8
 * 0000000140786616: xor     edi, edi
 * 0000000140786618: mov     r12d, 0FFFFFFF8h
 * 000000014078661E: lea     edx, [rcx-2Ah]
 * 0000000140786621: mov     [rax], rdi
 * 0000000140786624: add     ecx, r12d
 * 0000000140786627: add     rax, 8
 * 000000014078662B: sub     rdx, r13
 * 000000014078662E: jnz     short loc_140786621
 * 0000000140786630: test    ecx, ecx
 * 0000000140786632: jz      short loc_14078663F
 * 0000000140786634: mov     [rax], dil
 * 0000000140786637: add     rax, r13
 * 000000014078663A: add     ecx, 0FFFFFFFFh
 * 000000014078663D: jnz     short loc_140786634
 * 000000014078663F: mov     dword ptr [r8], 8
 * 0000000140786646: lea     rcx, [r14+40h]
 * 000000014078664A: mov     [r8+8], r14
 * 000000014078664E: mov     rax, r14
 * 0000000140786651: mov     dword ptr [r8+10h], 40h ; '@'
 * 0000000140786659: add     dword ptr [rbx+5E0h], 40h ; '@'
 * 0000000140786660: mov     r9d, [rbx+5CCh]
 * 0000000140786667: mov     rdx, [rbx+5D0h]
 * 000000014078666E: cmp     r14, rcx
 * 0000000140786671: jnb     short loc_14078667F
 * 0000000140786673: prefetchnta byte ptr [rax]
 * 0000000140786676: add     rax, 40h ; '@'
 * 000000014078667A: cmp     rax, rcx
 * 000000014078667D: jb      short loc_140786673
 * 000000014078667F: mov     edi, 40h ; '@'
 * 0000000140786684: lea     eax, [rdi-38h]
 * 0000000140786687: xor     rdx, [r14]
 * 000000014078668A: mov     ecx, r9d
 * 000000014078668D: rol     rdx, cl
 * 0000000140786690: add     r14, 8
 * 0000000140786694: add     edi, r12d
 * 0000000140786697: sub     rax, r13
 * 000000014078669A: jnz     short loc_140786687
 * 000000014078669C: test    edi, edi
 * 000000014078669E: jz      short loc_1407866B5
 * 00000001407866A0: movzx   eax, byte ptr [r14]
 * 00000001407866A4: mov     ecx, r9d
 * 00000001407866A7: xor     rdx, rax
 * 00000001407866AA: add     r14, r13
 * 00000001407866AD: rol     rdx, cl
 * 00000001407866B0: add     edi, 0FFFFFFFFh
 * 00000001407866B3: jnz     short loc_1407866A0
 * 00000001407866B5: mov     rax, rdx
 * 00000001407866B8: jmp     short loc_1407866BC
 * 00000001407866BA: xor     edx, eax
 * 00000001407866BC: shr     rax, 1Fh
 * 00000001407866C0: test    rax, rax
 * 00000001407866C3: jnz     short loc_1407866BA
 * 00000001407866C5: btr     edx, 1Fh
 * 00000001407866C9: mov     r9d, 1Ah
 * 00000001407866CF: mov     [r8+14h], edx
 * 00000001407866D3: mov     rdi, rbx
 * 00000001407866D6: mov     rax, [rbp+1C70h+var_1388]
 * 00000001407866DD: mov     [rbp+1C70h+var_1380], rax
 * 00000001407866E4: add     dword ptr [rbx+5E0h], 40h ; '@'
 * 00000001407866EB: mov     rax, [rbp+1C70h+var_1380]
 * 00000001407866F2: mov     [rax+18h], r10
 * 00000001407866F6: mov     rax, [rbp+1C70h+var_1380]
 * 00000001407866FD: mov     [rax+20h], r11w
 * 0000000140786702: mov     cl, [r10+42h]
 * 0000000140786706: lea     r10d, [r9-17h]
 * 000000014078670A: mov     rax, [rbp+1C70h+var_1380]
 * 0000000140786711: mov     [rax+22h], cl
 * 0000000140786714: lea     rcx, aObjecttypes_1; "\\ObjectTypes\\"
 * 000000014078671B: mov     rdx, [rbp+1C70h+var_1380]
 * 0000000140786722: lea     r8, [rdx+30h]
 * 0000000140786726: mov     rax, [rcx]
 * 0000000140786729: add     r9d, r12d
 * 000000014078672C: mov     [r8], rax
 * 000000014078672F: add     rcx, 8
 * 0000000140786733: add     r8, 8
 * 0000000140786737: sub     r10, r13
 * 000000014078673A: jnz     short loc_140786726
 * 000000014078673C: xor     r11d, r11d
 * 000000014078673F: test    r9d, r9d
 * 0000000140786742: jz      short loc_140786755
 * 0000000140786744: mov     al, [rcx]
 * 0000000140786746: add     rcx, r13
 * 0000000140786749: mov     [r8], al
 * 000000014078674C: add     r8, r13
 * 000000014078674F: add     r9d, 0FFFFFFFFh
 * 0000000140786753: jnz     short loc_140786744
 * 0000000140786755: movzx   r8d, word ptr [r15+8]
 * 000000014078675A: add     rdx, 4Ah ; 'J'
 * 000000014078675E: mov     rcx, [r15+10h]
 * 0000000140786762: cmp     r8d, 8
 * 0000000140786766: jb      short loc_140786785
 * 0000000140786768: mov     r9d, r8d
 * 000000014078676B: shr     r9, 3
 * 000000014078676F: mov     rax, [rcx]
 * 0000000140786772: add     r8d, r12d
 * 0000000140786775: mov     [rdx], rax
 * 0000000140786778: add     rcx, 8
 * 000000014078677C: add     rdx, 8
 * 0000000140786780: sub     r9, r13
 * 0000000140786783: jnz     short loc_14078676F
 * 0000000140786785: test    r8d, r8d
 * 0000000140786788: jz      short loc_14078679B
 * 000000014078678A: sub     rdx, rcx
 * 000000014078678D: mov     al, [rcx]
 * 000000014078678F: mov     [rdx+rcx], al
 * 0000000140786792: add     rcx, r13
 * 0000000140786795: add     r8d, 0FFFFFFFFh
 * 0000000140786799: jnz     short loc_14078678D
 * 000000014078679B: test    dword ptr [rbx+6D8h], 40000000h
 * 00000001407867A5: jz      loc_1407869C5
 * 00000001407867AB: mov     rax, [rbp+1C70h+var_1380]
 * 00000001407867B2: mov     r12d, [rbx+59Ch]
 * 00000001407867B9: mov     r8d, [rbx+67Ch]
 * 00000001407867C0: mov     r15d, [rax+10h]
 * 00000001407867C4: mov     r14, [rax+8]
 * 00000001407867C8: lea     eax, [r12+30h]
 * 00000001407867CD: cmp     eax, [rbx+75Ch]
 * 00000001407867D3: jbe     loc_1407868A6
 * 00000001407867D9: mov     edx, eax
 * 00000001407867DB: mov     rcx, rbx
 * 00000001407867DE: call    sub_140251E08
 * 00000001407867E3: xor     r11d, r11d
 * 00000001407867E6: mov     rdi, rax
 * 00000001407867E9: test    rax, rax
 * 00000001407867EC: jz      loc_14077C9F7
 * 00000001407867F2: mov     edx, [rbx+6D8h]
 * 00000001407867F8: test    dl, 4
 * 00000001407867FB: jnz     loc_14078689D
 * 0000000140786801: mov     ecx, [rbx+59Ch]
 * 0000000140786807: and     edx, 20000000h
 * 000000014078680D: mov     r9, [rbx+580h]
 * 0000000140786814: neg     edx
 * 0000000140786816: sbb     r8d, r8d
 * 0000000140786819: and     r8d, [rbx+67Ch]
 * 0000000140786820: cmp     ecx, 8
 * 0000000140786823: jb      short loc_14078683A
 * 0000000140786825: mov     eax, ecx
 * 0000000140786827: shr     rax, 3
 * 000000014078682B: mov     [rbx], r11
 * 000000014078682E: add     ecx, 0FFFFFFF8h
 * 0000000140786831: add     rbx, 8
 * 0000000140786835: sub     rax, r13
 * 0000000140786838: jnz     short loc_14078682B
 * 000000014078683A: test    ecx, ecx
 * 000000014078683C: jz      short loc_140786849
 * 000000014078683E: mov     [rbx], r11b
 * 0000000140786841: add     rbx, r13
 * 0000000140786844: add     ecx, 0FFFFFFFFh
 * 0000000140786847: jnz     short loc_14078683E
 * 0000000140786849: mov     ebx, [rdi+67Ch]
 * 000000014078684F: mov     [rdi+67Ch], r8d
 * 0000000140786856: cmp     r8d, 3
 * 000000014078685A: jz      short loc_14078688B
 * 000000014078685C: test    dword ptr [rdi+6D8h], 10000000h
 * 0000000140786866: mov     ecx, r11d
 * 0000000140786869: cmovz   ecx, r8d
 * 000000014078686D: test    ecx, ecx
 * 000000014078686F: jz      short loc_140786880
 * 0000000140786871: lea     rcx, [r9-8]
 * 0000000140786875: mov     rdx, [rcx]
 * 0000000140786878: call    qword ptr [rdi+210h]
 * 000000014078687E: jmp     short loc_140786894
 * 0000000140786880: mov     rcx, r9
 * 0000000140786883: call    qword ptr [rdi+0E8h]
 * 0000000140786889: jmp     short loc_140786894
 * 000000014078688B: mov     rcx, r9
 * 000000014078688E: call    qword ptr [rdi+348h]
 * 0000000140786894: mov     [rdi+67Ch], ebx
 * 000000014078689A: xor     r11d, r11d
 * 000000014078689D: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 00000001407868A4: jmp     short loc_1407868AC
 * 00000001407868A6: mov     [rbx+59Ch], eax
 * 00000001407868AC: add     [rdi+5C4h], r13d
 * 00000001407868B3: lea     rbx, [rdi+r12]
 * 00000001407868B7: mov     ecx, 30h ; '0'
 * 00000001407868BC: mov     [rbp+1C70h+var_1378], rbx
 * 00000001407868C3: mov     rax, rbx
 * 00000001407868C6: mov     r12d, 0FFFFFFF8h
 * 00000001407868CC: lea     edx, [rcx-2Ah]
 * 00000001407868CF: mov     [rax], r11
 * 00000001407868D2: add     ecx, r12d
 * 00000001407868D5: add     rax, 8
 * 00000001407868D9: sub     rdx, r13
 * 00000001407868DC: jnz     short loc_1407868CF
 * 00000001407868DE: test    ecx, ecx
 * 00000001407868E0: jz      short loc_1407868ED
 * 00000001407868E2: mov     [rax], r11b
 * 00000001407868E5: add     rax, r13
 * 00000001407868E8: add     ecx, 0FFFFFFFFh
 * 00000001407868EB: jnz     short loc_1407868E2
 * 00000001407868ED: mov     eax, 20h ; ' '
 * 00000001407868F2: mov     [rbx], eax
 * 00000001407868F4: mov     [rbx+8], r14
 * 00000001407868F8: test    r15d, r15d
 * 00000001407868FB: jz      short loc_140786912
 * 00000001407868FD: lea     r9, [rbx+18h]
 * 0000000140786901: mov     r8d, r15d
 * 0000000140786904: mov     rdx, r14
 * 0000000140786907: mov     rcx, rdi
 * 000000014078690A: call    sub_1401588B8
 * 000000014078690F: xor     r11d, r11d
 * 0000000140786912: mov     [rbx+10h], r15d
 * 0000000140786916: lea     rcx, [r14+r15]
 * 000000014078691A: add     [rdi+5E0h], r15d
 * 0000000140786921: mov     rax, r14
 * 0000000140786924: mov     r9d, [rdi+5CCh]
 * 000000014078692B: mov     rdx, [rdi+5D0h]
 * 0000000140786932: cmp     r14, rcx
 * 0000000140786935: jnb     short loc_140786943
 * 0000000140786937: prefetchnta byte ptr [rax]
 * 000000014078693A: add     rax, 40h ; '@'
 * 000000014078693E: cmp     rax, rcx
 * 0000000140786941: jb      short loc_140786937
 * 0000000140786943: mov     r8d, r15d
 * 0000000140786946: cmp     r15d, 8
 * 000000014078694A: jb      short loc_140786968
 * 000000014078694C: mov     rax, r15
 * 000000014078694F: shr     rax, 3
 * 0000000140786953: xor     rdx, [r14]
 * 0000000140786956: mov     ecx, r9d
 * 0000000140786959: rol     rdx, cl
 * 000000014078695C: add     r14, 8
 * 0000000140786960: add     r8d, r12d
 * 0000000140786963: sub     rax, r13
 * 0000000140786966: jnz     short loc_140786953
 * 0000000140786968: test    r8d, r8d
 * 000000014078696B: jz      short loc_140786983
 * 000000014078696D: movzx   eax, byte ptr [r14]
 * 0000000140786971: mov     ecx, r9d
 * 0000000140786974: xor     rdx, rax
 * 0000000140786977: add     r14, r13
 * 000000014078697A: rol     rdx, cl
 * 000000014078697D: add     r8d, 0FFFFFFFFh
 * 0000000140786981: jnz     short loc_14078696D
 * 0000000140786983: mov     rax, rdx
 * 0000000140786986: jmp     short loc_14078698A
 * 0000000140786988: xor     edx, eax
 * 000000014078698A: shr     rax, 1Fh
 * 000000014078698E: test    rax, rax
 * 0000000140786991: jnz     short loc_140786988
 * 0000000140786993: btr     edx, 1Fh
 * 0000000140786997: mov     [rbx+14h], edx
 * 000000014078699A: mov     rax, [rbp+1C70h+var_1378]
 * 00000001407869A1: mov     [rbp+1C70h+var_1370], rax
 * 00000001407869A8: add     [rdi+5E0h], r15d
 * 00000001407869AF: mov     rax, [rbp+1C70h+var_1370]
 * 00000001407869B6: mov     [rax+28h], r11d
 * 00000001407869BA: mov     rax, [rbp+1C70h+var_1370]
 * 00000001407869C1: or      [rax+28h], r13d
 * 00000001407869C5: mov     ecx, dword ptr [rsp+1D70h+var_1D08]
 * 00000001407869C9: lea     rdx, ObpObjectTypes
 * 00000001407869D0: mov     eax, dword ptr [rsp+1D70h+Src]
 * 00000001407869D4: mov     r10, [rsp+1D70h+var_1D00]
 * 00000001407869D9: add     ecx, r13d
 * 00000001407869DC: add     r10, r13
 * 00000001407869DF: mov     dword ptr [rsp+1D70h+var_1D08], ecx
 * 00000001407869E3: mov     [rsp+1D70h+var_1D00], r10
 * 00000001407869E8: cmp     ecx, eax
 * 00000001407869EA: jb      loc_14078648D
 * 00000001407869F0: test    rdi, rdi
 * 00000001407869F3: jz      loc_14077C9F7
 * 00000001407869F9: mov     r9d, dword ptr [rbp+1C70h+var_1C18]
 * 00000001407869FD: mov     edx, 27h ; '''
 * 0000000140786A02: mov     r8d, [rbp+1C70h+var_1C98]
 * 0000000140786A06: mov     rcx, rdi
 * 0000000140786A09: call    $$5e
 * 0000000140786A0E: xor     r12d, r12d
 * 0000000140786A11: mov     [rbp+1C70h+var_15F0], rax
 * 0000000140786A18: mov     rdi, rax
 * 0000000140786A1B: test    rax, rax
 * 0000000140786A1E: jz      loc_14077C9F7
 * 0000000140786A24: test    dword ptr [rax+6D8h], 8000000h
 * 0000000140786A2E: jnz     short loc_140786A95
 * 0000000140786A30: lea     rbx, [rax+798h]
 * 0000000140786A37: mov     ecx, [rbx]
 * 0000000140786A39: lea     rax, [rbx+8]
 * 0000000140786A3D: mov     r15d, [rbx+4]
 * 0000000140786A41: lea     edx, [r12+28h]
 * 0000000140786A46: shl     rcx, 4
 * 0000000140786A4A: add     rcx, rax
 * 0000000140786A4D: shl     r15d, 4
 * 0000000140786A51: mov     r14d, ecx
 * 0000000140786A54: sub     ecx, ebx
 * 0000000140786A56: mov     r9d, ecx
 * 0000000140786A59: sub     ebx, edi
 * 0000000140786A5B: mov     r8d, ebx
 * 0000000140786A5E: mov     rcx, rdi
 * 0000000140786A61: sub     r14d, edi
 * 0000000140786A64: call    $$5e
 * 0000000140786A69: test    rax, rax
 * 0000000140786A6C: jz      loc_14077C9F7
 * 0000000140786A72: mov     r9d, r15d
 * 0000000140786A75: lea     edx, [r12+29h]
 * 0000000140786A7A: mov     r8d, r14d
 * 0000000140786A7D: mov     rcx, rax
 * 0000000140786A80: call    $$5e
 * 0000000140786A85: mov     [rbp+1C70h+var_15F0], rax
 * 0000000140786A8C: test    rax, rax
 * 0000000140786A8F: jz      loc_14077C9F7
 * 0000000140786A95: mov     rax, [rbp+1C70h+var_15F0]
 * 0000000140786A9C: lea     r9, [rbp+1C70h+var_1A68]
 * 0000000140786AA3: mov     edx, 10h
 * 0000000140786AA8: mov     [rsp+1D70h+var_1D00], rax
 * 0000000140786AAD: lea     r8, [rbp+1C70h+var_FC8]
 * 0000000140786AB4: mov     r14d, [rax+6D8h]
 * 0000000140786ABB: shr     r14d, 1Eh
 * 0000000140786ABF: lea     ecx, [rdx+15h]
 * 0000000140786AC2: not     r14d
 * 0000000140786AC5: and     r14d, r13d
 * 0000000140786AC8: add     r14d, 8
 * 0000000140786ACC: call    cs:off_1402F37E8
 * 0000000140786AD2: test    eax, eax
 * 0000000140786AD4: js      short loc_140786ADF
 * 0000000140786AD6: add     r14d, dword ptr [rbp+1C70h+var_FC0]
 * 0000000140786ADD: jmp     short loc_140786AE6
 * 0000000140786ADF: mov     [rbp+1C70h+var_FC0], r12
 * 0000000140786AE6: mov     eax, [rbp+1C70h+var_1AC0]
 * 0000000140786AEC: mov     ebx, 6
 * 0000000140786AF1: and     eax, ebx
 * 0000000140786AF3: mov     dword ptr [rsp+1D70h+Src], eax
 * 0000000140786AF7: jnz     short loc_140786B10
 * 0000000140786AF9: mov     rax, cs:PspPicoProviderRanges
 * 0000000140786B00: test    rax, rax
 * 0000000140786B03: jz      short loc_140786B09
 * 0000000140786B05: add     r14d, [rax+8]
 * 0000000140786B09: add     r14d, dword ptr cs:qword_1402F3FC8
 * 0000000140786B10: rdtsc
 * 0000000140786B12: shl     rdx, 20h
 * 0000000140786B16: mov     rdi, 7010008004002001h
 * 0000000140786B20: or      rax, rdx
 * 0000000140786B23: mov     r15d, 5
 * 0000000140786B29: mov     rcx, rax
 * 0000000140786B2C: ror     rax, 3
 * 0000000140786B30: xor     rcx, rax
 * 0000000140786B33: mov     rax, rdi
 * 0000000140786B36: mul     rcx
 * 0000000140786B39: mov     rcx, rdx
 * 0000000140786B3C: mov     [rbp+1C70h+var_1368], rdx
 * 0000000140786B43: xor     rcx, rax
 * 0000000140786B46: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140786B50: mul     rcx
 * 0000000140786B53: shr     rdx, 1
 * 0000000140786B56: imul    rax, rdx, 0Bh
 * 0000000140786B5A: sub     rcx, rax
 * 0000000140786B5D: cmp     ecx, r15d
 * 0000000140786B60: ja      loc_140786C11
 * 0000000140786B66: jz      loc_140786BF9
 * 0000000140786B6C: test    ecx, ecx
 * 0000000140786B6E: jz      short loc_140786BE1
 * 0000000140786B70: sub     ecx, 1
 * 0000000140786B73: jz      short loc_140786BCA
 * 0000000140786B75: sub     ecx, 1
 * 0000000140786B78: jz      short loc_140786BB2
 * 0000000140786B7A: cmp     ecx, 1
 * 0000000140786B7D: jz      short loc_140786B97
 * 0000000140786B7F: mov     [rbp+1C70h+var_1A64], 67076494h
 * 0000000140786B89: mov     edi, [rbp+1C70h+var_1A64]
 * 0000000140786B8F: rol     edi, 4
 * 0000000140786B92: jmp     loc_140786D1B
 * 0000000140786B97: mov     [rbp+1C70h+var_1A60], 0A8223938h
 * 0000000140786BA1: mov     edi, [rbp+1C70h+var_1A60]
 * 0000000140786BA7: xor     edi, 3
 * 0000000140786BAA: ror     edi, 0Fh
 * 0000000140786BAD: jmp     loc_140786D1B
 * 0000000140786BB2: mov     [rbp+1C70h+var_1A5C], 85B5910Dh
 * 0000000140786BBC: mov     edi, [rbp+1C70h+var_1A5C]
 * 0000000140786BC2: ror     edi, 2
 * 0000000140786BC5: jmp     loc_140786D1B
 * 0000000140786BCA: mov     [rbp+1C70h+var_1A58], 0B2AD31A1h
 * 0000000140786BD4: mov     edi, [rbp+1C70h+var_1A58]
 * 0000000140786BDA: rol     edi, 1
 * 0000000140786BDC: jmp     loc_140786D1B
 * 0000000140786BE1: mov     [rbp+1C70h+var_1A54], 0D098D0D8h
 * 0000000140786BEB: mov     edi, [rbp+1C70h+var_1A54]
 * 0000000140786BF1: ror     edi, 6
 * 0000000140786BF4: jmp     loc_140786D1B
 * 0000000140786BF9: mov     [rbp+1C70h+var_1A50], 288C49EDh
 * 0000000140786C03: mov     edi, [rbp+1C70h+var_1A50]
 * 0000000140786C09: ror     edi, 5
 * 0000000140786C0C: jmp     loc_140786D1B
 * 0000000140786C11: sub     ecx, ebx
 * 0000000140786C13: jz      loc_140786D06
 * 0000000140786C19: sub     ecx, 1
 * 0000000140786C1C: jz      loc_140786CF1
 * 0000000140786C22: sub     ecx, 1
 * 0000000140786C25: jz      loc_140786CDC
 * 0000000140786C2B: cmp     ecx, 1
 * 0000000140786C2E: jz      loc_140786CC4
 * 0000000140786C34: rdtsc
 * 0000000140786C36: shl     rdx, 20h
 * 0000000140786C3A: mov     r8d, 4EC4EC4Fh
 * 0000000140786C40: or      rax, rdx
 * 0000000140786C43: mov     rcx, rax
 * 0000000140786C46: ror     rax, 3
 * 0000000140786C4A: xor     rcx, rax
 * 0000000140786C4D: mov     rax, rdi
 * 0000000140786C50: mul     rcx
 * 0000000140786C53: mov     rdi, rax
 * 0000000140786C56: mov     [rbp+1C70h+var_1360], rdx
 * 0000000140786C5D: xor     edi, edx
 * 0000000140786C5F: mov     eax, r8d
 * 0000000140786C62: mul     edi
 * 0000000140786C64: mov     ecx, edi
 * 0000000140786C66: shr     edi, 5
 * 0000000140786C69: shr     edx, 3
 * 0000000140786C6C: mov     ebx, edi
 * 0000000140786C6E: imul    eax, edx, 1Ah
 * 0000000140786C71: sub     ecx, eax
 * 0000000140786C73: mov     eax, r8d
 * 0000000140786C76: mul     edi
 * 0000000140786C78: add     ecx, 61h ; 'a'
 * 0000000140786C7B: shr     edi, 5
 * 0000000140786C7E: shl     ecx, 8
 * 0000000140786C81: shr     edx, 3
 * 0000000140786C84: imul    eax, edx, 1Ah
 * 0000000140786C87: sub     ebx, eax
 * 0000000140786C89: mov     eax, r8d
 * 0000000140786C8C: mul     edi
 * 0000000140786C8E: add     ebx, 41h ; 'A'
 * 0000000140786C91: or      ebx, ecx
 * 0000000140786C93: shr     edx, 3
 * 0000000140786C96: imul    eax, edx, 1Ah
 * 0000000140786C99: mov     ecx, edi
 * 0000000140786C9B: shr     edi, 5
 * 0000000140786C9E: shl     ebx, 8
 * 0000000140786CA1: sub     ecx, eax
 * 0000000140786CA3: mov     eax, r8d
 * 0000000140786CA6: mul     edi
 * 0000000140786CA8: add     ecx, 61h ; 'a'
 * 0000000140786CAB: or      ecx, ebx
 * 0000000140786CAD: shr     edx, 3
 * 0000000140786CB0: imul    eax, edx, 1Ah
 * 0000000140786CB3: mov     ebx, 6
 * 0000000140786CB8: shl     ecx, 8
 * 0000000140786CBB: sub     edi, eax
 * 0000000140786CBD: add     edi, 41h ; 'A'
 * 0000000140786CC0: or      edi, ecx
 * 0000000140786CC2: jmp     short loc_140786D1B
 * 0000000140786CC4: mov     [rbp+1C70h+var_1A4C], 0B0869E85h
 * 0000000140786CCE: mov     edi, [rbp+1C70h+var_1A4C]
 * 0000000140786CD4: xor     edi, 9
 * 0000000140786CD7: ror     edi, 21h
 * 0000000140786CDA: jmp     short loc_140786D1B
 * 0000000140786CDC: mov     [rbp+1C70h+var_1A48], 64664142h
 * 0000000140786CE6: mov     edi, [rbp+1C70h+var_1A48]
 * 0000000140786CEC: ror     edi, 8
 * 0000000140786CEF: jmp     short loc_140786D1B
 * 0000000140786CF1: mov     [rbp+1C70h+var_1A44], 82C6A6D8h
 * 0000000140786CFB: mov     edi, [rbp+1C70h+var_1A44]
 * 0000000140786D01: rol     edi, 7
 * 0000000140786D04: jmp     short loc_140786D1B
 * 0000000140786D06: mov     [rbp+1C70h+var_1A40], 4E574672h
 * 0000000140786D10: mov     edi, [rbp+1C70h+var_1A40]
 * 0000000140786D16: xor     edi, ebx
 * 0000000140786D18: ror     edi, 18h
 * 0000000140786D1B: mov     rdx, r14
 * 0000000140786D1E: mov     r8d, edi; Tag
 * 0000000140786D21: shl     rdx, 3; NumberOfBytes
 * 0000000140786D25: mov     ecx, 200h; PoolType
 * 0000000140786D2A: call    ExAllocatePoolWithTag
 * 0000000140786D2F: mov     [rbp+1C70h+var_1CD0], rax
 * 0000000140786D33: mov     r12, rax
 * 0000000140786D36: test    rax, rax
 * 0000000140786D39: jz      loc_14077C9F7
 * 0000000140786D3F: rdtsc
 * 0000000140786D41: shl     rdx, 20h
 * 0000000140786D45: mov     r8, 7010008004002001h
 * 0000000140786D4F: or      rax, rdx
 * 0000000140786D52: mov     rcx, rax
 * 0000000140786D55: ror     rax, 3
 * 0000000140786D59: xor     rcx, rax
 * 0000000140786D5C: mov     rax, r8
 * 0000000140786D5F: mul     rcx
 * 0000000140786D62: mov     rcx, rdx
 * 0000000140786D65: mov     [rbp+1C70h+var_1358], rdx
 * 0000000140786D6C: xor     rcx, rax
 * 0000000140786D6F: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140786D79: mul     rcx
 * 0000000140786D7C: shr     rdx, 1
 * 0000000140786D7F: imul    rax, rdx, 0Bh
 * 0000000140786D83: sub     rcx, rax
 * 0000000140786D86: cmp     ecx, r15d
 * 0000000140786D89: ja      loc_140786E3A
 * 0000000140786D8F: jz      loc_140786E22
 * 0000000140786D95: test    ecx, ecx
 * 0000000140786D97: jz      short loc_140786E0A
 * 0000000140786D99: sub     ecx, 1
 * 0000000140786D9C: jz      short loc_140786DF3
 * 0000000140786D9E: sub     ecx, 1
 * 0000000140786DA1: jz      short loc_140786DDB
 * 0000000140786DA3: cmp     ecx, 1
 * 0000000140786DA6: jz      short loc_140786DC0
 * 0000000140786DA8: mov     [rbp+1C70h+var_1A3C], 67076494h
 * 0000000140786DB2: mov     edi, [rbp+1C70h+var_1A3C]
 * 0000000140786DB8: rol     edi, 4
 * 0000000140786DBB: jmp     loc_140786F3F
 * 0000000140786DC0: mov     [rbp+1C70h+var_1A38], 0A8223938h
 * 0000000140786DCA: mov     edi, [rbp+1C70h+var_1A38]
 * 0000000140786DD0: xor     edi, 3
 * 0000000140786DD3: ror     edi, 0Fh
 * 0000000140786DD6: jmp     loc_140786F3F
 * 0000000140786DDB: mov     [rbp+1C70h+var_1A34], 85B5910Dh
 * 0000000140786DE5: mov     edi, [rbp+1C70h+var_1A34]
 * 0000000140786DEB: ror     edi, 2
 * 0000000140786DEE: jmp     loc_140786F3F
 * 0000000140786DF3: mov     [rbp+1C70h+var_1A30], 0B2AD31A1h
 * 0000000140786DFD: mov     edi, [rbp+1C70h+var_1A30]
 * 0000000140786E03: rol     edi, 1
 * 0000000140786E05: jmp     loc_140786F3F
 * 0000000140786E0A: mov     [rbp+1C70h+var_1A2C], 0D098D0D8h
 * 0000000140786E14: mov     edi, [rbp+1C70h+var_1A2C]
 * 0000000140786E1A: ror     edi, 6
 * 0000000140786E1D: jmp     loc_140786F3F
 * 0000000140786E22: mov     [rbp+1C70h+var_1A28], 288C49EDh
 * 0000000140786E2C: mov     edi, [rbp+1C70h+var_1A28]
 * 0000000140786E32: ror     edi, 5
 * 0000000140786E35: jmp     loc_140786F3F
 * 0000000140786E3A: sub     ecx, ebx
 * 0000000140786E3C: jz      loc_140786F2A
 * 0000000140786E42: sub     ecx, 1
 * 0000000140786E45: jz      loc_140786F15
 * 0000000140786E4B: sub     ecx, 1
 * 0000000140786E4E: jz      loc_140786F00
 * 0000000140786E54: cmp     ecx, 1
 * 0000000140786E57: jz      loc_140786EE8
 * 0000000140786E5D: rdtsc
 * 0000000140786E5F: shl     rdx, 20h
 * 0000000140786E63: or      rax, rdx
 * 0000000140786E66: mov     rcx, rax
 * 0000000140786E69: ror     rax, 3
 * 0000000140786E6D: xor     rcx, rax
 * 0000000140786E70: mov     rax, r8
 * 0000000140786E73: mul     rcx
 * 0000000140786E76: mov     r8d, 4EC4EC4Fh
 * 0000000140786E7C: mov     rdi, rax
 * 0000000140786E7F: mov     [rbp+1C70h+var_1350], rdx
 * 0000000140786E86: xor     edi, edx
 * 0000000140786E88: mov     eax, r8d
 * 0000000140786E8B: mul     edi
 * 0000000140786E8D: mov     ecx, edi
 * 0000000140786E8F: shr     edi, 5
 * 0000000140786E92: shr     edx, 3
 * 0000000140786E95: mov     ebx, edi
 * 0000000140786E97: imul    eax, edx, 1Ah
 * 0000000140786E9A: sub     ecx, eax
 * 0000000140786E9C: mov     eax, r8d
 * 0000000140786E9F: mul     edi
 * 0000000140786EA1: add     ecx, 61h ; 'a'
 * 0000000140786EA4: shr     edi, 5
 * 0000000140786EA7: shl     ecx, 8
 * 0000000140786EAA: shr     edx, 3
 * 0000000140786EAD: imul    eax, edx, 1Ah
 * 0000000140786EB0: sub     ebx, eax
 * 0000000140786EB2: mov     eax, r8d
 * 0000000140786EB5: mul     edi
 * 0000000140786EB7: add     ebx, 41h ; 'A'
 * 0000000140786EBA: or      ebx, ecx
 * 0000000140786EBC: shr     edx, 3
 * 0000000140786EBF: imul    eax, edx, 1Ah
 * 0000000140786EC2: mov     ecx, edi
 * 0000000140786EC4: shr     edi, 5
 * 0000000140786EC7: shl     ebx, 8
 * 0000000140786ECA: sub     ecx, eax
 * 0000000140786ECC: mov     eax, r8d
 * 0000000140786ECF: mul     edi
 * 0000000140786ED1: add     ecx, 61h ; 'a'
 * 0000000140786ED4: shr     edx, 3
 * 0000000140786ED7: or      ecx, ebx
 * 0000000140786ED9: imul    eax, edx, 1Ah
 * 0000000140786EDC: shl     ecx, 8
 * 0000000140786EDF: sub     edi, eax
 * 0000000140786EE1: add     edi, 41h ; 'A'
 * 0000000140786EE4: or      edi, ecx
 * 0000000140786EE6: jmp     short loc_140786F3F
 * 0000000140786EE8: mov     [rbp+1C70h+var_1A24], 0B0869E85h
 * 0000000140786EF2: mov     edi, [rbp+1C70h+var_1A24]
 * 0000000140786EF8: xor     edi, 9
 * 0000000140786EFB: ror     edi, 21h
 * 0000000140786EFE: jmp     short loc_140786F3F
 * 0000000140786F00: mov     [rbp+1C70h+var_19B0], 64664142h
 * 0000000140786F0A: mov     edi, [rbp+1C70h+var_19B0]
 * 0000000140786F10: ror     edi, 8
 * 0000000140786F13: jmp     short loc_140786F3F
 * 0000000140786F15: mov     [rbp+1C70h+var_1A1C], 82C6A6D8h
 * 0000000140786F1F: mov     edi, [rbp+1C70h+var_1A1C]
 * 0000000140786F25: rol     edi, 7
 * 0000000140786F28: jmp     short loc_140786F3F
 * 0000000140786F2A: mov     [rbp+1C70h+var_1A18], 4E574672h
 * 0000000140786F34: mov     edi, [rbp+1C70h+var_1A18]
 * 0000000140786F3A: xor     edi, ebx
 * 0000000140786F3C: ror     edi, 18h
 * 0000000140786F3F: mov     rdx, r14
 * 0000000140786F42: mov     r8d, edi; Tag
 * 0000000140786F45: shl     rdx, 2; NumberOfBytes
 * 0000000140786F49: mov     ecx, 200h; PoolType
 * 0000000140786F4E: call    ExAllocatePoolWithTag
 * 0000000140786F53: xor     r10d, r10d
 * 0000000140786F56: mov     [rsp+1D70h+var_1D20], rax
 * 0000000140786F5B: mov     r15, rax
 * 0000000140786F5E: test    rax, rax
 * 0000000140786F61: jnz     short loc_140786F70
 * 0000000140786F63: mov     rcx, r12; P
 * 0000000140786F66: call    ExFreePool
 * 0000000140786F6B: jmp     loc_14077C9F7
 * 0000000140786F70: mov     eax, cs:dword_140760498
 * 0000000140786F76: mov     r11, 88000000000h
 * 0000000140786F80: mov     [rbp+1C70h+var_1ACC], eax
 * 0000000140786F86: mov     ecx, eax
 * 0000000140786F88: sub     rcx, r11
 * 0000000140786F8B: mov     eax, 1000h
 * 0000000140786F90: mov     [r12], rcx
 * 0000000140786F94: mov     ebx, r13d
 * 0000000140786F97: sub     eax, [rbp+1C70h+var_1ACC]
 * 0000000140786F9D: mov     [r15], eax
 * 0000000140786FA0: mov     eax, [rbp+1C70h+var_1AC0]
 * 0000000140786FA6: and     eax, 2
 * 0000000140786FA9: mov     dword ptr [rsp+1D70h+var_1D08], eax
 * 0000000140786FAD: jnz     short loc_140786FC8
 * 0000000140786FAF: lea     rax, InitSafeBootMode
 * 0000000140786FB6: mov     ebx, 2
 * 0000000140786FBB: mov     [r12+8], rax
 * 0000000140786FC0: mov     dword ptr [r15+4], 4
 * 0000000140786FC8: mov     r9d, dword ptr [rsp+1D70h+Src]
 * 0000000140786FCD: lea     rcx, RtlpUnwindHistoryTable
 * 0000000140786FD4: mov     eax, ebx
 * 0000000140786FD6: add     ebx, r13d
 * 0000000140786FD9: mov     [r12+rax*8], rcx
 * 0000000140786FDD: lea     rcx, PspSystemMitigationOptions
 * 0000000140786FE4: mov     dword ptr [r15+rax*4], 0D8h
 * 0000000140786FEC: mov     [r12+rbx*8], rcx
 * 0000000140786FF0: lea     rcx, KdpBootedNodebug
 * 0000000140786FF7: mov     dword ptr [r15+rbx*4], 8
 * 0000000140786FFF: add     ebx, r13d
 * 0000000140787002: mov     [r12+rbx*8], rcx
 * 0000000140787006: lea     rcx, xmmword_1402F6FB0
 * 000000014078700D: mov     [r15+rbx*4], r13d
 * 0000000140787011: add     ebx, r13d
 * 0000000140787014: mov     [r12+rbx*8], rcx
 * 0000000140787018: mov     dword ptr [r15+rbx*4], 18h
 * 0000000140787020: add     ebx, r13d
 * 0000000140787023: mov     dword ptr [rsp+1D70h+NtHeaders], ebx
 * 0000000140787027: test    r9d, r9d
 * 000000014078702A: jnz     loc_1407872BC
 * 0000000140787030: lea     rdx, [rbp+1C70h+var_1348]
 * 0000000140787037: lea     rcx, [rbp+1C70h+var_1340]
 * 000000014078703E: call    MmQueryApiSetSchema
 * 0000000140787043: mov     rax, [rbp+1C70h+var_1340]
 * 000000014078704A: mov     r11, 88000000000h
 * 0000000140787054: mov     r9d, dword ptr [rsp+1D70h+Src]
 * 0000000140787059: mov     [r12+rbx*8], rax
 * 000000014078705D: mov     dword ptr [r15+rbx*4], 8
 * 0000000140787065: add     ebx, r13d
 * 0000000140787068: mov     rax, [rbp+1C70h+var_1348]
 * 000000014078706F: mov     [r12+rbx*8], rax
 * 0000000140787073: mov     rax, [rsp+1D70h+var_1D00]
 * 0000000140787078: mov     dword ptr [r15+rbx*4], 8
 * 0000000140787080: add     ebx, r13d
 * 0000000140787083: mov     dword ptr [rsp+1D70h+NtHeaders], ebx
 * 0000000140787087: mov     eax, [rax+6D8h]
 * 000000014078708D: bt      eax, 1Eh
 * 0000000140787091: jb      short loc_1407870B5
 * 0000000140787093: mov     rax, [rbp+1C70h+var_1340]
 * 000000014078709A: mov     rcx, [rax]
 * 000000014078709D: mov     [r12+rbx*8], rcx
 * 00000001407870A1: mov     rax, [rbp+1C70h+var_1348]
 * 00000001407870A8: mov     ecx, [rax]
 * 00000001407870AA: mov     [r15+rbx*4], ecx
 * 00000001407870AE: add     ebx, r13d
 * 00000001407870B1: mov     dword ptr [rsp+1D70h+NtHeaders], ebx
 * 00000001407870B5: xor     r10d, r10d
 * 00000001407870B8: mov     r8d, r10d
 * 00000001407870BB: cmp     [rbp+1C70h+var_FC0], r10
 * 00000001407870C2: jbe     short loc_1407870FE
 * 00000001407870C4: mov     rdi, r10
 * 00000001407870C7: mov     rax, [rbp+1C70h+var_FC8]
 * 00000001407870CE: add     rdi, rdi
 * 00000001407870D1: add     r8d, r13d
 * 00000001407870D4: mov     rcx, [rax+rdi*8]
 * 00000001407870D8: mov     [r12+rbx*8], rcx
 * 00000001407870DC: mov     rax, [rbp+1C70h+var_FC8]
 * 00000001407870E3: mov     ecx, [rax+rdi*8+8]
 * 00000001407870E7: mov     [r15+rbx*4], ecx
 * 00000001407870EB: add     ebx, r13d
 * 00000001407870EE: mov     edi, r8d
 * 00000001407870F1: cmp     rdi, [rbp+1C70h+var_FC0]
 * 00000001407870F8: jb      short loc_1407870C7
 * 00000001407870FA: mov     dword ptr [rsp+1D70h+NtHeaders], ebx
 * 00000001407870FE: test    r9d, r9d
 * 0000000140787101: jnz     loc_14078719F
 * 0000000140787107: mov     rax, cs:PspPicoProviderRanges
 * 000000014078710E: test    rax, rax
 * 0000000140787111: jz      short loc_140787159
 * 0000000140787113: mov     r8d, r10d
 * 0000000140787116: cmp     [rax+8], r10
 * 000000014078711A: jbe     short loc_140787159
 * 000000014078711C: mov     rdi, r10
 * 000000014078711F: mov     rax, [rax]
 * 0000000140787122: add     rdi, rdi
 * 0000000140787125: add     r8d, r13d
 * 0000000140787128: mov     rcx, [rax+rdi*8]
 * 000000014078712C: mov     [r12+rbx*8], rcx
 * 0000000140787130: mov     rax, cs:PspPicoProviderRanges
 * 0000000140787137: mov     rcx, [rax]
 * 000000014078713A: mov     eax, [rcx+rdi*8+8]
 * 000000014078713E: mov     [r15+rbx*4], eax
 * 0000000140787142: add     ebx, r13d
 * 0000000140787145: mov     rax, cs:PspPicoProviderRanges
 * 000000014078714C: mov     edi, r8d
 * 000000014078714F: cmp     rdi, [rax+8]
 * 0000000140787153: jb      short loc_14078711F
 * 0000000140787155: mov     dword ptr [rsp+1D70h+NtHeaders], ebx
 * 0000000140787159: cmp     cs:qword_1402F3FC8, r10
 * 0000000140787160: mov     r8d, r10d
 * 0000000140787163: jbe     short loc_14078719F
 * 0000000140787165: mov     rdi, r10
 * 0000000140787168: mov     rax, cs:PspKernelRanges
 * 000000014078716F: add     rdi, rdi
 * 0000000140787172: add     r8d, r13d
 * 0000000140787175: mov     rcx, [rax+rdi*8]
 * 0000000140787179: mov     [r12+rbx*8], rcx
 * 000000014078717D: mov     rax, cs:PspKernelRanges
 * 0000000140787184: mov     ecx, [rax+rdi*8+8]
 * 0000000140787188: mov     [r15+rbx*4], ecx
 * 000000014078718C: add     ebx, r13d
 * 000000014078718F: mov     edi, r8d
 * 0000000140787192: cmp     rdi, cs:qword_1402F3FC8
 * 0000000140787199: jb      short loc_140787168
 * 000000014078719B: mov     dword ptr [rsp+1D70h+NtHeaders], ebx
 * 000000014078719F: mov     rax, [rbp+1C70h+var_15F0]
 * 00000001407871A6: mov     ecx, [rax+6ACh]
 * 00000001407871AC: mov     eax, 0BC2A27DBh
 * 00000001407871B1: xor     rcx, rax
 * 00000001407871B4: sub     rcx, r11
 * 00000001407871B7: mov     al, [rcx]
 * 00000001407871B9: mov     r14, [rbp+1C70h+var_15F0]
 * 00000001407871C0: test    al, 2
 * 00000001407871C2: jz      short loc_1407871D0
 * 00000001407871C4: mov     eax, 1000h
 * 00000001407871C9: add     [r14+59Ch], eax
 * 00000001407871D0: cmp     dword ptr [r14+5F0h], 7
 * 00000001407871D8: mov     eax, r10d
 * 00000001407871DB: mov     ecx, [r14+59Ch]
 * 00000001407871E2: mov     r9d, 20h ; ' '
 * 00000001407871E8: mov     r8d, [r14+67Ch]
 * 00000001407871EF: cmovz   eax, r9d
 * 00000001407871F3: mov     dword ptr [rbp+1C70h+var_1CF0], eax
 * 00000001407871F6: lea     eax, [rbx+rbx*2]
 * 00000001407871F9: shl     eax, 4
 * 00000001407871FC: add     eax, ecx
 * 00000001407871FE: mov     dword ptr [rbp+1C70h+var_1CC0], ecx
 * 0000000140787201: cmp     eax, [r14+75Ch]
 * 0000000140787208: jbe     loc_140787307
 * 000000014078720E: mov     edx, eax
 * 0000000140787210: mov     rcx, r14
 * 0000000140787213: call    sub_140251E08
 * 0000000140787218: xor     r10d, r10d
 * 000000014078721B: mov     rdi, rax
 * 000000014078721E: test    rax, rax
 * 0000000140787221: jz      loc_1407872FF
 * 0000000140787227: mov     rax, [rsp+1D70h+var_1D00]
 * 000000014078722C: mov     edx, [rax+6D8h]
 * 0000000140787232: test    dl, 4
 * 0000000140787235: jnz     loc_1407872ED
 * 000000014078723B: mov     ecx, [r14+59Ch]
 * 0000000140787242: and     edx, 20000000h
 * 0000000140787248: mov     r9, [r14+580h]
 * 000000014078724F: neg     edx
 * 0000000140787251: sbb     r8d, r8d
 * 0000000140787254: and     r8d, [r14+67Ch]
 * 000000014078725B: cmp     ecx, 8
 * 000000014078725E: jb      short loc_140787275
 * 0000000140787260: mov     eax, ecx
 * 0000000140787262: shr     rax, 3
 * 0000000140787266: mov     [r14], r10
 * 0000000140787269: add     ecx, 0FFFFFFF8h
 * 000000014078726C: add     r14, 8
 * 0000000140787270: sub     rax, r13
 * 0000000140787273: jnz     short loc_140787266
 * 0000000140787275: test    ecx, ecx
 * 0000000140787277: jz      short loc_140787284
 * 0000000140787279: mov     [r14], r10b
 * 000000014078727C: add     r14, r13
 * 000000014078727F: add     ecx, 0FFFFFFFFh
 * 0000000140787282: jnz     short loc_140787279
 * 0000000140787284: mov     r14d, [rdi+67Ch]
 * 000000014078728B: mov     [rdi+67Ch], r8d
 * 0000000140787292: cmp     r8d, 3
 * 0000000140787296: jz      short loc_1407872DA
 * 0000000140787298: test    dword ptr [rdi+6D8h], 10000000h
 * 00000001407872A2: mov     ecx, r10d
 * 00000001407872A5: cmovz   ecx, r8d
 * 00000001407872A9: test    ecx, ecx
 * 00000001407872AB: jz      short loc_1407872CF
 * 00000001407872AD: lea     rcx, [r9-8]
 * 00000001407872B1: mov     rdx, [rcx]
 * 00000001407872B4: call    qword ptr [rdi+210h]
 * 00000001407872BA: jmp     short loc_1407872E3
 * 00000001407872BC: mov     [rbp+1C70h+var_1340], r10
 * 00000001407872C3: mov     [rbp+1C70h+var_1348], r10
 * 00000001407872CA: jmp     loc_1407870B8
 * 00000001407872CF: mov     rcx, r9
 * 00000001407872D2: call    qword ptr [rdi+0E8h]
 * 00000001407872D8: jmp     short loc_1407872E3
 * 00000001407872DA: mov     rcx, r9
 * 00000001407872DD: call    qword ptr [rdi+348h]
 * 00000001407872E3: mov     [rdi+67Ch], r14d
 * 00000001407872EA: xor     r10d, r10d
 * 00000001407872ED: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 00000001407872F4: mov     r9d, 20h ; ' '
 * 00000001407872FA: mov     ecx, dword ptr [rbp+1C70h+var_1CC0]
 * 00000001407872FD: jmp     short loc_140787311
 * 00000001407872FF: mov     rdi, r10
 * 0000000140787302: jmp     loc_1407874A7
 * 0000000140787307: mov     rdi, r14
 * 000000014078730A: mov     [r14+59Ch], eax
 * 0000000140787311: add     [rdi+5C4h], ebx
 * 0000000140787317: mov     r14d, ecx
 * 000000014078731A: add     r14, rdi
 * 000000014078731D: mov     [rbp+1C70h+var_1338], r14
 * 0000000140787324: mov     [rbp+1C70h+var_1330], r14
 * 000000014078732B: test    ebx, ebx
 * 000000014078732D: jz      loc_14078747E
 * 0000000140787333: mov     eax, ebx
 * 0000000140787335: mov     r11, r12
 * 0000000140787338: mov     ebx, dword ptr [rbp+1C70h+var_1CF0]
 * 000000014078733B: mov     rsi, r15
 * 000000014078733E: mov     [rbp+1C70h+var_1CE8], rax
 * 0000000140787342: mov     [rsp+1D70h+var_1D00], r12
 * 0000000140787347: mov     r12d, [rsi]
 * 000000014078734A: mov     ecx, 30h ; '0'
 * 000000014078734F: mov     r15, [r11]
 * 0000000140787352: mov     rax, r14
 * 0000000140787355: lea     edx, [rcx-2Ah]
 * 0000000140787358: mov     [rax], r10
 * 000000014078735B: add     ecx, 0FFFFFFF8h
 * 000000014078735E: add     rax, 8
 * 0000000140787362: sub     rdx, r13
 * 0000000140787365: jnz     short loc_140787358
 * 0000000140787367: test    ecx, ecx
 * 0000000140787369: jz      short loc_140787376
 * 000000014078736B: mov     [rax], r10b
 * 000000014078736E: add     rax, r13
 * 0000000140787371: add     ecx, 0FFFFFFFFh
 * 0000000140787374: jnz     short loc_14078736B
 * 0000000140787376: mov     [r14], ebx
 * 0000000140787379: mov     [r14+8], r15
 * 000000014078737D: cmp     ebx, r9d
 * 0000000140787380: jnz     short loc_14078739E
 * 0000000140787382: test    r12d, r12d
 * 0000000140787385: jz      short loc_14078739E
 * 0000000140787387: lea     r9, [r14+18h]
 * 000000014078738B: mov     r8d, r12d
 * 000000014078738E: mov     rdx, r15
 * 0000000140787391: mov     rcx, rdi
 * 0000000140787394: call    sub_1401588B8
 * 0000000140787399: mov     r11, [rsp+1D70h+var_1D00]
 * 000000014078739E: mov     [r14+10h], r12d
 * 00000001407873A2: lea     rcx, [r15+r12]
 * 00000001407873A6: add     [rdi+5E0h], r12d
 * 00000001407873AD: mov     rax, r15
 * 00000001407873B0: mov     r10d, [rdi+5CCh]
 * 00000001407873B7: mov     rdx, [rdi+5D0h]
 * 00000001407873BE: cmp     r15, rcx
 * 00000001407873C1: jnb     short loc_1407873CF
 * 00000001407873C3: prefetchnta byte ptr [rax]
 * 00000001407873C6: add     rax, 40h ; '@'
 * 00000001407873CA: cmp     rax, rcx
 * 00000001407873CD: jb      short loc_1407873C3
 * 00000001407873CF: mov     r8d, r12d
 * 00000001407873D2: cmp     r12d, 8
 * 00000001407873D6: jb      short loc_1407873F5
 * 00000001407873D8: mov     r9, r12
 * 00000001407873DB: shr     r9, 3
 * 00000001407873DF: xor     rdx, [r15]
 * 00000001407873E2: mov     ecx, r10d
 * 00000001407873E5: rol     rdx, cl
 * 00000001407873E8: add     r15, 8
 * 00000001407873EC: add     r8d, 0FFFFFFF8h
 * 00000001407873F0: sub     r9, r13
 * 00000001407873F3: jnz     short loc_1407873DF
 * 00000001407873F5: test    r8d, r8d
 * 00000001407873F8: jz      short loc_140787410
 * 00000001407873FA: movzx   eax, byte ptr [r15]
 * 00000001407873FE: mov     ecx, r10d
 * 0000000140787401: xor     rdx, rax
 * 0000000140787404: add     r15, r13
 * 0000000140787407: rol     rdx, cl
 * 000000014078740A: add     r8d, 0FFFFFFFFh
 * 000000014078740E: jnz     short loc_1407873FA
 * 0000000140787410: mov     rax, rdx
 * 0000000140787413: shr     rax, 1Fh
 * 0000000140787417: xor     r10d, r10d
 * 000000014078741A: jmp     short loc_140787422
 * 000000014078741C: xor     edx, eax
 * 000000014078741E: shr     rax, 1Fh
 * 0000000140787422: test    rax, rax
 * 0000000140787425: jnz     short loc_14078741C
 * 0000000140787427: btr     edx, 1Fh
 * 000000014078742B: lea     r9d, [rax+20h]
 * 000000014078742F: mov     [r14+14h], edx
 * 0000000140787433: add     r11, 8
 * 0000000140787437: add     [rdi+5E0h], r12d
 * 000000014078743E: add     rsi, 4
 * 0000000140787442: mov     r14, [rbp+1C70h+var_1338]
 * 0000000140787449: add     r14, 30h ; '0'
 * 000000014078744D: mov     [rsp+1D70h+var_1D00], r11
 * 0000000140787452: sub     [rbp+1C70h+var_1CE8], r13
 * 0000000140787456: mov     [rbp+1C70h+var_1338], r14
 * 000000014078745D: jnz     loc_140787347
 * 0000000140787463: mov     r14, [rbp+1C70h+var_1330]
 * 000000014078746A: mov     rsi, 0FFFFFFFFB8797400h
 * 0000000140787471: mov     ebx, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140787475: mov     r15, [rsp+1D70h+var_1D20]
 * 000000014078747A: mov     r12, [rbp+1C70h+var_1CD0]
 * 000000014078747E: mov     eax, 20h ; ' '
 * 0000000140787483: cmp     dword ptr [rbp+1C70h+var_1CF0], eax
 * 0000000140787486: jnz     short loc_1407874A7
 * 0000000140787488: test    ebx, ebx
 * 000000014078748A: jz      short loc_1407874A7
 * 000000014078748C: or      [r14+28h], r13d
 * 0000000140787490: mov     r14, [rbp+1C70h+var_1330]
 * 0000000140787497: add     r14, 30h ; '0'
 * 000000014078749B: mov     [rbp+1C70h+var_1330], r14
 * 00000001407874A2: add     ebx, 0FFFFFFFFh
 * 00000001407874A5: jnz     short loc_14078748C
 * 00000001407874A7: mov     rcx, r15; P
 * 00000001407874AA: mov     [rbp+1C70h+var_15F0], rdi
 * 00000001407874B1: call    ExFreePool
 * 00000001407874B6: mov     rcx, r12; P
 * 00000001407874B9: call    ExFreePool
 * 00000001407874BE: xor     r11d, r11d
 * 00000001407874C1: test    rdi, rdi
 * 00000001407874C4: jz      loc_14077C9F7
 * 00000001407874CA: test    dword ptr [rdi+6D8h], 40000000h
 * 00000001407874D4: jz      loc_140787703
 * 00000001407874DA: mov     r14, [rbp+1C70h+var_1340]
 * 00000001407874E1: test    r14, r14
 * 00000001407874E4: jz      loc_140787703
 * 00000001407874EA: mov     rax, [rbp+1C70h+var_1348]
 * 00000001407874F1: lea     r9d, [r11+20h]
 * 00000001407874F5: cmp     dword ptr [rdi+5F0h], 7
 * 00000001407874FC: mov     r12d, r11d
 * 00000001407874FF: mov     r14, [r14]
 * 0000000140787502: mov     r8d, [rdi+67Ch]
 * 0000000140787509: cmovz   r12d, r9d
 * 000000014078750D: mov     r15d, [rax]
 * 0000000140787510: mov     eax, [rdi+59Ch]
 * 0000000140787516: mov     dword ptr [rsp+1D70h+NtHeaders], eax
 * 000000014078751A: add     eax, 30h ; '0'
 * 000000014078751D: cmp     eax, [rdi+75Ch]
 * 0000000140787523: jbe     loc_1407875FC
 * 0000000140787529: mov     edx, eax
 * 000000014078752B: mov     rcx, rdi
 * 000000014078752E: call    sub_140251E08
 * 0000000140787533: xor     r11d, r11d
 * 0000000140787536: mov     rbx, rax
 * 0000000140787539: test    rax, rax
 * 000000014078753C: jz      loc_14077C9F7
 * 0000000140787542: mov     edx, [rdi+6D8h]
 * 0000000140787548: test    dl, 4
 * 000000014078754B: jnz     loc_1407875ED
 * 0000000140787551: mov     ecx, [rdi+59Ch]
 * 0000000140787557: and     edx, 20000000h
 * 000000014078755D: mov     r9, [rdi+580h]
 * 0000000140787564: neg     edx
 * 0000000140787566: sbb     r8d, r8d
 * 0000000140787569: and     r8d, [rdi+67Ch]
 * 0000000140787570: cmp     ecx, 8
 * 0000000140787573: jb      short loc_14078758A
 * 0000000140787575: mov     eax, ecx
 * 0000000140787577: shr     rax, 3
 * 000000014078757B: mov     [rdi], r11
 * 000000014078757E: add     ecx, 0FFFFFFF8h
 * 0000000140787581: add     rdi, 8
 * 0000000140787585: sub     rax, r13
 * 0000000140787588: jnz     short loc_14078757B
 * 000000014078758A: test    ecx, ecx
 * 000000014078758C: jz      short loc_140787599
 * 000000014078758E: mov     [rdi], r11b
 * 0000000140787591: add     rdi, r13
 * 0000000140787594: add     ecx, 0FFFFFFFFh
 * 0000000140787597: jnz     short loc_14078758E
 * 0000000140787599: mov     edi, [rbx+67Ch]
 * 000000014078759F: mov     [rbx+67Ch], r8d
 * 00000001407875A6: cmp     r8d, 3
 * 00000001407875AA: jz      short loc_1407875DB
 * 00000001407875AC: test    dword ptr [rbx+6D8h], 10000000h
 * 00000001407875B6: mov     ecx, r11d
 * 00000001407875B9: cmovz   ecx, r8d
 * 00000001407875BD: test    ecx, ecx
 * 00000001407875BF: jz      short loc_1407875D0
 * 00000001407875C1: lea     rcx, [r9-8]
 * 00000001407875C5: mov     rdx, [rcx]
 * 00000001407875C8: call    qword ptr [rbx+210h]
 * 00000001407875CE: jmp     short loc_1407875E4
 * 00000001407875D0: mov     rcx, r9
 * 00000001407875D3: call    qword ptr [rbx+0E8h]
 * 00000001407875D9: jmp     short loc_1407875E4
 * 00000001407875DB: mov     rcx, r9
 * 00000001407875DE: call    qword ptr [rbx+348h]
 * 00000001407875E4: mov     [rbx+67Ch], edi
 * 00000001407875EA: xor     r11d, r11d
 * 00000001407875ED: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 00000001407875F4: mov     r9d, 20h ; ' '
 * 00000001407875FA: jmp     short loc_140787605
 * 00000001407875FC: mov     rbx, rdi
 * 00000001407875FF: mov     [rdi+59Ch], eax
 * 0000000140787605: add     [rbx+5C4h], r13d
 * 000000014078760C: mov     ecx, 30h ; '0'
 * 0000000140787611: mov     edi, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140787615: add     rdi, rbx
 * 0000000140787618: mov     [rbp+1C70h+var_1328], rdi
 * 000000014078761F: mov     rax, rdi
 * 0000000140787622: lea     edx, [rcx-2Ah]
 * 0000000140787625: mov     [rax], r11
 * 0000000140787628: add     ecx, 0FFFFFFF8h
 * 000000014078762B: add     rax, 8
 * 000000014078762F: sub     rdx, r13
 * 0000000140787632: jnz     short loc_140787625
 * 0000000140787634: test    ecx, ecx
 * 0000000140787636: jz      short loc_140787643
 * 0000000140787638: mov     [rax], r11b
 * 000000014078763B: add     rax, r13
 * 000000014078763E: add     ecx, 0FFFFFFFFh
 * 0000000140787641: jnz     short loc_140787638
 * 0000000140787643: mov     [rdi], r12d
 * 0000000140787646: mov     [rdi+8], r14
 * 000000014078764A: cmp     r12d, r9d
 * 000000014078764D: jnz     short loc_140787669
 * 000000014078764F: test    r15d, r15d
 * 0000000140787652: jz      short loc_140787669
 * 0000000140787654: lea     r9, [rdi+18h]
 * 0000000140787658: mov     r8d, r15d
 * 000000014078765B: mov     rdx, r14
 * 000000014078765E: mov     rcx, rbx
 * 0000000140787661: call    sub_1401588B8
 * 0000000140787666: xor     r11d, r11d
 * 0000000140787669: mov     [rdi+10h], r15d
 * 000000014078766D: lea     rcx, [r14+r15]
 * 0000000140787671: add     [rbx+5E0h], r15d
 * 0000000140787678: mov     rax, r14
 * 000000014078767B: mov     r10d, [rbx+5CCh]
 * 0000000140787682: mov     rdx, [rbx+5D0h]
 * 0000000140787689: cmp     r14, rcx
 * 000000014078768C: jnb     short loc_14078769A
 * 000000014078768E: prefetchnta byte ptr [rax]
 * 0000000140787691: add     rax, 40h ; '@'
 * 0000000140787695: cmp     rax, rcx
 * 0000000140787698: jb      short loc_14078768E
 * 000000014078769A: mov     r8d, r15d
 * 000000014078769D: cmp     r15d, 8
 * 00000001407876A1: jb      short loc_1407876C0
 * 00000001407876A3: mov     r9, r15
 * 00000001407876A6: shr     r9, 3
 * 00000001407876AA: xor     rdx, [r14]
 * 00000001407876AD: mov     ecx, r10d
 * 00000001407876B0: rol     rdx, cl
 * 00000001407876B3: add     r14, 8
 * 00000001407876B7: add     r8d, 0FFFFFFF8h
 * 00000001407876BB: sub     r9, r13
 * 00000001407876BE: jnz     short loc_1407876AA
 * 00000001407876C0: test    r8d, r8d
 * 00000001407876C3: jz      short loc_1407876DB
 * 00000001407876C5: movzx   eax, byte ptr [r14]
 * 00000001407876C9: mov     ecx, r10d
 * 00000001407876CC: xor     rdx, rax
 * 00000001407876CF: add     r14, r13
 * 00000001407876D2: rol     rdx, cl
 * 00000001407876D5: add     r8d, 0FFFFFFFFh
 * 00000001407876D9: jnz     short loc_1407876C5
 * 00000001407876DB: mov     rax, rdx
 * 00000001407876DE: jmp     short loc_1407876E2
 * 00000001407876E0: xor     edx, eax
 * 00000001407876E2: shr     rax, 1Fh
 * 00000001407876E6: test    rax, rax
 * 00000001407876E9: jnz     short loc_1407876E0
 * 00000001407876EB: btr     edx, 1Fh
 * 00000001407876EF: mov     [rbp+1C70h+var_15F0], rbx
 * 00000001407876F6: mov     [rdi+14h], edx
 * 00000001407876F9: mov     rdi, rbx
 * 00000001407876FC: add     [rbx+5E0h], r15d
 * 0000000140787703: cli
 * 0000000140787704: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 000000014078770B: jnz     short loc_14078770F
 * 000000014078770D: jmp     short loc_14078770D
 * 000000014078770F: sti
 * 0000000140787710: or      dword ptr [rsp+1D70h+NtHeaders], 0FFFFFFFFh
 * 0000000140787715: lea     rax, HvlpHypercallCodeVa
 * 000000014078771C: mov     [rbp+1C70h+var_C70], rax
 * 0000000140787723: mov     r12d, r13d
 * 0000000140787726: mov     rax, cs:HvlpHypercallCodeVa
 * 000000014078772D: mov     [rbp+1C70h+var_FB8], 8
 * 0000000140787737: test    rax, rax
 * 000000014078773A: jz      loc_14078782E
 * 0000000140787740: cmp     dword ptr [rdi+5F0h], 7
 * 0000000140787747: jz      short loc_140787771
 * 0000000140787749: mov     ecx, 80000000h
 * 000000014078774E: test    [rdi+6D8h], ecx
 * 0000000140787754: jnz     loc_14078784E
 * 000000014078775A: call    HvlIsHypercallOverlayLocked
 * 000000014078775F: xor     r11d, r11d
 * 0000000140787762: test    al, al
 * 0000000140787764: jnz     loc_14078784E
 * 000000014078776A: mov     rax, cs:HvlpHypercallCodeVa
 * 0000000140787771: mov     [rbp+1C70h+var_C68], rax
 * 0000000140787778: xor     ecx, ecx
 * 000000014078777A: mov     eax, 40000000h
 * 000000014078777F: cpuid
 * 0000000140787781: mov     r8d, eax
 * 0000000140787784: mov     [rbp+1C70h+var_FA8], eax
 * 000000014078778A: mov     dword ptr [rbp+1C70h+var_FA4], ebx
 * 0000000140787790: mov     dword ptr [rbp+1C70h+var_FA4+4], ecx
 * 0000000140787796: mov     rax, [rbp+1C70h+var_FA4]
 * 000000014078779D: cmp     rax, qword ptr cs:aMicrosoftHv; "Microsoft Hv"
 * 00000001407877A4: mov     [rbp+1C70h+var_F9C], edx
 * 00000001407877AA: jnz     short loc_140787822
 * 00000001407877AC: cmp     edx, dword ptr cs:aMicrosoftHv+8; "t Hv"
 * 00000001407877B2: jnz     short loc_140787822
 * 00000001407877B4: mov     r9d, 40000002h
 * 00000001407877BA: cmp     r8d, r9d
 * 00000001407877BD: jb      short loc_140787822
 * 00000001407877BF: xor     ecx, ecx
 * 00000001407877C1: lea     eax, [r9-1]
 * 00000001407877C5: cpuid
 * 00000001407877C7: mov     [rbp+1C70h+var_FA8], eax
 * 00000001407877CD: mov     dword ptr [rbp+1C70h+var_FA4], ebx
 * 00000001407877D3: mov     dword ptr [rbp+1C70h+var_FA4+4], ecx
 * 00000001407877D9: mov     [rbp+1C70h+var_F9C], edx
 * 00000001407877DF: cmp     eax, 31237648h
 * 00000001407877E4: jnz     short loc_140787822
 * 00000001407877E6: xor     ecx, ecx
 * 00000001407877E8: mov     eax, r9d
 * 00000001407877EB: cpuid
 * 00000001407877ED: mov     [rbp+1C70h+var_FA8], eax
 * 00000001407877F3: mov     eax, ebx
 * 00000001407877F5: and     eax, 0FFFF0000h
 * 00000001407877FA: mov     dword ptr [rbp+1C70h+var_FA4], ebx
 * 0000000140787800: mov     dword ptr [rbp+1C70h+var_FA4+4], ecx
 * 0000000140787806: mov     [rbp+1C70h+var_F9C], edx
 * 000000014078780C: cmp     eax, 60000h
 * 0000000140787811: jnz     short loc_140787822
 * 0000000140787813: movzx   eax, bx
 * 0000000140787816: cmp     eax, r13d
 * 0000000140787819: jnz     short loc_140787822
 * 000000014078781B: mov     eax, 4
 * 0000000140787820: jmp     short loc_140787827
 * 0000000140787822: mov     eax, 1000h
 * 0000000140787827: mov     dword ptr [rsp+1D70h+NtHeaders], r13d
 * 000000014078782C: jmp     short loc_140787842
 * 000000014078782E: lea     rax, HvlpInterruptCallback
 * 0000000140787835: mov     [rbp+1C70h+var_C68], rax
 * 000000014078783C: mov     eax, cs:dword_1407604C8
 * 0000000140787842: mov     r12d, 2
 * 0000000140787848: mov     [rbp+1C70h+var_FB4], eax
 * 000000014078784E: mov     r15d, [rdi+59Ch]
 * 0000000140787855: lea     rcx, HvlpVsmVtlCallVa
 * 000000014078785C: mov     r8d, [rdi+67Ch]
 * 0000000140787863: mov     r9d, 20h ; ' '
 * 0000000140787869: mov     eax, r12d
 * 000000014078786C: add     r12d, r13d
 * 000000014078786F: cmp     dword ptr [rdi+5F0h], 7
 * 0000000140787876: mov     dword ptr [rbp+1C70h+var_1CF0], r12d
 * 000000014078787A: mov     [rbp+rax*8+1C70h+var_C70], rcx
 * 0000000140787882: mov     [rbp+rax*4+1C70h+var_FB8], 8
 * 000000014078788D: mov     eax, r11d
 * 0000000140787890: cmovz   eax, r9d
 * 0000000140787894: mov     dword ptr [rbp+1C70h+var_1CC0], eax
 * 0000000140787897: lea     eax, [r12+r12*2]
 * 000000014078789B: shl     eax, 4
 * 000000014078789E: add     eax, r15d
 * 00000001407878A1: cmp     eax, [rdi+75Ch]
 * 00000001407878A7: jbe     loc_140787983
 * 00000001407878AD: mov     edx, eax
 * 00000001407878AF: mov     rcx, rdi
 * 00000001407878B2: call    sub_140251E08
 * 00000001407878B7: xor     r11d, r11d
 * 00000001407878BA: mov     r14, rax
 * 00000001407878BD: test    rax, rax
 * 00000001407878C0: jz      loc_14077C9F7
 * 00000001407878C6: mov     edx, [rdi+6D8h]
 * 00000001407878CC: test    dl, 4
 * 00000001407878CF: jnz     loc_140787973
 * 00000001407878D5: mov     ecx, [rdi+59Ch]
 * 00000001407878DB: and     edx, 20000000h
 * 00000001407878E1: mov     rbx, [rdi+580h]
 * 00000001407878E8: neg     edx
 * 00000001407878EA: sbb     edx, edx
 * 00000001407878EC: and     edx, [rdi+67Ch]
 * 00000001407878F2: cmp     ecx, 8
 * 00000001407878F5: jb      short loc_14078790C
 * 00000001407878F7: mov     eax, ecx
 * 00000001407878F9: shr     rax, 3
 * 00000001407878FD: mov     [rdi], r11
 * 0000000140787900: add     ecx, 0FFFFFFF8h
 * 0000000140787903: add     rdi, 8
 * 0000000140787907: sub     rax, r13
 * 000000014078790A: jnz     short loc_1407878FD
 * 000000014078790C: test    ecx, ecx
 * 000000014078790E: jz      short loc_14078791B
 * 0000000140787910: mov     [rdi], r11b
 * 0000000140787913: add     rdi, r13
 * 0000000140787916: add     ecx, 0FFFFFFFFh
 * 0000000140787919: jnz     short loc_140787910
 * 000000014078791B: mov     edi, [r14+67Ch]
 * 0000000140787922: mov     [r14+67Ch], edx
 * 0000000140787929: cmp     edx, 3
 * 000000014078792C: jz      short loc_14078795F
 * 000000014078792E: test    dword ptr [r14+6D8h], 10000000h
 * 0000000140787939: mov     ecx, r11d
 * 000000014078793C: cmovz   ecx, edx
 * 000000014078793F: test    ecx, ecx
 * 0000000140787941: jz      short loc_140787953
 * 0000000140787943: lea     rcx, [rbx-8]
 * 0000000140787947: mov     rdx, [rcx]
 * 000000014078794A: call    qword ptr [r14+210h]
 * 0000000140787951: jmp     short loc_140787969
 * 0000000140787953: mov     rcx, rbx
 * 0000000140787956: call    qword ptr [r14+0E8h]
 * 000000014078795D: jmp     short loc_140787969
 * 000000014078795F: mov     rcx, rbx
 * 0000000140787962: call    qword ptr [r14+348h]
 * 0000000140787969: mov     [r14+67Ch], edi
 * 0000000140787970: xor     r11d, r11d
 * 0000000140787973: and     dword ptr [r14+6D8h], 0FFFFFFFBh
 * 000000014078797B: mov     r9d, 20h ; ' '
 * 0000000140787981: jmp     short loc_14078798C
 * 0000000140787983: mov     r14, rdi
 * 0000000140787986: mov     [rdi+59Ch], eax
 * 000000014078798C: add     [r14+5C4h], r12d
 * 0000000140787993: lea     rbx, [r14+r15]
 * 0000000140787997: mov     [rbp+1C70h+var_1320], rbx
 * 000000014078799E: mov     [rbp+1C70h+var_1318], rbx
 * 00000001407879A5: test    r12d, r12d
 * 00000001407879A8: jz      loc_140787B03
 * 00000001407879AE: mov     esi, dword ptr [rbp+1C70h+var_1CC0]
 * 00000001407879B1: lea     r10, [rbp+1C70h+var_C70]
 * 00000001407879B8: mov     eax, r12d
 * 00000001407879BB: lea     r11, [rbp+1C70h+var_FB8]
 * 00000001407879C2: mov     [rsp+1D70h+var_1D00], r10
 * 00000001407879C7: xor     r12d, r12d
 * 00000001407879CA: mov     [rbp+1C70h+var_1CD0], r11
 * 00000001407879CE: mov     [rsp+1D70h+var_1D20], rax
 * 00000001407879D3: mov     r15d, [r11]
 * 00000001407879D6: mov     ecx, 30h ; '0'
 * 00000001407879DB: mov     rdi, [r10]
 * 00000001407879DE: mov     rax, rbx
 * 00000001407879E1: lea     edx, [rcx-2Ah]
 * 00000001407879E4: mov     [rax], r12
 * 00000001407879E7: add     ecx, 0FFFFFFF8h
 * 00000001407879EA: add     rax, 8
 * 00000001407879EE: sub     rdx, r13
 * 00000001407879F1: jnz     short loc_1407879E4
 * 00000001407879F3: test    ecx, ecx
 * 00000001407879F5: jz      short loc_140787A02
 * 00000001407879F7: mov     [rax], r12b
 * 00000001407879FA: add     rax, r13
 * 00000001407879FD: add     ecx, 0FFFFFFFFh
 * 0000000140787A00: jnz     short loc_1407879F7
 * 0000000140787A02: mov     [rbx], esi
 * 0000000140787A04: mov     [rbx+8], rdi
 * 0000000140787A08: cmp     esi, r9d
 * 0000000140787A0B: jnz     short loc_140787A2D
 * 0000000140787A0D: test    r15d, r15d
 * 0000000140787A10: jz      short loc_140787A2D
 * 0000000140787A12: lea     r9, [rbx+18h]
 * 0000000140787A16: mov     r8d, r15d
 * 0000000140787A19: mov     rdx, rdi
 * 0000000140787A1C: mov     rcx, r14
 * 0000000140787A1F: call    sub_1401588B8
 * 0000000140787A24: mov     r10, [rsp+1D70h+var_1D00]
 * 0000000140787A29: mov     r11, [rbp+1C70h+var_1CD0]
 * 0000000140787A2D: mov     [rbx+10h], r15d
 * 0000000140787A31: lea     rcx, [rdi+r15]
 * 0000000140787A35: add     [r14+5E0h], r15d
 * 0000000140787A3C: mov     rax, rdi
 * 0000000140787A3F: mov     r9d, [r14+5CCh]
 * 0000000140787A46: mov     rdx, [r14+5D0h]
 * 0000000140787A4D: cmp     rdi, rcx
 * 0000000140787A50: jnb     short loc_140787A5E
 * 0000000140787A52: prefetchnta byte ptr [rax]
 * 0000000140787A55: add     rax, 40h ; '@'
 * 0000000140787A59: cmp     rax, rcx
 * 0000000140787A5C: jb      short loc_140787A52
 * 0000000140787A5E: mov     r8d, r15d
 * 0000000140787A61: cmp     r15d, 8
 * 0000000140787A65: jb      short loc_140787A84
 * 0000000140787A67: mov     rax, r15
 * 0000000140787A6A: shr     rax, 3
 * 0000000140787A6E: xor     rdx, [rdi]
 * 0000000140787A71: mov     ecx, r9d
 * 0000000140787A74: rol     rdx, cl
 * 0000000140787A77: add     rdi, 8
 * 0000000140787A7B: add     r8d, 0FFFFFFF8h
 * 0000000140787A7F: sub     rax, r13
 * 0000000140787A82: jnz     short loc_140787A6E
 * 0000000140787A84: test    r8d, r8d
 * 0000000140787A87: jz      short loc_140787A9E
 * 0000000140787A89: movzx   eax, byte ptr [rdi]
 * 0000000140787A8C: mov     ecx, r9d
 * 0000000140787A8F: xor     rdx, rax
 * 0000000140787A92: add     rdi, r13
 * 0000000140787A95: rol     rdx, cl
 * 0000000140787A98: add     r8d, 0FFFFFFFFh
 * 0000000140787A9C: jnz     short loc_140787A89
 * 0000000140787A9E: mov     rax, rdx
 * 0000000140787AA1: jmp     short loc_140787AA5
 * 0000000140787AA3: xor     edx, eax
 * 0000000140787AA5: shr     rax, 1Fh
 * 0000000140787AA9: test    rax, rax
 * 0000000140787AAC: jnz     short loc_140787AA3
 * 0000000140787AAE: btr     edx, 1Fh
 * 0000000140787AB2: lea     r9d, [rax+20h]
 * 0000000140787AB6: mov     [rbx+14h], edx
 * 0000000140787AB9: add     r11, 4
 * 0000000140787ABD: add     [r14+5E0h], r15d
 * 0000000140787AC4: add     r10, 8
 * 0000000140787AC8: mov     rbx, [rbp+1C70h+var_1320]
 * 0000000140787ACF: add     rbx, 30h ; '0'
 * 0000000140787AD3: mov     [rbp+1C70h+var_1CD0], r11
 * 0000000140787AD7: sub     [rsp+1D70h+var_1D20], r13
 * 0000000140787ADC: mov     [rbp+1C70h+var_1320], rbx
 * 0000000140787AE3: mov     [rsp+1D70h+var_1D00], r10
 * 0000000140787AE8: jnz     loc_1407879D3
 * 0000000140787AEE: mov     rbx, [rbp+1C70h+var_1318]
 * 0000000140787AF5: mov     rsi, 0FFFFFFFFB8797400h
 * 0000000140787AFC: mov     r12d, dword ptr [rbp+1C70h+var_1CF0]
 * 0000000140787B00: xor     r11d, r11d
 * 0000000140787B03: mov     edx, 20h ; ' '
 * 0000000140787B08: mov     [rbp+1C70h+var_1310], rbx
 * 0000000140787B0F: cmp     dword ptr [rbp+1C70h+var_1CC0], edx
 * 0000000140787B12: jnz     short loc_140787B3C
 * 0000000140787B14: test    r12d, r12d
 * 0000000140787B17: jz      short loc_140787B3C
 * 0000000140787B19: or      [rbx+28h], r13d
 * 0000000140787B1D: mov     rbx, [rbp+1C70h+var_1318]
 * 0000000140787B24: add     rbx, 30h ; '0'
 * 0000000140787B28: mov     [rbp+1C70h+var_1318], rbx
 * 0000000140787B2F: add     r12d, 0FFFFFFFFh
 * 0000000140787B33: jnz     short loc_140787B19
 * 0000000140787B35: mov     rbx, [rbp+1C70h+var_1310]
 * 0000000140787B3C: mov     eax, dword ptr [rsp+1D70h+NtHeaders]
 * 0000000140787B40: cmp     eax, 0FFFFFFFFh
 * 0000000140787B43: jz      short loc_140787B56
 * 0000000140787B45: lea     rcx, [rax+rax*2]
 * 0000000140787B49: add     rcx, rcx
 * 0000000140787B4C: cmp     [rbx+rcx*8], edx
 * 0000000140787B4F: jnz     short loc_140787B56
 * 0000000140787B51: or      dword ptr [rbx+rcx*8+28h], 4
 * 0000000140787B56: mov     [rbp+1C70h+var_15F0], r14
 * 0000000140787B5D: cli
 * 0000000140787B5E: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 0000000140787B65: jnz     short loc_140787B69
 * 0000000140787B67: jmp     short loc_140787B67
 * 0000000140787B69: sti
 * 0000000140787B6A: cmp     dword ptr [rsp+1D70h+var_1D08], r11d
 * 0000000140787B6F: jnz     loc_1407883C0
 * 0000000140787B75: and     [rbp+1C70h+var_1AC0], 4
 * 0000000140787B7C: mov     r8d, 7
 * 0000000140787B82: jnz     short loc_140787B8F
 * 0000000140787B84: mov     r8d, cs:SeCiStateElementCount
 * 0000000140787B8B: add     r8d, 7
 * 0000000140787B8F: rdtsc
 * 0000000140787B91: shl     rdx, 20h
 * 0000000140787B95: mov     rbx, 7010008004002001h
 * 0000000140787B9F: or      rax, rdx
 * 0000000140787BA2: mov     r12d, 5
 * 0000000140787BA8: mov     rcx, rax
 * 0000000140787BAB: ror     rax, 3
 * 0000000140787BAF: xor     rcx, rax
 * 0000000140787BB2: mov     rax, rbx
 * 0000000140787BB5: mul     rcx
 * 0000000140787BB8: mov     rcx, rdx
 * 0000000140787BBB: mov     [rbp+1C70h+var_1308], rdx
 * 0000000140787BC2: xor     rcx, rax
 * 0000000140787BC5: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140787BCF: mul     rcx
 * 0000000140787BD2: shr     rdx, 1
 * 0000000140787BD5: imul    rax, rdx, 0Bh
 * 0000000140787BD9: sub     rcx, rax
 * 0000000140787BDC: cmp     ecx, r12d
 * 0000000140787BDF: ja      loc_140787C90
 * 0000000140787BE5: jz      loc_140787C78
 * 0000000140787BEB: test    ecx, ecx
 * 0000000140787BED: jz      short loc_140787C60
 * 0000000140787BEF: sub     ecx, 1
 * 0000000140787BF2: jz      short loc_140787C49
 * 0000000140787BF4: sub     ecx, 1
 * 0000000140787BF7: jz      short loc_140787C31
 * 0000000140787BF9: cmp     ecx, 1
 * 0000000140787BFC: jz      short loc_140787C16
 * 0000000140787BFE: mov     [rbp+1C70h+var_1A14], 67076494h
 * 0000000140787C08: mov     edi, [rbp+1C70h+var_1A14]
 * 0000000140787C0E: rol     edi, 4
 * 0000000140787C11: jmp     loc_140787D97
 * 0000000140787C16: mov     [rbp+1C70h+var_1A10], 0A8223938h
 * 0000000140787C20: mov     edi, [rbp+1C70h+var_1A10]
 * 0000000140787C26: xor     edi, 3
 * 0000000140787C29: ror     edi, 0Fh
 * 0000000140787C2C: jmp     loc_140787D97
 * 0000000140787C31: mov     [rbp+1C70h+var_1A0C], 85B5910Dh
 * 0000000140787C3B: mov     edi, [rbp+1C70h+var_1A0C]
 * 0000000140787C41: ror     edi, 2
 * 0000000140787C44: jmp     loc_140787D97
 * 0000000140787C49: mov     [rbp+1C70h+var_1A08], 0B2AD31A1h
 * 0000000140787C53: mov     edi, [rbp+1C70h+var_1A08]
 * 0000000140787C59: rol     edi, 1
 * 0000000140787C5B: jmp     loc_140787D97
 * 0000000140787C60: mov     [rbp+1C70h+var_1A04], 0D098D0D8h
 * 0000000140787C6A: mov     edi, [rbp+1C70h+var_1A04]
 * 0000000140787C70: ror     edi, 6
 * 0000000140787C73: jmp     loc_140787D97
 * 0000000140787C78: mov     [rbp+1C70h+var_1A00], 288C49EDh
 * 0000000140787C82: mov     edi, [rbp+1C70h+var_1A00]
 * 0000000140787C88: ror     edi, 5
 * 0000000140787C8B: jmp     loc_140787D97
 * 0000000140787C90: sub     ecx, 6
 * 0000000140787C93: jz      loc_140787D81
 * 0000000140787C99: sub     ecx, 1
 * 0000000140787C9C: jz      loc_140787D6C
 * 0000000140787CA2: sub     ecx, 1
 * 0000000140787CA5: jz      loc_140787D57
 * 0000000140787CAB: cmp     ecx, 1
 * 0000000140787CAE: jz      loc_140787D3F
 * 0000000140787CB4: rdtsc
 * 0000000140787CB6: shl     rdx, 20h
 * 0000000140787CBA: mov     r9d, 4EC4EC4Fh
 * 0000000140787CC0: or      rax, rdx
 * 0000000140787CC3: mov     rcx, rax
 * 0000000140787CC6: ror     rax, 3
 * 0000000140787CCA: xor     rcx, rax
 * 0000000140787CCD: mov     rax, rbx
 * 0000000140787CD0: mul     rcx
 * 0000000140787CD3: mov     rdi, rax
 * 0000000140787CD6: mov     [rbp+1C70h+var_1300], rdx
 * 0000000140787CDD: xor     edi, edx
 * 0000000140787CDF: mov     eax, r9d
 * 0000000140787CE2: mul     edi
 * 0000000140787CE4: mov     ecx, edi
 * 0000000140787CE6: shr     edi, 5
 * 0000000140787CE9: shr     edx, 3
 * 0000000140787CEC: mov     ebx, edi
 * 0000000140787CEE: imul    eax, edx, 1Ah
 * 0000000140787CF1: sub     ecx, eax
 * 0000000140787CF3: mov     eax, r9d
 * 0000000140787CF6: mul     edi
 * 0000000140787CF8: add     ecx, 61h ; 'a'
 * 0000000140787CFB: shr     edi, 5
 * 0000000140787CFE: shl     ecx, 8
 * 0000000140787D01: shr     edx, 3
 * 0000000140787D04: imul    eax, edx, 1Ah
 * 0000000140787D07: sub     ebx, eax
 * 0000000140787D09: mov     eax, r9d
 * 0000000140787D0C: mul     edi
 * 0000000140787D0E: add     ebx, 41h ; 'A'
 * 0000000140787D11: or      ebx, ecx
 * 0000000140787D13: shr     edx, 3
 * 0000000140787D16: imul    eax, edx, 1Ah
 * 0000000140787D19: mov     ecx, edi
 * 0000000140787D1B: shr     edi, 5
 * 0000000140787D1E: shl     ebx, 8
 * 0000000140787D21: sub     ecx, eax
 * 0000000140787D23: mov     eax, r9d
 * 0000000140787D26: mul     edi
 * 0000000140787D28: add     ecx, 61h ; 'a'
 * 0000000140787D2B: shr     edx, 3
 * 0000000140787D2E: or      ecx, ebx
 * 0000000140787D30: imul    eax, edx, 1Ah
 * 0000000140787D33: shl     ecx, 8
 * 0000000140787D36: sub     edi, eax
 * 0000000140787D38: add     edi, 41h ; 'A'
 * 0000000140787D3B: or      edi, ecx
 * 0000000140787D3D: jmp     short loc_140787D97
 * 0000000140787D3F: mov     [rbp+1C70h+var_19FC], 0B0869E85h
 * 0000000140787D49: mov     edi, [rbp+1C70h+var_19FC]
 * 0000000140787D4F: xor     edi, 9
 * 0000000140787D52: ror     edi, 21h
 * 0000000140787D55: jmp     short loc_140787D97
 * 0000000140787D57: mov     [rbp+1C70h+var_19F8], 64664142h
 * 0000000140787D61: mov     edi, [rbp+1C70h+var_19F8]
 * 0000000140787D67: ror     edi, 8
 * 0000000140787D6A: jmp     short loc_140787D97
 * 0000000140787D6C: mov     [rbp+1C70h+var_19F4], 82C6A6D8h
 * 0000000140787D76: mov     edi, [rbp+1C70h+var_19F4]
 * 0000000140787D7C: rol     edi, 7
 * 0000000140787D7F: jmp     short loc_140787D97
 * 0000000140787D81: mov     [rbp+1C70h+var_19F0], 4E574672h
 * 0000000140787D8B: mov     edi, [rbp+1C70h+var_19F0]
 * 0000000140787D91: xor     edi, 6
 * 0000000140787D94: ror     edi, 18h
 * 0000000140787D97: mov     edx, r8d
 * 0000000140787D9A: mov     ecx, 200h; PoolType
 * 0000000140787D9F: mov     r15d, r8d
 * 0000000140787DA2: mov     r8d, edi; Tag
 * 0000000140787DA5: shl     rdx, 3; NumberOfBytes
 * 0000000140787DA9: call    ExAllocatePoolWithTag
 * 0000000140787DAE: mov     [rsp+1D70h+var_1D00], rax
 * 0000000140787DB3: mov     rbx, rax
 * 0000000140787DB6: test    rax, rax
 * 0000000140787DB9: jz      loc_14077C9F7
 * 0000000140787DBF: rdtsc
 * 0000000140787DC1: shl     rdx, 20h
 * 0000000140787DC5: mov     r8, 7010008004002001h
 * 0000000140787DCF: or      rax, rdx
 * 0000000140787DD2: mov     rcx, rax
 * 0000000140787DD5: ror     rax, 3
 * 0000000140787DD9: xor     rcx, rax
 * 0000000140787DDC: mov     rax, r8
 * 0000000140787DDF: mul     rcx
 * 0000000140787DE2: mov     rcx, rdx
 * 0000000140787DE5: mov     [rbp+1C70h+var_12F8], rdx
 * 0000000140787DEC: xor     rcx, rax
 * 0000000140787DEF: mov     rax, 2E8BA2E8BA2E8BA3h
 * 0000000140787DF9: mul     rcx
 * 0000000140787DFC: shr     rdx, 1
 * 0000000140787DFF: imul    rax, rdx, 0Bh
 * 0000000140787E03: sub     rcx, rax
 * 0000000140787E06: cmp     ecx, r12d
 * 0000000140787E09: ja      loc_140787EBA
 * 0000000140787E0F: jz      loc_140787EA2
 * 0000000140787E15: test    ecx, ecx
 * 0000000140787E17: jz      short loc_140787E8A
 * 0000000140787E19: sub     ecx, 1
 * 0000000140787E1C: jz      short loc_140787E73
 * 0000000140787E1E: sub     ecx, 1
 * 0000000140787E21: jz      short loc_140787E5B
 * 0000000140787E23: cmp     ecx, 1
 * 0000000140787E26: jz      short loc_140787E40
 * 0000000140787E28: mov     [rbp+1C70h+var_19EC], 67076494h
 * 0000000140787E32: mov     edi, [rbp+1C70h+var_19EC]
 * 0000000140787E38: rol     edi, 4
 * 0000000140787E3B: jmp     loc_140787FC6
 * 0000000140787E40: mov     [rbp+1C70h+var_19E8], 0A8223938h
 * 0000000140787E4A: mov     edi, [rbp+1C70h+var_19E8]
 * 0000000140787E50: xor     edi, 3
 * 0000000140787E53: ror     edi, 0Fh
 * 0000000140787E56: jmp     loc_140787FC6
 * 0000000140787E5B: mov     [rbp+1C70h+var_19E4], 85B5910Dh
 * 0000000140787E65: mov     edi, [rbp+1C70h+var_19E4]
 * 0000000140787E6B: ror     edi, 2
 * 0000000140787E6E: jmp     loc_140787FC6
 * 0000000140787E73: mov     [rbp+1C70h+var_19E0], 0B2AD31A1h
 * 0000000140787E7D: mov     edi, [rbp+1C70h+var_19E0]
 * 0000000140787E83: rol     edi, 1
 * 0000000140787E85: jmp     loc_140787FC6
 * 0000000140787E8A: mov     [rbp+1C70h+var_19DC], 0D098D0D8h
 * 0000000140787E94: mov     edi, [rbp+1C70h+var_19DC]
 * 0000000140787E9A: ror     edi, 6
 * 0000000140787E9D: jmp     loc_140787FC6
 * 0000000140787EA2: mov     [rbp+1C70h+var_19D8], 288C49EDh
 * 0000000140787EAC: mov     edi, [rbp+1C70h+var_19D8]
 * 0000000140787EB2: ror     edi, 5
 * 0000000140787EB5: jmp     loc_140787FC6
 * 0000000140787EBA: sub     ecx, 6
 * 0000000140787EBD: jz      loc_140787FB0
 * 0000000140787EC3: sub     ecx, 1
 * 0000000140787EC6: jz      loc_140787F9B
 * 0000000140787ECC: sub     ecx, 1
 * 0000000140787ECF: jz      loc_140787F86
 * 0000000140787ED5: cmp     ecx, 1
 * 0000000140787ED8: jz      loc_140787F6E
 * 0000000140787EDE: rdtsc
 * 0000000140787EE0: shl     rdx, 20h
 * 0000000140787EE4: or      rax, rdx
 * 0000000140787EE7: mov     rcx, rax
 * 0000000140787EEA: ror     rax, 3
 * 0000000140787EEE: xor     rcx, rax
 * 0000000140787EF1: mov     rax, r8
 * 0000000140787EF4: mul     rcx
 * 0000000140787EF7: mov     r8d, 4EC4EC4Fh
 * 0000000140787EFD: mov     rdi, rax
 * 0000000140787F00: mov     [rbp+1C70h+var_12F0], rdx
 * 0000000140787F07: xor     edi, edx
 * 0000000140787F09: mov     eax, r8d
 * 0000000140787F0C: mul     edi
 * 0000000140787F0E: mov     ecx, edi
 * 0000000140787F10: shr     edi, 5
 * 0000000140787F13: shr     edx, 3
 * 0000000140787F16: mov     ebx, edi
 * 0000000140787F18: imul    eax, edx, 1Ah
 * 0000000140787F1B: sub     ecx, eax
 * 0000000140787F1D: mov     eax, r8d
 * 0000000140787F20: mul     edi
 * 0000000140787F22: add     ecx, 61h ; 'a'
 * 0000000140787F25: shr     edi, 5
 * 0000000140787F28: shl     ecx, 8
 * 0000000140787F2B: shr     edx, 3
 * 0000000140787F2E: imul    eax, edx, 1Ah
 * 0000000140787F31: sub     ebx, eax
 * 0000000140787F33: mov     eax, r8d
 * 0000000140787F36: mul     edi
 * 0000000140787F38: add     ebx, 41h ; 'A'
 * 0000000140787F3B: or      ebx, ecx
 * 0000000140787F3D: shr     edx, 3
 * 0000000140787F40: imul    eax, edx, 1Ah
 * 0000000140787F43: mov     ecx, edi
 * 0000000140787F45: shr     edi, 5
 * 0000000140787F48: shl     ebx, 8
 * 0000000140787F4B: sub     ecx, eax
 * 0000000140787F4D: mov     eax, r8d
 * 0000000140787F50: mul     edi
 * 0000000140787F52: add     ecx, 61h ; 'a'
 * 0000000140787F55: or      ecx, ebx
 * 0000000140787F57: shr     edx, 3
 * 0000000140787F5A: mov     rbx, [rsp+1D70h+var_1D00]
 * 0000000140787F5F: imul    eax, edx, 1Ah
 * 0000000140787F62: shl     ecx, 8
 * 0000000140787F65: sub     edi, eax
 * 0000000140787F67: add     edi, 41h ; 'A'
 * 0000000140787F6A: or      edi, ecx
 * 0000000140787F6C: jmp     short loc_140787FC6
 * 0000000140787F6E: mov     [rbp+1C70h+var_19D4], 0B0869E85h
 * 0000000140787F78: mov     edi, [rbp+1C70h+var_19D4]
 * 0000000140787F7E: xor     edi, 9
 * 0000000140787F81: ror     edi, 21h
 * 0000000140787F84: jmp     short loc_140787FC6
 * 0000000140787F86: mov     [rbp+1C70h+var_19D0], 64664142h
 * 0000000140787F90: mov     edi, [rbp+1C70h+var_19D0]
 * 0000000140787F96: ror     edi, 8
 * 0000000140787F99: jmp     short loc_140787FC6
 * 0000000140787F9B: mov     [rbp+1C70h+var_19CC], 82C6A6D8h
 * 0000000140787FA5: mov     edi, [rbp+1C70h+var_19CC]
 * 0000000140787FAB: rol     edi, 7
 * 0000000140787FAE: jmp     short loc_140787FC6
 * 0000000140787FB0: mov     [rbp+1C70h+var_19C8], 4E574672h
 * 0000000140787FBA: mov     edi, [rbp+1C70h+var_19C8]
 * 0000000140787FC0: xor     edi, 6
 * 0000000140787FC3: ror     edi, 18h
 * 0000000140787FC6: mov     rdx, r15
 * 0000000140787FC9: mov     r8d, edi; Tag
 * 0000000140787FCC: shl     rdx, 2; NumberOfBytes
 * 0000000140787FD0: mov     ecx, 200h; PoolType
 * 0000000140787FD5: call    ExAllocatePoolWithTag
 * 0000000140787FDA: xor     r9d, r9d
 * 0000000140787FDD: mov     [rbp+1C70h+var_1CD0], rax
 * 0000000140787FE1: mov     r15, rax
 * 0000000140787FE4: test    rax, rax
 * 0000000140787FE7: jnz     short loc_140787FF1
 * 0000000140787FE9: mov     rcx, rbx
 * 0000000140787FEC: jmp     loc_140786F66
 * 0000000140787FF1: lea     rax, SeCiCallbacks
 * 0000000140787FF8: mov     r12d, 4
 * 0000000140787FFE: mov     [rbx], rax
 * 0000000140788001: mov     eax, cs:dword_1407604A0
 * 0000000140788007: mov     [r15], eax
 * 000000014078800A: lea     rax, SeMsMinTCBList
 * 0000000140788011: mov     [rbx+8], rax
 * 0000000140788015: mov     eax, cs:dword_1407604D0
 * 000000014078801B: mov     [r15+4], eax
 * 000000014078801F: lea     rax, RtlProtectedAccess
 * 0000000140788026: mov     [rbx+10h], rax
 * 000000014078802A: mov     eax, cs:dword_1407604D8
 * 0000000140788030: mov     [r15+8], eax
 * 0000000140788034: lea     rax, SeProtectedMapping
 * 000000014078803B: mov     [rbx+18h], rax
 * 000000014078803F: mov     eax, cs:dword_1407604E0
 * 0000000140788045: mov     [r15+0Ch], eax
 * 0000000140788049: mov     dword ptr [rsp+1D70h+var_1D08], r12d
 * 000000014078804E: cmp     [rbp+1C70h+var_1AC0], r9d
 * 0000000140788055: jnz     loc_1407880E3
 * 000000014078805B: mov     rax, cs:SeSecureBootPolicyBlobHeader
 * 0000000140788062: mov     edi, r9d
 * 0000000140788065: mov     [rbx+20h], rax
 * 0000000140788069: mov     eax, cs:SeSecureBootPolicyBlobHeaderSize
 * 000000014078806F: mov     [r15+10h], eax
 * 0000000140788073: lea     rax, SeILSigningPolicy
 * 000000014078807A: mov     [rbx+28h], rax
 * 000000014078807E: lea     rax, SeCiDebugOptions
 * 0000000140788085: mov     [r15+14h], r13d
 * 0000000140788089: mov     [rbx+30h], rax
 * 000000014078808D: mov     [r15+18h], r12d
 * 0000000140788091: mov     r12d, 7
 * 0000000140788097: cmp     cs:SeCiStateElementCount, r9d
 * 000000014078809E: mov     dword ptr [rsp+1D70h+var_1D08], r12d
 * 00000001407880A3: jbe     short loc_1407880E3
 * 00000001407880A5: mov     r8, [rsp+1D70h+var_1D00]
 * 00000001407880AA: mov     rax, cs:SeCiStateElements
 * 00000001407880B1: mov     edx, r12d
 * 00000001407880B4: add     r12d, r13d
 * 00000001407880B7: mov     ebx, edi
 * 00000001407880B9: add     edi, r13d
 * 00000001407880BC: add     rbx, rbx
 * 00000001407880BF: mov     rcx, [rax+rbx*8]
 * 00000001407880C3: mov     [r8+rdx*8], rcx
 * 00000001407880C7: mov     rax, cs:SeCiStateElements
 * 00000001407880CE: mov     ecx, [rax+rbx*8+8]
 * 00000001407880D2: mov     [r15+rdx*4], ecx
 * 00000001407880D6: cmp     edi, cs:SeCiStateElementCount
 * 00000001407880DC: jb      short loc_1407880AA
 * 00000001407880DE: mov     dword ptr [rsp+1D70h+var_1D08], r12d
 * 00000001407880E3: cmp     dword ptr [r14+5F0h], 7
 * 00000001407880EB: mov     eax, r9d
 * 00000001407880EE: mov     edi, [r14+59Ch]
 * 00000001407880F5: mov     r10d, 20h ; ' '
 * 00000001407880FB: mov     r8d, [r14+67Ch]
 * 0000000140788102: cmovz   eax, r10d
 * 0000000140788106: mov     dword ptr [rsp+1D70h+NtHeaders], eax
 * 000000014078810A: lea     eax, [r12+r12*2]
 * 000000014078810E: shl     eax, 4
 * 0000000140788111: add     eax, edi
 * 0000000140788113: mov     dword ptr [rbp+1C70h+var_1CF0], edi
 * 0000000140788116: cmp     eax, [r14+75Ch]
 * 000000014078811D: jbe     loc_140788201
 * 0000000140788123: mov     edx, eax
 * 0000000140788125: mov     rcx, r14
 * 0000000140788128: call    sub_140251E08
 * 000000014078812D: xor     r9d, r9d
 * 0000000140788130: mov     rbx, rax
 * 0000000140788133: test    rax, rax
 * 0000000140788136: jz      loc_1407881F9
 * 000000014078813C: mov     edx, [r14+6D8h]
 * 0000000140788143: test    dl, 4
 * 0000000140788146: jnz     loc_1407881EA
 * 000000014078814C: mov     ecx, [r14+59Ch]
 * 0000000140788153: and     edx, 20000000h
 * 0000000140788159: mov     rdi, [r14+580h]
 * 0000000140788160: neg     edx
 * 0000000140788162: sbb     edx, edx
 * 0000000140788164: and     edx, [r14+67Ch]
 * 000000014078816B: cmp     ecx, 8
 * 000000014078816E: jb      short loc_140788185
 * 0000000140788170: mov     eax, ecx
 * 0000000140788172: shr     rax, 3
 * 0000000140788176: mov     [r14], r9
 * 0000000140788179: add     ecx, 0FFFFFFF8h
 * 000000014078817C: add     r14, 8
 * 0000000140788180: sub     rax, r13
 * 0000000140788183: jnz     short loc_140788176
 * 0000000140788185: test    ecx, ecx
 * 0000000140788187: jz      short loc_140788194
 * 0000000140788189: mov     [r14], r9b
 * 000000014078818C: add     r14, r13
 * 000000014078818F: add     ecx, 0FFFFFFFFh
 * 0000000140788192: jnz     short loc_140788189
 * 0000000140788194: mov     r14d, [rbx+67Ch]
 * 000000014078819B: mov     [rbx+67Ch], edx
 * 00000001407881A1: cmp     edx, 3
 * 00000001407881A4: jz      short loc_1407881D4
 * 00000001407881A6: test    dword ptr [rbx+6D8h], 10000000h
 * 00000001407881B0: mov     ecx, r9d
 * 00000001407881B3: cmovz   ecx, edx
 * 00000001407881B6: test    ecx, ecx
 * 00000001407881B8: jz      short loc_1407881C9
 * 00000001407881BA: lea     rcx, [rdi-8]
 * 00000001407881BE: mov     rdx, [rcx]
 * 00000001407881C1: call    qword ptr [rbx+210h]
 * 00000001407881C7: jmp     short loc_1407881DD
 * 00000001407881C9: mov     rcx, rdi
 * 00000001407881CC: call    qword ptr [rbx+0E8h]
 * 00000001407881D2: jmp     short loc_1407881DD
 * 00000001407881D4: mov     rcx, rdi
 * 00000001407881D7: call    qword ptr [rbx+348h]
 * 00000001407881DD: mov     edi, dword ptr [rbp+1C70h+var_1CF0]
 * 00000001407881E0: xor     r9d, r9d
 * 00000001407881E3: mov     [rbx+67Ch], r14d
 * 00000001407881EA: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 00000001407881F1: mov     r10d, 20h ; ' '
 * 00000001407881F7: jmp     short loc_14078820B
 * 00000001407881F9: mov     r14, r9
 * 00000001407881FC: jmp     loc_14078839B
 * 0000000140788201: mov     rbx, r14
 * 0000000140788204: mov     [r14+59Ch], eax
 * 000000014078820B: add     [rbx+5C4h], r12d
 * 0000000140788212: add     rdi, rbx
 * 0000000140788215: mov     [rbp+1C70h+var_12E8], rdi
 * 000000014078821C: mov     [rbp+1C70h+var_12E0], rdi
 * 0000000140788223: test    r12d, r12d
 * 0000000140788226: jz      loc_140788373
 * 000000014078822C: mov     r11, [rsp+1D70h+var_1D00]
 * 0000000140788231: mov     rsi, r15
 * 0000000140788234: mov     eax, r12d
 * 0000000140788237: mov     r12d, dword ptr [rsp+1D70h+NtHeaders]
 * 000000014078823C: mov     [rsp+1D70h+var_1D20], r11
 * 0000000140788241: mov     [rbp+1C70h+var_1CE8], rax
 * 0000000140788245: mov     r15d, [rsi]
 * 0000000140788248: mov     ecx, 30h ; '0'
 * 000000014078824D: mov     r14, [r11]
 * 0000000140788250: mov     rax, rdi
 * 0000000140788253: lea     edx, [rcx-2Ah]
 * 0000000140788256: mov     [rax], r9
 * 0000000140788259: add     ecx, 0FFFFFFF8h
 * 000000014078825C: add     rax, 8
 * 0000000140788260: sub     rdx, r13
 * 0000000140788263: jnz     short loc_140788256
 * 0000000140788265: test    ecx, ecx
 * 0000000140788267: jz      short loc_140788274
 * 0000000140788269: mov     [rax], r9b
 * 000000014078826C: add     rax, r13
 * 000000014078826F: add     ecx, 0FFFFFFFFh
 * 0000000140788272: jnz     short loc_140788269
 * 0000000140788274: mov     [rdi], r12d
 * 0000000140788277: mov     [rdi+8], r14
 * 000000014078827B: cmp     r12d, r10d
 * 000000014078827E: jnz     short loc_14078829F
 * 0000000140788280: test    r15d, r15d
 * 0000000140788283: jz      short loc_14078829F
 * 0000000140788285: lea     r9, [rdi+18h]
 * 0000000140788289: mov     r8d, r15d
 * 000000014078828C: mov     rdx, r14
 * 000000014078828F: mov     rcx, rbx
 * 0000000140788292: call    sub_1401588B8
 * 0000000140788297: mov     r11, [rsp+1D70h+var_1D20]
 * 000000014078829C: xor     r9d, r9d
 * 000000014078829F: mov     [rdi+10h], r15d
 * 00000001407882A3: lea     rcx, [r14+r15]
 * 00000001407882A7: add     [rbx+5E0h], r15d
 * 00000001407882AE: mov     rax, r14
 * 00000001407882B1: mov     r10d, [rbx+5CCh]
 * 00000001407882B8: mov     rdx, [rbx+5D0h]
 * 00000001407882BF: cmp     r14, rcx
 * 00000001407882C2: jnb     short loc_1407882D0
 * 00000001407882C4: prefetchnta byte ptr [rax]
 * 00000001407882C7: add     rax, 40h ; '@'
 * 00000001407882CB: cmp     rax, rcx
 * 00000001407882CE: jb      short loc_1407882C4
 * 00000001407882D0: mov     r8d, r15d
 * 00000001407882D3: cmp     r15d, 8
 * 00000001407882D7: jb      short loc_1407882F6
 * 00000001407882D9: mov     r9, r15
 * 00000001407882DC: shr     r9, 3
 * 00000001407882E0: xor     rdx, [r14]
 * 00000001407882E3: mov     ecx, r10d
 * 00000001407882E6: rol     rdx, cl
 * 00000001407882E9: add     r14, 8
 * 00000001407882ED: add     r8d, 0FFFFFFF8h
 * 00000001407882F1: sub     r9, r13
 * 00000001407882F4: jnz     short loc_1407882E0
 * 00000001407882F6: test    r8d, r8d
 * 00000001407882F9: jz      short loc_140788311
 * 00000001407882FB: movzx   eax, byte ptr [r14]
 * 00000001407882FF: mov     ecx, r10d
 * 0000000140788302: xor     rdx, rax
 * 0000000140788305: add     r14, r13
 * 0000000140788308: rol     rdx, cl
 * 000000014078830B: add     r8d, 0FFFFFFFFh
 * 000000014078830F: jnz     short loc_1407882FB
 * 0000000140788311: mov     rax, rdx
 * 0000000140788314: jmp     short loc_140788318
 * 0000000140788316: xor     edx, eax
 * 0000000140788318: shr     rax, 1Fh
 * 000000014078831C: test    rax, rax
 * 000000014078831F: jnz     short loc_140788316
 * 0000000140788321: btr     edx, 1Fh
 * 0000000140788325: lea     r10d, [rax+20h]
 * 0000000140788329: mov     [rdi+14h], edx
 * 000000014078832C: add     r11, 8
 * 0000000140788330: add     [rbx+5E0h], r15d
 * 0000000140788337: add     rsi, 4
 * 000000014078833B: mov     rdi, [rbp+1C70h+var_12E8]
 * 0000000140788342: add     rdi, 30h ; '0'
 * 0000000140788346: mov     [rsp+1D70h+var_1D20], r11
 * 000000014078834B: sub     [rbp+1C70h+var_1CE8], r13
 * 000000014078834F: mov     [rbp+1C70h+var_12E8], rdi
 * 0000000140788356: jnz     loc_140788245
 * 000000014078835C: mov     rdi, [rbp+1C70h+var_12E0]
 * 0000000140788363: mov     rsi, 0FFFFFFFFB8797400h
 * 000000014078836A: mov     r12d, dword ptr [rsp+1D70h+var_1D08]
 * 000000014078836F: mov     r15, [rbp+1C70h+var_1CD0]
 * 0000000140788373: mov     eax, 20h ; ' '
 * 0000000140788378: cmp     dword ptr [rsp+1D70h+NtHeaders], eax
 * 000000014078837C: jnz     short loc_140788398
 * 000000014078837E: test    r12d, r12d
 * 0000000140788381: jz      short loc_140788398
 * 0000000140788383: mov     eax, r12d
 * 0000000140788386: lea     rcx, [rax+rax*2]
 * 000000014078838A: shl     rcx, 4
 * 000000014078838E: add     rdi, rcx
 * 0000000140788391: mov     [rbp+1C70h+var_12E0], rdi
 * 0000000140788398: mov     r14, rbx
 * 000000014078839B: mov     rcx, r15; P
 * 000000014078839E: call    ExFreePool
 * 00000001407883A3: mov     rcx, [rsp+1D70h+var_1D00]; P
 * 00000001407883A8: call    ExFreePool
 * 00000001407883AD: xor     r11d, r11d
 * 00000001407883B0: test    r14, r14
 * 00000001407883B3: jz      loc_14077C9F7
 * 00000001407883B9: mov     [rbp+1C70h+var_15F0], r14
 * 00000001407883C0: cli
 * 00000001407883C1: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 00000001407883C8: jnz     short loc_1407883CC
 * 00000001407883CA: jmp     short loc_1407883CA
 * 00000001407883CC: sti
 * 00000001407883CD: cmp     dword ptr [rsp+1D70h+Src], r11d
 * 00000001407883D2: jnz     loc_1407886D1
 * 00000001407883D8: call    SeMinTcbLowering
 * 00000001407883DD: xor     r11d, r11d
 * 00000001407883E0: test    eax, eax
 * 00000001407883E2: jnz     loc_1407886D1
 * 00000001407883E8: cli
 * 00000001407883E9: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 00000001407883F0: jnz     short loc_1407883F4
 * 00000001407883F2: jmp     short loc_1407883F2
 * 00000001407883F4: sti
 * 00000001407883F5: mov     r15d, [r14+59Ch]
 * 00000001407883FC: mov     r8d, [r14+67Ch]
 * 0000000140788403: lea     eax, [r15+30h]
 * 0000000140788407: cmp     eax, [r14+75Ch]
 * 000000014078840E: jbe     loc_1407884E1
 * 0000000140788414: mov     edx, eax
 * 0000000140788416: mov     rcx, r14
 * 0000000140788419: call    sub_140251E08
 * 000000014078841E: xor     r11d, r11d
 * 0000000140788421: mov     rbx, rax
 * 0000000140788424: test    rax, rax
 * 0000000140788427: jz      loc_14077C9F7
 * 000000014078842D: mov     edx, [r14+6D8h]
 * 0000000140788434: test    dl, 4
 * 0000000140788437: jnz     loc_1407884D8
 * 000000014078843D: mov     ecx, [r14+59Ch]
 * 0000000140788444: and     edx, 20000000h
 * 000000014078844A: mov     rdi, [r14+580h]
 * 0000000140788451: neg     edx
 * 0000000140788453: sbb     edx, edx
 * 0000000140788455: and     edx, [r14+67Ch]
 * 000000014078845C: cmp     ecx, 8
 * 000000014078845F: jb      short loc_140788476
 * 0000000140788461: mov     eax, ecx
 * 0000000140788463: shr     rax, 3
 * 0000000140788467: mov     [r14], r11
 * 000000014078846A: add     ecx, 0FFFFFFF8h
 * 000000014078846D: add     r14, 8
 * 0000000140788471: sub     rax, r13
 * 0000000140788474: jnz     short loc_140788467
 * 0000000140788476: test    ecx, ecx
 * 0000000140788478: jz      short loc_140788485
 * 000000014078847A: mov     [r14], r11b
 * 000000014078847D: add     r14, r13
 * 0000000140788480: add     ecx, 0FFFFFFFFh
 * 0000000140788483: jnz     short loc_14078847A
 * 0000000140788485: mov     r14d, [rbx+67Ch]
 * 000000014078848C: mov     [rbx+67Ch], edx
 * 0000000140788492: cmp     edx, 3
 * 0000000140788495: jz      short loc_1407884C5
 * 0000000140788497: test    dword ptr [rbx+6D8h], 10000000h
 * 00000001407884A1: mov     ecx, r11d
 * 00000001407884A4: cmovz   ecx, edx
 * 00000001407884A7: test    ecx, ecx
 * 00000001407884A9: jz      short loc_1407884BA
 * 00000001407884AB: lea     rcx, [rdi-8]
 * 00000001407884AF: mov     rdx, [rcx]
 * 00000001407884B2: call    qword ptr [rbx+210h]
 * 00000001407884B8: jmp     short loc_1407884CE
 * 00000001407884BA: mov     rcx, rdi
 * 00000001407884BD: call    qword ptr [rbx+0E8h]
 * 00000001407884C3: jmp     short loc_1407884CE
 * 00000001407884C5: mov     rcx, rdi
 * 00000001407884C8: call    qword ptr [rbx+348h]
 * 00000001407884CE: mov     [rbx+67Ch], r14d
 * 00000001407884D5: xor     r11d, r11d
 * 00000001407884D8: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 00000001407884DF: jmp     short loc_1407884EB
 * 00000001407884E1: mov     rbx, r14
 * 00000001407884E4: mov     [r14+59Ch], eax
 * 00000001407884EB: add     [rbx+5C4h], r13d
 * 00000001407884F2: lea     rcx, [rbx+r15]
 * 00000001407884F6: mov     edx, 30h ; '0'
 * 00000001407884FB: mov     [rbp+1C70h+var_12D8], rcx
 * 0000000140788502: mov     rax, rcx
 * 0000000140788505: mov     r12d, 0FFFFFFF8h
 * 000000014078850B: lea     edi, [rdx-2Ah]
 * 000000014078850E: mov     [rax], r11
 * 0000000140788511: add     edx, r12d
 * 0000000140788514: add     rax, 8
 * 0000000140788518: sub     rdi, r13
 * 000000014078851B: jnz     short loc_14078850E
 * 000000014078851D: test    edx, edx
 * 000000014078851F: jz      short loc_14078852C
 * 0000000140788521: mov     [rax], r11b
 * 0000000140788524: add     rax, r13
 * 0000000140788527: add     edx, 0FFFFFFFFh
 * 000000014078852A: jnz     short loc_140788521
 * 000000014078852C: mov     dword ptr [rcx], 1Fh
 * 0000000140788532: mov     [rcx+8], r11
 * 0000000140788536: mov     [rcx+10h], r11d
 * 000000014078853A: mov     rdx, [rbx+5D0h]
 * 0000000140788541: mov     rax, rdx
 * 0000000140788544: jmp     short loc_140788548
 * 0000000140788546: xor     edx, eax
 * 0000000140788548: shr     rax, 1Fh
 * 000000014078854C: test    rax, rax
 * 000000014078854F: jnz     short loc_140788546
 * 0000000140788551: btr     edx, 1Fh
 * 0000000140788555: mov     [rbp+1C70h+var_15F0], rbx
 * 000000014078855C: mov     [rcx+14h], edx
 * 000000014078855F: cli
 * 0000000140788560: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 0000000140788567: jnz     short loc_14078856B
 * 0000000140788569: jmp     short loc_140788569
 * 000000014078856B: sti
 * 000000014078856C: mov     r15d, [rbx+59Ch]
 * 0000000140788573: mov     r8d, [rbx+67Ch]
 * 000000014078857A: lea     eax, [r15+30h]
 * 000000014078857E: cmp     eax, [rbx+75Ch]
 * 0000000140788584: jbe     loc_14078865A
 * 000000014078858A: mov     edx, eax
 * 000000014078858C: mov     rcx, rbx
 * 000000014078858F: call    sub_140251E08
 * 0000000140788594: xor     r11d, r11d
 * 0000000140788597: mov     r14, rax
 * 000000014078859A: test    rax, rax
 * 000000014078859D: jz      loc_14077C9F7
 * 00000001407885A3: mov     edx, [rbx+6D8h]
 * 00000001407885A9: test    dl, 4
 * 00000001407885AC: jnz     loc_140788650
 * 00000001407885B2: mov     ecx, [rbx+59Ch]
 * 00000001407885B8: and     edx, 20000000h
 * 00000001407885BE: mov     rdi, [rbx+580h]
 * 00000001407885C5: neg     edx
 * 00000001407885C7: sbb     edx, edx
 * 00000001407885C9: and     edx, [rbx+67Ch]
 * 00000001407885CF: cmp     ecx, 8
 * 00000001407885D2: jb      short loc_1407885E9
 * 00000001407885D4: mov     eax, ecx
 * 00000001407885D6: shr     rax, 3
 * 00000001407885DA: mov     [rbx], r11
 * 00000001407885DD: add     ecx, r12d
 * 00000001407885E0: add     rbx, 8
 * 00000001407885E4: sub     rax, r13
 * 00000001407885E7: jnz     short loc_1407885DA
 * 00000001407885E9: test    ecx, ecx
 * 00000001407885EB: jz      short loc_1407885F8
 * 00000001407885ED: mov     [rbx], r11b
 * 00000001407885F0: add     rbx, r13
 * 00000001407885F3: add     ecx, 0FFFFFFFFh
 * 00000001407885F6: jnz     short loc_1407885ED
 * 00000001407885F8: mov     ebx, [r14+67Ch]
 * 00000001407885FF: mov     [r14+67Ch], edx
 * 0000000140788606: cmp     edx, 3
 * 0000000140788609: jz      short loc_14078863C
 * 000000014078860B: test    dword ptr [r14+6D8h], 10000000h
 * 0000000140788616: mov     ecx, r11d
 * 0000000140788619: cmovz   ecx, edx
 * 000000014078861C: test    ecx, ecx
 * 000000014078861E: jz      short loc_140788630
 * 0000000140788620: lea     rcx, [rdi-8]
 * 0000000140788624: mov     rdx, [rcx]
 * 0000000140788627: call    qword ptr [r14+210h]
 * 000000014078862E: jmp     short loc_140788646
 * 0000000140788630: mov     rcx, rdi
 * 0000000140788633: call    qword ptr [r14+0E8h]
 * 000000014078863A: jmp     short loc_140788646
 * 000000014078863C: mov     rcx, rdi
 * 000000014078863F: call    qword ptr [r14+348h]
 * 0000000140788646: mov     [r14+67Ch], ebx
 * 000000014078864D: xor     r11d, r11d
 * 0000000140788650: and     dword ptr [r14+6D8h], 0FFFFFFFBh
 * 0000000140788658: jmp     short loc_140788663
 * 000000014078865A: mov     r14, rbx
 * 000000014078865D: mov     [rbx+59Ch], eax
 * 0000000140788663: add     [r14+5C4h], r13d
 * 000000014078866A: lea     rcx, [r14+r15]
 * 000000014078866E: mov     edx, 30h ; '0'
 * 0000000140788673: mov     [rbp+1C70h+var_12D0], rcx
 * 000000014078867A: mov     rax, rcx
 * 000000014078867D: lea     ebx, [rdx-2Ah]
 * 0000000140788680: mov     [rax], r11
 * 0000000140788683: add     edx, r12d
 * 0000000140788686: add     rax, 8
 * 000000014078868A: sub     rbx, r13
 * 000000014078868D: jnz     short loc_140788680
 * 000000014078868F: test    edx, edx
 * 0000000140788691: jz      short loc_14078869E
 * 0000000140788693: mov     [rax], r11b
 * 0000000140788696: add     rax, r13
 * 0000000140788699: add     edx, 0FFFFFFFFh
 * 000000014078869C: jnz     short loc_140788693
 * 000000014078869E: mov     dword ptr [rcx], 25h ; '%'
 * 00000001407886A4: mov     [rcx+8], r11
 * 00000001407886A8: mov     [rcx+10h], r11d
 * 00000001407886AC: mov     rdx, [r14+5D0h]
 * 00000001407886B3: mov     rax, rdx
 * 00000001407886B6: jmp     short loc_1407886BA
 * 00000001407886B8: xor     edx, eax
 * 00000001407886BA: shr     rax, 1Fh
 * 00000001407886BE: test    rax, rax
 * 00000001407886C1: jnz     short loc_1407886B8
 * 00000001407886C3: btr     edx, 1Fh
 * 00000001407886C7: mov     [rbp+1C70h+var_15F0], r14
 * 00000001407886CE: mov     [rcx+14h], edx
 * 00000001407886D1: mov     al, cs:KiKvaShadow
 * 00000001407886D7: lea     r10, KxUnexpectedInterrupt0
 * 00000001407886DE: mov     r12d, [r14+59Ch]
 * 00000001407886E5: test    al, al
 * 00000001407886E7: mov     r8d, [r14+67Ch]
 * 00000001407886EE: lea     rax, KiIsrThunkShadow
 * 00000001407886F5: cmovnz  r10, rax
 * 00000001407886F9: mov     r15d, r11d
 * 00000001407886FC: cmp     dword ptr [r14+5F0h], 7
 * 0000000140788704: mov     r9d, 20h ; ' '
 * 000000014078870A: lea     eax, [r12+30h]
 * 000000014078870F: mov     [rsp+1D70h+var_1D00], r10
 * 0000000140788714: cmovz   r15d, r9d
 * 0000000140788718: cmp     eax, [r14+75Ch]
 * 000000014078871F: jbe     loc_1407887FD
 * 0000000140788725: mov     edx, eax
 * 0000000140788727: mov     rcx, r14
 * 000000014078872A: call    sub_140251E08
 * 000000014078872F: xor     r11d, r11d
 * 0000000140788732: mov     rdi, rax
 * 0000000140788735: test    rax, rax
 * 0000000140788738: jz      loc_140789BB6
 * 000000014078873E: mov     edx, [r14+6D8h]
 * 0000000140788745: test    dl, 4
 * 0000000140788748: jnz     loc_1407887E9
 * 000000014078874E: mov     ecx, [r14+59Ch]
 * 0000000140788755: and     edx, 20000000h
 * 000000014078875B: mov     rbx, [r14+580h]
 * 0000000140788762: neg     edx
 * 0000000140788764: sbb     edx, edx
 * 0000000140788766: and     edx, [r14+67Ch]
 * 000000014078876D: cmp     ecx, 8
 * 0000000140788770: jb      short loc_140788787
 * 0000000140788772: mov     eax, ecx
 * 0000000140788774: shr     rax, 3
 * 0000000140788778: mov     [r14], r11
 * 000000014078877B: add     ecx, 0FFFFFFF8h
 * 000000014078877E: add     r14, 8
 * 0000000140788782: sub     rax, r13
 * 0000000140788785: jnz     short loc_140788778
 * 0000000140788787: test    ecx, ecx
 * 0000000140788789: jz      short loc_140788796
 * 000000014078878B: mov     [r14], r11b
 * 000000014078878E: add     r14, r13
 * 0000000140788791: add     ecx, 0FFFFFFFFh
 * 0000000140788794: jnz     short loc_14078878B
 * 0000000140788796: mov     r14d, [rdi+67Ch]
 * 000000014078879D: mov     [rdi+67Ch], edx
 * 00000001407887A3: cmp     edx, 3
 * 00000001407887A6: jz      short loc_1407887D6
 * 00000001407887A8: test    dword ptr [rdi+6D8h], 10000000h
 * 00000001407887B2: mov     ecx, r11d
 * 00000001407887B5: cmovz   ecx, edx
 * 00000001407887B8: test    ecx, ecx
 * 00000001407887BA: jz      short loc_1407887CB
 * 00000001407887BC: lea     rcx, [rbx-8]
 * 00000001407887C0: mov     rdx, [rcx]
 * 00000001407887C3: call    qword ptr [rdi+210h]
 * 00000001407887C9: jmp     short loc_1407887DF
 * 00000001407887CB: mov     rcx, rbx
 * 00000001407887CE: call    qword ptr [rdi+0E8h]
 * 00000001407887D4: jmp     short loc_1407887DF
 * 00000001407887D6: mov     rcx, rbx
 * 00000001407887D9: call    qword ptr [rdi+348h]
 * 00000001407887DF: mov     [rdi+67Ch], r14d
 * 00000001407887E6: xor     r11d, r11d
 * 00000001407887E9: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 00000001407887F0: mov     r9d, 20h ; ' '
 * 00000001407887F6: mov     r10, [rsp+1D70h+var_1D00]
 * 00000001407887FB: jmp     short loc_140788807
 * 00000001407887FD: mov     rdi, r14
 * 0000000140788800: mov     [r14+59Ch], eax
 * 0000000140788807: add     [rdi+5C4h], r13d
 * 000000014078880E: lea     rbx, [rdi+r12]
 * 0000000140788812: mov     ecx, 30h ; '0'
 * 0000000140788817: mov     [rbp+1C70h+var_12C8], rbx
 * 000000014078881E: mov     rax, rbx
 * 0000000140788821: lea     edx, [rcx-2Ah]
 * 0000000140788824: mov     [rax], r11
 * 0000000140788827: add     ecx, 0FFFFFFF8h
 * 000000014078882A: add     rax, 8
 * 000000014078882E: sub     rdx, r13
 * 0000000140788831: jnz     short loc_140788824
 * 0000000140788833: test    ecx, ecx
 * 0000000140788835: jz      short loc_140788842
 * 0000000140788837: mov     [rax], r11b
 * 000000014078883A: add     rax, r13
 * 000000014078883D: add     ecx, 0FFFFFFFFh
 * 0000000140788840: jnz     short loc_140788837
 * 0000000140788842: mov     [rbx], r15d
 * 0000000140788845: mov     r14d, 800h
 * 000000014078884B: mov     [rbx+8], r10
 * 000000014078884F: cmp     r15d, r9d
 * 0000000140788852: jnz     short loc_14078886E
 * 0000000140788854: lea     r9, [rbx+18h]
 * 0000000140788858: mov     r8d, r14d
 * 000000014078885B: mov     rdx, r10
 * 000000014078885E: mov     rcx, rdi
 * 0000000140788861: call    sub_1401588B8
 * 0000000140788866: mov     r10, [rsp+1D70h+var_1D00]
 * 000000014078886B: xor     r11d, r11d
 * 000000014078886E: mov     [rbx+10h], r14d
 * 0000000140788872: lea     rcx, [r10+800h]
 * 0000000140788879: add     [rdi+5E0h], r14d
 * 0000000140788880: mov     rax, r10
 * 0000000140788883: mov     r9d, [rdi+5CCh]
 * 000000014078888A: mov     rdx, [rdi+5D0h]
 * 0000000140788891: cmp     r10, rcx
 * 0000000140788894: jnb     short loc_1407888A2
 * 0000000140788896: prefetchnta byte ptr [rax]
 * 0000000140788899: add     rax, 40h ; '@'
 * 000000014078889D: cmp     rax, rcx
 * 00000001407888A0: jb      short loc_140788896
 * 00000001407888A2: mov     r8d, r14d
 * 00000001407888A5: mov     eax, 100h
 * 00000001407888AA: xor     rdx, [r10]
 * 00000001407888AD: mov     ecx, r9d
 * 00000001407888B0: rol     rdx, cl
 * 00000001407888B3: add     r10, 8
 * 00000001407888B7: add     r8d, 0FFFFFFF8h
 * 00000001407888BB: sub     rax, r13
 * 00000001407888BE: jnz     short loc_1407888AA
 * 00000001407888C0: test    r8d, r8d
 * 00000001407888C3: jz      short loc_1407888DB
 * 00000001407888C5: movzx   eax, byte ptr [r10]
 * 00000001407888C9: mov     ecx, r9d
 * 00000001407888CC: xor     rdx, rax
 * 00000001407888CF: add     r10, r13
 * 00000001407888D2: rol     rdx, cl
 * 00000001407888D5: add     r8d, 0FFFFFFFFh
 * 00000001407888D9: jnz     short loc_1407888C5
 * 00000001407888DB: mov     rax, rdx
 * 00000001407888DE: jmp     short loc_1407888E2
 * 00000001407888E0: xor     edx, eax
 * 00000001407888E2: shr     rax, 1Fh
 * 00000001407888E6: test    rax, rax
 * 00000001407888E9: jnz     short loc_1407888E0
 * 00000001407888EB: btr     edx, 1Fh
 * 00000001407888EF: mov     [rbx+14h], edx
 * 00000001407888F2: add     [rdi+5E0h], r14d
 * 00000001407888F9: mov     rax, cs:qword_140760060
 * 0000000140788900: mov     [rdi+750h], rax
 * 0000000140788907: mov     al, [rdi+6DAh]
 * 000000014078890D: test    r13b, al
 * 0000000140788910: jnz     loc_140789BB9
 * 0000000140788916: xor     ecx, ecx
 * 0000000140788918: call    KeGetPrcb
 * 000000014078891D: mov     r8, rax
 * 0000000140788920: mov     ecx, 0Bh
 * 0000000140788925: lea     rax, [rbp+1C70h+var_A48]
 * 000000014078892C: xor     r11d, r11d
 * 000000014078892F: or      qword ptr [rax-8], 0FFFFFFFFFFFFFFFFh
 * 0000000140788934: mov     [rax], r11
 * 0000000140788937: lea     rax, [rax+18h]
 * 000000014078893B: sub     rcx, r13
 * 000000014078893E: jnz     short loc_14078892F
 * 0000000140788940: lea     r9d, [rcx+9]
 * 0000000140788944: mov     [rbp+1C70h+var_A40], 0C0000082h
 * 000000014078894E: mov     eax, 80000001h
 * 0000000140788953: mov     [rbp+1C70h+var_A28], 0C0000081h
 * 000000014078895D: cpuid
 * 000000014078895F: mov     [rbp+1C70h+var_A10], 0C0000083h
 * 0000000140788969: mov     [rbp+1C70h+var_9F8], 1Bh
 * 0000000140788973: mov     [rbp+1C70h+var_9E0], 174h
 * 000000014078897D: mov     [rbp+1C70h+var_9C8], 175h
 * 0000000140788987: mov     [rbp+1C70h+var_9B0], 176h
 * 0000000140788991: mov     [rbp+1C70h+var_998], 0C0000084h
 * 000000014078899B: mov     [rbp+1C70h+var_980], 0C0000080h
 * 00000001407889A5: mov     [rbp+1C70h+var_990], 0FFFFFFFFFFFFEFFFh
 * 00000001407889B0: mov     dword ptr [rsp+1D70h+Src], r9d
 * 00000001407889B5: mov     [rbp+1C70h+var_F98], eax
 * 00000001407889BB: mov     [rbp+1C70h+var_F94], ebx
 * 00000001407889C1: mov     [rbp+1C70h+var_F90], ecx
 * 00000001407889C7: mov     [rbp+1C70h+var_F8C], edx
 * 00000001407889CD: bt      edx, 1Bh
 * 00000001407889D1: jnb     short loc_1407889E8
 * 00000001407889D3: mov     r9d, 0Ah
 * 00000001407889D9: mov     [rbp+1C70h+var_968], 0C0000103h
 * 00000001407889E3: mov     dword ptr [rsp+1D70h+Src], r9d
 * 00000001407889E8: cmp     byte ptr [r8+63Dh], 2
 * 00000001407889F0: jnz     short loc_140788A1E
 * 00000001407889F2: mov     eax, r9d
 * 00000001407889F5: add     r9d, r13d
 * 00000001407889F8: mov     dword ptr [rsp+1D70h+Src], r9d
 * 00000001407889FD: lea     rcx, [rax+rax*2]
 * 0000000140788A01: mov     rax, 400440000h
 * 0000000140788A0B: mov     [rbp+rcx*8+1C70h+var_A40], 1A0h
 * 0000000140788A16: mov     [rbp+rcx*8+1C70h+var_A50], rax
 * 0000000140788A1E: mov     eax, cs:KeNumberProcessors_0
 * 0000000140788A24: mov     ecx, r11d
 * 0000000140788A27: mov     dword ptr [rsp+1D70h+var_1D08], ecx
 * 0000000140788A2B: test    eax, eax
 * 0000000140788A2D: jz      loc_140789BB9
 * 0000000140788A33: mov     r12, [rdi+180h]
 * 0000000140788A3A: mov     edx, ecx
 * 0000000140788A3C: lea     rcx, [rbp+1C70h+var_F88]
 * 0000000140788A43: call    qword ptr [rdi+188h]
 * 0000000140788A49: lea     rdx, [rbp+1C70h+var_F78]
 * 0000000140788A50: lea     rcx, [rbp+1C70h+var_F88]
 * 0000000140788A57: call    qword ptr [rdi+1B8h]
 * 0000000140788A5D: lea     rdx, [rbp+1C70h+var_10A8]
 * 0000000140788A64: lea     rcx, [rbp+1C70h+var_1098]
 * 0000000140788A6B: call    KiGetGdtIdt
 * 0000000140788A70: mov     rdx, [rbp+1C70h+var_1096]
 * 0000000140788A77: lea     rcx, unk_14026157C
 * 0000000140788A7E: mov     ebx, 7
 * 0000000140788A83: movzx   eax, byte ptr [rcx]
 * 0000000140788A86: add     rcx, r13
 * 0000000140788A89: bts     dword ptr [rax+rdx+4], 8
 * 0000000140788A8F: sub     rbx, r13
 * 0000000140788A92: jnz     short loc_140788A83
 * 0000000140788A94: bts     dword ptr [rdx+44h], 9
 * 0000000140788A99: mov     r15d, [rdi+59Ch]
 * 0000000140788AA0: mov     r14, [rbp+1C70h+var_1096]
 * 0000000140788AA7: mov     r8d, [rdi+67Ch]
 * 0000000140788AAE: lea     eax, [r15+30h]
 * 0000000140788AB2: cmp     eax, [rdi+75Ch]
 * 0000000140788AB8: jbe     loc_140788B90
 * 0000000140788ABE: mov     edx, eax
 * 0000000140788AC0: mov     rcx, rdi
 * 0000000140788AC3: call    sub_140251E08
 * 0000000140788AC8: xor     r10d, r10d
 * 0000000140788ACB: mov     rbx, rax
 * 0000000140788ACE: test    rax, rax
 * 0000000140788AD1: jz      loc_140788B88
 * 0000000140788AD7: mov     edx, [rdi+6D8h]
 * 0000000140788ADD: test    dl, 4
 * 0000000140788AE0: jnz     loc_140788B7F
 * 0000000140788AE6: mov     ecx, [rdi+59Ch]
 * 0000000140788AEC: and     edx, 20000000h
 * 0000000140788AF2: mov     r9, [rdi+580h]
 * 0000000140788AF9: neg     edx
 * 0000000140788AFB: sbb     r8d, r8d
 * 0000000140788AFE: and     r8d, [rdi+67Ch]
 * 0000000140788B05: cmp     ecx, 8
 * 0000000140788B08: jb      short loc_140788B1F
 * 0000000140788B0A: mov     eax, ecx
 * 0000000140788B0C: shr     rax, 3
 * 0000000140788B10: mov     [rdi], r10
 * 0000000140788B13: add     ecx, 0FFFFFFF8h
 * 0000000140788B16: add     rdi, 8
 * 0000000140788B1A: sub     rax, r13
 * 0000000140788B1D: jnz     short loc_140788B10
 * 0000000140788B1F: test    ecx, ecx
 * 0000000140788B21: jz      short loc_140788B2E
 * 0000000140788B23: mov     [rdi], r10b
 * 0000000140788B26: add     rdi, r13
 * 0000000140788B29: add     ecx, 0FFFFFFFFh
 * 0000000140788B2C: jnz     short loc_140788B23
 * 0000000140788B2E: mov     edi, [rbx+67Ch]
 * 0000000140788B34: mov     [rbx+67Ch], r8d
 * 0000000140788B3B: cmp     r8d, 3
 * 0000000140788B3F: jz      short loc_140788B70
 * 0000000140788B41: test    dword ptr [rbx+6D8h], 10000000h
 * 0000000140788B4B: mov     ecx, r10d
 * 0000000140788B4E: cmovz   ecx, r8d
 * 0000000140788B52: test    ecx, ecx
 * 0000000140788B54: jz      short loc_140788B65
 * 0000000140788B56: lea     rcx, [r9-8]
 * 0000000140788B5A: mov     rdx, [rcx]
 * 0000000140788B5D: call    qword ptr [rbx+210h]
 * 0000000140788B63: jmp     short loc_140788B79
 * 0000000140788B65: mov     rcx, r9
 * 0000000140788B68: call    qword ptr [rbx+0E8h]
 * 0000000140788B6E: jmp     short loc_140788B79
 * 0000000140788B70: mov     rcx, r9
 * 0000000140788B73: call    qword ptr [rbx+348h]
 * 0000000140788B79: mov     [rbx+67Ch], edi
 * 0000000140788B7F: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 0000000140788B86: jmp     short loc_140788B99
 * 0000000140788B88: mov     rbx, r10
 * 0000000140788B8B: jmp     loc_140788C82
 * 0000000140788B90: mov     rbx, rdi
 * 0000000140788B93: mov     [rdi+59Ch], eax
 * 0000000140788B99: add     [rbx+5C4h], r13d
 * 0000000140788BA0: lea     r8, [rbx+r15]
 * 0000000140788BA4: mov     ecx, 30h ; '0'
 * 0000000140788BA9: mov     [rbp+1C70h+var_12C0], r8
 * 0000000140788BB0: mov     rax, r8
 * 0000000140788BB3: mov     r10d, 0FFFFFFF8h
 * 0000000140788BB9: xor     r11d, r11d
 * 0000000140788BBC: lea     edx, [rcx-2Ah]
 * 0000000140788BBF: mov     [rax], r11
 * 0000000140788BC2: add     ecx, r10d
 * 0000000140788BC5: add     rax, 8
 * 0000000140788BC9: sub     rdx, r13
 * 0000000140788BCC: jnz     short loc_140788BBF
 * 0000000140788BCE: test    ecx, ecx
 * 0000000140788BD0: jz      short loc_140788BDD
 * 0000000140788BD2: mov     [rax], r11b
 * 0000000140788BD5: add     rax, r13
 * 0000000140788BD8: add     ecx, 0FFFFFFFFh
 * 0000000140788BDB: jnz     short loc_140788BD2
 * 0000000140788BDD: mov     dword ptr [r8], 3
 * 0000000140788BE4: lea     rcx, [r14+50h]
 * 0000000140788BE8: mov     [r8+8], r14
 * 0000000140788BEC: mov     r15d, 50h ; 'P'
 * 0000000140788BF2: mov     [r8+10h], r15d
 * 0000000140788BF6: mov     rax, r14
 * 0000000140788BF9: add     [rbx+5E0h], r15d
 * 0000000140788C00: mov     r9d, [rbx+5CCh]
 * 0000000140788C07: mov     rdx, [rbx+5D0h]
 * 0000000140788C0E: cmp     r14, rcx
 * 0000000140788C11: jnb     short loc_140788C1F
 * 0000000140788C13: prefetchnta byte ptr [rax]
 * 0000000140788C16: add     rax, 40h ; '@'
 * 0000000140788C1A: cmp     rax, rcx
 * 0000000140788C1D: jb      short loc_140788C13
 * 0000000140788C1F: mov     edi, r15d
 * 0000000140788C22: mov     eax, 0Ah
 * 0000000140788C27: xor     rdx, [r14]
 * 0000000140788C2A: mov     ecx, r9d
 * 0000000140788C2D: rol     rdx, cl
 * 0000000140788C30: add     r14, 8
 * 0000000140788C34: add     edi, r10d
 * 0000000140788C37: sub     rax, r13
 * 0000000140788C3A: jnz     short loc_140788C27
 * 0000000140788C3C: test    edi, edi
 * 0000000140788C3E: jz      short loc_140788C55
 * 0000000140788C40: movzx   eax, byte ptr [r14]
 * 0000000140788C44: mov     ecx, r9d
 * 0000000140788C47: xor     rdx, rax
 * 0000000140788C4A: add     r14, r13
 * 0000000140788C4D: rol     rdx, cl
 * 0000000140788C50: add     edi, 0FFFFFFFFh
 * 0000000140788C53: jnz     short loc_140788C40
 * 0000000140788C55: mov     rax, rdx
 * 0000000140788C58: jmp     short loc_140788C5C
 * 0000000140788C5A: xor     edx, eax
 * 0000000140788C5C: shr     rax, 1Fh
 * 0000000140788C60: test    rax, rax
 * 0000000140788C63: jnz     short loc_140788C5A
 * 0000000140788C65: btr     edx, 1Fh
 * 0000000140788C69: mov     [r8+14h], edx
 * 0000000140788C6D: mov     rax, [rbp+1C70h+var_12C0]
 * 0000000140788C74: mov     [rbp+1C70h+var_12B8], rax
 * 0000000140788C7B: add     [rbx+5E0h], r15d
 * 0000000140788C82: lea     rcx, [rbp+1C70h+var_F78]
 * 0000000140788C89: call    r12
 * 0000000140788C8C: xor     r11d, r11d
 * 0000000140788C8F: test    rbx, rbx
 * 0000000140788C92: jz      loc_140789BB6
 * 0000000140788C98: mov     rax, [rbp+1C70h+var_12B8]
 * 0000000140788C9F: mov     r14d, r11d
 * 0000000140788CA2: mov     edx, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140788CA6: mov     [rax+28h], edx
 * 0000000140788CA9: mov     rcx, [rbp+1C70h+var_12B8]
 * 0000000140788CB0: movzx   eax, [rbp+1C70h+var_1098]
 * 0000000140788CB7: mov     [rcx+2Ch], ax
 * 0000000140788CBB: lea     rcx, [rbp+1C70h+var_F68]
 * 0000000140788CC2: mov     rax, [rbx+180h]
 * 0000000140788CC9: mov     [rsp+1D70h+var_1D00], rax
 * 0000000140788CCE: call    qword ptr [rbx+188h]
 * 0000000140788CD4: lea     rdx, [rbp+1C70h+var_F58]
 * 0000000140788CDB: lea     rcx, [rbp+1C70h+var_F68]
 * 0000000140788CE2: call    qword ptr [rbx+1B8h]
 * 0000000140788CE8: lea     rdx, [rbp+1C70h+var_1088]
 * 0000000140788CEF: lea     rcx, [rbp+1C70h+var_1078]
 * 0000000140788CF6: call    KiGetGdtIdt
 * 0000000140788CFB: mov     r12d, [rbx+59Ch]
 * 0000000140788D02: mov     r15, [rbp+1C70h+var_1086]
 * 0000000140788D09: mov     r8d, [rbx+67Ch]
 * 0000000140788D10: lea     eax, [r12+30h]
 * 0000000140788D15: cmp     eax, [rbx+75Ch]
 * 0000000140788D1B: jbe     loc_140788DF3
 * 0000000140788D21: mov     edx, eax
 * 0000000140788D23: mov     rcx, rbx
 * 0000000140788D26: call    sub_140251E08
 * 0000000140788D2B: xor     r10d, r10d
 * 0000000140788D2E: mov     rdi, rax
 * 0000000140788D31: test    rax, rax
 * 0000000140788D34: jz      loc_140788DEB
 * 0000000140788D3A: mov     edx, [rbx+6D8h]
 * 0000000140788D40: test    dl, 4
 * 0000000140788D43: jnz     loc_140788DE2
 * 0000000140788D49: mov     ecx, [rbx+59Ch]
 * 0000000140788D4F: and     edx, 20000000h
 * 0000000140788D55: mov     r9, [rbx+580h]
 * 0000000140788D5C: neg     edx
 * 0000000140788D5E: sbb     r8d, r8d
 * 0000000140788D61: and     r8d, [rbx+67Ch]
 * 0000000140788D68: cmp     ecx, 8
 * 0000000140788D6B: jb      short loc_140788D82
 * 0000000140788D6D: mov     eax, ecx
 * 0000000140788D6F: shr     rax, 3
 * 0000000140788D73: mov     [rbx], r10
 * 0000000140788D76: add     ecx, 0FFFFFFF8h
 * 0000000140788D79: add     rbx, 8
 * 0000000140788D7D: sub     rax, r13
 * 0000000140788D80: jnz     short loc_140788D73
 * 0000000140788D82: test    ecx, ecx
 * 0000000140788D84: jz      short loc_140788D91
 * 0000000140788D86: mov     [rbx], r10b
 * 0000000140788D89: add     rbx, r13
 * 0000000140788D8C: add     ecx, 0FFFFFFFFh
 * 0000000140788D8F: jnz     short loc_140788D86
 * 0000000140788D91: mov     ebx, [rdi+67Ch]
 * 0000000140788D97: mov     [rdi+67Ch], r8d
 * 0000000140788D9E: cmp     r8d, 3
 * 0000000140788DA2: jz      short loc_140788DD3
 * 0000000140788DA4: test    dword ptr [rdi+6D8h], 10000000h
 * 0000000140788DAE: mov     ecx, r10d
 * 0000000140788DB1: cmovz   ecx, r8d
 * 0000000140788DB5: test    ecx, ecx
 * 0000000140788DB7: jz      short loc_140788DC8
 * 0000000140788DB9: lea     rcx, [r9-8]
 * 0000000140788DBD: mov     rdx, [rcx]
 * 0000000140788DC0: call    qword ptr [rdi+210h]
 * 0000000140788DC6: jmp     short loc_140788DDC
 * 0000000140788DC8: mov     rcx, r9
 * 0000000140788DCB: call    qword ptr [rdi+0E8h]
 * 0000000140788DD1: jmp     short loc_140788DDC
 * 0000000140788DD3: mov     rcx, r9
 * 0000000140788DD6: call    qword ptr [rdi+348h]
 * 0000000140788DDC: mov     [rdi+67Ch], ebx
 * 0000000140788DE2: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 0000000140788DE9: jmp     short loc_140788DFC
 * 0000000140788DEB: mov     rdi, r10
 * 0000000140788DEE: jmp     loc_140788F73
 * 0000000140788DF3: mov     rdi, rbx
 * 0000000140788DF6: mov     [rbx+59Ch], eax
 * 0000000140788DFC: add     [rdi+5C4h], r13d
 * 0000000140788E03: lea     r8, [rdi+r12]
 * 0000000140788E07: mov     ecx, 30h ; '0'
 * 0000000140788E0C: mov     [rbp+1C70h+var_12B0], r8
 * 0000000140788E13: mov     rax, r8
 * 0000000140788E16: mov     r10d, 0FFFFFFF8h
 * 0000000140788E1C: xor     r12d, r12d
 * 0000000140788E1F: lea     edx, [rcx-2Ah]
 * 0000000140788E22: mov     [rax], r12
 * 0000000140788E25: add     ecx, r10d
 * 0000000140788E28: add     rax, 8
 * 0000000140788E2C: sub     rdx, r13
 * 0000000140788E2F: jnz     short loc_140788E22
 * 0000000140788E31: test    ecx, ecx
 * 0000000140788E33: jz      short loc_140788E40
 * 0000000140788E35: mov     [rax], r12b
 * 0000000140788E38: add     rax, r13
 * 0000000140788E3B: add     ecx, 0FFFFFFFFh
 * 0000000140788E3E: jnz     short loc_140788E35
 * 0000000140788E40: mov     r14d, 350h
 * 0000000140788E46: lea     rcx, [r15+350h]
 * 0000000140788E4D: mov     r11d, 2
 * 0000000140788E53: mov     rax, r15
 * 0000000140788E56: mov     [r8], r11d
 * 0000000140788E59: mov     [r8+8], r15
 * 0000000140788E5D: mov     [r8+10h], r14d
 * 0000000140788E61: add     [rdi+5E0h], r14d
 * 0000000140788E68: mov     r9d, [rdi+5CCh]
 * 0000000140788E6F: mov     rdx, [rdi+5D0h]
 * 0000000140788E76: cmp     r15, rcx
 * 0000000140788E79: jnb     short loc_140788E87
 * 0000000140788E7B: prefetchnta byte ptr [rax]
 * 0000000140788E7E: add     rax, 40h ; '@'
 * 0000000140788E82: cmp     rax, rcx
 * 0000000140788E85: jb      short loc_140788E7B
 * 0000000140788E87: mov     ebx, r14d
 * 0000000140788E8A: mov     eax, 6Ah ; 'j'
 * 0000000140788E8F: xor     rdx, [r15]
 * 0000000140788E92: mov     ecx, r9d
 * 0000000140788E95: rol     rdx, cl
 * 0000000140788E98: add     r15, 8
 * 0000000140788E9C: add     ebx, r10d
 * 0000000140788E9F: sub     rax, r13
 * 0000000140788EA2: jnz     short loc_140788E8F
 * 0000000140788EA4: test    ebx, ebx
 * 0000000140788EA6: jz      short loc_140788EBD
 * 0000000140788EA8: movzx   eax, byte ptr [r15]
 * 0000000140788EAC: mov     ecx, r9d
 * 0000000140788EAF: xor     rdx, rax
 * 0000000140788EB2: add     r15, r13
 * 0000000140788EB5: rol     rdx, cl
 * 0000000140788EB8: add     ebx, 0FFFFFFFFh
 * 0000000140788EBB: jnz     short loc_140788EA8
 * 0000000140788EBD: mov     rax, rdx
 * 0000000140788EC0: jmp     short loc_140788EC4
 * 0000000140788EC2: xor     edx, eax
 * 0000000140788EC4: shr     rax, 1Fh
 * 0000000140788EC8: test    rax, rax
 * 0000000140788ECB: jnz     short loc_140788EC2
 * 0000000140788ECD: mov     r15d, 7FFFFFFFh
 * 0000000140788ED3: and     edx, r15d
 * 0000000140788ED6: mov     [r8+14h], edx
 * 0000000140788EDA: mov     rax, [rbp+1C70h+var_12B0]
 * 0000000140788EE1: mov     [rbp+1C70h+var_12A8], rax
 * 0000000140788EE8: add     [rdi+5E0h], r14d
 * 0000000140788EEF: mov     rdx, [rbp+1C70h+var_1086]
 * 0000000140788EF6: add     dword ptr [rdi+5E0h], 10h
 * 0000000140788EFD: add     rdx, 0E10h
 * 0000000140788F04: mov     r9d, [rdi+5CCh]
 * 0000000140788F0B: mov     rax, rdx
 * 0000000140788F0E: mov     r14, [rdi+5D0h]
 * 0000000140788F15: lea     rcx, [rdx+10h]
 * 0000000140788F19: cmp     rdx, rcx
 * 0000000140788F1C: jnb     short loc_140788F2A
 * 0000000140788F1E: prefetchnta byte ptr [rax]
 * 0000000140788F21: add     rax, 40h ; '@'
 * 0000000140788F25: cmp     rax, rcx
 * 0000000140788F28: jb      short loc_140788F1E
 * 0000000140788F2A: mov     ebx, 10h
 * 0000000140788F2F: mov     r8, r11
 * 0000000140788F32: xor     r14, [rdx]
 * 0000000140788F35: mov     ecx, r9d
 * 0000000140788F38: rol     r14, cl
 * 0000000140788F3B: add     rdx, 8
 * 0000000140788F3F: add     ebx, r10d
 * 0000000140788F42: sub     r8, r13
 * 0000000140788F45: jnz     short loc_140788F32
 * 0000000140788F47: test    ebx, ebx
 * 0000000140788F49: jz      short loc_140788F5F
 * 0000000140788F4B: movzx   eax, byte ptr [rdx]
 * 0000000140788F4E: mov     ecx, r9d
 * 0000000140788F51: xor     r14, rax
 * 0000000140788F54: add     rdx, r13
 * 0000000140788F57: rol     r14, cl
 * 0000000140788F5A: add     ebx, 0FFFFFFFFh
 * 0000000140788F5D: jnz     short loc_140788F4B
 * 0000000140788F5F: mov     rax, r14
 * 0000000140788F62: jmp     short loc_140788F67
 * 0000000140788F64: xor     r14d, eax
 * 0000000140788F67: shr     rax, 1Fh
 * 0000000140788F6B: test    rax, rax
 * 0000000140788F6E: jnz     short loc_140788F64
 * 0000000140788F70: and     r14d, r15d
 * 0000000140788F73: lea     rcx, [rbp+1C70h+var_F58]
 * 0000000140788F7A: call    [rsp+1D70h+var_1D00]
 * 0000000140788F7E: xor     r11d, r11d
 * 0000000140788F81: test    rdi, rdi
 * 0000000140788F84: jz      loc_140789BB6
 * 0000000140788F8A: mov     rax, [rbp+1C70h+var_12A8]
 * 0000000140788F91: mov     r9d, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140788F96: mov     r12d, dword ptr [rsp+1D70h+Src]
 * 0000000140788F9B: mov     ecx, r14d
 * 0000000140788F9E: mov     [rax+18h], rcx
 * 0000000140788FA2: mov     rax, [rbp+1C70h+var_12A8]
 * 0000000140788FA9: mov     [rax+28h], r9d
 * 0000000140788FAD: mov     rcx, [rbp+1C70h+var_12A8]
 * 0000000140788FB4: movzx   eax, [rbp+1C70h+var_1088]
 * 0000000140788FBB: mov     [rcx+2Ch], ax
 * 0000000140788FBF: lea     eax, [r12+2]
 * 0000000140788FC4: mov     r15d, [rdi+59Ch]
 * 0000000140788FCB: lea     ecx, [rax+rax*2]
 * 0000000140788FCE: mov     r8d, [rdi+67Ch]
 * 0000000140788FD5: lea     eax, [r15+rcx*8]
 * 0000000140788FD9: cmp     eax, [rdi+75Ch]
 * 0000000140788FDF: jbe     loc_1407890BA
 * 0000000140788FE5: mov     edx, eax
 * 0000000140788FE7: mov     rcx, rdi
 * 0000000140788FEA: call    sub_140251E08
 * 0000000140788FEF: xor     r11d, r11d
 * 0000000140788FF2: mov     r14, rax
 * 0000000140788FF5: test    rax, rax
 * 0000000140788FF8: jz      loc_140789BB6
 * 0000000140788FFE: mov     edx, [rdi+6D8h]
 * 0000000140789004: test    dl, 4
 * 0000000140789007: jnz     loc_1407890AB
 * 000000014078900D: mov     ecx, [rdi+59Ch]
 * 0000000140789013: and     edx, 20000000h
 * 0000000140789019: mov     rbx, [rdi+580h]
 * 0000000140789020: neg     edx
 * 0000000140789022: sbb     edx, edx
 * 0000000140789024: and     edx, [rdi+67Ch]
 * 000000014078902A: cmp     ecx, 8
 * 000000014078902D: jb      short loc_140789044
 * 000000014078902F: mov     eax, ecx
 * 0000000140789031: shr     rax, 3
 * 0000000140789035: mov     [rdi], r11
 * 0000000140789038: add     ecx, 0FFFFFFF8h
 * 000000014078903B: add     rdi, 8
 * 000000014078903F: sub     rax, r13
 * 0000000140789042: jnz     short loc_140789035
 * 0000000140789044: test    ecx, ecx
 * 0000000140789046: jz      short loc_140789053
 * 0000000140789048: mov     [rdi], r11b
 * 000000014078904B: add     rdi, r13
 * 000000014078904E: add     ecx, 0FFFFFFFFh
 * 0000000140789051: jnz     short loc_140789048
 * 0000000140789053: mov     edi, [r14+67Ch]
 * 000000014078905A: mov     [r14+67Ch], edx
 * 0000000140789061: cmp     edx, 3
 * 0000000140789064: jz      short loc_140789097
 * 0000000140789066: test    dword ptr [r14+6D8h], 10000000h
 * 0000000140789071: mov     ecx, r11d
 * 0000000140789074: cmovz   ecx, edx
 * 0000000140789077: test    ecx, ecx
 * 0000000140789079: jz      short loc_14078908B
 * 000000014078907B: lea     rcx, [rbx-8]
 * 000000014078907F: mov     rdx, [rcx]
 * 0000000140789082: call    qword ptr [r14+210h]
 * 0000000140789089: jmp     short loc_1407890A1
 * 000000014078908B: mov     rcx, rbx
 * 000000014078908E: call    qword ptr [r14+0E8h]
 * 0000000140789095: jmp     short loc_1407890A1
 * 0000000140789097: mov     rcx, rbx
 * 000000014078909A: call    qword ptr [r14+348h]
 * 00000001407890A1: mov     [r14+67Ch], edi
 * 00000001407890A8: xor     r11d, r11d
 * 00000001407890AB: and     dword ptr [r14+6D8h], 0FFFFFFFBh
 * 00000001407890B3: mov     r9d, dword ptr [rsp+1D70h+var_1D08]
 * 00000001407890B8: jmp     short loc_1407890C3
 * 00000001407890BA: mov     r14, rdi
 * 00000001407890BD: mov     [rdi+59Ch], eax
 * 00000001407890C3: add     [r14+5C4h], r13d
 * 00000001407890CA: lea     rcx, [r14+r15]
 * 00000001407890CE: mov     edx, 30h ; '0'
 * 00000001407890D3: mov     [rbp+1C70h+var_12A0], rcx
 * 00000001407890DA: mov     rax, rcx
 * 00000001407890DD: lea     ebx, [rdx-2Ah]
 * 00000001407890E0: mov     [rax], r11
 * 00000001407890E3: add     edx, 0FFFFFFF8h
 * 00000001407890E6: add     rax, 8
 * 00000001407890EA: sub     rbx, r13
 * 00000001407890ED: jnz     short loc_1407890E0
 * 00000001407890EF: test    edx, edx
 * 00000001407890F1: jz      short loc_1407890FE
 * 00000001407890F3: mov     [rax], r11b
 * 00000001407890F6: add     rax, r13
 * 00000001407890F9: add     edx, 0FFFFFFFFh
 * 00000001407890FC: jnz     short loc_1407890F3
 * 00000001407890FE: mov     dword ptr [rcx], 7
 * 0000000140789104: mov     [rcx+8], r11
 * 0000000140789108: mov     [rcx+10h], r11d
 * 000000014078910C: mov     rdx, [r14+5D0h]
 * 0000000140789113: mov     rax, rdx
 * 0000000140789116: jmp     short loc_14078911A
 * 0000000140789118: xor     edx, eax
 * 000000014078911A: shr     rax, 1Fh
 * 000000014078911E: test    rax, rax
 * 0000000140789121: jnz     short loc_140789118
 * 0000000140789123: btr     edx, 1Fh
 * 0000000140789127: mov     [rcx+14h], edx
 * 000000014078912A: mov     edx, r9d
 * 000000014078912D: mov     rax, [rbp+1C70h+var_12A0]
 * 0000000140789134: lea     rcx, [rbp+1C70h+var_F48]
 * 000000014078913B: mov     [rbp+1C70h+var_1298], rax
 * 0000000140789142: mov     [rax+18h], r12d
 * 0000000140789146: mov     rax, [rbp+1C70h+var_1298]
 * 000000014078914D: mov     [rax+1Ch], r9d
 * 0000000140789151: mov     rbx, [rbp+1C70h+var_1298]
 * 0000000140789158: add     rbx, 30h ; '0'
 * 000000014078915C: call    qword ptr [r14+188h]
 * 0000000140789163: lea     rdx, [rbp+1C70h+var_F38]
 * 000000014078916A: lea     rcx, [rbp+1C70h+var_F48]
 * 0000000140789171: call    qword ptr [r14+1B8h]
 * 0000000140789178: test    r12d, r12d
 * 000000014078917B: jz      short loc_1407891C0
 * 000000014078917D: lea     r8, [rbp+1C70h+var_A50]
 * 0000000140789184: mov     r10, r12
 * 0000000140789187: sub     r8, rbx
 * 000000014078918A: lea     r9, [rbp+1C70h+var_A48]
 * 0000000140789191: sub     r9, rbx
 * 0000000140789194: lea     rdi, [rbx+8]
 * 0000000140789198: mov     rbx, [r8+rdi-8]
 * 000000014078919D: mov     ecx, [r9+rdi]
 * 00000001407891A1: mov     [rdi-8], rbx
 * 00000001407891A5: mov     [rdi+8], ecx
 * 00000001407891A8: rdmsr
 * 00000001407891AA: shl     rdx, 20h
 * 00000001407891AE: or      rax, rdx
 * 00000001407891B1: and     rax, rbx
 * 00000001407891B4: mov     [rdi], rax
 * 00000001407891B7: lea     rdi, [rdi+18h]
 * 00000001407891BB: sub     r10, r13
 * 00000001407891BE: jnz     short loc_140789198
 * 00000001407891C0: lea     rcx, [rbp+1C70h+var_F38]
 * 00000001407891C7: call    qword ptr [r14+180h]
 * 00000001407891CE: mov     r12d, [r14+59Ch]
 * 00000001407891D5: mov     r8d, [r14+67Ch]
 * 00000001407891DC: lea     eax, [r12+30h]
 * 00000001407891E1: cmp     eax, [r14+75Ch]
 * 00000001407891E8: jbe     loc_1407892BE
 * 00000001407891EE: mov     edx, eax
 * 00000001407891F0: mov     rcx, r14
 * 00000001407891F3: call    sub_140251E08
 * 00000001407891F8: xor     r11d, r11d
 * 00000001407891FB: mov     r15, rax
 * 00000001407891FE: test    rax, rax
 * 0000000140789201: jz      loc_140789BB6
 * 0000000140789207: mov     edx, [r14+6D8h]
 * 000000014078920E: test    dl, 4
 * 0000000140789211: jnz     loc_1407892B4
 * 0000000140789217: mov     ecx, [r14+59Ch]
 * 000000014078921E: and     edx, 20000000h
 * 0000000140789224: mov     rbx, [r14+580h]
 * 000000014078922B: neg     edx
 * 000000014078922D: sbb     edx, edx
 * 000000014078922F: and     edx, [r14+67Ch]
 * 0000000140789236: cmp     ecx, 8
 * 0000000140789239: jb      short loc_140789250
 * 000000014078923B: mov     eax, ecx
 * 000000014078923D: shr     rax, 3
 * 0000000140789241: mov     [r14], r11
 * 0000000140789244: add     ecx, 0FFFFFFF8h
 * 0000000140789247: add     r14, 8
 * 000000014078924B: sub     rax, r13
 * 000000014078924E: jnz     short loc_140789241
 * 0000000140789250: test    ecx, ecx
 * 0000000140789252: jz      short loc_14078925F
 * 0000000140789254: mov     [r14], r11b
 * 0000000140789257: add     r14, r13
 * 000000014078925A: add     ecx, 0FFFFFFFFh
 * 000000014078925D: jnz     short loc_140789254
 * 000000014078925F: mov     edi, [r15+67Ch]
 * 0000000140789266: mov     [r15+67Ch], edx
 * 000000014078926D: cmp     edx, 3
 * 0000000140789270: jz      short loc_1407892A3
 * 0000000140789272: test    dword ptr [r15+6D8h], 10000000h
 * 000000014078927D: mov     ecx, r11d
 * 0000000140789280: cmovz   ecx, edx
 * 0000000140789283: test    ecx, ecx
 * 0000000140789285: jz      short loc_140789297
 * 0000000140789287: lea     rcx, [rbx-8]
 * 000000014078928B: mov     rdx, [rcx]
 * 000000014078928E: call    qword ptr [r15+210h]
 * 0000000140789295: jmp     short loc_1407892AD
 * 0000000140789297: mov     rcx, rbx
 * 000000014078929A: call    qword ptr [r15+0E8h]
 * 00000001407892A1: jmp     short loc_1407892AD
 * 00000001407892A3: mov     rcx, rbx
 * 00000001407892A6: call    qword ptr [r15+348h]
 * 00000001407892AD: mov     [r15+67Ch], edi
 * 00000001407892B4: and     dword ptr [r15+6D8h], 0FFFFFFFBh
 * 00000001407892BC: jmp     short loc_1407892C8
 * 00000001407892BE: mov     r15, r14
 * 00000001407892C1: mov     [r14+59Ch], eax
 * 00000001407892C8: add     [r15+5C4h], r13d
 * 00000001407892CF: lea     rcx, [r15+r12]
 * 00000001407892D3: mov     edx, 30h ; '0'
 * 00000001407892D8: mov     [rbp+1C70h+var_1290], rcx
 * 00000001407892DF: mov     rax, rcx
 * 00000001407892E2: xor     edi, edi
 * 00000001407892E4: mov     r14d, 0FFFFFFF8h
 * 00000001407892EA: lea     ebx, [rdx-2Ah]
 * 00000001407892ED: mov     [rax], rdi
 * 00000001407892F0: add     edx, r14d
 * 00000001407892F3: add     rax, 8
 * 00000001407892F7: sub     rbx, r13
 * 00000001407892FA: jnz     short loc_1407892ED
 * 00000001407892FC: test    edx, edx
 * 00000001407892FE: jz      short loc_14078930B
 * 0000000140789300: mov     [rax], dil
 * 0000000140789303: add     rax, r13
 * 0000000140789306: add     edx, 0FFFFFFFFh
 * 0000000140789309: jnz     short loc_140789300
 * 000000014078930B: mov     dword ptr [rcx], 15h
 * 0000000140789311: mov     [rcx+8], rdi
 * 0000000140789315: mov     [rcx+10h], edi
 * 0000000140789318: mov     rdx, [r15+5D0h]
 * 000000014078931F: mov     rax, rdx
 * 0000000140789322: jmp     short loc_140789326
 * 0000000140789324: xor     edx, eax
 * 0000000140789326: shr     rax, 1Fh
 * 000000014078932A: test    rax, rax
 * 000000014078932D: jnz     short loc_140789324
 * 000000014078932F: btr     edx, 1Fh
 * 0000000140789333: mov     [rcx+14h], edx
 * 0000000140789336: lea     rcx, [rbp+1C70h+var_F28]
 * 000000014078933D: mov     rax, [rbp+1C70h+var_1290]
 * 0000000140789344: mov     edx, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140789348: mov     [rbp+1C70h+var_1288], rax
 * 000000014078934F: mov     [rax+28h], edi
 * 0000000140789352: mov     edi, 80010001h
 * 0000000140789357: mov     rax, [rbp+1C70h+var_1288]
 * 000000014078935E: mov     [rax+18h], rdi
 * 0000000140789362: mov     rax, [rbp+1C70h+var_1288]
 * 0000000140789369: mov     [rax+2Ch], edx
 * 000000014078936C: call    qword ptr [r15+188h]
 * 0000000140789373: lea     rdx, [rbp+1C70h+var_F18]
 * 000000014078937A: lea     rcx, [rbp+1C70h+var_F28]
 * 0000000140789381: call    qword ptr [r15+1B8h]
 * 0000000140789388: mov     rbx, cr0
 * 000000014078938B: lea     rcx, [rbp+1C70h+var_F18]
 * 0000000140789392: call    qword ptr [r15+180h]
 * 0000000140789399: mov     rax, [rbp+1C70h+var_1288]
 * 00000001407893A0: mov     [rax+20h], rbx
 * 00000001407893A4: mov     rax, [rbp+1C70h+var_1288]
 * 00000001407893AB: and     [rax+20h], rdi
 * 00000001407893AF: mov     r12d, [r15+59Ch]
 * 00000001407893B6: mov     r8d, [r15+67Ch]
 * 00000001407893BD: lea     eax, [r12+30h]
 * 00000001407893C2: cmp     eax, [r15+75Ch]
 * 00000001407893C9: jbe     loc_14078949F
 * 00000001407893CF: mov     edx, eax
 * 00000001407893D1: mov     rcx, r15
 * 00000001407893D4: call    sub_140251E08
 * 00000001407893D9: xor     r11d, r11d
 * 00000001407893DC: mov     rdi, rax
 * 00000001407893DF: test    rax, rax
 * 00000001407893E2: jz      loc_140789BB6
 * 00000001407893E8: mov     edx, [r15+6D8h]
 * 00000001407893EF: test    dl, 4
 * 00000001407893F2: jnz     loc_140789496
 * 00000001407893F8: mov     ecx, [r15+59Ch]
 * 00000001407893FF: and     edx, 20000000h
 * 0000000140789405: mov     rbx, [r15+580h]
 * 000000014078940C: neg     edx
 * 000000014078940E: sbb     edx, edx
 * 0000000140789410: and     edx, [r15+67Ch]
 * 0000000140789417: cmp     ecx, 8
 * 000000014078941A: jb      short loc_140789431
 * 000000014078941C: mov     eax, ecx
 * 000000014078941E: shr     rax, 3
 * 0000000140789422: mov     [r15], r11
 * 0000000140789425: add     ecx, r14d
 * 0000000140789428: add     r15, 8
 * 000000014078942C: sub     rax, r13
 * 000000014078942F: jnz     short loc_140789422
 * 0000000140789431: test    ecx, ecx
 * 0000000140789433: jz      short loc_140789440
 * 0000000140789435: mov     [r15], r11b
 * 0000000140789438: add     r15, r13
 * 000000014078943B: add     ecx, 0FFFFFFFFh
 * 000000014078943E: jnz     short loc_140789435
 * 0000000140789440: mov     r14d, [rdi+67Ch]
 * 0000000140789447: mov     [rdi+67Ch], edx
 * 000000014078944D: cmp     edx, 3
 * 0000000140789450: jz      short loc_140789480
 * 0000000140789452: test    dword ptr [rdi+6D8h], 10000000h
 * 000000014078945C: mov     ecx, r11d
 * 000000014078945F: cmovz   ecx, edx
 * 0000000140789462: test    ecx, ecx
 * 0000000140789464: jz      short loc_140789475
 * 0000000140789466: lea     rcx, [rbx-8]
 * 000000014078946A: mov     rdx, [rcx]
 * 000000014078946D: call    qword ptr [rdi+210h]
 * 0000000140789473: jmp     short loc_140789489
 * 0000000140789475: mov     rcx, rbx
 * 0000000140789478: call    qword ptr [rdi+0E8h]
 * 000000014078947E: jmp     short loc_140789489
 * 0000000140789480: mov     rcx, rbx
 * 0000000140789483: call    qword ptr [rdi+348h]
 * 0000000140789489: mov     [rdi+67Ch], r14d
 * 0000000140789490: mov     r14d, 0FFFFFFF8h
 * 0000000140789496: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 000000014078949D: jmp     short loc_1407894A9
 * 000000014078949F: mov     rdi, r15
 * 00000001407894A2: mov     [r15+59Ch], eax
 * 00000001407894A9: add     [rdi+5C4h], r13d
 * 00000001407894B0: lea     rcx, [rdi+r12]
 * 00000001407894B4: mov     edx, 30h ; '0'
 * 00000001407894B9: mov     [rbp+1C70h+var_1280], rcx
 * 00000001407894C0: mov     rax, rcx
 * 00000001407894C3: xor     r8d, r8d
 * 00000001407894C6: lea     ebx, [rdx-2Ah]
 * 00000001407894C9: mov     [rax], r8
 * 00000001407894CC: add     edx, r14d
 * 00000001407894CF: add     rax, 8
 * 00000001407894D3: sub     rbx, r13
 * 00000001407894D6: jnz     short loc_1407894C9
 * 00000001407894D8: test    edx, edx
 * 00000001407894DA: jz      short loc_1407894E7
 * 00000001407894DC: mov     [rax], r8b
 * 00000001407894DF: add     rax, r13
 * 00000001407894E2: add     edx, 0FFFFFFFFh
 * 00000001407894E5: jnz     short loc_1407894DC
 * 00000001407894E7: mov     dword ptr [rcx], 15h
 * 00000001407894ED: mov     [rcx+8], r8
 * 00000001407894F1: mov     [rcx+10h], r8d
 * 00000001407894F5: mov     rdx, [rdi+5D0h]
 * 00000001407894FC: mov     rax, rdx
 * 00000001407894FF: jmp     short loc_140789503
 * 0000000140789501: xor     edx, eax
 * 0000000140789503: shr     rax, 1Fh
 * 0000000140789507: test    rax, rax
 * 000000014078950A: jnz     short loc_140789501
 * 000000014078950C: mov     r12d, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140789511: btr     edx, 1Fh
 * 0000000140789515: mov     [rcx+14h], edx
 * 0000000140789518: mov     r14, 0FFFFFFFFFFFFDE3Fh
 * 000000014078951F: mov     rax, [rbp+1C70h+var_1280]
 * 0000000140789526: lea     rcx, [rbp+1C70h+var_F08]
 * 000000014078952D: mov     [rbp+1C70h+var_1278], rax
 * 0000000140789534: mov     edx, r12d
 * 0000000140789537: mov     dword ptr [rax+28h], 4
 * 000000014078953E: mov     rax, [rbp+1C70h+var_1278]
 * 0000000140789545: mov     [rax+18h], r14
 * 0000000140789549: mov     rax, [rbp+1C70h+var_1278]
 * 0000000140789550: mov     [rax+2Ch], r12d
 * 0000000140789554: call    qword ptr [rdi+188h]
 * 000000014078955A: lea     rdx, [rbp+1C70h+var_EF8]
 * 0000000140789561: lea     rcx, [rbp+1C70h+var_F08]
 * 0000000140789568: call    qword ptr [rdi+1B8h]
 * 000000014078956E: mov     rbx, cr4
 * 0000000140789571: lea     rcx, [rbp+1C70h+var_EF8]
 * 0000000140789578: call    qword ptr [rdi+180h]
 * 000000014078957E: mov     rax, [rbp+1C70h+var_1278]
 * 0000000140789585: or      rcx, 0FFFFFFFFFFFFFFFFh; FeatureMask
 * 0000000140789589: mov     [rax+20h], rbx
 * 000000014078958D: mov     rax, [rbp+1C70h+var_1278]
 * 0000000140789594: and     [rax+20h], r14
 * 0000000140789598: call    RtlGetEnabledExtendedFeatures
 * 000000014078959D: xor     r11d, r11d
 * 00000001407895A0: test    rax, rax
 * 00000001407895A3: jz      loc_140789781
 * 00000001407895A9: mov     r15d, [rdi+59Ch]
 * 00000001407895B0: mov     r8d, [rdi+67Ch]
 * 00000001407895B7: lea     eax, [r15+30h]
 * 00000001407895BB: cmp     eax, [rdi+75Ch]
 * 00000001407895C1: jbe     loc_140789697
 * 00000001407895C7: mov     edx, eax
 * 00000001407895C9: mov     rcx, rdi
 * 00000001407895CC: call    sub_140251E08
 * 00000001407895D1: xor     r11d, r11d
 * 00000001407895D4: mov     r14, rax
 * 00000001407895D7: test    rax, rax
 * 00000001407895DA: jz      loc_140789BB6
 * 00000001407895E0: mov     edx, [rdi+6D8h]
 * 00000001407895E6: test    dl, 4
 * 00000001407895E9: jnz     loc_14078968D
 * 00000001407895EF: mov     ecx, [rdi+59Ch]
 * 00000001407895F5: and     edx, 20000000h
 * 00000001407895FB: mov     rbx, [rdi+580h]
 * 0000000140789602: neg     edx
 * 0000000140789604: sbb     edx, edx
 * 0000000140789606: and     edx, [rdi+67Ch]
 * 000000014078960C: cmp     ecx, 8
 * 000000014078960F: jb      short loc_140789626
 * 0000000140789611: mov     eax, ecx
 * 0000000140789613: shr     rax, 3
 * 0000000140789617: mov     [rdi], r11
 * 000000014078961A: add     ecx, 0FFFFFFF8h
 * 000000014078961D: add     rdi, 8
 * 0000000140789621: sub     rax, r13
 * 0000000140789624: jnz     short loc_140789617
 * 0000000140789626: test    ecx, ecx
 * 0000000140789628: jz      short loc_140789635
 * 000000014078962A: mov     [rdi], r11b
 * 000000014078962D: add     rdi, r13
 * 0000000140789630: add     ecx, 0FFFFFFFFh
 * 0000000140789633: jnz     short loc_14078962A
 * 0000000140789635: mov     edi, [r14+67Ch]
 * 000000014078963C: mov     [r14+67Ch], edx
 * 0000000140789643: cmp     edx, 3
 * 0000000140789646: jz      short loc_140789679
 * 0000000140789648: test    dword ptr [r14+6D8h], 10000000h
 * 0000000140789653: mov     ecx, r11d
 * 0000000140789656: cmovz   ecx, edx
 * 0000000140789659: test    ecx, ecx
 * 000000014078965B: jz      short loc_14078966D
 * 000000014078965D: lea     rcx, [rbx-8]
 * 0000000140789661: mov     rdx, [rcx]
 * 0000000140789664: call    qword ptr [r14+210h]
 * 000000014078966B: jmp     short loc_140789683
 * 000000014078966D: mov     rcx, rbx
 * 0000000140789670: call    qword ptr [r14+0E8h]
 * 0000000140789677: jmp     short loc_140789683
 * 0000000140789679: mov     rcx, rbx
 * 000000014078967C: call    qword ptr [r14+348h]
 * 0000000140789683: mov     [r14+67Ch], edi
 * 000000014078968A: xor     r11d, r11d
 * 000000014078968D: and     dword ptr [r14+6D8h], 0FFFFFFFBh
 * 0000000140789695: jmp     short loc_1407896A0
 * 0000000140789697: mov     r14, rdi
 * 000000014078969A: mov     [rdi+59Ch], eax
 * 00000001407896A0: add     [r14+5C4h], r13d
 * 00000001407896A7: lea     rcx, [r14+r15]
 * 00000001407896AB: mov     edx, 30h ; '0'
 * 00000001407896B0: mov     [rbp+1C70h+var_1270], rcx
 * 00000001407896B7: mov     rax, rcx
 * 00000001407896BA: lea     ebx, [rdx-2Ah]
 * 00000001407896BD: mov     [rax], r11
 * 00000001407896C0: add     edx, 0FFFFFFF8h
 * 00000001407896C3: add     rax, 8
 * 00000001407896C7: sub     rbx, r13
 * 00000001407896CA: jnz     short loc_1407896BD
 * 00000001407896CC: test    edx, edx
 * 00000001407896CE: jz      short loc_1407896DB
 * 00000001407896D0: mov     [rax], r11b
 * 00000001407896D3: add     rax, r13
 * 00000001407896D6: add     edx, 0FFFFFFFFh
 * 00000001407896D9: jnz     short loc_1407896D0
 * 00000001407896DB: mov     dword ptr [rcx], 26h ; '&'
 * 00000001407896E1: mov     [rcx+8], r11
 * 00000001407896E5: mov     [rcx+10h], r11d
 * 00000001407896E9: mov     rdx, [r14+5D0h]
 * 00000001407896F0: mov     rax, rdx
 * 00000001407896F3: jmp     short loc_1407896F7
 * 00000001407896F5: xor     edx, eax
 * 00000001407896F7: shr     rax, 1Fh
 * 00000001407896FB: test    rax, rax
 * 00000001407896FE: jnz     short loc_1407896F5
 * 0000000140789700: btr     edx, 1Fh
 * 0000000140789704: mov     [rcx+14h], edx
 * 0000000140789707: mov     edx, r12d
 * 000000014078970A: mov     rax, [rbp+1C70h+var_1270]
 * 0000000140789711: lea     rcx, [rbp+1C70h+var_EE8]
 * 0000000140789718: mov     [rbp+1C70h+var_1268], rax
 * 000000014078971F: mov     [rax+28h], r11d
 * 0000000140789723: mov     rax, [rbp+1C70h+var_1268]
 * 000000014078972A: or      qword ptr [rax+18h], 0FFFFFFFFFFFFFFFFh
 * 000000014078972F: mov     rax, [rbp+1C70h+var_1268]
 * 0000000140789736: mov     [rax+2Ch], r12d
 * 000000014078973A: call    qword ptr [r14+188h]
 * 0000000140789741: lea     rdx, [rbp+1C70h+var_ED8]
 * 0000000140789748: lea     rcx, [rbp+1C70h+var_EE8]
 * 000000014078974F: call    qword ptr [r14+1B8h]
 * 0000000140789756: xor     ecx, ecx
 * 0000000140789758: xgetbv
 * 000000014078975B: shl     rdx, 20h
 * 000000014078975F: lea     rcx, [rbp+1C70h+var_ED8]
 * 0000000140789766: or      rdx, rax
 * 0000000140789769: mov     rbx, rdx
 * 000000014078976C: call    qword ptr [r14+180h]
 * 0000000140789773: mov     rax, [rbp+1C70h+var_1268]
 * 000000014078977A: mov     rdi, r14
 * 000000014078977D: mov     [rax+20h], rbx
 * 0000000140789781: mov     edx, r12d
 * 0000000140789784: lea     rcx, [rbp+1C70h+var_EC8]
 * 000000014078978B: call    qword ptr [rdi+188h]
 * 0000000140789791: lea     rdx, [rbp+1C70h+var_EB8]
 * 0000000140789798: lea     rcx, [rbp+1C70h+var_EC8]
 * 000000014078979F: call    qword ptr [rdi+1B8h]
 * 00000001407897A5: mov     rax, [rdi+750h]
 * 00000001407897AC: test    rax, rax
 * 00000001407897AF: jz      short loc_1407897BA
 * 00000001407897B1: mov     r12d, [rax+320h]
 * 00000001407897B8: jmp     short loc_1407897CB
 * 00000001407897BA: mov     ecx, 832h
 * 00000001407897BF: rdmsr
 * 00000001407897C1: shl     rdx, 20h
 * 00000001407897C5: or      rax, rdx
 * 00000001407897C8: mov     r12, rax
 * 00000001407897CB: mov     rax, [rdi+750h]
 * 00000001407897D2: test    rax, rax
 * 00000001407897D5: jz      short loc_1407897E0
 * 00000001407897D7: mov     r15d, [rax+340h]
 * 00000001407897DE: jmp     short loc_1407897F1
 * 00000001407897E0: mov     ecx, 834h
 * 00000001407897E5: rdmsr
 * 00000001407897E7: shl     rdx, 20h
 * 00000001407897EB: or      rax, rdx
 * 00000001407897EE: mov     r15, rax
 * 00000001407897F1: lea     rcx, [rbp+1C70h+var_EB8]
 * 00000001407897F8: call    qword ptr [rdi+180h]
 * 00000001407897FE: mov     r14d, [rdi+59Ch]
 * 0000000140789805: and     r12d, 0FFFCEF00h
 * 000000014078980C: mov     r8d, [rdi+67Ch]
 * 0000000140789813: and     r15d, 0FFFEE800h
 * 000000014078981A: lea     eax, [r14+30h]
 * 000000014078981E: cmp     eax, [rdi+75Ch]
 * 0000000140789824: jbe     loc_1407898F4
 * 000000014078982A: mov     edx, eax
 * 000000014078982C: mov     rcx, rdi
 * 000000014078982F: call    sub_140251E08
 * 0000000140789834: xor     r11d, r11d
 * 0000000140789837: mov     rbx, rax
 * 000000014078983A: test    rax, rax
 * 000000014078983D: jz      loc_140789BB6
 * 0000000140789843: mov     edx, [rdi+6D8h]
 * 0000000140789849: test    dl, 4
 * 000000014078984C: jnz     loc_1407898EB
 * 0000000140789852: mov     ecx, [rdi+59Ch]
 * 0000000140789858: and     edx, 20000000h
 * 000000014078985E: mov     r9, [rdi+580h]
 * 0000000140789865: neg     edx
 * 0000000140789867: sbb     r8d, r8d
 * 000000014078986A: and     r8d, [rdi+67Ch]
 * 0000000140789871: cmp     ecx, 8
 * 0000000140789874: jb      short loc_14078988B
 * 0000000140789876: mov     eax, ecx
 * 0000000140789878: shr     rax, 3
 * 000000014078987C: mov     [rdi], r11
 * 000000014078987F: add     ecx, 0FFFFFFF8h
 * 0000000140789882: add     rdi, 8
 * 0000000140789886: sub     rax, r13
 * 0000000140789889: jnz     short loc_14078987C
 * 000000014078988B: test    ecx, ecx
 * 000000014078988D: jz      short loc_14078989A
 * 000000014078988F: mov     [rdi], r11b
 * 0000000140789892: add     rdi, r13
 * 0000000140789895: add     ecx, 0FFFFFFFFh
 * 0000000140789898: jnz     short loc_14078988F
 * 000000014078989A: mov     edi, [rbx+67Ch]
 * 00000001407898A0: mov     [rbx+67Ch], r8d
 * 00000001407898A7: cmp     r8d, 3
 * 00000001407898AB: jz      short loc_1407898DC
 * 00000001407898AD: test    dword ptr [rbx+6D8h], 10000000h
 * 00000001407898B7: mov     ecx, r11d
 * 00000001407898BA: cmovz   ecx, r8d
 * 00000001407898BE: test    ecx, ecx
 * 00000001407898C0: jz      short loc_1407898D1
 * 00000001407898C2: lea     rcx, [r9-8]
 * 00000001407898C6: mov     rdx, [rcx]
 * 00000001407898C9: call    qword ptr [rbx+210h]
 * 00000001407898CF: jmp     short loc_1407898E5
 * 00000001407898D1: mov     rcx, r9
 * 00000001407898D4: call    qword ptr [rbx+0E8h]
 * 00000001407898DA: jmp     short loc_1407898E5
 * 00000001407898DC: mov     rcx, r9
 * 00000001407898DF: call    qword ptr [rbx+348h]
 * 00000001407898E5: mov     [rbx+67Ch], edi
 * 00000001407898EB: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 00000001407898F2: jmp     short loc_1407898FD
 * 00000001407898F4: mov     rbx, rdi
 * 00000001407898F7: mov     [rdi+59Ch], eax
 * 00000001407898FD: add     [rbx+5C4h], r13d
 * 0000000140789904: lea     rcx, [rbx+r14]
 * 0000000140789908: mov     edx, 30h ; '0'
 * 000000014078990D: mov     [rbp+1C70h+var_1260], rcx
 * 0000000140789914: mov     rax, rcx
 * 0000000140789917: xor     r8d, r8d
 * 000000014078991A: lea     edi, [rdx-2Ah]
 * 000000014078991D: mov     [rax], r8
 * 0000000140789920: add     edx, 0FFFFFFF8h
 * 0000000140789923: add     rax, 8
 * 0000000140789927: sub     rdi, r13
 * 000000014078992A: jnz     short loc_14078991D
 * 000000014078992C: test    edx, edx
 * 000000014078992E: jz      short loc_14078993B
 * 0000000140789930: mov     [rax], r8b
 * 0000000140789933: add     rax, r13
 * 0000000140789936: add     edx, 0FFFFFFFFh
 * 0000000140789939: jnz     short loc_140789930
 * 000000014078993B: mov     dword ptr [rcx], 17h
 * 0000000140789941: mov     [rcx+8], r8
 * 0000000140789945: mov     [rcx+10h], r8d
 * 0000000140789949: mov     rdx, [rbx+5D0h]
 * 0000000140789950: mov     rax, rdx
 * 0000000140789953: jmp     short loc_140789957
 * 0000000140789955: xor     edx, eax
 * 0000000140789957: shr     rax, 1Fh
 * 000000014078995B: test    rax, rax
 * 000000014078995E: jnz     short loc_140789955
 * 0000000140789960: btr     edx, 1Fh
 * 0000000140789964: mov     [rcx+14h], edx
 * 0000000140789967: mov     rax, [rbp+1C70h+var_1260]
 * 000000014078996E: mov     edx, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140789972: mov     ecx, edx
 * 0000000140789974: mov     [rbp+1C70h+var_1258], rax
 * 000000014078997B: mov     [rax+18h], r12d
 * 000000014078997F: mov     rax, [rbp+1C70h+var_1258]
 * 0000000140789986: mov     dword ptr [rax+1Ch], 0FFFCEF00h
 * 000000014078998D: mov     rax, [rbp+1C70h+var_1258]
 * 0000000140789994: mov     [rax+20h], r15d
 * 0000000140789998: mov     rax, [rbp+1C70h+var_1258]
 * 000000014078999F: mov     dword ptr [rax+24h], 0FFFEE800h
 * 00000001407899A6: mov     rax, [rbp+1C70h+var_1258]
 * 00000001407899AD: mov     [rax+28h], edx
 * 00000001407899B0: call    KeGetPrcb
 * 00000001407899B5: mov     rcx, rax
 * 00000001407899B8: mov     edx, 0F0000000h
 * 00000001407899BD: mov     eax, cs:NtBuildNumber
 * 00000001407899C3: xor     r11d, r11d
 * 00000001407899C6: and     eax, edx
 * 00000001407899C8: cmp     eax, edx
 * 00000001407899CA: jnz     short loc_1407899D0
 * 00000001407899CC: mov     [rcx-78h], r11
 * 00000001407899D0: cmp     dword ptr [rbx+5F0h], 7
 * 00000001407899D7: lea     r14, [rcx-78h]
 * 00000001407899DB: mov     r12d, [rbx+59Ch]
 * 00000001407899E2: mov     r15d, r11d
 * 00000001407899E5: mov     r8d, [rbx+67Ch]
 * 00000001407899EC: mov     r9d, 20h ; ' '
 * 00000001407899F2: cmovz   r15d, r9d
 * 00000001407899F6: lea     eax, [r12+30h]
 * 00000001407899FB: cmp     eax, [rbx+75Ch]
 * 0000000140789A01: jbe     loc_140789ADA
 * 0000000140789A07: mov     edx, eax
 * 0000000140789A09: mov     rcx, rbx
 * 0000000140789A0C: call    sub_140251E08
 * 0000000140789A11: xor     r11d, r11d
 * 0000000140789A14: mov     rdi, rax
 * 0000000140789A17: test    rax, rax
 * 0000000140789A1A: jz      loc_140789BB6
 * 0000000140789A20: mov     edx, [rbx+6D8h]
 * 0000000140789A26: test    dl, 4
 * 0000000140789A29: jnz     loc_140789ACB
 * 0000000140789A2F: mov     ecx, [rbx+59Ch]
 * 0000000140789A35: and     edx, 20000000h
 * 0000000140789A3B: mov     r9, [rbx+580h]
 * 0000000140789A42: neg     edx
 * 0000000140789A44: sbb     r8d, r8d
 * 0000000140789A47: and     r8d, [rbx+67Ch]
 * 0000000140789A4E: cmp     ecx, 8
 * 0000000140789A51: jb      short loc_140789A68
 * 0000000140789A53: mov     eax, ecx
 * 0000000140789A55: shr     rax, 3
 * 0000000140789A59: mov     [rbx], r11
 * 0000000140789A5C: add     ecx, 0FFFFFFF8h
 * 0000000140789A5F: add     rbx, 8
 * 0000000140789A63: sub     rax, r13
 * 0000000140789A66: jnz     short loc_140789A59
 * 0000000140789A68: test    ecx, ecx
 * 0000000140789A6A: jz      short loc_140789A77
 * 0000000140789A6C: mov     [rbx], r11b
 * 0000000140789A6F: add     rbx, r13
 * 0000000140789A72: add     ecx, 0FFFFFFFFh
 * 0000000140789A75: jnz     short loc_140789A6C
 * 0000000140789A77: mov     ebx, [rdi+67Ch]
 * 0000000140789A7D: mov     [rdi+67Ch], r8d
 * 0000000140789A84: cmp     r8d, 3
 * 0000000140789A88: jz      short loc_140789AB9
 * 0000000140789A8A: test    dword ptr [rdi+6D8h], 10000000h
 * 0000000140789A94: mov     ecx, r11d
 * 0000000140789A97: cmovz   ecx, r8d
 * 0000000140789A9B: test    ecx, ecx
 * 0000000140789A9D: jz      short loc_140789AAE
 * 0000000140789A9F: lea     rcx, [r9-8]
 * 0000000140789AA3: mov     rdx, [rcx]
 * 0000000140789AA6: call    qword ptr [rdi+210h]
 * 0000000140789AAC: jmp     short loc_140789AC2
 * 0000000140789AAE: mov     rcx, r9
 * 0000000140789AB1: call    qword ptr [rdi+0E8h]
 * 0000000140789AB7: jmp     short loc_140789AC2
 * 0000000140789AB9: mov     rcx, r9
 * 0000000140789ABC: call    qword ptr [rdi+348h]
 * 0000000140789AC2: mov     [rdi+67Ch], ebx
 * 0000000140789AC8: xor     r11d, r11d
 * 0000000140789ACB: and     dword ptr [rdi+6D8h], 0FFFFFFFBh
 * 0000000140789AD2: mov     r9d, 20h ; ' '
 * 0000000140789AD8: jmp     short loc_140789AE3
 * 0000000140789ADA: mov     rdi, rbx
 * 0000000140789ADD: mov     [rbx+59Ch], eax
 * 0000000140789AE3: add     [rdi+5C4h], r13d
 * 0000000140789AEA: lea     rbx, [rdi+r12]
 * 0000000140789AEE: mov     ecx, 30h ; '0'
 * 0000000140789AF3: mov     [rbp+1C70h+var_1250], rbx
 * 0000000140789AFA: mov     rax, rbx
 * 0000000140789AFD: lea     edx, [rcx-2Ah]
 * 0000000140789B00: mov     [rax], r11
 * 0000000140789B03: add     ecx, 0FFFFFFF8h
 * 0000000140789B06: add     rax, 8
 * 0000000140789B0A: sub     rdx, r13
 * 0000000140789B0D: jnz     short loc_140789B00
 * 0000000140789B0F: test    ecx, ecx
 * 0000000140789B11: jz      short loc_140789B1E
 * 0000000140789B13: mov     [rax], r11b
 * 0000000140789B16: add     rax, r13
 * 0000000140789B19: add     ecx, 0FFFFFFFFh
 * 0000000140789B1C: jnz     short loc_140789B13
 * 0000000140789B1E: mov     [rbx], r15d
 * 0000000140789B21: mov     [rbx+8], r14
 * 0000000140789B25: cmp     r15d, r9d
 * 0000000140789B28: jnz     short loc_140789B42
 * 0000000140789B2A: lea     r9, [rbx+18h]
 * 0000000140789B2E: mov     r8d, 8
 * 0000000140789B34: mov     rdx, r14
 * 0000000140789B37: mov     rcx, rdi
 * 0000000140789B3A: call    sub_1401588B8
 * 0000000140789B3F: xor     r11d, r11d
 * 0000000140789B42: mov     dword ptr [rbx+10h], 8
 * 0000000140789B49: lea     rdx, [r14+8]
 * 0000000140789B4D: add     dword ptr [rdi+5E0h], 8
 * 0000000140789B54: mov     rax, r14
 * 0000000140789B57: mov     ecx, [rdi+5CCh]
 * 0000000140789B5D: mov     r8, [rdi+5D0h]
 * 0000000140789B64: cmp     r14, rdx
 * 0000000140789B67: jnb     short loc_140789B75
 * 0000000140789B69: prefetchnta byte ptr [rax]
 * 0000000140789B6C: add     rax, 40h ; '@'
 * 0000000140789B70: cmp     rax, rdx
 * 0000000140789B73: jb      short loc_140789B69
 * 0000000140789B75: mov     rax, [r14]
 * 0000000140789B78: xor     rax, r8
 * 0000000140789B7B: rol     rax, cl
 * 0000000140789B7E: mov     rcx, rax
 * 0000000140789B81: jmp     short loc_140789B85
 * 0000000140789B83: xor     eax, ecx
 * 0000000140789B85: shr     rcx, 1Fh
 * 0000000140789B89: test    rcx, rcx
 * 0000000140789B8C: jnz     short loc_140789B83
 * 0000000140789B8E: mov     ecx, dword ptr [rsp+1D70h+var_1D08]
 * 0000000140789B92: btr     eax, 1Fh
 * 0000000140789B96: mov     [rbx+14h], eax
 * 0000000140789B99: add     ecx, r13d
 * 0000000140789B9C: add     dword ptr [rdi+5E0h], 8
 * 0000000140789BA3: mov     eax, cs:KeNumberProcessors_0
 * 0000000140789BA9: mov     dword ptr [rsp+1D70h+var_1D08], ecx
 * 0000000140789BAD: cmp     ecx, eax
 * 0000000140789BAF: jnb     short loc_140789BB9
 * 0000000140789BB1: jmp     loc_140788A33
 * 0000000140789BB6: mov     rdi, r11
 * 0000000140789BB9: mov     [rbp+1C70h+var_15F0], rdi
 * 0000000140789BC0: cli
 * 0000000140789BC1: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 0000000140789BC8: jnz     short loc_140789BCC
 * 0000000140789BCA: jmp     short loc_140789BCA
 * 0000000140789BCC: sti
 * 0000000140789BCD: test    rdi, rdi
 * 0000000140789BD0: jz      loc_14077C9F7
 * 0000000140789BD6: cli
 * 0000000140789BD7: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 0000000140789BDE: jnz     short loc_140789BE2
 * 0000000140789BE0: jmp     short loc_140789BE0
 * 0000000140789BE2: sti
 * 0000000140789BE3: mov     r14d, [rdi+59Ch]
 * 0000000140789BEA: mov     r8d, [rdi+67Ch]
 * 0000000140789BF1: lea     eax, [r14+30h]
 * 0000000140789BF5: cmp     eax, [rdi+75Ch]
 * 0000000140789BFB: jbe     loc_140789CCE
 * 0000000140789C01: mov     edx, eax
 * 0000000140789C03: mov     rcx, rdi
 * 0000000140789C06: call    sub_140251E08
 * 0000000140789C0B: xor     r11d, r11d
 * 0000000140789C0E: mov     rbx, rax
 * 0000000140789C11: test    rax, rax
 * 0000000140789C14: jz      loc_14077C9F7
 * 0000000140789C1A: mov     edx, [rdi+6D8h]
 * 0000000140789C20: test    dl, 4
 * 0000000140789C23: jnz     loc_140789CC5
 * 0000000140789C29: mov     ecx, [rdi+59Ch]
 * 0000000140789C2F: and     edx, 20000000h
 * 0000000140789C35: mov     r9, [rdi+580h]
 * 0000000140789C3C: neg     edx
 * 0000000140789C3E: sbb     r8d, r8d
 * 0000000140789C41: and     r8d, [rdi+67Ch]
 * 0000000140789C48: cmp     ecx, 8
 * 0000000140789C4B: jb      short loc_140789C62
 * 0000000140789C4D: mov     eax, ecx
 * 0000000140789C4F: shr     rax, 3
 * 0000000140789C53: mov     [rdi], r11
 * 0000000140789C56: add     ecx, 0FFFFFFF8h
 * 0000000140789C59: add     rdi, 8
 * 0000000140789C5D: sub     rax, r13
 * 0000000140789C60: jnz     short loc_140789C53
 * 0000000140789C62: test    ecx, ecx
 * 0000000140789C64: jz      short loc_140789C71
 * 0000000140789C66: mov     [rdi], r11b
 * 0000000140789C69: add     rdi, r13
 * 0000000140789C6C: add     ecx, 0FFFFFFFFh
 * 0000000140789C6F: jnz     short loc_140789C66
 * 0000000140789C71: mov     edi, [rbx+67Ch]
 * 0000000140789C77: mov     [rbx+67Ch], r8d
 * 0000000140789C7E: cmp     r8d, 3
 * 0000000140789C82: jz      short loc_140789CB3
 * 0000000140789C84: test    dword ptr [rbx+6D8h], 10000000h
 * 0000000140789C8E: mov     ecx, r11d
 * 0000000140789C91: cmovz   ecx, r8d
 * 0000000140789C95: test    ecx, ecx
 * 0000000140789C97: jz      short loc_140789CA8
 * 0000000140789C99: lea     rcx, [r9-8]
 * 0000000140789C9D: mov     rdx, [rcx]
 * 0000000140789CA0: call    qword ptr [rbx+210h]
 * 0000000140789CA6: jmp     short loc_140789CBC
 * 0000000140789CA8: mov     rcx, r9
 * 0000000140789CAB: call    qword ptr [rbx+0E8h]
 * 0000000140789CB1: jmp     short loc_140789CBC
 * 0000000140789CB3: mov     rcx, r9
 * 0000000140789CB6: call    qword ptr [rbx+348h]
 * 0000000140789CBC: mov     [rbx+67Ch], edi
 * 0000000140789CC2: xor     r11d, r11d
 * 0000000140789CC5: and     dword ptr [rbx+6D8h], 0FFFFFFFBh
 * 0000000140789CCC: jmp     short loc_140789CD7
 * 0000000140789CCE: mov     rbx, rdi
 * 0000000140789CD1: mov     [rdi+59Ch], eax
 * 0000000140789CD7: add     [rbx+5C4h], r13d
 * 0000000140789CDE: lea     rcx, [rbx+r14]
 * 0000000140789CE2: mov     edx, 30h ; '0'
 * 0000000140789CE7: mov     [rbp+1C70h+var_1248], rcx
 * 0000000140789CEE: mov     rax, rcx
 * 0000000140789CF1: mov     r12d, 0FFFFFFF8h
 * 0000000140789CF7: lea     edi, [rdx-2Ah]
 * 0000000140789CFA: mov     [rax], r11
 * 0000000140789CFD: add     edx, r12d
 * 0000000140789D00: add     rax, 8
 * 0000000140789D04: sub     rdi, r13
 * 0000000140789D07: jnz     short loc_140789CFA
 * 0000000140789D09: test    edx, edx
 * 0000000140789D0B: jz      short loc_140789D18
 * 0000000140789D0D: mov     [rax], r11b
 * 0000000140789D10: add     rax, r13
 * 0000000140789D13: add     edx, 0FFFFFFFFh
 * 0000000140789D16: jnz     short loc_140789D0D
 * 0000000140789D18: mov     dword ptr [rcx], 1Ah
 * 0000000140789D1E: mov     [rcx+8], r11
 * 0000000140789D22: mov     [rcx+10h], r11d
 * 0000000140789D26: mov     rdx, [rbx+5D0h]
 * 0000000140789D2D: mov     rax, rdx
 * 0000000140789D30: jmp     short loc_140789D34
 * 0000000140789D32: xor     edx, eax
 * 0000000140789D34: shr     rax, 1Fh
 * 0000000140789D38: test    rax, rax
 * 0000000140789D3B: jnz     short loc_140789D32
 * 0000000140789D3D: btr     edx, 1Fh
 * 0000000140789D41: mov     [rbp+1C70h+var_15F0], rbx
 * 0000000140789D48: mov     [rcx+14h], edx
 * 0000000140789D4B: cli
 * 0000000140789D4C: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 0000000140789D53: jnz     short loc_140789D57
 * 0000000140789D55: jmp     short loc_140789D55
 * 0000000140789D57: sti
 * 0000000140789D58: mov     r15d, [rbx+59Ch]
 * 0000000140789D5F: mov     r8d, [rbx+67Ch]
 * 0000000140789D66: lea     eax, [r15+30h]
 * 0000000140789D6A: cmp     eax, [rbx+75Ch]
 * 0000000140789D70: jbe     loc_140789E46
 * 0000000140789D76: mov     edx, eax
 * 0000000140789D78: mov     rcx, rbx
 * 0000000140789D7B: call    sub_140251E08
 * 0000000140789D80: xor     r11d, r11d
 * 0000000140789D83: mov     r14, rax
 * 0000000140789D86: test    rax, rax
 * 0000000140789D89: jz      loc_14077C9F7
 * 0000000140789D8F: mov     edx, [rbx+6D8h]
 * 0000000140789D95: test    dl, 4
 * 0000000140789D98: jnz     loc_140789E3C
 * 0000000140789D9E: mov     ecx, [rbx+59Ch]
 * 0000000140789DA4: and     edx, 20000000h
 * 0000000140789DAA: mov     rdi, [rbx+580h]
 * 0000000140789DB1: neg     edx
 * 0000000140789DB3: sbb     edx, edx
 * 0000000140789DB5: and     edx, [rbx+67Ch]
 * 0000000140789DBB: cmp     ecx, 8
 * 0000000140789DBE: jb      short loc_140789DD5
 * 0000000140789DC0: mov     eax, ecx
 * 0000000140789DC2: shr     rax, 3
 * 0000000140789DC6: mov     [rbx], r11
 * 0000000140789DC9: add     ecx, r12d
 * 0000000140789DCC: add     rbx, 8
 * 0000000140789DD0: sub     rax, r13
 * 0000000140789DD3: jnz     short loc_140789DC6
 * 0000000140789DD5: test    ecx, ecx
 * 0000000140789DD7: jz      short loc_140789DE4
 * 0000000140789DD9: mov     [rbx], r11b
 * 0000000140789DDC: add     rbx, r13
 * 0000000140789DDF: add     ecx, 0FFFFFFFFh
 * 0000000140789DE2: jnz     short loc_140789DD9
 * 0000000140789DE4: mov     ebx, [r14+67Ch]
 * 0000000140789DEB: mov     [r14+67Ch], edx
 * 0000000140789DF2: cmp     edx, 3
 * 0000000140789DF5: jz      short loc_140789E28
 * 0000000140789DF7: test    dword ptr [r14+6D8h], 10000000h
 * 0000000140789E02: mov     ecx, r11d
 * 0000000140789E05: cmovz   ecx, edx
 * 0000000140789E08: test    ecx, ecx
 * 0000000140789E0A: jz      short loc_140789E1C
 * 0000000140789E0C: lea     rcx, [rdi-8]
 * 0000000140789E10: mov     rdx, [rcx]
 * 0000000140789E13: call    qword ptr [r14+210h]
 * 0000000140789E1A: jmp     short loc_140789E32
 * 0000000140789E1C: mov     rcx, rdi
 * 0000000140789E1F: call    qword ptr [r14+0E8h]
 * 0000000140789E26: jmp     short loc_140789E32
 * 0000000140789E28: mov     rcx, rdi
 * 0000000140789E2B: call    qword ptr [r14+348h]
 * 0000000140789E32: mov     [r14+67Ch], ebx
 * 0000000140789E39: xor     r11d, r11d
 * 0000000140789E3C: and     dword ptr [r14+6D8h], 0FFFFFFFBh
 * 0000000140789E44: jmp     short loc_140789E4F
 * 0000000140789E46: mov     r14, rbx
 * 0000000140789E49: mov     [rbx+59Ch], eax
 * 0000000140789E4F: add     [r14+5C4h], r13d
 * 0000000140789E56: lea     rcx, [r14+r15]
 * 0000000140789E5A: mov     edx, 30h ; '0'
 * 0000000140789E5F: mov     [rbp+1C70h+var_1240], rcx
 * 0000000140789E66: mov     rax, rcx
 * 0000000140789E69: lea     ebx, [rdx-2Ah]
 * 0000000140789E6C: mov     [rax], r11
 * 0000000140789E6F: add     edx, r12d
 * 0000000140789E72: add     rax, 8
 * 0000000140789E76: sub     rbx, r13
 * 0000000140789E79: jnz     short loc_140789E6C
 * 0000000140789E7B: test    edx, edx
 * 0000000140789E7D: jz      short loc_140789E8A
 * 0000000140789E7F: mov     [rax], r11b
 * 0000000140789E82: add     rax, r13
 * 0000000140789E85: add     edx, 0FFFFFFFFh
 * 0000000140789E88: jnz     short loc_140789E7F
 * 0000000140789E8A: mov     dword ptr [rcx], 1Bh
 * 0000000140789E90: mov     [rcx+8], r11
 * 0000000140789E94: mov     [rcx+10h], r11d
 * 0000000140789E98: mov     rdx, [r14+5D0h]
 * 0000000140789E9F: mov     rax, rdx
 * 0000000140789EA2: jmp     short loc_140789EA6
 * 0000000140789EA4: xor     edx, eax
 * 0000000140789EA6: shr     rax, 1Fh
 * 0000000140789EAA: test    rax, rax
 * 0000000140789EAD: jnz     short loc_140789EA4
 * 0000000140789EAF: btr     edx, 1Fh
 * 0000000140789EB3: mov     [rbp+1C70h+var_15F0], r14
 * 0000000140789EBA: mov     r8, 7010008004002001h
 * 0000000140789EC4: mov     [rcx+14h], edx
 * 0000000140789EC7: cmp     [rbp+1C70h+arg_10], r13d
 * 0000000140789ECE: jbe     short loc_140789F06
 * 0000000140789ED0: rdtsc
 * 0000000140789ED2: shl     rdx, 20h
 * 0000000140789ED6: or      rax, rdx
 * 0000000140789ED9: mov     rcx, rax
 * 0000000140789EDC: ror     rax, 3
 * 0000000140789EE0: xor     rcx, rax
 * 0000000140789EE3: mov     rax, r8
 * 0000000140789EE6: mul     rcx
 * 0000000140789EE9: mov     ecx, [r14+5C4h]
 * 0000000140789EF0: mov     [rbp+1C70h+var_1238], rdx
 * 0000000140789EF7: xor     rax, rdx
 * 0000000140789EFA: xor     edx, edx
 * 0000000140789EFC: div     rcx
 * 0000000140789EFF: mov     [r14+5D8h], edx
 * 0000000140789F06: test    dword ptr [r14+6D8h], 10000000h
 * 0000000140789F11: jz      short loc_140789F57
 * 0000000140789F13: rdtsc
 * 0000000140789F15: shl     rdx, 20h
 * 0000000140789F19: mov     rbx, 7010008004002001h
 * 0000000140789F23: or      rax, rdx
 * 0000000140789F26: mov     rcx, rax
 * 0000000140789F29: ror     rax, 3
 * 0000000140789F2D: xor     rcx, rax
 * 0000000140789F30: mov     rax, rbx
 * 0000000140789F33: mul     rcx
 * 0000000140789F36: mov     [rbp+1C70h+var_1230], rdx
 * 0000000140789F3D: xor     rdx, rax
 * 0000000140789F40: mov     rax, [r14+518h]
 * 0000000140789F47: and     edx, 0Fh
 * 0000000140789F4A: lea     rcx, [rdx+rdx*4]
 * 0000000140789F4E: lea     rcx, [rax+rcx*2]
 * 0000000140789F52: jmp     loc_14078A9AD
 * 0000000140789F57: mov     eax, [rbp+1C70h+arg_0]
 * 0000000140789F5D: mov     ecx, 5
 * 0000000140789F62: cmp     eax, ecx
 * 0000000140789F64: jbe     loc_14078A954
 * 0000000140789F6A: lea     rbx, KiTimerDispatch
 * 0000000140789F71: cmp     eax, 6
 * 0000000140789F74: jz      loc_14078A94B
 * 0000000140789F7A: cmp     eax, 7
 * 0000000140789F7D: jz      loc_14078A942
 * 0000000140789F83: cmp     eax, 8
 * 0000000140789F86: jz      loc_14078A939
 * 0000000140789F8C: cmp     eax, 9
 * 0000000140789F8F: jz      loc_14078A930
 * 0000000140789F95: rdtsc
 * 0000000140789F97: shl     rdx, 20h
 * 0000000140789F9B: or      rax, rdx
 * 0000000140789F9E: mov     rcx, rax
 * 0000000140789FA1: ror     rax, 3
 * 0000000140789FA5: xor     rcx, rax
 * 0000000140789FA8: mov     rax, r8
 * 0000000140789FAB: mul     rcx
 * 0000000140789FAE: mov     rcx, rdx
 * 0000000140789FB1: mov     [rbp+1C70h+var_1228], rdx
 * 0000000140789FB8: xor     rcx, rax
 * 0000000140789FBB: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 0000000140789FC5: mul     rcx
 * 0000000140789FC8: shr     rdx, 3
 * 0000000140789FCC: lea     rax, [rdx+rdx*4]
 * 0000000140789FD0: add     rax, rax
 * 0000000140789FD3: sub     rcx, rax
 * 0000000140789FD6: cmp     rcx, 8
 * 0000000140789FDA: mov     ecx, [r14+5F0h]
 * 0000000140789FE1: lea     eax, [rcx-3]
 * 0000000140789FE4: jnb     loc_14078A566
 * 0000000140789FEA: test    eax, 0FFFFFFFAh
 * 0000000140789FEF: jnz     short loc_140789FFA
 * 0000000140789FF1: cmp     ecx, 8
 * 0000000140789FF4: jnz     loc_14078A868
 * 0000000140789FFA: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 0000000140789FFE: lea     r8, [rbp+1C70h+var_19C4]
 * 000000014078A005: lea     rdx, [rbp+1C70h+var_A88]
 * 000000014078A00C: mov     [rsp+1D70h+var_1D00], rdi
 * 000000014078A011: mov     rcx, rbx
 * 000000014078A014: mov     r12, r11
 * 000000014078A017: call    RtlLookupFunctionTable
 * 000000014078A01C: xor     r11d, r11d
 * 000000014078A01F: mov     [rbp+1C70h+var_A98], rax
 * 000000014078A026: mov     rbx, rax
 * 000000014078A029: test    rax, rax
 * 000000014078A02C: jz      loc_14078A14C
 * 000000014078A032: mov     rax, [rbp+1C70h+var_A88]
 * 000000014078A039: mov     [rbp+1C70h+var_A70], r11
 * 000000014078A040: cmp     [rbp+1C70h+var_E88], rax
 * 000000014078A047: jnz     loc_14078A0F5
 * 000000014078A04D: mov     r15, [rbp+1C70h+var_E80]
 * 000000014078A054: lea     rdx, [rbp+1C70h+var_A88]; ImageBase
 * 000000014078A05B: mov     eax, [rbp+1C70h+var_E78]
 * 000000014078A061: lea     rcx, KiTimerDispatch; ControlPc
 * 000000014078A068: xor     r8d, r8d; HistoryTable
 * 000000014078A06B: mov     [rbp+1C70h+var_A70], r15
 * 000000014078A072: mov     [rbp+1C70h+var_A68], r11
 * 000000014078A079: mov     [rbp+1C70h+var_A60], eax
 * 000000014078A07F: mov     [rbp+1C70h+var_A5C], r11d
 * 000000014078A086: call    RtlLookupFunctionEntry
 * 000000014078A08B: xor     r11d, r11d
 * 000000014078A08E: mov     [rbp+1C70h+var_A90], rax
 * 000000014078A095: test    rax, rax
 * 000000014078A098: jz      short loc_14078A0EE
 * 000000014078A09A: mov     edx, [r15]
 * 000000014078A09D: mov     r9d, eax
 * 000000014078A0A0: sub     r9d, dword ptr [rbp+1C70h+var_A88]
 * 000000014078A0A7: mov     ebx, r11d
 * 000000014078A0AA: sub     edx, r13d
 * 000000014078A0AD: js      short loc_14078A0EE
 * 000000014078A0AF: lea     ecx, [rdx+rbx]
 * 000000014078A0B2: mov     r8d, r9d
 * 000000014078A0B5: sar     ecx, 1
 * 000000014078A0B7: sub     r8d, [r15+rcx*8+8]
 * 000000014078A0BC: jns     short loc_14078A0C7
 * 000000014078A0BE: test    ecx, ecx
 * 000000014078A0C0: jz      short loc_14078A0EE
 * 000000014078A0C2: lea     edx, [rcx-1]
 * 000000014078A0C5: jmp     short loc_14078A0CF
 * 000000014078A0C7: test    r8d, r8d
 * 000000014078A0CA: jle     short loc_14078A0D3
 * 000000014078A0CC: lea     ebx, [rcx+1]
 * 000000014078A0CF: cmp     edx, ebx
 * 000000014078A0D1: jge     short loc_14078A0AF
 * 000000014078A0D3: cmp     edx, ebx
 * 000000014078A0D5: mov     rbx, [rbp+1C70h+var_A98]
 * 000000014078A0DC: jl      short loc_14078A0F5
 * 000000014078A0DE: inc     rcx
 * 000000014078A0E1: lea     rcx, [r15+rcx*8]
 * 000000014078A0E5: mov     [rbp+1C70h+var_A68], rcx
 * 000000014078A0EC: jmp     short loc_14078A0F5
 * 000000014078A0EE: mov     rbx, [rbp+1C70h+var_A98]
 * 000000014078A0F5: mov     ecx, [rbp+1C70h+var_19C4]
 * 000000014078A0FB: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014078A105: mov     r8, [rbp+1C70h+var_A88]
 * 000000014078A10C: mul     rcx
 * 000000014078A10F: mov     [rbp+1C70h+var_1CD0], r8
 * 000000014078A113: shr     rdx, 3
 * 000000014078A117: mov     eax, edx
 * 000000014078A119: mov     [rbp+1C70h+var_19C4], edx
 * 000000014078A11F: lea     rcx, [rax+rax*2]
 * 000000014078A123: lea     rax, [rbx+rcx*4]
 * 000000014078A127: mov     [rbp+1C70h+var_A80], rax
 * 000000014078A12E: lea     rcx, [rbp+1C70h+var_1220]
 * 000000014078A135: lea     rax, KiTimerDispatch
 * 000000014078A13C: mov     [rbp+1C70h+var_A78], rcx
 * 000000014078A143: mov     [rbp+1C70h+var_AA0], rax
 * 000000014078A14A: jmp     short loc_14078A157
 * 000000014078A14C: mov     r8, [rbp+1C70h+var_1CD0]
 * 000000014078A150: mov     rcx, [rbp+1C70h+var_A78]
 * 000000014078A157: test    rbx, rbx
 * 000000014078A15A: jz      loc_14078A273
 * 000000014078A160: cmp     rbx, [rbp+1C70h+var_A80]
 * 000000014078A167: jz      loc_14078A273
 * 000000014078A16D: cmp     [rbp+1C70h+var_A70], r11
 * 000000014078A174: jz      loc_14078A228
 * 000000014078A17A: mov     rax, [rbp+1C70h+var_A90]
 * 000000014078A181: test    rax, rax
 * 000000014078A184: jz      loc_14078A273
 * 000000014078A18A: cmp     [rbp+1C70h+var_A68], r11
 * 000000014078A191: jnz     short loc_14078A1A2
 * 000000014078A193: mov     [rcx], rax
 * 000000014078A196: mov     [rbp+1C70h+var_A90], r11
 * 000000014078A19D: jmp     loc_14078A2B3
 * 000000014078A1A2: mov     rax, [rbp+1C70h+var_A68]
 * 000000014078A1A9: mov     edx, [rax+4]
 * 000000014078A1AC: test    r13b, dl
 * 000000014078A1AF: jz      short loc_14078A1CC
 * 000000014078A1B1: and     edx, 0FFFFFFFEh
 * 000000014078A1B4: mov     eax, edx
 * 000000014078A1B6: add     rax, [rbp+1C70h+var_A88]
 * 000000014078A1BD: mov     [rcx], rax
 * 000000014078A1C0: mov     [rbp+1C70h+var_A68], r11
 * 000000014078A1C7: jmp     loc_14078A2B3
 * 000000014078A1CC: mov     ebx, [rbp+1C70h+var_A5C]
 * 000000014078A1D2: add     edx, ebx
 * 000000014078A1D4: mov     r8d, edx
 * 000000014078A1D7: lea     r9, [rdx+4]
 * 000000014078A1DB: cmp     r9, r8
 * 000000014078A1DE: jb      loc_14078D8C0
 * 000000014078A1E4: mov     eax, [rbp+1C70h+var_A60]
 * 000000014078A1EA: cmp     r9, rax
 * 000000014078A1ED: ja      loc_14078D8C0
 * 000000014078A1F3: mov     rax, [rbp+1C70h+var_A70]
 * 000000014078A1FA: add     ebx, 4
 * 000000014078A1FD: mov     edx, [rdx+rax]
 * 000000014078A200: mov     [rbp+1C70h+var_A5C], ebx
 * 000000014078A206: test    r13b, dl
 * 000000014078A209: jnz     short loc_14078A214
 * 000000014078A20B: mov     [rbp+1C70h+var_A68], r11
 * 000000014078A212: jmp     short loc_14078A217
 * 000000014078A214: and     edx, 0FFFFFFFEh
 * 000000014078A217: mov     eax, edx
 * 000000014078A219: add     rax, [rbp+1C70h+var_A88]
 * 000000014078A220: mov     [rcx], rax
 * 000000014078A223: jmp     loc_14078A2AF
 * 000000014078A228: mov     rdx, [rbp+1C70h+var_A88]
 * 000000014078A22F: mov     rcx, rbx
 * 000000014078A232: mov     r15, rbx
 * 000000014078A235: call    RtlpConvertFunctionEntry
 * 000000014078A23A: mov     r8, [rbp+1C70h+var_AA0]
 * 000000014078A241: mov     rcx, rax
 * 000000014078A244: mov     rdx, [rbp+1C70h+var_A88]
 * 000000014078A24B: call    RtlpSameFunction
 * 000000014078A250: mov     rbx, [rbp+1C70h+var_A98]
 * 000000014078A257: xor     r11d, r11d
 * 000000014078A25A: add     rbx, 0Ch
 * 000000014078A25E: mov     [rbp+1C70h+var_A98], rbx
 * 000000014078A265: test    rax, rax
 * 000000014078A268: jnz     short loc_14078A2A5
 * 000000014078A26A: cmp     rbx, [rbp+1C70h+var_A80]
 * 000000014078A271: jnz     short loc_14078A228
 * 000000014078A273: test    r12, r12
 * 000000014078A276: jz      loc_14078A861
 * 000000014078A27C: sub     r12, rdi
 * 000000014078A27F: mov     eax, 1000h
 * 000000014078A284: cmp     r12, rax
 * 000000014078A287: ja      loc_14078A861
 * 000000014078A28D: test    dword ptr [r14+6D8h], 10000000h
 * 000000014078A298: mov     r9b, r13b
 * 000000014078A29B: mov     r8d, r11d
 * 000000014078A29E: jz      short loc_14078A2E5
 * 000000014078A2A0: mov     r9b, r11b
 * 000000014078A2A3: jmp     short loc_14078A2EC
 * 000000014078A2A5: mov     rax, [rbp+1C70h+var_A78]
 * 000000014078A2AC: mov     [rax], r15
 * 000000014078A2AF: mov     r8, [rbp+1C70h+var_1CD0]
 * 000000014078A2B3: mov     rax, [rbp+1C70h+var_1220]
 * 000000014078A2BA: mov     ecx, [rax]
 * 000000014078A2BC: mov     edx, [rax+4]
 * 000000014078A2BF: add     rcx, r8
 * 000000014078A2C2: add     rdx, r8
 * 000000014078A2C5: cmp     rdi, rcx
 * 000000014078A2C8: cmova   rdi, rcx
 * 000000014078A2CC: mov     [rsp+1D70h+var_1D00], rdi
 * 000000014078A2D1: cmp     r12, rdx
 * 000000014078A2D4: jnb     short loc_14078A2D9
 * 000000014078A2D6: mov     r12, rdx
 * 000000014078A2D9: mov     rbx, [rbp+1C70h+var_A98]
 * 000000014078A2E0: jmp     loc_14078A150
 * 000000014078A2E5: mov     r8d, [r14+67Ch]
 * 000000014078A2EC: mov     r10d, [r14+5C8h]
 * 000000014078A2F3: rdtsc
 * 000000014078A2F5: shl     rdx, 20h
 * 000000014078A2F9: mov     rbx, 7010008004002001h
 * 000000014078A303: or      rax, rdx
 * 000000014078A306: mov     rcx, rax
 * 000000014078A309: ror     rax, 3
 * 000000014078A30D: xor     rcx, rax
 * 000000014078A310: mov     rax, rbx
 * 000000014078A313: mul     rcx
 * 000000014078A316: mov     r15, rax
 * 000000014078A319: mov     [rbp+1C70h+var_1218], rdx
 * 000000014078A320: xor     r15d, edx
 * 000000014078A323: and     r15d, 7FFh
 * 000000014078A32A: rdtsc
 * 000000014078A32C: shl     rdx, 20h
 * 000000014078A330: or      rax, rdx
 * 000000014078A333: mov     rcx, rax
 * 000000014078A336: ror     rax, 3
 * 000000014078A33A: xor     rcx, rax
 * 000000014078A33D: mov     rax, rbx
 * 000000014078A340: mul     rcx
 * 000000014078A343: lea     ebx, [r15+1]
 * 000000014078A347: xor     rax, rdx
 * 000000014078A34A: mov     [rbp+1C70h+var_1210], rdx
 * 000000014078A351: xor     edx, edx
 * 000000014078A353: div     rbx
 * 000000014078A356: mov     [rsp+1D70h+var_1D20], rdx
 * 000000014078A35B: test    r8d, r8d
 * 000000014078A35E: jz      loc_14078A3FA
 * 000000014078A364: rdtsc
 * 000000014078A366: shl     rdx, 20h
 * 000000014078A36A: or      rax, rdx
 * 000000014078A36D: mov     rcx, rax
 * 000000014078A370: ror     rax, 3
 * 000000014078A374: xor     rcx, rax
 * 000000014078A377: mov     rax, 7010008004002001h
 * 000000014078A381: mul     rcx
 * 000000014078A384: xor     eax, edx
 * 000000014078A386: mov     [rbp+1C70h+var_1208], rdx
 * 000000014078A38D: and     eax, r13d
 * 000000014078A390: or      edx, 0FFFFFFFFh
 * 000000014078A393: shl     eax, 0Ch
 * 000000014078A396: add     eax, 1000h
 * 000000014078A39B: add     r15d, eax
 * 000000014078A39E: lea     eax, [r15+r12]
 * 000000014078A3A2: lea     rcx, [rax+8]
 * 000000014078A3A6: mov     ebx, eax
 * 000000014078A3A8: call    qword ptr [r14+208h]
 * 000000014078A3AF: xor     r11d, r11d
 * 000000014078A3B2: mov     rdi, rax
 * 000000014078A3B5: test    rax, rax
 * 000000014078A3B8: jz      short loc_14078A420
 * 000000014078A3BA: lea     rdx, [rbx+0FFFh]
 * 000000014078A3C1: mov     rcx, rax
 * 000000014078A3C4: and     edx, 0FFFFF000h
 * 000000014078A3CA: lea     r8d, [r11+40h]
 * 000000014078A3CE: call    qword ptr [r14+218h]
 * 000000014078A3D5: xor     r11d, r11d
 * 000000014078A3D8: test    al, al
 * 000000014078A3DA: jnz     short loc_14078A3ED
 * 000000014078A3DC: mov     edx, ebx
 * 000000014078A3DE: mov     rcx, rdi
 * 000000014078A3E1: call    qword ptr [r14+210h]
 * 000000014078A3E8: xor     r11d, r11d
 * 000000014078A3EB: jmp     short loc_14078A420
 * 000000014078A3ED: lea     rax, [rbx+8]
 * 000000014078A3F1: mov     [rdi], rax
 * 000000014078A3F4: add     rdi, 8
 * 000000014078A3F8: jmp     short loc_14078A41B
 * 000000014078A3FA: neg     r9b
 * 000000014078A3FD: lea     edx, [r15+r12]
 * 000000014078A401: mov     r8d, r10d
 * 000000014078A404: sbb     ecx, ecx
 * 000000014078A406: not     ecx
 * 000000014078A408: and     ecx, 200h
 * 000000014078A40E: call    qword ptr [r14+0E0h]
 * 000000014078A415: mov     rdi, rax
 * 000000014078A418: xor     r11d, r11d
 * 000000014078A41B: test    rdi, rdi
 * 000000014078A41E: jnz     short loc_14078A42C
 * 000000014078A420: add     [r14+758h], r13d
 * 000000014078A427: jmp     loc_14078A861
 * 000000014078A42C: mov     r9, [rsp+1D70h+var_1D20]
 * 000000014078A431: mov     rbx, rdi
 * 000000014078A434: mov     r8d, r9d
 * 000000014078A437: mov     r11d, 0FFFFFFF8h
 * 000000014078A43D: mov     r10, 7010008004002001h
 * 000000014078A447: cmp     r9d, 8
 * 000000014078A44B: jb      short loc_14078A48B
 * 000000014078A44D: mov     r9d, r9d
 * 000000014078A450: shr     r9, 3
 * 000000014078A454: rdtsc
 * 000000014078A456: shl     rdx, 20h
 * 000000014078A45A: add     r8d, r11d
 * 000000014078A45D: or      rax, rdx
 * 000000014078A460: mov     rcx, rax
 * 000000014078A463: ror     rax, 3
 * 000000014078A467: xor     rcx, rax
 * 000000014078A46A: mov     rax, r10
 * 000000014078A46D: mul     rcx
 * 000000014078A470: mov     [rbp+1C70h+var_1200], rdx
 * 000000014078A477: xor     rdx, rax
 * 000000014078A47A: mov     [rbx], rdx
 * 000000014078A47D: add     rbx, 8
 * 000000014078A481: sub     r9, r13
 * 000000014078A484: jnz     short loc_14078A454
 * 000000014078A486: mov     r9, [rsp+1D70h+var_1D20]
 * 000000014078A48B: test    r8d, r8d
 * 000000014078A48E: jz      short loc_14078A4C2
 * 000000014078A490: rdtsc
 * 000000014078A492: shl     rdx, 20h
 * 000000014078A496: or      rax, rdx
 * 000000014078A499: mov     rcx, rax
 * 000000014078A49C: ror     rax, 3
 * 000000014078A4A0: xor     rcx, rax
 * 000000014078A4A3: mov     rax, r10
 * 000000014078A4A6: mul     rcx
 * 000000014078A4A9: mov     [rbp+1C70h+var_11F8], rdx
 * 000000014078A4B0: xor     rdx, rax
 * 000000014078A4B3: mov     [rbx], dl
 * 000000014078A4B5: add     rbx, r13
 * 000000014078A4B8: shr     rdx, 8
 * 000000014078A4BC: add     r8d, 0FFFFFFFFh
 * 000000014078A4C0: jnz     short loc_14078A4B3
 * 000000014078A4C2: mov     r10d, r9d
 * 000000014078A4C5: sub     r15d, r9d
 * 000000014078A4C8: mov     ebx, r12d
 * 000000014078A4CB: mov     r9, 7010008004002001h
 * 000000014078A4D5: add     rbx, rdi
 * 000000014078A4D8: add     rbx, r10
 * 000000014078A4DB: cmp     r15d, 8
 * 000000014078A4DF: jb      short loc_14078A51A
 * 000000014078A4E1: mov     r8d, r15d
 * 000000014078A4E4: shr     r8, 3
 * 000000014078A4E8: rdtsc
 * 000000014078A4EA: shl     rdx, 20h
 * 000000014078A4EE: add     r15d, r11d
 * 000000014078A4F1: or      rax, rdx
 * 000000014078A4F4: mov     rcx, rax
 * 000000014078A4F7: ror     rax, 3
 * 000000014078A4FB: xor     rcx, rax
 * 000000014078A4FE: mov     rax, r9
 * 000000014078A501: mul     rcx
 * 000000014078A504: mov     [rbp+1C70h+var_11F0], rdx
 * 000000014078A50B: xor     rdx, rax
 * 000000014078A50E: mov     [rbx], rdx
 * 000000014078A511: add     rbx, 8
 * 000000014078A515: sub     r8, r13
 * 000000014078A518: jnz     short loc_14078A4E8
 * 000000014078A51A: test    r15d, r15d
 * 000000014078A51D: jz      short loc_14078A551
 * 000000014078A51F: rdtsc
 * 000000014078A521: shl     rdx, 20h
 * 000000014078A525: or      rax, rdx
 * 000000014078A528: mov     rcx, rax
 * 000000014078A52B: ror     rax, 3
 * 000000014078A52F: xor     rcx, rax
 * 000000014078A532: mov     rax, r9
 * 000000014078A535: mul     rcx
 * 000000014078A538: mov     [rbp+1C70h+var_11E8], rdx
 * 000000014078A53F: xor     rdx, rax
 * 000000014078A542: mov     [rbx], dl
 * 000000014078A544: add     rbx, r13
 * 000000014078A547: shr     rdx, 8
 * 000000014078A54B: add     r15d, 0FFFFFFFFh
 * 000000014078A54F: jnz     short loc_14078A542
 * 000000014078A551: lea     rcx, [rdi+r10]
 * 000000014078A555: test    rcx, rcx
 * 000000014078A558: jnz     loc_14078A8D4
 * 000000014078A55E: xor     r11d, r11d
 * 000000014078A561: jmp     loc_14078A861
 * 000000014078A566: test    eax, 0FFFFFFFAh
 * 000000014078A56B: jnz     short loc_14078A576
 * 000000014078A56D: cmp     ecx, 8
 * 000000014078A570: jnz     loc_14078A868
 * 000000014078A576: test    dword ptr [r14+6D8h], 10000000h
 * 000000014078A581: mov     r9b, r13b
 * 000000014078A584: mov     r8d, r11d
 * 000000014078A587: jz      short loc_14078A58E
 * 000000014078A589: mov     r9b, r11b
 * 000000014078A58C: jmp     short loc_14078A595
 * 000000014078A58E: mov     r8d, [r14+67Ch]
 * 000000014078A595: mov     r10d, [r14+5C8h]
 * 000000014078A59C: rdtsc
 * 000000014078A59E: shl     rdx, 20h
 * 000000014078A5A2: mov     rbx, 7010008004002001h
 * 000000014078A5AC: or      rax, rdx
 * 000000014078A5AF: mov     rcx, rax
 * 000000014078A5B2: ror     rax, 3
 * 000000014078A5B6: xor     rcx, rax
 * 000000014078A5B9: mov     rax, rbx
 * 000000014078A5BC: mul     rcx
 * 000000014078A5BF: mov     rdi, rax
 * 000000014078A5C2: mov     [rbp+1C70h+var_11E0], rdx
 * 000000014078A5C9: xor     edi, edx
 * 000000014078A5CB: and     edi, 7FFh
 * 000000014078A5D1: rdtsc
 * 000000014078A5D3: shl     rdx, 20h
 * 000000014078A5D7: or      rax, rdx
 * 000000014078A5DA: mov     rcx, rax
 * 000000014078A5DD: ror     rax, 3
 * 000000014078A5E1: xor     rcx, rax
 * 000000014078A5E4: mov     rax, rbx
 * 000000014078A5E7: mul     rcx
 * 000000014078A5EA: lea     ecx, [rdi+1]
 * 000000014078A5ED: xor     rax, rdx
 * 000000014078A5F0: mov     [rbp+1C70h+var_11D8], rdx
 * 000000014078A5F7: xor     edx, edx
 * 000000014078A5F9: div     rcx
 * 000000014078A5FC: mov     r15, rdx
 * 000000014078A5FF: test    r8d, r8d
 * 000000014078A602: jz      loc_14078A69F
 * 000000014078A608: rdtsc
 * 000000014078A60A: shl     rdx, 20h
 * 000000014078A60E: or      rax, rdx
 * 000000014078A611: mov     rcx, rax
 * 000000014078A614: ror     rax, 3
 * 000000014078A618: xor     rcx, rax
 * 000000014078A61B: mov     rax, rbx
 * 000000014078A61E: mul     rcx
 * 000000014078A621: xor     eax, edx
 * 000000014078A623: mov     [rbp+1C70h+var_11D0], rdx
 * 000000014078A62A: and     eax, r13d
 * 000000014078A62D: or      edx, 0FFFFFFFFh
 * 000000014078A630: shl     eax, 0Ch
 * 000000014078A633: add     eax, 1000h
 * 000000014078A638: add     edi, eax
 * 000000014078A63A: lea     eax, [rdi+110h]
 * 000000014078A640: lea     rcx, [rax+8]
 * 000000014078A644: mov     r12d, eax
 * 000000014078A647: call    qword ptr [r14+208h]
 * 000000014078A64E: xor     r11d, r11d
 * 000000014078A651: mov     rbx, rax
 * 000000014078A654: test    rax, rax
 * 000000014078A657: jz      loc_14078A420
 * 000000014078A65D: lea     rdx, [r12+0FFFh]
 * 000000014078A665: mov     rcx, rax
 * 000000014078A668: and     edx, 0FFFFF000h
 * 000000014078A66E: lea     r8d, [r11+40h]
 * 000000014078A672: call    qword ptr [r14+218h]
 * 000000014078A679: xor     r11d, r11d
 * 000000014078A67C: test    al, al
 * 000000014078A67E: jnz     short loc_14078A68B
 * 000000014078A680: mov     edx, r12d
 * 000000014078A683: mov     rcx, rbx
 * 000000014078A686: jmp     loc_14078A3E1
 * 000000014078A68B: lea     rax, [r12+8]
 * 000000014078A690: mov     r12d, 0FFFFFFF8h
 * 000000014078A696: mov     [rbx], rax
 * 000000014078A699: add     rbx, 8
 * 000000014078A69D: jmp     short loc_14078A6C2
 * 000000014078A69F: neg     r9b
 * 000000014078A6A2: lea     edx, [rdi+110h]
 * 000000014078A6A8: mov     r8d, r10d
 * 000000014078A6AB: sbb     ecx, ecx
 * 000000014078A6AD: not     ecx
 * 000000014078A6AF: and     ecx, 200h
 * 000000014078A6B5: call    qword ptr [r14+0E0h]
 * 000000014078A6BC: mov     rbx, rax
 * 000000014078A6BF: xor     r11d, r11d
 * 000000014078A6C2: test    rbx, rbx
 * 000000014078A6C5: jz      loc_14078A420
 * 000000014078A6CB: mov     r9d, r15d
 * 000000014078A6CE: mov     r8, rbx
 * 000000014078A6D1: cmp     r15d, 8
 * 000000014078A6D5: jb      short loc_14078A71D
 * 000000014078A6D7: mov     r10d, r15d
 * 000000014078A6DA: mov     r11, 7010008004002001h
 * 000000014078A6E4: shr     r10, 3
 * 000000014078A6E8: rdtsc
 * 000000014078A6EA: shl     rdx, 20h
 * 000000014078A6EE: add     r9d, r12d
 * 000000014078A6F1: or      rax, rdx
 * 000000014078A6F4: mov     rcx, rax
 * 000000014078A6F7: ror     rax, 3
 * 000000014078A6FB: xor     rcx, rax
 * 000000014078A6FE: mov     rax, r11
 * 000000014078A701: mul     rcx
 * 000000014078A704: mov     [rbp+1C70h+var_11C8], rdx
 * 000000014078A70B: xor     rdx, rax
 * 000000014078A70E: mov     [r8], rdx
 * 000000014078A711: add     r8, 8
 * 000000014078A715: sub     r10, r13
 * 000000014078A718: jnz     short loc_14078A6E8
 * 000000014078A71A: xor     r11d, r11d
 * 000000014078A71D: test    r9d, r9d
 * 000000014078A720: jz      short loc_14078A761
 * 000000014078A722: rdtsc
 * 000000014078A724: shl     rdx, 20h
 * 000000014078A728: or      rax, rdx
 * 000000014078A72B: mov     rcx, rax
 * 000000014078A72E: ror     rax, 3
 * 000000014078A732: xor     rcx, rax
 * 000000014078A735: mov     rax, 7010008004002001h
 * 000000014078A73F: mul     rcx
 * 000000014078A742: mov     [rbp+1C70h+var_11C0], rdx
 * 000000014078A749: xor     rdx, rax
 * 000000014078A74C: or      r10d, 0FFFFFFFFh
 * 000000014078A750: mov     [r8], dl
 * 000000014078A753: add     r8, r13
 * 000000014078A756: shr     rdx, 8
 * 000000014078A75A: add     r9d, r10d
 * 000000014078A75D: jnz     short loc_14078A750
 * 000000014078A75F: jmp     short loc_14078A765
 * 000000014078A761: or      r10d, 0FFFFFFFFh
 * 000000014078A765: mov     eax, r15d
 * 000000014078A768: sub     edi, r15d
 * 000000014078A76B: add     rbx, rax
 * 000000014078A76E: mov     r15, 7010008004002001h
 * 000000014078A778: lea     r8, [rbx+110h]
 * 000000014078A77F: cmp     edi, 8
 * 000000014078A782: jb      short loc_14078A7BD
 * 000000014078A784: mov     r9d, edi
 * 000000014078A787: shr     r9, 3
 * 000000014078A78B: rdtsc
 * 000000014078A78D: shl     rdx, 20h
 * 000000014078A791: add     edi, r12d
 * 000000014078A794: or      rax, rdx
 * 000000014078A797: mov     rcx, rax
 * 000000014078A79A: ror     rax, 3
 * 000000014078A79E: xor     rcx, rax
 * 000000014078A7A1: mov     rax, r15
 * 000000014078A7A4: mul     rcx
 * 000000014078A7A7: mov     [rbp+1C70h+var_11B8], rdx
 * 000000014078A7AE: xor     rdx, rax
 * 000000014078A7B1: mov     [r8], rdx
 * 000000014078A7B4: add     r8, 8
 * 000000014078A7B8: sub     r9, r13
 * 000000014078A7BB: jnz     short loc_14078A78B
 * 000000014078A7BD: test    edi, edi
 * 000000014078A7BF: jz      short loc_14078A7F3
 * 000000014078A7C1: rdtsc
 * 000000014078A7C3: shl     rdx, 20h
 * 000000014078A7C7: or      rax, rdx
 * 000000014078A7CA: mov     rcx, rax
 * 000000014078A7CD: ror     rax, 3
 * 000000014078A7D1: xor     rcx, rax
 * 000000014078A7D4: mov     rax, r15
 * 000000014078A7D7: mul     rcx
 * 000000014078A7DA: mov     [rbp+1C70h+var_11B0], rdx
 * 000000014078A7E1: xor     rdx, rax
 * 000000014078A7E4: mov     [r8], dl
 * 000000014078A7E7: add     r8, r13
 * 000000014078A7EA: shr     rdx, 8
 * 000000014078A7EE: add     edi, r10d
 * 000000014078A7F1: jnz     short loc_14078A7E4
 * 000000014078A7F3: test    rbx, rbx
 * 000000014078A7F6: jz      short loc_14078A861
 * 000000014078A7F8: lea     rcx, [rbx+48h]
 * 000000014078A7FC: mov     r8d, 0C8h
 * 000000014078A802: mov     rdi, rcx
 * 000000014078A805: lea     rdx, KiDpcDispatch
 * 000000014078A80C: mov     r9d, 19h
 * 000000014078A812: mov     rax, [rdx]
 * 000000014078A815: add     r8d, r12d
 * 000000014078A818: mov     [rdi], rax
 * 000000014078A81B: add     rdx, 8
 * 000000014078A81F: add     rdi, 8
 * 000000014078A823: sub     r9, r13
 * 000000014078A826: jnz     short loc_14078A812
 * 000000014078A828: test    r8d, r8d
 * 000000014078A82B: jz      short loc_14078A83C
 * 000000014078A82D: mov     al, [rdx]
 * 000000014078A82F: add     rdx, r13
 * 000000014078A832: mov     [rdi], al
 * 000000014078A834: add     rdi, r13
 * 000000014078A837: add     r8d, r10d
 * 000000014078A83A: jnz     short loc_14078A82D
 * 000000014078A83C: mov     byte ptr [rbx], 13h
 * 000000014078A83F: mov     [rbx+1], r13b
 * 000000014078A843: mov     [rbx+2], r11w
 * 000000014078A848: mov     [rbx+18h], rcx
 * 000000014078A84C: mov     [rbx+20h], r11
 * 000000014078A850: mov     [rbx+38h], r11
 * 000000014078A854: mov     [rbx+10h], r11
 * 000000014078A858: test    rcx, rcx
 * 000000014078A85B: jnz     loc_14078A923
 * 000000014078A861: lea     rbx, KiTimerDispatch
 * 000000014078A868: rdtsc
 * 000000014078A86A: shl     rdx, 20h
 * 000000014078A86E: or      rax, rdx
 * 000000014078A871: mov     rcx, rax
 * 000000014078A874: ror     rax, 3
 * 000000014078A878: xor     rcx, rax
 * 000000014078A87B: mov     rax, 7010008004002001h
 * 000000014078A885: mul     rcx
 * 000000014078A888: mov     rcx, rax
 * 000000014078A88B: mov     [rbp+1C70h+var_11A8], rdx
 * 000000014078A892: xor     rcx, rdx
 * 000000014078A895: mov     rax, 0CCCCCCCCCCCCCCCDh
 * 000000014078A89F: mul     rcx
 * 000000014078A8A2: shr     rdx, 3
 * 000000014078A8A6: lea     rax, [rdx+rdx*4]
 * 000000014078A8AA: add     rax, rax
 * 000000014078A8AD: sub     rcx, rax
 * 000000014078A8B0: mov     eax, ecx
 * 000000014078A8B2: mov     ecx, 5
 * 000000014078A8B7: cmp     eax, ecx
 * 000000014078A8B9: jbe     loc_14078A954
 * 000000014078A8BF: mov     r12d, 0FFFFFFF8h
 * 000000014078A8C5: mov     r8, 7010008004002001h
 * 000000014078A8CF: jmp     loc_140789F71
 * 000000014078A8D4: mov     rdi, [rsp+1D70h+var_1D00]
 * 000000014078A8D9: mov     rdx, rcx
 * 000000014078A8DC: cmp     r12d, 8
 * 000000014078A8E0: jb      short loc_14078A8FF
 * 000000014078A8E2: mov     ebx, r12d
 * 000000014078A8E5: shr     rbx, 3
 * 000000014078A8E9: mov     rax, [rdi]
 * 000000014078A8EC: add     r12d, r11d
 * 000000014078A8EF: mov     [rdx], rax
 * 000000014078A8F2: add     rdi, 8
 * 000000014078A8F6: add     rdx, 8
 * 000000014078A8FA: sub     rbx, r13
 * 000000014078A8FD: jnz     short loc_14078A8E9
 * 000000014078A8FF: xor     r11d, r11d
 * 000000014078A902: test    r12d, r12d
 * 000000014078A905: jz      short loc_14078A918
 * 000000014078A907: sub     rdx, rdi
 * 000000014078A90A: mov     al, [rdi]
 * 000000014078A90C: mov     [rdi+rdx], al
 * 000000014078A90F: add     rdi, r13
 * 000000014078A912: add     r12d, 0FFFFFFFFh
 * 000000014078A916: jnz     short loc_14078A90A
 * 000000014078A918: bts     dword ptr [r14+6D8h], 9
 * 000000014078A921: jmp     short loc_14078A99D
 * 000000014078A923: or      dword ptr [r14+6D8h], 100h
 * 000000014078A92E: jmp     short loc_14078A99D
 * 000000014078A930: lea     rcx, PopThermalZoneDpc
 * 000000014078A937: jmp     short loc_14078A99D
 * 000000014078A939: lea     rcx, KiBalanceSetManagerDeferredRoutine
 * 000000014078A940: jmp     short loc_14078A99D
 * 000000014078A942: lea     rcx, IopIrpStackProfilerDpcRoutine
 * 000000014078A949: jmp     short loc_14078A99D
 * 000000014078A94B: lea     rcx, IopTimerDispatch
 * 000000014078A952: jmp     short loc_14078A99D
 * 000000014078A954: jz      short loc_14078A996
 * 000000014078A956: test    eax, eax
 * 000000014078A958: jz      short loc_14078A98D
 * 000000014078A95A: sub     eax, 1
 * 000000014078A95D: jz      short loc_14078A984
 * 000000014078A95F: sub     eax, 1
 * 000000014078A962: jz      short loc_14078A97B
 * 000000014078A964: cmp     eax, 1
 * 000000014078A967: jz      short loc_14078A972
 * 000000014078A969: lea     rcx, ExpCenturyDpcRoutine
 * 000000014078A970: jmp     short loc_14078A99D
 * 000000014078A972: lea     rcx, ExpTimeZoneDpcRoutine
 * 000000014078A979: jmp     short loc_14078A99D
 * 000000014078A97B: lea     rcx, ExpTimeRefreshDpcRoutine
 * 000000014078A982: jmp     short loc_14078A99D
 * 000000014078A984: lea     rcx, CmpLazyFlushDpcRoutine
 * 000000014078A98B: jmp     short loc_14078A99D
 * 000000014078A98D: lea     rcx, CmpEnableLazyFlushDpcRoutine
 * 000000014078A994: jmp     short loc_14078A99D
 * 000000014078A996: lea     rcx, ExpTimerDpcRoutine
 * 000000014078A99D: mov     rbx, 7010008004002001h
 * 000000014078A9A7: mov     r12d, 0FFFFFFF8h
 * 000000014078A9AD: mov     [r14+590h], rcx
 * 000000014078A9B4: or      edi, 0FFFFFFFFh
 * 000000014078A9B7: mov     rax, [r14+6B0h]
 * 000000014078A9BE: mov     rcx, [rax]
 * 000000014078A9C1: mov     [r14+6B8h], rcx
 * 000000014078A9C8: mov     [r14+6C0h], edi
 * 000000014078A9CF: mov     [r14+6C4h], r11d
 * 000000014078A9D6: mov     [r14+6C8h], r11
 * 000000014078A9DD: cli
 * 000000014078A9DE: cmp     byte ptr cs:KdDebuggerNotPresent, r11b
 * 000000014078A9E5: jnz     short loc_14078A9E9
 * 000000014078A9E7: jmp     short loc_14078A9E7
 * 000000014078A9E9: sti
 * 000000014078A9EA: rdtsc
 * 000000014078A9EC: shl     rdx, 20h
 * 000000014078A9F0: or      rax, rdx
 * 000000014078A9F3: mov     rcx, rax
 * 000000014078A9F6: ror     rax, 3
 * 000000014078A9FA: xor     rcx, rax
 * 000000014078A9FD: mov     rax, rbx
 * 000000014078AA00: mul     rcx
 * 000000014078AA03: xor     eax, edx
 * 000000014078AA05: mov     [rbp+1C70h+var_11A0], rdx
 * 000000014078AA0C: cmp     [rbp+1C70h+arg_8], 3
 * 000000014078AA13: mov     [r14+6ACh], eax
 * 000000014078AA1A: jnz     short loc_14078AA3D
 * 000000014078AA1C: mov     rdx, [rbp+1C70h+arg_18]
 * 000000014078AA23: mov     rcx, r14
 * 000000014078AA26: call    sub_14078D96C
 * 000000014078AA2B: xor     r11d, r11d
 * 000000014078AA2E: mov     [rsp+1D70h+var_1D00], rax
 * 000000014078AA33: test    rax, rax
 * 000000014078AA36: jnz     short loc_14078AA42
 * 000000014078AA38: jmp     loc_14077C9F7
 * 000000014078AA3D: mov     [rsp+1D70h+var_1D00], r11
 * 000000014078AA42: mov     r8d, [r14+67Ch]
 * 000000014078AA49: mov     [r14+75Ch], r11d
 * 000000014078AA50: cmp     dword ptr [r14+5F0h], 7
 * 000000014078AA58: mov     edx, [r14+59Ch]
 * 000000014078AA5F: jnz     short loc_14078AA67
 * 000000014078AA61: add     edx, 0FFFh
 * 000000014078AA67: mov     rcx, r14
 * 000000014078AA6A: call    sub_140251E08
 * 000000014078AA6F: xor     r10d, r10d
 * 000000014078AA72: mov     [rbp+1C70h+var_1CD0], rax
 * 000000014078AA76: mov     r15, rax
 * 000000014078AA79: test    rax, rax
 * 000000014078AA7C: jz      loc_14077C9F7
 * 000000014078AA82: mov     edx, [r14+6D8h]
 * 000000014078AA89: test    dl, 4
 * 000000014078AA8C: jnz     loc_14078AB31
 * 000000014078AA92: mov     ecx, [r14+59Ch]
 * 000000014078AA99: and     edx, 20000000h
 * 000000014078AA9F: mov     rbx, [r14+580h]
 * 000000014078AAA6: neg     edx
 * 000000014078AAA8: sbb     edx, edx
 * 000000014078AAAA: and     edx, [r14+67Ch]
 * 000000014078AAB1: cmp     ecx, 8
 * 000000014078AAB4: jb      short loc_14078AACB
 * 000000014078AAB6: mov     eax, ecx
 * 000000014078AAB8: shr     rax, 3
 * 000000014078AABC: mov     [r14], r10
 * 000000014078AABF: add     ecx, r12d
 * 000000014078AAC2: add     r14, 8
 * 000000014078AAC6: sub     rax, r13
 * 000000014078AAC9: jnz     short loc_14078AABC
 * 000000014078AACB: test    ecx, ecx
 * 000000014078AACD: jz      short loc_14078AAD9
 * 000000014078AACF: mov     [r14], r10b
 * 000000014078AAD2: add     r14, r13
 * 000000014078AAD5: add     ecx, edi
 * 000000014078AAD7: jnz     short loc_14078AACF
 * 000000014078AAD9: mov     edi, [r15+67Ch]
 * 000000014078AAE0: mov     [r15+67Ch], edx
 * 000000014078AAE7: cmp     edx, 3
 * 000000014078AAEA: jz      short loc_14078AB1D
 * 000000014078AAEC: test    dword ptr [r15+6D8h], 10000000h
 * 000000014078AAF7: mov     ecx, r10d
 * 000000014078AAFA: cmovz   ecx, edx
 * 000000014078AAFD: test    ecx, ecx
 * 000000014078AAFF: jz      short loc_14078AB11
 * 000000014078AB01: lea     rcx, [rbx-8]
 * 000000014078AB05: mov     rdx, [rcx]
 * 000000014078AB08: call    qword ptr [r15+210h]
 * 000000014078AB0F: jmp     short loc_14078AB27
 * 000000014078AB11: mov     rcx, rbx
 * 000000014078AB14: call    qword ptr [r15+0E8h]
 * 000000014078AB1B: jmp     short loc_14078AB27
 * 000000014078AB1D: mov     rcx, rbx
 * 000000014078AB20: call    qword ptr [r15+348h]
 * 000000014078AB27: mov     [r15+67Ch], edi
 * 000000014078AB2E: xor     r10d, r10d
 * 000000014078AB31: and     dword ptr [r15+6D8h], 0FFFFFFFBh
 * 000000014078AB39: mov     rax, [r15+788h]
 * 000000014078AB40: mov     [rsp+1D70h+var_1D20], rax
 * 000000014078AB45: mov     [r15+788h], r10
 * 000000014078AB4C: mov     eax, [r15+768h]
 * 000000014078AB53: test    eax, eax
 * 000000014078AB55: jz      loc_14078AD83
 * 000000014078AB5B: lea     r14, [r15+rax]
 * 000000014078AB5F: mov     rbx, [r14+8]
 * 000000014078AB63: mov     [rbp+1C70h+var_1CE8], r14
 * 000000014078AB67: test    rbx, rbx
 * 000000014078AB6A: jz      loc_14078AC92
 * 000000014078AB70: mov     edi, [r14+10h]
 * 000000014078AB74: mov     rax, rbx
 * 000000014078AB77: add     [r15+5E0h], edi
 * 000000014078AB7E: mov     r9d, [r15+5CCh]
 * 000000014078AB85: mov     rdx, [r15+5D0h]
 * 000000014078AB8C: lea     rcx, [rbx+rdi]
 * 000000014078AB90: cmp     rbx, rcx
 * 000000014078AB93: jnb     short loc_14078ABA1
 * 000000014078AB95: prefetchnta byte ptr [rax]
 * 000000014078AB98: add     rax, 40h ; '@'
 * 000000014078AB9C: cmp     rax, rcx
 * 000000014078AB9F: jb      short loc_14078AB95
 * 000000014078ABA1: cmp     edi, 8
 * 000000014078ABA4: jb      short loc_14078ABC2
 * 000000014078ABA6: mov     r8, rdi
 * 000000014078ABA9: shr     r8, 3
 * 000000014078ABAD: xor     rdx, [rbx]
 * 000000014078ABB0: mov     ecx, r9d
 * 000000014078ABB3: rol     rdx, cl
 * 000000014078ABB6: add     rbx, 8
 * 000000014078ABBA: add     edi, r12d
 * 000000014078ABBD: sub     r8, r13
 * 000000014078ABC0: jnz     short loc_14078ABAD
 * 000000014078ABC2: test    edi, edi
 * 000000014078ABC4: jz      short loc_14078ABDA
 * 000000014078ABC6: movzx   eax, byte ptr [rbx]
 * 000000014078ABC9: mov     ecx, r9d
 * 000000014078ABCC: xor     rdx, rax
 * 000000014078ABCF: add     rbx, r13
 * 000000014078ABD2: rol     rdx, cl
 * 000000014078ABD5: add     edi, 0FFFFFFFFh
 * 000000014078ABD8: jnz     short loc_14078ABC6
 * 000000014078ABDA: mov     rax, rdx
 * 000000014078ABDD: jmp     short loc_14078ABE1
 * 000000014078ABDF: xor     edx, eax
 * 000000014078ABE1: shr     rax, 1Fh
 * 000000014078ABE5: test    rax, rax
 * 000000014078ABE8: jnz     short loc_14078ABDF
 * 000000014078ABEA: mov     eax, [r14+14h]
 * 000000014078ABEE: mov     ebx, 7FFFFFFFh
 * 000000014078ABF3: and     edx, ebx
 * 000000014078ABF5: cmp     edx, eax
 * 000000014078ABF7: jz      short loc_14078AC5F
 * 000000014078ABF9: cmp     [r15+650h], r10d
 * 000000014078AC00: jnz     short loc_14078AC12
 * 000000014078AC02: mov     ecx, edx
 * 000000014078AC04: xor     rcx, rax
 * 000000014078AC07: mov     rax, [r15+4D8h]
 * 000000014078AC0E: mov     [rax+18h], rcx
 * 000000014078AC12: mov     rcx, [r14+8]
 * 000000014078AC16: cmp     [r15+650h], r10d
 * 000000014078AC1D: jnz     short loc_14078AC5F
 * 000000014078AC1F: mov     rax, 0A3A03F5891C8B4E8h
 * 000000014078AC29: add     rax, r15
 * 000000014078AC2C: mov     [r15+658h], rax
 * 000000014078AC33: mov     rax, 0B3B74BDEE4453415h
 * 000000014078AC3D: add     rax, r14
 * 000000014078AC40: mov     [r15+660h], rax
 * 000000014078AC47: movsxd  rax, dword ptr [r14]
 * 000000014078AC4A: mov     [r15+668h], rax
 * 000000014078AC51: mov     [r15+670h], rcx
 * 000000014078AC58: mov     [r15+650h], r13d
 * 000000014078AC5F: mov     rcx, [r14+18h]
 * 000000014078AC63: call    qword ptr [r15+0E8h]
 * 000000014078AC6A: xor     r10d, r10d
 * 000000014078AC6D: mov     [r14+8], r10
 * 000000014078AC71: mov     [r14+10h], r10d
 * 000000014078AC75: mov     rcx, [r15+5D0h]
 * 000000014078AC7C: mov     rax, rcx
 * 000000014078AC7F: jmp     short loc_14078AC83
 * 000000014078AC81: xor     ecx, eax
 * 000000014078AC83: shr     rax, 1Fh
 * 000000014078AC87: test    rax, rax
 * 000000014078AC8A: jnz     short loc_14078AC81
 * 000000014078AC8C: and     ecx, ebx
 * 000000014078AC8E: mov     [r14+14h], ecx
 * 000000014078AC92: rdtsc
 * 000000014078AC94: shl     rdx, 20h
 * 000000014078AC98: mov     r11, 7010008004002001h
 * 000000014078ACA2: or      rax, rdx
 * 000000014078ACA5: mov     rcx, rax
 * 000000014078ACA8: ror     rax, 3
 * 000000014078ACAC: xor     rcx, rax
 * 000000014078ACAF: mov     rax, r11
 * 000000014078ACB2: mul     rcx
 * 000000014078ACB5: mov     rcx, rdx
 * 000000014078ACB8: mov     [rbp+1C70h+var_1198], rdx
 * 000000014078ACBF: xor     rcx, rax
 * 000000014078ACC2: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014078ACCC: mul     rcx
 * 000000014078ACCF: shr     rdx, 1
 * 000000014078ACD2: lea     rax, [rdx+rdx*2]
 * 000000014078ACD6: cmp     rcx, rax
 * 000000014078ACD9: jnz     loc_14078B4D1
 * 000000014078ACDF: test    dword ptr [r15+6D8h], 10000000h
 * 000000014078ACEA: mov     r8d, [r15+5C8h]
 * 000000014078ACF1: movzx   r9d, r13b
 * 000000014078ACF5: cmovnz  r9d, r10d
 * 000000014078ACF9: rdtsc
 * 000000014078ACFB: shl     rdx, 20h
 * 000000014078ACFF: or      rax, rdx
 * 000000014078AD02: mov     rcx, rax
 * 000000014078AD05: ror     rax, 3
 * 000000014078AD09: xor     rcx, rax
 * 000000014078AD0C: mov     rax, r11
 * 000000014078AD0F: mul     rcx
 * 000000014078AD12: mov     r14, rax
 * 000000014078AD15: mov     [rbp+1C70h+var_1190], rdx
 * 000000014078AD1C: xor     r14d, edx
 * 000000014078AD1F: and     r14d, 7FFh
 * 000000014078AD26: rdtsc
 * 000000014078AD28: shl     rdx, 20h
 * 000000014078AD2C: lea     ebx, [r14+1]
 * 000000014078AD30: or      rax, rdx
 * 000000014078AD33: mov     rcx, rax
 * 000000014078AD36: ror     rax, 3
 * 000000014078AD3A: xor     rcx, rax
 * 000000014078AD3D: mov     rax, r11
 * 000000014078AD40: mul     rcx
 * 000000014078AD43: xor     rax, rdx
 * 000000014078AD46: mov     [rbp+1C70h+var_1188], rdx
 * 000000014078AD4D: xor     edx, edx
 * 000000014078AD4F: div     rbx
 * 000000014078AD52: neg     r9b
 * 000000014078AD55: mov     r12, rdx
 * 000000014078AD58: lea     edx, [r14+798h]
 * 000000014078AD5F: sbb     ecx, ecx
 * 000000014078AD61: not     ecx
 * 000000014078AD63: and     ecx, 200h
 * 000000014078AD69: call    qword ptr [r15+0E0h]
 * 000000014078AD70: mov     r9, rax
 * 000000014078AD73: test    rax, rax
 * 000000014078AD76: jnz     loc_14078AEC0
 * 000000014078AD7C: add     [r15+758h], r13d
 * 000000014078AD83: xor     r12d, r12d
 * 000000014078AD86: mov     r11, 7010008004002001h
 * 000000014078AD90: bts     dword ptr [r15+6D8h], 15h
 * 000000014078AD99: lea     rcx, [r15+538h]
 * 000000014078ADA0: mov     r10d, [r15+0C4h]
 * 000000014078ADA7: mov     ebx, 538h
 * 000000014078ADAC: mov     [r15+0C4h], r12d
 * 000000014078ADB3: mov     rdi, r15
 * 000000014078ADB6: add     [r15+5E0h], ebx
 * 000000014078ADBD: mov     rax, r15
 * 000000014078ADC0: mov     r9d, [r15+5CCh]
 * 000000014078ADC7: mov     rdx, [r15+5D0h]
 * 000000014078ADCE: cmp     r15, rcx
 * 000000014078ADD1: jnb     short loc_14078ADDF
 * 000000014078ADD3: prefetchnta byte ptr [rax]
 * 000000014078ADD6: add     rax, 40h ; '@'
 * 000000014078ADDA: cmp     rax, rcx
 * 000000014078ADDD: jb      short loc_14078ADD3
 * 000000014078ADDF: mov     r8d, 0A7h
 * 000000014078ADE5: xor     rdx, [rdi]
 * 000000014078ADE8: mov     ecx, r9d
 * 000000014078ADEB: rol     rdx, cl
 * 000000014078ADEE: add     rdi, 8
 * 000000014078ADF2: add     ebx, 0FFFFFFF8h
 * 000000014078ADF5: sub     r8, r13
 * 000000014078ADF8: jnz     short loc_14078ADE5
 * 000000014078ADFA: test    ebx, ebx
 * 000000014078ADFC: jz      short loc_14078AE12
 * 000000014078ADFE: movzx   eax, byte ptr [rdi]
 * 000000014078AE01: mov     ecx, r9d
 * 000000014078AE04: xor     rdx, rax
 * 000000014078AE07: add     rdi, r13
 * 000000014078AE0A: rol     rdx, cl
 * 000000014078AE0D: add     ebx, 0FFFFFFFFh
 * 000000014078AE10: jnz     short loc_14078ADFE
 * 000000014078AE12: mov     [r15+0C4h], r10d
 * 000000014078AE19: lea     rcx, [rbp+1C70h+var_7E0]
 * 000000014078AE20: mov     [r15+760h], rdx
 * 000000014078AE27: mov     edx, 0Fh
 * 000000014078AE2C: mov     [r15+5E0h], r12d
 * 000000014078AE33: mov     [r15+758h], r12d
 * 000000014078AE3A: mov     rax, [r15+580h]
 * 000000014078AE41: mov     [rbp+1C70h+var_1CE8], rax
 * 000000014078AE45: lea     ebx, [rdx+71h]
 * 000000014078AE48: mov     rax, r15
 * 000000014078AE4B: movups  xmm0, xmmword ptr [rax]
 * 000000014078AE4E: movups  xmmword ptr [rcx], xmm0
 * 000000014078AE51: movups  xmm1, xmmword ptr [rax+10h]
 * 000000014078AE55: movups  xmmword ptr [rcx+10h], xmm1
 * 000000014078AE59: movups  xmm0, xmmword ptr [rax+20h]
 * 000000014078AE5D: movups  xmmword ptr [rcx+20h], xmm0
 * 000000014078AE61: movups  xmm1, xmmword ptr [rax+30h]
 * 000000014078AE65: movups  xmmword ptr [rcx+30h], xmm1
 * 000000014078AE69: movups  xmm0, xmmword ptr [rax+40h]
 * 000000014078AE6D: movups  xmmword ptr [rcx+40h], xmm0
 * 000000014078AE71: movups  xmm1, xmmword ptr [rax+50h]
 * 000000014078AE75: movups  xmmword ptr [rcx+50h], xmm1
 * 000000014078AE79: movups  xmm0, xmmword ptr [rax+60h]
 * 000000014078AE7D: movups  xmmword ptr [rcx+60h], xmm0
 * 000000014078AE81: add     rcx, rbx
 * 000000014078AE84: movups  xmm1, xmmword ptr [rax+70h]
 * 000000014078AE88: add     rax, rbx
 * 000000014078AE8B: movups  xmmword ptr [rcx-10h], xmm1
 * 000000014078AE8F: sub     rdx, 1
 * 000000014078AE93: jnz     short loc_14078AE4B
 * 000000014078AE95: movups  xmm0, xmmword ptr [rax]
 * 000000014078AE98: movups  xmmword ptr [rcx], xmm0
 * 000000014078AE9B: mov     rax, [rax+10h]
 * 000000014078AE9F: mov     [rcx+10h], rax
 * 000000014078AEA3: mov     r14d, [r15+6D8h]
 * 000000014078AEAA: test    r14b, 2
 * 000000014078AEAE: jz      loc_14078B4D9
 * 000000014078AEB4: mov     eax, [r15+59Ch]
 * 000000014078AEBB: jmp     loc_14078B4E0
 * 000000014078AEC0: mov     edi, r12d
 * 000000014078AEC3: mov     rbx, rax
 * 000000014078AEC6: mov     r10d, 0FFFFFFF8h
 * 000000014078AECC: cmp     r12d, 8
 * 000000014078AED0: jb      short loc_14078AF15
 * 000000014078AED2: mov     r8d, r12d
 * 000000014078AED5: mov     r11, 7010008004002001h
 * 000000014078AEDF: shr     r8, 3
 * 000000014078AEE3: rdtsc
 * 000000014078AEE5: shl     rdx, 20h
 * 000000014078AEE9: add     edi, r10d
 * 000000014078AEEC: or      rax, rdx
 * 000000014078AEEF: mov     rcx, rax
 * 000000014078AEF2: ror     rax, 3
 * 000000014078AEF6: xor     rcx, rax
 * 000000014078AEF9: mov     rax, r11
 * 000000014078AEFC: mul     rcx
 * 000000014078AEFF: mov     [rbp+1C70h+var_1180], rdx
 * 000000014078AF06: xor     rdx, rax
 * 000000014078AF09: mov     [rbx], rdx
 * 000000014078AF0C: add     rbx, 8
 * 000000014078AF10: sub     r8, r13
 * 000000014078AF13: jnz     short loc_14078AEE3
 * 000000014078AF15: test    edi, edi
 * 000000014078AF17: jz      short loc_14078AF57
 * 000000014078AF19: rdtsc
 * 000000014078AF1B: shl     rdx, 20h
 * 000000014078AF1F: or      rax, rdx
 * 000000014078AF22: mov     rcx, rax
 * 000000014078AF25: ror     rax, 3
 * 000000014078AF29: xor     rcx, rax
 * 000000014078AF2C: mov     rax, 7010008004002001h
 * 000000014078AF36: mul     rcx
 * 000000014078AF39: mov     [rbp+1C70h+var_1178], rdx
 * 000000014078AF40: xor     rdx, rax
 * 000000014078AF43: or      r11d, 0FFFFFFFFh
 * 000000014078AF47: mov     [rbx], dl
 * 000000014078AF49: add     rbx, r13
 * 000000014078AF4C: shr     rdx, 8
 * 000000014078AF50: add     edi, r11d
 * 000000014078AF53: jnz     short loc_14078AF47
 * 000000014078AF55: jmp     short loc_14078AF5B
 * 000000014078AF57: or      r11d, 0FFFFFFFFh
 * 000000014078AF5B: mov     edi, r12d
 * 000000014078AF5E: sub     r14d, r12d
 * 000000014078AF61: add     rdi, r9
 * 000000014078AF64: lea     rbx, [rdi+798h]
 * 000000014078AF6B: cmp     r14d, 8
 * 000000014078AF6F: jb      short loc_14078AFB8
 * 000000014078AF71: mov     r8d, r14d
 * 000000014078AF74: mov     r15, 7010008004002001h
 * 000000014078AF7E: shr     r8, 3
 * 000000014078AF82: rdtsc
 * 000000014078AF84: shl     rdx, 20h
 * 000000014078AF88: add     r14d, r10d
 * 000000014078AF8B: or      rax, rdx
 * 000000014078AF8E: mov     rcx, rax
 * 000000014078AF91: ror     rax, 3
 * 000000014078AF95: xor     rcx, rax
 * 000000014078AF98: mov     rax, r15
 * 000000014078AF9B: mul     rcx
 * 000000014078AF9E: mov     [rbp+1C70h+var_1170], rdx
 * 000000014078AFA5: xor     rdx, rax
 * 000000014078AFA8: mov     [rbx], rdx
 * 000000014078AFAB: add     rbx, 8
 * 000000014078AFAF: sub     r8, r13
 * 000000014078AFB2: jnz     short loc_14078AF82
 * 000000014078AFB4: mov     r15, [rbp+1C70h+var_1CD0]
 * 000000014078AFB8: xor     r12d, r12d
 * 000000014078AFBB: test    r14d, r14d
 * 000000014078AFBE: jz      short loc_14078AFF8
 * 000000014078AFC0: rdtsc
 * 000000014078AFC2: shl     rdx, 20h
 * 000000014078AFC6: or      rax, rdx
 * 000000014078AFC9: mov     rcx, rax
 * 000000014078AFCC: ror     rax, 3
 * 000000014078AFD0: xor     rcx, rax
 * 000000014078AFD3: mov     rax, 7010008004002001h
 * 000000014078AFDD: mul     rcx
 * 000000014078AFE0: mov     [rbp+1C70h+var_1168], rdx
 * 000000014078AFE7: xor     rdx, rax
 * 000000014078AFEA: mov     [rbx], dl
 * 000000014078AFEC: add     rbx, r13
 * 000000014078AFEF: shr     rdx, 8
 * 000000014078AFF3: add     r14d, r11d
 * 000000014078AFF6: jnz     short loc_14078AFEA
 * 000000014078AFF8: mov     rcx, [rbp+1C70h+var_1CE8]
 * 000000014078AFFC: lea     rax, [rcx+18h]
 * 000000014078B000: test    rax, rax
 * 000000014078B003: jz      short loc_14078B008
 * 000000014078B005: mov     [rax], r9
 * 000000014078B008: test    rdi, rdi
 * 000000014078B00B: jz      loc_14078AD86
 * 000000014078B011: mov     r9d, 798h
 * 000000014078B017: mov     [rcx+8], rdi
 * 000000014078B01B: mov     [rcx+10h], r9d
 * 000000014078B01F: mov     ebx, r9d
 * 000000014078B022: mov     rcx, r15
 * 000000014078B025: mov     rdx, rdi
 * 000000014078B028: mov     r8d, 0F3h
 * 000000014078B02E: mov     rax, [rcx]
 * 000000014078B031: add     ebx, r10d
 * 000000014078B034: mov     [rdx], rax
 * 000000014078B037: add     rcx, 8
 * 000000014078B03B: add     rdx, 8
 * 000000014078B03F: sub     r8, r13
 * 000000014078B042: jnz     short loc_14078B02E
 * 000000014078B044: test    ebx, ebx
 * 000000014078B046: jz      short loc_14078B057
 * 000000014078B048: mov     al, [rcx]
 * 000000014078B04A: add     rcx, r13
 * 000000014078B04D: mov     [rdx], al
 * 000000014078B04F: add     rdx, r13
 * 000000014078B052: add     ebx, r11d
 * 000000014078B055: jnz     short loc_14078B048
 * 000000014078B057: bts     dword ptr [rdi+6D8h], 13h
 * 000000014078B05F: mov     eax, r9d
 * 000000014078B062: mov     [rdi+59Ch], r9d
 * 000000014078B069: mov     [rdi+5C0h], r9d
 * 000000014078B070: mov     r11d, [rdi+6D8h]
 * 000000014078B077: and     r11d, 0FFFFFFFDh
 * 000000014078B07B: lea     r14d, [rax-0C8h]
 * 000000014078B082: mov     [rdi+6D8h], r11d
 * 000000014078B089: mov     ecx, r11d
 * 000000014078B08C: shr     ecx, 13h
 * 000000014078B08F: and     ecx, r13d
 * 000000014078B092: mov     dword ptr [rbp+1C70h+arg_18], ecx
 * 000000014078B098: mov     ecx, r11d
 * 000000014078B09B: shr     ecx, 9
 * 000000014078B09E: and     ecx, r13d
 * 000000014078B0A1: shr     r11d, 8
 * 000000014078B0A5: mov     dword ptr [rsp+1D70h+Src], ecx
 * 000000014078B0A9: and     r11d, r13d
 * 000000014078B0AC: mov     rcx, [rdi+438h]
 * 000000014078B0B3: mov     [rbp+1C70h+var_1CE0], rcx
 * 000000014078B0B7: mov     rcx, [rdi+508h]
 * 000000014078B0BE: shr     r14d, 3
 * 000000014078B0C2: mov     [rsp+78h], rcx
 * 000000014078B0C7: mov     [rdi+0C4h], r14d
 * 000000014078B0CE: rdtsc
 * 000000014078B0D0: shl     rdx, 20h
 * 000000014078B0D4: lea     r10, [rdi+550h]
 * 000000014078B0DB: or      rax, rdx
 * 000000014078B0DE: lea     rbx, [rbp+1C70h+var_C50]
 * 000000014078B0E5: mov     rcx, rax
 * 000000014078B0E8: mov     r8d, 20h ; ' '
 * 000000014078B0EE: ror     rax, 3
 * 000000014078B0F2: xor     rcx, rax
 * 000000014078B0F5: mov     rax, 7010008004002001h
 * 000000014078B0FF: mul     rcx
 * 000000014078B102: mov     rcx, r10
 * 000000014078B105: mov     r12, rdx
 * 000000014078B108: mov     [rbp+1C70h+var_1160], rdx
 * 000000014078B10F: xor     r12, rax
 * 000000014078B112: lea     edx, [r8-1Ch]
 * 000000014078B116: mov     rax, [rdi+570h]
 * 000000014078B11D: mov     r9d, edx
 * 000000014078B120: mov     [rbp+1C70h+var_1CD8], rax
 * 000000014078B124: mov     eax, [rdi+5E0h]
 * 000000014078B12A: mov     dword ptr [rsp+1D70h+var_1D08], eax
 * 000000014078B12E: mov     rax, [rcx]
 * 000000014078B131: add     r8d, 0FFFFFFF8h
 * 000000014078B135: mov     [rbx], rax
 * 000000014078B138: add     rcx, 8
 * 000000014078B13C: add     rbx, 8
 * 000000014078B140: sub     r9, r13
 * 000000014078B143: jnz     short loc_14078B12E
 * 000000014078B145: test    r8d, r8d
 * 000000014078B148: jz      short loc_14078B15A
 * 000000014078B14A: mov     al, [rcx]
 * 000000014078B14C: add     rcx, r13
 * 000000014078B14F: mov     [rbx], al
 * 000000014078B151: add     rbx, r13
 * 000000014078B154: add     r8d, 0FFFFFFFFh
 * 000000014078B158: jnz     short loc_14078B14A
 * 000000014078B15A: mov     [rdi+570h], r9
 * 000000014078B161: mov     ecx, 20h ; ' '
 * 000000014078B166: mov     [rdi+5E0h], r9d
 * 000000014078B16D: mov     rax, r10
 * 000000014078B170: mov     [rax], r9
 * 000000014078B173: add     ecx, 0FFFFFFF8h
 * 000000014078B176: add     rax, 8
 * 000000014078B17A: sub     rdx, r13
 * 000000014078B17D: jnz     short loc_14078B170
 * 000000014078B17F: test    ecx, ecx
 * 000000014078B181: jz      short loc_14078B18E
 * 000000014078B183: mov     [rax], r9b
 * 000000014078B186: add     rax, r13
 * 000000014078B189: add     ecx, 0FFFFFFFFh
 * 000000014078B18C: jnz     short loc_14078B183
 * 000000014078B18E: mov     eax, [rdi+59Ch]
 * 000000014078B194: mov     r8, rdi
 * 000000014078B197: add     [rdi+5E0h], eax
 * 000000014078B19D: mov     rax, rdi
 * 000000014078B1A0: mov     edx, [rdi+59Ch]
 * 000000014078B1A6: mov     r9d, [rdi+5CCh]
 * 000000014078B1AD: mov     rbx, [rdi+5D0h]
 * 000000014078B1B4: mov     dword ptr [rsp+1D70h+NtHeaders], r9d
 * 000000014078B1B9: lea     rcx, [rdi+rdx]
 * 000000014078B1BD: cmp     rdi, rcx
 * 000000014078B1C0: jnb     short loc_14078B1CE
 * 000000014078B1C2: prefetchnta byte ptr [rax]
 * 000000014078B1C5: add     rax, 40h ; '@'
 * 000000014078B1C9: cmp     rax, rcx
 * 000000014078B1CC: jb      short loc_14078B1C2
 * 000000014078B1CE: cmp     edx, 8
 * 000000014078B1D1: jb      short loc_14078B1F3
 * 000000014078B1D3: mov     ecx, dword ptr [rsp+1D70h+NtHeaders]
 * 000000014078B1D7: mov     r9, rdx
 * 000000014078B1DA: shr     r9, 3
 * 000000014078B1DE: xor     rbx, [r8]
 * 000000014078B1E1: add     edx, 0FFFFFFF8h
 * 000000014078B1E4: rol     rbx, cl
 * 000000014078B1E7: add     r8, 8
 * 000000014078B1EB: sub     r9, r13
 * 000000014078B1EE: jnz     short loc_14078B1DE
 * 000000014078B1F0: mov     r9d, ecx
 * 000000014078B1F3: test    edx, edx
 * 000000014078B1F5: jz      short loc_14078B20C
 * 000000014078B1F7: movzx   eax, byte ptr [r8]
 * 000000014078B1FB: mov     ecx, r9d
 * 000000014078B1FE: xor     rbx, rax
 * 000000014078B201: add     r8, r13
 * 000000014078B204: rol     rbx, cl
 * 000000014078B207: add     edx, 0FFFFFFFFh
 * 000000014078B20A: jnz     short loc_14078B1F7
 * 000000014078B20C: mov     rax, [rbp+1C70h+var_1CD8]
 * 000000014078B210: lea     rcx, [rbp+1C70h+var_C50]
 * 000000014078B217: mov     [rdi+570h], rax
 * 000000014078B21E: mov     edx, 20h ; ' '
 * 000000014078B223: mov     eax, dword ptr [rsp+1D70h+var_1D08]
 * 000000014078B227: add     [rdi+5E0h], eax
 * 000000014078B22D: lea     r9d, [rdx-1Ch]
 * 000000014078B231: mov     r8d, r9d
 * 000000014078B234: mov     rax, [rcx]
 * 000000014078B237: add     edx, 0FFFFFFF8h
 * 000000014078B23A: mov     [r10], rax
 * 000000014078B23D: add     rcx, 8
 * 000000014078B241: add     r10, 8
 * 000000014078B245: sub     r8, r13
 * 000000014078B248: jnz     short loc_14078B234
 * 000000014078B24A: test    edx, edx
 * 000000014078B24C: jz      short loc_14078B25E
 * 000000014078B24E: mov     al, [rcx]
 * 000000014078B250: add     rcx, r13
 * 000000014078B253: mov     [r10], al
 * 000000014078B256: add     r10, r13
 * 000000014078B259: add     edx, 0FFFFFFFFh
 * 000000014078B25C: jnz     short loc_14078B24E
 * 000000014078B25E: mov     [rdi+570h], rbx
 * 000000014078B265: test    dword ptr [rdi+6D8h], 40000000h
 * 000000014078B26F: jnz     loc_14078B435
 * 000000014078B275: mov     rcx, rdi
 * 000000014078B278: mov     edx, r8d
 * 000000014078B27B: xor     [rcx], r12
 * 000000014078B27E: add     edx, r13d
 * 000000014078B281: movsxd  rax, edx
 * 000000014078B284: lea     rcx, [rcx+8]
 * 000000014078B288: cmp     rax, 19h
 * 000000014078B28C: jb      short loc_14078B27B
 * 000000014078B28E: test    r14d, r14d
 * 000000014078B291: jz      short loc_14078B2AF
 * 000000014078B293: mov     edx, r14d
 * 000000014078B296: dec     rdx
 * 000000014078B299: lea     rdx, [rcx+rdx*8]
 * 000000014078B29D: xor     [rdx], r12
 * 000000014078B2A0: mov     ecx, r14d
 * 000000014078B2A3: ror     r12, cl
 * 000000014078B2A6: lea     rdx, [rdx-8]
 * 000000014078B2AA: sub     r14d, r13d
 * 000000014078B2AD: jnz     short loc_14078B29D
 * 000000014078B2AF: xor     r12d, r12d
 * 000000014078B2B2: cmp     dword ptr [rbp+1C70h+arg_18], r12d
 * 000000014078B2B9: jz      short loc_14078B309
 * 000000014078B2BB: rdtsc
 * 000000014078B2BD: shl     rdx, 20h
 * 000000014078B2C1: mov     r11, 7010008004002001h
 * 000000014078B2CB: or      rax, rdx
 * 000000014078B2CE: mov     rcx, rax
 * 000000014078B2D1: ror     rax, 3
 * 000000014078B2D5: xor     rcx, rax
 * 000000014078B2D8: mov     rax, r11
 * 000000014078B2DB: mul     rcx
 * 000000014078B2DE: mov     rcx, rdx
 * 000000014078B2E1: mov     [rbp+1C70h+var_1158], rdx
 * 000000014078B2E8: xor     rcx, rax
 * 000000014078B2EB: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014078B2F5: mul     rcx
 * 000000014078B2F8: shr     rdx, 1
 * 000000014078B2FB: lea     rax, [rdx+rdx*2]
 * 000000014078B2FF: cmp     rcx, rax
 * 000000014078B302: jz      short loc_14078B312
 * 000000014078B304: jmp     loc_14078B442
 * 000000014078B309: test    r11d, r11d
 * 000000014078B30C: jnz     loc_14078B438
 * 000000014078B312: mov     r14d, dword ptr [rsp+1D70h+Src]
 * 000000014078B317: mov     ecx, edi
 * 000000014078B319: mov     r8, rdi
 * 000000014078B31C: mov     [rbp+1C70h+var_EA8], r12b
 * 000000014078B323: mov     [rbp+1C70h+var_EA2], r9b
 * 000000014078B32A: mov     r10d, r12d
 * 000000014078B32D: mov     r11, r12
 * 000000014078B330: ror     r8, cl
 * 000000014078B333: mov     r12, [rbp+1C70h+var_1CE0]
 * 000000014078B337: mov     r9, rdi
 * 000000014078B33A: mov     [rbp+1C70h+var_EA5], r13b
 * 000000014078B341: mov     [rbp+1C70h+var_EA3], 2
 * 000000014078B348: mov     [rbp+1C70h+var_EA0], 3
 * 000000014078B34F: mov     [rbp+1C70h+var_E9F], 5
 * 000000014078B356: mov     [rbp+1C70h+var_E9C], 6
 * 000000014078B35D: mov     [rbp+1C70h+var_EA1], 7
 * 000000014078B364: mov     [rbp+1C70h+var_E9B], 8
 * 000000014078B36B: mov     [rbp+1C70h+var_E9E], 9
 * 000000014078B372: mov     [rbp+1C70h+var_E9A], 0Ah
 * 000000014078B379: mov     [rbp+1C70h+var_EA4], 0Bh
 * 000000014078B380: mov     [rbp+1C70h+var_EA7], 0Ch
 * 000000014078B387: mov     [rbp+1C70h+var_E99], 0Dh
 * 000000014078B38E: mov     [rbp+1C70h+var_E9D], 0Eh
 * 000000014078B395: mov     [rbp+1C70h+var_EA6], 0Fh
 * 000000014078B39C: mov     rdx, [r9]
 * 000000014078B39F: mov     ebx, 10h
 * 000000014078B3A4: movzx   eax, byte ptr [r9]
 * 000000014078B3A8: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 000000014078B3AC: and     eax, 0Fh
 * 000000014078B3AF: movzx   ecx, [rbp+rax+1C70h+var_EA8]
 * 000000014078B3B7: or      rdx, rcx
 * 000000014078B3BA: ror     rdx, 4
 * 000000014078B3BE: mov     [r9], rdx
 * 000000014078B3C1: sub     rbx, r13
 * 000000014078B3C4: jnz     short loc_14078B3A4
 * 000000014078B3C6: mov     r15, [rsp+78h]
 * 000000014078B3CB: sub     rdx, r11
 * 000000014078B3CE: mov     [r9], rdx
 * 000000014078B3D1: test    r14d, r14d
 * 000000014078B3D4: jnz     short loc_14078B3ED
 * 000000014078B3D6: xor     rdx, r12
 * 000000014078B3D9: mov     ecx, r15d
 * 000000014078B3DC: bswap   rdx
 * 000000014078B3DF: xor     rdx, r8
 * 000000014078B3E2: ror     rdx, cl
 * 000000014078B3E5: xor     rdx, r15
 * 000000014078B3E8: mov     [r9], rdx
 * 000000014078B3EB: jmp     short loc_14078B3F6
 * 000000014078B3ED: mov     rax, r8
 * 000000014078B3F0: xor     rax, rdx
 * 000000014078B3F3: mov     [r9], rax
 * 000000014078B3F6: mov     ecx, [r9]
 * 000000014078B3F9: mov     edx, 0C8h
 * 000000014078B3FE: sub     edx, r10d
 * 000000014078B401: not     ecx
 * 000000014078B403: imul    edx, r10d
 * 000000014078B407: add     r11, rdi
 * 000000014078B40A: add     r10d, r13d
 * 000000014078B40D: ror     rdx, cl
 * 000000014078B410: mov     ecx, [r9]
 * 000000014078B413: xor     r8, rdx
 * 000000014078B416: rol     r8, cl
 * 000000014078B419: add     r9, 8
 * 000000014078B41D: add     r8, rdi
 * 000000014078B420: cmp     r10d, 19h
 * 000000014078B424: jb      loc_14078B39C
 * 000000014078B42A: mov     r15, [rbp+1C70h+var_1CD0]
 * 000000014078B42E: mov     rsi, 0FFFFFFFFB8797400h
 * 000000014078B435: xor     r12d, r12d
 * 000000014078B438: mov     r11, 7010008004002001h
 * 000000014078B442: mov     r10, [rbp+1C70h+var_1CE8]
 * 000000014078B446: mov     rdi, [r10+8]
 * 000000014078B44A: mov     ebx, [r10+10h]
 * 000000014078B44E: mov     rax, rdi
 * 000000014078B451: add     [r15+5E0h], ebx
 * 000000014078B458: mov     r9d, [r15+5CCh]
 * 000000014078B45F: mov     rdx, [r15+5D0h]
 * 000000014078B466: lea     rcx, [rdi+rbx]
 * 000000014078B46A: cmp     rdi, rcx
 * 000000014078B46D: jnb     short loc_14078B47B
 * 000000014078B46F: prefetchnta byte ptr [rax]
 * 000000014078B472: add     rax, 40h ; '@'
 * 000000014078B476: cmp     rax, rcx
 * 000000014078B479: jb      short loc_14078B46F
 * 000000014078B47B: cmp     ebx, 8
 * 000000014078B47E: jb      short loc_14078B49C
 * 000000014078B480: mov     r8, rbx
 * 000000014078B483: shr     r8, 3
 * 000000014078B487: xor     rdx, [rdi]
 * 000000014078B48A: mov     ecx, r9d
 * 000000014078B48D: rol     rdx, cl
 * 000000014078B490: add     rdi, 8
 * 000000014078B494: add     ebx, 0FFFFFFF8h
 * 000000014078B497: sub     r8, r13
 * 000000014078B49A: jnz     short loc_14078B487
 * 000000014078B49C: test    ebx, ebx
 * 000000014078B49E: jz      short loc_14078B4B4
 * 000000014078B4A0: movzx   eax, byte ptr [rdi]
 * 000000014078B4A3: mov     ecx, r9d
 * 000000014078B4A6: xor     rdx, rax
 * 000000014078B4A9: add     rdi, r13
 * 000000014078B4AC: rol     rdx, cl
 * 000000014078B4AF: add     ebx, 0FFFFFFFFh
 * 000000014078B4B2: jnz     short loc_14078B4A0
 * 000000014078B4B4: mov     rax, rdx
 * 000000014078B4B7: jmp     short loc_14078B4BB
 * 000000014078B4B9: xor     edx, eax
 * 000000014078B4BB: shr     rax, 1Fh
 * 000000014078B4BF: test    rax, rax
 * 000000014078B4C2: jnz     short loc_14078B4B9
 * 000000014078B4C4: btr     edx, 1Fh
 * 000000014078B4C8: mov     [r10+14h], edx
 * 000000014078B4CC: jmp     loc_14078AD90
 * 000000014078B4D1: xor     r12d, r12d
 * 000000014078B4D4: jmp     loc_14078AD90
 * 000000014078B4D9: mov     eax, [r15+5C0h]
 * 000000014078B4E0: mov     ecx, r14d
 * 000000014078B4E3: lea     r10d, [rax-0C8h]
 * 000000014078B4EA: shr     ecx, 9
 * 000000014078B4ED: mov     r12d, r14d
 * 000000014078B4F0: and     ecx, r13d
 * 000000014078B4F3: shr     r12d, 13h
 * 000000014078B4F7: mov     dword ptr [rbp+1C70h+arg_18], ecx
 * 000000014078B4FD: and     r12d, r13d
 * 000000014078B500: mov     rcx, [r15+438h]
 * 000000014078B507: shr     r14d, 8
 * 000000014078B50B: and     r14d, r13d
 * 000000014078B50E: mov     [rbp+1C70h+var_1CE0], rcx
 * 000000014078B512: mov     rcx, [r15+508h]
 * 000000014078B519: shr     r10d, 3
 * 000000014078B51D: mov     [rsp+78h], rcx
 * 000000014078B522: mov     [r15+0C4h], r10d
 * 000000014078B529: rdtsc
 * 000000014078B52B: shl     rdx, 20h
 * 000000014078B52F: lea     r8, [r15+550h]
 * 000000014078B536: or      rax, rdx
 * 000000014078B539: lea     rbx, [rbp+1C70h+var_C30]
 * 000000014078B540: mov     rcx, rax
 * 000000014078B543: mov     edi, 20h ; ' '
 * 000000014078B548: ror     rax, 3
 * 000000014078B54C: xor     rcx, rax
 * 000000014078B54F: mov     rax, r11
 * 000000014078B552: mul     rcx
 * 000000014078B555: mov     rcx, r8
 * 000000014078B558: mov     r11, rdx
 * 000000014078B55B: mov     [rbp+1C70h+var_1150], rdx
 * 000000014078B562: xor     r11, rax
 * 000000014078B565: lea     edx, [rdi-1Ch]
 * 000000014078B568: mov     rax, [r15+570h]
 * 000000014078B56F: mov     r9d, edx
 * 000000014078B572: mov     [rbp+1C70h+var_1CD8], rax
 * 000000014078B576: mov     eax, [r15+5E0h]
 * 000000014078B57D: mov     dword ptr [rsp+1D70h+Src], eax
 * 000000014078B581: mov     rax, [rcx]
 * 000000014078B584: add     edi, 0FFFFFFF8h
 * 000000014078B587: mov     [rbx], rax
 * 000000014078B58A: add     rcx, 8
 * 000000014078B58E: add     rbx, 8
 * 000000014078B592: sub     r9, r13
 * 000000014078B595: jnz     short loc_14078B581
 * 000000014078B597: test    edi, edi
 * 000000014078B599: jz      short loc_14078B5AA
 * 000000014078B59B: mov     al, [rcx]
 * 000000014078B59D: add     rcx, r13
 * 000000014078B5A0: mov     [rbx], al
 * 000000014078B5A2: add     rbx, r13
 * 000000014078B5A5: add     edi, 0FFFFFFFFh
 * 000000014078B5A8: jnz     short loc_14078B59B
 * 000000014078B5AA: mov     [r15+570h], r9
 * 000000014078B5B1: mov     ecx, 20h ; ' '
 * 000000014078B5B6: mov     [r15+5E0h], r9d
 * 000000014078B5BD: mov     rax, r8
 * 000000014078B5C0: mov     [rax], r9
 * 000000014078B5C3: add     ecx, 0FFFFFFF8h
 * 000000014078B5C6: add     rax, 8
 * 000000014078B5CA: sub     rdx, r13
 * 000000014078B5CD: jnz     short loc_14078B5C0
 * 000000014078B5CF: test    ecx, ecx
 * 000000014078B5D1: jz      short loc_14078B5DE
 * 000000014078B5D3: mov     [rax], r9b
 * 000000014078B5D6: add     rax, r13
 * 000000014078B5D9: add     ecx, 0FFFFFFFFh
 * 000000014078B5DC: jnz     short loc_14078B5D3
 * 000000014078B5DE: mov     eax, [r15+59Ch]
 * 000000014078B5E5: mov     rdi, r15
 * 000000014078B5E8: add     [r15+5E0h], eax
 * 000000014078B5EF: mov     rax, r15
 * 000000014078B5F2: mov     ebx, [r15+59Ch]
 * 000000014078B5F9: mov     r9d, [r15+5CCh]
 * 000000014078B600: mov     rdx, [r15+5D0h]
 * 000000014078B607: lea     rcx, [r15+rbx]
 * 000000014078B60B: cmp     r15, rcx
 * 000000014078B60E: jnb     short loc_14078B61C
 * 000000014078B610: prefetchnta byte ptr [rax]
 * 000000014078B613: add     rax, 40h ; '@'
 * 000000014078B617: cmp     rax, rcx
 * 000000014078B61A: jb      short loc_14078B610
 * 000000014078B61C: cmp     ebx, 8
 * 000000014078B61F: jb      short loc_14078B63D
 * 000000014078B621: mov     rax, rbx
 * 000000014078B624: shr     rax, 3
 * 000000014078B628: xor     rdx, [rdi]
 * 000000014078B62B: mov     ecx, r9d
 * 000000014078B62E: rol     rdx, cl
 * 000000014078B631: add     rdi, 8
 * 000000014078B635: add     ebx, 0FFFFFFF8h
 * 000000014078B638: sub     rax, r13
 * 000000014078B63B: jnz     short loc_14078B628
 * 000000014078B63D: test    ebx, ebx
 * 000000014078B63F: jz      short loc_14078B655
 * 000000014078B641: movzx   eax, byte ptr [rdi]
 * 000000014078B644: mov     ecx, r9d
 * 000000014078B647: xor     rdx, rax
 * 000000014078B64A: add     rdi, r13
 * 000000014078B64D: rol     rdx, cl
 * 000000014078B650: add     ebx, 0FFFFFFFFh
 * 000000014078B653: jnz     short loc_14078B641
 * 000000014078B655: mov     rax, [rbp+1C70h+var_1CD8]
 * 000000014078B659: lea     rcx, [rbp+1C70h+var_C30]
 * 000000014078B660: mov     [r15+570h], rax
 * 000000014078B667: mov     ebx, 20h ; ' '
 * 000000014078B66C: mov     eax, dword ptr [rsp+1D70h+Src]
 * 000000014078B670: add     [r15+5E0h], eax
 * 000000014078B677: lea     r9d, [rbx-1Ch]
 * 000000014078B67B: mov     edi, r9d
 * 000000014078B67E: mov     rax, [rcx]
 * 000000014078B681: add     ebx, 0FFFFFFF8h
 * 000000014078B684: mov     [r8], rax
 * 000000014078B687: add     rcx, 8
 * 000000014078B68B: add     r8, 8
 * 000000014078B68F: sub     rdi, r13
 * 000000014078B692: jnz     short loc_14078B67E
 * 000000014078B694: test    ebx, ebx
 * 000000014078B696: jz      short loc_14078B6A8
 * 000000014078B698: mov     al, [rcx]
 * 000000014078B69A: add     rcx, r13
 * 000000014078B69D: mov     [r8], al
 * 000000014078B6A0: add     r8, r13
 * 000000014078B6A3: add     ebx, 0FFFFFFFFh
 * 000000014078B6A6: jnz     short loc_14078B698
 * 000000014078B6A8: mov     [r15+570h], rdx
 * 000000014078B6AF: test    dword ptr [r15+6D8h], 40000000h
 * 000000014078B6BA: jnz     loc_14078B87D
 * 000000014078B6C0: xor     ebx, ebx
 * 000000014078B6C2: mov     rcx, r15
 * 000000014078B6C5: mov     edx, ebx
 * 000000014078B6C7: xor     [rcx], r11
 * 000000014078B6CA: add     edx, r13d
 * 000000014078B6CD: movsxd  rax, edx
 * 000000014078B6D0: lea     rcx, [rcx+8]
 * 000000014078B6D4: cmp     rax, 19h
 * 000000014078B6D8: jb      short loc_14078B6C7
 * 000000014078B6DA: test    r10d, r10d
 * 000000014078B6DD: jz      short loc_14078B6FB
 * 000000014078B6DF: mov     edx, r10d
 * 000000014078B6E2: dec     rdx
 * 000000014078B6E5: lea     rdx, [rcx+rdx*8]
 * 000000014078B6E9: xor     [rdx], r11
 * 000000014078B6EC: mov     ecx, r10d
 * 000000014078B6EF: ror     r11, cl
 * 000000014078B6F2: lea     rdx, [rdx-8]
 * 000000014078B6F6: sub     r10d, r13d
 * 000000014078B6F9: jnz     short loc_14078B6E9
 * 000000014078B6FB: test    r12d, r12d
 * 000000014078B6FE: jz      short loc_14078B74E
 * 000000014078B700: rdtsc
 * 000000014078B702: shl     rdx, 20h
 * 000000014078B706: mov     r12, 7010008004002001h
 * 000000014078B710: or      rax, rdx
 * 000000014078B713: mov     rcx, rax
 * 000000014078B716: ror     rax, 3
 * 000000014078B71A: xor     rcx, rax
 * 000000014078B71D: mov     rax, r12
 * 000000014078B720: mul     rcx
 * 000000014078B723: mov     rcx, rdx
 * 000000014078B726: mov     [rbp+1C70h+var_1148], rdx
 * 000000014078B72D: xor     rcx, rax
 * 000000014078B730: mov     rax, 0AAAAAAAAAAAAAAABh
 * 000000014078B73A: mul     rcx
 * 000000014078B73D: shr     rdx, 1
 * 000000014078B740: lea     rax, [rdx+rdx*2]
 * 000000014078B744: cmp     rcx, rax
 * 000000014078B747: jz      short loc_14078B757
 * 000000014078B749: jmp     loc_14078B887
 * 000000014078B74E: test    r14d, r14d
 * 000000014078B751: jnz     loc_14078B87D
 * 000000014078B757: mov     r11d, dword ptr [rbp+1C70h+arg_18]
 * 000000014078B75E: mov     r12d, 0Fh
 * 000000014078B764: mov     rsi, [rsp+78h]
 * 000000014078B769: mov     ecx, r15d
 * 000000014078B76C: mov     r14, [rbp+1C70h+var_1CE0]
 * 000000014078B770: mov     rdi, r15
 * 000000014078B773: mov     [rbp+1C70h+var_E92], r9b
 * 000000014078B77A: mov     r8, r15
 * 000000014078B77D: mov     [rbp+1C70h+var_E96], r12b
 * 000000014078B784: mov     r9d, ebx
 * 000000014078B787: ror     rdi, cl
 * 000000014078B78A: mov     r10, rbx
 * 000000014078B78D: mov     [rbp+1C70h+var_E98], bl
 * 000000014078B793: mov     [rbp+1C70h+var_E95], r13b
 * 000000014078B79A: mov     [rbp+1C70h+var_E93], 2
 * 000000014078B7A1: mov     [rbp+1C70h+var_E90], 3
 * 000000014078B7A8: mov     [rbp+1C70h+var_E8F], 5
 * 000000014078B7AF: mov     [rbp+1C70h+var_E8C], 6
 * 000000014078B7B6: mov     [rbp+1C70h+var_E91], 7
 * 000000014078B7BD: mov     [rbp+1C70h+var_E8B], 8
 * 000000014078B7C4: mov     [rbp+1C70h+var_E8E], 9
 * 000000014078B7CB: mov     [rbp+1C70h+var_E8A], 0Ah
 * 000000014078B7D2: mov     [rbp+1C70h+var_E94], 0Bh
 * 000000014078B7D9: mov     [rbp+1C70h+var_E97], 0Ch
 * 000000014078B7E0: mov     [rbp+1C70h+var_E89], 0Dh
 * 000000014078B7E7: mov     [rbp+1C70h+var_E8D], 0Eh
 * 000000014078B7EE: mov     rdx, [r8]
 * 000000014078B7F1: mov     ebx, 10h
 * 000000014078B7F6: movzx   eax, byte ptr [r8]
 * 000000014078B7FA: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 000000014078B7FE: and     rax, r12
 * 000000014078B801: movzx   ecx, [rbp+rax+1C70h+var_E98]
 * 000000014078B809: or      rdx, rcx
 * 000000014078B80C: ror     rdx, 4
 * 000000014078B810: mov     [r8], rdx
 * 000000014078B813: sub     rbx, r13
 * 000000014078B816: jnz     short loc_14078B7F6
 * 000000014078B818: sub     rdx, r10
 * 000000014078B81B: mov     [r8], rdx
 * 000000014078B81E: test    r11d, r11d
 * 000000014078B821: jnz     short loc_14078B839
 * 000000014078B823: xor     rdx, r14
 * 000000014078B826: mov     ecx, esi
 * 000000014078B828: bswap   rdx
 * 000000014078B82B: xor     rdx, rdi
 * 000000014078B82E: ror     rdx, cl
 * 000000014078B831: xor     rdx, rsi
 * 000000014078B834: mov     [r8], rdx
 * 000000014078B837: jmp     short loc_14078B842
 * 000000014078B839: mov     rax, rdi
 * 000000014078B83C: xor     rax, rdx
 * 000000014078B83F: mov     [r8], rax
 * 000000014078B842: mov     ecx, [r8]
 * 000000014078B845: mov     edx, 0C8h
 * 000000014078B84A: sub     edx, r9d
 * 000000014078B84D: not     ecx
 * 000000014078B84F: imul    edx, r9d
 * 000000014078B853: add     r10, r15
 * 000000014078B856: add     r9d, r13d
 * 000000014078B859: ror     rdx, cl
 * 000000014078B85C: mov     ecx, [r8]
 * 000000014078B85F: xor     rdi, rdx
 * 000000014078B862: rol     rdi, cl
 * 000000014078B865: add     r8, 8
 * 000000014078B869: add     rdi, r15
 * 000000014078B86C: cmp     r9d, 19h
 * 000000014078B870: jb      loc_14078B7EE
 * 000000014078B876: mov     rsi, 0FFFFFFFFB8797400h
 * 000000014078B87D: mov     r12, 7010008004002001h
 * 000000014078B887: mov     rcx, [rbp+1C70h+Timer]; Timer
 * 000000014078B88B: call    KeInitializeTimer
 * 000000014078B890: cli
 * 000000014078B891: xor     r9d, r9d
 * 000000014078B894: cmp     byte ptr cs:KdDebuggerNotPresent, r9b
 * 000000014078B89B: jnz     short loc_14078B89F
 * 000000014078B89D: jmp     short loc_14078B89D
 * 000000014078B89F: sti
 * 000000014078B8A0: cmp     [rbp+1C70h+arg_8], 7
 * 000000014078B8A7: jnz     loc_14078C6FD
 * 000000014078B8AD: test    dword ptr [r15+6D8h], 10000000h
 * 000000014078B8B8: mov     edi, 20h ; ' '
 * 000000014078B8BD: mov     ecx, [r15+67Ch]
 * 000000014078B8C4: lea     eax, [rdi-1Eh]
 * 000000014078B8C7: cmovnz  edi, eax
 * 000000014078B8CA: test    ecx, ecx
 * 000000014078B8CC: jz      short loc_14078B8E6
 * 000000014078B8CE: mov     rax, [r15+580h]
 * 000000014078B8D5: mov     r8d, edi
 * 000000014078B8D8: mov     rdx, [rax]
 * 000000014078B8DB: lea     rcx, [rax-8]
 * 000000014078B8DF: call    MmSetPageProtection
 * 000000014078B8E4: jmp     short loc_14078B907
 * 000000014078B8E6: mov     rbx, [r15+580h]
 * 000000014078B8ED: lea     rdx, [rbp+1C70h+QuotaCharged]; QuotaCharged
 * 000000014078B8F1: mov     rcx, rbx; PoolBlock
 * 000000014078B8F4: call    ExQueryPoolBlockSize
 * 000000014078B8F9: mov     r8d, edi
 * 000000014078B8FC: mov     rdx, rax
 * 000000014078B8FF: mov     rcx, rbx
 * 000000014078B902: call    ExProtectPool
 * 000000014078B907: xor     r11d, r11d
 * 000000014078B90A: lea     r9, dword_1402F9BF0
 * 000000014078B911: mov     r8d, r11d
 * 000000014078B914: mov     rsi, 2E8BA2E8BA2E8BA3h
 * 000000014078B91E: lea     r10d, [r11+4]
 * 000000014078B922: lea     r15d, [r11+6]
 * 000000014078B926: lea     r14d, [r11+5]
 * 000000014078B92A: rdtsc
 * 000000014078B92C: shl     rdx, 20h
 * 000000014078B930: or      rax, rdx
 * 000000014078B933: mov     rcx, rax
 * 000000014078B936: ror     rax, 3
 * 000000014078B93A: xor     rcx, rax
 * 000000014078B93D: mov     rax, r12
 * 000000014078B940: mul     rcx
 * 000000014078B943: mov     rcx, rdx
 * 000000014078B946: mov     [rbp+1C70h+var_1140], rdx
 * 000000014078B94D: xor     rcx, rax
 * 000000014078B950: mov     rax, rsi
 * 000000014078B953: mul     rcx
 * 000000014078B956: shr     rdx, 1
 * 000000014078B959: imul    rax, rdx, 0Bh
 * 000000014078B95D: sub     rcx, rax
 * 000000014078B960: cmp     ecx, r14d
 * 000000014078B963: ja      loc_14078BA14
 * 000000014078B969: jz      loc_14078B9FC
 * 000000014078B96F: test    ecx, ecx
 * 000000014078B971: jz      short loc_14078B9E4
 * 000000014078B973: sub     ecx, 1
 * 000000014078B976: jz      short loc_14078B9CD
 * 000000014078B978: sub     ecx, 1
 * 000000014078B97B: jz      short loc_14078B9B5
 * 000000014078B97D: cmp     ecx, 1
 * 000000014078B980: jz      short loc_14078B99A
 * 000000014078B982: mov     [rbp+1C70h+var_19BC], 67076494h
 * 000000014078B98C: mov     edi, [rbp+1C70h+var_19BC]
 * 000000014078B992: rol     edi, 4
 * 000000014078B995: jmp     loc_14078BB1C
 * 000000014078B99A: mov     [rbp+1C70h+var_19B8], 0A8223938h
 * 000000014078B9A4: mov     edi, [rbp+1C70h+var_19B8]
 * 000000014078B9AA: xor     edi, 3
 * 000000014078B9AD: ror     edi, 0Fh
 * 000000014078B9B0: jmp     loc_14078BB1C
 * 000000014078B9B5: mov     [rbp+1C70h+var_19B4], 85B5910Dh
 * 000000014078B9BF: mov     edi, [rbp+1C70h+var_19B4]
 * 000000014078B9C5: ror     edi, 2
 * 000000014078B9C8: jmp     loc_14078BB1C
 * 000000014078B9CD: mov     [rbp+1C70h+var_1940], 0B2AD31A1h
 * 000000014078B9D7: mov     edi, [rbp+1C70h+var_1940]
 * 000000014078B9DD: rol     edi, 1
 * 000000014078B9DF: jmp     loc_14078BB1C
 * 000000014078B9E4: mov     [rbp+1C70h+var_19AC], 0D098D0D8h
 * 000000014078B9EE: mov     edi, [rbp+1C70h+var_19AC]
 * 000000014078B9F4: ror     edi, 6
 * 000000014078B9F7: jmp     loc_14078BB1C
 * 000000014078B9FC: mov     [rbp+1C70h+var_19A8], 288C49EDh
 * 000000014078BA06: mov     edi, [rbp+1C70h+var_19A8]
 * 000000014078BA0C: ror     edi, 5
 * 000000014078BA0F: jmp     loc_14078BB1C
 * 000000014078BA14: sub     ecx, r15d
 * 000000014078BA17: jz      loc_14078BB06
 * 000000014078BA1D: sub     ecx, 1
 * 000000014078BA20: jz      loc_14078BAF1
 * 000000014078BA26: sub     ecx, 1
 * 000000014078BA29: jz      loc_14078BADC
 * 000000014078BA2F: cmp     ecx, 1
 * 000000014078BA32: jz      loc_14078BAC4
 * 000000014078BA38: rdtsc
 * 000000014078BA3A: shl     rdx, 20h
 * 000000014078BA3E: mov     ebx, 4EC4EC4Fh
 * 000000014078BA43: or      rax, rdx
 * 000000014078BA46: mov     rcx, rax
 * 000000014078BA49: ror     rax, 3
 * 000000014078BA4D: xor     rcx, rax
 * 000000014078BA50: mov     rax, r12
 * 000000014078BA53: mul     rcx
 * 000000014078BA56: mov     rdi, rax
 * 000000014078BA59: mov     [rbp+1C70h+var_1138], rdx
 * 000000014078BA60: xor     edi, edx
 * 000000014078BA62: mov     eax, ebx
 * 000000014078BA64: mul     edi
 * 000000014078BA66: mov     ecx, edi
 * 000000014078BA68: shr     edi, 5
 * 000000014078BA6B: shr     edx, 3
 * 000000014078BA6E: imul    eax, edx, 1Ah
 * 000000014078BA71: sub     ecx, eax
 * 000000014078BA73: mov     eax, ebx
 * 000000014078BA75: mul     edi
 * 000000014078BA77: add     ecx, 61h ; 'a'
 * 000000014078BA7A: mov     ebx, edi
 * 000000014078BA7C: shl     ecx, 8
 * 000000014078BA7F: shr     edx, 3
 * 000000014078BA82: imul    eax, edx, 1Ah
 * 000000014078BA85: shr     edi, 5
 * 000000014078BA88: sub     ebx, eax
 * 000000014078BA8A: mov     eax, 4EC4EC4Fh
 * 000000014078BA8F: mul     edi
 * 000000014078BA91: add     ebx, 41h ; 'A'
 * 000000014078BA94: or      ebx, ecx
 * 000000014078BA96: shr     edx, 3
 * 000000014078BA99: imul    eax, edx, 1Ah
 * 000000014078BA9C: mov     ecx, edi
 * 000000014078BA9E: shr     edi, 5
 * 000000014078BAA1: shl     ebx, 8
 * 000000014078BAA4: sub     ecx, eax
 * 000000014078BAA6: mov     eax, 4EC4EC4Fh
 * 000000014078BAAB: mul     edi
 * 000000014078BAAD: add     ecx, 61h ; 'a'
 * 000000014078BAB0: shr     edx, 3
 * 000000014078BAB3: or      ecx, ebx
 * 000000014078BAB5: imul    eax, edx, 1Ah
 * 000000014078BAB8: shl     ecx, 8
 * 000000014078BABB: sub     edi, eax
 * 000000014078BABD: add     edi, 41h ; 'A'
 * 000000014078BAC0: or      edi, ecx
 * 000000014078BAC2: jmp     short loc_14078BB1C
 * 000000014078BAC4: mov     [rbp+1C70h+var_19A4], 0B0869E85h
 * 000000014078BACE: mov     edi, [rbp+1C70h+var_19A4]
 * 000000014078BAD4: xor     edi, 9
 * 000000014078BAD7: ror     edi, 21h
 * 000000014078BADA: jmp     short loc_14078BB1C
 * 000000014078BADC: mov     [rbp+1C70h+var_19A0], 64664142h
 * 000000014078BAE6: mov     edi, [rbp+1C70h+var_19A0]
 * 000000014078BAEC: ror     edi, 8
 * 000000014078BAEF: jmp     short loc_14078BB1C
 * 000000014078BAF1: mov     [rbp+1C70h+var_199C], 82C6A6D8h
 * 000000014078BAFB: mov     edi, [rbp+1C70h+var_199C]
 * 000000014078BB01: rol     edi, 7
 * 000000014078BB04: jmp     short loc_14078BB1C
 * 000000014078BB06: mov     [rbp+1C70h+var_1998], 4E574672h
 * 000000014078BB10: mov     edi, [rbp+1C70h+var_1998]
 * 000000014078BB16: xor     edi, r15d
 * 000000014078BB19: ror     edi, 18h
 * 000000014078BB1C: mov     [r9], edi
 * 000000014078BB1F: add     r8d, r13d
 * 000000014078BB22: add     r9, r10
 * 000000014078BB25: cmp     r8d, 10h
 * 000000014078BB29: jb      loc_14078B92A
 * 000000014078BB2F: mov     r15, [rbp+1C70h+var_1CD0]
 * 000000014078BB33: mov     rsi, 0FFFFFFFFB8797400h
 * 000000014078BB3A: mov     rdi, r15
 * 000000014078BB3D: mov     rax, r15
 * 000000014078BB40: mov     ebx, [r15+59Ch]
 * 000000014078BB47: mov     r9d, [r15+5CCh]
 * 000000014078BB4E: mov     rdx, [r15+5D0h]
 * 000000014078BB55: lea     rcx, [r15+rbx]
 * 000000014078BB59: cmp     r15, rcx
 * 000000014078BB5C: jnb     short loc_14078BB6A
 * 000000014078BB5E: prefetchnta byte ptr [rax]
 * 000000014078BB61: add     rax, 40h ; '@'
 * 000000014078BB65: cmp     rax, rcx
 * 000000014078BB68: jb      short loc_14078BB5E
 * 000000014078BB6A: cmp     ebx, 8
 * 000000014078BB6D: jb      short loc_14078BB8B
 * 000000014078BB6F: mov     r8, rbx
 * 000000014078BB72: shr     r8, 3
 * 000000014078BB76: xor     rdx, [rdi]
 * 000000014078BB79: mov     ecx, r9d
 * 000000014078BB7C: rol     rdx, cl
 * 000000014078BB7F: add     rdi, 8
 * 000000014078BB83: add     ebx, 0FFFFFFF8h
 * 000000014078BB86: sub     r8, r13
 * 000000014078BB89: jnz     short loc_14078BB76
 * 000000014078BB8B: test    ebx, ebx
 * 000000014078BB8D: jz      short loc_14078BBA3
 * 000000014078BB8F: movzx   eax, byte ptr [rdi]
 * 000000014078BB92: mov     ecx, r9d
 * 000000014078BB95: xor     rdx, rax
 * 000000014078BB98: add     rdi, r13
 * 000000014078BB9B: rol     rdx, cl
 * 000000014078BB9E: add     ebx, 0FFFFFFFFh
 * 000000014078BBA1: jnz     short loc_14078BB8F
 * 000000014078BBA3: mov     cs:qword_1403AA208, rdx
 * 000000014078BBAA: lea     rax, [rbp+1C70h+var_1020]
 * 000000014078BBB1: xor     edx, edx
 * 000000014078BBB3: mov     dword ptr [rbp+1C70h+arg_18], r10d
 * 000000014078BBBA: mov     [rbp+1C70h+var_1028], rdx
 * 000000014078BBC1: mov     r12d, r10d
 * 000000014078BBC4: mov     ecx, r10d
 * 000000014078BBC7: mov     [rax], dl
 * 000000014078BBC9: add     rax, r13
 * 000000014078BBCC: add     ecx, 0FFFFFFFFh
 * 000000014078BBCF: jnz     short loc_14078BBC7
 * 000000014078BBD1: cmp     [r15+5C4h], edx
 * 000000014078BBD8: jbe     loc_14078BE1B
 * 000000014078BBDE: mov     r8d, [rbp+1C70h+var_1020]
 * 000000014078BBE5: mov     r10d, dword ptr [rbp+1C70h+var_1028+4]
 * 000000014078BBEC: mov     r14d, dword ptr [rbp+1C70h+var_1028]
 * 000000014078BBF3: mov     rax, [r15+778h]
 * 000000014078BBFA: mov     r9, r15
 * 000000014078BBFD: test    rax, rax
 * 000000014078BC00: mov     edi, edx
 * 000000014078BC02: cmovnz  r9, rax
 * 000000014078BC06: mov     [rbp+1C70h+Timer], r9
 * 000000014078BC0A: mov     ebx, [r9+5C0h]
 * 000000014078BC11: add     rbx, r9
 * 000000014078BC14: test    r14d, r14d
 * 000000014078BC17: jz      short loc_14078BC27
 * 000000014078BC19: cmp     r10d, r11d
 * 000000014078BC1C: ja      short loc_14078BC27
 * 000000014078BC1E: mov     ebx, r8d
 * 000000014078BC21: mov     edi, r10d
 * 000000014078BC24: add     rbx, r9
 * 000000014078BC27: cmp     edi, r11d
 * 000000014078BC2A: jz      loc_14078BD49
 * 000000014078BC30: mov     eax, r11d
 * 000000014078BC33: mov     r12d, 2
 * 000000014078BC39: sub     eax, edi
 * 000000014078BC3B: mov     r9, 0AAAAAAAAAAAAAAABh
 * 000000014078BC45: mov     r8d, eax
 * 000000014078BC48: add     edi, eax
 * 000000014078BC4A: mov     ecx, [rbx]
 * 000000014078BC4C: cmp     ecx, 11h
 * 000000014078BC4F: jg      short loc_14078BCBE
 * 000000014078BC51: jz      loc_14078BD29
 * 000000014078BC57: sub     ecx, 1
 * 000000014078BC5A: jz      short loc_14078BCA8
 * 000000014078BC5C: sub     ecx, 6
 * 000000014078BC5F: jz      short loc_14078BC97
 * 000000014078BC61: sub     ecx, 1
 * 000000014078BC64: jz      short loc_14078BC88
 * 000000014078BC66: sub     ecx, r12d
 * 000000014078BC69: jz      short loc_14078BC7A
 * 000000014078BC6B: cmp     ecx, r12d
 * 000000014078BC6E: jz      short loc_14078BCA8
 * 000000014078BC70: mov     eax, 30h ; '0'
 * 000000014078BC75: jmp     loc_14078BD2E
 * 000000014078BC7A: mov     eax, [rbx+1Ch]
 * 000000014078BC7D: add     eax, 3
 * 000000014078BC80: shl     eax, 4
 * 000000014078BC83: jmp     loc_14078BD2E
 * 000000014078BC88: movzx   eax, word ptr [rbx+20h]
 * 000000014078BC8C: add     eax, 37h ; '7'
 * 000000014078BC8F: and     eax, 0FFFFFFF8h
 * 000000014078BC92: jmp     loc_14078BD2E
 * 000000014078BC97: mov     eax, [rbx+18h]
 * 000000014078BC9A: add     eax, r12d
 * 000000014078BC9D: lea     eax, [rax+rax*2]
 * 000000014078BCA0: shl     eax, 3
 * 000000014078BCA3: jmp     loc_14078BD2E
 * 000000014078BCA8: mov     ecx, [rbx+10h]
 * 000000014078BCAB: mov     rax, r9
 * 000000014078BCAE: mul     rcx
 * 000000014078BCB1: shr     rdx, 3
 * 000000014078BCB5: lea     eax, ds:30h[rdx*4]
 * 000000014078BCBC: jmp     short loc_14078BD2E
 * 000000014078BCBE: cmp     ecx, 13h
 * 000000014078BCC1: jz      short loc_14078BD29
 * 000000014078BCC3: cmp     ecx, 1Ch
 * 000000014078BCC6: jz      short loc_14078BD20
 * 000000014078BCC8: cmp     ecx, 1Eh
 * 000000014078BCCB: jz      short loc_14078BCFB
 * 000000014078BCCD: lea     eax, [rcx-21h]
 * 000000014078BCD0: cmp     eax, r13d
 * 000000014078BCD3: ja      short loc_14078BC70
 * 000000014078BCD5: mov     ecx, [rbx+20h]
 * 000000014078BCD8: mov     edx, [rbx+28h]
 * 000000014078BCDB: and     ecx, 0FFFh
 * 000000014078BCE1: add     rdx, 0FFFh
 * 000000014078BCE8: add     rdx, rcx
 * 000000014078BCEB: shr     rdx, 0Ch
 * 000000014078BCEF: lea     eax, [rdx+rdx*4]
 * 000000014078BCF2: lea     eax, ds:30h[rax*4]
 * 000000014078BCF9: jmp     short loc_14078BD2E
 * 000000014078BCFB: mov     ecx, [rbx+24h]
 * 000000014078BCFE: mov     rax, r9
 * 000000014078BD01: sub     ecx, r13d
 * 000000014078BD04: mul     rcx
 * 000000014078BD07: movzx   eax, word ptr [rbx+28h]
 * 000000014078BD0B: shr     rdx, 3
 * 000000014078BD0F: add     edx, 7
 * 000000014078BD12: and     edx, 0FFFFFFF8h
 * 000000014078BD15: add     eax, r12d
 * 000000014078BD18: lea     eax, [rax+rax*2]
 * 000000014078BD1B: lea     eax, [rdx+rax*8]
 * 000000014078BD1E: jmp     short loc_14078BD2E
 * 000000014078BD20: movzx   eax, word ptr [rbx+28h]
 * 000000014078BD24: jmp     loc_14078BC8C
 * 000000014078BD29: mov     eax, 38h ; '8'
 * 000000014078BD2E: add     rbx, rax
 * 000000014078BD31: sub     r8, r13
 * 000000014078BD34: jnz     loc_14078BC4A
 * 000000014078BD3A: mov     r15, [rbp+1C70h+var_1CD0]
 * 000000014078BD3E: mov     r9, [rbp+1C70h+Timer]
 * 000000014078BD42: mov     r12d, dword ptr [rbp+1C70h+arg_18]
 * 000000014078BD49: mov     r8d, ebx
 * 000000014078BD4C: mov     dword ptr [rbp+1C70h+var_1028], r13d
 * 000000014078BD53: sub     r8d, r9d
 * 000000014078BD56: mov     dword ptr [rbp+1C70h+var_1028+4], edi
 * 000000014078BD5C: mov     [rbp+1C70h+var_1020], r8d
 * 000000014078BD63: mov     r14d, r13d
 * 000000014078BD66: movsxd  rcx, dword ptr [rbx]
 * 000000014078BD69: mov     r10d, edi
 * 000000014078BD6C: cmp     ecx, 26h ; '&'
 * 000000014078BD6F: ja      short loc_14078BD95
 * 000000014078BD71: mov     rdx, 400020020Ch
 * 000000014078BD7B: bt      rdx, rcx
 * 000000014078BD7F: jnb     short loc_14078BD95
 * 000000014078BD81: add     r12d, r13d
 * 000000014078BD84: mov     dword ptr [rbp+1C70h+arg_18], r12d
 * 000000014078BD8B: cmp     ecx, 2
 * 000000014078BD8E: jnz     short loc_14078BE02
 * 000000014078BD90: add     r12d, r13d
 * 000000014078BD93: jmp     short loc_14078BDFB
 * 000000014078BD95: mov     eax, 20h ; ' '
 * 000000014078BD9A: cmp     ecx, eax
 * 000000014078BD9C: jnz     short loc_14078BDAA
 * 000000014078BD9E: mov     eax, [rbx+28h]
 * 000000014078BDA1: test    al, 2
 * 000000014078BDA3: jnz     short loc_14078BDAA
 * 000000014078BDA5: test    r13b, al
 * 000000014078BDA8: jnz     short loc_14078BD90
 * 000000014078BDAA: cmp     ecx, 7
 * 000000014078BDAD: jnz     short loc_14078BDB5
 * 000000014078BDAF: add     r12d, [rbx+18h]
 * 000000014078BDB3: jmp     short loc_14078BDFB
 * 000000014078BDB5: cmp     ecx, 21h ; '!'
 * 000000014078BDB8: jnz     short loc_14078BE02
 * 000000014078BDBA: mov     rcx, [rbx+20h]
 * 000000014078BDBE: mov     eax, [rbx+28h]
 * 000000014078BDC1: and     ecx, 0FFFh
 * 000000014078BDC7: add     rcx, 0FFFh
 * 000000014078BDCE: add     rbx, 30h ; '0'
 * 000000014078BDD2: add     rax, rcx
 * 000000014078BDD5: shr     rax, 0Ch
 * 000000014078BDD9: mov     eax, eax
 * 000000014078BDDB: lea     rcx, [rax+rax*4]
 * 000000014078BDDF: lea     rdx, [rbx+rcx*4]
 * 000000014078BDE3: cmp     rbx, rdx
 * 000000014078BDE6: jz      short loc_14078BE02
 * 000000014078BDE8: mov     al, [rbx+0Fh]
 * 000000014078BDEB: test    al, al
 * 000000014078BDED: js      short loc_14078BDF2
 * 000000014078BDEF: add     r12d, r13d
 * 000000014078BDF2: add     rbx, 14h
 * 000000014078BDF6: cmp     rbx, rdx
 * 000000014078BDF9: jnz     short loc_14078BDE8
 * 000000014078BDFB: mov     dword ptr [rbp+1C70h+arg_18], r12d
 * 000000014078BE02: add     r11d, r13d
 * 000000014078BE05: mov     edx, 0
 * 000000014078BE0A: cmp     r11d, [r15+5C4h]
 * 000000014078BE11: jb      loc_14078BBF3
 * 000000014078BE17: lea     r14d, [rdx+5]
 * 000000014078BE1B: rdtsc
 * 000000014078BE1D: shl     rdx, 20h
 * 000000014078BE21: mov     rbx, 7010008004002001h
 * 000000014078BE2B: or      rax, rdx
 * 000000014078BE2E: mov     rcx, rax
 * 000000014078BE31: ror     rax, 3
 * 000000014078BE35: xor     rcx, rax
 * 000000014078BE38: mov     rax, rbx
 * 000000014078BE3B: mul     rcx
 * 000000014078BE3E: mov     rcx, rdx
 * 000000014078BE41: mov     [rbp+1C70h+var_1130], rdx
 * 000000014078BE48: xor     rcx, rax
 * 000000014078BE4B: mov     rax, 2E8BA2E8BA2E8BA3h
 * 000000014078BE55: mul     rcx
 * 000000014078BE58: shr     rdx, 1
 * 000000014078BE5B: imul    rax, rdx, 0Bh
 * 000000014078BE5F: sub     rcx, rax
 * 000000014078BE62: cmp     ecx, r14d
 * 000000014078BE65: ja      loc_14078BF16
 * 000000014078BE6B: jz      loc_14078BEFE
 * 000000014078BE71: test    ecx, ecx
 * 000000014078BE73: jz      short loc_14078BEE6
 * 000000014078BE75: sub     ecx, 1
 * 000000014078BE78: jz      short loc_14078BECF
 * 000000014078BE7A: sub     ecx, 1
 * 000000014078BE7D: jz      short loc_14078BEB7
 * 000000014078BE7F: cmp     ecx, 1
 * 000000014078BE82: jz      short loc_14078BE9C
 * 000000014078BE84: mov     [rbp+1C70h+var_1994], 67076494h
 * 000000014078BE8E: mov     edi, [rbp+1C70h+var_1994]
 * 000000014078BE94: rol     edi, 4
 * 000000014078BE97: jmp     loc_14078C020
 * 000000014078BE9C: mov     [rbp+1C70h+var_1990], 0A8223938h
 * 000000014078BEA6: mov     edi, [rbp+1C70h+var_1990]
 * 000000014078BEAC: xor     edi, 3
 * 000000014078BEAF: ror     edi, 0Fh
 * 000000014078BEB2: jmp     loc_14078C020
 * 000000014078BEB7: mov     [rbp+1C70h+var_198C], 85B5910Dh
 * 000000014078BEC1: mov     edi, [rbp+1C70h+var_198C]
 * 000000014078BEC7: ror     edi, 2
 * 000000014078BECA: jmp     loc_14078C020
 * 000000014078BECF: mov     [rbp+1C70h+var_1988], 0B2AD31A1h
 * 000000014078BED9: mov     edi, [rbp+1C70h+var_1988]
 * 000000014078BEDF: rol     edi, 1
 * 000000014078BEE1: jmp     loc_14078C020
 * 000000014078BEE6: mov     [rbp+1C70h+var_1984], 0D098D0D8h
 * 000000014078BEF0: mov     edi, [rbp+1C70h+var_1984]
 * 000000014078BEF6: ror     edi, 6
 * 000000014078BEF9: jmp     loc_14078C020
 * 000000014078BEFE: mov     [rbp+1C70h+var_1980], 288C49EDh
 * 000000014078BF08: mov     edi, [rbp+1C70h+var_1980]
 * 000000014078BF0E: ror     edi, 5
 * 000000014078BF11: jmp     loc_14078C020
 * 000000014078BF16: mov     edx, 6
 * 000000014078BF1B: sub     ecx, edx
 * 000000014078BF1D: jz      loc_14078C00B
 * 000000014078BF23: sub     ecx, 1
 * 000000014078BF26: jz      loc_14078BFF6
 * 000000014078BF2C: sub     ecx, 1
 * 000000014078BF2F: jz      loc_14078BFE1
 * 000000014078BF35: cmp     ecx, 1
 * 000000014078BF38: jz      loc_14078BFC9
 * 000000014078BF3E: rdtsc
 * 000000014078BF40: shl     rdx, 20h
 * 000000014078BF44: mov     r8d, 4EC4EC4Fh
 * 000000014078BF4A: or      rax, rdx
 * 000000014078BF4D: mov     rcx, rax
 * 000000014078BF50: ror     rax, 3
 * 000000014078BF54: xor     rcx, rax
 * 000000014078BF57: mov     rax, rbx
 * 000000014078BF5A: mul     rcx
 * 000000014078BF5D: mov     rdi, rax
 * 000000014078BF60: mov     [rbp+1C70h+var_1128], rdx
 * 000000014078BF67: xor     edi, edx
 * 000000014078BF69: mov     eax, r8d
 * 000000014078BF6C: mul     edi
 * 000000014078BF6E: mov     ecx, edi
 * 000000014078BF70: shr     edi, 5
 * 000000014078BF73: shr     edx, 3
 * 000000014078BF76: mov     ebx, edi
 * 000000014078BF78: imul    eax, edx, 1Ah
 * 000000014078BF7B: sub     ecx, eax
 * 000000014078BF7D: mov     eax, r8d
 * 000000014078BF80: mul     edi
 * 000000014078BF82: add     ecx, 61h ; 'a'
 * 000000014078BF85: shr     edi, 5
 * 000000014078BF88: shl     ecx, 8
 * 000000014078BF8B: shr     edx, 3
 * 000000014078BF8E: imul    eax, edx, 1Ah
 * 000000014078BF91: sub     ebx, eax
 * 000000014078BF93: mov     eax, r8d
 * 000000014078BF96: mul     edi
 * 000000014078BF98: add     ebx, 41h ; 'A'
 * 000000014078BF9B: or      ebx, ecx
 * 000000014078BF9D: shr     edx, 3
 * 000000014078BFA0: imul    eax, edx, 1Ah
 * 000000014078BFA3: mov     ecx, edi
 * 000000014078BFA5: shr     edi, 5
 * 000000014078BFA8: shl     ebx, 8
 * 000000014078BFAB: sub     ecx, eax
 * 000000014078BFAD: mov     eax, r8d
 * 000000014078BFB0: mul     edi
 * 000000014078BFB2: add     ecx, 61h ; 'a'
 * 000000014078BFB5: shr     edx, 3
 * 000000014078BFB8: or      ecx, ebx
 * 000000014078BFBA: imul    eax, edx, 1Ah
 * 000000014078BFBD: shl     ecx, 8
 * 000000014078BFC0: sub     edi, eax
 * 000000014078BFC2: add     edi, 41h ; 'A'
 * 000000014078BFC5: or      edi, ecx
 * 000000014078BFC7: jmp     short loc_14078C020
 * 000000014078BFC9: mov     [rbp+1C70h+var_197C], 0B0869E85h
 * 000000014078BFD3: mov     edi, [rbp+1C70h+var_197C]
 * 000000014078BFD9: xor     edi, 9
 * 000000014078BFDC: ror     edi, 21h
 * 000000014078BFDF: jmp     short loc_14078C020
 * 000000014078BFE1: mov     [rbp+1C70h+var_1978], 64664142h
 * 000000014078BFEB: mov     edi, [rbp+1C70h+var_1978]
 * 000000014078BFF1: ror     edi, 8
 * 000000014078BFF4: jmp     short loc_14078C020
 * 000000014078BFF6: mov     [rbp+1C70h+var_1974], 82C6A6D8h
 * 000000014078C000: mov     edi, [rbp+1C70h+var_1974]
 * 000000014078C006: rol     edi, 7
 * 000000014078C009: jmp     short loc_14078C020
 * 000000014078C00B: mov     [rbp+1C70h+var_1970], 4E574672h
 * 000000014078C015: mov     edi, [rbp+1C70h+var_1970]
 * 000000014078C01B: xor     edi, edx
 * 000000014078C01D: ror     edi, 18h
 * 000000014078C020: mov     ebx, r12d
 * 000000014078C023: mov     r8d, edi
 * 000000014078C026: shl     rbx, 6
 * 000000014078C02A: mov     ecx, 200h
 * 000000014078C02F: mov     rdx, rbx
 * 000000014078C032: mov     [rbp+1C70h+Timer], rbx
 * 000000014078C036: call    qword ptr [r15+0E0h]
 * 000000014078C03D: mov     r14, rax
 * 000000014078C040: xor     eax, eax
 * 000000014078C042: test    r14, r14
 * 000000014078C045: jz      loc_14077C9F7
 * 000000014078C04B: mov     r8, rbx; Size
 * 000000014078C04E: xor     edx, edx; Val
 * 000000014078C050: mov     rcx, r14; void *
 * 000000014078C053: call    memset
 * 000000014078C058: rdtsc
 * 000000014078C05A: shl     rdx, 20h
 * 000000014078C05E: mov     rdi, 7010008004002001h
 * 000000014078C068: or      rax, rdx
 * 000000014078C06B: mov     rcx, rax
 * 000000014078C06E: ror     rax, 3
 * 000000014078C072: xor     rcx, rax
 * 000000014078C075: mov     rax, rdi
 * 000000014078C078: mul     rcx
 * 000000014078C07B: xor     ecx, ecx
 * 000000014078C07D: mov     rbx, rdx
 * 000000014078C080: mov     [rbp+1C70h+var_1120], rdx
 * 000000014078C087: xor     rbx, rax
 * 000000014078C08A: call    ExGenRandom
 * 000000014078C08F: mov     eax, eax
 * 000000014078C091: xor     rax, rbx
 * 000000014078C094: mov     [rbp+1C70h+var_1118], rax
 * 000000014078C09B: rdtsc
 * 000000014078C09D: shl     rdx, 20h
 * 000000014078C0A1: or      rax, rdx
 * 000000014078C0A4: mov     rcx, rax
 * 000000014078C0A7: ror     rax, 3
 * 000000014078C0AB: xor     rcx, rax
 * 000000014078C0AE: mov     rax, rdi
 * 000000014078C0B1: mul     rcx
 * 000000014078C0B4: xor     ecx, ecx
 * 000000014078C0B6: mov     rbx, rdx
 * 000000014078C0B9: mov     [rbp+1C70h+var_1110], rdx
 * 000000014078C0C0: xor     rbx, rax
 * 000000014078C0C3: call    ExGenRandom
 * 000000014078C0C8: mov     ecx, eax
 * 000000014078C0CA: mov     rax, 410410410410411h
 * 000000014078C0D4: xor     rcx, rbx
 * 000000014078C0D7: xor     ebx, ebx
 * 000000014078C0D9: mul     rcx
 * 000000014078C0DC: mov     rax, rcx
 * 000000014078C0DF: sub     rax, rdx
 * 000000014078C0E2: shr     rax, 1
 * 000000014078C0E5: add     rax, rdx
 * 000000014078C0E8: shr     rax, 5
 * 000000014078C0EC: imul    rax, 3Fh ; '?'
 * 000000014078C0F0: sub     rcx, rax
 * 000000014078C0F3: mov     eax, 1000h
 * 000000014078C0F8: add     ecx, r13d
 * 000000014078C0FB: mov     [rbp+1C70h+var_196C], ecx
 * 000000014078C101: mov     [r14+8], rbx
 * 000000014078C105: mov     [r14+10h], rbx
 * 000000014078C109: mov     [r14+18h], ax
 * 000000014078C10E: mov     rax, [rbp+1C70h+var_1118]
 * 000000014078C115: mov     [r14+20h], rax
 * 000000014078C119: mov     eax, [rbp+1C70h+var_196C]
 * 000000014078C11F: mov     [r14+28h], eax
 * 000000014078C123: mov     [r14+2Ch], ebx
 * 000000014078C127: call    MmStrongCodeGuaranteesEnforced
 * 000000014078C12C: test    eax, eax
 * 000000014078C12E: jz      short loc_14078C13D
 * 000000014078C130: call    sub_14078E00C
 * 000000014078C135: test    eax, eax
 * 000000014078C137: jz      short loc_14078C13D
 * 000000014078C139: or      [r14+2Ch], r13d
 * 000000014078C13D: mov     r12d, r13d
 * 000000014078C140: mov     [rbp+1C70h+var_1028], rbx
 * 000000014078C147: lea     rax, [rbp+1C70h+var_1020]
 * 000000014078C14E: mov     ecx, 4
 * 000000014078C153: mov     [rax], bl
 * 000000014078C155: add     rax, r13
 * 000000014078C158: add     ecx, 0FFFFFFFFh
 * 000000014078C15B: jnz     short loc_14078C153
 * 000000014078C15D: mov     [rbp+1C70h+var_1968], ebx
 * 000000014078C163: mov     r11, rbx
 * 000000014078C166: mov     r10, rbx
 * 000000014078C169: mov     [rbp+1C70h+var_1CE0], rbx
 * 000000014078C16D: mov     ecx, ebx
 * 000000014078C16F: mov     [rsp+78h], rbx
 * 000000014078C174: mov     edi, 1001h
 * 000000014078C179: mov     dword ptr [rsp+1D70h+Src], ebx
 * 000000014078C17D: mov     dword ptr [rsp+1D70h+var_1D08], ebx
 * 000000014078C181: cmp     [r15+5C4h], ebx
 * 000000014078C188: jbe     loc_14078C535
 * 000000014078C18E: mov     rax, [r15+778h]
 * 000000014078C195: mov     r8, r15
 * 000000014078C198: test    rax, rax
 * 000000014078C19B: cmovnz  r8, rax
 * 000000014078C19F: xor     eax, eax
 * 000000014078C1A1: mov     edi, [r8+5C0h]
 * 000000014078C1A8: add     rdi, r8
 * 000000014078C1AB: cmp     dword ptr [rbp+1C70h+var_1028], eax
 * 000000014078C1B1: jz      short loc_14078C1CA
 * 000000014078C1B3: cmp     dword ptr [rbp+1C70h+var_1028+4], ecx
 * 000000014078C1B9: ja      short loc_14078C1CA
 * 000000014078C1BB: mov     edi, [rbp+1C70h+var_1020]
 * 000000014078C1C1: mov     ebx, dword ptr [rbp+1C70h+var_1028+4]
 * 000000014078C1C7: add     rdi, r8
 * 000000014078C1CA: cmp     ebx, ecx
 * 000000014078C1CC: jz      loc_14078C2EA
 * 000000014078C1D2: mov     eax, ecx
 * 000000014078C1D4: mov     rsi, 0AAAAAAAAAAAAAAABh
 * 000000014078C1DE: sub     eax, ebx
 * 000000014078C1E0: mov     r15d, 2
 * 000000014078C1E6: mov     r9d, eax
 * 000000014078C1E9: add     ebx, eax
 * 000000014078C1EB: mov     ecx, [rdi]
 * 000000014078C1ED: cmp     ecx, 11h
 * 000000014078C1F0: jg      short loc_14078C25F
 * 000000014078C1F2: jz      loc_14078C2CA
 * 000000014078C1F8: sub     ecx, 1
 * 000000014078C1FB: jz      short loc_14078C249
 * 000000014078C1FD: sub     ecx, 6
 * 000000014078C200: jz      short loc_14078C238
 * 000000014078C202: sub     ecx, 1
 * 000000014078C205: jz      short loc_14078C229
 * 000000014078C207: sub     ecx, r15d
 * 000000014078C20A: jz      short loc_14078C21B
 * 000000014078C20C: cmp     ecx, r15d
 * 000000014078C20F: jz      short loc_14078C249
 * 000000014078C211: mov     eax, 30h ; '0'
 * 000000014078C216: jmp     loc_14078C2CF
 * 000000014078C21B: mov     eax, [rdi+1Ch]
 * 000000014078C21E: add     eax, 3
 * 000000014078C221: shl     eax, 4
 * 000000014078C224: jmp     loc_14078C2CF
 * 000000014078C229: movzx   eax, word ptr [rdi+20h]
 * 000000014078C22D: add     eax, 37h ; '7'
 * 000000014078C230: and     eax, 0FFFFFFF8h
 * 000000014078C233: jmp     loc_14078C2CF
 * 000000014078C238: mov     eax, [rdi+18h]
 * 000000014078C23B: add     eax, r15d
 * 000000014078C23E: lea     eax, [rax+rax*2]
 * 000000014078C241: shl     eax, 3
 * 000000014078C244: jmp     loc_14078C2CF
 * 000000014078C249: mov     ecx, [rdi+10h]
 * 000000014078C24C: mov     rax, rsi
 * 000000014078C24F: mul     rcx
 * 000000014078C252: shr     rdx, 3
 * 000000014078C256: lea     eax, ds:30h[rdx*4]
 * 000000014078C25D: jmp     short loc_14078C2CF
 * 000000014078C25F: cmp     ecx, 13h
 * 000000014078C262: jz      short loc_14078C2CA
 * 000000014078C264: cmp     ecx, 1Ch
 * 000000014078C267: jz      short loc_14078C2C1
 * 000000014078C269: cmp     ecx, 1Eh
 * 000000014078C26C: jz      short loc_14078C29C
 * 000000014078C26E: lea     eax, [rcx-21h]
 * 000000014078C271: cmp     eax, r13d
 * 000000014078C274: ja      short loc_14078C211
 * 000000014078C276: mov     ecx, [rdi+20h]
 * 000000014078C279: mov     edx, [rdi+28h]
 * 000000014078C27C: and     ecx, 0FFFh
 * 000000014078C282: add     rdx, 0FFFh
 * 000000014078C289: add     rdx, rcx
 * 000000014078C28C: shr     rdx, 0Ch
 * 000000014078C290: lea     eax, [rdx+rdx*4]
 * 000000014078C293: lea     eax, ds:30h[rax*4]
 * 000000014078C29A: jmp     short loc_14078C2CF
 * 000000014078C29C: mov     ecx, [rdi+24h]
 * 000000014078C29F: mov     rax, rsi
 * 000000014078C2A2: sub     ecx, r13d
 * 000000014078C2A5: mul     rcx
 * 000000014078C2A8: movzx   eax, word ptr [rdi+28h]
 * 000000014078C2AC: shr     rdx, 3
 * 000000014078C2B0: add     edx, 7
 * 000000014078C2B3: and     edx, 0FFFFFFF8h
 * 000000014078C2B6: add     eax, r15d
 * 000000014078C2B9: lea     eax, [rax+rax*2]
 * 000000014078C2BC: lea     eax, [rdx+rax*8]
 * 000000014078C2BF: jmp     short loc_14078C2CF
 * 000000014078C2C1: movzx   eax, word ptr [rdi+28h]
 * 000000014078C2C5: jmp     loc_14078C22D
 * 000000014078C2CA: mov     eax, 38h ; '8'
 * 000000014078C2CF: add     rdi, rax
 * 000000014078C2D2: sub     r9, r13
 * 000000014078C2D5: jnz     loc_14078C1EB
 * 000000014078C2DB: mov     r15, [rbp+1C70h+var_1CD0]
 * 000000014078C2DF: mov     rsi, 0FFFFFFFFB8797400h
 * 000000014078C2E6: mov     r11, [rbp+1C70h+var_1CE0]
 * 000000014078C2EA: mov     eax, edi
 * 000000014078C2EC: mov     dword ptr [rbp+1C70h+var_1028], r13d
 * 000000014078C2F3: sub     eax, r8d
 * 000000014078C2F6: mov     dword ptr [rbp+1C70h+var_1028+4], ebx
 * 000000014078C2FC: mov     [rbp+1C70h+var_1020], eax
 * 000000014078C302: mov     ecx, [rdi]
 * 000000014078C304: lea     eax, [rcx-2]
 * 000000014078C307: cmp     eax, r13d
 * 000000014078C30A: jbe     loc_14078CCEC
 * 000000014078C310: cmp     ecx, 9
 * 000000014078C313: jnz     short loc_14078C362
 * 000000014078C315: mov     rax, [rdi+8]
 * 000000014078C319: lea     r9, [r14+20h]
 * 000000014078C31D: mov     edx, r12d
 * 000000014078C320: mov     rcx, r15
 * 000000014078C323: shl     rdx, 6
 * 000000014078C327: add     r9, rdx
 * 000000014078C32A: mov     [rdx+r14+8], rax
 * 000000014078C32F: mov     eax, [rdi+10h]
 * 000000014078C332: mov     edi, 1001h
 * 000000014078C337: mov     [rdx+r14+10h], rax
 * 000000014078C33C: mov     [rdx+r14+18h], di
 * 000000014078C342: mov     r8d, [rdx+r14+10h]
 * 000000014078C347: mov     rdx, [rdx+r14+8]
 * 000000014078C34C: call    sub_1401588B8
 * 000000014078C351: mov     r11, [rbp+1C70h+var_1CE0]
 * 000000014078C355: add     r12d, r13d
 * 000000014078C358: mov     r10, [rsp+78h]
 * 000000014078C35D: jmp     loc_14078C51B
 * 000000014078C362: mov     eax, 20h ; ' '
 * 000000014078C367: cmp     ecx, eax
 * 000000014078C369: jnz     loc_14078CA25
 * 000000014078C36F: mov     eax, [rdi+28h]
 * 000000014078C372: mov     r9d, 2
 * 000000014078C378: test    r9b, al
 * 000000014078C37B: jnz     loc_14078CA25
 * 000000014078C381: test    r13b, al
 * 000000014078C384: jz      loc_14078CA25
 * 000000014078C38A: mov     rax, [rdi+8]
 * 000000014078C38E: lea     rdx, [r14+20h]
 * 000000014078C392: mov     ebx, r12d
 * 000000014078C395: lea     r8d, [r9+0Eh]
 * 000000014078C399: shl     rbx, 6
 * 000000014078C39D: lea     rcx, [rdi+18h]
 * 000000014078C3A1: add     rdx, rbx
 * 000000014078C3A4: mov     [rbx+r14+8], rax
 * 000000014078C3A9: mov     eax, [rdi+10h]
 * 000000014078C3AC: mov     [rbx+r14+10h], rax
 * 000000014078C3B1: mov     eax, 1001h
 * 000000014078C3B6: mov     [rbx+r14+18h], ax
 * 000000014078C3BC: mov     rax, [rcx]
 * 000000014078C3BF: add     r8d, 0FFFFFFF8h
 * 000000014078C3C3: mov     [rdx], rax
 * 000000014078C3C6: add     rcx, 8
 * 000000014078C3CA: add     rdx, 8
 * 000000014078C3CE: sub     r9, r13
 * 000000014078C3D1: jnz     short loc_14078C3BC
 * 000000014078C3D3: test    r8d, r8d
 * 000000014078C3D6: jz      short loc_14078C3E8
 * 000000014078C3D8: mov     al, [rcx]
 * 000000014078C3DA: add     rcx, r13
 * 000000014078C3DD: mov     [rdx], al
 * 000000014078C3DF: add     rdx, r13
 * 000000014078C3E2: add     r8d, 0FFFFFFFFh
 * 000000014078C3E6: jnz     short loc_14078C3D8
 * 000000014078C3E8: mov     rcx, [rdi+8]
 * 000000014078C3EC: test    rcx, rcx
 * 000000014078C3EF: jz      short loc_14078C405
 * 000000014078C3F1: cmp     rcx, r11
 * 000000014078C3F4: jb      short loc_14078C400
 * 000000014078C3F6: cmp     rcx, r10
 * 000000014078C3F9: jnb     short loc_14078C400
 * 000000014078C3FB: mov     rcx, r11
 * 000000014078C3FE: jmp     short loc_14078C408
 * 000000014078C400: test    rcx, rcx
 * 000000014078C403: jnz     short loc_14078C40E
 * 000000014078C405: mov     rcx, r9
 * 000000014078C408: mov     [rbp+1C70h+var_1CD8], rcx
 * 000000014078C40C: jmp     short loc_14078C42C
 * 000000014078C40E: lea     rdx, [rbp+1C70h+var_1108]
 * 000000014078C415: call    qword ptr [r15+1F0h]
 * 000000014078C41C: mov     r11, [rbp+1C70h+var_1CE0]
 * 000000014078C420: mov     rcx, rax
 * 000000014078C423: mov     r10, [rsp+78h]
 * 000000014078C428: mov     [rbp+1C70h+var_1CD8], rax
 * 000000014078C42C: mov     eax, [rdi+28h]
 * 000000014078C42F: test    al, 4
 * 000000014078C431: jz      short loc_14078C455
 * 000000014078C433: mov     eax, 100Ah
 * 000000014078C438: mov     [rbx+r14+18h], ax
 * 000000014078C43E: mov     rcx, [rdi+8]; BaseAddress
 * 000000014078C442: call    MmGetPhysicalAddress
 * 000000014078C447: shr     rax, 0Ch
 * 000000014078C44B: mov     [rbx+r14+30h], rax
 * 000000014078C450: jmp     loc_14078C50A
 * 000000014078C455: test    rcx, rcx
 * 000000014078C458: jz      short loc_14078C4AA
 * 000000014078C45A: call    qword ptr [r15+1E0h]
 * 000000014078C461: mov     r8d, [rdi+8]
 * 000000014078C465: mov     rcx, rax; NtHeaders
 * 000000014078C468: mov     rdi, [rbp+1C70h+var_1CD8]
 * 000000014078C46C: sub     r8d, edi; VirtualAddress
 * 000000014078C46F: mov     [rsp+78h], rax
 * 000000014078C474: mov     rdx, rdi; BaseOfImage
 * 000000014078C477: call    RtlSectionTableFromVirtualAddress
 * 000000014078C47C: test    rax, rax
 * 000000014078C47F: jz      short loc_14078C490
 * 000000014078C481: mov     eax, [rax+24h]
 * 000000014078C484: bt      eax, 1Dh
 * 000000014078C488: jnb     short loc_14078C490
 * 000000014078C48A: or      byte ptr [rbx+r14+2Fh], 80h
 * 000000014078C490: mov     rax, [rsp+78h]
 * 000000014078C495: mov     r11, rdi
 * 000000014078C498: mov     [rbp+1C70h+var_1CE0], rdi
 * 000000014078C49C: mov     r10d, [rax+50h]
 * 000000014078C4A0: add     r10, rdi
 * 000000014078C4A3: mov     [rsp+78h], r10
 * 000000014078C4A8: jmp     short loc_14078C513
 * 000000014078C4AA: mov     rax, [rdi+8]
 * 000000014078C4AE: mov     rcx, 88000000000h
 * 000000014078C4B8: add     rax, rcx
 * 000000014078C4BB: cmp     rax, 0FFFh
 * 000000014078C4C1: jbe     short loc_14078C513
 * 000000014078C4C3: mov     eax, [rdi+10h]
 * 000000014078C4C6: test    eax, eax
 * 000000014078C4C8: jz      short loc_14078C513
 * 000000014078C4CA: mov     ecx, 1000h
 * 000000014078C4CF: cmp     eax, ecx
 * 000000014078C4D1: ja      loc_14078D8F3
 * 000000014078C4D7: lea     eax, [rcx+9]
 * 000000014078C4DA: mov     [rbx+r14+18h], ax
 * 000000014078C4E0: mov     rcx, [rdi+8]; BaseAddress
 * 000000014078C4E4: call    MmGetPhysicalAddress
 * 000000014078C4E9: shr     rax, 0Ch
 * 000000014078C4ED: mov     [rbx+r14+30h], rax
 * 000000014078C4F2: mov     ecx, [rdi+10h]
 * 000000014078C4F5: sub     ecx, r13d
 * 000000014078C4F8: add     rcx, [rdi+8]; BaseAddress
 * 000000014078C4FC: call    MmGetPhysicalAddress
 * 000000014078C501: shr     rax, 0Ch
 * 000000014078C505: mov     [rbx+r14+38h], rax
 * 000000014078C50A: mov     r10, [rsp+78h]
 * 000000014078C50F: mov     r11, [rbp+1C70h+var_1CE0]
 * 000000014078C513: add     r12d, r13d
 * 000000014078C516: mov     edi, 1001h
 * 000000014078C51B: xor     ebx, ebx
 * 000000014078C51D: mov     ecx, dword ptr [rsp+1D70h+var_1D08]
 * 000000014078C521: add     ecx, r13d
 * 000000014078C524: mov     dword ptr [rsp+1D70h+var_1D08], ecx
 * 000000014078C528: cmp     ecx, [r15+5C4h]
 * 000000014078C52F: jb      loc_14078C18E
 * 000000014078C535: mov     cs:qword_1403AA200, r15
 * 000000014078C53C: lea     rax, qword_1403AA200
 * 000000014078C543: mov     edx, r12d
 * 000000014078C546: lea     r9, [r14+20h]
 * 000000014078C54A: shl     rdx, 6
 * 000000014078C54E: mov     rcx, r15
 * 000000014078C551: add     r9, rdx
 * 000000014078C554: mov     [rdx+r14+8], rax
 * 000000014078C559: mov     qword ptr [rdx+r14+10h], 8
 * 000000014078C562: mov     [rdx+r14+18h], di
 * 000000014078C568: mov     r8d, [rdx+r14+10h]
 * 000000014078C56D: mov     rdx, [rdx+r14+8]
 * 000000014078C572: call    sub_1401588B8
 * 000000014078C577: mov     rax, cs:qword_1403AA200
 * 000000014078C57E: lea     r9, [r14+20h]
 * 000000014078C582: mov     ecx, 0FFFFF000h
 * 000000014078C587: add     r12d, r13d
 * 000000014078C58A: mov     edx, r12d
 * 000000014078C58D: shl     rdx, 6
 * 000000014078C591: add     r9, rdx
 * 000000014078C594: mov     [rdx+r14+8], rax
 * 000000014078C599: mov     eax, [r15+59Ch]
 * 000000014078C5A0: and     rax, rcx
 * 000000014078C5A3: mov     rcx, r15
 * 000000014078C5A6: mov     [rdx+r14+10h], rax
 * 000000014078C5AB: mov     [rdx+r14+18h], di
 * 000000014078C5B1: mov     r8d, [rdx+r14+10h]
 * 000000014078C5B6: mov     rdx, [rdx+r14+8]
 * 000000014078C5BB: call    sub_1401588B8
 * 000000014078C5C0: lea     edx, [r12+r13]
 * 000000014078C5C4: mov     rcx, r15
 * 000000014078C5C7: shl     rdx, 6
 * 000000014078C5CB: lea     rax, qword_1403AA208
 * 000000014078C5D2: mov     r12d, 8
 * 000000014078C5D8: lea     r9, [r14+20h]
 * 000000014078C5DC: add     r9, rdx
 * 000000014078C5DF: mov     [rdx+r14+8], rax
 * 000000014078C5E4: mov     [rdx+r14+10h], r12
 * 000000014078C5E9: mov     [rdx+r14+18h], di
 * 000000014078C5EF: mov     r8d, [rdx+r14+10h]
 * 000000014078C5F4: mov     rdx, [rdx+r14+8]
 * 000000014078C5F9: call    sub_1401588B8
 * 000000014078C5FE: mov     r9d, dword ptr [rbp+1C70h+arg_18]
 * 000000014078C605: test    r9d, r9d
 * 000000014078C608: jz      loc_14078C6BA
 * 000000014078C60E: lea     r15, [r14+8]
 * 000000014078C612: mov     r10d, r9d
 * 000000014078C615: mov     rdi, [r15]
 * 000000014078C618: mov     r8d, [r15+8]
 * 000000014078C61C: mov     rax, rdi
 * 000000014078C61F: lea     rcx, [rdi+r8]
 * 000000014078C623: cmp     rdi, rcx
 * 000000014078C626: jnb     short loc_14078C634
 * 000000014078C628: prefetchnta byte ptr [rax]
 * 000000014078C62B: add     rax, 40h ; '@'
 * 000000014078C62F: cmp     rax, rcx
 * 000000014078C632: jb      short loc_14078C628
 * 000000014078C634: mov     rbx, [rbp+1C70h+var_1118]
 * 000000014078C63B: mov     r9d, 1000h
 * 000000014078C641: mov     rdx, rdi
 * 000000014078C644: and     rdx, 0FFFFFFFFFFFFF000h
 * 000000014078C64B: add     rdx, r9
 * 000000014078C64E: sub     edx, edi
 * 000000014078C650: cmp     r8d, edx
 * 000000014078C653: cmovb   edx, r8d
 * 000000014078C657: sub     r8d, edx
 * 000000014078C65A: cmp     edx, r12d
 * 000000014078C65D: jb      short loc_14078C67D
 * 000000014078C65F: movzx   ecx, byte ptr [rbp+1C70h+var_196C]
 * 000000014078C666: mov     eax, edx
 * 000000014078C668: shr     rax, 3
 * 000000014078C66C: xor     rbx, [rdi]
 * 000000014078C66F: add     edx, 0FFFFFFF8h
 * 000000014078C672: ror     rbx, cl
 * 000000014078C675: add     rdi, r12
 * 000000014078C678: sub     rax, r13
 * 000000014078C67B: jnz     short loc_14078C66C
 * 000000014078C67D: test    edx, edx
 * 000000014078C67F: jz      short loc_14078C699
 * 000000014078C681: movzx   ecx, byte ptr [rbp+1C70h+var_196C]
 * 000000014078C688: movzx   eax, byte ptr [rdi]
 * 000000014078C68B: add     rdi, r13
 * 000000014078C68E: xor     rbx, rax
 * 000000014078C691: ror     rbx, cl
 * 000000014078C694: add     edx, 0FFFFFFFFh
 * 000000014078C697: jnz     short loc_14078C688
 * 000000014078C699: test    r8d, r8d
 * 000000014078C69C: jnz     short loc_14078C641
 * 000000014078C69E: mov     r9d, dword ptr [rbp+1C70h+arg_18]
 * 000000014078C6A5: mov     [r15-8], rbx
 * 000000014078C6A9: add     r15, 40h ; '@'
 * 000000014078C6AD: sub     r10, r13
 * 000000014078C6B0: jnz     loc_14078C615
 * 000000014078C6B6: mov     r15, [rbp+1C70h+var_1CD0]
 * 000000014078C6BA: mov     edx, r9d
 * 000000014078C6BD: mov     rcx, r14
 * 000000014078C6C0: call    KiConnectSwInterrupt
 * 000000014078C6C5: mov     rcx, [rbp+1C70h+Timer]
 * 000000014078C6C9: mov     ebx, eax
 * 000000014078C6CB: xor     eax, eax
 * 000000014078C6CD: mov     rdi, r14
 * 000000014078C6D0: rep stosb
 * 000000014078C6D2: lea     rdi, [rbp+1C70h+var_1118]
 * 000000014078C6D9: mov     rcx, r12
 * 000000014078C6DC: rep stosb
 * 000000014078C6DE: lea     ecx, [rax+4]
 * 000000014078C6E1: lea     rdi, [rbp+1C70h+var_196C]
 * 000000014078C6E8: rep stosb
 * 000000014078C6EA: mov     rcx, r14; P
 * 000000014078C6ED: call    ExFreePool
 * 000000014078C6F2: xor     r9d, r9d
 * 000000014078C6F5: test    ebx, ebx
 * 000000014078C6F7: js      loc_14077C9F7
 * 000000014078C6FD: mov     rax, [rsp+1D70h+var_1D20]
 * 000000014078C702: test    rax, rax
 * 000000014078C705: jz      short loc_14078C713
 * 000000014078C707: mov     rcx, rax
 * 000000014078C70A: call    [rbp+1C70h+var_6F8]
 * 000000014078C710: xor     r9d, r9d
 * 000000014078C713: rdtsc
 * 000000014078C715: mov     r12, [rbp+1C70h+var_250]
 * 000000014078C71C: mov     rbx, 7010008004002001h
 * 000000014078C726: shl     rdx, 20h
 * 000000014078C72A: or      rax, rdx
 * 000000014078C72D: mov     rcx, rax
 * 000000014078C730: ror     rax, 3
 * 000000014078C734: xor     rcx, rax
 * 000000014078C737: mov     rax, rbx
 * 000000014078C73A: mul     rcx
 * 000000014078C73D: mov     r14, rdx
 * 000000014078C740: mov     [rbp+1C70h+var_1100], rdx
 * 000000014078C747: xor     r14, rax
 * 000000014078C74A: test    [rbp+1C70h+var_108], 10000000h
 * 000000014078C754: jz      short loc_14078C78B
 * 000000014078C756: rdtsc
 * 000000014078C758: shl     rdx, 20h
 * 000000014078C75C: or      rax, rdx
 * 000000014078C75F: mov     rcx, rax
 * 000000014078C762: ror     rax, 3
 * 000000014078C766: xor     rcx, rax
 * 000000014078C769: mov     rax, rbx
 * 000000014078C76C: mul     rcx
 * 000000014078C76F: mov     [rbp+1C70h+var_10F8], rdx
 * 000000014078C776: xor     rdx, rax
 * 000000014078C779: mov     rax, [rbp+1C70h+var_2C8]
 * 000000014078C780: and     edx, 0Fh
 * 000000014078C783: lea     rcx, [rdx+rdx*4]
 * 000000014078C787: lea     r12, [rax+rcx*2]
 * 000000014078C78B: mov     r10d, 28h ; '('
 * 000000014078C791: lea     rcx, [rbp+1C70h+var_190]
 * 000000014078C798: mov     ebx, r10d
 * 000000014078C79B: lea     rdx, [rbp+1C70h+var_C10]
 * 000000014078C7A2: lea     r11d, [r10-23h]
 * 000000014078C7A6: mov     edi, r11d
 * 000000014078C7A9: mov     rax, [rcx]
 * 000000014078C7AC: add     ebx, 0FFFFFFF8h
 * 000000014078C7AF: mov     [rdx], rax
 * 000000014078C7B2: add     rcx, 8
 * 000000014078C7B6: add     rdx, 8
 * 000000014078C7BA: sub     rdi, r13
 * 000000014078C7BD: jnz     short loc_14078C7A9
 * 000000014078C7BF: test    ebx, ebx
 * 000000014078C7C1: jz      short loc_14078C7D2
 * 000000014078C7C3: mov     al, [rcx]
 * 000000014078C7C5: add     rcx, r13
 * 000000014078C7C8: mov     [rdx], al
 * 000000014078C7CA: add     rdx, r13
 * 000000014078C7CD: add     ebx, 0FFFFFFFFh
 * 000000014078C7D0: jnz     short loc_14078C7C3
 * 000000014078C7D2: test    [rbp+1C70h+var_108], 8000h
 * 000000014078C7DC: jnz     short loc_14078C7EB
 * 000000014078C7DE: cmp     [rbp+1C70h+var_190], r9d
 * 000000014078C7E5: jnz     loc_14078D0B9
 * 000000014078C7EB: test    [rbp+1C70h+var_108], 40000000h
 * 000000014078C7F5: jnz     loc_14078D32E
 * 000000014078C7FB: mov     al, [rbp+1C70h+var_168]
 * 000000014078C801: mov     rdi, r14
 * 000000014078C804: sub     al, r13b
 * 000000014078C807: xor     rdi, r15
 * 000000014078C80A: movzx   r8d, al
 * 000000014078C80E: mov     r9d, 3Fh ; '?'
 * 000000014078C814: sub     r9d, r8d
 * 000000014078C817: rdtsc
 * 000000014078C819: shl     rdx, 20h
 * 000000014078C81D: mov     r15, 7010008004002001h
 * 000000014078C827: or      rax, rdx
 * 000000014078C82A: mov     rcx, rax
 * 000000014078C82D: ror     rax, 3
 * 000000014078C831: xor     rcx, rax
 * 000000014078C834: mov     rax, r15
 * 000000014078C837: mul     rcx
 * 000000014078C83A: mov     [rbp+1C70h+var_10F0], rdx
 * 000000014078C841: xor     rax, rdx
 * 000000014078C844: xor     edx, edx
 * 000000014078C846: div     r9
 * 000000014078C849: lea     ebx, [r8+rdx]
 * 000000014078C84D: rdtsc
 * 000000014078C84F: shl     rdx, 20h
 * 000000014078C853: or      rax, rdx
 * 000000014078C856: mov     rcx, rax
 * 000000014078C859: ror     rax, 3
 * 000000014078C85D: xor     rcx, rax
 * 000000014078C860: mov     rax, r15
 * 000000014078C863: mul     rcx
 * 000000014078C866: xor     rax, rdx
 * 000000014078C869: mov     [rbp+1C70h+var_10E8], rdx
 * 000000014078C870: xor     edx, edx
 * 000000014078C872: div     r9
 * 000000014078C875: add     edx, r8d
 * 000000014078C878: cmp     edx, ebx
 * 000000014078C87A: jz      short loc_14078C84D
 * 000000014078C87C: mov     r15, [rbp+1C70h+var_2A0]
 * 000000014078C883: xor     r9d, r9d
 * 000000014078C886: mov     eax, ebx
 * 000000014078C888: mov     rbx, [rbp+1C70h+var_298]
 * 000000014078C88F: bts     rdi, rax
 * 000000014078C893: mov     eax, edx
 * 000000014078C895: btr     rdi, rax
 * 000000014078C899: cmp     [rbp+1C70h+var_164], 3
 * 000000014078C8A0: jnz     loc_14078CD80
 * 000000014078C8A6: mov     rcx, [rbp+1C70h+var_1CE8]
 * 000000014078C8AA: test    rcx, rcx
 * 000000014078C8AD: jz      loc_14078CD80
 * 000000014078C8B3: mov     rax, [rbp+1C70h+var_490]
 * 000000014078C8BA: mov     byte ptr [rbx], 13h
 * 000000014078C8BD: mov     [rbx+1], r13b
 * 000000014078C8C1: mov     [rbx+2], r9w
 * 000000014078C8C6: mov     [rbx+18h], rax
 * 000000014078C8CA: mov     [rbx+20h], rcx
 * 000000014078C8CE: mov     [rbx+38h], r9
 * 000000014078C8D2: mov     [rbx+10h], r9
 * 000000014078C8D6: mov     [rbx+28h], rdi
 * 000000014078C8DA: mov     rdi, rcx
 * 000000014078C8DD: mov     r8, [rcx]
 * 000000014078C8E0: mov     edx, [rcx+10h]
 * 000000014078C8E3: mov     rcx, [rcx+8]
 * 000000014078C8E7: call    [rbp+1C70h+var_4A0]
 * 000000014078C8ED: mov     r8, [rdi]
 * 000000014078C8F0: mov     rcx, rdi
 * 000000014078C8F3: rol     rcx, 11h
 * 000000014078C8F7: mov     r11, 5851F42D4C957F2Dh
 * 000000014078C901: xor     rcx, rdi
 * 000000014078C904: mov     rax, r11
 * 000000014078C907: mul     rcx
 * 000000014078C90A: mov     r9d, 4
 * 000000014078C910: mov     [rbp+1C70h+var_10E0], rdx
 * 000000014078C917: xor     rdx, rax
 * 000000014078C91A: mov     rax, [rbp+1C70h+var_1CE8]
 * 000000014078C91E: mov     rdi, rdx
 * 000000014078C921: add     rax, 18h
 * 000000014078C925: xor     [rax], rdi
 * 000000014078C928: mov     ecx, r9d
 * 000000014078C92B: rol     rdi, cl
 * 000000014078C92E: lea     rax, [rax-8]
 * 000000014078C932: sub     r9d, r13d
 * 000000014078C935: jnz     short loc_14078C925
 * 000000014078C937: and     dl, 0Fh
 * 000000014078C93A: cmp     dl, 7
 * 000000014078C93D: jnb     short loc_14078C9A8
 * 000000014078C93F: mov     rcx, r8
 * 000000014078C942: mov     rax, r11
 * 000000014078C945: rol     rcx, 11h
 * 000000014078C949: mov     r9d, 6
 * 000000014078C94F: xor     rcx, r8
 * 000000014078C952: mul     rcx
 * 000000014078C955: mov     [rbp+1C70h+var_10D8], rdx
 * 000000014078C95C: xor     rdx, rax
 * 000000014078C95F: add     rdi, rdx
 * 000000014078C962: lea     rax, [r8+28h]
 * 000000014078C966: movsx   edx, word ptr [r8+8]
 * 000000014078C96B: xor     [rax], rdi
 * 000000014078C96E: mov     ecx, r9d
 * 000000014078C971: rol     rdi, cl
 * 000000014078C974: lea     rax, [rax-8]
 * 000000014078C978: sub     r9d, r13d
 * 000000014078C97B: jnz     short loc_14078C96B
 * 000000014078C97D: sub     rdx, 30h ; '0'
 * 000000014078C981: xor     r9d, r9d
 * 000000014078C984: shr     rdx, 3
 * 000000014078C988: test    edx, edx
 * 000000014078C98A: jz      short loc_14078C9AB
 * 000000014078C98C: movsxd  rax, edx
 * 000000014078C98F: add     rax, 5
 * 000000014078C993: lea     r9, [r8+rax*8]
 * 000000014078C997: xor     [r9], rdi
 * 000000014078C99A: mov     ecx, edx
 * 000000014078C99C: rol     rdi, cl
 * 000000014078C99F: lea     r9, [r9-8]
 * 000000014078C9A3: sub     edx, r13d
 * 000000014078C9A6: jnz     short loc_14078C997
 * 000000014078C9A8: xor     r9d, r9d
 * 000000014078C9AB: mov     r10d, 28h ; '('
 * 000000014078C9B1: lea     r11d, [r10-23h]
 * 000000014078C9B5: mov     [rbx+40h], r14
 * 000000014078C9B9: mov     r14, 7010008004002001h
 * 000000014078C9C3: test    [rbp+1C70h+var_108], 100h
 * 000000014078C9CD: jz      loc_14078CDA1
 * 000000014078C9D3: lea     rdi, [r12-48h]
 * 000000014078C9D8: mov     [rdi+40h], rbx
 * 000000014078C9DC: rdtsc
 * 000000014078C9DE: shl     rdx, 20h
 * 000000014078C9E2: mov     r8d, 19h
 * 000000014078C9E8: or      rax, rdx
 * 000000014078C9EB: mov     rcx, rax
 * 000000014078C9EE: ror     rax, 3
 * 000000014078C9F2: xor     rcx, rax
 * 000000014078C9F5: mov     rax, r14
 * 000000014078C9F8: mul     rcx
 * 000000014078C9FB: mov     [rbp+1C70h+var_10D0], rdx
 * 000000014078CA02: xor     rdx, rax
 * 000000014078CA05: lea     rax, [rdi+48h]
 * 000000014078CA09: xor     [rax], rdx
 * 000000014078CA0C: lea     rax, [rax+8]
 * 000000014078CA10: sub     r8, r13
 * 000000014078CA13: jnz     short loc_14078CA09
 * 000000014078CA15: mov     dword ptr [rdi+48h], 48513148h
 * 000000014078CA1C: mov     [rdi+20h], rdx
 * 000000014078CA20: jmp     loc_14078CDA4
 * 000000014078CA25: cmp     ecx, 7
 * 000000014078CA28: jnz     short loc_14078CA93
 * 000000014078CA2A: xor     eax, eax
 * 000000014078CA2C: lea     rdx, [rdi+30h]
 * 000000014078CA30: mov     ebx, eax
 * 000000014078CA32: cmp     [rdi+18h], eax
 * 000000014078CA35: jbe     loc_14078CCE2
 * 000000014078CA3B: xor     r15d, r15d
 * 000000014078CA3E: mov     eax, 1003h
 * 000000014078CA43: mov     ecx, r12d
 * 000000014078CA46: shl     rcx, 6
 * 000000014078CA4A: add     r12d, r13d
 * 000000014078CA4D: add     ebx, r13d
 * 000000014078CA50: mov     [rcx+r14+8], r15
 * 000000014078CA55: mov     [rcx+r14+10h], r15
 * 000000014078CA5A: mov     [rcx+r14+18h], ax
 * 000000014078CA60: mov     eax, [rdi+1Ch]
 * 000000014078CA63: mov     [rcx+r14+34h], eax
 * 000000014078CA68: mov     rax, [rdx]
 * 000000014078CA6B: lea     rdx, [rdx+18h]
 * 000000014078CA6F: mov     [rcx+r14+20h], rax
 * 000000014078CA74: mov     rax, [rdx-10h]
 * 000000014078CA78: mov     [rcx+r14+28h], rax
 * 000000014078CA7D: mov     eax, [rdx-8]
 * 000000014078CA80: mov     [rcx+r14+30h], eax
 * 000000014078CA85: cmp     ebx, [rdi+18h]
 * 000000014078CA88: jb      short loc_14078CA3E
 * 000000014078CA8A: mov     r15, [rbp+1C70h+var_1CD0]
 * 000000014078CA8E: jmp     loc_14078C516
 * 000000014078CA93: cmp     ecx, 15h
 * 000000014078CA96: jz      loc_14078CC95
 * 000000014078CA9C: cmp     ecx, 26h ; '&'
 * 000000014078CA9F: jz      loc_14078CC95
 * 000000014078CAA5: cmp     ecx, 21h ; '!'
 * 000000014078CAA8: jnz     loc_14078C516
 * 000000014078CAAE: mov     rdx, [rdi+20h]
 * 000000014078CAB2: mov     ebx, [rdi+28h]
 * 000000014078CAB5: mov     rcx, rdx
 * 000000014078CAB8: and     ecx, 0FFFh
 * 000000014078CABE: mov     [rbp+1C70h+var_1CE0], rdx
 * 000000014078CAC2: add     rcx, 0FFFh
 * 000000014078CAC9: add     rbx, rcx
 * 000000014078CACC: mov     rcx, rdx
 * 000000014078CACF: shr     rbx, 0Ch
 * 000000014078CAD3: call    qword ptr [r15+1E0h]
 * 000000014078CADA: mov     rdx, [rbp+1C70h+var_1CE0]
 * 000000014078CADE: lea     r8, [rbp+1C70h+var_1968]
 * 000000014078CAE5: mov     [rsp+1D70h+NtHeaders], rax
 * 000000014078CAEA: mov     rcx, r15
 * 000000014078CAED: xor     eax, eax
 * 000000014078CAEF: mov     [rbp+1C70h+var_1CF0], rax
 * 000000014078CAF3: mov     eax, [rdi+28h]
 * 000000014078CAF6: add     rax, rdx
 * 000000014078CAF9: mov     [rsp+78h], rax
 * 000000014078CAFE: call    $$c1
 * 000000014078CB03: mov     r11, [rbp+1C70h+var_1CE0]
 * 000000014078CB07: neg     eax
 * 000000014078CB09: mov     eax, ebx
 * 000000014078CB0B: sbb     ecx, ecx
 * 000000014078CB0D: add     rdi, 30h ; '0'
 * 000000014078CB11: and     [rbp+1C70h+var_1968], ecx
 * 000000014078CB17: lea     rcx, [rax+rax*4]
 * 000000014078CB1B: lea     rax, [rdi+rcx*4]
 * 000000014078CB1F: mov     [rbp+1C70h+var_1CC0], rax
 * 000000014078CB23: cmp     rdi, rax
 * 000000014078CB26: jz      loc_14078CC8B
 * 000000014078CB2C: mov     rsi, [rbp+1C70h+var_1CF0]
 * 000000014078CB30: mov     rcx, r11
 * 000000014078CB33: neg     rcx
 * 000000014078CB36: mov     r15, r11
 * 000000014078CB39: mov     [rbp+1C70h+var_1CB0], rcx
 * 000000014078CB3D: mov     al, [rdi+0Fh]
 * 000000014078CB40: test    al, al
 * 000000014078CB42: js      loc_14078CC6A
 * 000000014078CB48: mov     edx, 80000000h
 * 000000014078CB4D: test    [rdi+10h], edx
 * 000000014078CB50: jz      short loc_14078CB5F
 * 000000014078CB52: mov     eax, r12d
 * 000000014078CB55: shl     rax, 6
 * 000000014078CB59: or      [rax+r14+1Ah], r13w
 * 000000014078CB5F: mov     eax, 1000h
 * 000000014078CB64: mov     r8d, r12d
 * 000000014078CB67: shl     r8, 6
 * 000000014078CB6B: mov     r9d, 10h
 * 000000014078CB71: lea     rbx, [r8+r14]
 * 000000014078CB75: mov     [rbx+8], r15
 * 000000014078CB79: lea     r10d, [r9-0Eh]
 * 000000014078CB7D: mov     [rbx+10h], rax
 * 000000014078CB81: mov     eax, 1002h
 * 000000014078CB86: mov     [rbx+18h], ax
 * 000000014078CB8A: lea     rax, [r15+rcx]
 * 000000014078CB8E: cqo
 * 000000014078CB90: mov     [rbx+30h], r11
 * 000000014078CB94: and     edx, 0FFFh
 * 000000014078CB9A: mov     rcx, rdi
 * 000000014078CB9D: add     rax, rdx
 * 000000014078CBA0: lea     rdx, [rbx+20h]
 * 000000014078CBA4: sar     rax, 0Ch
 * 000000014078CBA8: mov     [rbx+38h], eax
 * 000000014078CBAB: mov     rax, [rcx]
 * 000000014078CBAE: add     r9d, 0FFFFFFF8h
 * 000000014078CBB2: mov     [rdx], rax
 * 000000014078CBB5: add     rcx, 8
 * 000000014078CBB9: add     rdx, 8
 * 000000014078CBBD: sub     r10, r13
 * 000000014078CBC0: jnz     short loc_14078CBAB
 * 000000014078CBC2: test    r9d, r9d
 * 000000014078CBC5: jz      short loc_14078CBD7
 * 000000014078CBC7: mov     al, [rcx]
 * 000000014078CBC9: add     rcx, r13
 * 000000014078CBCC: mov     [rdx], al
 * 000000014078CBCE: add     rdx, r13
 * 000000014078CBD1: add     r9d, 0FFFFFFFFh
 * 000000014078CBD5: jnz     short loc_14078CBC7
 * 000000014078CBD7: lea     rax, [rbp+1C70h+var_1968]
 * 000000014078CBDE: mov     edx, 4
 * 000000014078CBE3: sub     r8, rax
 * 000000014078CBE6: lea     rcx, [rbp+1C70h+var_1968]
 * 000000014078CBED: lea     r9, [r8+r14]
 * 000000014078CBF1: mov     al, [rcx]
 * 000000014078CBF3: mov     [rcx+r9+3Ch], al
 * 000000014078CBF8: add     rcx, r13
 * 000000014078CBFB: add     edx, 0FFFFFFFFh
 * 000000014078CBFE: jnz     short loc_14078CBF1
 * 000000014078CC00: mov     r8d, [rbx+38h]
 * 000000014078CC04: xor     ecx, ecx
 * 000000014078CC06: shl     r8d, 0Ch; VirtualAddress
 * 000000014078CC0A: test    rsi, rsi
 * 000000014078CC0D: jz      short loc_14078CC16
 * 000000014078CC0F: cmp     r8d, dword ptr [rsp+1D70h+Src]
 * 000000014078CC14: jb      short loc_14078CC48
 * 000000014078CC16: mov     rcx, [rsp+1D70h+NtHeaders]; NtHeaders
 * 000000014078CC1B: mov     rdx, r11; BaseOfImage
 * 000000014078CC1E: call    RtlSectionTableFromVirtualAddress
 * 000000014078CC23: mov     r11, [rbp+1C70h+var_1CE0]
 * 000000014078CC27: mov     rsi, rax
 * 000000014078CC2A: test    rax, rax
 * 000000014078CC2D: jz      short loc_14078CC37
 * 000000014078CC2F: mov     eax, [rax+0Ch]
 * 000000014078CC32: add     eax, [rsi+8]
 * 000000014078CC35: jmp     short loc_14078CC44
 * 000000014078CC37: mov     rcx, [rsp+1D70h+NtHeaders]
 * 000000014078CC3C: movzx   eax, word ptr [rcx+14h]
 * 000000014078CC40: mov     eax, [rax+rcx+24h]
 * 000000014078CC44: mov     dword ptr [rsp+1D70h+Src], eax
 * 000000014078CC48: and     byte ptr [rbx+2Fh], 7Fh
 * 000000014078CC4C: mov     cl, [rbx+2Fh]
 * 000000014078CC4F: test    rsi, rsi
 * 000000014078CC52: jz      short loc_14078CC63
 * 000000014078CC54: test    dword ptr [rsi+24h], 20000000h
 * 000000014078CC5B: jz      short loc_14078CC63
 * 000000014078CC5D: or      cl, 80h
 * 000000014078CC60: mov     [rbx+2Fh], cl
 * 000000014078CC63: mov     rcx, [rbp+1C70h+var_1CB0]
 * 000000014078CC67: add     r12d, r13d
 * 000000014078CC6A: mov     eax, 1000h
 * 000000014078CC6F: add     rdi, 14h
 * 000000014078CC73: add     r15, rax
 * 000000014078CC76: cmp     rdi, [rbp+1C70h+var_1CC0]
 * 000000014078CC7A: jnz     loc_14078CB3D
 * 000000014078CC80: mov     r15, [rbp+1C70h+var_1CD0]
 * 000000014078CC84: mov     rsi, 0FFFFFFFFB8797400h
 * 000000014078CC8B: mov     r10, [rsp+78h]
 * 000000014078CC90: jmp     loc_14078C516
 * 000000014078CC95: xor     ebx, ebx
 * 000000014078CC97: mov     ecx, r12d
 * 000000014078CC9A: shl     rcx, 6
 * 000000014078CC9E: mov     eax, 100Ch
 * 000000014078CCA3: mov     [rcx+r14+8], rbx
 * 000000014078CCA8: mov     [rcx+r14+10h], rbx
 * 000000014078CCAD: cmp     dword ptr [rdi], 26h ; '&'
 * 000000014078CCB0: jz      short loc_14078CCB7
 * 000000014078CCB2: mov     eax, 1006h
 * 000000014078CCB7: mov     [rcx+r14+18h], ax
 * 000000014078CCBD: mov     eax, [rdi+2Ch]
 * 000000014078CCC0: mov     [rcx+r14+34h], eax
 * 000000014078CCC5: mov     rax, [rdi+18h]
 * 000000014078CCC9: mov     [rcx+r14+20h], rax
 * 000000014078CCCE: mov     rax, [rdi+20h]
 * 000000014078CCD2: mov     [rcx+r14+28h], rax
 * 000000014078CCD7: mov     eax, [rdi+28h]
 * 000000014078CCDA: mov     [rcx+r14+30h], eax
 * 000000014078CCDF: add     r12d, r13d
 * 000000014078CCE2: mov     edi, 1001h
 * 000000014078CCE7: jmp     loc_14078C51D
 * 000000014078CCEC: mov     rax, [rdi+8]
 * 000000014078CCF0: mov     edx, r12d
 * 000000014078CCF3: shl     rdx, 6
 * 000000014078CCF7: mov     [rdx+r14+8], rax
 * 000000014078CCFC: mov     eax, [rdi+10h]
 * 000000014078CCFF: mov     [rdx+r14+10h], rax
 * 000000014078CD04: mov     eax, 1005h
 * 000000014078CD09: cmp     dword ptr [rdi], 3
 * 000000014078CD0C: jz      short loc_14078CD13
 * 000000014078CD0E: mov     eax, 1004h
 * 000000014078CD13: mov     [rdx+r14+18h], ax
 * 000000014078CD19: lea     r9, [r14+20h]
 * 000000014078CD1D: mov     eax, [rdi+28h]
 * 000000014078CD20: add     r9, rdx
 * 000000014078CD23: mov     [rdx+r14+30h], eax
 * 000000014078CD28: mov     rcx, r15
 * 000000014078CD2B: movzx   eax, word ptr [rdi+2Ch]
 * 000000014078CD2F: mov     [rdx+r14+34h], ax
 * 000000014078CD35: mov     r8d, [rdx+r14+10h]
 * 000000014078CD3A: mov     rdx, [rdx+r14+8]
 * 000000014078CD3F: call    sub_1401588B8
 * 000000014078CD44: mov     r11, [rbp+1C70h+var_1CE0]
 * 000000014078CD48: add     r12d, r13d
 * 000000014078CD4B: mov     r10, [rsp+78h]
 * 000000014078CD50: xor     ebx, ebx
 * 000000014078CD52: cmp     dword ptr [rdi], 2
 * 000000014078CD55: jnz     short loc_14078CCE2
 * 000000014078CD57: mov     eax, 100Bh
 * 000000014078CD5C: mov     ecx, r12d
 * 000000014078CD5F: shl     rcx, 6
 * 000000014078CD63: mov     [rcx+r14+8], rbx
 * 000000014078CD68: mov     [rcx+r14+10h], rbx
 * 000000014078CD6D: mov     [rcx+r14+18h], ax
 * 000000014078CD73: mov     eax, [rdi+28h]
 * 000000014078CD76: mov     [rcx+r14+20h], eax
 * 000000014078CD7B: jmp     loc_14078CCDF
 * 000000014078CD80: mov     byte ptr [rbx], 13h
 * 000000014078CD83: mov     [rbx+1], r13b
 * 000000014078CD87: mov     [rbx+2], r9w
 * 000000014078CD8C: mov     [rbx+18h], r12
 * 000000014078CD90: mov     [rbx+20h], rdi
 * 000000014078CD94: mov     [rbx+38h], r9
 * 000000014078CD98: mov     [rbx+10h], r9
 * 000000014078CD9C: jmp     loc_14078C9B5
 * 000000014078CDA1: mov     rdi, rbx
 * 000000014078CDA4: lock or [rsp+0], r9d
 * 000000014078CDA9: mov     ecx, [rbp+1C70h+var_1F0]
 * 000000014078CDAF: test    ecx, ecx
 * 000000014078CDB1: jz      loc_14078D014
 * 000000014078CDB7: sub     ecx, 1
 * 000000014078CDBA: jz      loc_14078D001
 * 000000014078CDC0: sub     ecx, 1
 * 000000014078CDC3: jz      loc_14078CFEE
 * 000000014078CDC9: sub     ecx, 1
 * 000000014078CDCC: jz      loc_14078CF4C
 * 000000014078CDD2: cmp     ecx, 1
 * 000000014078CDD5: jz      loc_14078CE5B
 * 000000014078CDDB: mov     rbx, [rbp+1C70h+var_100]
 * 000000014078CDE2: mov     [rbx+48h], rdi
 * 000000014078CDE6: lock or [rsp+0], r9d
 * 000000014078CDEB: rdtsc
 * 000000014078CDED: shl     rdx, 20h
 * 000000014078CDF1: or      rax, rdx
 * 000000014078CDF4: mov     rcx, rax
 * 000000014078CDF7: mov     rdx, rax
 * 000000014078CDFA: ror     rcx, 3
 * 000000014078CDFE: mov     rax, r14
 * 000000014078CE01: xor     rdx, rcx
 * 000000014078CE04: mul     rdx
 * 000000014078CE07: mov     rcx, rdx
 * 000000014078CE0A: mov     [rbp+1C70h+var_10C8], rdx
 * 000000014078CE11: xor     rcx, rax
 * 000000014078CE14: mov     rax, 0ABCC77118461CEFDh
 * 000000014078CE1E: mul     rcx
 * 000000014078CE21: shr     rdx, 1Ah
 * 000000014078CE25: imul    rax, rdx, 5F5E100h
 * 000000014078CE2C: sub     rcx, rax
 * 000000014078CE2F: mov     rax, 0D6BF94D5E57A42BDh
 * 000000014078CE39: add     rcx, 47868C00h
 * 000000014078CE40: imul    rcx
 * 000000014078CE43: add     rdx, rcx
 * 000000014078CE46: sar     rdx, 17h
 * 000000014078CE4A: mov     rax, rdx
 * 000000014078CE4D: shr     rax, 3Fh
 * 000000014078CE51: add     rdx, rax
 * 000000014078CE54: mov     [rbx], edx
 * 000000014078CE56: jmp     loc_14078D0B9
 * 000000014078CE5B: mov     rdx, [rbp+1C70h+var_B8]
 * 000000014078CE62: xor     r8d, r8d
 * 000000014078CE65: mov     rcx, [rbp+1C70h+var_A8]
 * 000000014078CE6C: mov     rdi, [rbp+1C70h+var_100]
 * 000000014078CE73: mov     rax, [rbp+1C70h+var_B0]
 * 000000014078CE7A: mov     byte ptr [rdx], 12h
 * 000000014078CE7D: mov     byte ptr [rdx+2], 58h ; 'X'
 * 000000014078CE81: mov     [rdx+50h], r9b
 * 000000014078CE85: mov     [rdx+8], rdi
 * 000000014078CE89: mov     [rdx+20h], rax
 * 000000014078CE8D: mov     [rdx+28h], r9
 * 000000014078CE91: mov     [rdx+30h], rcx
 * 000000014078CE95: mov     [rdx+51h], r9b
 * 000000014078CE99: mov     [rdx+38h], r9
 * 000000014078CE9D: mov     [rdx+52h], r9b
 * 000000014078CEA1: xor     r9d, r9d
 * 000000014078CEA4: mov     rcx, [rbp+1C70h+var_B8]
 * 000000014078CEAB: mov     rdx, rbx
 * 000000014078CEAE: call    [rbp+1C70h+var_540]
 * 000000014078CEB4: xor     r9d, r9d
 * 000000014078CEB7: test    al, al
 * 000000014078CEB9: jnz     loc_14078D0B9
 * 000000014078CEBF: cmp     [rbp+1C70h+var_190], r9d
 * 000000014078CEC6: jnz     short loc_14078CF03
 * 000000014078CEC8: lea     rax, [rbp+1C70h+var_7E0]
 * 000000014078CECF: mov     [rbp+1C70h+var_180], r9
 * 000000014078CED6: mov     rdx, 0A3A03F5891C8B4E8h
 * 000000014078CEE0: mov     [rbp+1C70h+var_178], 104h
 * 000000014078CEEB: add     rax, rdx
 * 000000014078CEEE: mov     [rbp+1C70h+var_170], rdi
 * 000000014078CEF5: mov     [rbp+1C70h+var_188], rax
 * 000000014078CEFC: mov     [rbp+1C70h+var_190], r13d
 * 000000014078CF03: lea     rcx, [rbp+1C70h+var_190]
 * 000000014078CF0A: mov     ebx, 28h ; '('
 * 000000014078CF0F: lea     rdx, [rbp+1C70h+var_C10]
 * 000000014078CF16: mov     rax, [rcx]
 * 000000014078CF19: add     ebx, 0FFFFFFF8h
 * 000000014078CF1C: mov     [rdx], rax
 * 000000014078CF1F: add     rcx, 8
 * 000000014078CF23: add     rdx, 8
 * 000000014078CF27: sub     [rbp+1C70h+var_1540], r13
 * 000000014078CF2E: jnz     short loc_14078CF16
 * 000000014078CF30: test    ebx, ebx
 * 000000014078CF32: jz      loc_14078D0B9
 * 000000014078CF38: mov     al, [rcx]
 * 000000014078CF3A: add     rcx, r13
 * 000000014078CF3D: mov     [rdx], al
 * 000000014078CF3F: add     rdx, r13
 * 000000014078CF42: add     ebx, 0FFFFFFFFh
 * 000000014078CF45: jnz     short loc_14078CF38
 * 000000014078CF47: jmp     loc_14078D0B9
 * 000000014078CF4C: mov     rdi, [rbp+1C70h+var_100]
 * 000000014078CF53: mov     rcx, [rdi+610h]
 * 000000014078CF5A: test    rcx, rcx
 * 000000014078CF5D: jz      short loc_14078CFDD
 * 000000014078CF5F: cmp     [rbp+1C70h+var_190], r9d
 * 000000014078CF66: jnz     short loc_14078CFA3
 * 000000014078CF68: lea     rax, [rbp+1C70h+var_7E0]
 * 000000014078CF6F: mov     [rbp+1C70h+var_180], r9
 * 000000014078CF76: mov     rdx, 0A3A03F5891C8B4E8h
 * 000000014078CF80: mov     [rbp+1C70h+var_178], 104h
 * 000000014078CF8B: add     rax, rdx
 * 000000014078CF8E: mov     [rbp+1C70h+var_170], rcx
 * 000000014078CF95: mov     [rbp+1C70h+var_188], rax
 * 000000014078CF9C: mov     [rbp+1C70h+var_190], r13d
 * 000000014078CFA3: lea     rcx, [rbp+1C70h+var_190]
 * 000000014078CFAA: lea     rdx, [rbp+1C70h+var_C10]
 * 000000014078CFB1: mov     rax, [rcx]
 * 000000014078CFB4: add     r10d, 0FFFFFFF8h
 * 000000014078CFB8: mov     [rdx], rax
 * 000000014078CFBB: add     rcx, 8
 * 000000014078CFBF: add     rdx, 8
 * 000000014078CFC3: sub     r11, r13
 * 000000014078CFC6: jnz     short loc_14078CFB1
 * 000000014078CFC8: test    r10d, r10d
 * 000000014078CFCB: jz      short loc_14078CFDD
 * 000000014078CFCD: mov     al, [rcx]
 * 000000014078CFCF: add     rcx, r13
 * 000000014078CFD2: mov     [rdx], al
 * 000000014078CFD4: add     rdx, r13
 * 000000014078CFD7: add     r10d, 0FFFFFFFFh
 * 000000014078CFDB: jnz     short loc_14078CFCD
 * 000000014078CFDD: lock or [rsp+0], r9d
 * 000000014078CFE2: mov     [rdi+610h], rbx
 * 000000014078CFE9: jmp     loc_14078D0B9
 * 000000014078CFEE: mov     rax, [rbp+1C70h+var_268]
 * 000000014078CFF5: mov     [rax+630h], rdi
 * 000000014078CFFC: jmp     loc_14078D0B9
 * 000000014078D001: mov     rax, [rbp+1C70h+var_268]
 * 000000014078D008: mov     [rax+660h], rdi
 * 000000014078D00F: jmp     loc_14078D0B9
 * 000000014078D014: rdtsc
 * 000000014078D016: shl     rdx, 20h
 * 000000014078D01A: or      rax, rdx
 * 000000014078D01D: mov     rcx, rax
 * 000000014078D020: mov     rdx, rax
 * 000000014078D023: ror     rcx, 3
 * 000000014078D027: mov     rax, r14
 * 000000014078D02A: xor     rdx, rcx
 * 000000014078D02D: mul     rdx
 * 000000014078D030: mov     rcx, rdx
 * 000000014078D033: mov     [rbp+1C70h+var_10C0], rdx
 * 000000014078D03A: xor     rcx, rax
 * 000000014078D03D: mov     rax, 0ABCC77118461CEFDh
 * 000000014078D047: mul     rcx
 * 000000014078D04A: shr     rdx, 1Ah
 * 000000014078D04E: imul    rax, rdx, 5F5E100h
 * 000000014078D055: sub     rcx, rax
 * 000000014078D058: sub     rsi, rcx
 * 000000014078D05B: rdtsc
 * 000000014078D05D: shl     rdx, 20h
 * 000000014078D061: xor     r8d, r8d
 * 000000014078D064: or      rax, rdx
 * 000000014078D067: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rdi
 * 000000014078D06C: mov     rcx, rax
 * 000000014078D06F: mov     rdx, rax
 * 000000014078D072: ror     rcx, 3
 * 000000014078D076: mov     rax, r14
 * 000000014078D079: xor     rdx, rcx
 * 000000014078D07C: mov     rcx, r15
 * 000000014078D07F: mul     rdx
 * 000000014078D082: mov     rbx, rdx
 * 000000014078D085: mov     [rbp+1C70h+var_10B8], rdx
 * 000000014078D08C: xor     rbx, rax
 * 000000014078D08F: mov     rax, 346DC5D63886594Bh
 * 000000014078D099: mul     rbx
 * 000000014078D09C: shr     rdx, 0Bh
 * 000000014078D0A0: imul    rax, rdx, 2710h
 * 000000014078D0A7: mov     rdx, rsi
 * 000000014078D0AA: sub     rbx, rax
 * 000000014078D0AD: mov     r9d, ebx
 * 000000014078D0B0: call    [rbp+1C70h+var_620]
 * 000000014078D0B6: xor     r9d, r9d
 * 000000014078D0B9: cmp     [rbp+1C70h+var_C10], r9d
 * 000000014078D0C0: jz      loc_14078D32E
 * 000000014078D0C6: test    [rbp+1C70h+var_108], 8000h
 * 000000014078D0D0: jnz     loc_14078D32E
 * 000000014078D0D6: mov     rbx, [rbp+1C70h+var_BF8]
 * 000000014078D0DD: lea     rax, [rbp+1C70h+var_7E0]
 * 000000014078D0E4: mov     rdi, [rbp+1C70h+var_BF0]
 * 000000014078D0EB: mov     r8, [rbp+1C70h+var_C00]
 * 000000014078D0F2: mov     r10, [rbp+1C70h+var_C08]
 * 000000014078D0F9: mov     [rbp+1C70h+arg_18], rbx
 * 000000014078D100: mov     [rsp+1D70h+var_1D00], rdi
 * 000000014078D105: mov     [rbp+1C70h+var_1CD0], r8
 * 000000014078D109: mov     [rbp+1C70h+Timer], r10
 * 000000014078D10D: mov     [rbp+1C70h+var_10B0], rax
 * 000000014078D114: mov     rax, cr8
 * 000000014078D118: mov     ecx, 2
 * 000000014078D11D: cmp     al, cl
 * 000000014078D11F: jnb     short loc_14078D125
 * 000000014078D121: mov     cr8, rcx
 * 000000014078D125: mov     rax, gs:20h
 * 000000014078D12E: mov     r15, gs:188h
 * 000000014078D137: mov     [rbp+1C70h+var_1C90], r15
 * 000000014078D13B: mov     r14, [rax+2DD0h]
 * 000000014078D142: mov     al, [rax+2DEAh]
 * 000000014078D148: test    al, al
 * 000000014078D14A: jz      short loc_14078D16B
 * 000000014078D14C: lea     rax, [rbp+1C70h+var_10B0]
 * 000000014078D153: cmp     rax, r14
 * 000000014078D156: ja      short loc_14078D16B
 * 000000014078D158: lea     rax, [r14-6000h]
 * 000000014078D15F: lea     rdx, [rbp+1C70h+var_10B0]
 * 000000014078D166: cmp     rdx, rax
 * 000000014078D169: jnb     short loc_14078D16F
 * 000000014078D16B: mov     r14, [r15+28h]
 * 000000014078D16F: mov     rdx, [rbp+1C70h+var_10B0]
 * 000000014078D176: test    dword ptr [rdx+6D8h], 8000000h
 * 000000014078D180: jnz     loc_14078D27F
 * 000000014078D186: mov     r12, cr0
 * 000000014078D18A: mov     rax, r12
 * 000000014078D18D: btr     rax, 10h
 * 000000014078D192: mov     cr0, rax
 * 000000014078D195: mov     r8d, [rdx+798h]
 * 000000014078D19C: lea     rbx, [rdx+7A0h]
 * 000000014078D1A3: shl     r8, 4
 * 000000014078D1A7: xor     eax, eax
 * 000000014078D1A9: add     r8, rbx
 * 000000014078D1AC: mov     rdi, r8
 * 000000014078D1AF: cmp     [rdx+79Ch], eax
 * 000000014078D1B5: jbe     short loc_14078D1F3
 * 000000014078D1B7: mov     rcx, [rdi]
 * 000000014078D1BA: mov     rax, [rdi+8]
 * 000000014078D1BE: mov     [rcx], rax
 * 000000014078D1C1: mov     rcx, cr4
 * 000000014078D1C4: test    rcx, 20080h
 * 000000014078D1CB: jz      short loc_14078D1DD
 * 000000014078D1CD: mov     rax, rcx
 * 000000014078D1D0: btc     rax, 7
 * 000000014078D1D5: mov     cr4, rax
 * 000000014078D1D8: mov     cr4, rcx
 * 000000014078D1DB: jmp     short loc_14078D1E3
 * 000000014078D1DD: mov     rax, cr3
 * 000000014078D1E0: mov     cr3, rax
 * 000000014078D1E3: add     rdi, 10h
 * 000000014078D1E7: add     r9d, r13d
 * 000000014078D1EA: cmp     r9d, [rdx+79Ch]
 * 000000014078D1F1: jb      short loc_14078D1B7
 * 000000014078D1F3: cmp     rbx, r8
 * 000000014078D1F6: jnb     short loc_14078D252
 * 000000014078D1F8: mov     esi, [rbx+8]
 * 000000014078D1FB: mov     rcx, rdi
 * 000000014078D1FE: mov     r9, [rbx]
 * 000000014078D201: mov     r10d, esi
 * 000000014078D204: cmp     esi, 8
 * 000000014078D207: jb      short loc_14078D227
 * 000000014078D209: mov     r11d, esi
 * 000000014078D20C: shr     r11, 3
 * 000000014078D210: mov     rax, [rcx]
 * 000000014078D213: add     r10d, 0FFFFFFF8h
 * 000000014078D217: mov     [r9], rax
 * 000000014078D21A: add     rcx, 8
 * 000000014078D21E: add     r9, 8
 * 000000014078D222: sub     r11, r13
 * 000000014078D225: jnz     short loc_14078D210
 * 000000014078D227: test    r10d, r10d
 * 000000014078D22A: jz      short loc_14078D23E
 * 000000014078D22C: sub     r9, rcx
 * 000000014078D22F: mov     al, [rcx]
 * 000000014078D231: mov     [rcx+r9], al
 * 000000014078D235: add     rcx, r13
 * 000000014078D238: add     r10d, 0FFFFFFFFh
 * 000000014078D23C: jnz     short loc_14078D22F
 * 000000014078D23E: add     rdi, rsi
 * 000000014078D241: add     rbx, 10h
 * 000000014078D245: cmp     rbx, r8
 * 000000014078D248: jb      short loc_14078D1F8
 * 000000014078D24A: mov     r15, [rbp+1C70h+var_1C90]
 * 000000014078D24E: mov     r10, [rbp+1C70h+Timer]
 * 000000014078D252: mov     rax, [rdx+200h]
 * 000000014078D259: mov     byte ptr [rax], 0C3h
 * 000000014078D25C: mov     cr0, r12
 * 000000014078D260: mov     rdx, [rbp+1C70h+var_10B0]
 * 000000014078D267: mov     ecx, 2
 * 000000014078D26C: mov     rbx, [rbp+1C70h+arg_18]
 * 000000014078D273: xor     r9d, r9d
 * 000000014078D276: mov     rdi, [rsp+1D70h+var_1D00]
 * 000000014078D27B: mov     r8, [rbp+1C70h+var_1CD0]
 * 000000014078D27F: cmp     [rdx+680h], r9d
 * 000000014078D286: jz      short loc_14078D294
 * 000000014078D288: mov     rax, cr8
 * 000000014078D28C: cmp     al, cl
 * 000000014078D28E: jnb     short loc_14078D294
 * 000000014078D290: mov     cr8, rcx
 * 000000014078D294: mov     ecx, [rdx+680h]
 * 000000014078D29A: test    ecx, ecx
 * 000000014078D29C: jz      loc_14078D92D
 * 000000014078D2A2: sub     ecx, 1
 * 000000014078D2A5: jz      loc_14078D920
 * 000000014078D2AB: sub     ecx, 1
 * 000000014078D2AE: jz      short loc_14078D322
 * 000000014078D2B0: sub     ecx, 1
 * 000000014078D2B3: jz      short loc_14078D316
 * 000000014078D2B5: sub     ecx, 1
 * 000000014078D2B8: jz      short loc_14078D2F1
 * 000000014078D2BA: cmp     ecx, 1
 * 000000014078D2BD: jz      short loc_14078D2D3
 * 000000014078D2BF: mov     rax, [rdx+500h]
 * 000000014078D2C6: lock or [rax+340h], r13
 * 000000014078D2CE: jmp     loc_14078D92D
 * 000000014078D2D3: mov     ecx, [rdx+6D8h]
 * 000000014078D2D9: mov     rax, gs:188h
 * 000000014078D2E2: shr     ecx, 0Ah
 * 000000014078D2E5: and     ecx, 1Fh
 * 000000014078D2E8: lock bts [rax], ecx
 * 000000014078D2EC: jmp     loc_14078D92D
 * 000000014078D2F1: mov     edx, [rdx+6D8h]
 * 000000014078D2F7: mov     rax, gs:188h
 * 000000014078D300: shr     edx, 0Ah
 * 000000014078D303: and     edx, 1Fh
 * 000000014078D306: mov     rcx, [rax+0B8h]
 * 000000014078D30D: lock bts [rcx], edx
 * 000000014078D311: jmp     loc_14078D92D
 * 000000014078D316: mov     rax, [rdx+4A8h]
 * 000000014078D31D: jmp     loc_14078D927
 * 000000014078D322: mov     rax, [rdx+4A0h]
 * 000000014078D329: jmp     loc_14078D927
 * 000000014078D32E: cli
 * 000000014078D32F: cmp     byte ptr cs:KdDebuggerNotPresent, r9b
 * 000000014078D336: jnz     short loc_14078D33A
 * 000000014078D338: jmp     short loc_14078D338
 * 000000014078D33A: sti
 * 000000014078D33B: mov     rax, [rsp+1D70h+var_1D00]
 * 000000014078D340: test    rax, rax
 * 000000014078D343: jz      short loc_14078D364
 * 000000014078D345: mov     rcx, [rbp+1C70h+var_1C90]
 * 000000014078D349: mov     [rax+10h], rcx
 * 000000014078D34D: lock or [rsp+0], r9d
 * 000000014078D352: lea     rcx, [rax+18h]; Event
 * 000000014078D356: xor     r8d, r8d; Wait
 * 000000014078D359: mov     edx, r13d; Increment
 * 000000014078D35C: call    KeSetEvent
 * 000000014078D361: xor     r9d, r9d
 * 000000014078D364: lea     rax, [rbp+1C70h+var_7E0]
 * 000000014078D36B: mov     ecx, 798h
 * 000000014078D370: mov     edx, 0F3h
 * 000000014078D375: mov     [rax], r9
 * 000000014078D378: add     ecx, 0FFFFFFF8h
 * 000000014078D37B: add     rax, 8
 * 000000014078D37F: sub     rdx, r13
 * 000000014078D382: jnz     short loc_14078D375
 * 000000014078D384: test    ecx, ecx
 * 000000014078D386: jz      short loc_14078D393
 * 000000014078D388: mov     [rax], r9b
 * 000000014078D38B: add     rax, r13
 * 000000014078D38E: add     ecx, 0FFFFFFFFh
 * 000000014078D391: jnz     short loc_14078D388
 * 000000014078D393: cli
 * 000000014078D394: cmp     byte ptr cs:KdDebuggerNotPresent, r9b
 * 000000014078D39B: jnz     short loc_14078D39F
 * 000000014078D39D: jmp     short loc_14078D39D
 * 000000014078D39F: sti
 * 000000014078D3A0: mov     al, r13b
 * 000000014078D3A3: jmp     loc_14077C9F9
 * 000000014078D3A8: xor     r8d, r8d; BugCheckParameter2
 * 000000014078D3AB: mov     [rbp+1C70h+var_1ABC], 9E800h
 * 000000014078D3B5: mov     ecx, [rbp+1C70h+var_1ABC]
 * 000000014078D3BB: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D3BE: mov     qword ptr [rsp+1D70h+CompressedBufferSize], 0Bh; BugCheckParameter4
 * 000000014078D3C7: lea     edx, [r8+2]; BugCheckParameter1
 * 000000014078D3CB: call    KeBugCheckEx
 * 000000014078D3D1: mov     [rbp+1C70h+var_1AB8], 9E800h
 * 000000014078D3DB: mov     ecx, [rbp+1C70h+var_1AB8]
 * 000000014078D3E1: movsxd  r9, edx; BugCheckParameter3
 * 000000014078D3E4: mov     edx, 0Ch; BugCheckParameter1
 * 000000014078D3E9: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D3EC: movsxd  r8, ebx; BugCheckParameter2
 * 000000014078D3EF: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D3F4: call    KeBugCheckEx
 * 000000014078D3FA: mov     eax, [rbp+1C70h+var_1AB4]
 * 000000014078D400: lea     r9, cs:140000000h; BugCheckParameter3
 * 000000014078D407: mov     [rbp+1C70h+var_1958], 9E800h
 * 000000014078D411: mov     edx, 0Eh; BugCheckParameter1
 * 000000014078D416: mov     ecx, [rbp+1C70h+var_1958]
 * 000000014078D41C: mov     r8, [rbp+1C70h+BugCheckParameter2]; BugCheckParameter2
 * 000000014078D423: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D426: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D42B: call    KeBugCheckEx
 * 000000014078D431: mov     [rbp+1C70h+var_1C4C], 9E800h
 * 000000014078D438: lea     r9, cs:140000000h; BugCheckParameter3
 * 000000014078D43F: mov     ecx, [rbp+1C70h+var_1C4C]
 * 000000014078D442: mov     edx, 0Fh; BugCheckParameter1
 * 000000014078D447: mov     r8, [rbp+1C70h+BugCheckParameter2]; BugCheckParameter2
 * 000000014078D44E: cdqe
 * 000000014078D450: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D453: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D458: call    KeBugCheckEx
 * 000000014078D45E: mov     edx, ecx
 * 000000014078D460: mov     r9, r8; BugCheckParameter3
 * 000000014078D463: xor     rdx, rax
 * 000000014078D466: mov     [rbp+1C70h+var_1C20], 9E800h
 * 000000014078D46D: mov     ecx, [rbp+1C70h+var_1C20]
 * 000000014078D470: mov     r8, rbx; BugCheckParameter2
 * 000000014078D473: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rdx; BugCheckParameter4
 * 000000014078D478: mov     edx, 10h; BugCheckParameter1
 * 000000014078D47D: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D480: call    KeBugCheckEx
 * 000000014078D486: mov     [rbp+1C70h+var_1C1C], 9E800h
 * 000000014078D48D: mov     r9, r8; BugCheckParameter3
 * 000000014078D490: mov     ecx, [rbp+1C70h+var_1C1C]
 * 000000014078D493: mov     r8, rbx; BugCheckParameter2
 * 000000014078D496: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rdx; BugCheckParameter4
 * 000000014078D49B: mov     edx, 11h; BugCheckParameter1
 * 000000014078D4A0: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D4A3: call    KeBugCheckEx
 * 000000014078D4A9: mov     dword ptr [rbp+1C70h+var_1C18+4], 9E800h
 * 000000014078D4B0: mov     r9, rdi; BugCheckParameter3
 * 000000014078D4B3: mov     ecx, dword ptr [rbp+1C70h+var_1C18+4]
 * 000000014078D4B6: mov     eax, ebx
 * 000000014078D4B8: mov     r8d, edx; BugCheckParameter2
 * 000000014078D4BB: mov     edx, 9; BugCheckParameter1
 * 000000014078D4C0: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D4C3: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D4C8: call    KeBugCheckEx
 * 000000014078D4CE: mov     eax, edx
 * 000000014078D4D0: mov     edx, 12h; BugCheckParameter1
 * 000000014078D4D5: mov     [rbp+1C70h+var_1BE4], 9E800h
 * 000000014078D4DF: mov     ecx, [rbp+1C70h+var_1BE4]
 * 000000014078D4E5: mov     r9, [rbp+1C70h+ImageBase]; BugCheckParameter3
 * 000000014078D4EC: mov     r8, [rbp+1C70h+var_BB0]; BugCheckParameter2
 * 000000014078D4F3: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D4F6: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D4FB: call    KeBugCheckEx
 * 000000014078D501: mov     eax, edx
 * 000000014078D503: mov     edx, 12h; BugCheckParameter1
 * 000000014078D508: mov     [rbp+1C70h+var_1B64], 9E800h
 * 000000014078D512: mov     ecx, [rbp+1C70h+var_1B64]
 * 000000014078D518: mov     r9, [rbp+1C70h+BugCheckParameter3]; BugCheckParameter3
 * 000000014078D51F: mov     r8, [rbp+1C70h+var_B60]; BugCheckParameter2
 * 000000014078D526: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D529: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D52E: call    KeBugCheckEx
 * 000000014078D534: xor     edx, edx
 * 000000014078D536: mov     [rbp+1C70h+var_1B38], 9E800h
 * 000000014078D540: mov     ecx, [rbp+1C70h+var_1B38]
 * 000000014078D546: mov     r9, rax; BugCheckParameter3
 * 000000014078D549: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rdx; BugCheckParameter4
 * 000000014078D54E: xor     r8d, r8d; BugCheckParameter2
 * 000000014078D551: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D554: mov     rdx, r15; BugCheckParameter1
 * 000000014078D557: call    KeBugCheckEx
 * 000000014078D55D: mov     [rbp+1C70h+var_1AE4], 9E800h
 * 000000014078D567: xor     eax, eax
 * 000000014078D569: mov     ecx, [rbp+1C70h+var_1AE4]
 * 000000014078D56F: xor     r9d, r9d; BugCheckParameter3
 * 000000014078D572: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D575: xor     r8d, r8d; BugCheckParameter2
 * 000000014078D578: xor     edx, edx; BugCheckParameter1
 * 000000014078D57A: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D57F: call    KeBugCheckEx
 * 000000014078D585: xor     r8d, r8d; BugCheckParameter2
 * 000000014078D588: mov     [rbp+1C70h+var_1ADC], 9E800h
 * 000000014078D592: mov     ecx, [rbp+1C70h+var_1ADC]
 * 000000014078D598: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D59B: mov     qword ptr [rsp+1D70h+CompressedBufferSize], r12; BugCheckParameter4
 * 000000014078D5A0: lea     edx, [r8+4]; BugCheckParameter1
 * 000000014078D5A4: call    KeBugCheckEx
 * 000000014078D5AA: mov     r8d, r15d; BugCheckParameter2
 * 000000014078D5AD: mov     rdx, r13; BugCheckParameter1
 * 000000014078D5B0: mov     [rbp+1C70h+var_1AD4], 9E800h
 * 000000014078D5BA: mov     ecx, [rbp+1C70h+var_1AD4]
 * 000000014078D5C0: mov     rax, [rbp+1C70h+BaseAddress]
 * 000000014078D5C7: mov     r9, [rbp+r8*8+1C70h+PcValue]; BugCheckParameter3
 * 000000014078D5CF: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D5D2: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D5D7: call    KeBugCheckEx
 * 000000014078D5DD: mov     eax, edx
 * 000000014078D5DF: mov     edx, 12h; BugCheckParameter1
 * 000000014078D5E4: mov     [rbp+1C70h+var_1AD0], 9E800h
 * 000000014078D5EE: mov     ecx, [rbp+1C70h+var_1AD0]
 * 000000014078D5F4: mov     r9, [rbp+1C70h+var_AD8]; BugCheckParameter3
 * 000000014078D5FB: mov     r8, [rbp+1C70h+var_AC0]; BugCheckParameter2
 * 000000014078D602: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D605: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D60A: call    KeBugCheckEx
 * 000000014078D610: mov     r9, [rbx]; BugCheckParameter3
 * 000000014078D613: mov     edx, 13h; BugCheckParameter1
 * 000000014078D618: mov     [rbp+1C70h+var_1AAC], 9E800h
 * 000000014078D622: mov     ecx, [rbp+1C70h+var_1AAC]
 * 000000014078D628: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D62B: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rbx; BugCheckParameter4
 * 000000014078D630: call    KeBugCheckEx
 * 000000014078D636: mov     r8, [rsp+1D70h+var_1D20]; BugCheckParameter2
 * 000000014078D63B: mov     r9d, 2; BugCheckParameter3
 * 000000014078D641: mov     [rbp+1C70h+var_1AA0], 9E800h
 * 000000014078D64B: mov     ecx, [rbp+1C70h+var_1AA0]
 * 000000014078D651: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D654: lea     edx, [r9+8]; BugCheckParameter1
 * 000000014078D658: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D65D: call    KeBugCheckEx
 * 000000014078D663: mov     r9d, 3; BugCheckParameter3
 * 000000014078D669: mov     [rbp+1C70h+var_1A88], 9E800h
 * 000000014078D673: mov     ecx, [rbp+1C70h+var_1A88]
 * 000000014078D679: mov     r8, r15; BugCheckParameter2
 * 000000014078D67C: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D67F: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D684: lea     edx, [r9+7]; BugCheckParameter1
 * 000000014078D688: call    KeBugCheckEx
 * 000000014078D68E: mov     r8, [rsp+1D70h+var_1D00]; BugCheckParameter2
 * 000000014078D693: mov     r9d, 2; BugCheckParameter3
 * 000000014078D699: mov     [rbp+1C70h+var_1A8C], 9E800h
 * 000000014078D6A3: mov     ecx, [rbp+1C70h+var_1A8C]
 * 000000014078D6A9: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D6AC: lea     edx, [r9+8]; BugCheckParameter1
 * 000000014078D6B0: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D6B5: call    KeBugCheckEx
 * 000000014078D6BB: xor     r9d, r9d; BugCheckParameter3
 * 000000014078D6BE: mov     [rbp+1C70h+var_1AA8], 9E800h
 * 000000014078D6C8: mov     ecx, [rbp+1C70h+var_1AA8]
 * 000000014078D6CE: mov     r8, r15; BugCheckParameter2
 * 000000014078D6D1: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D6D4: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D6D9: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 000000014078D6DD: call    KeBugCheckEx
 * 000000014078D6E3: mov     r8, [rsp+1D70h+var_1D20]; BugCheckParameter2
 * 000000014078D6E8: mov     r9, r13; BugCheckParameter3
 * 000000014078D6EB: mov     [rbp+1C70h+var_1AA4], 9E800h
 * 000000014078D6F5: mov     edx, 0Ah; BugCheckParameter1
 * 000000014078D6FA: mov     ecx, [rbp+1C70h+var_1AA4]
 * 000000014078D700: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D703: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D708: call    KeBugCheckEx
 * 000000014078D70E: mov     r9d, 3; BugCheckParameter3
 * 000000014078D714: mov     [rbp+1C70h+var_1A9C], 9E800h
 * 000000014078D71E: mov     ecx, [rbp+1C70h+var_1A9C]
 * 000000014078D724: mov     r8, r15; BugCheckParameter2
 * 000000014078D727: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D72A: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D72F: lea     edx, [r9+7]; BugCheckParameter1
 * 000000014078D733: call    KeBugCheckEx
 * 000000014078D739: mov     r8, [rsp+1D70h+var_1D20]; BugCheckParameter2
 * 000000014078D73E: mov     r9d, 6; BugCheckParameter3
 * 000000014078D744: mov     [rbp+1C70h+var_1A98], 9E800h
 * 000000014078D74E: mov     ecx, [rbp+1C70h+var_1A98]
 * 000000014078D754: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D757: lea     edx, [r9+4]; BugCheckParameter1
 * 000000014078D75B: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D760: call    KeBugCheckEx
 * 000000014078D766: xor     r9d, r9d; BugCheckParameter3
 * 000000014078D769: mov     [rbp+1C70h+var_1A94], 9E800h
 * 000000014078D773: mov     ecx, [rbp+1C70h+var_1A94]
 * 000000014078D779: mov     r8, r15; BugCheckParameter2
 * 000000014078D77C: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D77F: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D784: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 000000014078D788: call    KeBugCheckEx
 * 000000014078D78E: mov     r8, [rsp+1D70h+var_1D00]; BugCheckParameter2
 * 000000014078D793: mov     r9, r13; BugCheckParameter3
 * 000000014078D796: mov     [rbp+1C70h+var_1A90], 9E800h
 * 000000014078D7A0: mov     edx, 0Ah; BugCheckParameter1
 * 000000014078D7A5: mov     ecx, [rbp+1C70h+var_1A90]
 * 000000014078D7AB: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D7AE: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D7B3: call    KeBugCheckEx
 * 000000014078D7B9: mov     r8, [rsp+1D70h+var_1D00]; BugCheckParameter2
 * 000000014078D7BE: mov     r9d, 6; BugCheckParameter3
 * 000000014078D7C4: mov     [rbp+1C70h+var_1A84], 9E800h
 * 000000014078D7CE: mov     ecx, [rbp+1C70h+var_1A84]
 * 000000014078D7D4: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D7D7: lea     edx, [r9+4]; BugCheckParameter1
 * 000000014078D7DB: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D7E0: call    KeBugCheckEx
 * 000000014078D7E6: mov     r8, [rsp+1D70h+var_1D20]; BugCheckParameter2
 * 000000014078D7EB: mov     r9d, 3; BugCheckParameter3
 * 000000014078D7F1: mov     [rbp+1C70h+var_1A70], 9E800h
 * 000000014078D7FB: mov     ecx, [rbp+1C70h+var_1A70]
 * 000000014078D801: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D804: lea     edx, [r9+7]; BugCheckParameter1
 * 000000014078D808: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D80D: call    KeBugCheckEx
 * 000000014078D813: mov     r8, [rsp+1D70h+var_1D20]; BugCheckParameter2
 * 000000014078D818: mov     r9d, 2; BugCheckParameter3
 * 000000014078D81E: mov     [rbp+1C70h+var_1A74], 9E800h
 * 000000014078D828: mov     ecx, [rbp+1C70h+var_1A74]
 * 000000014078D82E: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D831: lea     edx, [r9+8]; BugCheckParameter1
 * 000000014078D835: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D83A: call    KeBugCheckEx
 * 000000014078D840: xor     r9d, r9d; BugCheckParameter3
 * 000000014078D843: mov     [rbp+1C70h+var_1A7C], 9E800h
 * 000000014078D84D: mov     ecx, [rbp+1C70h+var_1A7C]
 * 000000014078D853: mov     r8, rbx; BugCheckParameter2
 * 000000014078D856: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D859: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D85E: lea     edx, [r9+0Ah]; BugCheckParameter1
 * 000000014078D862: call    KeBugCheckEx
 * 000000014078D868: mov     r8, [rsp+1D70h+var_1D20]; BugCheckParameter2
 * 000000014078D86D: mov     r9, r13; BugCheckParameter3
 * 000000014078D870: mov     [rbp+1C70h+var_1A78], 9E800h
 * 000000014078D87A: mov     edx, 0Ah; BugCheckParameter1
 * 000000014078D87F: mov     ecx, [rbp+1C70h+var_1A78]
 * 000000014078D885: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D888: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D88D: call    KeBugCheckEx
 * 000000014078D893: mov     r8, [rsp+1D70h+var_1D20]; BugCheckParameter2
 * 000000014078D898: mov     r9d, 6; BugCheckParameter3
 * 000000014078D89E: mov     [rbp+1C70h+var_1A6C], 9E800h
 * 000000014078D8A8: mov     ecx, [rbp+1C70h+var_1A6C]
 * 000000014078D8AE: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D8B1: lea     edx, [r9+4]; BugCheckParameter1
 * 000000014078D8B5: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D8BA: call    KeBugCheckEx
 * 000000014078D8C0: mov     eax, edx
 * 000000014078D8C2: mov     edx, 12h; BugCheckParameter1
 * 000000014078D8C7: mov     [rbp+1C70h+var_19C0], 9E800h
 * 000000014078D8D1: mov     ecx, [rbp+1C70h+var_19C0]
 * 000000014078D8D7: mov     r9, [rbp+1C70h+var_A88]; BugCheckParameter3
 * 000000014078D8DE: mov     r8, [rbp+1C70h+var_A70]; BugCheckParameter2
 * 000000014078D8E5: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D8E8: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D8ED: call    KeBugCheckEx
 * 000000014078D8F3: mov     eax, [rdi+10h]
 * 000000014078D8F6: mov     r8, r15; BugCheckParameter2
 * 000000014078D8F9: mov     r9, [rdi+8]; BugCheckParameter3
 * 000000014078D8FD: mov     edx, 0Dh; BugCheckParameter1
 * 000000014078D902: mov     [rbp+1C70h+var_1964], 9E800h
 * 000000014078D90C: mov     ecx, [rbp+1C70h+var_1964]
 * 000000014078D912: ror     ecx, 0Bh; BugCheckCode
 * 000000014078D915: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rax; BugCheckParameter4
 * 000000014078D91A: call    KeBugCheckEx
 * 000000014078D920: mov     rax, [rdx+490h]
 * 000000014078D927: lock bts qword ptr [rax], 0
 * 000000014078D92D: mov     [r15+608h], r9
 * 000000014078D934: mov     rdx, r10
 * 000000014078D937: mov     [r15+688h], r9
 * 000000014078D93E: mov     r9, rdi
 * 000000014078D941: mov     rax, [rbp+1C70h+var_10B0]
 * 000000014078D948: mov     [rsp+1D70h+WorkSpace], r14
 * 000000014078D94D: mov     rcx, [rax+140h]
 * 000000014078D954: mov     [rsp+1D70h+FinalUncompressedSize], rcx
 * 000000014078D959: mov     ecx, 109h
 * 000000014078D95E: mov     qword ptr [rsp+1D70h+CompressedBufferSize], rbx
 * 000000014078D963: call    SdbpCheckDll
 */
