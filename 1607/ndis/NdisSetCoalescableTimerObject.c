/*
 * XREFs of NdisSetCoalescableTimerObject @ 0x1C0026590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqill @ 0x1C005EFFC (WPP_SF_qqill.c)
 */

BOOLEAN __stdcall NdisSetCoalescableTimerObject(
        NDIS_HANDLE TimerObject,
        LARGE_INTEGER DueTime,
        LONG MillisecondsPeriod,
        PVOID FunctionContext,
        ULONG Tolerance)
{
  _BYTE *v5; // r14
  _QWORD *v7; // rdi
  KIRQL v9; // al
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  LARGE_INTEGER DueTimea; // [rsp+68h] [rbp+10h]

  DueTimea = DueTime;
  v5 = (_BYTE *)*((_QWORD *)TimerObject + 3);
  v7 = (_QWORD *)*((_QWORD *)TimerObject + 24);
  if ( *v5 == 17 && !v7 )
    return 0;
  if ( FunctionContext )
    *((_QWORD *)TimerObject + 23) = FunctionContext;
  else
    *((_QWORD *)TimerObject + 23) = *((_QWORD *)TimerObject + 22);
  if ( v7 )
  {
    if ( (*(_BYTE *)(v7[477] + 26LL) & 2) != 0 )
    {
      v9 = KeAcquireSpinLockRaiseToDpc(v7 + 235);
      v10 = (_QWORD *)v7[70];
      v11 = v10;
      if ( !v10 )
        goto LABEL_8;
      do
      {
        if ( v11 == TimerObject )
          break;
        v11 = (_QWORD *)*v11;
      }
      while ( v11 );
      if ( !v11 )
      {
LABEL_8:
        *(_QWORD *)TimerObject = v10;
        v7[70] = TimerObject;
      }
      KeReleaseSpinLock(v7 + 235, v9);
      DueTime = DueTimea;
    }
  }
  else
  {
    *((_QWORD *)TimerObject + 16) = *((_QWORD *)TimerObject + 23);
  }
  if ( MillisecondsPeriod )
    *((_BYTE *)TimerObject + 200) = 1;
  if ( (unsigned __int8)byte_1C00895D3 >= 4u )
  {
    WPP_SF_qqill(
      TimerObject,
      DueTime.QuadPart >> 63,
      v5,
      TimerObject,
      abs64(DueTime.QuadPart),
      MillisecondsPeriod,
      Tolerance);
    DueTime = DueTimea;
  }
  return KeSetCoalescableTimer(
           (PKTIMER)((char *)TimerObject + 32),
           DueTime,
           MillisecondsPeriod,
           Tolerance,
           (PKDPC)((char *)TimerObject + 96));
}
