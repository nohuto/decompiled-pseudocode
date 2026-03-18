/*
 * XREFs of xxxRemoveFullScreen @ 0x1C0056D5C
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxCheckFullScreen @ 0x1C0056A5C (xxxCheckFullScreen.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxSetTrayWindow @ 0x1C00991F4 (xxxSetTrayWindow.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 */

__int64 __fastcall xxxRemoveFullScreen(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD *v16; // rcx
  __int16 v17; // dx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // ecx
  _BYTE v32[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *(_QWORD **)(a1 + 24);
  v2 = 0;
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 44) & 0x40) == 0 )
      return v2;
    v5 = IsDPIAbsoluteSysMet(56LL);
    v9 = (unsigned int)(v7 - 55);
    if ( v5 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v7, v6, v8) & 0xF) == 0 )
      {
LABEL_21:
        v16 = (_DWORD *)(gpsi + 2492LL);
LABEL_8:
        if ( (*v16 & 8) != 0
          && (((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0
           || *(_QWORD *)(v1[1] + 184LL)) )
        {
          SetOrClrWF(0LL, a1, 1088LL, (unsigned int)v9);
          v17 = *(_WORD *)(gpDispInfo + 208LL);
          *(_WORD *)(gpDispInfo + 208LL) = v17 - v9;
          if ( !v17 )
          {
            PushW32ThreadLock(v1, v32, UserDereferenceObject);
            ObfReferenceObject(v1);
            xxxSetTrayWindow(v1, v9);
            PopAndFreeW32ThreadLock(v32);
            return (unsigned int)v9;
          }
        }
        return v2;
      }
    }
    else if ( (unsigned int)IsDPIDWMSysMet(v7) && (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12) & 0xF) == 0 )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 408)
         ? (unsigned int)v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                    (__int64)KeGetCurrentThread(),
                                                                    v21,
                                                                    v22,
                                                                    v23)
                                                                + 408)
                                                    + 8LL)
                                        + 244LL)
         : 0 )
      {
        goto LABEL_21;
      }
    }
    if ( (unsigned int)IsDPIDWMSysMet(56LL)
      && (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15) & 0xF) == (_BYTE)v9
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 408)
        ? (v31 = 0)
        : (v31 = v9 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v28,
                                                            v29,
                                                            v30)
                                                        + 408)
                                            + 8LL)
                                + 244LL)),
          v31) )
    {
      v16 = (_DWORD *)(gpsi + 2880LL);
    }
    else
    {
      v16 = (_DWORD *)(gpsi + 2104LL);
    }
    goto LABEL_8;
  }
  return 0LL;
}
