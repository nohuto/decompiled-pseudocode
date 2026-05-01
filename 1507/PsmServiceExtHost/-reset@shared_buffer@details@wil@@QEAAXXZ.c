/*
 * XREFs of ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004D158
 * Callers:
 *     ??1ResultException@wil@@QEAA@XZ @ 0x180048DC8 (--1ResultException@wil@@QEAA@XZ.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18004C6A4 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x18004D008 (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 * Callees:
 *     free_0 @ 0x180024406 (free_0.c)
 */

void __fastcall wil::details::shared_buffer::reset(void **this)
{
  volatile signed __int32 *v2; // rcx

  v2 = (volatile signed __int32 *)*this;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
      free_0(*this);
    *this = 0LL;
    this[1] = 0LL;
  }
}
