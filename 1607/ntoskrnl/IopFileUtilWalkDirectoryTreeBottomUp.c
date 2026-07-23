/*
 * XREFs of IopFileUtilWalkDirectoryTreeBottomUp @ 0x14064C174
 * Callers:
 *     NtEnableLastKnownGood @ 0x1406E5864 (NtEnableLastKnownGood.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C398 (IopFileUtilWalkDirectoryTreeHelper.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeBottomUp(PCUNICODE_STRING SourceString)
{
  int v2; // edi
  SIZE_T v3; // r14
  PVOID PoolWithTag; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  PVOID v7; // rbx
  PVOID *v8; // rax
  __int64 v9; // rax
  int v11; // [rsp+30h] [rbp-D8h]
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h]
  __int64 v14[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE FileInformation[1024]; // [rsp+68h] [rbp-A0h] BYREF

  P = &v12;
  v12 = (__int64)&v12;
  v2 = 0;
  v14[1] = (__int64)v14;
  v14[0] = (__int64)v14;
  v3 = (unsigned int)SourceString->Length + 38;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x75466F49u);
  v5 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3);
    *(_WORD *)(v5 + 16) = 0;
    *(_WORD *)(v5 + 18) = SourceString->Length;
    *(_QWORD *)(v5 + 24) = v5 + 32;
    RtlCopyUnicodeString((PUNICODE_STRING)(v5 + 16), SourceString);
    v6 = v12;
    if ( *(__int64 **)(v12 + 8) != &v12 )
      __fastfail(3u);
    *(_QWORD *)v5 = v12;
    *(_QWORD *)(v5 + 8) = &v12;
    *(_QWORD *)(v6 + 8) = v5;
    v12 = v5;
    if ( (__int64 *)v5 == &v12 )
      goto LABEL_9;
    while ( 1 )
    {
      v2 = IopFileUtilWalkDirectoryTreeHelper((int)v5 + 16, 8, 0, 0, FileInformation, v11, (__int64)&v12);
      if ( v2 < 0 )
        break;
      v5 = *(_QWORD *)v5;
      if ( (__int64 *)v5 == &v12 )
      {
        while ( 1 )
        {
          v5 = v12;
LABEL_9:
          if ( (__int64 *)v5 == &v12 )
            break;
          v7 = P;
          v8 = (PVOID *)*((_QWORD *)P + 1);
          if ( *(__int64 **)P != &v12 || *v8 != P )
            __fastfail(3u);
          P = (PVOID)*((_QWORD *)P + 1);
          *v8 = &v12;
          v2 = IopFileUtilWalkDirectoryTreeHelper(
                 (int)v7 + 16,
                 7,
                 (int)PpLastGoodDeleteFilesCallback,
                 0,
                 FileInformation,
                 v11,
                 (__int64)v14);
          ExFreePoolWithTag(v7, 0x75466F49u);
        }
        if ( v2 < 0 )
          goto LABEL_16;
        return (unsigned int)v2;
      }
    }
  }
  else
  {
    v2 = -1073741670;
  }
  while ( 1 )
  {
    v5 = v12;
LABEL_16:
    if ( (__int64 *)v5 == &v12 )
      break;
    v9 = *(_QWORD *)v5;
    if ( *(__int64 **)(v5 + 8) != &v12 || *(_QWORD *)(v9 + 8) != v5 )
      __fastfail(3u);
    v12 = *(_QWORD *)v5;
    *(_QWORD *)(v9 + 8) = &v12;
    ExFreePoolWithTag((PVOID)v5, 0x75466F49u);
  }
  return (unsigned int)v2;
}
