/*
 * XREFs of ?Deserialize@PropertyNode@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x1800275E0
 * Callers:
 *     ?Deserialize@Property@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180027A20 (-Deserialize@Property@Input@@UEAAJIPEAUIStream@@PEAK@Z.c)
 *     ?Deserialize@PropertyMap@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180028180 (-Deserialize@PropertyMap@Input@@UEAAJIPEAUIStream@@PEAK@Z.c)
 *     ?Deserialize@PropertyVector@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180028760 (-Deserialize@PropertyVector@Input@@UEAAJIPEAUIStream@@PEAK@Z.c)
 * Callees:
 *     ?Get@PropertyDefinitions@@SAJPEAPEAV1@@Z @ 0x180029490 (-Get@PropertyDefinitions@@SAJPEAPEAV1@@Z.c)
 *     ?QueryProperty@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyInfo@Input@@@Z @ 0x180029D40 (-QueryProperty@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyInfo@Input@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::PropertyNode::Deserialize(
        Input::PropertyNode *this,
        __int64 a2,
        struct IStream *a3,
        unsigned int *a4)
{
  int v6; // ebx
  _QWORD *v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // rax
  int v11; // [rsp+30h] [rbp-40h] BYREF
  PropertyDefinitions *v12; // [rsp+38h] [rbp-38h] BYREF
  struct Input::PropertyInfo *v13[2]; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v14; // [rsp+50h] [rbp-20h] BYREF

  *a4 = 0;
  v11 = 0;
  *(_QWORD *)&v14.Data1 = 0LL;
  *(_QWORD *)v14.Data4 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IStream *, struct _GUID *, __int64, int *))(*(_QWORD *)a3 + 24LL))(
         a3,
         &v14,
         16LL,
         &v11);
  if ( v6 >= 0 )
    *a4 += v11;
  if ( *((_QWORD *)this + 3) )
  {
    v6 = PropertyDefinitions::Get(&v12);
    if ( v6 >= 0 )
      v6 = PropertyDefinitions::QueryProperty(v12, &v14, v13);
    if ( v6 >= 0 )
    {
      v7 = (_QWORD *)*((_QWORD *)v13[0] + 6);
      v8 = *(_QWORD **)(*((_QWORD *)this + 3) + 48LL);
      if ( *v7 == *v8 && v7[1] == v8[1] )
      {
        v9 = *(_QWORD *)this;
        *(struct _GUID *)v13 = v14;
        (*(void (__fastcall **)(Input::PropertyNode *, struct Input::PropertyInfo **))(v9 + 8))(this, v13);
      }
      else
      {
        return (unsigned int)-2089336822;
      }
    }
  }
  return (unsigned int)v6;
}
