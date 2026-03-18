/*
 * XREFs of IsSmallerThanScreen @ 0x1C0108218
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxSetSysMenu @ 0x1C0107E60 (xxxSetSysMenu.c)
 * Callees:
 *     _MonitorFromWindow @ 0x1C0082D50 (_MonitorFromWindow.c)
 */

_BOOL8 __fastcall IsSmallerThanScreen(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rax
  int v6; // r10d
  _DWORD *v7; // rcx
  int v8; // r8d
  int v9; // edx
  __int64 v11; // rax

  v5 = (_QWORD *)MonitorFromWindow(a1, 1LL, a3);
  v6 = *(_DWORD *)(a1 + 344);
  if ( v6 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
  {
    if ( v6 != 1
      || (v7 = (_DWORD *)v5 + 27,
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
    {
      v7 = (_DWORD *)v5 + 19;
    }
  }
  else
  {
    v7 = (_DWORD *)v5 + 23;
  }
  v8 = v7[2] - *v7;
  v9 = v7[3] - v7[1];
  if ( a2 )
  {
    if ( v6 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v6 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
        v11 = v5[18];
      else
        v11 = v5[16];
    }
    else
    {
      v11 = v5[17];
    }
    *a2 = v11;
  }
  return *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112) < v8 || *(_DWORD *)(a1 + 124) - *(_DWORD *)(a1 + 116) < v9;
}
