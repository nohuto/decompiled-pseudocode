/*
 * XREFs of xxxAddFullScreen @ 0x1C0129B34
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0056A5C (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C0129B34 (xxxAddFullScreen.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxSetTrayWindow @ 0x1C00991F4 (xxxSetTrayWindow.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxAddFullScreen @ 0x1C0129B34 (xxxAddFullScreen.c)
 */

__int64 __fastcall xxxAddFullScreen(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v3; // esi
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD v40[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v41[4]; // [rsp+38h] [rbp-20h] BYREF

  v1 = *(_QWORD **)(a1 + 24);
  if ( v1 )
  {
    v3 = 0;
    if ( (*(_BYTE *)(a1 + 44) & 0x40) != 0 )
      return v3;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v5, v4, v6, v7) & 0xF) == 0 )
      {
LABEL_25:
        v16 = (_DWORD *)(gpsi + 2492LL);
        goto LABEL_7;
      }
    }
    else if ( IsDPIDWMSysMet(v5)
           && (W32GetCurrentThreadDpiAwarenessContext(v9, v8, v10, v11) & 0xF) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29)
                                                + 408)
                                    + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_25;
    }
    if ( IsDPIDWMSysMet(0x38uLL)
      && (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) == 1
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 408)
        ? (v37 = 0)
        : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v34,
                                                       v35,
                                                       v36)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          v37) )
    {
      v16 = (_DWORD *)(gpsi + 2880LL);
    }
    else
    {
      v16 = (_DWORD *)(gpsi + 2104LL);
    }
LABEL_7:
    if ( (*v16 & 8) != 0
      && (((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0
       || *(_QWORD *)(v1[1] + 184LL)) )
    {
      SetOrClrWF(1, (_DWORD *)a1, 0x440u, 1);
      if ( ++*(_WORD *)(gpDispInfo + 208LL) == 1 )
      {
        PushW32ThreadLock((__int64)v1, v41, UserDereferenceObject, v17);
        ObfReferenceObject(v1);
        xxxSetTrayWindow((__int64)v1, (__int64 *)1);
        PopAndFreeW32ThreadLock((__int64)v41, v20, v21, v22);
        v3 = 1;
      }
      v18 = *(_QWORD *)(a1 + 104);
      if ( v18 )
      {
        v23 = *(_BYTE *)(v18 + 55);
        if ( (v23 & 0x40) == 0 && !*(_DWORD *)(v18 + 120) && !*(_DWORD *)(v18 + 112) && (v23 & 0x10) == 0 )
        {
          v40[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v40;
          ++*(_DWORD *)(v18 + 8);
          v40[1] = v18;
          if ( (unsigned int)xxxAddFullScreen(v18) )
            v3 = 1;
          ThreadUnlock1(v39, v38);
        }
      }
    }
    return v3;
  }
  return 0LL;
}
