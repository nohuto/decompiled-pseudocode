/*
 * XREFs of ??_EHolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAPEAXI@Z @ 0x18008E880
 * Callers:
 *     <none>
 * Callees:
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAA@XZ @ 0x180092ED8 (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Windows::Internal::Holographic::HolographicDriverHandleWrapper *__fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::`vector deleting destructor'(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        char a2)
{
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::~HolographicDriverHandleWrapper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
