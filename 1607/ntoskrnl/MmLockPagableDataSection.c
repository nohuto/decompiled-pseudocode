/*
 * XREFs of MmLockPagableDataSection @ 0x140481DFC
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140703204 (VfInitSystemNoRebootNeeded.c)
 *     BgkpLockBgfxCodeSection @ 0x140725674 (BgkpLockBgfxCodeSection.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 *     MiLockPagableSections @ 0x1407A41E0 (MiLockPagableSections.c)
 *     HeadlessInit @ 0x1407BD2D8 (HeadlessInit.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MiLockPagableImageSection @ 0x140014404 (MiLockPagableImageSection.c)
 *     MiLookupDataTableEntry @ 0x1400145B0 (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140025B30 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiReleaseResourceLite @ 0x140082D74 (MiReleaseResourceLite.c)
 *     MiAcquireResourceExclusiveLite @ 0x140082D98 (MiAcquireResourceExclusiveLite.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

PVOID __stdcall MmLockPagableDataSection(PVOID AddressWithinSection)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v3; // rbx
  _BYTE *v4; // rcx
  char *v5; // rsi
  PIMAGE_NT_HEADERS v6; // rax
  int v7; // r8d
  unsigned int NumberOfSections; // r9d
  _DWORD *v9; // rdx
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return (PVOID)1;
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
        goto LABEL_10;
    }
    v3 = v9;
  }
LABEL_10:
  MiReleaseResourceLite((__int64)CurrentThread);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x1234uLL, (ULONG_PTR)AddressWithinSection, 0LL, 0LL);
  MiLockPagableImageSection((ULONG_PTR)v3, 1uLL);
  return v3;
}
