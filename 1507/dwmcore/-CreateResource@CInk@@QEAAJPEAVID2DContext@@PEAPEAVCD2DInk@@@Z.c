/*
 * XREFs of ?CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180114200
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180114430 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1801148AC (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::CreateResource(CInk *this, struct ID2DContext *a2, struct CD2DInk **a3)
{
  __int64 v3; // rax
  int v6; // eax
  unsigned int v7; // edi
  int ID2D1InkAndInkStyle; // eax
  struct ID2D1Ink *v9; // r14
  int v10; // eax
  struct CD2DInk *v11; // rax
  CD2DInk *v13; // [rsp+70h] [rbp+40h] BYREF
  struct ID2D1Ink *v14; // [rsp+78h] [rbp+48h] BYREF
  struct ID2D1InkStyle *v15; // [rsp+88h] [rbp+58h] BYREF

  v3 = *(_QWORD *)a2;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct ID2DContext *, char *, char *, CD2DInk **))(v3 + 200))(
         a2,
         (char *)this + 168,
         (char *)this + 180,
         &v13);
  v7 = v6;
  if ( v6 >= 0 )
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v13, &v14, &v15);
    v9 = v14;
    v7 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD, _QWORD))(*(_QWORD *)v14 + 48LL))(
              v14,
              *((_QWORD *)this + 17),
              *((unsigned int *)this + 40));
      v7 = v10;
      if ( v10 >= 0 )
      {
        v11 = v13;
        v13 = 0LL;
        *a3 = v11;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x13Cu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x13Bu);
    }
    if ( v9 )
      (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v15 )
      (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x139u);
  }
  if ( v13 )
    (*(void (__fastcall **)(CD2DInk *))(*(_QWORD *)v13 + 16LL))(v13);
  return v7;
}
