/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1400F47D8
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1404CB394 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x14066C82C (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_1402FF7A0 << 12;
}
