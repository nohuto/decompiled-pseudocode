/*
 * XREFs of RtlStringFromGUIDEx @ 0x1404FFEB8
 * Callers:
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     PopSetNewPolicyValue @ 0x1404FFD24 (PopSetNewPolicyValue.c)
 *     PipGenerateContainerID @ 0x140554BA8 (PipGenerateContainerID.c)
 *     RtlStringFromGUID @ 0x140557AF4 (RtlStringFromGUID.c)
 *     BcdOpenObject @ 0x14056F6CC (BcdOpenObject.c)
 *     BiConvertElementToRegistryData @ 0x140570370 (BiConvertElementToRegistryData.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140587FA4 (PiDevCfgQueryDriverConfiguration.c)
 *     PpDevCfgProcessDeviceClass @ 0x140589730 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140589A64 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140589C68 (PiDevCfgResetDeviceDriverSettings.c)
 *     CmpStartRMLog @ 0x1405B8B98 (CmpStartRMLog.c)
 *     CmpRecoverEnlistment @ 0x14065CBDC (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x14065CDC8 (CmpAddRemoveRMLogContainer.c)
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14068A004 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14068BD84 (PiDevCfgResolveVariableGenerateGuid.c)
 *     ExpCreateOutputSIGNATURE @ 0x1406F1298 (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x1406F3630 (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x14070D5EC (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140711178 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x14071D79C (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x1407B6E78 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x140176650 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlStringFromGUIDEx(unsigned int *a1, __int64 a2, char a3)
{
  __int64 StringRoutine; // rax
  unsigned __int64 v6; // rdx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    StringRoutine = ExpAllocateStringRoutine(78LL);
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
