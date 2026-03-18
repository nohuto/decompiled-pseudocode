/*
 * XREFs of ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@@Z @ 0x18001B680
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x1800040C0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CScopedClipStack::EnterClippingScope(CScopedClipStack *this, char a2, const struct CMILMatrix *a3)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // ebx
  _OWORD *v11; // rcx
  int v13; // eax
  _BYTE v14[80]; // [rsp+30h] [rbp-50h] BYREF

  *(_DWORD *)&v14[76] = 0;
  *(_QWORD *)&v14[4] = 0LL;
  v14[0] = a2;
  if ( a3 )
  {
    v4 = *(_OWORD *)a3;
    v5 = *((_OWORD *)a3 + 1);
    *(_DWORD *)&v14[76] = *((_DWORD *)a3 + 16);
    *(_OWORD *)&v14[12] = v4;
    v6 = *((_OWORD *)a3 + 2);
    *(_OWORD *)&v14[28] = v5;
    v7 = *((_OWORD *)a3 + 3);
    *(_OWORD *)&v14[44] = v6;
    *(_OWORD *)&v14[60] = v7;
  }
  else
  {
    *(_OWORD *)&v14[12] = _xmm;
    *(_WORD *)&v14[76] = 32085;
    *(_OWORD *)&v14[28] = _xmm;
    *(_OWORD *)&v14[44] = _xmm;
    *(_OWORD *)&v14[60] = _xmm;
  }
  v8 = *((unsigned int *)this + 6);
  v9 = v8 + 1;
  if ( (int)v8 + 1 < (unsigned int)v8 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v10 = 0;
    if ( v9 <= *((_DWORD *)this + 5) )
    {
      v11 = (_OWORD *)(*(_QWORD *)this + 80 * v8);
      *v11 = *(_OWORD *)v14;
      v11[1] = *(_OWORD *)&v14[16];
      v11[2] = *(_OWORD *)&v14[32];
      v11[3] = *(_OWORD *)&v14[48];
      v11[4] = *(_OWORD *)&v14[64];
      *((_DWORD *)this + 6) = v9;
      return (unsigned int)v10;
    }
    v13 = DynArrayImpl<0>::AddMultipleAndSet(this, 80LL, 1LL, v14);
    v10 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
  }
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3Cu);
  return (unsigned int)v10;
}
