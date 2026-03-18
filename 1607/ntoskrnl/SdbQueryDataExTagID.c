/*
 * XREFs of SdbQueryDataExTagID @ 0x1406C19DC
 * Callers:
 *     SdbQueryDataEx @ 0x1406C193C (SdbQueryDataEx.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140084F38 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x140084FB0 (RtlStringCchCopyNW.c)
 *     wcschr @ 0x14014EF44 (wcschr.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     SdbpGetMappedTagData @ 0x140484DE0 (SdbpGetMappedTagData.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     SdbReadDWORDTag @ 0x1404EA9AC (SdbReadDWORDTag.c)
 *     SdbGetTagDataSize @ 0x140503D74 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbReadQWORDTag @ 0x140573C10 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140573D10 (SdbGetStringTagPtr.c)
 *     SdbFindFirstNamedTag @ 0x1406C3D74 (SdbFindFirstNamedTag.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbQueryDataExTagID(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int *a4,
        void *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  int DWORDTag; // r12d
  const wchar_t *v8; // rbx
  unsigned int v11; // ebx
  __int64 v12; // rax
  size_t v13; // r15
  wchar_t *v14; // rax
  wchar_t *v15; // r14
  wchar_t *v16; // rax
  wchar_t *v17; // rbp
  __int64 v18; // rcx
  size_t v19; // r14
  unsigned int FirstNamedTag; // eax
  unsigned int FirstTag; // eax
  unsigned int TagDataSize; // ebp
  __int64 *StringTagPtr; // r15
  __int16 v24; // ax
  unsigned int v25; // r14d
  const char *v26; // r9
  int v27; // r8d
  __int64 v28; // rax
  wchar_t *Str1; // [rsp+20h] [rbp-58h]
  wchar_t *pszDest; // [rsp+30h] [rbp-48h]
  __int64 QWORDTag; // [rsp+38h] [rbp-40h] BYREF
  __int64 v33; // [rsp+90h] [rbp+18h] BYREF
  int *v34; // [rsp+98h] [rbp+20h]

  v34 = a4;
  v33 = a3;
  DWORDTag = 0;
  v8 = L"Policy";
  if ( !a5 && !a6 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      4822,
      (unsigned int)"One of lpBuffer or lpcbBufferSize should not be null");
    return 87;
  }
  v12 = -1LL;
  do
    ++v12;
  while ( aPolicy[v12] );
  v13 = (int)v12 + 1;
  v14 = (wchar_t *)AslAlloc(a1, 2 * v13);
  pszDest = v14;
  if ( !v14 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      4834,
      (unsigned int)"Cannot allocate temporary buffer for parsing the name \"%ws\"",
      L"Policy");
    return 8;
  }
  v15 = v14;
  while ( 1 )
  {
    v16 = wcschr(v8, 0x5Cu);
    v17 = v16;
    if ( v16 )
    {
      v19 = v16 - v8;
      if ( RtlStringCchCopyNW(pszDest, v13, v8, v19) < 0 )
      {
LABEL_60:
        v11 = 122;
        goto LABEL_61;
      }
      pszDest[v19] = 0;
      v8 = v17 + 1;
      v15 = pszDest;
    }
    else
    {
      if ( RtlStringCchCopyW(v15, v13, v8) < 0 )
        goto LABEL_60;
      v8 = 0LL;
    }
    FirstNamedTag = SdbFindFirstNamedTag(a1, a2, 28687, 24577, v15);
    a2 = FirstNamedTag;
    if ( !v8 || !*v8 )
      break;
    if ( !FirstNamedTag )
      goto LABEL_19;
  }
  if ( !FirstNamedTag )
  {
LABEL_19:
    v11 = 1168;
    goto LABEL_61;
  }
  FirstTag = SdbFindFirstTag(a1, FirstNamedTag, 16408);
  if ( FirstTag )
  {
    DWORDTag = SdbReadDWORDTag(a1, FirstTag, 0);
  }
  else
  {
    LODWORD(Str1) = a2;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      4883,
      (unsigned int)"The entry 0x%x does not have valuetype information",
      Str1);
  }
  TagDataSize = 0;
  StringTagPtr = 0LL;
  switch ( DWORDTag )
  {
    case 0:
      goto LABEL_39;
    case 1:
      v24 = 24606;
      break;
    case 3:
      v24 = -28667;
      break;
    case 4:
      v24 = 16409;
      break;
    case 11:
      v24 = 20487;
      break;
    default:
      LODWORD(Str1) = a2;
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbQueryDataExTagID",
        4920,
        (unsigned int)"The entry 0x%x contains bad valuetype information 0x%x",
        Str1,
        DWORDTag);
      v11 = 1358;
      goto LABEL_61;
  }
  v25 = SdbFindFirstTag(a1, a2, v24);
  if ( !v25 )
  {
    LODWORD(Str1) = a2;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbQueryDataExTagID",
      4932,
      (unsigned int)"The entry 0x%x contains no value",
      Str1);
    goto LABEL_19;
  }
  if ( DWORDTag == 1 )
  {
    StringTagPtr = (__int64 *)SdbGetStringTagPtr(a1, v25);
    if ( !StringTagPtr )
    {
      v26 = "The entry 0x%x contains bad string value 0x%x";
      v27 = 4948;
      goto LABEL_49;
    }
    v28 = -1LL;
    do
      ++v28;
    while ( *((_WORD *)StringTagPtr + v28) );
    TagDataSize = 2 * v28 + 2;
LABEL_39:
    v11 = 0;
    if ( TagDataSize )
      goto LABEL_40;
    goto LABEL_54;
  }
  if ( DWORDTag == 3 )
  {
    TagDataSize = SdbGetTagDataSize(a1, v25);
    StringTagPtr = (__int64 *)SdbpGetMappedTagData(a1, v25);
    if ( !StringTagPtr )
    {
      v26 = "The entry 0x%x contains bad binary value 0x%x";
      v27 = 4962;
LABEL_49:
      LODWORD(Str1) = a2;
      AslLogCallPrintf(1, (unsigned int)"SdbQueryDataExTagID", v27, (_DWORD)v26, Str1, v25);
      goto LABEL_19;
    }
    goto LABEL_39;
  }
  if ( DWORDTag != 4 )
  {
    QWORDTag = SdbReadQWORDTag(a1, v25, 0LL);
    StringTagPtr = &QWORDTag;
    TagDataSize = 8;
    goto LABEL_39;
  }
  LODWORD(v33) = SdbReadDWORDTag(a1, v25, 0);
  v11 = 0;
  StringTagPtr = &v33;
  TagDataSize = 4;
LABEL_40:
  v18 = (__int64)a5;
  if ( a5 && a6 && *a6 >= TagDataSize )
    memmove(a5, StringTagPtr, *a6);
  else
    v11 = 122;
LABEL_54:
  if ( a6 )
    *a6 = TagDataSize;
  if ( v34 )
    *v34 = DWORDTag;
  if ( a7 )
    *a7 = a2;
LABEL_61:
  AslFree(v18, pszDest);
  return v11;
}
