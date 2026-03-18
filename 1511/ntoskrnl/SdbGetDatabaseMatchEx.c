/*
 * XREFs of SdbGetDatabaseMatchEx @ 0x1403B749C
 * Callers:
 *     KsepDbGetDriverShims @ 0x1403B70C8 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x1404FA314 (KsepDbCacheReadDevice.c)
 * Callees:
 *     wcsrchr @ 0x140145CF8 (wcsrchr.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1403B72DC (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x1403B767C (SdbFindFirstStringIndexedTag.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140534F48 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpCheckKObject @ 0x14053511C (SdbpCheckKObject.c)
 *     SdbTagIDToTagRef @ 0x14054EFAC (SdbTagIDToTagRef.c)
 *     SdbFindNextStringIndexedTag @ 0x14067FFF8 (SdbFindNextStringIndexedTag.c)
 */

__int64 __fastcall SdbGetDatabaseMatchEx(
        __int64 a1,
        int a2,
        const wchar_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rsi
  unsigned __int16 v10; // r14
  int v11; // r15d
  wchar_t *v12; // rax
  __int64 v13; // rbx
  unsigned int FirstStringIndexedTag; // eax
  __int64 v15; // r8
  __int64 v16; // r12
  __int64 v17; // r13
  unsigned int v18; // edi
  unsigned int i; // eax
  unsigned int v20; // ebx
  int v22; // r8d
  unsigned int v23[12]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+10h] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  if ( a2 )
  {
    v10 = 28698;
    v11 = 0;
    v13 = (__int64)a3;
  }
  else
  {
    v10 = 28700;
    v11 = (int)a3;
    v12 = wcsrchr(a3, 0x5Cu);
    if ( v12 )
      v13 = (__int64)(v12 + 1);
    else
      v13 = (__int64)a3;
  }
  v24 = 0;
  FirstStringIndexedTag = SdbFindFirstStringIndexedTag(v7, v10, 24577LL, v13, v23);
  v16 = a7;
  v17 = a6;
  while ( 1 )
  {
    v18 = FirstStringIndexedTag;
    if ( !FirstStringIndexedTag )
    {
      for ( i = SdbpFindFirstIndexedWildCardTag(v7, v10, v15, v13, v23); ; i = SdbpFindNextIndexedWildCardTag(v7, v23) )
      {
        v20 = i;
        if ( !i )
          break;
        if ( (unsigned int)SdbpCheckKObject(a1, i, v11, -1, a5, v17, v16) )
        {
          if ( (unsigned int)SdbTagIDToTagRef(a1, v7, v20, &v24) )
            return v24;
          v22 = 4531;
          goto LABEL_19;
        }
      }
      return v24;
    }
    if ( (unsigned int)SdbpCheckKObject(a1, FirstStringIndexedTag, v11, -1, a5, v17, v16) )
      break;
    FirstStringIndexedTag = SdbFindNextStringIndexedTag(v7, v23);
  }
  if ( !(unsigned int)SdbTagIDToTagRef(a1, v7, v18, &v24) )
  {
    v22 = 4507;
LABEL_19:
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetDatabaseMatchEx",
      v22,
      (unsigned int)"Failed to convert tiKObject to trKObject");
  }
  return v24;
}
