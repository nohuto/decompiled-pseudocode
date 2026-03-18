/*
 * XREFs of imp_WdfMemoryAssignBuffer @ 0x1C0072EE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfMemoryAssignBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Memory,
        void *Buffer,
        unsigned __int64 BufferSize)
{
  FxMemoryBufferPreallocated *v6; // rcx
  __int64 Offset; // r8
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxMemoryBufferPreallocated *pMemory; // [rsp+48h] [rbp+10h] BYREF

  if ( !Memory )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1022uLL);
  v6 = (FxMemoryBufferPreallocated *)(~Memory & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Memory & 1) != 0 )
  {
    Offset = LOWORD(v6->FxMemoryObject::FxObject::__vftable);
    v6 = (FxMemoryBufferPreallocated *)((char *)v6 - Offset);
  }
  if ( v6->m_Type == 4130 )
  {
    pMemory = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pMemory, (void *)Memory, 0x1022u, Offset);
    v6 = pMemory;
  }
  if ( !Buffer )
    FxVerifierNullBugCheck(v6->m_Globals, retaddr);
  if ( BufferSize )
  {
    v6->m_pBuffer = Buffer;
    result = 0LL;
    v6->m_BufferSize = BufferSize;
  }
  else
  {
    WPP_IFR_SF_d(v6->m_Globals, 2u, 0x12u, 0xBu, WPP_FxMemoryBufferPreallocatedAPI_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  return result;
}
