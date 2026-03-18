/*
 * XREFs of SeClearLearningModeObjectInformation @ 0x140043230
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x14009A1E4 (RtlpAllowsLowBoxAccess.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
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
