/*
 * XREFs of SdbpGetRegistryMatchingAttributes @ 0x1406C3508
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x1406C2448 (SdbpCheckMatchingRegistry.c)
 * Callees:
 *     SdbReadDWORDTag @ 0x1404EA9AC (SdbReadDWORDTag.c)
 *     SdbGetTagDataSize @ 0x140503D74 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbReadQWORDTag @ 0x140573C10 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140573D10 (SdbGetStringTagPtr.c)
 *     SdbGetBinaryTagData @ 0x1406C3F40 (SdbGetBinaryTagData.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetRegistryMatchingAttributes(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 *a6,
        _DWORD *a7,
        __int64 *a8,
        __int64 *a9,
        _QWORD *a10)
{
  int v10; // ebx
  unsigned int v13; // esi
  __int64 v14; // r13
  __int64 BinaryTagData; // r12
  unsigned int v16; // r14d
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // rax
  _WORD *v19; // r15
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int DWORDTag; // eax
  unsigned int v23; // eax
  __int64 TagDataSize; // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // ebp
  unsigned int v28; // eax
  __int64 v30; // [rsp+28h] [rbp-50h]
  __int64 QWORDTag; // [rsp+30h] [rbp-48h]

  v10 = 0;
  *a3 = 0LL;
  v30 = 0LL;
  QWORDTag = 0LL;
  *a5 = 0;
  v13 = 0;
  v14 = 0LL;
  BinaryTagData = 0LL;
  *a4 = 0LL;
  v16 = 0;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  FirstTag = SdbFindFirstTag(a1, a2, 24577);
  if ( FirstTag )
  {
    StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
    v19 = StringTagPtr;
    if ( !StringTagPtr || !*StringTagPtr )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpGetRegistryMatchingAttributes",
        737,
        (unsigned int)"Failed to read key path");
      return v16;
    }
    v20 = SdbFindFirstTag(a1, a2, 24624);
    if ( v20 )
      v30 = SdbGetStringTagPtr(a1, v20);
    v21 = SdbFindFirstTag(a1, a2, 16465);
    if ( v21 )
    {
      DWORDTag = SdbReadDWORDTag(a1, v21, 0);
      v13 = DWORDTag;
      if ( !DWORDTag )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpGetRegistryMatchingAttributes",
          756,
          (unsigned int)"Failed to read value type");
        return v16;
      }
      if ( DWORDTag <= 2 )
        goto LABEL_28;
      switch ( DWORDTag )
      {
        case 3u:
          v26 = SdbFindFirstTag(a1, a2, 36882);
          v27 = v26;
          if ( !v26 )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpGetRegistryMatchingAttributes",
              803,
              (unsigned int)"Failed to get TAG_REG_VALUE_DATA_BINARY");
            return v16;
          }
          BinaryTagData = SdbGetBinaryTagData(a1, v26);
          if ( !BinaryTagData )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpGetRegistryMatchingAttributes",
              809,
              (unsigned int)"Failed to read value data");
            return v16;
          }
          TagDataSize = (unsigned int)SdbGetTagDataSize(a1, v27);
          goto LABEL_19;
        case 4u:
          v25 = SdbFindFirstTag(a1, a2, 16466);
          if ( !v25 )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpGetRegistryMatchingAttributes",
              783,
              (unsigned int)"Failed to get TAG_REG_VALUE_DATA_DWORD");
            return v16;
          }
          v10 = SdbReadDWORDTag(a1, v25, 0);
          TagDataSize = 0LL;
          goto LABEL_19;
        case 7u:
LABEL_28:
          v28 = SdbFindFirstTag(a1, a2, 24625);
          if ( !v28 )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpGetRegistryMatchingAttributes",
              769,
              (unsigned int)"Failed to get TAG_REG_VALUE_DATA_SZ");
            return v16;
          }
          v14 = SdbGetStringTagPtr(a1, v28);
          if ( !v14 )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpGetRegistryMatchingAttributes",
              775,
              (unsigned int)"Failed to read value data");
            return v16;
          }
          break;
        case 0xBu:
          v23 = SdbFindFirstTag(a1, a2, 20507);
          if ( !v23 )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpGetRegistryMatchingAttributes",
              793,
              (unsigned int)"Failed to get TAG_REG_VALUE_DATA_QWORD");
            return v16;
          }
          QWORDTag = SdbReadQWORDTag(a1, v23, 0LL);
          break;
        default:
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpGetRegistryMatchingAttributes",
            816,
            (unsigned int)"Unknown registry value type");
          return v16;
      }
    }
    TagDataSize = 0LL;
LABEL_19:
    v16 = 1;
    *a3 = v19;
    *a4 = v30;
    *a5 = v13;
    *a6 = v14;
    *a7 = v10;
    *a8 = QWORDTag;
    *a9 = BinaryTagData;
    *a10 = TagDataSize;
    return v16;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpGetRegistryMatchingAttributes",
    731,
    (unsigned int)"Failed to get key path tag");
  return v16;
}
