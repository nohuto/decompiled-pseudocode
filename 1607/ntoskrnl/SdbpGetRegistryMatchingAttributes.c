/*
 * XREFs of SdbpGetRegistryMatchingAttributes @ 0x1406C3640
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x1406C2580 (SdbpCheckMatchingRegistry.c)
 * Callees:
 *     SdbReadDWORDTag @ 0x1404CCBB0 (SdbReadDWORDTag.c)
 *     SdbGetTagDataSize @ 0x1404E6D04 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbReadQWORDTag @ 0x140574150 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 *     SdbGetBinaryTagData @ 0x1406C4078 (SdbGetBinaryTagData.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
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
  const char *v18; // r9
  int v19; // r8d
  _WORD *StringTagPtr; // rax
  _WORD *v21; // r15
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int DWORDTag; // eax
  unsigned int v25; // eax
  __int64 TagDataSize; // rax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // ebp
  unsigned int v30; // eax
  __int64 v32; // [rsp+28h] [rbp-50h]
  __int64 QWORDTag; // [rsp+30h] [rbp-48h]

  v10 = 0;
  *a3 = 0LL;
  v32 = 0LL;
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
  if ( !FirstTag )
  {
    v18 = "Failed to get key path tag";
    v19 = 731;
LABEL_34:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetRegistryMatchingAttributes", v19, (_DWORD)v18);
    return v16;
  }
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a1, FirstTag);
  v21 = StringTagPtr;
  if ( !StringTagPtr || !*StringTagPtr )
  {
    v18 = "Failed to read key path";
    v19 = 737;
    goto LABEL_34;
  }
  v22 = SdbFindFirstTag(a1, a2, 24624);
  if ( v22 )
    v32 = SdbGetStringTagPtr(a1, v22);
  v23 = SdbFindFirstTag(a1, a2, 16465);
  if ( !v23 )
    goto LABEL_18;
  DWORDTag = SdbReadDWORDTag(a1, v23, 0);
  v13 = DWORDTag;
  if ( !DWORDTag )
  {
    v18 = "Failed to read value type";
    v19 = 756;
    goto LABEL_34;
  }
  if ( DWORDTag <= 2 )
    goto LABEL_28;
  switch ( DWORDTag )
  {
    case 3u:
      v28 = SdbFindFirstTag(a1, a2, 36882);
      v29 = v28;
      if ( !v28 )
      {
        v18 = "Failed to get TAG_REG_VALUE_DATA_BINARY";
        v19 = 803;
        goto LABEL_34;
      }
      BinaryTagData = SdbGetBinaryTagData(a1, v28);
      if ( !BinaryTagData )
      {
        v18 = "Failed to read value data";
        v19 = 809;
        goto LABEL_34;
      }
      TagDataSize = (unsigned int)SdbGetTagDataSize(a1, v29);
      break;
    case 4u:
      v27 = SdbFindFirstTag(a1, a2, 16466);
      if ( !v27 )
      {
        v18 = "Failed to get TAG_REG_VALUE_DATA_DWORD";
        v19 = 783;
        goto LABEL_34;
      }
      v10 = SdbReadDWORDTag(a1, v27, 0);
      TagDataSize = 0LL;
      break;
    case 7u:
LABEL_28:
      v30 = SdbFindFirstTag(a1, a2, 24625);
      if ( !v30 )
      {
        v18 = "Failed to get TAG_REG_VALUE_DATA_SZ";
        v19 = 769;
        goto LABEL_34;
      }
      v14 = SdbGetStringTagPtr(a1, v30);
      if ( !v14 )
      {
        v18 = "Failed to read value data";
        v19 = 775;
        goto LABEL_34;
      }
LABEL_18:
      TagDataSize = 0LL;
      break;
    case 0xBu:
      v25 = SdbFindFirstTag(a1, a2, 20507);
      if ( !v25 )
      {
        v18 = "Failed to get TAG_REG_VALUE_DATA_QWORD";
        v19 = 793;
        goto LABEL_34;
      }
      QWORDTag = SdbReadQWORDTag(a1, v25, 0LL);
      goto LABEL_18;
    default:
      v18 = "Unknown registry value type";
      v19 = 816;
      goto LABEL_34;
  }
  v16 = 1;
  *a3 = v21;
  *a4 = v32;
  *a5 = v13;
  *a6 = v14;
  *a7 = v10;
  *a8 = QWORDTag;
  *a9 = BinaryTagData;
  *a10 = TagDataSize;
  return v16;
}
