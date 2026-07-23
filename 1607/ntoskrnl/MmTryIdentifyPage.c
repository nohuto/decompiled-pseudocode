/*
 * XREFs of MmTryIdentifyPage @ 0x1401E53F4
 * Callers:
 *     IopLiveDumpFilterAndMarkPage @ 0x1403DAF74 (IopLiveDumpFilterAndMarkPage.c)
 * Callees:
 *     MiIdentifyPfn @ 0x14000F810 (MiIdentifyPfn.c)
 *     MiIsPageSecured @ 0x1401E4A18 (MiIsPageSecured.c)
 */

__int64 __fastcall MmTryIdentifyPage(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __m128i *v3; // rbx
  unsigned __int8 CurrentIrql; // si
  _QWORD *v5; // r9

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = 1;
  a2[2] = 0LL;
  v3 = (__m128i *)(48 * a1 - 0x58000000000LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( _interlockedbittestandset64(&v3[1].m128i_i32[2], 0x3FuLL) )
  {
    v2 = 0;
  }
  else
  {
    if ( (v3[2].m128i_i8[3] & 0x40) != 0 || MiIsPageSecured(48 * a1 - 0x58000000000LL) )
      v2 = 0;
    else
      MiIdentifyPfn(v3, v5);
    _InterlockedAnd64(&v3[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  }
  __writecr8(CurrentIrql);
  return v2;
}
