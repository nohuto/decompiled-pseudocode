/*
 * XREFs of ?PruneHwndListForDPIChangedMessages@@YAPEAPEAUHWND__@@PEAUtagBWL@@@Z @ 0x1C0058B34
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x1C005C038 (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxSendDpiChangedMsgs@@YAXPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C007DE64 (-xxxSendDpiChangedMsgs@@YAXPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

HWND *__fastcall PruneHwndListForDPIChangedMessages(struct tagBWL *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rax

  v2 = (_QWORD *)((char *)a1 + 32);
  v3 = 0LL;
  while ( *v2 != 1LL )
  {
    LOBYTE(a2) = 1;
    v4 = HMValidateHandleNoSecure(*v2, a2);
    if ( !v4 )
      goto LABEL_8;
    if ( v4 == v3 )
      v3 = 0LL;
    if ( !v3 )
    {
      if ( *(_DWORD *)(v4 + 364) != 2 )
        goto LABEL_8;
      v3 = *(_QWORD *)(v4 + 72);
      if ( !v3 )
        v3 = 1LL;
    }
    if ( !(unsigned int)IsTopLevelWindow(v4) )
      *v2 = 0LL;
LABEL_8:
    ++v2;
  }
  return (HWND *)v2;
}
