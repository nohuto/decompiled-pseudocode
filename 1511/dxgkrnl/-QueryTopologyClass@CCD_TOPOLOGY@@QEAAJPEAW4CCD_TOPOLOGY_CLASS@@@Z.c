/*
 * XREFs of ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00A3A3C
 * Callers:
 *     sub_1C005CCE0 @ 0x1C005CCE0 (sub_1C005CCE0.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C005DEE4 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C005F190 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00A5B24 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C00A6598 (-QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C0181BB0 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C018305C (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::QueryTopologyClass(CCD_TOPOLOGY *this, enum CCD_TOPOLOGY_CLASS *a2)
{
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v4; // r8
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // esi
  unsigned int v10; // r15d
  unsigned int v11; // ebx
  __int64 v12; // r8
  unsigned int v13; // ebp
  _QWORD *v15; // rax
  _BYTE v16[104]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+10h] BYREF
  struct _LUID v18; // [rsp+A0h] [rbp+18h] BYREF

  *(_DWORD *)a2 = 0;
  CCD_BTL::Global();
  BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)v16);
  v5 = BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(&v18, &v17, v4);
  v7 = v5;
  if ( v5 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v15[3] = v7;
    v15[4] = this;
    v15[5] = *((_QWORD *)this + 8);
    v15[6] = this;
    WdLogEvent5_WdError(v15);
    return (unsigned int)v7;
  }
  else
  {
    v8 = *((_QWORD *)this + 8);
    v9 = 0;
    v10 = 0;
    v11 = *(unsigned __int16 *)(v8 + 20);
    if ( !*(_WORD *)(v8 + 20) )
      goto LABEL_17;
    while ( 1 )
    {
      v12 = 216LL * v10;
      if ( *(_DWORD *)(v12 + v8 + 56) == v18.LowPart
        && *(_DWORD *)(v12 + v8 + 60) == v18.HighPart
        && *(_DWORD *)(v12 + v8 + 68) == v17 )
      {
        break;
      }
      if ( ++v10 >= v11 )
        goto LABEL_17;
    }
    v13 = 0;
    do
    {
      if ( v13 == v10 || CCD_TOPOLOGY::IsSameCloneGroup(this, v13, v10, 0) )
        ++v9;
      ++v13;
    }
    while ( v13 < v11 );
    if ( !v9 )
    {
LABEL_17:
      *(_DWORD *)a2 = 8;
      return 0LL;
    }
    if ( v9 == 1 )
    {
      if ( v11 > 1 )
      {
        *(_DWORD *)a2 = 4;
        return 0LL;
      }
      if ( v11 == 1 )
      {
        *(_DWORD *)a2 = 1;
        return 0LL;
      }
    }
    else if ( v11 > 1 )
    {
      *(_DWORD *)a2 = 2;
      return 0LL;
    }
    return 3221225473LL;
  }
}
