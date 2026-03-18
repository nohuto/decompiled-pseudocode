/*
 * XREFs of ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C017AA64
 * Callers:
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C017481C (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C000D744 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C000DE48 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C000DE6C (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  volatile signed __int32 *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  DMMVIDPNTARGETMODESET *v21; // rcx
  _QWORD *v23; // rax
  DMMVIDPNTARGETMODESET *v24; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v26; // [rsp+68h] [rbp+20h] BYREF

  v2 = a2;
  for ( i = 0LL; ; ++i )
  {
    v25 = -1;
    v5 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, (unsigned int)v2, i, &v25);
    v10 = v5;
    if ( v5 < 0 )
      break;
    if ( v25 == -1 )
      return 0LL;
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v2, v25);
    if ( !Path )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12, v11, v14, v15);
      WdLogEvent5_WdAssertion(v16);
    }
    v17 = *((_QWORD *)Path + 11);
    v18 = *(volatile signed __int32 **)(v17 + 104);
    if ( v18 )
    {
      _InterlockedIncrement(v18 + 24);
      v18 = *(volatile signed __int32 **)(v17 + 104);
    }
    v26 = v18;
    DMMVIDPNTARGETMODESET::UnpinMode((DMMVIDPNTARGETMODESET *)v18);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v26, 0LL);
    v19 = *((_QWORD *)Path + 12);
    v20 = *(_QWORD *)(v19 + 104);
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 96));
      v21 = *(DMMVIDPNTARGETMODESET **)(v19 + 104);
    }
    else
    {
      v21 = 0LL;
    }
    v24 = v21;
    DMMVIDPNTARGETMODESET::UnpinMode(v21);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v24, 0LL);
    DMMVIDPNPRESENTPATH::UnpinContentScaling(Path);
    DMMVIDPNPRESENTPATH::UnpinContentRotation(Path);
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v23[3] = i;
  v23[4] = v2;
  v23[5] = this;
  v23[6] = v10;
  return (unsigned int)v10;
}
