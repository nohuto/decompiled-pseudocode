/*
 * XREFs of AbortDeviceActivity @ 0x1C01C71D0
 * Callers:
 *     ?IsDeviceAllowed@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z @ 0x1C01C5820 (-IsDeviceAllowed@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@KH@Z.c)
 *     ?xxxSeekAndAbortLowerRankedActivity@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01C7128 (-xxxSeekAndAbortLowerRankedActivity@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     IsPTPPointerDeviceAllowed @ 0x1C01CFA5C (IsPTPPointerDeviceAllowed.c)
 * Callees:
 *     ?ResetPointerDeviceFrameContactIdMgr@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01C5FF0 (-ResetPointerDeviceFrameContactIdMgr@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C022DF70 (-AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F1E8 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 */

__int64 __fastcall AbortDeviceActivity(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  int v1; // edi
  _DWORD *v3; // rax
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // r9d

  v1 = 0;
  v3 = (_DWORD *)*((_QWORD *)a1 + 87);
  if ( v3 && *v3 )
  {
    HoldingFrameForDevice = FindHoldingFrameForDevice(*((void **)a1 + 90));
    if ( HoldingFrameForDevice )
      AbandonHoldingFrame(HoldingFrameForDevice);
    **((_DWORD **)a1 + 87) = 0;
    ResetPointerDeviceFrameContactIdMgr(a1);
  }
  v5 = 0;
  if ( !*((_DWORD *)a1 + 176) )
    return 0;
  v6 = 1;
  do
  {
    v7 = 2400LL * v5;
    v8 = *((_QWORD *)a1 + 85);
    if ( *(_DWORD *)(v8 + v7 + 2336) )
    {
      v9 = *(_DWORD *)(v8 + v7 + 2392);
      if ( (v9 & 0x20) == 0 )
      {
        if ( *(_DWORD *)(v8 + v7 + 2340) )
        {
          gbPointerSendLastPending = 1;
          *(_DWORD *)(v8 + v7 + 2392) = v9 & 0xFFFFFBFF;
          *(_DWORD *)(*((_QWORD *)a1 + 85) + v7 + 2392) |= 0x40u;
        }
        *(_DWORD *)(*((_QWORD *)a1 + 85) + v7 + 2392) |= 0x20u;
        ++v1;
      }
    }
    ++v5;
  }
  while ( v5 < *((_DWORD *)a1 + 176) );
  if ( !v1 )
    return 0;
  return v6;
}
