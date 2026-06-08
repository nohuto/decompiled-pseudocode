/*
 * XREFs of PepUpdateIdleState @ 0x1C000704C
 * Callers:
 *     PepDevicePowerControlCallback @ 0x1C0007750 (PepDevicePowerControlCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepUpdateIdleState(__int64 a1, unsigned int *a2)
{
  _DWORD *v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _IO_WORKITEM *v8; // rcx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C000ED00,
    0LL);
  v4 = *(_DWORD **)(a1 + 1096);
  v5 = 0;
  if ( v4 )
  {
    v6 = *a2;
    if ( (unsigned int)v6 < *v4 )
    {
      v7 = 3 * v6;
      v4[v7 + 2] = a2[1];
      v4[v7 + 3] = a2[2];
      if ( !*(_BYTE *)(a1 + 1120) && !*(_BYTE *)(a1 + 1121) )
      {
        v8 = *(struct _IO_WORKITEM **)(a1 + 1112);
        *(_WORD *)(a1 + 1120) = 257;
        IoQueueWorkItem(v8, PepUpdateIdleStateWorker, DelayedWorkQueue, 0LL);
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  else
  {
    v5 = -1073741436;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C000ED00);
  return v5;
}
