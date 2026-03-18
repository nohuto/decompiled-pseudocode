/*
 * XREFs of ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C009CE84
 * Callers:
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C009F090 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C0008790 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C0065D54 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C0067190 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     _CcdReadRegistryValues @ 0x1C009C5C0 (_CcdReadRegistryValues.c)
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C009CBD4 (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C009CE48 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     _CcdOpenRegistrySubkey @ 0x1C009D3BC (_CcdOpenRegistrySubkey.c)
 *     ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C009F310 (-ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        struct CCD_TOPOLOGY *a2)
{
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int16 v7; // di
  unsigned __int16 *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned int v16; // r12d
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r14
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v30; // r14
  int RegistryValues; // eax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v32; // rcx
  int v33; // eax
  int Path; // eax
  __int64 v35; // rcx
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  unsigned int v48; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  int v50; // [rsp+40h] [rbp-30h]
  int v51; // [rsp+44h] [rbp-2Ch]
  int v52; // [rsp+48h] [rbp-28h]
  unsigned int v53; // [rsp+4Ch] [rbp-24h] BYREF
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v54; // [rsp+50h] [rbp-20h]
  wchar_t pszDest; // [rsp+58h] [rbp-18h] BYREF

  v54 = this;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v7 = 0;
  v8 = (unsigned __int16 *)SetId;
  if ( SetId )
  {
    v9 = *((unsigned __int16 *)SetId + 16);
    v10 = *((_QWORD *)a2 + 8);
    if ( v10 )
      v11 = *(unsigned __int16 *)(v10 + 22);
    else
      v11 = 0LL;
    if ( (unsigned __int16)v9 > (unsigned __int16)v11 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v11, v9, v5, v6);
      v43 = *((_QWORD *)a2 + 8);
      if ( v43 )
        v7 = *(_WORD *)(v43 + 22);
      *(_QWORD *)(v42 + 24) = v7;
      *(_QWORD *)(v42 + 32) = v8[16];
      WdLogEvent5_WdAssertion(v42);
      return 3221225507LL;
    }
    else
    {
      v12 = 0;
      if ( (_WORD)v9 )
      {
        do
        {
          PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v12, v5, v6);
          CCD_TOPOLOGY::ClearPathDescriptor(PathDescriptor);
          ++v12;
        }
        while ( v12 < v8[16] );
      }
      v52 = -1;
      v14 = 0LL;
      Handle = 0LL;
      LODWORD(v15) = -1073741823;
      v16 = 0;
      if ( v8[16] )
      {
        while ( 1 )
        {
          v17 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v8, v16, &v53, 0LL, &v48);
          v15 = v17;
          if ( v17 < 0 )
            break;
          v22 = v53;
          if ( v52 != v53 )
          {
            v23 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", v53);
            v15 = v23;
            if ( v23 < 0 )
            {
              v45 = (_QWORD *)WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
              v45[3] = v15;
              v45[4] = v16;
              v45[5] = v22;
              v45[6] = a2;
              v45[7] = *((_QWORD *)a2 + 8);
              goto LABEL_48;
            }
            if ( Handle )
              ZwClose(Handle);
            v28 = CcdOpenRegistrySubkey((int)&Handle, 131097, *((_QWORD *)v54 + 8), &pszDest, 0LL);
            v15 = v28;
            if ( v28 < 0 )
            {
              v44 = (_QWORD *)WdLogNewEntry5_WdError(v29);
              v44[4] = v16;
              v44[3] = v15;
              v44[5] = v22;
              v44[6] = a2;
              v44[7] = *((_QWORD *)a2 + 8);
              WdLogEvent5_WdError(v44);
              goto LABEL_28;
            }
            v52 = v22;
          }
          v30 = CCD_TOPOLOGY::GetPathDescriptor(a2, v16, v20, v21);
          RegistryValues = CcdReadRegistryValues(Handle, 0LL, &unk_1C00465E0, 8u, (__int64)v30);
          v15 = RegistryValues;
          if ( RegistryValues < 0 )
            goto LABEL_45;
          v33 = CcdReadRegistryValues(Handle, 0LL, &unk_1C0046420, 2u, (__int64)v30);
          v15 = v33;
          if ( v33 == -1073741772 )
          {
            *((_DWORD *)v30 + 53) = 0;
          }
          else if ( v33 < 0 )
          {
LABEL_45:
            v46 = (_QWORD *)WdLogNewEntry5_WdError(v32);
            v46[3] = v15;
            v46[4] = Handle;
            v46[5] = v48;
            v46[6] = v16;
            goto LABEL_46;
          }
          v51 = *((_DWORD *)v30 + 21);
          v50 = *((_DWORD *)v30 + 22);
          Path = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(v32, Handle, v48, v30);
          v15 = Path;
          if ( Path < 0 )
          {
            v46 = (_QWORD *)WdLogNewEntry5_WdError(v35);
            v46[4] = v16;
            v46[5] = v48;
            v46[3] = v15;
            v46[6] = a2;
            v46[7] = *((_QWORD *)a2 + 8);
LABEL_46:
            WdLogEvent5_WdError(v46);
            CCD_TOPOLOGY::ClearPathDescriptor(v30);
            goto LABEL_28;
          }
          *(_DWORD *)v30 &= 0x830B87u;
          v36 = *(_DWORD *)v30;
          if ( (*(_DWORD *)v30 & 0x20000) != 0 )
          {
            if ( v48 )
            {
              *(_QWORD *)((char *)v30 + 140) = v14;
            }
            else
            {
              if ( (v36 & 0x200) != 0 && ((*((_DWORD *)v30 + 30) - 2) & 0xFFFFFFFD) == 0 )
              {
                *((_DWORD *)v30 + 35) = v50;
                v37 = v51;
              }
              else
              {
                *((_DWORD *)v30 + 35) = v51;
                v37 = v50;
              }
              *((_DWORD *)v30 + 36) = v37;
              v14 = *(_QWORD *)((char *)v30 + 140);
            }
          }
          if ( (v36 & 0x10000) != 0 )
          {
            v38 = *((_DWORD *)v30 + 32);
            *(_DWORD *)v30 = v36 | 0x400;
            *((_DWORD *)v30 + 31) = v38;
          }
          if ( ++v16 >= v8[16] )
            goto LABEL_28;
        }
        v45 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
        v45[3] = v15;
        v45[4] = v16;
        v45[5] = a2;
        v45[6] = *((_QWORD *)a2 + 8);
LABEL_48:
        WdLogEvent5_WdAssertion(v45);
LABEL_28:
        if ( (int)v15 >= 0 )
        {
          v15 = *(int *)CCD_TOPOLOGY::SetModalitySetId((void **)a2, (const struct CCD_SET_STRING_ID *)v8);
          if ( (int)v15 < 0 )
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdError(v39);
            v47[3] = v15;
            v47[4] = a2;
            v47[5] = v8;
            WdLogEvent5_WdError(v47);
          }
          else
          {
            *(_WORD *)(*((_QWORD *)a2 + 8) + 20LL) = v8[16];
            *(_DWORD *)(*((_QWORD *)a2 + 8) + 24LL) |= 1u;
          }
        }
        if ( Handle )
          ZwClose(Handle);
      }
      return (unsigned int)v15;
    }
  }
  else
  {
    v41 = WdLogNewEntry5_WdError(v4);
    WdLogEvent5_WdError(v41);
    return 3221225473LL;
  }
}
