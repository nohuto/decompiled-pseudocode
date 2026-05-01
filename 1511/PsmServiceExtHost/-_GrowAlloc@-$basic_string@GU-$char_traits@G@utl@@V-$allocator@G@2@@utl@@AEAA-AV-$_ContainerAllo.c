/*
 * XREFs of ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180028134
 * Callers:
 *     _lambda_50a6150c629f36decbcd8feeef80d8a2_::operator() @ 0x180027910 (_lambda_50a6150c629f36decbcd8feeef80d8a2_--operator().c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18003EAD0 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x1800366D0 (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 */

_QWORD *__fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  char *v5; // rdx
  char *v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  char v9; // bl
  void **v10; // rcx
  void *v11; // rax
  void *Block[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

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
    v14[0] = 0LL;
    v10 = (void **)v14;
    v14[1] = 0LL;
    v9 = 2;
  }
  else
  {
    v8 = v7 + 1;
    Block[1] = (void *)v8;
    v9 = 1;
    if ( v8 > 0x7FFFFFFFFFFFFFFFLL )
      Block[0] = 0LL;
    else
      Block[0] = operator new(2 * v8, (const struct std::nothrow_t *)&std::nothrow);
    v10 = Block;
  }
  v11 = *v10;
  *v10 = 0LL;
  *a2 = v11;
  a2[1] = v10[1];
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(
      v14,
      v5,
      a3,
      a4);
  }
  if ( (v9 & 1) != 0 && Block[0] )
    operator delete(Block[0]);
  return a2;
}
