/*
 * XREFs of PostIAMShellHookMessageEx @ 0x140010AC0
 * Callers:
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140010D00 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x1402CAF80 (HandleDisplayChangeForInactiveDesktops.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x1400112B8 (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140149244 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     Feature_HSHELL_IAM_Delivery__private_GetVariant @ 0x1401492A0 (Feature_HSHELL_IAM_Delivery__private_GetVariant.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401492EC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A3738 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1401D6B3C (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

char __fastcall PostIAMShellHookMessageEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 UserSessionState; // rax
  unsigned int v7; // edx
  struct tagWND *CompositeAppFrameWindowOrSelf; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // si
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // [rsp+68h] [rbp+20h]

  v3 = (unsigned int)a2;
  v4 = a3;
  if ( (_DWORD)a2 == 21 || (_DWORD)a2 == 17 )
  {
    v18 = _HMObjectFromHandle(a3);
    *(_DWORD *)(v18 + 384) |= 2u;
  }
  LODWORD(UserSessionState) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 2120LL);
  if ( (UserSessionState & 8) != 0 )
  {
    if ( *(_QWORD *)(a1 + 288) )
    {
      if ( (_DWORD)v3 != 39
        || (LOBYTE(UserSessionState) = ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x400, v7),
            (_BYTE)UserSessionState) )
      {
        CompositeAppFrameWindowOrSelf = 0LL;
        if ( (_DWORD)v3 != 35 )
        {
          CompositeAppFrameWindowOrSelf = (struct tagWND *)_HMObjectFromHandle(v4);
          UserSessionState = _HMPheFromObject(CompositeAppFrameWindowOrSelf);
          if ( (*(_BYTE *)(UserSessionState + 25) & 1) != 0 )
            return UserSessionState;
          if ( (_DWORD)v3 == 23 || (_DWORD)v3 == 19 )
          {
            UserSessionState = W32GetUserSessionState(v10, v9);
            if ( !*(_QWORD *)(UserSessionState + 18928) )
              return UserSessionState;
            UserSessionState = W32GetUserSessionState(v12, v11);
            if ( *(struct tagWND **)(*(_QWORD *)(UserSessionState + 18928) + 128LL) != CompositeAppFrameWindowOrSelf )
              return UserSessionState;
            *((_DWORD *)CompositeAppFrameWindowOrSelf + 96) |= 2u;
            if ( (_DWORD)v3 == 19 )
            {
              CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(CompositeAppFrameWindowOrSelf);
              v4 = *(_QWORD *)CompositeAppFrameWindowOrSelf;
            }
          }
          else if ( (_DWORD)v3 != 39 )
          {
            LODWORD(UserSessionState) = *((_DWORD *)CompositeAppFrameWindowOrSelf + 96);
            if ( (UserSessionState & 2) == 0 )
              return UserSessionState;
          }
        }
        v21 = (unsigned int)Feature_HSHELL_IAM_Delivery__private_featureState;
        if ( (Feature_HSHELL_IAM_Delivery__private_featureState & 0x10) == 0 )
        {
          LODWORD(v21) = Feature_HSHELL_IAM_Delivery__private_featureState | 1;
          wil_details_FeatureReporting_ReportUsageToService(
            &Feature_HSHELL_IAM_Delivery__private_descriptor,
            v21,
            3LL,
            1LL);
          wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
            v21,
            3LL,
            &Feature_HSHELL_IAM_Delivery__private_descriptor);
        }
        LOBYTE(UserSessionState) = Feature_HSHELL_IAM_Delivery__private_GetVariant();
        v15 = UserSessionState;
        if ( (UserSessionState & 3) == 0 )
          goto LABEL_22;
        if ( (UserSessionState & 2) != 0 )
        {
          if ( CompositeAppFrameWindowOrSelf )
            v19 = *(_QWORD *)CompositeAppFrameWindowOrSelf;
          else
            LODWORD(v19) = 0;
          LOBYTE(UserSessionState) = anonymous_namespace_::NotifyShellSimplePayload(v19, 12, v3, 0, 0);
        }
        if ( (v15 & 1) != 0 )
        {
LABEL_22:
          UserSessionState = *(_QWORD *)(a1 + 8);
          v16 = *(_QWORD *)(UserSessionState + 184);
          if ( v16 )
          {
            v17 = W32GetUserSessionState(v14, v13);
            LOBYTE(UserSessionState) = PostMessage(v16, *(unsigned int *)(*(_QWORD *)(v17 + 19904) + 928LL), v3, v4);
          }
        }
      }
    }
  }
  return UserSessionState;
}
