/*
 * XREFs of TppWorkWait @ 0x18000A800
 * Callers:
 *     TpWaitForWait @ 0x180004C20 (TpWaitForWait.c)
 *     TpWaitForWork @ 0x180006F90 (TpWaitForWork.c)
 *     TpWaitForTimer @ 0x18000A720 (TpWaitForTimer.c)
 * Callees:
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1800F5710 (TppETWCallbackCancel.c)
 */

int __fastcall TppWorkWait(_RTL_SRWLOCK *a1, int a2)
{
  unsigned __int32 Value; // r8d
  unsigned __int32 v4; // ebx
  int result; // eax
  bool v6; // zf
  signed __int32 v7; // eax

  _m_prefetchw(&a1[28]);
  Value = a1[28].Value;
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = Value >> 1;
      if ( !(Value >> 1) )
        break;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)&a1[28], Value & 1, Value);
      v6 = Value == v7;
      Value = v7;
      if ( v6 )
        goto LABEL_4;
    }
  }
  v4 = 0;
LABEL_4:
  result = TppBarrierAdjust(a1 + 7, -v4, 1);
  if ( MEMORY[0x7FFE0386] )
  {
    if ( v4 )
      return TppETWCallbackCancel(a1[17].Value, (int)a1 + 192, a1[10].Value, a1[11].Value, a1[13].Value, v4);
  }
  return result;
}
