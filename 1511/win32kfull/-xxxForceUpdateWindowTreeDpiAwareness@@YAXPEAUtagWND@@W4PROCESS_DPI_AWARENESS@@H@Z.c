/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z @ 0x1C01E4858
 * Callers:
 *     ?xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z @ 0x1C01E4858 (-xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z.c)
 *     xxxForceUpdateProcessDpiAwareness @ 0x1C01E6C34 (xxxForceUpdateProcessDpiAwareness.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     UpdateWindowMonitor @ 0x1C006CF60 (UpdateWindowMonitor.c)
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 *     xxxSetWindowPos @ 0x1C0075840 (xxxSetWindowPos.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     ?xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z @ 0x1C01E4858 (-xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z.c)
 */

void __fastcall xxxForceUpdateWindowTreeDpiAwareness(__int64 a1, int a2, int a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 i; // rsi
  int v8; // ebx
  unsigned __int16 SystemMetricsForWindow; // ax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-20h] BYREF
  int v14; // [rsp+88h] [rbp+10h]

  v14 = *(_DWORD *)(a1 + 344);
  v5 = a2;
  *(_DWORD *)(a1 + 344) = a2;
  *(_DWORD *)(a1 + 288) ^= (*(_DWORD *)(a1 + 288) ^ ((a2 <= 0) << 7)) & 0x80;
  v6 = ValidateHmonitorNoRip(*(_QWORD *)(a1 + 352));
  UpdateWindowMonitor((struct tagWND *)a1, v6);
  i = *(_QWORD *)(a1 + 96);
  if ( !a3 )
    goto LABEL_8;
  PostEventMessageEx(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL), 0x19u, 0LL, 0, v5, 0LL, 0LL);
  v8 = (unsigned __int16)GetSystemMetricsForWindow(a1, 1u) << 16;
  SystemMetricsForWindow = GetSystemMetricsForWindow(a1, 0);
  PostMessage(a1, 126LL, *(unsigned __int16 *)(gpsi + 7284LL), v8 | (unsigned __int64)SystemMetricsForWindow);
  if ( v14 <= 0 != (int)v5 <= 0 )
  {
    PostEventMessageEx(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL), 9u, a1, 0x1Au, 42LL, -1LL, 0LL);
    PostEventMessageEx(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL), 9u, a1, 0x1Au, 46LL, -1LL, 0LL);
  }
  if ( *(_QWORD *)(a1 + 328) )
    goto LABEL_8;
  v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v12;
  ++*(_DWORD *)(a1 + 8);
  v12[1] = a1;
  xxxSetWindowPos((struct tagWND *)a1, 0, 0, 0, 0, 0, 55);
  for ( i = *(_QWORD *)(a1 + 96); ; i = *(_QWORD *)(i + 72) )
  {
    ThreadUnlock1(v11, v10);
LABEL_8:
    if ( !i )
      break;
    v13[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v13;
    v13[1] = i;
    ++*(_DWORD *)(i + 8);
    xxxForceUpdateWindowTreeDpiAwareness(i, (unsigned int)v5, 0LL);
  }
}
