/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x140085B64
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x140493120 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x1406AD3A4 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140327860 << 12;
}
