/*
 * XREFs of ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C02D5E44
 * Callers:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02B8F6C (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C02D5DEC (-Create@UmfdTls@@CAPEAV1@XZ.c)
 * Callees:
 *     ?Destroy@UmfdUMBuffer@@SAXPEAV1@@Z @ 0x1C02D72A0 (-Destroy@UmfdUMBuffer@@SAXPEAV1@@Z.c)
 */

void __fastcall UmfdTls::Destroy(struct UmfdUMBuffer **a1)
{
  struct UmfdUMBuffer *v2; // rcx

  v2 = *a1;
  if ( v2 )
    UmfdUMBuffer::Destroy(v2);
  EngFreeMem(a1);
}
