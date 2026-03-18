/*
 * XREFs of ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C009D124
 * Callers:
 *     ?_SaveTopologySetCallback@?A0x55dd27e3@@YAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B1810 (-_SaveTopologySetCallback@-A0x55dd27e3@@YAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000822C (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0008790 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C0065D8C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C0067190 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ @ 0x1C009CA70 (-TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C009CAE0 (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C009D3BC (_CcdOpenRegistrySubkey.c)
 *     _CcdWriteRegistryValues @ 0x1C009F850 (_CcdWriteRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        const struct CCD_TOPOLOGY *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  void **ModalitySetId; // rax
  __int64 v7; // rcx
  unsigned __int16 *v8; // r14
  int v9; // r12d
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int16 v19; // dx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rbx
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r12
  int v30; // eax
  __int64 v31; // r12
  int v32; // eax
  int v33; // eax
  __int64 v34; // r15
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v44; // rax
  int v45; // ebx
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v49; // [rsp+38h] [rbp-38h] BYREF
  int v50; // [rsp+3Ch] [rbp-34h]
  unsigned int v51; // [rsp+40h] [rbp-30h] BYREF
  int v52; // [rsp+44h] [rbp-2Ch]
  int v53; // [rsp+48h] [rbp-28h]
  ULONG v54; // [rsp+4Ch] [rbp-24h] BYREF
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v55; // [rsp+50h] [rbp-20h]
  wchar_t pszDest; // [rsp+58h] [rbp-18h] BYREF

  v55 = this;
  v3 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(this);
  v5 = v3;
  if ( v3 < 0 )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v44[3] = v5;
LABEL_51:
    v44[4] = a2;
    v44[5] = *((_QWORD *)a2 + 8);
    v44[6] = 1LL;
    WdLogEvent5_WdError(v44);
    return (unsigned int)v5;
  }
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((void **)a2);
  v8 = (unsigned __int16 *)ModalitySetId;
  if ( *(int *)ModalitySetId < 0 || !*((_WORD *)ModalitySetId + 4) )
  {
    v44 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v44[3] = *(int *)v8;
    goto LABEL_51;
  }
  v9 = -1;
  Handle = 0LL;
  v10 = 0;
  if ( *((_WORD *)ModalitySetId + 16) )
  {
    while ( 1 )
    {
      v11 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v8, v10, &v51, 0LL, &v49);
      v16 = v11;
      if ( v11 < 0 )
        break;
      if ( *(int *)a2 < 0
        || !*((_WORD *)a2 + 4)
        || ((v17 = *((_QWORD *)a2 + 8)) == 0 ? (v13 = 0LL) : (v13 = *(unsigned __int16 *)(v17 + 20)),
            v10 >= (unsigned __int16)v13) )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
        v47[3] = -1073741823LL;
        goto LABEL_48;
      }
      v18 = *((_QWORD *)a2 + 7);
      if ( v18 )
        v19 = *(_WORD *)(v18 + 2LL * v10);
      else
        v19 = v10;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v19, v14, v15);
      v22 = v51;
      v23 = (__int64)PathDescriptor;
      if ( v9 != v51 )
      {
        v24 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", v51);
        v29 = v24;
        if ( v24 < 0 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
          v47[3] = v29;
          v47[4] = v10;
          v47[5] = v22;
          v47[6] = a2;
          v47[7] = *((_QWORD *)a2 + 8);
          goto LABEL_49;
        }
        if ( Handle )
          ZwClose(Handle);
        v30 = CcdOpenRegistrySubkey((int)&Handle, 983103, *((_QWORD *)v55 + 8), &pszDest, &v54);
        v31 = v30;
        if ( v30 < 0 )
        {
          v46 = (_QWORD *)WdLogNewEntry5_WdError(v21);
          v46[3] = v31;
          v46[4] = v10;
          v46[5] = v22;
          goto LABEL_43;
        }
        v9 = v22;
        if ( !v49 )
        {
          v52 = *(_DWORD *)(v23 + 84);
          v53 = *(_DWORD *)(v23 + 88);
          v50 = *(_DWORD *)(v23 + 100);
          if ( (*(_DWORD *)v23 & 0x20000) != 0 )
          {
            if ( (*(_DWORD *)v23 & 0x200) != 0 && ((*(_DWORD *)(v23 + 120) - 2) & 0xFFFFFFFD) == 0 )
            {
              *(_DWORD *)(v23 + 84) = *(_DWORD *)(v23 + 144);
              v32 = *(_DWORD *)(v23 + 140);
            }
            else
            {
              *(_DWORD *)(v23 + 84) = *(_DWORD *)(v23 + 140);
              v32 = *(_DWORD *)(v23 + 144);
            }
            *(_DWORD *)(v23 + 88) = v32;
          }
          *(_DWORD *)(v23 + 100) = *(_DWORD *)(v23 + 84) * ((unsigned int)GetBitsPerPixel(*(_DWORD *)(v23 + 104)) >> 3);
          v33 = CcdWriteRegistryValues((int)Handle, 0LL, v23);
          v34 = v33;
          if ( v33 < 0
            || (*(_DWORD *)(v23 + 84) = v52,
                *(_DWORD *)(v23 + 88) = v53,
                *(_DWORD *)(v23 + 100) = v50,
                v35 = CcdWriteRegistryValues((int)Handle, 0LL, v23),
                v34 = v35,
                v35 < 0) )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdError(v21);
            v46[3] = v34;
            v46[4] = Handle;
            v46[5] = 0LL;
            v46[6] = v10;
            goto LABEL_44;
          }
        }
      }
      v36 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
              v21,
              Handle,
              v49,
              (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)v23);
      v38 = v36;
      if ( v36 < 0 )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdError(v37);
        v46[4] = v10;
        v46[5] = v49;
        v46[3] = v38;
LABEL_43:
        v46[6] = a2;
        v46[7] = *((_QWORD *)a2 + 8);
LABEL_44:
        WdLogEvent5_WdError(v46);
        goto LABEL_30;
      }
      if ( (*(_DWORD *)v23 & 0x8000) != 0 && IsInternalVideoOutput(*(_DWORD *)(v23 + 80)) && (v39 & 0x200) != 0 )
      {
        v45 = *(_DWORD *)(v23 + 120);
        *((_DWORD *)DXGGLOBAL::GetGlobal(v40, v39, v41, v42) + 194) = v45;
      }
      if ( ++v10 >= v8[16] )
        goto LABEL_30;
    }
    v47 = (_QWORD *)WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    v47[3] = v16;
LABEL_48:
    v47[4] = v10;
    v47[5] = a2;
    v47[6] = *((_QWORD *)a2 + 8);
LABEL_49:
    WdLogEvent5_WdAssertion(v47);
LABEL_30:
    if ( Handle )
      ZwClose(Handle);
  }
  return 0LL;
}
