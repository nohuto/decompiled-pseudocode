/*
 * XREFs of ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00D7698
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C00D7644 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     SetMinMetrics @ 0x1C00D7844 (SetMinMetrics.c)
 *     xxxMetricsRecalc @ 0x1C01D7D60 (xxxMetricsRecalc.c)
 */

__int64 __fastcall xxxSetAndDrawMinMetrics(struct _UNICODE_STRING *a1, struct tagMINIMIZEDMETRICS *a2)
{
  struct tagWND *v4; // rbx
  unsigned __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int *v9; // rcx
  int v10; // r12d
  unsigned __int64 v11; // rcx
  int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rcx
  int *v15; // rcx
  int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _DWORD *v20; // rcx
  int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  int v25; // r8d
  __int64 v26; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v43; // ecx

  v4 = 0LL;
  v6 = IsDPIAbsoluteSysMet(0x39uLL);
  if ( v6 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x4000) == 0 )
    {
LABEL_31:
      v9 = (int *)(gpsi + 2496LL);
      goto LABEL_5;
    }
  }
  else if ( IsDPIDWMSysMet(v5)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_31;
  }
  if ( IsDPIDWMSysMet(0x39uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v31 = 0)
      : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v31) )
  {
    v9 = (int *)(gpsi + 2884LL);
  }
  else
  {
    v9 = (int *)(gpsi + 2108LL);
  }
LABEL_5:
  v10 = *v9;
  v12 = IsDPIAbsoluteSysMet(0x3AuLL);
  if ( v12 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) == 0 )
    {
LABEL_47:
      v15 = (int *)(gpsi + 2500LL);
      goto LABEL_9;
    }
  }
  else if ( IsDPIDWMSysMet(v11)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_47;
  }
  if ( IsDPIDWMSysMet(0x3AuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v35 = 0)
      : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v35) )
  {
    v15 = (int *)(gpsi + 2888LL);
  }
  else
  {
    v15 = (int *)(gpsi + 2112LL);
  }
LABEL_9:
  v16 = *v15;
  SetMinMetrics(a1, a2);
  if ( v6 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x4000) == 0 )
    {
LABEL_63:
      v20 = (_DWORD *)(gpsi + 2496LL);
      goto LABEL_13;
    }
  }
  else if ( IsDPIDWMSysMet(0x39uLL)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_63;
  }
  if ( IsDPIDWMSysMet(0x39uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v39 = 0)
      : (v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v39) )
  {
    v20 = (_DWORD *)(gpsi + 2884LL);
  }
  else
  {
    v20 = (_DWORD *)(gpsi + 2108LL);
  }
LABEL_13:
  v21 = *v20 - v10;
  if ( v12 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x4000) == 0 )
    {
LABEL_79:
      v24 = (_DWORD *)(gpsi + 2500LL);
      goto LABEL_17;
    }
  }
  else if ( IsDPIDWMSysMet(0x3AuLL)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_79;
  }
  if ( IsDPIDWMSysMet(0x3AuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v43 = 0)
      : (v43 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v43) )
  {
    v24 = (_DWORD *)(gpsi + 2888LL);
  }
  else
  {
    v24 = (_DWORD *)(gpsi + 2112LL);
  }
LABEL_17:
  v25 = *v24 - v16;
  if ( v21 || v25 )
    xxxMetricsRecalc(4, v21, v25, 0, 0, 0, 0);
  v26 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v26 )
    v4 = *(struct tagWND **)(*(_QWORD *)(v26 + 8) + 16LL);
  xxxInternalInvalidate(v4, (HRGN)1, 0x10485u);
  return 1LL;
}
