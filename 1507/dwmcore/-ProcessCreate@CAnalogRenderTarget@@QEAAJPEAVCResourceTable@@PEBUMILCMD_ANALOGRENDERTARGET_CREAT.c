/*
 * XREFs of ?ProcessCreate@CAnalogRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGRENDERTARGET_CREATE@@@Z @ 0x1801268AC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180049DC4 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnalogRenderTarget::ProcessCreate(
        CAnalogRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANALOGRENDERTARGET_CREATE *a3)
{
  int v3; // edx
  int v5; // r9d
  int v6; // eax
  int v7; // ecx
  int v8; // ebx
  int AnalogExclusiveTokenEvent; // eax
  int v10; // eax

  v3 = *((_DWORD *)a3 + 5);
  v5 = *((_DWORD *)a3 + 4);
  v6 = *((_DWORD *)a3 + 3);
  v7 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 22) = v7;
  *((_DWORD *)this + 52) = v3;
  *((_DWORD *)this + 28) = v6;
  *((_DWORD *)this + 29) = v5;
  if ( qword_180195FD0 )
  {
    v8 = 0;
    if ( v7 == 2 )
    {
      AnalogExclusiveTokenEvent = NtTokenManagerGetAnalogExclusiveTokenEvent((char *)this + 232);
      if ( AnalogExclusiveTokenEvent < 0 )
      {
        v8 = AnalogExclusiveTokenEvent | 0x10000000;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, AnalogExclusiveTokenEvent | 0x10000000, 0x11Bu);
      }
    }
    if ( v8 >= 0 )
    {
      v10 = CRenderTargetManager::AddRenderTarget(*(CComposition ***)(*((_QWORD *)this + 2) + 32LL), this);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x8Cu);
    }
  }
  else
  {
    v8 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x113u);
  }
  return (unsigned int)v8;
}
