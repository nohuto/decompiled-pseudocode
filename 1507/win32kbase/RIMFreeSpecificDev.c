/*
 * XREFs of RIMFreeSpecificDev @ 0x1C00760D0
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00719C0 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C0075344 (RIMRemoveDevOfInputType.c)
 *     RIMFreeDev @ 0x1C00759DC (RIMFreeDev.c)
 * Callees:
 *     rimDoRimDevChangeCallback @ 0x1C0076588 (rimDoRimDevChangeCallback.c)
 *     RIMFindAndRemoveHoldingFrame @ 0x1C0078018 (RIMFindAndRemoveHoldingFrame.c)
 */

__int64 __fastcall RIMFreeSpecificDev(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 *v6; // r8
  __int64 **v7; // rdx

  rimDoRimDevChangeCallback(a1, a2, 4LL);
  v4 = (__int64 *)(a2 + 120);
  if ( (__int64 *)*v4 != v4 )
  {
    v6 = (__int64 *)*v4;
    v7 = *(__int64 ***)(a2 + 128);
    if ( *(__int64 **)(*v4 + 8) != v4 || *v7 != v4 )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = (__int64)v7;
  }
  if ( *(_BYTE *)(a2 + 48) == 2 )
    RIMFindAndRemoveHoldingFrame(a1, a2);
  return rimDereferenceDev(a2);
}
