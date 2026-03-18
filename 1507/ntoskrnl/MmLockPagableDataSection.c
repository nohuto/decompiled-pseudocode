/*
 * XREFs of MmLockPagableDataSection @ 0x14052F798
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140736CF8 (VfInitSystemNoRebootNeeded.c)
 *     VerifierMmLockPagableDataSection @ 0x140742308 (VerifierMmLockPagableDataSection.c)
 *     BgkpLockBgfxCodeSection @ 0x14075C67C (BgkpLockBgfxCodeSection.c)
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 *     MiLockPagableSections @ 0x1407C9688 (MiLockPagableSections.c)
 *     HeadlessInit @ 0x1407E9094 (HeadlessInit.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140010490 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     MiLookupDataTableEntry @ 0x140010760 (MiLookupDataTableEntry.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

PVOID __stdcall MmLockPagableDataSection(PVOID AddressWithinSection)
{
  struct _KTHREAD *CurrentThread; // rsi
  void *v3; // rdi
  _BYTE *v4; // rcx
  char *v5; // rbp
  PIMAGE_NT_HEADERS v6; // rax
  int v7; // r8d
  unsigned int NumberOfSections; // r9d
  _DWORD *v9; // rdx
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax
  __int16 v12; // ax

  if ( (*(_BYTE *)(8 * (((unsigned __int64)AddressWithinSection >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)((((unsigned __int64)AddressWithinSection >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)((((unsigned __int64)AddressWithinSection >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) == 0x81 )
  {
    return (PVOID)1;
  }
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  v4 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 1)[6];
  v5 = (char *)((_BYTE *)AddressWithinSection - v4);
  v6 = RtlImageNtHeader(v4);
  v7 = 0;
  NumberOfSections = v6->FileHeader.NumberOfSections;
  v9 = (_DWORD *)((char *)&v6->OptionalHeader.Magic + v6->FileHeader.SizeOfOptionalHeader);
  if ( v6->FileHeader.NumberOfSections )
  {
    while ( 1 )
    {
      v10 = v9[2];
      v11 = (unsigned int)v9[3];
      if ( v9[4] >= v10 )
        v10 = v9[4];
      if ( (unsigned __int64)v5 >= v11 && (unsigned __int64)v5 < (unsigned int)v11 + v10 )
        break;
      v9 += 10;
      if ( ++v7 >= NumberOfSections )
        goto LABEL_12;
    }
    v3 = v9;
  }
LABEL_12:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  v12 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x1234uLL, (ULONG_PTR)AddressWithinSection, 0LL, 0LL);
  MiLockPagableImageSection((ULONG_PTR)v3, 1uLL);
  return v3;
}
