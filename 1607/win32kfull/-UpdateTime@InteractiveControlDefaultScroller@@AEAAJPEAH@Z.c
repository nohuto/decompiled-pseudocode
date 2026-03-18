/*
 * XREFs of ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C023FA38
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023F134 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagI.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::UpdateTime(LARGE_INTEGER *this, int *a2)
{
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v5; // r8
  unsigned __int64 v6; // rbx
  BOOL v7; // edx
  __int64 result; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v5 = PerformanceCounter.QuadPart - this[1].QuadPart;
  this[1] = PerformanceCounter;
  v6 = (unsigned __int64)(1000 * v5) / this->QuadPart;
  v7 = v6 > *((int *)InteractiveControlManager::Instance() + 49);
  result = 0LL;
  *a2 = v7;
  return result;
}
