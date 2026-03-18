/*
 * XREFs of TouchTargetingCreateContact @ 0x140086EF8
 * Callers:
 *     xxxPerformTargetingWithinPwnd @ 0x1400865E0 (xxxPerformTargetingWithinPwnd.c)
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1400869B0 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4Win.c)
 *     EditionNeedsTouchTargeting @ 0x1402C2840 (EditionNeedsTouchTargeting.c)
 * Callees:
 *     ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1400871D0 (-_TTAdjustContactSide@@YAXJPEAJ0J@Z.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 */

__int64 __fastcall TouchTargetingCreateContact(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int *v4; // rdi
  int *v5; // r14
  int *v9; // rsi
  int v10; // r9d
  int *v11; // r12
  int *v12; // r13
  int v13; // eax
  bool v14; // zf
  int v15; // r15d
  unsigned int *v16; // rdx
  int v17; // r14d
  int *v18; // rcx
  int v19; // r9d
  int v20; // r12d
  int v21; // r13d
  int v22; // edi
  int v23; // esi
  int v24; // ebx
  int v25; // r11d
  int v26; // r10d
  int v27; // r8d
  int v28; // ecx
  int v29; // edx
  __int64 result; // rax
  __int64 v31; // r8
  int v32; // ecx

  v4 = a4 + 4;
  a4[8] = *(_DWORD *)(a1 + 4);
  v5 = a4 + 46;
  a4[9] = *(_DWORD *)(a1 + 8);
  a4[45] = 1;
  a4[10] = *(_DWORD *)(a1 + 44);
  v9 = a4 + 47;
  *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 12);
  *(_OWORD *)a4 = *(_OWORD *)(a1 + 28);
  v10 = a4[46];
  if ( v10 )
  {
    v11 = v5;
    v12 = v4;
  }
  else
  {
    *v9 = 26458;
    v11 = a4 + 46;
    *v5 = 26458;
    v12 = a4 + 4;
    v10 = 26458;
  }
  _TTAdjustContactSide(*(_DWORD *)(a1 + 4), v4, v4 + 2, v10);
  _TTAdjustContactSide(*(_DWORD *)(a1 + 4), a4, a4 + 2, *v5);
  _TTAdjustContactSide(*(_DWORD *)(a1 + 8), v4 + 1, v4 + 3, *v9);
  _TTAdjustContactSide(*(_DWORD *)(a1 + 8), a4 + 1, a4 + 3, *v9);
  if ( a2 )
  {
    if ( (unsigned int)IntersectRect(v4, v4, a2) )
      IntersectRect(a4, a4, v31);
    else
      a4[45] = 0;
  }
  v13 = PtInRect(a4, *(_QWORD *)(a1 + 4));
  v14 = *v5 == 0;
  a4[44] = v13;
  if ( v14 )
  {
    *v9 = 26458;
    *v11 = 26458;
  }
  v15 = a4[6];
  v16 = a4 + 7;
  v17 = *v12;
  v18 = a4 + 5;
  a4[11] = 12;
  v19 = v15 - v17;
  if ( v15 - v17 < 4 || (v20 = *v16, v21 = *v18, (int)(*v16 - *v18) < 4) )
  {
    v32 = *v18;
    result = *v16;
    a4[11] = 4;
    a4[12] = v17;
    a4[13] = v32;
    a4[14] = v17;
    a4[15] = result;
    a4[16] = v15;
    a4[17] = result;
    a4[18] = v15;
    a4[19] = v32;
  }
  else
  {
    a4[19] = v20;
    a4[12] = v17;
    a4[24] = v15;
    a4[31] = v21;
    v22 = (v20 + v21) / 2;
    a4[13] = v22;
    a4[25] = v22;
    v23 = v17 + 7 * v19 / 100;
    a4[14] = v23;
    a4[34] = v23;
    v24 = v20 + 25 * (v21 - v20) / 100;
    a4[15] = v24;
    a4[23] = v24;
    v25 = v17 + 25 * v19 / 100;
    a4[16] = v25;
    a4[32] = v25;
    v26 = v20 + 7 * (v21 - v20) / 100;
    v27 = v15 - 25 * v19 / 100;
    a4[17] = v26;
    a4[18] = (v15 + v17) / 2;
    a4[20] = v27;
    v28 = v21 + 25 * (v21 - v20) / -100;
    a4[21] = v26;
    a4[27] = v28;
    a4[28] = v27;
    a4[30] = (v15 + v17) / 2;
    v29 = v15 - 7 * v19 / 100;
    a4[35] = v28;
    a4[22] = v29;
    a4[26] = v29;
    result = (unsigned int)(7 * (v21 - v20) / -100 + v21);
    a4[29] = result;
    a4[33] = result;
  }
  return result;
}
