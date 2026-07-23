/*
 * XREFs of RtlStringFromGUIDEx @ 0x1403F6D4C
 * Callers:
 *     PopSetNewPolicyValue @ 0x1403F6C58 (PopSetNewPolicyValue.c)
 *     CmpStartRMLog @ 0x1404BE0E4 (CmpStartRMLog.c)
 *     PipGenerateContainerID @ 0x1404CD548 (PipGenerateContainerID.c)
 *     RtlStringFromGUID @ 0x1404D011C (RtlStringFromGUID.c)
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 *     BcdOpenObject @ 0x14053DA8C (BcdOpenObject.c)
 *     BiConvertElementToRegistryData @ 0x14053E864 (BiConvertElementToRegistryData.c)
 *     CmpRecoverEnlistment @ 0x1406050FC (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x14060530C (CmpAddRemoveRMLogContainer.c)
 *     CmpCloneHwProfile @ 0x140607264 (CmpCloneHwProfile.c)
 *     VrpPreLoadKey @ 0x140615DBC (VrpPreLoadKey.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14063BE34 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14063D6D0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E8AC (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x140640334 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x140641444 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140641DE4 (PpDevCfgProcessDeviceReset.c)
 *     ExpCreateOutputSIGNATURE @ 0x1406B07DC (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x1406B28C4 (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x1406D246C (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1406D5F9C (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x1406E3E60 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1403F6F7C (ExpAllocateStringRoutine.c)
 */

NTSTATUS __cdecl RtlStringFromGUIDEx(PGUID Guid, PUNICODE_STRING GuidString, BOOLEAN AllocateGuidString)
{
  wchar_t *StringRoutine; // rax
  unsigned __int64 MaximumLength; // rdx

  if ( AllocateGuidString )
  {
    GuidString->MaximumLength = 78;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(78LL);
    GuidString->Buffer = StringRoutine;
    if ( StringRoutine )
    {
LABEL_3:
      MaximumLength = GuidString->MaximumLength;
      GuidString->Length = 76;
      swprintf_s(
        GuidString->Buffer,
        MaximumLength >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        Guid->Data1,
        Guid->Data2,
        Guid->Data3,
        Guid->Data4[0],
        Guid->Data4[1],
        Guid->Data4[2],
        Guid->Data4[3],
        Guid->Data4[4],
        Guid->Data4[5],
        Guid->Data4[6],
        Guid->Data4[7]);
      return 0;
    }
    return -1073741801;
  }
  else
  {
    if ( GuidString->MaximumLength >= 0x4Eu )
      goto LABEL_3;
    return -1073741789;
  }
}
