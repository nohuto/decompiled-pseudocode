/*
 * XREFs of AslStringUpcaseToMultiByteN @ 0x140514574
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x140513CD0 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1406C50E8 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403F6230 (RtlUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x1404F8140 (RtlUpcaseUnicodeString.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslStringUpcaseToMultiByteN(char *a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int16 MaximumLength; // bx
  __int64 v5; // rcx
  NTSTATUS v6; // ebx
  __int64 v7; // rcx
  const char *v9; // r9
  int v10; // r8d
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-30h] BYREF
  _STRING v12; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  *(_QWORD *)&v12.Length = 0LL;
  v12.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  MaximumLength = DestinationString.MaximumLength;
  SourceString.Buffer = (wchar_t *)AslAlloc(v5, DestinationString.MaximumLength);
  if ( !SourceString.Buffer )
  {
    v6 = -1073741801;
    AslLogCallPrintf(1, (unsigned int)"AslStringUpcaseToMultiByteN", 960, (unsigned int)"Out of memory");
    goto LABEL_5;
  }
  SourceString.MaximumLength = MaximumLength;
  SourceString.Length = 0;
  v6 = RtlUpcaseUnicodeString(&SourceString, &DestinationString, 0);
  if ( v6 < 0 )
  {
    v9 = "RtlUpcaseUnicodeString failed [%x]";
    v10 = 969;
LABEL_9:
    AslLogCallPrintf(1, (unsigned int)"AslStringUpcaseToMultiByteN", v10, (_DWORD)v9);
    goto LABEL_5;
  }
  v12.Buffer = a1;
  *(_DWORD *)&v12.Length = 0x1000000;
  v6 = RtlUnicodeStringToAnsiString(&v12, &SourceString, 0);
  if ( v6 < 0 )
  {
    v9 = "RtlUnicodeStringToAnsiString failed [%x]";
    v10 = 984;
    goto LABEL_9;
  }
  v6 = 0;
  a1[v12.Length] = 0;
LABEL_5:
  AslFree(v7, SourceString.Buffer);
  return (unsigned int)v6;
}
