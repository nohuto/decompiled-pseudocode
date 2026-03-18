/*
 * XREFs of PopIssueNextState @ 0x1403F36BC
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x1403F2FAC (PopInvokeSystemStateHandler.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     PopHandleNextState @ 0x1403F3750 (PopHandleNextState.c)
 */

__int64 __fastcall PopIssueNextState(__int64 a1, _DWORD *a2, __int32 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r8
  __int64 result; // rax

  v3 = 0;
  _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
  v5 = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 56), a3);
  *a2 = 0;
  PopHandleNextState(a1, a2, v5);
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 52);
    if ( (_DWORD)result == *(_DWORD *)(a1 + 48) )
      break;
    if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v3);
  }
  return result;
}
