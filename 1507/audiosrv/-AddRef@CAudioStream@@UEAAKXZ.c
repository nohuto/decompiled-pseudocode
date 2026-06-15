/*
 * XREFs of ?AddRef@CAudioStream@@UEAAKXZ @ 0x180044DE0
 * Callers:
 *     ?AddRef@CAudioStream@@W7EAAKXZ @ 0x1800451E0 (-AddRef@CAudioStream@@W7EAAKXZ.c)
 *     ?AddRef@CWindowsPolicyManager@@WBA@EAAKXZ @ 0x1800451F0 (-AddRef@CWindowsPolicyManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::AddRef(CAudioStream *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
