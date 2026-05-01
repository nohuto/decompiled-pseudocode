/*
 * XREFs of ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x1800172F8
 * Callers:
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180016B70 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 * Callees:
 *     ??$?RU_RM_PSM_APP_INSTANCE_ID@@AEAU0@@?$construct@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NPEAU_RM_PSM_APP_INSTANCE_ID@@AEAU2@@Z @ 0x18001AC4C (--$-RU_RM_PSM_APP_INSTANCE_ID@@AEAU0@@-$construct@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_NPEAU_RM_.c)
 *     ?_EmplaceImpl@?$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_APP_INSTANCE_ID@@@3@U?$equal_to@U_RM_PSM_APP_INSTANCE_ID@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x18001B020 (-_EmplaceImpl@-$_HashTable@U_RM_PSM_APP_INSTANCE_ID@@U-$pair@$$CBU_RM_PSM_APP_INSTANCE_ID@@VEnfo.c)
 *     ?RmpInitializeEnforcerApplicationStateMapKey@@YAXPEBGPEAT_RM_SID@@KK_KPEAU_RM_PSM_APP_INSTANCE_ID@@@Z @ 0x18001B284 (-RmpInitializeEnforcerApplicationStateMapKey@@YAXPEBGPEAT_RM_SID@@KK_KPEAU_RM_PSM_APP_INSTANCE_I.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

struct EnforcerApplicationState *__fastcall ModernResourceEnforcer::CreateApplicationState(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  int v6; // edi
  _DWORD *v7; // rax
  __int64 v8; // rcx
  int v9; // r8d
  _DWORD *v10; // r10
  char v11; // al
  void *Block; // rbx
  struct EnforcerApplicationState *result; // rax
  int v14; // [rsp+30h] [rbp-268h]
  int v15[2]; // [rsp+38h] [rbp-260h] BYREF
  wchar_t Buffer[280]; // [rsp+50h] [rbp-248h] BYREF

  LOBYTE(v14) = 0;
  HIWORD(v14) = -1;
  v6 = (int)this;
  RmpInitializeEnforcerApplicationStateMapKey(a2, a3, a4, a5, a6, Buffer);
  v7 = operator new(0x248uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v7;
  if ( v7
    && (v11 = utl::construct<_RM_PSM_APP_INSTANCE_ID>::operator()<_RM_PSM_APP_INSTANCE_ID,_RM_PSM_APP_INSTANCE_ID &>(
                v8,
                v7 + 6,
                Buffer),
        v10[144] = v14,
        v11) )
  {
    Block = v10;
  }
  else
  {
    Block = v10;
    if ( v10 )
    {
      Block = 0LL;
      operator delete(v10);
    }
  }
  utl::_HashTable<_RM_PSM_APP_INSTANCE_ID,utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>,utl::hash<_RM_PSM_APP_INSTANCE_ID>,utl::equal_to<_RM_PSM_APP_INSTANCE_ID>,utl::allocator<utl::pair<_RM_PSM_APP_INSTANCE_ID const,EnforcerApplicationState>>,0>::_EmplaceImpl(
    v6 + 208,
    (int)v15,
    v9,
    0,
    Block);
  result = (struct EnforcerApplicationState *)(*(_QWORD *)v15 + 576LL);
  if ( *(_QWORD *)v15 == -576LL )
    __fastfail(0x80004003);
  return result;
}
