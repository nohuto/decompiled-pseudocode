/*
 * XREFs of ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180016810
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B3B0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ExecutionModel::ReadPolicies @ 0x18001BE60 (ExecutionModel--ReadPolicies.c)
 *     _lambda_50a6150c629f36decbcd8feeef80d8a2_::operator() @ 0x18001DE20 (_lambda_50a6150c629f36decbcd8feeef80d8a2_--operator().c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180039690 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?replace@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_K00G@Z @ 0x180039808 (-replace@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_N_K00G@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x18002EE5C (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 */

void **__fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
        _QWORD *a1,
        void **a2,
        unsigned __int64 a3,
        __int64 a4)
{
  char *v5; // rdx
  char *v6; // rax
  unsigned __int64 v7; // rax
  char v8; // di
  void **v9; // rcx
  void *Block[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = (char *)*a1;
  if ( (_QWORD *)*a1 == a1 + 2 )
    v6 = (char *)a1 + 30;
  else
    v6 = (char *)a1[2];
  v7 = 2 * ((v6 - v5) >> 1) + 1;
  if ( v7 < a3 )
    v7 = a3;
  if ( v7 > 0x3FFFFFFFFFFFFFFELL )
    v7 = 0x3FFFFFFFFFFFFFFELL;
  if ( a3 > v7 )
  {
    v8 = 2;
    v12[0] = 0LL;
    v12[1] = 0LL;
    v9 = (void **)v12;
  }
  else
  {
    v8 = 1;
    Block[1] = (void *)(v7 + 1);
    if ( v7 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      Block[0] = 0LL;
    else
      Block[0] = operator new(2 * (v7 + 1), (const struct std::nothrow_t *)&std::nothrow);
    v9 = Block;
  }
  *a2 = *v9;
  a2[1] = v9[1];
  *v9 = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(
      v12,
      v5,
      a3,
      a4);
  }
  if ( (v8 & 1) != 0 && Block[0] )
    operator delete(Block[0]);
  return a2;
}
