/*
 * XREFs of ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@@Z @ 0x18012E018
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E1E0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushLight@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCCompositionLight@@@Z @ 0x180124684 (-PushLight@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCCompositionLight@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InvalidateCache@CLightStack@@AEAAXXZ @ 0x18009BC24 (-InvalidateCache@CLightStack@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?FindLight@CLightStack@@AEBA_NPEBVCCompositionLight@@@Z @ 0x18012DF18 (-FindLight@CLightStack@@AEBA_NPEBVCCompositionLight@@@Z.c)
 */

__int64 __fastcall CLightStack::Push(CLightStack *this, struct CCompositionLight *a2)
{
  char Light; // al
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // si
  unsigned int v7; // edx
  int v8; // ebx
  int v9; // eax
  struct CCompositionLight *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  Light = CLightStack::FindLight(this, a2);
  v5 = *(unsigned int *)(v4 + 24);
  v6 = Light;
  v7 = v5 + 1;
  if ( (int)v5 + 1 >= (unsigned int)v5 )
  {
    v8 = 0;
    if ( v7 <= *((_DWORD *)this + 5) )
    {
      *(_QWORD *)(*(_QWORD *)this + 8 * v5) = v11;
      *((_DWORD *)this + 6) = v7;
      goto LABEL_8;
    }
    v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 8u, 1, &v11);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x23u);
    return (unsigned int)v8;
  }
LABEL_8:
  (*(void (__fastcall **)(struct CCompositionLight *))(*(_QWORD *)v11 + 8LL))(v11);
  if ( !v6 )
    CLightStack::InvalidateCache(this);
  return (unsigned int)v8;
}
