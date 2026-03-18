/*
 * XREFs of ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C0010B80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0016B3C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F19C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F260 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C003F364 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003FD34 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4924 (-Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int8 __fastcall FxRequestBase::Dispose(FxRequestBase *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxRequestContext *m_RequestContext; // rcx
  FxRequestContext *v4; // rbx
  void (__fastcall *v5)(FxRequestContext *); // rax
  FxRequestContext_vtbl *v6; // rcx
  _MDL *Information; // rcx
  FX_POOL_TRACKER *m_RequestMemory; // rsi

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    FxRequestBase::Vf_VerifyDispose(this, m_Globals);
  if ( (this->m_ObjectFlags & 0x400) != 0 )
    FxObject::CallCleanupCallbacks(this);
  m_RequestContext = this->m_RequestContext;
  if ( m_RequestContext )
  {
    if ( this->m_IrpAllocation && this->m_Irp.m_Irp )
    {
      m_RequestContext->ReleaseAndRestore(m_RequestContext, this);
      v4 = this->m_RequestContext;
      if ( v4 )
      {
        v5 = v4->~FxRequestContext;
        if ( (char *)v5 == (char *)FxIoContext::`scalar deleting destructor' )
        {
          v6 = v4[1].__vftable;
          v4->__vftable = (FxRequestContext_vtbl *)FxIoContext::`vftable';
          if ( v6 )
          {
            FxPoolFree(v6);
            v4[1].__vftable = 0LL;
          }
          Information = (_MDL *)v4[1].m_CompletionParams.IoStatus.Information;
          v4[1].m_CompletionParams.Parameters.Write.Offset = 0LL;
          *((_BYTE *)&v4[1].m_CompletionParams.Parameters.Usb + 32) = 0;
          if ( Information )
          {
            if ( *((_BYTE *)&v4[1].m_CompletionParams.Parameters.Usb + 33) )
            {
              MmUnlockPages(Information);
              *((_BYTE *)&v4[1].m_CompletionParams.Parameters.Usb + 33) = 0;
            }
            if ( *(_BYTE *)(v4[1].m_CompletionParams.Parameters.Others.Argument1.Value + 316) )
              FxMdlFreeDebug(
                (_FX_DRIVER_GLOBALS *)v4[1].m_CompletionParams.Parameters.Write.Buffer,
                (_MDL *)v4[1].m_CompletionParams.IoStatus.Information);
            else
              IoFreeMdl((PMDL)v4[1].m_CompletionParams.IoStatus.Information);
            v4[1].m_CompletionParams.IoStatus.Information = 0LL;
          }
          v4->__vftable = (FxRequestContext_vtbl *)FxRequestContext::`vftable';
          if ( ((unsigned __int16)v4 & 0xFFF) != 0 )
          {
            m_RequestMemory = (FX_POOL_TRACKER *)v4[-1].m_RequestMemory;
            if ( *(_BYTE *)(*(_QWORD *)&v4[-1].m_RequestType + 264LL) )
            {
              if ( FxIsPagedPoolType(m_RequestMemory->PoolType) )
                FxPoolRemovePagedAllocateTracker(m_RequestMemory);
              else
                FxPoolRemoveNonPagedAllocateTracker(m_RequestMemory);
              memset(m_RequestMemory, 0, m_RequestMemory->Size + 64);
            }
            ExFreePoolWithTag(m_RequestMemory, 0);
          }
          else
          {
            ExFreePoolWithTag(v4, 0);
          }
        }
        else
        {
          ((void (__fastcall *)(FxRequestContext *, __int64))v5)(this->m_RequestContext, 1LL);
        }
      }
      this->m_RequestContext = 0LL;
    }
    else
    {
      m_RequestContext->Dispose(m_RequestContext);
    }
  }
  return 0;
}
