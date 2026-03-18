/*
 * XREFs of ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C0207DE4
 * Callers:
 *     xxxArrangeWindow @ 0x1C020BBA4 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     xxxInitializeMoveSizeData @ 0x1C020CE20 (xxxInitializeMoveSizeData.c)
 */

__int64 __fastcall xxxInitializeMoveSizeDataProgrammaticArrangement(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        _DWORD *a6)
{
  int v6; // r14d
  int v7; // r10d
  unsigned int v11; // eax
  __int128 v12; // xmm0
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  _WORD *v20; // rcx
  __int16 v21; // ax
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // ecx
  _WORD *v29; // rcx
  unsigned __int16 v30; // ax
  __int64 v31; // r8
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // ecx
  _WORD *v39; // rcx
  __int64 v40; // r9
  __int64 result; // rax
  int v42; // ecx
  unsigned int v43; // [rsp+78h] [rbp+10h]

  v6 = 0;
  v7 = a4;
  v11 = *(_DWORD *)(a5 + 180) & 0xFFFF7FFF;
  *(_QWORD *)a5 = a1;
  *(_DWORD *)(a5 + 180) = v11 | 0x30000;
  if ( a3 == 5 )
    v12 = *(_OWORD *)GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
  else
    v12 = *(_OWORD *)(a1 + 112);
  if ( v7 )
  {
    if ( v7 == 1 )
      v6 = 6;
  }
  else
  {
    v6 = 18;
  }
  if ( a2 == 3 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x4000) != 0 )
      {
        goto LABEL_57;
      }
    }
    else if ( !IsDPIDWMSysMet(v32)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v38 = 0)
             : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v38) )
    {
LABEL_57:
      if ( IsDPIDWMSysMet(6uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v35 = 0)
          : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v35) )
      {
        v39 = (_WORD *)(gpsi + 2680LL);
      }
      else
      {
        v39 = (_WORD *)(gpsi + 1904LL);
      }
      goto LABEL_73;
    }
    v39 = (_WORD *)(gpsi + 2292LL);
LABEL_73:
    v31 = 3LL;
    v30 = *v39 + WORD2(v12) + 1;
    goto LABEL_74;
  }
  if ( (unsigned int)(a2 - 4) <= 3 )
  {
    if ( a3 && a3 != 3 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0 )
        {
          goto LABEL_15;
        }
      }
      else if ( !IsDPIDWMSysMet(v13)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v19 = 0)
               : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v19) )
      {
LABEL_15:
        if ( IsDPIDWMSysMet(6uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v16 = 0)
            : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v16) )
        {
          v20 = (_WORD *)(gpsi + 2680LL);
        }
        else
        {
          v20 = (_WORD *)(gpsi + 1904LL);
        }
        goto LABEL_31;
      }
      v20 = (_WORD *)(gpsi + 2292LL);
LABEL_31:
      v21 = *v20 + 1;
LABEL_52:
      v30 = WORD2(v12) + v21;
      v31 = 9LL;
      goto LABEL_74;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(4uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x4000) != 0 )
      {
        goto LABEL_35;
      }
    }
    else if ( !IsDPIDWMSysMet(v22)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v28 = 0)
             : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v28) )
    {
LABEL_35:
      if ( IsDPIDWMSysMet(4uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v25 = 0)
          : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v25) )
      {
        v29 = (_WORD *)(gpsi + 2672LL);
      }
      else
      {
        v29 = (_WORD *)(gpsi + 1896LL);
      }
      goto LABEL_51;
    }
    v29 = (_WORD *)(gpsi + 2284LL);
LABEL_51:
    v21 = *v29 - 1;
    goto LABEL_52;
  }
  v30 = v43;
  v31 = v43;
LABEL_74:
  v40 = (unsigned __int16)(v12 + (DWORD2(v12) - (int)v12) / 2) | (v30 << 16);
  *a6 = v40;
  result = xxxInitializeMoveSizeData(a1, a5, v31, v40, v6);
  if ( a2 == 3 )
  {
    *(_DWORD *)(a5 + 180) |= 0x400u;
  }
  else if ( a2 > 3 )
  {
    if ( a2 <= 5 )
    {
      result = (unsigned __int8)(*(_BYTE *)(a5 + 180) ^ ((*(_DWORD *)(a5 + 180) | 0x800u) >> 5)) & 0x80;
      v42 = result ^ (*(_DWORD *)(a5 + 180) | 0x800);
      *(_DWORD *)(a5 + 180) = v42;
      if ( (v42 & 0x200000) != 0 && a3 == 4 )
        *(_DWORD *)(a5 + 216) = 4;
      if ( (v6 & 4) != 0 )
      {
        *(_DWORD *)(a5 + 152) = 0;
        *(_DWORD *)(a5 + 156) = 0;
      }
    }
    else if ( a2 <= 7 )
    {
      result = (*(_DWORD *)(a5 + 180) | 0xC00) ^ (*(_BYTE *)(a5 + 180) ^ (unsigned __int8)((*(_DWORD *)(a5 + 180) | 0xC00u) >> 5)) & 0x80u;
      *(_DWORD *)(a5 + 180) = result;
    }
  }
  return result;
}
