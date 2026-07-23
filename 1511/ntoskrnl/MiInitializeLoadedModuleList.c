/*
 * XREFs of MiInitializeLoadedModuleList @ 0x14074BAF4
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     MiConstructLoaderEntry @ 0x1403CE188 (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x1403CFEB0 (MiLockdownSections.c)
 *     NtSetDebugFilterState @ 0x140520B30 (NtSetDebugFilterState.c)
 *     MiBuildImportsForBootDrivers @ 0x14074BBEC (MiBuildImportsForBootDrivers.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x14074BEE8 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     MiLocateKernelSections @ 0x14074BF70 (MiLocateKernelSections.c)
 */

__int64 __fastcall MiInitializeLoadedModuleList(__int64 a1)
{
  __int64 *v2; // rsi
  __int64 v3; // rbx
  char *v4; // rdi
  PVOID v5; // rcx
  char *v7; // [rsp+40h] [rbp+8h] BYREF

  qword_1402FE510 = (__int64)&qword_1402FE508;
  qword_1402FE508 = (__int64)&qword_1402FE508;
  ExInitializeResourceLite(&PsLoadedModuleResource);
  ExpCovPushLock = 0LL;
  *(&PsLoadedModuleList + 1) = &PsLoadedModuleList;
  PsLoadedModuleList = &PsLoadedModuleList;
  qword_1402D5848 = (__int64)&ExpCovUnloadedModuleList;
  ExpCovUnloadedModuleList = (__int64)&ExpCovUnloadedModuleList;
  NtSetDebugFilterState(0x7Eu, 0, 1u);
  v2 = (__int64 *)(a1 + 16);
  v3 = *v2;
  MiLocateKernelSections(*v2);
  while ( 1 )
  {
    if ( (__int64 *)v3 == v2 )
    {
      MiBuildImportsForBootDrivers();
      return 1LL;
    }
    if ( (int)MiConstructLoaderEntry(v3, (const void **)(v3 + 88), (unsigned __int16 *)(v3 + 72), 0, 1, &v7) < 0 )
      break;
    v4 = v7;
    v5 = (PVOID)*((_QWORD *)v7 + 6);
    if ( v5 == PsNtosImageBase )
      RtlCreateInvertedFunctionTableCacheEntry(v5, *((unsigned int *)v7 + 16));
    MiLockdownSections((__int64)v4);
    v3 = *(_QWORD *)v3;
  }
  return 0LL;
}
