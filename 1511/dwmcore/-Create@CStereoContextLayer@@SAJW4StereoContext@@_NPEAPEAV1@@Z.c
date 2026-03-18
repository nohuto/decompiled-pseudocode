/*
 * XREFs of ?Create@CStereoContextLayer@@SAJW4StereoContext@@_NPEAPEAV1@@Z @ 0x180114CFC
 * Callers:
 *     ?PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z @ 0x1800F3A4C (-PushStereoContext@CDrawingContext@@QEAAJW4StereoContext@@_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CStereoContextLayer::Create(int a1, char a2, __int64 *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rax

  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         16LL);
  if ( v7 )
  {
    *(_DWORD *)(v7 + 8) = a1;
    *(_QWORD *)v7 = &CStereoContextLayer::`vftable';
    *(_BYTE *)(v7 + 12) = a2;
    *(_BYTE *)(v7 + 13) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  *a3 = v7;
  if ( !v7 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x13u);
  }
  return v6;
}
