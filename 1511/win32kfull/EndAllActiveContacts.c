/*
 * XREFs of EndAllActiveContacts @ 0x1C01CB36C
 * Callers:
 *     ResetPointerDevices @ 0x1C009D940 (ResetPointerDevices.c)
 *     ?PrepareLastStateDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z @ 0x1C01C76E8 (-PrepareLastStateDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@K@Z.c)
 *     ?SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PEAUtagQDC_DATA@@@Z @ 0x1C01C81E8 (-SetPointerDeviceDisplayConfig@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@HPEAUtagDISPLAY_PATH_INFO@@PE.c)
 *     _SetDisplayMapping @ 0x1C01CF020 (_SetDisplayMapping.c)
 *     FreeDeviceInfo @ 0x1C01DA0F0 (FreeDeviceInfo.c)
 *     ProcessDeviceChanges @ 0x1C01E0120 (ProcessDeviceChanges.c)
 * Callees:
 *     ?ResetPointerDeviceFrameContactIdMgr@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01C7BB0 (-ResetPointerDeviceFrameContactIdMgr@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C022E398 (-AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F638 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 */

void __fastcall EndAllActiveContacts(struct tagHID_POINTER_DEVICE_INFO *a1, _WORD *a2)
{
  _DWORD *v2; // rax
  BOOL v5; // esi
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  unsigned int i; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r8d

  v2 = (_DWORD *)*((_QWORD *)a1 + 89);
  v5 = *((_DWORD *)a1 + 176) != 0;
  if ( v2 && *v2 )
  {
    HoldingFrameForDevice = FindHoldingFrameForDevice(*((void **)a1 + 92));
    if ( HoldingFrameForDevice )
      AbandonHoldingFrame(HoldingFrameForDevice);
    **((_DWORD **)a1 + 89) = 0;
    ResetPointerDeviceFrameContactIdMgr(a1);
  }
  for ( i = 0; i < *((_DWORD *)a1 + 180); ++i )
  {
    v8 = 2400LL * i;
    v9 = *((_QWORD *)a1 + 87);
    if ( *(_DWORD *)(v9 + v8 + 2336) )
    {
      v10 = *(_DWORD *)(v9 + v8 + 2392);
      if ( (v10 & 0x20) == 0 && *(_DWORD *)(v9 + v8 + 2340) )
      {
        gbPointerSendLastPending = 1;
        *(_DWORD *)(v9 + v8 + 2392) = v10 | 0x40;
        *(_DWORD *)(*((_QWORD *)a1 + 87) + v8 + 2392) &= ~0x400u;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 87) + v8 + 2392) |= 0x20u;
    }
  }
  if ( a2 )
  {
    *a2 |= 0x80u;
    if ( v5 )
    {
      *((_DWORD *)a1 + 63) |= 0x100u;
      *a2 |= 0x4000u;
    }
  }
}
