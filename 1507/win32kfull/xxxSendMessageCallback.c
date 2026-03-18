/*
 * XREFs of xxxSendMessageCallback @ 0x1C004DF0C
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C004D864 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     ?xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C004DDE0 (-xxxWrapSendMessageCallback@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxCapture @ 0x1C004F540 (xxxCapture.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00D53CC (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C01D56B0 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C0200060 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C006D340 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     SfnDWORD @ 0x1C006D4F0 (SfnDWORD.c)
 *     xxxInterSendMsgEx @ 0x1C006E0C0 (xxxInterSendMsgEx.c)
 *     xxxBroadcastMessage @ 0x1C0100D88 (xxxBroadcastMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSendMessageCallback(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(struct tagWND *, _QWORD, __int64, _QWORD),
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  void (__fastcall *v9)(struct tagWND *, _QWORD, __int64, _QWORD); // r15
  __int64 *v10; // rbx
  int v14; // r12d
  int v15; // ecx
  __int64 *v16; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  _DWORD *v20; // rcx
  int v21; // edx
  _DWORD *v22; // rax
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+68h] [rbp-18h]
  __int64 v27; // [rsp+70h] [rbp-10h]
  __int64 v28; // [rsp+78h] [rbp-8h]
  int v29; // [rsp+C8h] [rbp+48h]
  __int64 v30; // [rsp+D8h] [rbp+58h]

  v30 = a4;
  v9 = a5;
  v10 = 0LL;
  v14 = 1;
  if ( a5 || (v15 = 1, a6 != 1) )
    v15 = 0;
  if ( a2 < 0x400 && ((MessageTable[a2] & 0x200) != 0 || a2 == 537 && (a3 & 0x8000) != 0) )
  {
    UserSetLastError(1159LL);
    return 0LL;
  }
  if ( a1 == (struct tagWND *)-1LL )
  {
    if ( a5 )
    {
      v10 = &v23;
      LODWORD(v25) = a7;
      v14 = 3;
      v23 = (__int64)a5;
      v24 = a6;
    }
    return xxxBroadcastMessage(0, a2, a3, a4, v14, (__int64)v10, a8);
  }
  else if ( v15 || gptiCurrent != *((_QWORD *)a1 + 2) )
  {
    v16 = 0LL;
    if ( a5 )
    {
      v24 = (__int64)a5;
      v25 = a6;
      LODWORD(v23) = (a7 != 0 ? 0x100 : 0) | 1;
      v16 = &v23;
    }
    return xxxInterSendMsgEx((_DWORD)a1, a2, a3, a4, 0LL, *((_QWORD *)a1 + 2), (__int64)v16, a8, a9);
  }
  else
  {
    if ( ((*(_BYTE *)(gptiCurrent + 608LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x20) != 0 )
    {
      v18 = *(_QWORD *)a1;
      v23 = a4;
      v26 = v18;
      LODWORD(v25) = a2;
      v24 = a3;
      v27 = 0LL;
      xxxCallHook(0, 0, (__int64)&v23, 4u);
      a4 = v30;
    }
    if ( (*((_BYTE *)a1 + 42) & 4) != 0 )
    {
      v19 = *((_QWORD *)a1 + 18);
      if ( v19 >= 7 )
        return 0LL;
      a5 = (void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD))((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64))*(&gServerHandlers + v19))(
                                                                            a1,
                                                                            a2,
                                                                            a3);
    }
    else
    {
      xxxSendMessageToClient(a1, a2, a3, a4, 0LL, 0, (__int64 *)&a5);
    }
    if ( v9 )
    {
      if ( a7 )
      {
        v20 = *(_DWORD **)(gptiCurrent + 408LL);
        v21 = *v20 & 8;
        *v20 |= 4u;
        v29 = v21;
        **(_DWORD **)(gptiCurrent + 408LL) |= 8u;
        if ( a2 == 281 || a2 == 576 )
          ((void (__fastcall *)(struct tagWND *, _QWORD, __int64, void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD), void (__fastcall *)(struct tagWND *, _QWORD, __int64, _QWORD), _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
            a1,
            a2,
            a6,
            a5,
            v9,
            *(_QWORD *)(gpsi + 744LL),
            1,
            0LL);
        else
          SfnDWORD((_DWORD)a1, a2, a6, (_DWORD)a5, (__int64)v9, *(_QWORD *)(gpsi + 744LL));
        **(_DWORD **)(gptiCurrent + 408LL) &= ~4u;
        v22 = *(_DWORD **)(gptiCurrent + 408LL);
        if ( v29 )
          *v22 |= 8u;
        else
          *v22 &= ~8u;
      }
      else
      {
        v9(a1, a2, a6, a5);
      }
    }
    if ( ((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x2000) != 0 )
    {
      v27 = *(_QWORD *)a1;
      v23 = (__int64)a5;
      LODWORD(v26) = a2;
      v25 = a3;
      v24 = v30;
      v28 = 0LL;
      xxxCallHook(0, 0, (__int64)&v23, 0xCu);
    }
    return 1LL;
  }
}
