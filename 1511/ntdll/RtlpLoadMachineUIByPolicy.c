/*
 * XREFs of RtlpLoadMachineUIByPolicy @ 0x180004780
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180006844 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x180005200 (RtlpMuiRegCreateLanguageList.c)
 *     RtlInitUnicodeString @ 0x18001D1D0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A5300 (NtOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800EAFE4 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800EC1E8 (RtlpMuiRegGrowLanguageList.c)
 */

__int64 __fastcall RtlpLoadMachineUIByPolicy(HANDLE a1, __int64 a2, __int64 a3)
{
  NTSTATUS PolicyLanguageSpec; // ebx
  __int64 v7; // rdx
  __int64 LanguageList; // rax
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF

  KeyHandle = 0LL;
  if ( a2 && a3 )
  {
    if ( !a1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      PolicyLanguageSpec = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( PolicyLanguageSpec < 0 )
        goto LABEL_5;
      a1 = KeyHandle;
    }
    PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(a1);
    if ( !PolicyLanguageSpec )
    {
      if ( *(_QWORD *)a3 )
      {
        if ( *(_WORD *)(*(_QWORD *)a3 + 4LL) < *(_WORD *)(*(_QWORD *)a3 + 6LL) )
        {
LABEL_16:
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)a3 + 24LL) + 6LL * *(unsigned __int16 *)(*(_QWORD *)a3 + 4LL)) = 0;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)a3 + 24LL) + 6LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)a3 + 4LL))++ + 4) = 0;
          goto LABEL_5;
        }
        LanguageList = RtlpMuiRegGrowLanguageList();
      }
      else
      {
        LOBYTE(v7) = 1;
        LanguageList = RtlpMuiRegCreateLanguageList(1LL, v7, a2);
      }
      *(_QWORD *)a3 = LanguageList;
      if ( !LanguageList )
      {
        PolicyLanguageSpec = -1073741801;
        goto LABEL_5;
      }
      goto LABEL_16;
    }
  }
  else
  {
    PolicyLanguageSpec = -1073741811;
  }
LABEL_5:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)PolicyLanguageSpec;
}
