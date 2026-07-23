/*
 * XREFs of ExpWnfPopulateStateData @ 0x1404D19FC
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x140461464 (ExpWnfCreateNameInstance.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14015A4D0 (ZwQueryValueKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpWnfComposeValueName @ 0x1403F539C (ExpWnfComposeValueName.c)
 */

__int64 __fastcall ExpWnfPopulateStateData(__int64 a1)
{
  ULONG i; // ebp
  _QWORD *PoolWithTag; // rbx
  __int64 v4; // rcx
  NTSTATUS v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-60h] BYREF
  char v11; // [rsp+48h] [rbp-50h] BYREF

  if ( *(_QWORD *)(a1 + 88) || !*(_QWORD *)(a1 + 104) )
    return 0LL;
  for ( i = *(_DWORD *)(a1 + 56); ; i = ResultLength - 16 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, i + 16, 0x20666E57u);
    if ( !PoolWithTag )
      return 3221225626LL;
    v4 = *(_QWORD *)(a1 + 40);
    ValueName.Buffer = (wchar_t *)&v11;
    *(_DWORD *)&ValueName.Length = 2228224;
    ExpWnfComposeValueName(v4, &ValueName);
    ResultLength = i + 16;
    v5 = ZwQueryValueKey(
           *(HANDLE *)(a1 + 104),
           &ValueName,
           KeyValuePartialInformation,
           PoolWithTag,
           i + 16,
           &ResultLength);
    v6 = v5;
    if ( v5 == -1073741772 )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
LABEL_7:
      *(_DWORD *)PoolWithTag = 1050884;
      v7 = *((_DWORD *)PoolWithTag + 3);
      *((_DWORD *)PoolWithTag + 1) = i;
      *(_DWORD *)(a1 + 96) = v7;
      *(_QWORD *)(a1 + 88) = PoolWithTag;
      return 0LL;
    }
    if ( v5 != -1073741789 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0x20666E57u);
  }
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)PoolWithTag + 1) == 3 && *((_DWORD *)PoolWithTag + 2) >= 4u )
    {
      *((_DWORD *)PoolWithTag + 2) -= 4;
      goto LABEL_7;
    }
    v6 = -1073741823;
  }
  ExFreePoolWithTag(PoolWithTag, 0x20666E57u);
  return v6;
}
