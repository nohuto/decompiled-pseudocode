/*
 * XREFs of ?_EmplaceImpl@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x18000AAB0
 * Callers:
 *     ??$emplace@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAVEnforcerApplicationState@@@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@utl@@_N@1@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAVEnforcerApplicationState@@@Z @ 0x18000AC40 (--$emplace@AEAU_RM_PSM_APP_INSTANCE_ID@@AEAVEnforcerApplicationState@@@-$_HashTable@U_RM_PSM_APP.c)
 *     ?SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000C470 (-SetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K22PEAW4_P.c)
 * Callees:
 *     ?_FindKey@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA_NV?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@AEBU_RM_PSM_APP_INSTANCE_ID@@_KPEAPEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x18000A92C (-_FindKey@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcer.c)
 *     ?_InsertNode@?$_HashTable@PEBGU?$pair@QEBGW4RmResourceSetType@@@utl@@U?$hash@PEBG@2@U?$equal_to@PEBG@2@V?$allocator@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@$0A@@utl@@AEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@QEBGW4RmResourceSetType@@@utl@@@2@0_K@Z @ 0x18000AA10 (-_InsertNode@-$_HashTable@PEBGU-$pair@QEBGW4RmResourceSetType@@@utl@@U-$hash@PEBG@2@U-$equal_to@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::_EmplaceImpl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        char *Block)
{
  char *v5; // rbp
  __int64 *v6; // rax
  __int64 v9; // rdi
  WCHAR *v10; // rsi
  WCHAR *v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 **inserted; // rax
  WCHAR v17; // [rsp+70h] [rbp+18h]

  v5 = Block;
  v6 = a4;
  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  if ( v5 )
  {
    v9 = 314159LL;
    v10 = (WCHAR *)(v5 + 488);
    v11 = (WCHAR *)(v5 + 24);
    if ( v5 + 24 < v5 + 488 )
    {
      do
      {
        v17 = RtlUpcaseUnicodeChar(*v11++);
        v9 = HIBYTE(v17) + 37 * ((unsigned __int8)v17 + 37 * v9);
      }
      while ( v11 < v10 );
      v6 = a4;
    }
    v12 = 11LL;
    do
    {
      v13 = *(unsigned __int8 *)v10;
      v10 += 4;
      v9 = *((unsigned __int8 *)v10 - 1)
         + 37
         * (*((unsigned __int8 *)v10 - 2)
          + 37
          * (*((unsigned __int8 *)v10 - 3)
           + 37
           * (*((unsigned __int8 *)v10 - 4)
            + 37
            * (*((unsigned __int8 *)v10 - 5)
             + 37 * (*((unsigned __int8 *)v10 - 6) + 37 * (*((unsigned __int8 *)v10 - 7) + 37 * (v13 + 37 * v9)))))));
      --v12;
    }
    while ( v12 );
    v14 = 32769 * ((9 * v9) ^ ((unsigned __int64)(9 * v9) >> 11));
    *((_QWORD *)v5 + 2) = v14;
    if ( utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::_FindKey(
           a1,
           v6,
           (const wchar_t *)v5 + 12,
           v14,
           (__int64 **)&Block) )
    {
      *(_QWORD *)a2 = Block;
      operator delete(v5);
    }
    else
    {
      inserted = utl::_HashTable<unsigned short const *,utl::pair<unsigned short const * const,enum RmResourceSetType>,utl::hash<unsigned short const *>,utl::equal_to<unsigned short const *>,utl::allocator<utl::pair<unsigned short const * const,enum RmResourceSetType>>,0>::_InsertNode(
                   a1,
                   (__int64 **)&Block,
                   (__int64)Block,
                   (__int64 *)v5,
                   *((_QWORD *)v5 + 2));
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)a2 = *inserted;
    }
  }
  return a2;
}
