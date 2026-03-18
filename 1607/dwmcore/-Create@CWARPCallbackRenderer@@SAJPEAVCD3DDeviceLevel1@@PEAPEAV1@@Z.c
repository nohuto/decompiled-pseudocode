/*
 * XREFs of ?Create@CWARPCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180199250
 * Callers:
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180175B24 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWARPCallbackRenderer::Create(struct CD3DDeviceLevel1 *a1, struct CWARPCallbackRenderer **a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx

  v4 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         96LL);
  v5 = 0;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 8) = &CMILRefCountBase::`vftable';
    *(_DWORD *)(v4 + 16) = 0;
    *(_QWORD *)v4 = &CWARPCallbackRenderer::`vftable'{for `ID2D1PrivateCompositorRenderer'};
    *(_QWORD *)(v4 + 8) = &CWARPCallbackRenderer::`vftable'{for `CMILRefCountBase'};
    *(_QWORD *)(v4 + 24) = a1;
    *(_DWORD *)(v4 + 48) = 0;
    *(_BYTE *)(v4 + 56) = 0;
    *(_QWORD *)(v4 + 64) = 0LL;
    *(_QWORD *)(v4 + 72) = 0LL;
    *(_QWORD *)(v4 + 80) = 0LL;
    *(_DWORD *)(v4 + 88) = 0;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
    *(_QWORD *)(v4 + 32) = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 552LL);
    *a2 = (struct CWARPCallbackRenderer *)v4;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13u);
  }
  return v5;
}
