/*
 * XREFs of TouchTargetingCreateContact @ 0x1C024B880
 * Callers:
 *     PointerSpeedHitTest @ 0x1C022D63C (PointerSpeedHitTest.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C022DD08 (xxxPerformTargetingWithinPwnd.c)
 *     xxxPointerWindowHitTest @ 0x1C022DEF4 (xxxPointerWindowHitTest.c)
 * Callees:
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     _TTAdjustContactSide @ 0x1C024C804 (_TTAdjustContactSide.c)
 */

__int64 __fastcall TouchTargetingCreateContact(__int64 a1, int *a2, __int64 a3, _DWORD *a4)
{
  int *v4; // r15
  _DWORD *v8; // r12
  _DWORD *v9; // r13
  _DWORD *v10; // rdi
  int *v11; // r8
  int v12; // edx
  int v13; // eax
  __int64 result; // rax
  int v15; // eax
  int v16; // esi
  int v17; // ebp
  unsigned int v18; // edi
  int v19; // edi
  int v20; // ebx
  int v21; // r11d
  int v22; // eax
  int v23; // r10d
  int v24; // r9d
  int v25; // r8d
  int v26; // eax
  int v27; // r8d
  int v28; // edx
  int v29; // eax
  int v30; // r10d
  int v31; // r11d
  int v32; // r9d
  int v33; // eax
  int v34; // edx
  int v35; // ecx

  v4 = a4 + 4;
  a4[8] = *(_DWORD *)(a1 + 4);
  a4[9] = *(_DWORD *)(a1 + 8);
  a4[45] = 1;
  a4[10] = *(_DWORD *)(a1 + 44);
  *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 12);
  *(_OWORD *)a4 = *(_OWORD *)(a1 + 28);
  if ( !a4[46] )
  {
    a4[47] = 26458;
    a4[46] = 26458;
  }
  v8 = a4 + 6;
  TTAdjustContactSide(*(unsigned int *)(a1 + 4), v4, a4 + 6, (unsigned int)a4[46]);
  TTAdjustContactSide(*(unsigned int *)(a1 + 4), a4, a4 + 2, (unsigned int)a4[46]);
  v9 = a4 + 7;
  v10 = a4 + 5;
  TTAdjustContactSide(*(unsigned int *)(a1 + 8), a4 + 5, a4 + 7, (unsigned int)a4[47]);
  TTAdjustContactSide(*(unsigned int *)(a1 + 8), a4 + 1, a4 + 3, (unsigned int)a4[47]);
  if ( a2 )
  {
    if ( (unsigned int)IntersectRect(v4, v4, a2) )
      IntersectRect(a4, a4, v11);
    else
      a4[45] = 0;
  }
  a4[44] = PtInRect(a4, *(_QWORD *)(a1 + 4));
  if ( !a4[46] )
  {
    a4[47] = 26458;
    a4[46] = 26458;
  }
  v12 = *v4;
  v13 = *v8 - *v4;
  a4[11] = 12;
  if ( v13 < 4 || *v9 - *v10 < 4 )
    a4[11] = 4;
  result = (unsigned int)a4[11];
  switch ( (_DWORD)result )
  {
    case 4:
      a4[12] = v12;
      a4[13] = *v10;
      a4[14] = *v4;
      a4[15] = *v9;
      a4[16] = *v8;
      a4[17] = *v9;
      a4[18] = *v8;
      result = (unsigned int)*v10;
      a4[19] = result;
      break;
    case 8:
      a4[12] = v12;
      v29 = (*v10 + *v9) / 2;
      a4[13] = v29;
      v30 = v29;
      v31 = *v4 + 15 * (*v8 - *v4) / 100;
      a4[14] = v31;
      v32 = *v9 + 15 * (*v10 - *v9) / 100;
      a4[15] = v32;
      v33 = (*v4 + *v8) / 2;
      a4[16] = v33;
      a4[17] = *v9;
      v34 = *v4 + *v8 - v31;
      a4[18] = v34;
      a4[19] = v32;
      a4[20] = *v8;
      a4[21] = v30;
      a4[22] = v34;
      v35 = *v10 + *v9 - v32;
      a4[23] = v35;
      a4[24] = v33;
      result = (unsigned int)*v10;
      a4[25] = result;
      a4[26] = v31;
      a4[27] = v35;
      break;
    case 0xC:
      a4[12] = v12;
      v15 = (*v10 + *v9) / 2;
      a4[13] = v15;
      v16 = v15;
      v17 = *v4 + 7 * (*v8 - *v4) / 100;
      a4[14] = v17;
      v18 = (int)((unsigned __int64)(34359738375LL * (*v10 - *v9)) >> 32) >> 5;
      v19 = *v9 + (v18 >> 31) + v18;
      a4[15] = v19;
      v20 = *v4 + 25 * (*v8 - *v4) / 100;
      a4[16] = v20;
      v21 = *v9 + 7 * (a4[5] - *v9) / 100;
      a4[17] = v21;
      v22 = (*v4 + *v8) / 2;
      a4[18] = v22;
      v23 = v22;
      a4[19] = *v9;
      v24 = *v4 + *v8 - v20;
      a4[20] = v24;
      a4[21] = v21;
      v25 = *v4 + *v8 - v17;
      a4[22] = v25;
      a4[23] = v19;
      v26 = *v8;
      a4[26] = v25;
      a4[24] = v26;
      a4[25] = v16;
      v27 = a4[5] + *v9 - v19;
      a4[27] = v27;
      a4[28] = v24;
      v28 = a4[5] + *v9 - v21;
      a4[29] = v28;
      a4[30] = v23;
      result = (unsigned int)a4[5];
      a4[31] = result;
      a4[32] = v20;
      a4[33] = v28;
      a4[34] = v17;
      a4[35] = v27;
      break;
  }
  return result;
}
