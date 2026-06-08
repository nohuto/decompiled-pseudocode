/*
 * XREFs of PccInitiateExecuteCallback @ 0x1C0007280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000410C (ProcLibTraceProcessorSpecificEvent.c)
 */

void __fastcall PccInitiateExecuteCallback(int a1, void (*a2)(void))
{
  __int64 v3; // rbx
  char i; // si
  unsigned __int8 *v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rcx
  char v8; // bl
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_1C000E1C0);
    v3 = qword_1C000DD58;
    for ( i = 0; (__int64 *)v3 != &qword_1C000DD58; v3 = *(_QWORD *)v3 )
    {
      v5 = *(unsigned __int8 **)(v3 + 32);
      *(_DWORD *)(v3 + 20) = *v5;
      v6 = v5[1];
      if ( v6 > 0x64 )
        v6 = 100;
      if ( !v6 )
        v6 = 1;
      if ( v6 != *(_DWORD *)(v3 + 40) )
      {
        v7 = *(_QWORD *)(v3 + 48);
        *(_DWORD *)(v3 + 40) = v6;
        v9 = v6;
        i = 1;
        ProcLibTraceProcessorSpecificEvent(v7, (const EVENT_DESCRIPTOR *)L".", 4, (__int64)&v9);
      }
    }
    v8 = 0;
    if ( i )
    {
      LOBYTE(word_1C000E1D4) = 1;
      if ( !HIBYTE(word_1C000E1D4) )
      {
        HIBYTE(word_1C000E1D4) = 1;
        v8 = 1;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_1C000E1C0);
    if ( v8 )
      IoQueueWorkItem(qword_1C000E1C8, (PIO_WORKITEM_ROUTINE)PccCapWorker, CriticalWorkQueue, 0LL);
  }
  if ( a2 )
    a2();
}
