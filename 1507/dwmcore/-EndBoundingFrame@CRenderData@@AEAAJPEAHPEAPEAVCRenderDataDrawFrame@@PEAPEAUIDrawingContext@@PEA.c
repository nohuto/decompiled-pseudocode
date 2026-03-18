/*
 * XREFs of ?EndBoundingFrame@CRenderData@@AEAAJPEAHPEAPEAVCRenderDataDrawFrame@@PEAPEAUIDrawingContext@@PEAU3@@Z @ 0x1801032E4
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x18004E7A0 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 * Callees:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E074 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CreateFromColor@CSolidColorBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z @ 0x1800F19A4 (-CreateFromColor@CSolidColorBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z.c)
 *     ?Release@CRenderDataDrawFrame@@QEAAKXZ @ 0x18010341C (-Release@CRenderDataDrawFrame@@QEAAKXZ.c)
 */

__int64 __fastcall CRenderData::EndBoundingFrame(
        CRenderData *this,
        int *a2,
        struct CRenderDataDrawFrame **a3,
        struct IDrawingContext **a4,
        struct IDrawingContext *a5)
{
  __int64 *v5; // rbp
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // r12d
  struct CRenderDataDrawFrame *v14; // rbp
  __int64 v15; // rsi
  CDrawingContext *v16; // r8
  __int64 v17; // r9
  struct IDrawingContext *v18; // rax
  struct CComposition *v19; // rdx
  int v20; // eax
  struct CSolidColorBrush *v21; // rbp
  struct _D3DCOLORVALUE v23; // [rsp+20h] [rbp-38h] BYREF
  struct CSolidColorBrush *v24; // [rsp+68h] [rbp+10h] BYREF

  v5 = (__int64 *)*a3;
  v10 = 0;
  v11 = *((_QWORD *)*a3 + 4);
  v12 = *(_QWORD *)*a3;
  v13 = *((_DWORD *)*a3 + 4);
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 40));
  v14 = (struct CRenderDataDrawFrame *)v5[4];
  v15 = *((_QWORD *)*a3 + 3);
  *(_OWORD *)v15 = *(_OWORD *)(v12 + 52);
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered((float *)v15) )
  {
    *(_QWORD *)(v15 + 8) = v17;
    *(_QWORD *)v15 = v17;
  }
  CDrawingContext::EndFrame(v16);
  if ( *a3 )
  {
    CRenderDataDrawFrame::Release(*a3);
    *a3 = 0LL;
  }
  v18 = a5;
  *a3 = v14;
  if ( v14 )
    v18 = (struct IDrawingContext *)*((_QWORD *)v14 + 1);
  *a4 = v18;
  *a2 = v13;
  if ( v18 )
  {
    v19 = (struct CComposition *)*((_QWORD *)this + 2);
    v24 = 0LL;
    *(_QWORD *)&v23.r = 0x3F8000003F800000LL;
    *(_QWORD *)&v23.b = 0x3F8000003F800000LL;
    v20 = CSolidColorBrush::CreateFromColor(&v24, v19, &v23);
    v21 = v24;
    v10 = v20;
    if ( v20 >= 0 )
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct CSolidColorBrush *, _QWORD))(*(_QWORD *)*a4 + 8LL))(
              *a4,
              v15,
              v24,
              0LL);
    if ( v21 )
      CMILCOMBase::InternalRelease(v21);
  }
  return v10;
}
