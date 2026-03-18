/*
 * XREFs of SepRmDereferenceCapTable @ 0x140219C7C
 * Callers:
 *     SepRmDereferenceCap @ 0x140219C64 (SepRmDereferenceCap.c)
 *     SepRmReferenceFindCap @ 0x14021B670 (SepRmReferenceFindCap.c)
 *     SepRmCapUpdateWrkr @ 0x14056B7B4 (SepRmCapUpdateWrkr.c)
 * Callees:
 *     SepRmDestroyCapTable @ 0x140696798 (SepRmDestroyCapTable.c)
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
