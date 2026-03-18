/*
 * XREFs of VidSchiResume @ 0x1C0076DA4
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C00768E0 (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1C0044944 (VidSchiSetSchedulerStatus.c)
 */

LONG __fastcall VidSchiResume(__int64 a1)
{
  LONG result; // eax

  result = VidSchiSetSchedulerStatus(a1, 1, 1);
  if ( *(_DWORD *)(a1 + 896) )
  {
    *(_QWORD *)(a1 + 1328) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1296), 0, 0);
  }
  return result;
}
