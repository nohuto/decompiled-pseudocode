/*
 * XREFs of _RtlpMuiRegAddNeutralToInstalled @ 0x18003E424
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18003E2C8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     RtlLcidToLocaleName @ 0x18001CA60 (RtlLcidToLocaleName.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18003E524 (_RtlpMuiRegAddNeutralLanguage.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpMuiRegAddNeutralToInstalled(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  unsigned int i; // esi
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  LCID v10; // ecx
  _UNICODE_STRING LocaleName; // [rsp+20h] [rbp-D8h] BYREF
  _WORD v12[88]; // [rsp+30h] [rbp-C8h] BYREF

  v2 = 0;
  memset(v12, 0, 170);
  if ( a1 && (v3 = *(_QWORD *)(a1 + 24)) != 0 && *(_QWORD *)(v3 + 16) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(v3 + 6); ++i )
    {
      v5 = *(_QWORD *)(v3 + 16) + 28LL * i;
      if ( *(__int16 *)(v5 + 6) <= 0 )
      {
        v10 = *(unsigned __int16 *)(v5 + 4);
        *(_DWORD *)&LocaleName.Length = 11141120;
        LocaleName.Buffer = v12;
        if ( RtlLcidToLocaleName(v10, &LocaleName, 2u, 0) < 0 )
          goto LABEL_12;
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 32);
        v7 = (unsigned int)*(__int16 *)(v5 + 6);
        if ( v6 && *(_WORD *)(v5 + 6) && (unsigned int)v7 <= *(unsigned __int16 *)(v6 + 6) )
          v8 = *(_QWORD *)(v6 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v6 + 16) + 2 * v7);
        else
          v8 = 0LL;
        if ( !v8 )
          goto LABEL_12;
      }
      RtlpMuiRegAddNeutralLanguage(a1, v5);
LABEL_12:
      v3 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
