/*
 * XREFs of ?IsRequestingPrimary@MPCInputProviderBase@@UEAA_NXZ @ 0x18004EC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCInputProviderBase::IsRequestingPrimary(MPCInputProviderBase *this)
{
  return *((_BYTE *)this + 32);
}
