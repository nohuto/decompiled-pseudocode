/*
 * XREFs of ?ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z @ 0x1C005C090
 * Callers:
 *     NdisMDeregisterInterrupt @ 0x1C00CD5B0 (NdisMDeregisterInterrupt.c)
 *     NdisMDeregisterInterruptEx @ 0x1C00EEFE0 (NdisMDeregisterInterruptEx.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisWaitForDpcCompletion(volatile int *a1, volatile unsigned __int8 *a2, struct _KEVENT *a3)
{
  int i; // eax
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = -10000000LL;
  *a2 = 1;
  _InterlockedOr(v6, 0);
  for ( i = *a1; i > 0; i = *a1 )
    KeWaitForSingleObject(a3, Executive, 0, 0, &Timeout);
}
