/*
 * XREFs of PopSetSpecialRequest @ 0x14066AB34
 * Callers:
 *     PopPowerRequestActionInfo @ 0x140502F60 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PopDiagTracePowerRequestChange @ 0x1400F99D0 (PopDiagTracePowerRequestChange.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     PsReleaseProcessWakeCounter @ 0x1404674F0 (PsReleaseProcessWakeCounter.c)
 *     PsChargeProcessWakeCounter @ 0x140501218 (PsChargeProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x1405037B8 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopSetSpecialRequest(__int64 a1, int a2, void *a3)
{
  NTSTATUS v4; // ebx
  PVOID v5; // rbp
  __int64 v6; // rsi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 == 3 )
  {
    v4 = ObReferenceObjectByHandle(a3, 0x2000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
    if ( v4 >= 0 )
    {
      v5 = Object;
      v6 = PsChargeProcessWakeCounter((__int64)Object, 0, 3LL, a1);
      PopAcquirePowerRequestPushLock(1);
      if ( *(_QWORD *)(a1 + 96) )
      {
        v4 = -1073741811;
      }
      else
      {
        *(_QWORD *)(a1 + 88) = v6;
        *(_QWORD *)(a1 + 96) = v5;
        v6 = 0LL;
        ++*(_DWORD *)(a1 + 44);
        PopDiagTracePowerRequestChange(a1);
        v4 = 0;
      }
      PopReleaseRwLock(&PopPowerRequestLock);
      if ( v6 )
        PsReleaseProcessWakeCounter(v6, a1);
      ObfDereferenceObject(v5);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
