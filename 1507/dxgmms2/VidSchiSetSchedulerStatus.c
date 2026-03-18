/*
 * XREFs of VidSchiSetSchedulerStatus @ 0x1C0044944
 * Callers:
 *     VidSchiWorkerThread @ 0x1C0044840 (VidSchiWorkerThread.c)
 *     VidSchiResume @ 0x1C0076DA4 (VidSchiResume.c)
 *     VidSchiSuspend @ 0x1C00777C0 (VidSchiSuspend.c)
 * Callees:
 *     <none>
 */

LONG __fastcall VidSchiSetSchedulerStatus(__int64 a1, int a2, int a3)
{
  LONG result; // eax

  *(_DWORD *)(a1 + 216) = a2;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 1440) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1408), 0, 0);
  }
  return result;
}
