/*
 * XREFs of PiDevCfgGetMigrationDeviceIdScore @ 0x1401CE9AC
 * Callers:
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406383DC (PiDevCfgFindDeviceMigrationNode.c)
 * Callees:
 *     _wcsicmp @ 0x14014DD0C (_wcsicmp.c)
 */

__int64 __fastcall PiDevCfgGetMigrationDeviceIdScore(wchar_t *Str1, wchar_t *Str2)
{
  const wchar_t *v2; // rbx
  wchar_t *v3; // rsi
  unsigned __int16 v4; // di
  char v5; // r12
  unsigned __int16 v6; // r14
  const wchar_t *v7; // r15
  const wchar_t *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  wchar_t *v13; // rsi
  bool v14; // zf
  __int64 v15; // rax
  const wchar_t *v16; // rbx

  v2 = Str2;
  v3 = Str1;
  v4 = 0;
  v5 = 0;
  if ( !Str1 )
    return (unsigned __int16)-1;
  if ( !Str2 )
    return (unsigned __int16)-1;
  v6 = 0x4000;
  v7 = Str2;
  if ( !*Str2 )
    return (unsigned __int16)-1;
  do
  {
    v8 = v3;
    if ( *v3 )
    {
      while ( wcsicmp(v8, v7) )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v8[v9] );
        v8 += v9 + 1;
        if ( !*v8 )
          goto LABEL_11;
      }
      v5 = 1;
    }
LABEL_11:
    if ( !*v8 )
      v4 |= v6;
    if ( v6 > 2u )
      v6 >>= 1;
    v10 = -1LL;
    do
      ++v10;
    while ( v7[v10] );
    v7 += v10 + 1;
  }
  while ( *v7 );
  if ( v5 )
  {
    if ( wcsicmp(v3, v2) )
      v4 |= 0x8000u;
    v11 = -1LL;
    do
      ++v11;
    while ( v3[v11] );
    while ( 1 )
    {
      v14 = v3[v11 + 1] == 0;
      v12 = -1LL;
      if ( v14 )
        break;
      do
        ++v12;
      while ( v3[v12] );
      v13 = &v3[v12];
      v11 = -1LL;
      v3 = v13 + 1;
      do
        ++v11;
      while ( v3[v11] );
    }
    do
      ++v12;
    while ( v2[v12] );
    while ( v2[v12 + 1] )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v2[v15] );
      v16 = &v2[v15];
      v12 = -1LL;
      v2 = v16 + 1;
      do
        ++v12;
      while ( v2[v12] );
    }
    if ( wcsicmp(v3, v2) )
      v4 |= 1u;
  }
  else
  {
    return (unsigned __int16)-1;
  }
  return v4;
}
