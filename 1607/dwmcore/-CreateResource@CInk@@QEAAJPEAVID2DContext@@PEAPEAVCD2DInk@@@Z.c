/*
 * XREFs of ?CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x18014D210
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x18014D43C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18014D864 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::CreateResource(CInk *this, struct ID2DContext *a2, struct CD2DInk **a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v6)(struct ID2DContext *, char *, char *, CD2DInk **); // rax
  struct ID2D1Ink *v7; // rsi
  struct ID2D1InkStyle *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx
  int ID2D1InkAndInkStyle; // eax
  int v12; // eax
  struct CD2DInk *v13; // rax
  CD2DInk *v15; // [rsp+60h] [rbp+30h] BYREF
  struct ID2D1InkStyle *v16; // [rsp+68h] [rbp+38h] BYREF
  struct ID2D1Ink *v17; // [rsp+78h] [rbp+48h] BYREF

  v3 = *(_QWORD *)a2;
  v15 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct ID2DContext *, char *, char *, CD2DInk **))(v3 + 192);
  v7 = 0LL;
  v8 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v9 = v6(a2, (char *)this + 240, (char *)this + 252, &v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x139u);
  }
  else
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v15, &v17, &v16);
    v10 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x13Bu);
      v7 = v17;
    }
    else
    {
      v7 = v17;
      v12 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD, _QWORD))(*(_QWORD *)v17 + 48LL))(
              v17,
              *((_QWORD *)this + 26),
              *((unsigned int *)this + 58));
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x13Cu);
      }
      else
      {
        v13 = v15;
        v15 = 0LL;
        *a3 = v13;
      }
    }
    v8 = v16;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v15 )
    (*(void (__fastcall **)(CD2DInk *))(*(_QWORD *)v15 + 16LL))(v15);
  return v10;
}
