/*
 * XREFs of SdbpSearchDB @ 0x1405142C4
 * Callers:
 *     SdbGetDatabaseMatch @ 0x140515544 (SdbGetDatabaseMatch.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140513CD0 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x140513FFC (SdbFindFirstStringIndexedTag.c)
 *     SdbGetIndex @ 0x1405143E0 (SdbGetIndex.c)
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 *     SdbpCheckExe @ 0x1406C2074 (SdbpCheckExe.c)
 *     SdbFindFirstNamedTag @ 0x1406C3EAC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1406C3F70 (SdbpFindNextNamedTag.c)
 *     SdbFindNextStringIndexedTag @ 0x1406C50B0 (SdbFindNextStringIndexedTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1406C50E8 (SdbpFindNextIndexedWildCardTag.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpSearchDB(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // r12
  unsigned int v9; // edi
  WCHAR *Str1; // rsi
  __int64 v12; // r8
  unsigned int v13; // r14d
  int v14; // r15d
  int FirstStringIndexedTag; // eax
  int v16; // esi
  __int64 v17; // r8
  __int64 v19; // rsi
  int i; // eax
  int v21; // eax
  int FirstTag; // eax
  int v23; // r8d
  int v24; // eax
  int NextStringIndexedTag; // eax
  int v26; // r15d
  int FirstNamedTag; // eax
  int v28; // esi
  int v29; // eax
  int NextNamedTag; // eax
  int j; // eax
  int v32; // eax
  unsigned int v33; // eax
  wchar_t *v34; // [rsp+40h] [rbp-30h]
  unsigned int v35[10]; // [rsp+48h] [rbp-28h] BYREF
  int v37; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v38; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a5;
  v9 = 0;
  a6 = 0;
  v37 = 0;
  memset(a5, 0, 0x80uLL);
  Str1 = *(WCHAR **)(a4 + 40);
  v34 = Str1;
  v13 = 16;
  if ( (unsigned int)SdbGetIndex(a2, 28679LL, 24587LL, 0LL) )
  {
    for ( i = SdbpFindFirstIndexedWildCardTag(a2, 28679LL, v12, (__int64)Str1, v35);
          i;
          i = SdbpFindNextIndexedWildCardTag(a2, v35) )
    {
      v21 = SdbpCheckExe(a1, a2, i, (int)&v37, a4, 1, (__int64)&v38, v6);
      v9 = v37;
      if ( v21 )
      {
        if ( (_DWORD)v38 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v37 > 0x10 )
      {
        goto LABEL_11;
      }
    }
  }
  if ( (unsigned int)SdbGetIndex(a2, 28679LL, 24577LL, 0LL) )
  {
    v14 = 1;
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag(a2, 28679LL, 24577LL, Str1, v35);
  }
  else
  {
    v14 = 0;
    FirstTag = SdbFindFirstTag(a2, 0, 28673);
    a6 = FirstTag;
    if ( !FirstTag )
    {
      v23 = 2855;
LABEL_23:
      AslLogCallPrintf(1, (unsigned int)"SdbpSearchDB", v23, (unsigned int)"No DATABASE tag found");
      goto LABEL_7;
    }
    FirstStringIndexedTag = SdbFindFirstNamedTag(a2, FirstTag, 28679, 24577, Str1);
  }
  v16 = FirstStringIndexedTag;
  if ( FirstStringIndexedTag )
  {
    do
    {
      v24 = SdbpCheckExe(a1, a2, v16, (int)&v37, a4, 0, (__int64)&v38, v6);
      v9 = v37;
      if ( v24 )
      {
        if ( (_DWORD)v38 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v37 > 0x10 )
      {
        goto LABEL_11;
      }
      if ( v14 )
        NextStringIndexedTag = SdbFindNextStringIndexedTag(a2, v35);
      else
        NextStringIndexedTag = SdbpFindNextNamedTag(a2, a6, v16, 24577, v34);
      v16 = NextStringIndexedTag;
    }
    while ( NextStringIndexedTag );
  }
  if ( !*(_QWORD *)(a4 + 48) )
    goto LABEL_6;
  if ( (unsigned int)SdbGetIndex(a2, 28679LL, 24608LL, 0LL) )
  {
    v26 = 1;
    FirstNamedTag = SdbFindFirstStringIndexedTag(a2, 28679LL, 24608LL, *(const WCHAR **)(a4 + 48), v35);
    goto LABEL_38;
  }
  v26 = 0;
  a6 = SdbFindFirstTag(a2, 0, 28673);
  if ( a6 )
  {
    v23 = 2927;
    goto LABEL_23;
  }
  FirstNamedTag = SdbFindFirstNamedTag(a2, 0, 28679, 24608, *(wchar_t **)(a4 + 48));
LABEL_38:
  v28 = FirstNamedTag;
  if ( FirstNamedTag )
  {
    do
    {
      v29 = SdbpCheckExe(a1, a2, v28, (int)&v37, a4, 0, (__int64)&v38, v6);
      v9 = v37;
      if ( v29 )
      {
        if ( (_DWORD)v38 != 2 )
          goto LABEL_7;
      }
      else if ( (unsigned int)v37 > 0x10 )
      {
        goto LABEL_11;
      }
      if ( v26 )
        NextNamedTag = SdbFindNextStringIndexedTag(a2, v35);
      else
        NextNamedTag = SdbpFindNextNamedTag(a2, a6, v28, 24608, *(wchar_t **)(a4 + 48));
      v28 = NextNamedTag;
    }
    while ( NextNamedTag );
  }
LABEL_6:
  if ( (unsigned int)SdbGetIndex(a2, 28679LL, 24587LL, 0LL) )
  {
    for ( j = SdbpFindFirstIndexedWildCardTag(a2, 28679LL, v17, (__int64)v34, v35);
          j;
          j = SdbpFindNextIndexedWildCardTag(a2, v35) )
    {
      v32 = SdbpCheckExe(a1, a2, j, (int)&v37, a4, 2, (__int64)&v38, v6);
      v9 = v37;
      if ( v32 )
      {
        if ( (_DWORD)v38 != 2 )
          break;
      }
      else if ( (unsigned int)v37 > 0x10 )
      {
        goto LABEL_11;
      }
    }
  }
LABEL_7:
  if ( v9 > 0x10 || (v13 = v9) != 0 )
  {
LABEL_11:
    v19 = v13;
    do
    {
      v33 = SdbFindFirstTag(a2, *v6, 24582);
      if ( v33 )
        SdbGetStringTagPtr(a2, v33);
      v6 += 2;
      --v19;
    }
    while ( v19 );
  }
  return v9;
}
