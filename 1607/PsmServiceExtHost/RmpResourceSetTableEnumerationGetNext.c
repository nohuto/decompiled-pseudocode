/*
 * XREFs of RmpResourceSetTableEnumerationGetNext @ 0x18002E6CC
 * Callers:
 *     ?Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z @ 0x1800293D0 (-Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z.c)
 * Callees:
 *     RmpObjectTableEnumerationGetNext @ 0x1800352C0 (RmpObjectTableEnumerationGetNext.c)
 */

__int64 __fastcall RmpResourceSetTableEnumerationGetNext(__int64 a1)
{
  return RmpObjectTableEnumerationGetNext(a1);
}
