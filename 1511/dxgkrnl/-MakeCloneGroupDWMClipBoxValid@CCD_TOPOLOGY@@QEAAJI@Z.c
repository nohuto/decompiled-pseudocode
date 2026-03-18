/*
 * XREFs of ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A3630
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00A3104 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0009FA8 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C000CE88 (-CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00A484C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00AAA9C (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00AE2A0 (DxgkGetAdapterDefaultScaling.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupDWMClipBoxValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  unsigned int v3; // ebp
  int v4; // r15d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v6; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v7; // rbx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r10d
  int v14; // r10^4
  int v15; // eax
  int v16; // eax
  int v17; // eax
  _QWORD *v19; // rax
  _DWORD *v20; // rdi
  int *v21; // rsi
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  bool v25; // zf
  int v26; // eax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // eax
  char v31; // al
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // [rsp+50h] [rbp+8h] BYREF
  int v37; // [rsp+54h] [rbp+Ch]
  __int64 v38; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 50);
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v3);
    v7 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 50) != v4 )
      goto LABEL_13;
    if ( !*((_BYTE *)PathDescriptor + 117) )
    {
      v25 = (*(_DWORD *)PathDescriptor & 0x100) == 0;
      goto LABEL_28;
    }
    v8 = *((_DWORD *)PathDescriptor + 30);
    v38 = *(_QWORD *)((char *)PathDescriptor + 84);
    if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION(v8) - 2) & 0xFFFFFFFD) != 0 )
    {
      v36 = *((_DWORD *)v7 + 35);
      v15 = *((_DWORD *)v7 + 36);
    }
    else
    {
      v36 = *((_DWORD *)v7 + 36);
      v15 = *((_DWORD *)v7 + 35);
    }
    v25 = (*(_DWORD *)v7 & 0x800000) == 0;
    v37 = v15;
    if ( v25 )
      goto LABEL_15;
    v10 = *((unsigned int *)v7 + 40);
    if ( (int)v10 < 0 )
      break;
    v16 = *((_DWORD *)v7 + 39);
    if ( v16 < 0 )
      break;
    v9 = *((unsigned int *)v7 + 41);
    if ( (int)v9 <= v16 )
      break;
    v17 = *((_DWORD *)v7 + 42);
    if ( v17 <= (int)v10 || (int)v9 > v13 || v17 > v14 )
      break;
LABEL_13:
    if ( ++v3 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return 0LL;
  }
  if ( (*((_DWORD *)v7 + 1) & 0x800000) == 0 )
  {
LABEL_15:
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    v19[3] = v3;
    v19[4] = *((unsigned int *)v7 + 4);
    v6 = *((unsigned int *)v7 + 5);
    v19[5] = v6;
    if ( (*(_DWORD *)v7 & 0x400) == 0 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v28);
    }
    if ( *((_DWORD *)v7 + 31) == 1 )
    {
      v20 = (_DWORD *)((char *)v7 + 128);
      if ( (*(_DWORD *)v7 & 0x10000) != 0 )
      {
        if ( *v20 == 5 )
        {
          DxgkGetAdapterDefaultScaling((char *)v7 + 8);
          *((_DWORD *)v7 + 46) |= 0x200u;
        }
      }
      else
      {
        DxgkGetAdapterDefaultScaling((char *)v7 + 8);
        *(_DWORD *)v7 |= 0x10000u;
        *((_DWORD *)v7 + 46) |= 0x80u;
      }
      v21 = (int *)((char *)v7 + 156);
      v22 = ConvertDmmToDisplayConfigScaling((unsigned int)*v20);
      if ( !CalculateScaling(v22, (unsigned int *)&v38, &v36, (unsigned int *)v7 + 39) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v29 + 24) = (int)*v20;
        WdLogEvent5_WdAssertion(v29);
        DxgkGetAdapterDefaultScaling((char *)v7 + 8);
        v30 = ConvertDmmToDisplayConfigScaling((unsigned int)*v20);
        v31 = CalculateScaling(v30, (unsigned int *)&v38, &v36, (unsigned int *)v7 + 39);
        *((_DWORD *)v7 + 46) |= 0x40u;
        if ( !v31 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v32);
          *(_QWORD *)(v33 + 24) = 5539LL;
          WdLogEvent5_WdAssertion(v33);
        }
      }
LABEL_22:
      *(_DWORD *)v7 |= 0x800000u;
      v24 = *((unsigned int *)v7 + 40);
      if ( (int)v24 < 0 || *v21 < 0 || *((_DWORD *)v7 + 41) <= *v21 || *((_DWORD *)v7 + 42) <= (int)v24 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v24);
        *(_QWORD *)(v35 + 24) = 5559LL;
        WdLogEvent5_WdAssertion(v35);
      }
      goto LABEL_13;
    }
    v25 = (*(_DWORD *)v7 & 0x100) == 0;
LABEL_28:
    if ( v25 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v34);
    }
    v26 = *((_DWORD *)v7 + 21);
    v21 = (int *)((char *)v7 + 156);
    *((_DWORD *)v7 + 46) |= 1u;
    *((_DWORD *)v7 + 41) = v26;
    *((_DWORD *)v7 + 42) = *((_DWORD *)v7 + 22);
    *((_DWORD *)v7 + 39) = 0;
    *((_DWORD *)v7 + 40) = 0;
    goto LABEL_22;
  }
  v27 = (_QWORD *)WdLogNewEntry5_WdError(v10);
  v27[3] = v3;
  v27[4] = *((unsigned int *)v7 + 4);
  v27[5] = *((unsigned int *)v7 + 5);
  WdLogEvent5_WdError(v27);
  return 3221225485LL;
}
