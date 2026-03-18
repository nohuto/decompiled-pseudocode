/*
 * XREFs of AslFileMappingCreateFromImageView @ 0x1405712F8
 * Callers:
 *     SdbGetDatabaseMatch @ 0x14049D418 (SdbGetDatabaseMatch.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140084F38 (RtlStringCchCopyW.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     AslFileMappingDelete @ 0x140485350 (AslFileMappingDelete.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     AslpFileMappingGetFileKind @ 0x140571414 (AslpFileMappingGetFileKind.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingCreateFromImageView(__int64 *a1, const wchar_t *a2, __int64 a3, __int64 a4)
{
  wchar_t *v8; // rax
  __int64 v9; // rbx
  NTSTATUS v10; // eax
  unsigned int v11; // edi
  int FileKind; // eax

  if ( !a2 || !*a2 || !a1 || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v8 = (wchar_t *)AslAlloc((__int64)a1, 0x258uLL);
  v9 = (__int64)v8;
  if ( v8 )
  {
    v10 = RtlStringCchCopyW(v8, 0x104uLL, a2);
    v11 = v10;
    if ( v10 < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslFileMappingCreateFromImageView",
        319,
        (unsigned int)"RtlStringCchCopyW failed [%x]",
        v10);
    }
    else
    {
      *(_DWORD *)(v9 + 592) = 1;
      memset((void *)(v9 + 520), 0, 0x38uLL);
      *(_QWORD *)(v9 + 520) = 0LL;
      *(_QWORD *)(v9 + 528) = 0LL;
      *(_QWORD *)(v9 + 536) = a4;
      *(_DWORD *)(v9 + 568) = 0x1000000;
      *(_QWORD *)(v9 + 544) = a3;
      *(_QWORD *)(v9 + 552) = a4;
      if ( a4 )
      {
        FileKind = AslpFileMappingGetFileKind(v9 + 520, v9 + 576);
        if ( FileKind < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"AslFileMappingCreateFromImageView",
            352,
            (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]",
            v9,
            FileKind);
          *(_DWORD *)(v9 + 576) = 3;
        }
      }
      else
      {
        *(_DWORD *)(v9 + 576) = 1;
      }
      *a1 = v9;
      v11 = 0;
      v9 = 0LL;
    }
    if ( v9 )
      AslFileMappingDelete(v9);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v11;
}
