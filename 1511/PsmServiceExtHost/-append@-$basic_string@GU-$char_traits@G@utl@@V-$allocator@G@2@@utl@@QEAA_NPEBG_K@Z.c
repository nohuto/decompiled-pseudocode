/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18003EAD0
 * Callers:
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x18003EAA8 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 * Callees:
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180028134 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     memcpy_0 @ 0x18002BC72 (memcpy_0.c)
 *     ?_Reinit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXAEAV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x18003667C (-_Reinit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXAEAV-$_ContainerAlloc.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x1800366D0 (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 */

char __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::append(
        _QWORD *a1,
        const void *a2,
        unsigned __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  char v8; // bp
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  char *v11; // rax
  _WORD *v12; // r13
  size_t v13; // rbx
  void *v15[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = (void *)a1[1];
  v8 = 1;
  v9 = ((__int64)v6 - *a1) >> 1;
  v10 = v9 + a3;
  if ( v9 + a3 < a3 )
    return 0;
  if ( (_QWORD *)*a1 == a1 + 2 )
    v11 = (char *)a1 + 30;
  else
    v11 = (char *)a1[2];
  if ( v10 > (__int64)&v11[-*a1] >> 1 )
  {
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
      a1,
      v15,
      v9 + a3,
      a4);
    v12 = v15[0];
    if ( v15[0] )
    {
      v13 = v9;
      memcpy_0(v15[0], (const void *)*a1, v13 * 2);
      memcpy_0(&v12[v13], a2, 2 * a3);
      v12[v10] = 0;
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Reinit(
        (__int64)a1,
        (__int64 *)v15,
        v10);
    }
    else
    {
      v8 = 0;
    }
    utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(v15);
  }
  else
  {
    if ( v6 != a2 )
      memmove(v6, a2, 2 * a3);
    a1[1] += 2 * a3;
    *(_WORD *)a1[1] = 0;
  }
  return v8;
}
