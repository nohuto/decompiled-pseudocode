/*
 * XREFs of IsSmallerThanScreen @ 0x1C01476B0
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSetSysMenu @ 0x1C0072F20 (xxxSetSysMenu.c)
 * Callees:
 *     _MonitorFromWindow @ 0x1C0077FC0 (_MonitorFromWindow.c)
 */

_BOOL8 __fastcall IsSmallerThanScreen(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  int v5; // r10d
  _DWORD *v6; // rcx
  int v7; // r8d
  int v8; // edx
  __int64 v10; // rax

  v4 = (_QWORD *)MonitorFromWindow(a1, 1u);
  v5 = *(_DWORD *)(a1 + 344);
  if ( v5 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
  {
    if ( v5 != 1
      || (v6 = (_DWORD *)v4 + 27,
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0) )
    {
      v6 = (_DWORD *)v4 + 19;
    }
  }
  else
  {
    v6 = (_DWORD *)v4 + 23;
  }
  v7 = v6[2] - *v6;
  v8 = v6[3] - v6[1];
  if ( a2 )
  {
    if ( v5 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
    {
      if ( v5 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) != 0 )
        v10 = v4[18];
      else
        v10 = v4[16];
    }
    else
    {
      v10 = v4[17];
    }
    *a2 = v10;
  }
  return *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112) < v7 || *(_DWORD *)(a1 + 124) - *(_DWORD *)(a1 + 116) < v8;
}
