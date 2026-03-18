/*
 * XREFs of ?_PnpQueryBusInformation@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0038220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 */

__int64 __fastcall FxPkgPdo::_PnpQueryBusInformation(FxPkgPnp *This, FxIrp *Irp)
{
  __int64 v4; // rdi
  _FX_DRIVER_GLOBALS *v5; // r14
  _QWORD *PoolWithTag; // rax
  unsigned int Status; // ebx
  __int64 v9; // rax
  const void *_a1; // rax

  v4 = *(_QWORD *)(*(_QWORD *)&This->m_DeviceBase[1].m_ObjectFlags + 648LL);
  if ( *(_DWORD *)(v4 + 1088) )
  {
    v5 = *(_FX_DRIVER_GLOBALS **)(v4 + 16);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, v5->Tag);
    if ( PoolWithTag )
    {
      Status = 0;
      *(_OWORD *)PoolWithTag = *(_OWORD *)(v4 + 1088);
      PoolWithTag[2] = *(_QWORD *)(v4 + 1104);
      Irp->m_Irp->IoStatus.Information = (unsigned __int64)PoolWithTag;
    }
    else
    {
      Status = -1073741670;
      Irp->m_Irp->IoStatus.Information = 0LL;
      v9 = *(_QWORD *)(v4 + 96);
      if ( *(_WORD *)(v9 + 10) )
        _a1 = (const void *)(v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qd(v5, 2u, 0xCu, 0x1Bu, WPP_FxPkgPnp_cpp_Traceguids, _a1, -1073741670);
    }
  }
  else
  {
    Status = Irp->m_Irp->IoStatus.Status;
  }
  return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
}
