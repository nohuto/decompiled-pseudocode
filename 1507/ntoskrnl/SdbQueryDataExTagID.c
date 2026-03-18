/*
 * XREFs of SdbQueryDataExTagID @ 0x140701FC4
 * Callers:
 *     SdbQueryDataEx @ 0x140701F24 (SdbQueryDataEx.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14011BAF4 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyNW @ 0x140154884 (RtlStringCchCopyNW.c)
 *     wcschr @ 0x140173B98 (wcschr.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     SdbReadDWORDTag @ 0x1405778E0 (SdbReadDWORDTag.c)
 *     SdbpGetMappedTagData @ 0x140577948 (SdbpGetMappedTagData.c)
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x140577E14 (SdbGetTagDataSize.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     AslAlloc @ 0x1405783E4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x1405ABAB8 (SdbGetStringTagPtr.c)
 *     SdbReadQWORDTag @ 0x1405C6BBC (SdbReadQWORDTag.c)
 *     SdbFindFirstNamedTag @ 0x140703E7C (SdbFindFirstNamedTag.c)
 */

__int64 __fastcall SdbQueryDataExTagID(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
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
  wchar_t *Str1; // r14
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
  __int64 v26; // rax
  wchar_t *pszDest; // [rsp+30h] [rbp-48h]
  __int64 QWORDTag; // [rsp+38h] [rbp-40h] BYREF
  __int64 v30; // [rsp+90h] [rbp+18h] BYREF
  _DWORD *v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v30 = a3;
  DWORDTag = 0;
  v8 = L"Policy";
  if ( !a5 && !a6 )
  {
    AslLogCallPrintf(1LL);
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
    AslLogCallPrintf(1LL);
    return 8;
  }
  Str1 = v14;
  while ( 1 )
  {
    v16 = wcschr(v8, 0x5Cu);
    v17 = v16;
    if ( v16 )
    {
      v19 = v16 - v8;
      if ( RtlStringCchCopyNW(pszDest, v13, v8, v19) < 0 )
      {
LABEL_58:
        v11 = 122;
        goto LABEL_59;
      }
      pszDest[v19] = 0;
      v8 = v17 + 1;
      Str1 = pszDest;
    }
    else
    {
      if ( RtlStringCchCopyW(Str1, v13, v8) < 0 )
        goto LABEL_58;
      v8 = 0LL;
    }
    FirstNamedTag = SdbFindFirstNamedTag(a1, a2, 28687, 24577, Str1);
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
    goto LABEL_59;
  }
  FirstTag = SdbFindFirstTag(a1, FirstNamedTag, 16408);
  if ( FirstTag )
    DWORDTag = SdbReadDWORDTag(a1, FirstTag, 0);
  else
    AslLogCallPrintf(1LL);
  TagDataSize = 0;
  StringTagPtr = 0LL;
  switch ( DWORDTag )
  {
    case 0:
LABEL_39:
      v11 = 0;
      if ( !TagDataSize )
        goto LABEL_52;
      goto LABEL_40;
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
      AslLogCallPrintf(1LL);
      v11 = 1358;
      goto LABEL_59;
  }
  v25 = SdbFindFirstTag(a1, a2, v24);
  if ( !v25 )
  {
LABEL_34:
    AslLogCallPrintf(1LL);
    goto LABEL_19;
  }
  if ( DWORDTag == 1 )
  {
    StringTagPtr = (__int64 *)SdbGetStringTagPtr(a1, v25);
    if ( !StringTagPtr )
      goto LABEL_34;
    v26 = -1LL;
    do
      ++v26;
    while ( *((_WORD *)StringTagPtr + v26) );
    TagDataSize = 2 * v26 + 2;
    goto LABEL_39;
  }
  if ( DWORDTag == 3 )
  {
    TagDataSize = SdbGetTagDataSize(a1, v25);
    StringTagPtr = (__int64 *)SdbpGetMappedTagData(a1, v25);
    if ( !StringTagPtr )
      goto LABEL_34;
    goto LABEL_39;
  }
  if ( DWORDTag != 4 )
  {
    QWORDTag = SdbReadQWORDTag(a1, v25, 0LL);
    StringTagPtr = &QWORDTag;
    TagDataSize = 8;
    goto LABEL_39;
  }
  LODWORD(v30) = SdbReadDWORDTag(a1, v25, 0);
  v11 = 0;
  StringTagPtr = &v30;
  TagDataSize = 4;
LABEL_40:
  v18 = (__int64)a5;
  if ( a5 && a6 && *a6 >= TagDataSize )
    memmove(a5, StringTagPtr, *a6);
  else
    v11 = 122;
LABEL_52:
  if ( a6 )
    *a6 = TagDataSize;
  if ( v31 )
    *v31 = DWORDTag;
  if ( a7 )
    *a7 = a2;
LABEL_59:
  AslFree(v18, pszDest);
  return v11;
}
