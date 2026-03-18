/*
 * XREFs of IovInitializeTimer @ 0x1406B51D4
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

NTSTATUS __fastcall IovInitializeTimer(struct _DEVICE_OBJECT *BugCheckParameter2, IO_TIMER_ROUTINE *a2, void *a3)
{
  if ( BugCheckParameter2->Timer )
    KeBugCheckEx(0xC9u, 0xAuLL, (ULONG_PTR)BugCheckParameter2, 0LL, 0LL);
  return pXdvIoInitializeTimer(BugCheckParameter2, a2, a3);
}
