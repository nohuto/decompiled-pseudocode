/*
 * XREFs of ??0PropertyTypeInfo@Input@@QEAA@PEBGKP6AJPEBXKPEAGK@Z@Z @ 0x180029DF8
 * Callers:
 *     ?ProcessInit@PropertyDefinitions@@SAJXZ @ 0x180029524 (-ProcessInit@PropertyDefinitions@@SAJXZ.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18002A36C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 */

Input::PropertyTypeInfo *__fastcall Input::PropertyTypeInfo::PropertyTypeInfo(
        Input::PropertyTypeInfo *this,
        unsigned __int16 *a2,
        int a3,
        int (*a4)(const void *, unsigned int, unsigned __int16 *, unsigned int))
{
  _WORD *v5; // rcx
  Input::PropertyTypeInfo *result; // rax

  *((_QWORD *)this + 5) = 7LL;
  *((_QWORD *)this + 4) = 0LL;
  v5 = (_WORD *)((char *)this + 16);
  *v5 = 0;
  std::wstring::assign(v5, a2);
  *((_DWORD *)this + 12) = a3;
  result = this;
  *((_QWORD *)this + 7) = a4;
  return result;
}
