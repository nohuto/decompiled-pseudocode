/*
 * XREFs of VidSchiRequestSchedulerStatus @ 0x1C0069BF8
 * Callers:
 *     VidSchSuspendAdapter @ 0x1C00403B0 (VidSchSuspendAdapter.c)
 *     VidSchInitializeAdapter @ 0x1C006B220 (VidSchInitializeAdapter.c)
 *     VidSchFlushAdapter @ 0x1C00A0BE0 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C00A19F0 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x1C0007F28 (VidSchiGetSchedulerStatus.c)
 */

__int64 __fastcall VidSchiRequestSchedulerStatus(__int64 a1, int a2, int a3)
{
  unsigned int v3; // esi

  v3 = 0;
  if ( a2 != 2 )
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 264), 1u);
  if ( *(_DWORD *)(a1 + 260) != a2 )
  {
    *(_DWORD *)(a1 + 260) = a2;
    *(_QWORD *)(a1 + 1424) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1392), 0, 0);
    if ( a3 )
    {
      *(_QWORD *)(a1 + 1472) = MEMORY[0xFFFFF78000000320];
      KeWaitForSingleObject((PVOID)(a1 + 1448), Executive, 0, 0, 0LL);
      if ( (unsigned int)VidSchiGetSchedulerStatus(a1) != a2 )
        v3 = -1073741823;
    }
  }
  if ( a2 != 2 )
    ExReleaseResourceLite((PERESOURCE)(a1 + 264));
  return v3;
}
