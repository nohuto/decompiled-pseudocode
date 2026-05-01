/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18002D5B0
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18002D588 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 * Callees:
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x18000D850 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     memcpy_0 @ 0x180020A36 (memcpy_0.c)
 *     ?_Reinit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXAEAV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180028454 (-_Reinit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXAEAV-$_ContainerAlloc.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x1800284A8 (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 */

char __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
        _QWORD *a1,
        const void *a2,
        unsigned __int64 a3)
{
  void *v5; // rcx
  char v7; // bp
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  char *v10; // rax
  _WORD *v11; // r13
  size_t v12; // rbx
  void *v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (void *)a1[1];
  v7 = 1;
  v8 = ((__int64)v5 - *a1) >> 1;
  v9 = v8 + a3;
  if ( v8 + a3 < a3 )
    return 0;
  if ( (_QWORD *)*a1 == a1 + 2 )
    v10 = (char *)a1 + 30;
  else
    v10 = (char *)a1[2];
  if ( v9 > (__int64)&v10[-*a1] >> 1 )
  {
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
      a1,
      v14,
      v8 + a3);
    v11 = v14[0];
    if ( v14[0] )
    {
      v12 = v8;
      memcpy_0(v14[0], (const void *)*a1, v12 * 2);
      memcpy_0(&v11[v12], a2, 2 * a3);
      v11[v9] = 0;
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Reinit(
        (__int64)a1,
        (__int64 *)v14,
        v9);
    }
    else
    {
      v7 = 0;
    }
    utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(v14);
  }
  else
  {
    if ( v5 != a2 )
      memmove(v5, a2, 2 * a3);
    a1[1] += 2 * a3;
    *(_WORD *)a1[1] = 0;
  }
  return v7;
}
