/*
 * XREFs of IsForegroundLocked @ 0x1401A3D64
 * Callers:
 *     xxxActiveWindowTracking @ 0x14008DA14 (xxxActiveWindowTracking.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x14019328C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1401A3834 (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x14026D7C8 (_anonymous_namespace_--CanSetForegroundWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsForegroundLocked(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v4 = 0;
  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 18896) || *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18888) )
    return 1;
  return v4;
}
