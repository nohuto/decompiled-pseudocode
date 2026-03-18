/*
 * XREFs of ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180104678
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800492E0 (-PostRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x18004CC40 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x1801048CC (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 */

void __fastcall CVisual::PurgeOldRenderPassInfos(CVisual *this)
{
  CVisual *v1; // rsi
  unsigned int v2; // r8d
  CVisual *v3; // rbx
  _BYTE *v4; // r9
  unsigned int v5; // edx
  unsigned __int64 v6; // rdi
  CVisual *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // r9
  char *v12; // [rsp+38h] [rbp-19h] BYREF
  void *v13[2]; // [rsp+48h] [rbp-9h] BYREF
  int v14; // [rsp+58h] [rbp+7h]
  __int64 v15; // [rsp+5Ch] [rbp+Bh]
  _BYTE v16[48]; // [rsp+68h] [rbp+17h] BYREF

  v1 = (CVisual *)((char *)this + 328);
  v2 = 5;
  v3 = (CVisual *)*((_QWORD *)this + 41);
  v4 = v16;
  v5 = 0;
  v13[0] = v16;
  v6 = 0LL;
  v14 = 5;
  v15 = 5LL;
  v13[1] = v16;
  if ( v3 == (CVisual *)((char *)this + 328) )
    goto LABEL_18;
  while ( 1 )
  {
    v7 = (CVisual *)(v5 + 1);
    v12 = (char *)v3 - 88;
    if ( (unsigned int)v7 >= v5 )
    {
      if ( (unsigned int)v7 <= v2 )
      {
        v8 = v5++;
        *(_QWORD *)&v4[8 * v8] = v12;
        HIDWORD(v15) = (_DWORD)v7;
        goto LABEL_9;
      }
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v13, 8u, 1, &v12);
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    v5 = HIDWORD(v15);
LABEL_9:
    v3 = *(CVisual **)v3;
    if ( *((_QWORD *)v12 + 4) > v6 )
      v6 = *((_QWORD *)v12 + 4);
    if ( v3 == v1 )
      break;
    v2 = v15;
    v4 = v13[0];
  }
  if ( v5 > 1 )
  {
    v10 = 0LL;
    do
    {
      v11 = *((_QWORD *)v13[0] + v10);
      if ( *(_QWORD *)(v11 + 32) < v6 )
      {
        CVisual::ReleaseMoveRenderPassInfoForContext(
          v7,
          *(struct CDrawingContext **)(v11 + 80),
          *((struct CMoveRenderPassInfo **)v13[0] + v10));
        v5 = HIDWORD(v15);
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < v5 );
  }
LABEL_18:
  HIDWORD(v15) = 0;
  DynArrayImpl<0>::ShrinkToSize(v13, 8u);
  DynArrayImpl<1>::~DynArrayImpl<1>(v13);
}
