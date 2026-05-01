/*
 * XREFs of ?Release@ResourceManagerServerProxy@@UEAAKXZ @ 0x1800333F0
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Release(ResourceManagerServerProxy *this)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(ResourceManagerServerProxy *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  return v1;
}
