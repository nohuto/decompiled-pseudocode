/*
 * XREFs of GetOldRedirectionBitmap @ 0x1C007FFF4
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     DeleteOldRedirectionBitmap @ 0x1C007FFA4 (DeleteOldRedirectionBitmap.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
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
