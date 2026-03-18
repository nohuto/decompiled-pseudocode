/*
 * XREFs of ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x1800B5320
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180081820 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::WaitForVBlank(CHwDisplayRenderTarget *this, void *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)((char *)this - 176));
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v4, 0x46Fu);
  }
  else
  {
    v6 = *((_QWORD *)this - 2);
    v9 = v6;
    ++*(_DWORD *)(v6 + 504);
    *(_DWORD *)(v6 + 508) = GetCurrentThreadId();
    v7 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), a2);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v7, 0x474u);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v9);
  }
  return v5;
}
