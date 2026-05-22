/*
 * XREFs of ?Dispose@Property@Input@@UEAAXXZ @ 0x180011560
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Input::Property::Dispose(void **this)
{
  operator delete(this[4]);
  this[4] = 0LL;
  this[5] = 0LL;
}
