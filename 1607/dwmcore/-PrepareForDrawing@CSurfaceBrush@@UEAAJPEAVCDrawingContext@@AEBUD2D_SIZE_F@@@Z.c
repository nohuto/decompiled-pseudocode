/*
 * XREFs of ?PrepareForDrawing@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18013AC80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18000365C (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D290 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18006F210 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::PrepareForDrawing(
        CSurfaceBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  CMILCOMBase *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r9
  void *v9; // rcx
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  if ( a3->width > 0.0 && a3->height > 0.0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 176LL))(this) )
    {
      if ( !(unsigned __int8)CDrawingContext::IsBounding(a2) )
      {
        v5 = (CMILCOMBase *)*((_QWORD *)this + 18);
        if ( v5 )
        {
          v11 = 0LL;
          if ( (int)CMILCOMBase::InternalQueryInterface(v5, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v11) >= 0 )
          {
            LOBYTE(v6) = CDrawingContext::IsNormalDesktopRender(a2);
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(v7 + 160))(v8, 0LL, v6);
          }
          v9 = v11;
          if ( v11 )
          {
            v11 = 0LL;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
          }
        }
      }
    }
  }
  return 0LL;
}
