/*
 * XREFs of SkipWindowOnMonitor @ 0x1C00427F0
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C004061C (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     NextTopWindow @ 0x1C0042A00 (NextTopWindow.c)
 *     xxxActivateWindow @ 0x1C0044954 (xxxActivateWindow.c)
 * Callees:
 *     _MonitorFromWindow @ 0x1C0082D50 (_MonitorFromWindow.c)
 */

__int64 __fastcall SkipWindowOnMonitor(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rbp
  __int64 *i; // rdi

  v1 = 0;
  v2 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( *(_DWORD *)(a1 + 304) == 1 && *(_QWORD *)(v2 + 280) )
  {
    v3 = (__int64 *)(v2 + 248);
    v4 = MonitorFromWindow(a1, 0LL);
    for ( i = *(__int64 **)(v2 + 248); i != v3; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 6) && MonitorFromWindow(i[2], 0LL) == v4 )
        return 1;
    }
  }
  return v1;
}
