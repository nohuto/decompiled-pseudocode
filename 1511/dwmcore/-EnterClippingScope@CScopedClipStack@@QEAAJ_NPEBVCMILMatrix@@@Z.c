/*
 * XREFs of ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@@Z @ 0x180015C54
 * Callers:
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18000E0BC (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CScopedClipStack::EnterClippingScope(CScopedClipStack *this, char a2, const struct CMILMatrix *a3)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v12; // eax
  _BYTE v13[76]; // [rsp+30h] [rbp-9h] BYREF

  *(_QWORD *)&v13[4] = 0LL;
  v13[0] = a2;
  if ( a3 )
  {
    v4 = *((_OWORD *)a3 + 1);
    *(_OWORD *)&v13[12] = *(_OWORD *)a3;
    v5 = *((_OWORD *)a3 + 2);
    *(_OWORD *)&v13[28] = v4;
    v6 = *((_OWORD *)a3 + 3);
    *(_OWORD *)&v13[44] = v5;
    *(_OWORD *)&v13[60] = v6;
  }
  else
  {
    *(_QWORD *)&v13[64] = 0LL;
    *(_DWORD *)&v13[60] = 0;
    *(_QWORD *)&v13[44] = 0LL;
    *(_OWORD *)&v13[28] = 0x3F80000000000000uLL;
    *(_DWORD *)&v13[24] = 0;
    *(_DWORD *)&v13[20] = 0;
    *(_DWORD *)&v13[16] = 0;
    *(_DWORD *)&v13[72] = 1065353216;
    *(_QWORD *)&v13[52] = 1065353216LL;
    *(_DWORD *)&v13[12] = 1065353216;
  }
  v7 = *((unsigned int *)this + 6);
  v8 = v7 + 1;
  if ( (int)v7 + 1 < (unsigned int)v7 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_11;
  }
  v9 = 0;
  if ( v8 > *((_DWORD *)this + 5) )
  {
    v12 = DynArrayImpl<0>::AddMultipleAndSet(this, 76LL, 1LL, v13);
    v9 = v12;
    if ( v12 >= 0 )
      return v9;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x3Cu);
    return v9;
  }
  v10 = *(_QWORD *)this + 76 * v7;
  *(_OWORD *)v10 = *(_OWORD *)v13;
  *(_OWORD *)(v10 + 16) = *(_OWORD *)&v13[16];
  *(_OWORD *)(v10 + 32) = *(_OWORD *)&v13[32];
  *(_OWORD *)(v10 + 48) = *(_OWORD *)&v13[48];
  *(_QWORD *)(v10 + 64) = *(_QWORD *)&v13[64];
  *(_DWORD *)(v10 + 72) = *(_DWORD *)&v13[72];
  *((_DWORD *)this + 6) = v8;
  return v9;
}
