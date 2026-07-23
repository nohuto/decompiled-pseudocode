/*
 * XREFs of SdbpGetMatchingTextAttributes @ 0x1406C3424
 * Callers:
 *     SdbpCheckMatchingText @ 0x1406C2B08 (SdbpCheckMatchingText.c)
 * Callees:
 *     SdbReadBinaryTag @ 0x140495F50 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1404CCBB0 (SdbReadDWORDTag.c)
 *     SdbGetTagDataSize @ 0x1404E6D04 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
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
  const char *v13; // r9
  int v14; // r8d
  _WORD *StringTagPtr; // rax
  _WORD *v16; // r15
  unsigned int v17; // eax
  unsigned int v18; // r14d
  unsigned int TagDataSize; // eax
  __int64 v20; // rcx
  unsigned int v21; // ebp
  PVOID v22; // rax
  const char *v23; // r9
  int v24; // r8d
  unsigned int v25; // eax
  int DWORDTag; // r14d
  unsigned int v27; // eax
  __int64 v28; // rcx

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
    v13 = "Failed to get MATCHING_TEXT file path";
    v14 = 1313;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMatchingTextAttributes", v14, (_DWORD)v13);
    return v7;
  }
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
  v16 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
  {
    v23 = "Failed to read MATCHING_TEXT file path";
    v24 = 1319;
LABEL_22:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMatchingTextAttributes", v24, (_DWORD)v23);
    if ( v11 )
      AslFree(v28, v11);
    return v7;
  }
  v17 = SdbFindFirstTag(a1, a2, 36883);
  v18 = v17;
  if ( !v17 )
  {
    v13 = "Failed to read text to match";
    v14 = 1328;
    goto LABEL_3;
  }
  TagDataSize = SdbGetTagDataSize(a1, v17);
  v21 = TagDataSize;
  if ( !TagDataSize )
  {
    v13 = "Failed to get text to match blob";
    v14 = 1334;
    goto LABEL_3;
  }
  v22 = AslAlloc(v20, TagDataSize + 2LL);
  v11 = v22;
  if ( !v22 )
  {
    v13 = "Failed to allocate memory for text blob";
    v14 = 1340;
    goto LABEL_3;
  }
  if ( !(unsigned int)SdbReadBinaryTag(a1, v18, (__int64)v22, v21) )
  {
    v23 = "Failed to read matching text blob";
    v24 = 1345;
    goto LABEL_22;
  }
  v25 = SdbFindFirstTag(a1, a2, 16467);
  if ( !v25 )
  {
    v23 = "Failed to read text encoding";
    v24 = 1354;
    goto LABEL_22;
  }
  DWORDTag = SdbReadDWORDTag(a1, v25, 0);
  if ( !DWORDTag )
  {
    v23 = "Failed to read encoding type";
    v24 = 1360;
    goto LABEL_22;
  }
  v27 = SdbFindFirstTag(a1, a2, 16385);
  if ( v27 )
    v8 = SdbReadDWORDTag(a1, v27, 0x2000u);
  v7 = 1;
  *a3 = v16;
  *a4 = v11;
  *a5 = v21;
  *a6 = DWORDTag;
  *a7 = v8;
  return v7;
}
