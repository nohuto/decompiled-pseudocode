/*
 * XREFs of LdrpProcessMappedModule @ 0x18002F928
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002F25C (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002F760 (RtlInsertInvertedFunctionTable.c)
 *     LdrpSignalModuleMapped @ 0x18002F86C (LdrpSignalModuleMapped.c)
 *     LdrpGenRandom @ 0x18002F8CC (LdrpGenRandom.c)
 *     LdrpValidateEntrySection @ 0x18002FAD4 (LdrpValidateEntrySection.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002FB1C (LdrpCfgProcessLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x18002FDC0 (LdrInitSecurityCookie.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall LdrpProcessMappedModule(__int64 a1, int a2)
{
  char *v2; // rsi
  NTSTATUS Config; // edi
  PIMAGE_NT_HEADERS v6; // rbp
  char *v7; // rax
  bool v8; // zf
  unsigned int v9; // eax
  int inited; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(char **)(a1 + 48);
  Config = RtlImageNtHeaderEx(3u, v2, 0LL, &OutHeaders);
  if ( Config < 0 )
    return (unsigned int)Config;
  v6 = OutHeaders;
  if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 )
  {
    if ( OutHeaders->OptionalHeader.AddressOfEntryPoint )
      v7 = &v2[OutHeaders->OptionalHeader.AddressOfEntryPoint];
    else
      v7 = 0LL;
    *(_QWORD *)(a1 + 56) = v7;
  }
  if ( !(unsigned __int8)LdrpValidateEntrySection(a1) )
    return (unsigned int)-1073741701;
  *(_QWORD *)(a1 + 248) = v6->OptionalHeader.ImageBase;
  v8 = (*(_BYTE *)(a1 + 104) & 4) == 0;
  *(_QWORD *)(a1 + 256) = MEMORY[0x7FFE0014];
  if ( !v8 && (*(_DWORD *)(a1 + 104) & 0x2000) == 0 && a2 )
  {
    v13 = 0LL;
    v9 = LdrpGenRandom();
    inited = LdrInitSecurityCookie(
               (_DWORD)v2,
               *(_DWORD *)(a1 + 64),
               0,
               v9 ^ LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[7]),
               (__int64)&v13);
    if ( v2 == (char *)0x180000000LL
      || !*(_QWORD *)(a1 + 56)
      || (OutHeaders->OptionalHeader.MajorSubsystemVersion != 6 || OutHeaders->OptionalHeader.MinorSubsystemVersion < 3u)
      && OutHeaders->OptionalHeader.MajorSubsystemVersion < 7u
      || inited )
    {
      Config = LdrpCfgProcessLoadConfig(a1, OutHeaders, v13);
      if ( Config < 0 )
        return (unsigned int)Config;
      goto LABEL_16;
    }
    return (unsigned int)-1073741701;
  }
LABEL_16:
  if ( (*(_DWORD *)(a1 + 104) & 0x200) == 0 )
    RtlInsertInvertedFunctionTable(v2, *(_DWORD *)(a1 + 64));
  *(_DWORD *)(a1 + 104) |= 0x2200u;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 2;
  if ( *(_QWORD *)(a1 + 176) )
    LdrpSignalModuleMapped(a1);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 0x14A1u);
  return (unsigned int)Config;
}
