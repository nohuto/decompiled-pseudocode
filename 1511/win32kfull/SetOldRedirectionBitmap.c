/*
 * XREFs of SetOldRedirectionBitmap @ 0x1C0109ECC
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     DeleteOldRedirectionBitmap @ 0x1C007FFA4 (DeleteOldRedirectionBitmap.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 */

__int64 __fastcall SetOldRedirectionBitmap(__int64 a1)
{
  __int64 Prop; // rax
  unsigned int v2; // r8d
  unsigned int v3; // r10d
  __int64 v4; // r11

  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
  {
    *(_QWORD *)(Prop + 8) = v4;
    return v2;
  }
  return v3;
}
