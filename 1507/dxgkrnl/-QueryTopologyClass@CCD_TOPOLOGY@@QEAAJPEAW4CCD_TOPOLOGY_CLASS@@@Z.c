/*
 * XREFs of ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00652A0
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0063E1C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C009C700 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C009F1A0 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C00B0F90 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0062EFC (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C00633C0 (-QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C017D738 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::QueryTopologyClass(
        CCD_TOPOLOGY *this,
        enum CCD_TOPOLOGY_CLASS *a2,
        __int64 a3,
        __int64 a4)
{
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v6; // r8
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // esi
  unsigned int v12; // r15d
  unsigned int v13; // ebx
  __int64 v14; // r8
  unsigned int v15; // ebp
  _QWORD *v17; // rax
  unsigned int v18; // [rsp+58h] [rbp+10h] BYREF
  struct _LUID v19; // [rsp+60h] [rbp+18h] BYREF

  *(_DWORD *)a2 = 0;
  CCD_BTL::Global((__int64)this, (__int64)a2, a3, a4);
  v7 = BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(&v19, &v18, v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v17[3] = v9;
    v17[4] = this;
    v17[5] = *((_QWORD *)this + 8);
    v17[6] = this;
    WdLogEvent5_WdError(v17);
    return (unsigned int)v9;
  }
  else
  {
    v10 = *((_QWORD *)this + 8);
    v11 = 0;
    v12 = 0;
    v13 = *(unsigned __int16 *)(v10 + 20);
    if ( !*(_WORD *)(v10 + 20) )
      goto LABEL_17;
    while ( 1 )
    {
      v14 = 216LL * v12;
      if ( *(_DWORD *)(v14 + v10 + 56) == v19.LowPart
        && *(_DWORD *)(v14 + v10 + 60) == v19.HighPart
        && *(_DWORD *)(v14 + v10 + 68) == v18 )
      {
        break;
      }
      if ( ++v12 >= v13 )
        goto LABEL_17;
    }
    v15 = 0;
    do
    {
      if ( v15 == v12 || CCD_TOPOLOGY::IsSameCloneGroup(this, v15, v12, 0) )
        ++v11;
      ++v15;
    }
    while ( v15 < v13 );
    if ( !v11 )
    {
LABEL_17:
      *(_DWORD *)a2 = 8;
      return 0LL;
    }
    if ( v11 == 1 )
    {
      if ( v13 > 1 )
      {
        *(_DWORD *)a2 = 4;
        return 0LL;
      }
      if ( v13 == 1 )
      {
        *(_DWORD *)a2 = 1;
        return 0LL;
      }
    }
    else if ( v13 > 1 )
    {
      *(_DWORD *)a2 = 2;
      return 0LL;
    }
    return 3221225473LL;
  }
}
