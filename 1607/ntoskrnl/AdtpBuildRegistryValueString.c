/*
 * XREFs of AdtpBuildRegistryValueString @ 0x1406D0B04
 * Callers:
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D5EC (SeAdtRegistryValueChangedAuditAlarm.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     AdtpBuildHexInt64String @ 0x1406D0508 (AdtpBuildHexInt64String.c)
 *     AdtpBuildUlongString @ 0x1406D14E0 (AdtpBuildUlongString.c)
 *     AdtpBuildReplacementString @ 0x1406D1E34 (AdtpBuildReplacementString.c)
 */

__int64 __fastcall AdtpBuildRegistryValueString(int a1, unsigned int a2, __int64 *a3, UNICODE_STRING *a4, _BYTE *a5)
{
  _BYTE *v5; // r15
  size_t v6; // rbx
  unsigned int v9; // edi
  int v10; // r8d
  const WCHAR *v11; // r12
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int16 v19; // ax
  unsigned int v20; // ebp
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  unsigned int v23; // ebp
  WCHAR v24; // dx
  __int64 v25; // rax
  wchar_t *v26; // rax
  unsigned __int64 v27; // rbp
  PVOID PoolWithTag; // r12
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // rcx
  int v33; // [rsp+20h] [rbp-38h]

  v5 = a5;
  v6 = a2;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  *a5 = 0;
  switch ( a1 )
  {
    case 4:
      if ( a2 >= 4 )
      {
        v12 = *(_DWORD *)a3;
LABEL_7:
        v13 = AdtpBuildUlongString(v12, 0LL, (__int64)a5);
LABEL_40:
        v9 = v13;
        goto LABEL_52;
      }
      goto LABEL_38;
    case 5:
      if ( a2 >= 4 )
      {
        v12 = (((*(_DWORD *)a3 << 16) | *(_DWORD *)a3 & 0xFF00) << 8) | ((HIWORD(*(_DWORD *)a3) | *(_DWORD *)a3 & 0xFF0000u) >> 8);
        goto LABEL_7;
      }
      goto LABEL_38;
    case 11:
      if ( a2 >= 8 )
      {
        v13 = AdtpBuildHexInt64String(a3, (__int64)a4, 0LL, 1LL, v33, a5);
        goto LABEL_40;
      }
      goto LABEL_38;
  }
  if ( (unsigned int)(a1 - 1) <= 1 )
  {
    if ( a2 < 2 )
    {
      a3 = 0LL;
    }
    else
    {
      v27 = (unsigned __int64)a2 >> 1;
      if ( *((_WORD *)a3 + v27 - 1) )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2 + 2LL, 0x6B416553u);
        if ( !PoolWithTag )
          goto LABEL_24;
        memmove(PoolWithTag, a3, v6);
        *((_WORD *)PoolWithTag + v27) = 0;
        RtlInitUnicodeString(a4, (PCWSTR)PoolWithTag);
        *a5 = 1;
LABEL_47:
        Length = a4->Length;
        if ( a4->Length >= (unsigned __int16)v6 )
          Length = v6;
        MaximumLength = a4->MaximumLength;
        a4->Length = Length;
        if ( MaximumLength >= (unsigned __int16)v6 )
          MaximumLength = v6;
        a4->MaximumLength = MaximumLength;
LABEL_52:
        if ( (v9 & 0x80000000) == 0 )
          return v9;
        goto LABEL_53;
      }
    }
    RtlInitUnicodeString(a4, (PCWSTR)a3);
    *a5 = 0;
    goto LABEL_47;
  }
  if ( a1 != 7 )
  {
LABEL_38:
    v26 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1AuLL, 0x6B416553u);
    a4->Buffer = v26;
    if ( v26 )
    {
      *a5 = 1;
      *(_DWORD *)&a4->Length = 1703936;
      v13 = AdtpBuildReplacementString(1800LL, a4);
      goto LABEL_40;
    }
LABEL_24:
    v9 = -1073741801;
LABEL_53:
    if ( *a5 )
    {
      Buffer = a4->Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
    }
    *a5 = 0;
    return v9;
  }
  v14 = a2 >> 1;
  v15 = 0;
  if ( a2 >> 1 )
  {
    do
    {
      v16 = v14 - 1;
      if ( *((_WORD *)a3 + v16) )
        break;
      if ( v15 >= 2 )
        break;
      ++v15;
      --v14;
    }
    while ( (_DWORD)v16 );
  }
  if ( v14 )
  {
    v17 = a3;
    v18 = v14;
    do
    {
      v19 = *(_WORD *)v17;
      v17 = (__int64 *)((char *)v17 + 2);
      if ( v19 == 42 )
        ++v10;
      --v18;
    }
    while ( v18 );
    v20 = v14 + v10 + 1;
    v11 = (const WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * v20, 0x6B416553u);
    if ( !v11 )
      goto LABEL_24;
    v21 = 0;
    v22 = 0;
    v23 = v20 - 1;
    do
    {
      if ( v22 >= v23 )
        break;
      v24 = *(_WORD *)a3;
      v25 = v22;
      if ( *(_WORD *)a3 )
      {
        if ( v24 == 42 )
        {
          ++v22;
          v11[v25] = 42;
          v11[v22] = 42;
        }
        else
        {
          v11[v22] = v24;
        }
      }
      else
      {
        v11[v22] = 42;
      }
      ++v22;
      ++v21;
      a3 = (__int64 *)((char *)a3 + 2);
    }
    while ( v21 < v14 );
    v5 = a5;
    v11[v22] = 0;
  }
  RtlInitUnicodeString(a4, v11);
  if ( v11 )
    *v5 = 1;
  return v9;
}
