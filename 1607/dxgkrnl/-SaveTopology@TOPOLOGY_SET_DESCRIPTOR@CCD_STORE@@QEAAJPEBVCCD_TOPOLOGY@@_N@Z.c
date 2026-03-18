/*
 * XREFs of ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00B50B4
 * Callers:
 *     _anonymous_namespace_::_SaveTopologySetCallback @ 0x1C00DB620 (_anonymous_namespace_--_SaveTopologySetCallback.c)
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000AE54 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     RtlStringCbPrintfW @ 0x1C000B6E0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C008C930 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C008E1A4 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ @ 0x1C00B49E8 (-TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B4A58 (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00B5350 (_CcdOpenRegistrySubkey.c)
 *     _CcdWriteRegistryValues @ 0x1C00D642C (_CcdWriteRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        const struct CCD_TOPOLOGY *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // rbx
  void **ModalitySetId; // rax
  __int64 v8; // rcx
  unsigned __int16 *v9; // r14
  int v10; // r12d
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
  __int64 v34; // rcx
  _QWORD *v36; // rax
  int v37; // ebx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v41; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v42; // [rsp+3Ch] [rbp-34h] BYREF
  int v43; // [rsp+40h] [rbp-30h]
  int v44; // [rsp+44h] [rbp-2Ch]
  int v45; // [rsp+48h] [rbp-28h]
  ULONG v46; // [rsp+4Ch] [rbp-24h] BYREF
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v47; // [rsp+50h] [rbp-20h]
  wchar_t pszDest; // [rsp+58h] [rbp-18h] BYREF

  v47 = this;
  v3 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(this);
  v5 = 0;
  v6 = v3;
  if ( v3 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v36[3] = v6;
LABEL_51:
    v36[4] = a2;
    v36[5] = *((_QWORD *)a2 + 8);
    v36[6] = 1LL;
    WdLogEvent5_WdError(v36);
    return (unsigned int)v6;
  }
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((void **)a2);
  v9 = (unsigned __int16 *)ModalitySetId;
  if ( *(int *)ModalitySetId < 0 || !*((_WORD *)ModalitySetId + 4) )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v36[3] = *(int *)v9;
    goto LABEL_51;
  }
  v10 = -1;
  Handle = 0LL;
  if ( *((_WORD *)ModalitySetId + 16) )
  {
    while ( 1 )
    {
      v11 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v9, v5, &v42, 0LL, &v41);
      v13 = v11;
      if ( v11 < 0 )
        break;
      if ( *(int *)a2 < 0
        || !*((_WORD *)a2 + 4)
        || ((v14 = *((_QWORD *)a2 + 8)) == 0 ? (v12 = 0LL) : (v12 = *(unsigned __int16 *)(v14 + 20)),
            v5 >= (unsigned __int16)v12) )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12);
        v39[3] = -1073741823LL;
        goto LABEL_48;
      }
      v15 = *((_QWORD *)a2 + 7);
      if ( v15 )
        v16 = *(_WORD *)(v15 + 2LL * v5);
      else
        v16 = v5;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v16);
      v19 = v42;
      v20 = (__int64)PathDescriptor;
      if ( v10 != v42 )
      {
        v21 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", v42);
        v23 = v21;
        if ( v21 < 0 )
        {
          v39 = (_QWORD *)WdLogNewEntry5_WdAssertion(v22);
          v39[3] = v23;
          v39[4] = v5;
          v39[5] = v19;
          v39[6] = a2;
          v39[7] = *((_QWORD *)a2 + 8);
          goto LABEL_49;
        }
        if ( Handle )
          ZwClose(Handle);
        v24 = CcdOpenRegistrySubkey((int)&Handle, 983103, *((_QWORD *)v47 + 8), &pszDest, &v46);
        v25 = v24;
        if ( v24 < 0 )
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdError(v18);
          v38[3] = v25;
          v38[4] = v5;
          v38[5] = v19;
          goto LABEL_43;
        }
        v10 = v19;
        if ( !v41 )
        {
          v43 = *(_DWORD *)(v20 + 88);
          v44 = *(_DWORD *)(v20 + 92);
          v45 = *(_DWORD *)(v20 + 104);
          if ( (*(_DWORD *)v20 & 0x20000) != 0 )
          {
            if ( (*(_DWORD *)v20 & 0x200) != 0 && ((*(_DWORD *)(v20 + 124) - 2) & 0xFFFFFFFD) == 0 )
            {
              *(_DWORD *)(v20 + 88) = *(_DWORD *)(v20 + 148);
              v26 = *(_DWORD *)(v20 + 144);
            }
            else
            {
              *(_DWORD *)(v20 + 88) = *(_DWORD *)(v20 + 144);
              v26 = *(_DWORD *)(v20 + 148);
            }
            *(_DWORD *)(v20 + 92) = v26;
          }
          *(_DWORD *)(v20 + 104) = *(_DWORD *)(v20 + 88) * ((unsigned int)GetBitsPerPixel(*(_DWORD *)(v20 + 108)) >> 3);
          v27 = CcdWriteRegistryValues((int)Handle, 0LL, v20);
          v28 = v27;
          if ( v27 < 0
            || (*(_DWORD *)(v20 + 88) = v43,
                *(_DWORD *)(v20 + 92) = v44,
                *(_DWORD *)(v20 + 104) = v45,
                v29 = CcdWriteRegistryValues((int)Handle, 0LL, v20),
                v28 = v29,
                v29 < 0) )
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdError(v18);
            v38[3] = v28;
            v38[4] = Handle;
            v38[5] = 0LL;
            v38[6] = v5;
            goto LABEL_44;
          }
        }
      }
      v30 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
              v18,
              Handle,
              v41,
              (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)v20);
      v32 = v30;
      if ( v30 < 0 )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v31);
        v38[4] = v5;
        v38[5] = v41;
        v38[3] = v32;
LABEL_43:
        v38[6] = a2;
        v38[7] = *((_QWORD *)a2 + 8);
LABEL_44:
        WdLogEvent5_WdError(v38);
        goto LABEL_31;
      }
      if ( !g_IsMobileCore
        && (*(_DWORD *)v20 & 0x8000) != 0
        && IsInternalVideoOutput(*(_DWORD *)(v20 + 80))
        && (v33 & 0x200) != 0 )
      {
        v37 = *(_DWORD *)(v20 + 124);
        *((_DWORD *)DXGGLOBAL::GetGlobal(v34) + 190) = v37;
      }
      if ( ++v5 >= v9[16] )
        goto LABEL_31;
    }
    v39 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12);
    v39[3] = v13;
LABEL_48:
    v39[4] = v5;
    v39[5] = a2;
    v39[6] = *((_QWORD *)a2 + 8);
LABEL_49:
    WdLogEvent5_WdAssertion(v39);
LABEL_31:
    if ( Handle )
      ZwClose(Handle);
  }
  return 0LL;
}
