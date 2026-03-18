/*
 * XREFs of ExpExpirationThread @ 0x14066A6A0
 * Callers:
 *     <none>
 * Callees:
 *     PsTerminateSystemThread @ 0x1404C2D14 (PsTerminateSystemThread.c)
 *     ExRaiseHardError @ 0x140673360 (ExRaiseHardError.c)
 */

void __fastcall ExpExpirationThread(PVOID StartContext)
{
  NTSTATUS v1; // eax
  char v2; // [rsp+40h] [rbp+8h] BYREF

  if ( StartContext )
  {
    v1 = ExRaiseHardError((_DWORD)StartContext, 0, 0, 0, 1, (__int64)&v2);
    PsTerminateSystemThread(v1);
  }
}
