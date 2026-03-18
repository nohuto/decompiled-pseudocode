/*
 * XREFs of _GetMouseMovePointsEx @ 0x1C01D252C
 * Callers:
 *     NtUserGetMouseMovePointsEx @ 0x1C0213FE0 (NtUserGetMouseMovePointsEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall GetMouseMovePointsEx(__int16 *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v5; // edi
  int v6; // r14d
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  int v11; // edx
  unsigned int v12; // r12d
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // r15d
  int v16; // ecx
  int v17; // eax
  unsigned int v19; // ebx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  INT v22; // edi
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  _DWORD *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  int v49; // ecx
  __int64 v50; // rdi
  __int64 v51; // rdx
  unsigned __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  _DWORD *v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  int v77; // ecx
  INT v78; // eax
  int v79; // eax
  unsigned int i; // [rsp+20h] [rbp-68h]
  __int64 v81; // [rsp+28h] [rbp-60h] BYREF
  INT v82; // [rsp+30h] [rbp-58h] BYREF
  INT v83; // [rsp+34h] [rbp-54h]
  __int64 v84; // [rsp+38h] [rbp-50h] BYREF
  _DWORD v85[18]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v86; // [rsp+90h] [rbp+8h]

  LODWORD(v84) = *a1;
  HIDWORD(v84) = a1[2];
  LogicalToPhysicalDPIPoint(v85, &v84, 0LL, 0LL);
  if ( gptInd )
    v5 = ((_BYTE)gptInd - 1) & 0x3F;
  else
    v5 = 63;
  v86 = v5;
  do
  {
    v6 = 0;
    v7 = (unsigned __int64)*((int *)&gaptMouse + 6 * v86) >> 16;
    if ( !(_WORD)v7 )
      break;
    v8 = (unsigned __int64)*((int *)&gaptMouse + 6 * v86 + 1) >> 16;
    if ( !(_WORD)v8 )
      break;
    v9 = (unsigned int)(unsigned __int16)v7 + 1;
    v10 = (unsigned int)(unsigned __int16)v8 + 1;
    v11 = *(_DWORD *)(gpsi + 2192LL);
    if ( (_DWORD)v9 == v11 )
      v12 = *((__int16 *)&gaptMouse + 12 * v86);
    else
      v12 = v11 * *((__int16 *)&gaptMouse + 12 * v86) / (unsigned int)v9;
    v13 = *(unsigned int *)(gpsi + 2196LL);
    if ( (_DWORD)v10 == (_DWORD)v13 )
    {
      v15 = *((__int16 *)&gaptMouse + 12 * v86 + 2);
    }
    else
    {
      v14 = v13 * *((__int16 *)&gaptMouse + 12 * v86 + 2);
      v13 = v14 % (unsigned int)v10;
      v15 = v14 / (unsigned int)v10;
    }
    if ( v12 == v85[0] && v15 == v85[1] )
      goto LABEL_20;
    if ( (W32GetCurrentThreadDpiAwarenessContext(gaptMouse, v13, v10, v9) & 0xF) != 2 )
    {
      v82 = v12;
      v83 = v15;
      PhysicalToLogicalDPIPoint(&v81, &v82, 0LL);
      if ( v81 == v84 )
        v6 = 1;
    }
    if ( v6 )
    {
LABEL_20:
      v16 = *((_DWORD *)a1 + 2);
      if ( !v16 || v16 == *((_DWORD *)&gaptMouse + 6 * v86 + 2) )
      {
        v17 = 1;
        goto LABEL_28;
      }
    }
    v86 = v86 ? ((_BYTE)v86 - 1) & 0x3F : 63;
  }
  while ( v86 != v5 );
  v17 = 0;
LABEL_28:
  if ( !v17 )
  {
    UserSetLastError(1171LL);
    return 0xFFFFFFFFLL;
  }
  if ( v86 > v5 )
    v19 = v86 - v5;
  else
    v19 = v86 - v5 + 64;
  if ( v19 >= a3 )
    v19 = a3;
  for ( i = 0; i < v19; ++i )
  {
    v20 = (unsigned __int64)*((int *)&gaptMouse + 6 * v86) >> 16;
    v21 = (unsigned __int64)*((int *)&gaptMouse + 6 * v86 + 1) >> 16;
    v22 = (unsigned __int16)v21 + 1;
    if ( !(_WORD)v20 || !(_WORD)v21 )
      break;
    v82 = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v86), *(_DWORD *)(gpsi + 2192LL), (unsigned __int16)v20 + 1);
    v83 = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v86 + 2), *(_DWORD *)(gpsi + 2196LL), v22);
    PhysicalToLogicalDPIPoint(&v81, &v82, 0LL);
    if ( a4 == 2 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x4EuLL) )
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext(v24, v23, v25, v26) & 0xF) != 0 )
        {
LABEL_50:
          if ( IsDPIDWMSysMet(0x4EuLL)
            && (W32GetCurrentThreadDpiAwarenessContext(v40, v39, v41, v42) & 0xF) == 1
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 408)
              ? (v49 = 0)
              : (v49 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v46,
                                                             v47,
                                                             v48)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                v49) )
          {
            v38 = (_DWORD *)(gpsi + 2968LL);
          }
          else
          {
            v38 = (_DWORD *)(gpsi + 2192LL);
          }
LABEL_58:
          v50 = a2 + 24LL * i;
          *(_DWORD *)v50 = EngMulDiv((unsigned __int16)v81, 0x10000, *v38 - 1);
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x4FuLL) )
          {
            if ( (W32GetCurrentThreadDpiAwarenessContext(v52, v51, v53, v54) & 0xF) != 0 )
            {
LABEL_68:
              if ( IsDPIDWMSysMet(0x4FuLL)
                && (W32GetCurrentThreadDpiAwarenessContext(v68, v67, v69, v70) & 0xF) == 1
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v71, v72, v73) + 408)
                  ? (v77 = 0)
                  : (v77 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                 (__int64)KeGetCurrentThread(),
                                                                 v74,
                                                                 v75,
                                                                 v76)
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1),
                    v77) )
              {
                v66 = (_DWORD *)(gpsi + 2972LL);
              }
              else
              {
                v66 = (_DWORD *)(gpsi + 2196LL);
              }
              goto LABEL_76;
            }
          }
          else
          {
            if ( !IsDPIDWMSysMet(v52) || (W32GetCurrentThreadDpiAwarenessContext(v56, v55, v57, v58) & 0xF) != 0 )
              goto LABEL_68;
            if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60, v61) + 408)
              || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v62,
                                                         v63,
                                                         v64)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1) )
            {
              goto LABEL_68;
            }
          }
          v66 = (_DWORD *)(gpsi + 2584LL);
LABEL_76:
          v78 = EngMulDiv(WORD2(v81), 0x10000, *v66 - 1);
LABEL_81:
          *(_DWORD *)(v50 + 4) = v78;
          goto LABEL_82;
        }
      }
      else
      {
        if ( !IsDPIDWMSysMet(v24) || (W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29, v30) & 0xF) != 0 )
          goto LABEL_50;
        if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 408)
          || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36)
                                                 + 408)
                                     + 8LL)
                         + 244LL) & 1) )
        {
          goto LABEL_50;
        }
      }
      v38 = (_DWORD *)(gpsi + 2580LL);
      goto LABEL_58;
    }
    v50 = a2 + 24LL * i;
    *(_QWORD *)v50 = v81;
    if ( *(int *)v50 < 0 )
      *(_DWORD *)v50 += 0x10000;
    v79 = *(_DWORD *)(v50 + 4);
    if ( v79 < 0 )
    {
      v78 = v79 + 0x10000;
      goto LABEL_81;
    }
LABEL_82:
    *(_DWORD *)(v50 + 8) = *((_DWORD *)&gaptMouse + 6 * v86 + 2);
    *(_QWORD *)(v50 + 16) = *((_QWORD *)&gaptMouse + 3 * v86 + 2);
    if ( v86 )
      v86 = ((_BYTE)v86 - 1) & 0x3F;
    else
      v86 = 63;
  }
  return i;
}
