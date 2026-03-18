/*
 * XREFs of MiLockPagableImageSection @ 0x140035BD8
 * Callers:
 *     IoDeleteDevice @ 0x1400D0DC8 (IoDeleteDevice.c)
 *     MmUnlockPagableImageSection @ 0x1400EBD44 (MmUnlockPagableImageSection.c)
 *     IopLiveDumpUnLockPages @ 0x1401BD4C4 (IopLiveDumpUnLockPages.c)
 *     MmLockPagableDataSection @ 0x1403CF528 (MmLockPagableDataSection.c)
 *     MmLockPagableSectionByHandle @ 0x1404B6838 (MmLockPagableSectionByHandle.c)
 *     PpmReapplyPerfPolicy @ 0x140537218 (PpmReapplyPerfPolicy.c)
 *     IopLiveDumpLockPages @ 0x1405FD660 (IopLiveDumpLockPages.c)
 *     PnprLockPagesForReplace @ 0x1406108F4 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 *     MiLockPagableSections @ 0x14074CDD0 (MiLockPagableSections.c)
 *     KiInitializeMTRR @ 0x14074E92C (KiInitializeMTRR.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x140032BA0 (MmLockLoadedModuleListShared.c)
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 *     MmUnlockLoadedModuleListShared @ 0x140035BB8 (MmUnlockLoadedModuleListShared.c)
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     MiUnlockImageSection @ 0x1400D25F0 (MiUnlockImageSection.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MiLockImageSection @ 0x140498AE4 (MiLockImageSection.c)
 */

void __fastcall MiLockPagableImageSection(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rsi
  PVOID *v4; // rdi
  char *v5; // rbp
  PIMAGE_NT_HEADERS v6; // r9
  ULONG_PTR BugCheckParameter4; // r8
  __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r11
  unsigned __int64 SectionAlignment; // rcx
  unsigned __int64 v14; // r8
  unsigned __int8 v15; // [rsp+40h] [rbp+8h] BYREF

  if ( BugCheckParameter2 != 1 )
  {
    v2 = (unsigned int)BugCheckParameter3;
    if ( ((*(_BYTE *)(8 * ((BugCheckParameter2 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
       || (*(_BYTE *)(((BugCheckParameter2 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
       || (*(_BYTE *)(((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) != 0x81)
      && BugCheckParameter2 + 0x70000000000LL > 0x7FFFFFFFFFLL )
    {
      MmLockLoadedModuleListShared(&v15);
      v4 = MiLookupDataTableEntry(BugCheckParameter2, 1);
      if ( !v4 )
        KeBugCheckEx(0x1Au, 0x1012uLL, BugCheckParameter2, v2, 0LL);
      MmUnlockLoadedModuleListShared(v15);
      v5 = (char *)v4[6];
      v6 = RtlImageNtHeader(v5);
      BugCheckParameter4 = v6->FileHeader.NumberOfSections;
      v8 = (__int64)(BugCheckParameter2 - v6->FileHeader.SizeOfOptionalHeader - (_QWORD)v6 - 24) / 40;
      if ( (unsigned int)v8 >= (unsigned int)BugCheckParameter4 )
        KeBugCheckEx(0x1Au, 0x1013uLL, BugCheckParameter2 | v2, (unsigned int)v8, BugCheckParameter4);
      v9 = *(_DWORD *)(BugCheckParameter2 + 8);
      if ( *(_DWORD *)(BugCheckParameter2 + 16) >= v9 )
        v9 = *(_DWORD *)(BugCheckParameter2 + 16);
      v10 = (unsigned int)v8;
      v11 = (unsigned __int64)&v5[*(unsigned int *)(BugCheckParameter2 + 12)];
      v12 = (__int64)v4[28] + 4 * v10;
      SectionAlignment = v6->OptionalHeader.SectionAlignment;
      if ( SectionAlignment > 0x1000 )
        SectionAlignment = 4096LL;
      v14 = ((((~(SectionAlignment - 1) & (SectionAlignment + v9 + v11 - 1)) + 4095) >> 9) & 0x7FFFFFFFF8LL)
          - 0x98000000008LL;
      if ( (_DWORD)v2 == 1 )
        MiLockImageSection(v4, v12, ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v14);
      else
        MiUnlockImageSection(v12, ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v14, BugCheckParameter2);
    }
  }
}
