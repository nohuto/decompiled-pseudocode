/*
 * XREFs of xxxAddFullScreen @ 0x1C00FCEA4
 * Callers:
 *     xxxCheckFullScreen @ 0x1C008B384 (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C00FCEA4 (xxxAddFullScreen.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxSetTrayWindow @ 0x1C0047654 (xxxSetTrayWindow.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     xxxAddFullScreen @ 0x1C00FCEA4 (xxxAddFullScreen.c)
 */

__int64 __fastcall xxxAddFullScreen(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v4; // esi
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ecx
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  v1 = *(_QWORD **)(a1 + 24);
  if ( !v1 )
    return 0LL;
  v4 = 0;
  if ( (*(_BYTE *)(a1 + 44) & 0x40) == 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x4000) != 0 )
      {
        goto LABEL_7;
      }
    }
    else if ( !IsDPIDWMSysMet(v5)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v11 = 0)
             : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v11) )
    {
LABEL_7:
      if ( IsDPIDWMSysMet(0x38uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v8 = 0)
          : (v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1),
            v8) )
      {
        v12 = (_DWORD *)(gpsi + 2880LL);
      }
      else
      {
        v12 = (_DWORD *)(gpsi + 2104LL);
      }
LABEL_23:
      if ( (*v12 & 8) != 0
        && (((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x800) != 0
         || *(_QWORD *)(v1[1] + 184LL)) )
      {
        SetOrClrWF(1, (_DWORD *)a1, 0x440u, 1);
        if ( ++*(_WORD *)(gpDispInfo + 208LL) == 1 )
        {
          PushW32ThreadLock((__int64)v1, v18, UserDereferenceObject);
          ObfReferenceObject(v1);
          xxxSetTrayWindow((__int64)v1, (__int64 *)1);
          PopAndFreeW32ThreadLock((__int64)v18);
          v4 = 1;
        }
        v13 = *(_QWORD *)(a1 + 104);
        if ( v13 )
        {
          v14 = *(_BYTE *)(v13 + 55);
          if ( (v14 & 0x40) == 0 && !*(_DWORD *)(v13 + 120) && !*(_DWORD *)(v13 + 112) && (v14 & 0x10) == 0 )
          {
            v17[0] = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = v17;
            ++*(_DWORD *)(v13 + 8);
            v17[1] = v13;
            if ( (unsigned int)xxxAddFullScreen(v13) )
              v4 = 1;
            ThreadUnlock1(v16, v15);
          }
        }
      }
      return v4;
    }
    v12 = (_DWORD *)(gpsi + 2492LL);
    goto LABEL_23;
  }
  return v4;
}
