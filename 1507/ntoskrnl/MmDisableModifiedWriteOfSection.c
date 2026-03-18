/*
 * XREFs of MmDisableModifiedWriteOfSection @ 0x140125D24
 * Callers:
 *     CcInitializeCacheMap @ 0x140040D10 (CcInitializeCacheMap.c)
 *     CcSetPrivateWriteFile @ 0x1401DDBC0 (CcSetPrivateWriteFile.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x140086F60 (MiLockSectionControlArea.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

char __fastcall MmDisableModifiedWriteOfSection(_QWORD *a1)
{
  bool v1; // bl
  __int64 v2; // rax
  _DWORD *v3; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  v2 = MiLockSectionControlArea(a1, 1, &v6);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 40) )
      v1 = (*(_DWORD *)(v2 + 56) & 8) != 0;
    else
      *(_DWORD *)(v2 + 56) |= 8u;
    v3 = (_DWORD *)(v2 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
    else
      *v3 = 0;
    __writecr8(v6);
    LOBYTE(v2) = v1;
  }
  return v2;
}
