/*
 * XREFs of ?_Tidy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@IEAAXXZ @ 0x180008414
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1800079AC (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180007A88 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ??1?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@XZ @ 0x180008214 (--1-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@XZ.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180019188 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 *     _std::vector_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64__std::allocator_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_____::vector_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64__std::allocator_std::pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64______::_1_::catch$0 @ 0x180030954 (_std--vector_std--pair_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64__std--alloc.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002F080 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy(__int64 a1)
{
  char *v2; // rcx
  unsigned __int64 v3; // rax
  char *v4; // rax
  unsigned __int64 v5; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    v3 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 4;
    if ( v3 > 0xFFFFFFFFFFFFFFFLL )
    {
      _o__invalid_parameter_noinfo_noreturn();
      __debugbreak();
    }
    if ( 16 * v3 >= 0x1000 )
    {
      if ( ((unsigned __int8)v2 & 0x1F) != 0 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v4 = (char *)*((_QWORD *)v2 - 1);
      if ( v4 >= v2 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v5 = v2 - v4;
      if ( v5 < 8 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      if ( v5 > 0x27 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v2 = v4;
    }
    operator delete(v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
