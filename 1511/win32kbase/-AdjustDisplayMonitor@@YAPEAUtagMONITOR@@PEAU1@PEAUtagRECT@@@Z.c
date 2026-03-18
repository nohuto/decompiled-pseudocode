/*
 * XREFs of ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C005EA7C
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C005E4F0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C00446B8 (IntersectRect.c)
 */

struct tagMONITOR *__fastcall AdjustDisplayMonitor(struct tagMONITOR *a1, struct tagRECT *a2)
{
  struct tagMONITOR *v3; // rdi
  __int64 i; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  int *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // ecx
  _DWORD v17[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1;
  for ( i = *(_QWORD *)(gpDispInfo + 96); i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_DWORD *)(i + 24) & 1) == 0 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x4000) != 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8) + 408)
          ? (v6 = 0LL)
          : (v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10)
                                                    + 408)
                                        + 8LL)
                            + 244LL) & 1),
            !(_DWORD)v6) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) == 0
          || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13) + 408)
            ? (v16 = 0)
            : (v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v14,
                                                           v15)
                                                       + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v11 = (int *)(i + 60),
              !v16) )
        {
          v11 = (int *)(i + 28);
        }
      }
      else
      {
        v11 = (int *)(i + 44);
      }
      if ( (unsigned int)IntersectRect(v17, &a2->left, v11) )
        return (struct tagMONITOR *)i;
    }
  }
  return v3;
}
