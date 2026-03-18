/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01DB124
 * Callers:
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01DB124 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01DD3C0 (xxxForceUpdateProcessDpiAwarenessContext.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     UpdateWindowMonitor @ 0x1C0072260 (UpdateWindowMonitor.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     xxxSetWindowPos @ 0x1C00A5850 (xxxSetWindowPos.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01DB124 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

void __fastcall xxxForceUpdateWindowTreeDpiAwarenessContext(struct tagWND *a1, unsigned int a2, int a3)
{
  int v3; // eax
  __int64 v5; // rbp
  __int64 v7; // rax
  __int64 i; // rsi
  int v9; // ebx
  unsigned __int16 SystemMetricsForWindow; // ax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[3]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v14[3]; // [rsp+58h] [rbp-20h] BYREF
  unsigned __int8 v15; // [rsp+88h] [rbp+10h]

  v3 = *((_DWORD *)a1 + 88);
  v5 = a2;
  *((_DWORD *)a1 + 88) = a2;
  v15 = v3;
  v7 = ValidateHmonitorNoRip(*((_QWORD *)a1 + 43));
  UpdateWindowMonitor(a1, v7);
  i = *((_QWORD *)a1 + 12);
  if ( !a3 )
    goto LABEL_8;
  PostEventMessageEx(*((_QWORD *)a1 + 2), *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL), 0x19u, 0LL, 0, v5, 0LL, 0LL);
  v9 = (unsigned __int16)GetSystemMetricsForWindow((__int64)a1, 1u) << 16;
  SystemMetricsForWindow = GetSystemMetricsForWindow((__int64)a1, 0);
  PostMessage((__int64)a1, 126LL, *(unsigned __int16 *)(gpsi + 8676LL), v9 | (unsigned __int64)SystemMetricsForWindow);
  if ( (((unsigned __int8)v5 ^ v15) & 0xF) != 0 )
  {
    PostEventMessageEx(
      *((_QWORD *)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL),
      9u,
      (__int64)a1,
      0x1Au,
      42LL,
      -1LL,
      0LL);
    PostEventMessageEx(
      *((_QWORD *)a1 + 2),
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL),
      9u,
      (__int64)a1,
      0x1Au,
      46LL,
      -1LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 41) )
    goto LABEL_8;
  v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v13;
  ++*((_DWORD *)a1 + 2);
  v13[1] = a1;
  xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  for ( i = *((_QWORD *)a1 + 12); ; i = *(_QWORD *)(i + 72) )
  {
    ThreadUnlock1(v12, v11);
LABEL_8:
    if ( !i )
      break;
    v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v14;
    v14[1] = i;
    ++*(_DWORD *)(i + 8);
    xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)i, v5, 0);
  }
}
