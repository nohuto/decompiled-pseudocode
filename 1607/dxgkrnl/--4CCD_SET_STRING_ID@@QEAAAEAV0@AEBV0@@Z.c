/*
 * XREFs of ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C008E470
 * Callers:
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C008C8F8 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C008C930 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C008CD28 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B4880 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00B4C5C (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C00B5D44 (_CcdRetrieveSetIdFromRegistry.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00B6CAC (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00B85CC (--0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00B8708 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C008DFDC (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C008E13C (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C008E5CC (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::operator=(CCD_SET_STRING_ID *this, __int64 a2)
{
  CCD_SET_STRING_ID *v3; // rbx
  int v4; // eax
  __int64 v5; // rcx
  unsigned __int16 v6; // ax
  void *v7; // rcx
  SIZE_T v8; // rax
  PVOID v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  v3 = this;
  if ( this != (CCD_SET_STRING_ID *)a2 )
  {
    if ( *(_WORD *)(a2 + 8) )
    {
      *((_DWORD *)this + 10) = 0;
      operator delete(*((void **)this + 6));
      *((_QWORD *)v3 + 6) = 0LL;
      v4 = CCD_SET_STRING_ID::_CopyString((struct _STRING *)((char *)v3 + 8), (const struct _STRING *)(a2 + 8));
      *(_DWORD *)v3 = v4;
      if ( v4 >= 0 )
      {
        if ( !*(_QWORD *)(a2 + 24) || !*(_WORD *)(a2 + 32) )
        {
          v13 = WdLogNewEntry5_WdAssertion(v5);
          WdLogEvent5_WdAssertion(v13);
        }
        if ( !*(_QWORD *)(a2 + 24) || (v6 = *(_WORD *)(a2 + 32)) == 0 )
        {
          CCD_SET_STRING_ID::_ParseMonitorDescriptors(v3);
          return v3;
        }
        if ( v6 <= *((_WORD *)v3 + 16) )
          goto LABEL_12;
        v7 = (void *)*((_QWORD *)v3 + 3);
        *((_WORD *)v3 + 16) = 0;
        operator delete(v7);
        v8 = 8LL * *(unsigned __int16 *)(a2 + 32);
        if ( !is_mul_ok(*(unsigned __int16 *)(a2 + 32), 8uLL) )
          v8 = -1LL;
        v9 = operator new(v8, 0x63644356u, PagedPool);
        *((_QWORD *)v3 + 3) = v9;
        if ( v9 )
        {
LABEL_12:
          memmove(*((void **)v3 + 3), *(const void **)(a2 + 24), 8LL * *(unsigned __int16 *)(a2 + 32));
          *((_WORD *)v3 + 16) = *(_WORD *)(a2 + 32);
          return v3;
        }
        v12 = WdLogNewEntry5_WdLowResource(v10);
        *(_QWORD *)(v12 + 24) = 8LL * *(unsigned __int16 *)(a2 + 32);
        WdLogEvent5_WdLowResource(v12);
        *(_DWORD *)v3 = -1073741801;
      }
      this = v3;
    }
    CCD_SET_STRING_ID::_Cleanup(this);
  }
  return v3;
}
