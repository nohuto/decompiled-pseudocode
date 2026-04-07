/*
 * XREFs of ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x18003E420
 * Callers:
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x18003E2E4 (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILRefCountBase::AddRef(CMILRefCountBase *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
