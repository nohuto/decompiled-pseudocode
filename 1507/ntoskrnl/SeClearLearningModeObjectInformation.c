/*
 * XREFs of SeClearLearningModeObjectInformation @ 0x14004E550
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x14012F0C8 (RtlpAllowsLowBoxAccess.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     ObReferenceObjectByName @ 0x1404CF06C (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 */

void SeClearLearningModeObjectInformation()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // ecx
  struct _LIST_ENTRY *Flink; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( KeGetCurrentIrql() )
    v1 = 2;
  else
    v1 = (KeGetCurrentThread()->ApcState.InProgressFlags & 1) != 0;
  Flink = CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
  if ( Flink )
  {
    if ( LODWORD(Flink->Blink) == v1 )
    {
      CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = Flink->Flink;
      if ( Flink[2].Flink )
      {
        if ( Flink[3].Flink )
          RtlFreeAnsiString((PUNICODE_STRING)&Flink[2].Blink);
      }
    }
  }
}
