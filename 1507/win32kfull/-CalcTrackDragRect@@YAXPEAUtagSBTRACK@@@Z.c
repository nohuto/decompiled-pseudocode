/*
 * XREFs of ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02315E0
 * Callers:
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0231B6C (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     xxxSBTrackInit @ 0x1C02339E0 (xxxSBTrackInit.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

void __fastcall CalcTrackDragRect(struct tagSBTRACK *a1)
{
  _DWORD *v1; // rdi
  _DWORD *v2; // r14
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // ecx
  _DWORD *v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d

  v1 = (_DWORD *)((char *)a1 + 32);
  v2 = (_DWORD *)((char *)a1 + 32);
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0xAuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0 )
      {
        goto LABEL_25;
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
LABEL_25:
      if ( IsDPIDWMSysMet(0xAuLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v15 = 0)
          : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v15) )
      {
        v11 = (_DWORD *)(gpsi + 2696LL);
      }
      else
      {
        v11 = (_DWORD *)(gpsi + 1920LL);
      }
      goto LABEL_41;
    }
    v11 = (_DWORD *)(gpsi + 2308LL);
LABEL_41:
    v2 = v1 + 1;
    goto LABEL_42;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(9uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x4000) != 0 )
    {
      goto LABEL_5;
    }
  }
  else if ( !IsDPIDWMSysMet(v4)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v10 = 0)
           : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v10) )
  {
LABEL_5:
    if ( IsDPIDWMSysMet(9uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v7 = 0)
        : (v7 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                          + 260LL) & 1),
          v7) )
    {
      v11 = (_DWORD *)(gpsi + 2692LL);
    }
    else
    {
      v11 = (_DWORD *)(gpsi + 1916LL);
    }
    goto LABEL_21;
  }
  v11 = (_DWORD *)(gpsi + 2304LL);
LABEL_21:
  ++v1;
LABEL_42:
  v19 = *((_QWORD *)a1 + 12);
  v20 = 2 * *v11;
  v21 = *(_DWORD *)(v19 + 24);
  v22 = 8 * (*(_DWORD *)(v19 + 28) - v21);
  *v2 = v21 - v22;
  *v1 = *(_DWORD *)(*((_QWORD *)a1 + 12) + 16LL) - v20;
  v2[2] = v22 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 28LL);
  v1[2] = v20 + *(_DWORD *)(*((_QWORD *)a1 + 12) + 20LL);
}
