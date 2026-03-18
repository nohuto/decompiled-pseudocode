/*
 * XREFs of ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C00296B8
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C000DC00 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0039334 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0085774 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C008DE64 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 * Callees:
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C00012B4 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_Dd @ 0x1C0038864 (WPP_IFR_SF_Dd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C007E48C (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     FxProbeAndLockWithAccess @ 0x1C009E790 (FxProbeAndLockWithAccess.c)
 */

__int64 __fastcall FxRequestBuffer::GetOrAllocateMdl(
        FxRequestBuffer *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _MDL **Mdl,
        _MDL **MdlToFree,
        unsigned __int8 *UnlockWhenFreed,
        _LOCK_OPERATION Operation,
        unsigned __int8 ReuseMdl,
        unsigned __int64 *SizeOfMdl)
{
  __int64 result; // rax
  _WDFMEMORY_OFFSET *Offsets; // rax
  char *v14; // rbp
  signed int BufferLength; // r12d
  SIZE_T v16; // rax
  unsigned __int64 v17; // r13
  _MDL *Debug; // rax
  _MDL *v19; // rax
  __int64 (*GetBuffer)(void); // rax
  unsigned __int64 Memory; // rbp
  unsigned int v22; // eax
  __int64 v23; // r13
  SIZE_T v24; // rax
  PMDL v25; // rdx
  unsigned __int8 v26; // r12
  _MDL *v27; // rax
  int v28; // eax
  unsigned int v29; // edi
  unsigned __int8 Irp; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v32; // [rsp+70h] [rbp+8h]

  *UnlockWhenFreed = 0;
  if ( this->DataType == FxRequestBufferUnspecified )
  {
    result = 0LL;
LABEL_3:
    *Mdl = 0LL;
    return result;
  }
  if ( this->DataType != FxRequestBufferMemory )
  {
    if ( this->DataType == FxRequestBufferMdl )
    {
      v19 = this->u.Mdl.Mdl;
      goto LABEL_33;
    }
    if ( this->DataType != FxRequestBufferBuffer )
    {
      if ( this->DataType != FxRequestBufferReferencedMdl )
      {
        result = 3221225485LL;
        goto LABEL_3;
      }
      Offsets = this->u.Memory.Offsets;
      if ( Offsets && (Offsets->BufferOffset || Offsets->BufferLength) )
      {
        v14 = (char *)this->u.RefMdl.Mdl->StartVa + this->u.RefMdl.Mdl->ByteOffset + Offsets->BufferOffset;
        BufferLength = FxRequestBuffer::GetBufferLength(this);
        v16 = MmSizeOfMdl(v14, BufferLength);
        v17 = v16;
        if ( ReuseMdl && v16 <= *SizeOfMdl )
        {
          if ( ((*MdlToFree)->MdlFlags & 0x20) != 0 )
            MmUnmapLockedPages((*MdlToFree)->MappedSystemVa, *MdlToFree);
          *Mdl = *MdlToFree;
LABEL_29:
          IoBuildPartialMdl(this->u.RefMdl.Mdl, *Mdl, v14, BufferLength);
LABEL_65:
          *MdlToFree = *Mdl;
          return 0LL;
        }
        if ( *MdlToFree )
        {
          if ( FxDriverGlobals->FxVerifierOn )
            FxMdlFreeDebug(FxDriverGlobals, *MdlToFree);
          else
            IoFreeMdl(*MdlToFree);
          *MdlToFree = 0LL;
          if ( SizeOfMdl )
            *SizeOfMdl = 0LL;
        }
        if ( FxDriverGlobals->FxVerifierOn )
          Debug = FxMdlAllocateDebug(FxDriverGlobals, 0LL, v14, BufferLength, Irp, 0, retaddr);
        else
          Debug = IoAllocateMdl(v14, BufferLength, 0, 0, 0LL);
        *Mdl = Debug;
        if ( Debug )
        {
          if ( SizeOfMdl )
            *SizeOfMdl = v17;
          goto LABEL_29;
        }
        WPP_IFR_SF_Dd(FxDriverGlobals, 2u, 6u, 0xCu, WPP_FxRequestBufferKm_cpp_Traceguids, BufferLength, -1073741670);
        return 3221225626LL;
      }
      v19 = this->u.RefMdl.Mdl;
LABEL_33:
      *Mdl = v19;
      return 0LL;
    }
    goto LABEL_38;
  }
  GetBuffer = (__int64 (*)(void))this->u.Memory.Memory->GetBuffer;
  if ( this->u.Memory.Offsets )
    Memory = this->u.Memory.Offsets->BufferOffset + GetBuffer();
  else
    Memory = GetBuffer();
  if ( !Memory )
LABEL_38:
    Memory = (unsigned __int64)this->u.Memory.Memory;
  v22 = FxRequestBuffer::GetBufferLength(this);
  v23 = v22;
  v24 = MmSizeOfMdl((PVOID)Memory, (int)v22);
  v26 = ReuseMdl;
  v32 = v24;
  if ( ReuseMdl && v24 <= *SizeOfMdl )
  {
    if ( ((*MdlToFree)->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages((*MdlToFree)->MappedSystemVa, *MdlToFree);
    *Mdl = *MdlToFree;
    goto LABEL_56;
  }
  v26 = 0;
  if ( *MdlToFree )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      FxMdlFreeDebug(FxDriverGlobals, *MdlToFree);
    else
      IoFreeMdl(*MdlToFree);
    *MdlToFree = 0LL;
    if ( SizeOfMdl )
      *SizeOfMdl = 0LL;
  }
  if ( FxDriverGlobals->FxVerifierOn )
    v27 = FxMdlAllocateDebug(FxDriverGlobals, 0LL, (void *)Memory, v23, Irp, 0, retaddr);
  else
    v27 = IoAllocateMdl((PVOID)Memory, v23, 0, 0, 0LL);
  *Mdl = v27;
  if ( !v27 )
  {
    WPP_IFR_SF_Dd(FxDriverGlobals, 2u, 6u, 0xAu, WPP_FxRequestBufferKm_cpp_Traceguids, v23, -1073741670);
    return 3221225626LL;
  }
  if ( SizeOfMdl )
  {
    *SizeOfMdl = v32;
LABEL_56:
    if ( v26 == 1 )
    {
      v25 = *Mdl;
      v25->Next = 0LL;
      v25->Size = 8 * ((((Memory & 0xFFF) + v23 + 4095) >> 12) + 6);
      v25->ByteOffset = Memory & 0xFFF;
      v25->MdlFlags = 0;
      v25->StartVa = (void *)(Memory & 0xFFFFFFFFFFFFF000uLL);
      v25->ByteCount = v23;
    }
  }
  v28 = FxProbeAndLockWithAccess(*Mdl, (char)v25, Operation);
  v29 = v28;
  if ( v28 >= 0 )
  {
    *UnlockWhenFreed = 1;
    goto LABEL_65;
  }
  WPP_IFR_SF_qd(FxDriverGlobals, 2u, 6u, 0xBu, WPP_FxRequestBufferKm_cpp_Traceguids, *Mdl, v28);
  if ( !v26 )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      FxMdlFreeDebug(FxDriverGlobals, *Mdl);
    else
      IoFreeMdl(*Mdl);
  }
  *Mdl = 0LL;
  return v29;
}
