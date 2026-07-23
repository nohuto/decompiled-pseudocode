/*
 * XREFs of CmpIsSystemEntity @ 0x14040E004
 * Callers:
 *     CmQueryLayeredKey @ 0x1401B3CC8 (CmQueryLayeredKey.c)
 *     NtDeleteValueKey @ 0x1403F9878 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403FA918 (NtDeleteKey.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140437630 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 *     CmpVEExecuteOpenLogic @ 0x14043F180 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteCreateLogic @ 0x1404BC7F8 (CmpVEExecuteCreateLogic.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1404BEE8C (CmpVEPerformOpenAccessCheck.c)
 *     NtSetInformationKey @ 0x1404F2CE0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1405F9EA4 (NtRenameKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFEFC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmpIsVirtEnabled @ 0x14040E088 (CmpIsVirtEnabled.c)
 */

bool __fastcall CmpIsSystemEntity(int *a1)
{
  bool v2; // di
  int v3; // eax
  int v4; // eax

  v2 = 1;
  if ( !CmpVEEnabled )
    return 1;
  if ( a1 && (*a1 & 1) != 0 )
    return (*a1 & 2) != 0;
  if ( KeGetCurrentThread()->PreviousMode )
    v2 = (unsigned __int8)CmpIsVirtEnabled() == 0;
  if ( a1 )
  {
    *a1 |= 1u;
    v3 = *a1;
    if ( v2 )
      v4 = v3 | 2;
    else
      v4 = v3 | 4;
    *a1 = v4;
  }
  return v2;
}
