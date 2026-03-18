/*
 * XREFs of ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C00A5694
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A2778 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01548FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C018199C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C00A465C (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00A4828 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00A4940 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyInheritScope(void **this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  unsigned int i; // edi
  __int64 v16; // rax
  unsigned __int16 v17; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR **v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  _DWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rax
  unsigned __int16 v29; // ax

  CCD_TOPOLOGY::Clear(this);
  v6 = *((_QWORD *)a2 + 8);
  v7 = 0;
  if ( v6 )
    v8 = *(_WORD *)(v6 + 20);
  else
    v8 = 0;
  if ( v6 )
    v9 = *(_WORD *)(v6 + 20);
  else
    v9 = 0;
  if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)this, v8, v4, v5) < v9 )
  {
    v25 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v25 + 24) = this;
    v26 = *((_QWORD *)a2 + 8);
    if ( v26 )
      v7 = *(_WORD *)(v26 + 20);
    *(_QWORD *)(v25 + 32) = v7;
    WdLogEvent5_WdLowResource(v25);
    return 3221225495LL;
  }
  else
  {
    LODWORD(v14) = 0;
    for ( i = 0; ; ++i )
    {
      v16 = *((_QWORD *)a2 + 8);
      v17 = v16 ? *(_WORD *)(v16 + 20) : 0;
      if ( i >= v17 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, i);
      v20 = CCD_TOPOLOGY::AddPathDescriptor((CCD_TOPOLOGY *)this, PathDescriptor, v19);
      v14 = v20;
      if ( v20 < 0 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdAssertion(v21);
        v27[3] = v14;
        v27[4] = i;
        v27[5] = this;
        v28 = *((_QWORD *)a2 + 8);
        if ( v28 )
          v29 = *(_WORD *)(v28 + 20);
        else
          v29 = 0;
        v27[6] = v29;
        WdLogEvent5_WdAssertion(v27);
        break;
      }
    }
    if ( (int)v14 >= 0 )
    {
      v22 = this[8];
      if ( v22 )
      {
        v23 = *((_QWORD *)a2 + 8);
        if ( v23 )
        {
          *(_OWORD *)v22 = *(_OWORD *)v23;
          v22[4] = *(_DWORD *)(v23 + 16);
        }
      }
    }
    return (unsigned int)v14;
  }
}
