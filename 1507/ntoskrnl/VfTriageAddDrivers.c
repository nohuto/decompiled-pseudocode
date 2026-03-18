/*
 * XREFs of VfTriageAddDrivers @ 0x1407FBC10
 * Callers:
 *     VfInitBootDriversLoaded @ 0x1407CBEA0 (VfInitBootDriversLoaded.c)
 * Callees:
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     TriageGetLoaderEntry @ 0x140272458 (TriageGetLoaderEntry.c)
 *     VfDriverLock @ 0x1407326C0 (VfDriverLock.c)
 *     VfDriverUnlock @ 0x1407391EC (VfDriverUnlock.c)
 *     VfSuspectDriversAllocateEntry @ 0x140749ECC (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectDriversInsert @ 0x14074A148 (VfSuspectDriversInsert.c)
 *     TriageGetDriverCount @ 0x1407FD73C (TriageGetDriverCount.c)
 */

__int64 __fastcall VfTriageAddDrivers(__int64 a1)
{
  __int64 v3; // r14
  unsigned int v4; // esi
  unsigned int i; // edi
  __int64 LoaderEntry; // rax
  const void **v7; // rbx
  __int64 *Entry; // rbx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (VerifierTriageActionTaken & 0x40000000) == 0 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: no suspect drivers will be selected for verification.\n");
    return 0LL;
  }
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: will select target drivers for verification.\n");
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 40LL);
  if ( (int)TriageGetDriverCount(v3, &v9) < 0 )
    return 0LL;
  v4 = 0;
  for ( i = 0; i < v9; ++i )
  {
    LoaderEntry = TriageGetLoaderEntry(v3, i);
    if ( LoaderEntry && (*(_DWORD *)(LoaderEntry + 104) & 0x8000000) == 0 )
    {
      v7 = (const void **)(LoaderEntry + 88);
      DbgPrintEx(0x5Du, 3u, "VfTriageAddDrivers: Marking %wZ for verification when it is loaded\n", LoaderEntry + 88);
      Entry = (__int64 *)VfSuspectDriversAllocateEntry(v7);
      if ( Entry )
      {
        VfDriverLock();
        VfSuspectDriversInsert(Entry);
        VfDriverUnlock();
        v4 = 1;
      }
    }
  }
  return v4;
}
