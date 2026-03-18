/*
 * XREFs of ?zzzSetSBCaretPos@@YAXPEAUtagSBWND@@@Z @ 0x1C0232F4C
 * Callers:
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     zzzSetCaretPos @ 0x1C00CDD00 (zzzSetCaretPos.c)
 */

void __fastcall zzzSetSBCaretPos(struct tagSBWND *a1)
{
  int v2; // esi
  unsigned __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  _DWORD *v10; // rdi
  int v11; // ebx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ecx
  _DWORD *v19; // rcx

  if ( a1 == *(struct tagSBWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) )
  {
    if ( *((_DWORD *)a1 + 94) )
      v2 = *((_DWORD *)a1 + 109);
    else
      v2 = *((_DWORD *)a1 + 102);
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v3) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x4000) != 0 )
      {
        goto LABEL_8;
      }
    }
    else if ( !IsDPIDWMSysMet(v3)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v9 = 0)
             : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
               !v9) )
    {
LABEL_8:
      if ( IsDPIDWMSysMet(0x2EuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v6 = 0)
          : (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1),
            v6) )
      {
        v10 = (_DWORD *)(gpsi + 2840LL);
      }
      else
      {
        v10 = (_DWORD *)(gpsi + 2064LL);
      }
LABEL_24:
      if ( *((_DWORD *)a1 + 94) )
        v11 = *((_DWORD *)a1 + 102);
      else
        v11 = *((_DWORD *)a1 + 109);
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0 )
        {
          goto LABEL_30;
        }
      }
      else if ( !IsDPIDWMSysMet(v12)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v18 = 0)
               : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v18) )
      {
LABEL_30:
        if ( IsDPIDWMSysMet(0x2DuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v15 = 0)
            : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v15) )
        {
          v19 = (_DWORD *)(gpsi + 2836LL);
        }
        else
        {
          v19 = (_DWORD *)(gpsi + 2060LL);
        }
        goto LABEL_46;
      }
      v19 = (_DWORD *)(gpsi + 2448LL);
LABEL_46:
      zzzSetCaretPos(v11 + *v19, v2 + *v10);
      return;
    }
    v10 = (_DWORD *)(gpsi + 2452LL);
    goto LABEL_24;
  }
}
