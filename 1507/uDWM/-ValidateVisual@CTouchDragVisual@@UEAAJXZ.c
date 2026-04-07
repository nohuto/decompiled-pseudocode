/*
 * XREFs of ?ValidateVisual@CTouchDragVisual@@UEAAJXZ @ 0x1800862C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJI@Z @ 0x180086054 (-RemoveAt@-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJI@Z.c)
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x180086164 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     ?ValidateVisual@CTouchVisual@@UEAAJXZ @ 0x180088EF0 (-ValidateVisual@CTouchVisual@@UEAAJXZ.c)
 */

__int64 __fastcall CTouchDragVisual::ValidateVisual(CTouchDragVisual *this)
{
  DWORD TickCount; // ebp
  signed int v3; // edi
  __int64 v4; // rsi
  signed int v5; // edi
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx

  if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
  {
    if ( *((_DWORD *)this + 82) > 1u )
    {
      TickCount = GetTickCount();
      v3 = *((_DWORD *)this + 82) - 1;
      if ( v3 > 0 )
      {
        v4 = 28LL * v3;
        do
        {
          if ( TickCount - *(_DWORD *)(*((_QWORD *)this + 38) + v4) < *((_DWORD *)this + 70) )
            break;
          DynArray<TOUCH_DRAG_POINT,0>::RemoveAt((__int64 *)this + 38, v3--);
          v4 -= 28LL;
        }
        while ( v3 > 0 );
      }
      v5 = *((_DWORD *)this + 90) - 1;
      if ( v5 >= 0 )
      {
        v6 = 28LL * v5;
        do
        {
          if ( TickCount - *(_DWORD *)(*((_QWORD *)this + 42) + v6) < *((_DWORD *)this + 70) )
            break;
          DynArray<TOUCH_DRAG_POINT,0>::RemoveAt((__int64 *)this + 42, v5);
          v6 -= 28LL;
          --v5;
        }
        while ( v5 >= 0 );
      }
      CTouchDragVisual::UpdateVisual(this);
    }
    *((_DWORD *)this + 20) &= ~0x1000u;
  }
  v7 = CTouchVisual::ValidateVisual(this);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x180u);
  return v8;
}
