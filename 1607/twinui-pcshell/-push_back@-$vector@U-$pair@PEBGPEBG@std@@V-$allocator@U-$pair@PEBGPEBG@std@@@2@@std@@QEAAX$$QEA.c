/*
 * XREFs of ?push_back@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAX$$QEAU?$pair@PEBGPEBG@2@@Z @ 0x180008220
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800079AC (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180007A88 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?_Xlen@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEBAXXZ @ 0x180008638 (-_Xlen@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@IEBAXXZ.c)
 *     ?_Reallocate@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@IEAAX_K@Z @ 0x180008650 (-_Reallocate@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@IEAAX_K@.c)
 */

void __fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::push_back(
        _QWORD *a1,
        _OWORD *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  _OWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  _OWORD *v17; // rax

  v4 = a1[1];
  if ( (unsigned __int64)a2 >= v4 || *a1 > (unsigned __int64)a2 )
  {
    v12 = a1[2];
    if ( v4 == v12 && !((__int64)(v12 - v4) >> 4) )
    {
      v13 = (__int64)(v4 - *a1) >> 4;
      if ( v13 == 0xFFFFFFFFFFFFFFFLL )
        std::vector<ParsedTaskbarLayout>::_Xlen();
      v14 = v13 + 1;
      v15 = (v12 - *a1) >> 4;
      if ( 0xFFFFFFFFFFFFFFFLL - (v15 >> 1) >= v15 )
        v16 = (v15 >> 1) + v15;
      else
        v16 = 0LL;
      if ( v16 < v14 )
        v16 = v14;
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Reallocate(a1, v16);
    }
    v17 = (_OWORD *)a1[1];
    if ( v17 )
      *v17 = *a2;
  }
  else
  {
    v5 = (unsigned __int64)a2 - *a1;
    v6 = a1[2];
    if ( v4 == v6 && !((__int64)(v6 - v4) >> 4) )
    {
      v7 = (__int64)(v4 - *a1) >> 4;
      if ( v7 == 0xFFFFFFFFFFFFFFFLL )
        std::vector<ParsedTaskbarLayout>::_Xlen();
      v8 = v7 + 1;
      v9 = (v6 - *a1) >> 4;
      if ( 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) >= v9 )
        v10 = (v9 >> 1) + v9;
      else
        v10 = 0LL;
      if ( v10 < v8 )
        v10 = v8;
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Reallocate(a1, v10);
    }
    v11 = (_OWORD *)a1[1];
    if ( v11 )
      *v11 = *(_OWORD *)((v5 & 0xFFFFFFFFFFFFFFF0uLL) + *a1);
  }
  a1[1] += 16LL;
}
