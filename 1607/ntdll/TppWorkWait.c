/*
 * XREFs of TppWorkWait @ 0x18003B868
 * Callers:
 *     TpWaitForTimer @ 0x18003B8E0 (TpWaitForTimer.c)
 *     TpWaitForWait @ 0x180064F30 (TpWaitForWait.c)
 *     TpWaitForWork @ 0x180082080 (TpWaitForWork.c)
 * Callees:
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 *     TppETWCallbackCancel @ 0x1800FE67C (TppETWCallbackCancel.c)
 */

__int64 __fastcall TppWorkWait(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int32 v5; // r8d
  unsigned __int32 v6; // ebx
  __int64 result; // rax
  bool v8; // zf
  signed __int32 v9; // eax

  _m_prefetchw(a1 + 29);
  v5 = *((_DWORD *)a1 + 58);
  if ( a2 )
  {
    while ( 1 )
    {
      v6 = v5 >> 1;
      if ( !(v5 >> 1) )
        break;
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 58, v5 & 1, v5);
      v8 = v5 == v9;
      v5 = v9;
      if ( v8 )
        goto LABEL_4;
    }
  }
  v6 = 0;
LABEL_4:
  result = TppBarrierAdjust(a1 + 7, -v6, 1LL, a4);
  if ( MEMORY[0x7FFE0386] )
  {
    if ( v6 )
      return TppETWCallbackCancel(a1[18], (int)a1 + 200, a1[10], a1[11], a1[13], v6);
  }
  return result;
}
