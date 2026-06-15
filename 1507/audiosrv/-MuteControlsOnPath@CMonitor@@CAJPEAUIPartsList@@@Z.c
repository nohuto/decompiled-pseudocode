/*
 * XREFs of ?MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z @ 0x18009A2C8
 * Callers:
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x18009A5B8 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMonitor::MuteControlsOnPath(struct IPartsList *a1)
{
  bool v2; // r14
  int v3; // esi
  unsigned int v4; // r15d
  __int64 v6; // [rsp+20h] [rbp-10h]
  int v7; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v8; // [rsp+78h] [rbp+48h] BYREF
  __int64 v9; // [rsp+80h] [rbp+50h] BYREF
  __int64 v10; // [rsp+88h] [rbp+58h] BYREF

  v6 = -2LL;
  v2 = 0;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x43u,
      (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids);
  }
  v3 = ((__int64 (__fastcall *)(struct IPartsList *, int *))a1->lpVtbl->GetCount)(a1, &v7);
  if ( v3 < 0 )
    goto LABEL_34;
  v4 = 0;
  if ( v7 == 1 )
  {
LABEL_30:
    v3 = 0;
  }
  else
  {
    while ( 1 )
    {
      v9 = 0LL;
      v3 = ((__int64 (__fastcall *)(struct IPartsList *, _QWORD, __int64 *))a1->lpVtbl->GetPart)(a1, v4, &v9);
      if ( v3 < 0 )
        break;
      if ( v2 )
        goto LABEL_14;
      v10 = 0LL;
      v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 80LL))(v9, &v10);
      if ( v3 < 0 )
        goto LABEL_26;
      v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 24LL))(v10, &v8);
      if ( v3 < 0 )
        goto LABEL_26;
      v2 = v8 > 1;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v2 )
      {
LABEL_14:
        v10 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *, __int64))(*(_QWORD *)v9 + 104LL))(
               v9,
               23LL,
               &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
               &v10,
               v6) >= 0 )
        {
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_q(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0x46u,
              (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
              v9);
          }
          v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, 1LL, 0LL);
          if ( v3 < 0 )
          {
LABEL_26:
            if ( v10 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            break;
          }
        }
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( ++v4 >= v7 - 1 )
        goto LABEL_30;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v3 < 0 )
  {
LABEL_34:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x47u,
        (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
        v3);
    }
  }
  return (unsigned int)v3;
}
