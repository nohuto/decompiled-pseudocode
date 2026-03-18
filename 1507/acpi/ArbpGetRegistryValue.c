/*
 * XREFs of ArbpGetRegistryValue @ 0x1C0070970
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C00704B8 (ArbBuildAssignmentOrdering.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1C0080AD8 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C0080CC4 (ArbAddMmConfigRangeAsBootReserved.c)
 * Callees:
 *     RtlInitUnicodeString_0 @ 0x1C00235FE (RtlInitUnicodeString_0.c)
 *     ZwQueryValueKey_0 @ 0x1C002364C (ZwQueryValueKey_0.c)
 */

__int64 __fastcall ArbpGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS v5; // eax
  PVOID PoolWithTag; // rax
  void *v7; // rbx
  NTSTATUS v8; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  RtlInitUnicodeString_0(&DestinationString, a2);
  v5 = ZwQueryValueKey_0(KeyHandle, &DestinationString, KeyValueFullInformationAlign64, 0LL, 0, &ResultLength);
  if ( v5 != -1073741789 && v5 != -2147483643 )
    return 3221225473LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4D627241u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v8 = ZwQueryValueKey_0(
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
