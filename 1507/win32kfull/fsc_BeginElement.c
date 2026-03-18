/*
 * XREFs of fsc_BeginElement @ 0x1C00B0CBC
 * Callers:
 *     AddVertOff @ 0x1C00ACC6C (AddVertOff.c)
 *     AddHorizOn @ 0x1C00ACCC8 (AddHorizOn.c)
 *     AddHorizOff @ 0x1C00ACD24 (AddHorizOff.c)
 *     AddVertOn @ 0x1C00ACD80 (AddVertOn.c)
 *     fsc_CalcLine @ 0x1C00AF9CC (fsc_CalcLine.c)
 *     fsc_CalcSpline @ 0x1C00B05F4 (fsc_CalcSpline.c)
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
  *a7 = qword_1C0322F98;
  *a8 = qword_1C0322FA0;
  if ( (unsigned int)(a2 - 1) > 1 )
  {
    qword_1C0322F40 = qword_1C0322F20;
    qword_1C0322F48 = qword_1C0322F30;
    v9 = qword_1C0322F38;
  }
  else
  {
    qword_1C0322F40 = qword_1C0322F18;
    qword_1C0322F48 = qword_1C0322F28;
    v9 = qword_1C0322F20;
  }
  qword_1C0322F50 = v9;
  if ( (a1 & 2) != 0 )
    return 0LL;
  if ( (unsigned int)(a2 - 2) <= 1 )
  {
    qword_1C0322F80 = qword_1C0322F58;
    qword_1C0322F88 = qword_1C0322F68;
    v10 = qword_1C0322F60;
  }
  else
  {
    qword_1C0322F80 = qword_1C0322F60;
    qword_1C0322F88 = qword_1C0322F70;
    v10 = qword_1C0322F78;
  }
  qword_1C0322F90 = v10;
  if ( (a1 & 4) == 0 )
    return 0LL;
  v12 = dword_1C0322FEC;
  if ( dword_1C0322FEC - 1 > 0x3FFF )
    return 4869LL;
  word_1C0322FF0 = a3 | (4 * (dword_1C0322FEC - 1));
  if ( a4 <= 0 )
    return 0LL;
  v13 = a6;
  v14 = dword_1C0322FE8;
  v15 = qword_1C0322FE0;
  v16 = qword_1C0322FD8;
  while ( 1 )
  {
    v17 = *(int *)((char *)v13 + a5 - (_QWORD)a6);
    --v8;
    v18 = v12++;
    dword_1C0322FEC = v12;
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
