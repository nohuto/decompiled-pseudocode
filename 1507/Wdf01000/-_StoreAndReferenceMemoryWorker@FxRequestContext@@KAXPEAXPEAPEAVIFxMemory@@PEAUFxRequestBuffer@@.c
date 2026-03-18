/*
 * XREFs of ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C0028498
 * Callers:
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x1C0014968 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxInternalIoctlOthersContext@@EEAAXPEAUFxRequestBuffer@@@Z @ 0x1C0028430 (-StoreAndReferenceMemory@FxInternalIoctlOthersContext@@EEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C008EF2C (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 *     ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C00919C0 (-StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C0093630 (-StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxRequestContext::_StoreAndReferenceMemoryWorker(
        void *Tag,
        IFxMemory **PPMemory,
        FxRequestBuffer *Buffer)
{
  IFxMemory *Memory; // rcx
  __int64 v7; // r8

  if ( Buffer->DataType == FxRequestBufferMemory )
  {
    Memory = Buffer->u.Memory.Memory;
    v7 = 130LL;
  }
  else
  {
    if ( Buffer->DataType != FxRequestBufferReferencedMdl )
    {
      *PPMemory = 0LL;
      return;
    }
    Memory = Buffer->u.Memory.Memory;
    v7 = 135LL;
  }
  Memory->AddRef(Memory, Tag, v7, "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
  *PPMemory = Buffer->u.Memory.Memory;
}
