/*
 * XREFs of ?Create@?$CLocalMrowWriter@USharedBufferDataFlipChain@@@@SAJPEAUSharedBufferDataFlipChain@@PEAPEAV1@@Z @ 0x180125840
 * Callers:
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x1800F4780 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

__int64 __fastcall CLocalMrowWriter<SharedBufferDataFlipChain>::Create(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // esi
  _QWORD *v4; // rax
  _QWORD *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx

  v3 = 0;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   16LL);
  v5 = v4;
  if ( v4 )
  {
    v4[1] = 0LL;
    *v4 = &CLocalMrowWriter<SharedBufferDataFlipChain>::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           224LL);
    v7 = v6;
    if ( v6 )
    {
      *(_QWORD *)v6 = &CMILRefCountBase::`vftable';
      *(_DWORD *)(v6 + 8) = 0;
      *(_QWORD *)v6 = &CMrowReader<SharedBufferDataFlipChain>::CDataWrapper::`vftable';
      `vector constructor iterator'(
        (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)(v6 + 32),
        96LL,
        2,
        (void (__fastcall *)(CBitmapOfDeviceBitmaps::DeviceBitmapInfo *))SharedBufferDataFlipChain::SharedBufferDataFlipChain);
      *(_DWORD *)(v7 + 8) = 1;
    }
    else
    {
      v7 = 0LL;
    }
    v5[1] = v7;
    if ( v7 )
    {
      *(_QWORD *)(v7 + 16) = 208LL;
      *(_WORD *)(v7 + 24) = 0;
      *(_WORD *)(v7 + 26) = -1;
      *(_DWORD *)(v7 + 28) = 0;
      memset_0((void *)(v7 + 32), 0, 0xC0uLL);
      *a2 = v5;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x219u);
      (*(void (__fastcall **)(_QWORD *, __int64))*v5)(v5, 1LL);
    }
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x215u);
  }
  return v3;
}
