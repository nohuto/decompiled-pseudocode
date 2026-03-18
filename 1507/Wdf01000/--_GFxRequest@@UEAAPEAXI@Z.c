/*
 * XREFs of ??_GFxRequest@@UEAAPEAXI@Z @ 0x1C0020800
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C00209D0 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C00264A4 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C00326D4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C007702C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 */

FxRequest *__fastcall FxRequest::`scalar deleting destructor'(FxRequest *this, char a2)
{
  _MDL *m_AllocatedMdl; // rcx
  FxRequestContext *m_RequestContext; // rcx
  _IRP *m_Irp; // rdi
  FxRequestTimer *m_Timer; // rcx
  _POOL_TYPE *p_Blink; // rax
  _POOL_TYPE *v9; // rdi
  _POOL_TYPE *v10; // rcx
  FxRequestContext *v12; // rcx
  unsigned __int8 IsPagedPoolType; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  _POOL_TYPE **v16; // rax
  KIRQL v17; // al
  __int64 v18; // rdx
  _POOL_TYPE **v19; // rcx
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
    v12 = this->m_RequestContext;
    if ( v12 )
      ((void (__fastcall *)(FxRequestContext *, __int64))v12->~FxRequestContext)(v12, 1LL);
  }
  if ( m_Irp && this->m_IrpAllocation == 1 )
    IoFreeIrp(this->m_Irp.m_Irp);
  m_Timer = this->m_Timer;
  if ( m_Timer )
    FxRequestTimer::`scalar deleting destructor'(m_Timer, a2);
  FxNonPagedObject::~FxNonPagedObject(this);
  if ( (a2 & 1) != 0 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      p_Blink = (_POOL_TYPE *)&this[-1].m_ForwardProgressList.Blink;
    else
      p_Blink = (_POOL_TYPE *)this;
    if ( !p_Blink )
      KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
    if ( ((unsigned __int16)p_Blink & 0xFFF) != 0 )
    {
      v9 = (_POOL_TYPE *)*((_QWORD *)p_Blink - 2);
      if ( *(_BYTE *)(*((_QWORD *)p_Blink - 1) + 264LL) )
      {
        IsPagedPoolType = FxIsPagedPoolType(v9[10]);
        v14 = *((_QWORD *)v9 + 2);
        if ( IsPagedPoolType )
        {
          ExAcquireFastMutex((PFAST_MUTEX)(v14 + 40));
          v15 = *(_QWORD *)v9;
          v16 = (_POOL_TYPE **)*((_QWORD *)v9 + 1);
          if ( *(_POOL_TYPE **)(*(_QWORD *)v9 + 8LL) != v9 || *v16 != v9 )
            __fastfail(3u);
          *v16 = (_POOL_TYPE *)v15;
          *(_QWORD *)(v15 + 8) = v16;
          *(_QWORD *)(*((_QWORD *)v9 + 2) + 120LL) -= *((_QWORD *)v9 + 4);
          --*(_DWORD *)(*((_QWORD *)v9 + 2) + 132LL);
          ExReleaseFastMutex((PFAST_MUTEX)(*((_QWORD *)v9 + 2) + 40LL));
        }
        else
        {
          v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 8));
          v18 = *(_QWORD *)v9;
          v19 = (_POOL_TYPE **)*((_QWORD *)v9 + 1);
          if ( *(_POOL_TYPE **)(*(_QWORD *)v9 + 8LL) != v9 || *v19 != v9 )
            __fastfail(3u);
          *v19 = (_POOL_TYPE *)v18;
          *(_QWORD *)(v18 + 8) = v19;
          *(_QWORD *)(*((_QWORD *)v9 + 2) + 112LL) -= *((_QWORD *)v9 + 4);
          --*(_DWORD *)(*((_QWORD *)v9 + 2) + 128LL);
          KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)v9 + 2) + 8LL), v17);
        }
        memset(v9, 0, *((_QWORD *)v9 + 4) + 64LL);
      }
      v10 = v9;
    }
    else
    {
      v10 = p_Blink;
    }
    ExFreePoolWithTag(v10, 0);
  }
  return this;
}
