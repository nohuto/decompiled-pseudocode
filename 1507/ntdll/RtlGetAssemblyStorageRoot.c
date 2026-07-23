/*
 * XREFs of RtlGetAssemblyStorageRoot @ 0x180053150
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x180024D44 (sxsisol_SearchActCtxForDllName.c)
 * Callees:
 *     DbgPrintEx @ 0x18000F9B0 (DbgPrintEx.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x18005329C (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x18005381C (RtlpResolveAssemblyStorageMapEntry.c)
 */

__int64 __fastcall RtlGetAssemblyStorageRoot(int a1, void *a2, unsigned int a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r10d
  __int64 v8; // rdi
  int ActivationContextDataStorageMapAndRosterHeader; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  int v12; // eax
  __int64 v13; // rax
  _QWORD v15[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  a5 = 0LL;
  v16 = 0LL;
  v15[0] = 0LL;
  v7 = (unsigned int)NtCurrentPeb();
  v8 = a3;
  if ( a2 == &unk_1801021A8 )
  {
    DbgPrintEx(0x33u, 0, "SXS: %s() passed the empty activation context\n", "RtlGetAssemblyStorageRoot");
    return (unsigned int)-1073741811;
  }
  if ( a4 )
    *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a3 || !a4 || !RtlpAssemblyStorageMapResolutionDefaultCallback )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters:\n"
      "SXS:    Flags              : 0x%lx\n"
      "SXS:    AssemblyRosterIndex: 0x%lx\n"
      "SXS:    AssemblyStorageRoot: %p\n"
      "SXS:    Callback           : %p\n",
      "RtlGetAssemblyStorageRoot",
      a1,
      a3,
      a4,
      RtlpAssemblyStorageMapResolutionDefaultCallback);
    return (unsigned int)-1073741811;
  }
  ActivationContextDataStorageMapAndRosterHeader = RtlpGetActivationContextDataStorageMapAndRosterHeader(
                                                     a1 & 3,
                                                     v7,
                                                     (_DWORD)a2,
                                                     (unsigned int)&a5,
                                                     (__int64)&v16,
                                                     (__int64)v15);
  v10 = ActivationContextDataStorageMapAndRosterHeader;
  if ( ActivationContextDataStorageMapAndRosterHeader < 0 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: RtlGetAssemblyStorageRoot() unable to get activation context data, storage map and assembly roster header.  S"
      "tatus = 0x%08lx\n",
      (unsigned int)ActivationContextDataStorageMapAndRosterHeader);
    return v10;
  }
  if ( !a5 )
    return 0;
  if ( !v15[0] || !v16 )
    return (unsigned int)-1073741595;
  v11 = *(_DWORD *)(v15[0] + 8LL);
  if ( (unsigned int)v8 >= v11 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() bad parameters AssemblyRosterIndex 0x%lx >= AssemblyRosterHeader->EntryCount: 0x%lx\n",
      "RtlGetAssemblyStorageRoot",
      v8,
      v11);
    return (unsigned int)-1073741811;
  }
  v12 = RtlpResolveAssemblyStorageMapEntry(
          v16,
          a5,
          (unsigned int)v8,
          RtlpAssemblyStorageMapResolutionDefaultCallback,
          a6);
  v10 = v12;
  if ( v12 < 0 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: RtlGetAssemblyStorageRoot() unable to resolve storage map entry.  Status = 0x%08lx\n",
      (unsigned int)v12);
    return v10;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8 * v8);
  if ( !v13 )
    return (unsigned int)-1073741595;
  *a4 = v13 + 8;
  return 0;
}
