/*
 * XREFs of VidSchiRequestSchedulerStatus @ 0x1C0061F4C
 * Callers:
 *     VidSchSuspendAdapter @ 0x1C005FD40 (VidSchSuspendAdapter.c)
 *     VidSchInitializeAdapter @ 0x1C0063290 (VidSchInitializeAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C008C0D0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x1C000AD90 (VidSchiGetSchedulerStatus.c)
 */

__int64 __fastcall VidSchiRequestSchedulerStatus(__int64 a1, int a2, int a3)
{
  unsigned int v3; // esi

  v3 = 0;
  if ( a2 != 2 )
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 232), 1u);
  if ( *(_DWORD *)(a1 + 228) != a2 )
  {
    *(_DWORD *)(a1 + 228) = a2;
    *(_QWORD *)(a1 + 1392) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1360), 0, 0);
    if ( a3 )
    {
      *(_QWORD *)(a1 + 1440) = MEMORY[0xFFFFF78000000320];
      KeWaitForSingleObject((PVOID)(a1 + 1416), Executive, 0, 0, 0LL);
      if ( (unsigned int)VidSchiGetSchedulerStatus(a1) != a2 )
        v3 = -1073741823;
    }
  }
  if ( a2 != 2 )
    ExReleaseResourceLite((PERESOURCE)(a1 + 232));
  return v3;
}
