/*
 * XREFs of HvpFaultCellWithClustering @ 0x14002CEC0
 * Callers:
 *     HvpGetCellPaged @ 0x14043EB30 (HvpGetCellPaged.c)
 * Callees:
 *     <none>
 */

char HvpFaultCellWithClustering()
{
  struct _KTHREAD *CurrentThread; // r9
  int v1; // eax
  int Flink; // edx
  unsigned int v3; // r8d
  char result; // al

  CurrentThread = KeGetCurrentThread();
  v1 = BYTE4(CurrentThread[1].Queue);
  Flink = (int)CurrentThread[1].WaitListEntry.Flink;
  BYTE4(CurrentThread[1].Queue) = 2;
  v3 = v1 + 4 * Flink;
  result = v3 & 3;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v3 >> 2;
  BYTE4(CurrentThread[1].Queue) = v3 & 3;
  return result;
}
