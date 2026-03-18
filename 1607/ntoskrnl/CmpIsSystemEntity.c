/*
 * XREFs of CmpIsSystemEntity @ 0x14040F144
 * Callers:
 *     CmQueryLayeredKey @ 0x1401B3DE4 (CmQueryLayeredKey.c)
 *     NtDeleteValueKey @ 0x1403FA9B8 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403FBA58 (NtDeleteKey.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     NtSetValueKey @ 0x140403098 (NtSetValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140438760 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmQueryKey @ 0x14043A810 (CmQueryKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1404402B0 (CmpVEExecuteOpenLogic.c)
 *     CmpVEExecuteCreateLogic @ 0x1404D91F4 (CmpVEExecuteCreateLogic.c)
 *     CmpVEPerformOpenAccessCheck @ 0x1404DB888 (CmpVEPerformOpenAccessCheck.c)
 *     NtSetInformationKey @ 0x14050FD50 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1405F9DF0 (NtRenameKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFE48 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140600020 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmpIsVirtEnabled @ 0x14040F1C8 (CmpIsVirtEnabled.c)
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
