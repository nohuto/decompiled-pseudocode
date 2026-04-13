/*
 * XREFs of _CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor$6 @ 0x1800742D8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18002C4E8 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 8;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~8u;
    return std::wstring::~wstring(a2 + 208);
  }
  return result;
}
