/*
 * XREFs of __report_rangecheckfailure @ 0x18002B588
 * Callers:
 *     ?GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z @ 0x18001C7A0 (-GetGameIdByAUMID@GameConfigStoreServer@ExecutionModel@@UEBAJPEBGPEAU_GUID@@@Z.c)
 *     ?AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z @ 0x180048950 (-AddGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJPEBUGameConfig@2@PEAU_GUID@@@Z.c)
 *     ?GetGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z @ 0x1800492B0 (-GetGameConfig@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@PEAUGameConfig@2@PEAI@Z.c)
 *     ?GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@Z @ 0x180049430 (-GetGameProperty@GameConfigStoreServer@ExecutionModel@@UEBAJU_GUID@@W4GameProperty_t@2@PEAEPEAI@.c)
 *     ?ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z @ 0x18004A370 (-ModifyGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@PEBUGameConfig@2@@Z.c)
 *     ?RemoveGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@@Z @ 0x18004AA70 (-RemoveGameConfig@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@@Z.c)
 *     ?SetGameProperty@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@W4GameProperty_t@2@PEAEI@Z @ 0x18004AF90 (-SetGameProperty@GameConfigStoreServer@ExecutionModel@@UEAAJU_GUID@@W4GameProperty_t@2@PEAEI@Z.c)
 * Callees:
 *     __raise_securityfailure @ 0x18002B3CC (__raise_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  struct _RUNTIME_FUNCTION *FunctionEntry; // [rsp+40h] [rbp-38h]
  DWORD64 ControlPc; // [rsp+48h] [rbp-30h]
  unsigned __int64 ImageBase; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp-20h] BYREF
  PVOID HandlerData; // [rsp+60h] [rbp-18h] BYREF

  RtlCaptureContext(&ContextRecord);
  ControlPc = ContextRecord.Rip;
  FunctionEntry = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( FunctionEntry )
  {
    RtlVirtualUnwind(0, ImageBase, ControlPc, FunctionEntry, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = *(_QWORD *)ContextRecord.Rsp;
    ContextRecord.Rsp += 8LL;
  }
  qword_1800711E0 = ContextRecord.Rip;
  dword_1800711D0 = -1073740791;
  dword_1800711D4 = 1;
  dword_1800711E8 = 1;
  qword_1800711F0[0] = 8LL;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
