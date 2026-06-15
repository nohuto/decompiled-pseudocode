/*
 * XREFs of ?AddRef@CAudioStream@@UEAAKXZ @ 0x180049000
 * Callers:
 *     ?AddRef@CWindowsPolicyManager@@WBA@EAAKXZ @ 0x180049010 (-AddRef@CWindowsPolicyManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CAudioStream@@W7EAAKXZ @ 0x180049410 (-AddRef@CAudioStream@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::AddRef(CAudioStream *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
