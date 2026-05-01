/*
 * XREFs of ??$emplace@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAVEnforcerApplicationState@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@utl@@_N@1@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAVEnforcerApplicationState@@@Z @ 0x18000AC40
 * Callers:
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x18000BF50 (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 * Callees:
 *     ?_EmplaceImpl@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x18000AAB0 (-_EmplaceImpl@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnfo.c)
 *     ??$?RU_RM_PSM_APP_INSTANCE_ID@@AEAU0@@?$construct@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NPEAU_RM_PSM_APP_INSTANCE_ID@@AEAU2@@Z @ 0x18000ACE8 (--$-RU_RM_PSM_APP_INSTANCE_ID@@AEAU0@@-$construct@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NPEAU_RM_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::emplace<_RM_PSM_APP_INSTANCE_ID &,EnforcerApplicationState &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  char *v11; // rdi
  char v12; // al
  char *Block; // rax

  v8 = (char *)operator new(0x248uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v8;
  if ( v8
    && (v12 = utl::construct<_RM_PSM_APP_INSTANCE_ID>::operator()<_RM_PSM_APP_INSTANCE_ID,_RM_PSM_APP_INSTANCE_ID &>(
                v9,
                v8 + 24,
                a3),
        *((_DWORD *)v11 + 144) = *a4,
        v12) )
  {
    Block = v11;
    v11 = 0LL;
  }
  else
  {
    Block = v11;
    if ( v11 )
      Block = 0LL;
  }
  utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::_EmplaceImpl(
    a1,
    a2,
    v10,
    0LL,
    Block);
  if ( v11 )
    operator delete(v11);
  return a2;
}
