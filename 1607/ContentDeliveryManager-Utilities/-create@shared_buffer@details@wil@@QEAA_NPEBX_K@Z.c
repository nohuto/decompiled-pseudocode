/*
 * XREFs of ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x180001980
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180001DF8 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x180002180 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::details::shared_buffer::create(void **this, const void *a2, rsize_t a3)
{
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rax
  volatile signed __int32 *v8; // rdi

  if ( !a3 )
  {
    v6 = (volatile signed __int32 *)*this;
    if ( v6 )
    {
      if ( !_InterlockedDecrement(v6) )
        free(*this);
      *this = 0LL;
      this[1] = 0LL;
    }
LABEL_14:
    LOBYTE(v7) = 1;
    return (char)v7;
  }
  v7 = (volatile signed __int32 *)malloc(a3 + 4);
  v8 = v7;
  if ( v7 )
  {
    *v7 = 0;
    if ( a2 )
      memcpy_s((void *const)(v7 + 1), a3, a2, a3);
    if ( *this )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)*this) )
        free(*this);
      *this = 0LL;
      this[1] = 0LL;
    }
    *this = (void *)v8;
    this[1] = (void *)a3;
    _InterlockedIncrement(v8);
    goto LABEL_14;
  }
  return (char)v7;
}
