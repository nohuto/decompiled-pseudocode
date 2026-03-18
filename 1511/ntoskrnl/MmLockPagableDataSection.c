/*
 * XREFs of MmLockPagableDataSection @ 0x1403CF528
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1406B6A08 (VfInitSystemNoRebootNeeded.c)
 *     VerifierMmLockPagableDataSection @ 0x1406C0AC8 (VerifierMmLockPagableDataSection.c)
 *     BgkpLockBgfxCodeSection @ 0x1406D9690 (BgkpLockBgfxCodeSection.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 *     MiLockPagableSections @ 0x14074CDD0 (MiLockPagableSections.c)
 *     HeadlessInit @ 0x14077250C (HeadlessInit.c)
 * Callees:
 *     MiReleaseResourceLite @ 0x14001A338 (MiReleaseResourceLite.c)
 *     MiAcquireResourceExclusiveLite @ 0x14001A35C (MiAcquireResourceExclusiveLite.c)
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 *     MiLockPagableImageSection @ 0x140035BD8 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

PVOID __stdcall MmLockPagableDataSection(PVOID AddressWithinSection)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v3; // rdi
  _BYTE *v4; // rcx
  char *v5; // rsi
  PIMAGE_NT_HEADERS v6; // rax
  int v7; // r8d
  unsigned int NumberOfSections; // r9d
  _DWORD *v9; // rdx
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax

  if ( (*(_BYTE *)(8 * (((unsigned __int64)AddressWithinSection >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
    && (*(_BYTE *)((((unsigned __int64)AddressWithinSection >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
    && (*(_BYTE *)MiGetPdeAddress((unsigned __int64)AddressWithinSection) & 0x81) == 0x81 )
  {
    return (PVOID)1;
  }
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  MiAcquireResourceExclusiveLite((__int64)CurrentThread);
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
  MiReleaseResourceLite((__int64)CurrentThread);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x1234uLL, (ULONG_PTR)AddressWithinSection, 0LL, 0LL);
  MiLockPagableImageSection((ULONG_PTR)v3, 1uLL);
  return v3;
}
