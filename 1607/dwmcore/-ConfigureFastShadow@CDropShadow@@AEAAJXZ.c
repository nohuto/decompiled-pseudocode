/*
 * XREFs of ?ConfigureFastShadow@CDropShadow@@AEAAJXZ @ 0x18014EFA8
 * Callers:
 *     ?Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014F0B4 (-Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x18014ECF0 (--0CDropShadow@@QEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall CDropShadow::ConfigureFastShadow(CDropShadow *this)
{
  CDropShadow *v1; // rdx
  unsigned int v2; // ebx
  CDropShadow *v4; // rax

  v1 = CDropShadow::s_pFastShadow;
  v2 = 0;
  if ( CDropShadow::s_pFastShadow
    || ((v4 = (CDropShadow *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                               WPF::g_pProcessHeap,
                               240LL)) == 0LL
      ? (v1 = 0LL, CDropShadow::s_pFastShadow = 0LL)
      : (v1 = CDropShadow::CDropShadow(v4, *((struct CComposition **)this + 2)), CDropShadow::s_pFastShadow = v1),
        v1) )
  {
    if ( !*((_BYTE *)this + 232) )
    {
      (*(void (__fastcall **)(CDropShadow *))(*(_QWORD *)v1 + 8LL))(v1);
      v1 = CDropShadow::s_pFastShadow;
      *((_BYTE *)this + 232) = 1;
    }
    *((_DWORD *)v1 + 38) = *((_DWORD *)this + 38);
    *(_OWORD *)((char *)v1 + 136) = *(_OWORD *)((char *)this + 136);
    *((_DWORD *)v1 + 39) = *((_DWORD *)this + 39);
    *((_QWORD *)v1 + 20) = *((_QWORD *)this + 20);
    *((_DWORD *)v1 + 42) = *((_DWORD *)this + 42);
    *(_OWORD *)((char *)v1 + 172) = *(_OWORD *)((char *)this + 172);
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2EFu);
  }
  return v2;
}
