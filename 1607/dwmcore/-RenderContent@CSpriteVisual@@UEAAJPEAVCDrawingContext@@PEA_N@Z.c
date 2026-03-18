/*
 * XREFs of ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180139050
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800513D0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x18010994C (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     ?Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014F0B4 (-Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x18014FC34 (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CSpriteVisual::RenderContent(CDropShadow **this, struct CDrawingContext *a2, bool *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  float v8; // xmm1_4
  int v9; // eax
  CDropShadow *v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-40h]
  char v13; // [rsp+30h] [rbp-30h] BYREF
  struct D2D_RECT_F v14; // [rsp+38h] [rbp-28h] BYREF
  __int128 v15; // [rsp+48h] [rbp-18h] BYREF

  if ( !this[69] )
  {
LABEL_12:
    v9 = CVisual::RenderContent((CVisual *)this, a2, a3);
    v7 = v9;
    if ( v9 >= 0 )
      return v7;
    v12 = 145;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v12);
    return v7;
  }
  *(_QWORD *)&v14.left = 0LL;
  if ( !CVisual::GetContentAsSpriteNoRef((CVisual *)this, (struct CSpriteVisualContent **)&v14) )
  {
LABEL_10:
    CResource::NotifyOnChanged(this, 5u, 0LL);
    v10 = this[69];
    v13 = 0;
    v15 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v9 = CDropShadow::Draw((_DWORD)v10, (_DWORD)a2, (int)this + 192, (unsigned int)&v13, (__int64)&v15);
    v7 = v9;
    if ( v9 < 0 )
    {
      v12 = 137;
      goto LABEL_14;
    }
    CResource::NotifyOnChanged(this, 5u, 0LL);
    goto LABEL_12;
  }
  v6 = *((_DWORD *)a2 + 754);
  if ( v6 )
  {
    v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(*((_QWORD *)a2 + 379) + 4LL * (unsigned int)(v6 - 1))
                                                   - 1.0)) & _xmm);
    if ( v8 >= 0.0000011920929 )
    {
      *(_QWORD *)&v14.left = 0LL;
      *(_QWORD *)&v14.right = 0LL;
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD, struct D2D_RECT_F *))(**(_QWORD **)&v14.left + 192LL))(
             *(_QWORD *)&v14.left,
             (char *)this + 192,
             0LL,
             &v14);
      v7 = v9;
      if ( v9 < 0 )
      {
        v12 = 116;
        goto LABEL_14;
      }
    }
    CDropShadow::SetOcclusionRect(this[69], &v14);
    goto LABEL_10;
  }
  v7 = -2147467259;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x6Fu);
  return v7;
}
