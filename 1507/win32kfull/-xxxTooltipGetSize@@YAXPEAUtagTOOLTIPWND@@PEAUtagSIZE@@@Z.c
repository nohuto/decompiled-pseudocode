/*
 * XREFs of ?xxxTooltipGetSize@@YAXPEAUtagTOOLTIPWND@@PEAUtagSIZE@@@Z @ 0x1C0120F88
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0120C4C (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     GreGetTextExtentW @ 0x1C00FA610 (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0126A38 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C0128938 (CALL_LPK.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@@Z @ 0x1C0128C6C (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@@Z.c)
 */

void __fastcall xxxTooltipGetSize(struct tagTOOLTIPWND *a1, struct tagSIZE *a2)
{
  HDC TooltipDC; // rdi
  __int64 ThreadWin32Thread; // rax
  int v6; // eax
  __m128i *v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _DWORD *v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _DWORD *v20; // rbx
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v40; // ecx

  TooltipDC = GetTooltipDC(a1);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v6 = CALL_LPK(ThreadWin32Thread);
  v7 = (__m128i *)*((_QWORD *)a1 + 52);
  v8 = -1LL;
  if ( v6 )
  {
    do
      ++v8;
    while ( v7->m128i_i16[v8] );
    xxxClientGetTextExtentPointW(TooltipDC);
  }
  else
  {
    do
      ++v8;
    while ( v7->m128i_i16[v8] );
    GreGetTextExtentW(TooltipDC, v7, v8, a2, 1);
  }
  _ReleaseDC(TooltipDC);
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) == 0 )
    {
LABEL_32:
      v12 = (_DWORD *)(gpsi + 2448LL);
      goto LABEL_8;
    }
  }
  else if ( IsDPIDWMSysMet(v9)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_32;
  }
  if ( IsDPIDWMSysMet(0x2DuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v28 = 0)
      : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v28) )
  {
    v12 = (_DWORD *)(gpsi + 2836LL);
  }
  else
  {
    v12 = (_DWORD *)(gpsi + 2060LL);
  }
LABEL_8:
  if ( (unsigned int)IsDPIAbsoluteSysMet(5uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) == 0 )
    {
LABEL_48:
      v16 = (_DWORD *)(gpsi + 2288LL);
      goto LABEL_12;
    }
  }
  else if ( IsDPIDWMSysMet(v13)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_48;
  }
  if ( IsDPIDWMSysMet(5uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v32 = 0)
      : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v32) )
  {
    v16 = (_DWORD *)(gpsi + 2676LL);
  }
  else
  {
    v16 = (_DWORD *)(gpsi + 1900LL);
  }
LABEL_12:
  a2->cx += *v12 + 4 * *v16;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2EuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x4000) == 0 )
    {
LABEL_64:
      v20 = (_DWORD *)(gpsi + 2452LL);
      goto LABEL_16;
    }
  }
  else if ( IsDPIDWMSysMet(v17)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_64;
  }
  if ( IsDPIDWMSysMet(0x2EuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v36 = 0)
      : (v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v36) )
  {
    v20 = (_DWORD *)(gpsi + 2840LL);
  }
  else
  {
    v20 = (_DWORD *)(gpsi + 2064LL);
  }
LABEL_16:
  if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) == 0 )
    {
LABEL_80:
      v24 = (_DWORD *)(gpsi + 2292LL);
      goto LABEL_20;
    }
  }
  else if ( IsDPIDWMSysMet(v21)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                      + 260LL) & 1 )
  {
    goto LABEL_80;
  }
  if ( IsDPIDWMSysMet(6uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v40 = 0)
      : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v40) )
  {
    v24 = (_DWORD *)(gpsi + 2680LL);
  }
  else
  {
    v24 = (_DWORD *)(gpsi + 1904LL);
  }
LABEL_20:
  a2->cy += *v20 + 2 * *v24;
}
