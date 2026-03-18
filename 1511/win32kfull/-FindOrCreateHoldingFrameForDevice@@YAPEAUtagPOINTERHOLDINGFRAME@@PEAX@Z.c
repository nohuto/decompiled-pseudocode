/*
 * XREFs of ?FindOrCreateHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F72C
 * Callers:
 *     ?StoreFrameNodes@PointerFrameList@@YAHPEAX_KKKPEAUtagPOINTEREVENTINT@@KQEAE@Z @ 0x1C0230830 (-StoreFrameNodes@PointerFrameList@@YAHPEAX_KKKPEAUtagPOINTEREVENTINT@@KQEAE@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     ?InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01F1A54 (-InitTouchpadState@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01F1E44 (-IsTouchpadDevice@@YAHPEAX@Z.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F638 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 */

struct tagPOINTERHOLDINGFRAME *__fastcall FindOrCreateHoldingFrameForDevice(void *a1)
{
  struct tagPOINTERHOLDINGFRAME *result; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  struct tagPOINTERHOLDINGFRAME *v6; // rax
  struct tagTPSTATE *v7; // rax
  struct tagHID_POINTER_DEVICE_INFO *v8; // rdx

  result = FindHoldingFrameForDevice(a1);
  if ( !result )
  {
    v3 = Win32AllocPoolZInit(96LL, 1718645589LL);
    v4 = v3;
    if ( v3 )
    {
      *(_QWORD *)(v3 + 16) = a1;
      v5 = HMValidateHandleNoSecure((unsigned __int64)a1, 19);
      if ( v5 )
        HMAssignmentLock(v4 + 80, *(_QWORD *)(v5 + 416));
      v6 = qword_1C0327800;
      *(_QWORD *)v4 = qword_1C0327800;
      *(_QWORD *)(v4 + 8) = &qword_1C0327800;
      if ( *((struct tagPOINTERHOLDINGFRAME ***)v6 + 1) != &qword_1C0327800 )
        __fastfail(3u);
      *((_QWORD *)v6 + 1) = v4;
      qword_1C0327800 = (struct tagPOINTERHOLDINGFRAME *)v4;
    }
    if ( IsTouchpadDevice((unsigned __int64)a1) )
    {
      v7 = (struct tagTPSTATE *)Win32AllocPoolZInit(1600LL, 1886679893LL);
      if ( v7 )
      {
        v8 = *(struct tagHID_POINTER_DEVICE_INFO **)(v4 + 80);
        *(_QWORD *)(v4 + 88) = v7;
        if ( v8 )
          InitTouchpadState(v7, v8);
      }
    }
    return (struct tagPOINTERHOLDINGFRAME *)v4;
  }
  return result;
}
