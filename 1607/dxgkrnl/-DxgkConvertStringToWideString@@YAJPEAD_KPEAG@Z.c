/*
 * XREFs of ?DxgkConvertStringToWideString@@YAJPEAD_KPEAG@Z @ 0x1C00D9A58
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C007AF90 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C007B50C (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C00F1D0C (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkConvertStringToWideString(PCSZ SourceString, unsigned __int64 a2, unsigned __int16 *a3)
{
  unsigned __int16 v4; // di
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  struct _UNICODE_STRING v13; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  if ( a2 < 2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(SourceString);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(SourceString);
    WdLogEvent5_WdAssertion(v11);
  }
  RtlInitAnsiString(&DestinationString, SourceString);
  *a3 = 0;
  v13.Length = 0;
  v13.MaximumLength = v4;
  v13.Buffer = a3;
  v6 = RtlAnsiStringToUnicodeString(&v13, &DestinationString, 0);
  v8 = v6;
  if ( v6 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v12 + 24) = v8;
    WdLogEvent5_WdError(v12);
  }
  return (unsigned int)v8;
}
