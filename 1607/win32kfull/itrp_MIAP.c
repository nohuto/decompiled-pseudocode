/*
 * XREFs of itrp_MIAP @ 0x1C00CF700
 * Callers:
 *     <none>
 * Callees:
 *     FixMul @ 0x1C00C947C (FixMul.c)
 *     InvokeRoundValue @ 0x1C00CD55C (InvokeRoundValue.c)
 *     InvokeProject @ 0x1C00CE60C (InvokeProject.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     itrp_MovePoint @ 0x1C00D1A00 (itrp_MovePoint.c)
 *     itrp_ChangeCvtSlow @ 0x1C01440B4 (itrp_ChangeCvtSlow.c)
 *     itrp_GetCVTScale @ 0x1C0144104 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_MIAP(__int64 a1, char a2)
{
  __int64 v2; // r10
  __int64 v3; // rsi
  _DWORD *v5; // r13
  __int64 v6; // r9
  int v7; // r14d
  int *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r8
  int fixed; // edi
  __int64 v12; // rbp
  _WORD *v13; // rdx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // cx
  int v16; // r8d
  int v17; // ebx
  __int64 v18; // r15
  __int16 v19; // ax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // r14d
  int v23; // edx
  unsigned int v24; // edi
  int CVTScale; // eax

  v2 = qword_1C03294E0;
  v3 = LocalGS;
  v5 = (_DWORD *)(qword_1C03294E0 + 104);
  v6 = *(_QWORD *)qword_1C03294E0;
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (unsigned __int64)((qword_1C03294C8 - v6) >> 2) < 2 )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  v7 = 4;
  v8 = (int *)(qword_1C03294C8 - 4);
  qword_1C03294C8 = (__int64)v8;
  v9 = *v8;
  if ( (int)v9 >= *(unsigned __int16 *)(qword_1C03294E0 + 360)
    || (int)v9 < 0
    || (v10 = *(_QWORD *)(qword_1C03294E0 + 16),
        (qword_1C03294E0 ^ v10 ^ MEMORY[0xFFFFF78000000330] ^ (unsigned __int64)*(unsigned __int16 *)(qword_1C03294E0 + 360)) != *(_QWORD *)(qword_1C03294E0 + 368)) )
  {
    dword_1C0329530 = 4379;
    return qword_1C0329538;
  }
  if ( dword_1C032951C == 2 )
  {
    fixed = *(_DWORD *)(v10 + 4 * v9);
  }
  else
  {
    if ( dword_1C032951C == 3 )
    {
      CVTScale = itrp_GetCVTScale((unsigned int)(dword_1C032951C - 2), v8, v10, v6);
      fixed = FixMul(*(_DWORD *)(*(_QWORD *)(qword_1C03294E0 + 16) + 4 * v9), CVTScale);
    }
    else
    {
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      v2 = qword_1C03294E0;
      fixed = 0;
    }
    v8 = (int *)qword_1C03294C8;
  }
  qword_1C03294C8 = (__int64)(v8 - 1);
  v12 = *(v8 - 1);
  v13 = *(_WORD **)(v2 + 344);
  v14 = v13[4];
  v15 = v13[6];
  v16 = v14;
  if ( v14 <= v15 )
    v16 = v15;
  if ( v16 <= 1 )
  {
    v17 = 1;
  }
  else if ( v14 <= v15 )
  {
    v17 = v15;
  }
  else
  {
    v17 = v14;
  }
  v18 = qword_1C03294D8;
  if ( qword_1C03294D8 == v3 )
  {
    if ( (int)v12 >= (unsigned __int16)v13[8] || (int)v12 < 0 )
      goto LABEL_44;
    v7 = 0;
  }
  else if ( (int)v12 >= *(_DWORD *)(v2 + 440) || (int)v12 < 0 )
  {
    goto LABEL_44;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v3)
    || (v19 = *(_WORD *)(v3 + 80), v19 >= 1)
    && v19 <= v17
    && (int)v12 >= v7 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * (v19 - 1)) + 1 )
  {
LABEL_44:
    dword_1C0329530 = 4370;
    return qword_1C0329538;
  }
  LODWORD(qword_1C03294F0) = v12;
  HIDWORD(qword_1C03294F0) = v12;
  if ( v3 == v18 )
  {
    *(_DWORD *)(*(_QWORD *)v3 + 4 * v12) = ((unsigned __int64)(fixed * (__int64)(__int16)dword_1C03294B8) >> 32 << 18)
                                         + ((((unsigned int)(fixed * (__int16)dword_1C03294B8) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v12) = *(_DWORD *)(*(_QWORD *)v3 + 4 * v12);
    *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v12) = ((unsigned __int64)(fixed * (__int64)SHIWORD(dword_1C03294B8)) >> 32 << 18)
                                               + ((((unsigned int)(fixed * SHIWORD(dword_1C03294B8)) >> 13) + 1) >> 1);
    *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v12) = *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v12);
  }
  v20 = InvokeProject(dword_1C0329510, *(_DWORD *)(*(_QWORD *)v3 + 4 * v12), *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v12));
  v22 = v20;
  if ( (a2 & 1) != 0 )
  {
    v23 = fixed - v20;
    if ( fixed - v20 < 0 )
      v23 = v20 - fixed;
    if ( v23 > *v5 )
      fixed = v20;
    fixed = InvokeRoundValue(v5[6], fixed, *(_DWORD *)(qword_1C03294E0 + 32));
  }
  v24 = fixed - v22;
  switch ( dword_1C032950C )
  {
    case 1:
      itrp_MovePoint(v3, (unsigned int)v12, v24);
      break;
    case 2:
      *(_DWORD *)(*(_QWORD *)v3 + 4 * v12) += v24;
      *(_BYTE *)(*(_QWORD *)(v3 + 72) + v12) |= 1u;
      break;
    case 3:
      *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v12) += v24;
      *(_BYTE *)(*(_QWORD *)(v3 + 72) + v12) |= 2u;
      break;
    case 4:
      *(_DWORD *)(*(_QWORD *)(qword_1C03294E0 + 16) + 4 * v12) += v24;
      break;
    case 5:
      itrp_ChangeCvtSlow(v21, (unsigned int)v12, v24);
      break;
    default:
      EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
      break;
  }
  return a1;
}
