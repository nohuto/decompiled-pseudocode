/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x1C010DBD0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C010DB70 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxBroadcastModernAppRedraw @ 0x1C01E5880 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxBroadcastMessageEx @ 0x1C00AA034 (xxxBroadcastMessageEx.c)
 */

__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  unsigned __int16 *v26; // rax
  __int64 result; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // ecx

  EtwTraceChangeDisplayModeBroadcast(0LL);
  v6 = IsDPIAbsoluteSysMet(0LL);
  v11 = v8 + 1;
  if ( v6 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v9, v10) & 0xF) == 0 )
    {
LABEL_6:
      v16 = (unsigned __int16 *)(gpsi + 2268LL);
      goto LABEL_7;
    }
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(v8, v7, v9, v10) & 0xF) == 0 )
  {
    v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14, v15) + 408)
        ? v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v12,
                                                      v14,
                                                      v15)
                                                  + 408)
                                      + 8LL)
                          + 244LL)
        : 0LL;
    if ( (_DWORD)v13 )
      goto LABEL_6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v12, v14, v15) & 0xF) == (_BYTE)v11
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 408)
      ? (v37 = 0)
      : (v37 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v34,
                                                           v35,
                                                           v36)
                                                       + 408)
                                           + 8LL)
                               + 244LL)),
        v37) )
  {
    v16 = (unsigned __int16 *)(gpsi + 2656LL);
  }
  else
  {
    v16 = (unsigned __int16 *)(gpsi + 1880LL);
  }
LABEL_7:
  if ( (unsigned int)IsDPIAbsoluteSysMet(v11) )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v18, v17, v19, v20) & 0xF) == 0 )
    {
LABEL_12:
      v25 = gpsi;
      v26 = (unsigned __int16 *)(gpsi + 2272LL);
      goto LABEL_13;
    }
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(v18, v17, v19, v20) & 0xF) == 0 )
  {
    v22 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v23, v24) + 408)
        ? v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v21,
                                                      v23,
                                                      v24)
                                                  + 408)
                                      + 8LL)
                          + 244LL)
        : 0LL;
    if ( (_DWORD)v22 )
      goto LABEL_12;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v22, v21, v23, v24) & 0xF) == (_BYTE)v11
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 408)
      ? (v41 = 0)
      : (v41 = v11 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                           (__int64)KeGetCurrentThread(),
                                                           v38,
                                                           v39,
                                                           v40)
                                                       + 408)
                                           + 8LL)
                               + 244LL)),
        v41) )
  {
    v25 = gpsi;
    v26 = (unsigned __int16 *)(gpsi + 2660LL);
  }
  else
  {
    v25 = gpsi;
    v26 = (unsigned __int16 *)(gpsi + 1884LL);
  }
LABEL_13:
  result = xxxBroadcastMessageEx(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
             0x7Eu,
             *(unsigned __int16 *)(v25 + 8676),
             (struct _LARGE_STRING *)(*v16 | (*v26 << 16)),
             v11,
             0LL,
             v11,
             a3);
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), 0x1Au, 0LL, 0LL, v11, 0LL, v11, a3);
    return xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), 0x15u, 0LL, 0LL, v11, 0LL, v11, a3);
  }
  return result;
}
