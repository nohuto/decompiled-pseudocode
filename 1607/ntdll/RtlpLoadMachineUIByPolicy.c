/*
 * XREFs of RtlpLoadMachineUIByPolicy @ 0x180070B60
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800712D8 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180071974 (RtlpMuiRegCreateLanguageList.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800F3D64 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1800F4F5C (RtlpMuiRegGrowLanguageList.c)
 */

__int64 __fastcall RtlpLoadMachineUIByPolicy(HANDLE a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 LanguageList; // rax
  HANDLE Handle; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  int v13; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+50h] [rbp-20h]
  __int128 v17; // [rsp+58h] [rbp-18h]
  unsigned __int8 v18; // [rsp+A8h] [rbp+38h] BYREF
  __int16 v19; // [rsp+B8h] [rbp+48h] BYREF

  Handle = 0LL;
  v4 = a2;
  v18 = 0;
  v19 = 0;
  if ( a2 && a3 )
  {
    if ( !a1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
      Handle = 0LL;
      p_DestinationString = &DestinationString;
      v13 = 48;
      v14 = 0LL;
      v16 = 64;
      v17 = 0LL;
      v5 = NtOpenKey(&Handle, 131097LL, &v13);
      if ( v5 < 0 )
        goto LABEL_5;
      a1 = Handle;
      a2 = v4;
    }
    v5 = RtlpLoadPolicyLanguageSpec(a1, a2, &v18, &v19);
    if ( !v5 )
    {
      v9 = *a3;
      if ( *a3 )
      {
        if ( *(_WORD *)(v9 + 4) < *(_WORD *)(v9 + 6) )
        {
LABEL_16:
          *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * *(unsigned __int16 *)(*a3 + 4)) = v18;
          *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v19;
          goto LABEL_5;
        }
        LanguageList = RtlpMuiRegGrowLanguageList(v9, v7, v8);
      }
      else
      {
        LOBYTE(v7) = 1;
        LanguageList = RtlpMuiRegCreateLanguageList(1LL, v7, v4);
      }
      *a3 = LanguageList;
      if ( !LanguageList )
      {
        v5 = -1073741801;
        goto LABEL_5;
      }
      goto LABEL_16;
    }
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_5:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v5;
}
