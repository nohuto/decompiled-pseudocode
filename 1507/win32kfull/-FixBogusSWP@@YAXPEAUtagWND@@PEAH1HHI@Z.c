/*
 * XREFs of ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01C3114
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C00850A0 (xxxSetWindowPosAndBand.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _MonitorFromWindow @ 0x1C0082D50 (_MonitorFromWindow.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01C33B8 (-IsRectBogus@@YAHHHHH@Z.c)
 */

void __fastcall FixBogusSWP(struct tagWND *a1, int *a2, int *a3, int a4, int a5, char a6)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rcx
  int *v17; // rdx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int *v21; // r8
  int v22; // ecx
  int v23; // edx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // [rsp+20h] [rbp-28h] BYREF
  int v28; // [rsp+24h] [rbp-24h]
  int v29; // [rsp+28h] [rbp-20h]
  int v30; // [rsp+2Ch] [rbp-1Ch]

  v10 = MonitorFromWindow(*((_QWORD *)a1 + 13), 2LL, (__int64)a3);
  if ( v10 != *(_QWORD *)(GetDispInfo(v12, v11, v13) + 88) )
  {
    if ( (a6 & 1) != 0 )
    {
      a4 = *((_DWORD *)a1 + 30) - *((_DWORD *)a1 + 28);
      v14 = *((_DWORD *)a1 + 31) - *((_DWORD *)a1 + 29);
    }
    else
    {
      v14 = a5;
    }
    if ( (unsigned int)IsRectBogus(*a2, *a3, a4, v14) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v16 = 0LL)
          : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            !(_DWORD)v16) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) == 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v18 = 0)
            : (v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v17 = (int *)(v10 + 60),
              !v18) )
        {
          v17 = (int *)(v10 + 28);
        }
      }
      else
      {
        v17 = (int *)(v10 + 44);
      }
      IntersectRect(&v27, v17, (int *)(*((_QWORD *)a1 + 13) + 112LL));
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v20 = 0LL)
          : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            !(_DWORD)v20) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) == 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v22 = 0)
            : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v21 = (int *)(v10 + 108),
              !v22) )
        {
          v21 = (int *)(v10 + 76);
        }
      }
      else
      {
        v21 = (int *)(v10 + 92);
      }
      *a2 = v27 + (v29 - v27 - a4) / 2;
      *a3 = v28 + (v30 - v28 - v14) / 2;
      v23 = v21[2];
      if ( a4 + *a2 > v23 )
        *a2 = v23 - a4;
      v24 = v21[3];
      if ( v14 + *a3 > v24 )
        *a3 = v24 - v14;
      v25 = *a2;
      if ( *a2 < *v21 )
        v25 = *v21;
      *a2 = v25;
      v26 = *a3;
      if ( *a3 < v21[1] )
        v26 = v21[1];
      *a3 = v26;
    }
  }
}
