/*
 * XREFs of VidSchiSetSchedulerStatus @ 0x1C0061900
 * Callers:
 *     VidSchiSuspend @ 0x1C006186C (VidSchiSuspend.c)
 *     VidSchiResume @ 0x1C00618B0 (VidSchiResume.c)
 *     VidSchiWorkerThread @ 0x1C006A780 (VidSchiWorkerThread.c)
 * Callees:
 *     <none>
 */

LONG __fastcall VidSchiSetSchedulerStatus(__int64 a1, int a2, int a3)
{
  LONG result; // eax

  *(_DWORD *)(a1 + 224) = a2;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 1448) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1416), 0, 0);
  }
  return result;
}
