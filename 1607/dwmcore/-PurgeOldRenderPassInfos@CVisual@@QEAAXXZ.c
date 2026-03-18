/*
 * XREFs of ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180138A38
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075EC0 (-PostRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800B8C20 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004ED60 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x180138BAC (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 */

void __fastcall CVisual::PurgeOldRenderPassInfos(CVisual *this)
{
  _BYTE *v1; // r14
  struct _LIST_ENTRY *v2; // rdi
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  unsigned int v4; // r10d
  unsigned int v5; // r11d
  struct _LIST_ENTRY *v6; // rsi
  struct _LIST_ENTRY *Flink; // rbx
  CVisual *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rdx
  struct _LIST_ENTRY **p_Blink; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-19h] BYREF
  int v15; // [rsp+50h] [rbp-9h]
  __int64 v16; // [rsp+54h] [rbp-5h]
  _BYTE v17[48]; // [rsp+60h] [rbp+7h] BYREF

  v1 = v17;
  v14[1] = v17;
  v14[0] = v17;
  v15 = 5;
  v2 = 0LL;
  v16 = 5LL;
  RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
  v6 = RenderPassInfoList;
  if ( !RenderPassInfoList )
    goto LABEL_19;
  Flink = RenderPassInfoList->Flink;
  if ( RenderPassInfoList->Flink == RenderPassInfoList )
    goto LABEL_19;
  while ( 1 )
  {
    p_Blink = &Flink[-6].Blink;
    v8 = (CVisual *)(v4 + 1);
    if ( (unsigned int)v8 < v4 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( (unsigned int)v8 <= v5 )
      {
        v9 = v4++;
        *(_QWORD *)&v1[8 * v9] = p_Blink;
        HIDWORD(v16) = (_DWORD)v8;
        goto LABEL_10;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v14, 8u, 1, &p_Blink);
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
    }
    v4 = HIDWORD(v16);
LABEL_10:
    Flink = Flink->Flink;
    if ( p_Blink[4] > v2 )
      v2 = p_Blink[4];
    if ( Flink == v6 )
      break;
    v5 = v16;
    v1 = (_BYTE *)v14[0];
  }
  if ( v4 > 1 )
  {
    v11 = 0LL;
    do
    {
      v12 = *(_QWORD *)(v14[0] + 8 * v11);
      if ( *(_QWORD *)(v12 + 32) < (unsigned __int64)v2 )
      {
        CVisual::ReleaseMoveRenderPassInfoForContext(
          v8,
          *(struct CDrawingContext **)(v12 + 80),
          *(struct CMoveRenderPassInfo **)(v14[0] + 8 * v11));
        v4 = HIDWORD(v16);
      }
      v11 = (unsigned int)(v11 + 1);
    }
    while ( (unsigned int)v11 < v4 );
  }
LABEL_19:
  HIDWORD(v16) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v14, 8u);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v14);
}
