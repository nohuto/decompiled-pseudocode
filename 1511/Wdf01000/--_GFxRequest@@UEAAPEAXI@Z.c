/*
 * XREFs of ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C00085D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00058A0 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C002E38C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C0057374 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C0069DBC (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C006C92C (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C00708CC (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

FxRequest *__fastcall FxRequest::`scalar deleting destructor'(FxRequest *this, char a2, unsigned int a3)
{
  _MDL *m_AllocatedMdl; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rdi
  FxRequestTimer *m_Timer; // rcx
  FxRequest *v9; // rax
  FX_POOL_TRACKER *m_InternalContext; // rdi
  FX_POOL_TRACKER *v11; // rcx
  FxRequestContext *v13; // rcx
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  this->__vftable = (FxRequest_vtbl *)&FxRequestBase::`vftable';
  m_AllocatedMdl = this->m_AllocatedMdl;
  if ( m_AllocatedMdl )
  {
    if ( this->m_Globals->FxVerifierOn )
      FxMdlFreeDebug(this->m_Globals, m_AllocatedMdl);
    else
      IoFreeMdl(m_AllocatedMdl);
  }
  m_RequestContext = this->m_RequestContext;
  m_Irp = this->m_Irp.m_Irp;
  if ( m_RequestContext )
  {
    if ( m_Irp )
      m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
    v13 = this->m_RequestContext;
    if ( v13 )
      ((void (__fastcall *)(FxRequestContext *, __int64))v13->~FxRequestContext)(v13, 1LL);
  }
  if ( m_Irp && this->m_IrpAllocation == 1 )
    IoFreeIrp(this->m_Irp.m_Irp);
  m_Timer = this->m_Timer;
  if ( m_Timer )
    FxRequestTimer::`scalar deleting destructor'(m_Timer, a2);
  FxNonPagedObject::~FxNonPagedObject(this, a2, a3);
  if ( (a2 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      v9 = (FxRequest *)((char *)this - 32);
    else
      v9 = this;
    if ( !v9 )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)v9 & 0xFFF) != 0 )
    {
      m_InternalContext = (FX_POOL_TRACKER *)v9[-1].m_InternalContext;
      if ( *(_BYTE *)(*(_QWORD *)&v9[-1].m_Presented + 264LL) )
      {
        if ( FxIsPagedPoolType(m_InternalContext->PoolType) )
          FxPoolRemovePagedAllocateTracker(m_InternalContext);
        else
          FxPoolRemoveNonPagedAllocateTracker(m_InternalContext);
        memset(m_InternalContext, 0, m_InternalContext->Size + 64);
      }
      v11 = m_InternalContext;
    }
    else
    {
      v11 = (FX_POOL_TRACKER *)v9;
    }
    ExFreePoolWithTag(v11, 0);
  }
  return this;
}
