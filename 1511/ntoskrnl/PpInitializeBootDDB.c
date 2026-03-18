/*
 * XREFs of PpInitializeBootDDB @ 0x140756EE4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SdbInitDatabaseInMemory @ 0x1403B5E60 (SdbInitDatabaseInMemory.c)
 *     PnpLogEvent @ 0x14060369C (PnpLogEvent.c)
 *     PiInitializeDDBCache @ 0x140755DA8 (PiInitializeDDBCache.c)
 */

__int64 __fastcall PpInitializeBootDDB(__int64 a1, int a2)
{
  __int64 v3; // rax
  unsigned int v4; // ecx
  PVOID PoolWithTag; // rax
  __int64 v6; // rbx
  int v8; // eax
  const WCHAR *v9; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  if ( a2 )
    return 0LL;
  *(_QWORD *)&PpDDBHandle = 0LL;
  PpBootDDB = 0LL;
  ExInitializeResourceLite(&PiDDBLock);
  PiDDBPath = L"\\SystemRoot\\AppPatch\\drvmain.sdb";
  PiInitializeDDBCache();
  if ( InitIsWinPEMode )
    return 3221225473LL;
  v3 = *(_QWORD *)(a1 + 240);
  v4 = *(_DWORD *)(v3 + 72);
  if ( !v4 || !*(_QWORD *)(v3 + 64) )
  {
    if ( (PiLoggedErrorEventsMask & 1) != 0 )
      return 3221225473LL;
    v8 = PiLoggedErrorEventsMask | 1;
    v9 = L"DATABASE NOT LOADED";
LABEL_8:
    PiLoggedErrorEventsMask = v8;
    RtlInitUnicodeString(&DestinationString, v9);
    PnpLogEvent((const void **)&DestinationString, 0LL, -1073740947, 0LL, 0);
    return 3221225473LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x20207050u);
  PpBootDDB = PoolWithTag;
  v6 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(
      PoolWithTag,
      *(const void **)(*(_QWORD *)(a1 + 240) + 64LL),
      *(unsigned int *)(*(_QWORD *)(a1 + 240) + 72LL));
    *(_QWORD *)&PpDDBHandle = SdbInitDatabaseInMemory(v6, *(_DWORD *)(*(_QWORD *)(a1 + 240) + 72LL));
    if ( *(_QWORD *)&PpDDBHandle )
      return 0LL;
    ExFreePoolWithTag(PpBootDDB, 0);
    PpBootDDB = 0LL;
    if ( (PiLoggedErrorEventsMask & 4) != 0 )
      return 3221225473LL;
    v8 = PiLoggedErrorEventsMask | 4;
    v9 = L"INIT DATABASE FAILED";
    goto LABEL_8;
  }
  if ( (PiLoggedErrorEventsMask & 2) == 0 )
  {
    PiLoggedErrorEventsMask |= 2u;
    RtlInitUnicodeString(&DestinationString, L"OUT OF MEMORY");
    PnpLogEvent((const void **)&DestinationString, 0LL, -1073740947, 0LL, 0);
  }
  return 3221225626LL;
}
