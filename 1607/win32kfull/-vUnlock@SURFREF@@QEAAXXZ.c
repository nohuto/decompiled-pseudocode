/*
 * XREFs of ?vUnlock@SURFREF@@QEAAXXZ @ 0x1C01BF514
 * Callers:
 *     GreDereferenceObject @ 0x1C00D7D48 (GreDereferenceObject.c)
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
