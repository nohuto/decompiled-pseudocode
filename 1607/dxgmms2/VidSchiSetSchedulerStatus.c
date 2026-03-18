/*
 * XREFs of VidSchiSetSchedulerStatus @ 0x1C00689EC
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C006894C (VidSchiHandleControlEvent.c)
 *     VidSchiSuspend @ 0x1C00689A8 (VidSchiSuspend.c)
 *     VidSchiWorkerThread @ 0x1C006ABB0 (VidSchiWorkerThread.c)
 * Callees:
 *     <none>
 */

LONG __fastcall VidSchiSetSchedulerStatus(__int64 a1, int a2, int a3)
{
  LONG result; // eax

  *(_DWORD *)(a1 + 256) = a2;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 1480) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1448), 0, 0);
  }
  return result;
}
