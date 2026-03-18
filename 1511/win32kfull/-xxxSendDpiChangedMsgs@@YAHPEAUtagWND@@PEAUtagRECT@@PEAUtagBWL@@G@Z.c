/*
 * XREFs of ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0091B34
 * Callers:
 *     xxxNotifyMonitorChanged @ 0x1C0091974 (xxxNotifyMonitorChanged.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     ?xxxSendDpiChangedMessageToWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z @ 0x1C0091C20 (-xxxSendDpiChangedMessageToWindow@@YAHPEAUtagWND@@PEAUtagRECT@@G@Z.c)
 *     ?PruneHwndListForDPIChangedMessages@@YAPEAPEAUHWND__@@PEAUtagBWL@@@Z @ 0x1C0094710 (-PruneHwndListForDPIChangedMessages@@YAPEAPEAUHWND__@@PEAUtagBWL@@@Z.c)
 */

__int64 __fastcall xxxSendDpiChangedMsgs(struct tagWND *a1, struct tagRECT *a2, struct tagBWL *a3, unsigned __int16 a4)
{
  unsigned int v4; // ebp
  unsigned __int16 v9; // r9
  unsigned __int64 *v11; // rbx
  unsigned __int64 *i; // rax
  unsigned __int64 *v13; // rsi
  struct tagWND *v14; // rax
  struct tagRECT *v15; // rdx

  v4 = 0;
  if ( a1 && *((_DWORD *)a1 + 86) == 2 && (unsigned int)IsTopLevelWindow((__int64)a1) )
  {
    if ( *((_DWORD *)a1 + 91) == 1 )
    {
      if ( a3 )
      {
        v11 = (unsigned __int64 *)((char *)a3 + 32);
        for ( i = (unsigned __int64 *)((char *)a3 + 40); *i != 1; ++i )
          v11 = i;
      }
      else
      {
        a3 = BuildHwndList((__int64)a1, 1, 0LL);
        v11 = (unsigned __int64 *)PruneHwndListForDPIChangedMessages(a3);
      }
      if ( a3 )
      {
        v13 = (unsigned __int64 *)((char *)a3 + 32);
        while ( v11 + 1 != v13 )
        {
          v14 = (struct tagWND *)HMValidateHandleNoSecure(*v11, 1);
          if ( v14 )
          {
            v15 = 0LL;
            if ( v14 == a1 )
              v15 = a2;
            v4 |= xxxSendDpiChangedMessageToWindow(v14, v15, a4);
          }
          --v11;
        }
      }
    }
    else
    {
      return (unsigned int)xxxSendDpiChangedMessageToWindow(a1, a2, v9);
    }
  }
  return v4;
}
