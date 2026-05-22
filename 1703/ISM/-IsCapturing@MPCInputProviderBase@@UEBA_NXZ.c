/*
 * XREFs of ?IsCapturing@MPCInputProviderBase@@UEBA_NXZ @ 0x18002CBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCInputProviderBase::IsCapturing(MPCInputProviderBase *this)
{
  return *((_QWORD *)this + 16) != 0LL;
}
