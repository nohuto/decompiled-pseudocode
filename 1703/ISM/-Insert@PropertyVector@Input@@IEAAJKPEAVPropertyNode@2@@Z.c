/*
 * XREFs of ?Insert@PropertyVector@Input@@IEAAJKPEAVPropertyNode@2@@Z @ 0x180028518
 * Callers:
 *     ?Deserialize@PropertyVector@Input@@UEAAJIPEAUIStream@@PEAK@Z @ 0x180028760 (-Deserialize@PropertyVector@Input@@UEAAJIPEAUIStream@@PEAK@Z.c)
 * Callees:
 *     ??$emplace@AEBQEAVPropertyNode@Input@@@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVPropertyNode@Input@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVPropertyNode@Input@@@std@@@std@@@1@AEBQEAVPropertyNode@Input@@@Z @ 0x180028BA4 (--$emplace@AEBQEAVPropertyNode@Input@@@-$vector@PEAVPropertyNode@Input@@V-$allocator@PEAVPropert.c)
 */

__int64 __fastcall Input::PropertyVector::Insert(
        Input::PropertyVector *this,
        __int64 a2,
        struct Input::PropertyNode *a3)
{
  _QWORD *v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v6; // [rsp+48h] [rbp+10h]
  struct Input::PropertyNode *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v3 = (_QWORD *)((char *)this + 32);
  v6 = -2147024882;
  try
  {
    std::vector<Input::PropertyNode *>::emplace<Input::PropertyNode * const &>(v3, &v5, *v3, &v7, -2LL);
    result = 0LL;
    v6 = 0;
  }
  catch ( ... )
  {
    return v6;
  }
  return result;
}
