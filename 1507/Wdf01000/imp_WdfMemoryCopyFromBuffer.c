/*
 * XREFs of imp_WdfMemoryCopyFromBuffer @ 0x1C00722C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?CopyFromPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z @ 0x1C007730C (-CopyFromPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfMemoryCopyFromBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DestinationMemory,
        unsigned __int64 DestinationOffset,
        void *Buffer,
        unsigned __int64 NumBytesToCopyFrom)
{
  IFxMemory *v7; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *v9; // rax
  _WDFMEMORY_OFFSET srcOffsets; // [rsp+30h] [rbp-28h] BYREF
  _WDFMEMORY_OFFSET dstOffsets; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  IFxMemory *pDest; // [rsp+68h] [rbp+10h] BYREF

  if ( !DestinationMemory )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x100AuLL);
  v7 = (IFxMemory *)(~DestinationMemory & 0xFFFFFFFFFFFFFFF8uLL);
  Offset = 0LL;
  if ( (DestinationMemory & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (IFxMemory *)((char *)v7 - Offset);
  }
  if ( LOWORD(v7[1].__vftable) == 4106 )
  {
    pDest = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v7, (void **)&pDest, (void *)DestinationMemory, 0x100Au, Offset);
    v7 = pDest;
  }
  v9 = (_FX_DRIVER_GLOBALS *)((__int64 (__fastcall *)(IFxMemory *, unsigned __int64, __int64))v7->GetDriverGlobals)(
                               v7,
                               DestinationMemory,
                               Offset);
  if ( !Buffer )
    FxVerifierNullBugCheck(v9, retaddr);
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
    WPP_IFR_SF_d(v9, 2u, 0x12u, 0xCu, WPP_FxMemoryBufferApi_cpp_Traceguids, -1073741811);
    return -1073741811;
  }
}
