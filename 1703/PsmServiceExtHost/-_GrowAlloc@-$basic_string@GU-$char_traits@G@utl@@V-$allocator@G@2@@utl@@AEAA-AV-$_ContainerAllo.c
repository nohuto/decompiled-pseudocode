/*
 * XREFs of ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180029238
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18002BCDC (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180021724 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021734 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  char *v4; // rdx
  char *v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  void **v8; // rcx
  char v9; // bl
  void *v10; // rax
  void *v12[2]; // [rsp+20h] [rbp-28h] BYREF
  void *Block[3]; // [rsp+30h] [rbp-18h] BYREF

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
    Block[0] = 0LL;
    v8 = Block;
    Block[1] = 0LL;
    v9 = 2;
  }
  else
  {
    v7 = v6 + 1;
    v12[1] = (void *)v7;
    if ( v7 > 0x7FFFFFFFFFFFFFFFLL )
      v12[0] = 0LL;
    else
      v12[0] = operator new(2 * v7, (const struct std::nothrow_t *)&unk_18003CFF1);
    v8 = v12;
    v9 = 1;
  }
  v10 = *v8;
  *v8 = 0LL;
  *a2 = v10;
  a2[1] = v8[1];
  if ( (v9 & 2) != 0 )
  {
    v9 &= ~2u;
    if ( Block[0] )
      operator delete(Block[0]);
  }
  if ( (v9 & 1) != 0 && v12[0] )
    operator delete(v12[0]);
  return a2;
}
