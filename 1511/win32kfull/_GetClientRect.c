/*
 * XREFs of _GetClientRect @ 0x1C00EC1E4
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00716CC (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxSendSizeMessage @ 0x1C00EC168 (xxxSendSizeMessage.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C0200D50 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C023C570 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall GetClientRect(__int64 a1, __int64 a2)
{
  int v3; // eax
  int v4; // ecx
  __int64 result; // rax
  __int64 v6; // rcx
  _BOOL8 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  _BOOL8 v10; // rcx
  unsigned int *v11; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  _DWORD *v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx

  if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 || (*(_BYTE *)(a1 + 45) & 2) != 0 )
  {
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) != 0x29D )
    {
      *(_OWORD *)a2 = *(_OWORD *)(a1 + 128);
      v3 = *(_DWORD *)(a1 + 128);
      v4 = -*(_DWORD *)(a1 + 132);
      *(_DWORD *)(a2 + 12) += v4;
      result = (unsigned int)-v3;
      *(_DWORD *)a2 += result;
      *(_DWORD *)(a2 + 8) += result;
      *(_DWORD *)(a2 + 4) += v4;
      return result;
    }
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x4000) == 0 )
      {
LABEL_67:
        v8 = (_DWORD *)(gpsi + 2268LL);
        goto LABEL_9;
      }
    }
    else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x4000) == 0 )
    {
      v7 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1;
      if ( v7 )
        goto LABEL_67;
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v28 = 0)
        : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v28) )
    {
      v8 = (_DWORD *)(gpsi + 2656LL);
    }
    else
    {
      v8 = (_DWORD *)(gpsi + 1880LL);
    }
LABEL_9:
    *(_DWORD *)(a2 + 8) = *v8;
    if ( (unsigned int)IsDPIAbsoluteSysMet(1uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) == 0 )
      {
LABEL_75:
        v11 = (unsigned int *)(gpsi + 2272LL);
        goto LABEL_14;
      }
    }
    else if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) == 0 )
    {
      v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1;
      if ( v10 )
        goto LABEL_75;
    }
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v29 = 0)
        : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v29) )
    {
      v11 = (unsigned int *)(gpsi + 2660LL);
    }
    else
    {
      v11 = (unsigned int *)(gpsi + 1884LL);
    }
    goto LABEL_14;
  }
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x39uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0 )
    {
      goto LABEL_30;
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
LABEL_30:
    if ( IsDPIDWMSysMet(0x39uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v16 = 0)
        : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v16) )
    {
      v20 = (_DWORD *)(gpsi + 2884LL);
    }
    else
    {
      v20 = (_DWORD *)(gpsi + 2108LL);
    }
    goto LABEL_46;
  }
  v20 = (_DWORD *)(gpsi + 2496LL);
LABEL_46:
  *(_DWORD *)(a2 + 8) = *v20;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x3AuLL) )
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
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           ? (v27 = 0)
           : (v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                          + 8LL)
                              + 244LL) & 1),
             !v27) )
  {
LABEL_49:
    if ( IsDPIDWMSysMet(0x3AuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v24 = 0)
        : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v24) )
    {
      v11 = (unsigned int *)(gpsi + 2888LL);
    }
    else
    {
      v11 = (unsigned int *)(gpsi + 2112LL);
    }
    goto LABEL_14;
  }
  v11 = (unsigned int *)(gpsi + 2500LL);
LABEL_14:
  result = *v11;
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
