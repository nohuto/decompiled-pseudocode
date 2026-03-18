/*
 * XREFs of ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x1800AAD78
 * Callers:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180035774 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x1800976B4 (-EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Init@CD2DFactory@@AEAAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@@Z @ 0x1800AABA0 (-Init@CD2DFactory@@AEAAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::Create(enum D2D1_FACTORY_TYPE a1, struct D2D1_FACTORY_OPTIONS a2, void ***a3)
{
  __int64 v4; // rax
  void **v5; // rbx
  enum D2D1_FACTORY_TYPE v6; // edx
  int v7; // eax
  unsigned int v8; // edi

  v4 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         40LL);
  v5 = (void **)v4;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 8) = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)v4 = &CD2DFactory::`vftable'{for `IUnknown'};
    *(_QWORD *)(v4 + 8) = &CD2DFactory::`vftable'{for `CMILRefCountBase'};
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    (*((void (__fastcall **)(void **))*v5 + 1))(v5);
    v7 = CD2DFactory::Init(v5, v6, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x20u);
      (*((void (__fastcall **)(void **))*v5 + 2))(v5);
    }
    else
    {
      *a3 = v5;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x19u);
  }
  return v8;
}
