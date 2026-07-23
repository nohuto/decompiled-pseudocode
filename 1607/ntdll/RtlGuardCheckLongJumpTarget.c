/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x180039AE0
 * Callers:
 *     RtlUnwindEx @ 0x180035330 (RtlUnwindEx.c)
 *     RtlGuardRestoreContext @ 0x180087030 (RtlGuardRestoreContext.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     RtlPcToFileHeader @ 0x180037660 (RtlPcToFileHeader.c)
 *     RtlQueryProtectedPolicy @ 0x1800851D0 (RtlQueryProtectedPolicy.c)
 *     bsearch_s @ 0x18009CC7C (bsearch_s.c)
 *     RtlFailFast2 @ 0x1800AAE70 (RtlFailFast2.c)
 */

NTSTATUS __cdecl RtlGuardCheckLongJumpTarget(PVOID PcValue, BOOL IsFastFail, PBOOL IsLongJumpTarget)
{
  bool v4; // r14
  char v6; // di
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  unsigned int v9; // eax
  rsize_t v11; // r8
  int Key; // [rsp+30h] [rbp-18h] BYREF
  PVOID BaseOfImage; // [rsp+38h] [rbp-10h] BYREF
  unsigned __int64 Size; // [rsp+68h] [rbp+20h] BYREF

  v4 = IsFastFail;
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    v6 = 0;
    RtlPcToFileHeader(PcValue, &BaseOfImage);
    if ( BaseOfImage )
    {
      v7 = (unsigned int *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, (PULONG)&Size);
      v8 = v7;
      if ( v7 )
      {
        v9 = *v7;
        if ( v9 >= 0xC0 && (_DWORD)Size == v9 && (v8[36] & 0x10000) != 0 )
        {
          Key = (_DWORD)PcValue - (_DWORD)BaseOfImage;
          v11 = *((_QWORD *)v8 + 23);
          if ( !v11 || !bsearch_s(&Key, *((const void **)v8 + 22), v11, (v8[36] >> 28) + 4, RtlpTargetCompare, 0LL) )
            goto LABEL_18;
        }
      }
    }
    else if ( RtlQueryProtectedPolicy((PGUID)&PolicyGuid, &Size) < 0 || !Size )
    {
LABEL_18:
      if ( !v4 )
        RtlFailFast2(38LL, PcValue);
      goto LABEL_6;
    }
    v6 = 1;
LABEL_6:
    if ( IsLongJumpTarget )
      *(_BYTE *)IsLongJumpTarget = v6;
    return 0;
  }
  if ( IsLongJumpTarget )
    *(_BYTE *)IsLongJumpTarget = 1;
  return 0;
}
