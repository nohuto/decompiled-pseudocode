/*
 * XREFs of MagContextThreadCallout @ 0x1C01FD690
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C00CEE94 (xxxSetThreadDesktop.c)
 *     MagContextDestroy @ 0x1C0114BE0 (MagContextDestroy.c)
 *     MagControl @ 0x1C01FD884 (MagControl.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C006898C (MagpFindThreadContext.c)
 *     ChangeComposableCursor @ 0x1C01E6DA8 (ChangeComposableCursor.c)
 *     DwmAsyncMagnDestroy @ 0x1C025E7C0 (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C025E864 (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C025E93C (DwmAsyncMagnSetDesktopTransform.c)
 */

void __fastcall MagContextThreadCallout(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *ThreadContext; // rsi
  _QWORD *v6; // r14
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax

  ThreadContext = a3;
  if ( (a3 || (ThreadContext = MagpFindThreadContext(a1, a2)) != 0LL) && (_DWORD)a4 == 1 )
  {
    v6 = (_QWORD *)ThreadContext[5];
    while ( v6 != ThreadContext + 5 )
    {
      v7 = v6;
      v6 = (_QWORD *)*v6;
      v8 = *v7;
      v9 = (_QWORD *)v7[1];
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      if ( v7[3] == -1LL )
      {
        if ( *(_QWORD **)(*(_QWORD *)(ThreadContext[2] + 408LL) + 224LL) == v7 )
        {
          v11 = (void *)ReferenceDwmApiPort(v8, a2, a3, a4);
          DwmAsyncMagnSetDesktopColorTransform(v11);
          v8 = *(_QWORD *)(ThreadContext[2] + 408LL);
          *(_QWORD *)(v8 + 224) = 0LL;
        }
        if ( *(_QWORD **)(*(_QWORD *)(ThreadContext[2] + 408LL) + 216LL) == v7 )
        {
          v12 = (void *)ReferenceDwmApiPort(v8, a2, a3, a4);
          DwmAsyncMagnSetDesktopTransform(v12, 0);
          *(_QWORD *)(*(_QWORD *)(ThreadContext[2] + 408LL) + 216LL) = 0LL;
        }
      }
      else
      {
        if ( (v7[2] & 0x40) != 0 )
        {
          ChangeComposableCursor(0);
          *((_DWORD *)v7 + 4) &= ~0x40u;
        }
        if ( (v7[2] & 0x20) == 0 )
        {
          v10 = (void *)ReferenceDwmApiPort(v8, a2, a3, a4);
          DwmAsyncMagnDestroy(v10);
        }
        if ( v7[3] )
          HMAssignmentUnlock(v7 + 3);
      }
      v13 = v7[29];
      if ( v13 )
        Win32FreePool(v13);
      v14 = v7[32];
      if ( v14 )
        Win32FreePool(v14);
      Win32FreePool(v7);
    }
    v15 = *ThreadContext;
    v16 = (_QWORD *)ThreadContext[1];
    if ( *(_QWORD **)(*ThreadContext + 8LL) != ThreadContext || (_QWORD *)*v16 != ThreadContext )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    Win32FreePool(ThreadContext);
    *(_DWORD *)(a2 + 1072) &= ~8u;
  }
}
