/*
 * XREFs of ?PresentOutOfFrameDirectFlip@CHwDisplayRenderTarget@@UEAAJ_N@Z @ 0x1800812B0
 * Callers:
 *     ?PresentOutOfFrameDirectFlip@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x18014F880 (-PresentOutOfFrameDirectFlip@CHwFullScreenRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?PresentInternal@CHwDisplayRenderTarget@@AEBAJPEAUHRGN__@@IPEAURenderTargetPresentParameters@@@Z @ 0x1800817BC (-PresentInternal@CHwDisplayRenderTarget@@AEBAJPEAUHRGN__@@IPEAURenderTargetPresentParameters@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
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
  ++*(_DWORD *)(v2 + 504);
  CurrentThreadId = GetCurrentThreadId();
  v6 = 0;
  *(_DWORD *)(v2 + 508) = CurrentThreadId;
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x36Du);
    if ( v8 == -2003304442 || v8 == -2003304307 )
      *((_DWORD *)this + 31) = v8;
    *((_BYTE *)this + 8) = 0;
  }
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v10);
  return v8;
}
