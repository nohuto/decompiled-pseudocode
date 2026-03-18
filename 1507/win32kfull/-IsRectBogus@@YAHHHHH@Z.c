/*
 * XREFs of ?IsRectBogus@@YAHHHHH@Z @ 0x1C01C33B8
 * Callers:
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01C3114 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?TestRectBogus@@YAHPEAUtagRECT@@HHHH@Z @ 0x1C01C3928 (-TestRectBogus@@YAHPEAUtagRECT@@HHHH@Z.c)
 */

__int64 __fastcall IsRectBogus(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // ebp
  int v6; // r14d
  int v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  struct tagRECT *v12; // rcx
  int v13; // ecx
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct tagRECT *v17; // rcx
  int v18; // ecx

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = *(_QWORD *)(GetDispInfo(a1, a2, a3) + 88);
  v11 = 0;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v10 = 0LL)
      : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        !(_DWORD)v10) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) == 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v13 = 0)
        : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v14 = v13 == 0,
          v12 = (struct tagRECT *)(v8 + 108),
          v14) )
    {
      v12 = (struct tagRECT *)(v8 + 76);
    }
  }
  else
  {
    v12 = (struct tagRECT *)(v8 + 92);
  }
  if ( (unsigned int)TestRectBogus(v12, v7, v6, v5, a4) )
    return 1;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v16 = 0LL)
      : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        !(_DWORD)v16) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) == 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v18 = 0)
        : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v14 = v18 == 0,
          v17 = (struct tagRECT *)(v8 + 60),
          v14) )
    {
      v17 = (struct tagRECT *)(v8 + 28);
    }
  }
  else
  {
    v17 = (struct tagRECT *)(v8 + 44);
  }
  if ( (unsigned int)TestRectBogus(v17, v7, v6, v5, a4) )
    return 1;
  return v11;
}
