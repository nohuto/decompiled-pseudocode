/*
 * XREFs of DrawSize @ 0x1C0232E48
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C0057540 (xxxDrawWindowFrame.c)
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GrePolyPatBlt @ 0x1C00865E0 (GrePolyPatBlt.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     BitBltSysBmp @ 0x1C00F4978 (BitBltSysBmp.c)
 *     SizeBoxHwnd @ 0x1C0249384 (SizeBoxHwnd.c)
 */

__int64 __fastcall DrawSize(__int64 a1, HDC a2, int a3, int a4)
{
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ecx
  _DWORD *v15; // rdx
  unsigned __int64 v16; // rcx
  int v17; // ebp
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx
  _DWORD *v24; // rcx
  int v25; // ebx
  bool v26; // zf
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // ecx
  _DWORD *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // ecx
  __int64 v41; // rcx
  _DWORD *v42; // rax
  _DWORD v44[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v45; // [rsp+40h] [rbp-28h]

  if ( (*(_BYTE *)(a1 + 49) & 0x40) == 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x4000) != 0 )
      {
        goto LABEL_5;
      }
    }
    else if ( !IsDPIDWMSysMet(v8)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v14 = 0)
             : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v14) )
    {
LABEL_5:
      if ( IsDPIDWMSysMet(2uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v11 = 0)
          : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v11) )
      {
        v15 = (_DWORD *)(gpsi + 2664LL);
      }
      else
      {
        v15 = (_DWORD *)(gpsi + 1888LL);
      }
      goto LABEL_21;
    }
    v15 = (_DWORD *)(gpsi + 2276LL);
LABEL_21:
    a3 = *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112) - *v15 - a3;
  }
  v17 = IsDPIAbsoluteSysMet(3uLL);
  if ( v17 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x4000) != 0 )
    {
      goto LABEL_25;
    }
LABEL_36:
    v24 = (_DWORD *)(gpsi + 2280LL);
    goto LABEL_41;
  }
  if ( IsDPIDWMSysMet(v16)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_36;
  }
LABEL_25:
  if ( IsDPIDWMSysMet(3uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v20 = 0)
      : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v20) )
  {
    v24 = (_DWORD *)(gpsi + 2668LL);
  }
  else
  {
    v24 = (_DWORD *)(gpsi + 1892LL);
  }
LABEL_41:
  v25 = *(_DWORD *)(a1 + 124) - *(_DWORD *)(a1 + 116) - *v24 - a4;
  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x29A )
    v26 = (*(_BYTE *)(a1 + 52) & 0x10) == 0;
  else
    v26 = SizeBoxHwnd(a1) == 0;
  if ( v26 )
  {
    v44[1] = v25;
    v44[0] = a3;
    if ( (unsigned int)IsDPIAbsoluteSysMet(2uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) != 0 )
      {
        goto LABEL_48;
      }
    }
    else if ( !IsDPIDWMSysMet(v27)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v33 = 0)
             : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v33) )
    {
LABEL_48:
      if ( IsDPIDWMSysMet(2uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v30 = 0)
          : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v30) )
      {
        v34 = (_DWORD *)(gpsi + 2664LL);
      }
      else
      {
        v34 = (_DWORD *)(gpsi + 1888LL);
      }
LABEL_64:
      v44[2] = *v34;
      if ( v17 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) != 0 )
        {
          goto LABEL_67;
        }
      }
      else if ( !IsDPIDWMSysMet(3uLL)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v40 = 0)
               : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v40) )
      {
LABEL_67:
        if ( IsDPIDWMSysMet(3uLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v37 = 0)
            : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v37) )
        {
          v41 = gpsi;
          v42 = (_DWORD *)(gpsi + 2668LL);
        }
        else
        {
          v41 = gpsi;
          v42 = (_DWORD *)(gpsi + 1892LL);
        }
        goto LABEL_83;
      }
      v41 = gpsi;
      v42 = (_DWORD *)(gpsi + 2280LL);
LABEL_83:
      v44[3] = *v42;
      v45 = *(_QWORD *)(v41 + 3816);
      return GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v44, 1u);
    }
    v34 = (_DWORD *)(gpsi + 2276LL);
    goto LABEL_64;
  }
  return BitBltSysBmp(a2, a3, v25, (*(_BYTE *)(a1 + 49) & 0x40) != 0 ? 91 : 45);
}
