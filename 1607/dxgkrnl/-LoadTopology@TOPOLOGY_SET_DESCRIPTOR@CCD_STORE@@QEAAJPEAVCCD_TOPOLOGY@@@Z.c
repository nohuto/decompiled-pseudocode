/*
 * XREFs of ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00B4DF4
 * Callers:
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B88A0 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     RtlStringCbPrintfW @ 0x1C000B6E0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C008C8F8 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C008E1A4 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     _CcdReadRegistryValues @ 0x1C00B4534 (_CcdReadRegistryValues.c)
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B4B4C (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00B4D04 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00B5350 (_CcdOpenRegistrySubkey.c)
 *     ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D86F4 (-ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        struct CCD_TOPOLOGY *a2)
{
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v4; // rcx
  unsigned __int16 v5; // di
  unsigned __int16 *v6; // r13
  unsigned __int16 v7; // dx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned int v14; // r12d
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // r14
  int RegistryValues; // eax
  __int64 v24; // rcx
  int v25; // eax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v26; // rcx
  int Path; // eax
  __int64 v28; // rcx
  unsigned int v29; // edx
  unsigned int v30; // r8d
  int v31; // ecx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  bool v38; // al
  __int64 v39; // rcx
  __int64 v40; // r9
  _QWORD *v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  unsigned int v47; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v48; // [rsp+34h] [rbp-3Ch]
  unsigned int v49; // [rsp+38h] [rbp-38h]
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  int v51; // [rsp+48h] [rbp-28h]
  unsigned int v52; // [rsp+4Ch] [rbp-24h] BYREF
  unsigned int v53; // [rsp+50h] [rbp-20h]
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v54; // [rsp+58h] [rbp-18h]
  wchar_t pszDest; // [rsp+60h] [rbp-10h] BYREF

  v54 = this;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v5 = 0;
  v6 = (unsigned __int16 *)SetId;
  if ( SetId )
  {
    v7 = *((_WORD *)SetId + 16);
    v8 = *((_QWORD *)a2 + 8);
    if ( v8 )
      v9 = *(unsigned __int16 *)(v8 + 22);
    else
      v9 = 0LL;
    if ( v7 > (unsigned __int16)v9 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v9);
      v37 = *((_QWORD *)a2 + 8);
      if ( v37 )
        v5 = *(_WORD *)(v37 + 22);
      *(_QWORD *)(v36 + 24) = v5;
      *(_QWORD *)(v36 + 32) = v6[16];
      WdLogEvent5_WdAssertion(v36);
      return 3221225507LL;
    }
    else
    {
      v10 = 0;
      if ( v7 )
      {
        do
        {
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v10);
          CCD_TOPOLOGY::ClearPathDescriptor(PathDescriptor);
          ++v10;
        }
        while ( v10 < v6[16] );
      }
      v51 = -1;
      v12 = 0LL;
      Handle = 0LL;
      LODWORD(v13) = -1073741823;
      v14 = 0;
      if ( v6[16] )
      {
        while ( 1 )
        {
          v15 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v6, v14, &v52, 0LL, &v47);
          v13 = v15;
          if ( v15 < 0 )
            break;
          v17 = v52;
          if ( v51 != v52 )
          {
            v18 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", v52);
            v13 = v18;
            if ( v18 < 0 )
            {
              v44 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19);
              v44[3] = v13;
              v44[4] = v14;
              v44[5] = v17;
              v44[6] = a2;
              v44[7] = *((_QWORD *)a2 + 8);
              goto LABEL_56;
            }
            if ( Handle )
              ZwClose(Handle);
            v20 = CcdOpenRegistrySubkey((int)&Handle, 131097, *((_QWORD *)v54 + 8), &pszDest, 0LL);
            v13 = v20;
            if ( v20 < 0 )
            {
              v43 = (_QWORD *)WdLogNewEntry5_WdError(v21);
              v43[4] = v14;
              v43[3] = v13;
              v43[5] = v17;
              v43[6] = a2;
              v43[7] = *((_QWORD *)a2 + 8);
              WdLogEvent5_WdError(v43);
              goto LABEL_32;
            }
            v51 = v17;
          }
          v22 = CCD_TOPOLOGY::GetPathDescriptor(a2, v14);
          RegistryValues = CcdReadRegistryValues(Handle, 0LL, &unk_1C0056670, 8u, (__int64)v22);
          v13 = RegistryValues;
          if ( RegistryValues < 0 )
            goto LABEL_52;
          v25 = CcdReadRegistryValues(Handle, 0LL, &unk_1C00564B0, 2u, (__int64)v22);
          v13 = v25;
          if ( v25 == -1073741772 )
          {
            *((_DWORD *)v22 + 53) = 0;
          }
          else if ( v25 < 0 )
          {
LABEL_52:
            v45 = (_QWORD *)WdLogNewEntry5_WdError(v24);
            v45[3] = v13;
            v45[4] = Handle;
            v45[5] = v47;
            v45[6] = v14;
            goto LABEL_53;
          }
          v26 = (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)*((unsigned int *)v22 + 22);
          v49 = *((_DWORD *)v22 + 23);
          v48 = (unsigned int)v26;
          Path = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(v26, Handle, v47, v22);
          v13 = Path;
          if ( Path < 0 )
          {
            v45 = (_QWORD *)WdLogNewEntry5_WdError(v28);
            v45[4] = v14;
            v45[5] = v47;
            v45[3] = v13;
            v45[6] = a2;
            v45[7] = *((_QWORD *)a2 + 8);
LABEL_53:
            WdLogEvent5_WdError(v45);
            goto LABEL_54;
          }
          if ( g_ProductType == 104 )
          {
            v38 = IsInternalVideoOutput(*((_DWORD *)v22 + 20));
            v30 = v49;
            v29 = v48;
            if ( !v38 )
            {
              v53 = v48 * v49;
              if ( v48 * v49 < 0xC0001 )
              {
                LODWORD(v13) = -1073741275;
                v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v48, v49, v40);
                v42 = v49;
                v41[4] = v48;
                v41[3] = v22;
                v41[5] = v42;
                v41[6] = 786433LL;
                WdLogEvent5_WdWarning(v41);
                DxgkLogCodePointPacket(0x51u, 0, v53, 0xC0000225);
LABEL_54:
                CCD_TOPOLOGY::ClearPathDescriptor(v22);
                goto LABEL_32;
              }
            }
          }
          else
          {
            v29 = v48;
            v30 = v49;
          }
          *(_DWORD *)v22 &= 0x830B87u;
          v31 = *(_DWORD *)v22;
          if ( (*(_DWORD *)v22 & 0x20000) != 0 )
          {
            if ( v47 )
            {
              *((_QWORD *)v22 + 18) = v12;
            }
            else
            {
              if ( (v31 & 0x200) != 0 && ((*((_DWORD *)v22 + 31) - 2) & 0xFFFFFFFD) == 0 )
              {
                *((_DWORD *)v22 + 36) = v30;
                *((_DWORD *)v22 + 37) = v29;
              }
              else
              {
                *((_DWORD *)v22 + 36) = v29;
                *((_DWORD *)v22 + 37) = v30;
              }
              v12 = *((_QWORD *)v22 + 18);
            }
          }
          if ( (v31 & 0x10000) != 0 )
          {
            v32 = *((_DWORD *)v22 + 33);
            *(_DWORD *)v22 = v31 | 0x400;
            *((_DWORD *)v22 + 32) = v32;
          }
          if ( (*(_DWORD *)v22 & 0x100) == 0 )
            *(_DWORD *)v22 &= ~0x800000u;
          if ( ++v14 >= v6[16] )
            goto LABEL_32;
        }
        v44 = (_QWORD *)WdLogNewEntry5_WdAssertion(v16);
        v44[3] = v13;
        v44[4] = v14;
        v44[5] = a2;
        v44[6] = *((_QWORD *)a2 + 8);
LABEL_56:
        WdLogEvent5_WdAssertion(v44);
LABEL_32:
        if ( (int)v13 >= 0 )
        {
          v13 = *(int *)CCD_TOPOLOGY::SetModalitySetId((void **)a2, (const struct CCD_SET_STRING_ID *)v6);
          if ( (int)v13 < 0 )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdError(v33);
            v46[3] = v13;
            v46[4] = a2;
            v46[5] = v6;
            WdLogEvent5_WdError(v46);
          }
          else
          {
            *(_WORD *)(*((_QWORD *)a2 + 8) + 20LL) = v6[16];
            *(_DWORD *)(*((_QWORD *)a2 + 8) + 24LL) |= 1u;
          }
        }
        if ( Handle )
          ZwClose(Handle);
      }
      return (unsigned int)v13;
    }
  }
  else
  {
    v35 = WdLogNewEntry5_WdError(v4);
    WdLogEvent5_WdError(v35);
    return 3221225473LL;
  }
}
