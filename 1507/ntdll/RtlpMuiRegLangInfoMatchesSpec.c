/*
 * XREFs of RtlpMuiRegLangInfoMatchesSpec @ 0x1800E7BB4
 * Callers:
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800E6AB0 (RtlpMuiRegConfigMatchesInstalled.c)
 * Callees:
 *     _MuiRegAllocArray @ 0x18001EECC (_MuiRegAllocArray.c)
 *     RtlCultureNameToLCID @ 0x18001F170 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpInitAndCallLcidToCultureName @ 0x180067018 (RtlpInitAndCallLcidToCultureName.c)
 *     _wcsicmp @ 0x1800857E0 (_wcsicmp.c)
 */

bool __fastcall RtlpMuiRegLangInfoMatchesSpec(__int64 a1, __int64 a2, char a3, __int16 a4)
{
  char v4; // r14
  unsigned __int16 *v8; // rbp
  unsigned __int16 v9; // ax
  __int64 v12; // r8
  const WCHAR *v13; // rdx
  __int16 v14; // dx
  __int64 v15; // r8
  const WCHAR *v16; // rdx
  unsigned __int16 *v17; // rax
  __int64 v18; // r8
  const wchar_t *v19; // rdx
  __int64 v20; // rdx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+18h] BYREF

  v4 = 1;
  v8 = 0LL;
  if ( a3 == 1 )
  {
    v9 = *(_WORD *)(a2 + 4);
    if ( v9 )
      return v9 == a4;
    if ( *(__int16 *)(a2 + 6) >= 0 )
    {
      v12 = *(_QWORD *)(a1 + 32);
      if ( v12 && *(__int16 *)(a2 + 6) < (int)*(unsigned __int16 *)(v12 + 6) )
        v13 = (const WCHAR *)(*(_QWORD *)(v12 + 24)
                            + 2LL * *(__int16 *)(*(_QWORD *)(v12 + 16) + 2LL * *(__int16 *)(a2 + 6)));
      else
        v13 = 0LL;
      if ( v13 )
      {
        RtlInitUnicodeString(&DestinationString, v13);
        if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          return (_WORD)Lcid == (unsigned __int16)a4;
      }
    }
    return 0;
  }
  if ( a3 == 3 )
  {
    v14 = *(_WORD *)(a2 + 6);
    DestinationString.Buffer = 0LL;
    if ( v14 < 0 )
    {
      if ( *(_WORD *)(a2 + 4) )
      {
        v17 = (unsigned __int16 *)MuiRegAllocArray(a1, 0x55u);
        v8 = v17;
        if ( v17 )
        {
          if ( RtlpInitAndCallLcidToCultureName(&DestinationString, v17, *(unsigned __int16 *)(a2 + 4)) )
          {
LABEL_26:
            v18 = *(_QWORD *)(a1 + 32);
            if ( v18 && a4 >= 0 && a4 < (int)*(unsigned __int16 *)(v18 + 6) )
              v19 = (const wchar_t *)(*(_QWORD *)(v18 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v18 + 16) + 2LL * a4));
            else
              v19 = 0LL;
            if ( !v19 || wcsicmp(DestinationString.Buffer, v19) )
              v4 = 0;
            if ( v8 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
            return v4;
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
        }
      }
    }
    else
    {
      if ( v14 == a4 )
        return v4;
      v15 = *(_QWORD *)(a1 + 32);
      if ( v15 && v14 < (int)*(unsigned __int16 *)(v15 + 6) )
        v16 = (const WCHAR *)(*(_QWORD *)(v15 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v15 + 16) + 2LL * v14));
      else
        v16 = 0LL;
      if ( v16 )
      {
        RtlInitUnicodeString(&DestinationString, v16);
        goto LABEL_26;
      }
    }
  }
  else if ( a3 == 2 && a4 >= 0 )
  {
    v20 = *(_QWORD *)(a1 + 24);
    if ( a4 < (int)*(unsigned __int16 *)(v20 + 6) )
      return a2 == *(_QWORD *)(v20 + 16) + 28LL * a4;
  }
  return 0;
}
