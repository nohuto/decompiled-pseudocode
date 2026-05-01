/*
 * XREFs of ?GrowPolicyBuffer@ResourcePolicyStore@ExecutionModel@@IEAAJXZ @ 0x18004C6A0
 * Callers:
 *     ?AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x180026598 (-AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetail.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB44 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18002BC72 (memcpy_0.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStore::GrowPolicyBuffer(ExecutionModel::ResourcePolicyStore *this)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  size_t v4; // rax
  char *v5; // rax
  unsigned int v6; // esi
  char *v7; // rbx
  size_t v8; // rdi

  v1 = *((_QWORD *)this + 6);
  v3 = v1 + 20;
  v4 = 24 * (v1 + 20);
  if ( !is_mul_ok(v1 + 20, 0x18uLL) )
    v4 = -1LL;
  v5 = (char *)operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    v8 = 24 * v1;
    memcpy_0(v5, *((const void **)this + 7), v8);
    memset_0(&v7[v8], 0, 0x1E0uLL);
    operator delete(*((void **)this + 7));
    *((_QWORD *)this + 7) = v7;
    *((_QWORD *)this + 6) = v3;
  }
  else
  {
    v6 = -2147024882;
  }
  operator delete(0LL);
  return v6;
}
