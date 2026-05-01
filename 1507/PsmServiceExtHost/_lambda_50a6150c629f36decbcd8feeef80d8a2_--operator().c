/*
 * XREFs of _lambda_50a6150c629f36decbcd8feeef80d8a2_::operator() @ 0x18001DE20
 * Callers:
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x18001D360 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 * Callees:
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180016810 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ?GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z @ 0x18001C3E0 (-GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180024ED2 (memcpy_0.c)
 */

int __fastcall lambda_50a6150c629f36decbcd8feeef80d8a2_::operator()(__int64 a1, const unsigned __int16 *a2, __int64 a3)
{
  int result; // eax
  __int64 v5; // r9
  int v6; // r15d
  __int64 v7; // rax
  _QWORD *v8; // rsi
  char **v9; // rdi
  unsigned __int64 v10; // rbx
  char **v11; // rcx
  char **v12; // r14
  char *v13; // rax
  _WORD *v14; // rcx
  char *v15; // rbp
  size_t v16; // rbx
  char *v17; // rbx
  void *v18; // rax
  void *v19[2]; // [rsp+30h] [rbp-28h] BYREF

  result = Common::RegistryKey::GetStringValue(*(HKEY **)a1, a2, a3, *(struct Common::StringBuffer **)(a1 + 8));
  v6 = result;
  if ( result >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD **)(a1 + 16);
    v9 = *(char ***)(v7 + 8);
    if ( v9 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *((_WORD *)v9 + v10) );
    }
    else
    {
      v10 = 0LL;
    }
    v11 = (char **)*v8;
    v12 = (char **)(v8 + 2);
    if ( (_QWORD *)*v8 == v8 + 2 )
      v13 = (char *)v8 + 30;
    else
      v13 = *v12;
    if ( v10 > (v13 - (char *)v11) >> 1 )
    {
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
        v8,
        v19,
        v10,
        v5);
      v15 = (char *)v19[0];
      if ( !v19[0] )
        return -2147024882;
      v16 = 2 * v10;
      memcpy_0(v19[0], v9, v16);
      v17 = &v15[v16];
      *(_WORD *)v17 = 0;
      if ( (char **)*v8 != v12 )
        operator delete((void *)*v8);
      v18 = v19[1];
      *v8 = v15;
      v8[1] = v17;
      *v12 = &v15[2 * (_QWORD)v18 - 2];
    }
    else
    {
      if ( v11 != v9 )
        memmove(v11, v9, 2 * v10);
      v14 = (_WORD *)(*v8 + 2 * v10);
      v8[1] = v14;
      *v14 = 0;
    }
    return v6;
  }
  return result;
}
