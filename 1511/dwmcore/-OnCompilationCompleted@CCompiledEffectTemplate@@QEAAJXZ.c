/*
 * XREFs of ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x18012DEB4
 * Callers:
 *     _lambda_5783652f0dd56a35b382cf81fdc37911_::_helper_func_cdecl_ @ 0x1801055E0 (_lambda_5783652f0dd56a35b382cf81fdc37911_--_helper_func_cdecl_.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEAA_NXZ @ 0x180065004 (-ShouldNotify@CNotificationResource@@IEAA_NXZ.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800852F0 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompiledEffectTemplate::OnCompilationCompleted(CCompiledEffectTemplate *this)
{
  unsigned int v2; // edi
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r10
  int v6; // r8d
  int v7; // eax
  __int64 v8; // r10
  int v9; // eax
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+54h] [rbp+Ch]

  v2 = 0;
  v3 = *(_DWORD *)(*((_QWORD *)this + 7) + 48LL) - 2;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( (unsigned __int8)CNotificationResource::ShouldNotify(this) )
      {
        v6 = *(_DWORD *)(v4 + 72);
        v12 = *((_DWORD *)this + 11);
        v13 = *((_DWORD *)this + 10);
        v7 = CoreUICallSend(v5, &v12, 4LL, 1LL, &unk_18016DC48, v6);
        v2 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x7Bu);
      }
    }
  }
  else if ( (unsigned __int8)CNotificationResource::ShouldNotify(this)
         && (v12 = *((_DWORD *)this + 11),
             v13 = *((_DWORD *)this + 10),
             v9 = CoreUICallSend(v8, &v12, 4LL, 0LL, &unk_18016DC46, v11),
             v2 = v9,
             v9 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x6Du);
  }
  else
  {
    CResource::NotifyOnChanged(this, 0, 0LL);
  }
  return v2;
}
