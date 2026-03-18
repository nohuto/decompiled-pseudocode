/*
 * XREFs of itrp_MDAP @ 0x1C00BD320
 * Callers:
 *     <none>
 * Callees:
 *     InvokeRoundValue @ 0x1C00BD5B4 (InvokeRoundValue.c)
 *     InvokeProject @ 0x1C00BDDF8 (InvokeProject.c)
 *     itrp_MovePoint @ 0x1C00BFA38 (itrp_MovePoint.c)
 *     itrp_ChangeCvtSlow @ 0x1C011AD9C (itrp_ChangeCvtSlow.c)
 */

__int64 __fastcall itrp_MDAP(__int64 a1, char a2)
{
  __int64 v2; // r14
  _QWORD *v3; // rsi
  __int64 v6; // rcx
  int v7; // r11d
  _WORD *v8; // r8
  __int64 v9; // rdi
  unsigned __int16 v10; // cx
  unsigned int v11; // edx
  int v12; // eax
  int v13; // r10d
  int v14; // eax
  int v15; // eax
  unsigned __int16 v16; // cx
  int v17; // r8d
  __int16 v18; // cx
  __int16 v19; // cx
  unsigned int v20; // ebx
  int v21; // eax
  __int64 v22; // r8

  v2 = qword_1C0323160;
  v3 = (_QWORD *)LocalGS;
  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) != *(_QWORD *)(qword_1C0323160 + 432)
    || (v6 = qword_1C0323148, !((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2)) )
  {
    dword_1C03231B0 = 4368;
    return qword_1C03231B8;
  }
  v7 = 4;
  qword_1C0323148 -= 4LL;
  v8 = *(_WORD **)(qword_1C0323160 + 344);
  v9 = *(int *)(v6 - 4);
  v10 = v8[4];
  LOWORD(v11) = v8[6];
  v12 = v10;
  if ( v10 <= (unsigned __int16)v11 )
    v12 = (unsigned __int16)v11;
  if ( v12 <= 1 )
  {
    v13 = 1;
  }
  else if ( v10 <= (unsigned __int16)v11 )
  {
    v13 = (unsigned __int16)v11;
  }
  else
  {
    v13 = v10;
  }
  if ( qword_1C0323158 == LocalGS )
  {
    if ( (int)v9 < (unsigned __int16)v8[8] && (int)v9 >= 0 )
    {
      v7 = 0;
      goto LABEL_11;
    }
LABEL_44:
    dword_1C03231B0 = 4370;
    return qword_1C03231B8;
  }
  if ( (int)v9 >= *(_DWORD *)(qword_1C0323160 + 440) || (int)v9 < 0 )
    goto LABEL_44;
LABEL_11:
  if ( LocalGS == qword_1C0323158 + 112 )
  {
    v14 = v10;
    if ( v10 <= (unsigned __int16)v11 )
      v14 = (unsigned __int16)v11;
    if ( v14 <= 1 )
    {
      v11 = 1;
    }
    else if ( v10 <= (unsigned __int16)v11 )
    {
      v11 = (unsigned __int16)v11;
    }
    else
    {
      v11 = v10;
    }
    LOWORD(v15) = v8[3];
    v16 = v8[5];
    v17 = (unsigned __int16)v15;
    if ( (unsigned __int16)v15 <= v16 )
      v17 = v16;
    if ( v17 <= 1 )
      v15 = 1;
    else
      v15 = (unsigned __int16)v15 <= v16 ? v16 : (unsigned __int16)v15;
    v18 = *(_WORD *)(LocalGS + 80);
    if ( v18 < 1
      || v18 > v11
      && (unsigned int)(*(_DWORD *)(LocalGS + 104) + 12 * (v15 + 8) - *(_DWORD *)(LocalGS + 64)) < (unsigned __int64)(2LL * (v18 - 1)) )
    {
      goto LABEL_44;
    }
  }
  v19 = *(_WORD *)(LocalGS + 80);
  if ( v19 >= 1 && v19 <= v13 && (int)v9 >= *(__int16 *)(*(_QWORD *)(LocalGS + 64) + 2LL * v19 - 2) + v7 + 1 )
    goto LABEL_44;
  LODWORD(qword_1C0323170) = v9;
  HIDWORD(qword_1C0323170) = v9;
  if ( (a2 & 1) != 0 )
  {
    v20 = InvokeProject(
            (unsigned int)dword_1C0323190,
            *(unsigned int *)(*(_QWORD *)LocalGS + 4 * v9),
            *(unsigned int *)(*(_QWORD *)(LocalGS + 8) + 4 * v9));
    v21 = InvokeRoundValue(*(unsigned int *)(v2 + 128), v20, *(unsigned int *)(qword_1C0323160 + 32));
    v2 = qword_1C0323160;
    v22 = v21 - v20;
  }
  else
  {
    v22 = 0LL;
  }
  switch ( dword_1C032318C )
  {
    case 1:
      itrp_MovePoint(v3, (unsigned int)v9, v22);
      break;
    case 2:
      *(_DWORD *)(*v3 + 4 * v9) += v22;
      *(_BYTE *)(v3[9] + v9) |= 1u;
      break;
    case 3:
      *(_DWORD *)(v3[1] + 4 * v9) += v22;
      *(_BYTE *)(v3[9] + v9) |= 2u;
      break;
    case 4:
      *(_DWORD *)(*(_QWORD *)(v2 + 16) + 4 * v9) += v22;
      break;
    case 5:
      itrp_ChangeCvtSlow((unsigned int)(dword_1C032318C - 4), (unsigned int)v9, v22);
      break;
    default:
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      break;
  }
  return a1;
}
