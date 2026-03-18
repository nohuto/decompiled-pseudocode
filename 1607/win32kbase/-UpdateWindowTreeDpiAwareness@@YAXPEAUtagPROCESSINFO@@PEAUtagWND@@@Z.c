/*
 * XREFs of ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0074414
 * Callers:
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C00742C0 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     FreeHwndList_0 @ 0x1C0002298 (FreeHwndList_0.c)
 *     IsBuildHwndListSupported_0 @ 0x1C0002BA8 (IsBuildHwndListSupported_0.c)
 *     BuildHwndList_0 @ 0x1C0002BB0 (BuildHwndList_0.c)
 *     IsUpdateWindowMonitorSupported_0 @ 0x1C0002BB8 (IsUpdateWindowMonitorSupported_0.c)
 *     UpdateWindowMonitor_0 @ 0x1C0002BC0 (UpdateWindowMonitor_0.c)
 *     HMValidateHandleNoSecure @ 0x1C0074540 (HMValidateHandleNoSecure.c)
 */

void __fastcall UpdateWindowTreeDpiAwareness(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  __int64 v3; // rbx
  _QWORD *i; // rdi
  __int64 v5; // rbp
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  int v8; // r8d
  unsigned __int64 v9; // rdx
  __int64 v10; // rsi

  if ( (int)IsBuildHwndListSupported_0() < 0 )
    v3 = 0LL;
  else
    v3 = BuildHwndList_0();
  if ( v3 )
  {
    for ( i = (_QWORD *)(v3 + 32); *i != 1LL; ++i )
    {
      v5 = HMValidateHandleNoSecure(*i);
      if ( v5
        && (int)IsUpdateWindowMonitorSupported_0() >= 0
        && *(struct tagPROCESSINFO **)(*(_QWORD *)(v5 + 16) + 376LL) == a1 )
      {
        v6 = *((unsigned int *)a1 + 70);
        v7 = *(_QWORD *)(v5 + 344);
        *(_DWORD *)(v5 + 352) = v6;
        v8 = (unsigned __int16)v7;
        if ( (unsigned __int64)(unsigned __int16)v7 < *((_QWORD *)gpsi + 1) )
        {
          v9 = v7 >> 16;
          v10 = qword_1C011A128 + (unsigned int)(v8 * dword_1C011A130);
          if ( (_WORD)v9 != *(_WORD *)(v10 + 18) && !(_WORD)v9 )
            PsGetCurrentProcessWow64Process(v6);
        }
        UpdateWindowMonitor_0();
      }
    }
    FreeHwndList_0();
  }
}
