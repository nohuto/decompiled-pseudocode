/*
 * XREFs of WheapCreateRecordFromGenericErrorData @ 0x140230B4C
 * Callers:
 *     WheapDefaultErrSrcCreateRecord @ 0x140230D24 (WheapDefaultErrSrcCreateRecord.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     WheaInitializeRecordHeader @ 0x140230974 (WheaInitializeRecordHeader.c)
 *     WheapAddSectionFromGenericErrorData @ 0x140230A44 (WheapAddSectionFromGenericErrorData.c)
 *     WheapSqmDwordCommon @ 0x140231A5C (WheapSqmDwordCommon.c)
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
  unsigned int v20; // eax
  bool v21; // cf
  int v22; // ecx
  unsigned int v23; // ecx
  __int64 v24; // rcx
  unsigned int v25; // eax

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
    while ( v8 + 64 >= v8 && v8 + 64 <= v11 )
    {
      v18 = (__int64)v5 + v8;
      v19 = *(_DWORD *)(v18 + 24);
      if ( *(_WORD *)(v18 + 20) == 768 )
      {
        v20 = v19 + 72;
        v21 = v20 < 0x48;
      }
      else
      {
        v20 = v19 + 64;
        v21 = v20 < 0x40;
      }
      if ( v21 )
      {
        v22 = -1073741675;
        v20 = -1;
      }
      else
      {
        v22 = 0;
      }
      if ( v22 < 0 )
        break;
      v23 = v20 + v8;
      if ( v20 + v8 < v8 )
        break;
      v8 += v20;
      if ( v23 > v11 )
        break;
      v14 = WheapAddSectionFromGenericErrorData(a1, a3, a4, v18, v20, 1);
      if ( v14 < 0 )
        goto LABEL_9;
      if ( !--v17 )
        goto LABEL_27;
    }
    goto LABEL_8;
  }
LABEL_27:
  v24 = (unsigned int)v5[1];
  if ( !(_DWORD)v24 )
    return 0;
  if ( (v25 = v5[2]) == 0 )
    return 0;
  v14 = WheapAddSectionFromGenericErrorData(a1, a3, a4, (__int64)v5 + v24, v25, 0);
  if ( v14 >= 0 )
    return 0;
LABEL_9:
  WheapSqmDwordCommon(6LL, &WHEA_SQM_EVENT_INCREMENTDWORD, 7203LL);
  return (unsigned int)v14;
}
