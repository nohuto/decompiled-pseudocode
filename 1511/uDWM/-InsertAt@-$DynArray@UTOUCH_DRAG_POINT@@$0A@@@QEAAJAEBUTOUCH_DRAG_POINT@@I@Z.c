/*
 * XREFs of ?InsertAt@?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@QEAAJAEBUTOUCH_DRAG_POINT@@I@Z @ 0x18007025C
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18004C908 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002B0D0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<TOUCH_DRAG_POINT,0>::InsertAt(__int64 a1, unsigned __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  unsigned __int64 v5; // r8
  unsigned int v6; // r9d
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // xmm1_8
  int v10; // eax
  unsigned __int64 v11; // rdx
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = a2;
  v3 = DynArrayImpl<0>::Grow(a1, 0x1Cu, 1, 0, &v13);
  v4 = v3;
  if ( v3 >= 0 )
  {
    ++*(_DWORD *)(a1 + 24);
    v5 = *(_QWORD *)a1;
    v6 = *(_DWORD *)(a1 + 24) - 1;
    if ( *(_DWORD *)(a1 + 24) != 1 )
    {
      v7 = v5 + 28LL * v6;
      do
      {
        v8 = 28LL * --v6;
        v9 = *(_QWORD *)(v8 + v5 + 16);
        v10 = *(_DWORD *)(v8 + v5 + 24);
        *(_OWORD *)v7 = *(_OWORD *)(v8 + v5);
        *(_QWORD *)(v7 + 16) = v9;
        *(_DWORD *)(v7 + 24) = v10;
        v7 -= 28LL;
      }
      while ( v6 );
    }
    v11 = v13;
    if ( v13 >= v5 && v13 < 28LL * *(unsigned int *)(a1 + 24) + v5 - 28 )
      v11 = v13 + 28;
    *(_OWORD *)v5 = *(_OWORD *)v11;
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(v11 + 16);
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(v11 + 24);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x1CDu);
  }
  return v4;
}
