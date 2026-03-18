/*
 * XREFs of AslStringUpcaseToMultiByteN @ 0x1404851EC
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x140484948 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1406C4FB0 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403F7370 (RtlUnicodeStringToAnsiString.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     RtlUpcaseUnicodeString @ 0x140514D50 (RtlUpcaseUnicodeString.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringUpcaseToMultiByteN(char *a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int16 MaximumLength; // bx
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  const char *v10; // r9
  int v11; // r8d
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-30h] BYREF
  STRING v13; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  *(_QWORD *)&v13.Length = 0LL;
  v13.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  MaximumLength = DestinationString.MaximumLength;
  SourceString.Buffer = (wchar_t *)AslAlloc(v5, DestinationString.MaximumLength);
  if ( !SourceString.Buffer )
  {
    v7 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslStringUpcaseToMultiByteN", 960, (unsigned int)"Out of memory");
    goto LABEL_5;
  }
  SourceString.MaximumLength = MaximumLength;
  SourceString.Length = 0;
  v6 = RtlUpcaseUnicodeString(&SourceString, &DestinationString, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = "RtlUpcaseUnicodeString failed [%x]";
    v11 = 969;
LABEL_9:
    AslLogCallPrintf(1, (unsigned int)"AslStringUpcaseToMultiByteN", v11, (_DWORD)v10, v6);
    goto LABEL_5;
  }
  v13.Buffer = a1;
  *(_DWORD *)&v13.Length = 0x1000000;
  v6 = RtlUnicodeStringToAnsiString(&v13, &SourceString, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = "RtlUnicodeStringToAnsiString failed [%x]";
    v11 = 984;
    goto LABEL_9;
  }
  v7 = 0;
  a1[v13.Length] = 0;
LABEL_5:
  AslFree(v8, SourceString.Buffer);
  return v7;
}
