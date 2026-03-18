/*
 * XREFs of NtGdiDdDDISetHwProtectionTeardownRecovery @ 0x1C00C4770
 * Callers:
 *     <none>
 * Callees:
 *     DCompositionForceRender @ 0x1C00E3140 (DCompositionForceRender.c)
 */

__int64 __fastcall NtGdiDdDDISetHwProtectionTeardownRecovery(_QWORD *a1)
{
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    a1 = (_QWORD *)W32UserProbeAddress;
  return DCompositionForceRender(0LL, 1LL, HIDWORD(*a1) == 0);
}
