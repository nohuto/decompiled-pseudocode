/*
 * XREFs of ?CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x18010B9F4
 * Callers:
 *     ?SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x1800AA560 (-SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 * Callees:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180035208 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x180110DC4 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?AddSharedSurfaceEntry@CFlipChain@@AEAAJAEBUSharedSurfaceEntry@SharedBufferDataFlipChain@@PEAI@Z @ 0x180141D78 (-AddSharedSurfaceEntry@CFlipChain@@AEAAJAEBUSharedSurfaceEntry@SharedBufferDataFlipChain@@PEAI@Z.c)
 */

__int64 __fastcall CFlipChain::CreateSurfaceIndexForDisplayIds(
        CFlipChain *this,
        struct _LUID a2,
        HMONITOR a3,
        char a4,
        unsigned int *a5)
{
  CDisplaySet *v6; // rdi
  unsigned int v7; // r8d
  int CurrentDisplaySet; // eax
  unsigned int v11; // ebx
  int DisplayIdFromMonitor; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  CDisplaySet *v18; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-31h] BYREF
  char v20; // [rsp+50h] [rbp-21h]
  int v21; // [rsp+54h] [rbp-1Dh]
  __int64 v22; // [rsp+58h] [rbp-19h]
  _BYTE v23[96]; // [rsp+60h] [rbp-11h] BYREF
  struct _LUID v24; // [rsp+D8h] [rbp+67h]
  int v25; // [rsp+E0h] [rbp+6Fh] BYREF

  v24 = a2;
  v6 = 0LL;
  v7 = DisplayId::None;
  v18 = 0LL;
  v25 = DisplayId::None;
  if ( a3 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v18);
    v11 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x483u);
      v6 = v18;
      goto LABEL_11;
    }
    v6 = v18;
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v18, a3, (struct DisplayId *)&v25);
    v11 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIdFromMonitor, 0x486u);
      *((_QWORD *)this + 41) = a3;
      goto LABEL_11;
    }
    a2 = v24;
    v7 = v25;
  }
  v15 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId((__int64)&g_D3DDeviceManager, *(_QWORD *)&a2, v7);
  v11 = v15;
  if ( v15 >= 0 )
  {
    v21 = 0;
    v22 = 0LL;
    v19[0] = v24;
    v19[1] = a3;
    v20 = a4;
    memset_0(v23, 0, 0x38uLL);
    v16 = CFlipChain::AddSharedSurfaceEntry(this, (const struct SharedBufferDataFlipChain::SharedSurfaceEntry *)v19, a5);
    v11 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x4A6u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x492u);
    *((struct _LUID *)this + 40) = v24;
  }
LABEL_11:
  if ( v6 )
    CDisplaySet::Release(v6, v13, v14);
  return v11;
}
