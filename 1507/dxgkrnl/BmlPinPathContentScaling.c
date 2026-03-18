/*
 * XREFs of BmlPinPathContentScaling @ 0x1C009B1A8
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C009AFAC (BmlPinNextBestTargetMode.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C0005D74 (-GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000604C (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C00966D4 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     BmlInternalTryPinningScaling @ 0x1C009B328 (BmlInternalTryPinningScaling.c)
 */

__int64 __fastcall BmlPinPathContentScaling(_QWORD *a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r15
  int *v5; // rdi
  __int64 v6; // rbp
  DMMVIDPNPRESENTPATH *Path; // rbx
  __int64 v8; // rdx
  int *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  VIDPN_MGR *v25; // rcx
  __int64 v26; // r14
  _QWORD *v27; // [rsp+50h] [rbp+8h] BYREF
  _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v28; // [rsp+60h] [rbp+18h] BYREF

  v27 = a1;
  v3 = a3;
  v5 = (int *)&a1[13 * a3 + 2];
  v6 = v5[2];
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)v5 + 16LL),
           *(_DWORD *)(*(_QWORD *)v5 + 20LL));
  v28 = 0;
  DMMVIDPNPRESENTPATH::GetScalingSupport(Path, &v28);
  if ( !DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(Path) )
  {
    v14 = -1071774970;
    if ( (unsigned int)(v6 - 2) > 3 && (_DWORD)v6 != 255
      || (v14 = BmlInternalTryPinningScaling(v5, a2, (unsigned int)v6, *(unsigned int *)&v28), v14 == -1071774970) )
    {
      if ( (dword_1C0047FAC & 1) == 0 )
      {
        v25 = *(VIDPN_MGR **)(a2 + 48);
        dword_1C0047FAC |= 1u;
        dword_1C0047F70[0] = VIDPN_MGR::GetAdapterDefaultScaling(v25, v8, v10, v11);
        dword_1C0047F74 = 3;
        dword_1C0047F78 = 4;
        dword_1C0047F7C = 2;
      }
      v26 = 0LL;
      do
      {
        if ( (unsigned int)v26 >= 4 )
          break;
        v9 = dword_1C0047F70;
        v10 = (unsigned int)dword_1C0047F70[v26];
        if ( (_DWORD)v10 != (_DWORD)v6 )
          v14 = BmlInternalTryPinningScaling(v5, a2, v10, *(unsigned int *)&v28);
        v26 = (unsigned int)(v26 + 1);
      }
      while ( v14 == -1071774970 );
    }
    if ( v14 >= 0 )
      return (unsigned int)v14;
    ++v5[16];
    v5[18] = v14;
    if ( v14 == -1071774970 )
      return (unsigned int)v14;
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    v24 = &v27;
    v23[3] = v6;
LABEL_22:
    v23[4] = v24;
    v23[5] = a2;
    v23[6] = v3;
    WdLogEvent5_WdWarning(v23);
    return (unsigned int)v14;
  }
  if ( (_DWORD)v6 != 5 )
  {
LABEL_3:
    v14 = BmlInternalTryPinningScaling(v5, a2, 1LL, *(unsigned int *)&v28);
    if ( v14 >= 0 )
      return 0LL;
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v15, v16);
    v23[3] = v5[2];
    v24 = v27;
    goto LABEL_22;
  }
  result = BmlInternalTryPinningScaling(v5, a2, 5LL, *(unsigned int *)&v28);
  if ( (int)result < 0 )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    v22[3] = v27;
    v22[4] = a2;
    v22[5] = v3;
    WdLogEvent5_WdWarning(v22);
    goto LABEL_3;
  }
  return result;
}
