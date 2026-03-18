/*
 * XREFs of ExpWnfRegisterPermanentName @ 0x1404C2D98
 * Callers:
 *     NtCreateWnfStateName @ 0x1403E262C (NtCreateWnfStateName.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1403E10D0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x1403E11DC (ExpWnfComposeValueName.c)
 *     RtlLengthSecurityDescriptor @ 0x14042E630 (RtlLengthSecurityDescriptor.c)
 */

__int64 __fastcall ExpWnfRegisterPermanentName(unsigned __int64 a1, __int64 a2)
{
  NTSTATUS NameStoreRegistryRoot; // edi
  ULONG v5; // eax
  size_t v6; // rbp
  ULONG DataSize; // edi
  char *PoolWithTag; // rax
  char *Data; // rbx
  _OWORD *v10; // rax
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-68h] BYREF
  __int64 v14; // [rsp+48h] [rbp-60h] BYREF

  *(_DWORD *)&ValueName.Length = 2228224;
  ValueName.Buffer = (wchar_t *)&v14;
  ExpWnfComposeValueName(a1, &ValueName);
  NameStoreRegistryRoot = ExpWnfGetNameStoreRegistryRoot((a1 >> 4) & 3, (volatile signed __int64 *)&KeyHandle);
  if ( NameStoreRegistryRoot >= 0 )
  {
    v5 = RtlLengthSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 16));
    v6 = v5;
    DataSize = v5 + 4;
    if ( *(_QWORD *)(a2 + 8) )
      DataSize = v5 + 20;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, DataSize, 0x20666E57u);
    Data = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a2 + 16), v6);
      *(_DWORD *)&Data[v6] = *(_DWORD *)a2;
      v10 = *(_OWORD **)(a2 + 8);
      if ( v10 )
        *(_OWORD *)&Data[v6 + 4] = *v10;
      NameStoreRegistryRoot = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, Data, DataSize);
      ExFreePoolWithTag(Data, 0x20666E57u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)NameStoreRegistryRoot;
}
