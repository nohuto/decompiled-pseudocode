/*
 * XREFs of ?xxxSendDpiChangedMsgs@@YAXPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C007DE64
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C007E314 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     ?PruneHwndListForDPIChangedMessages@@YAPEAPEAUHWND__@@PEAUtagBWL@@@Z @ 0x1C0058B34 (-PruneHwndListForDPIChangedMessages@@YAPEAPEAUHWND__@@PEAUtagBWL@@@Z.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     _IsTopLevelWindow @ 0x1C00665B0 (_IsTopLevelWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     ?xxxSendDpiChangedMessageToWindow@@YAXPEAUtagWND@@PEAUtagRECT@@G@Z @ 0x1C007DF4C (-xxxSendDpiChangedMessageToWindow@@YAXPEAUtagWND@@PEAUtagRECT@@G@Z.c)
 */

void __fastcall xxxSendDpiChangedMsgs(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  unsigned __int16 v8; // r9
  unsigned __int64 *v9; // rbx
  unsigned __int64 *i; // rax
  unsigned __int64 *v11; // rsi
  struct tagWND *v12; // rax
  struct tagRECT *v13; // rdx
  __int64 v14; // rdx

  if ( a1 && *((_DWORD *)a1 + 86) == 2 && (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    if ( *((_DWORD *)a1 + 91) == 1 )
    {
      if ( a3 )
      {
        v9 = (unsigned __int64 *)((char *)a3 + 32);
        for ( i = (unsigned __int64 *)((char *)a3 + 40); *i != 1; ++i )
          v9 = i;
      }
      else
      {
        a3 = BuildHwndList((__int64)a1, 1, 0LL);
        v9 = (unsigned __int64 *)PruneHwndListForDPIChangedMessages(a3, v14);
      }
      if ( a3 )
      {
        v11 = (unsigned __int64 *)((char *)a3 + 32);
        while ( v9 + 1 != v11 )
        {
          v12 = (struct tagWND *)HMValidateHandleNoSecure(*v9, 1);
          if ( v12 )
          {
            v13 = 0LL;
            if ( v12 == a1 )
              v13 = a2;
            xxxSendDpiChangedMessageToWindow(v12, v13, a4);
          }
          --v9;
        }
      }
    }
    else
    {
      xxxSendDpiChangedMessageToWindow(a1, a2, v8);
    }
  }
}
