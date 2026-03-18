/*
 * XREFs of ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@W4_POOL_TYPE@@@Z @ 0x1C0073A5C
 * Callers:
 *     ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C0011F08 (-PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C0018C60 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 * Callees:
 *     memset @ 0x1C0036C40 (memset.c)
 */

_CM_RESOURCE_LIST *__fastcall FxCmResList::CreateWdmList(FxCmResList *this, _POOL_TYPE PoolType)
{
  FxCollectionInternal *v2; // rdi
  _DWORD *v3; // rbx
  unsigned int m_Count; // eax
  SIZE_T v6; // rbp
  _DWORD *PoolWithTag; // rax
  _LIST_ENTRY *v8; // rdx
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *v10; // rax
  _LIST_ENTRY **p_Blink; // rcx

  v2 = &this->FxCollectionInternal;
  v3 = 0LL;
  m_Count = this->m_Count;
  if ( m_Count )
  {
    v6 = 20 * (m_Count + 1);
    PoolWithTag = ExAllocatePoolWithTag(PoolType, v6, this->m_Globals->Tag);
    v3 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)v6);
      v8 = (_LIST_ENTRY *)(v3 + 5);
      *v3 = 1;
      v3[3] = 65537;
      v3[4] = v2->m_Count;
      for ( i = this->m_ListHead.Flink; ; i = p_Blink[1] )
      {
        p_Blink = &i[-1].Blink;
        if ( p_Blink == (_LIST_ENTRY **)v2 )
          break;
        v10 = *p_Blink;
        *v8 = *(_LIST_ENTRY *)((char *)*p_Blink + 104);
        LODWORD(v8[1].Flink) = v10[7].Blink;
        v8 = (_LIST_ENTRY *)((char *)v8 + 20);
      }
    }
  }
  return (_CM_RESOURCE_LIST *)v3;
}
