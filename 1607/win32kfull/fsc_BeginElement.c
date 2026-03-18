/*
 * XREFs of fsc_BeginElement @ 0x1C00C0F2C
 * Callers:
 *     AddVertOff @ 0x1C00BD570 (AddVertOff.c)
 *     AddVertOn @ 0x1C00BD5CC (AddVertOn.c)
 *     AddHorizOn @ 0x1C00BD628 (AddHorizOn.c)
 *     AddHorizOff @ 0x1C00BD684 (AddHorizOff.c)
 *     fsc_CalcLine @ 0x1C00C03E0 (fsc_CalcLine.c)
 *     fsc_CalcSpline @ 0x1C00C075C (fsc_CalcSpline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_BeginElement(char a1, int a2, __int16 a3, int a4, __int64 a5, int *a6, _QWORD *a7, _QWORD *a8)
{
  int v8; // r11d
  __int64 v9; // rax
  __int64 v10; // rax
  int v12; // edx
  int *v13; // r8
  int v14; // r10d
  __int64 v15; // rbx
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax

  v8 = a4;
  *a7 = qword_1C03293B8;
  *a8 = qword_1C03293C0;
  if ( (unsigned int)(a2 - 1) > 1 )
  {
    qword_1C0329360 = qword_1C0329340;
    qword_1C0329368 = qword_1C0329350;
    v9 = qword_1C0329358;
  }
  else
  {
    qword_1C0329360 = qword_1C0329338;
    qword_1C0329368 = qword_1C0329348;
    v9 = qword_1C0329340;
  }
  qword_1C0329370 = v9;
  if ( (a1 & 2) != 0 )
    return 0LL;
  if ( (unsigned int)(a2 - 2) <= 1 )
  {
    qword_1C03293A0 = qword_1C0329378;
    qword_1C03293A8 = qword_1C0329388;
    v10 = qword_1C0329380;
  }
  else
  {
    qword_1C03293A0 = qword_1C0329380;
    qword_1C03293A8 = qword_1C0329390;
    v10 = qword_1C0329398;
  }
  qword_1C03293B0 = v10;
  if ( (a1 & 4) == 0 )
    return 0LL;
  v12 = dword_1C032940C;
  if ( dword_1C032940C - 1 > 0x3FFF )
    return 4869LL;
  word_1C0329410 = a3 | (4 * (dword_1C032940C - 1));
  if ( a4 <= 0 )
    return 0LL;
  v13 = a6;
  v14 = dword_1C0329408;
  v15 = qword_1C0329400;
  v16 = qword_1C03293F8;
  while ( 1 )
  {
    v17 = *(int *)((char *)v13 + a5 - (_QWORD)a6);
    --v8;
    v18 = v12++;
    dword_1C032940C = v12;
    *(_DWORD *)(v16 + 4 * v18) = v17;
    v19 = *v13++;
    *(_DWORD *)(v15 + 4 * v18) = v19;
    if ( v12 > v14 )
      break;
    if ( v8 <= 0 )
      return 0LL;
  }
  return 6656LL;
}
