/*
 * XREFs of LdrpProcessMappedModule @ 0x1800102F0
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18000E5C0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlInsertInvertedFunctionTable @ 0x18000F9C4 (RtlInsertInvertedFunctionTable.c)
 *     LdrpSignalModuleMapped @ 0x18000FAD0 (LdrpSignalModuleMapped.c)
 *     LdrpGenRandom @ 0x18000FDE0 (LdrpGenRandom.c)
 *     LdrInitSecurityCookie @ 0x18000FE38 (LdrInitSecurityCookie.c)
 *     LdrpCfgProcessLoadConfig @ 0x180010044 (LdrpCfgProcessLoadConfig.c)
 *     LdrpValidateEntrySection @ 0x1800102A8 (LdrpValidateEntrySection.c)
 *     LdrpLogDllState @ 0x180012678 (LdrpLogDllState.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall LdrpProcessMappedModule(__int64 a1, int a2)
{
  char *v2; // rsi
  NTSTATUS Config; // edi
  PIMAGE_NT_HEADERS v6; // rbp
  char *v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  int inited; // eax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(char **)(a1 + 48);
  Config = RtlImageNtHeaderEx(3u, v2, 0LL, &OutHeaders);
  if ( Config >= 0 )
  {
    v6 = OutHeaders;
    if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 )
    {
      if ( OutHeaders->OptionalHeader.AddressOfEntryPoint )
        v7 = &v2[OutHeaders->OptionalHeader.AddressOfEntryPoint];
      else
        v7 = 0LL;
      *(_QWORD *)(a1 + 56) = v7;
    }
    if ( !LdrpValidateEntrySection(a1) )
      return (unsigned int)-1073741701;
    *(_QWORD *)(a1 + 248) = v6->OptionalHeader.ImageBase;
    v8 = (*(_BYTE *)(a1 + 104) & 4) == 0;
    *(_QWORD *)(a1 + 256) = MEMORY[0x7FFE0014];
    if ( !v8 && (*(_DWORD *)(a1 + 104) & 0x2000) == 0 && a2 )
    {
      v13 = 0LL;
      v9 = LdrpGenRandom();
      inited = LdrInitSecurityCookie(
                 v2,
                 *(unsigned int *)(a1 + 64),
                 0LL,
                 v9 ^ LODWORD(LdrSystemDllInitBlock.Wow64SharedInformation[7]),
                 &v13);
      if ( v2 != (char *)0x180000000LL
        && *(_QWORD *)(a1 + 56)
        && (OutHeaders->OptionalHeader.MajorSubsystemVersion == 6
         && OutHeaders->OptionalHeader.MinorSubsystemVersion >= 3u
         || OutHeaders->OptionalHeader.MajorSubsystemVersion >= 7u)
        && !inited )
      {
        return (unsigned int)-1073741701;
      }
      Config = LdrpCfgProcessLoadConfig(a1, (unsigned __int16 *)OutHeaders, v13);
      if ( Config < 0 )
        return (unsigned int)Config;
    }
    if ( (*(_DWORD *)(a1 + 104) & 0x200) == 0 )
      RtlInsertInvertedFunctionTable(v2, *(_DWORD *)(a1 + 64));
    *(_DWORD *)(a1 + 104) |= 0x2200u;
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 2;
    if ( *(_QWORD *)(a1 + 176) )
      LdrpSignalModuleMapped(a1);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 5281LL);
  }
  return (unsigned int)Config;
}
