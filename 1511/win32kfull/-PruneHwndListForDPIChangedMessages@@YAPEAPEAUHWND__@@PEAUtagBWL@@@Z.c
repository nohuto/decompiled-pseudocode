/*
 * XREFs of ?PruneHwndListForDPIChangedMessages@@YAPEAPEAUHWND__@@PEAUtagBWL@@@Z @ 0x1C0094710
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x1C006CE7C (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0091B34 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 */

HWND *__fastcall PruneHwndListForDPIChangedMessages(struct tagBWL *a1)
{
  unsigned __int64 *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rax

  v1 = (unsigned __int64 *)((char *)a1 + 32);
  v2 = 0LL;
  while ( *v1 != 1 )
  {
    v3 = HMValidateHandleNoSecure(*v1, 1);
    if ( !v3 )
      goto LABEL_8;
    if ( v3 == v2 )
      v2 = 0LL;
    if ( !v2 )
    {
      if ( *(_DWORD *)(v3 + 364) != 2 )
        goto LABEL_8;
      v2 = *(_QWORD *)(v3 + 72);
      if ( !v2 )
        v2 = 1LL;
    }
    if ( !(unsigned int)IsTopLevelWindow(v3) )
      *v1 = 0LL;
LABEL_8:
    ++v1;
  }
  return (HWND *)v1;
}
