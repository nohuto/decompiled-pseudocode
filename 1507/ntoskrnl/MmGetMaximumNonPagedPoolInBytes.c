/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x140075558
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1404ACDE0 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x1406EFFA0 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_14034FC60 << 12;
}
