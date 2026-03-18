/*
 * XREFs of ?CopyFromPtr@IFxMemory@@QEAAJPEAU_WDFMEMORY_OFFSET@@PEAX_K0@Z @ 0x1C007730C
 * Callers:
 *     imp_WdfMemoryCopyFromBuffer @ 0x1C00722C0 (imp_WdfMemoryCopyFromBuffer.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?_CopyPtrToPtr@IFxMemory@@KAJPEAX_KPEAU_WDFMEMORY_OFFSET@@012@Z @ 0x1C00774D8 (-_CopyPtrToPtr@IFxMemory@@KAJPEAX_KPEAU_WDFMEMORY_OFFSET@@012@Z.c)
 */

int __fastcall IFxMemory::CopyFromPtr(
        IFxMemory *this,
        _WDFMEMORY_OFFSET *DestinationOffsets,
        void *SourceBuffer,
        unsigned __int64 SourceBufferLength,
        _WDFMEMORY_OFFSET *SourceOffsets)
{
  _FX_DRIVER_GLOBALS *v9; // rbx
  WDFMEMORY__ *_a1; // rax
  unsigned __int64 v12; // rbx
  void *v13; // rax

  v9 = this->GetDriverGlobals(this);
  if ( (((__int64 (__fastcall *)(IFxMemory *))this->GetFlags)(this) & 1) != 0 )
  {
    _a1 = this->GetHandle(this);
    WPP_IFR_SF_q(v9, 2u, 0x12u, 0xAu, WPP_FxMemoryObject_cpp_Traceguids, _a1);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( v9->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return -1073741819;
  }
  else
  {
    v12 = this->GetBufferSize(this);
    v13 = (void *)this->GetBuffer(this);
    return IFxMemory::_CopyPtrToPtr(SourceBuffer, SourceBufferLength, SourceOffsets, v13, v12, DestinationOffsets);
  }
}
