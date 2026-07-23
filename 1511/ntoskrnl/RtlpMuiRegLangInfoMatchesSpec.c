/*
 * XREFs of RtlpMuiRegLangInfoMatchesSpec @ 0x14069FCB8
 * Callers:
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14069F434 (RtlpMuiRegConfigMatchesInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     sub_14013A7C0 @ 0x14013A7C0 (sub_14013A7C0.c)
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlCultureNameToLCID @ 0x14053A358 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x14064993C (RtlLCIDToCultureName.c)
 */

bool __fastcall RtlpMuiRegLangInfoMatchesSpec(__int64 a1, __int64 a2, char a3, __int16 a4)
{
  char v4; // r14
  wchar_t *v8; // rbp
  unsigned __int16 v9; // ax
  __int16 v12; // dx
  __int64 v13; // r8
  const WCHAR *v14; // rdx
  __int16 v15; // dx
  __int64 v16; // r8
  const WCHAR *v17; // rdx
  wchar_t *v18; // rax
  LCID v19; // ecx
  __int64 v20; // r8
  const wchar_t *v21; // rdx
  __int64 v22; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+18h] BYREF

  v4 = 1;
  v8 = 0LL;
  if ( a3 == 1 )
  {
    v9 = *(_WORD *)(a2 + 4);
    if ( v9 )
      return v9 == a4;
    v12 = *(_WORD *)(a2 + 6);
    if ( v12 >= 0 )
    {
      v13 = *(_QWORD *)(a1 + 32);
      if ( v13 && v12 < (int)*(unsigned __int16 *)(v13 + 6) )
        v14 = (const WCHAR *)(*(_QWORD *)(v13 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v13 + 16) + 2LL * v12));
      else
        v14 = 0LL;
      if ( v14 )
      {
        RtlInitUnicodeString(&DestinationString, v14);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          return (_WORD)Lcid == (unsigned __int16)a4;
      }
    }
    return 0;
  }
  if ( a3 == 3 )
  {
    v15 = *(_WORD *)(a2 + 6);
    DestinationString.Buffer = 0LL;
    if ( v15 < 0 )
    {
      if ( *(_WORD *)(a2 + 4) )
      {
        v18 = (wchar_t *)sub_14013A7C0(a1, 0x55u);
        v8 = v18;
        if ( v18 )
        {
          v19 = *(unsigned __int16 *)(a2 + 4);
          DestinationString.Buffer = v18;
          if ( RtlLCIDToCultureName(v19, &DestinationString) )
          {
LABEL_26:
            v20 = *(_QWORD *)(a1 + 32);
            if ( v20 && a4 >= 0 && a4 < (int)*(unsigned __int16 *)(v20 + 6) )
              v21 = (const wchar_t *)(*(_QWORD *)(v20 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v20 + 16) + 2LL * a4));
            else
              v21 = 0LL;
            if ( !v21 || wcsicmp(DestinationString.Buffer, v21) )
              v4 = 0;
            if ( v8 )
              ExFreePoolWithTag(v8, 0);
            return v4;
          }
          ExFreePoolWithTag(v8, 0);
        }
      }
    }
    else
    {
      if ( v15 == a4 )
        return v4;
      v16 = *(_QWORD *)(a1 + 32);
      if ( v16 && v15 < (int)*(unsigned __int16 *)(v16 + 6) )
        v17 = (const WCHAR *)(*(_QWORD *)(v16 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v16 + 16) + 2LL * v15));
      else
        v17 = 0LL;
      if ( v17 )
      {
        RtlInitUnicodeString(&DestinationString, v17);
        goto LABEL_26;
      }
    }
  }
  else if ( a3 == 2 && a4 >= 0 )
  {
    v22 = *(_QWORD *)(a1 + 24);
    if ( a4 < (int)*(unsigned __int16 *)(v22 + 6) )
      return a2 == *(_QWORD *)(v22 + 16) + 28LL * a4;
  }
  return 0;
}
