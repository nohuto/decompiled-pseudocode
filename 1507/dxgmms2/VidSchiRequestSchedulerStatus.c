/*
 * XREFs of VidSchiRequestSchedulerStatus @ 0x1C0040E18
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C0040EF0 (VidSchInitializeAdapter.c)
 *     VidSchSuspendAdapter @ 0x1C00795E0 (VidSchSuspendAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C0079880 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x1C0004BA0 (VidSchiGetSchedulerStatus.c)
 */

__int64 __fastcall VidSchiRequestSchedulerStatus(__int64 a1, int a2, int a3)
{
  unsigned int v3; // esi

  v3 = 0;
  if ( a2 != 2 )
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 224), 1u);
  if ( *(_DWORD *)(a1 + 220) != a2 )
  {
    *(_DWORD *)(a1 + 220) = a2;
    *(_QWORD *)(a1 + 1384) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1352), 0, 0);
    if ( a3 )
    {
      *(_QWORD *)(a1 + 1432) = MEMORY[0xFFFFF78000000320];
      KeWaitForSingleObject((PVOID)(a1 + 1408), Executive, 0, 0, 0LL);
      if ( (unsigned int)VidSchiGetSchedulerStatus(a1) != a2 )
        v3 = -1073741823;
    }
  }
  if ( a2 != 2 )
    ExReleaseResourceLite((PERESOURCE)(a1 + 224));
  return v3;
}
