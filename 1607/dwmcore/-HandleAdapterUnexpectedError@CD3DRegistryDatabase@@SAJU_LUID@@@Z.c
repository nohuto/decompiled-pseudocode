/*
 * XREFs of ?HandleAdapterUnexpectedError@CD3DRegistryDatabase@@SAJU_LUID@@@Z @ 0x18017B4F8
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007E9EC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18008F020 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18008F2C0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindAdapter@CD3DRegistryDatabase@@CA_NU_LUID@@PEAI@Z @ 0x18017B4B4 (-FindAdapter@CD3DRegistryDatabase@@CA_NU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall CD3DRegistryDatabase::HandleAdapterUnexpectedError(struct _LUID a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // eax
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v4 = 0;
  if ( CD3DRegistryDatabase::FindAdapter(a1, &v4) )
  {
    v2 = *(_DWORD *)(CD3DRegistryDatabase::m_rgAdapterErrorCounts + 12LL * v4 + 8);
    if ( v2 < 5 )
      *(_DWORD *)(CD3DRegistryDatabase::m_rgAdapterErrorCounts + 12LL * v4 + 8) = v2 + 1;
  }
  else
  {
    v1 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x98u);
  }
  return v1;
}
