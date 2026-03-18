/*
 * XREFs of CalcSBStuff2 @ 0x1C00AFB0C
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C00AF75C (xxxGetScrollBarInfo.c)
 *     CalcSBStuff @ 0x1C00AF9AC (CalcSBStuff.c)
 *     SBCtlSetup @ 0x1C022C40C (SBCtlSetup.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall CalcSBStuff2(int *a1, int *a2, int *a3, __int64 a4)
{
  int v6; // edi
  int *v7; // rcx
  int v8; // eax
  int v9; // r9d
  int v10; // ecx
  int v11; // ebp
  int v12; // eax
  int v13; // esi
  INT v14; // esi
  int v15; // r9d
  INT v16; // edx
  INT v17; // ecx
  int v18; // ecx
  int v19; // edx
  INT v20; // edx
  INT v21; // esi
  int v22; // eax
  __int64 result; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // ecx

  v6 = 1;
  if ( (_DWORD)a4 )
  {
    a1[4] = a2[1];
    a1[5] = a2[3];
    a1[6] = *a2;
    a1[7] = a2[2];
    if ( (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, (__int64)a3, a4) & 0xF) != 0 )
      v7 = (int *)(gpsi + 1960LL);
    else
      v7 = (int *)(gpsi + 2348LL);
    goto LABEL_4;
  }
  a1[4] = *a2;
  a1[5] = a2[2];
  a1[6] = a2[1];
  a1[7] = a2[3];
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x15uLL) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0xF) != 0 )
      goto LABEL_18;
LABEL_20:
    v7 = (int *)(gpsi + 2352LL);
    goto LABEL_4;
  }
  if ( IsDPIDWMSysMet(v25)
    && (W32GetCurrentThreadDpiAwarenessContext(v33, v32, v34, v35) & 0xF) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 408)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41) + 408)
                             + 8LL)
                 + 244LL) & 1 )
  {
    goto LABEL_20;
  }
LABEL_18:
  if ( IsDPIDWMSysMet(0x15uLL)
    && (W32GetCurrentThreadDpiAwarenessContext(v29, v28, v30, v31) & 0xF) == 1
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 408)
      ? (v49 = 0)
      : (v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1),
        v49) )
  {
    v7 = (int *)(gpsi + 2740LL);
  }
  else
  {
    v7 = (int *)(gpsi + 1964LL);
  }
LABEL_4:
  v8 = *v7;
  v9 = a1[5];
  v10 = a1[4];
  a1[8] = v8;
  v11 = a1[8];
  a1[3] = a3[3];
  a1[2] = a3[2];
  v12 = *a3;
  *a1 = *a3;
  v13 = a3[1];
  a1[1] = v13;
  v14 = v13 - v12 + 1;
  if ( (v9 - v10) / 2 < v11 )
    v11 = (v9 - v10) / 2;
  v15 = v9 - v11;
  a1[10] = v15;
  a1[9] = v10 + v11;
  v16 = a3[2];
  if ( v16 && v14 )
  {
    v17 = EngMulDiv(v15 - (v10 + v11), v16, v14);
    if ( a1[8] / 2 > v17 )
      v17 = a1[8] / 2;
    a1[8] = v17;
  }
  v18 = v11 + a1[4];
  v19 = a1[5] - v18;
  a1[15] = v18;
  v20 = v19 - a1[8] - v11;
  a1[14] = v20;
  if ( a3[2] )
    v6 = a3[2];
  v21 = v14 - v6;
  if ( v21 )
    v22 = a1[15] + EngMulDiv(a3[3] - *a3, v20, v21);
  else
    v22 = v18 - 1;
  a1[13] = v22;
  result = (unsigned int)(a1[8] + v22);
  a1[12] = result;
  return result;
}
