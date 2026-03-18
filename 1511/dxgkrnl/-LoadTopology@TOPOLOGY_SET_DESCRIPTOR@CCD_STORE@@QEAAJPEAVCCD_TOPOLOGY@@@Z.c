/*
 * XREFs of ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C0060D9C
 * Callers:
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00C2F60 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000A560 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     sub_1C005F048 @ 0x1C005F048 (sub_1C005F048.c)
 *     sub_1C005F2F8 @ 0x1C005F2F8 (sub_1C005F2F8.c)
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0060AF0 (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C0060D60 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C0061BDC (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00A4500 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00C28C4 (-ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
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
  int v23; // eax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v24; // rcx
  int v25; // eax
  int Path; // eax
  __int64 v27; // rcx
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  __int64 v31; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  unsigned int v40; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  int v42; // [rsp+40h] [rbp-30h]
  int v43; // [rsp+44h] [rbp-2Ch]
  int v44; // [rsp+48h] [rbp-28h]
  unsigned int v45; // [rsp+4Ch] [rbp-24h] BYREF
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v46; // [rsp+50h] [rbp-20h]
  wchar_t pszDest; // [rsp+58h] [rbp-18h] BYREF

  v46 = this;
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
      v34 = WdLogNewEntry5_WdAssertion(v9);
      v35 = *((_QWORD *)a2 + 8);
      if ( v35 )
        v5 = *(_WORD *)(v35 + 22);
      *(_QWORD *)(v34 + 24) = v5;
      *(_QWORD *)(v34 + 32) = v6[16];
      WdLogEvent5_WdAssertion(v34);
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
      v44 = -1;
      v12 = 0LL;
      Handle = 0LL;
      LODWORD(v13) = -1073741823;
      v14 = 0;
      if ( v6[16] )
      {
        while ( 1 )
        {
          v15 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v6, v14, &v45, 0LL, &v40);
          v13 = v15;
          if ( v15 < 0 )
            break;
          v17 = v45;
          if ( v44 != v45 )
          {
            v18 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", v45);
            v13 = v18;
            if ( v18 < 0 )
            {
              v37 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19);
              v37[3] = v13;
              v37[4] = v14;
              v37[5] = v17;
              v37[6] = a2;
              v37[7] = *((_QWORD *)a2 + 8);
              goto LABEL_50;
            }
            if ( Handle )
              ZwClose(Handle);
            v20 = sub_1C005F2F8((int)&Handle, 131097, *((_QWORD *)v46 + 8), &pszDest, 0LL);
            v13 = v20;
            if ( v20 < 0 )
            {
              v36 = (_QWORD *)WdLogNewEntry5_WdError(v21);
              v36[4] = v14;
              v36[3] = v13;
              v36[5] = v17;
              v36[6] = a2;
              v36[7] = *((_QWORD *)a2 + 8);
              WdLogEvent5_WdError(v36);
              goto LABEL_30;
            }
            v44 = v17;
          }
          v22 = CCD_TOPOLOGY::GetPathDescriptor(a2, v14);
          v23 = sub_1C005F048(Handle, 0LL, &unk_1C00465E0, 8u, (__int64)v22);
          v13 = v23;
          if ( v23 < 0 )
            goto LABEL_47;
          v25 = sub_1C005F048(Handle, 0LL, &unk_1C0046420, 2u, (__int64)v22);
          v13 = v25;
          if ( v25 == -1073741772 )
          {
            *((_DWORD *)v22 + 53) = 0;
          }
          else if ( v25 < 0 )
          {
LABEL_47:
            v38 = (_QWORD *)WdLogNewEntry5_WdError(v24);
            v38[3] = v13;
            v38[4] = Handle;
            v38[5] = v40;
            v38[6] = v14;
            goto LABEL_48;
          }
          v43 = *((_DWORD *)v22 + 21);
          v42 = *((_DWORD *)v22 + 22);
          Path = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(v24, Handle, v40, v22);
          v13 = Path;
          if ( Path < 0 )
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdError(v27);
            v38[4] = v14;
            v38[5] = v40;
            v38[3] = v13;
            v38[6] = a2;
            v38[7] = *((_QWORD *)a2 + 8);
LABEL_48:
            WdLogEvent5_WdError(v38);
            CCD_TOPOLOGY::ClearPathDescriptor(v22);
            goto LABEL_30;
          }
          *(_DWORD *)v22 &= 0x830B87u;
          v28 = *(_DWORD *)v22;
          if ( (*(_DWORD *)v22 & 0x20000) != 0 )
          {
            if ( v40 )
            {
              *(_QWORD *)((char *)v22 + 140) = v12;
            }
            else
            {
              if ( (v28 & 0x200) != 0 && ((*((_DWORD *)v22 + 30) - 2) & 0xFFFFFFFD) == 0 )
              {
                *((_DWORD *)v22 + 35) = v42;
                v29 = v43;
              }
              else
              {
                *((_DWORD *)v22 + 35) = v43;
                v29 = v42;
              }
              *((_DWORD *)v22 + 36) = v29;
              v12 = *(_QWORD *)((char *)v22 + 140);
            }
          }
          if ( (v28 & 0x10000) != 0 )
          {
            v30 = *((_DWORD *)v22 + 32);
            *(_DWORD *)v22 = v28 | 0x400;
            *((_DWORD *)v22 + 31) = v30;
          }
          if ( (*(_DWORD *)v22 & 0x100) == 0 )
            *(_DWORD *)v22 &= ~0x800000u;
          if ( ++v14 >= v6[16] )
            goto LABEL_30;
        }
        v37 = (_QWORD *)WdLogNewEntry5_WdAssertion(v16);
        v37[3] = v13;
        v37[4] = v14;
        v37[5] = a2;
        v37[6] = *((_QWORD *)a2 + 8);
LABEL_50:
        WdLogEvent5_WdAssertion(v37);
LABEL_30:
        if ( (int)v13 >= 0 )
        {
          v13 = *(int *)CCD_TOPOLOGY::SetModalitySetId(a2, (const struct CCD_SET_STRING_ID *)v6);
          if ( (int)v13 < 0 )
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdError(v31);
            v39[3] = v13;
            v39[4] = a2;
            v39[5] = v6;
            WdLogEvent5_WdError(v39);
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
    v33 = WdLogNewEntry5_WdError(v4);
    WdLogEvent5_WdError(v33);
    return 3221225473LL;
  }
}
