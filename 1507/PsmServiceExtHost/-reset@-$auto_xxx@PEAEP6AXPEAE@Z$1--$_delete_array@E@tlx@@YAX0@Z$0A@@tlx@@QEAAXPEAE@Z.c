/*
 * XREFs of ?reset@?$auto_xxx@PEAEP6AXPEAE@Z$1??$_delete_array@E@tlx@@YAX0@Z$0A@@tlx@@QEAAXPEAE@Z @ 0x18002F6DC
 * Callers:
 *     ?Copy@ActivationIdHelper@ExecutionModel@@QEAA_NAEBU_AppModelActivationId@@@Z @ 0x180017370 (-Copy@ActivationIdHelper@ExecutionModel@@QEAA_NAEBU_AppModelActivationId@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall tlx::auto_xxx<unsigned char *,void (*)(unsigned char *),&void tlx::_delete_array<unsigned char>(unsigned char *),0>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rcx

  v4 = *a1;
  if ( a2 != v4 )
  {
    if ( v4 )
      operator delete(v4);
    *a1 = a2;
  }
}
