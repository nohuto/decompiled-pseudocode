/*
 * XREFs of ?_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0039030
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0040140 (memmove.c)
 *     WPP_IFR_SF_qdd @ 0x1C0071D08 (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryDeviceText(FxPkgPnp *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int Status; // esi
  FxPkgPnp_vtbl *v7; // rax
  FxPkgPnp_vtbl *v8; // r8
  _IRP *m_Irp; // rbx
  unsigned int Length; // ecx
  _WORD *Release; // rbx
  __int64 v13; // rax
  SIZE_T v14; // r14
  PVOID PoolWithTag; // rax
  unsigned __int64 v16; // rsi
  FxDeviceBase *m_DeviceBase; // r10
  __int64 m_ObjectSize; // rax
  const void *_a1; // r10

  m_Globals = This->m_Globals;
  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  Status = Irp->m_Irp->IoStatus.Status;
  v7 = This[1].__vftable;
  v8 = v7;
  if ( v7 )
  {
    while ( LODWORD(v8->AddRefOverride) != CurrentStackLocation->Parameters.Create.Options )
    {
      v8 = (FxPkgPnp_vtbl *)v8->SelfDestruct;
      if ( !v8 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    v8 = 0LL;
  }
  if ( v8 )
    goto LABEL_13;
  v8 = This[1].__vftable;
  if ( v7 )
  {
    while ( LODWORD(v8->AddRefOverride) != *(_DWORD *)&This[1].m_Type )
    {
      v8 = (FxPkgPnp_vtbl *)v8->SelfDestruct;
      if ( !v8 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v8 = 0LL;
  }
  if ( v8 )
  {
LABEL_13:
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      if ( Length != 1 )
        goto LABEL_7;
      Release = v8->Release;
    }
    else
    {
      Release = v8->~FxObject;
    }
    if ( Release )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( Release[v13] );
      v14 = 2 * v13 + 2;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, m_Globals->Tag);
      v16 = (unsigned __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Release, v14);
        Irp->m_Irp->IoStatus.Information = v16;
        Status = 0;
      }
      else
      {
        Status = -1073741670;
        m_DeviceBase = This->m_DeviceBase;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !(_WORD)m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qdd(
          m_Globals,
          2u,
          0xCu,
          0xCu,
          WPP_FxPkgPdo_cpp_Traceguids,
          _a1,
          Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
          -1073741670);
      }
    }
  }
LABEL_7:
  m_Irp = Irp->m_Irp;
  Irp->m_Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp->m_Irp, 0);
  Irp->m_Irp = 0LL;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&This->m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
  return Status;
}
