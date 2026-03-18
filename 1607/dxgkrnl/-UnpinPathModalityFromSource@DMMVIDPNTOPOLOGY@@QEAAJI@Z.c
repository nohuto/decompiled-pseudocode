/*
 * XREFs of ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C01A8290
 * Callers:
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C01A2844 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 * Callees:
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C00033F4 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0004FD0 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0004FF4 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C0005A90 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C007FA6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::UnpinPathModalityFromSource(DMMVIDPNTOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 i; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  volatile signed __int32 *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  DMMVIDPNTARGETMODESET *v18; // rcx
  _QWORD *v20; // rax
  DMMVIDPNTARGETMODESET *v21; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v23; // [rsp+68h] [rbp+20h] BYREF

  v2 = a2;
  for ( i = 0LL; ; ++i )
  {
    v22 = -1;
    v5 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, v2, i, &v22);
    v10 = v5;
    if ( v5 < 0 )
      break;
    if ( v22 == -1 )
      return 0LL;
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v2, v22);
    if ( !Path )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v13);
    }
    v14 = *((_QWORD *)Path + 11);
    v15 = *(volatile signed __int32 **)(v14 + 104);
    if ( v15 )
    {
      _InterlockedIncrement(v15 + 24);
      v15 = *(volatile signed __int32 **)(v14 + 104);
    }
    v23 = v15;
    DMMVIDPNSOURCEMODESET::UnpinMode((DMMVIDPNSOURCEMODESET *)v15);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v23, 0LL);
    v16 = *((_QWORD *)Path + 12);
    v17 = *(_QWORD *)(v16 + 104);
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 96));
      v18 = *(DMMVIDPNTARGETMODESET **)(v16 + 104);
    }
    else
    {
      v18 = 0LL;
    }
    v21 = v18;
    DMMVIDPNTARGETMODESET::UnpinMode(v18);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v21, 0LL);
    DMMVIDPNPRESENTPATH::UnpinContentScaling(Path);
    DMMVIDPNPRESENTPATH::UnpinContentRotation(Path);
  }
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v20[3] = i;
  v20[4] = v2;
  v20[5] = this;
  v20[6] = v10;
  return (unsigned int)v10;
}
