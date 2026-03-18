/*
 * XREFs of xxxRemoveFullScreen @ 0x1C008B664
 * Callers:
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     xxxCheckFullScreen @ 0x1C008B384 (xxxCheckFullScreen.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxSetTrayWindow @ 0x1C0047654 (xxxSetTrayWindow.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall xxxRemoveFullScreen(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  __int64 *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // ecx
  _DWORD *v14; // rcx
  __int16 v15; // dx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD **)(a1 + 24);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 44) & 0x40) != 0 )
  {
    v5 = IsDPIAbsoluteSysMet(56LL);
    v7 = (__int64 *)(unsigned int)(v6 - 55);
    if ( v5 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0 )
      {
        goto LABEL_7;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v6)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v13 = 0)
             : (v13 = (unsigned int)v7 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                           + 416)
                                                               + 8LL)
                                                   + 260LL)),
               !v13) )
    {
LABEL_7:
      if ( (unsigned int)IsDPIDWMSysMet(56LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v10 = 0)
          : (v10 = (unsigned int)v7 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                        + 416)
                                                            + 8LL)
                                                + 260LL)),
            v10) )
      {
        v14 = (_DWORD *)(gpsi + 2880LL);
      }
      else
      {
        v14 = (_DWORD *)(gpsi + 2104LL);
      }
      goto LABEL_23;
    }
    v14 = (_DWORD *)(gpsi + 2492LL);
LABEL_23:
    if ( (*v14 & 8) != 0
      && (((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x800) != 0
       || *(_QWORD *)(v1[1] + 184LL)) )
    {
      SetOrClrWF(0, (_DWORD *)a1, 0x440u, (int)v7);
      v15 = *(_WORD *)(gpDispInfo + 208LL);
      *(_WORD *)(gpDispInfo + 208LL) = v15 - (_WORD)v7;
      if ( !v15 )
      {
        PushW32ThreadLock((__int64)v1, v16, UserDereferenceObject);
        ObfReferenceObject(v1);
        xxxSetTrayWindow((__int64)v1, v7);
        PopAndFreeW32ThreadLock(v16);
        return (unsigned int)v7;
      }
    }
  }
  return v2;
}
