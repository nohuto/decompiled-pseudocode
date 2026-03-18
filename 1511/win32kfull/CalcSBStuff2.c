/*
 * XREFs of CalcSBStuff2 @ 0x1C0077B08
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C00776D8 (xxxGetScrollBarInfo.c)
 *     CalcSBStuff @ 0x1C0077960 (CalcSBStuff.c)
 *     SBCtlSetup @ 0x1C023389C (SBCtlSetup.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall CalcSBStuff2(int *a1, int *a2, int *a3, int a4)
{
  int v6; // esi
  __int64 v7; // rcx
  int *v8; // rcx
  int v9; // eax
  int v10; // r9d
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  int v14; // edi
  INT v15; // edi
  int v16; // r9d
  INT v17; // edx
  INT v18; // ecx
  int v19; // ecx
  int v20; // edx
  INT v21; // edx
  INT v22; // edi
  int v23; // eax
  __int64 result; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v31; // ecx

  v6 = 1;
  if ( a4 )
  {
    a1[4] = a2[1];
    a1[5] = a2[3];
    a1[6] = *a2;
    a1[7] = a2[2];
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x4000) != 0 )
    {
      v8 = (int *)(gpsi + 1960LL);
    }
    else
    {
      v8 = (int *)(gpsi + 2348LL);
    }
    goto LABEL_5;
  }
  a1[4] = *a2;
  a1[5] = a2[2];
  a1[6] = a2[1];
  a1[7] = a2[3];
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x15uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) == 0 )
    {
LABEL_22:
      v8 = (int *)(gpsi + 2352LL);
      goto LABEL_5;
    }
  }
  else if ( IsDPIDWMSysMet(v25)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_22;
  }
  if ( IsDPIDWMSysMet(0x15uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v31 = 0)
      : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v31) )
  {
    v8 = (int *)(gpsi + 2740LL);
  }
  else
  {
    v8 = (int *)(gpsi + 1964LL);
  }
LABEL_5:
  v9 = *v8;
  v10 = a1[5];
  v11 = a1[4];
  a1[8] = v9;
  v12 = a1[8];
  a1[3] = a3[3];
  a1[2] = a3[2];
  v13 = *a3;
  *a1 = *a3;
  v14 = a3[1];
  a1[1] = v14;
  v15 = v14 - v13 + 1;
  if ( (v10 - v11) / 2 < v12 )
    v12 = (v10 - v11) / 2;
  v16 = v10 - v12;
  a1[10] = v16;
  a1[9] = v11 + v12;
  v17 = a3[2];
  if ( v17 && v15 )
  {
    v18 = EngMulDiv(v16 - (v11 + v12), v17, v15);
    if ( a1[8] / 2 > v18 )
      v18 = a1[8] / 2;
    a1[8] = v18;
  }
  v19 = v12 + a1[4];
  v20 = a1[5] - v19;
  a1[15] = v19;
  v21 = v20 - a1[8] - v12;
  a1[14] = v21;
  if ( a3[2] )
    v6 = a3[2];
  v22 = v15 - v6;
  if ( v22 )
    v23 = a1[15] + EngMulDiv(a3[3] - *a3, v21, v22);
  else
    v23 = v19 - 1;
  a1[13] = v23;
  result = (unsigned int)(a1[8] + v23);
  a1[12] = result;
  return result;
}
