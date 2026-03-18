/*
 * XREFs of ?PresentOutOfFrameDirectFlip@CHwDisplayRenderTarget@@UEAAJ_N@Z @ 0x180139410
 * Callers:
 *     ?PresentOutOfFrameDirectFlip@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x180140380 (-PresentOutOfFrameDirectFlip@CHwFullScreenRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?PresentInternal@CHwDisplayRenderTarget@@AEBAJPEAUHRGN__@@IPEAURenderTargetPresentParameters@@@Z @ 0x1800DCF1C (-PresentInternal@CHwDisplayRenderTarget@@AEBAJPEAUHRGN__@@IPEAURenderTargetPresentParameters@@@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::PresentOutOfFrameDirectFlip(CHwDisplayRenderTarget *this, char a2)
{
  __int64 v2; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this - 2);
  v10 = v2;
  ++*(_DWORD *)(v2 + 512);
  CurrentThreadId = GetCurrentThreadId();
  v6 = 0;
  *(_DWORD *)(v2 + 516) = CurrentThreadId;
  if ( a2 )
    v6 = 128;
  v7 = CHwDisplayRenderTarget::PresentInternal((CHwDisplayRenderTarget *)((char *)this - 176), 0LL, v6, 0LL);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *((_BYTE *)this + 9) = v7 == 142213130;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x36Cu);
    if ( v8 == -2003304442 || v8 == -2003304307 )
      *((_DWORD *)this + 31) = v8;
    *((_BYTE *)this + 8) = 0;
  }
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v10);
  return v8;
}
