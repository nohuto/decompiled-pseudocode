/*
 * XREFs of SepRmDereferenceCapTable @ 0x14024F694
 * Callers:
 *     SepRmDereferenceCap @ 0x14024F67C (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x140250B38 (SepRmReferenceFindCap.c)
 *     SepRmCapUpdateWrkr @ 0x14055C278 (SepRmCapUpdateWrkr.c)
 * Callees:
 *     SepRmDestroyCapTable @ 0x1406D92E0 (SepRmDestroyCapTable.c)
 */

__int64 __fastcall SepRmDereferenceCapTable(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 5, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    return SepRmDestroyCapTable((PVOID)a1);
  }
  return result;
}
