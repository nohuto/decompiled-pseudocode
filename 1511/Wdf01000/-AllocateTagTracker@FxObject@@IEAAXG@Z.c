/*
 * XREFs of ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C006E8D8
 * Callers:
 *     imp_WdfMemoryCreate @ 0x1C000D480 (imp_WdfMemoryCreate.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C002E310 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BA470 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 * Callees:
 *     ?CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C006E960 (-CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAV.c)
 */

void __fastcall FxObject::AllocateTagTracker(FxObject *this, unsigned __int16 Type)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  unsigned int v4; // eax
  FxDriverGlobalsDebugExtension *DebugExtension; // rcx
  FxObjectDebugInfo *ObjectDebugInfo; // r8
  unsigned __int16 *p_ObjectType; // rcx
  FxObjectDebugInfo *v9; // rdx
  void *v10; // [rsp+28h] [rbp-10h]

  m_Globals = this->m_Globals;
  v4 = 0;
  DebugExtension = m_Globals->DebugExtension;
  if ( DebugExtension )
  {
    ObjectDebugInfo = DebugExtension->ObjectDebugInfo;
    if ( DebugExtension->ObjectDebugInfo )
    {
      if ( FxObjectsInfoCount )
      {
        p_ObjectType = &FxObjectsInfo[0].ObjectType;
        v9 = ObjectDebugInfo;
        while ( Type != v9->ObjectType )
        {
          if ( Type > *p_ObjectType )
          {
            ++v4;
            ++v9;
            p_ObjectType += 12;
            if ( v4 < FxObjectsInfoCount )
              continue;
          }
          return;
        }
        if ( (ObjectDebugInfo[v4].u.DebugFlags & 1) != 0 )
        {
          FxTagTracker::CreateAndInitialize(
            (FxTagTracker **)&this[-1].m_ChildEntry,
            m_Globals,
            FxTagTrackerTypeHandle,
            0,
            this,
            v10);
          this->m_ObjectFlags |= 0x200u;
        }
      }
    }
  }
}
