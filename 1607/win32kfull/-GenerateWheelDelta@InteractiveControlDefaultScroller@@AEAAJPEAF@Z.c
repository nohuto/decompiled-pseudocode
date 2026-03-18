/*
 * XREFs of ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1C023F368
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023F134 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAVInteractiveControlDevice@@PEAUtagI.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123D24 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelDelta(
        InteractiveControlDefaultScroller *this,
        __int16 *a2)
{
  unsigned int v4; // ebp
  int v5; // esi
  unsigned __int64 v6; // rbx
  unsigned int v7; // eax
  __int16 v8; // cx
  bool v9; // zf
  __int16 v10; // dx

  v4 = *((_DWORD *)this + 14) * *((_DWORD *)this + 7);
  v5 = 0;
  v6 = (unsigned __int64)(1000LL * (*((_QWORD *)this + 2) - *((_QWORD *)this + 1))) / *(_QWORD *)this;
  *((_DWORD *)this + 18) += 120 * abs32(*((_DWORD *)this + 17));
  if ( v6 < *((int *)InteractiveControlManager::Instance() + 47) )
    goto LABEL_13;
  v7 = *((_DWORD *)this + 18);
  if ( v7 < v4 )
    goto LABEL_13;
  do
  {
    v5 += *((_DWORD *)this + 14);
    v7 -= v4;
  }
  while ( v7 >= v4 );
  *((_DWORD *)this + 18) = v7;
  if ( v5 )
  {
    v8 = -1;
    v9 = *((_DWORD *)this + 16) == 2;
    *((_QWORD *)this + 2) = *((_QWORD *)this + 1);
    v10 = 1;
    if ( v9 )
    {
      if ( *((int *)this + 17) > 0 )
        v8 = 1;
    }
    else
    {
      if ( *((int *)this + 17) > 0 )
        v10 = -1;
      v8 = v10;
    }
    *a2 = v5 * v8;
  }
  else
  {
LABEL_13:
    *a2 = 0;
  }
  return 0LL;
}
