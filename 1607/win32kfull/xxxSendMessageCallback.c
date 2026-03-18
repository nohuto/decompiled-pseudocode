/*
 * XREFs of xxxSendMessageCallback @ 0x1C00AA6E0
 * Callers:
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00A9ED8 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C00AA034 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 *     ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00AA5B0 (-xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F994C (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F7C6C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     SfnDWORD @ 0x1C0084FB0 (SfnDWORD.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00851A0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxBroadcastMessage @ 0x1C0134374 (xxxBroadcastMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSendMessageCallback(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v9; // r10
  unsigned __int64 v12; // r12
  __int64 *v13; // rbx
  __int64 v14; // r13
  int v15; // esi
  int v16; // r11d
  ULONG_PTR v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // r15
  int CurrentThreadDpiAwarenessContext; // eax
  _DWORD *v23; // rcx
  _DWORD *v24; // rax
  int v25; // [rsp+50h] [rbp-78h]
  __int64 v26; // [rsp+60h] [rbp-68h] BYREF
  __int64 v27; // [rsp+68h] [rbp-60h]
  __int64 v28; // [rsp+70h] [rbp-58h]
  __int64 v29; // [rsp+78h] [rbp-50h]
  __int64 v30; // [rsp+80h] [rbp-48h]
  __int64 v31; // [rsp+88h] [rbp-40h]
  int v32; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v33; // [rsp+E0h] [rbp+18h]

  v33 = a3;
  v9 = a4;
  v12 = a5;
  v13 = 0LL;
  v14 = a6;
  v15 = 1;
  if ( a5 || (v16 = 1, a6 != 1) )
    v16 = 0;
  if ( a2 < 0x400 && ((MessageTable[a2] & 0x200) != 0 || a2 == 537 && (a3 & 0x8000) != 0) )
  {
    UserSetLastError(1159LL);
    return 0LL;
  }
  if ( a1 == (struct tagWND *)-1LL )
  {
    if ( a5 )
    {
      v15 = 3;
      v26 = a5;
      v27 = a6;
      LODWORD(v28) = a7;
      v13 = &v26;
    }
    return xxxBroadcastMessage(0, a2, a3, a4, v15, (__int64)v13, a8);
  }
  else
  {
    v17 = 0LL;
    LOWORD(v18) = 0;
    if ( a1 )
      v18 = *(_QWORD *)a1;
    v25 = (unsigned __int16)v18;
    if ( (unsigned __int64)(unsigned __int16)v18 >= *(_QWORD *)(gpsi + 8LL)
      || (v19 = gSharedInfo[0],
          v17 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v18 * LODWORD(gSharedInfo[2]),
          *(struct tagWND **)v17 != a1)
      || *(_BYTE *)(v17 + 16) != 1 )
    {
      KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v17, 1uLL);
    }
    if ( v16 || gptiCurrent != *((_QWORD *)a1 + 2) )
    {
      v20 = 0LL;
      if ( a5 )
      {
        v19 = (a7 != 0 ? 0x100 : 0) | 1u;
        LODWORD(v26) = (a7 != 0 ? 0x100 : 0) | 1;
        v27 = a5;
        v28 = a6;
        v20 = &v26;
      }
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v19, (unsigned __int16)v18, a3, v17);
      return xxxInterSendMsgEx(
               (__int64)a1,
               a2,
               v33,
               a4,
               0LL,
               CurrentThreadDpiAwarenessContext,
               *((_QWORD *)a1 + 2),
               v20,
               a8,
               a9,
               v25,
               0LL);
    }
    else
    {
      if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x20) != 0 )
      {
        v29 = *(_QWORD *)a1;
        LODWORD(v28) = a2;
        v27 = a3;
        v26 = v9;
        v30 = 0LL;
        xxxCallHook(0, 0LL, (int *)&v26, 4u);
        a3 = v33;
        v9 = a4;
      }
      if ( (*((_BYTE *)a1 + 42) & 4) != 0 )
      {
        if ( *((_QWORD *)a1 + 18) >= 7uLL )
          return 0LL;
        a5 = _guard_dispatch_icall_fptr();
      }
      else
      {
        xxxSendMessageToClient(a1, a2, a3, v9, 0LL, 0, &a5);
      }
      if ( v12 )
      {
        if ( a7 )
        {
          v23 = *(_DWORD **)(gptiCurrent + 400LL);
          v32 = *v23 & 8;
          *v23 |= 4u;
          **(_DWORD **)(gptiCurrent + 400LL) |= 8u;
          if ( a2 == 576 || a2 == 281 )
            _guard_dispatch_icall_fptr();
          else
            SfnDWORD((__int64 *)a1, a2, v14, a5, v12, *(_QWORD *)(gpsi + 744LL));
          **(_DWORD **)(gptiCurrent + 400LL) &= ~4u;
          v24 = *(_DWORD **)(gptiCurrent + 400LL);
          if ( v32 )
            *v24 |= 8u;
          else
            *v24 &= ~8u;
        }
        else
        {
          _guard_dispatch_icall_fptr();
        }
      }
      if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x2000) != 0 )
      {
        v30 = *(_QWORD *)a1;
        LODWORD(v29) = a2;
        v28 = v33;
        v27 = a4;
        v26 = a5;
        v31 = 0LL;
        xxxCallHook(0, 0LL, (int *)&v26, 0xCu);
      }
      return 1LL;
    }
  }
}
