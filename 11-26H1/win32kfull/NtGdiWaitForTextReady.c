/*
 * XREFs of NtGdiWaitForTextReady @ 0x140259D10
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x1400C6130 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 */

_BOOL8 __fastcall NtGdiWaitForTextReady(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  int v4; // ebx
  ULONG v6; // eax

  v3 = UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(a1, a2, a3);
  v4 = v3;
  if ( v3 < 0 )
  {
    v6 = RtlNtStatusToDosError(v3);
    EngSetLastError(v6);
  }
  return v4 >= 0;
}
