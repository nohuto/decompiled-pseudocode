/*
 * XREFs of _DllMainStartup @ 0x180060AA0
 * Callers:
 *     <none>
 * Callees:
 *     AvCreateProcessHeap @ 0x18009741C (AvCreateProcessHeap.c)
 *     _DllMainCRTStartup @ 0x180098CE8 (_DllMainCRTStartup.c)
 *     AvDestroyProcessHeap @ 0x180128D14 (AvDestroyProcessHeap.c)
 */

BOOL __stdcall DllMainStartup(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  HINSTANCE v3; // rsi
  int v4; // ebx

  v3 = hinstDLL;
  v4 = 1;
  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      ++avalonutil_proc_attached;
      if ( (int)AvCreateProcessHeap() < 0 )
        return 0;
      fdwReason = 1;
      hinstDLL = v3;
    }
    else if ( fdwReason - 2 > 1 )
    {
      return v4;
    }
    return DllMainCRTStartup(hinstDLL, fdwReason);
  }
  if ( !g_fAlwaysDetach && lpReserved )
    return v4;
  if ( avalonutil_proc_attached > 0 )
  {
    --avalonutil_proc_attached;
    v4 = DllMainCRTStartup(hinstDLL, 0);
    if ( (int)AvDestroyProcessHeap() < 0 )
      return 0;
    return v4;
  }
  return 0;
}
