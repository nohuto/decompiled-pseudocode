/*
 * XREFs of RtlStringFromGUIDEx @ 0x140447328
 * Callers:
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     PopSetNewPolicyValue @ 0x140448E50 (PopSetNewPolicyValue.c)
 *     RtlStringFromGUID @ 0x1404C2A1C (RtlStringFromGUID.c)
 *     PipGenerateContainerID @ 0x1404EC9C4 (PipGenerateContainerID.c)
 *     BcdOpenObject @ 0x1404FCC2C (BcdOpenObject.c)
 *     BiConvertElementToRegistryData @ 0x1404FD8D0 (BiConvertElementToRegistryData.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405113A0 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140515AA0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     CmpStartRMLog @ 0x140542840 (CmpStartRMLog.c)
 *     CmpRecoverEnlistment @ 0x1405E5AF8 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x1405E5CE4 (CmpAddRemoveRMLogContainer.c)
 *     CmpCloneHwProfile @ 0x1405E7AA0 (CmpCloneHwProfile.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140609F54 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14060C1C8 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x14060CF64 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14060D8F8 (PpDevCfgProcessDeviceReset.c)
 *     ExpCreateOutputSIGNATURE @ 0x14066D98C (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x14066FA84 (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x14068DAD4 (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140691660 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x14069D140 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x14074FA48 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x1401485D0 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x140447224 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  PVOID StringRoutine; // rax
  unsigned __int64 v6; // rdx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    StringRoutine = ExpAllocateStringRoutine(0x4EuLL);
    *(_QWORD *)(a2 + 8) = StringRoutine;
    if ( StringRoutine )
    {
LABEL_3:
      v6 = *(unsigned __int16 *)(a2 + 2);
      *(_WORD *)a2 = 76;
      swprintf_s(
        *(wchar_t **)(a2 + 8),
        v6 >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *a1,
        *((unsigned __int16 *)a1 + 2),
        *((unsigned __int16 *)a1 + 3),
        *((unsigned __int8 *)a1 + 8),
        *((unsigned __int8 *)a1 + 9),
        *((unsigned __int8 *)a1 + 10),
        *((unsigned __int8 *)a1 + 11),
        *((unsigned __int8 *)a1 + 12),
        *((unsigned __int8 *)a1 + 13),
        *((unsigned __int8 *)a1 + 14),
        *((unsigned __int8 *)a1 + 15));
      return 0LL;
    }
    return 3221225495LL;
  }
  else
  {
    if ( *(_WORD *)(a2 + 2) >= 0x4Eu )
      goto LABEL_3;
    return 3221225507LL;
  }
}
