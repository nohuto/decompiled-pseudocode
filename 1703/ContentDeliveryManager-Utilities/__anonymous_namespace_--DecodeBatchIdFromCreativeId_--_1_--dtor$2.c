/*
 * XREFs of __anonymous_namespace_::DecodeBatchIdFromCreativeId_::_1_::dtor$2 @ 0x180071191
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18002C4E8 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall _anonymous_namespace_::DecodeBatchIdFromCreativeId_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::wstring::~wstring(a2 + 136);
  }
  return result;
}
