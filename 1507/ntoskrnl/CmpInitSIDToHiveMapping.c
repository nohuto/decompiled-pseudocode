/*
 * XREFs of CmpInitSIDToHiveMapping @ 0x1405A27A4
 * Callers:
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

void CmpInitSIDToHiveMapping()
{
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&CmpSIDMappingLock);
}
