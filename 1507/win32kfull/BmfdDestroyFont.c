/*
 * XREFs of BmfdDestroyFont @ 0x1C0128890
 * Callers:
 *     <none>
 * Callees:
 *     BmfdCloseFontContext @ 0x1C01288B4 (BmfdCloseFontContext.c)
 */

__int64 __fastcall BmfdDestroyFont(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 56);
  if ( v2 )
  {
    result = BmfdCloseFontContext(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
