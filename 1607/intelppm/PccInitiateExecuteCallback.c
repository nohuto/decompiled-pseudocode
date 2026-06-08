/*
 * XREFs of PccInitiateExecuteCallback @ 0x1C0007EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0004498 (ProcLibTraceProcessorSpecificEvent.c)
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
      qword_1C000F208);
    v3 = qword_1C000ED48;
    for ( i = 0; (__int64 *)v3 != &qword_1C000ED48; v3 = *(_QWORD *)v3 )
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
        v7 = *(_QWORD *)(v3 - 8);
        *(_DWORD *)(v3 + 40) = v6;
        v9 = v6;
        i = 1;
        ProcLibTraceProcessorSpecificEvent(v7, &PPM_ETW_PCC_CAP_CHANGE, 4, (__int64)&v9);
      }
    }
    v8 = 0;
    if ( i )
    {
      LOBYTE(word_1C000F21C) = 1;
      if ( !HIBYTE(word_1C000F21C) )
      {
        HIBYTE(word_1C000F21C) = 1;
        v8 = 1;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_1C000F208);
    if ( v8 )
      IoQueueWorkItem(qword_1C000F210, (PIO_WORKITEM_ROUTINE)PccCapWorker, CriticalWorkQueue, 0LL);
  }
  if ( a2 )
    a2();
}
