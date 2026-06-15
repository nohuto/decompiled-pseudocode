/*
 * XREFs of _CAudioSrv::Initialize_::_1_::dtor$1 @ 0x18003BAF5
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CAudioSrv::Initialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 32), (const struct std::nothrow_t *)0x90);
}
