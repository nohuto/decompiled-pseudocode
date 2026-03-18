/*
 * XREFs of ?vUnlock@SURFREF@@QEAAXXZ @ 0x1C0290E54
 * Callers:
 *     GreDereferenceObject @ 0x1C000C01C (GreDereferenceObject.c)
 *     GreSelectRedirectionBitmap @ 0x1C00168E0 (GreSelectRedirectionBitmap.c)
 * Callees:
 *     <none>
 */

void __fastcall SURFREF::vUnlock(SURFREF *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
