/*
 * XREFs of CmRegUtilUcValueGetFullBuffer @ 0x1C00DE9C8
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00DE2C8 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmRegUtilUcValueGetFullBuffer(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        __int64 a3,
        ULONG a4,
        _QWORD *a5)
{
  _QWORD *v6; // rsi
  ULONG Length; // edi
  _DWORD *PoolWithTag; // rbx
  NTSTATUS v11; // edi
  _DWORD *v12; // rax
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  ResultLength = a4;
  v6 = a5;
  Length = (ValueName->Length + 31) & 0xFFFFFFF8;
  *a5 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length, 0x62527050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v11 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, PoolWithTag, Length, &ResultLength);
  if ( v11 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v11 != -2147483643 && v11 != -1073741789 )
      return (unsigned int)v11;
    v12 = ExAllocatePoolWithTag(NonPagedPoolNx, ResultLength, 0x62527050u);
    PoolWithTag = v12;
    if ( !v12 )
      return 3221225626LL;
    v11 = ZwQueryValueKey(KeyHandle, ValueName, KeyValueFullInformation, v12, ResultLength, &ResultLength);
    if ( v11 < 0 )
    {
LABEL_11:
      ExFreePoolWithTag(PoolWithTag, 0);
      return (unsigned int)v11;
    }
  }
  if ( PoolWithTag[1] != 3 )
  {
    v11 = -1073741788;
    goto LABEL_11;
  }
  *v6 = PoolWithTag;
  return 0LL;
}
