/*
 * XREFs of RtlStringFromGUIDEx @ 0x1403F7E8C
 * Callers:
 *     PopSetNewPolicyValue @ 0x1403F7D98 (PopSetNewPolicyValue.c)
 *     CmpInitCmRM @ 0x14049EB58 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x1404DAAE0 (CmpStartRMLog.c)
 *     PipGenerateContainerID @ 0x1404EB3C4 (PipGenerateContainerID.c)
 *     RtlStringFromGUID @ 0x1404EE054 (RtlStringFromGUID.c)
 *     BcdOpenObject @ 0x14053D54C (BcdOpenObject.c)
 *     BiConvertElementToRegistryData @ 0x14053E324 (BiConvertElementToRegistryData.c)
 *     CmpRecoverEnlistment @ 0x140605048 (CmpRecoverEnlistment.c)
 *     CmpAddRemoveRMLogContainer @ 0x140605258 (CmpAddRemoveRMLogContainer.c)
 *     CmpCloneHwProfile @ 0x1406071B0 (CmpCloneHwProfile.c)
 *     VrpPreLoadKey @ 0x140615D08 (VrpPreLoadKey.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14063BD80 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14063D61C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E7C8 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x140640250 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PpDevCfgProcessDeviceClass @ 0x140641360 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140641D00 (PpDevCfgProcessDeviceReset.c)
 *     ExpCreateOutputSIGNATURE @ 0x1406B06A4 (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateEfiPath @ 0x1406B278C (ExpTranslateEfiPath.c)
 *     BiCreateObject @ 0x1406D2334 (BiCreateObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1406D5E64 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ConvertDevpropcompkeyToString @ 0x1406E3D28 (ConvertDevpropcompkeyToString.c)
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 * Callees:
 *     swprintf_s @ 0x140151960 (swprintf_s.c)
 *     ExpAllocateStringRoutine @ 0x1403F80BC (ExpAllocateStringRoutine.c)
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
