/*
 * XREFs of SmpRecordCreatedPageFiles @ 0x14000B094
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000AF10 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpBuildFilesStringFromList @ 0x14000B368 (SmpBuildFilesStringFromList.c)
 */

__int64 __fastcall SmpRecordCreatedPageFiles(char a1, __int64 a2)
{
  char v4; // di
  __int64 result; // rax
  SIZE_T v6; // rax
  unsigned int v7; // ebx
  unsigned __int16 v8; // [rsp+30h] [rbp-30h] BYREF
  void *Source2; // [rsp+38h] [rbp-28h]
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING v11; // [rsp+50h] [rbp-10h] BYREF
  int Data; // [rsp+80h] [rbp+20h] BYREF

  *(_DWORD *)&v11.Length = 2359330;
  v11.Buffer = L"ExistingPageFiles";
  *(_DWORD *)&ValueName.Length = 1703960;
  ValueName.Buffer = L"TempPageFile";
  v4 = 0;
  result = SmpBuildFilesStringFromList(&SmpPagingFileDescriptorList, &v8);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)a2 != v8 || (v6 = RtlCompareMemory(*(const void **)(a2 + 8), Source2, v8), v8 != v6) )
        v4 = 1;
    }
    if ( a1 )
    {
      Data = 1;
      NtSetValueKey(SmpMmKey, &ValueName, 0, 4u, &Data, 4u);
    }
    else
    {
      NtDeleteValueKey(SmpMmKey, &ValueName);
    }
    v7 = NtSetValueKey(SmpMmKey, &v11, 0, 7u, Source2, v8);
    if ( v4 )
      NtFlushKey(SmpMmKey);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Source2);
    return v7;
  }
  return result;
}
