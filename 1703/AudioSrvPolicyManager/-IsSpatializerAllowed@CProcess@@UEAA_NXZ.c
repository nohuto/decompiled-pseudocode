/*
 * XREFs of ?IsSpatializerAllowed@CProcess@@UEAA_NXZ @ 0x18000F640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CProcess::IsSpatializerAllowed(CProcess *this)
{
  return *((_DWORD *)this + 102) != 0;
}
