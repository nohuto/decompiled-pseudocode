/*
 * XREFs of _GetMouseMovePointsEx @ 0x1C01DA4DC
 * Callers:
 *     NtUserGetMouseMovePointsEx @ 0x1C021B380 (NtUserGetMouseMovePointsEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall GetMouseMovePointsEx(__int16 *a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v5; // edi
  int v6; // r14d
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  int v11; // edx
  unsigned int v12; // r12d
  int v13; // edx
  unsigned int v14; // r15d
  int v15; // ecx
  int v16; // eax
  unsigned int v18; // ebx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  INT v21; // edi
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _DWORD *v27; // rdx
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rdi
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  _DWORD *v36; // rcx
  __int64 v37; // rcx
  int v38; // ecx
  INT v39; // eax
  int v40; // eax
  unsigned int i; // [rsp+20h] [rbp-68h]
  __int64 v42; // [rsp+28h] [rbp-60h] BYREF
  INT v43; // [rsp+30h] [rbp-58h] BYREF
  INT v44; // [rsp+34h] [rbp-54h]
  __int64 v45; // [rsp+38h] [rbp-50h] BYREF
  _DWORD v46[18]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v47; // [rsp+90h] [rbp+8h]

  LODWORD(v45) = *a1;
  HIDWORD(v45) = a1[2];
  LogicalToPhysicalDPIPoint(v46, &v45, 0LL, 0LL);
  if ( gptInd )
    v5 = ((_BYTE)gptInd - 1) & 0x3F;
  else
    v5 = 63;
  v47 = v5;
  do
  {
    v6 = 0;
    v7 = (unsigned __int64)*((int *)&gaptMouse + 6 * v47) >> 16;
    if ( !(_WORD)v7 )
      break;
    v8 = (unsigned __int64)*((int *)&gaptMouse + 6 * v47 + 1) >> 16;
    if ( !(_WORD)v8 )
      break;
    v9 = (unsigned __int16)v7 + 1;
    v10 = (unsigned __int16)v8 + 1;
    v11 = *(_DWORD *)(gpsi + 2192LL);
    if ( v9 == v11 )
      v12 = *((__int16 *)&gaptMouse + 12 * v47);
    else
      v12 = v11 * *((__int16 *)&gaptMouse + 12 * v47) / v9;
    v13 = *(_DWORD *)(gpsi + 2196LL);
    if ( v10 == v13 )
      v14 = *((__int16 *)&gaptMouse + 12 * v47 + 2);
    else
      v14 = v13 * *((__int16 *)&gaptMouse + 12 * v47 + 2) / v10;
    if ( v12 == v46[0] && v14 == v46[1] )
      goto LABEL_20;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(gaptMouse) + 776) & 0x4000) == 0 )
    {
      v43 = v12;
      v44 = v14;
      PhysicalToLogicalDPIPoint(&v42, &v43, 0LL, 0LL);
      if ( v42 == v45 )
        v6 = 1;
    }
    if ( v6 )
    {
LABEL_20:
      v15 = *((_DWORD *)a1 + 2);
      if ( !v15 || v15 == *((_DWORD *)&gaptMouse + 6 * v47 + 2) )
      {
        v16 = 1;
        goto LABEL_28;
      }
    }
    v47 = v47 ? ((_BYTE)v47 - 1) & 0x3F : 63;
  }
  while ( v47 != v5 );
  v16 = 0;
LABEL_28:
  if ( !v16 )
  {
    UserSetLastError(1171);
    return 0xFFFFFFFFLL;
  }
  if ( v47 > v5 )
    v18 = v47 - v5;
  else
    v18 = v47 - v5 + 64;
  if ( v18 >= a3 )
    v18 = a3;
  for ( i = 0; i < v18; ++i )
  {
    v19 = (unsigned __int64)*((int *)&gaptMouse + 6 * v47) >> 16;
    v20 = (unsigned __int64)*((int *)&gaptMouse + 6 * v47 + 1) >> 16;
    v21 = (unsigned __int16)v20 + 1;
    if ( !(_WORD)v19 || !(_WORD)v20 )
      break;
    v43 = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v47), *(_DWORD *)(gpsi + 2192LL), (unsigned __int16)v19 + 1);
    v44 = EngMulDiv(*((__int16 *)&gaptMouse + 12 * v47 + 2), *(_DWORD *)(gpsi + 2196LL), v21);
    PhysicalToLogicalDPIPoint(&v42, &v43, 0LL, 0LL);
    if ( a4 == 2 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x4EuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) != 0 )
        {
LABEL_52:
          if ( IsDPIDWMSysMet(0x4EuLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v29 = 0)
              : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v29) )
          {
            v27 = (_DWORD *)(gpsi + 2968LL);
          }
          else
          {
            v27 = (_DWORD *)(gpsi + 2192LL);
          }
LABEL_60:
          v30 = a2 + 24LL * i;
          *(_DWORD *)v30 = EngMulDiv((unsigned __int16)v42, 0x10000, *v27 - 1);
          if ( (unsigned int)IsDPIAbsoluteSysMet(0x4FuLL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) != 0 )
            {
LABEL_72:
              if ( IsDPIDWMSysMet(0x4FuLL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                  ? (v38 = 0)
                  : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1),
                    v38) )
              {
                v36 = (_DWORD *)(gpsi + 2972LL);
              }
              else
              {
                v36 = (_DWORD *)(gpsi + 2196LL);
              }
              goto LABEL_80;
            }
          }
          else
          {
            if ( !IsDPIDWMSysMet(v31)
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0 )
            {
              goto LABEL_72;
            }
            if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1) )
            {
              goto LABEL_72;
            }
          }
          v36 = (_DWORD *)(gpsi + 2584LL);
LABEL_80:
          v39 = EngMulDiv(WORD2(v42), 0x10000, *v36 - 1);
LABEL_85:
          *(_DWORD *)(v30 + 4) = v39;
          goto LABEL_86;
        }
      }
      else
      {
        if ( !IsDPIDWMSysMet(v22)
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) != 0 )
        {
          goto LABEL_52;
        }
        if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1) )
        {
          goto LABEL_52;
        }
      }
      v27 = (_DWORD *)(gpsi + 2580LL);
      goto LABEL_60;
    }
    v30 = a2 + 24LL * i;
    *(_QWORD *)v30 = v42;
    if ( *(int *)v30 < 0 )
      *(_DWORD *)v30 += 0x10000;
    v40 = *(_DWORD *)(v30 + 4);
    if ( v40 < 0 )
    {
      v39 = v40 + 0x10000;
      goto LABEL_85;
    }
LABEL_86:
    *(_DWORD *)(v30 + 8) = *((_DWORD *)&gaptMouse + 6 * v47 + 2);
    *(_QWORD *)(v30 + 16) = *((_QWORD *)&gaptMouse + 3 * v47 + 2);
    if ( v47 )
      v47 = ((_BYTE)v47 - 1) & 0x3F;
    else
      v47 = 63;
  }
  return i;
}
