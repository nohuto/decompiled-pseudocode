/*
 * XREFs of ESM_RunStateMachine @ 0x1C003A2B8
 * Callers:
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 *     ESM_SmWorker @ 0x1C003A540 (ESM_SmWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0039AC8 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     ESM_FindAndSetTargetState @ 0x1C0039E68 (ESM_FindAndSetTargetState.c)
 *     ESM_GetNextEvent @ 0x1C003A0BC (ESM_GetNextEvent.c)
 */

KIRQL __fastcall ESM_RunStateMachine(unsigned __int8 *Context, int a2, KIRQL *a3)
{
  __int64 v3; // r15
  int v5; // r12d
  unsigned int NextEvent; // edi
  KIRQL result; // al
  unsigned __int8 v10; // r9
  char v11; // r10
  unsigned __int8 v12; // r8
  KIRQL v13; // r11
  unsigned __int8 v14; // dl
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  PWDF_DRIVER_GLOBALS v18; // rcx
  __int64 v19; // rax
  char v20; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_QWORD *)Context + 121);
  v5 = *((_DWORD *)Context + 244);
  while ( 1 )
  {
    if ( a2 == 1000 )
    {
      NextEvent = ESM_GetNextEvent((__int64)Context);
      if ( NextEvent == 1000 )
      {
        v16 = WdfFunctions_01015;
        v17 = *((_QWORD *)Context + 120);
        v18 = WdfDriverGlobals;
        Context[848] = 0;
        v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v16 + 1632))(v18, v17);
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
                 WdfDriverGlobals,
                 v19,
                 "State Machine Tag",
                 1055LL,
                 "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
      }
      KeReleaseSpinLock((PKSPIN_LOCK)Context + 105, *a3);
      *a3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
    }
    else
    {
      NextEvent = a2;
      a2 = 1000;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 105, *a3);
    if ( !ESM_FindAndSetTargetState((__int64)Context, NextEvent, &v20) )
      goto LABEL_24;
    if ( v20 )
    {
      v20 = 0;
      if ( NextEvent != 126
        && !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2560))(
              WdfDriverGlobals,
              *((_QWORD *)Context + 126),
              0LL) )
      {
        result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
        v10 = Context[948];
        v11 = 0;
        v12 = Context[949];
        v13 = result;
        *a3 = result;
        v14 = v10;
        if ( v10 != v12 )
        {
          while ( *(_DWORD *)&Context[4 * v14 + 884] != 126 )
          {
            v14 = (v14 + 1) & 0xF;
            if ( v14 == v12 )
              goto LABEL_15;
          }
          v11 = 1;
        }
LABEL_15:
        if ( v14 != v12 )
        {
          if ( v14 != v10 )
          {
            do
            {
              v15 = v14;
              v14 = (v14 - 1) & 0xF;
              *(_DWORD *)&Context[4 * v15 + 884] = *(_DWORD *)&Context[4 * v14 + 884];
            }
            while ( v14 != Context[948] );
          }
          *(_DWORD *)&Context[4 * Context[948] + 884] = 1000;
          result = (Context[948] + 1) & 0xF;
          Context[948] = result;
        }
        if ( !v11 )
        {
          Context[1016] = 1;
          return result;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)Context + 105, v13);
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v3
                                + 8LL
                                * (unsigned int)(*(_DWORD *)&Context[4 * *((unsigned int *)Context + 220) + 852] - v5))
                    + 16LL) & 0x10) != 0
      && KeGetCurrentIrql() )
    {
      break;
    }
    a2 = ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState((unsigned int *)Context);
    if ( a2 == 1003 )
      goto LABEL_28;
LABEL_24:
    *a3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
  }
  IoQueueWorkItem(*((PIO_WORKITEM *)Context + 123), ESM_SmWorker, DelayedWorkQueue, Context);
LABEL_28:
  result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
  *a3 = result;
  return result;
}
