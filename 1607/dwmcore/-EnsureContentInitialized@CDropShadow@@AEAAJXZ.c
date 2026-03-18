/*
 * XREFs of ?EnsureContentInitialized@CDropShadow@@AEAAJXZ @ 0x18014F5B0
 * Callers:
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x18010A290 (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 *     ?Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014F0B4 (-Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18008DFE0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::EnsureContentInitialized(struct CComposition **this)
{
  unsigned int v1; // edi
  CResource *v3; // rax
  struct CResource *v4; // rbx
  int v5; // eax

  v1 = 0;
  if ( !this[24] )
  {
    v3 = (CResource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        136LL);
    v4 = v3;
    if ( v3 )
    {
      CResource::CResource(v3, this[2]);
      *((_QWORD *)v4 + 15) = this;
      *(_QWORD *)v4 = &CDropShadowContent::`vftable';
    }
    else
    {
      v4 = 0LL;
    }
    if ( v4 )
    {
      v5 = CResource::RegisterNotifier((CResource *)this, v4);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x21Cu);
        (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v4 + 16LL))(v4);
      }
      else
      {
        this[24] = v4;
      }
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x21Bu);
    }
  }
  return v1;
}
