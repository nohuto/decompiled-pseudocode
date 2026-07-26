/*
 * XREFs of NdisSetCoalescableTimerObject @ 0x1C005B240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqill @ 0x1C005B44C (WPP_SF_qqill.c)
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
  KIRQL v10; // al
  _QWORD *v11; // r8
  _QWORD *v12; // rdx
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
      v10 = KeAcquireSpinLockRaiseToDpc(v7 + 235);
      v11 = (_QWORD *)v7[70];
      v12 = v11;
      if ( !v11 )
        goto LABEL_13;
      do
      {
        if ( v12 == TimerObject )
          break;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 );
      if ( !v12 )
      {
LABEL_13:
        *(_QWORD *)TimerObject = v11;
        v7[70] = TimerObject;
      }
      KeReleaseSpinLock(v7 + 235, v10);
      DueTime = DueTimea;
    }
  }
  else
  {
    *((_QWORD *)TimerObject + 16) = *((_QWORD *)TimerObject + 23);
  }
  if ( MillisecondsPeriod )
    *((_BYTE *)TimerObject + 200) = 1;
  if ( (unsigned __int8)byte_1C0085313 >= 4u )
  {
    if ( DueTime.QuadPart < 0 )
      DueTime.QuadPart = -DueTime.QuadPart;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))WPP_SF_qqill)(
      TimerObject,
      (LARGE_INTEGER)DueTime.QuadPart,
      v5,
      TimerObject,
      (LARGE_INTEGER)DueTime.QuadPart,
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
