/*
 * XREFs of ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1C02D5DEC
 * Callers:
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C02D5E6C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 * Callees:
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?Destroy@UmfdTls@@CAXPEAV1@@Z @ 0x1C02D5E44 (-Destroy@UmfdTls@@CAXPEAV1@@Z.c)
 *     ?Create@UmfdUMBuffer@@SAPEAV1@XZ @ 0x1C02D7220 (-Create@UmfdUMBuffer@@SAPEAV1@XZ.c)
 */

struct UmfdTls *UmfdTls::Create(void)
{
  struct UmfdTls *v0; // rax
  struct UmfdTls *v1; // rbx
  struct UmfdUMBuffer *v2; // rax

  v0 = (struct UmfdTls *)EngAllocMem(0, 0x30u, 0x6C744446u);
  v1 = v0;
  if ( !v0 )
    return v1;
  memset(v0, 0, 0x30uLL);
  *((_DWORD *)v1 + 2) = -1;
  v2 = UmfdUMBuffer::Create();
  *(_QWORD *)v1 = v2;
  if ( v2 )
    return v1;
  UmfdTls::Destroy(v1);
  return 0LL;
}
