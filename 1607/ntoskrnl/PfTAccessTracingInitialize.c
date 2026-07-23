/*
 * XREFs of PfTAccessTracingInitialize @ 0x1403C838C
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     PfTInitialize @ 0x140571E44 (PfTInitialize.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 */

void __fastcall PfTAccessTracingInitialize(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 12) = 3;
  }
  *(_DWORD *)(a2 + 40) = 0;
  if ( a3 )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 8), 0LL);
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    InitializeSListHead((PSLIST_HEADER)(a2 + 64));
    KeInitializeEvent((PRKEVENT)(a2 + 16), NotificationEvent, 0);
  }
}
