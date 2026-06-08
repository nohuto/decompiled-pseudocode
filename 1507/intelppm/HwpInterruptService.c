/*
 * XREFs of HwpInterruptService @ 0x1C0003050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char HwpInterruptService()
{
  unsigned __int64 v0; // rax

  v0 = __readmsr(0x777u);
  __writemsr(0x777u, v0 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v0 & 1) != 0 )
    KeInsertQueueDpc(
      (PRKDPC)(*(_QWORD *)(*(_QWORD *)(DevExts + 8LL * KeGetPcr()->Prcb.Number) + 224LL) + 248LL),
      0LL,
      0LL);
  return 1;
}
