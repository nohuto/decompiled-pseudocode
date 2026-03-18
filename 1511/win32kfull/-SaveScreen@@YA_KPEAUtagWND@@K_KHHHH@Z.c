/*
 * XREFs of ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C0226CF4
 * Callers:
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226E94 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     GreSaveScreenBits @ 0x1C0290CD0 (GreSaveScreenBits.c)
 */

__int64 __fastcall SaveScreen(struct tagWND *a1, unsigned int a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  int v9; // eax
  int v10; // r8d
  int v11; // eax
  __int64 v12; // rcx
  _QWORD **v13; // rbx
  int *v14; // r8
  int v15; // ecx
  int v17[4]; // [rsp+20h] [rbp-38h] BYREF

  if ( (*((_WORD *)a1 + 33) & 0x3FFF) == 0x29D )
  {
    v9 = 0;
    v10 = 1;
  }
  else
  {
    v9 = *((_DWORD *)a1 + 28);
    v10 = 0;
  }
  v17[0] = a4 + v9;
  v17[2] = a4 + a6;
  if ( v10 )
    v11 = 0;
  else
    v11 = *((_DWORD *)a1 + 29);
  v17[3] = a7 + a5;
  v17[1] = a5 + v11;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process((unsigned int)(a7 + a5)) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0
    || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v12 = 0LL)
      : (v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        !(_DWORD)v12) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v15 = 0)
        : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v15) )
    {
      v13 = (_QWORD **)gpDispInfo;
      v14 = (int *)(gpDispInfo + 136LL);
    }
    else
    {
      v13 = (_QWORD **)gpDispInfo;
      v14 = (int *)(gpDispInfo + 104LL);
    }
  }
  else
  {
    v13 = (_QWORD **)gpDispInfo;
    v14 = (int *)(gpDispInfo + 120LL);
  }
  if ( (unsigned int)IntersectRect(v17, v17, v14) )
    return GreSaveScreenBits(**v13, a2, a3);
  else
    return 0LL;
}
