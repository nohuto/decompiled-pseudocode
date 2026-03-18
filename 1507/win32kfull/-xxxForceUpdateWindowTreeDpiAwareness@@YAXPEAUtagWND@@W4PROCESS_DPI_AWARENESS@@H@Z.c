/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z @ 0x1C01E43C8
 * Callers:
 *     ?xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z @ 0x1C01E43C8 (-xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z.c)
 *     xxxForceUpdateProcessDpiAwareness @ 0x1C01E67A4 (xxxForceUpdateProcessDpiAwareness.c)
 * Callees:
 *     UpdateWindowMonitor @ 0x1C005C120 (UpdateWindowMonitor.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     xxxSetWindowPos @ 0x1C00848B8 (xxxSetWindowPos.c)
 *     GetSystemMetricsForWindow @ 0x1C0095290 (GetSystemMetricsForWindow.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z @ 0x1C01E43C8 (-xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z.c)
 */

void __fastcall xxxForceUpdateWindowTreeDpiAwareness(__int64 a1, int a2, int a3)
{
  LARGE_INTEGER v5; // rbp
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
  v5.QuadPart = a2;
  *(_DWORD *)(a1 + 344) = a2;
  *(_DWORD *)(a1 + 288) ^= (*(_DWORD *)(a1 + 288) ^ ((a2 <= 0) << 7)) & 0x80;
  v6 = ValidateHmonitorNoRip(*(_QWORD *)(a1 + 352));
  UpdateWindowMonitor((struct tagWND *)a1, v6);
  i = *(_QWORD *)(a1 + 96);
  if ( !a3 )
    goto LABEL_8;
  PostEventMessageEx(*(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 392LL), 0x19u, 0LL, 0, v5, 0LL, 0LL);
  v8 = (unsigned __int16)GetSystemMetricsForWindow(a1, 1u) << 16;
  SystemMetricsForWindow = GetSystemMetricsForWindow(a1, 0);
  PostMessage(
    a1,
    0x7Eu,
    *(unsigned __int16 *)(gpsi + 7284LL),
    (struct _LARGE_STRING *)(v8 | (unsigned __int64)SystemMetricsForWindow));
  if ( v14 <= 0 != (signed int)v5.LowPart <= 0 )
  {
    PostEventMessageEx(
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 392LL),
      9u,
      (LARGE_INTEGER *)a1,
      0x1Au,
      (LARGE_INTEGER)42LL,
      (LARGE_INTEGER)-1LL,
      0LL);
    PostEventMessageEx(
      *(_QWORD *)(a1 + 16),
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 392LL),
      9u,
      (LARGE_INTEGER *)a1,
      0x1Au,
      (LARGE_INTEGER)46LL,
      (LARGE_INTEGER)-1LL,
      0LL);
  }
  if ( *(_QWORD *)(a1 + 328) )
    goto LABEL_8;
  v12[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v12;
  ++*(_DWORD *)(a1 + 8);
  v12[1] = a1;
  xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 55);
  for ( i = *(_QWORD *)(a1 + 96); ; i = *(_QWORD *)(i + 72) )
  {
    ThreadUnlock1(v11, v10);
LABEL_8:
    if ( !i )
      break;
    v13[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v13;
    v13[1] = i;
    ++*(_DWORD *)(i + 8);
    xxxForceUpdateWindowTreeDpiAwareness(i, v5.LowPart, 0LL);
  }
}
