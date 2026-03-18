/*
 * XREFs of NtUserQuerySendMessage @ 0x1402B9450
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_Servicing_NtUserQuerySendMessageTelemetry__private_IsEnabledDeviceUsageNoInline @ 0x1402AF24C (Feature_Servicing_NtUserQuerySendMessageTelemetry__private_IsEnabledDeviceUsageNoInline.c)
 *     _QuerySendMessage @ 0x1402CE1EC (_QuerySendMessage.c)
 */

__int64 __fastcall NtUserQuerySendMessage(_OWORD *a1)
{
  ULONG64 v2; // rcx
  int v3; // edi
  __int64 v4; // rbx
  __int128 v6; // [rsp+28h] [rbp-40h] BYREF
  __int128 v7; // [rsp+38h] [rbp-30h]
  __int128 v8; // [rsp+48h] [rbp-20h]
  ULONG64 v9; // [rsp+78h] [rbp+10h] BYREF

  if ( (unsigned int)Feature_Servicing_NtUserQuerySendMessageTelemetry__private_IsEnabledDeviceUsageNoInline() )
  {
    LODWORD(v9) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 9877);
  }
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  v2 = v9;
  if ( *(_QWORD *)(v9 + 544) )
  {
    v3 = QuerySendMessage(v9, &v6);
    if ( v3 && a1 )
    {
      v4 = *((_QWORD *)&v7 + 1);
      if ( (unsigned __int8)MmIsKernelAddress(*((_QWORD *)&v7 + 1)) )
        v4 = 0LL;
      *((_QWORD *)&v7 + 1) = v4;
      HIDWORD(v6) = 0;
      HIDWORD(v8) = 0;
      v2 = MmUserProbeAddress;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (_OWORD *)MmUserProbeAddress;
      *a1 = v6;
      a1[1] = v7;
      a1[2] = v8;
    }
  }
  else
  {
    v3 = 0;
  }
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
