/*
 * XREFs of VidSchiResume @ 0x1C00618B0
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C006182C (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1C0061900 (VidSchiSetSchedulerStatus.c)
 */

LONG __fastcall VidSchiResume(__int64 a1)
{
  LONG result; // eax

  result = VidSchiSetSchedulerStatus(a1, 1LL, 1LL);
  if ( *(_DWORD *)(a1 + 904) )
  {
    *(_QWORD *)(a1 + 1336) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1304), 0, 0);
  }
  return result;
}
