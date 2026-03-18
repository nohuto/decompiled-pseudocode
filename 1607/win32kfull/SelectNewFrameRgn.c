/*
 * XREFs of SelectNewFrameRgn @ 0x1C00DB974
 * Callers:
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     NtUserSetWindowRgnEx @ 0x1C021AB60 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SelectNewFrameRgn(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 208);
  if ( v4 )
  {
    result = GreDeleteObject(v4);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  if ( a2 )
  {
    result = GreSetRegionOwner(a2, 0LL);
    *(_QWORD *)(a1 + 208) = a2;
  }
  return result;
}
