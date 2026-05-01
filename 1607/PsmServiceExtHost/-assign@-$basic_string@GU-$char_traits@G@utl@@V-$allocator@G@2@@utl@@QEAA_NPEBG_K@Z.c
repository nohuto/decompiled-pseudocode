/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18000D940
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18000DAA0 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?GetPackageFamilyName@ResourceManager@ExecutionModel@@QEAAJPEBGPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x18000E268 (-GetPackageFamilyName@ResourceManager@ExecutionModel@@QEAAJPEBGPEAV-$basic_string@GU-$char_trait.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@W4Enum@PendType@2@PEAU_RM_ACTIVATOR@@PEA_NPEAPEAUIResourceSet@2@@Z @ 0x1800158E0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@AEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800208FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180020A36 (memcpy_0.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x1800284A8 (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 */

char __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3)
{
  __int64 *v3; // r14
  __int64 *v5; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  char v11; // bp
  void **v12; // rax
  char *v13; // rsi
  void *v14; // r15
  size_t v15; // rdi
  char *v16; // rdi
  char result; // al
  _WORD *v18; // rdx
  void *Block[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v20[7]; // [rsp+30h] [rbp-38h] BYREF

  v3 = (__int64 *)(a1 + 16);
  v5 = *(__int64 **)a1;
  if ( v5 == v3 )
    v8 = a1 + 30;
  else
    v8 = *v3;
  if ( a3 <= (v8 - (__int64)v5) >> 1 )
  {
    if ( v5 != a2 )
      memmove(v5, a2, 2 * a3);
    result = 1;
    v18 = (_WORD *)(*(_QWORD *)a1 + 2 * a3);
    *(_QWORD *)(a1 + 8) = v18;
    *v18 = 0;
  }
  else
  {
    if ( v5 == v3 )
      v9 = a1 + 30;
    else
      v9 = *v3;
    v10 = 2 * ((v9 - (__int64)v5) >> 1) + 1;
    if ( v10 < a3 )
      v10 = a3;
    if ( v10 > 0x3FFFFFFFFFFFFFFELL )
      v10 = 0x3FFFFFFFFFFFFFFELL;
    if ( a3 > v10 )
    {
      v11 = 2;
      v20[0] = 0LL;
      v20[1] = 0LL;
      v12 = (void **)v20;
    }
    else
    {
      v11 = 1;
      Block[1] = (void *)(v10 + 1);
      if ( v10 + 1 > 0x7FFFFFFFFFFFFFFFLL )
        Block[0] = 0LL;
      else
        Block[0] = operator new(2 * (v10 + 1), (const struct std::nothrow_t *)&unk_18003CF1A);
      v12 = Block;
    }
    v13 = (char *)*v12;
    v14 = v12[1];
    *v12 = 0LL;
    if ( (v11 & 2) != 0 )
    {
      v11 &= ~2u;
      utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(
        v20,
        a2);
    }
    if ( (v11 & 1) != 0 && Block[0] )
      operator delete(Block[0]);
    if ( v13 )
    {
      v15 = 2 * a3;
      memcpy_0(v13, a2, v15);
      v16 = &v13[v15];
      *(_WORD *)v16 = 0;
      if ( *(__int64 **)a1 != v3 )
        operator delete(*(void **)a1);
      *(_QWORD *)a1 = v13;
      *(_QWORD *)(a1 + 8) = v16;
      *v3 = (__int64)&v13[2 * ((__int64)v14 - 1)];
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
