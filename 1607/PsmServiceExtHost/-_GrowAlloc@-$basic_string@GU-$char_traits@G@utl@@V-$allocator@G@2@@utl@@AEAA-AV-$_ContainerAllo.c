/*
 * XREFs of ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x18000D850
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B990 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18002D5B0 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800208FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x1800284A8 (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 */

void **__fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
        _QWORD *a1,
        void **a2,
        unsigned __int64 a3)
{
  char *v4; // rdx
  char *v5; // rax
  unsigned __int64 v6; // rax
  char v7; // di
  void **v8; // rcx
  void *Block[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (char *)*a1;
  if ( (_QWORD *)*a1 == a1 + 2 )
    v5 = (char *)a1 + 30;
  else
    v5 = (char *)a1[2];
  v6 = 2 * ((v5 - v4) >> 1) + 1;
  if ( v6 < a3 )
    v6 = a3;
  if ( v6 > 0x3FFFFFFFFFFFFFFELL )
    v6 = 0x3FFFFFFFFFFFFFFELL;
  if ( a3 > v6 )
  {
    v7 = 2;
    v11[0] = 0LL;
    v11[1] = 0LL;
    v8 = (void **)v11;
  }
  else
  {
    v7 = 1;
    Block[1] = (void *)(v6 + 1);
    if ( v6 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      Block[0] = 0LL;
    else
      Block[0] = operator new(2 * (v6 + 1), (const struct std::nothrow_t *)&unk_18003CF1A);
    v8 = Block;
  }
  *a2 = *v8;
  a2[1] = v8[1];
  *v8 = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(
      v11,
      v4);
  }
  if ( (v7 & 1) != 0 && Block[0] )
    operator delete(Block[0]);
  return a2;
}
