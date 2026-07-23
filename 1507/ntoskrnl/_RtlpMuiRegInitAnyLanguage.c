/*
 * XREFs of _RtlpMuiRegInitAnyLanguage @ 0x140592440
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x140591AF8 (RtlpMuiRegAddLanguageByName.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x14072046C (_RtlpMuiRegAddBaseLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x140592508 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegGetOrAddString @ 0x140592528 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x14059284C (RtlCultureNameToLCID.c)
 */

__int64 __fastcall RtlpMuiRegInitAnyLanguage(__int64 a1, __int64 a2, const WCHAR *a3, __int16 a4)
{
  __int64 v8; // r8
  int v9; // r8d
  __int16 v11[2]; // [rsp+20h] [rbp-28h] BYREF
  DWORD Lcid; // [rsp+24h] [rbp-24h] BYREF
  UNICODE_STRING String; // [rsp+28h] [rbp-20h] BYREF

  v11[0] = -1;
  RtlInitUnicodeString(&String, a3);
  if ( RtlCultureNameToLCID(&String, &Lcid) )
  {
    LOBYTE(v8) = 1;
    v9 = RtlpMuiRegGetOrAddString(a1, a3, v8, v11);
    if ( v9 >= 0 )
    {
      *(_WORD *)(a2 + 4) = Lcid;
      *(_WORD *)(a2 + 6) = v11[0];
      *(_WORD *)a2 = a4;
      *(_WORD *)(a2 + 2) = 0;
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_DWORD *)(a2 + 24) = 0;
      if ( (a4 & 0x2000) == 0 )
        RtlpMuiRegAddNeutralLanguage(a1, a2);
    }
  }
  else
  {
    return (unsigned int)-1073020924;
  }
  return (unsigned int)v9;
}
