/*
 * XREFs of xxxRemoveFullScreen @ 0x1C0068C7C
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxCheckFullScreen @ 0x1C006899C (xxxCheckFullScreen.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxSetTrayWindow @ 0x1C00803EC (xxxSetTrayWindow.c)
 */

__int64 __fastcall xxxRemoveFullScreen(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  __int16 v11; // dx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v15; // ecx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD **)(a1 + 24);
  v2 = 0;
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 44) & 0x40) == 0 )
      return v2;
    v5 = IsDPIAbsoluteSysMet(56LL);
    v7 = (unsigned int)(v6 - 55);
    if ( v5 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) == 0 )
      {
LABEL_23:
        v10 = (_DWORD *)(gpsi + 2492LL);
LABEL_8:
        if ( (*v10 & 8) != 0
          && (((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0
           || *(_QWORD *)(v1[1] + 184LL)) )
        {
          SetOrClrWF(0LL, a1, 1088LL, (unsigned int)v7);
          v11 = *(_WORD *)(gpDispInfo + 208LL);
          *(_WORD *)(gpDispInfo + 208LL) = v11 - v7;
          if ( !v11 )
          {
            PushW32ThreadLock((__int64)v1, v16, UserDereferenceObject);
            ObfReferenceObject(v1);
            xxxSetTrayWindow(v1, v7);
            PopAndFreeW32ThreadLock((__int64)v16);
            return (unsigned int)v7;
          }
        }
        return v2;
      }
    }
    else if ( (unsigned int)IsDPIDWMSysMet(v6)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) == 0 )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         ? (unsigned int)v7 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 408)
                                                    + 8LL)
                                        + 244LL)
         : 0 )
      {
        goto LABEL_23;
      }
    }
    if ( (unsigned int)IsDPIDWMSysMet(56LL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v15 = 0)
        : (v15 = v7 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL)),
          v15) )
    {
      v10 = (_DWORD *)(gpsi + 2880LL);
    }
    else
    {
      v10 = (_DWORD *)(gpsi + 2104LL);
    }
    goto LABEL_8;
  }
  return 0LL;
}
