/*
 * XREFs of ?_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002DE80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxCalculateTotalMultiSzStringSize@@YA_KPEBG@Z @ 0x1C002E074 (-FxCalculateTotalMultiSzStringSize@@YA_KPEBG@Z.c)
 *     WPP_IFR_SF_qLd @ 0x1C002E0B8 (WPP_IFR_SF_qLd.c)
 *     memmove @ 0x1C003C440 (memmove.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryId(FxPkgPnp *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  int globals; // edi
  int _a3; // ebx
  FxDeviceBase *m_DeviceBase; // rbp
  __int64 v8; // rax
  SIZE_T v9; // r14
  PVOID v10; // rax
  unsigned __int64 v11; // rdi
  _IRP *m_Irp; // rbx
  const wchar_t *m_Lock; // rdi
  SIZE_T v15; // rbp
  PVOID PoolWithTag; // rax
  unsigned __int64 v17; // r14
  FxDeviceBase *v18; // rax
  const void *_a2; // rax
  FxDeviceBase *v20; // rax
  const void *v21; // rax

  m_Globals = This->m_Globals;
  globals = Irp->m_Irp->IoStatus.Status;
  _a3 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( _a3 )
  {
    if ( _a3 <= 0 )
      goto LABEL_25;
    if ( _a3 <= 2 )
    {
      if ( _a3 == 1 )
        m_Lock = (const wchar_t *)This[1].m_NPLock.m_Lock;
      else
        m_Lock = *(const wchar_t **)&This[1].m_PnpStateAndCaps.ByEnum;
      if ( m_Lock )
        v15 = FxCalculateTotalMultiSzStringSize(m_Lock);
      else
        v15 = 4LL;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, m_Globals->Tag);
      v17 = (unsigned __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        if ( m_Lock )
          memmove(PoolWithTag, m_Lock, v15);
        else
          memset(PoolWithTag, 0, v15);
        Irp->m_Irp->IoStatus.Information = v17;
        goto LABEL_11;
      }
      goto LABEL_34;
    }
    if ( _a3 == 3 )
    {
      m_DeviceBase = *(FxDeviceBase **)&This[1].m_NPLock.m_DbgFlagIsInitialized;
    }
    else
    {
      if ( _a3 != 5 )
      {
LABEL_25:
        if ( globals >= 0 )
          goto LABEL_12;
        goto LABEL_26;
      }
      m_DeviceBase = *(FxDeviceBase **)&This[1].m_PnpCapsUINumber;
    }
  }
  else
  {
    m_DeviceBase = This[1].m_DeviceBase;
  }
  if ( !m_DeviceBase )
    goto LABEL_25;
  v8 = -1LL;
  do
    ++v8;
  while ( *((_WORD *)&m_DeviceBase->FxNonPagedObject::FxObject::__vftable + v8) );
  v9 = 2 * v8 + 2;
  v10 = ExAllocatePoolWithTag(PagedPool, v9, m_Globals->Tag);
  v11 = (unsigned __int64)v10;
  if ( v10 )
  {
    memmove(v10, m_DeviceBase, v9);
    Irp->m_Irp->IoStatus.Information = v11;
LABEL_11:
    globals = 0;
    goto LABEL_12;
  }
LABEL_34:
  globals = -1073741670;
LABEL_26:
  Irp->m_Irp->IoStatus.Information = 0LL;
  if ( globals == -1073741637 )
  {
    v18 = This->m_DeviceBase;
    if ( v18->m_ObjectSize )
      _a2 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a2 = 0LL;
    WPP_IFR_SF_qLd(m_Globals, (unsigned __int8)Irp, 0xCu, 0x14u, WPP_FxPkgPdo_cpp_Traceguids, _a2, _a3, -1073741637);
  }
  else
  {
    v20 = This->m_DeviceBase;
    if ( v20->m_ObjectSize )
      v21 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v21 = 0LL;
    WPP_IFR_SF_qLd(m_Globals, (unsigned __int8)Irp, 0xCu, 0x15u, WPP_FxPkgPdo_cpp_Traceguids, v21, _a3, globals);
  }
LABEL_12:
  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = globals;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return (unsigned int)globals;
}
