/*
 * XREFs of ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x18008B030
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180044168 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v4, 0x44Au);
  }
  else
  {
    v6 = *((_QWORD *)this - 2);
    v9 = v6;
    ++*(_DWORD *)(v6 + 512);
    *(_DWORD *)(v6 + 516) = GetCurrentThreadId();
    v7 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), a2);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v7, 0x44Fu);
    CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v9);
  }
  return v5;
}
