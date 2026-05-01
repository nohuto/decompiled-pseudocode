/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x1800126D0
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180012860 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?Initialize@HostResourceInfo@ExecutionModel@@QEAAJPEAVApplicationPackageInfo@2@AEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x180013544 (-Initialize@HostResourceInfo@ExecutionModel@@QEAAJPEAVApplicationPackageInfo@2@AEBU_AppModelActi.c)
 *     ExecutionModel::ReadPolicies @ 0x180026250 (ExecutionModel--ReadPolicies.c)
 *     ??$?RV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEBV01@@?$construct@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@utl@@QEBA_NPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@AEBV21@@Z @ 0x1800296D4 (--$-RV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEBV01@@-$construct@V-$basic_.c)
 *     ?PostToast@AppEnergyInformation@@IEAAJKAEBVEnergyToastMessage@@@Z @ 0x180052060 (-PostToast@AppEnergyInformation@@IEAAJKAEBVEnergyToastMessage@@@Z.c)
 *     ?RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z @ 0x1800524CC (-RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18002BC72 (memcpy_0.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x1800366D0 (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 */

char __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  __int64 *v4; // r14
  __int64 *v6; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v12; // bp
  void **v13; // rax
  char *v14; // rsi
  void *v15; // r15
  size_t v16; // rdi
  char *v17; // rdi
  char result; // al
  _WORD *v19; // rdx
  void *Block[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v21[7]; // [rsp+30h] [rbp-38h] BYREF

  v4 = (__int64 *)(a1 + 16);
  v6 = *(__int64 **)a1;
  if ( v6 == v4 )
    v9 = a1 + 30;
  else
    v9 = *v4;
  if ( a3 <= (v9 - (__int64)v6) >> 1 )
  {
    if ( v6 != a2 )
      memmove(v6, a2, 2 * a3);
    result = 1;
    v19 = (_WORD *)(*(_QWORD *)a1 + 2 * a3);
    *(_QWORD *)(a1 + 8) = v19;
    *v19 = 0;
  }
  else
  {
    if ( v6 == v4 )
      v10 = a1 + 30;
    else
      v10 = *v4;
    v11 = 2 * ((v10 - (__int64)v6) >> 1) + 1;
    if ( v11 < a3 )
      v11 = a3;
    if ( v11 > 0x3FFFFFFFFFFFFFFELL )
      v11 = 0x3FFFFFFFFFFFFFFELL;
    if ( a3 > v11 )
    {
      v12 = 2;
      v21[0] = 0LL;
      v21[1] = 0LL;
      v13 = (void **)v21;
    }
    else
    {
      v12 = 1;
      Block[1] = (void *)(v11 + 1);
      if ( v11 + 1 > 0x7FFFFFFFFFFFFFFFLL )
        Block[0] = 0LL;
      else
        Block[0] = operator new(2 * (v11 + 1), (const struct std::nothrow_t *)&std::nothrow);
      v13 = Block;
    }
    v14 = (char *)*v13;
    v15 = v13[1];
    *v13 = 0LL;
    if ( (v12 & 2) != 0 )
    {
      v12 &= ~2u;
      utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(
        v21,
        a2,
        a3,
        a4);
    }
    if ( (v12 & 1) != 0 && Block[0] )
      operator delete(Block[0]);
    if ( v14 )
    {
      v16 = 2 * a3;
      memcpy_0(v14, a2, v16);
      v17 = &v14[v16];
      *(_WORD *)v17 = 0;
      if ( *(__int64 **)a1 != v4 )
        operator delete(*(void **)a1);
      *(_QWORD *)a1 = v14;
      *(_QWORD *)(a1 + 8) = v17;
      *v4 = (__int64)&v14[2 * ((__int64)v15 - 1)];
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
