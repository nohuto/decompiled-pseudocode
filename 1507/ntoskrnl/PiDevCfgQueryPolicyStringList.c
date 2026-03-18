/*
 * XREFs of PiDevCfgQueryPolicyStringList @ 0x140688F1C
 * Callers:
 *     PiDevCfgEnforceDevicePolicy @ 0x1406858BC (PiDevCfgEnforceDevicePolicy.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x140019AA0 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14017F250 (ZwEnumerateValueKey.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     NtQueryKey @ 0x1404C1230 (NtQueryKey.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 */

__int64 __fastcall PiDevCfgQueryPolicyStringList(void *a1, const WCHAR *a2, _QWORD *a3)
{
  ULONG v3; // r12d
  int v4; // edi
  PVOID v5; // rsi
  NTSTATUS RegistryValue; // ebx
  ULONG v9; // ebx
  _DWORD *PoolWithTag; // rdi
  unsigned int v11; // r14d
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  unsigned int v14; // r13d
  NTSTATUS i; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r15d
  PVOID P; // [rsp+30h] [rbp-69h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-61h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-51h] BYREF
  _QWORD *v24; // [rsp+58h] [rbp-41h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-39h] BYREF
  char KeyInformation[20]; // [rsp+90h] [rbp-9h] BYREF
  int v27; // [rsp+A4h] [rbp+Bh]
  int v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+ACh] [rbp+13h]

  v3 = 0;
  v24 = a3;
  KeyHandle = 0LL;
  P = 0LL;
  v4 = 0;
  v5 = 0LL;
  RegistryValue = IopGetRegistryValue(a1, a2, 0, &P);
  if ( RegistryValue < 0 )
  {
    PoolWithTag = P;
LABEL_39:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    goto LABEL_41;
  }
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
    v4 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  ExFreePoolWithTag(P, 0);
  if ( v4 != 1 )
    goto LABEL_6;
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
      if ( !v27 )
      {
LABEL_6:
        RegistryValue = -1073741275;
        goto LABEL_41;
      }
      v9 = v29 + 2 * (v28 + 12);
      LODWORD(P) = v9;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x63647050u);
      if ( !PoolWithTag )
      {
        RegistryValue = -1073741670;
        goto LABEL_41;
      }
      v11 = v27 * v29 + 2;
      while ( 2 )
      {
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        v5 = ExAllocatePoolWithTag(PagedPool, v11, 0x63647050u);
        if ( v5 )
        {
          v12 = v11 >> 1;
          v13 = 0;
          v14 = 0;
          for ( i = ZwEnumerateValueKey(KeyHandle, 0, KeyValueFullInformation, PoolWithTag, v9, &ResultLength);
                ;
                i = ZwEnumerateValueKey(KeyHandle, v3, KeyValueFullInformation, PoolWithTag, (ULONG)P, &ResultLength) )
          {
            RegistryValue = i;
            if ( i == -2147483622 )
              break;
            if ( i == -2147483643 )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              LODWORD(P) = ResultLength;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x63647050u);
              if ( !PoolWithTag )
              {
                RegistryValue = -1073741670;
                goto LABEL_35;
              }
              --v3;
            }
            else
            {
              if ( i < 0 )
                goto LABEL_35;
              if ( PoolWithTag[1] == 1 )
              {
                v16 = (unsigned int)PoolWithTag[3];
                if ( (unsigned int)v16 >= 2 )
                {
                  v17 = (unsigned int)PoolWithTag[2];
                  if ( !*(_WORD *)((char *)PoolWithTag + 2 * (v16 >> 1) + v17 - 2) )
                  {
                    RegistryValue = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)((char *)PoolWithTag + v17));
                    if ( RegistryValue < 0 )
                      goto LABEL_35;
                    v13 += DestinationString.MaximumLength >> 1;
                    if ( v12 > v13 )
                    {
                      RtlStringCchCopyExW(
                        (NTSTRSAFE_PWSTR)v5 + v14,
                        v12 - v14,
                        DestinationString.Buffer,
                        0LL,
                        0LL,
                        0x900u);
                      v14 += DestinationString.MaximumLength >> 1;
                    }
                  }
                }
              }
            }
            ++v3;
          }
          v3 = 0;
          RegistryValue = 0;
          if ( v13 )
          {
            v18 = v13 + 1;
            if ( v12 < v18 )
            {
              v9 = (unsigned int)P;
              v11 = 2 * v18;
              continue;
            }
            *((_WORD *)v5 + v14) = 0;
            *v24 = v5;
            v5 = 0LL;
          }
          else
          {
            RegistryValue = -1073741275;
          }
LABEL_35:
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
        }
        else
        {
          RegistryValue = -1073741670;
        }
        goto LABEL_39;
      }
    }
  }
LABEL_41:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)RegistryValue;
}
