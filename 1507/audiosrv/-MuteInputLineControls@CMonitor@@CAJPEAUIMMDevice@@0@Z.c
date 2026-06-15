/*
 * XREFs of ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x18009A5B8
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180099364 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 *     ?GetTopologyPartForDevice@CMonitor@@CAJPEAUIMMDevice@@PEAPEAUIPart@@@Z @ 0x180099108 (-GetTopologyPartForDevice@CMonitor@@CAJPEAUIMMDevice@@PEAPEAUIPart@@@Z.c)
 *     ?MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z @ 0x18009A2C8 (-MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitor::MuteInputLineControls(struct IMMDevice *a1, struct IMMDevice *a2)
{
  int TopologyPartForDevice; // esi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct IPartsList *v9; // [rsp+30h] [rbp-20h] BYREF
  struct IPart *v10[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  struct IPart *v12; // [rsp+88h] [rbp+38h] BYREF

  v10[1] = (struct IPart *)-2LL;
  v12 = 0LL;
  v10[0] = 0LL;
  v9 = 0LL;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x40u,
      (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
      a1,
      a2);
  }
  TopologyPartForDevice = CMonitor::GetTopologyPartForDevice(a1, &v12);
  if ( TopologyPartForDevice >= 0 )
  {
    TopologyPartForDevice = CMonitor::GetTopologyPartForDevice(a2, v10);
    if ( TopologyPartForDevice >= 0 )
    {
      v11 = 0LL;
      TopologyPartForDevice = ((__int64 (__fastcall *)(struct IPart *, __int64 *))v12->lpVtbl->GetTopologyObject)(
                                v12,
                                &v11);
      if ( TopologyPartForDevice >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, struct IPart *, struct IPart *, _QWORD, struct IPartsList **))(*(_QWORD *)v11 + 72LL))(
               v11,
               v12,
               v10[0],
               0LL,
               &v9);
        TopologyPartForDevice = v5;
        if ( v5 < 0 )
        {
          if ( v5 == -2147023728 )
          {
            v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
            if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
            {
              WPP_SF_(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                0x41u,
                (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids);
              v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
            }
            TopologyPartForDevice = 0;
          }
          else
          {
            v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
          }
          v7 = v11;
          if ( !v11 )
          {
LABEL_22:
            if ( TopologyPartForDevice >= 0 )
              goto LABEL_29;
            goto LABEL_25;
          }
          goto LABEL_20;
        }
        TopologyPartForDevice = CMonitor::MuteControlsOnPath(v9);
      }
      v7 = v11;
      if ( !v11 )
      {
LABEL_21:
        v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
        goto LABEL_22;
      }
LABEL_20:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      goto LABEL_21;
    }
  }
  v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_25:
  if ( (struct _GUID *)v6 != &WPP_GLOBAL_Control && (*(_DWORD *)(v6 + 28) & 0x800000) != 0 && *(_BYTE *)(v6 + 25) >= 2u )
    WPP_SF_D(
      *(_QWORD *)(v6 + 16),
      0x42u,
      (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
      TopologyPartForDevice);
LABEL_29:
  if ( v9 )
    ((void (__fastcall *)(struct IPartsList *))v9->lpVtbl->Release)(v9);
  if ( v10[0] )
    ((void (__fastcall *)(struct IPart *))v10[0]->lpVtbl->Release)(v10[0]);
  if ( v12 )
    ((void (__fastcall *)(struct IPart *))v12->lpVtbl->Release)(v12);
  return (unsigned int)TopologyPartForDevice;
}
