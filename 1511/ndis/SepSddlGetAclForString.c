/*
 * XREFs of SepSddlGetAclForString @ 0x1C00AD46C
 * Callers:
 *     SepSddlDaclFromSDDLString @ 0x1C00AD3C8 (SepSddlDaclFromSDDLString.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 *     SepSddlAddAceToAcl @ 0x1C00AD750 (SepSddlAddAceToAcl.c)
 *     SepSddlGetSidForString @ 0x1C00AD7D8 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C00AD894 (SepSddlLookupAccessMaskInTable.c)
 *     SepSddlParseWideStringUlong @ 0x1C00DE704 (SepSddlParseWideStringUlong.c)
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
  unsigned int v14; // r15d
  _WORD *v15; // r14
  int v16; // r15d
  ACCESS_MASK AccessMask; // r14d
  wchar_t *j; // rbx
  wchar_t *v19; // rax
  __int64 v20; // rax
  int v21; // r8d
  int v22; // r9d
  _WORD *v23; // rbx
  _QWORD *PoolWithTag; // rax
  PVOID *v26; // rbx
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
  v14 = 48 * v13 + 8;
  if ( v14 > 0xFFFF )
    v14 = 0xFFFF;
  v15 = ExAllocatePoolWithTag(PagedPool, v14, 0x6C416553u);
  *v31 = v15;
  if ( !v15 )
    return (unsigned int)-1073741670;
  v32 = 8;
  memset(v15, 0, v14);
  *v15 = 2;
  v15[1] = v14;
  v16 = 0;
  *((_DWORD *)v15 + 1) = 0;
  while ( 1 )
  {
    AccessMask = 0;
    v30 = 0;
    while ( *v5 == 32 )
      ++v5;
    if ( *v5 == 40 )
LABEL_54:
      ++v5;
    if ( *v5 == 32 )
      goto LABEL_54;
    if ( _wcsnicmp(v5, L"A", 1uLL) )
      break;
    for ( j = v5 + 2; *j == 32; ++j )
      ;
    if ( *j != 59 )
    {
      SidForString = -1073741811;
      goto LABEL_74;
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
          v19 = v27;
          v30 = AccessMask;
        }
        else
        {
          SepSddlParseWideStringUlong(j, &v27, &v30);
          v19 = v27;
          AccessMask = v30;
          if ( v27 == j )
          {
            SidForString = -1073741811;
            goto LABEL_33;
          }
        }
        j = v19;
      }
      while ( *v19 != 59 );
    }
    ++j;
LABEL_33:
    if ( SidForString )
      goto LABEL_74;
    v20 = 2LL;
    do
    {
      while ( *j == 32 )
        ++j;
      if ( *j != 59 )
        SidForString = -1073741811;
      ++j;
      --v20;
    }
    while ( v20 );
    if ( SidForString )
      goto LABEL_74;
    while ( *j == 32 )
      ++j;
    SidForString = SepSddlGetSidForString(j);
    if ( SidForString )
      goto LABEL_74;
    v23 = v28;
    if ( !v28 )
      goto LABEL_72;
    if ( *v28 == 32 )
    {
      do
        ++v23;
      while ( *v23 == 32 );
      v28 = v23;
    }
    if ( *v23 != 41 )
    {
LABEL_72:
      SidForString = -1073741705;
      goto LABEL_74;
    }
    v5 = v23 + 1;
    if ( Sid )
    {
      SidForString = SepSddlAddAceToAcl((int)v31, (int)&v32, v21, v22, AccessMask, v13 - v16, Sid);
      if ( SidForString )
        goto LABEL_74;
    }
    if ( *v5 == 40 )
      ++v5;
    if ( ++v16 >= v13 )
      goto LABEL_50;
  }
  SidForString = -1073741811;
LABEL_50:
  if ( !SidForString )
  {
    *((_WORD *)*v31 + 1) = v32;
    return SidForString;
  }
LABEL_74:
  v26 = v31;
  ExFreePoolWithTag(*v31, 0);
  *v26 = 0LL;
  return SidForString;
}
