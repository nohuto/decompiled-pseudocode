/*
 * XREFs of WheapCreateRecordFromGenericErrorData @ 0x140216B94
 * Callers:
 *     WheapDefaultErrSrcCreateRecord @ 0x140216D40 (WheapDefaultErrSrcCreateRecord.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     WheaInitializeRecordHeader @ 0x1402169CC (WheaInitializeRecordHeader.c)
 *     WheapAddSectionFromGenericErrorData @ 0x140216A9C (WheapAddSectionFromGenericErrorData.c)
 *     WheapSqmDwordCommon @ 0x140217A60 (WheapSqmDwordCommon.c)
 */

__int64 __fastcall WheapCreateRecordFromGenericErrorData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _DWORD *v5; // rdi
  unsigned int v7; // edx
  unsigned int v8; // esi
  unsigned int v11; // ebp
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // ebx
  int v16; // ecx
  int v17; // r12d
  __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rcx
  size_t Size; // [rsp+20h] [rbp-38h]

  v5 = (_DWORD *)(a2 + *(unsigned int *)(a2 + 64));
  v7 = *(_DWORD *)(a2 + 68);
  v8 = 20;
  if ( v7 < 0x14 )
    goto LABEL_8;
  v11 = v5[3] + 20;
  if ( v11 < 0x14 )
    goto LABEL_8;
  v12 = v5[1];
  if ( v12 && (v13 = v5[2]) != 0 )
  {
    if ( v11 > v12 || v12 + v13 < v12 || v12 + v13 > v7 )
      goto LABEL_8;
  }
  else if ( v11 > v7 )
  {
LABEL_8:
    v14 = -1073741811;
    goto LABEL_9;
  }
  if ( a4 < 0x80 )
    goto LABEL_8;
  memset((void *)a3, 0, a4);
  WheaInitializeRecordHeader((_DWORD *)a3);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  *(_DWORD *)(a3 + 104) ^= (*(_DWORD *)(a3 + 104) ^ (2 * *(_DWORD *)(a2 + 12))) & 2;
  v16 = (*(_DWORD *)(a3 + 104) ^ (*(_DWORD *)(a2 + 12) >> 1)) & 4;
  *(_DWORD *)(a3 + 20) = a4;
  *(_DWORD *)(a3 + 104) ^= v16;
  v17 = (*v5 >> 4) & 0x3FF;
  if ( v17 )
  {
    while ( v8 + 64 >= v8 )
    {
      if ( v8 + 64 > v11 )
        break;
      v18 = (__int64)v5 + v8;
      v19 = *(_DWORD *)(v18 + 24) + 64;
      if ( *(_DWORD *)(v18 + 24) >= 0xFFFFFFC0 )
        break;
      v20 = v19 + v8;
      if ( v19 + v8 < v8 )
        break;
      v8 += v19;
      if ( v20 > v11 )
        break;
      LODWORD(Size) = *(_DWORD *)(v18 + 24) + 64;
      v14 = WheapAddSectionFromGenericErrorData(a1, a3, a4, v18, Size, 1);
      if ( v14 < 0 )
        goto LABEL_9;
      if ( !--v17 )
        goto LABEL_21;
    }
    goto LABEL_8;
  }
LABEL_21:
  v21 = (unsigned int)v5[1];
  if ( !(_DWORD)v21 )
    return 0;
  if ( !v5[2] )
    return 0;
  LODWORD(Size) = v5[2];
  v14 = WheapAddSectionFromGenericErrorData(a1, a3, a4, (__int64)v5 + v21, Size, 0);
  if ( v14 >= 0 )
    return 0;
LABEL_9:
  WheapSqmDwordCommon(6LL, &WHEA_SQM_EVENT_INCREMENTDWORD, 7203LL);
  return (unsigned int)v14;
}
