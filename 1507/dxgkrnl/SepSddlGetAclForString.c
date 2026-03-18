/*
 * XREFs of SepSddlGetAclForString @ 0x1C00D5AD8
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x1C00D5A34 (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     SepSddlAddAceToAcl @ 0x1C0165460 (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x1C0165540 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C0165604 (SepSddlLookupAccessMaskInTable.c)
 *     SepSddlParseWideStringUlong @ 0x1C0165690 (SepSddlParseWideStringUlong.c)
 */

__int64 __fastcall SepSddlGetAclForString(wchar_t *Str1, PVOID *a2, wchar_t **a3)
{
  wchar_t *v5; // rbx
  unsigned int SidForString; // edi
  unsigned int v7; // r14d
  wchar_t *v8; // rax
  __int64 v9; // rax
  wchar_t *v10; // rax
  int v11; // r8d
  wchar_t *i; // rax
  unsigned int v13; // r12d
  _QWORD *PoolWithTag; // rax
  unsigned int v16; // r15d
  _WORD *v17; // r14
  int v18; // r15d
  ACCESS_MASK AccessMask; // r14d
  wchar_t *j; // rbx
  PVOID *v21; // rbx
  wchar_t *v22; // rax
  __int64 v23; // rax
  int v24; // r8d
  int v25; // r9d
  _WORD *v26; // rbx
  wchar_t *v27; // [rsp+40h] [rbp-28h] BYREF
  _WORD *v28; // [rsp+48h] [rbp-20h]
  PSID Sid; // [rsp+50h] [rbp-18h]
  ACCESS_MASK v30; // [rsp+B0h] [rbp+48h] BYREF
  PVOID *v31; // [rsp+B8h] [rbp+50h]
  int v32; // [rsp+C0h] [rbp+58h] BYREF
  int v33; // [rsp+C8h] [rbp+60h]

  v31 = a2;
  *a2 = 0LL;
  v5 = Str1;
  Sid = 0LL;
  SidForString = 0;
  v7 = 0;
  v8 = wcschr(Str1, 0x3Au);
  *a3 = v8;
  if ( v8 == v5 )
    return 3221225485LL;
  if ( v8 )
  {
    v10 = v8 - 1;
  }
  else
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v5[v9] );
    v10 = &v5[v9];
  }
  *a3 = v10;
  v11 = 0;
  for ( i = v5; i < *a3; ++i )
  {
    if ( *i == 59 )
    {
      ++v7;
    }
    else if ( *i != 32 )
    {
      v11 = 1;
    }
  }
  v13 = v7 / 5;
  if ( v7 != 5 * (v7 / 5) || !v7 && v11 )
    return (unsigned int)-1073741811;
  if ( !v13 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x6C416553u);
    *a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 524290LL;
      return SidForString;
    }
    return (unsigned int)-1073741670;
  }
  v16 = 48 * v13 + 8;
  if ( v16 > 0xFFFF )
    v16 = 0xFFFF;
  v17 = ExAllocatePoolWithTag(PagedPool, v16, 0x6C416553u);
  *v31 = v17;
  if ( !v17 )
    return (unsigned int)-1073741670;
  v32 = 8;
  memset(v17, 0, v16);
  *v17 = 2;
  v17[1] = v16;
  v18 = 0;
  *((_DWORD *)v17 + 1) = 0;
  while ( 1 )
  {
    AccessMask = 0;
    v30 = 0;
    while ( *v5 == 32 )
      ++v5;
    if ( *v5 == 40 )
LABEL_32:
      ++v5;
    if ( *v5 == 32 )
      goto LABEL_32;
    if ( _wcsnicmp(v5, L"A", 1uLL) )
      break;
    for ( j = v5 + 2; *j == 32; ++j )
      ;
    if ( *j != 59 )
    {
      SidForString = -1073741811;
      goto LABEL_40;
    }
    do
      ++j;
    while ( *j == 32 );
    if ( *j != 59 )
    {
      do
      {
        while ( *j == 32 )
          ++j;
        if ( (unsigned int)SepSddlLookupAccessMaskInTable(j) )
        {
          AccessMask |= v33;
          v22 = v27;
          v30 = AccessMask;
        }
        else
        {
          SepSddlParseWideStringUlong(j, &v27, &v30);
          v22 = v27;
          AccessMask = v30;
          if ( v27 == j )
          {
            SidForString = -1073741811;
            goto LABEL_50;
          }
        }
        j = v22;
      }
      while ( *v22 != 59 );
    }
    ++j;
LABEL_50:
    if ( SidForString )
      goto LABEL_40;
    v23 = 2LL;
    do
    {
      while ( *j == 32 )
        ++j;
      if ( *j != 59 )
        SidForString = -1073741811;
      ++j;
      --v23;
    }
    while ( v23 );
    if ( SidForString )
      goto LABEL_40;
    while ( *j == 32 )
      ++j;
    SidForString = SepSddlGetSidForString(j);
    if ( SidForString )
      goto LABEL_40;
    v26 = v28;
    if ( !v28 )
      goto LABEL_75;
    if ( *v28 == 32 )
    {
      do
        ++v26;
      while ( *v26 == 32 );
      v28 = v26;
    }
    if ( *v26 != 41 )
    {
LABEL_75:
      SidForString = -1073741705;
      goto LABEL_40;
    }
    v5 = v26 + 1;
    if ( Sid )
    {
      SidForString = SepSddlAddAceToAcl((int)v31, (int)&v32, v24, v25, AccessMask, v13 - v18, Sid);
      if ( SidForString )
        goto LABEL_40;
    }
    if ( *v5 == 40 )
      ++v5;
    if ( ++v18 >= v13 )
      goto LABEL_77;
  }
  SidForString = -1073741811;
LABEL_77:
  if ( SidForString )
  {
LABEL_40:
    v21 = v31;
    ExFreePoolWithTag(*v31, 0);
    *v21 = 0LL;
  }
  else
  {
    *((_WORD *)*v31 + 1) = v32;
  }
  return SidForString;
}
