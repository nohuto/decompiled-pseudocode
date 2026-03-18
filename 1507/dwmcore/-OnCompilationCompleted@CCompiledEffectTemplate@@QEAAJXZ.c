/*
 * XREFs of ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1801154B8
 * Callers:
 *     _lambda_5783652f0dd56a35b382cf81fdc37911_::_helper_func_cdecl_ @ 0x1800E9660 (_lambda_5783652f0dd56a35b382cf81fdc37911_--_helper_func_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ShouldNotify@CNotificationResource@@IEAA_NXZ @ 0x18005D520 (-ShouldNotify@CNotificationResource@@IEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompiledEffectTemplate::OnCompilationCompleted(CCompiledEffectTemplate *this)
{
  unsigned int v2; // edi
  int v3; // ecx
  __int64 v4; // r10
  int v5; // eax
  __int64 v6; // r10
  int v7; // eax
  int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+54h] [rbp+Ch]

  v2 = 0;
  v3 = *(_DWORD *)(*((_QWORD *)this + 7) + 48LL) - 2;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( (unsigned __int8)CNotificationResource::ShouldNotify(this) )
      {
        v9 = *((_DWORD *)this + 11);
        v10 = *((_DWORD *)this + 10);
        v5 = CoreUICallSend(v4, &v9, 4LL, 1LL, &unk_180162B6A);
        v2 = v5;
        if ( v5 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x79u);
      }
    }
  }
  else if ( (unsigned __int8)CNotificationResource::ShouldNotify(this)
         && (v9 = *((_DWORD *)this + 11),
             v10 = *((_DWORD *)this + 10),
             v7 = CoreUICallSend(v6, &v9, 4LL, 0LL, &unk_180162B68),
             v2 = v7,
             v7 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x6Bu);
  }
  else
  {
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  return v2;
}
