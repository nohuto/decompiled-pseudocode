/*
 * XREFs of ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0009A8C
 * Callers:
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0009924 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 * Callees:
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C000FCC0 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001576C (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0015E00 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 */

__int64 __fastcall FxIoResList::BuildFromWdmList(FxIoResList *this, _IO_RESOURCE_DESCRIPTOR **WdmResourceList)
{
  unsigned int v2; // ebx
  int v5; // r14d
  unsigned int v6; // r12d
  _IO_RESOURCE_DESCRIPTOR *p_u; // rbp
  FxObject *v8; // rax
  FxObject *v9; // rdi

  v2 = 0;
  v5 = 0;
  v6 = *(_DWORD *)&(*WdmResourceList)->Flags;
  p_u = (_IO_RESOURCE_DESCRIPTOR *)&(*WdmResourceList)->u;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = (FxObject *)FxObjectHandleAlloc(
                         this->m_Globals,
                         ExDefaultNonPagedPoolType,
                         0xA8uLL,
                         0,
                         0LL,
                         0,
                         FxObjectTypeInternal);
      v9 = v8;
      if ( v8 )
      {
        FxObject::FxObject(v8, 0x1016u, 0, this->m_Globals);
        v9->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
        *(_OWORD *)&v9[1].__vftable = *(_OWORD *)&p_u->Option;
        *(_OWORD *)&v9[1].m_Globals = *(_OWORD *)&p_u->u.BusNumber.MaxBusNumber;
      }
      else
      {
        v9 = 0LL;
      }
      if ( !v9 )
        break;
      FxObject::AssignParentObject(v9, this);
      if ( !FxCollectionInternal::Add(&this->FxCollectionInternal, this->m_Globals, v9) )
        break;
      ++p_u;
      if ( ++v5 >= v6 )
        goto LABEL_7;
    }
    return (unsigned int)-1073741670;
  }
LABEL_7:
  if ( !FxCollectionInternal::Add(&this->m_OwningList->FxCollectionInternal, this->m_OwningList->m_Globals, this) )
    return (unsigned int)-1073741670;
  *WdmResourceList = p_u;
  return v2;
}
