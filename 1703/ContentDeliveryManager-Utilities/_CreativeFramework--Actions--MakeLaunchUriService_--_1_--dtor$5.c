/*
 * XREFs of _CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor$5 @ 0x1800742B2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18002C4E8 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~4u;
    return std::wstring::~wstring(a2 + 104);
  }
  return result;
}
