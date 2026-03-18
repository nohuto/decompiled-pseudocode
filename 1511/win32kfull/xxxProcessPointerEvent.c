/*
 * XREFs of xxxProcessPointerEvent @ 0x1C01E192C
 * Callers:
 *     ?xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z @ 0x1C01C89D4 (-xxxEndPointerMessageDelivery@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@KK_KKH@Z.c)
 *     xxxProcessPointerDeviceInput @ 0x1C01CF3C8 (xxxProcessPointerDeviceInput.c)
 *     ?xxxBuildPTPButtonOnlyPacket@@YAJPEAEKKPEAUDEVICEINFO@@@Z @ 0x1C01D04B0 (-xxxBuildPTPButtonOnlyPacket@@YAJPEAEKKPEAUDEVICEINFO@@@Z.c)
 *     xxxProcessPTPDeviceInput @ 0x1C01D1AB4 (xxxProcessPTPDeviceInput.c)
 * Callees:
 *     ?IsTouchpadDevice@@YAHPEAX@Z @ 0x1C01F1E44 (-IsTouchpadDevice@@YAHPEAX@Z.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4F58 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01FC05C (xxxGeneratePointerInputMessages.c)
 *     ?StoreFrameNodes@PointerFrameList@@YAHPEAX_KKKPEAUtagPOINTEREVENTINT@@KQEAE@Z @ 0x1C0230830 (-StoreFrameNodes@PointerFrameList@@YAHPEAX_KKKPEAUtagPOINTEREVENTINT@@KQEAE@Z.c)
 */

__int64 __fastcall xxxProcessPointerEvent(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        struct tagPOINTEREVENTINT *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        void *a9)
{
  int v9; // ebx
  PointerFrameList *v13; // rbp
  unsigned int v14; // ebx
  struct tagPOINTEREVENTINT *v16; // [rsp+28h] [rbp-20h]
  unsigned __int8 *v17; // [rsp+38h] [rbp-10h]

  v9 = (int)a4;
  EtwTraceBeginPointerFrameBuildPartial();
  v13 = *(PointerFrameList **)(a3 + 24);
  LODWORD(v16) = v9;
  v14 = 0;
  if ( !PointerFrameList::StoreFrameNodes(v13, a9, a1, a2, a3, v16, a5, v17) )
  {
    EtwTraceEndPointerFrameBuildPartial(a1, a2);
    return 0LL;
  }
  EtwTraceEndPointerFrameBuildPartial(a1, a2);
  if ( a2 )
    return 1LL;
  if ( (unsigned int)IsTouchpadDevice(v13) )
  {
    EtwTraceTouchPadWMPointerProcessingStart();
    xxxDoTouchpadProcessing(v13, a8);
    EtwTraceTouchPadWMPointerProcessingStop();
    return 1LL;
  }
  LOBYTE(v14) = (unsigned int)xxxGeneratePointerInputMessages(v13) != 0;
  return v14;
}
