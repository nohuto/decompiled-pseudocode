/*
 * XREFs of ?AssetPath@CreativeRule@RuleSetHandlers@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x18005228C
 * Callers:
 *     _lambda_093e5cd604f7ab5de7acc075fbba0f63_::operator() @ 0x180052698 (_lambda_093e5cd604f7ab5de7acc075fbba0f63_--operator().c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180049A60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

__int64 __fastcall CreativeFramework::RuleSetHandlers::CreativeRule::AssetPath(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  std::wstring::assign((void **)a2, (void **)(a1 + 32), 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  return a2;
}
