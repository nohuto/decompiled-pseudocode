/*
 * XREFs of ?AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ @ 0x18000D7C0
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180009870 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@U.c)
 *     ?AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAKXZ @ 0x1800098A0 (-AddRef@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::AddRef(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 6);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
