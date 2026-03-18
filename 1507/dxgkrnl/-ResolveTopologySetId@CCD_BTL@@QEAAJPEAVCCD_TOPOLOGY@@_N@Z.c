/*
 * XREFs of ?ResolveTopologySetId@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C0063024
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C009C700 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C009F1A0 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 * Callees:
 *     ??RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ @ 0x1C009D8B4 (--RCCD_BTL_CLONE_GROUP_RESOLVER@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_BTL::ResolveTopologySetId(CCD_BTL *this, struct CCD_TOPOLOGY *a2, char a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+30h] [rbp-18h]

  v13[1] = *((_QWORD *)a2 + 8);
  v13[0] = a2;
  v14 = a3;
  v4 = CCD_BTL_CLONE_GROUP_RESOLVER::operator()(v13);
  v9 = v4;
  if ( v4 == -1073741275 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
    v11[3] = -1073741275LL;
    v11[4] = a2;
    v11[5] = *((_QWORD *)a2 + 8);
    v11[6] = a2;
    WdLogEvent5_WdWarning(v11);
    return 3221226021LL;
  }
  else if ( v4 < 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v12[3] = v9;
    v12[4] = a2;
    v12[5] = *((_QWORD *)a2 + 8);
    v12[6] = a2;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v9;
  }
  else
  {
    *(_WORD *)(*((_QWORD *)a2 + 8) + 20LL) = *((_WORD *)a2 + 16);
    return 0LL;
  }
}
