/*
 * XREFs of HvpFaultCellWithClustering @ 0x1400CA7F0
 * Callers:
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     HvpGetCellPaged @ 0x1404C2850 (HvpGetCellPaged.c)
 * Callees:
 *     <none>
 */

char HvpFaultCellWithClustering()
{
  struct _KTHREAD *CurrentThread; // r9
  int Teb_low; // eax
  int Flink; // edx
  unsigned int v3; // r8d
  char result; // al

  CurrentThread = KeGetCurrentThread();
  Teb_low = LOBYTE(CurrentThread[1].Teb);
  Flink = (int)CurrentThread[1].WaitListEntry.Flink;
  LOBYTE(CurrentThread[1].Teb) = 2;
  v3 = Teb_low + 4 * Flink;
  result = v3 & 3;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v3 >> 2;
  LOBYTE(CurrentThread[1].Teb) = v3 & 3;
  return result;
}
