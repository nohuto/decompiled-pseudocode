/*
 * XREFs of LdrpProcessMappedModule @ 0x180040CD8
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180040678 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpValidateEntrySection @ 0x180040E84 (LdrpValidateEntrySection.c)
 *     LdrpCfgProcessLoadConfig @ 0x180040ECC (LdrpCfgProcessLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x180041130 (LdrInitSecurityCookie.c)
 *     LdrpGenRandom @ 0x18004133C (LdrpGenRandom.c)
 *     LdrpSignalModuleMapped @ 0x18004136C (LdrpSignalModuleMapped.c)
 *     RtlInsertInvertedFunctionTable @ 0x1800413CC (RtlInsertInvertedFunctionTable.c)
 */

__int64 __fastcall LdrpProcessMappedModule(__int64 a1, int a2)
{
  unsigned __int64 v2; // rsi
  int Config; // edi
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // zf
  int v12; // eax
  int inited; // eax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  Config = RtlImageNtHeaderEx(3, v2, 0LL, &v15);
  if ( Config < 0 )
    return (unsigned int)Config;
  v6 = v15;
  if ( (*(_DWORD *)(a1 + 104) & 0x1000004) == 4 )
  {
    if ( *(_DWORD *)(v15 + 40) )
      v7 = v2 + *(unsigned int *)(v15 + 40);
    else
      v7 = 0LL;
    *(_QWORD *)(a1 + 56) = v7;
  }
  if ( !(unsigned __int8)LdrpValidateEntrySection(a1) )
    return (unsigned int)-1073741701;
  *(_QWORD *)(a1 + 248) = *(_QWORD *)(v6 + 48);
  v11 = (*(_BYTE *)(a1 + 104) & 4) == 0;
  *(_QWORD *)(a1 + 256) = MEMORY[0x7FFE0014];
  if ( !v11 && (*(_DWORD *)(a1 + 104) & 0x2000) == 0 && a2 )
  {
    v16 = 0LL;
    v12 = LdrpGenRandom();
    inited = LdrInitSecurityCookie(v2, *(_DWORD *)(a1 + 64), 0, v12 ^ (unsigned int)dword_1801572E0, (__int64)&v16);
    if ( v2 == 0x180000000LL
      || !*(_QWORD *)(a1 + 56)
      || (*(_WORD *)(v15 + 72) != 6 || *(_WORD *)(v15 + 74) < 3u) && *(_WORD *)(v15 + 72) < 7u
      || inited )
    {
      Config = LdrpCfgProcessLoadConfig(a1, v15, v16);
      if ( Config < 0 )
        return (unsigned int)Config;
      goto LABEL_16;
    }
    return (unsigned int)-1073741701;
  }
LABEL_16:
  if ( (*(_DWORD *)(a1 + 104) & 0x200) == 0 )
    RtlInsertInvertedFunctionTable(v2, *(unsigned int *)(a1 + 64));
  *(_DWORD *)(a1 + 104) |= 0x2200u;
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock, v8, v9, v10);
  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 2;
  if ( *(_QWORD *)(a1 + 176) )
    LdrpSignalModuleMapped(a1);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpLogDllState(*(_QWORD *)(a1 + 48), a1 + 72, 0x14A1u);
  return (unsigned int)Config;
}
