/*
 * XREFs of ?replace@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_K00G@Z @ 0x180039808
 * Callers:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x180011440 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 * Callees:
 *     ?assign@?$_CharTraitsBase@GGG@utl@@SAPEAGPEAG_KG@Z @ 0x180004A94 (-assign@-$_CharTraitsBase@GGG@utl@@SAPEAGPEAG_KG@Z.c)
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180016810 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     memcpy_0 @ 0x180024ED2 (memcpy_0.c)
 *     ?_Reinit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXAEAV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x18002EE08 (-_Reinit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXAEAV-$_ContainerAlloc.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x18002EE5C (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 */

char __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::replace(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  _QWORD *v6; // rcx
  unsigned __int64 v8; // rax
  size_t v9; // r12
  _WORD *v10; // rbx
  _BOOL8 v11; // rax
  _WORD *v12; // rbp
  unsigned __int64 v13; // rdi
  char v14; // bl
  char *v15; // rax
  __int64 v16; // rdi
  char *v17; // r15
  void *v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a1[1];
  v6 = (_QWORD *)*a1;
  v8 = (v4 - (__int64)v6) >> 1;
  if ( a2 > v8 )
    __int2c();
  v9 = 2 * a2;
  v10 = (_WORD *)v6 + a2;
  v11 = v8 != a2;
  v12 = &v10[v11];
  v13 = v4 - 2 * v11 + 2;
  if ( v13 < (unsigned __int64)v6 )
    return 0;
  if ( v6 == a1 + 2 )
    v15 = (char *)a1 + 30;
  else
    v15 = (char *)a1[2];
  if ( v13 > (unsigned __int64)v15 )
  {
    v16 = (__int64)(v13 - (_QWORD)v6) >> 1;
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
      a1,
      v19,
      v16,
      a4);
    v17 = (char *)v19[0];
    v14 = 0;
    if ( v19[0] )
    {
      memcpy_0(v19[0], (const void *)*a1, v9);
      utl::_CharTraitsBase<unsigned short,unsigned short,unsigned short>::assign(&v17[v9], 1LL, 47);
      memcpy_0(&v17[2 * a2 + 2], v12, 2 * ((__int64)(a1[1] - (_QWORD)v12) >> 1) + 2);
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Reinit(
        (__int64)a1,
        (__int64 *)v19,
        v16);
      v14 = 1;
    }
    utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(v19);
  }
  else
  {
    if ( v10 + 1 != v12 )
      memmove(v10 + 1, v12, 2 * ((v4 - (__int64)v12) >> 1) + 2);
    utl::_CharTraitsBase<unsigned short,unsigned short,unsigned short>::assign(v10, 1LL, 47);
    a1[1] = v13;
    return 1;
  }
  return v14;
}
