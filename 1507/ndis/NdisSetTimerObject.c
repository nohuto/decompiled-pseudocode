/*
 * XREFs of NdisSetTimerObject @ 0x1C00217C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqil @ 0x1C005B3EC (WPP_SF_qqil.c)
 */

BOOLEAN __stdcall NdisSetTimerObject(
        NDIS_HANDLE TimerObject,
        LARGE_INTEGER DueTime,
        LONG MillisecondsPeriod,
        PVOID FunctionContext)
{
  _BYTE *v4; // r14
  _QWORD *v6; // rdi
  KIRQL v9; // al
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
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
        goto LABEL_17;
      do
      {
        if ( v11 == TimerObject )
          break;
        v11 = (_QWORD *)*v11;
      }
      while ( v11 );
      if ( !v11 )
      {
LABEL_17:
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
  if ( (unsigned __int8)byte_1C0085313 >= 4u )
  {
    if ( DueTime.QuadPart < 0 )
      DueTime.QuadPart = -DueTime.QuadPart;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))WPP_SF_qqil)(
      TimerObject,
      (LARGE_INTEGER)DueTime.QuadPart,
      v4,
      TimerObject,
      (LARGE_INTEGER)DueTime.QuadPart,
      MillisecondsPeriod);
    DueTime = v12;
  }
  return KeSetTimerEx(
           (PKTIMER)((char *)TimerObject + 32),
           DueTime,
           MillisecondsPeriod,
           (PKDPC)((char *)TimerObject + 96));
}
