/*
 * XREFs of SdbpGetMatchingTextAttributes @ 0x1406C32EC
 * Callers:
 *     SdbpCheckMatchingText @ 0x1406C29D0 (SdbpCheckMatchingText.c)
 * Callees:
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     SdbReadBinaryTag @ 0x1404954C0 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1404EA9AC (SdbReadDWORDTag.c)
 *     SdbGetTagDataSize @ 0x140503D74 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x140573D10 (SdbGetStringTagPtr.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMatchingTextAttributes(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned int *a5,
        _DWORD *a6,
        int *a7)
{
  unsigned int v7; // ebx
  int v8; // r13d
  void *v11; // rdi
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // rax
  _WORD *v14; // r15
  unsigned int v15; // eax
  unsigned int v16; // r14d
  unsigned int TagDataSize; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebp
  PVOID v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax
  int DWORDTag; // r14d
  unsigned int v24; // eax

  v7 = 0;
  *a3 = 0LL;
  v8 = 0x2000;
  *a4 = 0LL;
  *a5 = 0;
  v11 = 0LL;
  *a6 = 0;
  *a7 = 0x2000;
  FirstTag = SdbFindFirstTag(a1, a2, 24577);
  if ( !FirstTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1313,
      (unsigned int)"Failed to get MATCHING_TEXT file path");
    return v7;
  }
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
  v14 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1319,
      (unsigned int)"Failed to read MATCHING_TEXT file path");
LABEL_22:
    if ( v11 )
      AslFree(v21, v11);
    return v7;
  }
  v15 = SdbFindFirstTag(a1, a2, 36883);
  v16 = v15;
  if ( !v15 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1328,
      (unsigned int)"Failed to read text to match");
    return v7;
  }
  TagDataSize = SdbGetTagDataSize(a1, v15);
  v19 = TagDataSize;
  if ( !TagDataSize )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1334,
      (unsigned int)"Failed to get text to match blob");
    return v7;
  }
  v20 = AslAlloc(v18, TagDataSize + 2LL);
  v11 = v20;
  if ( !v20 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1340,
      (unsigned int)"Failed to allocate memory for text blob");
    return v7;
  }
  if ( !(unsigned int)SdbReadBinaryTag(a1, v16, (__int64)v20, v19) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1345,
      (unsigned int)"Failed to read matching text blob");
    goto LABEL_22;
  }
  v22 = SdbFindFirstTag(a1, a2, 16467);
  if ( !v22 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1354,
      (unsigned int)"Failed to read text encoding");
    goto LABEL_22;
  }
  DWORDTag = SdbReadDWORDTag(a1, v22, 0);
  if ( !DWORDTag )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMatchingTextAttributes",
      1360,
      (unsigned int)"Failed to read encoding type");
    goto LABEL_22;
  }
  v24 = SdbFindFirstTag(a1, a2, 16385);
  if ( v24 )
    v8 = SdbReadDWORDTag(a1, v24, 0x2000u);
  v7 = 1;
  *a3 = v14;
  *a4 = v11;
  *a5 = v19;
  *a6 = DWORDTag;
  *a7 = v8;
  return v7;
}
