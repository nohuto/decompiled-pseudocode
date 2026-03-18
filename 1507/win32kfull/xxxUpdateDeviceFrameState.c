/*
 * XREFs of xxxUpdateDeviceFrameState @ 0x1C01CDE84
 * Callers:
 *     xxxAssessPointerContactState @ 0x1C01CD534 (xxxAssessPointerContactState.c)
 *     xxxProcessPointerDeviceInput @ 0x1C01CD7D8 (xxxProcessPointerDeviceInput.c)
 *     ?xxxGetPTPFrameContactCount@@YAJPEAUDEVICEINFO@@KPEAEPEAH2PEAK33PEAT_LARGE_INTEGER@@@Z @ 0x1C01CE970 (-xxxGetPTPFrameContactCount@@YAJPEAUDEVICEINFO@@KPEAEPEAH2PEAK33PEAT_LARGE_INTEGER@@@Z.c)
 *     xxxProcessPTPDeviceInput @ 0x1C01CFE54 (xxxProcessPTPDeviceInput.c)
 * Callees:
 *     ?ResetPointerDeviceFrameContactIdMgr@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01C5FF0 (-ResetPointerDeviceFrameContactIdMgr@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z @ 0x1C01C6E14 (-xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z.c)
 *     RemoveContactFromActiveList @ 0x1C01CC48C (RemoveContactFromActiveList.c)
 *     ?AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C022DF70 (-AbandonHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z @ 0x1C022F1E8 (-FindHoldingFrameForDevice@@YAPEAUtagPOINTERHOLDINGFRAME@@PEAX@Z.c)
 */

void __fastcall xxxUpdateDeviceFrameState(struct _LIST_ENTRY *a1, int a2, unsigned int a3, void *a4)
{
  unsigned int i; // edi
  struct _LIST_ENTRY *v8; // rcx
  int Blink; // eax
  struct tagPOINTERHOLDINGFRAME *HoldingFrameForDevice; // rax
  unsigned int v11; // edi
  __int64 v12; // rsi
  struct _LIST_ENTRY *v13; // rax
  unsigned int v14; // edx
  struct _LIST_ENTRY *v15; // rcx

  if ( !a2 )
  {
    for ( i = 0; i < LODWORD(a1[44].Flink); ++i )
    {
      v8 = &a1[42].Blink[150 * i];
      if ( LODWORD(v8[146].Flink) )
      {
        if ( LODWORD(a1[1].Blink) == 8 )
        {
          Blink = (int)v8[149].Blink;
          if ( (Blink & 0x800) != 0 && (Blink & 0x20) == 0 )
          {
            if ( HIDWORD(v8[146].Flink) )
            {
              gbPointerSendLastPending = 1;
              LODWORD(v8[149].Blink) = Blink | 0x40;
            }
            LODWORD(v8[149].Blink) |= 0x20u;
          }
        }
        HIDWORD(v8[146].Flink) = v8[146].Blink;
      }
      if ( ((__int64)v8[149].Blink & 0x400) != 0 )
        RemoveContactFromActiveList(a1, i, 0LL);
    }
    goto LABEL_24;
  }
  HoldingFrameForDevice = FindHoldingFrameForDevice(a1[45].Flink);
  if ( HoldingFrameForDevice )
    AbandonHoldingFrame(HoldingFrameForDevice);
  v11 = 0;
  LODWORD(a1[43].Blink->Flink) = 0;
  if ( LODWORD(a1[44].Flink) )
  {
    while ( 1 )
    {
      v12 = 150LL * v11;
      v13 = a1[42].Blink;
      if ( LODWORD(v13[v12 + 146].Flink) )
      {
        v14 = v11;
        v15 = a1;
        if ( !HIDWORD(v13[v12 + 146].Flink) )
          goto LABEL_22;
        xxxEndPointerMessageDelivery(
          (struct tagHID_POINTER_DEVICE_INFO *)a1,
          v11,
          a3,
          a4,
          HIDWORD(v13[v12 + 145].Blink),
          1);
        if ( ((__int64)a1[42].Blink[v12 + 149].Blink & 0x20) != 0 )
          break;
      }
LABEL_23:
      if ( ++v11 >= LODWORD(a1[44].Flink) )
        goto LABEL_24;
    }
    v14 = v11;
    v15 = a1;
LABEL_22:
    RemoveContactFromActiveList(v15, v14, 0LL);
    goto LABEL_23;
  }
LABEL_24:
  if ( a1[43].Blink )
    ResetPointerDeviceFrameContactIdMgr((struct tagHID_POINTER_DEVICE_INFO *)a1);
}
