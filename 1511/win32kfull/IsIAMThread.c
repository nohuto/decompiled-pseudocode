/*
 * XREFs of IsIAMThread @ 0x1C00D5B48
 * Callers:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0001CBC (IsAdaptiveQueueDetachExempted.c)
 *     NtUserSetActivationFilter @ 0x1C000BC60 (NtUserSetActivationFilter.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00D5A10 (_RegisterWindowArrangementCallout.c)
 *     ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01EA160 (-HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIAMThread(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *(_QWORD *)(a1 + 408);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 280) == a1;
  return result;
}
