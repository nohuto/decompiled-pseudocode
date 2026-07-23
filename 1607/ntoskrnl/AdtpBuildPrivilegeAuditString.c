/*
 * XREFs of AdtpBuildPrivilegeAuditString @ 0x1406D090C
 * Callers:
 *     AdtpPackageParameters @ 0x1401449C0 (AdtpPackageParameters.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402380B0 (AdtpBuildAccessReasonAuditStringInternal.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     AdtpLookupKnownPrivilegeNameQuickly @ 0x140238F88 (AdtpLookupKnownPrivilegeNameQuickly.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildPrivilegeAuditString(
        unsigned int *a1,
        UNICODE_STRING *a2,
        wchar_t **a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int v6; // r15d
  UNICODE_STRING *v9; // r13
  unsigned __int16 v12; // bx
  __int64 v13; // rdx
  unsigned int v14; // r8d
  wchar_t *PoolWithTag; // r14
  wchar_t *v16; // rdi
  size_t Length; // rbx
  wchar_t *Buffer; // rdx
  __int64 v19; // rbx
  unsigned __int16 v20; // di
  UNICODE_STRING v21; // [rsp+20h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  __int128 v23; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v24; // [rsp+50h] [rbp-10h] BYREF

  v6 = 0;
  *(_QWORD *)&v21.MaximumLength = 0LL;
  v9 = a2;
  if ( *a1 )
  {
    if ( *a1 - 1 > 0x41 )
      return 3221225485LL;
    RtlInitUnicodeString(&DestinationString, L"\r\n\t\t\t");
    RtlInitUnicodeString(&v24, L"?");
    v12 = (unsigned __int16)(*(_WORD *)a1 * (DestinationString.Length + AdtpWellKnownPrivilegeMaxLen)
                           - DestinationString.Length
                           + 2) >> 1;
    if ( a4 && (v13 = *a5, v14 = v13 + v12, v14 < 0x400) )
    {
      PoolWithTag = (wchar_t *)(a4 + 2 * v13);
      *a5 = v14;
    }
    else
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v12, 0x6B416553u);
      if ( !PoolWithTag )
        return 3221225495LL;
      *a6 = 1;
    }
    v21.Buffer = PoolWithTag;
    v21.MaximumLength = 2 * v12;
    v16 = PoolWithTag;
    if ( *a1 )
    {
      do
      {
        if ( (unsigned int)AdtpLookupKnownPrivilegeNameQuickly((int *)&a1[2 * v6 + 2 + v6], &v23) )
        {
          Length = v24.Length;
          Buffer = v24.Buffer;
        }
        else
        {
          Length = (unsigned __int16)v23;
          Buffer = (wchar_t *)*((_QWORD *)&v23 + 1);
        }
        memmove(v16, Buffer, Length);
        v16 = (wchar_t *)((char *)v16 + Length);
        if ( v6 < *a1 - 1 )
        {
          v19 = DestinationString.Length;
          memmove(v16, DestinationString.Buffer, DestinationString.Length);
          v16 = (wchar_t *)((char *)v16 + v19);
        }
        ++v6;
      }
      while ( v6 < *a1 );
      v9 = a2;
    }
    *v16 = 0;
    v20 = (_WORD)v16 - (_WORD)PoolWithTag;
    v21.Length = v20;
    if ( a3 )
    {
      *a3 = PoolWithTag;
      a3[1] = (wchar_t *)((unsigned int)v20 + 2);
    }
    else
    {
      *v9 = v21;
    }
  }
  else if ( a3 )
  {
    a3[1] = (wchar_t *)4;
    *a3 = (wchar_t *)&unk_140261FE8;
  }
  else if ( a2 )
  {
    RtlInitUnicodeString(a2, L"-");
  }
  return 0LL;
}
