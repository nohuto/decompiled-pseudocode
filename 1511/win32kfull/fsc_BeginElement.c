/*
 * XREFs of fsc_BeginElement @ 0x1C00A9014
 * Callers:
 *     AddHorizOn @ 0x1C00A4ACC (AddHorizOn.c)
 *     AddHorizOff @ 0x1C00A4B28 (AddHorizOff.c)
 *     AddVertOff @ 0x1C00A4DD0 (AddVertOff.c)
 *     AddVertOn @ 0x1C00A4E2C (AddVertOn.c)
 *     fsc_CalcLine @ 0x1C00A7D20 (fsc_CalcLine.c)
 *     fsc_CalcSpline @ 0x1C00A8948 (fsc_CalcSpline.c)
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
  *a7 = qword_1C0323CB8;
  *a8 = qword_1C0323CC0;
  if ( (unsigned int)(a2 - 1) > 1 )
  {
    qword_1C0323C60 = qword_1C0323C40;
    qword_1C0323C68 = qword_1C0323C50;
    v9 = qword_1C0323C58;
  }
  else
  {
    qword_1C0323C60 = qword_1C0323C38;
    qword_1C0323C68 = qword_1C0323C48;
    v9 = qword_1C0323C40;
  }
  qword_1C0323C70 = v9;
  if ( (a1 & 2) != 0 )
    return 0LL;
  if ( (unsigned int)(a2 - 2) <= 1 )
  {
    qword_1C0323CA0 = qword_1C0323C78;
    qword_1C0323CA8 = qword_1C0323C88;
    v10 = qword_1C0323C80;
  }
  else
  {
    qword_1C0323CA0 = qword_1C0323C80;
    qword_1C0323CA8 = qword_1C0323C90;
    v10 = qword_1C0323C98;
  }
  qword_1C0323CB0 = v10;
  if ( (a1 & 4) == 0 )
    return 0LL;
  v12 = dword_1C0323D0C;
  if ( dword_1C0323D0C - 1 > 0x3FFF )
    return 4869LL;
  word_1C0323D10 = a3 | (4 * (dword_1C0323D0C - 1));
  if ( a4 <= 0 )
    return 0LL;
  v13 = a6;
  v14 = dword_1C0323D08;
  v15 = qword_1C0323D00;
  v16 = qword_1C0323CF8;
  while ( 1 )
  {
    v17 = *(int *)((char *)v13 + a5 - (_QWORD)a6);
    --v8;
    v18 = v12++;
    dword_1C0323D0C = v12;
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
