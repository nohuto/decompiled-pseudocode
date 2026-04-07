/*
 * XREFs of ?SendRoundTripRequest@CDesktopManager@@QEAAJPEAI@Z @ 0x18001C7E4
 * Callers:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001C2A0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180068310 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopManager::SendRoundTripRequest(CDesktopManager *this, unsigned int *a2)
{
  struct MIL_CHANNEL__ *v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+44h] [rbp+Ch]

  v3 = (struct MIL_CHANNEL__ *)*((_QWORD *)this + 4);
  v8 = *((_DWORD *)this + 397);
  *((_DWORD *)this + 397) = v8 + 1;
  v7 = 2;
  v4 = MilResource_SendCommand(&v7, 8u, v3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x419u);
  }
  else if ( a2 )
  {
    *a2 = v8;
  }
  return v5;
}
