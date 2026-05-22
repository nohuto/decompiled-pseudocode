/*
 * XREFs of ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x180044140
 * Callers:
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@@Z @ 0x180044490 (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@M@Z @ 0x180043968 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@M@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x180046814 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_180046814.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1800468A0 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1800468A0.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
void *__fastcall ISMTracing::GetVector3AsString(void *a1)
{
  void *v2; // rsi
  void *v3; // rbx
  void *v4; // rax
  void *v5; // rax
  void *v6; // rax
  void *v7; // rax
  void *v9; // [rsp+38h] [rbp-89h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp-71h]
  void *v11; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v12; // [rsp+70h] [rbp-51h]
  void *v13; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int64 v14; // [rsp+90h] [rbp-31h]
  void *v15; // [rsp+98h] [rbp-29h] BYREF
  unsigned __int64 v16; // [rsp+B0h] [rbp-11h]
  void *v17; // [rsp+B8h] [rbp-9h] BYREF
  unsigned __int64 v18; // [rsp+D0h] [rbp+Fh]
  void *v19; // [rsp+D8h] [rbp+17h] BYREF
  unsigned __int64 v20; // [rsp+F0h] [rbp+2Fh]

  v2 = std::to_string(&v19);
  v3 = std::to_string(&v17);
  v4 = std::to_string(&v15);
  v5 = (void *)std::operator+<char>(&v13, v4);
  v6 = (void *)std::operator+<char>(&v11, v5, v3);
  v7 = (void *)std::operator+<char>(&v9, v6);
  std::operator+<char>(a1, v7, v2);
  if ( v10 >= 0x10 )
    std::_Deallocate((char *)v9, v10 + 1, 1uLL);
  if ( v12 >= 0x10 )
    std::_Deallocate((char *)v11, v12 + 1, 1uLL);
  if ( v14 >= 0x10 )
    std::_Deallocate((char *)v13, v14 + 1, 1uLL);
  if ( v16 >= 0x10 )
    std::_Deallocate((char *)v15, v16 + 1, 1uLL);
  if ( v18 >= 0x10 )
    std::_Deallocate((char *)v17, v18 + 1, 1uLL);
  if ( v20 >= 0x10 )
    std::_Deallocate((char *)v19, v20 + 1, 1uLL);
  return a1;
}
