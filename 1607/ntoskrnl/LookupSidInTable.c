/*
 * XREFs of LookupSidInTable @ 0x1404BA8E4
 * Callers:
 *     LocalGetSidForString @ 0x1404BA830 (LocalGetSidForString.c)
 *     LocalConvertAclToString @ 0x1406CA4C0 (LocalConvertAclToString.c)
 *     LocalGetStringForSid @ 0x1406CB950 (LocalGetStringForSid.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x14000D278 (RtlSubAuthoritySid.c)
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     RtlSubAuthorityCountSid @ 0x14002CDC8 (RtlSubAuthorityCountSid.c)
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 */

__int64 __fastcall LookupSidInTable(wchar_t *Str1, PSID Sid1, __int64 a3, __int64 a4, int a5, char a6, _QWORD *a7)
{
  __int64 v7; // rbx
  PSID *v10; // r14
  unsigned int i; // ebp
  PUCHAR v13; // rax
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
    v13 = RtlSubAuthorityCountSid(Sid1);
    if ( *v13 )
      RtlSubAuthoritySid(Sid1, (unsigned int)*v13 - 1);
  }
  v10 = (PSID *)&unk_1402F4FA0;
  for ( i = 0; i < 0x3F; ++i )
  {
    if ( !v14 )
    {
      if ( !wcsnicmp(Str1, (const wchar_t *)&unk_1402F4F90 + 52 * i + 1, *((unsigned int *)v10 - 1)) )
        break;
      goto LABEL_9;
    }
    if ( RtlEqualSid(Sid1, *v10) )
      break;
LABEL_9:
    v10 += 13;
  }
  if ( i < 0x3F )
    return (__int64)&unk_1402F4F90 + 104 * i;
  return v7;
}
