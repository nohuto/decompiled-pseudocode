/*
 * XREFs of NtWaitForAlertByThreadId @ 0x140524314
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForAlertByThreadId @ 0x14010BF10 (KeWaitForAlertByThreadId.c)
 */

__int64 __fastcall NtWaitForAlertByThreadId(void *a1, __int64 *a2)
{
  char PreviousMode; // cl
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a2 && PreviousMode )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v5 = *a2;
    a2 = &v5;
  }
  return KeWaitForAlertByThreadId(PreviousMode, (__int64)a2, a1);
}
