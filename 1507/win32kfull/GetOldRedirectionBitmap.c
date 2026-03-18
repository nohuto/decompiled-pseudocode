/*
 * XREFs of GetOldRedirectionBitmap @ 0x1C000BC64
 * Callers:
 *     DeleteOldRedirectionBitmap @ 0x1C000BC28 (DeleteOldRedirectionBitmap.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 */

__int64 __fastcall GetOldRedirectionBitmap(__int64 a1)
{
  __int64 Prop; // rax
  __int64 v2; // r10

  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
    return *(_QWORD *)(Prop + 8);
  return v2;
}
