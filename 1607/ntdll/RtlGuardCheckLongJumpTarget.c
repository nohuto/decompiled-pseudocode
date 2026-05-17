/*
 * XREFs of RtlGuardCheckLongJumpTarget @ 0x180039AF0
 * Callers:
 *     RtlUnwindEx @ 0x180035340 (RtlUnwindEx.c)
 *     RtlGuardRestoreContext @ 0x180087040 (RtlGuardRestoreContext.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     RtlPcToFileHeader @ 0x180037670 (RtlPcToFileHeader.c)
 *     RtlQueryProtectedPolicy @ 0x1800851E0 (RtlQueryProtectedPolicy.c)
 *     bsearch_s @ 0x18009CC8C (bsearch_s.c)
 *     RtlFailFast2 @ 0x1800AAE70 (RtlFailFast2.c)
 */

__int64 __fastcall RtlGuardCheckLongJumpTarget(void *a1, char a2, char *a3)
{
  char v6; // di
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  unsigned int v9; // eax
  rsize_t v11; // r8
  int Key; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-10h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  if ( qword_180163310 )
  {
    v6 = 0;
    RtlPcToFileHeader(a1, (PVOID *)&v13);
    if ( v13 )
    {
      v7 = (unsigned int *)RtlImageDirectoryEntryToData(v13, 1, 0xAu, &v14);
      v8 = v7;
      if ( v7 )
      {
        v9 = *v7;
        if ( v9 >= 0xC0 && (_DWORD)v14 == v9 && (v8[36] & 0x10000) != 0 )
        {
          Key = (_DWORD)a1 - v13;
          v11 = *((_QWORD *)v8 + 23);
          if ( !v11 || !bsearch_s(&Key, *((const void **)v8 + 22), v11, (v8[36] >> 28) + 4, RtlpTargetCompare, 0LL) )
            goto LABEL_18;
        }
      }
    }
    else if ( (int)RtlQueryProtectedPolicy(&unk_180126F50) < 0 || !v14 )
    {
LABEL_18:
      if ( a2 != 1 )
        RtlFailFast2(38LL, a1);
      goto LABEL_6;
    }
    v6 = 1;
LABEL_6:
    if ( a3 )
      *a3 = v6;
    return 0LL;
  }
  if ( a3 )
    *a3 = 1;
  return 0LL;
}
