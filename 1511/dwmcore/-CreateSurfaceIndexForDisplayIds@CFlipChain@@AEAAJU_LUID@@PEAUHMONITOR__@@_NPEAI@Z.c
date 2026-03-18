/*
 * XREFs of ?CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x1800F4924
 * Callers:
 *     ?SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x1800AE328 (-SurfaceIndexFromDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 * Callees:
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18001D708 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800724C8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?AddSharedSurfaceEntry@CFlipChain@@AEAAJAEBUSharedSurfaceEntry@SharedBufferDataFlipChain@@PEAI@Z @ 0x1801255E0 (-AddSharedSurfaceEntry@CFlipChain@@AEAAJAEBUSharedSurfaceEntry@SharedBufferDataFlipChain@@PEAI@Z.c)
 */

__int64 __fastcall CFlipChain::CreateSurfaceIndexForDisplayIds(
        CFlipChain *this,
        struct _LUID a2,
        HMONITOR a3,
        char a4,
        unsigned int *a5)
{
  CDisplaySet *v6; // rdi
  int v7; // r8d
  int CurrentDisplaySet; // eax
  unsigned int v11; // ebx
  int DisplayIdFromMonitor; // eax
  int v13; // eax
  int v14; // eax
  CDisplaySet *v16; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-31h] BYREF
  char v18; // [rsp+50h] [rbp-21h]
  int v19; // [rsp+54h] [rbp-1Dh]
  __int64 v20; // [rsp+58h] [rbp-19h]
  _BYTE v21[96]; // [rsp+60h] [rbp-11h] BYREF
  struct _LUID v22; // [rsp+D8h] [rbp+67h]
  int v23; // [rsp+E0h] [rbp+6Fh] BYREF

  v22 = a2;
  v6 = 0LL;
  v7 = DisplayId::None;
  v16 = 0LL;
  v23 = DisplayId::None;
  if ( a3 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v16);
    v11 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x483u);
      v6 = v16;
      goto LABEL_11;
    }
    v6 = v16;
    DisplayIdFromMonitor = CDisplaySet::GetDisplayIdFromMonitor(v16, a3, (struct DisplayId *)&v23);
    v11 = DisplayIdFromMonitor;
    if ( DisplayIdFromMonitor < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DisplayIdFromMonitor, 0x486u);
      *((_QWORD *)this + 32) = a3;
      goto LABEL_11;
    }
    a2 = v22;
    v7 = v23;
  }
  v13 = CD3DDeviceManager::ValidateAdapterLuidAndDisplayId((__int64)&g_D3DDeviceManager, *(_QWORD *)&a2, v7);
  v11 = v13;
  if ( v13 >= 0 )
  {
    v19 = 0;
    v20 = 0LL;
    v17[0] = v22;
    v17[1] = a3;
    v18 = a4;
    memset_0(v21, 0, 0x38uLL);
    v14 = CFlipChain::AddSharedSurfaceEntry(this, (const struct SharedBufferDataFlipChain::SharedSurfaceEntry *)v17, a5);
    v11 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x4A6u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x492u);
    *((struct _LUID *)this + 31) = v22;
  }
LABEL_11:
  if ( v6 )
    CDisplaySet::Release(v6);
  return v11;
}
