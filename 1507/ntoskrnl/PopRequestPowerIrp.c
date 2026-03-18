/*
 * XREFs of PopRequestPowerIrp @ 0x140136E74
 * Callers:
 *     PopFxReleasePowerIrp @ 0x140136B3C (PopFxReleasePowerIrp.c)
 *     PoRequestPowerIrp @ 0x140136E4C (PoRequestPowerIrp.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     PopAllocateIrp @ 0x140137024 (PopAllocateIrp.c)
 *     PopQueueQuerySetIrp @ 0x14013733C (PopQueueQuerySetIrp.c)
 *     PopDiagTraceIrpStart @ 0x14013758C (PopDiagTraceIrpStart.c)
 *     PopMapInternalActionToIrpAction @ 0x1401489BC (PopMapInternalActionToIrpAction.c)
 *     IofCallDriverSpecifyReturn @ 0x140159DD8 (IofCallDriverSpecifyReturn.c)
 *     PopPepDeviceWaitWake @ 0x14023B440 (PopPepDeviceWaitWake.c)
 *     PopLogNotifyDevice @ 0x14023CF74 (PopLogNotifyDevice.c)
 */

__int64 __fastcall PopRequestPowerIrp(
        PDEVICE_OBJECT DeviceObject,
        char a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        PIRP Irp)
{
  volatile __int64 *p_Type; // rdi
  char v10; // cl
  __int64 result; // rax
  __int64 v12; // r8
  IRP *v13; // rbx
  __int64 v14; // rsi
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v17; // rdi
  __int64 v18; // rdx
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  __int64 v21; // rdx
  bool v22; // al
  __int64 v23; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]

  p_Type = (volatile __int64 *)&Irp->Type;
  if ( Irp )
    _InterlockedExchange64((volatile __int64 *)&Irp->Type, 0LL);
  Irp = 0LL;
  if ( !a2 )
    goto LABEL_20;
  if ( (unsigned __int8)(a2 - 2) > 1u )
    return 3221225712LL;
  if ( (_BYTE)PopCurrentBroadcast )
    v10 = 1;
  else
LABEL_20:
    v10 = 0;
  result = PopAllocateIrp(DeviceObject, a3, v10, a6, a4, a5, (__int64)&Irp, (__int64)&v23);
  if ( (int)result >= 0 && (_DWORD)result != 259 )
  {
    v13 = Irp;
    if ( Irp )
    {
      v14 = v23;
      p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopRequestCompletion;
      CurrentStackLocation[-1].Context = (PVOID)v14;
      CurrentStackLocation[-1].Control = -32;
      if ( p_Type )
      {
        _InterlockedExchange64(p_Type, (__int64)v13);
        v13 = Irp;
        v14 = v23;
      }
      v17 = p_CurrentStackLocation->CurrentStackLocation;
      if ( a2 )
      {
        v17[-1].Parameters.Create.Options = 1;
        v17[-1].Parameters.Read.ByteOffset.LowPart = a3;
        v17[-1].Parameters.Read.Length = HIDWORD(PopCurrentBroadcast);
        if ( (_BYTE)PopCurrentBroadcast )
        {
          LOBYTE(v12) = 1;
          v17[-1].Parameters.Create.EaLength = PopMapInternalActionToIrpAction(
                                                 (unsigned int)qword_14032E1E8,
                                                 WORD2(PopCurrentBroadcast) >> 12,
                                                 v12);
        }
        if ( (xmmword_1403D1290 & 0x8000) != 0 )
          PopLogNotifyDevice(DeviceObject, 0LL, v13);
        PopQueueQuerySetIrp(v13);
      }
      else
      {
        v18 = *(_QWORD *)(v14 + 200);
        if ( v18 )
        {
          _m_prefetchw((const void *)(v18 + 32));
          v19 = *(_DWORD *)(v18 + 32);
          do
          {
            v20 = v19;
            v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 32), v19, v19);
          }
          while ( v20 != v19 );
          v21 = v23;
          *(_BYTE *)(v23 + 208) = v19 & 1;
          v22 = (v19 & 1) == 0;
          *(_BYTE *)(v21 + 209) = v22;
          p_CurrentStackLocation = *(union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 **)(v14 + 200);
          if ( v22 )
          {
            PopPepDeviceWaitWake(p_CurrentStackLocation[7].CurrentStackLocation, 0LL);
          }
          else
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_CurrentStackLocation[26] + 1, 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)&p_CurrentStackLocation[27], 0, 0);
            *(_QWORD *)(v14 + 200) = 0LL;
          }
          v13 = Irp;
        }
        v17[-1].Parameters.Read.Length = a3;
        PopDiagTraceIrpStart(p_CurrentStackLocation, v13);
        IofCallDriverSpecifyReturn(v17[-1].DeviceObject, v13, retaddr);
      }
      return 259LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
