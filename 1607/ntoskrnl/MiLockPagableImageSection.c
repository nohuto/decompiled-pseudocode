/*
 * XREFs of MiLockPagableImageSection @ 0x140014884
 * Callers:
 *     IoDeleteDevice @ 0x14007F30C (IoDeleteDevice.c)
 *     MmUnlockPagableImageSection @ 0x1400AC6FC (MmUnlockPagableImageSection.c)
 *     IopLiveDumpUnLockPages @ 0x1401CB49C (IopLiveDumpUnLockPages.c)
 *     MmLockPagableDataSection @ 0x1404830A8 (MmLockPagableDataSection.c)
 *     MmLockPagableSectionByHandle @ 0x1404DC9CC (MmLockPagableSectionByHandle.c)
 *     PpmReapplyPerfPolicy @ 0x140569F90 (PpmReapplyPerfPolicy.c)
 *     IopLiveDumpLockPages @ 0x1406272D4 (IopLiveDumpLockPages.c)
 *     PnprLockPagesForReplace @ 0x140644D00 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x14064F040 (KiStartDynamicProcessor.c)
 *     KiInitializeMTRR @ 0x14079232C (KiInitializeMTRR.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 *     MiLockPagableSections @ 0x1407A41E0 (MiLockPagableSections.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140014238 (RtlImageNtHeader.c)
 *     MmUnlockLoadedModuleListShared @ 0x140014A04 (MmUnlockLoadedModuleListShared.c)
 *     MiLookupDataTableEntry @ 0x140014A30 (MiLookupDataTableEntry.c)
 *     MmLockLoadedModuleListShared @ 0x14001F5A0 (MmLockLoadedModuleListShared.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025FB0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockImageSection @ 0x140083B04 (MiUnlockImageSection.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     MiLockImageSection @ 0x140499ABC (MiLockImageSection.c)
 */

void __fastcall MiLockPagableImageSection(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdi
  char *v6; // rbp
  PIMAGE_NT_HEADERS v7; // r9
  ULONG_PTR BugCheckParameter4; // r8
  __int64 v9; // rdx
  unsigned int v10; // r8d
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r11
  unsigned __int64 SectionAlignment; // rcx
  unsigned __int64 v15; // r9
  char v16; // [rsp+50h] [rbp+8h] BYREF

  if ( BugCheckParameter2 != 1 )
  {
    v2 = (unsigned int)BugCheckParameter3;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS()
      && (BugCheckParameter2 < qword_140326910 || BugCheckParameter2 >= qword_140326910 + 0x8000000000LL) )
    {
      MmLockLoadedModuleListShared(&v16);
      v5 = MiLookupDataTableEntry(BugCheckParameter2, 1LL);
      if ( !v5 )
        KeBugCheckEx(0x1Au, 0x1012uLL, BugCheckParameter2, v2, 0LL);
      LOBYTE(v4) = v16;
      MmUnlockLoadedModuleListShared(v4);
      v6 = *(char **)(v5 + 48);
      v7 = RtlImageNtHeader(v6);
      BugCheckParameter4 = v7->FileHeader.NumberOfSections;
      v9 = (__int64)(BugCheckParameter2 - v7->FileHeader.SizeOfOptionalHeader - (_QWORD)v7 - 24) / 40;
      if ( (unsigned int)v9 >= (unsigned int)BugCheckParameter4 )
        KeBugCheckEx(0x1Au, 0x1013uLL, BugCheckParameter2 | v2, (unsigned int)v9, BugCheckParameter4);
      v10 = *(_DWORD *)(BugCheckParameter2 + 8);
      if ( *(_DWORD *)(BugCheckParameter2 + 16) >= v10 )
        v10 = *(_DWORD *)(BugCheckParameter2 + 16);
      v11 = (unsigned int)v9;
      v12 = (unsigned __int64)&v6[*(unsigned int *)(BugCheckParameter2 + 12)];
      v13 = *(_QWORD *)(v5 + 224) + 4 * v11;
      SectionAlignment = v7->OptionalHeader.SectionAlignment;
      if ( SectionAlignment > 0x1000 )
        SectionAlignment = 4096LL;
      v15 = (((~(SectionAlignment - 1) & (v12 + SectionAlignment + v10 - 1LL)) + 4095) >> 9) & 0x7FFFFFFFF8LL;
      if ( (_DWORD)v2 == 1 )
        MiLockImageSection(v5, v13, ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v15 - 0x98000000008LL);
      else
        MiUnlockImageSection(
          v13,
          ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
          v15 - 0x98000000008LL,
          BugCheckParameter2);
    }
  }
}
