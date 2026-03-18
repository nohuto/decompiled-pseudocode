/*
 * XREFs of CalcSBStuff2 @ 0x14019156C
 * Callers:
 *     CalcSBStuff @ 0x14018F8F8 (CalcSBStuff.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     WPP_RECORDER_AND_TRACE_SF_lddddddddddddddd @ 0x1402F5FB4 (WPP_RECORDER_AND_TRACE_SF_lddddddddddddddd.c)
 */

char __fastcall CalcSBStuff2(int *a1, int *a2, int *a3, int a4)
{
  int *v5; // r15
  _DWORD *v6; // r8
  int *v7; // r13
  _DWORD *v8; // rdi
  _DWORD *v9; // rax
  _DWORD *v10; // r11
  int v12; // ecx
  int v13; // ebx
  int v14; // r9d
  int v15; // r10d
  int v16; // edx
  unsigned int DpiForSystem; // eax
  INT DpiDependentMetric; // eax
  INT v19; // r8d
  char v20; // di
  int v21; // r9d
  int v22; // r10d
  int v23; // eax
  int v24; // ebx
  INT v25; // ebx
  int v26; // ebp
  INT v27; // edx
  int v28; // ecx
  int v29; // r15d
  int v30; // edx
  INT v31; // edx
  INT v32; // ebx
  INT v33; // eax
  int v34; // eax
  char result; // al
  __int64 UserSessionState; // rax
  int v37; // r8d
  int v38; // edx
  char v39; // [rsp+C4h] [rbp-64h]
  char v41; // [rsp+140h] [rbp+18h]

  v5 = a1 + 4;
  v6 = a1 + 7;
  v7 = a1 + 5;
  v8 = a1 + 4;
  v9 = a1 + 6;
  v10 = a1 + 5;
  if ( a4 )
  {
    v12 = a2[2];
    v13 = 10;
    v14 = *a2;
    v15 = a2[3];
    v16 = a2[1];
  }
  else
  {
    v12 = a2[3];
    v13 = 11;
    v14 = a2[1];
    v15 = a2[2];
    v16 = *a2;
  }
  *v8 = v16;
  *v10 = v15;
  *v9 = v14;
  *v6 = v12;
  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(v13, DpiForSystem);
  a1[8] = DpiDependentMetric;
  v19 = DpiDependentMetric;
  v20 = 1;
  v21 = *v7;
  v22 = *v5;
  a1[3] = a3[3];
  a1[2] = a3[2];
  v23 = *a3;
  *a1 = *a3;
  v24 = a3[1];
  a1[1] = v24;
  v39 = 1;
  v25 = v24 - v23 + 1;
  v26 = (v21 - v22) / 2;
  if ( v26 >= v19 )
    v26 = v19;
  a1[9] = v22 + v26;
  a1[10] = v21 - v26;
  v27 = a3[2];
  if ( v27 && v25 )
  {
    v19 = EngMulDiv(v21 - 2 * v26 - v22, v27, v25);
    if ( a1[8] / 2 > v19 )
      v19 = a1[8] / 2;
    a1[8] = v19;
  }
  v28 = 1;
  v29 = v26 + *v5;
  v30 = *v7 - v29;
  a1[15] = v29;
  v31 = v30 - v26 - v19;
  a1[14] = v31;
  if ( a3[2] )
    v28 = a3[2];
  v32 = v25 - v28;
  if ( v32 )
    v33 = EngMulDiv(a3[3] - *a3, v31, v32);
  else
    v33 = -1;
  v34 = v29 + v33;
  a1[13] = v34;
  a1[12] = a1[8] + v34;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
    || (result = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    result = 0;
  }
  v41 = result;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    v20 = 0;
    v39 = 0;
  }
  if ( result || v20 )
  {
    UserSessionState = W32GetUserSessionState(a1, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v37) = v39;
    LOBYTE(v38) = v41;
    return WPP_RECORDER_AND_TRACE_SF_lddddddddddddddd(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v38,
             v37,
             *(_QWORD *)(UserSessionState + 69152));
  }
  return result;
}
