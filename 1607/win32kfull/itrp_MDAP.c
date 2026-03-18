/*
 * XREFs of itrp_MDAP @ 0x1C00CD1C0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeRoundValue @ 0x1C00CD55C (InvokeRoundValue.c)
 *     itrp_MovePoint @ 0x1C00D1A00 (itrp_MovePoint.c)
 *     itrp_ChangeCvtSlow @ 0x1C01440B4 (itrp_ChangeCvtSlow.c)
 */

__int64 __fastcall itrp_MDAP(__int64 a1, char a2)
{
  __int64 v2; // r10
  _QWORD *v3; // rdi
  __int64 v6; // r15
  __int64 v7; // rcx
  int v8; // esi
  _WORD *v9; // r8
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned int v12; // edx
  int v13; // eax
  int v14; // r11d
  int v15; // eax
  int v16; // eax
  unsigned __int16 v17; // cx
  int v18; // r8d
  __int16 v19; // ax
  __int64 v20; // rsi
  __int64 v21; // r8
  int v22; // eax
  unsigned int v23; // edx

  v2 = qword_1C03294E0;
  v3 = (_QWORD *)LocalGS;
  v6 = qword_1C03294E0 + 104;
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (v7 = qword_1C03294C8, !((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2)) )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  v8 = 4;
  qword_1C03294C8 -= 4LL;
  v9 = *(_WORD **)(qword_1C03294E0 + 344);
  v10 = *(int *)(v7 - 4);
  v11 = (unsigned __int16)v9[4];
  LOWORD(v12) = v9[6];
  v13 = (unsigned __int16)v11;
  if ( (unsigned __int16)v11 <= (unsigned __int16)v12 )
    v13 = (unsigned __int16)v12;
  if ( v13 <= 1 )
  {
    v14 = 1;
  }
  else if ( (unsigned __int16)v11 <= (unsigned __int16)v12 )
  {
    v14 = (unsigned __int16)v12;
  }
  else
  {
    v14 = (unsigned __int16)v11;
  }
  if ( qword_1C03294D8 == LocalGS )
  {
    if ( (int)v10 < (unsigned __int16)v9[8] && (int)v10 >= 0 )
    {
      v8 = 0;
      goto LABEL_11;
    }
LABEL_51:
    dword_1C0329530 = 4370;
    return qword_1C0329538;
  }
  if ( (int)v10 >= *(_DWORD *)(qword_1C03294E0 + 440) || (int)v10 < 0 )
    goto LABEL_51;
LABEL_11:
  if ( LocalGS == qword_1C03294D8 + 112 )
  {
    v15 = (unsigned __int16)v11;
    if ( (unsigned __int16)v11 <= (unsigned __int16)v12 )
      v15 = (unsigned __int16)v12;
    if ( v15 <= 1 )
    {
      v12 = 1;
    }
    else if ( (unsigned __int16)v11 <= (unsigned __int16)v12 )
    {
      v12 = (unsigned __int16)v12;
    }
    else
    {
      v12 = (unsigned __int16)v11;
    }
    LOWORD(v16) = v9[3];
    v17 = v9[5];
    v18 = (unsigned __int16)v16;
    if ( (unsigned __int16)v16 <= v17 )
      v18 = v17;
    if ( v18 <= 1 )
      v16 = 1;
    else
      v16 = (unsigned __int16)v16 <= v17 ? v17 : (unsigned __int16)v16;
    v11 = *(unsigned __int16 *)(LocalGS + 80);
    if ( (__int16)v11 < 1 )
      goto LABEL_51;
    if ( (__int16)v11 > v12 )
    {
      v11 = 2LL * ((__int16)v11 - 1);
      if ( (unsigned int)(*(_DWORD *)(LocalGS + 104) + 12 * (v16 + 8) - *(_DWORD *)(LocalGS + 64)) < v11 )
        goto LABEL_51;
    }
  }
  v19 = *(_WORD *)(LocalGS + 80);
  if ( v19 >= 1 && v19 <= v14 )
  {
    v11 = (unsigned int)*(__int16 *)(*(_QWORD *)(LocalGS + 64) + 2LL * (v19 - 1));
    if ( (int)v10 >= (int)v11 + v8 + 1 )
      goto LABEL_51;
  }
  LODWORD(qword_1C03294F0) = v10;
  HIDWORD(qword_1C03294F0) = v10;
  if ( (a2 & 1) != 0 )
  {
    v20 = *(int *)(*(_QWORD *)(LocalGS + 8) + 4 * v10);
    v21 = *(int *)(*(_QWORD *)LocalGS + 4 * v10);
    switch ( dword_1C0329510 )
    {
      case 1:
        LODWORD(v20) = ((((unsigned int)(v21 * (__int16)dword_1C03294B8) >> 13) + 1) >> 1)
                     + ((((unsigned int)(v20 * SHIWORD(dword_1C03294B8)) >> 13) + 1) >> 1)
                     + ((((unsigned __int64)(v21 * (__int16)dword_1C03294B8) >> 32)
                       + ((unsigned __int64)(v20 * SHIWORD(dword_1C03294B8)) >> 32)) << 18);
        break;
      case 2:
        LODWORD(v20) = ((((unsigned int)(v21 * (__int16)dword_1C03294C0) >> 13) + 1) >> 1)
                     + ((((unsigned int)(v20 * SHIWORD(dword_1C03294C0)) >> 13) + 1) >> 1)
                     + ((((unsigned __int64)(v21 * (__int16)dword_1C03294C0) >> 32)
                       + ((unsigned __int64)(v20 * SHIWORD(dword_1C03294C0)) >> 32)) << 18);
        break;
      case 3:
        LODWORD(v20) = *(_DWORD *)(*(_QWORD *)LocalGS + 4 * v10);
        break;
      default:
        if ( dword_1C0329510 != 4 )
        {
          EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
          v2 = qword_1C03294E0;
          LODWORD(v20) = 0;
        }
        break;
    }
    v22 = InvokeRoundValue(*(unsigned int *)(v6 + 24), (unsigned int)v20, *(unsigned int *)(v2 + 32));
    v2 = qword_1C03294E0;
    v23 = v22 - v20;
  }
  else
  {
    v23 = 0;
  }
  switch ( dword_1C032950C )
  {
    case 1:
      itrp_MovePoint(v3, (unsigned int)v10, v23);
      break;
    case 2:
      *(_DWORD *)(*v3 + 4 * v10) += v23;
      *(_BYTE *)(v3[9] + v10) |= 1u;
      break;
    case 3:
      *(_DWORD *)(v3[1] + 4 * v10) += v23;
      *(_BYTE *)(v3[9] + v10) |= 2u;
      break;
    case 4:
      *(_DWORD *)(*(_QWORD *)(v2 + 16) + 4 * v10) += v23;
      break;
    case 5:
      itrp_ChangeCvtSlow(v11, (unsigned int)v10, v23);
      break;
    default:
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      break;
  }
  return a1;
}
