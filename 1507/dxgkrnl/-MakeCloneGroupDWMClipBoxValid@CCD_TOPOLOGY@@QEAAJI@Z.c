/*
 * XREFs of ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0064FA0
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0064B1C (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C00085FC (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C002CA7C (-CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C005FFC0 (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C0062120 (DxgkGetAdapterDefaultScaling.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0066084 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupDWMClipBoxValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  unsigned int v3; // ebp
  int v4; // r15d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _LUID *v10; // rbx
  bool v11; // zf
  LONG v12; // eax
  int *p_HighPart; // rsi
  __int64 v14; // rcx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r10d
  int v22; // r10^4
  DWORD LowPart; // eax
  int v24; // eax
  int v25; // eax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  struct _LUID *v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // eax
  char v37; // al
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  DWORD HighPart; // [rsp+50h] [rbp+8h] BYREF
  DWORD v43; // [rsp+54h] [rbp+Ch]
  __int64 v44; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 50);
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v3);
    v10 = (struct _LUID *)PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 50) == v4 )
    {
      if ( !*((_BYTE *)PathDescriptor + 117) )
      {
        v11 = (*(_DWORD *)PathDescriptor & 0x100) == 0;
        goto LABEL_5;
      }
      v16 = *((_DWORD *)PathDescriptor + 30);
      v44 = *(_QWORD *)((char *)PathDescriptor + 84);
      if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION(v16) - 2) & 0xFFFFFFFD) != 0 )
      {
        HighPart = v10[17].HighPart;
        LowPart = v10[18].LowPart;
      }
      else
      {
        HighPart = v10[18].LowPart;
        LowPart = v10[17].HighPart;
      }
      v11 = (v10->LowPart & 0x800000) == 0;
      v43 = LowPart;
      if ( v11 )
        goto LABEL_26;
      v18 = v10[20].LowPart;
      if ( (int)v18 < 0 )
        break;
      v24 = v10[19].HighPart;
      if ( v24 < 0 )
        break;
      v17 = (unsigned int)v10[20].HighPart;
      if ( (int)v17 <= v24 )
        break;
      v25 = v10[21].LowPart;
      if ( v25 <= (int)v18 || (int)v17 > v21 || v25 > v22 )
        break;
    }
LABEL_12:
    if ( ++v3 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return 0LL;
  }
  if ( (v10->HighPart & 0x800000) == 0 )
  {
LABEL_26:
    v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
    v27[3] = v3;
    v27[4] = v10[2].LowPart;
    v7 = (unsigned int)v10[2].HighPart;
    v27[5] = v7;
    if ( (v10->LowPart & 0x400) == 0 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v28);
    }
    if ( v10[15].HighPart == 1 )
    {
      v29 = v10 + 16;
      if ( (v10->LowPart & 0x10000) != 0 )
      {
        if ( v29->LowPart == 5 )
        {
          DxgkGetAdapterDefaultScaling(v10 + 1, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v10[16]);
          v10[23].LowPart |= 0x200u;
        }
      }
      else
      {
        DxgkGetAdapterDefaultScaling(v10 + 1, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v10[16]);
        v10->LowPart |= 0x10000u;
        v10[23].LowPart |= 0x80u;
      }
      p_HighPart = &v10[19].HighPart;
      v30 = ConvertDmmToDisplayConfigScaling(v29->LowPart, v6, v8, v9);
      if ( !CalculateScaling(v30, (unsigned int *)&v44, &HighPart, (unsigned int *)&v10[19].HighPart) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v31, v6, v8, v9);
        *(_QWORD *)(v32 + 24) = (int)v29->LowPart;
        WdLogEvent5_WdAssertion(v32);
        DxgkGetAdapterDefaultScaling(v10 + 1, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v10[16]);
        v36 = ConvertDmmToDisplayConfigScaling(v29->LowPart, v33, v34, v35);
        v37 = CalculateScaling(v36, (unsigned int *)&v44, &HighPart, (unsigned int *)&v10[19].HighPart);
        v10[23].LowPart |= 0x40u;
        if ( !v37 )
        {
          v39 = WdLogNewEntry5_WdAssertion(v38, v6, v8, v9);
          *(_QWORD *)(v39 + 24) = 5422LL;
          WdLogEvent5_WdAssertion(v39);
        }
      }
      goto LABEL_8;
    }
    v11 = (v10->LowPart & 0x100) == 0;
LABEL_5:
    if ( v11 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v40);
    }
    v12 = v10[10].HighPart;
    p_HighPart = &v10[19].HighPart;
    v10[23].LowPart |= 1u;
    v10[20].HighPart = v12;
    v10[21].LowPart = v10[11].LowPart;
    v10[19].HighPart = 0;
    v10[20].LowPart = 0;
LABEL_8:
    v10->LowPart |= 0x800000u;
    v14 = v10[20].LowPart;
    if ( (int)v14 < 0 || *p_HighPart < 0 || v10[20].HighPart <= *p_HighPart || (signed int)v10[21].LowPart <= (int)v14 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v14, v6, v8, v9);
      *(_QWORD *)(v41 + 24) = 5442LL;
      WdLogEvent5_WdAssertion(v41);
    }
    goto LABEL_12;
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdError(v18);
  v26[3] = v3;
  v26[4] = v10[2].LowPart;
  v26[5] = (unsigned int)v10[2].HighPart;
  WdLogEvent5_WdError(v26);
  return 3221225485LL;
}
