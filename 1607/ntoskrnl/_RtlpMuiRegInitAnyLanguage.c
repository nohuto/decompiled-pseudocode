/*
 * XREFs of _RtlpMuiRegInitAnyLanguage @ 0x1405614BC
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x140560B80 (RtlpMuiRegAddLanguageByName.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x1406E7690 (_RtlpMuiRegAddBaseLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x140561584 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegGetOrAddString @ 0x1405615A4 (RtlpMuiRegGetOrAddString.c)
 *     RtlCultureNameToLCID @ 0x1405617C8 (RtlCultureNameToLCID.c)
 */

__int64 __fastcall RtlpMuiRegInitAnyLanguage(__int64 a1, __int64 a2, const WCHAR *a3, __int16 a4)
{
  __int64 v8; // r8
  int v9; // r8d
  __int16 v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v12; // [rsp+24h] [rbp-24h] BYREF
  UNICODE_STRING v13[2]; // [rsp+28h] [rbp-20h] BYREF

  v11[0] = -1;
  RtlInitUnicodeString(v13, a3);
  if ( (unsigned __int8)RtlCultureNameToLCID(v13, &v12) )
  {
    LOBYTE(v8) = 1;
    v9 = RtlpMuiRegGetOrAddString(a1, a3, v8, v11);
    if ( v9 >= 0 )
    {
      *(_WORD *)(a2 + 4) = v12;
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
