/*
 * XREFs of PiDevCfgQueryPolicyStringList @ 0x140609B14
 * Callers:
 *     PiDevCfgEnforceDevicePolicy @ 0x140514D5C (PiDevCfgEnforceDevicePolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x140090110 (RtlStringCchCopyExW.c)
 *     PnpValidateRegistryDword @ 0x14012C1B4 (PnpValidateRegistryDword.c)
 *     PnpValidateRegistryString @ 0x14012C344 (PnpValidateRegistryString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x140150880 (ZwEnumerateValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 */

__int64 __fastcall PiDevCfgQueryPolicyStringList(void *a1, const WCHAR *a2, _QWORD *a3)
{
  ULONG v3; // r12d
  int v4; // esi
  PVOID v5; // rdi
  NTSTATUS RegistryValue; // ebx
  unsigned int *v9; // rcx
  ULONG v10; // ebx
  unsigned int *PoolWithTag; // r14
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // r15d
  unsigned int v15; // r13d
  NTSTATUS i; // eax
  unsigned int v17; // r15d
  size_t *pcchRemaining; // [rsp+30h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-61h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-51h] BYREF
  _QWORD *v23; // [rsp+58h] [rbp-41h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-39h] BYREF
  char KeyInformation[20]; // [rsp+90h] [rbp-9h] BYREF
  int v26; // [rsp+A4h] [rbp+Bh]
  int v27; // [rsp+A8h] [rbp+Fh]
  int v28; // [rsp+ACh] [rbp+13h]

  v3 = 0;
  v23 = a3;
  KeyHandle = 0LL;
  pcchRemaining = 0LL;
  v4 = 0;
  v5 = 0LL;
  RegistryValue = IopGetRegistryValue(a1, a2, 0, &pcchRemaining);
  if ( RegistryValue < 0 )
  {
    PoolWithTag = (unsigned int *)pcchRemaining;
LABEL_36:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_38;
  }
  if ( PnpValidateRegistryDword((__int64)pcchRemaining) )
    v4 = *(unsigned int *)((char *)v9 + v9[2]);
  ExFreePoolWithTag(v9, 0);
  if ( v4 != 1 )
    goto LABEL_5;
  RtlInitUnicodeString(&DestinationString, a2);
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValue = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( RegistryValue >= 0 )
  {
    RegistryValue = NtQueryKey(KeyHandle, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
    if ( RegistryValue >= 0 )
    {
      if ( !v26 )
      {
LABEL_5:
        RegistryValue = -1073741275;
        goto LABEL_38;
      }
      v10 = v28 + 2 * (v27 + 12);
      LODWORD(pcchRemaining) = v10;
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v10, 0x63647050u);
      if ( !PoolWithTag )
      {
        RegistryValue = -1073741670;
        goto LABEL_38;
      }
      v12 = v26 * v28 + 2;
      while ( 2 )
      {
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        v5 = ExAllocatePoolWithTag(PagedPool, v12, 0x63647050u);
        if ( v5 )
        {
          v13 = v12 >> 1;
          v14 = 0;
          v15 = 0;
          for ( i = ZwEnumerateValueKey(KeyHandle, 0, KeyValueFullInformation, PoolWithTag, v10, &ResultLength);
                ;
                i = ZwEnumerateValueKey(
                      KeyHandle,
                      v3,
                      KeyValueFullInformation,
                      PoolWithTag,
                      (ULONG)pcchRemaining,
                      &ResultLength) )
          {
            RegistryValue = i;
            if ( i == -2147483622 )
              break;
            if ( i == -2147483643 )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              LODWORD(pcchRemaining) = ResultLength;
              PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x63647050u);
              if ( !PoolWithTag )
              {
                RegistryValue = -1073741670;
                goto LABEL_32;
              }
              --v3;
            }
            else
            {
              if ( i < 0 )
                goto LABEL_32;
              if ( PnpValidateRegistryString(PoolWithTag) )
              {
                RegistryValue = RtlInitUnicodeStringEx(
                                  &DestinationString,
                                  (PCWSTR)((char *)PoolWithTag + PoolWithTag[2]));
                if ( RegistryValue < 0 )
                  goto LABEL_32;
                v14 += DestinationString.MaximumLength >> 1;
                if ( v13 > v14 )
                {
                  RtlStringCchCopyExW((NTSTRSAFE_PWSTR)v5 + v15, v13 - v15, DestinationString.Buffer, 0LL, 0LL, 0x900u);
                  v15 += DestinationString.MaximumLength >> 1;
                }
              }
            }
            ++v3;
          }
          v3 = 0;
          RegistryValue = 0;
          if ( v14 )
          {
            v17 = v14 + 1;
            if ( v13 < v17 )
            {
              v10 = (unsigned int)pcchRemaining;
              v12 = 2 * v17;
              continue;
            }
            *((_WORD *)v5 + v15) = 0;
            *v23 = v5;
            v5 = 0LL;
          }
          else
          {
            RegistryValue = -1073741275;
          }
LABEL_32:
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
        }
        else
        {
          RegistryValue = -1073741670;
        }
        goto LABEL_36;
      }
    }
  }
LABEL_38:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)RegistryValue;
}
