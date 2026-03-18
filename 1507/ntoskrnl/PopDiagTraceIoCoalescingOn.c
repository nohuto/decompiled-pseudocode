/*
 * XREFs of PopDiagTraceIoCoalescingOn @ 0x1406B9864
 * Callers:
 *     PopCoalescingActivate @ 0x1406B5318 (PopCoalescingActivate.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     PopPrintEx @ 0x140131E3C (PopPrintEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceIoCoalescingOn(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al
  REGHANDLE v5; // rbx
  int v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+38h] [rbp-11h] BYREF
  int v8; // [rsp+40h] [rbp-9h] BYREF
  int v9; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  int *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  int *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  int *v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]

  v8 = a4;
  v6 = PopCoalescingFlushInterval;
  v9 = PopCoalescingTimerInterval;
  v7 = PopCurrentCoalescingSpindownTimeout;
  result = PopPrintEx(
             3u,
             "PopCoalescing: ON notification sent (spindown timeout:%u, timer interval: %u, flush delay interval:%u, Enforced:%u)\n",
             PopCurrentCoalescingSpindownTimeout,
             PopCoalescingTimerInterval,
             PopCoalescingFlushInterval,
             a4);
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_IO_COALESCING_ON);
    if ( result )
    {
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 4;
      v11 = &v9;
      v14 = &v6;
      v17 = &v8;
      v12 = 4;
      v15 = 4;
      v18 = 4;
      return EtwWrite(v5, &POP_ETW_IO_COALESCING_ON, 0LL, 4u, &UserData);
    }
  }
  return result;
}
