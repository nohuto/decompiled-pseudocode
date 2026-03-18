/*
 * XREFs of ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x18001D7AC
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800017D4 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18002C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180152E40 (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV-$CMatrix@ULocalRenderi.c)
 *     ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x18015D360 (-CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionShape::Create(struct ID2D1RegionGeometry *a1, struct CRegionShape **a2)
{
  unsigned int v4; // edi
  void *(__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  struct CRegionShape *v6; // rax
  struct CRegionShape *v7; // rbx

  v4 = 0;
  v5 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v5 == WPF::ProcessHeapImpl::Alloc )
    v6 = (struct CRegionShape *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x10uLL);
  else
    v6 = (struct CRegionShape *)v5(WPF::g_pProcessHeap, 16uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 1) = 0LL;
    *(_QWORD *)v6 = &CRegionShape::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    if ( a1 )
    {
      *((_QWORD *)v7 + 1) = a1;
      (*(void (__fastcall **)(struct ID2D1RegionGeometry *))(*(_QWORD *)a1 + 8LL))(a1);
    }
    *a2 = v7;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4Fu);
  }
  return v4;
}
