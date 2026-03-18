/*
 * XREFs of VidSchiHandleControlEvent @ 0x1C006894C
 * Callers:
 *     VidSchiWaitForSchedulerEvents @ 0x1C00433D0 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchFlushAdapter @ 0x1C00A0BE0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSuspend @ 0x1C00689A8 (VidSchiSuspend.c)
 *     VidSchiSetSchedulerStatus @ 0x1C00689EC (VidSchiSetSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00A0BE0 (VidSchFlushAdapter.c)
 */

LONG __fastcall VidSchiHandleControlEvent(__int64 a1)
{
  int v1; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  LONG result; // eax

  v1 = *(_DWORD *)(a1 + 260);
  if ( *(_DWORD *)(a1 + 256) != v1 )
  {
    v3 = v1 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 == 1 )
          {
            *(_DWORD *)(a1 + 2800) = 3;
            VidSchFlushAdapter((struct _VIDSCH_GLOBAL *)a1);
            return VidSchiSetSchedulerStatus(a1, 4LL, 1LL);
          }
        }
        else
        {
          return VidSchiSuspend();
        }
      }
      else
      {
        return VidSchTerminateAdapter((struct _VIDSCH_GLOBAL *)a1);
      }
    }
    else
    {
      result = VidSchiSetSchedulerStatus(a1, 1LL, 1LL);
      if ( *(_DWORD *)(a1 + 940) )
      {
        *(_QWORD *)(a1 + 1368) = MEMORY[0xFFFFF78000000320];
        return KeSetEvent((PRKEVENT)(a1 + 1336), 0, 0);
      }
    }
  }
  return result;
}
