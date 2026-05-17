/*
 * XREFs of _ResCreateFileMapping @ 0x180103D90
 * Callers:
 *     _CreateSecureFileMapping @ 0x180103484 (_CreateSecureFileMapping.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     BaseFormatObjectAttributes @ 0x180102E7C (BaseFormatObjectAttributes.c)
 */

__int64 __fastcall ResCreateFileMapping(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, PCWSTR SourceString)
{
  unsigned int v6; // ebx
  UNICODE_STRING *p_DestinationString; // r8
  ULONG v10; // ecx
  NTSTATUS Section; // eax
  _DWORD *v13; // r9
  _DWORD v14[2]; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v17[56]; // [rsp+70h] [rbp-1h] BYREF

  v6 = a3 & 0x9D800000 ^ a3;
  if ( v6 != 4 && v6 != 64 && v6 != 32 && v6 != 2 && v6 != 8 )
  {
LABEL_8:
    v10 = 87;
LABEL_9:
    RtlSetLastWin32Error(v10);
    return 0LL;
  }
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    p_DestinationString = &DestinationString;
  }
  else
  {
    p_DestinationString = 0LL;
  }
  Section = BaseFormatObjectAttributes((__int64)v17, a2, (__int64)p_DestinationString, v15);
  if ( Section < 0 )
    goto LABEL_12;
  if ( a5 )
  {
    v14[1] = 0;
    v13 = v14;
    v14[0] = a5;
  }
  else
  {
    v13 = 0LL;
  }
  if ( a1 == -1 && !v13 )
    goto LABEL_8;
  Section = NtCreateSection();
  if ( Section < 0 )
  {
LABEL_12:
    v10 = RtlNtStatusToDosError(Section);
    goto LABEL_9;
  }
  RtlSetLastWin32Error(0);
  return v15[1];
}
