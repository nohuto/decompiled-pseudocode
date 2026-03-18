/*
 * XREFs of xxxSendMessageCallback @ 0x1C0078D9C
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C0075B18 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0078C70 (-xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxCapture @ 0x1C008E5F8 (xxxCapture.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C0092988 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00DBB38 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C0200428 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0059200 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     SfnDWORD @ 0x1C005CF50 (SfnDWORD.c)
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     xxxBroadcastMessage @ 0x1C0112B88 (xxxBroadcastMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSendMessageCallback(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(struct tagWND *, _QWORD, __int64, _QWORD),
        __int64 a6,
        int a7,
        int a8)
{
  void (__fastcall *v8)(struct tagWND *, _QWORD, __int64, _QWORD); // r15
  __int64 *v9; // rbx
  int v13; // r12d
  int v14; // ecx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  _DWORD *v18; // rcx
  int v19; // edx
  _DWORD *v20; // rax
  __int64 v21; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]
  __int64 v26; // [rsp+78h] [rbp-8h]
  int v27; // [rsp+C8h] [rbp+48h]
  __int64 v28; // [rsp+D8h] [rbp+58h]

  v28 = a4;
  v8 = a5;
  v9 = 0LL;
  v13 = 1;
  if ( a5 || (v14 = 1, a6 != 1) )
    v14 = 0;
  if ( a2 < 0x400 && ((MessageTable[a2] & 0x200) != 0 || a2 == 537 && (a3 & 0x8000) != 0) )
  {
    UserSetLastError(1159);
    return 0LL;
  }
  if ( a1 == (struct tagWND *)-1LL )
  {
    if ( a5 )
    {
      v9 = &v21;
      LODWORD(v23) = a7;
      v13 = 3;
      v21 = (__int64)a5;
      v22 = a6;
    }
    return xxxBroadcastMessage(0, a2, a3, a4, v13, (__int64)v9, a8);
  }
  else if ( v14 || gptiCurrent != *((_QWORD *)a1 + 2) )
  {
    if ( a5 )
    {
      v22 = (__int64)a5;
      v23 = a6;
      LODWORD(v21) = (a7 != 0 ? 0x100 : 0) | 1;
    }
    return xxxInterSendMsgEx((__int64)a1, a2, a3);
  }
  else
  {
    if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x20) != 0 )
    {
      v16 = *(_QWORD *)a1;
      v21 = a4;
      v24 = v16;
      LODWORD(v23) = a2;
      v22 = a3;
      v25 = 0LL;
      xxxCallHook(0LL, 0LL, &v21);
      a4 = v28;
    }
    if ( (*((_BYTE *)a1 + 42) & 4) != 0 )
    {
      v17 = *((_QWORD *)a1 + 18);
      if ( v17 >= 7 )
        return 0LL;
      a5 = (void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD))((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64))*(&gServerHandlers + v17))(
                                                                            a1,
                                                                            a2,
                                                                            a3);
    }
    else
    {
      xxxSendMessageToClient(a1, a2, a3, a4, 0LL, 0, (__int64 *)&a5);
    }
    if ( v8 )
    {
      if ( a7 )
      {
        v18 = *(_DWORD **)(gptiCurrent + 400LL);
        v19 = *v18 & 8;
        *v18 |= 4u;
        v27 = v19;
        **(_DWORD **)(gptiCurrent + 400LL) |= 8u;
        if ( a2 == 281 || a2 == 576 )
          ((void (__fastcall *)(struct tagWND *, _QWORD, __int64, void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD), void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD), _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
            a1,
            a2,
            a6,
            a5,
            v8,
            *(_QWORD *)(gpsi + 744LL),
            1,
            0LL);
        else
          SfnDWORD((__int64 *)a1, a2, a6, (__int64)a5, (__int64)v8, *(_QWORD *)(gpsi + 744LL));
        **(_DWORD **)(gptiCurrent + 400LL) &= ~4u;
        v20 = *(_DWORD **)(gptiCurrent + 400LL);
        if ( v27 )
          *v20 |= 8u;
        else
          *v20 &= ~8u;
      }
      else
      {
        v8(a1, a2, a6, a5);
      }
    }
    if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x2000) != 0 )
    {
      v25 = *(_QWORD *)a1;
      v21 = (__int64)a5;
      LODWORD(v24) = a2;
      v23 = a3;
      v22 = v28;
      v26 = 0LL;
      xxxCallHook(0LL, 0LL, &v21);
    }
    return 1LL;
  }
}
