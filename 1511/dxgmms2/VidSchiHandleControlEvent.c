/*
 * XREFs of VidSchiHandleControlEvent @ 0x1C006182C
 * Callers:
 *     VidSchiWaitForSchedulerEvents @ 0x1C003A290 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchFlushAdapter @ 0x1C008B2F0 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSuspend @ 0x1C006186C (VidSchiSuspend.c)
 */

__int64 __fastcall VidSchiHandleControlEvent(__int64 a1)
{
  int v1; // edx
  int v2; // edx
  int v3; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 228);
  if ( *(_DWORD *)(a1 + 224) != v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
          return VidSchiSuspend();
      }
      else
      {
        return VidSchTerminateAdapter((struct _VIDSCH_GLOBAL *)a1);
      }
    }
    else
    {
      return VidSchiResume();
    }
  }
  return result;
}
