/*
 * XREFs of IsSmallerThanScreen @ 0x1C014BD94
 * Callers:
 *     xxxSetSysMenu @ 0x1C0067980 (xxxSetSysMenu.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _MonitorFromWindow @ 0x1C00AFFA0 (_MonitorFromWindow.c)
 */

_BOOL8 __fastcall IsSmallerThanScreen(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r8
  int v5; // r9d
  __int64 v6; // rax
  _DWORD *v7; // rcx
  int v8; // r10d
  int v9; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v4 = (_QWORD *)MonitorFromWindow(a1, 1u);
  v5 = *(_DWORD *)(a1 + 352) & 0xF;
  if ( !v5
    && (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
    && (*(_DWORD *)(*(_QWORD *)(v11 + 8) + 244LL) & 1) != 0 )
  {
    v7 = (_DWORD *)v4 + 23;
  }
  else if ( v5 != 1
         || (v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
         || (v7 = (_DWORD *)v4 + 27, (*(_DWORD *)(*(_QWORD *)(v6 + 8) + 244LL) & 1) == 0) )
  {
    v7 = (_DWORD *)v4 + 19;
  }
  v8 = v7[2] - *v7;
  v9 = v7[3] - v7[1];
  if ( a2 )
  {
    if ( !v5
      && (v12 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
      && (*(_DWORD *)(*(_QWORD *)(v12 + 8) + 244LL) & 1) != 0 )
    {
      v13 = v4[17];
    }
    else if ( v5 == 1
           && (v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
           && (*(_DWORD *)(*(_QWORD *)(v14 + 8) + 244LL) & 1) != 0 )
    {
      v13 = v4[18];
    }
    else
    {
      v13 = v4[16];
    }
    *a2 = v13;
  }
  return *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112) < v8 || *(_DWORD *)(a1 + 124) - *(_DWORD *)(a1 + 116) < v9;
}
