/*
 * XREFs of ?GrowPolicyBuffer@ResourcePolicyStore@ExecutionModel@@IEAAJXZ @ 0x180046C70
 * Callers:
 *     ?AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x18001C998 (-AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetail.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180024ED2 (memcpy_0.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStore::GrowPolicyBuffer(ExecutionModel::ResourcePolicyStore *this)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  char *v4; // rax
  unsigned int v5; // esi
  char *v6; // rbx
  size_t v7; // rdi

  v1 = *((_QWORD *)this + 6);
  v3 = v1 + 20;
  v4 = (char *)malloc(saturated_mul(v1 + 20, 0x18uLL));
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    v7 = 24 * v1;
    memcpy_0(v4, *((const void **)this + 7), v7);
    memset_0(&v6[v7], 0, 0x1E0uLL);
    operator delete(*((void **)this + 7));
    *((_QWORD *)this + 7) = v6;
    *((_QWORD *)this + 6) = v3;
  }
  else
  {
    v5 = -2147024882;
  }
  operator delete(0LL);
  return v5;
}
