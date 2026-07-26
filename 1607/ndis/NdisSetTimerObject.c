/*
 * XREFs of NdisSetTimerObject @ 0x1C000E3D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqil @ 0x1C005EF9C (WPP_SF_qqil.c)
 */

BOOLEAN __stdcall NdisSetTimerObject(
        NDIS_HANDLE TimerObject,
        LARGE_INTEGER DueTime,
        LONG MillisecondsPeriod,
        PVOID FunctionContext)
{
  _BYTE *v4; // rbp
  _QWORD *v6; // rsi
  KIRQL v9; // al
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  LARGE_INTEGER v12; // [rsp+58h] [rbp+10h]

  v12 = DueTime;
  v4 = (_BYTE *)*((_QWORD *)TimerObject + 3);
  v6 = (_QWORD *)*((_QWORD *)TimerObject + 24);
  if ( *v4 == 17 && !v6 )
    return 0;
  if ( FunctionContext )
    *((_QWORD *)TimerObject + 23) = FunctionContext;
  else
    *((_QWORD *)TimerObject + 23) = *((_QWORD *)TimerObject + 22);
  if ( v6 )
  {
    if ( (*(_BYTE *)(v6[477] + 26LL) & 2) != 0 )
    {
      v9 = KeAcquireSpinLockRaiseToDpc(v6 + 235);
      v10 = (_QWORD *)v6[70];
      v11 = v10;
      if ( !v10 )
        goto LABEL_21;
      while ( v11 != TimerObject )
      {
        v11 = (_QWORD *)*v11;
        if ( !v11 )
          goto LABEL_21;
      }
      if ( !v11 )
      {
LABEL_21:
        *(_QWORD *)TimerObject = v10;
        v6[70] = TimerObject;
      }
      KeReleaseSpinLock(v6 + 235, v9);
      DueTime = v12;
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
    WPP_SF_qqil(TimerObject, DueTime.QuadPart >> 63, v4, TimerObject, abs64(DueTime.QuadPart), MillisecondsPeriod);
    DueTime = v12;
  }
  return KeSetTimerEx(
           (PKTIMER)((char *)TimerObject + 32),
           DueTime,
           MillisecondsPeriod,
           (PKDPC)((char *)TimerObject + 96));
}
