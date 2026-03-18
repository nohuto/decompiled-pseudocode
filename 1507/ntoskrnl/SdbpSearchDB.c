/*
 * XREFs of SdbpSearchDB @ 0x1405AADAC
 * Callers:
 *     SdbGetDatabaseMatch @ 0x1405AA8F0 (SdbGetDatabaseMatch.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140577324 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x140577774 (SdbFindFirstStringIndexedTag.c)
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     SdbGetIndex @ 0x14057812C (SdbGetIndex.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1405A9D10 (SdbpFindNextIndexedWildCardTag.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x1405ABAB8 (SdbGetStringTagPtr.c)
 *     SdbpCheckExe @ 0x140702524 (SdbpCheckExe.c)
 *     SdbFindFirstNamedTag @ 0x140703E7C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x140703F40 (SdbpFindNextNamedTag.c)
 *     SdbFindNextStringIndexedTag @ 0x140704E2C (SdbFindNextStringIndexedTag.c)
 */

__int64 __fastcall SdbpSearchDB(int a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned int *a5, int a6)
{
  unsigned int *v6; // r12
  unsigned int v9; // edi
  wchar_t *Str1; // rsi
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
  Str1 = *(wchar_t **)(a4 + 40);
  v34 = Str1;
  v13 = 16;
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24587, 0LL) )
  {
    for ( i = SdbpFindFirstIndexedWildCardTag((__int64)a2, 28679LL, v12, (__int64)Str1, v35);
          i;
          i = SdbpFindNextIndexedWildCardTag((__int64)a2, v35) )
    {
      v21 = SdbpCheckExe(a1, (int)a2, i, (int)&v37, a4, 1, (__int64)&v38, v6);
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
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24577, 0LL) )
  {
    v14 = 1;
    FirstStringIndexedTag = SdbFindFirstStringIndexedTag((__int64)a2, 28679LL, 24577LL, (__int64)Str1, v35);
  }
  else
  {
    v14 = 0;
    FirstTag = SdbFindFirstTag((__int64)a2, 0LL, 28673);
    a6 = FirstTag;
    if ( !FirstTag )
    {
      v23 = 2835;
LABEL_23:
      AslLogCallPrintf(1, (unsigned int)"SdbpSearchDB", v23, (unsigned int)"No DATABASE tag found");
      goto LABEL_7;
    }
    FirstStringIndexedTag = SdbFindFirstNamedTag((int)a2, FirstTag, 28679, 24577, Str1);
  }
  v16 = FirstStringIndexedTag;
  if ( FirstStringIndexedTag )
  {
    do
    {
      v24 = SdbpCheckExe(a1, (int)a2, v16, (int)&v37, a4, 0, (__int64)&v38, v6);
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
        NextStringIndexedTag = SdbpFindNextNamedTag((int)a2, a6, v16, 24577, v34);
      v16 = NextStringIndexedTag;
    }
    while ( NextStringIndexedTag );
  }
  if ( !*(_QWORD *)(a4 + 48) )
    goto LABEL_6;
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24608, 0LL) )
  {
    v26 = 1;
    FirstNamedTag = SdbFindFirstStringIndexedTag((__int64)a2, 28679LL, 24608LL, *(_QWORD *)(a4 + 48), v35);
    goto LABEL_38;
  }
  v26 = 0;
  a6 = SdbFindFirstTag((__int64)a2, 0LL, 28673);
  if ( a6 )
  {
    v23 = 2907;
    goto LABEL_23;
  }
  FirstNamedTag = SdbFindFirstNamedTag((int)a2, 0, 28679, 24608, *(wchar_t **)(a4 + 48));
LABEL_38:
  v28 = FirstNamedTag;
  if ( FirstNamedTag )
  {
    do
    {
      v29 = SdbpCheckExe(a1, (int)a2, v28, (int)&v37, a4, 0, (__int64)&v38, v6);
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
        NextNamedTag = SdbpFindNextNamedTag((int)a2, a6, v28, 24608, *(wchar_t **)(a4 + 48));
      v28 = NextNamedTag;
    }
    while ( NextNamedTag );
  }
LABEL_6:
  if ( (unsigned int)SdbGetIndex(a2, 28679, 24587, 0LL) )
  {
    for ( j = SdbpFindFirstIndexedWildCardTag((__int64)a2, 28679LL, v17, (__int64)v34, v35);
          j;
          j = SdbpFindNextIndexedWildCardTag((__int64)a2, v35) )
    {
      v32 = SdbpCheckExe(a1, (int)a2, j, (int)&v37, a4, 2, (__int64)&v38, v6);
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
      v33 = SdbFindFirstTag((__int64)a2, *v6, 24582);
      if ( v33 )
        SdbGetStringTagPtr(a2, v33);
      v6 += 2;
      --v19;
    }
    while ( v19 );
  }
  return v9;
}
