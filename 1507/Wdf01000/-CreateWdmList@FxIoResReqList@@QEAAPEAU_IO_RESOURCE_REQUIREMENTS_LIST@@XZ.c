/*
 * XREFs of ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C0009C00
 * Callers:
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011B90 (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0012DDC (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     memset @ 0x1C00333C0 (memset.c)
 */

_IO_RESOURCE_REQUIREMENTS_LIST *__fastcall FxIoResReqList::CreateWdmList(FxIoResReqList *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxCollectionInternal *v2; // r14
  __int64 m_Count; // r9
  unsigned int v4; // r8d
  unsigned int *v5; // rbx
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY **p_Blink; // rdx
  unsigned int v9; // eax
  unsigned __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // esi
  _DWORD *PoolWithTag; // rax
  char *v17; // rdi
  _LIST_ENTRY *i; // rdx
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *v20; // r8
  _LIST_ENTRY **v21; // r8
  _LIST_ENTRY **v22; // rdx
  _LIST_ENTRY *v24; // rax

  m_Globals = this->m_Globals;
  v2 = &this->FxCollectionInternal;
  m_Count = this->m_Count;
  v4 = 0;
  v5 = 0LL;
  if ( (_DWORD)m_Count )
  {
    Flink = this->m_ListHead.Flink;
    while ( 1 )
    {
      p_Blink = &Flink[-1].Blink;
      if ( p_Blink == (_LIST_ENTRY **)v2 )
        break;
      v9 = v4 + LODWORD((*p_Blink)[7].Blink);
      if ( v9 < v4 )
        goto $Overflow;
      Flink = p_Blink[1];
      v4 = v9;
    }
    v10 = 40LL * (unsigned int)(m_Count - 1);
    if ( v10 > 0xFFFFFFFF
      || (v11 = v10 + 72, (unsigned int)v10 >= 0xFFFFFFB8)
      || (v12 = 32LL * v4, v12 > 0xFFFFFFFF)
      || (v13 = v12 + v11, (unsigned int)v12 + v11 < v11)
      || (v14 = 32 * m_Count, (unsigned __int64)(32 * m_Count) > 0xFFFFFFFF)
      || v13 < v14 )
    {
$Overflow:
      WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0xCu, WPP_FxResourceCollection_cpp_Traceguids);
      return 0LL;
    }
    v15 = v13 - v14;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, m_Globals->Tag);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      v17 = (char *)(PoolWithTag + 8);
      memset(PoolWithTag, 0, v15);
      v5[1] = this->m_InterfaceType;
      v5[3] = this->m_SlotNumber;
      *v5 = v15;
      v5[7] = v2->m_Count;
      for ( i = this->m_ListHead.Flink; ; i = v22[1] )
      {
        v22 = &i[-1].Blink;
        if ( v22 == (_LIST_ENTRY **)v2 )
          break;
        v19 = *v22;
        *(_DWORD *)v17 = 65537;
        *((_DWORD *)v17 + 1) = v19[7].Blink;
        v17 += 8;
        v20 = v19[8].Flink;
        while ( 1 )
        {
          v21 = &v20[-1].Blink;
          if ( v21 == &v19[7].Blink )
            break;
          v24 = *v21;
          *(_LIST_ENTRY *)v17 = *(_LIST_ENTRY *)((char *)*v21 + 104);
          *((_LIST_ENTRY *)v17 + 1) = *(_LIST_ENTRY *)((char *)v24 + 120);
          v20 = v21[1];
          v17 += 32;
        }
      }
    }
  }
  return (_IO_RESOURCE_REQUIREMENTS_LIST *)v5;
}
