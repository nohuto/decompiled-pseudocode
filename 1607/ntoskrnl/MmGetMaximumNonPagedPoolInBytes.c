/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x140087454
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x140493BB0 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x1406AD4DC (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_1403278A0 << 12;
}
