/*
 * XREFs of ?DxgkConvertStringToWideString@@YAJPEAD_KPEAG@Z @ 0x1C00B0720
 * Callers:
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00981D8 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEAAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C00BA7FC (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C00C9BCC (-_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkConvertStringToWideString(
        PCSZ SourceString,
        unsigned __int64 a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  unsigned __int16 v5; // di
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _UNICODE_STRING v14; // [rsp+20h] [rbp-28h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v5 = a2;
  if ( a2 < 2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(SourceString, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(SourceString, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  RtlInitAnsiString(&DestinationString, SourceString);
  *a3 = 0;
  v14.Length = 0;
  v14.MaximumLength = v5;
  v14.Buffer = a3;
  v7 = RtlAnsiStringToUnicodeString(&v14, &DestinationString, 0);
  v9 = v7;
  if ( v7 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v13 + 24) = v9;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v9;
}
