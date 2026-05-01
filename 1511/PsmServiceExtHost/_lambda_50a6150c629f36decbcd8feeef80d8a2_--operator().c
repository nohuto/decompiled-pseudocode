/*
 * XREFs of _lambda_50a6150c629f36decbcd8feeef80d8a2_::operator() @ 0x180027910
 * Callers:
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x180026E30 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 * Callees:
 *     ?GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z @ 0x180027B70 (-GetStringValue@RegistryKey@Common@@QEAAJPEBG_KAEAVStringBuffer@2@PEAK@Z.c)
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180028134 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18002BC72 (memcpy_0.c)
 */

int __fastcall lambda_50a6150c629f36decbcd8feeef80d8a2_::operator()(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned __int64 a3)
{
  int result; // eax
  int v5; // r15d
  __int64 v6; // rax
  __int64 v7; // rsi
  _WORD *v8; // rdi
  unsigned __int64 v9; // rbx
  _WORD *v10; // rcx
  __int64 *v11; // r14
  __int64 v12; // rax
  _WORD *v13; // rcx
  char *v14; // rbp
  size_t v15; // rbx
  char *v16; // rbx
  void *v17; // rax
  unsigned int *v18; // [rsp+20h] [rbp-38h]
  void *v19[2]; // [rsp+30h] [rbp-28h] BYREF

  result = Common::RegistryKey::GetStringValue(
             *(Common::RegistryKey **)a1,
             a2,
             a3,
             *(struct Common::StringBuffer **)(a1 + 8),
             v18);
  v5 = result;
  if ( result >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_QWORD *)(a1 + 16);
    v8 = *(_WORD **)(v6 + 8);
    if ( v8 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v8[v9] );
    }
    else
    {
      v9 = 0LL;
    }
    v10 = *(_WORD **)v7;
    v11 = (__int64 *)(v7 + 16);
    if ( *(_QWORD *)v7 == v7 + 16 )
      v12 = v7 + 30;
    else
      v12 = *v11;
    if ( v9 > (v12 - (__int64)v10) >> 1 )
    {
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
        v7,
        v19,
        v9);
      v14 = (char *)v19[0];
      if ( !v19[0] )
        return -2147024882;
      v15 = 2 * v9;
      memcpy_0(v19[0], v8, v15);
      v16 = &v14[v15];
      *(_WORD *)v16 = 0;
      if ( *(__int64 **)v7 != v11 )
        operator delete(*(void **)v7);
      v17 = v19[1];
      *(_QWORD *)v7 = v14;
      *(_QWORD *)(v7 + 8) = v16;
      *v11 = (__int64)&v14[2 * (_QWORD)v17 - 2];
    }
    else
    {
      if ( v10 != v8 )
        memmove(v10, v8, 2 * v9);
      v13 = (_WORD *)(*(_QWORD *)v7 + 2 * v9);
      *(_QWORD *)(v7 + 8) = v13;
      *v13 = 0;
    }
    return v5;
  }
  return result;
}
