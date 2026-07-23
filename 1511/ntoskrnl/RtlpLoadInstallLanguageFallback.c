/*
 * XREFs of RtlpLoadInstallLanguageFallback @ 0x140538BC4
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x140539304 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1406A084C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     sub_14013A7C0 @ 0x14013A7C0 (sub_14013A7C0.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenKey @ 0x140150860 (ZwOpenKey.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     LdrpQueryValueKey @ 0x1405396B8 (LdrpQueryValueKey.c)
 *     RtlCultureNameToLCID @ 0x14053A358 (RtlCultureNameToLCID.c)
 */

__int64 __fastcall RtlpLoadInstallLanguageFallback(__int64 a1, _WORD *a2, _WORD *a3)
{
  WCHAR *v5; // rsi
  WCHAR *v6; // rax
  NTSTATUS v7; // edi
  const WCHAR *i; // rbx
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v14; // [rsp+C8h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  v5 = 0LL;
  if ( a1 && a2 && a3 )
  {
    v6 = (WCHAR *)sub_14013A7C0(a1, 0xACu);
    v5 = v6;
    if ( v6 )
    {
      memset(v6, 0, 0x158uLL);
      *a2 = 0;
      Lcid = 0;
      *a3 = 0;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v7 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"InstallLanguageFallback");
        LODWORD(v14) = 8;
        v7 = LdrpQueryValueKey(KeyHandle, &DestinationString, (__int64)&v14);
        if ( v7 >= 0 )
        {
          if ( Lcid != 1 )
            goto LABEL_18;
          for ( i = v5; *i; ++i )
          {
            if ( *i == 44 )
            {
              *i = 0;
              goto LABEL_20;
            }
          }
          while ( *i == 32 )
LABEL_20:
            ++i;
          RtlInitUnicodeString(&DestinationString, v5);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          {
            *a2 = Lcid;
            if ( *i )
            {
              RtlInitUnicodeString(&DestinationString, i);
              if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
              {
                *a3 = Lcid;
              }
              else
              {
                v7 = -1073741823;
                *a2 = 0;
              }
            }
          }
          else
          {
LABEL_18:
            v7 = -1073741823;
          }
        }
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v7;
}
