/*
 * XREFs of ArbpGetRegistryValue @ 0x14052E1C4
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x14052C010 (ArbBuildAssignmentOrdering.c)
 *     ArbAddInaccessibleAllocationRange @ 0x14052E7CC (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14052E9CC (ArbAddMmConfigRangeAsBootReserved.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwQueryValueKey @ 0x140150900 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbpGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS v5; // eax
  PVOID PoolWithTag; // rax
  void *v7; // rbx
  NTSTATUS v8; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  v5 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformationAlign64, 0LL, 0, &ResultLength);
  if ( v5 != -1073741789 && v5 != -2147483643 )
    return 3221225473LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4D627241u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v8 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValueFullInformationAlign64,
         PoolWithTag,
         ResultLength,
         &ResultLength);
  if ( v8 < 0 )
  {
    ExFreePoolWithTag(v7, 0);
    return (unsigned int)v8;
  }
  else
  {
    *a3 = v7;
    return 0LL;
  }
}
