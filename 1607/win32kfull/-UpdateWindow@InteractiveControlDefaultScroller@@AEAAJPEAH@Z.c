/*
 * XREFs of ?UpdateWindow@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C023FA9C
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023F134 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlDefaultScroller::UpdateWindow(InteractiveControlDefaultScroller *this, int *a2)
{
  unsigned int v2; // ebx
  int v4; // edi
  __int64 v5; // rdx
  __int64 result; // rax

  v2 = 0;
  v4 = 0;
  if ( gpqForeground )
    v5 = *(_QWORD *)(gpqForeground + 80LL);
  else
    v5 = 0LL;
  if ( v5 )
    LOBYTE(v4) = v5 != *((_QWORD *)this + 6);
  else
    v2 = -1073741816;
  HMAssignmentLock((char *)this + 48, v5);
  result = v2;
  *a2 = v4;
  return result;
}
