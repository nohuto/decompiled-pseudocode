/*
 * XREFs of ?ProbeAndLockForRead@FxRequest@@QEAAJPEAXKPEAPEAVFxRequestMemory@@@Z @ 0x1C0077C40
 * Callers:
 *     imp_WdfRequestProbeAndLockUserBufferForRead @ 0x1C00752D0 (imp_WdfRequestProbeAndLockUserBufferForRead.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 *     ?Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C007B3CC (-Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?SetMdl@FxRequestMemory@@QEAAXPEAVFxRequest@@PEAU_MDL@@PEAX_KE@Z @ 0x1C007B45C (-SetMdl@FxRequestMemory@@QEAAXPEAVFxRequest@@PEAU_MDL@@PEAX_KE@Z.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C007E48C (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     FxProbeAndLockForRead @ 0x1C009E754 (FxProbeAndLockForRead.c)
 *     ?Vf_VerifyProbeAndLock@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C8CA8 (-Vf_VerifyProbeAndLock@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall FxRequest::ProbeAndLockForRead(
        FxRequest *this,
        void *Buffer,
        unsigned int Length,
        FxRequestMemory **MemoryObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int64 _a2; // r12
  int v9; // ebx
  int result; // eax
  const void *_a1; // rsi
  _MDL *Debug; // rax
  char v13; // dl
  _MDL *v14; // rbx
  int v15; // ebp
  int _a3; // eax
  _WDF_OBJECT_ATTRIBUTES *v17; // rdx
  bool v18; // zf
  PVOID MappedSystemVa; // r15
  int v20; // eax
  FxRequestMemory *v21; // r14
  unsigned __int8 traceGuid; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxRequestMemory *pMemory; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  _a2 = Length;
  pMemory = 0LL;
  if ( !Length )
  {
    v9 = -1073741592;
    WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x1Cu, WPP_FxRequestKm_cpp_Traceguids, -1073741592);
    return v9;
  }
  if ( !this->m_Irp.m_Irp )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v9 = -1073741808;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x1Du, WPP_FxRequestKm_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return v9;
  }
  if ( m_Globals->FxVerifierOn )
    result = FxRequest::Vf_VerifyProbeAndLock(this, m_Globals);
  else
    result = 0;
  if ( result >= 0 )
  {
    if ( m_Globals->FxVerifierOn )
      Debug = FxMdlAllocateDebug(m_Globals, this, Buffer, _a2, traceGuid, 1u, retaddr);
    else
      Debug = IoAllocateMdl(Buffer, _a2, 0, 1u, 0LL);
    v14 = Debug;
    if ( !Debug )
    {
      v15 = -1073741670;
      WPP_IFR_SF_d(m_Globals, 2u, 0x10u, 0x1Eu, WPP_FxRequestKm_cpp_Traceguids, -1073741670);
      return v15;
    }
    _a3 = FxProbeAndLockForRead(Debug, v13);
    v15 = _a3;
    if ( _a3 >= 0 )
    {
      if ( (v14->MdlFlags & 5) != 0 )
        MappedSystemVa = v14->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v14, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10);
      if ( MappedSystemVa )
      {
        v20 = FxRequestMemory::Create(m_Globals, v17, &pMemory);
        v21 = pMemory;
        v15 = v20;
        if ( v20 >= 0 )
        {
          v15 = FxObject::Commit(pMemory, 0LL, 0LL, this, 1u);
          if ( v15 >= 0 )
          {
            FxRequestMemory::SetMdl(v21, this, v14, MappedSystemVa, _a2, 1u);
            *MemoryObject = v21;
            return v15;
          }
        }
        if ( v21 )
          FxObject::DeleteFromFailedCreate(v21);
      }
      else
      {
        v15 = -1073741670;
      }
      MmUnlockPages(v14);
      v18 = m_Globals->FxVerifierOn == 0;
    }
    else
    {
      WPP_IFR_SF_qdd(m_Globals, 2u, 0x10u, 0x1Fu, WPP_FxRequestKm_cpp_Traceguids, Buffer, _a2, _a3);
      v18 = m_Globals->FxVerifierOn == 0;
    }
    if ( v18 )
      IoFreeMdl(v14);
    else
      FxMdlFreeDebug(m_Globals, v14);
    return v15;
  }
  return result;
}
