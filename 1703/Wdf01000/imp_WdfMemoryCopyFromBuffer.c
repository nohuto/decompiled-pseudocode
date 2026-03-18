/*
 * XREFs of imp_WdfMemoryCopyFromBuffer @ 0x1C0077F70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?CopyFromPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z @ 0x1C007DC64 (-CopyFromPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfMemoryCopyFromBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *DestinationMemory,
        unsigned __int64 DestinationOffset,
        void *Buffer,
        unsigned __int64 NumBytesToCopyFrom)
{
  _FX_DRIVER_GLOBALS *v7; // rax
  _WDFMEMORY_OFFSET srcOffsets; // [rsp+30h] [rbp-20h] BYREF
  _WDFMEMORY_OFFSET dstOffsets; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+58h] [rbp+8h]
  IFxMemory *pDest; // [rsp+60h] [rbp+10h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)DestinationMemory,
    0x100Au,
    (void **)&pDest);
  v7 = pDest->GetDriverGlobals(pDest);
  if ( !Buffer )
    FxVerifierNullBugCheck(v7, retaddr);
  if ( NumBytesToCopyFrom )
  {
    srcOffsets.BufferLength = NumBytesToCopyFrom;
    srcOffsets.BufferOffset = 0LL;
    dstOffsets.BufferLength = NumBytesToCopyFrom;
    dstOffsets.BufferOffset = DestinationOffset;
    return IFxMemory::CopyFromPtr(pDest, &dstOffsets, Buffer, NumBytesToCopyFrom, &srcOffsets);
  }
  else
  {
    WPP_IFR_SF_d(v7, 2u, 0x12u, 0xCu, WPP_FxMemoryBufferApi_cpp_Traceguids, -1073741811);
    return -1073741811;
  }
}
