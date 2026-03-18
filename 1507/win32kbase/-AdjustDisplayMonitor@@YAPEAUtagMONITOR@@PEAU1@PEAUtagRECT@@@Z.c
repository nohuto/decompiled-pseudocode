/*
 * XREFs of ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C008403C
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0052BD0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C00553DC (IntersectRect.c)
 */

struct tagMONITOR *__fastcall AdjustDisplayMonitor(struct tagMONITOR *a1, struct tagRECT *a2, __int64 a3, __int64 a4)
{
  struct tagMONITOR *v5; // rdi
  __int64 i; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int *v12; // r8
  int v13; // ecx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h]

  v5 = a1;
  for ( i = *(_QWORD *)(gpDispInfo + 96); i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_DWORD *)(i + 24) & 1) == 0 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2, a3, a4, v14, v15) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9, v8, v10, v11, v14, v15) + 776) & 0x4000) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v9 = 0LL)
          : (v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1),
            !(_DWORD)v9) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9, v8, v10, v11, v14, v15) + 776) & 0x2000) == 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v13 = 0)
            : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v12 = (int *)(i + 60),
              !v13) )
        {
          v12 = (int *)(i + 28);
        }
      }
      else
      {
        v12 = (int *)(i + 44);
      }
      if ( (unsigned int)IntersectRect(&v14, &a2->left, v12) )
        return (struct tagMONITOR *)i;
    }
  }
  return v5;
}
