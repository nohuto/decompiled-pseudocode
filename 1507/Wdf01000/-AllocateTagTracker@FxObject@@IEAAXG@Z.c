/*
 * XREFs of ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C007A938
 * Callers:
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C0012998 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     imp_WdfMemoryCreate @ 0x1C0025EE0 (imp_WdfMemoryCreate.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C007A758 (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 */

void __fastcall FxObject::AllocateTagTracker(FxObject *this, unsigned __int16 Type)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxDriverGlobalsDebugExtension *DebugExtension; // rcx
  FxObjectDebugInfo *ObjectDebugInfo; // rcx
  __int64 v7; // rax
  unsigned __int16 *p_ObjectType; // rdx
  FxObjectDebugInfo *v9; // r8
  FxTagTracker *v10; // rax
  _LIST_ENTRY *Caller; // [rsp+38h] [rbp+0h]

  m_Globals = this->m_Globals;
  DebugExtension = m_Globals->DebugExtension;
  if ( DebugExtension )
  {
    ObjectDebugInfo = DebugExtension->ObjectDebugInfo;
    if ( ObjectDebugInfo )
    {
      v7 = 0LL;
      if ( FxObjectsInfoCount )
      {
        p_ObjectType = &FxObjectsInfo[0].ObjectType;
        v9 = ObjectDebugInfo;
        while ( Type != v9->ObjectType )
        {
          if ( Type > *p_ObjectType )
          {
            v7 = (unsigned int)(v7 + 1);
            ++v9;
            p_ObjectType += 12;
            if ( (unsigned int)v7 < FxObjectsInfoCount )
              continue;
          }
          return;
        }
        if ( (ObjectDebugInfo[v7].u.DebugFlags & 1) != 0 )
        {
          v10 = (FxTagTracker *)FxPoolAllocator(
                                  m_Globals,
                                  (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                                  ExDefaultNonPagedPoolType,
                                  0x500uLL,
                                  m_Globals->Tag,
                                  Caller);
          if ( v10 )
            FxTagTracker::FxTagTracker(v10, m_Globals, FxTagTrackerTypeHandle, 0, this);
          if ( v10 )
            this[-1].m_ChildEntry.Flink = (_LIST_ENTRY *)v10;
          else
            WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0xAu, WPP_FxTagTracker_hpp_Traceguids, -1073741670);
          this->m_ObjectFlags |= 0x200u;
        }
      }
    }
  }
}
