/*
 * XREFs of ?PromoteToPrimary@MPCInputProviderBase@@UEAAXXZ @ 0x18004EC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputProviderBase::PromoteToPrimary(MPCInputProviderBase *this)
{
  *((_BYTE *)this + 32) = 0;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 2) + 72LL))((char *)this - 16);
}
