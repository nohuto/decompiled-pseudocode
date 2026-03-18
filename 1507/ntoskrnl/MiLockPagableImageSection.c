/*
 * XREFs of MiLockPagableImageSection @ 0x140010490
 * Callers:
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 *     MmUnlockPagableImageSection @ 0x140010480 (MmUnlockPagableImageSection.c)
 *     IopLiveDumpUnLockPages @ 0x1401F8D50 (IopLiveDumpUnLockPages.c)
 *     MmLockPagableSectionByHandle @ 0x1404251E8 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x14052F798 (MmLockPagableDataSection.c)
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 *     IopLiveDumpLockPages @ 0x140677FA8 (IopLiveDumpLockPages.c)
 *     PnprLockPagesForReplace @ 0x140690668 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 *     MiLockPagableSections @ 0x1407C9688 (MiLockPagableSections.c)
 *     KiInitializeMTRR @ 0x1407D292C (KiInitializeMTRR.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     MiLookupDataTableEntry @ 0x140010760 (MiLookupDataTableEntry.c)
 *     MmLockLoadedModuleListShared @ 0x140010828 (MmLockLoadedModuleListShared.c)
 *     MiUnlockImageSection @ 0x140010874 (MiUnlockImageSection.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiLockImageSection @ 0x1404251F4 (MiLockImageSection.c)
 */

void __fastcall MiLockPagableImageSection(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rsi
  __int64 v4; // rdi
  char *v5; // rbp
  PIMAGE_NT_HEADERS v6; // r8
  ULONG_PTR BugCheckParameter4; // r9
  __int64 v8; // rdx
  unsigned int v9; // r9d
  unsigned __int64 v10; // r10
  __int64 v11; // r11
  unsigned __int64 SectionAlignment; // rcx
  __int64 v13; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]
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
      v4 = MiLookupDataTableEntry(BugCheckParameter2, 1LL);
      if ( !v4 )
        KeBugCheckEx(0x1Au, 0x1012uLL, BugCheckParameter2, v2, 0LL);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&PsLoadedModuleSpinLock, retaddr);
      }
      else
      {
        _InterlockedAnd(&PsLoadedModuleSpinLock, 0xBFFFFFFF);
        _InterlockedDecrement(&PsLoadedModuleSpinLock);
      }
      __writecr8(v15);
      v5 = *(char **)(v4 + 48);
      v6 = RtlImageNtHeader(v5);
      BugCheckParameter4 = v6->FileHeader.NumberOfSections;
      v8 = (__int64)(BugCheckParameter2 - v6->FileHeader.SizeOfOptionalHeader - (_QWORD)v6 - 24) / 40;
      if ( (unsigned int)v8 >= (unsigned int)BugCheckParameter4 )
        KeBugCheckEx(0x1Au, 0x1013uLL, BugCheckParameter2 | v2, (unsigned int)v8, BugCheckParameter4);
      v9 = *(_DWORD *)(BugCheckParameter2 + 8);
      if ( *(_DWORD *)(BugCheckParameter2 + 16) >= v9 )
        v9 = *(_DWORD *)(BugCheckParameter2 + 16);
      v10 = (unsigned __int64)&v5[*(unsigned int *)(BugCheckParameter2 + 12)];
      v11 = *(_QWORD *)(v4 + 224) + 4LL * (unsigned int)v8;
      SectionAlignment = v6->OptionalHeader.SectionAlignment;
      v13 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( SectionAlignment > 0x1000 )
        SectionAlignment = 4096LL;
      if ( (_DWORD)v2 == 1 )
        MiLockImageSection(
          v4,
          v11,
          v13,
          ((((~(SectionAlignment - 1) & (SectionAlignment + v9 + v10 - 1)) + 4095) >> 9) & 0x7FFFFFFFF8LL)
        - 0x98000000008LL);
      else
        MiUnlockImageSection(
          v11,
          v13,
          ((((~(SectionAlignment - 1) & (SectionAlignment + v9 + v10 - 1)) + 4095) >> 9) & 0x7FFFFFFFF8LL)
        - 0x98000000008LL,
          BugCheckParameter2);
    }
  }
}
