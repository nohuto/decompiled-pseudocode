/*
 * XREFs of ?CreateFromStream@PropertyNode@Input@@KAJIPEAUIStream@@PEAKPEAPEAV12@@Z @ 0x180027368
 * Callers:
 *     ?Deserialize@PropertyMap@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180028180 (-Deserialize@PropertyMap@Input@@UEAAJIPEAUIStream@@PEAK@Z.c)
 *     ?Deserialize@PropertyVector@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180028760 (-Deserialize@PropertyVector@Input@@UEAAJIPEAUIStream@@PEAK@Z.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@2@XZ @ 0x1800187FC (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U-$KeyCompareTr.c)
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x1800272F8 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 *     ?Get@PropertyDefinitions@@SAJPEAPEAV1@@Z @ 0x180029490 (-Get@PropertyDefinitions@@SAJPEAPEAV1@@Z.c)
 *     ?QueryProperty@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyInfo@Input@@@Z @ 0x180029D40 (-QueryProperty@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyInfo@Input@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
signed int __fastcall Input::PropertyNode::CreateFromStream(
        __int64 a1,
        struct IStream *a2,
        unsigned int *a3,
        struct Input::PropertyNode **a4)
{
  signed int result; // eax
  _OWORD *v8; // rcx
  char *v9; // rdi
  char *v10; // rbx
  PropertyDefinitions *v11; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+38h] [rbp-38h] BYREF
  struct Input::PropertyInfo *v13[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v14; // [rsp+50h] [rbp-20h] BYREF

  v13[1] = (struct Input::PropertyInfo *)-2LL;
  *a3 = 0;
  *a4 = 0LL;
  v13[0] = 0LL;
  *(_QWORD *)&v14.Data1 = 0LL;
  *(_QWORD *)v14.Data4 = 0LL;
  result = (*(__int64 (__fastcall **)(struct IStream *, struct _GUID *, __int64, int *))(*(_QWORD *)a2 + 24LL))(
             a2,
             &v14,
             16LL,
             &v12);
  if ( result >= 0 )
  {
    *a3 += v12;
    (*(void (__fastcall **)(struct IStream *, __int64, __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, -16LL, 1LL, 0LL);
    result = PropertyDefinitions::Get(&v11);
    if ( result >= 0 )
    {
      result = PropertyDefinitions::QueryProperty(v11, &v14, v13);
      if ( result >= 0 )
      {
        v8 = (_OWORD *)*((_QWORD *)v13[0] + 6);
        if ( *v8 == PROPTYPE_MAP )
        {
          v9 = (char *)operator new(0x30uLL);
          v11 = (PropertyDefinitions *)v9;
          *(_QWORD *)v9 = &Input::PropertyNode::`vftable';
          *(struct _GUID *)(v9 + 8) = v14;
          *((_QWORD *)v9 + 3) = 0LL;
          Input::PropertyNode::GetDefinition((Input::PropertyNode *)v9);
          *(_QWORD *)v9 = &Input::PropertyMap::`vftable';
          v13[0] = (struct Input::PropertyInfo *)(v9 + 32);
          *((_QWORD *)v9 + 4) = 0LL;
          *((_QWORD *)v9 + 5) = 0LL;
          *((_QWORD *)v9 + 4) = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Buyheadnode();
          *a4 = (struct Input::PropertyNode *)v9;
        }
        else
        {
          if ( *v8 == PROPTYPE_VECTOR )
          {
            v10 = (char *)operator new(0x38uLL);
            v11 = (PropertyDefinitions *)v10;
            *(_QWORD *)v10 = &Input::PropertyNode::`vftable';
            *(struct _GUID *)(v10 + 8) = v14;
            *((_QWORD *)v10 + 3) = 0LL;
            Input::PropertyNode::GetDefinition((Input::PropertyNode *)v10);
            *(_QWORD *)v10 = &Input::PropertyVector::`vftable';
            *((_QWORD *)v10 + 4) = 0LL;
            *((_QWORD *)v10 + 5) = 0LL;
            *((_QWORD *)v10 + 6) = 0LL;
          }
          else
          {
            v10 = (char *)operator new(0x30uLL);
            v11 = (PropertyDefinitions *)v10;
            *(_QWORD *)v10 = &Input::PropertyNode::`vftable';
            *(struct _GUID *)(v10 + 8) = v14;
            *((_QWORD *)v10 + 3) = 0LL;
            Input::PropertyNode::GetDefinition((Input::PropertyNode *)v10);
            *(_QWORD *)v10 = &Input::Property::`vftable';
            *((_QWORD *)v10 + 4) = 0LL;
            *((_QWORD *)v10 + 5) = 0LL;
          }
          *a4 = (struct Input::PropertyNode *)v10;
        }
        return *a4 == 0LL ? 0x8007000E : 0;
      }
    }
  }
  return result;
}
