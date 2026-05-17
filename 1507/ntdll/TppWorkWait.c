/*
 * XREFs of TppWorkWait @ 0x18007D640
 * Callers:
 *     TpWaitForWait @ 0x18007D430 (TpWaitForWait.c)
 *     TpWaitForWork @ 0x18007D520 (TpWaitForWork.c)
 *     TpWaitForTimer @ 0x18007D560 (TpWaitForTimer.c)
 * Callees:
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1800F5D10 (TppETWCallbackCancel.c)
 */

__int64 __fastcall TppWorkWait(_QWORD *a1, int a2)
{
  unsigned __int32 v3; // r8d
  unsigned __int32 v4; // ebx
  __int64 result; // rax
  bool v6; // zf
  signed __int32 v7; // eax

  _m_prefetchw(a1 + 28);
  v3 = *((_DWORD *)a1 + 56);
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = v3 >> 1;
      if ( !(v3 >> 1) )
        break;
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 56, v3 & 1, v3);
      v6 = v3 == v7;
      v3 = v7;
      if ( v6 )
        goto LABEL_4;
    }
  }
  v4 = 0;
LABEL_4:
  result = TppBarrierAdjust(a1 + 7, -v4);
  if ( MEMORY[0x7FFE0386] )
  {
    if ( v4 )
      return TppETWCallbackCancel(a1[17], (int)a1 + 192, a1[10], a1[11], a1[13], v4);
  }
  return result;
}
