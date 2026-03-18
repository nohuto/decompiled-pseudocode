/*
 * XREFs of xxxAddFullScreen @ 0x1C01092CC
 * Callers:
 *     xxxCheckFullScreen @ 0x1C006899C (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C01092CC (xxxAddFullScreen.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxSetTrayWindow @ 0x1C00803EC (xxxSetTrayWindow.c)
 *     xxxAddFullScreen @ 0x1C01092CC (xxxAddFullScreen.c)
 */

__int64 __fastcall xxxAddFullScreen(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v3; // esi
  unsigned __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v3 = 0;
    if ( (*(_BYTE *)(a1 + 44) & 0x40) != 0 )
      return v3;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x4000) == 0 )
      {
LABEL_27:
        v7 = (_DWORD *)(gpsi + 2492LL);
        goto LABEL_7;
      }
    }
    else if ( IsDPIDWMSysMet(v4)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_27;
    }
    if ( IsDPIDWMSysMet(0x38uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v14 = 0)
        : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v14) )
    {
      v7 = (_DWORD *)(gpsi + 2880LL);
    }
    else
    {
      v7 = (_DWORD *)(gpsi + 2104LL);
    }
LABEL_7:
    if ( (*v7 & 8) != 0
      && (((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0
       || *(_QWORD *)(v1[1] + 184LL)) )
    {
      SetOrClrWF(1, (_DWORD *)a1, 0x440u, 1);
      if ( ++*(_WORD *)(gpDispInfo + 208LL) == 1 )
      {
        PushW32ThreadLock((__int64)v1, v18, UserDereferenceObject);
        ObfReferenceObject(v1);
        xxxSetTrayWindow((__int64)v1, (__int64 *)1);
        PopAndFreeW32ThreadLock((__int64)v18);
        v3 = 1;
      }
      v8 = *(_QWORD *)(a1 + 104);
      if ( v8 )
      {
        v10 = *(_BYTE *)(v8 + 55);
        if ( (v10 & 0x40) == 0 && !*(_DWORD *)(v8 + 120) && !*(_DWORD *)(v8 + 112) && (v10 & 0x10) == 0 )
        {
          v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v17;
          ++*(_DWORD *)(v8 + 8);
          v17[1] = v8;
          if ( (unsigned int)xxxAddFullScreen(v8) )
            v3 = 1;
          ThreadUnlock1(v16, v15);
        }
      }
    }
    return v3;
  }
  return 0LL;
}
