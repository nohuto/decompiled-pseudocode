/*
 * XREFs of ??1InitialThreadParam@UMSFreeVirtualProcessorRoot@details@Concurrency@@QEAA@XZ @ 0x1800057BC
 * Callers:
 *     sub_180026C82 @ 0x180026C82 (sub_180026C82.c)
 *     sub_180026CAC @ 0x180026CAC (sub_180026CAC.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::UMSFreeVirtualProcessorRoot::InitialThreadParam::~InitialThreadParam(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    operator delete(v1);
}
