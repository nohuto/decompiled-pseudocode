/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180007F20
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18000807C (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180009FE0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@PEAV12@PEAPEAV12@@Z @ 0x180010DF0 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180021724 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021734 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800217DC (memcpy_0.c)
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
  void **v11; // rax
  char v12; // bp
  char *v13; // rsi
  void *v14; // r15
  size_t v15; // rdi
  char *v16; // rdi
  char result; // al
  _WORD *v18; // rdx
  void *v19[2]; // [rsp+20h] [rbp-48h] BYREF
  void *Block[7]; // [rsp+30h] [rbp-38h] BYREF

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
      Block[0] = 0LL;
      v11 = Block;
      Block[1] = 0LL;
      v12 = 2;
    }
    else
    {
      v19[1] = (void *)(v10 + 1);
      if ( v10 + 1 > 0x7FFFFFFFFFFFFFFFLL )
        v19[0] = 0LL;
      else
        v19[0] = operator new(2 * (v10 + 1), (const struct std::nothrow_t *)&unk_18003CFF1);
      v11 = v19;
      v12 = 1;
    }
    v13 = (char *)*v11;
    v14 = v11[1];
    *v11 = 0LL;
    if ( (v12 & 2) != 0 )
    {
      v12 &= ~2u;
      if ( Block[0] )
        operator delete(Block[0]);
    }
    if ( (v12 & 1) != 0 && v19[0] )
      operator delete(v19[0]);
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
