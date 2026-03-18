/*
 * XREFs of LookupSidInTable @ 0x1406872B8
 * Callers:
 *     LocalConvertAclToString @ 0x140684128 (LocalConvertAclToString.c)
 *     LocalGetSidForString @ 0x140686904 (LocalGetSidForString.c)
 *     LocalGetStringForSid @ 0x140686B20 (LocalGetStringForSid.c)
 * Callees:
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     RtlSubAuthorityCountSid @ 0x14003D378 (RtlSubAuthorityCountSid.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     _wcsnicmp @ 0x140144480 (_wcsnicmp.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     SddlpAlloc @ 0x140687AFC (SddlpAlloc.c)
 */

__int64 __fastcall LookupSidInTable(wchar_t *Str1, PSID Sid1, __int64 a3, __int64 a4, int a5, char a6, _QWORD *a7)
{
  __int64 v7; // rbx
  PUCHAR v11; // rax
  PSID *v12; // r14
  unsigned int i; // ebp
  char v14; // [rsp+88h] [rbp+20h]

  v7 = 0LL;
  v14 = 0;
  if ( __PAIR128__((unsigned __int64)Str1, (unsigned __int64)Sid1) == 0 )
    return 0LL;
  *a7 = 0LL;
  if ( Str1 )
  {
    if ( wcsnicmp(Str1, L"EA", 2uLL) && wcsnicmp(Str1, L"SA", 2uLL) )
      wcsnicmp(Str1, L"RO", 2uLL);
  }
  else
  {
    v14 = 1;
    v11 = RtlSubAuthorityCountSid(Sid1);
    if ( *v11 )
      RtlSubAuthoritySid(Sid1, (unsigned int)*v11 - 1);
  }
  v12 = (PSID *)&unk_1402C7ED0;
  for ( i = 0; i < 0x3F; ++i )
  {
    if ( v14 )
    {
      if ( RtlEqualSid(Sid1, *v12) )
        break;
    }
    else if ( !wcsnicmp(Str1, (const wchar_t *)&unk_1402C7EC0 + 52 * i + 1, *((unsigned int *)v12 - 1)) )
    {
      break;
    }
    v12 += 13;
  }
  if ( i < 0x3F )
    return (__int64)&unk_1402C7EC0 + 104 * i;
  return v7;
}
