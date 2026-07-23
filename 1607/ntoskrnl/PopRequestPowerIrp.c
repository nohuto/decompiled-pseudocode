/*
 * XREFs of PopRequestPowerIrp @ 0x14012B108
 * Callers:
 *     PoRequestPowerIrp @ 0x14012B0E0 (PoRequestPowerIrp.c)
 *     PopFxReleasePowerIrp @ 0x14012BFB8 (PopFxReleasePowerIrp.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x14009D57C (IoReleaseRemoveLockEx.c)
 *     PopMapInternalActionToIrpAction @ 0x140114A60 (PopMapInternalActionToIrpAction.c)
 *     PopAllocateIrp @ 0x14012B2F0 (PopAllocateIrp.c)
 *     PopQueueQuerySetIrp @ 0x14012B5D8 (PopQueueQuerySetIrp.c)
 *     PopDiagTraceIrpStart @ 0x14012B830 (PopDiagTraceIrpStart.c)
 *     IofCallDriverSpecifyReturn @ 0x14012BAEC (IofCallDriverSpecifyReturn.c)
 *     PopPepDeviceWaitWake @ 0x14012C8A8 (PopPepDeviceWaitWake.c)
 *     PopLogNotifyDevice @ 0x1402071F4 (PopLogNotifyDevice.c)
 */

__int64 __fastcall PopRequestPowerIrp(__int64 a1, char a2, int a3, int a4, __int64 a5, char a6, PIRP Irp)
{
  volatile __int64 *p_Type; // rdi
  char v10; // cl
  __int64 result; // rax
  IRP *v12; // rbx
  __int64 v13; // rsi
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v16; // rdi
  __int64 v17; // rdx
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  __int64 v20; // rdx
  bool v21; // al
  __int64 v22; // rcx
  __int64 v23; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+18h]

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
  result = PopAllocateIrp(a1, a3, v10, a6, a4, a5, (__int64)&Irp, (__int64)&v23);
  if ( (int)result >= 0 && (_DWORD)result != 259 )
  {
    v12 = Irp;
    if ( Irp )
    {
      v13 = v23;
      p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopRequestCompletion;
      CurrentStackLocation[-1].Context = (PVOID)v13;
      CurrentStackLocation[-1].Control = -32;
      if ( p_Type )
      {
        _InterlockedExchange64(p_Type, (__int64)v12);
        v12 = Irp;
        v13 = v23;
      }
      v16 = p_CurrentStackLocation->CurrentStackLocation;
      if ( a2 )
      {
        v16[-1].Parameters.Create.Options = 1;
        v16[-1].Parameters.Read.ByteOffset.LowPart = a3;
        v16[-1].Parameters.Read.Length = HIDWORD(PopCurrentBroadcast);
        if ( (_BYTE)PopCurrentBroadcast )
          v16[-1].Parameters.Create.EaLength = PopMapInternalActionToIrpAction(
                                                 qword_140303328,
                                                 WORD2(PopCurrentBroadcast) >> 12,
                                                 1);
        if ( (xmmword_1403AA2D0 & 0x8000) != 0 )
          PopLogNotifyDevice(a1, 0LL, v12);
        PopQueueQuerySetIrp(v12);
      }
      else
      {
        v17 = *(_QWORD *)(v13 + 200);
        if ( v17 )
        {
          _m_prefetchw((const void *)(v17 + 32));
          v18 = *(_DWORD *)(v17 + 32);
          do
          {
            v19 = v18;
            v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 32), v18, v18);
          }
          while ( v19 != v18 );
          v20 = v23;
          *(_BYTE *)(v23 + 208) = v18 & 1;
          v21 = (v18 & 1) == 0;
          *(_BYTE *)(v20 + 209) = v21;
          v22 = *(_QWORD *)(v13 + 200);
          if ( v21 )
          {
            PopPepDeviceWaitWake(*(_QWORD *)(v22 + 56), 0LL);
          }
          else
          {
            IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v22 + 208), 0LL, 0x20u);
            *(_QWORD *)(v13 + 200) = 0LL;
          }
          v12 = Irp;
        }
        v16[-1].Parameters.Read.Length = a3;
        PopDiagTraceIrpStart(p_CurrentStackLocation, v12);
        IofCallDriverSpecifyReturn(v16[-1].DeviceObject, v12, retaddr);
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
