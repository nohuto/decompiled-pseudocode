/*
 * XREFs of ?CheckTouchpadCachedInertia@@YAXPEAX@Z @ 0x1C01F10D4
 * Callers:
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4B44 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 * Callees:
 *     ?CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01F1008 (-CancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01F184C (-HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F1E8 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 */

void __fastcall CheckTouchpadCachedInertia(void *a1)
{
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  __int64 v2; // rcx
  struct tagTPSTATE *v3; // rcx

  HoldingFrameForDevice = FindHoldingFrameForDevice(a1);
  if ( HoldingFrameForDevice )
  {
    v2 = *((_QWORD *)HoldingFrameForDevice + 11);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 1272)
        && (*(_DWORD *)(v2 + 1264) & 1) == 0
        && !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)v2) )
      {
        CancelInertiaState(v3, 0);
      }
    }
  }
}
