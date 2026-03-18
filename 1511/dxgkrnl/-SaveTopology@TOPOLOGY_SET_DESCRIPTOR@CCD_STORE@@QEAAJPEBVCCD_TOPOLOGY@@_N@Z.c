/*
 * XREFs of ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C0061048
 * Callers:
 *     ?_SaveTopologySetCallback@?A0x55dd27e3@@YAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00C66F0 (-_SaveTopologySetCallback@-A0x55dd27e3@@YAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z.c)
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C00087A8 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     RtlStringCbPrintfW @ 0x1C000A560 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     sub_1C005D98C @ 0x1C005D98C (sub_1C005D98C.c)
 *     sub_1C005F2F8 @ 0x1C005F2F8 (sub_1C005F2F8.c)
 *     ?TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ @ 0x1C006098C (-TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00609FC (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C0061BDC (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00A4538 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        const struct CCD_TOPOLOGY *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  __int64 v7; // rcx
  unsigned __int16 *v8; // r14
  int v9; // r12d
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int16 v16; // dx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rbx
  NTSTATUS v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // r12
  int v26; // eax
  int v27; // eax
  __int64 v28; // r15
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r15
  __int16 v33; // dx
  _QWORD *v35; // rax
  int v36; // ebx
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v40; // [rsp+38h] [rbp-38h] BYREF
  int v41; // [rsp+3Ch] [rbp-34h]
  unsigned int v42; // [rsp+40h] [rbp-30h] BYREF
  int v43; // [rsp+44h] [rbp-2Ch]
  int v44; // [rsp+48h] [rbp-28h]
  ULONG v45; // [rsp+4Ch] [rbp-24h] BYREF
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v46; // [rsp+50h] [rbp-20h]
  wchar_t pszDest; // [rsp+58h] [rbp-18h] BYREF

  v46 = this;
  v3 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(this);
  v5 = v3;
  if ( v3 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v35[3] = v5;
LABEL_51:
    v35[4] = a2;
    v35[5] = *((_QWORD *)a2 + 8);
    v35[6] = 1LL;
    WdLogEvent5_WdError(v35);
    return (unsigned int)v5;
  }
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(a2);
  v8 = (unsigned __int16 *)ModalitySetId;
  if ( *(int *)ModalitySetId < 0 || !*((_WORD *)ModalitySetId + 4) )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v35[3] = *(int *)v8;
    goto LABEL_51;
  }
  v9 = -1;
  Handle = 0LL;
  v10 = 0;
  if ( *((_WORD *)ModalitySetId + 16) )
  {
    while ( 1 )
    {
      v11 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v8, v10, &v42, 0LL, &v40);
      v13 = v11;
      if ( v11 < 0 )
        break;
      if ( *(int *)a2 < 0
        || !*((_WORD *)a2 + 4)
        || ((v14 = *((_QWORD *)a2 + 8)) == 0 ? (v12 = 0LL) : (v12 = *(unsigned __int16 *)(v14 + 20)),
            v10 >= (unsigned __int16)v12) )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12);
        v38[3] = -1073741823LL;
        goto LABEL_48;
      }
      v15 = *((_QWORD *)a2 + 7);
      if ( v15 )
        v16 = *(_WORD *)(v15 + 2LL * v10);
      else
        v16 = v10;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v16);
      v19 = v42;
      v20 = (__int64)PathDescriptor;
      if ( v9 != v42 )
      {
        v21 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", v42);
        v23 = v21;
        if ( v21 < 0 )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdAssertion(v22);
          v38[3] = v23;
          v38[4] = v10;
          v38[5] = v19;
          v38[6] = a2;
          v38[7] = *((_QWORD *)a2 + 8);
          goto LABEL_49;
        }
        if ( Handle )
          ZwClose(Handle);
        v24 = sub_1C005F2F8((int)&Handle, 983103, *((_QWORD *)v46 + 8), &pszDest, &v45);
        v25 = v24;
        if ( v24 < 0 )
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdError(v18);
          v37[3] = v25;
          v37[4] = v10;
          v37[5] = v19;
          goto LABEL_43;
        }
        v9 = v19;
        if ( !v40 )
        {
          v43 = *(_DWORD *)(v20 + 84);
          v44 = *(_DWORD *)(v20 + 88);
          v41 = *(_DWORD *)(v20 + 100);
          if ( (*(_DWORD *)v20 & 0x20000) != 0 )
          {
            if ( (*(_DWORD *)v20 & 0x200) != 0 && ((*(_DWORD *)(v20 + 120) - 2) & 0xFFFFFFFD) == 0 )
            {
              *(_DWORD *)(v20 + 84) = *(_DWORD *)(v20 + 144);
              v26 = *(_DWORD *)(v20 + 140);
            }
            else
            {
              *(_DWORD *)(v20 + 84) = *(_DWORD *)(v20 + 140);
              v26 = *(_DWORD *)(v20 + 144);
            }
            *(_DWORD *)(v20 + 88) = v26;
          }
          *(_DWORD *)(v20 + 100) = *(_DWORD *)(v20 + 84) * ((unsigned int)GetBitsPerPixel(*(_DWORD *)(v20 + 104)) >> 3);
          v27 = sub_1C005D98C((const WCHAR *)Handle, 0LL, (__int64)&unk_1C00465E0, 8, v20);
          v28 = v27;
          if ( v27 < 0
            || (*(_DWORD *)(v20 + 84) = v43,
                *(_DWORD *)(v20 + 88) = v44,
                *(_DWORD *)(v20 + 100) = v41,
                v29 = sub_1C005D98C((const WCHAR *)Handle, 0LL, (__int64)&unk_1C0046420, 2, v20),
                v28 = v29,
                v29 < 0) )
          {
            v37 = (_QWORD *)WdLogNewEntry5_WdError(v18);
            v37[3] = v28;
            v37[4] = Handle;
            v37[5] = 0LL;
            v37[6] = v10;
            goto LABEL_44;
          }
        }
      }
      v30 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
              v18,
              (const WCHAR *)Handle,
              v40,
              (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)v20);
      v32 = v30;
      if ( v30 < 0 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdError(v31);
        v37[4] = v10;
        v37[5] = v40;
        v37[3] = v32;
LABEL_43:
        v37[6] = a2;
        v37[7] = *((_QWORD *)a2 + 8);
LABEL_44:
        WdLogEvent5_WdError(v37);
        goto LABEL_30;
      }
      if ( (*(_DWORD *)v20 & 0x8000) != 0 && IsInternalVideoOutput(*(_DWORD *)(v20 + 80)) && (v33 & 0x200) != 0 )
      {
        v36 = *(_DWORD *)(v20 + 120);
        *((_DWORD *)DXGGLOBAL::GetGlobal() + 230) = v36;
      }
      if ( ++v10 >= v8[16] )
        goto LABEL_30;
    }
    v38 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12);
    v38[3] = v13;
LABEL_48:
    v38[4] = v10;
    v38[5] = a2;
    v38[6] = *((_QWORD *)a2 + 8);
LABEL_49:
    WdLogEvent5_WdAssertion(v38);
LABEL_30:
    if ( Handle )
      ZwClose(Handle);
  }
  return 0LL;
}
