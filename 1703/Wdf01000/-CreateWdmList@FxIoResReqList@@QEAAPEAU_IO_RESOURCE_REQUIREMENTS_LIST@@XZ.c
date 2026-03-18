/*
 * XREFs of ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C0016EB4
 * Callers:
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002914C (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C002BF9C (-PnpQueryResourceRequirements@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     memset @ 0x1C0040480 (memset.c)
 */

_IO_RESOURCE_REQUIREMENTS_LIST *__fastcall FxIoResReqList::CreateWdmList(FxIoResReqList *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxCollectionInternal *v2; // r14
  __int64 m_Count; // r10
  unsigned int v4; // r11d
  unsigned int *v5; // rbx
  _LIST_ENTRY *i; // r9
  _LIST_ENTRY **p_Blink; // r9
  unsigned int v9; // r8d
  int v10; // eax
  unsigned int v11; // edx
  unsigned __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // esi
  unsigned int v18; // eax
  unsigned int v19; // esi
  _DWORD *PoolWithTag; // rax
  char *v21; // rdi
  _LIST_ENTRY *j; // rdx
  _LIST_ENTRY *v23; // rcx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY **v25; // r8
  _LIST_ENTRY **v26; // rdx
  _LIST_ENTRY *v28; // rax

  m_Globals = this->m_Globals;
  v2 = &this->FxCollectionInternal;
  m_Count = this->m_Count;
  v4 = 0;
  v5 = 0LL;
  if ( (_DWORD)m_Count )
  {
    for ( i = this->m_ListHead.Flink; ; i = p_Blink[1] )
    {
      p_Blink = &i[-1].Blink;
      if ( p_Blink == (_LIST_ENTRY **)v2 )
        break;
      v9 = v4;
      v10 = -1;
      v11 = v4 + LODWORD((*p_Blink)[7].Blink);
      if ( v11 >= v4 )
        v10 = v4 + LODWORD((*p_Blink)[7].Blink);
      v4 = v10;
      if ( v11 < v9 )
        goto LABEL_22;
    }
    v12 = 40LL * (unsigned int)(m_Count - 1);
    if ( v12 > 0xFFFFFFFF
      || (v13 = v12 + 72, v13 < 0x48)
      || (v14 = v13, v15 = 32LL * v4, v15 > 0xFFFFFFFF)
      || (v16 = v14 + v15, v16 < v14)
      || (v17 = v16, v18 = 32 * m_Count, (unsigned __int64)(32 * m_Count) > 0xFFFFFFFF)
      || v17 < v18 )
    {
LABEL_22:
      WPP_IFR_SF_(m_Globals, 2u, 0xCu, 0xCu, WPP_FxResourceCollection_cpp_Traceguids);
      return 0LL;
    }
    v19 = v17 - v18;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19, m_Globals->Tag);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      v21 = (char *)(PoolWithTag + 8);
      memset(PoolWithTag, 0, v19);
      v5[1] = this->m_InterfaceType;
      v5[3] = this->m_SlotNumber;
      *v5 = v19;
      v5[7] = v2->m_Count;
      for ( j = this->m_ListHead.Flink; ; j = v26[1] )
      {
        v26 = &j[-1].Blink;
        if ( v26 == (_LIST_ENTRY **)v2 )
          break;
        v23 = *v26;
        *(_DWORD *)v21 = 65537;
        *((_DWORD *)v21 + 1) = v23[7].Blink;
        v21 += 8;
        Flink = v23[8].Flink;
        while ( 1 )
        {
          v25 = &Flink[-1].Blink;
          if ( v25 == &v23[7].Blink )
            break;
          v28 = *v25;
          *(_LIST_ENTRY *)v21 = *(_LIST_ENTRY *)((char *)*v25 + 104);
          *((_LIST_ENTRY *)v21 + 1) = *(_LIST_ENTRY *)((char *)v28 + 120);
          Flink = v25[1];
          v21 += 32;
        }
      }
    }
  }
  return (_IO_RESOURCE_REQUIREMENTS_LIST *)v5;
}
