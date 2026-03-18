/*
 * XREFs of InternalGetRealClientRect @ 0x1C00E358C
 * Callers:
 *     ParkIcon @ 0x1C003F8D8 (ParkIcon.c)
 *     SetTiledRect @ 0x1C00E3178 (SetTiledRect.c)
 *     xxxArrangeIconicWindows @ 0x1C011FC70 (xxxArrangeIconicWindows.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GetRect @ 0x1C0087D10 (GetRect.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall InternalGetRealClientRect(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbx
  __int64 result; // rax
  char v7; // bp
  __int64 v10; // rcx
  _OWORD *v11; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ecx
  unsigned int *v19; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ecx
  unsigned int *v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // ecx
  unsigned int *v36; // rcx
  unsigned __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // ecx
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // ecx
  unsigned int *v44; // rcx
  unsigned __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // ecx
  unsigned int *v52; // rcx

  v5 = a4;
  result = *(_WORD *)(a1 + 66) & 0x3FFF;
  v7 = a3;
  if ( (_DWORD)result != 669 )
  {
    result = GetRect(a1, a2, 17);
    if ( (v7 & 1) == 0 )
      goto LABEL_9;
    if ( (*(_BYTE *)(a1 + 40) & 4) == 0 )
    {
LABEL_21:
      if ( (*(_BYTE *)(a1 + 40) & 2) == 0 )
        goto LABEL_9;
      if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) != 0 )
        {
          goto LABEL_49;
        }
      }
      else if ( !IsDPIDWMSysMet(v21)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v27 = 0)
               : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v27) )
      {
LABEL_49:
        if ( IsDPIDWMSysMet(2uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v24 = 0)
            : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v24) )
        {
          v28 = (unsigned int *)(gpsi + 2664LL);
        }
        else
        {
          v28 = (unsigned int *)(gpsi + 1888LL);
        }
        goto LABEL_65;
      }
      v28 = (unsigned int *)(gpsi + 2276LL);
LABEL_65:
      result = *v28;
      *(_DWORD *)(a2 + 8) += result;
      goto LABEL_9;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(3uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0 )
      {
        goto LABEL_29;
      }
    }
    else if ( !IsDPIDWMSysMet(v12)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v18 = 0)
             : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v18) )
    {
LABEL_29:
      if ( IsDPIDWMSysMet(3uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v15 = 0)
          : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v15) )
      {
        v19 = (unsigned int *)(gpsi + 2668LL);
      }
      else
      {
        v19 = (unsigned int *)(gpsi + 1892LL);
      }
      goto LABEL_45;
    }
    v19 = (unsigned int *)(gpsi + 2280LL);
LABEL_45:
    result = *v19;
    *(_DWORD *)(a2 + 12) += result;
    goto LABEL_21;
  }
  if ( !a4 )
  {
    result = GetDispInfo(a1, a2, a3);
    v5 = *(_QWORD *)(result + 88);
  }
  if ( a5 || (result = PsGetCurrentProcessWin32Process(a1), (*(_DWORD *)(result + 776) & 0x4000) != 0) )
  {
    if ( (v7 & 4) != 0 )
      v11 = (_OWORD *)(v5 + 28);
    else
      v11 = (_OWORD *)(v5 + 76);
  }
  else
  {
    result = PsGetCurrentProcessWin32Process(v10);
    if ( (*(_DWORD *)(result + 776) & 0x2000) != 0 )
    {
      if ( (v7 & 4) != 0 )
        v11 = (_OWORD *)(v5 + 60);
      else
        v11 = (_OWORD *)(v5 + 108);
    }
    else if ( (v7 & 4) != 0 )
    {
      v11 = (_OWORD *)(v5 + 44);
    }
    else
    {
      v11 = (_OWORD *)(v5 + 92);
    }
  }
  *(_OWORD *)a2 = *v11;
LABEL_9:
  if ( (v7 & 2) == 0 )
    return result;
  result = *(_DWORD *)(gpsi + 2104LL) & 0xFFFFFFF7;
  if ( *(int *)(gpsi + 2104LL) < 0 )
    return result;
  if ( (int)result <= 1 )
  {
    result = *(unsigned int *)(gpsi + 2072LL);
    *(_DWORD *)(a2 + 12) -= result;
    return result;
  }
  if ( (int)result <= 3 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x30uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x4000) != 0 )
      {
        goto LABEL_114;
      }
    }
    else if ( !IsDPIDWMSysMet(v45)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v51 = 0)
             : (v51 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v51) )
    {
LABEL_114:
      if ( IsDPIDWMSysMet(0x30uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v48 = 0)
          : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v48) )
      {
        v52 = (unsigned int *)(gpsi + 2848LL);
      }
      else
      {
        v52 = (unsigned int *)(gpsi + 2072LL);
      }
      goto LABEL_130;
    }
    v52 = (unsigned int *)(gpsi + 2460LL);
LABEL_130:
    result = *v52;
    *(_DWORD *)(a2 + 4) += result;
    return result;
  }
  switch ( (_DWORD)result )
  {
    case 4:
      goto LABEL_133;
    case 5:
      goto LABEL_71;
    case 6:
LABEL_133:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2FuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x4000) != 0 )
        {
          goto LABEL_94;
        }
      }
      else if ( !IsDPIDWMSysMet(v37)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v43 = 0)
               : (v43 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v43) )
      {
LABEL_94:
        if ( IsDPIDWMSysMet(0x2FuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v40 = 0)
            : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v40) )
        {
          v44 = (unsigned int *)(gpsi + 2844LL);
        }
        else
        {
          v44 = (unsigned int *)(gpsi + 2068LL);
        }
        goto LABEL_110;
      }
      v44 = (unsigned int *)(gpsi + 2456LL);
LABEL_110:
      result = *v44;
      *(_DWORD *)a2 += result;
      return result;
    case 7:
LABEL_71:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2FuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0 )
        {
          goto LABEL_74;
        }
      }
      else if ( !IsDPIDWMSysMet(v29)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v35 = 0)
               : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v35) )
      {
LABEL_74:
        if ( IsDPIDWMSysMet(0x2FuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v32 = 0)
            : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v32) )
        {
          v36 = (unsigned int *)(gpsi + 2844LL);
        }
        else
        {
          v36 = (unsigned int *)(gpsi + 2068LL);
        }
        goto LABEL_90;
      }
      v36 = (unsigned int *)(gpsi + 2456LL);
LABEL_90:
      result = *v36;
      *(_DWORD *)(a2 + 8) -= result;
      break;
  }
  return result;
}
